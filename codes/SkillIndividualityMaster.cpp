void __fastcall SkillIndividualityMaster___ctor(SkillIndividualityMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16C4D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int___ctor__, method, v2);
    byte_4B16C4D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    444,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int___ctor__);
}


System_Int32_array *__fastcall SkillIndividualityMaster__GetIndividuality(int32_t skillId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  long double inited; // q0
  System_Int32_array **p_monitor; // x8
  _QWORD *v14; // x19
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16C4C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillIndividualityMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int__TryGetEntity__, v8, v9);
    byte_4B16C4C = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillIndividualityMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    skillId,
                                    (const MethodInfo_31B2E94 *)Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
    {
      p_monitor = (System_Int32_array **)&entity[1].monitor;
      return *p_monitor;
    }
LABEL_19:
    sub_1BCAA3C(Master_object, v11);
  }
  v14 = Method_System_Array_Empty_int___;
  v15 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v15 )
  {
    sub_1C1C718(Method_System_Array_Empty_int___, v11);
    v15 = v14[7];
  }
  v16 = *(_QWORD *)(v15 + 16);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v16 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v16, v11);
  v17 = *(_QWORD *)(v14[7] + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C1C6BC(inited);
  p_monitor = *(System_Int32_array ***)(v17 + 184);
  return *p_monitor;
}