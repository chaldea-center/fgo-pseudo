void __fastcall StoneShopDetailListViewManager___ctor(StoneShopDetailListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall StoneShopDetailListViewManager__CreateList(
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
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4A57891 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1B885B0(&StoneShopDetailListViewItem_TypeInfo);
    byte_4A57891 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !bankShop || !Master_object )
    goto LABEL_18;
  ListById = GiftMaster__GetListById(Master_object, bankShop->fields.giftId, 0LL);
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
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        v13 = (StoneShopDetailListViewItem_o *)sub_1B887FC(StoneShopDetailListViewItem_TypeInfo);
        StoneShopDetailListViewItem___ctor(v13, v10, (GiftEntity_o *)Item, v14);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v18 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        v19 = itemList->fields._size;
        if ( (unsigned int)v19 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v13,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + v19;
          itemList->fields._size = v19 + 1;
          v20[4] = (Il2CppClass *)v13;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v13, v15, v16);
        }
        if ( size == ++v10 )
          goto LABEL_16;
      }
LABEL_18:
      sub_1B8880C(Master_object, v6);
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

  if ( (byte_4A57892 & 1) == 0 )
  {
    this = (StoneShopDetailListViewManager_o *)sub_1B885B0(&StoneShopDetailListViewObject_TypeInfo);
    byte_4A57892 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(StoneShopDetailListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (StoneShopDetailListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != StoneShopDetailListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
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
    sub_1B8880C(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


UIScrollView_o *__fastcall StoneShopDetailListViewManager__get_ScrollView(
        StoneShopDetailListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.scrollView;
}