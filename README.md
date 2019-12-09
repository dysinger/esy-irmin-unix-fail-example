# hello


[![CircleCI](https://circleci.com/gh/yourgithubhandle/hello/tree/master.svg?style=svg)](https://circleci.com/gh/yourgithubhandle/hello/tree/master)


**Contains the following libraries and executables:**

```
hello@0.0.0
│
├─test/
│   name:    TestHello.exe
│   main:    TestHello
│   require: hello.lib
│
├─library/
│   library name: hello.lib
│   namespace:    Hello
│   require:
│
└─executable/
    name:    HelloApp.exe
    main:    HelloApp
    require: hello.lib
```

## Developing:

```
npm install -g esy
git clone <this-repo>
esy install
esy build
```

## Running Binary:

After building the project, you can run the main binary that is produced.

```
esy x HelloApp.exe 
```

## Running Tests:

```
# Runs the "test" command in `package.json`.
esy test
```
