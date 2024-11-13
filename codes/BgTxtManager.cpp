void __fastcall BgTxtManager___ctor(BgTxtManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgTxtManager__IsActiveBgTxt(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B15621 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v1, v2);
    byte_4B15621 = 1;
  }
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v1);
  return ServantCommentManager__GetUiFlag(0LL) != 1;
}