if(EXISTS "/home/lovkiy/Документы/453501/ОАиП/LR4/build/code/LabWork4_PartC/Task6/Task6Tests[1]_tests.cmake")
  include("/home/lovkiy/Документы/453501/ОАиП/LR4/build/code/LabWork4_PartC/Task6/Task6Tests[1]_tests.cmake")
else()
  add_test(Task6Tests_NOT_BUILT Task6Tests_NOT_BUILT)
endif()