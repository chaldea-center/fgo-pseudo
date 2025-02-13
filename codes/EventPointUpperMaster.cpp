void __fastcall EventPointUpperMaster___ctor(EventPointUpperMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC5C3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string___ctor__);
    byte_4BDC5C3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    289,
    (const MethodInfo_325E55C *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string___ctor__);
}


EventPointUpperEntity_array *__fastcall EventPointUpperMaster__GetEntitiesFromEventId(
        EventPointUpperMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int64_t v6; // x1
  int64_t list; // x0
  int32_t v8; // w22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4BDC5C4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventPointUpperEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
    byte_4BDC5C4 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v8 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v8,
                      (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Item__);
    if ( !list )
      goto LABEL_18;
    v6 = list;
    if ( *(_DWORD *)(list + 32) == eventId )
    {
      if ( !v5 )
        goto LABEL_18;
      items = v5->fields._items;
      v16 = Method_System_Collections_Generic_List_EventPointUpperEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        goto LABEL_18;
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)list,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v6;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), v6, v9, v10, v11, v12, v13, v14);
      }
    }
    list = (int64_t)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v5 )
LABEL_18:
    sub_1C22094(list, v6);
  return (EventPointUpperEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v5,
                                          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
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

  if ( (byte_4BDC5C1 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__GetEntity__);
    byte_4BDC5C1 = 1;
  }
  PK = (Il2CppObject *)EventPointUpperEntity__CreatePK(version, id, priority, *(const MethodInfo **)&priority);
  return (EventPointUpperEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_3260880 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__GetEntity__);
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

  if ( (byte_4BDC5C2 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__TryGetEntity__);
    byte_4BDC5C2 = 1;
  }
  PK = (Il2CppObject *)EventPointUpperEntity__CreatePK(version, id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__TryGetEntity__);
}


EventPointUpperEntity_array *__fastcall EventPointUpperMaster__getList(
        EventPointUpperMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int64_t v8; // x1
  int64_t list; // x0
  int32_t v10; // w23
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4BDC5C5 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventPointUpperEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
    byte_4BDC5C5 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventPointUpperEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_19;
  v10 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Count__);
    if ( v10 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v10,
                      (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_EventPointUpperEntity__get_Item__);
    if ( list )
    {
      v8 = list;
      if ( *(_DWORD *)(list + 32) == eventId && *(_DWORD *)(list + 28) == groupId )
      {
        if ( !v7 )
          goto LABEL_19;
        items = v7->fields._items;
        v18 = Method_System_Collections_Generic_List_EventPointUpperEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_19;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v8;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 4), v8, v11, v12, v13, v14, v15, v16);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_19;
  }
  if ( !v7 )
LABEL_19:
    sub_1C22094(list, v8);
  return (EventPointUpperEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v7,
                                          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
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

  if ( (byte_4BDC5C6 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_8765/*"MAX_EVENT_POINT"*/);
    byte_4BDC5C6 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8765/*"MAX_EVENT_POINT"*/, 0LL);
  List = EventPointUpperMaster__getList(this, eventId, groupId, v8);
  if ( !List )
    goto LABEL_23;
  v11 = List;
  if ( *(_QWORD *)&List->max_length )
  {
    List = (EventPointUpperEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( List )
    {
      List = (EventPointUpperEntity_array *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)List,
                                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___);
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
            sub_1C2209C(List, v10);
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
    sub_1C22094(List, v10);
  }
  return Value;
}