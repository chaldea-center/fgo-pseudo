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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  GiftMaster_o *Master_object; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_GiftEntity__o *ListById; // x0
  int size; // w25
  System_Collections_Generic_List_object__o *v20; // x20
  int32_t v21; // w21
  System_Collections_Generic_List_object__o *itemList; // x22
  Il2CppObject *Item; // x24
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  StoneShopDetailListViewItem_o *v27; // x23
  const MethodInfo *v28; // x3
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0

  if ( (byte_4B1281E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, bankShop, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v11, v12);
    sub_1BCA7E0(&StoneShopDetailListViewItem_TypeInfo, v13, v14);
    byte_4B1281E = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
  Master_object = (GiftMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
  if ( !bankShop || !Master_object )
    goto LABEL_18;
  ListById = GiftMaster__GetListById(Master_object, bankShop->fields.giftId, 0LL);
  if ( ListById )
  {
    size = ListById->fields._size;
    v20 = (System_Collections_Generic_List_object__o *)ListById;
    if ( size >= 1 )
    {
      v21 = 0;
      while ( 1 )
      {
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        Item = System_Collections_Generic_List_object___get_Item(
                 v20,
                 v21,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
        v27 = (StoneShopDetailListViewItem_o *)sub_1BCAA2C(StoneShopDetailListViewItem_TypeInfo, v24, v25, v26);
        StoneShopDetailListViewItem___ctor(v27, v21, (GiftEntity_o *)Item, v28);
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v36 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        v37 = itemList->fields._size;
        if ( (unsigned int)v37 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v27,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + v37;
          itemList->fields._size = v37 + 1;
          v38[4] = (Il2CppClass *)v27;
          sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)v27, v29, v30, v31, v32, v33, v34);
        }
        if ( size == ++v21 )
          goto LABEL_16;
      }
LABEL_18:
      sub_1BCAA3C(Master_object, v17);
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

  if ( (byte_4B1281F & 1) == 0 )
  {
    this = (StoneShopDetailListViewManager_o *)sub_1BCA7E0(&StoneShopDetailListViewObject_TypeInfo, obj, item);
    byte_4B1281F = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(StoneShopDetailListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (StoneShopDetailListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != StoneShopDetailListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
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
    sub_1BCAA3C(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}


UIScrollView_o *__fastcall StoneShopDetailListViewManager__get_ScrollView(
        StoneShopDetailListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.scrollView;
}