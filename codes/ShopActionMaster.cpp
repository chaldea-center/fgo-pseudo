void __fastcall ShopActionMaster___ctor(ShopActionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22974 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ShopActionMaster__ShopActionEntity__string___ctor__, method);
    byte_4C22974 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    199,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_ShopActionMaster__ShopActionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ShopActionEntity_o *__fastcall ShopActionMaster__GetEntity(
        ShopActionMaster_o *this,
        int32_t shopId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C22972 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ShopActionMaster__ShopActionEntity__string__GetEntity__, *(_QWORD *)&shopId);
    byte_4C22972 = 1;
  }
  PK = (Il2CppObject *)ShopActionEntity__CreatePK(shopId, idx, *(const MethodInfo **)&idx);
  return (ShopActionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_329F900 *)Method_DataMasterBase_ShopActionMaster__ShopActionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ShopActionEntity__o *__fastcall ShopActionMaster__GetEntityList(
        ShopActionMaster_o *this,
        int32_t purchaseShopId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x21
  int64_t v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w22
  int32_t v14; // w23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4C22975 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_ShopActionEntity__get_Count__,
      *(_QWORD *)&purchaseShopId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_ShopActionEntity__get_Item__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_ShopActionEntity__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_ShopActionEntity___ctor__, v7);
    sub_1C3B764(&System_Collections_Generic_List_ShopActionEntity__TypeInfo, v8);
    byte_4C22975 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ShopActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ShopActionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_ShopActionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_ShopActionEntity__get_Item__);
      if ( !list )
        break;
      v10 = (int64_t)list;
      if ( LODWORD(list->fields.items) == purchaseShopId )
      {
        if ( !v9 )
          break;
        items = v9->fields._items;
        v22 = Method_System_Collections_Generic_List_ShopActionEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)list,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v24[4] = (Il2CppClass *)v10;
          sub_1C3B708((PartyOrganizationUtility_o *)(v24 + 4), v10, v15, v16, v17, v18, v19, v20);
        }
      }
      if ( v13 == ++v14 )
        return (System_Collections_Generic_List_ShopActionEntity__o *)v9;
    }
LABEL_16:
    sub_1C3B9C0(list, v10);
  }
  return (System_Collections_Generic_List_ShopActionEntity__o *)v9;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ShopActionEntity__o *__fastcall ShopActionMaster__GetVoiceEntityList(
        ShopActionMaster_o *this,
        int32_t purchaseShopId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x21
  int64_t v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w22
  int32_t v14; // w23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int klass; // w8
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4C22976 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_ShopActionEntity__get_Count__,
      *(_QWORD *)&purchaseShopId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_ShopActionEntity__get_Item__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_ShopActionEntity__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_ShopActionEntity___ctor__, v7);
    sub_1C3B764(&System_Collections_Generic_List_ShopActionEntity__TypeInfo, v8);
    byte_4C22976 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ShopActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ShopActionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_ShopActionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_ShopActionEntity__get_Item__);
      if ( !list )
        break;
      v10 = (int64_t)list;
      if ( LODWORD(list->fields.items) == purchaseShopId )
      {
        klass = (int)list[1].klass;
        if ( klass == 8 || klass == 5 )
        {
          if ( !v9 )
            break;
          items = v9->fields._items;
          v23 = Method_System_Collections_Generic_List_ShopActionEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)list,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v10;
            sub_1C3B708((PartyOrganizationUtility_o *)(v25 + 4), v10, v15, v16, v17, v18, v19, v20);
          }
        }
      }
      if ( v13 == ++v14 )
        return (System_Collections_Generic_List_ShopActionEntity__o *)v9;
    }
LABEL_18:
    sub_1C3B9C0(list, v10);
  }
  return (System_Collections_Generic_List_ShopActionEntity__o *)v9;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopActionMaster__TryGetEntity(
        ShopActionMaster_o *this,
        ShopActionEntity_o **entity,
        int32_t shopId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C22973 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_ShopActionMaster__ShopActionEntity__string__TryGetEntity__, entity);
    byte_4C22973 = 1;
  }
  PK = (Il2CppObject *)ShopActionEntity__CreatePK(shopId, idx, *(const MethodInfo **)&shopId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_ShopActionMaster__ShopActionEntity__string__TryGetEntity__);
}