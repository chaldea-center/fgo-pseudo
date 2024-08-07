void __fastcall SkillDetailMaster___ctor(SkillDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF430 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int___ctor__, method);
    byte_49FF430 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    54,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int___ctor__);
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
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FF431 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__, *(_QWORD *)&id);
    sub_1B64A00(&LocalizationManager_TypeInfo, v7);
    byte_49FF431 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_30D67EC *)Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1B64C5C(0LL, v8);
    if ( isShort )
      return SkillDetailEntity__getDetailShort((SkillDetailEntity_o *)entity, v8);
    else
      return SkillDetailEntity__getDetail((SkillDetailEntity_o *)entity, v8);
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_49FA47A )
    {
      sub_1B64A00(&LocalizationManager_TypeInfo, v8);
      byte_49FA47A = 1;
    }
    v10 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = LocalizationManager_TypeInfo;
    }
    return v10->static_fields->unknownNameText;
  }
}