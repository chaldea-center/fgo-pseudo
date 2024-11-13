void __fastcall EventGroupMaster___ctor(EventGroupMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B161B1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string___ctor__, method, v2);
    byte_4B161B1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    293,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventGroupEntity__o *__fastcall EventGroupMaster__GetEntitiesByGroupId(
        EventGroupMaster_o *this,
        int32_t groupId,
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
  System_Collections_Generic_List_object__o *v16; // x21
  int64_t v17; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v19; // w22
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4B161B2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&groupId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&EventGroupEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventGroupEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventGroupEntity___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_EventGroupEntity__TypeInfo, v14, v15);
    byte_4B161B2 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventGroupEntity__TypeInfo,
                                                       *(_QWORD *)&groupId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_1BCAA3C(list, v17);
  v19 = 0;
  while ( v19 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v19,
                                                               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v17 = (int64_t)list;
      methodPtr_low = LOBYTE(EventGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (EventGroupEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventGroupEntity_TypeInfo
        && LODWORD(list->fields.items) == groupId )
      {
        if ( !v16 )
          goto LABEL_17;
        items = v16->fields._items;
        v28 = Method_System_Collections_Generic_List_EventGroupEntity__Add__;
        ++v16->fields._version;
        if ( !items )
          goto LABEL_17;
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v17;
          sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 4), v17, v20, v21, v22, v23, v24, v25);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v19;
    if ( !list )
      goto LABEL_17;
  }
  return (System_Collections_Generic_List_EventGroupEntity__o *)v16;
}


// local variable allocation has failed, the output may be wrong!
EventGroupEntity_o *__fastcall EventGroupMaster__GetEntity(
        EventGroupMaster_o *this,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B161AF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&eventId);
    byte_4B161AF = 1;
  }
  PK = (Il2CppObject *)EventGroupEntity__CreatePK(id, eventId, *(const MethodInfo **)&eventId);
  return (EventGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_31B3198 *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventGroupMaster__GetEventGroupId(
        EventGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v10; // w21
  int32_t *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B161B3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&EventGroupEntity_TypeInfo, v7, v8);
    byte_4B161B3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_1BCAA3C(list, *(_QWORD *)&eventId);
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return -1;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_12;
    Item = (int32_t *)System_Collections_ObjectModel_Collection_object___get_Item(
                        list,
                        v10,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(EventGroupEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) >= (unsigned int)methodPtr_low
        && *(EventGroupEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * methodPtr_low - 8) == EventGroupEntity_TypeInfo
        && Item[5] == eventId )
      {
        return Item[4];
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_12;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventGroupMaster__GetFirstOpenEventId(
        EventGroupMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t EventGroupId; // w0
  const MethodInfo *v16; // x2
  void *EntitiesByGroupId; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_List_object__o *v21; // x19
  EventGroupMaster___c_c *v22; // x0
  System_Comparison_T__o *_9__5_0; // x20
  Il2CppObject *v24; // x21
  struct EventGroupMaster___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  v3 = eventId;
  if ( (byte_4B161B4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventGroupEntity__TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventGroupEntity__Sort__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventGroupEntity__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_EventGroupMaster___c__GetFirstOpenEventId_b__5_0__, v11, v12);
    sub_1BCA7E0(&EventGroupMaster___c_TypeInfo, v13, v14);
    byte_4B161B4 = 1;
  }
  EventGroupId = EventGroupMaster__GetEventGroupId(this, v3, method);
  if ( EventGroupId != -1 )
  {
    EntitiesByGroupId = EventGroupMaster__GetEntitiesByGroupId(this, EventGroupId, v16);
    if ( !EntitiesByGroupId )
      goto LABEL_15;
    v21 = (System_Collections_Generic_List_object__o *)EntitiesByGroupId;
    if ( *((_DWORD *)EntitiesByGroupId + 6) )
    {
      v22 = EventGroupMaster___c_TypeInfo;
      if ( !EventGroupMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventGroupMaster___c_TypeInfo, v18);
        v22 = EventGroupMaster___c_TypeInfo;
      }
      _9__5_0 = (System_Comparison_T__o *)v22->static_fields->__9__5_0;
      if ( !_9__5_0 )
      {
        if ( !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22, v18);
          v22 = EventGroupMaster___c_TypeInfo;
        }
        v24 = (Il2CppObject *)v22->static_fields->__9;
        _9__5_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventGroupEntity__TypeInfo, v18, v19, v20);
        System_Comparison_object____ctor(_9__5_0, v24, Method_EventGroupMaster___c__GetFirstOpenEventId_b__5_0__, 0LL);
        static_fields = EventGroupMaster___c_TypeInfo->static_fields;
        static_fields->__9__5_0 = (struct System_Comparison_EventGroupEntity__o *)_9__5_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__5_0,
          (int64_t)_9__5_0,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
      }
      System_Collections_Generic_List_object___Sort_56244000(
        v21,
        _9__5_0,
        (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventGroupEntity__Sort__);
      EntitiesByGroupId = System_Collections_Generic_List_object___get_Item(
                            v21,
                            0,
                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventGroupEntity__get_Item__);
      if ( EntitiesByGroupId )
        return *((_DWORD *)EntitiesByGroupId + 5);
LABEL_15:
      sub_1BCAA3C(EntitiesByGroupId, v18);
    }
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventGroupMaster__TryGetEntity(
        EventGroupMaster_o *this,
        EventGroupEntity_o **entity,
        int32_t id,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B161B0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&id);
    byte_4B161B0 = 1;
  }
  PK = (Il2CppObject *)EventGroupEntity__CreatePK(id, eventId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventGroupMaster__EventGroupEntity__string__TryGetEntity__);
}


void __fastcall EventGroupMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B161B5 & 1) == 0 )
  {
    sub_1BCA7E0(&EventGroupMaster___c_TypeInfo, v1, v2);
    byte_4B161B5 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventGroupMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventGroupMaster___c_TypeInfo->static_fields->__9 = (struct EventGroupMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventGroupMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventGroupMaster___c___ctor(EventGroupMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventGroupMaster___c___GetFirstOpenEventId_b__5_0(
        EventGroupMaster___c_o *this,
        EventGroupEntity_o *a,
        EventGroupEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.eventId - b->fields.eventId;
}