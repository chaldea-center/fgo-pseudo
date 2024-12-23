void __fastcall EventTradeStoreMaster___ctor(EventTradeStoreMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66D70 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string___ctor__, method);
    byte_4B66D70 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    499,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTradeStoreEntity_o *__fastcall EventTradeStoreMaster__GetEntity(
        EventTradeStoreMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B66D71 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B66D71 = 1;
  }
  PK = (Il2CppObject *)EventTradeStoreEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventTradeStoreEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_31FDB1C *)Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventTradeStoreEntity_array *__fastcall EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
        EventTradeStoreMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_object__o *v15; // x21
  CommonReleaseMaster_o *v16; // x23
  int32_t v17; // w24
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  Il2CppObject *v24; // x25
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  v3 = eventId;
  if ( (byte_4B66D6D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&Method_DataManager_GetMaster_CommonReleaseMaster___, v6);
    sub_1BE4ACC(&DataManager_TypeInfo, v7);
    sub_1BE4ACC(&EventTradeStoreEntity_TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__, v11);
    sub_1BE4ACC(&System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo, v12);
    byte_4B66D6D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( Count >= 1 )
  {
    v16 = (CommonReleaseMaster_o *)list;
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v17,
                                                                 (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v24 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(EventTradeStoreEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventTradeStoreEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventTradeStoreEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          *(_QWORD *)&eventId = LODWORD(list[1].klass);
          if ( !eventId )
            goto LABEL_27;
          if ( !v16 )
            break;
          list = (System_Collections_ObjectModel_Collection_T__o *)CommonReleaseMaster__IsOpen(
                                                                     v16,
                                                                     eventId,
                                                                     0LL,
                                                                     0,
                                                                     0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_27:
            if ( !v15 )
              break;
            items = v15->fields._items;
            v27 = Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__;
            ++v15->fields._version;
            if ( !items )
              break;
            size = v15->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v15,
                v24,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = &items->obj.klass + size;
              v15->fields._size = size + 1;
              v29[4] = (Il2CppClass *)v24;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v29 + 4), (int64_t)v24, v18, v19, v20, v21, v22, v23);
            }
          }
        }
      }
      if ( Count == ++v17 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1BE4D28(list, *(_QWORD *)&eventId);
  }
LABEL_22:
  if ( !v15 )
    goto LABEL_24;
  return (EventTradeStoreEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v15,
                                          (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventTradeStoreEntity_array *__fastcall EventTradeStoreMaster__GetReleaseTradeStoreEntities(
        EventTradeStoreMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Master_object; // x21
  const MethodInfo *v15; // x2
  EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x23
  System_Collections_Generic_List_object__o *v17; // x22
  _BOOL8 v18; // x0
  __int64 v19; // x1
  int max_length; // w8
  unsigned int v21; // w25
  int64_t v22; // x24
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4B66D6F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_CommonReleaseMaster___, *(_QWORD *)&eventId);
    sub_1BE4ACC(&DataManager_TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo, v13);
    byte_4B66D6F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(this, eventId, v15);
  v17 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
  if ( !OpenTradeStoreEntityArray )
    goto LABEL_21;
  max_length = OpenTradeStoreEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
        sub_1BE4D30(v18, v19);
      v22 = (int64_t)OpenTradeStoreEntityArray->m_Items[v21];
      if ( !v22 || !Master_object )
        break;
      v18 = CommonReleaseMaster__ContainQuestClearPhase(
              (CommonReleaseMaster_o *)Master_object,
              *(_DWORD *)(v22 + 24),
              questId,
              questPhase,
              0LL);
      if ( v18
        || (v18 = CommonReleaseMaster__ContainQuestClear(
                    (CommonReleaseMaster_o *)Master_object,
                    *(_DWORD *)(v22 + 24),
                    questId,
                    0LL)) )
      {
        if ( !v17 )
          break;
        items = v17->fields._items;
        v30 = Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            (Il2CppObject *)v22,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v17->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v22;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v32 + 4), v22, v23, v24, v25, v26, v27, v28);
        }
      }
      max_length = OpenTradeStoreEntityArray->max_length;
      if ( (int)++v21 >= max_length )
        goto LABEL_19;
    }
LABEL_21:
    sub_1BE4D28(v18, v19);
  }
LABEL_19:
  if ( !v17 )
    goto LABEL_21;
  return (EventTradeStoreEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v17,
                                          (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
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
  System_Collections_Generic_List_object__o *v11; // x20
  const MethodInfo *v12; // x2
  EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  __int64 v14; // x1
  int max_length; // w8
  EventTradeStoreEntity_array *v16; // x22
  __int64 v17; // x24
  int64_t v18; // x23
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4B66D6E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_CommonReleaseMaster___, eventProgressValueEntity);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo, v9);
    byte_4B66D6E = 1;
  }
  if ( !eventProgressValueEntity )
    return 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                this,
                                eventProgressValueEntity->fields.eventId,
                                v12);
  if ( !OpenTradeStoreEntityArray )
    return 0LL;
  max_length = OpenTradeStoreEntityArray->max_length;
  v16 = OpenTradeStoreEntityArray;
  if ( max_length >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v17 >= max_length )
        sub_1BE4D30(OpenTradeStoreEntityArray, v14);
      v18 = (int64_t)v16->m_Items[v17];
      if ( !v18 || !Master_object )
        break;
      OpenTradeStoreEntityArray = (EventTradeStoreEntity_array *)CommonReleaseMaster__IsMatch(
                                                                   (CommonReleaseMaster_o *)Master_object,
                                                                   *(_DWORD *)(v18 + 24),
                                                                   eventProgressValueEntity->fields.condType,
                                                                   eventProgressValueEntity->fields.condId,
                                                                   eventProgressValueEntity->fields.condNum,
                                                                   0LL);
      if ( ((unsigned __int8)OpenTradeStoreEntityArray & 1) != 0 )
      {
        if ( !v11 )
          break;
        items = v11->fields._items;
        v26 = Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)v18,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v18;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v28 + 4), v18, v19, v20, v21, v22, v23, v24);
        }
      }
      max_length = v16->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_19;
    }
LABEL_22:
    sub_1BE4D28(OpenTradeStoreEntityArray, v14);
  }
LABEL_19:
  if ( !v11 )
    goto LABEL_22;
  return (EventTradeStoreEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v11,
                                          (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
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

  if ( (byte_4B66D72 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__TryGetEntity__, entity);
    byte_4B66D72 = 1;
  }
  PK = (Il2CppObject *)EventTradeStoreEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__TryGetEntity__);
}