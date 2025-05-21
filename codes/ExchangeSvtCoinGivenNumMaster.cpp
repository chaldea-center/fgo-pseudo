void __fastcall ExchangeSvtCoinGivenNumMaster___ctor(ExchangeSvtCoinGivenNumMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B44CA1 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_ExchangeSvtCoinGivenNumMaster__ExchangeSvtCoinGivenNumEntity__string___ctor__,
      method);
    byte_4B44CA1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    531,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_ExchangeSvtCoinGivenNumMaster__ExchangeSvtCoinGivenNumEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ExchangeSvtCoinGivenNumEntity_o *__fastcall ExchangeSvtCoinGivenNumMaster__GetEntity(
        ExchangeSvtCoinGivenNumMaster_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B44C9F & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_ExchangeSvtCoinGivenNumMaster__ExchangeSvtCoinGivenNumEntity__string__GetEntity__,
      *(_QWORD *)&itemId);
    byte_4B44C9F = 1;
  }
  PK = (Il2CppObject *)ExchangeSvtCoinGivenNumEntity__CreatePK(itemId, *(const MethodInfo **)&itemId);
  return (ExchangeSvtCoinGivenNumEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              PK,
                                              (const MethodInfo_32E68F4 *)Method_DataMasterBase_ExchangeSvtCoinGivenNumMaster__ExchangeSvtCoinGivenNumEntity__string__GetEntity__);
}


System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__o *__fastcall ExchangeSvtCoinGivenNumMaster__GetList(
        ExchangeSvtCoinGivenNumMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_object__o *v9; // x21
  int32_t v10; // w22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  System_Collections_ObjectModel_Collection_T__o *v16; // x1
  Il2CppClass **v17; // x0

  if ( (byte_4B44CA2 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_ExchangeSvtCoinGivenNumEntity__get_Count__, method);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_ExchangeSvtCoinGivenNumEntity__get_Item__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__Add__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity___ctor__, v5);
    sub_1BDB878(&System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__TypeInfo, v6);
    byte_4B44CA2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_ExchangeSvtCoinGivenNumEntity__get_Count__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity___ctor__);
  if ( Count >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v10,
                                                                 (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_ExchangeSvtCoinGivenNumEntity__get_Item__);
      if ( list )
      {
        if ( !v9 )
          break;
        items = v9->fields._items;
        v14 = Method_System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        v16 = list;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)list,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v17[4] = (Il2CppClass *)v16;
          sub_1BDB81C((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v16, v11, v12);
        }
      }
      if ( Count == ++v10 )
        return (System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__o *)v9;
    }
LABEL_15:
    sub_1BDBAD4(list, method);
  }
  return (System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__o *)v9;
}


bool __fastcall ExchangeSvtCoinGivenNumMaster__TryGetEntity(
        ExchangeSvtCoinGivenNumMaster_o *this,
        ExchangeSvtCoinGivenNumEntity_o **entity,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B44CA0 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_ExchangeSvtCoinGivenNumMaster__ExchangeSvtCoinGivenNumEntity__string__TryGetEntity__,
      entity);
    byte_4B44CA0 = 1;
  }
  PK = (Il2CppObject *)ExchangeSvtCoinGivenNumEntity__CreatePK(itemId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32E6940 *)Method_DataMasterBase_ExchangeSvtCoinGivenNumMaster__ExchangeSvtCoinGivenNumEntity__string__TryGetEntity__);
}