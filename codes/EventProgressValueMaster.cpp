void __fastcall EventProgressValueMaster___ctor(EventProgressValueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7B3B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string___ctor__, method);
    byte_4BC7B3B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    398,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventProgressValueEntity_o *__fastcall EventProgressValueMaster__GetCurrentEventProgressValueEntity(
        EventProgressValueMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *EntityListByEventId; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x19
  int32_t i; // w20
  EventProgressValueEntity_o *v11; // x21
  int32_t version; // w22
  int32_t size; // w24
  int64_t syncRoot_low; // x23

  if ( (byte_4BC7B3D & 1) == 0 )
  {
    sub_1C1ABD4(&CondType_TypeInfo, *(_QWORD *)&eventId);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventProgressValueEntity__get_Count__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventProgressValueEntity__get_Item__, v6);
    byte_4BC7B3D = 1;
  }
  EntityListByEventId = (System_Collections_Generic_List_object__o *)EventProgressValueMaster__GetEntityListByEventId(
                                                                       this,
                                                                       eventId,
                                                                       method);
  if ( !EntityListByEventId )
LABEL_13:
    sub_1C1AE30(EntityListByEventId, v8);
  v9 = EntityListByEventId;
  for ( i = EntityListByEventId->fields._size - 1; (i & 0x80000000) == 0; --i )
  {
    EntityListByEventId = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v9,
                                                                         i,
                                                                         (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_EventProgressValueEntity__get_Item__);
    if ( !EntityListByEventId )
      goto LABEL_13;
    v11 = (EventProgressValueEntity_o *)EntityListByEventId;
    size = EntityListByEventId->fields._size;
    version = EntityListByEventId->fields._version;
    syncRoot_low = SLODWORD(EntityListByEventId->fields._syncRoot);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(size, version, syncRoot_low, 0, 0LL, 0LL) )
      return v11;
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

  if ( (byte_4BC7B39 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4BC7B39 = 1;
  }
  PK = (Il2CppObject *)EventProgressValueEntity__CreatePK(eventId, priority, *(const MethodInfo **)&priority);
  return (EventProgressValueEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_324D130 *)Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventProgressValueEntity__o *__fastcall EventProgressValueMaster__GetEntityListByEventId(
        EventProgressValueMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x21
  int64_t v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w22
  int32_t v14; // w23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4BC7B3C & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_EventProgressValueEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_EventProgressValueEntity__get_Item__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventProgressValueEntity__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventProgressValueEntity___ctor__, v7);
    sub_1C1ABD4(&System_Collections_Generic_List_EventProgressValueEntity__TypeInfo, v8);
    byte_4BC7B3C = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_EventProgressValueEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_EventProgressValueEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_EventProgressValueEntity__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_EventProgressValueEntity__get_Item__);
      if ( list )
      {
        v10 = (int64_t)list;
        if ( LODWORD(list->fields.items) == eventId )
        {
          if ( !v9 )
            break;
          items = v9->fields._items;
          v22 = Method_System_Collections_Generic_List_EventProgressValueEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)list,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v10;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v24 + 4), v10, v15, v16, v17, v18, v19, v20);
          }
        }
      }
      if ( v13 == ++v14 )
        return (System_Collections_Generic_List_EventProgressValueEntity__o *)v9;
    }
LABEL_16:
    sub_1C1AE30(list, v10);
  }
  return (System_Collections_Generic_List_EventProgressValueEntity__o *)v9;
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

  if ( (byte_4BC7B3A & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__TryGetEntity__,
      entity);
    byte_4BC7B3A = 1;
  }
  PK = (Il2CppObject *)EventProgressValueEntity__CreatePK(eventId, priority, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__TryGetEntity__);
}