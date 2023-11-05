# Overview

Parse C header files from  exchange leveraging Python pycparser library, dynamically generating corresponding logging functions for our trading system. For each struct within the header files, automated logging functions were created, eliminating the need to manually write thousands of handlers. This approach significantly improved maintainability and reduced error rates. 

## Requirement

```
pip install pycparser
```

## How to use

```
python main.py
```

Then you will get the logging functions in generated_code.cpp and header file generated_code.h