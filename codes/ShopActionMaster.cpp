void __fastcall ShopActionMaster___ctor(ShopActionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB8A0 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ShopActionMaster__ShopActionEntity__string___ctor__, method);
    byte_49BB8A0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    199,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_ShopActionMaster__ShopActionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ShopActionEntity_o *__fastcall ShopActionMaster__GetEntity(
        ShopActionMaster_o *this,
        int32_t shopId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BB89E & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ShopActionMaster__ShopActionEntity__string__GetEntity__, *(_QWORD *)&shopId);
    byte_49BB89E = 1;
  }
  PK = (Il2CppObject *)ShopActionEntity__CreatePK(shopId, idx, *(const MethodInfo **)&idx);
  return (ShopActionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_31A2454 *)Method_DataMasterBase_ShopActionMaster__ShopActionEntity__string__GetEntity__);
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

  if ( (byte_49BB8A1 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_ShopActionEntity__get_Count__,
      *(_QWORD *)&purchaseShopId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ShopActionEntity__get_Item__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ShopActionEntity__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ShopActionEntity___ctor__, v7);
    sub_1B4CF90(&System_Collections_Generic_List_ShopActionEntity__TypeInfo, v8);
    byte_49BB8A1 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ShopActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ShopActionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_ShopActionEntity__get_Count__);
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
                                                                 (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_ShopActionEntity__get_Item__);
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
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v10;
          sub_1B4CF34((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v10, v15, v16);
        }
      }
      if ( v13 == ++v14 )
        return (System_Collections_Generic_List_ShopActionEntity__o *)v9;
    }
LABEL_16:
    sub_1B4D1EC(list, v10);
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

  if ( (byte_49BB8A2 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_ShopActionEntity__get_Count__,
      *(_QWORD *)&purchaseShopId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_ShopActionEntity__get_Item__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ShopActionEntity__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ShopActionEntity___ctor__, v7);
    sub_1B4CF90(&System_Collections_Generic_List_ShopActionEntity__TypeInfo, v8);
    byte_49BB8A2 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ShopActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ShopActionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_ShopActionEntity__get_Count__);
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
                                                                 (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_ShopActionEntity__get_Item__);
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
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v10;
            sub_1B4CF34((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v10, v15, v16);
          }
        }
      }
      if ( v13 == ++v14 )
        return (System_Collections_Generic_List_ShopActionEntity__o *)v9;
    }
LABEL_18:
    sub_1B4D1EC(list, v10);
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

  if ( (byte_49BB89F & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_ShopActionMaster__ShopActionEntity__string__TryGetEntity__, entity);
    byte_49BB89F = 1;
  }
  PK = (Il2CppObject *)ShopActionEntity__CreatePK(shopId, idx, *(const MethodInfo **)&shopId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_ShopActionMaster__ShopActionEntity__string__TryGetEntity__);
}