void EventPointActivityMaster___ctor(EventPointActivityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27333 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string___ctor__);
    byte_4C27333 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    274,
    (const MethodInfo_338A52C *)Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string___ctor__);
}


EventPointActivityEntity_o *EventPointActivityMaster__GetEntity(
        EventPointActivityMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        int32_t objectType,
        int32_t objectId,
        int64_t objectValue,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27331 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string__GetEntity__);
    byte_4C27331 = 1;
  }
  PK = (Il2CppObject *)EventPointActivityEntity__CreatePK(
                         eventId,
                         groupId,
                         objectType,
                         objectId,
                         objectValue,
                         (const MethodInfo *)objectValue);
  return (EventPointActivityEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_338C850 *)Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventPointActivityMaster__TryGetEntity(
        EventPointActivityMaster_o *this,
        EventPointActivityEntity_o **entity,
        int32_t eventId,
        int32_t groupId,
        int32_t objectType,
        int32_t objectId,
        int64_t objectValue,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C27332 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string__TryGetEntity__);
    byte_4C27332 = 1;
  }
  PK = (Il2CppObject *)EventPointActivityEntity__CreatePK(
                         eventId,
                         groupId,
                         objectType,
                         objectId,
                         objectValue,
                         *(const MethodInfo **)&objectId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string__TryGetEntity__);
}


EventPointActivityEntity_array *EventPointActivityMaster__getEntityList(
        EventPointActivityMaster_o *this,
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

  if ( (byte_4C27334 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventPointActivityEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventPointActivityEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPointActivityEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPointActivityEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPointActivityEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventPointActivityEntity__TypeInfo);
    byte_4C27334 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventPointActivityEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventPointActivityEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventPointActivityEntity__get_Count__);
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
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventPointActivityEntity__get_Item__);
      if ( !list )
        break;
      v6 = list;
      if ( LODWORD(list->fields.items) == eventId )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_EventPointActivityEntity__Add__;
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
  return (EventPointActivityEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v5,
                                             (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventPointActivityEntity__ToArray__);
}