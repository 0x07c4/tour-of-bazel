# Tour of Bazel

Welcome to **Tour of Bazel** — a self-contained project that *builds itself*.

This repository demonstrates how Bazel works by using Bazel to build its own documentation.

You can run:

```bash
bazel build //:site
```
This uses a genrule to invoke a small Python script that converts all Markdown files into a single HTML page.
## Repository Overview
```bash
.
├── app/        # Main executable using hello_lib
├── lib/        # A small C++ library
├── tests/      # Unit tests for the library
├── docs/       # Markdown documentation (this folder)
└── tools/      # Build-time helper scripts
```
Each component is built with Bazel targets, defined in BUILD files.
## Next Steps
Now that you can build this documentation, let’s explore how Bazel organizes targets and rules in the next chapter.

---
