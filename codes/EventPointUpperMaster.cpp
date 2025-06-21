void __fastcall EventPointUpperMaster___ctor(EventPointUpperMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C5AC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string___ctor__, method);
    byte_4B1C5AC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    291,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string___ctor__);
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
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4B1C5AD & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Item__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventPointUpperEntity__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_EventPointUpperEntity__TypeInfo, v9);
    byte_4B1C5AD = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v13,
                                                               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Item__);
    if ( !list )
      goto LABEL_18;
    v11 = list;
    if ( LODWORD(list[1].monitor) == eventId )
    {
      if ( !v10 )
        goto LABEL_18;
      items = v10->fields._items;
      v17 = Method_System_Collections_Generic_List_EventPointUpperEntity__Add__;
      ++v10->fields._version;
      if ( !items )
        goto LABEL_18;
      size = v10->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          (Il2CppObject *)list,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v11;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v11, v14, v15);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v10 )
LABEL_18:
    sub_1BCB254(list, v11);
  return (EventPointUpperEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v10,
                                          (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventPointUpperEntity_o *__fastcall EventPointUpperMaster__GetEntity(
        EventPointUpperMaster_o *this,
        int32_t version,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1C5AA & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__GetEntity__,
      *(_QWORD *)&version);
    byte_4B1C5AA = 1;
  }
  PK = (Il2CppObject *)EventPointUpperEntity__CreatePK(version, id, priority, *(const MethodInfo **)&priority);
  return (EventPointUpperEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_32CC8B8 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__GetEntity__);
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
  Il2CppObject *PK; // x2

  if ( (byte_4B1C5AB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__TryGetEntity__, entity);
    byte_4B1C5AB = 1;
  }
  PK = (Il2CppObject *)EventPointUpperEntity__CreatePK(version, id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__TryGetEntity__);
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
  System_Collections_Generic_List_object__o *v12; // x22
  System_Collections_ObjectModel_Collection_T__o *v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v15; // w23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4B1C5AE & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Item__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventPointUpperEntity__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_EventPointUpperEntity__TypeInfo, v11);
    byte_4B1C5AE = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  v15 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Count__);
    if ( v15 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v15,
                                                               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Item__);
    if ( list )
    {
      v13 = list;
      if ( LODWORD(list[1].monitor) == eventId && HIDWORD(list[1].klass) == groupId )
      {
        if ( !v12 )
          goto LABEL_19;
        items = v12->fields._items;
        v19 = Method_System_Collections_Generic_List_EventPointUpperEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          goto LABEL_19;
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)list,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v13;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v13, v16, v17);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v15;
    if ( !list )
      goto LABEL_19;
  }
  if ( !v12 )
LABEL_19:
    sub_1BCB254(list, v13);
  return (EventPointUpperEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v12,
                                          (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
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
  EventPointUpperEntity_array *List; // x0
  __int64 v12; // x1
  EventPointUpperEntity_array *v13; // x20
  const MethodInfo *v14; // x2
  __int64 v15; // x8
  EventPointUpperReleaseMaster_o *v16; // x21
  unsigned __int64 v17; // x24
  EventPointUpperEntity_o *v18; // x23
  char v19; // w25
  EventPointUpperEntity_o *v20; // x22

  if ( (byte_4B1C5AF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___, *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BCAFF8(&StringLiteral_8539/*"MAX_EVENT_POINT"*/, v8);
    byte_4B1C5AF = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8539/*"MAX_EVENT_POINT"*/, 0LL);
  List = EventPointUpperMaster__getList(this, eventId, groupId, v10);
  if ( !List )
    goto LABEL_23;
  v13 = List;
  if ( *(_QWORD *)&List->max_length )
  {
    List = (EventPointUpperEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( List )
    {
      List = (EventPointUpperEntity_array *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)List,
                                              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___);
      v15 = *(_QWORD *)&v13->max_length;
      if ( (int)v15 >= 1 )
      {
        v16 = (EventPointUpperReleaseMaster_o *)List;
        v17 = 0LL;
        v18 = 0LL;
        v19 = 1;
        do
        {
          if ( v17 >= (unsigned int)v15 )
            sub_1BCB25C(List, v12, v14);
          v20 = v13->m_Items[v17];
          if ( !v18 )
            goto LABEL_12;
          if ( !v20 )
            goto LABEL_23;
          if ( v18->fields.priority < v20->fields.priority )
          {
LABEL_12:
            if ( !v16 )
              goto LABEL_23;
            List = (EventPointUpperEntity_array *)EventPointUpperReleaseMaster__IsOpen(v16, v13->m_Items[v17], v14);
            LODWORD(v15) = v13->max_length;
            if ( ((unsigned __int8)List & 1) != 0 )
              v18 = v20;
            v19 &= (unsigned __int8)List;
          }
          ++v17;
        }
        while ( (__int64)v17 < (int)v15 );
        if ( v18 )
        {
          if ( (v19 & 1) == 0 )
            return v18->fields.value;
        }
        else if ( (v19 & 1) == 0 )
        {
          return Value;
        }
      }
      return 0;
    }
LABEL_23:
    sub_1BCB254(List, v12);
  }
  return Value;
}