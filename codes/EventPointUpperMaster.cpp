void __fastcall EventPointUpperMaster___ctor(EventPointUpperMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41878FD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string___ctor__, method);
    byte_41878FD = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    283,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointUpperEntity_array *__fastcall EventPointUpperMaster__GetEntitiesFromEventId(
        EventPointUpperMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  __int64 v15; // x10

  if ( (byte_41878FE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&EventPointUpperEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointUpperEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_EventPointUpperEntity__TypeInfo, v10);
    byte_41878FE = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v14,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = list;
        v15 = *(&EventPointUpperEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
          && (EventPointUpperEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == EventPointUpperEntity_TypeInfo )
        {
          if ( LODWORD(list[1].klass) == eventId )
          {
            if ( !v11 )
              goto LABEL_17;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v11,
              (EventMissionProgressRequest_Argument_ProgressData_o *)list,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventPointUpperEntity__Add__);
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v14;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_17;
  }
  if ( !v11 )
LABEL_17:
    sub_B2C434(list, v12);
  return (EventPointUpperEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventPointUpperEntity_o *__fastcall EventPointUpperMaster__GetEntity(
        EventPointUpperMaster_o *this,
        int32_t version,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_41878FB & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__GetEntity__,
      *(_QWORD *)&version);
    byte_41878FB = 1;
  }
  PK = EventPointUpperEntity__CreatePK(version, id, priority, *(const MethodInfo **)&priority);
  return (EventPointUpperEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                      (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_24E4520 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventPointUpperMaster__TryGetEntity(
        EventPointUpperMaster_o *this,
        EventPointUpperEntity_o **entity,
        int32_t version,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_41878FC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__TryGetEntity__, entity);
    byte_41878FC = 1;
  }
  PK = EventPointUpperEntity__CreatePK(version, id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventPointUpperEntity_array *__fastcall EventPointUpperMaster__getList(
        EventPointUpperMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v14; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v16; // w23
  __int64 v17; // x10

  if ( (byte_41878FF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&EventPointUpperEntity_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointUpperEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_EventPointUpperEntity__TypeInfo, v12);
    byte_41878FF = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v16 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v16 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v16,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v14 = list;
      v17 = *(&EventPointUpperEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v17
        && (EventPointUpperEntity_c *)list->klass->_2.typeHierarchy[v17 - 1] == EventPointUpperEntity_TypeInfo
        && LODWORD(list[1].klass) == eventId
        && HIDWORD(list->fields._syncRoot) == groupId )
      {
        if ( !v13 )
          goto LABEL_18;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventPointUpperEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v16;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v13 )
LABEL_18:
    sub_B2C434(list, v14);
  return (EventPointUpperEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventPointUpperMaster__getPointUpper(
        EventPointUpperMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t Value; // w19
  const MethodInfo *v10; // x3
  DataManager_o *List; // x0
  __int64 v12; // x1
  DataManager_o *v13; // x20
  const MethodInfo *v14; // x2
  struct DataMasterBase_array *datalist; // x8
  EventPointUpperReleaseMaster_o *v16; // x21
  unsigned __int64 v17; // x24
  __int64 v18; // x23
  char v19; // w25
  __int64 v20; // x22
  __int64 v22; // x0

  if ( (byte_4187900 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_8688/*"MAX_EVENT_POINT"*/, v8);
    byte_4187900 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8688/*"MAX_EVENT_POINT"*/, 0LL);
  List = (DataManager_o *)EventPointUpperMaster__getList(this, eventId, groupId, v10);
  if ( !List )
    goto LABEL_23;
  v13 = List;
  if ( List->fields.datalist )
  {
    List = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( List )
    {
      List = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                List,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___);
      datalist = v13->fields.datalist;
      if ( (int)datalist >= 1 )
      {
        v16 = (EventPointUpperReleaseMaster_o *)List;
        v17 = 0LL;
        v18 = 0LL;
        v19 = 1;
        do
        {
          if ( v17 >= (unsigned int)datalist )
          {
            v22 = sub_B2C460(List);
            sub_B2C400(v22, 0LL);
          }
          v20 = *((_QWORD *)&v13->fields.lookup + v17);
          if ( !v18 )
            goto LABEL_12;
          if ( !v20 )
            goto LABEL_23;
          if ( *(_DWORD *)(v18 + 24) < *(_DWORD *)(v20 + 24) )
          {
LABEL_12:
            if ( !v16 )
              goto LABEL_23;
            List = (DataManager_o *)EventPointUpperReleaseMaster__IsOpen(
                                      v16,
                                      *((EventPointUpperEntity_o **)&v13->fields.lookup + v17),
                                      v14);
            LODWORD(datalist) = v13->fields.datalist;
            if ( ((unsigned __int8)List & 1) != 0 )
              v18 = v20;
            v19 &= (unsigned __int8)List;
          }
          ++v17;
        }
        while ( (__int64)v17 < (int)datalist );
        if ( v18 )
        {
          if ( (v19 & 1) == 0 )
            return *(_DWORD *)(v18 + 36);
        }
        else if ( (v19 & 1) == 0 )
        {
          return Value;
        }
      }
      return 0;
    }
LABEL_23:
    sub_B2C434(List, v12);
  }
  return Value;
}