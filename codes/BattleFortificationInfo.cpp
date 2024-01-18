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
  __int64 v5; // x1
  EventFortificationEntity_o *Entity; // x0

  if ( (byte_4184BA6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventFortificationMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_4184BA6 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v5);
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
  __int64 v6; // x1
  GiftEntity_o *result; // x0
  GiftEntity_o *v8; // x19

  if ( (byte_4184BA4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventFortificationMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_GiftMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    byte_4184BA4 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  result = (GiftEntity_o *)EventFortificationMaster__GetEntity(
                             Master_WarQuestSelectionMaster,
                             this->fields.eventId,
                             this->fields.idx,
                             0LL);
  if ( result )
  {
    v8 = result;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GiftMaster___);
    if ( Master_WarQuestSelectionMaster )
      return GiftMaster__getDataById((GiftMaster_o *)Master_WarQuestSelectionMaster, (int32_t)v8[1].klass, 0LL);
LABEL_14:
    sub_B2C434(Master_WarQuestSelectionMaster, v6);
  }
  return result;
}


int32_t __fastcall BattleFortificationInfo__GetMaxFortificationPoint(
        BattleFortificationInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  EventFortificationMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  EventFortificationEntity_o *Entity; // x0

  if ( (byte_4184BA5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventFortificationMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_4184BA5 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v5);
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