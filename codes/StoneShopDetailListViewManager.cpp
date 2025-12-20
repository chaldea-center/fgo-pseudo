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
  __int64 v6; // x1
  System_Collections_Generic_List_GiftEntity__o *ListById; // x0
  int size; // w25
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w21
  System_Collections_Generic_List_object__o *itemList; // x22
  Il2CppObject *Item; // x24
  StoneShopDetailListViewItem_o *v13; // x23
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4D28AE8 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C94098(&StoneShopDetailListViewItem_TypeInfo);
    byte_4D28AE8 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !bankShop || !Master_object )
    goto LABEL_18;
  ListById = GiftMaster__GetListById(Master_object, bankShop->fields.giftId, 0);
  if ( ListById )
  {
    size = ListById->fields._size;
    v9 = (System_Collections_Generic_List_object__o *)ListById;
    if ( size >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        Item = System_Collections_Generic_List_object___get_Item(
                 v9,
                 v10,
                 (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        v13 = (StoneShopDetailListViewItem_o *)sub_1C942E4(StoneShopDetailListViewItem_TypeInfo);
        StoneShopDetailListViewItem___ctor(v13, v10, (GiftEntity_o *)Item, v14);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v22 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        v23 = itemList->fields._size;
        if ( (unsigned int)v23 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v13,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + v23;
          itemList->fields._size = v23 + 1;
          v24[4] = (Il2CppClass *)v13;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
        }
        if ( size == ++v10 )
          goto LABEL_16;
      }
LABEL_18:
      sub_1C942F0(Master_object, v6);
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

  if ( (byte_4D28AE9 & 1) == 0 )
  {
    this = (StoneShopDetailListViewManager_o *)sub_1C94098(&StoneShopDetailListViewObject_TypeInfo);
    byte_4D28AE9 = 1;
  }
  if ( !obj
    || (naturalAligment = StoneShopDetailListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (StoneShopDetailListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != StoneShopDetailListViewObject_TypeInfo )
  {
    sub_1C942F0(this, obj);
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
    sub_1C942F0(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


UIScrollView_o *StoneShopDetailListViewManager__get_ScrollView(
        StoneShopDetailListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.scrollView;
}