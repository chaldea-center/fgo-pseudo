void ExchangeSvtCoinGivenNumMaster___ctor(ExchangeSvtCoinGivenNumMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37C05 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ExchangeSvtCoinGivenNumMaster__ExchangeSvtCoinGivenNumEntity__string___ctor__);
    byte_4C37C05 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    531,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_ExchangeSvtCoinGivenNumMaster__ExchangeSvtCoinGivenNumEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ExchangeSvtCoinGivenNumEntity_o *ExchangeSvtCoinGivenNumMaster__GetEntity(
        ExchangeSvtCoinGivenNumMaster_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C37C03 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ExchangeSvtCoinGivenNumMaster__ExchangeSvtCoinGivenNumEntity__string__GetEntity__);
    byte_4C37C03 = 1;
  }
  PK = (Il2CppObject *)ExchangeSvtCoinGivenNumEntity__CreatePK(itemId, *(const MethodInfo **)&itemId);
  return (ExchangeSvtCoinGivenNumEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              PK,
                                              (const MethodInfo_339B2F0 *)Method_DataMasterBase_ExchangeSvtCoinGivenNumMaster__ExchangeSvtCoinGivenNumEntity__string__GetEntity__);
}


System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__o *ExchangeSvtCoinGivenNumMaster__GetList(
        ExchangeSvtCoinGivenNumMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w22
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  Il2CppClass **v13; // x0

  if ( (byte_4C37C06 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ExchangeSvtCoinGivenNumEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_ExchangeSvtCoinGivenNumEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__TypeInfo);
    byte_4C37C06 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_ExchangeSvtCoinGivenNumEntity__get_Count__);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity___ctor__);
  if ( Count >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_ExchangeSvtCoinGivenNumEntity__get_Item__);
      if ( list )
      {
        if ( !v5 )
          break;
        items = v5->fields._items;
        v10 = Method_System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        size = v5->fields._size;
        v12 = list;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
        }
        else
        {
          v13 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v13[4] = (Il2CppClass *)v12;
          sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 4), (int32_t)v12, v7, v8);
        }
      }
      if ( Count == ++v6 )
        return (System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__o *)v5;
    }
LABEL_15:
    sub_1C32E7C(list);
  }
  return (System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__o *)v5;
}


bool ExchangeSvtCoinGivenNumMaster__TryGetEntity(
        ExchangeSvtCoinGivenNumMaster_o *this,
        ExchangeSvtCoinGivenNumEntity_o **entity,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C37C04 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_ExchangeSvtCoinGivenNumMaster__ExchangeSvtCoinGivenNumEntity__string__TryGetEntity__);
    byte_4C37C04 = 1;
  }
  PK = (Il2CppObject *)ExchangeSvtCoinGivenNumEntity__CreatePK(itemId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_ExchangeSvtCoinGivenNumMaster__ExchangeSvtCoinGivenNumEntity__string__TryGetEntity__);
}