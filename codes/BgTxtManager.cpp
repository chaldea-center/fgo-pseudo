void __fastcall BgTxtManager___ctor(BgTxtManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgTxtManager__IsActiveBgTxt(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418757A & 1) == 0 )
  {
    sub_B2C35C(&ServantCommentManager_TypeInfo, v1);
    byte_418757A = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  return ServantCommentManager__GetUiFlag(0LL) != 1;
}