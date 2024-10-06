void __fastcall SkillIndividualityMaster___ctor(SkillIndividualityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A708A8 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int___ctor__, method);
    byte_4A708A8 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    444,
    (const MethodInfo_312C568 *)Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int___ctor__);
}


System_Int32_array *__fastcall SkillIndividualityMaster__GetIndividuality(int32_t skillId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  System_Int32_array **p_monitor; // x8
  _QWORD *v9; // x19
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A708A7 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Array_Empty_int___, method);
    sub_1B90010(&Method_DataManager_GetMaster_SkillIndividualityMaster___, v3);
    sub_1B90010(&DataManager_TypeInfo, v4);
    sub_1B90010(&Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int__TryGetEntity__, v5);
    byte_4A708A7 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_SkillIndividualityMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    skillId,
                                    (const MethodInfo_312C5FC *)Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
    {
      p_monitor = (System_Int32_array **)&entity[1].monitor;
      return *p_monitor;
    }
LABEL_19:
    sub_1B9026C(Master_object, v7);
  }
  v9 = Method_System_Array_Empty_int___;
  v10 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v10 )
  {
    sub_1BE1F48(Method_System_Array_Empty_int___);
    v10 = v9[7];
  }
  v11 = *(_QWORD *)(v10 + 16);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BE1EEC(v11);
  if ( !*(_DWORD *)(v11 + 224) )
    j_il2cpp_runtime_class_init_0(v11);
  v12 = *(_QWORD *)(v9[7] + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BE1EEC(v12);
  p_monitor = *(System_Int32_array ***)(v12 + 184);
  return *p_monitor;
}