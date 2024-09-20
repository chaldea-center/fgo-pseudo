void __fastcall EventExpeditionMaster___ctor(EventExpeditionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B0E5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string___ctor__);
    byte_4A5B0E5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    380,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventExpeditionEntity_o *__fastcall EventExpeditionMaster__GetEntity(
        EventExpeditionMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B0E6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string__GetEntity__);
    byte_4A5B0E6 = 1;
  }
  PK = (Il2CppObject *)EventExpeditionEntity__CreatePK(eventId, idx, *(const MethodInfo **)&idx);
  return (EventExpeditionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_311DC8C *)Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventExpeditionEntity_array *__fastcall EventExpeditionMaster__GetExpeditionEntityList(
        EventExpeditionMaster_o *this,
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

  if ( (byte_4A5B0E8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&EventExpeditionEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B0E8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
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
        methodPtr_low = LOBYTE(EventExpeditionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventExpeditionEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventExpeditionEntity_TypeInfo
          && LODWORD(list->fields.items) == eventId )
        {
          if ( !LODWORD(list[3].klass) )
            goto LABEL_26;
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
                                                                     (int32_t)v11[4].monitor,
                                                                     0LL,
                                                                     0,
                                                                     0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
LABEL_26:
            if ( !v7 )
              break;
            items = v7->fields._items;
            v14 = Method_System_Collections_Generic_List_EventExpeditionEntity__Add__;
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
        goto LABEL_21;
    }
LABEL_23:
    sub_1B8880C(list, *(_QWORD *)&eventId);
  }
LABEL_21:
  if ( !v7 )
    goto LABEL_23;
  return (EventExpeditionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                          v7,
                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventExpeditionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventExpeditionMaster__IsBestMatchPiece(
        EventExpeditionMaster_o *this,
        int32_t eventId,
        int32_t placeIdx,
        int32_t pieceIdx,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v11; // x0
  int32_t v12; // w24
  System_Collections_Generic_IEnumerable_TSource__o **Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B0E9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&EventExpeditionEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
    byte_4A5B0E9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1B8880C(list, *(_QWORD *)&eventId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventExpeditionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventExpeditionEntity___ctor__);
  if ( Count < 1 )
    return 0;
  v12 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = (System_Collections_Generic_IEnumerable_TSource__o **)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v12,
                                                                   (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
                 (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
      }
    }
    if ( Count == ++v12 )
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

  if ( (byte_4A5B0E7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string__TryGetEntity__);
    byte_4A5B0E7 = 1;
  }
  PK = (Il2CppObject *)EventExpeditionEntity__CreatePK(eventId, idx, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventExpeditionMaster__EventExpeditionEntity__string__TryGetEntity__);
}