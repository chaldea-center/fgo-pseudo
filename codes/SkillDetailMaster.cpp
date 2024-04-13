void __fastcall SkillDetailMaster___ctor(SkillDetailMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E97AF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42E97AF = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    53,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int___ctor__);
}


System_String_o *__fastcall SkillDetailMaster__getDetail(
        SkillDetailMaster_o *this,
        int32_t id,
        bool isShort,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  const MethodInfo *v10; // x1
  char v11; // w2
  __int64 v12; // x3
  LocalizationManager_c *v14; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E97B0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__, id, isShort, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    byte_42E97B0 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         id,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_B5D69C(0LL, v10);
    if ( isShort )
      return SkillDetailEntity__getDetailShort((SkillDetailEntity_o *)entity, v10);
    else
      return SkillDetailEntity__getDetail((SkillDetailEntity_o *)entity, v10);
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_42E6772 )
    {
      sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)v10, v11, v12);
      byte_42E6772 = 1;
    }
    v14 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = LocalizationManager_TypeInfo;
    }
    return v14->static_fields->unknownNameText;
  }
}