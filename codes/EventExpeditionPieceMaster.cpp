void __fastcall EventExpeditionPieceMaster___ctor(EventExpeditionPieceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66B44 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string___ctor__, method);
    byte_4B66B44 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    385,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventExpeditionPieceEntity_o *__fastcall EventExpeditionPieceMaster__GetEntity(
        EventExpeditionPieceMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B66B45 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B66B45 = 1;
  }
  PK = (Il2CppObject *)EventExpeditionPieceEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventExpeditionPieceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_31FDB1C *)Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string__GetEntity__);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  v3 = eventId;
  if ( (byte_4B66B48 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&EventExpeditionPieceEntity_TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__Add__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo, v9);
    byte_4B66B48 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v12 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
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
                                                                 (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          v22 = Method_System_Collections_Generic_List_EventExpeditionPieceEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)list,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v24[4] = *(Il2CppClass **)&eventId;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v24 + 4), *(int64_t *)&eventId, v14, v15, v16, v17, v18, v19);
          }
        }
      }
      if ( Count == ++v13 )
        return (System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v12;
    }
LABEL_18:
    sub_1BE4D28(list, *(_QWORD *)&eventId);
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
  int64_t list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v14; // x22
  int32_t v15; // w23
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x24
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4B66B47 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v6);
    sub_1BE4ACC(&EventExpeditionPieceEntity_TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B66B47 = 1;
  }
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v14 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
  if ( Count >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v15,
                        (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v22 = list;
        methodPtr_low = LOBYTE(EventExpeditionPieceEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(EventExpeditionPieceEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventExpeditionPieceEntity_TypeInfo
          && *(_DWORD *)(list + 16) == eventId )
        {
          if ( !*(_DWORD *)(list + 40) )
            goto LABEL_25;
          list = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            break;
          list = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)list,
                            (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
          if ( !list )
            break;
          list = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)list, *(_DWORD *)(v22 + 40), 0LL, 0, 0LL);
          if ( (list & 1) != 0 )
          {
LABEL_25:
            if ( !v14 )
              break;
            items = v14->fields._items;
            v25 = Method_System_Collections_Generic_List_EventExpeditionPieceEntity__Add__;
            ++v14->fields._version;
            if ( !items )
              break;
            size = v14->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v14,
                (Il2CppObject *)v22,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v27 = &items->obj.klass + size;
              v14->fields._size = size + 1;
              v27[4] = (Il2CppClass *)v22;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v27 + 4), v22, v16, v17, v18, v19, v20, v21);
            }
          }
        }
      }
      if ( Count == ++v15 )
        return (System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v14;
    }
LABEL_22:
    sub_1BE4D28(list, *(_QWORD *)&eventId);
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

  if ( (byte_4B66B46 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string__TryGetEntity__,
      entity);
    byte_4B66B46 = 1;
  }
  PK = (Il2CppObject *)EventExpeditionPieceEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string__TryGetEntity__);
}