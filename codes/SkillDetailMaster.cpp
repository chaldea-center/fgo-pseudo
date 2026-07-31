void SkillDetailMaster___ctor(SkillDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939276 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int___ctor__);
    byte_5939276 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    58,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int___ctor__);
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

  if ( (byte_5939277 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5939277 = 1;
  }
  entity = 0;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__) )
  {
    if ( isShort )
    {
      if ( entity )
        return SkillDetailEntity__getDetailShort((SkillDetailEntity_o *)entity, v7);
LABEL_17:
      sub_21FFECC(entity, v7);
    }
    if ( !entity )
      goto LABEL_17;
    return SkillDetailEntity__getDetail((SkillDetailEntity_o *)entity, v7);
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
    if ( !byte_593385D )
    {
      sub_21FFC50(&LocalizationManager_TypeInfo);
      byte_593385D = 1;
    }
    v9 = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
      v9 = LocalizationManager_TypeInfo;
    }
    return v9->static_fields->unknownNameText;
  }
}