void __fastcall EventPointActivityMaster___ctor(EventPointActivityMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B02086 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string___ctor__, method);
    byte_4B02086 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    274,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointActivityEntity_o *__fastcall EventPointActivityMaster__GetEntity(
        EventPointActivityMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        int32_t objectType,
        int32_t objectId,
        int64_t objectValue,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B02084 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B02084 = 1;
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
                                         (const MethodInfo_32B3B28 *)Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventPointActivityMaster__TryGetEntity(
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

  if ( (byte_4B02085 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string__TryGetEntity__,
      entity);
    byte_4B02085 = 1;
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
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_EventPointActivityMaster__EventPointActivityEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventPointActivityEntity_array *__fastcall EventPointActivityMaster__getEntityList(
        EventPointActivityMaster_o *this,
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

  if ( (byte_4B02087 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_EventPointActivityEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_EventPointActivityEntity__get_Item__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventPointActivityEntity__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventPointActivityEntity__ToArray__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventPointActivityEntity___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_EventPointActivityEntity__TypeInfo, v9);
    byte_4B02087 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventPointActivityEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventPointActivityEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_EventPointActivityEntity__get_Count__);
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
                                                                 (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_EventPointActivityEntity__get_Item__);
      if ( !list )
        break;
      v11 = list;
      if ( LODWORD(list->fields.items) == eventId )
      {
        if ( !v10 )
          break;
        items = v10->fields._items;
        v18 = Method_System_Collections_Generic_List_EventPointActivityEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v11;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v11, v15, v16);
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1BC3264(list, v11);
  }
LABEL_15:
  if ( !v10 )
    goto LABEL_17;
  return (EventPointActivityEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v10,
                                             (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_EventPointActivityEntity__ToArray__);
}