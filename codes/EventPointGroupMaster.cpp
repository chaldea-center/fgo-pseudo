void __fastcall EventPointGroupMaster___ctor(EventPointGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B05A2 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string___ctor__);
    byte_42B05A2 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    151,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointGroupEntity_o *__fastcall EventPointGroupMaster__GetEntity(
        EventPointGroupMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B05A0 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__GetEntity__);
    byte_42B05A0 = 1;
  }
  PK = EventPointGroupEntity__CreatePK(eventId, groupId, *(const MethodInfo **)&groupId);
  return (EventPointGroupEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_23E2728 *)Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventPointGroupMaster__GetTermedIconIds(
        EventPointGroupMaster_o *this,
        int32_t eventId,
        int32_t termId,
        System_Int32_array *groupIds,
        const MethodInfo *method)
{
  EventPointGroupMaster_o *v8; // x22
  const MethodInfo *v9; // x4
  __int64 v10; // x8
  System_Int32_array *v11; // x23
  unsigned __int64 v12; // x24
  int32_t iconId; // w8
  const MethodInfo *v14; // x5
  __int64 v16; // x0
  EventPointGroupEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_42B05A5 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventPointGroupAddMaster___);
    sub_B52984(&int___TypeInfo);
    this = (EventPointGroupMaster_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B05A5 = 1;
  }
  entity = 0LL;
  if ( !groupIds )
    goto LABEL_20;
  this = (EventPointGroupMaster_o *)sub_B5299C(int___TypeInfo, groupIds->max_length);
  v10 = *(_QWORD *)&groupIds->max_length;
  v11 = (System_Int32_array *)this;
  if ( (int)v10 >= 1 )
  {
    v12 = 0LL;
    while ( v12 < (unsigned int)v10 )
    {
      this = (EventPointGroupMaster_o *)EventPointGroupMaster__TryGetEntity(
                                          v8,
                                          &entity,
                                          eventId,
                                          groupIds->m_Items[v12 + 1],
                                          v9);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity || !v11 )
          goto LABEL_20;
        if ( v12 >= v11->max_length )
          break;
        iconId = entity->fields.iconId;
      }
      else
      {
        if ( !v11 )
          goto LABEL_20;
        if ( v12 >= v11->max_length )
          break;
        iconId = 0;
      }
      v11->m_Items[v12 + 1] = iconId;
      LODWORD(v10) = groupIds->max_length;
      if ( (__int64)++v12 >= (int)v10 )
        goto LABEL_16;
    }
    v16 = sub_B52A88(this);
    sub_B52A28(v16, 0LL);
  }
LABEL_16:
  this = (EventPointGroupMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (EventPointGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventPointGroupAddMaster___)) == 0LL )
  {
LABEL_20:
    sub_B52A5C(this, *(_QWORD *)&eventId);
  }
  return EventPointGroupAddMaster__GetTermedIconIds(
           (EventPointGroupAddMaster_o *)this,
           eventId,
           termId,
           groupIds,
           v11,
           v14);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventPointGroupMaster__TryGetEntity(
        EventPointGroupMaster_o *this,
        EventPointGroupEntity_o **entity,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B05A1 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__TryGetEntity__);
    byte_42B05A1 = 1;
  }
  PK = EventPointGroupEntity__CreatePK(eventId, groupId, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__TryGetEntity__);
}


EventPointGroupEntity_o *__fastcall EventPointGroupMaster__getEntity(
        EventPointGroupMaster_o *this,
        int32_t event_id,
        int32_t group_id,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  int32_t v11; // [xsp+8h] [xbp-28h] BYREF
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B05A3 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_getEntityFromKey_EventPointGroupEntity___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_1240/*":"*/);
    byte_42B05A3 = 1;
  }
  v12 = event_id;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v11 = group_id;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v9 = System_String__Concat_44648020(v7, (Il2CppObject *)StringLiteral_1240/*":"*/, v8, 0LL);
  return (EventPointGroupEntity_o *)DataMasterBase__getEntityFromKey_object_(
                                      (DataMasterBase_o *)this,
                                      v9,
                                      (const MethodInfo_1A4F92C *)Method_DataMasterBase_getEntityFromKey_EventPointGroupEntity___);
}


EventPointGroupEntity_array *__fastcall EventPointGroupMaster__getEntityList(
        EventPointGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w23
  __int64 v10; // x10

  if ( (byte_42B05A4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EventPointGroupEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointGroupEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointGroupEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointGroupEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventPointGroupEntity__TypeInfo);
    byte_42B05A4 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventPointGroupEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventPointGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v9,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v6 = list;
      v10 = *(&EventPointGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v10
        || (EventPointGroupEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] != EventPointGroupEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == eventId )
      {
        if ( !v5 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventPointGroupEntity__Add__);
      }
      if ( ++v9 >= v8 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B52A5C(list, v6);
  }
LABEL_14:
  if ( !v5 )
    goto LABEL_16;
  return (EventPointGroupEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                          (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventPointGroupEntity__ToArray__);
}


int32_t __fastcall EventPointGroupMaster__getEventJoinGroupNum(
        EventPointGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventPointGroupEntity_array *EntityList; // x0
  __int64 v4; // x1

  EntityList = EventPointGroupMaster__getEntityList(this, eventId, method);
  if ( !EntityList )
    sub_B52A5C(0LL, v4);
  return EntityList->max_length;
}