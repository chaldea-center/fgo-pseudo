void EventPointUpperMaster___ctor(EventPointUpperMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C8FE & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string___ctor__);
    byte_4D2C8FE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    291,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string___ctor__);
}


EventPointUpperEntity_array *EventPointUpperMaster__GetEntitiesFromEventId(
        EventPointUpperMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4D2C8FF & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventPointUpperEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
    byte_4D2C8FF = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Item__);
    if ( !list )
      goto LABEL_18;
    v6 = list;
    if ( LODWORD(list[1].monitor) == eventId )
    {
      if ( !v5 )
        goto LABEL_18;
      items = v5->fields._items;
      v16 = Method_System_Collections_Generic_List_EventPointUpperEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        goto LABEL_18;
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)list,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v6;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v5 )
LABEL_18:
    sub_1C942F0(list, v6);
  return (EventPointUpperEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventPointUpperEntity_o *EventPointUpperMaster__GetEntity(
        EventPointUpperMaster_o *this,
        int32_t version,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2C8FC & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__GetEntity__);
    byte_4D2C8FC = 1;
  }
  PK = (Il2CppObject *)EventPointUpperEntity__CreatePK(version, id, priority, *(const MethodInfo **)&priority);
  return (EventPointUpperEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_345FF78 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EventPointUpperMaster__TryGetEntity(
        EventPointUpperMaster_o *this,
        EventPointUpperEntity_o **entity,
        int32_t version,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2C8FD & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__TryGetEntity__);
    byte_4D2C8FD = 1;
  }
  PK = (Il2CppObject *)EventPointUpperEntity__CreatePK(version, id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__TryGetEntity__);
}


EventPointUpperEntity_array *EventPointUpperMaster__getList(
        EventPointUpperMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_Collections_ObjectModel_Collection_T__o *v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
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

  if ( (byte_4D2C900 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventPointUpperEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
    byte_4D2C900 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Count__);
    if ( v10 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Item__);
    if ( list )
    {
      v8 = list;
      if ( LODWORD(list[1].monitor) == eventId && HIDWORD(list[1].klass) == groupId )
      {
        if ( !v7 )
          goto LABEL_19;
        items = v7->fields._items;
        v18 = Method_System_Collections_Generic_List_EventPointUpperEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_19;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v8;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v8, v11, v12, v13, v14, v15, v16);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_19;
  }
  if ( !v7 )
LABEL_19:
    sub_1C942F0(list, v8);
  return (EventPointUpperEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v7,
                                          (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
}


int32_t EventPointUpperMaster__getPointUpper(
        EventPointUpperMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  int32_t Value; // w19
  const MethodInfo *v8; // x3
  EventPointUpperEntity_array *List; // x0
  __int64 v10; // x1
  EventPointUpperEntity_array *v11; // x20
  const MethodInfo *v12; // x2
  il2cpp_array_size_t max_length; // x8
  EventPointUpperReleaseMaster_o *v14; // x21
  unsigned __int64 v15; // x24
  EventPointUpperEntity_o *v16; // x23
  char v17; // w25
  EventPointUpperEntity_o *v18; // x22

  if ( (byte_4D2C901 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_8630/*"MAX_EVENT_POINT"*/);
    byte_4D2C901 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8630/*"MAX_EVENT_POINT"*/, 0);
  List = EventPointUpperMaster__getList(this, eventId, groupId, v8);
  if ( !List )
    goto LABEL_23;
  v11 = List;
  if ( List->max_length )
  {
    List = (EventPointUpperEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( List )
    {
      List = (EventPointUpperEntity_array *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)List,
                                              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___);
      max_length = v11->max_length;
      if ( (int)max_length >= 1 )
      {
        v14 = (EventPointUpperReleaseMaster_o *)List;
        v15 = 0;
        v16 = 0;
        v17 = 1;
        do
        {
          if ( v15 >= (unsigned int)max_length )
            sub_1C942F8(List);
          v18 = v11->m_Items[v15];
          if ( !v16 )
            goto LABEL_12;
          if ( !v18 )
            goto LABEL_23;
          if ( v16->fields.priority < v18->fields.priority )
          {
LABEL_12:
            if ( !v14 )
              goto LABEL_23;
            List = (EventPointUpperEntity_array *)EventPointUpperReleaseMaster__IsOpen(v14, v11->m_Items[v15], v12);
            LODWORD(max_length) = v11->max_length;
            if ( ((unsigned __int8)List & 1) != 0 )
              v16 = v18;
            v17 &= (unsigned __int8)List;
          }
          ++v15;
        }
        while ( (__int64)v15 < (int)max_length );
        if ( v16 )
        {
          if ( (v17 & 1) == 0 )
            return v16->fields.value;
        }
        else if ( (v17 & 1) == 0 )
        {
          return Value;
        }
      }
      return 0;
    }
LABEL_23:
    sub_1C942F0(List, v10);
  }
  return Value;
}