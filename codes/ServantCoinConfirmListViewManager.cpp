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
  UIScrollView_o *scrollView; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  int v9; // w24
  int32_t v10; // w21
  GetSvtCoin_o *v11; // x8
  System_Collections_Generic_List_object__o *itemList; // x22
  ListViewItem_c *v13; // d8
  ListViewItem_o *v14; // x23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  __int64 v21; // x2

  if ( (byte_4B04A4C & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__Add__, svtCoins);
    sub_1BC3008(&ServantCoinConfirmListViewItem_TypeInfo, v5);
    byte_4B04A4C = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !svtCoins )
    goto LABEL_17;
  v8 = *(_QWORD *)&svtCoins->max_length;
  v9 = v8 - 1;
  if ( (int)v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = svtCoins->m_Items[v10];
      if ( !v11 )
        break;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v13 = *(ListViewItem_c **)&v11->fields.itemId;
      v14 = (ListViewItem_o *)sub_1BC3254(ServantCoinConfirmListViewItem_TypeInfo);
      ListViewItem___ctor_42769384(v14, v10, 0LL);
      v14[1].klass = v13;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v18 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v14,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v14;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
      }
      if ( v9 == v10 )
        goto LABEL_15;
      if ( ++v10 >= svtCoins->max_length )
        sub_1BC326C(scrollView, v7, v21);
    }
LABEL_17:
    sub_1BC3264(scrollView, v7);
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

  if ( (byte_4B04A4D & 1) == 0 )
  {
    this = (ServantCoinConfirmListViewManager_o *)sub_1BC3008(&ServantCoinConfirmListViewObject_TypeInfo, obj);
    byte_4B04A4D = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantCoinConfirmListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantCoinConfirmListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCoinConfirmListViewObject_TypeInfo )
  {
    sub_1BC3264(this, obj);
  }
  ServantCoinConfirmListViewObject__SetupDisp((ServantCoinConfirmListViewObject_o *)obj, (const MethodInfo *)obj);
}