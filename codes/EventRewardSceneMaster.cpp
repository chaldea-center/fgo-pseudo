void __fastcall EventRewardSceneMaster___ctor(EventRewardSceneMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C63F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string___ctor__, method);
    byte_4B1C63F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    189,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSceneEntity_o *__fastcall EventRewardSceneMaster__GetEntity(
        EventRewardSceneMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1C63D & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B1C63D = 1;
  }
  PK = (Il2CppObject *)EventRewardSceneEntity__CreatePK(eventId, slot, *(const MethodInfo **)&slot);
  return (EventRewardSceneEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_32CC8B8 *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSceneEntity_array *__fastcall EventRewardSceneMaster__GetEntityList(
        EventRewardSceneMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v14; // w22
  int32_t v15; // w23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4B1C640 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_EventRewardSceneEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_EventRewardSceneEntity__get_Item__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventRewardSceneEntity__get_Count__, v9);
    sub_1BCAFF8(&System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo, v10);
    byte_4B1C640 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_EventRewardSceneEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_EventRewardSceneEntity__get_Item__);
      if ( !list )
        break;
      v12 = list;
      if ( LODWORD(list->fields.items) == eventId )
      {
        if ( !v11 )
          break;
        items = v11->fields._items;
        v19 = Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v12;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v12, v16, v17);
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_15;
    }
LABEL_19:
    sub_1BCB254(list, v12);
  }
LABEL_15:
  if ( !v11 )
    goto LABEL_19;
  if ( v11->fields._size < 1 )
    return 0LL;
  else
    return (EventRewardSceneEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v11,
                                             (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRewardSceneMaster__TryGetEntity(
        EventRewardSceneMaster_o *this,
        EventRewardSceneEntity_o **entity,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B1C63E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__TryGetEntity__, entity);
    byte_4B1C63E = 1;
  }
  PK = (Il2CppObject *)EventRewardSceneEntity__CreatePK(eventId, slot, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSceneEntity_array *__fastcall EventRewardSceneMaster__getEntityFromIdAndEventType(
        EventRewardSceneMaster_o *this,
        int32_t eventId,
        int32_t eventType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x22
  System_Collections_ObjectModel_Collection_T__o *v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v16; // w23
  int32_t v17; // w24
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4B1C641 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_EventRewardSceneEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_EventRewardSceneEntity__get_Item__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventRewardSceneEntity__get_Count__, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo, v12);
    byte_4B1C641 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_EventRewardSceneEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v16 = (int)list;
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v17,
                                                                 (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_EventRewardSceneEntity__get_Item__);
      if ( !list )
        break;
      v14 = list;
      if ( LODWORD(list->fields.items) == eventId && HIDWORD(list[1].klass) == eventType )
      {
        if ( !v13 )
          break;
        items = v13->fields._items;
        v21 = Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__;
        ++v13->fields._version;
        if ( !items )
          break;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            (Il2CppObject *)list,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v14;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v14, v18, v19);
        }
      }
      if ( v16 == ++v17 )
        goto LABEL_16;
    }
LABEL_20:
    sub_1BCB254(list, v14);
  }
LABEL_16:
  if ( !v13 )
    goto LABEL_20;
  if ( v13->fields._size < 1 )
    return 0LL;
  else
    return (EventRewardSceneEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v13,
                                             (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
}