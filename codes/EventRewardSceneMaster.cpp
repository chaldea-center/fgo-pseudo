void EventRewardSceneMaster___ctor(EventRewardSceneMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C273ED & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string___ctor__);
    byte_4C273ED = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    189,
    (const MethodInfo_338A52C *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventRewardSceneEntity_o *EventRewardSceneMaster__GetEntity(
        EventRewardSceneMaster_o *this,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C273EB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__GetEntity__);
    byte_4C273EB = 1;
  }
  PK = (Il2CppObject *)EventRewardSceneEntity__CreatePK(eventId, slot, *(const MethodInfo **)&slot);
  return (EventRewardSceneEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_338C850 *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__GetEntity__);
}


EventRewardSceneEntity_array *EventRewardSceneMaster__GetEntityList(
        EventRewardSceneMaster_o *this,
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

  if ( (byte_4C273EE & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventRewardSceneEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventRewardSceneEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventRewardSceneEntity__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo);
    byte_4C273EE = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventRewardSceneEntity__get_Count__);
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
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventRewardSceneEntity__get_Item__);
      if ( !list )
        break;
      v6 = list;
      if ( LODWORD(list->fields.items) == eventId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__;
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
LABEL_19:
    sub_1C2D6EC(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_19;
  if ( v5->fields._size < 1 )
    return 0;
  else
    return (EventRewardSceneEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v5,
                                             (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool EventRewardSceneMaster__TryGetEntity(
        EventRewardSceneMaster_o *this,
        EventRewardSceneEntity_o **entity,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C273EC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__TryGetEntity__);
    byte_4C273EC = 1;
  }
  PK = (Il2CppObject *)EventRewardSceneEntity__CreatePK(eventId, slot, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_EventRewardSceneMaster__EventRewardSceneEntity__string__TryGetEntity__);
}


EventRewardSceneEntity_array *EventRewardSceneMaster__getEntityFromIdAndEventType(
        EventRewardSceneMaster_o *this,
        int32_t eventId,
        int32_t eventType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_Collections_ObjectModel_Collection_T__o *v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v10; // w23
  int32_t v11; // w24
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4C273EF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventRewardSceneEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventRewardSceneEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventRewardSceneEntity__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo);
    byte_4C273EF = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventRewardSceneEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventRewardSceneEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventRewardSceneEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v10 = (int)list;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventRewardSceneEntity__get_Item__);
      if ( !list )
        break;
      v8 = list;
      if ( LODWORD(list->fields.items) == eventId && HIDWORD(list[1].klass) == eventType )
      {
        if ( !v7 )
          break;
        items = v7->fields._items;
        v15 = Method_System_Collections_Generic_List_EventRewardSceneEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v17[4] = (Il2CppClass *)v8;
          sub_1C2D434((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v8, v12, v13);
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_16;
    }
LABEL_20:
    sub_1C2D6EC(list, v8);
  }
LABEL_16:
  if ( !v7 )
    goto LABEL_20;
  if ( v7->fields._size < 1 )
    return 0;
  else
    return (EventRewardSceneEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v7,
                                             (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventRewardSceneEntity__ToArray__);
}