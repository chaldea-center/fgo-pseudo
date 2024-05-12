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
  QuestTree_o *v4; // x20
  const MethodInfo *v5; // x1
  SpotEntity_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_438E58E & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B775C4(&SingletonTemplate_QuestTree__TypeInfo);
    byte_438E58E = 1;
  }
  SpotEntity = MapGimmickRandomEffectElementComponent__get_SpotEntity(this, method);
  if ( SpotEntity )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    v4 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    v6 = MapGimmickRandomEffectElementComponent__get_SpotEntity(this, v5);
    if ( !v4 )
      sub_B7769C(v6, v7);
    LOBYTE(SpotEntity) = QuestTree__IsSpotSatisfyingDisplayCond(v4, v6, 1, 0LL);
  }
  return (char)SpotEntity;
}


SpotEntity_o *__fastcall MapGimmickRandomEffectElementComponent__get_SpotEntity(
        MapGimmickRandomEffectElementComponent_o *this,
        const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438E58F & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_SpotMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    byte_438E58F = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SpotMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7769C(0LL, v4);
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         this->fields.weight,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
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