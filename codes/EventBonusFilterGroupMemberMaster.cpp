void __fastcall EventBonusFilterGroupMemberMaster___ctor(
        EventBonusFilterGroupMemberMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB8B9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventBonusFilterGroupMemberMaster__EventBonusFilterGroupMemberEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EB8B9 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    277,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventBonusFilterGroupMemberMaster__EventBonusFilterGroupMemberEntity__string___ctor__);
}


EventBonusFilterGroupMemberEntity_array *__fastcall EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
        EventBonusFilterGroupMemberMaster_o *this,
        int32_t groupId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v25; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v27; // w22
  __int64 v28; // x10

  if ( (byte_42EB8BA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      groupId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&EventBonusFilterGroupMemberEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBonusFilterGroupMemberEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBonusFilterGroupMemberEntity__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBonusFilterGroupMemberEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_EventBonusFilterGroupMemberEntity__TypeInfo, v21, v22, v23);
    byte_42EB8BA = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventBonusFilterGroupMemberEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventBonusFilterGroupMemberEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v27 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v27 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v27,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v25 = list;
      v28 = *(&EventBonusFilterGroupMemberEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v28
        && (EventBonusFilterGroupMemberEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] == EventBonusFilterGroupMemberEntity_TypeInfo
        && LODWORD(list->fields.items) == groupId )
      {
        if ( !v24 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v24,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventBonusFilterGroupMemberEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v27;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v24 )
LABEL_17:
    sub_B5D69C(list, v25);
  return (EventBonusFilterGroupMemberEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventBonusFilterGroupMemberEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventBonusFilterGroupMemberEntity_o *__fastcall EventBonusFilterGroupMemberMaster__GetEntity(
        EventBonusFilterGroupMemberMaster_o *this,
        int32_t groupId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EB8B7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventBonusFilterGroupMemberMaster__EventBonusFilterGroupMemberEntity__string__GetEntity__,
      groupId,
      svtId,
      method);
    byte_42EB8B7 = 1;
  }
  PK = EventBonusFilterGroupMemberEntity__CreatePK(groupId, svtId, *(const MethodInfo **)&svtId);
  return (EventBonusFilterGroupMemberEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                                  (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                                  PK,
                                                  (const MethodInfo_23FB260 *)Method_DataMasterBase_EventBonusFilterGroupMemberMaster__EventBonusFilterGroupMemberEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventBonusFilterGroupMemberMaster__TryGetEntity(
        EventBonusFilterGroupMemberMaster_o *this,
        EventBonusFilterGroupMemberEntity_o **entity,
        int32_t groupId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EB8B8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventBonusFilterGroupMemberMaster__EventBonusFilterGroupMemberEntity__string__TryGetEntity__,
      (_DWORD)entity,
      groupId,
      *(_QWORD *)&svtId);
    byte_42EB8B8 = 1;
  }
  PK = EventBonusFilterGroupMemberEntity__CreatePK(groupId, svtId, *(const MethodInfo **)&groupId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventBonusFilterGroupMemberMaster__EventBonusFilterGroupMemberEntity__string__TryGetEntity__);
}