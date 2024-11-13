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
  __int64 v2; // x2
  SpotEntity_o *SpotEntity; // x0
  Il2CppObject *Instance; // x20
  const MethodInfo *v6; // x1
  SpotEntity_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_4B12F90 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, method, v2);
    byte_4B12F90 = 1;
  }
  SpotEntity = MapGimmickRandomEffectElementComponent__get_SpotEntity(this, method);
  if ( SpotEntity )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    v7 = MapGimmickRandomEffectElementComponent__get_SpotEntity(this, v6);
    if ( !Instance )
      sub_1BCAA3C(v7, v8);
    LOBYTE(SpotEntity) = QuestTree__IsSpotSatisfyingDisplayCond((QuestTree_o *)Instance, v7, 1, 0LL);
  }
  return (char)SpotEntity;
}


SpotEntity_o *__fastcall MapGimmickRandomEffectElementComponent__get_SpotEntity(
        MapGimmickRandomEffectElementComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B12F91 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_SpotMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v6, v7);
    byte_4B12F91 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SpotMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v9);
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         this->fields.spotId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
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