void __fastcall EventTradeStoreMaster___ctor(EventTradeStoreMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B315 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string___ctor__);
    byte_4A5B315 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    495,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTradeStoreEntity_o *__fastcall EventTradeStoreMaster__GetEntity(
        EventTradeStoreMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B316 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__GetEntity__);
    byte_4A5B316 = 1;
  }
  PK = (Il2CppObject *)EventTradeStoreEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventTradeStoreEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_311DC8C *)Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventTradeStoreEntity_array *__fastcall EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
        EventTradeStoreMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v7; // x21
  CommonReleaseMaster_o *v8; // x23
  int32_t v9; // w24
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *v12; // x25
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  v3 = eventId;
  if ( (byte_4A5B313 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&EventTradeStoreEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo);
    byte_4A5B313 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( Count >= 1 )
  {
    v8 = (CommonReleaseMaster_o *)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(EventTradeStoreEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventTradeStoreEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventTradeStoreEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          *(_QWORD *)&eventId = LODWORD(list[1].klass);
          if ( !eventId )
            goto LABEL_27;
          if ( !v8 )
            break;
          list = (System_Collections_ObjectModel_Collection_T__o *)CommonReleaseMaster__IsOpen(v8, eventId, 0LL, 0, 0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_27:
            if ( !v7 )
              break;
            items = v7->fields._items;
            v15 = Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                v12,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
            }
            else
            {
              v17 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v17[4] = (Il2CppClass *)v12;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v12, v10, v11);
            }
          }
        }
      }
      if ( Count == ++v9 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1B8880C(list, *(_QWORD *)&eventId);
  }
LABEL_22:
  if ( !v7 )
    goto LABEL_24;
  return (EventTradeStoreEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v7,
                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
}


EventTradeStoreEntity_array *__fastcall EventTradeStoreMaster__GetTradeStoreEntities(
        EventTradeStoreMaster_o *this,
        EventProgressValueEntity_o *eventProgressValueEntity,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  System_Collections_Generic_List_object__o *v6; // x20
  const MethodInfo *v7; // x2
  EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  __int64 v9; // x1
  int max_length; // w8
  EventTradeStoreEntity_array *v11; // x22
  __int64 v12; // x24
  EventTradeStoreEntity_o *v13; // x23
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4A5B314 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo);
    byte_4A5B314 = 1;
  }
  if ( !eventProgressValueEntity )
    return 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                this,
                                eventProgressValueEntity->fields.eventId,
                                v7);
  if ( !OpenTradeStoreEntityArray )
    return 0LL;
  max_length = OpenTradeStoreEntityArray->max_length;
  v11 = OpenTradeStoreEntityArray;
  if ( max_length >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v12 >= max_length )
        sub_1B88814(OpenTradeStoreEntityArray, v9);
      v13 = v11->m_Items[v12];
      if ( !v13 || !Master_object )
        break;
      OpenTradeStoreEntityArray = (EventTradeStoreEntity_array *)CommonReleaseMaster__IsMatch(
                                                                   (CommonReleaseMaster_o *)Master_object,
                                                                   v13->fields.commonReleaseId,
                                                                   eventProgressValueEntity->fields.condType,
                                                                   eventProgressValueEntity->fields.condId,
                                                                   eventProgressValueEntity->fields.condNum,
                                                                   0LL);
      if ( ((unsigned __int8)OpenTradeStoreEntityArray & 1) != 0 )
      {
        if ( !v6 )
          break;
        items = v6->fields._items;
        v17 = Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)v13,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v13;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v13, v14, v15);
        }
      }
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_19;
    }
LABEL_22:
    sub_1B8880C(OpenTradeStoreEntityArray, v9);
  }
LABEL_19:
  if ( !v6 )
    goto LABEL_22;
  return (EventTradeStoreEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v6,
                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventTradeStoreMaster__TryGetEntity(
        EventTradeStoreMaster_o *this,
        EventTradeStoreEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B317 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__TryGetEntity__);
    byte_4A5B317 = 1;
  }
  PK = (Il2CppObject *)EventTradeStoreEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__TryGetEntity__);
}