void EventPointGroupMaster___ctor(EventPointGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2734F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string___ctor__);
    byte_4C2734F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    156,
    (const MethodInfo_338A52C *)Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointGroupEntity_o *EventPointGroupMaster__GetEntity(
        EventPointGroupMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C2734D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__GetEntity__);
    byte_4C2734D = 1;
  }
  PK = (Il2CppObject *)EventPointGroupEntity__CreatePK(eventId, groupId, *(const MethodInfo **)&groupId);
  return (EventPointGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_338C850 *)Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__GetEntity__);
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
  __int64 v9; // x2
  const MethodInfo *v10; // x4
  il2cpp_array_size_t max_length; // x8
  EventPointGroupMaster_o *v12; // x23
  unsigned __int64 v13; // x24
  int32_t iconId; // w8
  const MethodInfo *v15; // x5
  EventPointGroupEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4C27352 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventPointGroupAddMaster___);
    sub_1C2D490(&int___TypeInfo);
    this = (EventPointGroupMaster_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C27352 = 1;
  }
  entity = 0;
  if ( !groupIds )
    goto LABEL_20;
  this = (EventPointGroupMaster_o *)sub_1C2D538(int___TypeInfo, LODWORD(groupIds->max_length));
  max_length = groupIds->max_length;
  v12 = this;
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    while ( v13 < (unsigned int)max_length )
    {
      this = (EventPointGroupMaster_o *)EventPointGroupMaster__TryGetEntity(
                                          v8,
                                          &entity,
                                          eventId,
                                          groupIds->m_Items[v13],
                                          v10);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity || !v12 )
          goto LABEL_20;
        if ( v13 >= LODWORD(v12->fields._MasterName_k__BackingField) )
          break;
        iconId = entity->fields.iconId;
      }
      else
      {
        if ( !v12 )
          goto LABEL_20;
        if ( v13 >= LODWORD(v12->fields._MasterName_k__BackingField) )
          break;
        iconId = 0;
      }
      *(&v12->fields.revision + v13) = iconId;
      LODWORD(max_length) = groupIds->max_length;
      if ( (__int64)++v13 >= (int)max_length )
        goto LABEL_16;
    }
    sub_1C2D6F4(this, *(_QWORD *)&eventId, v9);
  }
LABEL_16:
  this = (EventPointGroupMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (EventPointGroupMaster_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventPointGroupAddMaster___)) == 0 )
  {
LABEL_20:
    sub_1C2D6EC(this, *(_QWORD *)&eventId);
  }
  EventPointGroupAddMaster__GetTermedIconIds(
    (EventPointGroupAddMaster_o *)this,
    eventId,
    termId,
    groupIds,
    (System_Int32_array *)v12,
    v15);
  return (System_Int32_array *)v12;
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

  if ( (byte_4C2734E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__TryGetEntity__);
    byte_4C2734E = 1;
  }
  PK = (Il2CppObject *)EventPointGroupEntity__CreatePK(eventId, groupId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventPointGroupEntity_o *EventPointGroupMaster__getEntity(
        EventPointGroupMaster_o *this,
        int32_t event_id,
        int32_t group_id,
        const MethodInfo *method)
{
  __int64 v4; // x4
  Il2CppObject *v8; // x21
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  int32_t v15; // [xsp+8h] [xbp-48h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C27350 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__getEntityFromKey__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_1456/*":"*/);
    byte_4C27350 = 1;
  }
  v16 = event_id;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, *(_QWORD *)&group_id, method, v4);
  v15 = group_id;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v9, v10, v11);
  v13 = System_String__Concat_63495864(v8, (Il2CppObject *)StringLiteral_1456/*":"*/, v12, 0);
  return (EventPointGroupEntity_o *)DataMasterBase_object__object__object___getEntityFromKey(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      v13,
                                      (const MethodInfo_338BBD8 *)Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__getEntityFromKey__);
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
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4C27351 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventPointGroupEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventPointGroupEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPointGroupEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPointGroupEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPointGroupEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventPointGroupEntity__TypeInfo);
    byte_4C27351 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventPointGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventPointGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupEntity__get_Count__);
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
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupEntity__get_Item__);
      if ( !list )
        break;
      v6 = list;
      if ( LODWORD(list->fields.items) == eventId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_EventPointGroupEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v6;
          sub_1C2D434((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v6, v10, v11);
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C2D6EC(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (EventPointGroupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventPointGroupEntity__ToArray__);
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
    sub_1C2D6EC(0, v4);
  return EntityList->max_length;
}