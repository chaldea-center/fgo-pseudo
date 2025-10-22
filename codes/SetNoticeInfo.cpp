void SetNoticeInfo___cctor(const MethodInfo *method)
{
  if ( (byte_4C581BB & 1) == 0 )
  {
    sub_1C3E564(&SetNoticeInfo_TypeInfo);
    byte_4C581BB = 1;
  }
  *SetNoticeInfo_TypeInfo->static_fields = (struct SetNoticeInfo_StaticFields)257;
}


void SetNoticeInfo___ctor(SetNoticeInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SetNoticeInfo__GetisApRecover(const MethodInfo *method)
{
  SetNoticeInfo_c *v1; // x0

  if ( (byte_4C581B8 & 1) == 0 )
  {
    sub_1C3E564(&SetNoticeInfo_TypeInfo);
    byte_4C581B8 = 1;
  }
  v1 = SetNoticeInfo_TypeInfo;
  if ( !SetNoticeInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetNoticeInfo_TypeInfo);
    v1 = SetNoticeInfo_TypeInfo;
  }
  return v1->static_fields->isApRecover;
}


bool SetNoticeInfo__GetisGameNotice(const MethodInfo *method)
{
  SetNoticeInfo_c *v1; // x0

  if ( (byte_4C581BA & 1) == 0 )
  {
    sub_1C3E564(&SetNoticeInfo_TypeInfo);
    byte_4C581BA = 1;
  }
  v1 = SetNoticeInfo_TypeInfo;
  if ( !SetNoticeInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetNoticeInfo_TypeInfo);
    v1 = SetNoticeInfo_TypeInfo;
  }
  return v1->static_fields->isGameNotice;
}


void SetNoticeInfo__SetisApRecover(bool isNotice, const MethodInfo *method)
{
  SetNoticeInfo_c *v3; // x0

  if ( (byte_4C581B7 & 1) == 0 )
  {
    sub_1C3E564(&SetNoticeInfo_TypeInfo);
    byte_4C581B7 = 1;
  }
  v3 = SetNoticeInfo_TypeInfo;
  if ( !SetNoticeInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetNoticeInfo_TypeInfo);
    v3 = SetNoticeInfo_TypeInfo;
  }
  v3->static_fields->isApRecover = isNotice;
}


void SetNoticeInfo__SetisGameNotice(bool isNotice, const MethodInfo *method)
{
  SetNoticeInfo_c *v3; // x0

  if ( (byte_4C581B9 & 1) == 0 )
  {
    sub_1C3E564(&SetNoticeInfo_TypeInfo);
    byte_4C581B9 = 1;
  }
  v3 = SetNoticeInfo_TypeInfo;
  if ( !SetNoticeInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetNoticeInfo_TypeInfo);
    v3 = SetNoticeInfo_TypeInfo;
  }
  v3->static_fields->isGameNotice = isNotice;
}