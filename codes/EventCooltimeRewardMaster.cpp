void __fastcall EventCooltimeRewardMaster___ctor(EventCooltimeRewardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438DDC1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string___ctor__);
    byte_438DDC1 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    422,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventCooltimeRewardEntity_o *__fastcall EventCooltimeRewardMaster__GetAvailableMaxLevelEntity(
        EventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  EventCooltimeRewardEntity_o *v10; // x23
  int32_t v11; // w24
  EventCooltimeRewardEntity_o *v12; // x25
  __int64 v13; // x10

  if ( (byte_438DDC5 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventCooltimeRewardEntity_TypeInfo);
    byte_438DDC5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0LL;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v11,
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v12 = (EventCooltimeRewardEntity_o *)list;
      v13 = *(&EventCooltimeRewardEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v13
        || (EventCooltimeRewardEntity_c *)list->klass->_2.typeHierarchy[v13 - 1] != EventCooltimeRewardEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId
        && HIDWORD(list->fields.items) == spotId
        && EventCooltimeRewardEntity__IsOpen((EventCooltimeRewardEntity_o *)list, *(const MethodInfo **)&eventId) )
      {
        if ( v10 )
        {
          if ( v10->fields.lv < v12->fields.lv )
            v10 = v12;
        }
        else
        {
          v10 = v12;
        }
      }
      if ( ++v11 >= v9 )
        return v10;
    }
LABEL_22:
    sub_B7769C(list, *(_QWORD *)&eventId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventCooltimeRewardEntity_o *__fastcall EventCooltimeRewardMaster__GetEntity(
        EventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438DDC2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string__GetEntity__);
    byte_438DDC2 = 1;
  }
  PK = EventCooltimeRewardEntity__CreatePK(eventId, spotId, lv, *(const MethodInfo **)&lv);
  return (EventCooltimeRewardEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_21FBCE4 *)Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string__GetEntity__);
}


System_Collections_Generic_List_int__o *__fastcall EventCooltimeRewardMaster__GetSpotIdListByEventId(
        EventCooltimeRewardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  __int64 v6; // x1
  void *list; // x0
  int32_t v8; // w22
  int32_t v9; // w23
  _DWORD *v10; // x24
  __int64 v11; // x10

  if ( (byte_438DDC4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventCooltimeRewardEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_438DDC4 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  list = this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v9,
               (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v10 = list;
      v11 = *(&EventCooltimeRewardEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v11
        || *(EventCooltimeRewardEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v11 - 8) != EventCooltimeRewardEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventId )
      {
        if ( !v5 )
          break;
        list = (void *)System_Collections_Generic_List_int___Contains(
                         v5,
                         *((_DWORD *)list + 5),
                         (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)list & 1) == 0 )
          System_Collections_Generic_List_int___Add(
            v5,
            v10[5],
            (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( ++v9 >= v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_B7769C(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  System_Collections_Generic_List_int___Sort(
    v5,
    (const MethodInfo_30E7D08 *)Method_System_Collections_Generic_List_int__Sort__);
  return v5;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventCooltimeRewardMaster__TryGetEntity(
        EventCooltimeRewardMaster_o *this,
        EventCooltimeRewardEntity_o **entity,
        int32_t eventId,
        int32_t spotId,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438DDC3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string__TryGetEntity__);
    byte_438DDC3 = 1;
  }
  PK = EventCooltimeRewardEntity__CreatePK(eventId, spotId, lv, *(const MethodInfo **)&spotId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string__TryGetEntity__);
}