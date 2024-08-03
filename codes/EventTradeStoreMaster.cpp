void __fastcall EventTradeStoreMaster___ctor(EventTradeStoreMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC5C6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string___ctor__, method);
    byte_49FC5C6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    495,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTradeStoreEntity_o *__fastcall EventTradeStoreMaster__GetEntity(
        EventTradeStoreMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FC5C7 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_49FC5C7 = 1;
  }
  PK = (Il2CppObject *)EventTradeStoreEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventTradeStoreEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_30D41FC *)Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventTradeStoreEntity_array *__fastcall EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
        EventTradeStoreMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  void *list; // x0
  int32_t Count; // w22
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x21
  CommonReleaseMaster_o *v18; // x23
  int32_t v19; // w24
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *v22; // x25
  __int64 methodPtr_low; // x10
  int32_t v24; // w1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_49FC5C4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_CommonReleaseMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&EventTradeStoreEntity_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo, v12);
    byte_49FC5C4 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  list = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( Count >= 1 )
  {
    v18 = (CommonReleaseMaster_o *)list;
    v19 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v19,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v22 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(EventTradeStoreEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(EventTradeStoreEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventTradeStoreEntity_TypeInfo
          && *((_DWORD *)list + 4) == eventId )
        {
          v24 = *((_DWORD *)list + 6);
          if ( !v24 )
            goto LABEL_27;
          if ( !v18 )
            break;
          list = (void *)CommonReleaseMaster__IsOpen(v18, v24, 0LL, 0, 0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_27:
            if ( !v17 )
              break;
            items = v17->fields._items;
            v26 = Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__;
            ++v17->fields._version;
            if ( !items )
              break;
            size = v17->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v17,
                v22,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v28 = &items->obj.klass + size;
              v17->fields._size = size + 1;
              v28[4] = (Il2CppClass *)v22;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v22, v20, v21);
            }
          }
        }
      }
      if ( Count == ++v19 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1B64324(list);
  }
LABEL_22:
  if ( !v17 )
    goto LABEL_24;
  return (EventTradeStoreEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v17,
                                          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
}


EventTradeStoreEntity_array *__fastcall EventTradeStoreMaster__GetTradeStoreEntities(
        EventTradeStoreMaster_o *this,
        EventProgressValueEntity_o *eventProgressValueEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Master_object; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x20
  const MethodInfo *v14; // x2
  EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  __int64 v16; // x1
  int max_length; // w8
  EventTradeStoreEntity_array *v18; // x22
  __int64 v19; // x24
  EventTradeStoreEntity_o *v20; // x23
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_49FC5C5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_CommonReleaseMaster___, eventProgressValueEntity);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo, v9);
    byte_49FC5C5 = 1;
  }
  if ( !eventProgressValueEntity )
    return 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo,
                                                       v11,
                                                       v12);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                this,
                                eventProgressValueEntity->fields.eventId,
                                v14);
  if ( !OpenTradeStoreEntityArray )
    return 0LL;
  max_length = OpenTradeStoreEntityArray->max_length;
  v18 = OpenTradeStoreEntityArray;
  if ( max_length >= 1 )
  {
    v19 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v19 >= max_length )
        sub_1B6432C(OpenTradeStoreEntityArray, v16);
      v20 = v18->m_Items[v19];
      if ( !v20 || !Master_object )
        break;
      OpenTradeStoreEntityArray = (EventTradeStoreEntity_array *)CommonReleaseMaster__IsMatch(
                                                                   (CommonReleaseMaster_o *)Master_object,
                                                                   v20->fields.commonReleaseId,
                                                                   eventProgressValueEntity->fields.condType,
                                                                   eventProgressValueEntity->fields.condId,
                                                                   eventProgressValueEntity->fields.condNum,
                                                                   0LL);
      if ( ((unsigned __int8)OpenTradeStoreEntityArray & 1) != 0 )
      {
        if ( !v13 )
          break;
        items = v13->fields._items;
        v24 = Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__;
        ++v13->fields._version;
        if ( !items )
          break;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            (Il2CppObject *)v20,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v20;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v20, v21, v22);
        }
      }
      max_length = v18->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_19;
    }
LABEL_22:
    sub_1B64324(OpenTradeStoreEntityArray);
  }
LABEL_19:
  if ( !v13 )
    goto LABEL_22;
  return (EventTradeStoreEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v13,
                                          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
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

  if ( (byte_49FC5C8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__TryGetEntity__, entity);
    byte_49FC5C8 = 1;
  }
  PK = (Il2CppObject *)EventTradeStoreEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__TryGetEntity__);
}