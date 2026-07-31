void MapGimmickRandomEffectElementComponent___ctor(
        MapGimmickRandomEffectElementComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool MapGimmickRandomEffectElementComponent__get_IsValid(
        MapGimmickRandomEffectElementComponent_o *this,
        const MethodInfo *method)
{
  SpotEntity_o *SpotEntity; // x0
  Il2CppObject *Instance; // x20
  const MethodInfo *v5; // x1
  SpotEntity_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_5934FEC & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_5934FEC = 1;
  }
  SpotEntity = MapGimmickRandomEffectElementComponent__get_SpotEntity(this, method);
  if ( SpotEntity )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    v6 = MapGimmickRandomEffectElementComponent__get_SpotEntity(this, v5);
    if ( !Instance )
      sub_21FFECC(v6, v7);
    LOBYTE(SpotEntity) = QuestTree__IsSpotSatisfyingDisplayCond((QuestTree_o *)Instance, v6, 1, 0);
  }
  return (char)SpotEntity;
}


SpotEntity_o *MapGimmickRandomEffectElementComponent__get_SpotEntity(
        MapGimmickRandomEffectElementComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5934FED & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_SpotMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    byte_5934FED = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SpotMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v6);
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         this->fields.spotId,
         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
  {
    return (SpotEntity_o *)entity;
  }
  else
  {
    return 0;
  }
}


int32_t MapGimmickRandomEffectElementComponent__get_SpotId(
        MapGimmickRandomEffectElementComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.spotId;
}


int32_t MapGimmickRandomEffectElementComponent__get_Weight(
        MapGimmickRandomEffectElementComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.weight;
}