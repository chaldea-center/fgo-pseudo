void __fastcall EventPointUpperMaster___ctor(EventPointUpperMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1627B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string___ctor__, method, v2);
    byte_4B1627B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    285,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPointUpperEntity_array *__fastcall EventPointUpperMaster__GetEntitiesFromEventId(
        EventPointUpperMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x21
  int64_t v19; // x1
  int64_t list; // x0
  int32_t v21; // w22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4B1627C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&EventPointUpperEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointUpperEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_EventPointUpperEntity__TypeInfo, v16, v17);
    byte_4B1627C = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventPointUpperEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v21 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v21 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v21,
                      (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_20;
    v19 = list;
    methodPtr_low = LOBYTE(EventPointUpperEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(EventPointUpperEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != EventPointUpperEntity_TypeInfo )
    {
      goto LABEL_20;
    }
    if ( *(_DWORD *)(list + 32) == eventId )
    {
      if ( !v18 )
        goto LABEL_20;
      items = v18->fields._items;
      v30 = Method_System_Collections_Generic_List_EventPointUpperEntity__Add__;
      ++v18->fields._version;
      if ( !items )
        goto LABEL_20;
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)list,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v19;
        sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 4), v19, v22, v23, v24, v25, v26, v27);
      }
    }
    list = (int64_t)this->fields.list;
    ++v21;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v18 )
LABEL_20:
    sub_1BCAA3C(list, v19);
  return (EventPointUpperEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v18,
                                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
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

  if ( (byte_4B16279 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__GetEntity__,
      *(_QWORD *)&version,
      *(_QWORD *)&id);
    byte_4B16279 = 1;
  }
  PK = (Il2CppObject *)EventPointUpperEntity__CreatePK(version, id, priority, *(const MethodInfo **)&priority);
  return (EventPointUpperEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_31B3198 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__GetEntity__);
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

  if ( (byte_4B1627A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&version);
    byte_4B1627A = 1;
  }
  PK = (Il2CppObject *)EventPointUpperEntity__CreatePK(version, id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventPointUpperMaster__EventPointUpperEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventPointUpperEntity_array *__fastcall EventPointUpperMaster__getList(
        EventPointUpperMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x22
  int64_t v20; // x1
  int64_t list; // x0
  int32_t v22; // w23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B1627D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&groupId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&EventPointUpperEntity_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointUpperEntity__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_EventPointUpperEntity__TypeInfo, v17, v18);
    byte_4B1627D = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventPointUpperEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       *(_QWORD *)&groupId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventPointUpperEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_21;
  v22 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v22 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v22,
                      (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v20 = list;
      methodPtr_low = LOBYTE(EventPointUpperEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(EventPointUpperEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventPointUpperEntity_TypeInfo
        && *(_DWORD *)(list + 32) == eventId
        && *(_DWORD *)(list + 28) == groupId )
      {
        if ( !v19 )
          goto LABEL_21;
        items = v19->fields._items;
        v31 = Method_System_Collections_Generic_List_EventPointUpperEntity__Add__;
        ++v19->fields._version;
        if ( !items )
          goto LABEL_21;
        size = v19->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v19,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v19->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v20;
          sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), v20, v23, v24, v25, v26, v27, v28);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v22;
    if ( !list )
      goto LABEL_21;
  }
  if ( !v19 )
LABEL_21:
    sub_1BCAA3C(list, v20);
  return (EventPointUpperEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v19,
                                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventPointUpperEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventPointUpperMaster__getPointUpper(
        EventPointUpperMaster_o *this,
        int32_t eventId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t Value; // w19
  const MethodInfo *v12; // x3
  EventPointUpperEntity_array *List; // x0
  __int64 v14; // x1
  EventPointUpperEntity_array *v15; // x20
  const MethodInfo *v16; // x2
  __int64 v17; // x8
  EventPointUpperReleaseMaster_o *v18; // x21
  unsigned __int64 v19; // x24
  EventPointUpperEntity_o *v20; // x23
  char v21; // w25
  EventPointUpperEntity_o *v22; // x22

  if ( (byte_4B1627E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___,
      *(_QWORD *)&eventId,
      *(_QWORD *)&groupId);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&StringLiteral_8707/*"MAX_EVENT_POINT"*/, v9, v10);
    byte_4B1627E = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8707/*"MAX_EVENT_POINT"*/, 0LL);
  List = EventPointUpperMaster__getList(this, eventId, groupId, v12);
  if ( !List )
    goto LABEL_23;
  v15 = List;
  if ( *(_QWORD *)&List->max_length )
  {
    List = (EventPointUpperEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( List )
    {
      List = (EventPointUpperEntity_array *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)List,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPointUpperReleaseMaster___);
      v17 = *(_QWORD *)&v15->max_length;
      if ( (int)v17 >= 1 )
      {
        v18 = (EventPointUpperReleaseMaster_o *)List;
        v19 = 0LL;
        v20 = 0LL;
        v21 = 1;
        do
        {
          if ( v19 >= (unsigned int)v17 )
            sub_1BCAA44(List, v14);
          v22 = v15->m_Items[v19];
          if ( !v20 )
            goto LABEL_12;
          if ( !v22 )
            goto LABEL_23;
          if ( v20->fields.priority < v22->fields.priority )
          {
LABEL_12:
            if ( !v18 )
              goto LABEL_23;
            List = (EventPointUpperEntity_array *)EventPointUpperReleaseMaster__IsOpen(v18, v15->m_Items[v19], v16);
            LODWORD(v17) = v15->max_length;
            if ( ((unsigned __int8)List & 1) != 0 )
              v20 = v22;
            v21 &= (unsigned __int8)List;
          }
          ++v19;
        }
        while ( (__int64)v19 < (int)v17 );
        if ( v20 )
        {
          if ( (v21 & 1) == 0 )
            return v20->fields.value;
        }
        else if ( (v21 & 1) == 0 )
        {
          return Value;
        }
      }
      return 0;
    }
LABEL_23:
    sub_1BCAA3C(List, v14);
  }
  return Value;
}