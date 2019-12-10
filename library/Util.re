open Lwt.Infix;

module Store = Irmin_unix.Git.FS.KV(Irmin.Contents.String);

let config = Irmin_git.config("irmin", ~bare=false);
let info = Irmin_unix.info

let test_irmin_git_repo = {
  Store.Repo.v(config) >>= Store.master >>= repo => {
    let k = "hello" and v = "test";
    Store.set(repo, ~info=info("Setting %s to %s", k, v), [k], v) >>= _set =>
      Store.get(repo, [k]) >|= get => print_endline(get);
  }
};

let foo = () => Lwt_main.run(test_irmin_git_repo);
