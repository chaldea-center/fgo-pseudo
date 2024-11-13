void __fastcall SkillDetailMaster___ctor(SkillDetailMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16C19 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int___ctor__, method, v2);
    byte_4B16C19 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    54,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillDetailMaster__getDetail(
        SkillDetailMaster_o *this,
        int32_t id,
        bool isShort,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x1
  __int64 v10; // x2
  LocalizationManager_c *v12; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B16C1A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__,
      *(_QWORD *)&id,
      isShort);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    byte_4B16C1A = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1BCAA3C(0LL, v9);
    if ( isShort )
      return SkillDetailEntity__getDetailShort((SkillDetailEntity_o *)entity, v9);
    else
      return SkillDetailEntity__getDetail((SkillDetailEntity_o *)entity, v9);
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
    if ( !byte_4B1194D )
    {
      sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
      byte_4B1194D = 1;
    }
    v12 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
      v12 = LocalizationManager_TypeInfo;
    }
    return v12->static_fields->unknownNameText;
  }
}