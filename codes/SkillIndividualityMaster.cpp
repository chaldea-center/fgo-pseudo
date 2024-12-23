void __fastcall SkillIndividualityMaster___ctor(SkillIndividualityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B6763D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int___ctor__, method);
    byte_4B6763D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    448,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int___ctor__);
}


System_Int32_array *__fastcall SkillIndividualityMaster__GetIndividuality(int32_t skillId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  long double inited; // q0
  System_Int32_array **p_monitor; // x8
  _QWORD *v10; // x19
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B6763C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Empty_int___, method);
    sub_1BE4ACC(&Method_DataManager_GetMaster_SkillIndividualityMaster___, v3);
    sub_1BE4ACC(&DataManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int__TryGetEntity__, v5);
    byte_4B6763C = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_SkillIndividualityMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    skillId,
                                    (const MethodInfo_31FD818 *)Method_DataMasterBase_SkillIndividualityMaster__SkillIndividualityEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
    {
      p_monitor = (System_Int32_array **)&entity[1].monitor;
      return *p_monitor;
    }
LABEL_19:
    sub_1BE4D28(Master_object, v7);
  }
  v10 = Method_System_Array_Empty_int___;
  v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v11 )
  {
    sub_1C36A04(Method_System_Array_Empty_int___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C369A8(inited);
  if ( !*(_DWORD *)(v12 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v12);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C369A8(inited);
  p_monitor = *(System_Int32_array ***)(v13 + 184);
  return *p_monitor;
}