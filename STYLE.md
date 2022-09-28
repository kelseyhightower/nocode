# No Code Style Guide

All no code programs are the same, regardless of use case, any code you write is a liability.

## File Extensions

No code is not stored in files, but if you must, use the `.no` file extension.

```
main.no
```

## Linters

There is only one way to write no code and the `du` command can help you identify any issues. 

```
du -h main.no
```

```
0       main.no
```

> The only valid code is no code.

A file may appear to be empty of code. Beware of [Whitespace](https://en.wikipedia.org/wiki/Whitespace_(programming_language)) or [non-character unicode characters](https://unicode.org/charts/PDF/UFB50.pdf) such as  used [in Ruby](https://unicode.org/charts/PDF/UFFF0.pdf), but not displayed in all typefaces.

> No code means nothing, no bytes, and no comments to be misunderstood.


## Code Reviews

The no code community has adopted the following conventions when reviewing code changes:

When the change contains no code additions or modifications:

```
LGTM # Looks Good To Me
```

When the change includes code additions or modifications:

```
CIAL # Code Is A Liability
```

> Change requests that fall into this category should be rejected immediately.