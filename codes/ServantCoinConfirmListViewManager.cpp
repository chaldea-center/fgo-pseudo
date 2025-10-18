void ServantCoinConfirmListViewManager___ctor(ServantCoinConfirmListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void ServantCoinConfirmListViewManager__CreateList(
        ServantCoinConfirmListViewManager_o *this,
        GetSvtCoin_array *svtCoins,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0
  il2cpp_array_size_t max_length; // x8
  int v7; // w24
  int32_t v8; // w21
  GetSvtCoin_o *v9; // x8
  System_Collections_Generic_List_object__o *itemList; // x22
  ListViewItem_c *v11; // d8
  ListViewItem_o *v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4C45842 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&ServantCoinConfirmListViewItem_TypeInfo);
    byte_4C45842 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !svtCoins )
    goto LABEL_17;
  max_length = svtCoins->max_length;
  v7 = max_length - 1;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = svtCoins->m_Items[v8];
      if ( !v9 )
        break;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v11 = *(ListViewItem_c **)&v9->fields.itemId;
      v12 = (ListViewItem_o *)sub_1C372A4(ServantCoinConfirmListViewItem_TypeInfo);
      ListViewItem___ctor_43804668(v12, v8, 0);
      v12[1].klass = v11;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v16 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v12,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v12;
        sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v12, v13, v14);
      }
      if ( v7 == v8 )
        goto LABEL_15;
      if ( (unsigned int)++v8 >= LODWORD(svtCoins->max_length) )
        sub_1C372BC(scrollView);
    }
LABEL_17:
    sub_1C372B4(scrollView);
  }
LABEL_15:
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_17;
  UIScrollView__ResetPosition(scrollView, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void ServantCoinConfirmListViewManager__SetObjectItem(
        ServantCoinConfirmListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_4C45843 & 1) == 0 )
  {
    this = (ServantCoinConfirmListViewManager_o *)sub_1C37058(&ServantCoinConfirmListViewObject_TypeInfo);
    byte_4C45843 = 1;
  }
  if ( !obj
    || (naturalAligment = ServantCoinConfirmListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantCoinConfirmListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ServantCoinConfirmListViewObject_TypeInfo )
  {
    sub_1C372B4(this);
  }
  ServantCoinConfirmListViewObject__SetupDisp((ServantCoinConfirmListViewObject_o *)obj, (const MethodInfo *)obj);
}