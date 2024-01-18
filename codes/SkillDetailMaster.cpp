void __fastcall SkillDetailMaster___ctor(SkillDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186D67 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int___ctor__, method);
    byte_4186D67 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    52,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillDetailMaster__getDetail(
        SkillDetailMaster_o *this,
        int32_t id,
        bool isShort,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  LocalizationManager_c *v10; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4186D68 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__, *(_QWORD *)&id);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    byte_4186D68 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         id,
         (const MethodInfo_24E412C *)Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_B2C434(0LL, v8);
    if ( isShort )
      return SkillDetailEntity__getDetailShort((SkillDetailEntity_o *)entity, v8);
    else
      return SkillDetailEntity__getDetail((SkillDetailEntity_o *)entity, v8);
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_4185BC0 )
    {
      sub_B2C35C(&LocalizationManager_TypeInfo, v8);
      byte_4185BC0 = 1;
    }
    v10 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = LocalizationManager_TypeInfo;
    }
    return v10->static_fields->unknownNameText;
  }
}