void __fastcall MapGimmickRandomEffectElementComponent___ctor(
        MapGimmickRandomEffectElementComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall MapGimmickRandomEffectElementComponent__get_IsValid(
        MapGimmickRandomEffectElementComponent_o *this,
        const MethodInfo *method)
{
  SpotEntity_o *SpotEntity; // x0
  Il2CppObject *Instance; // x20
  const MethodInfo *v5; // x1
  SpotEntity_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4AB2B24 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonTemplate_QuestTree__get_Instance__, method);
    byte_4AB2B24 = 1;
  }
  SpotEntity = MapGimmickRandomEffectElementComponent__get_SpotEntity(this, method);
  if ( SpotEntity )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_378A64C *)Method_SingletonTemplate_QuestTree__get_Instance__);
    v6 = MapGimmickRandomEffectElementComponent__get_SpotEntity(this, v5);
    if ( !Instance )
      sub_1BAB678(v6, v7);
    LOBYTE(SpotEntity) = QuestTree__IsSpotSatisfyingDisplayCond((QuestTree_o *)Instance, v6, 1, 0LL);
  }
  return (char)SpotEntity;
}


SpotEntity_o *__fastcall MapGimmickRandomEffectElementComponent__get_SpotEntity(
        MapGimmickRandomEffectElementComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4AB2B25 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_SpotMaster___, method);
    sub_1BAB41C(&DataManager_TypeInfo, v3);
    sub_1BAB41C(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v4);
    byte_4AB2B25 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_SpotMaster___);
  if ( !Master_object )
    sub_1BAB678(0LL, v6);
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         this->fields.spotId,
         (const MethodInfo_3163DE4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
  {
    return (SpotEntity_o *)entity;
  }
  else
  {
    return 0LL;
  }
}


int32_t __fastcall MapGimmickRandomEffectElementComponent__get_SpotId(
        MapGimmickRandomEffectElementComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.spotId;
}


int32_t __fastcall MapGimmickRandomEffectElementComponent__get_Weight(
        MapGimmickRandomEffectElementComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.weight;
}