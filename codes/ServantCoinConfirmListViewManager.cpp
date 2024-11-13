void __fastcall ServantCoinConfirmListViewManager___ctor(
        ServantCoinConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall ServantCoinConfirmListViewManager__CreateList(
        ServantCoinConfirmListViewManager_o *this,
        GetSvtCoin_array *svtCoins,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UIScrollView_o *scrollView; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x8
  int v12; // w24
  int32_t v13; // w21
  GetSvtCoin_o *v14; // x8
  System_Collections_Generic_List_object__o *itemList; // x22
  ListViewItem_c *v16; // d8
  ListViewItem_o *v17; // x23
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4B18B44 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, svtCoins, method);
    sub_1BCA7E0(&ServantCoinConfirmListViewItem_TypeInfo, v5, v6);
    byte_4B18B44 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !svtCoins )
    goto LABEL_17;
  v11 = *(_QWORD *)&svtCoins->max_length;
  v12 = v11 - 1;
  if ( (int)v11 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      v14 = svtCoins->m_Items[v13];
      if ( !v14 )
        break;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v16 = *(ListViewItem_c **)&v14->fields.itemId;
      v17 = (ListViewItem_o *)sub_1BCAA2C(ServantCoinConfirmListViewItem_TypeInfo, v8, v9, v10);
      ListViewItem___ctor_41447164(v17, v13, 0LL);
      v17[1].klass = v16;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v25 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v17,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v17;
        sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 4), (int64_t)v17, v18, v19, v20, v21, v22, v23);
      }
      if ( v12 == v13 )
        goto LABEL_15;
      if ( ++v13 >= svtCoins->max_length )
        sub_1BCAA44(scrollView, v8);
    }
LABEL_17:
    sub_1BCAA3C(scrollView, v8);
  }
LABEL_15:
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_17;
  UIScrollView__ResetPosition(scrollView, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall ServantCoinConfirmListViewManager__SetObjectItem(
        ServantCoinConfirmListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B18B45 & 1) == 0 )
  {
    this = (ServantCoinConfirmListViewManager_o *)sub_1BCA7E0(&ServantCoinConfirmListViewObject_TypeInfo, obj, item);
    byte_4B18B45 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantCoinConfirmListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantCoinConfirmListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCoinConfirmListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  ServantCoinConfirmListViewObject__SetupDisp((ServantCoinConfirmListViewObject_o *)obj, (const MethodInfo *)obj);
}