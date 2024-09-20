void __fastcall EventExpeditionPieceMaster___ctor(EventExpeditionPieceMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B0EC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string___ctor__);
    byte_4A5B0EC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    381,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventExpeditionPieceEntity_o *__fastcall EventExpeditionPieceMaster__GetEntity(
        EventExpeditionPieceMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B0ED & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string__GetEntity__);
    byte_4A5B0ED = 1;
  }
  PK = (Il2CppObject *)EventExpeditionPieceEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventExpeditionPieceEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_311DC8C *)Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventExpeditionPieceEntity__o *__fastcall EventExpeditionPieceMaster__GetPieceEntityList(
        EventExpeditionPieceMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  v3 = eventId;
  if ( (byte_4A5B0F0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventExpeditionPieceEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo);
    byte_4A5B0F0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&eventId = list;
        methodPtr_low = LOBYTE(EventExpeditionPieceEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventExpeditionPieceEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventExpeditionPieceEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v13 = Method_System_Collections_Generic_List_EventExpeditionPieceEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v15[4] = *(Il2CppClass **)&eventId;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), eventId, v9, v10);
          }
        }
      }
      if ( Count == ++v8 )
        return (System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v7;
    }
LABEL_18:
    sub_1B8880C(list, *(_QWORD *)&eventId);
  }
  return (System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventExpeditionPieceEntity__o *__fastcall EventExpeditionPieceMaster__GetReleasePieceEntityList(
        EventExpeditionPieceMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *v11; // x24
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4A5B0EF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&EventExpeditionPieceEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B0EF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventExpeditionPieceEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventExpeditionPieceEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v11 = (Il2CppObject *)list;
        methodPtr_low = LOBYTE(EventExpeditionPieceEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventExpeditionPieceEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventExpeditionPieceEntity_TypeInfo
          && LODWORD(list->fields.items) == eventId )
        {
          if ( !LODWORD(list[1].fields.items) )
            goto LABEL_25;
          list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !list )
            break;
          list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                                     (DataManager_o *)list,
                                                                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
          if ( !list )
            break;
          list = (System_Collections_ObjectModel_Collection_T__o *)CommonReleaseMaster__IsOpen(
                                                                     (CommonReleaseMaster_o *)list,
                                                                     (int32_t)v11[2].monitor,
                                                                     0LL,
                                                                     0,
                                                                     0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_25:
            if ( !v7 )
              break;
            items = v7->fields._items;
            v14 = Method_System_Collections_Generic_List_EventExpeditionPieceEntity__Add__;
            ++v7->fields._version;
            if ( !items )
              break;
            size = v7->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                v11,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
            }
            else
            {
              v16 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v16[4] = (Il2CppClass *)v11;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v11, v9, v10);
            }
          }
        }
      }
      if ( Count == ++v8 )
        return (System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v7;
    }
LABEL_22:
    sub_1B8880C(list, *(_QWORD *)&eventId);
  }
  return (System_Collections_Generic_List_EventExpeditionPieceEntity__o *)v7;
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

  if ( (byte_4A5B0EE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string__TryGetEntity__);
    byte_4A5B0EE = 1;
  }
  PK = (Il2CppObject *)EventExpeditionPieceEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventExpeditionPieceMaster__EventExpeditionPieceEntity__string__TryGetEntity__);
}