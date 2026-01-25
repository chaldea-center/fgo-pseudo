void EventMissionGroupMaster___ctor(EventMissionGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE6CF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventMissionGroupMaster__EventMissionGroupEntity__string___ctor__);
    byte_4CEE6CF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    458,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_EventMissionGroupMaster__EventMissionGroupEntity__string___ctor__);
}


EventMissionGroupEntity_o *EventMissionGroupMaster__GetEntity(
        EventMissionGroupMaster_o *this,
        int32_t id,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEE6D0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventMissionGroupMaster__EventMissionGroupEntity__string__GetEntity__);
    byte_4CEE6D0 = 1;
  }
  PK = (Il2CppObject *)EventMissionGroupEntity__CreatePK(id, missionId, 0);
  return (EventMissionGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_3432DB4 *)Method_DataMasterBase_EventMissionGroupMaster__EventMissionGroupEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventMissionGroupEntity__o *EventMissionGroupMaster__GetEntityList(
        EventMissionGroupMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4CEE6CD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_EventMissionGroupEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_EventMissionGroupEntity__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionGroupEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionGroupEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventMissionGroupEntity__TypeInfo);
    byte_4CEE6CD = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventMissionGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventMissionGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_EventMissionGroupEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v10,
                                                                 (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_EventMissionGroupEntity__get_Item__);
      if ( !list )
        break;
      v6 = list;
      if ( LODWORD(list->fields.items) == id )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v18 = Method_System_Collections_Generic_List_EventMissionGroupEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v6;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v6, v11, v12, v13, v14, v15, v16);
        }
      }
      if ( v9 == ++v10 )
        return (System_Collections_Generic_List_EventMissionGroupEntity__o *)v5;
    }
LABEL_16:
    sub_1C7BD40(list, v6);
  }
  return (System_Collections_Generic_List_EventMissionGroupEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
int32_t EventMissionGroupMaster__GetTargetGroupId(
        EventMissionGroupMaster_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22

  if ( (byte_4CEE6CE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_EventMissionGroupEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_EventMissionGroupEntity__get_Item__);
    byte_4CEE6CE = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_12:
    sub_1C7BD40(list, *(_QWORD *)&missionId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_EventMissionGroupEntity__get_Count__);
  if ( Count < 1 )
    return -1;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_12;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v8,
             (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_EventMissionGroupEntity__get_Item__);
    if ( !list )
      goto LABEL_12;
    if ( *((_DWORD *)list + 5) == missionId )
      return *((_DWORD *)list + 4);
    if ( v7 == ++v8 )
      return -1;
  }
}


bool EventMissionGroupMaster__TryGetEntity(
        EventMissionGroupMaster_o *this,
        EventMissionGroupEntity_o **entity,
        int32_t id,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEE6D1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_EventMissionGroupMaster__EventMissionGroupEntity__string__TryGetEntity__);
    byte_4CEE6D1 = 1;
  }
  PK = (Il2CppObject *)EventMissionGroupEntity__CreatePK(id, missionId, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_EventMissionGroupMaster__EventMissionGroupEntity__string__TryGetEntity__);
}