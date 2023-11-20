void __fastcall SkillIndividualityMaster___ctor(SkillIndividualityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F923D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int___ctor__, method);
    byte_40F923D = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    442,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int___ctor__);
}


System_Int32_array *__fastcall SkillIndividualityMaster__GetIndividuality(int32_t skillId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct System_String_o **p_age; // x8
  _QWORD **v8; // x20
  __int64 v9; // x19
  __int16 v10; // w8
  __int64 v11; // x19
  __int64 v12; // x19
  __int64 v13; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F923C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_int___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillIndividualityMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int__TryGetEntity__, v5);
    byte_40F923C = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillIndividualityMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         skillId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int__TryGetEntity__) )
  {
    if ( entity )
    {
      p_age = &entity->fields.age;
      return (System_Int32_array *)*p_age;
    }
LABEL_23:
    sub_B170D4();
  }
  v8 = (_QWORD **)Method_System_Array_Empty_int___;
  v9 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v10 = *(_WORD *)(v9 + 306);
  if ( (v10 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v10 = *(_WORD *)(v9 + 306);
  }
  if ( (v10 & 0x400) != 0 )
  {
    v11 = *v8[6];
    if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
      sub_AAFCFC(*v8[6]);
    if ( !*(_DWORD *)(v11 + 224) )
    {
      v12 = *v8[6];
      if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
        sub_AAFCFC(*v8[6]);
      j_il2cpp_runtime_class_init_0(v12);
    }
  }
  v13 = *v8[6];
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AAFCFC(*v8[6]);
  p_age = *(struct System_String_o ***)(v13 + 184);
  return (System_Int32_array *)*p_age;
}