void __fastcall EventPointUpperMaster___ctor(EventPointUpperMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B1EC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string___ctor__);
    byte_4A5B1EC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    285,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string___ctor__);
}


EventPointUpperEntity_array *__fastcall EventPointUpperMaster__GetEntitiesFromEventId(
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
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4A5B1ED & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventPointUpperEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointUpperEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
    byte_4A5B1ED = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_20;
    v6 = list;
    methodPtr_low = LOBYTE(EventPointUpperEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (EventPointUpperEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventPointUpperEntity_TypeInfo )
    {
      goto LABEL_20;
    }
    if ( LODWORD(list[1].monitor) == eventId )
    {
      if ( !v5 )
        goto LABEL_20;
      items = v5->fields._items;
      v13 = Method_System_Collections_Generic_List_EventPointUpperEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        goto LABEL_20;
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)list,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        v15 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v15[4] = (Il2CppClass *)v6;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v6, v9, v10);
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v5 )
LABEL_20:
    sub_1B8880C(list, v6);
  return (EventPointUpperEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
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

  if ( (byte_4A5B1EA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__GetEntity__);
    byte_4A5B1EA = 1;
  }
  PK = (Il2CppObject *)EventPointUpperEntity__CreatePK(version, id, priority, *(const MethodInfo **)&priority);
  return (EventPointUpperEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_311DC8C *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__GetEntity__);
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

  if ( (byte_4A5B1EB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__TryGetEntity__);
    byte_4A5B1EB = 1;
  }
  PK = (Il2CppObject *)EventPointUpperEntity__CreatePK(version, id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__TryGetEntity__);
}


EventPointUpperEntity_array *__fastcall EventPointUpperMaster__getList(
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
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4A5B1EE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventPointUpperEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointUpperEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
    byte_4A5B1EE = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v10 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v8 = list;
      methodPtr_low = LOBYTE(EventPointUpperEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (EventPointUpperEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventPointUpperEntity_TypeInfo
        && LODWORD(list[1].monitor) == eventId
        && HIDWORD(list[1].klass) == groupId )
      {
        if ( !v7 )
          goto LABEL_21;
        items = v7->fields._items;
        v15 = Method_System_Collections_Generic_List_EventPointUpperEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v17[4] = (Il2CppClass *)v8;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v8, v11, v12);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_21;
  }
  if ( !v7 )
LABEL_21:
    sub_1B8880C(list, v8);
  return (EventPointUpperEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v7,
                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
}


int32_t __fastcall EventPointUpperMaster__getPointUpper(
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
  __int64 v13; // x8
  EventPointUpperReleaseMaster_o *v14; // x21
  unsigned __int64 v15; // x24
  EventPointUpperEntity_o *v16; // x23
  char v17; // w25
  EventPointUpperEntity_o *v18; // x22

  if ( (byte_4A5B1EF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_8581/*"MAX_EVENT_POINT"*/);
    byte_4A5B1EF = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8581/*"MAX_EVENT_POINT"*/, 0LL);
  List = EventPointUpperMaster__getList(this, eventId, groupId, v8);
  if ( !List )
    goto LABEL_23;
  v11 = List;
  if ( *(_QWORD *)&List->max_length )
  {
    List = (EventPointUpperEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( List )
    {
      List = (EventPointUpperEntity_array *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)List,
                                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___);
      v13 = *(_QWORD *)&v11->max_length;
      if ( (int)v13 >= 1 )
      {
        v14 = (EventPointUpperReleaseMaster_o *)List;
        v15 = 0LL;
        v16 = 0LL;
        v17 = 1;
        do
        {
          if ( v15 >= (unsigned int)v13 )
            sub_1B88814(List, v10);
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
            LODWORD(v13) = v11->max_length;
            if ( ((unsigned __int8)List & 1) != 0 )
              v16 = v18;
            v17 &= (unsigned __int8)List;
          }
          ++v15;
        }
        while ( (__int64)v15 < (int)v13 );
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
    sub_1B8880C(List, v10);
  }
  return Value;
}