void __fastcall SkillDetailMaster___ctor(SkillDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BB68 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int___ctor__);
    byte_4A5BB68 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    54,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int___ctor__);
}


System_String_o *__fastcall SkillDetailMaster__getDetail(
        SkillDetailMaster_o *this,
        int32_t id,
        bool isShort,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  LocalizationManager_c *v9; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5BB69 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    byte_4A5BB69 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_311D988 *)Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1B8880C(0LL, v7);
    if ( isShort )
      return SkillDetailEntity__getDetailShort((SkillDetailEntity_o *)entity, v7);
    else
      return SkillDetailEntity__getDetail((SkillDetailEntity_o *)entity, v7);
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4A56A2D )
    {
      sub_1B885B0(&LocalizationManager_TypeInfo);
      byte_4A56A2D = 1;
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