void __fastcall EventExpeditionPieceMaster___ctor(EventExpeditionPieceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FEAB5 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string___ctor__, method);
    byte_49FEAB5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    381,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventExpeditionPieceEntity_o *__fastcall EventExpeditionPieceMaster__GetEntity(
        EventExpeditionPieceMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FEAB6 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_49FEAB6 = 1;
  }
  PK = (Il2CppObject *)EventExpeditionPieceEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventExpeditionPieceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_30D6AF0 *)Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventExpeditionPieceEntity__o *__fastcall EventExpeditionPieceMaster__GetPieceEntityList(
        EventExpeditionPieceMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v12; // x22
  int32_t v13; // w23
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  v3 = eventId;
  if ( (byte_49FEAB9 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64A00(&EventExpeditionPieceEntity_TypeInfo, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__Add__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__, v8);
    sub_1B64A00(&System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo, v9);
    byte_49FEAB9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
  if ( Count >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&eventId = list;
        methodPtr_low = LOBYTE(EventExpeditionPieceEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventExpeditionPieceEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventExpeditionPieceEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          if ( !v12 )
            break;
          items = v12->fields._items;
          v18 = Method_System_Collections_Generic_List_EventExpeditionPieceEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)list,
              *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v20[4] = *(Il2CppClass **)&eventId;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)(v20 + 4), eventId, v14, v15);
          }
        }
      }
      if ( Count == ++v13 )
        return (System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v12;
    }
LABEL_18:
    sub_1B64C5C(list, *(_QWORD *)&eventId);
  }
  return (System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventExpeditionPieceEntity__o *__fastcall EventExpeditionPieceMaster__GetReleasePieceEntityList(
        EventExpeditionPieceMaster_o *this,
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v14; // x22
  int32_t v15; // w23
  int32_t v16; // w2
  int32_t v17; // w3
  Il2CppObject *v18; // x24
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_49FEAB8 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64A00(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v6);
    sub_1B64A00(&EventExpeditionPieceEntity_TypeInfo, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__Add__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__, v9);
    sub_1B64A00(&System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo, v10);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49FEAB8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
  if ( Count >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v18 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(EventExpeditionPieceEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventExpeditionPieceEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventExpeditionPieceEntity_TypeInfo
          && LODWORD(list->fields.items) == eventId )
        {
          if ( !LODWORD(list[1].fields.items) )
            goto LABEL_25;
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
                                                                     (int32_t)v18[2].monitor,
                                                                     0LL,
                                                                     0,
                                                                     0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_25:
            if ( !v14 )
              break;
            items = v14->fields._items;
            v21 = Method_System_Collections_Generic_List_EventExpeditionPieceEntity__Add__;
            ++v14->fields._version;
            if ( !items )
              break;
            size = v14->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v14,
                v18,
                *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v14->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v18;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v18, v16, v17);
            }
          }
        }
      }
      if ( Count == ++v15 )
        return (System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v14;
    }
LABEL_22:
    sub_1B64C5C(list, *(_QWORD *)&eventId);
  }
  return (System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v14;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventExpeditionPieceMaster__TryGetEntity(
        EventExpeditionPieceMaster_o *this,
        EventExpeditionPieceEntity_o **entity,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FEAB7 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string__TryGetEntity__,
      entity);
    byte_49FEAB7 = 1;
  }
  PK = (Il2CppObject *)EventExpeditionPieceEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string__TryGetEntity__);
}