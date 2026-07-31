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
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // x24
  __int64 v8; // x21
  GetSvtCoin_o *v9; // x8
  System_Collections_Generic_List_object__o *itemList; // x22
  ListViewItem_c *v11; // d8
  ListViewItem_o *v12; // x23
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_593B856 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&ServantCoinConfirmListViewItem_TypeInfo);
    byte_593B856 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !svtCoins )
    goto LABEL_16;
  max_length = svtCoins->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= LODWORD(svtCoins->max_length) )
        sub_21FFED4(scrollView);
      v9 = svtCoins->m_Items[v8];
      if ( !v9 )
        break;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v11 = *(ListViewItem_c **)&v9->fields.itemId;
      v12 = (ListViewItem_o *)sub_21FFEBC(ServantCoinConfirmListViewItem_TypeInfo);
      ListViewItem___ctor_50749276(v12, v8, 0);
      v12[1].klass = v11;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v20 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v12,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v12;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v12, v13, v14, v15, v16, v17, v18);
      }
      if ( (_DWORD)max_length == (_DWORD)++v8 )
        goto LABEL_14;
    }
LABEL_16:
    sub_21FFECC(scrollView, v6);
  }
LABEL_14:
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_16;
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

  if ( (byte_593B857 & 1) == 0 )
  {
    this = (ServantCoinConfirmListViewManager_o *)sub_21FFC50(&ServantCoinConfirmListViewObject_TypeInfo);
    byte_593B857 = 1;
  }
  if ( !obj
    || (naturalAligment = ServantCoinConfirmListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantCoinConfirmListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ServantCoinConfirmListViewObject_TypeInfo )
  {
    sub_21FFECC(this, obj);
  }
  ServantCoinConfirmListViewObject__SetupDisp((ServantCoinConfirmListViewObject_o *)obj, (const MethodInfo *)obj);
}