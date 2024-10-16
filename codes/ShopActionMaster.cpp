void __fastcall ShopActionMaster___ctor(ShopActionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB66EA & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_ShopActionMaster__ShopActionEntity__string___ctor__, method);
    byte_4AB66EA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    195,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_ShopActionMaster__ShopActionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ShopActionEntity_o *__fastcall ShopActionMaster__GetEntity(
        ShopActionMaster_o *this,
        int32_t shopId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4AB66E8 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_ShopActionMaster__ShopActionEntity__string__GetEntity__, *(_QWORD *)&shopId);
    byte_4AB66E8 = 1;
  }
  PK = (Il2CppObject *)ShopActionEntity__CreatePK(shopId, idx, *(const MethodInfo **)&idx);
  return (ShopActionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_31640E8 *)Method_DataMasterBase_ShopActionMaster__ShopActionEntity__string__GetEntity__);
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
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w22
  int32_t v15; // w23
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4AB66EB & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&purchaseShopId);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ShopActionEntity__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ShopActionEntity___ctor__, v7);
    sub_1BAB41C(&System_Collections_Generic_List_ShopActionEntity__TypeInfo, v8);
    sub_1BAB41C(&ShopActionEntity_TypeInfo, v9);
    byte_4AB66EB = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ShopActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_ShopActionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v11 = list;
      methodPtr_low = LOBYTE(ShopActionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ShopActionEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopActionEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == purchaseShopId )
      {
        if ( !v10 )
          break;
        items = v10->fields._items;
        v20 = Method_System_Collections_Generic_List_ShopActionEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          break;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v11;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v11, v16, v17);
        }
      }
      if ( v14 == ++v15 )
        return (System_Collections_Generic_List_ShopActionEntity__o *)v10;
    }
LABEL_18:
    sub_1BAB678(list, v11);
  }
  return (System_Collections_Generic_List_ShopActionEntity__o *)v10;
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
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w22
  int32_t v15; // w23
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 methodPtr_low; // x10
  int klass; // w8
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4AB66EC & 1) == 0 )
  {
    sub_1BAB41C(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&purchaseShopId);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ShopActionEntity__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ShopActionEntity___ctor__, v7);
    sub_1BAB41C(&System_Collections_Generic_List_ShopActionEntity__TypeInfo, v8);
    sub_1BAB41C(&ShopActionEntity_TypeInfo, v9);
    byte_4AB66EC = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ShopActionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_ShopActionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v11 = list;
      methodPtr_low = LOBYTE(ShopActionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ShopActionEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != ShopActionEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == purchaseShopId )
      {
        klass = (int)list[1].klass;
        if ( klass == 8 || klass == 5 )
        {
          if ( !v10 )
            break;
          items = v10->fields._items;
          v21 = Method_System_Collections_Generic_List_ShopActionEntity__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)list,
              *(const MethodInfo_354D8BC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v23[4] = (Il2CppClass *)v11;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v11, v16, v17);
          }
        }
      }
      if ( v14 == ++v15 )
        return (System_Collections_Generic_List_ShopActionEntity__o *)v10;
    }
LABEL_20:
    sub_1BAB678(list, v11);
  }
  return (System_Collections_Generic_List_ShopActionEntity__o *)v10;
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

  if ( (byte_4AB66E9 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_ShopActionMaster__ShopActionEntity__string__TryGetEntity__, entity);
    byte_4AB66E9 = 1;
  }
  PK = (Il2CppObject *)ShopActionEntity__CreatePK(shopId, idx, *(const MethodInfo **)&shopId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_ShopActionMaster__ShopActionEntity__string__TryGetEntity__);
}