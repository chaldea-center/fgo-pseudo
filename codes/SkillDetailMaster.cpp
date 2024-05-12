void __fastcall SkillDetailMaster___ctor(SkillDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438C055 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int___ctor__);
    byte_438C055 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    53,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int___ctor__);
}


System_String_o *__fastcall SkillDetailMaster__getDetail(
        SkillDetailMaster_o *this,
        int32_t id,
        bool isShort,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  LocalizationManager_c *v9; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438C056 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    byte_438C056 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         id,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_B7769C(0LL, v7);
    if ( isShort )
      return SkillDetailEntity__getDetailShort((SkillDetailEntity_o *)entity, v7);
    else
      return SkillDetailEntity__getDetail((SkillDetailEntity_o *)entity, v7);
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_4388DC6 )
    {
      sub_B775C4(&LocalizationManager_TypeInfo);
      byte_4388DC6 = 1;
    }
    v9 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = LocalizationManager_TypeInfo;
    }
    return v9->static_fields->unknownNameText;
  }
}