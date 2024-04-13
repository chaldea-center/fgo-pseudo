void __fastcall EventCooltimeRewardMaster___ctor(EventCooltimeRewardMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB164 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EB164 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    422,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventCooltimeRewardEntity_o *__fastcall EventCooltimeRewardMaster__GetAvailableMaxLevelEntity(
        EventCooltimeRewardMaster_o *this,
        int32_t eventId,
        int32_t spotId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w22
  EventCooltimeRewardEntity_o *v16; // x23
  int32_t v17; // w24
  EventCooltimeRewardEntity_o *v18; // x25
  __int64 v19; // x10

  if ( (byte_42EB168 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventId, spotId, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&EventCooltimeRewardEntity_TypeInfo, v10, v11, v12);
    byte_42EB168 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0LL;
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v17,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v18 = (EventCooltimeRewardEntity_o *)list;
      v19 = *(&EventCooltimeRewardEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v19
        || (EventCooltimeRewardEntity_c *)list->klass->_2.typeHierarchy[v19 - 1] != EventCooltimeRewardEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId
        && HIDWORD(list->fields.items) == spotId
        && EventCooltimeRewardEntity__IsOpen((EventCooltimeRewardEntity_o *)list, *(const MethodInfo **)&eventId) )
      {
        if ( v16 )
        {
          if ( v16->fields.lv < v18->fields.lv )
            v16 = v18;
        }
        else
        {
          v16 = v18;
        }
      }
      if ( ++v17 >= v15 )
        return v16;
    }
LABEL_22:
    sub_B5D69C(list, *(_QWORD *)&eventId);
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

  if ( (byte_42EB165 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string__GetEntity__,
      eventId,
      spotId,
      *(_QWORD *)&lv);
    byte_42EB165 = 1;
  }
  PK = EventCooltimeRewardEntity__CreatePK(eventId, spotId, lv, *(const MethodInfo **)&lv);
  return (EventCooltimeRewardEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_23FB260 *)Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string__GetEntity__);
}


System_Collections_Generic_List_int__o *__fastcall EventCooltimeRewardMaster__GetSpotIdListByEventId(
        EventCooltimeRewardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_int__o *v27; // x21
  __int64 v28; // x1
  void *list; // x0
  int32_t v30; // w22
  int32_t v31; // w23
  _DWORD *v32; // x24
  __int64 v33; // x10

  if ( (byte_42EB167 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&EventCooltimeRewardEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Sort__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v24, v25, v26);
    byte_42EB167 = 1;
  }
  v27 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  list = this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v30 = (int)list;
    v31 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v31,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v32 = list;
      v33 = *(&EventCooltimeRewardEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v33
        || *(EventCooltimeRewardEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v33 - 8) != EventCooltimeRewardEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == eventId )
      {
        if ( !v27 )
          break;
        list = (void *)System_Collections_Generic_List_int___Contains(
                         v27,
                         *((_DWORD *)list + 5),
                         (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)list & 1) == 0 )
          System_Collections_Generic_List_int___Add(
            v27,
            v32[5],
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( ++v31 >= v30 )
        goto LABEL_15;
    }
LABEL_17:
    sub_B5D69C(list, v28);
  }
LABEL_15:
  if ( !v27 )
    goto LABEL_17;
  System_Collections_Generic_List_int___Sort(
    v27,
    (const MethodInfo_308632C *)Method_System_Collections_Generic_List_int__Sort__);
  return v27;
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

  if ( (byte_42EB166 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&spotId);
    byte_42EB166 = 1;
  }
  PK = EventCooltimeRewardEntity__CreatePK(eventId, spotId, lv, *(const MethodInfo **)&spotId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventCooltimeRewardMaster__EventCooltimeRewardEntity__string__TryGetEntity__);
}