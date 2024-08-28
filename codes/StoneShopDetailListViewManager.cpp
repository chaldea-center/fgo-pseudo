void __fastcall StoneShopDetailListViewManager___ctor(StoneShopDetailListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall StoneShopDetailListViewManager__CreateList(
        StoneShopDetailListViewManager_o *this,
        BankShopEntity_o *bankShop,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  GiftMaster_o *Master_object; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_GiftEntity__o *ListById; // x0
  int size; // w25
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w21
  System_Collections_Generic_List_object__o *itemList; // x22
  Il2CppObject *Item; // x24
  StoneShopDetailListViewItem_o *v18; // x23
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4A053C1 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_GiftMaster___, bankShop);
    sub_1B686D4(&DataManager_TypeInfo, v5);
    sub_1B686D4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v8);
    sub_1B686D4(&StoneShopDetailListViewItem_TypeInfo, v9);
    byte_4A053C1 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !bankShop || !Master_object )
    goto LABEL_18;
  ListById = GiftMaster__GetListById(Master_object, bankShop->fields.giftId, 0LL);
  if ( ListById )
  {
    size = ListById->fields._size;
    v14 = (System_Collections_Generic_List_object__o *)ListById;
    if ( size >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        Item = System_Collections_Generic_List_object___get_Item(
                 v14,
                 v15,
                 (const MethodInfo_34BBFA8 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        v18 = (StoneShopDetailListViewItem_o *)sub_1B68920(StoneShopDetailListViewItem_TypeInfo);
        StoneShopDetailListViewItem___ctor(v18, v15, (GiftEntity_o *)Item, v19);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v23 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        v24 = itemList->fields._size;
        if ( (unsigned int)v24 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v18,
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + v24;
          itemList->fields._size = v24 + 1;
          v25[4] = (Il2CppClass *)v18;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v18, v20, v21);
        }
        if ( size == ++v15 )
          goto LABEL_16;
      }
LABEL_18:
      sub_1B68930(Master_object, v11);
    }
  }
LABEL_16:
  Master_object = (GiftMaster_o *)this->fields.scrollView;
  if ( !Master_object )
    goto LABEL_18;
  UIScrollView__ResetPosition((UIScrollView_o *)Master_object, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall StoneShopDetailListViewManager__SetObjectItem(
        StoneShopDetailListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4A053C2 & 1) == 0 )
  {
    this = (StoneShopDetailListViewManager_o *)sub_1B686D4(&StoneShopDetailListViewObject_TypeInfo, obj);
    byte_4A053C2 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(StoneShopDetailListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (StoneShopDetailListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != StoneShopDetailListViewObject_TypeInfo )
  {
    sub_1B68930(this, obj);
  }
  StoneShopDetailListViewObject__SetupDisp((StoneShopDetailListViewObject_o *)obj, (const MethodInfo *)obj);
}


float __fastcall StoneShopDetailListViewManager__get_ListViewHeight(
        StoneShopDetailListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 ItemSum; // x0
  __int64 v4; // x1
  struct ListViewItemSeed_o *seed; // x8

  ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0LL);
  seed = this->fields.seed;
  if ( !seed )
    sub_1B68930(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


UIScrollView_o *__fastcall StoneShopDetailListViewManager__get_ScrollView(
        StoneShopDetailListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.scrollView;
}