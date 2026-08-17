void ListViewManager___ctor(ListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_c *v3; // x0
  UnityEngine_Vector2_c *v4; // x8
  ListViewSort_o *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_List_object__o *v12; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_Stack_GameObject__c *v19; // x0
  System_Collections_Generic_Stack_T__o *v20; // x20
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_597200A & 1) == 0 )
  {
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Stack_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_Stack_GameObject__TypeInfo);
    byte_597200A = 1;
  }
  if ( !byte_59699C0 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_59699C0 = 1;
  }
  v3 = ListViewSort_TypeInfo;
  v4 = UnityEngine_Vector2_TypeInfo;
  this->fields.clipRange = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  this->fields.clipOffset = v4->static_fields->zeroVector;
  v5 = (ListViewSort_o *)sub_2213CCC(v3);
  ListViewSort___ctor(v5, 3, 1, 0);
  this->fields.sort = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sort, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.objectList, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  v19 = System_Collections_Generic_Stack_GameObject__TypeInfo;
  this->fields.isInput = 1;
  v20 = (System_Collections_Generic_Stack_T__o *)sub_2213CCC(v19);
  System_Collections_Generic_Stack_object____ctor(
    v20,
    (const MethodInfo_3B5CB8C *)Method_System_Collections_Generic_Stack_GameObject___ctor__);
  this->fields.objectStock = (struct System_Collections_Generic_Stack_GameObject__o *)v20;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.objectStock, (int32_t)v20, v21, v22, v23, v24, v25, v26);
  this->fields.terminalIndex = -2;
  this->fields.lastSelectIndex = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ListViewManager__BackLoopItem(ListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  struct ListViewItem_o *centerItem; // x8
  ListViewItemSeed_o *Item; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct ListViewItem_o *v8; // x8
  ListViewItemSeed_o *v9; // x20
  __int64 v10; // x1
  UnityEngine_Object_o *prefab; // x19
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5971FF3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FF3 = 1;
  }
  if ( this->fields.isLoop )
  {
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
    if ( itemSortList )
    {
      if ( itemSortList->fields._size == 2 )
      {
        centerItem = this->fields.centerItem;
        if ( centerItem )
        {
          Item = (ListViewItemSeed_o *)System_Collections_Generic_List_object___get_Item(
                                         itemSortList,
                                         centerItem->fields.sortIndex == 0,
                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          v8 = this->fields.centerItem;
          if ( !v8 )
            goto LABEL_17;
          v9 = Item;
          if ( !Item )
            goto LABEL_17;
          v6 = (const MethodInfo *)(unsigned int)(v8->fields.loopIndex - 1);
          if ( HIDWORD(Item->fields.m_CancellationTokenSource) != (_DWORD)v6 )
          {
            Item = this->fields.seed;
            HIDWORD(v9->fields.m_CancellationTokenSource) = (_DWORD)v6;
            if ( !Item )
              goto LABEL_17;
            LocalPosition = ListViewItemSeed__GetLocalPosition(Item, (int32_t)v6, v7);
            HIDWORD(v9[1].fields.m_CancellationTokenSource) = LODWORD(LocalPosition.fields.x);
            *(float *)&v9[1].fields.parent = LocalPosition.fields.y;
            prefab = (UnityEngine_Object_o *)v9[1].fields.prefab;
            HIDWORD(v9[1].fields.parent) = LODWORD(LocalPosition.fields.z);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
            if ( UnityEngine_Object__op_Inequality(prefab, 0, 0) )
            {
              Item = (ListViewItemSeed_o *)v9[1].fields.prefab;
              if ( Item )
              {
                ListViewObject__SetTransform(
                  (ListViewObject_o *)Item,
                  *(UnityEngine_Vector3_o *)((char *)&v9[1].fields.m_CancellationTokenSource + 4),
                  v6);
                return;
              }
LABEL_17:
              sub_2213CDC(Item, v6);
            }
          }
        }
      }
    }
  }
}


void ListViewManager__CenterLoopItem(ListViewManager_o *this, ListViewItem_o *centerItem, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  int size; // w26
  int32_t sortIndex; // w20
  int32_t v15; // w21
  int v16; // w8
  int v17; // w28
  int32_t v18; // w23
  const MethodInfo *v19; // x2
  System_Collections_Generic_List_object__o *v20; // x24
  __int64 v21; // x1
  UnityEngine_Object_c *v22; // x0
  UnityEngine_Object_o *syncRoot; // x25
  int32_t v24; // w8
  int32_t v25; // w26
  int32_t v26; // w22
  const MethodInfo *v27; // x2
  System_Collections_Generic_List_object__o *v28; // x23
  __int64 v29; // x1
  UnityEngine_Object_c *v30; // x0
  UnityEngine_Object_o *v31; // x24
  const MethodInfo *v32; // x3
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5971FF2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FF2 = 1;
  }
  if ( this->fields.isLoop )
  {
    itemSortList = this->fields.itemSortList;
    if ( itemSortList )
    {
      if ( centerItem && itemSortList->fields._size >= 3 )
      {
        this->fields.centerItem = centerItem;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.centerItem,
          (int32_t)centerItem,
          (System_String_o *)method,
          v3,
          v4,
          v5,
          v6,
          v7);
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( !Item )
          goto LABEL_48;
        size = Item->fields._size;
        sortIndex = centerItem->fields.sortIndex;
        v15 = sortIndex;
        v16 = size >= 0 ? Item->fields._size : size + 1;
        if ( size >= 2 )
        {
          v17 = v16 >> 1;
          v18 = centerItem->fields.loopIndex + 1;
          v15 = centerItem->fields.sortIndex;
          do
          {
            Item = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
            if ( v15 + 1 < size )
              ++v15;
            else
              v15 = 0;
            if ( !Item )
              goto LABEL_48;
            Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  Item,
                                                                  v15,
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            if ( !Item )
              goto LABEL_48;
            v20 = Item;
            if ( v18 != Item->fields._version )
            {
              Item = (System_Collections_Generic_List_object__o *)this->fields.seed;
              v20->fields._version = v18;
              if ( !Item )
                goto LABEL_48;
              LocalPosition = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)Item, v18, v19);
              v22 = UnityEngine_Object_TypeInfo;
              HIDWORD(v20[2].fields._items) = LODWORD(LocalPosition.fields.x);
              v20[2].fields._size = LODWORD(LocalPosition.fields.y);
              syncRoot = (UnityEngine_Object_o *)v20[2].fields._syncRoot;
              v20[2].fields._version = LODWORD(LocalPosition.fields.z);
              if ( !*(&v22->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(v22, v21);
              if ( UnityEngine_Object__op_Inequality(syncRoot, 0, 0) )
              {
                Item = (System_Collections_Generic_List_object__o *)v20[2].fields._syncRoot;
                if ( !Item )
                  goto LABEL_48;
                ListViewObject__SetTransform(
                  (ListViewObject_o *)Item,
                  *(UnityEngine_Vector3_o *)((char *)&v20[2].fields._items + 4),
                  v11);
              }
            }
            --v17;
            ++v18;
            LOBYTE(v20[2].fields._items) = this->fields.isAllDisp;
          }
          while ( v17 );
          Item = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
          if ( !Item )
            goto LABEL_48;
        }
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v15,
                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Item )
LABEL_48:
          sub_2213CDC(Item, v11);
        v24 = sortIndex - 1;
        v25 = size - 1;
        LOBYTE(Item[2].fields._items) = 1;
        if ( sortIndex - 1 < 0 )
          v24 = v25;
        if ( v24 != v15 )
        {
          v26 = centerItem->fields.loopIndex - 1;
          do
          {
            Item = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
            if ( !Item )
              goto LABEL_48;
            sortIndex = v24;
            Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  Item,
                                                                  v24,
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            if ( !Item )
              goto LABEL_48;
            v28 = Item;
            if ( v26 != Item->fields._version )
            {
              Item = (System_Collections_Generic_List_object__o *)this->fields.seed;
              v28->fields._version = v26;
              if ( !Item )
                goto LABEL_48;
              v34 = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)Item, v26, v27);
              v30 = UnityEngine_Object_TypeInfo;
              HIDWORD(v28[2].fields._items) = LODWORD(v34.fields.x);
              v28[2].fields._size = LODWORD(v34.fields.y);
              v31 = (UnityEngine_Object_o *)v28[2].fields._syncRoot;
              v28[2].fields._version = LODWORD(v34.fields.z);
              if ( !*(&v30->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(v30, v29);
              if ( UnityEngine_Object__op_Inequality(v31, 0, 0) )
              {
                Item = (System_Collections_Generic_List_object__o *)v28[2].fields._syncRoot;
                if ( !Item )
                  goto LABEL_48;
                ListViewObject__SetTransform(
                  (ListViewObject_o *)Item,
                  *(UnityEngine_Vector3_o *)((char *)&v28[2].fields._items + 4),
                  v11);
              }
            }
            v24 = sortIndex - 1;
            --v26;
            if ( sortIndex - 1 < 0 )
              v24 = v25;
            LOBYTE(v28[2].fields._items) = this->fields.isAllDisp;
          }
          while ( v24 != v15 );
        }
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( !Item )
          goto LABEL_48;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              sortIndex,
                                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Item )
          goto LABEL_48;
        this->fields.terminalIndex = sortIndex;
        LOBYTE(Item[2].fields._items) = 1;
        ListViewManager__ClippingItems(this, 0, 0, v32);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ListViewManager__CheckEmptyMessageBase(ListViewManager_o *this, bool IsActive, const MethodInfo *method)
{
  UnityEngine_GameObject_o *emptyMessageBase; // x0

  emptyMessageBase = this->fields.emptyMessageBase;
  if ( !emptyMessageBase )
    sub_2213CDC(0, IsActive);
  UnityEngine_GameObject__SetActive(emptyMessageBase, IsActive, 0);
}


void ListViewManager__CheckFocusItem(
        ListViewManager_o *this,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x4
  Il2CppMethodPointer methodPtr; // x9
  int32_t lastSelectIndex; // w21
  System_Threading_CancellationToken_o v9; // x3
  const MethodInfo *v10; // x4
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF
  Cysharp_Threading_Tasks_UniTask_o v12; // 0:x0.16

  methodPtr = this->klass->vtable._6_GetFocusItemIndex.methodPtr;
  v6 = this->klass->vtable._6_GetFocusItemIndex.method;
  v11 = 0;
  if ( (((__int64 (__fastcall *)(ListViewManager_o *, int32_t *, System_Collections_Generic_List_ListViewItem__o *, _QWORD, const MethodInfo *))methodPtr)(
          this,
          &v11,
          list,
          (unsigned int)sum,
          v6)
      & 1) != 0 )
  {
    lastSelectIndex = v11;
    if ( v11 < 0 )
    {
      lastSelectIndex = this->fields.lastSelectIndex;
      v11 = lastSelectIndex;
    }
    v9.fields._source = Cysharp_Threading_Tasks_UniTaskCancellationExtensions__GetCancellationTokenOnDestroy(
                          (UnityEngine_MonoBehaviour_o *)this,
                          0).fields._source;
    v12 = ListViewManager__FocusSelectItem(this, list, lastSelectIndex, v9, v10);
    Cysharp_Threading_Tasks_UniTaskExtensions__Forget(v12, 0);
  }
}


void ListViewManager__CheckHorizontalScrollBar(ListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager_o *v2; // x19
  struct UIScrollView_o *scrollView; // x8
  UnityEngine_Object_o *horizontalScrollBar; // x20
  struct UILabel_o *emptyMessageLabel; // x19
  float v6; // s0

  v2 = this;
  if ( (byte_5972007 & 1) == 0 )
  {
    this = (ListViewManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972007 = 1;
  }
  scrollView = v2->fields.scrollView;
  if ( !scrollView )
    goto LABEL_16;
  horizontalScrollBar = (UnityEngine_Object_o *)scrollView->fields.horizontalScrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(horizontalScrollBar, 0, 0) )
  {
    this = (ListViewManager_o *)v2->fields.scrollView;
    if ( this )
    {
      UIScrollView__OnScrollBar((UIScrollView_o *)this, 0);
      this = (ListViewManager_o *)v2->fields.scrollView;
      if ( this )
      {
        emptyMessageLabel = this->fields.emptyMessageLabel;
        if ( LODWORD(this->fields.sortOrderSprite) )
        {
          this = (ListViewManager_o *)((__int64 (__fastcall *)(ListViewManager_o *, const MethodInfo *))this->klass->vtable._5_SetSortButtonImage.methodPtr)(
                                        this,
                                        this->klass->vtable._5_SetSortButtonImage.method);
          v6 = 0.0;
          if ( ((unsigned __int8)this & 1) != 0 )
            v6 = 1.0;
          if ( emptyMessageLabel )
            goto LABEL_13;
        }
        else
        {
          v6 = 1.0;
          if ( emptyMessageLabel )
          {
LABEL_13:
            UIProgressBar__set_alpha((UIProgressBar_o *)emptyMessageLabel, v6, 0);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_2213CDC(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void ListViewManager__CheckScroll(ListViewManager_o *this, int32_t scaleType, const MethodInfo *method)
{
  ListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  struct ListViewItemSeed_o *v6; // x9
  struct ListViewItemSeed_o *seed; // x9
  const MethodInfo *v8; // x1

  v4 = this;
  if ( (byte_5972008 & 1) == 0 )
  {
    this = (ListViewManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_5972008 = 1;
  }
  itemSortList = v4->fields.itemSortList;
  if ( !itemSortList )
  {
    this = (ListViewManager_o *)v4->fields.scrollBar;
LABEL_15:
    if ( this )
    {
      this = (ListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        return;
      }
    }
LABEL_19:
    sub_2213CDC(this, *(_QWORD *)&scaleType);
  }
  if ( (unsigned int)scaleType < 2 )
  {
    seed = v4->fields.seed;
    if ( !seed )
      goto LABEL_19;
    this = (ListViewManager_o *)v4->fields.scrollBar;
    if ( (float)(seed->fields.arrangementVolume.fields.x + seed->fields.arrangementVolume.fields.x) >= (float)itemSortList->fields._size )
      goto LABEL_15;
    goto LABEL_12;
  }
  if ( (scaleType & 0xFFFFFFFE) == 2 )
  {
    v6 = v4->fields.seed;
    if ( !v6 )
      goto LABEL_19;
    this = (ListViewManager_o *)v4->fields.scrollBar;
    if ( (float)(v6->fields.arrangementVolume.fields.x * 3.0) >= (float)itemSortList->fields._size )
      goto LABEL_15;
LABEL_12:
    if ( this )
    {
      this = (ListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        ListViewManager__CheckVerticalScrollBar(v4, v8);
        return;
      }
    }
    goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
void ListViewManager__CheckSortButton(ListViewManager_o *this, bool IsActive, const MethodInfo *method)
{
  UnityEngine_GameObject_o *SortObject; // x0

  SortObject = this->fields.SortObject;
  if ( !SortObject )
    sub_2213CDC(0, IsActive);
  UnityEngine_GameObject__SetActive(SortObject, IsActive, 0);
}


void ListViewManager__CheckVerticalScrollBar(ListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager_o *v2; // x19
  struct UIScrollView_o *scrollView; // x8
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UILabel_o *sortKindLabel; // x19
  float v6; // s0

  v2 = this;
  if ( (byte_5972006 & 1) == 0 )
  {
    this = (ListViewManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972006 = 1;
  }
  scrollView = v2->fields.scrollView;
  if ( !scrollView )
    goto LABEL_16;
  verticalScrollBar = (UnityEngine_Object_o *)scrollView->fields.verticalScrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0) )
  {
    this = (ListViewManager_o *)v2->fields.scrollView;
    if ( this )
    {
      UIScrollView__OnScrollBar((UIScrollView_o *)this, 0);
      this = (ListViewManager_o *)v2->fields.scrollView;
      if ( this )
      {
        sortKindLabel = this->fields.sortKindLabel;
        if ( LODWORD(this->fields.sortOrderSprite) )
        {
          this = (ListViewManager_o *)((__int64 (__fastcall *)(ListViewManager_o *, const MethodInfo *))this->klass->vtable._6_GetFocusItemIndex.methodPtr)(
                                        this,
                                        this->klass->vtable._6_GetFocusItemIndex.method);
          v6 = 0.0;
          if ( ((unsigned __int8)this & 1) != 0 )
            v6 = 1.0;
          if ( sortKindLabel )
            goto LABEL_13;
        }
        else
        {
          v6 = 1.0;
          if ( sortKindLabel )
          {
LABEL_13:
            UIProgressBar__set_alpha((UIProgressBar_o *)sortKindLabel, v6, 0);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_2213CDC(this, method);
  }
}


void ListViewManager__ClearScrollBarValue(ListViewManager_o *this, bool clearMaterialIdx, const MethodInfo *method)
{
  if ( (byte_5971FEC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13747/*"SvtEqScrollBarValue"*/);
    byte_5971FEC = 1;
  }
  UnityEngine_PlayerPrefs__SetFloat((System_String_o *)StringLiteral_13747/*"SvtEqScrollBarValue"*/, 0.0, 0);
  this->fields.scrollBarValue = 0.0;
  if ( clearMaterialIdx )
    this->fields.lastSelectIndex = -1;
}


bool ListViewManager__ClippingItem(ListViewManager_o *this, ListViewObject_o *obj, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_5971FED & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FED = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0, 0);
  if ( v5 )
    return 0;
  if ( !obj )
    sub_2213CDC(v5, v6);
  return ListViewManager__ClippingItem_50835204(this, obj->fields.linkItem, v7);
}


bool ListViewManager__ClippingItem_50835204(ListViewManager_o *this, ListViewItem_o *item, const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  float x; // s5
  float v7; // s0
  float v8; // s3
  float v9; // s4
  float v10; // s0
  float v13; // s0
  float v14; // s1
  float y; // s3
  float v16; // s2
  float v17; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( !item )
    return 0;
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollView, 0)) == 0 )
    sub_2213CDC(scrollView, item);
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0);
  x = item->fields.basePosition.fields.x;
  v7 = this->fields.clipOffset.fields.x - localPosition.fields.x;
  v8 = this->fields.clipRange.fields.x * 0.5;
  v9 = v7 - v8;
  v10 = v7 + v8;
  if ( x < v9 || x > v10 )
    return 0;
  v13 = this->fields.clipOffset.fields.y - localPosition.fields.y;
  v14 = this->fields.clipRange.fields.y * 0.5;
  y = item->fields.basePosition.fields.y;
  v16 = v13 - v14;
  v17 = v13 + v14;
  return y >= v16 && y <= v17;
}


// local variable allocation has failed, the output may be wrong!
void ListViewManager__ClippingItems(
        ListViewManager_o *this,
        bool isIndicatorUpdate,
        bool isCenterCheck,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ListViewItem_o *centerItem; // x26
  unsigned __int64 terminalIndex; // x1
  void *scrollView; // x0
  _BOOL4 isLoop; // w8
  float v15; // s4
  float v16; // s3
  float v17; // s13
  float v18; // s14
  float v19; // s15
  float v20; // s10
  int v21; // w8
  const MethodInfo *v22; // x2
  int32_t loopIndex; // w8
  int32_t v24; // w9
  void *v25; // x22
  int32_t v26; // w23
  float v27; // s11
  float v28; // s12
  float y; // s9
  float x; // s8
  float v31; // s0
  float v32; // s1
  float v33; // s0
  float v34; // s2
  float v35; // s0
  float v36; // s2
  float v37; // s11
  float v38; // s12
  bool canMoveVertically; // w0
  float v40; // s0
  float v41; // s1
  UnityEngine_Object_c *v42; // x0
  UnityEngine_Object_o *v43; // x23
  UnityEngine_Object_o *v44; // x21
  int32_t v45; // w28
  int32_t v46; // w24
  char *v47; // x22
  float v48; // s0
  float v49; // s1
  char *v50; // x23
  bool v52; // w9
  int v53; // w8
  float v54; // s0
  float v55; // s1
  bool v57; // w10
  int v58; // w9
  int32_t v59; // w1
  int32_t v60; // w9
  const MethodInfo *v61; // x2
  _BYTE *v62; // x23
  __int64 v63; // x1
  UnityEngine_Object_c *v64; // x0
  UnityEngine_Object_o *v65; // x25
  const MethodInfo *v66; // x2
  _BYTE *v67; // x22
  __int64 v68; // x1
  UnityEngine_Object_c *v69; // x0
  UnityEngine_Object_o *v70; // x25
  int32_t v71; // w22
  UnityEngine_Object_o *v72; // x23
  __int64 v73; // x8
  const MethodInfo *v74; // x2
  float v75; // s8
  float v76; // s11
  float v77; // s12
  float v78; // s9
  _BOOL8 v79; // x0
  __int64 v80; // x1
  ListViewItem_o *current; // x22
  float v82; // s8
  float v83; // s11
  int v84; // w28
  bool v86; // w9
  Il2CppClass *klass; // x23
  __int64 v88; // x1
  const MethodInfo *v89; // x2
  ListViewObject_o *viewObject; // x1
  UnityEngine_Object_o *v91; // x23
  __int64 v92; // x1
  UIScrollView_o *v93; // x0
  __int64 v94; // x1
  bool canMoveHorizontally; // w23
  UIScrollView_o *v96; // x0
  bool v97; // w0
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  float v104; // s1
  float v105; // s0
  System_String_o *v106; // x2
  System_String_o *v107; // x3
  int32_t v108; // w4
  int32_t v109; // w5
  bool v110; // w6
  bool v111; // w7
  System_String_o *v112; // x2
  System_String_o *v113; // x3
  int32_t v114; // w4
  int32_t v115; // w5
  bool v116; // w6
  bool v117; // w7
  System_String_o *v118; // x2
  System_String_o *v119; // x3
  int32_t v120; // w4
  int32_t v121; // w5
  bool v122; // w6
  bool v123; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UnityEngine_Object_o *indicator; // x21
  struct ListViewItem_o *v126; // x2
  float position; // [xsp+Ch] [xbp-E4h]
  float v128; // [xsp+10h] [xbp-E0h]
  float v129; // [xsp+10h] [xbp-E0h]
  float v130; // [xsp+14h] [xbp-DCh]
  System_Collections_Generic_List_Enumerator_object__o v131; // [xsp+18h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v132; // [xsp+30h] [xbp-C0h] BYREF
  float v133; // [xsp+98h] [xbp-58h]
  float v134; // [xsp+9Ch] [xbp-54h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v136; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v137; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v138; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v139; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5971FF1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FF1 = 1;
  }
  centerItem = this->fields.centerItem;
  memset(&v132, 0, sizeof(v132));
  this->fields.centerItem = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.centerItem,
    0,
    (System_String_o *)isCenterCheck,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  if ( this->fields.itemSortList )
  {
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_121;
    scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0);
    if ( !scrollView )
      goto LABEL_121;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0);
    isLoop = this->fields.isLoop;
    v15 = this->fields.clipOffset.fields.x - localPosition.fields.x;
    localPosition.fields.x = this->fields.clipRange.fields.x * 0.5;
    v16 = this->fields.clipOffset.fields.y - localPosition.fields.y;
    localPosition.fields.y = this->fields.clipRange.fields.y * 0.5;
    v17 = v15 - localPosition.fields.x;
    v18 = v15 + localPosition.fields.x;
    v130 = v15;
    v19 = v16 + localPosition.fields.y;
    v20 = v16 - localPosition.fields.y;
    v133 = v16;
    if ( isLoop )
    {
      terminalIndex = (unsigned int)this->fields.terminalIndex;
      if ( (terminalIndex & 0x80000000) == 0 )
      {
        scrollView = this->fields.itemSortList;
        if ( !scrollView )
          goto LABEL_121;
        v21 = *((_DWORD *)scrollView + 6);
        if ( v21 >= 3 )
        {
          if ( (_DWORD)terminalIndex )
            v45 = this->fields.terminalIndex;
          else
            v45 = *((_DWORD *)scrollView + 6);
          scrollView = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)scrollView,
                         terminalIndex,
                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !this->fields.itemSortList )
            goto LABEL_121;
          v46 = v45 - 1;
          v47 = (char *)scrollView;
          scrollView = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)this->fields.itemSortList,
                         v45 - 1,
                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !v47 )
            goto LABEL_121;
          v48 = *((float *)v47 + 25);
          v49 = *((float *)v47 + 26);
          v50 = (char *)scrollView;
          v52 = v49 <= v19 && v48 <= v18;
          v53 = v52 && v48 >= v17;
          if ( v49 < v20 )
            v53 = 0;
          if ( !scrollView )
            goto LABEL_121;
          v54 = *((float *)scrollView + 25);
          v55 = *((float *)scrollView + 26);
          v57 = v55 <= v19 && v54 <= v18;
          v58 = v57 && v54 >= v17;
          if ( v55 < v20 )
            v58 = 0;
          if ( (v53 & v58 & 1) == 0 )
          {
            if ( v53 )
            {
              if ( v45 == 1 )
              {
                scrollView = this->fields.itemSortList;
                if ( !scrollView )
                  goto LABEL_121;
                v59 = *((_DWORD *)scrollView + 6) - 1;
              }
              else
              {
                scrollView = this->fields.itemSortList;
                if ( !scrollView )
                  goto LABEL_121;
                v59 = v45 - 2;
              }
              scrollView = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)scrollView,
                             v59,
                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              v47[96] = this->fields.isAllDisp;
              v50[96] = 1;
              terminalIndex = (unsigned int)(*((_DWORD *)v47 + 7) - 1);
              *((_DWORD *)v50 + 7) = terminalIndex;
              if ( !this->fields.seed )
                goto LABEL_121;
              v67 = scrollView;
              v139 = ListViewItemSeed__GetLocalPosition(this->fields.seed, terminalIndex, v66);
              v69 = UnityEngine_Object_TypeInfo;
              *((_DWORD *)v50 + 25) = LODWORD(v139.fields.x);
              *((_DWORD *)v50 + 26) = LODWORD(v139.fields.y);
              v70 = (UnityEngine_Object_o *)*((_QWORD *)v50 + 14);
              *((_DWORD *)v50 + 27) = LODWORD(v139.fields.z);
              if ( !*(&v69->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(v69, v68);
              scrollView = (void *)UnityEngine_Object__op_Inequality(v70, 0, 0);
              if ( ((unsigned __int8)scrollView & 1) != 0 )
              {
                scrollView = (void *)*((_QWORD *)v50 + 14);
                if ( !scrollView )
                  goto LABEL_121;
                ListViewObject__SetTransform(
                  (ListViewObject_o *)scrollView,
                  *(UnityEngine_Vector3_o *)(v50 + 100),
                  (const MethodInfo *)terminalIndex);
              }
              if ( !v67 )
                goto LABEL_121;
              v67[96] = 1;
            }
            else
            {
              if ( !v58 )
                goto LABEL_102;
              scrollView = this->fields.itemSortList;
              if ( !scrollView )
                goto LABEL_121;
              v60 = this->fields.terminalIndex;
              v46 = v60 < *((_DWORD *)scrollView + 6) - 1 ? v60 + 1 : 0;
              scrollView = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)scrollView,
                             v46,
                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              v50[96] = this->fields.isAllDisp;
              v47[96] = 1;
              terminalIndex = (unsigned int)(*((_DWORD *)v50 + 7) + 1);
              *((_DWORD *)v47 + 7) = terminalIndex;
              if ( !this->fields.seed )
                goto LABEL_121;
              v62 = scrollView;
              v138 = ListViewItemSeed__GetLocalPosition(this->fields.seed, terminalIndex, v61);
              v64 = UnityEngine_Object_TypeInfo;
              *((_DWORD *)v47 + 25) = LODWORD(v138.fields.x);
              *((_DWORD *)v47 + 26) = LODWORD(v138.fields.y);
              v65 = (UnityEngine_Object_o *)*((_QWORD *)v47 + 14);
              *((_DWORD *)v47 + 27) = LODWORD(v138.fields.z);
              if ( !*(&v64->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(v64, v63);
              scrollView = (void *)UnityEngine_Object__op_Inequality(v65, 0, 0);
              if ( ((unsigned __int8)scrollView & 1) != 0 )
              {
                scrollView = (void *)*((_QWORD *)v47 + 14);
                if ( !scrollView )
                  goto LABEL_121;
                ListViewObject__SetTransform(
                  (ListViewObject_o *)scrollView,
                  *(UnityEngine_Vector3_o *)(v47 + 100),
                  (const MethodInfo *)terminalIndex);
              }
              if ( !v62 )
                goto LABEL_121;
              v62[96] = 1;
            }
            this->fields.terminalIndex = v46;
          }
        }
        else if ( v21 == 2 && centerItem )
        {
          scrollView = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)scrollView,
                         centerItem->fields.index == 0,
                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !scrollView )
            goto LABEL_121;
          loopIndex = centerItem->fields.loopIndex;
          v24 = *((_DWORD *)scrollView + 7);
          v25 = scrollView;
          scrollView = this->fields.seed;
          v26 = loopIndex >= v24 ? loopIndex + 1 : loopIndex - 1;
          if ( !scrollView )
            goto LABEL_121;
          v27 = *((float *)v25 + 25);
          v28 = *((float *)v25 + 26);
          v136 = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)scrollView, v26, v22);
          y = v136.fields.y;
          x = v136.fields.x;
          scrollView = this->fields.scrollView;
          position = v136.fields.z;
          v31 = v28 - v133;
          if ( v28 <= v133 )
            v31 = v133 - v28;
          v32 = v136.fields.y <= v133 ? v133 - v136.fields.y : v136.fields.y - v133;
          if ( !scrollView )
            goto LABEL_121;
          v128 = v32;
          v134 = v31;
          scrollView = (void *)UIScrollView__get_canMoveHorizontally((UIScrollView_o *)scrollView, 0);
          if ( !this->fields.scrollView )
            goto LABEL_121;
          v33 = v27 - v130;
          v34 = x - v130;
          if ( v27 <= v130 )
            v33 = v130 - v27;
          if ( x <= v130 )
            v34 = v130 - x;
          v35 = v33 + 0.0;
          v36 = v34 + 0.0;
          if ( ((unsigned __int8)scrollView & 1) != 0 )
            v37 = v35;
          else
            v37 = 0.0;
          if ( ((unsigned __int8)scrollView & 1) != 0 )
            v38 = v36;
          else
            v38 = 0.0;
          canMoveVertically = UIScrollView__get_canMoveVertically(this->fields.scrollView, 0);
          v40 = -0.0;
          v41 = v128;
          if ( canMoveVertically )
            v40 = v134;
          else
            v41 = -0.0;
          if ( (float)(v38 + v41) < (float)(v37 + v40) )
          {
            v42 = UnityEngine_Object_TypeInfo;
            *((_DWORD *)v25 + 7) = v26;
            *((float *)v25 + 25) = x;
            *((float *)v25 + 26) = y;
            v43 = (UnityEngine_Object_o *)*((_QWORD *)v25 + 14);
            *((float *)v25 + 27) = position;
            if ( !*(&v42->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(v42, terminalIndex);
            if ( UnityEngine_Object__op_Inequality(v43, 0, 0) )
            {
              scrollView = (void *)*((_QWORD *)v25 + 14);
              if ( !scrollView )
                goto LABEL_121;
              v137.fields.x = x;
              v137.fields.y = y;
              v137.fields.z = position;
              ListViewObject__SetTransform((ListViewObject_o *)scrollView, v137, (const MethodInfo *)terminalIndex);
            }
          }
        }
      }
    }
LABEL_102:
    scrollView = this->fields.itemSortList;
    if ( this->fields.execObjectExtraFlag )
    {
      if ( !scrollView )
        goto LABEL_121;
      v71 = 0;
      while ( v71 < *((_DWORD *)scrollView + 6) )
      {
        scrollView = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)scrollView,
                       v71,
                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !scrollView )
          goto LABEL_121;
        v72 = (UnityEngine_Object_o *)*((_QWORD *)scrollView + 14);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, terminalIndex);
        if ( UnityEngine_Object__op_Inequality(v72, 0, 0) )
        {
          scrollView = this->fields.itemSortList;
          if ( !scrollView )
            goto LABEL_121;
          scrollView = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)scrollView,
                         v71,
                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !scrollView )
            goto LABEL_121;
          if ( !*((_BYTE *)scrollView + 96) )
          {
            scrollView = this->fields.itemSortList;
            if ( !scrollView )
              goto LABEL_121;
            scrollView = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)scrollView,
                           v71,
                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            if ( !scrollView )
              goto LABEL_121;
            v73 = *((_QWORD *)scrollView + 14);
            if ( !v73 )
              goto LABEL_121;
            if ( !*(_BYTE *)(v73 + 112) )
            {
              scrollView = this->fields.itemSortList;
              if ( !scrollView )
                goto LABEL_121;
              scrollView = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)scrollView,
                             v71,
                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !scrollView )
                goto LABEL_121;
              ListViewManager__ReleaseObjectExtra(this, *((ListViewObject_o **)scrollView + 14), v74);
            }
          }
        }
        scrollView = this->fields.itemSortList;
        ++v71;
        if ( !scrollView )
          goto LABEL_121;
      }
    }
    else if ( !scrollView )
    {
      goto LABEL_121;
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v131,
      (System_Collections_Generic_List_object__o *)scrollView,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v75 = 0.0;
    v76 = 0.0;
    v77 = 0.0;
    v132 = v131;
    v131.fields._list = 0;
    *(_QWORD *)&v131.fields._index = &v132;
LABEL_124:
    v129 = v75;
LABEL_125:
    v78 = v77;
    v134 = v76;
LABEL_126:
    v77 = v78;
    while ( 1 )
    {
      v79 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v132,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v79 )
        break;
      current = (ListViewItem_o *)v132.fields._current;
      if ( !v132.fields._current )
        sub_2213CDC(v79, v80);
      v83 = *((float *)&v132.fields._current[6].klass + 1);
      v82 = *(float *)&v132.fields._current[6].monitor;
      if ( LOBYTE(v132.fields._current[6].klass) )
      {
        v84 = 1;
      }
      else
      {
        v86 = v82 <= v19 && v83 <= v18;
        v84 = v82 >= v20 && v86 && v83 >= v17;
      }
      klass = v132.fields._current[7].klass;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v80);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0, 0) )
      {
        if ( v84 )
          ListViewManager__MakeObject(this, current, v89);
      }
      else if ( (v84 & 1) == 0 )
      {
        viewObject = current->fields.viewObject;
        if ( this->fields.execObjectExtraFlag )
          ListViewManager__ReleaseObjectExtra(this, viewObject, v89);
        else
          ListViewManager__ReleaseObject_50835912(this, viewObject, v89);
      }
      v91 = (UnityEngine_Object_o *)current->fields.viewObject;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v88);
      if ( UnityEngine_Object__op_Inequality(v91, 0, 0) )
      {
        v93 = this->fields.scrollView;
        if ( !v93 )
          sub_2213CDC(0, v92);
        canMoveHorizontally = UIScrollView__get_canMoveHorizontally(v93, 0);
        v96 = this->fields.scrollView;
        if ( !v96 )
          sub_2213CDC(0, v94);
        v97 = UIScrollView__get_canMoveVertically(v96, 0);
        if ( (current->fields.index & 0x80000000) == 0 )
        {
          if ( v83 <= v130 )
            v76 = v130 - v83;
          else
            v76 = v83 - v130;
          if ( v82 <= v133 )
            v75 = v133 - v82;
          else
            v75 = v82 - v133;
          v104 = -0.0;
          if ( canMoveHorizontally )
            v105 = v76 + 0.0;
          else
            v105 = 0.0;
          if ( v97 )
            v104 = v75;
          v78 = v105 + v104;
          if ( !this->fields.centerItem )
          {
            this->fields.centerItem = current;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.centerItem,
              (int32_t)current,
              v98,
              v99,
              v100,
              v101,
              v102,
              v103);
            this->fields.horizontalItem = current;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.horizontalItem,
              (int32_t)current,
              v106,
              v107,
              v108,
              v109,
              v110,
              v111);
            this->fields.verticalItem = current;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.verticalItem,
              (int32_t)current,
              v112,
              v113,
              v114,
              v115,
              v116,
              v117);
            goto LABEL_126;
          }
          if ( v78 < v77 )
          {
            this->fields.centerItem = current;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.centerItem,
              (int32_t)current,
              v98,
              v99,
              v100,
              v101,
              v102,
              v103);
            v77 = v78;
          }
          if ( v76 >= v134 )
          {
            v76 = v134;
          }
          else
          {
            this->fields.horizontalItem = current;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.horizontalItem,
              (int32_t)current,
              v98,
              v99,
              v100,
              v101,
              v102,
              v103);
          }
          if ( v75 < v129 )
          {
            this->fields.verticalItem = current;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.verticalItem,
              (int32_t)current,
              v98,
              v99,
              v100,
              v101,
              v102,
              v103);
            goto LABEL_124;
          }
          goto LABEL_125;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v132,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemSortList = this->fields.itemSortList;
    if ( !itemSortList )
      goto LABEL_121;
    if ( itemSortList->fields._size <= 1 )
    {
      this->fields.horizontalItem = 0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.horizontalItem,
        0,
        v118,
        v119,
        v120,
        v121,
        v122,
        v123);
    }
    else
    {
      if ( v134 > 10.0 )
      {
        this->fields.horizontalItem = 0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.horizontalItem,
          0,
          v118,
          v119,
          v120,
          v121,
          v122,
          v123);
      }
      if ( v129 <= 10.0 )
      {
        if ( isCenterCheck )
        {
LABEL_182:
          indicator = (UnityEngine_Object_o *)this->fields.indicator;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, terminalIndex);
          if ( !UnityEngine_Object__op_Inequality(indicator, 0, 0) || !isIndicatorUpdate )
            goto LABEL_197;
          v126 = this->fields.centerItem;
          if ( centerItem != v126 )
          {
            scrollView = this->fields.indicator;
            if ( v126 )
            {
              if ( !scrollView )
                goto LABEL_121;
              (*(void (**)(void))(*(_QWORD *)scrollView + 392LL))();
            }
            else
            {
              if ( !scrollView )
                goto LABEL_121;
              (*(void (__fastcall **)(void *, ListViewManager_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)scrollView + 392LL))(
                scrollView,
                this,
                0,
                0,
                0,
                0,
                0,
                *(_QWORD *)(*(_QWORD *)scrollView + 400LL));
            }
          }
          scrollView = this->fields.indicator;
          if ( scrollView )
          {
            (*(void (__fastcall **)(void *, ListViewManager_o *, struct ListViewItem_o *, _QWORD))(*(_QWORD *)scrollView
                                                                                                 + 408LL))(
              scrollView,
              this,
              this->fields.centerItem,
              *(_QWORD *)(*(_QWORD *)scrollView + 416LL));
LABEL_197:
            if ( this->fields.execObjectExtraFlag )
              ListViewManager__PushObjectOutSideClipPosition(this, (const MethodInfo *)terminalIndex);
            return;
          }
LABEL_121:
          sub_2213CDC(scrollView, terminalIndex);
        }
LABEL_181:
        this->fields.centerItem = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.centerItem, 0, v118, v119, v120, v121, v122, v123);
        goto LABEL_182;
      }
    }
    this->fields.verticalItem = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.verticalItem, 0, v118, v119, v120, v121, v122, v123);
    if ( isCenterCheck )
      goto LABEL_182;
    goto LABEL_181;
  }
  if ( centerItem )
  {
    v44 = (UnityEngine_Object_o *)this->fields.indicator;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, terminalIndex);
    if ( UnityEngine_Object__op_Inequality(v44, 0, 0) && isIndicatorUpdate )
    {
      scrollView = this->fields.indicator;
      if ( scrollView )
      {
        (*(void (__fastcall **)(void *, ListViewManager_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)scrollView + 392LL))(
          scrollView,
          this,
          0,
          0,
          0,
          0,
          0,
          *(_QWORD *)(*(_QWORD *)scrollView + 400LL));
        scrollView = this->fields.indicator;
        if ( scrollView )
        {
          (*(void (__fastcall **)(void *, ListViewManager_o *, _QWORD, _QWORD))(*(_QWORD *)scrollView + 408LL))(
            scrollView,
            this,
            0,
            *(_QWORD *)(*(_QWORD *)scrollView + 416LL));
          return;
        }
      }
      goto LABEL_121;
    }
  }
}


void ListViewManager__ClippingTerminationItem(ListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x23
  UnityEngine_Object_c *v7; // x0
  UnityEngine_Object_o *klass; // x20
  const MethodInfo *v9; // x2
  _BOOL8 v10; // x0
  __int64 v11; // x1
  ListViewItem_o *v12; // x20
  Il2CppClass *v13; // x21
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_5971FF0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FF0 = 1;
  }
  itemSortList = this->fields.itemSortList;
  memset(&v16, 0, sizeof(v16));
  if ( itemSortList )
  {
    if ( this->fields.isLoop )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v15,
        (System_Collections_Generic_List_object__o *)itemSortList,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v16 = v15;
      v15.fields._list = 0;
      *(_QWORD *)&v15.fields._index = &v16;
      while ( 1 )
      {
        v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v16,
               (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v4 )
          break;
        current = v16.fields._current;
        if ( !v16.fields._current )
          sub_2213CDC(v4, v5);
        v7 = UnityEngine_Object_TypeInfo;
        LOBYTE(v16.fields._current[6].klass) = 0;
        klass = (UnityEngine_Object_o *)current[7].klass;
        if ( !*(&v7->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v7, v5);
        if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
          ListViewManager__ReleaseObject_50835912(this, (ListViewObject_o *)current[7].klass, v9);
      }
    }
    else
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v15,
        (System_Collections_Generic_List_object__o *)itemSortList,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v16 = v15;
      v15.fields._list = 0;
      *(_QWORD *)&v15.fields._index = &v16;
      while ( 1 )
      {
        v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v16,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v10 )
          break;
        v12 = (ListViewItem_o *)v16.fields._current;
        if ( !v16.fields._current )
          sub_2213CDC(v10, v11);
        v13 = v16.fields._current[7].klass;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v13, 0, 0) )
        {
          if ( v12->fields.isTermination )
            ListViewManager__MakeObject(this, v12, v14);
        }
        else if ( !v12->fields.isTermination )
        {
          ListViewManager__ReleaseObject_50835912(this, v12->fields.viewObject, v14);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ListViewManager__CreateList(ListViewManager_o *this, int32_t sum, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Component_o *transform; // x0
  __int64 v15; // x1
  struct UIScrollView_o *v16; // x8
  struct UIPanel_o *mPanel; // x20
  float x; // s8
  float y; // s9
  System_Collections_Generic_List_object__o *dropList; // x0
  __int64 v21; // x1
  Il2CppObject *current; // x19
  _BOOL8 v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5971FE0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem___ctor___91654656);
    sub_2213A60(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FE0 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  ListViewManager__DestroyList(this, *(const MethodInfo **)&sum);
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor_71840884(
    v5,
    sum,
    (const MethodInfo_4483474 *)Method_System_Collections_Generic_List_ListViewItem___ctor___91654656);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.itemList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v16 = this->fields.scrollView;
    if ( !v16 )
      goto LABEL_26;
    mPanel = v16->fields.mPanel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)mPanel, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( mPanel )
      {
        transform = (UnityEngine_Component_o *)this->fields.scrollView;
        if ( transform )
        {
          x = mPanel->fields.mClipOffset.fields.x;
          y = mPanel->fields.mClipOffset.fields.y;
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
          if ( transform )
          {
            v26.fields.x = -x;
            v26.fields.y = -y;
            v26.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v26, 0);
            transform = (UnityEngine_Component_o *)this->fields.scrollView;
            if ( transform )
            {
              UIScrollView__ResetPosition((UIScrollView_o *)transform, 0);
              goto LABEL_15;
            }
          }
        }
      }
LABEL_26:
      sub_2213CDC(transform, v15);
    }
  }
LABEL_15:
  dropList = (System_Collections_Generic_List_object__o *)this->fields.dropList;
  if ( dropList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      dropList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UIDragDropListViewSurface__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__MoveNext__) )
    {
      current = v25.fields._current;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
      v23 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
      if ( v23 )
      {
        if ( !current )
          sub_2213CDC(v23, v24);
        UIDragDropListViewSurface__DragEnd((UIDragDropListViewSurface_o *)current, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__Dispose__);
  }
}


void ListViewManager__DelayCallMethod(
        ListViewManager_o *this,
        float time,
        System_Action_o *action,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x1

  v5 = BasicHelper__DelayCall(time, action, 1, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v5, 0);
}


void ListViewManager__DestroyList(ListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  __int64 v29; // x1
  Il2CppObject *current; // x21
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct System_Collections_Generic_List_GameObject__o *v36; // x8
  System_String_o *size; // x2
  int v38; // w9
  __int64 v39; // x1
  Il2CppObject *v40; // x21
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v42; // x20
  UnityEngine_Object_o *scrollBar; // x20
  UnityEngine_Object_o *emptyMessageBase; // x20
  UnityEngine_Object_o *indicator; // x20
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5971FE1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Stack_GameObject__Pop__);
    sub_2213A60(&Method_System_Collections_Generic_Stack_GameObject__get_Count__);
    byte_5971FE1 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  this->fields.centerItem = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.centerItem, 0, v2, v3, v4, v5, v6, v7);
  this->fields.horizontalItem = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.horizontalItem, 0, v9, v10, v11, v12, v13, v14);
  this->fields.verticalItem = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.verticalItem, 0, v15, v16, v17, v18, v19, v20);
  this->fields.itemSortList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.itemSortList, 0, v21, v22, v23, v24, v25, v26);
  if ( this->fields.itemList )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    if ( !objectList )
      goto LABEL_18;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v46,
      objectList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v47 = v46;
    v46.fields._list = 0;
    *(_QWORD *)&v46.fields._index = &v47;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v47,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v47.fields._current;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
      UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v47,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v36 = this->fields.objectList;
    if ( !v36 )
      goto LABEL_18;
    size = (System_String_o *)(unsigned int)v36->fields._size;
    v38 = v36->fields._version + 1;
    v36->fields._size = 0;
    v36->fields._version = v38;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)v36->fields._items, 0, (int32_t)size, 0);
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectStock;
    if ( !objectList )
      goto LABEL_18;
    while ( objectList->fields._size > 0 )
    {
      v40 = System_Collections_Generic_Stack_object___Pop(
              (System_Collections_Generic_Stack_T__o *)objectList,
              (const MethodInfo_3B5D160 *)Method_System_Collections_Generic_Stack_GameObject__Pop__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
      UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)v40, 0);
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectStock;
      if ( !objectList )
        goto LABEL_18;
    }
    this->fields.itemList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.itemList, 0, size, v31, v32, v33, v34, v35);
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( !objectList )
      goto LABEL_18;
    UIScrollView__DisableSpring((UIScrollView_o *)objectList, 0);
    v42 = this->fields.scrollView;
    if ( !byte_5969AE0 )
    {
      objectList = (System_Collections_Generic_List_object__o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    if ( !v42 )
      goto LABEL_18;
    UIScrollView__set_currentMomentum(v42, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.scrollBar;
    if ( !objectList )
      goto LABEL_18;
    UIProgressBar__set_alpha((UIProgressBar_o *)objectList, 0.0, 0);
  }
  emptyMessageBase = (UnityEngine_Object_o *)this->fields.emptyMessageBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  if ( UnityEngine_Object__op_Inequality(emptyMessageBase, 0, 0) )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.emptyMessageBase;
    if ( !objectList )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)objectList, 0, 0);
  }
  indicator = (UnityEngine_Object_o *)this->fields.indicator;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  if ( UnityEngine_Object__op_Inequality(indicator, 0, 0) )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.indicator;
    if ( objectList )
    {
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, ListViewManager_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, const MethodInfo *))objectList->klass->vtable._5_set_Item.methodPtr)(
        objectList,
        this,
        0,
        0,
        0,
        0,
        0,
        objectList->klass->vtable._5_set_Item.method);
      objectList = (System_Collections_Generic_List_object__o *)this->fields.indicator;
      if ( objectList )
      {
        ((void (__fastcall *)(System_Collections_Generic_List_object__o *, ListViewManager_o *, _QWORD, const MethodInfo *))objectList->klass->vtable._6_IndexOf.methodPtr)(
          objectList,
          this,
          0,
          objectList->klass->vtable._6_IndexOf.method);
        goto LABEL_44;
      }
    }
LABEL_18:
    sub_2213CDC(objectList, v27);
  }
LABEL_44:
  ((void (__fastcall *)(ListViewManager_o *, const MethodInfo *))this->klass->vtable._5_SetSortButtonImage.methodPtr)(
    this,
    this->klass->vtable._5_SetSortButtonImage.method);
}


void ListViewManager__DispItem(
        ListViewManager_o *this,
        int32_t selectIndex,
        bool isAllDisp,
        int32_t addEmptyTarminal,
        const MethodInfo *method)
{
  SwitchParameterDisplayManager_o *Instance; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_object__o *v12; // x23
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w21
  struct ListViewItem_o **p_topItem; // x25
  bool v22; // w22
  struct ListViewItem_o **p_bottomItem; // x26
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct ListViewItem_o **p_leftItem; // x27
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct ListViewItem_o **p_rightItem; // x28
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  const MethodInfo_4483994 **v50; // x20
  Il2CppObject *Item; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  Il2CppObject *v58; // x0
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  Il2CppObject *v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  Il2CppObject *v72; // x0
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  int32_t v79; // w29
  const MethodInfo_4483994 **v80; // x21
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  SwitchParameterDisplayManager_o *v87; // x20
  struct System_Object_array *items; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass **v91; // x0
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  float v98; // s0
  float DISP_TIME; // s0
  const MethodInfo_4483994 *v100; // x2
  __int64 v101; // x1
  UnityEngine_Object_c *v102; // x0
  UnityEngine_Object_o *emptyMessageBase; // x20
  UnityEngine_Object_o *indicator; // x20
  UnityEngine_Object_o *scrollView; // x20
  const MethodInfo *v106; // x3
  __int64 v107; // x1
  UnityEngine_Object_o *v108; // x20
  UIScrollView_o *v109; // x20
  const MethodInfo *v110; // x5
  const MethodInfo *v111; // x2
  ListViewItem_o *v112; // x1
  const MethodInfo *v113; // x2
  int32_t v114; // [xsp+4h] [xbp-6Ch]
  int32_t index; // [xsp+8h] [xbp-68h]
  int32_t v116; // [xsp+Ch] [xbp-64h]

  if ( (byte_5971FE7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    byte_5971FE7 = 1;
  }
  Instance = (SwitchParameterDisplayManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  SwitchParameterDisplayManager__Reset(Instance, 0);
  ListViewManager__ReleaseObject(this, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_69;
  size = itemList->fields._size;
  this->fields.topItem = 0;
  p_topItem = &this->fields.topItem;
  v22 = isAllDisp;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.topItem, 0, v13, v14, v15, v16, v17, v18);
  this->fields.bottomItem = 0;
  p_bottomItem = &this->fields.bottomItem;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.bottomItem, 0, v24, v25, v26, v27, v28, v29);
  this->fields.leftItem = 0;
  p_leftItem = &this->fields.leftItem;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.leftItem, 0, v31, v32, v33, v34, v35, v36);
  p_rightItem = &this->fields.rightItem;
  this->fields.rightItem = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rightItem, 0, v38, v39, v40, v41, v42, v43);
  this->fields.isAllDisp = isAllDisp;
  index = size - 1;
  v116 = size;
  if ( size >= 1 )
  {
    Instance = (SwitchParameterDisplayManager_o *)this->fields.scrollView;
    if ( !Instance )
      goto LABEL_69;
    v50 = (const MethodInfo_4483994 **)&Method_System_Collections_Generic_List_ListViewItem__get_Item__;
    if ( UIScrollView__get_canMoveHorizontally((UIScrollView_o *)Instance, 0) )
    {
      Instance = (SwitchParameterDisplayManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_69;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               0,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      this->fields.leftItem = (struct ListViewItem_o *)Item;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.leftItem,
        (int32_t)Item,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      Instance = (SwitchParameterDisplayManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_69;
      v58 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)Instance,
              0,
              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      *p_rightItem = (struct ListViewItem_o *)v58;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.rightItem,
        (int32_t)v58,
        v59,
        v60,
        v61,
        v62,
        v63,
        v64);
    }
    Instance = (SwitchParameterDisplayManager_o *)this->fields.scrollView;
    if ( !Instance )
      goto LABEL_69;
    v114 = selectIndex;
    if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)Instance, 0) )
    {
      Instance = (SwitchParameterDisplayManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_69;
      v65 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)Instance,
              0,
              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      this->fields.topItem = (struct ListViewItem_o *)v65;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.topItem, (int32_t)v65, v66, v67, v68, v69, v70, v71);
      Instance = (SwitchParameterDisplayManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_69;
      v72 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)Instance,
              0,
              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      *p_bottomItem = (struct ListViewItem_o *)v72;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.bottomItem,
        (int32_t)v72,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78);
    }
    v79 = 0;
    do
    {
      Instance = (SwitchParameterDisplayManager_o *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_69;
      v80 = v50;
      Instance = (SwitchParameterDisplayManager_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)Instance,
                                                      v79,
                                                      *v50);
      if ( !Instance )
        goto LABEL_69;
      v87 = Instance;
      LODWORD(Instance->fields.m_CancellationTokenSource) = v79;
      HIDWORD(Instance->fields.m_CancellationTokenSource) = v79;
      LOBYTE(Instance[1].fields.FADE_TIME) = v22;
      if ( !v12 )
        goto LABEL_69;
      items = v12->fields._items;
      v89 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++v12->fields._version;
      if ( !items )
        goto LABEL_69;
      v90 = v12->fields._size;
      if ( (unsigned int)v90 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)Instance,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
      }
      else
      {
        v91 = &items->obj.klass + v90;
        v12->fields._size = v90 + 1;
        v91[4] = (Il2CppClass *)v87;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v91 + 4), (int32_t)v87, v81, v82, v83, v84, v85, v86);
      }
      if ( *p_topItem )
      {
        v98 = *(float *)&v87[1].fields.state;
        Instance = (SwitchParameterDisplayManager_o *)&this->fields.topItem;
        if ( v98 > (*p_topItem)->fields.basePosition.fields.y )
          goto LABEL_28;
        if ( !*p_bottomItem )
          goto LABEL_69;
        Instance = (SwitchParameterDisplayManager_o *)&this->fields.bottomItem;
        if ( v98 < (*p_bottomItem)->fields.basePosition.fields.y )
        {
LABEL_28:
          Instance->klass = (SwitchParameterDisplayManager_c *)v87;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)Instance, (int32_t)v87, v92, v93, v94, v95, v96, v97);
        }
      }
      if ( *p_rightItem )
      {
        DISP_TIME = v87[1].fields.DISP_TIME;
        Instance = (SwitchParameterDisplayManager_o *)&this->fields.rightItem;
        if ( DISP_TIME > (*p_rightItem)->fields.basePosition.fields.x )
          goto LABEL_33;
        if ( !*p_leftItem )
          goto LABEL_69;
        Instance = (SwitchParameterDisplayManager_o *)&this->fields.leftItem;
        if ( DISP_TIME < (*p_leftItem)->fields.basePosition.fields.x )
        {
LABEL_33:
          Instance->klass = (SwitchParameterDisplayManager_c *)v87;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)Instance, (int32_t)v87, v92, v93, v94, v95, v96, v97);
        }
      }
      ++v79;
      v50 = v80;
    }
    while ( v116 != v79 );
    Instance = (SwitchParameterDisplayManager_o *)System_Collections_Generic_List_object___get_Item(v12, 0, *v80);
    if ( !Instance
      || (v100 = *v80,
          LOBYTE(Instance[1].fields.FADE_TIME) = 1,
          Instance = (SwitchParameterDisplayManager_o *)System_Collections_Generic_List_object___get_Item(
                                                          v12,
                                                          index,
                                                          v100),
          selectIndex = v114,
          !Instance) )
    {
LABEL_69:
      sub_2213CDC(Instance, v10);
    }
    LOBYTE(Instance[1].fields.FADE_TIME) = 1;
    if ( v116 >= addEmptyTarminal )
    {
      Instance = (SwitchParameterDisplayManager_o *)System_Collections_Generic_List_object___get_Item(v12, index, *v80);
      if ( !Instance )
        goto LABEL_69;
      BYTE1(Instance[1].fields.FADE_TIME) = 1;
    }
  }
  this->fields.itemSortList = (struct System_Collections_Generic_List_ListViewItem__o *)v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemSortList,
    (int32_t)v12,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v102 = UnityEngine_Object_TypeInfo;
  emptyMessageBase = (UnityEngine_Object_o *)this->fields.emptyMessageBase;
  this->fields.terminalIndex = -1;
  if ( !*(&v102->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v102, v101);
  if ( UnityEngine_Object__op_Inequality(emptyMessageBase, 0, 0) )
  {
    Instance = (SwitchParameterDisplayManager_o *)this->fields.emptyMessageBase;
    if ( !Instance )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v116 < 1, 0);
  }
  indicator = (UnityEngine_Object_o *)this->fields.indicator;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(indicator, 0, 0) )
  {
    Instance = (SwitchParameterDisplayManager_o *)this->fields.indicator;
    if ( !Instance )
      goto LABEL_69;
    ((void (__fastcall *)(SwitchParameterDisplayManager_o *, _QWORD, void *))Instance->klass[1]._1.image)(
      Instance,
      (unsigned int)v116,
      Instance->klass[1]._1.gc_desc);
    this->fields.isIndecatorRefresh = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    Instance = (SwitchParameterDisplayManager_o *)this->fields.scrollView;
    if ( !Instance )
      goto LABEL_69;
    UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
  }
  ListViewManager__ClippingTerminationItem(this, v10);
  ListViewManager__ClippingItems(this, 1, 0, v106);
  v108 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v107);
  if ( UnityEngine_Object__op_Inequality(v108, 0, 0) )
  {
    Instance = (SwitchParameterDisplayManager_o *)this->fields.scrollView;
    if ( Instance )
    {
      UIScrollView__DisableSpring((UIScrollView_o *)Instance, 0);
      v109 = this->fields.scrollView;
      if ( !byte_5969AE0 )
      {
        Instance = (SwitchParameterDisplayManager_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      if ( v109 )
      {
        UIScrollView__set_currentMomentum(v109, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        if ( selectIndex < 0 )
        {
          Instance = (SwitchParameterDisplayManager_o *)this->fields.scrollView;
          if ( Instance )
          {
            UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
            v112 = ListViewManager__GetItem(this, 0, v111);
            ListViewManager__CenterLoopItem(this, v112, v113);
            return;
          }
        }
        else
        {
          if ( ListViewManager__MoveCenterItem(this, selectIndex, 0, 0, 0.0, 0, v110) )
            return;
          Instance = (SwitchParameterDisplayManager_o *)this->fields.scrollView;
          if ( Instance )
          {
            UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
            return;
          }
        }
      }
    }
    goto LABEL_69;
  }
}


void ListViewManager__DragMaskEnd(ListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_5971FF9 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FF9 = 1;
  }
  v3 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ListViewManager_o *, const MethodInfo *))this->klass->vtable._7_GetDragRoot.methodPtr)(
                                     this,
                                     this->klass->vtable._7_GetDragRoot.method);
  if ( !v3 )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v3,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v3 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)v3 & 1) != 0 )
  {
    if ( Component_object )
    {
      UIDragDropListViewBackMask__DragEnd((UIDragDropListViewBackMask_o *)Component_object, 0);
      return;
    }
LABEL_10:
    sub_2213CDC(v3, v4);
  }
}


void ListViewManager__DragMaskStart(ListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v8; // x19

  if ( (byte_5971FF8 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FF8 = 1;
  }
  v3 = ((__int64 (__fastcall *)(ListViewManager_o *, const MethodInfo *))this->klass->vtable._7_GetDragRoot.methodPtr)(
         this,
         this->klass->vtable._7_GetDragRoot.method);
  if ( !v3 )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v3,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v3 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( (v3 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_18;
    UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)Component_object, 0);
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    v3 = (__int64)this->fields.scrollView;
    if ( v3 )
    {
      UIScrollView__DisableSpring((UIScrollView_o *)v3, 0);
      v8 = this->fields.scrollView;
      if ( !byte_5969AE0 )
      {
        v3 = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      if ( v8 )
      {
        UIScrollView__set_currentMomentum(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        return;
      }
    }
LABEL_18:
    sub_2213CDC(v3, v4);
  }
}


void ListViewManager__EndScrollAnim(ListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_o *callbackAfterScroll; // x19

  callbackAfterScroll = this->fields.callbackAfterScroll;
  if ( callbackAfterScroll )
  {
    this->fields.callbackAfterScroll = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackAfterScroll, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))callbackAfterScroll->fields.invoke_impl)(
      callbackAfterScroll->fields.method_code,
      callbackAfterScroll->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
Cysharp_Threading_Tasks_UniTask_o ListViewManager__FocusSelectItem(
        ListViewManager_o *this,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t index,
        System_Threading_CancellationToken_o cancellationToken,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  const MethodInfo *v30; // x1
  struct Cysharp_Threading_Tasks_IUniTaskSource_o *v31; // x0
  __int64 v32; // x1
  ListViewManager__FocusSelectItem_d__71_o v33; // [xsp+0h] [xbp-90h] BYREF
  Cysharp_Threading_Tasks_UniTask_o result; // 0:x0.16

  if ( (byte_5971FEA & 1) == 0 )
  {
    sub_2213A60(&Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_ListViewManager__FocusSelectItem_d__71___);
    byte_5971FEA = 1;
  }
  memset(&v33, 0, sizeof(v33));
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v33.fields.__t__builder,
    0,
    *(System_String_o **)&index,
    (System_String_o *)cancellationToken.fields._source,
    (int32_t)method,
    v5,
    v6,
    v7);
  v33.fields.__4__this = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33.fields.__4__this, (int32_t)this, v12, v13, v14, v15, v16, v17);
  v33.fields.list = list;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33.fields.list, (int32_t)list, v18, v19, v20, v21, v22, v23);
  v33.fields.index = index;
  v33.fields.cancellationToken = cancellationToken;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33.fields.cancellationToken, 0, v24, v25, v26, v27, v28, v29);
  v33.fields.__1__state = -1;
  if ( !*((_QWORD *)Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_ListViewManager__FocusSelectItem_d__71___
        + 7) )
    sub_224B964(Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_ListViewManager__FocusSelectItem_d__71___);
  ListViewManager__FocusSelectItem_d__71__MoveNext(&v33, v30);
  v31 = (struct Cysharp_Threading_Tasks_IUniTaskSource_o *)sub_307F42C(&v33.fields.__t__builder, 0);
  *(_QWORD *)&result.fields.token = v32;
  result.fields.source = v31;
  return result;
}


void ListViewManager__FowardLoopItem(ListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  struct ListViewItem_o *centerItem; // x8
  ListViewItemSeed_o *Item; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct ListViewItem_o *v8; // x8
  ListViewItemSeed_o *v9; // x20
  __int64 v10; // x1
  UnityEngine_Object_o *prefab; // x19
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5971FF4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FF4 = 1;
  }
  if ( this->fields.isLoop )
  {
    itemSortList = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
    if ( itemSortList )
    {
      if ( itemSortList->fields._size == 2 )
      {
        centerItem = this->fields.centerItem;
        if ( centerItem )
        {
          Item = (ListViewItemSeed_o *)System_Collections_Generic_List_object___get_Item(
                                         itemSortList,
                                         centerItem->fields.sortIndex == 0,
                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          v8 = this->fields.centerItem;
          if ( !v8 )
            goto LABEL_17;
          v9 = Item;
          if ( !Item )
            goto LABEL_17;
          v6 = (const MethodInfo *)(unsigned int)(v8->fields.loopIndex + 1);
          if ( HIDWORD(Item->fields.m_CancellationTokenSource) != (_DWORD)v6 )
          {
            Item = this->fields.seed;
            HIDWORD(v9->fields.m_CancellationTokenSource) = (_DWORD)v6;
            if ( !Item )
              goto LABEL_17;
            LocalPosition = ListViewItemSeed__GetLocalPosition(Item, (int32_t)v6, v7);
            HIDWORD(v9[1].fields.m_CancellationTokenSource) = LODWORD(LocalPosition.fields.x);
            *(float *)&v9[1].fields.parent = LocalPosition.fields.y;
            prefab = (UnityEngine_Object_o *)v9[1].fields.prefab;
            HIDWORD(v9[1].fields.parent) = LODWORD(LocalPosition.fields.z);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
            if ( UnityEngine_Object__op_Inequality(prefab, 0, 0) )
            {
              Item = (ListViewItemSeed_o *)v9[1].fields.prefab;
              if ( Item )
              {
                ListViewObject__SetTransform(
                  (ListViewObject_o *)Item,
                  *(UnityEngine_Vector3_o *)((char *)&v9[1].fields.m_CancellationTokenSource + 4),
                  v6);
                return;
              }
LABEL_17:
              sub_2213CDC(Item, v6);
            }
          }
        }
      }
    }
  }
}


bool ListViewManager__GetCanScrollList(
        ListViewManager_o *this,
        bool *isTop,
        bool *isBottom,
        bool *isLeft,
        bool *isRight,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x24
  UIScrollView_o *v12; // x0
  __int64 v13; // x1
  struct UIScrollView_o *v14; // x8
  UnityEngine_Object_o *mPanel; // x24
  float x; // s9
  float y; // s8
  float z; // s11
  float w; // s10
  __int64 v20; // kr00_8
  float v21; // s13
  float v22; // s15
  float v23; // s11
  bool result; // w0
  float v25; // s10
  __int64 v26; // [xsp+8h] [xbp-98h] BYREF
  float v27; // [xsp+14h] [xbp-8Ch]
  float v28; // [xsp+18h] [xbp-88h]
  UnityEngine_Vector4_o finalClipRegion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5971FFC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FFC = 1;
  }
  *isTop = 0;
  *isBottom = 0;
  *isLeft = 0;
  *isRight = 0;
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isTop);
  v12 = (UIScrollView_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( ((unsigned __int8)v12 & 1) == 0 )
    return 0;
  v14 = this->fields.scrollView;
  if ( !v14 )
    goto LABEL_33;
  mPanel = (UnityEngine_Object_o *)v14->fields.mPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  v12 = (UIScrollView_o *)UnityEngine_Object__op_Inequality(mPanel, 0, 0);
  if ( ((unsigned __int8)v12 & 1) == 0 )
    return 0;
  if ( !mPanel )
    goto LABEL_33;
  finalClipRegion = UIPanel__get_finalClipRegion((UIPanel_o *)mPanel, 0);
  v12 = this->fields.scrollView;
  if ( !v12 )
    goto LABEL_33;
  x = finalClipRegion.fields.x;
  y = finalClipRegion.fields.y;
  z = finalClipRegion.fields.z;
  w = finalClipRegion.fields.w;
  ((void (__fastcall *)(__int64 *__return_ptr, UIScrollView_o *, const MethodInfo *))v12->klass->vtable._4_get_bounds.methodPtr)(
    &v26,
    v12,
    v12->klass->vtable._4_get_bounds.method);
  v20 = v26;
  v22 = v27;
  v21 = v28;
  v23 = z == 0.0 ? (float)UnityEngine_Screen__get_width(0) : z * 0.5;
  v25 = w == 0.0 ? (float)UnityEngine_Screen__get_height(0) : w * 0.5;
  v12 = this->fields.scrollView;
  if ( !v12 )
    goto LABEL_33;
  if ( UIScrollView__get_canMoveHorizontally(v12, 0) )
  {
    if ( (float)(*(float *)&v20 - v22) < (float)(x - v23) )
      *isLeft = 1;
    if ( (float)(*(float *)&v20 + v22) > (float)(x + v23) )
      *isRight = 1;
  }
  v12 = this->fields.scrollView;
  if ( !v12 )
LABEL_33:
    sub_2213CDC(v12, v13);
  if ( !UIScrollView__get_canMoveVertically(v12, 0) )
    return 1;
  if ( (float)(*((float *)&v20 + 1) - v21) < (float)(y - v25) )
    *isBottom = 1;
  result = 1;
  if ( (float)(*((float *)&v20 + 1) + v21) > (float)(y + v25) )
    *isTop = 1;
  return result;
}


int32_t ListViewManager__GetCenterIndex(ListViewManager_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *centerItem; // x8

  centerItem = this->fields.centerItem;
  if ( centerItem )
    return centerItem->fields.index;
  else
    return -1;
}


ListViewItem_o *ListViewManager__GetCenterItem(ListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.centerItem;
}


UnityEngine_GameObject_o *ListViewManager__GetDragRoot(ListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragParentObject; // x20
  __int64 v4; // x1
  UnityEngine_Object_o *root; // x20
  struct UnityEngine_Transform_o *v7; // x0
  __int64 v8; // x1
  struct ListViewItemSeed_o *seed; // x8

  if ( (byte_5971FF6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIDragDropRoot_TypeInfo);
    byte_5971FF6 = 1;
  }
  dragParentObject = (UnityEngine_Object_o *)this->fields.dragParentObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(dragParentObject, 0, 0) )
    return this->fields.dragParentObject;
  root = (UnityEngine_Object_o *)UIDragDropRoot_TypeInfo->static_fields->root;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  v7 = (struct UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(root, 0, 0);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    v7 = UIDragDropRoot_TypeInfo->static_fields->root;
    if ( v7 )
      return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0);
LABEL_14:
    sub_2213CDC(v7, v8);
  }
  seed = this->fields.seed;
  if ( !seed )
    goto LABEL_14;
  return seed->fields.parent;
}


bool ListViewManager__GetFocusItemIndex(
        ListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  bool result; // w0

  result = 0;
  *index = -1;
  return result;
}


ListViewItem_o *ListViewManager__GetItem(ListViewManager_o *this, int32_t index, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0

  if ( (byte_5971FE3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_5971FE3 = 1;
  }
  if ( index < 0 )
    return 0;
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList || itemList->fields._size <= index )
    return 0;
  else
    return (ListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                               itemList,
                               index,
                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
}


System_Collections_Generic_List_ListViewItem__o *ListViewManager__GetItemSortList(
        ListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.itemSortList;
}


int32_t ListViewManager__GetMatchItemCount(ListViewManager_o *this, ListViewSort_o *sort, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int32_t v5; // w19
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5971FE8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_5971FE8 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v8, 0, sizeof(v8));
  if ( !itemList || !this->fields.sort )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v5 = 0;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_2213CDC(0, v6);
    v5 += ((__int64 (*)(void))v8.fields._current->klass->vtable[5].methodPtr)() & 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return v5;
}


bool ListViewManager__GetScrollView(
        ListViewManager_o *this,
        UnityEngine_Vector3_o *scroll,
        UnityEngine_Vector2_o *offset,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x22
  UnityEngine_Component_o *gameObject; // x0
  __int64 v9; // x1
  struct UIScrollView_o *v10; // x8
  UnityEngine_Object_o *mPanel; // x22
  struct UIScrollView_o *v12; // x8
  struct UIScrollView_o *v13; // x8
  struct UIPanel_o *v14; // x9
  struct UnityEngine_Vector2_StaticFields *p_mClipOffset; // x8
  float *p_y; // x9
  bool result; // w0
  int v18; // w9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  float v21; // s1

  if ( (byte_5972002 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972002 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, scroll);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v10 = this->fields.scrollView;
    if ( !v10 )
      goto LABEL_23;
    mPanel = (UnityEngine_Object_o *)v10->fields.mPanel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(mPanel, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v12 = this->fields.scrollView;
      if ( v12 )
      {
        gameObject = (UnityEngine_Component_o *)v12->fields.mPanel;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( gameObject )
          {
            gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)gameObject,
                                                      0);
            if ( gameObject )
            {
              *scroll = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
              v13 = this->fields.scrollView;
              if ( v13 )
              {
                v14 = v13->fields.mPanel;
                if ( v14 )
                {
                  p_mClipOffset = (struct UnityEngine_Vector2_StaticFields *)&v14->fields.mClipOffset;
                  p_y = &v14->fields.mClipOffset.fields.y;
                  result = 1;
                  goto LABEL_22;
                }
              }
            }
          }
        }
      }
LABEL_23:
      sub_2213CDC(gameObject, v9);
    }
  }
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v18 = (unsigned __int8)byte_59699C0;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&scroll->fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  scroll->fields.z = z;
  if ( !v18 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_59699C0 = 1;
  }
  result = 0;
  p_mClipOffset = UnityEngine_Vector2_TypeInfo->static_fields;
  p_y = &p_mClipOffset->zeroVector.fields.y;
LABEL_22:
  v21 = *p_y;
  offset->fields.x = p_mClipOffset->zeroVector.fields.x;
  offset->fields.y = v21;
  return result;
}


UICommonButton_o *ListViewManager__GetSortKindButton(ListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.sortKindButton;
}


void ListViewManager__ItemDragEnd(ListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dropList; // x0
  __int64 v4; // x1
  Il2CppObject *current; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5971FFB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FFB = 1;
  }
  dropList = (System_Collections_Generic_List_object__o *)this->fields.dropList;
  memset(&v8, 0, sizeof(v8));
  if ( !dropList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    dropList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UIDragDropListViewSurface__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__MoveNext__) )
  {
    current = v8.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_2213CDC(v6, v7);
      UIDragDropListViewSurface__DragEnd((UIDragDropListViewSurface_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__Dispose__);
}


void ListViewManager__ItemDragStart(ListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dropList; // x0
  __int64 v4; // x1
  Il2CppObject *current; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5971FFA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FFA = 1;
  }
  dropList = (System_Collections_Generic_List_object__o *)this->fields.dropList;
  memset(&v8, 0, sizeof(v8));
  if ( !dropList )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    dropList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UIDragDropListViewSurface__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__MoveNext__) )
  {
    current = v8.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_2213CDC(v6, v7);
      UIDragDropListViewSurface__DragStart((UIDragDropListViewSurface_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__Dispose__);
}


void ListViewManager__JumpItem(ListViewManager_o *this, int32_t index, const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  UIScrollView_o *scrollView; // x0
  __int64 v7; // x1
  struct ListViewItemSeed_o *seed; // x8
  bool v9; // w2
  bool v10; // w3
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  struct ListViewItem_o *Item; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  UnityEngine_Object_o *indicator; // x20

  if ( (byte_5971FFE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FFE = 1;
  }
  scrollView = (UIScrollView_o *)ListViewManager__MoveCenterItem(this, index, 0, 0, 0.0, 0, v3);
  if ( ((unsigned __int8)scrollView & 1) != 0 )
  {
    seed = this->fields.seed;
    if ( !seed )
      goto LABEL_18;
    scrollView = this->fields.scrollView;
    if ( seed->fields.arrangement )
    {
      if ( !scrollView )
        goto LABEL_18;
      v9 = 0;
      v10 = 1;
    }
    else
    {
      if ( !scrollView )
        goto LABEL_18;
      v9 = 1;
      v10 = 0;
    }
    UIScrollView__RestrictWithinBounds_56292800(scrollView, 1, v9, v10, 0);
    ListViewManager__ClippingItems(this, 0, 0, v11);
    if ( !this->fields.centerItem )
    {
      Item = ListViewManager__GetItem(this, index, v12);
      this->fields.centerItem = Item;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.centerItem,
        (int32_t)Item,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      indicator = (UnityEngine_Object_o *)this->fields.indicator;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
      if ( UnityEngine_Object__op_Inequality(indicator, 0, 0) )
      {
        scrollView = (UIScrollView_o *)this->fields.indicator;
        if ( scrollView )
        {
          scrollView->klass->vtable._5_get_shouldMoveHorizontally.methodPtr();
          scrollView = (UIScrollView_o *)this->fields.indicator;
          if ( scrollView )
          {
            ((void (__fastcall *)(UIScrollView_o *, ListViewManager_o *, struct ListViewItem_o *, const MethodInfo *))scrollView->klass->vtable._6_get_shouldMoveVertically.methodPtr)(
              scrollView,
              this,
              this->fields.centerItem,
              scrollView->klass->vtable._6_get_shouldMoveVertically.method);
            return;
          }
        }
LABEL_18:
        sub_2213CDC(scrollView, v7);
      }
    }
  }
}


ListViewObject_o *ListViewManager__MakeObject(ListViewManager_o *this, ListViewItem_o *item, const MethodInfo *method)
{
  ListViewObject_o *result; // x0
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  struct ListViewItemSeed_o *seed; // x8
  Il2CppObject *prefab; // x21
  UnityEngine_Object_o *v10; // x21
  bool v11; // w8
  __int64 v12; // x1
  Il2CppObject *Component_object; // x22
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  bool v20; // w8
  struct UnityEngine_GameObject_o *listDragPrefab; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v35; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v37; // x8

  if ( (byte_5971FEE & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Stack_GameObject__Pop__);
    sub_2213A60(&Method_System_Collections_Generic_Stack_GameObject__get_Count__);
    byte_5971FEE = 1;
  }
  result = (ListViewObject_o *)this->fields.objectStock;
  if ( !result )
    goto LABEL_25;
  if ( SLODWORD(result->fields.m_CancellationTokenSource) < 1 )
  {
    seed = this->fields.seed;
    if ( !seed )
      goto LABEL_25;
    prefab = (Il2CppObject *)seed->fields.prefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
    v6 = UnityEngine_Object__Instantiate_object_(
           prefab,
           (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  else
  {
    v6 = System_Collections_Generic_Stack_object___Pop(
           (System_Collections_Generic_Stack_T__o *)result,
           (const MethodInfo_3B5D160 *)Method_System_Collections_Generic_Stack_GameObject__Pop__);
  }
  v10 = (UnityEngine_Object_o *)v6;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v11 = UnityEngine_Object__op_Inequality(v10, 0, 0);
  result = 0;
  if ( v11 )
  {
    if ( !v10 )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v10,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    v20 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    result = 0;
    if ( v20 )
    {
      if ( Component_object )
      {
        Component_object[2].monitor = this;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&Component_object[2].monitor,
          (int32_t)this,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
        ((void (__fastcall *)(Il2CppObject *, ListViewItem_o *, struct ListViewItemSeed_o *, const MethodInfo *))Component_object->klass->vtable[6].methodPtr)(
          Component_object,
          item,
          this->fields.seed,
          Component_object->klass->vtable[6].method);
        listDragPrefab = this->fields.listDragPrefab;
        Component_object[3].klass = (Il2CppClass *)listDragPrefab;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&Component_object[3],
          (int32_t)listDragPrefab,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
        ((void (__fastcall *)(ListViewManager_o *, Il2CppObject *, ListViewItem_o *, const MethodInfo *))this->klass->vtable._4_SetObjectItem.methodPtr)(
          this,
          Component_object,
          item,
          this->klass->vtable._4_SetObjectItem.method);
        result = (ListViewObject_o *)this->fields.objectList;
        if ( result )
        {
          m_CachedPtr = result->fields.m_CachedPtr;
          v35 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++HIDWORD(result->fields.m_CancellationTokenSource);
          if ( m_CachedPtr )
          {
            m_CancellationTokenSource_low = SLODWORD(result->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)result,
                (Il2CppObject *)v10,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v37 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
              LODWORD(result->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_QWORD *)(v37 + 32) = v10;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v37 + 32), (int32_t)v10, v28, v29, v30, v31, v32, v33);
            }
            return (ListViewObject_o *)Component_object;
          }
        }
      }
LABEL_25:
      sub_2213CDC(result, item);
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool ListViewManager__MoveBottomItem(
        ListViewManager_o *this,
        int32_t index,
        bool isAnimation,
        const MethodInfo *method)
{
  ListViewItem_o *Item; // x0
  __int64 v8; // x1
  ListViewItem_o *v9; // x23
  UnityEngine_Object_o *viewObject; // x22
  __int64 v11; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  const MethodInfo *v13; // x2
  _BOOL8 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  float topFocusOffset; // s0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5972000 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972000 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  Item = ListViewManager__GetItem(this, index, (const MethodInfo *)isAnimation);
  if ( Item )
  {
    v9 = Item;
    viewObject = (UnityEngine_Object_o *)Item->fields.viewObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Equality(viewObject, 0, 0) )
    {
      itemSortList = this->fields.itemSortList;
      if ( itemSortList )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v19,
          (System_Collections_Generic_List_object__o *)itemSortList,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v19,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( (ListViewItem_o *)v19.fields._current == v9 )
          {
            viewObject = (UnityEngine_Object_o *)ListViewManager__MakeObject(this, v9, v13);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v19,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      }
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    v14 = UnityEngine_Object__op_Equality(viewObject, 0, 0);
    if ( v14 )
    {
      LOBYTE(Item) = 0;
      return (unsigned __int8)Item & 1;
    }
    if ( index < 1 )
    {
      topFocusOffset = 0.0;
      if ( viewObject )
        goto LABEL_19;
    }
    else
    {
      topFocusOffset = this->fields.topFocusOffset;
      if ( viewObject )
      {
LABEL_19:
        LOBYTE(Item) = ListViewObject__MoveBottom((ListViewObject_o *)viewObject, isAnimation, topFocusOffset, v16);
        return (unsigned __int8)Item & 1;
      }
    }
    sub_2213CDC(v14, v15);
  }
  return (unsigned __int8)Item & 1;
}


// local variable allocation has failed, the output may be wrong!
bool ListViewManager__MoveCenterItem(
        ListViewManager_o *this,
        int32_t index,
        bool isAnimation,
        bool restrictScrollViewRange,
        float forceShiftPosY,
        bool checkCancel,
        const MethodInfo *method)
{
  ListViewItem_o *Item; // x0
  const MethodInfo *v14; // x2
  ListViewItem_o *v15; // x24
  __int64 v16; // x1
  UnityEngine_Object_o *viewObject; // x22
  __int64 v18; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  const MethodInfo *v20; // x2
  _BOOL8 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x4
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_5971FFD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FFD = 1;
  }
  memset(&v25, 0, sizeof(v25));
  Item = ListViewManager__GetItem(this, index, (const MethodInfo *)isAnimation);
  if ( Item )
  {
    v15 = Item;
    ListViewManager__CenterLoopItem(this, Item, v14);
    viewObject = (UnityEngine_Object_o *)v15->fields.viewObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( UnityEngine_Object__op_Equality(viewObject, 0, 0) )
    {
      itemSortList = this->fields.itemSortList;
      if ( itemSortList )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v25,
          (System_Collections_Generic_List_object__o *)itemSortList,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v25,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( (ListViewItem_o *)v25.fields._current == v15 )
          {
            viewObject = (UnityEngine_Object_o *)ListViewManager__MakeObject(this, v15, v20);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v25,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      }
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    v21 = UnityEngine_Object__op_Equality(viewObject, 0, 0);
    if ( v21 )
    {
      LOBYTE(Item) = 0;
    }
    else
    {
      if ( !viewObject )
        sub_2213CDC(v21, v22);
      LOBYTE(Item) = ListViewObject__MoveCenter(
                       (ListViewObject_o *)viewObject,
                       isAnimation,
                       restrictScrollViewRange,
                       forceShiftPosY,
                       checkCancel,
                       v23);
    }
  }
  return (unsigned __int8)Item & 1;
}


// local variable allocation has failed, the output may be wrong!
bool ListViewManager__MoveTopItem(
        ListViewManager_o *this,
        int32_t index,
        bool isAnimation,
        float defaultOffset,
        const MethodInfo *method)
{
  ListViewItem_o *Item; // x0
  __int64 v10; // x1
  ListViewItem_o *v11; // x23
  UnityEngine_Object_o *viewObject; // x22
  __int64 v13; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  const MethodInfo *v15; // x2
  _BOOL8 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5971FFF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FFF = 1;
  }
  memset(&v20, 0, sizeof(v20));
  Item = ListViewManager__GetItem(this, index, (const MethodInfo *)isAnimation);
  if ( Item )
  {
    v11 = Item;
    viewObject = (UnityEngine_Object_o *)Item->fields.viewObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Equality(viewObject, 0, 0) )
    {
      itemSortList = this->fields.itemSortList;
      if ( itemSortList )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v20,
          (System_Collections_Generic_List_object__o *)itemSortList,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v20,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( (ListViewItem_o *)v20.fields._current == v11 )
          {
            viewObject = (UnityEngine_Object_o *)ListViewManager__MakeObject(this, v11, v15);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v20,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      }
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    v16 = UnityEngine_Object__op_Equality(viewObject, 0, 0);
    if ( v16 )
    {
      LOBYTE(Item) = 0;
    }
    else
    {
      if ( index >= 1 )
        defaultOffset = this->fields.topFocusOffset;
      if ( !viewObject )
        sub_2213CDC(v16, v17);
      LOBYTE(Item) = ListViewObject__MoveTop((ListViewObject_o *)viewObject, isAnimation, defaultOffset, v18);
    }
  }
  return (unsigned __int8)Item & 1;
}


void ListViewManager__OnEnable(ListViewManager_o *this, const MethodInfo *method)
{
  this->fields.isScrollRefresh = 1;
}


void ListViewManager__OnSwipeCenter(ListViewManager_o *this, UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  ListViewManager_o *v4; // x19
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  struct ListViewItemSeed_o *seed; // x8
  UnityEngine_Object_o *v8; // x21
  UnityEngine_Object_o *parent; // x22
  __int64 v10; // x1
  struct ListViewItem_o *centerItem; // x8
  UnityEngine_Object_o *viewObject; // x19
  System_Reflection_MethodBase_o *v13; // x0

  v4 = this;
  if ( (byte_5972001 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_2213A60(&Method_ListViewManager_OnSwipeCenter__);
    this = (ListViewManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972001 = 1;
  }
  if ( !go )
    goto LABEL_20;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       go,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  this = (ListViewManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Component_object )
    {
      this = (ListViewManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      if ( this )
      {
        this = (ListViewManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
        if ( this )
        {
          this = (ListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          seed = v4->fields.seed;
          if ( seed )
          {
            v8 = (UnityEngine_Object_o *)this;
            parent = (UnityEngine_Object_o *)seed->fields.parent;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, go);
            if ( UnityEngine_Object__op_Equality(v8, parent, 0) )
            {
              centerItem = v4->fields.centerItem;
              if ( centerItem )
              {
                viewObject = (UnityEngine_Object_o *)centerItem->fields.viewObject;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
                if ( UnityEngine_Object__op_Inequality(viewObject, (UnityEngine_Object_o *)Component_object, 0) )
                {
                  v13 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_ListViewManager_OnSwipeCenter__);
                  OverwriteAssetSoundName__PlaySystemSe(v13, 7, 0, 0);
                }
              }
            }
            return;
          }
        }
      }
    }
LABEL_20:
    sub_2213CDC(this, go);
  }
}


// local variable allocation has failed, the output may be wrong!
void ListViewManager__PushObjectOutSideClipPosition(ListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Stack_T__o *objectStock; // x0
  int size; // w21
  System_Collections_Generic_Stack_T__o *v5; // x20
  float y; // s9
  float v7; // s8
  float v8; // s8
  float v9; // s9
  float v10; // s2
  float v11; // s11
  __int64 v12; // x22
  Il2CppObject **p_syncRoot; // x23
  float x; // s8
  float v15; // s10
  float z; // s9
  _QWORD v17[2]; // [xsp+8h] [xbp-68h] BYREF
  float v18; // [xsp+18h] [xbp-58h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5972005 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Stack_GameObject__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_Stack_GameObject__get_Count__);
    byte_5972005 = 1;
  }
  objectStock = (System_Collections_Generic_Stack_T__o *)this->fields.objectStock;
  if ( !objectStock )
    goto LABEL_25;
  size = objectStock->fields._size;
  if ( size >= 1 )
  {
    objectStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___ToArray(
                                                             objectStock,
                                                             (const MethodInfo_3B5D350 *)Method_System_Collections_Generic_Stack_GameObject__ToArray__);
    if ( this->fields.scrollView )
    {
      v5 = objectStock;
      objectStock = (System_Collections_Generic_Stack_T__o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this->fields.scrollView,
                                                               0);
      if ( objectStock )
      {
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)objectStock, 0);
        objectStock = (System_Collections_Generic_Stack_T__o *)this->fields.scrollView;
        if ( objectStock )
        {
          y = this->fields.clipOffset.fields.y;
          v7 = localPosition.fields.y;
          ((void (__fastcall *)(_QWORD *__return_ptr, System_Collections_Generic_Stack_T__o *, const MethodInfo *, long double))objectStock->klass->vtable._4_System_Collections_Generic_IEnumerable_T__GetEnumerator.methodPtr)(
            v17,
            objectStock,
            objectStock->klass->vtable._4_System_Collections_Generic_IEnumerable_T__GetEnumerator.method,
            *(long double *)&localPosition.fields.x);
          objectStock = (System_Collections_Generic_Stack_T__o *)this->fields.scrollView;
          if ( objectStock )
          {
            v8 = y - v7;
            v9 = *((float *)v17 + 1) + v18;
            objectStock = (System_Collections_Generic_Stack_T__o *)((System_Collections_Generic_Stack_T__o *(__fastcall *)(_QWORD *__return_ptr, System_Collections_Generic_Stack_T__o *, const MethodInfo *))objectStock->klass->vtable._4_System_Collections_Generic_IEnumerable_T__GetEnumerator.methodPtr)(
                                                                     v17,
                                                                     objectStock,
                                                                     objectStock->klass->vtable._4_System_Collections_Generic_IEnumerable_T__GetEnumerator.method);
            v10 = this->fields.clipRange.fields.y;
            v11 = v8 <= (float)((float)(*((float *)v17 + 1) - v18) + v10)
                ? v9 - (float)(v10 * 0.5)
                : (float)(*((float *)v17 + 1) - v18) + (float)(v10 * 0.5);
            if ( v5 )
            {
              v12 = 0;
              p_syncRoot = &v5->fields._syncRoot;
              while ( (unsigned int)v12 < v5->fields._size )
              {
                objectStock = (System_Collections_Generic_Stack_T__o *)p_syncRoot[v12];
                if ( !objectStock )
                  goto LABEL_25;
                objectStock = (System_Collections_Generic_Stack_T__o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)objectStock,
                                                                         0);
                if ( !objectStock )
                  goto LABEL_25;
                v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)objectStock, 0);
                objectStock = (System_Collections_Generic_Stack_T__o *)this->fields.scrollView;
                if ( !objectStock )
                  goto LABEL_25;
                x = v20.fields.x;
                v15 = v20.fields.y;
                z = v20.fields.z;
                objectStock = (System_Collections_Generic_Stack_T__o *)UIScrollView__get_canMoveVertically(
                                                                         (UIScrollView_o *)objectStock,
                                                                         0);
                if ( ((unsigned __int8)objectStock & 1) != 0 )
                  v15 = v11;
                if ( (unsigned int)v12 >= v5->fields._size )
                  break;
                objectStock = (System_Collections_Generic_Stack_T__o *)p_syncRoot[v12];
                if ( !objectStock )
                  goto LABEL_25;
                objectStock = (System_Collections_Generic_Stack_T__o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)objectStock,
                                                                         0);
                if ( !objectStock )
                  goto LABEL_25;
                v21.fields.x = x;
                v21.fields.y = v15;
                v21.fields.z = z;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)objectStock, v21, 0);
                if ( size == (_DWORD)++v12 )
                  return;
              }
              sub_2213CE4(objectStock);
            }
          }
        }
      }
    }
LABEL_25:
    sub_2213CDC(objectStock, method);
  }
}


void ListViewManager__ReleaseObject(ListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  __int64 v7; // x1
  Il2CppObject *Component_object; // x21
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_Stack_T__o *objectStock; // x0
  struct System_Collections_Generic_List_GameObject__o *v13; // x8
  int32_t size; // w2
  int v15; // w9
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_5971FE5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Stack_GameObject__Push__);
    byte_5971FE5 = 1;
  }
  objectList = this->fields.objectList;
  memset(&v17, 0, sizeof(v17));
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  v16.fields._list = 0;
  *(_QWORD *)&v16.fields._index = &v17;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v4 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_2213CDC(v4, v5);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v17.fields._current,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( v9 )
    {
      if ( !Component_object )
        sub_2213CDC(v9, v10);
      ListViewObject__ReleaseItem((ListViewObject_o *)Component_object, v10);
      objectStock = (System_Collections_Generic_Stack_T__o *)this->fields.objectStock;
      if ( !objectStock )
        sub_2213CDC(0, v11);
      System_Collections_Generic_Stack_object___Push(
        objectStock,
        current,
        (const MethodInfo_3B5D25C *)Method_System_Collections_Generic_Stack_GameObject__Push__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v13 = this->fields.objectList;
  if ( !v13 )
LABEL_20:
    sub_2213CDC(objectList, method);
  size = v13->fields._size;
  v15 = v13->fields._version + 1;
  v13->fields._size = 0;
  v13->fields._version = v15;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v13->fields._items, 0, size, 0);
}


bool ListViewManager__ReleaseObjectExtra(ListViewManager_o *this, ListViewObject_o *obj, const MethodInfo *method)
{
  Il2CppObject *gameObject; // x0
  const MethodInfo *v6; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  unsigned int v8; // w0
  System_Collections_Generic_Stack_T__o *objectStock; // x20

  if ( (byte_5972004 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__IndexOf__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Stack_GameObject__Push__);
    byte_5972004 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  gameObject = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !obj )
      goto LABEL_14;
    if ( ListViewObject__CleanItemExtra(obj, v6) )
    {
      objectList = this->fields.objectList;
      gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0);
      if ( !objectList )
        goto LABEL_14;
      v8 = System_Collections_Generic_List_object___IndexOf(
             (System_Collections_Generic_List_object__o *)objectList,
             gameObject,
             (const MethodInfo_44848E8 *)Method_System_Collections_Generic_List_GameObject__IndexOf__);
      if ( (v8 & 0x80000000) == 0 )
      {
        v6 = (const MethodInfo *)v8;
        gameObject = (Il2CppObject *)this->fields.objectList;
        if ( gameObject )
        {
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)gameObject,
            (int32_t)v6,
            (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
          objectStock = (System_Collections_Generic_Stack_T__o *)this->fields.objectStock;
          gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0);
          if ( objectStock )
          {
            System_Collections_Generic_Stack_object___Push(
              objectStock,
              gameObject,
              (const MethodInfo_3B5D25C *)Method_System_Collections_Generic_Stack_GameObject__Push__);
            return 1;
          }
        }
LABEL_14:
        sub_2213CDC(gameObject, v6);
      }
    }
  }
  return 0;
}


bool ListViewManager__ReleaseObject_50835912(ListViewManager_o *this, ListViewObject_o *obj, const MethodInfo *method)
{
  Il2CppObject *gameObject; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  unsigned int v8; // w0
  System_Collections_Generic_Stack_T__o *objectStock; // x20

  if ( (byte_5971FEF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__IndexOf__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Stack_GameObject__Push__);
    byte_5971FEF = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  gameObject = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !obj )
      goto LABEL_14;
    if ( (((__int64 (__fastcall *)(ListViewObject_o *, const MethodInfo *))obj->klass->vtable._4_ClearItem.methodPtr)(
            obj,
            obj->klass->vtable._4_ClearItem.method)
        & 1) != 0 )
    {
      objectList = this->fields.objectList;
      gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0);
      if ( !objectList )
        goto LABEL_14;
      v8 = System_Collections_Generic_List_object___IndexOf(
             (System_Collections_Generic_List_object__o *)objectList,
             gameObject,
             (const MethodInfo_44848E8 *)Method_System_Collections_Generic_List_GameObject__IndexOf__);
      if ( (v8 & 0x80000000) == 0 )
      {
        v6 = v8;
        gameObject = (Il2CppObject *)this->fields.objectList;
        if ( gameObject )
        {
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)gameObject,
            v6,
            (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
          objectStock = (System_Collections_Generic_Stack_T__o *)this->fields.objectStock;
          gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0);
          if ( objectStock )
          {
            System_Collections_Generic_Stack_object___Push(
              objectStock,
              gameObject,
              (const MethodInfo_3B5D25C *)Method_System_Collections_Generic_Stack_GameObject__Push__);
            return 1;
          }
        }
LABEL_14:
        sub_2213CDC(gameObject, v6);
      }
    }
  }
  return 0;
}


void ListViewManager__ScreenUpdate(ListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  ListViewManager__ClippingItems(this, 1, 1, v2);
}


void ListViewManager__SetArrangementPitchY(ListViewManager_o *this, float y, const MethodInfo *method)
{
  struct ListViewItemSeed_o *seed; // x8

  seed = this->fields.seed;
  if ( !seed )
    sub_2213CDC(this, method);
  seed->fields.arrangementPich.fields.y = y;
}


void ListViewManager__SetCallbackAfterScroll(
        ListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.callbackAfterScroll = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackAfterScroll,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void ListViewManager__SetEmptyMessageBase(ListViewManager_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Object_o *emptyMessageBase; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_5972009 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972009 = 1;
  }
  emptyMessageBase = (UnityEngine_Object_o *)this->fields.emptyMessageBase;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isActive);
  if ( UnityEngine_Object__op_Inequality(emptyMessageBase, 0, 0) )
  {
    v7 = this->fields.emptyMessageBase;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UnityEngine_GameObject__SetActive(v7, isActive, 0);
  }
}


void ListViewManager__SetEnabledColliderDragMask(ListViewManager_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_5971FF7 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FF7 = 1;
  }
  v5 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ListViewManager_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._7_GetDragRoot.methodPtr)(
                                     this,
                                     this->klass->vtable._7_GetDragRoot.method,
                                     method);
  if ( !v5 )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v5,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    if ( Component_object )
    {
      UIDragDropListViewBackMask__SetEnabledCollider((UIDragDropListViewBackMask_o *)Component_object, value, 0);
      return;
    }
LABEL_10:
    sub_2213CDC(v5, v6);
  }
}


void ListViewManager__SetFilterList(
        ListViewManager_o *this,
        System_Boolean_array *filterList,
        const MethodInfo *method)
{
  ;
}


void ListViewManager__SetObjectItem(
        ListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  if ( !obj )
    sub_2213CDC(this, 0);
  ((void (__fastcall *)(ListViewObject_o *, bool, const MethodInfo *))obj->klass->vtable._9_SetInput.methodPtr)(
    obj,
    this->fields.isInput,
    obj->klass->vtable._9_SetInput.method);
}


void ListViewManager__SetScrollBarValue(ListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager_c *klass; // x8
  unsigned int naturalAligment; // w9
  __int64 v5; // x11
  __int64 v6; // x11
  UIProgressBar_o *scrollBar; // x0
  float value; // s0

  if ( (byte_5971FEB & 1) == 0 )
  {
    sub_2213A60(&EquipGraphListViewManager_TypeInfo);
    sub_2213A60(&SupportServantEquipListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_13747/*"SvtEqScrollBarValue"*/);
    byte_5971FEB = 1;
  }
  if ( !this
    || ((klass = this->klass,
         naturalAligment = this->klass->_2.naturalAligment,
         v5 = EquipGraphListViewManager_TypeInfo->_2.naturalAligment,
         naturalAligment < (unsigned int)v5)
     || (EquipGraphListViewManager_c *)klass->_2.typeHierarchy[v5 - 1] != EquipGraphListViewManager_TypeInfo)
    && ((v6 = SupportServantEquipListViewManager_TypeInfo->_2.naturalAligment, naturalAligment < (unsigned int)v6)
     || (SupportServantEquipListViewManager_c *)klass->_2.typeHierarchy[v6 - 1] != SupportServantEquipListViewManager_TypeInfo) )
  {
    scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
    if ( scrollBar )
    {
      this->fields.scrollBarValue = UIProgressBar__get_value(scrollBar, 0);
      return;
    }
LABEL_12:
    sub_2213CDC(scrollBar, method);
  }
  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_12;
  value = UIProgressBar__get_value(scrollBar, 0);
  UnityEngine_PlayerPrefs__SetFloat((System_String_o *)StringLiteral_13747/*"SvtEqScrollBarValue"*/, value, 0);
}


bool ListViewManager__SetScrollView(
        ListViewManager_o *this,
        UnityEngine_Vector3_o scroll,
        UnityEngine_Vector2_o offset,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  float z; // s10
  float v7; // s11
  float v8; // s12
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Component_o *gameObject; // x0
  __int64 v12; // x1
  struct UIScrollView_o *v13; // x8
  UnityEngine_Object_o *mPanel; // x20
  struct UIScrollView_o *v15; // x8
  struct UIScrollView_o *v16; // x8
  UIScrollView_o *v17; // x20
  ListViewManager_o *v18; // x0
  bool v19; // w19
  const MethodInfo *v20; // x3
  UnityEngine_Vector2_o v22; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  y = offset.fields.y;
  x = offset.fields.x;
  z = scroll.fields.z;
  v7 = scroll.fields.y;
  v8 = scroll.fields.x;
  if ( (byte_5972003 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972003 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return 0;
  v13 = this->fields.scrollView;
  if ( !v13 )
    goto LABEL_23;
  mPanel = (UnityEngine_Object_o *)v13->fields.mPanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(mPanel, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return 0;
  v15 = this->fields.scrollView;
  if ( !v15 )
    goto LABEL_23;
  gameObject = (UnityEngine_Component_o *)v15->fields.mPanel;
  if ( !gameObject )
    goto LABEL_23;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
  if ( !gameObject )
    goto LABEL_23;
  gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                            (UnityEngine_GameObject_o *)gameObject,
                                            0);
  if ( !gameObject )
    goto LABEL_23;
  v23.fields.x = v8;
  v23.fields.y = v7;
  v23.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v23, 0);
  v16 = this->fields.scrollView;
  if ( !v16 )
    goto LABEL_23;
  gameObject = (UnityEngine_Component_o *)v16->fields.mPanel;
  if ( !gameObject )
    goto LABEL_23;
  v22.fields.x = x;
  v22.fields.y = y;
  UIPanel__set_clipOffset((UIPanel_o *)gameObject, v22, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !gameObject )
    goto LABEL_23;
  UIScrollView__DisableSpring((UIScrollView_o *)gameObject, 0);
  v17 = this->fields.scrollView;
  if ( !byte_5969AE0 )
  {
    gameObject = (UnityEngine_Component_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v17 )
LABEL_23:
    sub_2213CDC(gameObject, v12);
  UIScrollView__set_currentMomentum(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  v18 = this;
  v19 = 1;
  ListViewManager__ClippingItems(v18, 1, 0, v20);
  return v19;
}


void ListViewManager__SetSortAscendingOrder(ListViewManager_o *this, bool isAscendingOrder, const MethodInfo *method)
{
  ;
}


void ListViewManager__SetSortButtonImage(ListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v6; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v8; // x8
  int32_t sortKind; // w9
  System_String_o **v10; // x9
  System_String_o **v11; // x10
  System_String_o **v12; // x8

  if ( (byte_5971FE6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18291/*"btn_sort_up"*/);
    sub_2213A60(&StringLiteral_18289/*"btn_sort_new"*/);
    sub_2213A60(&StringLiteral_18290/*"btn_sort_old"*/);
    sub_2213A60(&StringLiteral_18288/*"btn_sort_down"*/);
    byte_5971FE6 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_24;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v6 )
      goto LABEL_24;
    UILabel__set_text(v6, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( v8 )
    {
      sortKind = v8->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortOrderSprite;
        if ( sort )
        {
          v10 = (System_String_o **)&StringLiteral_18290/*"btn_sort_old"*/;
          v11 = (System_String_o **)&StringLiteral_18289/*"btn_sort_new"*/;
LABEL_20:
          if ( v8->fields.isAscendingOrder )
            v12 = v10;
          else
            v12 = v11;
          UISprite__set_spriteName((UISprite_o *)sort, *v12, 0);
          return;
        }
      }
      else
      {
        sort = (ListViewSort_o *)this->fields.sortOrderSprite;
        if ( sort )
        {
          v10 = (System_String_o **)&StringLiteral_18291/*"btn_sort_up"*/;
          v11 = (System_String_o **)&StringLiteral_18288/*"btn_sort_down"*/;
          goto LABEL_20;
        }
      }
    }
LABEL_24:
    sub_2213CDC(sort, v4);
  }
}


void ListViewManager__SetSortKind(ListViewManager_o *this, int32_t kind, const MethodInfo *method)
{
  ;
}


void ListViewManager__SetTopItem(ListViewManager_o *this, int32_t index, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UIScrollView_o *scrollView; // x0
  __int64 v6; // x1
  struct ListViewItemSeed_o *seed; // x8
  bool v8; // w2
  bool v9; // w3
  const MethodInfo *v10; // x3

  scrollView = (UIScrollView_o *)ListViewManager__MoveTopItem(this, index, 0, 0.0, v3);
  if ( ((unsigned __int8)scrollView & 1) != 0 )
  {
    seed = this->fields.seed;
    if ( seed )
    {
      scrollView = this->fields.scrollView;
      if ( seed->fields.arrangement )
      {
        if ( scrollView )
        {
          v8 = 0;
          v9 = 1;
LABEL_9:
          UIScrollView__RestrictWithinBounds_56292800(scrollView, 1, v8, v9, 0);
          ListViewManager__ClippingItems(this, 1, 0, v10);
          return;
        }
      }
      else if ( scrollView )
      {
        v8 = 1;
        v9 = 0;
        goto LABEL_9;
      }
    }
    sub_2213CDC(scrollView, v6);
  }
}


void ListViewManager__SortItem(
        ListViewManager_o *this,
        int32_t selectIndex,
        bool isAllDisp,
        int32_t addEmptyTarminal,
        const MethodInfo *method)
{
  char *Instance; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_List_object__o *v18; // x22
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  struct ListViewSort_o *sort; // x8
  bool v35; // w21
  ListViewManager___c_c *v36; // x0
  _BOOL4 isAscendingOrder; // w9
  int32_t v38; // w23
  int v39; // w8
  struct ListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__68_0; // x20
  Il2CppObject *v42; // x24
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct ListViewManager___c_StaticFields *v49; // x0
  MissionNaviTransitionBoardItem_o *p__9__68_0; // x0
  struct ListViewManager___c_StaticFields *v51; // x8
  Il2CppObject *v52; // x24
  struct ListViewManager___c_StaticFields *v53; // x0
  const MethodInfo *v54; // x3
  struct ListViewItem_o **p_topItem; // x25
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  struct ListViewItem_o **p_bottomItem; // x26
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  struct ListViewItem_o **p_leftItem; // x27
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  struct ListViewItem_o **p_rightItem; // x28
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  Il2CppObject *Item; // x0
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  Il2CppObject *v96; // x0
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7
  Il2CppObject *v103; // x0
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  Il2CppObject *v110; // x0
  System_String_o *v111; // x2
  System_String_o *v112; // x3
  int32_t v113; // w4
  int32_t v114; // w5
  bool v115; // w6
  bool v116; // w7
  int32_t i; // w29
  const MethodInfo *v118; // x2
  float *v119; // x20
  System_String_o *v120; // x2
  System_String_o *v121; // x3
  int32_t v122; // w4
  int32_t v123; // w5
  bool v124; // w6
  bool v125; // w7
  float v126; // s0
  const MethodInfo_4483994 *v127; // x2
  __int64 v128; // x1
  UnityEngine_Object_c *v129; // x0
  UnityEngine_Object_o *emptyMessageBase; // x20
  UnityEngine_Object_o *indicator; // x20
  UnityEngine_Object_o *scrollView; // x20
  const MethodInfo *v133; // x3
  System_String_o *v134; // x2
  System_String_o *v135; // x3
  int32_t v136; // w4
  int32_t v137; // w5
  bool v138; // w6
  bool v139; // w7
  __int64 v140; // x1
  UnityEngine_Object_o *v141; // x20
  UIScrollView_o *v142; // x20
  const MethodInfo *v143; // x5
  const MethodInfo *v144; // x2
  ListViewItem_o *v145; // x0
  const MethodInfo *v146; // x2
  int32_t v147; // [xsp+Ch] [xbp-A4h]
  int32_t v148; // [xsp+10h] [xbp-A0h]
  int32_t index; // [xsp+14h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v150; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v151; // [xsp+30h] [xbp-80h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5971FE9 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_ListViewItem__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_2213A60(&Method_ListViewManager___c__SortItem_b__68_0__);
    sub_2213A60(&Method_ListViewManager___c__SortItem_b__68_1__);
    sub_2213A60(&ListViewManager___c_TypeInfo);
    byte_5971FE9 = 1;
  }
  memset(&v151, 0, sizeof(v151));
  Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  v148 = addEmptyTarminal;
  SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)Instance, 0);
  ListViewManager__ReleaseObject(this, v11);
  Instance = (char *)this->fields.sort;
  if ( !Instance )
    goto LABEL_92;
  *((_QWORD *)Instance + 4) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(Instance + 32), (int32_t)this, v12, v13, v14, v15, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  Instance = (char *)this->fields.itemList;
  if ( Instance )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v150,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v151 = v150;
    v150.fields._list = 0;
    *(_QWORD *)&v150.fields._index = &v151;
    while ( 1 )
    {
      v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v151,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v19 )
        break;
      current = v151.fields._current;
      if ( !v151.fields._current )
        sub_2213CDC(v19, v20);
      v22 = ((__int64 (__fastcall *)(Il2CppObject *, struct ListViewSort_o *, const MethodInfo *))v151.fields._current->klass->vtable[4].methodPtr)(
              v151.fields._current,
              this->fields.sort,
              v151.fields._current->klass->vtable[4].method);
      if ( (v22 & 1) != 0 )
      {
        if ( !v18
          || (items = v18->fields._items,
              v31 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++v18->fields._version,
              !items) )
        {
          sub_2213CDC(v22, v23);
        }
        size = v18->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            current,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v33[4] = (Il2CppClass *)current;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 4), (int32_t)current, v24, v25, v26, v27, v28, v29);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v151,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  if ( !v18 )
    goto LABEL_92;
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_92;
  v35 = isAllDisp;
  v36 = ListViewManager___c_TypeInfo;
  isAscendingOrder = sort->fields.isAscendingOrder;
  v38 = v18->fields._size;
  v39 = *(&ListViewManager___c_TypeInfo->_2.cctor_finished + 1);
  if ( isAscendingOrder )
  {
    if ( !v39 )
    {
      j_il2cpp_runtime_class_init_0(ListViewManager___c_TypeInfo, v10);
      v36 = ListViewManager___c_TypeInfo;
    }
    static_fields = v36->static_fields;
    _9__68_0 = (System_Comparison_T__o *)static_fields->__9__68_0;
    if ( !_9__68_0 )
    {
      if ( !*(&v36->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v36, v10);
        static_fields = ListViewManager___c_TypeInfo->static_fields;
      }
      v42 = (Il2CppObject *)static_fields->__9;
      _9__68_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_ListViewItem__TypeInfo);
      System_Comparison_object____ctor(_9__68_0, v42, Method_ListViewManager___c__SortItem_b__68_0__, 0);
      v49 = ListViewManager___c_TypeInfo->static_fields;
      v49->__9__68_0 = (struct System_Comparison_ListViewItem__o *)_9__68_0;
      p__9__68_0 = (MissionNaviTransitionBoardItem_o *)&v49->__9__68_0;
LABEL_31:
      sub_2213A04(p__9__68_0, (int32_t)_9__68_0, v43, v44, v45, v46, v47, v48);
    }
  }
  else
  {
    if ( !v39 )
    {
      j_il2cpp_runtime_class_init_0(ListViewManager___c_TypeInfo, v10);
      v36 = ListViewManager___c_TypeInfo;
    }
    v51 = v36->static_fields;
    _9__68_0 = (System_Comparison_T__o *)v51->__9__68_1;
    if ( !_9__68_0 )
    {
      if ( !*(&v36->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v36, v10);
        v51 = ListViewManager___c_TypeInfo->static_fields;
      }
      v52 = (Il2CppObject *)v51->__9;
      _9__68_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_ListViewItem__TypeInfo);
      System_Comparison_object____ctor(_9__68_0, v52, Method_ListViewManager___c__SortItem_b__68_1__, 0);
      v53 = ListViewManager___c_TypeInfo->static_fields;
      v53->__9__68_1 = (struct System_Comparison_ListViewItem__o *)_9__68_0;
      p__9__68_0 = (MissionNaviTransitionBoardItem_o *)&v53->__9__68_1;
      goto LABEL_31;
    }
  }
  System_Collections_Generic_List_object___Sort_71849708(
    v18,
    _9__68_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  ListViewManager__CheckFocusItem(this, (System_Collections_Generic_List_ListViewItem__o *)v18, v38, v54);
  this->fields.topItem = 0;
  p_topItem = &this->fields.topItem;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.topItem, 0, v56, v57, v58, v59, v60, v61);
  this->fields.bottomItem = 0;
  p_bottomItem = &this->fields.bottomItem;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.bottomItem, 0, v63, v64, v65, v66, v67, v68);
  this->fields.leftItem = 0;
  p_leftItem = &this->fields.leftItem;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.leftItem, 0, v70, v71, v72, v73, v74, v75);
  p_rightItem = &this->fields.rightItem;
  this->fields.rightItem = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rightItem, 0, v77, v78, v79, v80, v81, v82);
  this->fields.isAllDisp = v35;
  index = v38 - 1;
  if ( v38 >= 1 )
  {
    Instance = (char *)this->fields.scrollView;
    if ( !Instance )
      goto LABEL_92;
    if ( UIScrollView__get_canMoveHorizontally((UIScrollView_o *)Instance, 0) )
    {
      Instance = (char *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_92;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               0,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      this->fields.leftItem = (struct ListViewItem_o *)Item;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.leftItem,
        (int32_t)Item,
        v90,
        v91,
        v92,
        v93,
        v94,
        v95);
      Instance = (char *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_92;
      v96 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)Instance,
              0,
              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      *p_rightItem = (struct ListViewItem_o *)v96;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.rightItem,
        (int32_t)v96,
        v97,
        v98,
        v99,
        v100,
        v101,
        v102);
    }
    Instance = (char *)this->fields.scrollView;
    if ( !Instance )
      goto LABEL_92;
    v147 = selectIndex;
    if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)Instance, 0) )
    {
      Instance = (char *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_92;
      v103 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               0,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      this->fields.topItem = (struct ListViewItem_o *)v103;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.topItem,
        (int32_t)v103,
        v104,
        v105,
        v106,
        v107,
        v108,
        v109);
      Instance = (char *)this->fields.itemList;
      if ( !Instance )
        goto LABEL_92;
      v110 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               0,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      *p_bottomItem = (struct ListViewItem_o *)v110;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.bottomItem,
        (int32_t)v110,
        v111,
        v112,
        v113,
        v114,
        v115,
        v116);
    }
    for ( i = 0; i != v38; ++i )
    {
      Instance = (char *)System_Collections_Generic_List_object___get_Item(
                           v18,
                           i,
                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Instance )
        goto LABEL_92;
      *((_DWORD *)Instance + 6) = i;
      *((_DWORD *)Instance + 7) = i;
      v119 = (float *)Instance;
      Instance[96] = v35;
      Instance = (char *)this->fields.seed;
      if ( !Instance )
        goto LABEL_92;
      LocalPosition = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)Instance, i, v118);
      *(UnityEngine_Vector3_o *)(v119 + 25) = LocalPosition;
      if ( *p_topItem )
      {
        Instance = (char *)&this->fields.topItem;
        if ( LocalPosition.fields.y > (*p_topItem)->fields.basePosition.fields.y )
          goto LABEL_50;
        if ( !*p_bottomItem )
          goto LABEL_92;
        Instance = (char *)&this->fields.bottomItem;
        if ( LocalPosition.fields.y < (*p_bottomItem)->fields.basePosition.fields.y )
        {
LABEL_50:
          *(_QWORD *)Instance = v119;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)Instance, (int32_t)v119, v120, v121, v122, v123, v124, v125);
        }
      }
      if ( *p_rightItem )
      {
        v126 = v119[25];
        Instance = (char *)&this->fields.rightItem;
        if ( v126 > (*p_rightItem)->fields.basePosition.fields.x )
          goto LABEL_55;
        if ( !*p_leftItem )
          goto LABEL_92;
        Instance = (char *)&this->fields.leftItem;
        if ( v126 < (*p_leftItem)->fields.basePosition.fields.x )
        {
LABEL_55:
          *(_QWORD *)Instance = v119;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)Instance, (int32_t)v119, v120, v121, v122, v123, v124, v125);
        }
      }
    }
    Instance = (char *)System_Collections_Generic_List_object___get_Item(
                         v18,
                         0,
                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( !Instance
      || (v127 = (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__,
          Instance[96] = 1,
          Instance = (char *)System_Collections_Generic_List_object___get_Item(v18, index, v127),
          selectIndex = v147,
          !Instance) )
    {
LABEL_92:
      sub_2213CDC(Instance, v10);
    }
    Instance[96] = 1;
    if ( v38 >= v148 )
    {
      Instance = (char *)System_Collections_Generic_List_object___get_Item(
                           v18,
                           index,
                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !Instance )
        goto LABEL_92;
      Instance[97] = 1;
    }
  }
  this->fields.itemSortList = (struct System_Collections_Generic_List_ListViewItem__o *)v18;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemSortList,
    (int32_t)v18,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  v129 = UnityEngine_Object_TypeInfo;
  this->fields.terminalIndex = -1;
  emptyMessageBase = (UnityEngine_Object_o *)this->fields.emptyMessageBase;
  if ( !*(&v129->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v129, v128);
  if ( UnityEngine_Object__op_Inequality(emptyMessageBase, 0, 0) )
  {
    Instance = (char *)this->fields.emptyMessageBase;
    if ( !Instance )
      goto LABEL_92;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v38 < 1, 0);
  }
  indicator = (UnityEngine_Object_o *)this->fields.indicator;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(indicator, 0, 0) )
  {
    Instance = (char *)this->fields.indicator;
    if ( !Instance )
      goto LABEL_92;
    (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*(_QWORD *)Instance + 376LL))(
      Instance,
      (unsigned int)v38,
      *(_QWORD *)(*(_QWORD *)Instance + 384LL));
    this->fields.isIndecatorRefresh = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    Instance = (char *)this->fields.scrollView;
    if ( !Instance )
      goto LABEL_92;
    UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
  }
  ListViewManager__ClippingTerminationItem(this, v10);
  ListViewManager__ClippingItems(this, 1, 0, v133);
  ((void (__fastcall *)(ListViewManager_o *, const MethodInfo *))this->klass->vtable._5_SetSortButtonImage.methodPtr)(
    this,
    this->klass->vtable._5_SetSortButtonImage.method);
  Instance = (char *)this->fields.sort;
  if ( !Instance )
    goto LABEL_92;
  *((_QWORD *)Instance + 4) = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(Instance + 32), 0, v134, v135, v136, v137, v138, v139);
  v141 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v140);
  if ( UnityEngine_Object__op_Inequality(v141, 0, 0) )
  {
    Instance = (char *)this->fields.scrollView;
    if ( !Instance )
      goto LABEL_92;
    UIScrollView__DisableSpring((UIScrollView_o *)Instance, 0);
    v142 = this->fields.scrollView;
    if ( !byte_5969AE0 )
    {
      Instance = (char *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    if ( !v142 )
      goto LABEL_92;
    UIScrollView__set_currentMomentum(v142, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    if ( selectIndex < 0 )
    {
      Instance = (char *)this->fields.scrollView;
      if ( !Instance )
        goto LABEL_92;
      UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
      v145 = ListViewManager__GetItem(this, 0, v144);
      ListViewManager__CenterLoopItem(this, v145, v146);
    }
    else if ( !ListViewManager__MoveCenterItem(this, selectIndex, 0, 0, 0.0, 0, v143) )
    {
      Instance = (char *)this->fields.scrollView;
      if ( Instance )
      {
        UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
        return;
      }
      goto LABEL_92;
    }
  }
}


void ListViewManager__Update(ListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *transform; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *indicator; // x20
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5971FF5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FF5 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) && this->fields.itemSortList )
  {
    transform = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( !transform )
      goto LABEL_27;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_27;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    if ( !this->fields.isScrollRefresh
      && localPosition.fields.x == this->fields.oldScrollPosition.fields.x
      && localPosition.fields.y == this->fields.oldScrollPosition.fields.y
      && localPosition.fields.z == this->fields.oldScrollPosition.fields.z )
    {
      if ( this->fields.isIndecatorRefresh )
      {
        indicator = (UnityEngine_Object_o *)this->fields.indicator;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
        if ( !UnityEngine_Object__op_Inequality(indicator, 0, 0) )
          goto LABEL_26;
        transform = (UnityEngine_Component_o *)this->fields.indicator;
        if ( this->fields.centerItem )
        {
          if ( !transform )
            goto LABEL_27;
          ((void (*)(void))transform->klass[1]._1.name)();
        }
        else
        {
          if ( !transform )
            goto LABEL_27;
          ((void (__fastcall *)(UnityEngine_Component_o *, ListViewManager_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, const char *))transform->klass[1]._1.name)(
            transform,
            this,
            0,
            0,
            0,
            0,
            0,
            transform->klass[1]._1.namespaze);
        }
        transform = (UnityEngine_Component_o *)this->fields.indicator;
        if ( transform )
        {
          ((void (__fastcall *)(UnityEngine_Component_o *, ListViewManager_o *, struct ListViewItem_o *, _QWORD))transform->klass[1]._1.byval_arg.data)(
            transform,
            this,
            this->fields.centerItem,
            *(_QWORD *)&transform->klass[1]._1.byval_arg.bits);
LABEL_26:
          this->fields.isIndecatorRefresh = 0;
          return;
        }
LABEL_27:
        sub_2213CDC(transform, v4);
      }
    }
    else
    {
      ListViewManager__ClippingItems(this, 1, 1, v7);
      this->fields.oldScrollPosition.fields.x = x;
      this->fields.oldScrollPosition.fields.y = y;
      this->fields.oldScrollPosition.fields.z = z;
      this->fields.isScrollRefresh = 0;
    }
  }
}


UnityEngine_Vector2_o ListViewManager__getPitch(ListViewManager_o *this, const MethodInfo *method)
{
  struct ListViewItemSeed_o *seed; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  seed = this->fields.seed;
  if ( !seed )
    sub_2213CDC(this, method);
  x = seed->fields.arrangementPich.fields.x;
  y = seed->fields.arrangementPich.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


int32_t ListViewManager__get_DropObjectSum(ListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dropObjectList; // x0
  int32_t v4; // w19
  __int64 v5; // x1
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5971FDD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FDD = 1;
  }
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  memset(&v8, 0, sizeof(v8));
  if ( !dropObjectList )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    dropObjectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
  v4 = 0;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
  {
    current = v8.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    v4 += UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
  return v4;
}


bool ListViewManager__get_IsInput(ListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.isInput;
}


bool ListViewManager__get_IsLoop(ListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.isLoop;
}


int32_t ListViewManager__get_ItemSum(ListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8

  if ( (byte_5971FE2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_5971FE2 = 1;
  }
  itemList = this->fields.itemList;
  if ( itemList )
    return itemList->fields._size;
  else
    return 0;
}


System_Collections_Generic_List_ListViewObject__o *ListViewManager__get_ObjectList(
        ListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5971FDF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FDF = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  v23.fields._list = 0;
  *(_QWORD *)&v23.fields._index = &v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v8 )
    {
      if ( !current )
        sub_2213CDC(v8, v9);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
      v17 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v19 = Method_System_Collections_Generic_List_ListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v17;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v17, v11, v12, v13, v14, v15, v16);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ListViewObject__o *)v3;
}


int32_t ListViewManager__get_ObjectSum(ListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int32_t i; // w19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x20
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5971FE4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FE4 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v9, 0, sizeof(v9));
  if ( !itemList )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = 0; ; i += UnityEngine_Object__op_Inequality(v7, 0, 0) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v5 )
      break;
    if ( !v9.fields._current )
      sub_2213CDC(v5, v6);
    v7 = *(UnityEngine_Object_o **)((char *)&v9.fields._current->klass + (unsigned __int64)&qword_70);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return i;
}


// local variable allocation has failed, the output may be wrong!
void ListViewManager__set_IsInput(ListViewManager_o *this, bool value, const MethodInfo *method)
{
  bool v4; // w21
  UnityEngine_Object_c *v5; // x0
  UnityEngine_Object_o *scrollBar; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UIProgressBar_o *v9; // x19
  float alpha; // s0

  v4 = value;
  if ( (byte_5971FDE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FDE = 1;
  }
  v5 = UnityEngine_Object_TypeInfo;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  this->fields.isInput = v4;
  if ( !*(&v5->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v5, value);
  v7 = UnityEngine_Object__op_Inequality(scrollBar, 0, 0);
  if ( v7 )
  {
    v9 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v9 )
      sub_2213CDC(v7, v8);
    alpha = UIProgressBar__get_alpha(v9, 0);
    UIProgressBar__set_alpha(v9, alpha, 0);
  }
}


void ListViewManager__set_IsLoop(ListViewManager_o *this, bool value, const MethodInfo *method)
{
  this->fields.isLoop = value;
}


void ListViewManager__FocusSelectItem_d__71__MoveNext(
        ListViewManager__FocusSelectItem_d__71_o *this,
        const MethodInfo *method)
{
  ListViewManager__FocusSelectItem_d__71_o *v2; // x19
  int32_t _1__state; // w8
  struct ListViewManager_o *_4__this; // x22
  struct System_Threading_CancellationTokenSource_o *source; // x20
  System_Threading_CancellationToken_o v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  Cysharp_Threading_Tasks_UniTask_o v13; // kr10_16
  struct Cysharp_Threading_Tasks_UniTask_Awaiter_o u__1; // q0
  Cysharp_Threading_Tasks_IUniTaskSource_c *klass; // x8
  __int64 v16; // x9
  int *p_offset; // x10
  __int64 v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  Cysharp_Threading_Tasks_IUniTaskSource_c *v25; // x8
  __int64 v26; // x9
  Cysharp_Threading_Tasks_IUniTaskSource_c **v27; // x10
  __int64 v28; // x0
  UnityEngine_Object_o *scrollBar; // x20
  _BOOL8 v30; // x0
  __int64 v31; // x1
  struct UIScrollBar_o *v32; // x20
  int32_t index; // w9
  struct ListViewItemSeed_o *seed; // x8
  int v35; // w21
  float x; // s8
  System_Math_c *v37; // x0
  float v38; // s8
  struct System_Collections_Generic_List_ListViewItem__o *list; // x8
  struct ListViewItemSeed_o *v40; // x9
  int size; // w20
  float v42; // s9
  UnityEngine_Component_o *scrollView; // x0
  Il2CppObject *Component_object; // x0
  __int64 v45; // x1
  __int64 v46; // x1
  float height; // s0
  UIProgressBar_o *v48; // x0
  float v49; // s0
  struct Cysharp_Threading_Tasks_UniTask_Awaiter_o v50; // q0
  ListViewManager_c *v51; // x8
  unsigned int naturalAligment; // w9
  __int64 v53; // x11
  __int64 v54; // x11
  float Float; // s0
  int v56; // w9
  struct Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *runnerPromise; // x19
  Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_c *v58; // x8
  __int64 v59; // x9
  Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_c **v60; // x10
  __int64 v61; // x0
  Cysharp_Threading_Tasks_UniTask_o task; // [xsp+10h] [xbp-70h] BYREF
  Cysharp_Threading_Tasks_UniTask_o v63; // [xsp+20h] [xbp-60h] BYREF

  v2 = this;
  if ( (byte_597200C & 1) == 0 )
  {
    sub_2213A60(&Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTask_Awaiter__ListViewManager__FocusSelectItem_d__71___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_2213A60(&EquipGraphListViewManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SupportServantEquipListViewManager_TypeInfo);
    sub_2213A60(&Cysharp_Threading_Tasks_UniTask_TypeInfo);
    this = (ListViewManager__FocusSelectItem_d__71_o *)sub_2213A60(&StringLiteral_13747/*"SvtEqScrollBarValue"*/);
    byte_597200C = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  task = (Cysharp_Threading_Tasks_UniTask_o)0LL;
  if ( _1__state )
  {
    source = v2->fields.cancellationToken.fields._source;
    if ( !*(&Cysharp_Threading_Tasks_UniTask_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Cysharp_Threading_Tasks_UniTask_TypeInfo, method);
    v6.fields._source = source;
    v63 = Cysharp_Threading_Tasks_UniTask__Yield(9, v6, 0, 0);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v63, 0, v7, v8, v9, v10, v11, v12);
    v13 = v63;
    task = v63;
    if ( !byte_597201D )
    {
      sub_2213A60(&Cysharp_Threading_Tasks_UniTask_TypeInfo);
      byte_597201D = 1;
    }
    this = (ListViewManager__FocusSelectItem_d__71_o *)Cysharp_Threading_Tasks_UniTask_TypeInfo;
    if ( !*(&Cysharp_Threading_Tasks_UniTask_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Cysharp_Threading_Tasks_UniTask_TypeInfo, method);
    if ( byte_597201E )
    {
      if ( !v13.fields.source )
        goto LABEL_22;
    }
    else
    {
      this = (ListViewManager__FocusSelectItem_d__71_o *)sub_2213A60(&Cysharp_Threading_Tasks_IUniTaskSource_TypeInfo);
      byte_597201E = 1;
      if ( !v13.fields.source )
        goto LABEL_22;
    }
    klass = v13.fields.source->klass;
    v16 = *(unsigned __int16 *)&v13.fields.source->klass->_2.rank;
    if ( *(_WORD *)&v13.fields.source->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((Cysharp_Threading_Tasks_IUniTaskSource_c **)p_offset - 1) != Cysharp_Threading_Tasks_IUniTaskSource_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_19;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_19:
      v18 = sub_224BC3C(v13.fields.source, Cysharp_Threading_Tasks_IUniTaskSource_TypeInfo, 0);
    }
    this = (ListViewManager__FocusSelectItem_d__71_o *)(*(__int64 (__fastcall **)(struct Cysharp_Threading_Tasks_IUniTaskSource_o *, _QWORD, _QWORD))v18)(
                                                         v13.fields.source,
                                                         *(unsigned int *)&v13.fields.token,
                                                         *(_QWORD *)(v18 + 8));
    if ( !(_DWORD)this )
    {
      v50 = (struct Cysharp_Threading_Tasks_UniTask_Awaiter_o)task;
      v2->fields.__1__state = 0;
      v2->fields.__u__1 = v50;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__u__1, 0, v19, v20, v21, v22, v23, v24);
      sub_307F5E4(
        &v2->fields.__t__builder,
        &task,
        v2,
        Method_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTask_Awaiter__ListViewManager__FocusSelectItem_d__71___);
      return;
    }
  }
  else
  {
    u__1 = v2->fields.__u__1;
    v2->fields.__u__1.fields.task.fields.source = 0;
    *(_QWORD *)&v2->fields.__u__1.fields.task.fields.token = 0;
    v2->fields.__1__state = -1;
    task = u__1.fields.task;
  }
LABEL_22:
  if ( !byte_597201F )
  {
    this = (ListViewManager__FocusSelectItem_d__71_o *)sub_2213A60(&Cysharp_Threading_Tasks_IUniTaskSource_TypeInfo);
    byte_597201F = 1;
  }
  if ( task.fields.source )
  {
    v25 = task.fields.source->klass;
    v26 = *(unsigned __int16 *)&task.fields.source->klass->_2.rank;
    if ( *(_WORD *)&task.fields.source->klass->_2.rank )
    {
      v27 = (Cysharp_Threading_Tasks_IUniTaskSource_c **)&v25->_1.interfaceOffsets->offset;
      while ( *(v27 - 1) != Cysharp_Threading_Tasks_IUniTaskSource_TypeInfo )
      {
        --v26;
        v27 += 2;
        if ( !v26 )
          goto LABEL_29;
      }
      v28 = (__int64)&v25->vtable[*(_DWORD *)v27 + 2];
    }
    else
    {
LABEL_29:
      v28 = sub_224BC3C(task.fields.source, Cysharp_Threading_Tasks_IUniTaskSource_TypeInfo, 2);
    }
    this = (ListViewManager__FocusSelectItem_d__71_o *)(*(__int64 (__fastcall **)(struct Cysharp_Threading_Tasks_IUniTaskSource_o *, _QWORD, _QWORD))v28)(
                                                         task.fields.source,
                                                         (unsigned __int16)task.fields.token,
                                                         *(_QWORD *)(v28 + 8));
  }
  if ( !_4__this )
    sub_2213CDC(this, method);
  scrollBar = (UnityEngine_Object_o *)_4__this->fields.scrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v30 = UnityEngine_Object__op_Inequality(scrollBar, 0, 0);
  if ( v30 )
  {
    v32 = _4__this->fields.scrollBar;
    if ( !v32 )
      sub_2213CDC(v30, v31);
    if ( v32->fields.mSize <= 0.98 )
    {
      index = v2->fields.index;
      if ( index < 0 )
      {
        v51 = _4__this->klass;
        naturalAligment = _4__this->klass->_2.naturalAligment;
        v53 = EquipGraphListViewManager_TypeInfo->_2.naturalAligment;
        if ( naturalAligment >= (unsigned int)v53
          && (EquipGraphListViewManager_c *)v51->_2.typeHierarchy[v53 - 1] == EquipGraphListViewManager_TypeInfo
          || (v54 = SupportServantEquipListViewManager_TypeInfo->_2.naturalAligment, naturalAligment >= (unsigned int)v54)
          && (SupportServantEquipListViewManager_c *)v51->_2.typeHierarchy[v54 - 1] == SupportServantEquipListViewManager_TypeInfo )
        {
          Float = UnityEngine_PlayerPrefs__GetFloat((System_String_o *)StringLiteral_13747/*"SvtEqScrollBarValue"*/, 0.0, 0);
          UIProgressBar__set_value((UIProgressBar_o *)v32, Float, 0);
          UnityEngine_PlayerPrefs__SetFloat((System_String_o *)StringLiteral_13747/*"SvtEqScrollBarValue"*/, 0.0, 0);
        }
        else
        {
          UIProgressBar__set_value((UIProgressBar_o *)_4__this->fields.scrollBar, _4__this->fields.scrollBarValue, 0);
          _4__this->fields.scrollBarValue = 0.0;
        }
      }
      else
      {
        seed = _4__this->fields.seed;
        v35 = index + 1;
        v2->fields.index = index + 1;
        if ( !seed )
          sub_2213CDC(v30, v31);
        x = seed->fields.arrangementVolume.fields.x;
        v37 = System_Math_TypeInfo;
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v31);
        v38 = ceilf((float)v35 / x);
        if ( v38 > 1.0 )
        {
          list = v2->fields.list;
          if ( !list )
            sub_2213CDC(v37, v31);
          v40 = _4__this->fields.seed;
          if ( !v40 )
            sub_2213CDC(v37, v31);
          size = list->fields._size;
          v42 = v40->fields.arrangementVolume.fields.x;
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v31);
          scrollView = (UnityEngine_Component_o *)_4__this->fields.scrollView;
          if ( !scrollView )
            sub_2213CDC(0, v31);
          Component_object = UnityEngine_Component__GetComponent_object_(
                               scrollView,
                               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
          if ( !Component_object )
            sub_2213CDC(0, v45);
          height = UIPanel__get_height((UIPanel_o *)Component_object, 0);
          v48 = (UIProgressBar_o *)_4__this->fields.scrollBar;
          if ( !v48 )
            sub_2213CDC(0, v46);
          v49 = ((v38 + 1.0) * 156.0 + -70.0 - height) / (ceilf((float)size / v42) * 156.0 - height);
          UIProgressBar__set_value(v48, v49, 0);
        }
      }
    }
  }
  v56 = (unsigned __int8)byte_5972021;
  _4__this->fields.lastSelectIndex = -1;
  v2->fields.__1__state = -2;
  if ( !v56 )
  {
    sub_2213A60(&Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_TypeInfo);
    byte_5972021 = 1;
  }
  runnerPromise = v2->fields.__t__builder.fields.runnerPromise;
  if ( runnerPromise )
  {
    v58 = runnerPromise->klass;
    v59 = *(unsigned __int16 *)&runnerPromise->klass->_2.rank;
    if ( *(_WORD *)&runnerPromise->klass->_2.rank )
    {
      v60 = (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_c **)&v58->_1.interfaceOffsets->offset;
      while ( *(v60 - 1) != Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_TypeInfo )
      {
        --v59;
        v60 += 2;
        if ( !v59 )
          goto LABEL_65;
      }
      v61 = (__int64)&v58->vtable[*(_DWORD *)v60 + 2];
    }
    else
    {
LABEL_65:
      v61 = sub_224BC3C(runnerPromise, Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_TypeInfo, 2);
    }
    (*(void (__fastcall **)(struct Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *, _QWORD))v61)(
      runnerPromise,
      *(_QWORD *)(v61 + 8));
  }
}


void ListViewManager__FocusSelectItem_d__71__SetStateMachine(
        ListViewManager__FocusSelectItem_d__71_o *this,
        System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,
        const MethodInfo *method)
{
  ;
}


void ListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597200B & 1) == 0 )
  {
    sub_2213A60(&ListViewManager___c_TypeInfo);
    byte_597200B = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ListViewManager___c_TypeInfo->static_fields->__9 = (struct ListViewManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ListViewManager___c___ctor(ListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ListViewManager___c___SortItem_b__68_0(
        ListViewManager___c_o *this,
        ListViewItem_o *a,
        ListViewItem_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_2213CDC(this, 0);
  return ListViewItem__SortCompUp(a, b, (const MethodInfo *)b);
}


int32_t ListViewManager___c___SortItem_b__68_1(
        ListViewManager___c_o *this,
        ListViewItem_o *a,
        ListViewItem_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_2213CDC(this, 0);
  return ListViewItem__SortCompDown(a, b, (const MethodInfo *)b);
}