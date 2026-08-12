void BgTxtManager___ctor(BgTxtManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgTxtManager__IsActiveBgTxt(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_596FB41 & 1) == 0 )
  {
    sub_2213A60(&ServantCommentManager_TypeInfo);
    byte_596FB41 = 1;
  }
  if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1, v2);
  return ServantCommentManager__GetUiFlag(0) != 1;
}