void __fastcall SetNoticeInfo___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBA88 & 1) == 0 )
  {
    sub_B5D5C4(&SetNoticeInfo_TypeInfo, v1, v2, v3);
    byte_42EBA88 = 1;
  }
  SetNoticeInfo_TypeInfo->static_fields->isApRecover = 1;
  SetNoticeInfo_TypeInfo->static_fields->isGameNotice = 1;
}


void __fastcall SetNoticeInfo___ctor(SetNoticeInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SetNoticeInfo__GetisApRecover(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  SetNoticeInfo_c *v4; // x0

  if ( (byte_42EBA85 & 1) == 0 )
  {
    sub_B5D5C4(&SetNoticeInfo_TypeInfo, v1, v2, v3);
    byte_42EBA85 = 1;
  }
  v4 = SetNoticeInfo_TypeInfo;
  if ( (BYTE3(SetNoticeInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetNoticeInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetNoticeInfo_TypeInfo);
    v4 = SetNoticeInfo_TypeInfo;
  }
  return v4->static_fields->isApRecover;
}


bool __fastcall SetNoticeInfo__GetisGameNotice(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  SetNoticeInfo_c *v4; // x0

  if ( (byte_42EBA87 & 1) == 0 )
  {
    sub_B5D5C4(&SetNoticeInfo_TypeInfo, v1, v2, v3);
    byte_42EBA87 = 1;
  }
  v4 = SetNoticeInfo_TypeInfo;
  if ( (BYTE3(SetNoticeInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetNoticeInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetNoticeInfo_TypeInfo);
    v4 = SetNoticeInfo_TypeInfo;
  }
  return v4->static_fields->isGameNotice;
}


void __fastcall SetNoticeInfo__SetisApRecover(bool isNotice, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SetNoticeInfo_c *v5; // x0

  if ( (byte_42EBA84 & 1) == 0 )
  {
    sub_B5D5C4(&SetNoticeInfo_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBA84 = 1;
  }
  v5 = SetNoticeInfo_TypeInfo;
  if ( (BYTE3(SetNoticeInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetNoticeInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetNoticeInfo_TypeInfo);
    v5 = SetNoticeInfo_TypeInfo;
  }
  v5->static_fields->isApRecover = isNotice;
}


void __fastcall SetNoticeInfo__SetisGameNotice(bool isNotice, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SetNoticeInfo_c *v5; // x0

  if ( (byte_42EBA86 & 1) == 0 )
  {
    sub_B5D5C4(&SetNoticeInfo_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBA86 = 1;
  }
  v5 = SetNoticeInfo_TypeInfo;
  if ( (BYTE3(SetNoticeInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetNoticeInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetNoticeInfo_TypeInfo);
    v5 = SetNoticeInfo_TypeInfo;
  }
  v5->static_fields->isGameNotice = isNotice;
}