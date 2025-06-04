void __fastcall ShopActionMaster___ctor(ShopActionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B02ABC & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_ShopActionMaster__ShopActionEntity__string___ctor__, method);
    byte_4B02ABC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    199,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_ShopActionMaster__ShopActionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ShopActionEntity_o *__fastcall ShopActionMaster__GetEntity(
        ShopActionMaster_o *this,
        int32_t shopId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B02ABA & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_ShopActionMaster__ShopActionEntity__string__GetEntity__, *(_QWORD *)&shopId);
    byte_4B02ABA = 1;
  }
  PK = (Il2CppObject *)ShopActionEntity__CreatePK(shopId, idx, *(const MethodInfo **)&idx);
  return (ShopActionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_32B3B28 *)Method_DataMasterBase_ShopActionMaster__ShopActionEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w22
  int32_t v14; // w23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4B02ABD & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_ShopActionEntity__get_Count__,
      *(_QWORD *)&purchaseShopId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_ShopActionEntity__get_Item__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ShopActionEntity__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_ShopActionEntity___ctor__, v7);
    sub_1BC3008(&System_Collections_Generic_List_ShopActionEntity__TypeInfo, v8);
    byte_4B02ABD = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ShopActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ShopActionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_ShopActionEntity__get_Count__);
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
                                                                 (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_ShopActionEntity__get_Item__);
      if ( !list )
        break;
      v10 = list;
      if ( LODWORD(list->fields.items) == purchaseShopId )
      {
        if ( !v9 )
          break;
        items = v9->fields._items;
        v18 = Method_System_Collections_Generic_List_ShopActionEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)list,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v10;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v10, v15, v16);
        }
      }
      if ( v13 == ++v14 )
        return (System_Collections_Generic_List_ShopActionEntity__o *)v9;
    }
LABEL_16:
    sub_1BC3264(list, v10);
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
  System_Collections_ObjectModel_Collection_T__o *v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w22
  int32_t v14; // w23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int klass; // w8
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4B02ABE & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_ObjectModel_Collection_ShopActionEntity__get_Count__,
      *(_QWORD *)&purchaseShopId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_ShopActionEntity__get_Item__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ShopActionEntity__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_ShopActionEntity___ctor__, v7);
    sub_1BC3008(&System_Collections_Generic_List_ShopActionEntity__TypeInfo, v8);
    byte_4B02ABE = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ShopActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ShopActionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_ShopActionEntity__get_Count__);
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
                                                                 (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_ShopActionEntity__get_Item__);
      if ( !list )
        break;
      v10 = list;
      if ( LODWORD(list->fields.items) == purchaseShopId )
      {
        klass = (int)list[1].klass;
        if ( klass == 8 || klass == 5 )
        {
          if ( !v9 )
            break;
          items = v9->fields._items;
          v19 = Method_System_Collections_Generic_List_ShopActionEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              (Il2CppObject *)list,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v10;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v10, v15, v16);
          }
        }
      }
      if ( v13 == ++v14 )
        return (System_Collections_Generic_List_ShopActionEntity__o *)v9;
    }
LABEL_18:
    sub_1BC3264(list, v10);
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

  if ( (byte_4B02ABB & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_ShopActionMaster__ShopActionEntity__string__TryGetEntity__, entity);
    byte_4B02ABB = 1;
  }
  PK = (Il2CppObject *)ShopActionEntity__CreatePK(shopId, idx, *(const MethodInfo **)&shopId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_ShopActionMaster__ShopActionEntity__string__TryGetEntity__);
}