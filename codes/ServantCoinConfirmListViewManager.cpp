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
  il2cpp_array_size_t max_length; // x8
  int v8; // w24
  int32_t v9; // w21
  GetSvtCoin_o *v10; // x8
  System_Collections_Generic_List_object__o *itemList; // x22
  ListViewItem_c *v12; // d8
  ListViewItem_o *v13; // x23
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4D332D0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C93AD4(&ServantCoinConfirmListViewItem_TypeInfo);
    byte_4D332D0 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !svtCoins )
    goto LABEL_17;
  max_length = svtCoins->max_length;
  v8 = max_length - 1;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = svtCoins->m_Items[v9];
      if ( !v10 )
        break;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v12 = *(ListViewItem_c **)&v10->fields.itemId;
      v13 = (ListViewItem_o *)sub_1C93D20(ServantCoinConfirmListViewItem_TypeInfo);
      ListViewItem___ctor_44487500(v13, v9, 0);
      v13[1].klass = v12;
      if ( !itemList )
        break;
      items = itemList->fields._items;
      v21 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        break;
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v13,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v13;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v13, v14, v15, v16, v17, v18, v19);
      }
      if ( v8 == v9 )
        goto LABEL_15;
      if ( (unsigned int)++v9 >= LODWORD(svtCoins->max_length) )
        sub_1C93D34(scrollView);
    }
LABEL_17:
    sub_1C93D2C(scrollView, v6);
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

  if ( (byte_4D332D1 & 1) == 0 )
  {
    this = (ServantCoinConfirmListViewManager_o *)sub_1C93AD4(&ServantCoinConfirmListViewObject_TypeInfo);
    byte_4D332D1 = 1;
  }
  if ( !obj
    || (naturalAligment = ServantCoinConfirmListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantCoinConfirmListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ServantCoinConfirmListViewObject_TypeInfo )
  {
    sub_1C93D2C(this, obj);
  }
  ServantCoinConfirmListViewObject__SetupDisp((ServantCoinConfirmListViewObject_o *)obj, (const MethodInfo *)obj);
}