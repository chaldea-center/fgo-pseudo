void __fastcall EventTradeStoreMaster___ctor(EventTradeStoreMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B163A7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string___ctor__, method, v2);
    byte_4B163A7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    495,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventTradeStoreEntity_o *__fastcall EventTradeStoreMaster__GetEntity(
        EventTradeStoreMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B163A8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&idx);
    byte_4B163A8 = 1;
  }
  PK = (Il2CppObject *)EventTradeStoreEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventTradeStoreEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_31B3198 *)Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventTradeStoreEntity_array *__fastcall EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
        EventTradeStoreMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w19
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_List_object__o *v26; // x21
  __int64 v27; // x1
  CommonReleaseMaster_o *v28; // x23
  int32_t v29; // w24
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  Il2CppObject *v36; // x25
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0

  v3 = eventId;
  if ( (byte_4B163A4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonReleaseMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&EventTradeStoreEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo, v19, v20);
    byte_4B163A4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo,
                                                       v23,
                                                       v24,
                                                       v25);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v27);
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( Count >= 1 )
  {
    v28 = (CommonReleaseMaster_o *)list;
    v29 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v29,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v36 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(EventTradeStoreEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventTradeStoreEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventTradeStoreEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          *(_QWORD *)&eventId = LODWORD(list[1].klass);
          if ( !eventId )
            goto LABEL_27;
          if ( !v28 )
            break;
          list = (System_Collections_ObjectModel_Collection_T__o *)CommonReleaseMaster__IsOpen(
                                                                     v28,
                                                                     eventId,
                                                                     0LL,
                                                                     0,
                                                                     0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_27:
            if ( !v26 )
              break;
            items = v26->fields._items;
            v39 = Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__;
            ++v26->fields._version;
            if ( !items )
              break;
            size = v26->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v26,
                v36,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v41 = &items->obj.klass + size;
              v26->fields._size = size + 1;
              v41[4] = (Il2CppClass *)v36;
              sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)v36, v30, v31, v32, v33, v34, v35);
            }
          }
        }
      }
      if ( Count == ++v29 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1BCAA3C(list, *(_QWORD *)&eventId);
  }
LABEL_22:
  if ( !v26 )
    goto LABEL_24;
  return (EventTradeStoreEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v26,
                                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Master_object; // x21
  const MethodInfo *v20; // x2
  EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Collections_Generic_List_object__o *v25; // x22
  _BOOL8 v26; // x0
  __int64 v27; // x1
  int max_length; // w8
  unsigned int v29; // w25
  int64_t v30; // x24
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0

  if ( (byte_4B163A6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonReleaseMaster___, *(_QWORD *)&eventId, *(_QWORD *)&questId);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo, v17, v18);
    byte_4B163A6 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&eventId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(this, eventId, v20);
  v25 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo,
                                                       v22,
                                                       v23,
                                                       v24);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
  if ( !OpenTradeStoreEntityArray )
    goto LABEL_21;
  max_length = OpenTradeStoreEntityArray->max_length;
  if ( max_length >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= max_length )
        sub_1BCAA44(v26, v27);
      v30 = (int64_t)OpenTradeStoreEntityArray->m_Items[v29];
      if ( !v30 || !Master_object )
        break;
      v26 = CommonReleaseMaster__ContainQuestClearPhase(
              (CommonReleaseMaster_o *)Master_object,
              *(_DWORD *)(v30 + 24),
              questId,
              questPhase,
              0LL);
      if ( v26
        || (v26 = CommonReleaseMaster__ContainQuestClear(
                    (CommonReleaseMaster_o *)Master_object,
                    *(_DWORD *)(v30 + 24),
                    questId,
                    0LL)) )
      {
        if ( !v25 )
          break;
        items = v25->fields._items;
        v38 = Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__;
        ++v25->fields._version;
        if ( !items )
          break;
        size = v25->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v25,
            (Il2CppObject *)v30,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &items->obj.klass + size;
          v25->fields._size = size + 1;
          v40[4] = (Il2CppClass *)v30;
          sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 4), v30, v31, v32, v33, v34, v35, v36);
        }
      }
      max_length = OpenTradeStoreEntityArray->max_length;
      if ( (int)++v29 >= max_length )
        goto LABEL_19;
    }
LABEL_21:
    sub_1BCAA3C(v26, v27);
  }
LABEL_19:
  if ( !v25 )
    goto LABEL_21;
  return (EventTradeStoreEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v25,
                                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
}


EventTradeStoreEntity_array *__fastcall EventTradeStoreMaster__GetTradeStoreEntities(
        EventTradeStoreMaster_o *this,
        EventProgressValueEntity_o *eventProgressValueEntity,
        const MethodInfo *method)
{
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
  Il2CppObject *Master_object; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_List_object__o *v19; // x20
  const MethodInfo *v20; // x2
  EventTradeStoreEntity_array *OpenTradeStoreEntityArray; // x0
  __int64 v22; // x1
  int max_length; // w8
  EventTradeStoreEntity_array *v24; // x22
  __int64 v25; // x24
  int64_t v26; // x23
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_4B163A5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonReleaseMaster___, eventProgressValueEntity, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo, v13, v14);
    byte_4B163A5 = 1;
  }
  if ( !eventProgressValueEntity )
    return 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, eventProgressValueEntity);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventTradeStoreEntity__TypeInfo,
                                                       v16,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventTradeStoreEntity___ctor__);
  OpenTradeStoreEntityArray = EventTradeStoreMaster__GetOpenTradeStoreEntityArray(
                                this,
                                eventProgressValueEntity->fields.eventId,
                                v20);
  if ( !OpenTradeStoreEntityArray )
    return 0LL;
  max_length = OpenTradeStoreEntityArray->max_length;
  v24 = OpenTradeStoreEntityArray;
  if ( max_length >= 1 )
  {
    v25 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v25 >= max_length )
        sub_1BCAA44(OpenTradeStoreEntityArray, v22);
      v26 = (int64_t)v24->m_Items[v25];
      if ( !v26 || !Master_object )
        break;
      OpenTradeStoreEntityArray = (EventTradeStoreEntity_array *)CommonReleaseMaster__IsMatch(
                                                                   (CommonReleaseMaster_o *)Master_object,
                                                                   *(_DWORD *)(v26 + 24),
                                                                   eventProgressValueEntity->fields.condType,
                                                                   eventProgressValueEntity->fields.condId,
                                                                   eventProgressValueEntity->fields.condNum,
                                                                   0LL);
      if ( ((unsigned __int8)OpenTradeStoreEntityArray & 1) != 0 )
      {
        if ( !v19 )
          break;
        items = v19->fields._items;
        v34 = Method_System_Collections_Generic_List_EventTradeStoreEntity__Add__;
        ++v19->fields._version;
        if ( !items )
          break;
        size = v19->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v19,
            (Il2CppObject *)v26,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          v19->fields._size = size + 1;
          v36[4] = (Il2CppClass *)v26;
          sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), v26, v27, v28, v29, v30, v31, v32);
        }
      }
      max_length = v24->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_19;
    }
LABEL_22:
    sub_1BCAA3C(OpenTradeStoreEntityArray, v22);
  }
LABEL_19:
  if ( !v19 )
    goto LABEL_22;
  return (EventTradeStoreEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v19,
                                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventTradeStoreEntity__ToArray__);
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

  if ( (byte_4B163A9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B163A9 = 1;
  }
  PK = (Il2CppObject *)EventTradeStoreEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventTradeStoreMaster__EventTradeStoreEntity__string__TryGetEntity__);
}