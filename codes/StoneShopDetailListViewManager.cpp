void StoneShopDetailListViewManager___ctor(StoneShopDetailListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void StoneShopDetailListViewManager__CreateList(
        StoneShopDetailListViewManager_o *this,
        BankShopEntity_o *bankShop,
        const MethodInfo *method)
{
  GiftMaster_o *Master_object; // x0
  System_Collections_Generic_List_GiftEntity__o *ListById; // x0
  int size; // w25
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w21
  System_Collections_Generic_List_object__o *itemList; // x22
  Il2CppObject *Item; // x24
  StoneShopDetailListViewItem_o *v12; // x23
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4C33D3E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C32C20(&StoneShopDetailListViewItem_TypeInfo);
    byte_4C33D3E = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !bankShop || !Master_object )
    goto LABEL_18;
  ListById = GiftMaster__GetListById(Master_object, bankShop->fields.giftId, 0);
  if ( ListById )
  {
    size = ListById->fields._size;
    v8 = (System_Collections_Generic_List_object__o *)ListById;
    if ( size >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        Item = System_Collections_Generic_List_object___get_Item(
                 v8,
                 v9,
                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        v12 = (StoneShopDetailListViewItem_o *)sub_1C32E6C(StoneShopDetailListViewItem_TypeInfo);
        StoneShopDetailListViewItem___ctor(v12, v9, (GiftEntity_o *)Item, v13);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v17 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        v18 = itemList->fields._size;
        if ( (unsigned int)v18 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v12,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + v18;
          itemList->fields._size = v18 + 1;
          v19[4] = (Il2CppClass *)v12;
          sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v12, v14, v15);
        }
        if ( size == ++v9 )
          goto LABEL_16;
      }
LABEL_18:
      sub_1C32E7C(Master_object);
    }
  }
LABEL_16:
  Master_object = (GiftMaster_o *)this->fields.scrollView;
  if ( !Master_object )
    goto LABEL_18;
  UIScrollView__ResetPosition((UIScrollView_o *)Master_object, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void StoneShopDetailListViewManager__SetObjectItem(
        StoneShopDetailListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_4C33D3F & 1) == 0 )
  {
    this = (StoneShopDetailListViewManager_o *)sub_1C32C20(&StoneShopDetailListViewObject_TypeInfo);
    byte_4C33D3F = 1;
  }
  if ( !obj
    || (naturalAligment = StoneShopDetailListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (StoneShopDetailListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != StoneShopDetailListViewObject_TypeInfo )
  {
    sub_1C32E7C(this);
  }
  StoneShopDetailListViewObject__SetupDisp((StoneShopDetailListViewObject_o *)obj, (const MethodInfo *)obj);
}


float StoneShopDetailListViewManager__get_ListViewHeight(
        StoneShopDetailListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 ItemSum; // x0
  struct ListViewItemSeed_o *seed; // x8

  ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0);
  seed = this->fields.seed;
  if ( !seed )
    sub_1C32E7C(ItemSum);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


UIScrollView_o *StoneShopDetailListViewManager__get_ScrollView(
        StoneShopDetailListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.scrollView;
}