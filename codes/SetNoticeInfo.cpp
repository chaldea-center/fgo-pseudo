void __fastcall SetNoticeInfo___cctor(const MethodInfo *method)
{
  if ( (byte_43541C6 & 1) == 0 )
  {
    sub_B70694(&SetNoticeInfo_TypeInfo);
    byte_43541C6 = 1;
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
  SetNoticeInfo_c *v1; // x0

  if ( (byte_43541C3 & 1) == 0 )
  {
    sub_B70694(&SetNoticeInfo_TypeInfo);
    byte_43541C3 = 1;
  }
  v1 = SetNoticeInfo_TypeInfo;
  if ( (BYTE3(SetNoticeInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetNoticeInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetNoticeInfo_TypeInfo);
    v1 = SetNoticeInfo_TypeInfo;
  }
  return v1->static_fields->isApRecover;
}


bool __fastcall SetNoticeInfo__GetisGameNotice(const MethodInfo *method)
{
  SetNoticeInfo_c *v1; // x0

  if ( (byte_43541C5 & 1) == 0 )
  {
    sub_B70694(&SetNoticeInfo_TypeInfo);
    byte_43541C5 = 1;
  }
  v1 = SetNoticeInfo_TypeInfo;
  if ( (BYTE3(SetNoticeInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetNoticeInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetNoticeInfo_TypeInfo);
    v1 = SetNoticeInfo_TypeInfo;
  }
  return v1->static_fields->isGameNotice;
}


void __fastcall SetNoticeInfo__SetisApRecover(bool isNotice, const MethodInfo *method)
{
  SetNoticeInfo_c *v3; // x0

  if ( (byte_43541C2 & 1) == 0 )
  {
    sub_B70694(&SetNoticeInfo_TypeInfo);
    byte_43541C2 = 1;
  }
  v3 = SetNoticeInfo_TypeInfo;
  if ( (BYTE3(SetNoticeInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetNoticeInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetNoticeInfo_TypeInfo);
    v3 = SetNoticeInfo_TypeInfo;
  }
  v3->static_fields->isApRecover = isNotice;
}


void __fastcall SetNoticeInfo__SetisGameNotice(bool isNotice, const MethodInfo *method)
{
  SetNoticeInfo_c *v3; // x0

  if ( (byte_43541C4 & 1) == 0 )
  {
    sub_B70694(&SetNoticeInfo_TypeInfo);
    byte_43541C4 = 1;
  }
  v3 = SetNoticeInfo_TypeInfo;
  if ( (BYTE3(SetNoticeInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetNoticeInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetNoticeInfo_TypeInfo);
    v3 = SetNoticeInfo_TypeInfo;
  }
  v3->static_fields->isGameNotice = isNotice;
}