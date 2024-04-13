void __fastcall SkillIndividualityMaster___ctor(SkillIndividualityMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E97F2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E97F2 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    443,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int___ctor__);
}


System_Int32_array *__fastcall SkillIndividualityMaster__GetIndividuality(int32_t skillId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v15; // x1
  struct System_String_o **p_age; // x8
  _QWORD **v17; // x20
  __int64 v18; // x19
  __int16 v19; // w8
  __int64 v20; // x19
  __int64 v21; // x19
  __int64 v22; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E97F1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillIndividualityMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(
      &Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int__TryGetEntity__,
      v11,
      v12,
      v13);
    byte_42E97F1 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillIndividualityMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  skillId,
                                                                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( entity )
    {
      p_age = &entity->fields.age;
      return (System_Int32_array *)*p_age;
    }
LABEL_23:
    sub_B5D69C(Master_WarQuestSelectionMaster, v15);
  }
  v17 = (_QWORD **)Method_System_Array_Empty_int___;
  v18 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v19 = *(_WORD *)(v18 + 306);
  if ( (v19 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v19 = *(_WORD *)(v18 + 306);
  }
  if ( (v19 & 0x400) != 0 )
  {
    v20 = *v17[6];
    if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
      sub_AF52C4(*v17[6]);
    if ( !*(_DWORD *)(v20 + 224) )
    {
      v21 = *v17[6];
      if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
        sub_AF52C4(*v17[6]);
      j_il2cpp_runtime_class_init_0(v21);
    }
  }
  v22 = *v17[6];
  if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
    sub_AF52C4(*v17[6]);
  p_age = *(struct System_String_o ***)(v22 + 184);
  return (System_Int32_array *)*p_age;
}