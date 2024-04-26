void __fastcall SkillIndividualityMaster___ctor(SkillIndividualityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_435291C & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int___ctor__);
    byte_435291C = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    443,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int___ctor__);
}


System_Int32_array *__fastcall SkillIndividualityMaster__GetIndividuality(int32_t skillId, const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  struct System_String_o **p_age; // x8
  _QWORD **v6; // x20
  __int64 v7; // x19
  __int16 v8; // w8
  __int64 v9; // x19
  __int64 v10; // x19
  __int64 v11; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_435291B & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Empty_int___);
    sub_B70694(&Method_DataManager_GetMaster_SkillIndividualityMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int__TryGetEntity__);
    byte_435291B = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_SkillIndividualityMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  skillId,
                                                                  (const MethodInfo_21C049C *)Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( entity )
    {
      p_age = &entity->fields.age;
      return (System_Int32_array *)*p_age;
    }
LABEL_23:
    sub_B7076C(Master_WarQuestSelectionMaster, v4);
  }
  v6 = (_QWORD **)Method_System_Array_Empty_int___;
  v7 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v8 = *(_WORD *)(v7 + 306);
  if ( (v8 & 1) == 0 )
  {
    sub_B08394(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v8 = *(_WORD *)(v7 + 306);
  }
  if ( (v8 & 0x400) != 0 )
  {
    v9 = *v6[6];
    if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
      sub_B08394(*v6[6]);
    if ( !*(_DWORD *)(v9 + 224) )
    {
      v10 = *v6[6];
      if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
        sub_B08394(*v6[6]);
      j_il2cpp_runtime_class_init_0(v10);
    }
  }
  v11 = *v6[6];
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_B08394(*v6[6]);
  p_age = *(struct System_String_o ***)(v11 + 184);
  return (System_Int32_array *)*p_age;
}