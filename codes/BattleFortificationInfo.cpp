void __fastcall BattleFortificationInfo___ctor(BattleFortificationInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleFortificationInfo__GetFortificationWorkType(
        BattleFortificationInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  EventFortificationMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  EventFortificationEntity_o *Entity; // x0

  if ( (byte_42E5936 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventFortificationMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E5936 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v9);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  EventFortificationMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  GiftEntity_o *result; // x0
  GiftEntity_o *v14; // x19

  if ( (byte_42E5934 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventFortificationMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_GiftMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    byte_42E5934 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  result = (GiftEntity_o *)EventFortificationMaster__GetEntity(
                             Master_WarQuestSelectionMaster,
                             this->fields.eventId,
                             this->fields.idx,
                             0LL);
  if ( result )
  {
    v14 = result;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GiftMaster___);
    if ( Master_WarQuestSelectionMaster )
      return GiftMaster__getDataById((GiftMaster_o *)Master_WarQuestSelectionMaster, (int32_t)v14[1].klass, 0LL);
LABEL_14:
    sub_B5D69C(Master_WarQuestSelectionMaster, v12);
  }
  return result;
}


int32_t __fastcall BattleFortificationInfo__GetMaxFortificationPoint(
        BattleFortificationInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  EventFortificationMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  EventFortificationEntity_o *Entity; // x0

  if ( (byte_42E5935 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventFortificationMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E5935 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventFortificationMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v9);
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