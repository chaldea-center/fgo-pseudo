void __fastcall EventPointUpperMaster___ctor(EventPointUpperMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E2896 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string___ctor__, method);
    byte_48E2896 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    284,
    (const MethodInfo_2FE6D64 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string___ctor__);
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
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v14; // w22
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_48E2897 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B00CCC(&EventPointUpperEntity_TypeInfo, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventPointUpperEntity__Add__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__, v9);
    sub_1B00CCC(&System_Collections_Generic_List_EventPointUpperEntity__TypeInfo, v10);
    byte_48E2897 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v14,
                                                               (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_20;
    v12 = list;
    methodPtr_low = LOBYTE(EventPointUpperEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (EventPointUpperEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventPointUpperEntity_TypeInfo )
    {
      goto LABEL_20;
    }
    if ( LODWORD(list[1].monitor) == eventId )
    {
      if ( !v11 )
        goto LABEL_20;
      items = v11->fields._items;
      v19 = Method_System_Collections_Generic_List_EventPointUpperEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        goto LABEL_20;
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)list,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v12;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v12, v15, v16);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v11 )
LABEL_20:
    sub_1B00F28(list, v12);
  return (EventPointUpperEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v11,
                                          (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
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

  if ( (byte_48E2894 & 1) == 0 )
  {
    sub_1B00CCC(
      &Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__GetEntity__,
      *(_QWORD *)&version);
    byte_48E2894 = 1;
  }
  PK = (Il2CppObject *)EventPointUpperEntity__CreatePK(version, id, priority, *(const MethodInfo **)&priority);
  return (EventPointUpperEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_2FE6DA4 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__GetEntity__);
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

  if ( (byte_48E2895 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__TryGetEntity__, entity);
    byte_48E2895 = 1;
  }
  PK = (Il2CppObject *)EventPointUpperEntity__CreatePK(version, id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_2FE6DF4 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__TryGetEntity__);
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
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x22
  System_Collections_ObjectModel_Collection_T__o *v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v16; // w23
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_48E2898 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B00CCC(&EventPointUpperEntity_TypeInfo, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventPointUpperEntity__Add__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__, v11);
    sub_1B00CCC(&System_Collections_Generic_List_EventPointUpperEntity__TypeInfo, v12);
    byte_48E2898 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  v16 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v16 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v16,
                                                               (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v14 = list;
      methodPtr_low = LOBYTE(EventPointUpperEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (EventPointUpperEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventPointUpperEntity_TypeInfo
        && LODWORD(list[1].monitor) == eventId
        && HIDWORD(list[1].klass) == groupId )
      {
        if ( !v13 )
          goto LABEL_21;
        items = v13->fields._items;
        v21 = Method_System_Collections_Generic_List_EventPointUpperEntity__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            (Il2CppObject *)list,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v14;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v14, v17, v18);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v16;
    if ( !list )
      goto LABEL_21;
  }
  if ( !v13 )
LABEL_21:
    sub_1B00F28(list, v14);
  return (EventPointUpperEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v13,
                                          (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
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

  if ( (byte_48E2899 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___, *(_QWORD *)&eventId);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B00CCC(&StringLiteral_8487/*"MAX_EVENT_POINT"*/, v8);
    byte_48E2899 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8487/*"MAX_EVENT_POINT"*/, 0LL);
  List = EventPointUpperMaster__getList(this, eventId, groupId, v10);
  if ( !List )
    goto LABEL_23;
  v13 = List;
  if ( *(_QWORD *)&List->max_length )
  {
    List = (EventPointUpperEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( List )
    {
      List = (EventPointUpperEntity_array *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)List,
                                              (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___);
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
            sub_1B00F30(List, v12);
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
    sub_1B00F28(List, v12);
  }
  return Value;
}