void __fastcall ExchangeSvtCoinGivenNumMaster___ctor(ExchangeSvtCoinGivenNumMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7CCC & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_ExchangeSvtCoinGivenNumMaster__ExchangeSvtCoinGivenNumEntity__string___ctor__,
      method);
    byte_4BC7CCC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    528,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_ExchangeSvtCoinGivenNumMaster__ExchangeSvtCoinGivenNumEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ExchangeSvtCoinGivenNumEntity_o *__fastcall ExchangeSvtCoinGivenNumMaster__GetEntity(
        ExchangeSvtCoinGivenNumMaster_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC7CCA & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_ExchangeSvtCoinGivenNumMaster__ExchangeSvtCoinGivenNumEntity__string__GetEntity__,
      *(_QWORD *)&itemId);
    byte_4BC7CCA = 1;
  }
  PK = (Il2CppObject *)ExchangeSvtCoinGivenNumEntity__CreatePK(itemId, *(const MethodInfo **)&itemId);
  return (ExchangeSvtCoinGivenNumEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              PK,
                                              (const MethodInfo_324D130 *)Method_DataMasterBase_ExchangeSvtCoinGivenNumMaster__ExchangeSvtCoinGivenNumEntity__string__GetEntity__);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  int64_t v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_4BC7CCD & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_ExchangeSvtCoinGivenNumEntity__get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_ExchangeSvtCoinGivenNumEntity__get_Item__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__Add__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity___ctor__, v5);
    sub_1C1ABD4(&System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__TypeInfo, v6);
    byte_4BC7CCD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_ExchangeSvtCoinGivenNumEntity__get_Count__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity___ctor__);
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
                                                                 (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_ExchangeSvtCoinGivenNumEntity__get_Item__);
      if ( list )
      {
        if ( !v9 )
          break;
        items = v9->fields._items;
        v18 = Method_System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        v20 = (int64_t)list;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)list,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v20;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v21 + 4), v20, v11, v12, v13, v14, v15, v16);
        }
      }
      if ( Count == ++v10 )
        return (System_Collections_Generic_List_ExchangeSvtCoinGivenNumEntity__o *)v9;
    }
LABEL_15:
    sub_1C1AE30(list, method);
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

  if ( (byte_4BC7CCB & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_ExchangeSvtCoinGivenNumMaster__ExchangeSvtCoinGivenNumEntity__string__TryGetEntity__,
      entity);
    byte_4BC7CCB = 1;
  }
  PK = (Il2CppObject *)ExchangeSvtCoinGivenNumEntity__CreatePK(itemId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_ExchangeSvtCoinGivenNumMaster__ExchangeSvtCoinGivenNumEntity__string__TryGetEntity__);
}