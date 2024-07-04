void __fastcall EventProgressValueMaster___ctor(EventProgressValueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E28A5 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string___ctor__, method);
    byte_48E28A5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    393,
    (const MethodInfo_2FE6D64 *)Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventProgressValueEntity_o *__fastcall EventProgressValueMaster__GetCurrentEventProgressValueEntity(
        EventProgressValueMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *EntityListByEventId; // x0
  __int64 v9; // x1
  int32_t i; // w20
  EventProgressValueEntity_o *v11; // x21
  __int64 methodPtr_low; // x10
  int32_t klass_high; // w22
  int32_t klass; // w24
  int64_t monitor_low; // x23

  if ( (byte_48E28A7 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, *(_QWORD *)&eventId);
    sub_1B00CCC(&CondType_TypeInfo, v5);
    sub_1B00CCC(&EventProgressValueEntity_TypeInfo, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventProgressValueEntity__get_Count__, v7);
    byte_48E28A7 = 1;
  }
  EntityListByEventId = (System_Collections_ObjectModel_Collection_T__o *)EventProgressValueMaster__GetEntityListByEventId(
                                                                            this,
                                                                            eventId,
                                                                            method);
  if ( !EntityListByEventId )
LABEL_16:
    sub_1B00F28(EntityListByEventId, v9);
  for ( i = LODWORD(EntityListByEventId[1].klass) - 1; (i & 0x80000000) == 0; --i )
  {
    EntityListByEventId = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !EntityListByEventId )
      goto LABEL_16;
    EntityListByEventId = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                              EntityListByEventId,
                                                                              i,
                                                                              (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !EntityListByEventId )
      goto LABEL_16;
    v11 = (EventProgressValueEntity_o *)EntityListByEventId;
    methodPtr_low = LOBYTE(EventProgressValueEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(EntityListByEventId->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (EventProgressValueEntity_c *)EntityListByEventId->klass->_2.typeHierarchy[methodPtr_low - 1] != EventProgressValueEntity_TypeInfo )
    {
      goto LABEL_16;
    }
    klass = (int32_t)EntityListByEventId[1].klass;
    klass_high = HIDWORD(EntityListByEventId[1].klass);
    monitor_low = SLODWORD(EntityListByEventId[1].monitor);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0LL) )
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

  if ( (byte_48E28A3 & 1) == 0 )
  {
    sub_1B00CCC(
      &Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_48E28A3 = 1;
  }
  PK = (Il2CppObject *)EventProgressValueEntity__CreatePK(eventId, priority, *(const MethodInfo **)&priority);
  return (EventProgressValueEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_2FE6DA4 *)Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__GetEntity__);
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
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w22
  int32_t v15; // w23
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_48E28A6 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B00CCC(&EventProgressValueEntity_TypeInfo, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventProgressValueEntity__Add__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventProgressValueEntity___ctor__, v8);
    sub_1B00CCC(&System_Collections_Generic_List_EventProgressValueEntity__TypeInfo, v9);
    byte_48E28A6 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_EventProgressValueEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_EventProgressValueEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v11 = list;
        methodPtr_low = LOBYTE(EventProgressValueEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventProgressValueEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventProgressValueEntity_TypeInfo
          && LODWORD(list->fields.items) == eventId )
        {
          if ( !v10 )
            break;
          items = v10->fields._items;
          v20 = Method_System_Collections_Generic_List_EventProgressValueEntity__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)list,
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v11;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v11, v16, v17);
          }
        }
      }
      if ( v14 == ++v15 )
        return (System_Collections_Generic_List_EventProgressValueEntity__o *)v10;
    }
LABEL_18:
    sub_1B00F28(list, v11);
  }
  return (System_Collections_Generic_List_EventProgressValueEntity__o *)v10;
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

  if ( (byte_48E28A4 & 1) == 0 )
  {
    sub_1B00CCC(
      &Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__TryGetEntity__,
      entity);
    byte_48E28A4 = 1;
  }
  PK = (Il2CppObject *)EventProgressValueEntity__CreatePK(eventId, priority, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_2FE6DF4 *)Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__TryGetEntity__);
}