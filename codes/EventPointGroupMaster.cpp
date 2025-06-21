void __fastcall EventPointGroupMaster___ctor(EventPointGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C5A1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string___ctor__, method);
    byte_4B1C5A1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    156,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointGroupEntity_o *__fastcall EventPointGroupMaster__GetEntity(
        EventPointGroupMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1C59F & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B1C59F = 1;
  }
  PK = (Il2CppObject *)EventPointGroupEntity__CreatePK(eventId, groupId, *(const MethodInfo **)&groupId);
  return (EventPointGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_32CC8B8 *)Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__GetEntity__);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x4
  __int64 v13; // x8
  System_Int32_array *v14; // x23
  unsigned __int64 v15; // x24
  int32_t iconId; // w8
  const MethodInfo *v17; // x5
  EventPointGroupEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_4B1C5A4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventPointGroupAddMaster___, *(_QWORD *)&eventId);
    sub_1BCAFF8(&int___TypeInfo, v9);
    this = (EventPointGroupMaster_o *)sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B1C5A4 = 1;
  }
  entity = 0LL;
  if ( !groupIds )
    goto LABEL_20;
  this = (EventPointGroupMaster_o *)sub_1BCB0A0(int___TypeInfo, groupIds->max_length);
  v13 = *(_QWORD *)&groupIds->max_length;
  v14 = (System_Int32_array *)this;
  if ( (int)v13 >= 1 )
  {
    v15 = 0LL;
    while ( v15 < (unsigned int)v13 )
    {
      this = (EventPointGroupMaster_o *)EventPointGroupMaster__TryGetEntity(
                                          v8,
                                          &entity,
                                          eventId,
                                          groupIds->m_Items[v15 + 1],
                                          v12);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !entity || !v14 )
          goto LABEL_20;
        if ( v15 >= v14->max_length )
          break;
        iconId = entity->fields.iconId;
      }
      else
      {
        if ( !v14 )
          goto LABEL_20;
        if ( v15 >= v14->max_length )
          break;
        iconId = 0;
      }
      v14->m_Items[v15 + 1] = iconId;
      LODWORD(v13) = groupIds->max_length;
      if ( (__int64)++v15 >= (int)v13 )
        goto LABEL_16;
    }
    sub_1BCB25C(this, *(_QWORD *)&eventId, v11);
  }
LABEL_16:
  this = (EventPointGroupMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (EventPointGroupMaster_o *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventPointGroupAddMaster___)) == 0LL )
  {
LABEL_20:
    sub_1BCB254(this, *(_QWORD *)&eventId);
  }
  EventPointGroupAddMaster__GetTermedIconIds((EventPointGroupAddMaster_o *)this, eventId, termId, groupIds, v14, v17);
  return v14;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventPointGroupMaster__TryGetEntity(
        EventPointGroupMaster_o *this,
        EventPointGroupEntity_o **entity,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B1C5A0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__TryGetEntity__, entity);
    byte_4B1C5A0 = 1;
  }
  PK = (Il2CppObject *)EventPointGroupEntity__CreatePK(eventId, groupId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventPointGroupEntity_o *__fastcall EventPointGroupMaster__getEntity(
        EventPointGroupMaster_o *this,
        int32_t event_id,
        int32_t group_id,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *v10; // x21
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  int32_t v17; // [xsp+8h] [xbp-48h] BYREF
  int32_t v18; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1C5A2 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__getEntityFromKey__,
      *(_QWORD *)&event_id);
    sub_1BCAFF8(&int_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_1448/*":"*/, v9);
    byte_4B1C5A2 = 1;
  }
  v18 = event_id;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, *(_QWORD *)&group_id, method, v4);
  v17 = group_id;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v11, v12, v13);
  v15 = System_String__Concat_62488424(v10, (Il2CppObject *)StringLiteral_1448/*":"*/, v14, 0LL);
  return (EventPointGroupEntity_o *)DataMasterBase_object__object__object___getEntityFromKey(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      v15,
                                      (const MethodInfo_32CBC40 *)Method_DataMasterBase_EventPointGroupMaster__EventPointGroupEntity__string__getEntityFromKey__);
}


// local variable allocation has failed, the output may be wrong!
EventPointGroupEntity_array *__fastcall EventPointGroupMaster__getEntityList(
        EventPointGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v13; // w22
  int32_t v14; // w23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4B1C5A3 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_EventPointGroupEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_EventPointGroupEntity__get_Item__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventPointGroupEntity__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventPointGroupEntity__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventPointGroupEntity___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_EventPointGroupEntity__TypeInfo, v9);
    byte_4B1C5A3 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventPointGroupEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventPointGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = (int)list;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_EventPointGroupEntity__get_Item__);
      if ( !list )
        break;
      v11 = list;
      if ( LODWORD(list->fields.items) == eventId )
      {
        if ( !v10 )
          break;
        items = v10->fields._items;
        v18 = Method_System_Collections_Generic_List_EventPointGroupEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v11;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v11, v15, v16);
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1BCB254(list, v11);
  }
LABEL_15:
  if ( !v10 )
    goto LABEL_17;
  return (EventPointGroupEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v10,
                                          (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_EventPointGroupEntity__ToArray__);
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
    sub_1BCB254(0LL, v4);
  return EntityList->max_length;
}