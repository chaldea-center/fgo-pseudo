void __fastcall BattleFortificationInfo___ctor(BattleFortificationInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleFortificationInfo__GetFortificationWorkType(
        BattleFortificationInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  EventFortificationMaster_o *Master_WarQuestSelectionMaster; // x0
  EventFortificationEntity_o *Entity; // x0

  if ( (byte_42117E6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventFortificationMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_42117E6 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B0D97C(0LL);
  Entity = EventFortificationMaster__GetEntity(
             Master_WarQuestSelectionMaster,
             this->fields.eventId,
             this->fields.idx,
             0LL);
  if ( Entity )
    LODWORD(Entity) = Entity->fields.workType;
  return (int)Entity;
}


GiftEntity_o *__fastcall BattleFortificationInfo__GetGiftEntity(
        BattleFortificationInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  EventFortificationMaster_o *Master_WarQuestSelectionMaster; // x0
  GiftEntity_o *result; // x0
  GiftEntity_o *v7; // x19

  if ( (byte_42117E4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventFortificationMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_GiftMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    byte_42117E4 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  result = (GiftEntity_o *)EventFortificationMaster__GetEntity(
                             Master_WarQuestSelectionMaster,
                             this->fields.eventId,
                             this->fields.idx,
                             0LL);
  if ( result )
  {
    v7 = result;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_GiftMaster___);
    if ( Master_WarQuestSelectionMaster )
      return GiftMaster__getDataById((GiftMaster_o *)Master_WarQuestSelectionMaster, (int32_t)v7[1].klass, 0LL);
LABEL_14:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  return result;
}


int32_t __fastcall BattleFortificationInfo__GetMaxFortificationPoint(
        BattleFortificationInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  EventFortificationMaster_o *Master_WarQuestSelectionMaster; // x0
  EventFortificationEntity_o *Entity; // x0

  if ( (byte_42117E5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventFortificationMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_42117E5 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B0D97C(0LL);
  Entity = EventFortificationMaster__GetEntity(
             Master_WarQuestSelectionMaster,
             this->fields.eventId,
             this->fields.idx,
             0LL);
  if ( Entity )
    return Entity->fields.maxFortificationPoint;
  else
    return -1;
}