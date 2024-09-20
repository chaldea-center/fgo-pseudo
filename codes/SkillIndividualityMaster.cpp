void __fastcall SkillIndividualityMaster___ctor(SkillIndividualityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BB9B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int___ctor__);
    byte_4A5BB9B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    444,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int___ctor__);
}


System_Int32_array *__fastcall SkillIndividualityMaster__GetIndividuality(int32_t skillId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  System_Int32_array **p_monitor; // x8
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5BB9A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillIndividualityMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int__TryGetEntity__);
    byte_4A5BB9A = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillIndividualityMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    skillId,
                                    (const MethodInfo_311D988 *)Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
    {
      p_monitor = (System_Int32_array **)&entity[1].monitor;
      return *p_monitor;
    }
LABEL_19:
    sub_1B8880C(Master_object, v4);
  }
  v6 = Method_System_Array_Empty_int___;
  v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v7 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_int___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BDA48C(v8);
  if ( !*(_DWORD *)(v8 + 224) )
    j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BDA48C(v9);
  p_monitor = *(System_Int32_array ***)(v9 + 184);
  return *p_monitor;
}