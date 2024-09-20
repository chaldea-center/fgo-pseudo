void __fastcall EventBoardGameTokenMaster___ctor(EventBoardGameTokenMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B017 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventBoardGameTokenMaster__EventBoardGameTokenEntity__string___ctor__);
    byte_4A5B017 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    307,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventBoardGameTokenMaster__EventBoardGameTokenEntity__string___ctor__);
}


EventBoardGameTokenEntity_array *__fastcall EventBoardGameTokenMaster__GetEntities(
        EventBoardGameTokenMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4A5B018 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventBoardGameTokenEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBoardGameTokenEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBoardGameTokenEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBoardGameTokenEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventBoardGameTokenEntity__TypeInfo);
    byte_4A5B018 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventBoardGameTokenEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventBoardGameTokenEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = list;
      methodPtr_low = LOBYTE(EventBoardGameTokenEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (EventBoardGameTokenEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventBoardGameTokenEntity_TypeInfo
        && LODWORD(list->fields.items) == eventId )
      {
        if ( !v5 )
          goto LABEL_20;
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_EventBoardGameTokenEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v6;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v6, v9, v10);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v5 )
LABEL_20:
    sub_1B8880C(list, v6);
  return (EventBoardGameTokenEntity_array *)System_Collections_Generic_List_object___ToArray(
                                              v5,
                                              (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventBoardGameTokenEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventBoardGameTokenEntity_o *__fastcall EventBoardGameTokenMaster__GetEntity(
        EventBoardGameTokenMaster_o *this,
        int32_t eventId,
        int32_t tokenId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B015 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventBoardGameTokenMaster__EventBoardGameTokenEntity__string__GetEntity__);
    byte_4A5B015 = 1;
  }
  PK = (Il2CppObject *)EventBoardGameTokenEntity__CreatePK(eventId, tokenId, *(const MethodInfo **)&tokenId);
  return (EventBoardGameTokenEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_311DC8C *)Method_DataMasterBase_EventBoardGameTokenMaster__EventBoardGameTokenEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventBoardGameTokenMaster__TryGetEntity(
        EventBoardGameTokenMaster_o *this,
        EventBoardGameTokenEntity_o **entity,
        int32_t eventId,
        int32_t tokenId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B016 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventBoardGameTokenMaster__EventBoardGameTokenEntity__string__TryGetEntity__);
    byte_4A5B016 = 1;
  }
  PK = (Il2CppObject *)EventBoardGameTokenEntity__CreatePK(eventId, tokenId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventBoardGameTokenMaster__EventBoardGameTokenEntity__string__TryGetEntity__);
}