void EventPointUpperMaster___ctor(EventPointUpperMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938830 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string___ctor__);
    byte_5938830 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    293,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string___ctor__);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_5938831 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventPointUpperEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
    byte_5938831 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Item__);
    if ( !list )
      goto LABEL_15;
    v6 = list;
    if ( LODWORD(list[1].monitor) == eventId )
    {
      if ( !v5 )
        goto LABEL_15;
      items = v5->fields._items;
      v16 = Method_System_Collections_Generic_List_EventPointUpperEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        goto LABEL_15;
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)list,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v6;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_15;
  }
  if ( !v5 )
LABEL_15:
    sub_21FFECC(list, v6);
  return (EventPointUpperEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
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

  if ( (byte_593882E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__GetEntity__);
    byte_593882E = 1;
  }
  PK = (Il2CppObject *)EventPointUpperEntity__CreatePK(version, id, priority, *(const MethodInfo **)&priority);
  return (EventPointUpperEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_3EE2044 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__GetEntity__);
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

  if ( (byte_593882F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__TryGetEntity__);
    byte_593882F = 1;
  }
  PK = (Il2CppObject *)EventPointUpperEntity__CreatePK(version, id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__TryGetEntity__);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_5938832 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventPointUpperEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
    byte_5938832 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Count__);
    if ( v10 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Item__);
    if ( list )
    {
      v8 = list;
      if ( LODWORD(list[1].monitor) == eventId && HIDWORD(list[1].klass) == groupId )
      {
        if ( !v7 )
          goto LABEL_16;
        items = v7->fields._items;
        v18 = Method_System_Collections_Generic_List_EventPointUpperEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_16;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v8;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v8, v11, v12, v13, v14, v15, v16);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_16;
  }
  if ( !v7 )
LABEL_16:
    sub_21FFECC(list, v8);
  return (EventPointUpperEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v7,
                                          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
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

  if ( (byte_5938833 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_8960/*"MAX_EVENT_POINT"*/);
    byte_5938833 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8960/*"MAX_EVENT_POINT"*/, 0);
  List = EventPointUpperMaster__getList(this, eventId, groupId, v8);
  if ( !List )
    goto LABEL_22;
  v11 = List;
  if ( List->max_length )
  {
    List = (EventPointUpperEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( List )
    {
      List = (EventPointUpperEntity_array *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)List,
                                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___);
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
            sub_21FFED4(List);
          v18 = v11->m_Items[v15];
          if ( !v16 )
            goto LABEL_12;
          if ( !v18 )
            goto LABEL_22;
          if ( v16->fields.priority < v18->fields.priority )
          {
LABEL_12:
            if ( !v14 )
              goto LABEL_22;
            List = (EventPointUpperEntity_array *)EventPointUpperReleaseMaster__IsOpen(v14, v11->m_Items[v15], v12);
            LODWORD(max_length) = v11->max_length;
            v17 &= (unsigned __int8)List;
            if ( ((unsigned __int8)List & 1) != 0 )
              v16 = v18;
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
LABEL_22:
    sub_21FFECC(List, v10);
  }
  return Value;
}