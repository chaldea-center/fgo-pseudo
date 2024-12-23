void __fastcall SkillDetailMaster___ctor(SkillDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67609 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int___ctor__, method);
    byte_4B67609 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    58,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int___ctor__);
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

  if ( (byte_4B6760A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__, *(_QWORD *)&id);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v7);
    byte_4B6760A = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_31FD818 *)Method_DataMasterBase_SkillDetailMaster__SkillDetailEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1BE4D28(0LL, v8);
    if ( isShort )
      return SkillDetailEntity__getDetailShort((SkillDetailEntity_o *)entity, v8);
    else
      return SkillDetailEntity__getDetail((SkillDetailEntity_o *)entity, v8);
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4B622AA )
    {
      sub_1BE4ACC(&LocalizationManager_TypeInfo, v8);
      byte_4B622AA = 1;
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