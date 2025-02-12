void __fastcall BgTxtManager___ctor(BgTxtManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgTxtManager__IsActiveBgTxt(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BB3AF7 & 1) == 0 )
  {
    sub_1C13D24(&ServantCommentManager_TypeInfo, v1);
    byte_4BB3AF7 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  return ServantCommentManager__GetUiFlag(0LL) != 1;
}