void __fastcall BgTxtManager___ctor(BgTxtManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgTxtManager__IsActiveBgTxt(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7E01 & 1) == 0 )
  {
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v1, v2, v3);
    byte_42E7E01 = 1;
  }
  if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCommentManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  }
  return ServantCommentManager__GetUiFlag(0LL) != 1;
}