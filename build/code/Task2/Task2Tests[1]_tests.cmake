add_test([=[task2.acdc]=]  [==[/home/lovkiy/Документы/453501/ОАиП/LR4/build/code/Task2/Task2Tests]==] [==[--gtest_filter=task2.acdc]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[task2.acdc]=]  PROPERTIES WORKING_DIRECTORY [==[/home/lovkiy/Документы/453501/ОАиП/LR4/build/code/Task2]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  Task2Tests_TESTS task2.acdc)
