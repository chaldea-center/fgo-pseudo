void BgTxtManager___ctor(BgTxtManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgTxtManager__IsActiveBgTxt(const MethodInfo *method)
{
  if ( (byte_4CC676B & 1) == 0 )
  {
    sub_1C713B0(&ServantCommentManager_TypeInfo);
    byte_4CC676B = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  return ServantCommentManager__GetUiFlag(0) != 1;
}