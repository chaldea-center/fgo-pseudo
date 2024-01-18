void __fastcall EventCombineMaster___ctor(EventCombineMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A300 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string___ctor__, method);
    byte_418A300 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    84,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventCombineEntity_o *__fastcall EventCombineMaster__GetEntity(
        EventCombineMaster_o *this,
        int32_t id,
        int32_t target,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418A2FE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_418A2FE = 1;
  }
  PK = EventCombineEntity__CreatePK(id, target, *(const MethodInfo **)&target);
  return (EventCombineEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_24E4520 *)Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventCombineEntity_o *__fastcall EventCombineMaster__GetTargetEntitiyList(
        EventCombineMaster_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  EventCombineEntity_o *result; // x0
  __int64 v12; // x10

  if ( (byte_418A301 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetType);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&EventCombineEntity_TypeInfo, v6);
    byte_418A301 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (EventCombineEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                         list,
                                         v10,
                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v12 = *(&EventCombineEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v12
          && (EventCombineEntity_c *)result->klass->_2.typeHierarchy[v12 - 1] == EventCombineEntity_TypeInfo
          && (targetType < 1 || result->fields.target == targetType) )
        {
          return result;
        }
      }
      if ( ++v10 >= v9 )
        return 0LL;
    }
LABEL_15:
    sub_B2C434(list, *(_QWORD *)&targetType);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventCombineMaster__TryGetEntity(
        EventCombineMaster_o *this,
        EventCombineEntity_o **entity,
        int32_t id,
        int32_t target,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418A2FF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string__TryGetEntity__, entity);
    byte_418A2FF = 1;
  }
  PK = EventCombineEntity__CreatePK(id, target, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string__TryGetEntity__);
}