void __fastcall BattleFortificationInfo___ctor(BattleFortificationInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleFortificationInfo__GetFortificationWorkType(
        BattleFortificationInfo_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  EventFortificationEntity_o *Entity; // x0

  if ( (byte_4A5D777 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventFortificationMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5D777 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v4);
  Entity = EventFortificationMaster__GetEntity(
             (EventFortificationMaster_o *)Master_object,
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
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  GiftEntity_o *result; // x0
  GiftEntity_o *v6; // x19

  if ( (byte_4A5D775 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventFortificationMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5D775 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_object )
    goto LABEL_12;
  result = (GiftEntity_o *)EventFortificationMaster__GetEntity(
                             (EventFortificationMaster_o *)Master_object,
                             this->fields.eventId,
                             this->fields.idx,
                             0LL);
  if ( result )
  {
    v6 = result;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GiftMaster___);
    if ( Master_object )
      return GiftMaster__getDataById((GiftMaster_o *)Master_object, (int32_t)v6[1].klass, 0LL);
LABEL_12:
    sub_1B8880C(Master_object, v4);
  }
  return result;
}


int32_t __fastcall BattleFortificationInfo__GetMaxFortificationPoint(
        BattleFortificationInfo_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  EventFortificationEntity_o *Entity; // x0

  if ( (byte_4A5D776 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventFortificationMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5D776 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventFortificationMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v4);
  Entity = EventFortificationMaster__GetEntity(
             (EventFortificationMaster_o *)Master_object,
             this->fields.eventId,
             this->fields.idx,
             0LL);
  if ( Entity )
    return Entity->fields.maxFortificationPoint;
  else
    return -1;
}