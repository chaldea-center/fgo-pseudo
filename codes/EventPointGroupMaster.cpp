void EventPointGroupMaster___ctor(EventPointGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C8F3 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string___ctor__);
    byte_4D2C8F3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    156,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointGroupEntity_o *EventPointGroupMaster__GetEntity(
        EventPointGroupMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2C8F1 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__GetEntity__);
    byte_4D2C8F1 = 1;
  }
  PK = (Il2CppObject *)EventPointGroupEntity__CreatePK(eventId, groupId, *(const MethodInfo **)&groupId);
  return (EventPointGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_345FF78 *)Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *EventPointGroupMaster__GetTermedIconIds(
        EventPointGroupMaster_o *this,
        int32_t eventId,
        int32_t termId,
        System_Int32_array *groupIds,
        const MethodInfo *method)
{
  EventPointGroupMaster_o *v8; // x22
  const MethodInfo *v9; // x4
  il2cpp_array_size_t max_length; // x8
  EventPointGroupMaster_o *v11; // x23
  unsigned __int64 v12; // x24
  int32_t iconId; // w8
  const MethodInfo *v14; // x5
  EventPointGroupEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4D2C8F6 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventPointGroupAddMaster___);
    sub_1C94098(&int___TypeInfo);
    this = (EventPointGroupMaster_o *)sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2C8F6 = 1;
  }
  entity = 0;
  if ( !groupIds )
    goto LABEL_20;
  this = (EventPointGroupMaster_o *)sub_1C94140(int___TypeInfo, LODWORD(groupIds->max_length));
  max_length = groupIds->max_length;
  v11 = this;
  if ( (int)max_length >= 1 )
  {
    v12 = 0;
    while ( v12 < (unsigned int)max_length )
    {
      this = (EventPointGroupMaster_o *)EventPointGroupMaster__TryGetEntity(
                                          v8,
                                          &entity,
                                          eventId,
                                          groupIds->m_Items[v12],
                                          v9);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity || !v11 )
          goto LABEL_20;
        if ( v12 >= LODWORD(v11->fields._MasterName_k__BackingField) )
          break;
        iconId = entity->fields.iconId;
      }
      else
      {
        if ( !v11 )
          goto LABEL_20;
        if ( v12 >= LODWORD(v11->fields._MasterName_k__BackingField) )
          break;
        iconId = 0;
      }
      *(&v11->fields.revision + v12) = iconId;
      LODWORD(max_length) = groupIds->max_length;
      if ( (__int64)++v12 >= (int)max_length )
        goto LABEL_16;
    }
    sub_1C942F8(this);
  }
LABEL_16:
  this = (EventPointGroupMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (EventPointGroupMaster_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventPointGroupAddMaster___)) == 0 )
  {
LABEL_20:
    sub_1C942F0(this, *(_QWORD *)&eventId);
  }
  EventPointGroupAddMaster__GetTermedIconIds(
    (EventPointGroupAddMaster_o *)this,
    eventId,
    termId,
    groupIds,
    (System_Int32_array *)v11,
    v14);
  return (System_Int32_array *)v11;
}


// local variable allocation has failed, the output may be wrong!
bool EventPointGroupMaster__TryGetEntity(
        EventPointGroupMaster_o *this,
        EventPointGroupEntity_o **entity,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2C8F2 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__TryGetEntity__);
    byte_4D2C8F2 = 1;
  }
  PK = (Il2CppObject *)EventPointGroupEntity__CreatePK(eventId, groupId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__TryGetEntity__);
}


EventPointGroupEntity_o *EventPointGroupMaster__getEntity(
        EventPointGroupMaster_o *this,
        int32_t event_id,
        int32_t group_id,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  int32_t v11; // [xsp+8h] [xbp-48h] BYREF
  int32_t v12; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2C8F4 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__getEntityFromKey__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&StringLiteral_1450/*":"*/);
    byte_4D2C8F4 = 1;
  }
  v12 = event_id;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v11 = group_id;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v9 = System_String__Concat_64455760(v7, (Il2CppObject *)StringLiteral_1450/*":"*/, v8, 0);
  return (EventPointGroupEntity_o *)DataMasterBase_object__object__object___getEntityFromKey(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      v9,
                                      (const MethodInfo_345F300 *)Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__getEntityFromKey__);
}


EventPointGroupEntity_array *EventPointGroupMaster__getEntityList(
        EventPointGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4D2C8F5 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventPointGroupEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventPointGroupEntity__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventPointGroupEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventPointGroupEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventPointGroupEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_EventPointGroupEntity__TypeInfo);
    byte_4D2C8F5 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventPointGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventPointGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupEntity__get_Item__);
      if ( !list )
        break;
      v6 = list;
      if ( LODWORD(list->fields.items) == eventId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v17 = Method_System_Collections_Generic_List_EventPointGroupEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v6;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v6, v10, v11, v12, v13, v14, v15);
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C942F0(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (EventPointGroupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_EventPointGroupEntity__ToArray__);
}


int32_t EventPointGroupMaster__getEventJoinGroupNum(
        EventPointGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventPointGroupEntity_array *EntityList; // x0
  __int64 v4; // x1

  EntityList = EventPointGroupMaster__getEntityList(this, eventId, method);
  if ( !EntityList )
    sub_1C942F0(0, v4);
  return EntityList->max_length;
}