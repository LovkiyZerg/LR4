add_test([=[task1.simple_swap]=]  [==[/home/lovkiy/Документы/453501/ОАиП/LR4/build/code/Task1/Task1Tests]==] [==[--gtest_filter=task1.simple_swap]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[task1.simple_swap]=]  PROPERTIES WORKING_DIRECTORY [==[/home/lovkiy/Документы/453501/ОАиП/LR4/build/code/Task1]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  Task1Tests_TESTS task1.simple_swap)
