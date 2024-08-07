void __fastcall EventExpeditionMaster___ctor(EventExpeditionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEAAE & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string___ctor__, method);
    byte_49FEAAE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    380,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventExpeditionEntity_o *__fastcall EventExpeditionMaster__GetEntity(
        EventExpeditionMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FEAAF & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_49FEAAF = 1;
  }
  PK = (Il2CppObject *)EventExpeditionEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventExpeditionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_30D6AF0 *)Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventExpeditionEntity_array *__fastcall EventExpeditionMaster__GetExpeditionEntityList(
        EventExpeditionMaster_o *this,
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v15; // x22
  int32_t v16; // w23
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x24
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_49FEAB1 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64A00(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v6);
    sub_1B64A00(&EventExpeditionEntity_TypeInfo, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventExpeditionEntity__ToArray__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v10);
    sub_1B64A00(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v11);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49FEAB1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  if ( Count >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v16,
                                                                 (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v19 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(EventExpeditionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventExpeditionEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventExpeditionEntity_TypeInfo
          && LODWORD(list->fields.items) == eventId )
        {
          if ( !LODWORD(list[3].klass) )
            goto LABEL_26;
          list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            break;
          list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                                     (DataManager_o *)list,
                                                                     (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
          if ( !list )
            break;
          list = (System_Collections_ObjectModel_Collection_T__o *)CommonReleaseMaster__IsOpen(
                                                                     (CommonReleaseMaster_o *)list,
                                                                     (int32_t)v19[4].monitor,
                                                                     0LL,
                                                                     0,
                                                                     0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_26:
            if ( !v15 )
              break;
            items = v15->fields._items;
            v22 = Method_System_Collections_Generic_List_EventExpeditionEntity__Add__;
            ++v15->fields._version;
            if ( !items )
              break;
            size = v15->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v15,
                v19,
                *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v15->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v19;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v19, v17, v18);
            }
          }
        }
      }
      if ( Count == ++v16 )
        goto LABEL_21;
    }
LABEL_23:
    sub_1B64C5C(list, *(_QWORD *)&eventId);
  }
LABEL_21:
  if ( !v15 )
    goto LABEL_23;
  return (EventExpeditionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v15,
                                          (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_EventExpeditionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventExpeditionMaster__IsBestMatchPiece(
        EventExpeditionMaster_o *this,
        int32_t eventId,
        int32_t placeIdx,
        int32_t pieceIdx,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v16; // x0
  int32_t v17; // w24
  System_Collections_Generic_IEnumerable_TSource__o **Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49FEAB2 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B64A00(&Method_System_Linq_Enumerable_Contains_int___, v10);
    sub_1B64A00(&EventExpeditionEntity_TypeInfo, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__, v12);
    sub_1B64A00(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo, v13);
    byte_49FEAB2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1B64C5C(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  if ( Count < 1 )
    return 0;
  v17 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = (System_Collections_Generic_IEnumerable_TSource__o **)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v17,
                                                                   (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(EventExpeditionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE((*Item)[19].klass) >= (unsigned int)methodPtr_low
        && *((EventExpeditionEntity_c **)(*Item)[12].monitor + methodPtr_low - 1) == EventExpeditionEntity_TypeInfo
        && *((_DWORD *)Item + 4) == eventId
        && *((_DWORD *)Item + 5) == placeIdx )
      {
        return System_Linq_Enumerable__Contains_int_(
                 Item[7],
                 pieceIdx,
                 (const MethodInfo_2E5559C *)Method_System_Linq_Enumerable_Contains_int___);
      }
    }
    if ( Count == ++v17 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventExpeditionMaster__TryGetEntity(
        EventExpeditionMaster_o *this,
        EventExpeditionEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FEAB0 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string__TryGetEntity__, entity);
    byte_49FEAB0 = 1;
  }
  PK = (Il2CppObject *)EventExpeditionEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string__TryGetEntity__);
}