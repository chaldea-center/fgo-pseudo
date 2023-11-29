void __fastcall SetNoticeInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FC3D8 & 1) == 0 )
  {
    sub_B16FFC(&SetNoticeInfo_TypeInfo, v1);
    byte_40FC3D8 = 1;
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
  __int64 v1; // x1
  SetNoticeInfo_c *v2; // x0

  if ( (byte_40FC3D5 & 1) == 0 )
  {
    sub_B16FFC(&SetNoticeInfo_TypeInfo, v1);
    byte_40FC3D5 = 1;
  }
  v2 = SetNoticeInfo_TypeInfo;
  if ( (BYTE3(SetNoticeInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetNoticeInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetNoticeInfo_TypeInfo);
    v2 = SetNoticeInfo_TypeInfo;
  }
  return v2->static_fields->isApRecover;
}


bool __fastcall SetNoticeInfo__GetisGameNotice(const MethodInfo *method)
{
  __int64 v1; // x1
  SetNoticeInfo_c *v2; // x0

  if ( (byte_40FC3D7 & 1) == 0 )
  {
    sub_B16FFC(&SetNoticeInfo_TypeInfo, v1);
    byte_40FC3D7 = 1;
  }
  v2 = SetNoticeInfo_TypeInfo;
  if ( (BYTE3(SetNoticeInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetNoticeInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetNoticeInfo_TypeInfo);
    v2 = SetNoticeInfo_TypeInfo;
  }
  return v2->static_fields->isGameNotice;
}


void __fastcall SetNoticeInfo__SetisApRecover(bool isNotice, const MethodInfo *method)
{
  SetNoticeInfo_c *v3; // x0

  if ( (byte_40FC3D4 & 1) == 0 )
  {
    sub_B16FFC(&SetNoticeInfo_TypeInfo, method);
    byte_40FC3D4 = 1;
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

  if ( (byte_40FC3D6 & 1) == 0 )
  {
    sub_B16FFC(&SetNoticeInfo_TypeInfo, method);
    byte_40FC3D6 = 1;
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