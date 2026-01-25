void SkillDetailMaster___ctor(SkillDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF1D9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int___ctor__);
    byte_4CEF1D9 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    58,
    (const MethodInfo_342BFD8 *)Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int___ctor__);
}


System_String_o *SkillDetailMaster__getDetail(
        SkillDetailMaster_o *this,
        int32_t id,
        bool isShort,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  LocalizationManager_c *v9; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CEF1DA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    byte_4CEF1DA = 1;
  }
  entity = 0;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_342E348 *)Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1C7BD40(0, v7);
    if ( isShort )
      return SkillDetailEntity__getDetailShort((SkillDetailEntity_o *)entity, v7);
    else
      return SkillDetailEntity__getDetail((SkillDetailEntity_o *)entity, v7);
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4CE9782 )
    {
      sub_1C7BAE8(&LocalizationManager_TypeInfo);
      byte_4CE9782 = 1;
    }
    v9 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = LocalizationManager_TypeInfo;
    }
    return v9->static_fields->unknownNameText;
  }
}