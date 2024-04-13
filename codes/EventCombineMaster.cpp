void __fastcall EventCombineMaster___ctor(EventCombineMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB141 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EB141 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    85,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventCombineEntity_o *__fastcall EventCombineMaster__GetEntity(
        EventCombineMaster_o *this,
        int32_t id,
        int32_t target,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EB13F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string__GetEntity__, id, target, method);
    byte_42EB13F = 1;
  }
  PK = EventCombineEntity__CreatePK(id, target, *(const MethodInfo **)&target);
  return (EventCombineEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_23FB260 *)Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventCombineEntity_o *__fastcall EventCombineMaster__GetTargetEntitiyList(
        EventCombineMaster_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w21
  int32_t v15; // w22
  EventCombineEntity_o *result; // x0
  __int64 v17; // x10

  if ( (byte_42EB142 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      targetType,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&EventCombineEntity_TypeInfo, v9, v10, v11);
    byte_42EB142 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (EventCombineEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                         list,
                                         v15,
                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v17 = *(&EventCombineEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (EventCombineEntity_c *)result->klass->_2.typeHierarchy[v17 - 1] == EventCombineEntity_TypeInfo
          && (targetType < 1 || result->fields.target == targetType) )
        {
          return result;
        }
      }
      if ( ++v15 >= v14 )
        return 0LL;
    }
LABEL_15:
    sub_B5D69C(list, *(_QWORD *)&targetType);
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

  if ( (byte_42EB140 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&target);
    byte_42EB140 = 1;
  }
  PK = EventCombineEntity__CreatePK(id, target, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventCombineMaster__EventCombineEntity__string__TryGetEntity__);
}