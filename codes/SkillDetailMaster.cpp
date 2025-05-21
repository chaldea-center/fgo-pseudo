void __fastcall SkillDetailMaster___ctor(SkillDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B45587 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int___ctor__, method);
    byte_4B45587 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    58,
    (const MethodInfo_32DFB18 *)Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int___ctor__);
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

  if ( (byte_4B45588 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__, *(_QWORD *)&id);
    sub_1BDB878(&LocalizationManager_TypeInfo, v7);
    byte_4B45588 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_32E1E88 *)Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1BDBAD4(0LL, v8);
    if ( isShort )
      return SkillDetailEntity__getDetailShort((SkillDetailEntity_o *)entity, v8);
    else
      return SkillDetailEntity__getDetail((SkillDetailEntity_o *)entity, v8);
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4B3FEFD )
    {
      sub_1BDB878(&LocalizationManager_TypeInfo, v8);
      byte_4B3FEFD = 1;
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