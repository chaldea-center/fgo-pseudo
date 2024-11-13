void __fastcall EventProgressValueMaster___ctor(EventProgressValueMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1628A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string___ctor__, method, v2);
    byte_4B1628A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    394,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventProgressValueEntity_o *__fastcall EventProgressValueMaster__GetCurrentEventProgressValueEntity(
        EventProgressValueMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *EntityListByEventId; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  int32_t i; // w20
  EventProgressValueEntity_o *v13; // x21
  int32_t version; // w22
  int32_t size; // w24
  int64_t syncRoot_low; // x23

  if ( (byte_4B1628C & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventProgressValueEntity__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventProgressValueEntity__get_Item__, v7, v8);
    byte_4B1628C = 1;
  }
  EntityListByEventId = (System_Collections_Generic_List_object__o *)EventProgressValueMaster__GetEntityListByEventId(
                                                                       this,
                                                                       eventId,
                                                                       method);
  if ( !EntityListByEventId )
LABEL_13:
    sub_1BCAA3C(EntityListByEventId, v10);
  v11 = EntityListByEventId;
  for ( i = EntityListByEventId->fields._size - 1; (i & 0x80000000) == 0; --i )
  {
    EntityListByEventId = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v11,
                                                                         i,
                                                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventProgressValueEntity__get_Item__);
    if ( !EntityListByEventId )
      goto LABEL_13;
    v13 = (EventProgressValueEntity_o *)EntityListByEventId;
    size = EntityListByEventId->fields._size;
    version = EntityListByEventId->fields._version;
    syncRoot_low = SLODWORD(EntityListByEventId->fields._syncRoot);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v10);
    if ( CondType__IsOpen(size, version, syncRoot_low, 0, 0LL, 0LL) )
      return v13;
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
EventProgressValueEntity_o *__fastcall EventProgressValueMaster__GetEntity(
        EventProgressValueMaster_o *this,
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16288 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&priority);
    byte_4B16288 = 1;
  }
  PK = (Il2CppObject *)EventProgressValueEntity__CreatePK(eventId, priority, *(const MethodInfo **)&priority);
  return (EventProgressValueEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_31B3198 *)Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventProgressValueEntity__o *__fastcall EventProgressValueMaster__GetEntityListByEventId(
        EventProgressValueMaster_o *this,
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
  System_Collections_Generic_List_object__o *v16; // x21
  int64_t v17; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v20; // w22
  int32_t v21; // w23
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

  if ( (byte_4B1628B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&EventProgressValueEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventProgressValueEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventProgressValueEntity___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_EventProgressValueEntity__TypeInfo, v14, v15);
    byte_4B1628B = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventProgressValueEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventProgressValueEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v21,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v17 = (int64_t)list;
        methodPtr_low = LOBYTE(EventProgressValueEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventProgressValueEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventProgressValueEntity_TypeInfo
          && LODWORD(list->fields.items) == eventId )
        {
          if ( !v16 )
            break;
          items = v16->fields._items;
          v30 = Method_System_Collections_Generic_List_EventProgressValueEntity__Add__;
          ++v16->fields._version;
          if ( !items )
            break;
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v32[4] = (Il2CppClass *)v17;
            sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 4), v17, v22, v23, v24, v25, v26, v27);
          }
        }
      }
      if ( v20 == ++v21 )
        return (System_Collections_Generic_List_EventProgressValueEntity__o *)v16;
    }
LABEL_18:
    sub_1BCAA3C(list, v17);
  }
  return (System_Collections_Generic_List_EventProgressValueEntity__o *)v16;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventProgressValueMaster__TryGetEntity(
        EventProgressValueMaster_o *this,
        EventProgressValueEntity_o **entity,
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16289 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B16289 = 1;
  }
  PK = (Il2CppObject *)EventProgressValueEntity__CreatePK(eventId, priority, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__TryGetEntity__);
}