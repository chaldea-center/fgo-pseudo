void __fastcall EventProgressValueMaster___ctor(EventProgressValueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B1FB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string___ctor__);
    byte_4A5B1FB = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    394,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string___ctor__);
}


EventProgressValueEntity_o *__fastcall EventProgressValueMaster__GetCurrentEventProgressValueEntity(
        EventProgressValueMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *EntityListByEventId; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x19
  int32_t i; // w20
  EventProgressValueEntity_o *v9; // x21
  int32_t version; // w22
  int32_t size; // w24
  int64_t syncRoot_low; // x23

  if ( (byte_4A5B1FD & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventProgressValueEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventProgressValueEntity__get_Item__);
    byte_4A5B1FD = 1;
  }
  EntityListByEventId = (System_Collections_Generic_List_object__o *)EventProgressValueMaster__GetEntityListByEventId(
                                                                       this,
                                                                       eventId,
                                                                       method);
  if ( !EntityListByEventId )
LABEL_13:
    sub_1B8880C(EntityListByEventId, v6);
  v7 = EntityListByEventId;
  for ( i = EntityListByEventId->fields._size - 1; (i & 0x80000000) == 0; --i )
  {
    EntityListByEventId = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         v7,
                                                                         i,
                                                                         (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventProgressValueEntity__get_Item__);
    if ( !EntityListByEventId )
      goto LABEL_13;
    v9 = (EventProgressValueEntity_o *)EntityListByEventId;
    size = EntityListByEventId->fields._size;
    version = EntityListByEventId->fields._version;
    syncRoot_low = SLODWORD(EntityListByEventId->fields._syncRoot);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(size, version, syncRoot_low, 0, 0LL, 0LL) )
      return v9;
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

  if ( (byte_4A5B1F9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__GetEntity__);
    byte_4A5B1F9 = 1;
  }
  PK = (Il2CppObject *)EventProgressValueEntity__CreatePK(eventId, priority, *(const MethodInfo **)&priority);
  return (EventProgressValueEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_311DC8C *)Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventProgressValueEntity__o *__fastcall EventProgressValueMaster__GetEntityListByEventId(
        EventProgressValueMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4A5B1FC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventProgressValueEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventProgressValueEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventProgressValueEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventProgressValueEntity__TypeInfo);
    byte_4A5B1FC = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventProgressValueEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventProgressValueEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v10,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        methodPtr_low = LOBYTE(EventProgressValueEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventProgressValueEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventProgressValueEntity_TypeInfo
          && LODWORD(list->fields.items) == eventId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v15 = Method_System_Collections_Generic_List_EventProgressValueEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v17[4] = (Il2CppClass *)v6;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v6, v11, v12);
          }
        }
      }
      if ( v9 == ++v10 )
        return (System_Collections_Generic_List_EventProgressValueEntity__o *)v5;
    }
LABEL_18:
    sub_1B8880C(list, v6);
  }
  return (System_Collections_Generic_List_EventProgressValueEntity__o *)v5;
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

  if ( (byte_4A5B1FA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__TryGetEntity__);
    byte_4A5B1FA = 1;
  }
  PK = (Il2CppObject *)EventProgressValueEntity__CreatePK(eventId, priority, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventProgressValueMaster__EventProgressValueEntity__string__TryGetEntity__);
}