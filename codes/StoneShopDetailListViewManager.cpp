void StoneShopDetailListViewManager___ctor(StoneShopDetailListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void StoneShopDetailListViewManager__CreateList(
        StoneShopDetailListViewManager_o *this,
        BankShopEntity_o *bankShop,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  GiftMaster_o *Master_object; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_GiftEntity__o *ListById; // x0
  int size; // w25
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w21
  System_Collections_Generic_List_object__o *itemList; // x22
  Il2CppObject *Item; // x24
  StoneShopDetailListViewItem_o *v15; // x23
  const MethodInfo *v16; // x3
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0

  if ( (byte_593481F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_GiftMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_21FFC50(&StoneShopDetailListViewItem_TypeInfo);
    byte_593481F = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
  Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !bankShop || !Master_object )
    goto LABEL_18;
  ListById = GiftMaster__GetListById(Master_object, bankShop->fields.giftId, 0);
  if ( ListById )
  {
    size = ListById->fields._size;
    v11 = (System_Collections_Generic_List_object__o *)ListById;
    if ( size >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        Item = System_Collections_Generic_List_object___get_Item(
                 v11,
                 v12,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        v15 = (StoneShopDetailListViewItem_o *)sub_21FFEBC(StoneShopDetailListViewItem_TypeInfo);
        StoneShopDetailListViewItem___ctor(v15, v12, (GiftEntity_o *)Item, v16);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        v25 = itemList->fields._size;
        if ( (unsigned int)v25 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v15,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + v25;
          itemList->fields._size = v25 + 1;
          v26[4] = (Il2CppClass *)v15;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v15, v17, v18, v19, v20, v21, v22);
        }
        if ( size == ++v12 )
          goto LABEL_16;
      }
LABEL_18:
      sub_21FFECC(Master_object, v8);
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

  if ( (byte_5934820 & 1) == 0 )
  {
    this = (StoneShopDetailListViewManager_o *)sub_21FFC50(&StoneShopDetailListViewObject_TypeInfo);
    byte_5934820 = 1;
  }
  if ( !obj
    || (naturalAligment = StoneShopDetailListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (StoneShopDetailListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != StoneShopDetailListViewObject_TypeInfo )
  {
    sub_21FFECC(this, obj);
  }
  StoneShopDetailListViewObject__SetupDisp((StoneShopDetailListViewObject_o *)obj, (const MethodInfo *)obj);
}


float StoneShopDetailListViewManager__get_ListViewHeight(
        StoneShopDetailListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 ItemSum; // x0
  __int64 v4; // x1
  struct ListViewItemSeed_o *seed; // x8

  ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0);
  seed = this->fields.seed;
  if ( !seed )
    sub_21FFECC(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


UIScrollView_o *StoneShopDetailListViewManager__get_ScrollView(
        StoneShopDetailListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.scrollView;
}