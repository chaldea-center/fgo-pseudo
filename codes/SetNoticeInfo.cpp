void __fastcall SetNoticeInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1743A & 1) == 0 )
  {
    sub_1BCA7E0(&SetNoticeInfo_TypeInfo, v1, v2);
    byte_4B1743A = 1;
  }
  *SetNoticeInfo_TypeInfo->static_fields = (struct SetNoticeInfo_StaticFields)257;
}


void __fastcall SetNoticeInfo___ctor(SetNoticeInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SetNoticeInfo__GetisApRecover(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  SetNoticeInfo_c *v3; // x0

  if ( (byte_4B17437 & 1) == 0 )
  {
    sub_1BCA7E0(&SetNoticeInfo_TypeInfo, v1, v2);
    byte_4B17437 = 1;
  }
  v3 = SetNoticeInfo_TypeInfo;
  if ( !SetNoticeInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetNoticeInfo_TypeInfo, v1);
    v3 = SetNoticeInfo_TypeInfo;
  }
  return v3->static_fields->isApRecover;
}


bool __fastcall SetNoticeInfo__GetisGameNotice(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  SetNoticeInfo_c *v3; // x0

  if ( (byte_4B17439 & 1) == 0 )
  {
    sub_1BCA7E0(&SetNoticeInfo_TypeInfo, v1, v2);
    byte_4B17439 = 1;
  }
  v3 = SetNoticeInfo_TypeInfo;
  if ( !SetNoticeInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetNoticeInfo_TypeInfo, v1);
    v3 = SetNoticeInfo_TypeInfo;
  }
  return v3->static_fields->isGameNotice;
}


void __fastcall SetNoticeInfo__SetisApRecover(bool isNotice, const MethodInfo *method)
{
  __int64 v2; // x2
  SetNoticeInfo_c *v4; // x0

  if ( (byte_4B17436 & 1) == 0 )
  {
    sub_1BCA7E0(&SetNoticeInfo_TypeInfo, method, v2);
    byte_4B17436 = 1;
  }
  v4 = SetNoticeInfo_TypeInfo;
  if ( !SetNoticeInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetNoticeInfo_TypeInfo, method);
    v4 = SetNoticeInfo_TypeInfo;
  }
  v4->static_fields->isApRecover = isNotice;
}


void __fastcall SetNoticeInfo__SetisGameNotice(bool isNotice, const MethodInfo *method)
{
  __int64 v2; // x2
  SetNoticeInfo_c *v4; // x0

  if ( (byte_4B17438 & 1) == 0 )
  {
    sub_1BCA7E0(&SetNoticeInfo_TypeInfo, method, v2);
    byte_4B17438 = 1;
  }
  v4 = SetNoticeInfo_TypeInfo;
  if ( !SetNoticeInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetNoticeInfo_TypeInfo, method);
    v4 = SetNoticeInfo_TypeInfo;
  }
  v4->static_fields->isGameNotice = isNotice;
}