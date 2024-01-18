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
  __int64 v3; // x1
  SpotEntity_o *SpotEntity; // x0
  QuestTree_o *v5; // x20
  const MethodInfo *v6; // x1
  SpotEntity_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_41858B6 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v3);
    byte_41858B6 = 1;
  }
  SpotEntity = MapGimmickRandomEffectElementComponent__get_SpotEntity(this, method);
  if ( SpotEntity )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    v5 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    v7 = MapGimmickRandomEffectElementComponent__get_SpotEntity(this, v6);
    if ( !v5 )
      sub_B2C434(v7, v8);
    LOBYTE(SpotEntity) = QuestTree__IsSpotSatisfyingDisplayCond(v5, v7, 1, 0LL);
  }
  return (char)SpotEntity;
}


SpotEntity_o *__fastcall MapGimmickRandomEffectElementComponent__get_SpotEntity(
        MapGimmickRandomEffectElementComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_41858B7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_SpotMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v4);
    byte_41858B7 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SpotMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v6);
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         this->fields.weight,
         (const MethodInfo_24E412C *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
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
  return this->fields.weight;
}


int32_t __fastcall MapGimmickRandomEffectElementComponent__get_Weight(
        MapGimmickRandomEffectElementComponent_o *this,
        const MethodInfo *method)
{
  return *((_DWORD *)&this->fields + 3);
}