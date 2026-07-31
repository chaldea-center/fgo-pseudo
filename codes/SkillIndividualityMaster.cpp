void SkillIndividualityMaster___ctor(SkillIndividualityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59392B8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int___ctor__);
    byte_59392B8 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    452,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int___ctor__);
}


System_Int32_array *SkillIndividualityMaster__GetIndividuality(int32_t skillId, const MethodInfo *method)
{
  int v3; // w8
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  long double v6; // q0
  System_Int32_array **p_monitor; // x8
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59392B7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillIndividualityMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int__TryGetEntity__);
    byte_59392B7 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillIndividualityMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    skillId,
                                    (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
    {
      p_monitor = (System_Int32_array **)&entity[1].monitor;
      return *p_monitor;
    }
LABEL_19:
    sub_21FFECC(Master_object, v5);
  }
  v8 = Method_System_Array_Empty_int___;
  v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v9 )
  {
    sub_2237B54(Method_System_Array_Empty_int___);
    v9 = v8[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
    v10 = sub_2237AF8(v6);
  if ( !*(_DWORD *)(v10 + 228) )
    *(__n128 *)&v6 = j_il2cpp_runtime_class_init_0(v10, v5);
  v11 = *(_QWORD *)(v8[7] + 16LL);
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
    v11 = sub_2237AF8(v6);
  p_monitor = *(System_Int32_array ***)(v11 + 184);
  return *p_monitor;
}