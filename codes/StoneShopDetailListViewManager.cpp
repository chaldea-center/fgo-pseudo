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
  System_Collections_Generic_List_GiftEntity__o *ListById; // x0
  int size; // w25
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w21
  System_Collections_Generic_List_object__o *itemList; // x22
  Il2CppObject *Item; // x24
  __int64 v17; // x1
  __int64 v18; // x2
  StoneShopDetailListViewItem_o *v19; // x23
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0

  if ( (byte_49F8BC3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_GiftMaster___, bankShop);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v8);
    sub_1B640C8(&StoneShopDetailListViewItem_TypeInfo, v9);
    byte_49F8BC3 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !bankShop || !Master_object )
    goto LABEL_18;
  ListById = GiftMaster__GetListById(Master_object, bankShop->fields.giftId, 0LL);
  if ( ListById )
  {
    size = ListById->fields._size;
    v13 = (System_Collections_Generic_List_object__o *)ListById;
    if ( size >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        Item = System_Collections_Generic_List_object___get_Item(
                 v13,
                 v14,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        v19 = (StoneShopDetailListViewItem_o *)sub_1B64314(StoneShopDetailListViewItem_TypeInfo, v17, v18);
        StoneShopDetailListViewItem___ctor(v19, v14, (GiftEntity_o *)Item, v20);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        v25 = itemList->fields._size;
        if ( (unsigned int)v25 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v19,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + v25;
          itemList->fields._size = v25 + 1;
          v26[4] = (Il2CppClass *)v19;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v19, v21, v22);
        }
        if ( size == ++v14 )
          goto LABEL_16;
      }
LABEL_18:
      sub_1B64324(Master_object);
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

  if ( (byte_49F8BC4 & 1) == 0 )
  {
    this = (StoneShopDetailListViewManager_o *)sub_1B640C8(&StoneShopDetailListViewObject_TypeInfo, obj);
    byte_49F8BC4 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(StoneShopDetailListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (StoneShopDetailListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != StoneShopDetailListViewObject_TypeInfo )
  {
    sub_1B64324(this);
  }
  StoneShopDetailListViewObject__SetupDisp((StoneShopDetailListViewObject_o *)obj, (const MethodInfo *)obj);
}


float __fastcall StoneShopDetailListViewManager__get_ListViewHeight(
        StoneShopDetailListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 ItemSum; // x0
  struct ListViewItemSeed_o *seed; // x8

  ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0LL);
  seed = this->fields.seed;
  if ( !seed )
    sub_1B64324(ItemSum);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


UIScrollView_o *__fastcall StoneShopDetailListViewManager__get_ScrollView(
        StoneShopDetailListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.scrollView;
}