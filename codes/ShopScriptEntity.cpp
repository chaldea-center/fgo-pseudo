void ShopScriptEntity___ctor(ShopScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31545 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_int___ctor__);
    byte_4D31545 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3460B3C *)Method_DataEntityBase_int___ctor__);
}


int32_t ShopScriptEntity__CreatePrimaryKey(ShopScriptEntity_o *this, const MethodInfo *method)
{
  return this->fields.shopId;
}


int32_t ShopScriptEntity__GetFrequencyType(ShopScriptEntity_o *this, const MethodInfo *method)
{
  return this->fields.frequencyType;
}


bool ShopScriptEntity__IsOpen(ShopScriptEntity_o *this, const MethodInfo *method)
{
  int32_t commonReleaseId; // w19

  if ( (byte_4D31544 & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    byte_4D31544 = 1;
  }
  commonReleaseId = this->fields.commonReleaseId;
  if ( !commonReleaseId )
    return 1;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsCommonRelease(commonReleaseId, 0, 0);
}