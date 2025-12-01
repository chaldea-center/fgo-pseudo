void ListViewManager___ctor(ListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_c *v3; // x8
  ListViewSort_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_Stack_T__o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  if ( (byte_4CC8B6A & 1) == 0 )
  {
    sub_1C713B0(&ListViewSort_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Stack_GameObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_Stack_GameObject__TypeInfo);
    byte_4CC8B6A = 1;
  }
  if ( !byte_4CC0BE9 )
  {
    sub_1C713B0(&UnityEngine_Vector2_TypeInfo);
    byte_4CC0BE9 = 1;
  }
  v3 = UnityEngine_Vector2_TypeInfo;
  this->fields.clipRange = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  this->fields.clipOffset = v3->static_fields->zeroVector;
  v4 = (ListViewSort_o *)sub_1C715FC(ListViewSort_TypeInfo);
  ListViewSort___ctor(v4, 3, 1, 0);
  this->fields.sort = v4;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.sort, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v11;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.objectList, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  this->fields.isInput = 1;
  v18 = (System_Collections_Generic_Stack_T__o *)sub_1C715FC(System_Collections_Generic_Stack_GameObject__TypeInfo);
  System_Collections_Generic_Stack_object____ctor(
    v18,
    (const MethodInfo_3A751D0 *)Method_System_Collections_Generic_Stack_GameObject___ctor__);
  this->fields.objectStock = (struct System_Collections_Generic_Stack_GameObject__o *)v18;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.objectStock, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  this->fields.terminalIndex = -2;
  this->fields.lastSelectIndex = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ListViewManager__BackLoopItem(ListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  struct ListViewItem_o *centerItem; // x8
  _DWORD *Item; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct ListViewItem_o *v8; // x8
  _DWORD *v9; // x20
  UnityEngine_Object_o *v10; // x19

  if ( (byte_4CC8B54 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B54 = 1;
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
          Item = System_Collections_Generic_List_object___get_Item(
                   itemSortList,
                   centerItem->fields.sortIndex == 0,
                   (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          v8 = this->fields.centerItem;
          if ( !v8 )
            goto LABEL_17;
          v9 = Item;
          if ( !Item )
            goto LABEL_17;
          v6 = (unsigned int)(v8->fields.loopIndex - 1);
          if ( Item[7] != (_DWORD)v6 )
          {
            Item[7] = v6;
            Item = this->fields.seed;
            if ( !Item )
              goto LABEL_17;
            *(UnityEngine_Vector3_o *)(v9 + 25) = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)Item, v6, v7);
            v10 = (UnityEngine_Object_o *)*((_QWORD *)v9 + 14);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v10, 0, 0) )
            {
              Item = (_DWORD *)*((_QWORD *)v9 + 14);
              if ( Item )
              {
                ListViewObject__SetTransform((ListViewObject_o *)Item, *(UnityEngine_Vector3_o *)(v9 + 25), 0);
                return;
              }
LABEL_17:
              sub_1C71608(Item, v6);
            }
          }
        }
      }
    }
  }
}


void ListViewManager__CenterLoopItem(ListViewManager_o *this, ListViewItem_o *centerItem, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  int size; // w26
  int32_t sortIndex; // w22
  int v15; // w8
  int v16; // w28
  int32_t v17; // w20
  int32_t v18; // w23
  const MethodInfo *v19; // x2
  System_Collections_Generic_List_object__o *v20; // x24
  UnityEngine_Object_o *syncRoot; // x25
  const MethodInfo_3810448 *v22; // x2
  int32_t v23; // w26
  int32_t v24; // w23
  int32_t v25; // w21
  const MethodInfo *v26; // x2
  System_Collections_Generic_List_object__o *v27; // x22
  UnityEngine_Object_o *v28; // x24
  int32_t v29; // w8
  const MethodInfo *v30; // x3

  if ( (byte_4CC8B53 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B53 = 1;
  }
  if ( this->fields.isLoop )
  {
    itemSortList = this->fields.itemSortList;
    if ( itemSortList )
    {
      if ( centerItem && itemSortList->fields._size >= 3 )
      {
        this->fields.centerItem = centerItem;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields.centerItem,
          (int32_t)centerItem,
          (int32_t)method,
          v3,
          v4,
          v5,
          v6,
          v7);
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( !Item )
          goto LABEL_54;
        size = Item->fields._size;
        sortIndex = centerItem->fields.sortIndex;
        if ( size >= 0 )
          v15 = Item->fields._size;
        else
          v15 = size + 1;
        if ( size < 2 )
        {
          v17 = centerItem->fields.sortIndex;
        }
        else
        {
          v16 = (v15 >> 1) - 1;
          if ( sortIndex + 1 < size )
            v17 = sortIndex + 1;
          else
            v17 = 0;
          v18 = centerItem->fields.loopIndex + 1;
          while ( 1 )
          {
            Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  Item,
                                                                  v17,
                                                                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            if ( !Item )
              goto LABEL_54;
            v20 = Item;
            if ( v18 != Item->fields._version )
            {
              Item->fields._version = v18;
              Item = (System_Collections_Generic_List_object__o *)this->fields.seed;
              if ( !Item )
                goto LABEL_54;
              *(UnityEngine_Vector3_o *)((char *)&v20[2].fields._items + 4) = ListViewItemSeed__GetLocalPosition(
                                                                                (ListViewItemSeed_o *)Item,
                                                                                v18,
                                                                                v19);
              syncRoot = (UnityEngine_Object_o *)v20[2].fields._syncRoot;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(syncRoot, 0, 0) )
              {
                Item = (System_Collections_Generic_List_object__o *)v20[2].fields._syncRoot;
                if ( !Item )
                  goto LABEL_54;
                ListViewObject__SetTransform(
                  (ListViewObject_o *)Item,
                  *(UnityEngine_Vector3_o *)((char *)&v20[2].fields._items + 4),
                  0);
              }
            }
            LOBYTE(v20[2].fields._items) = this->fields.isAllDisp;
            Item = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
            if ( !v16 )
              break;
            ++v18;
            if ( v17 + 1 < size )
              ++v17;
            else
              v17 = 0;
            --v16;
            if ( !Item )
              goto LABEL_54;
          }
          if ( !Item )
LABEL_54:
            sub_1C71608(Item, v11);
        }
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v17,
                                                              (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Item )
          goto LABEL_54;
        LOBYTE(Item[2].fields._items) = 1;
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( !Item )
          goto LABEL_54;
        v22 = (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
        v23 = size - 1;
        if ( sortIndex - 1 < 0 )
          v24 = v23;
        else
          v24 = sortIndex - 1;
        if ( v24 != v17 )
        {
          v25 = centerItem->fields.loopIndex - 1;
          do
          {
            Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  Item,
                                                                  v24,
                                                                  v22);
            if ( !Item )
              goto LABEL_54;
            v27 = Item;
            if ( v25 != Item->fields._version )
            {
              Item->fields._version = v25;
              Item = (System_Collections_Generic_List_object__o *)this->fields.seed;
              if ( !Item )
                goto LABEL_54;
              *(UnityEngine_Vector3_o *)((char *)&v27[2].fields._items + 4) = ListViewItemSeed__GetLocalPosition(
                                                                                (ListViewItemSeed_o *)Item,
                                                                                v25,
                                                                                v26);
              v28 = (UnityEngine_Object_o *)v27[2].fields._syncRoot;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v28, 0, 0) )
              {
                Item = (System_Collections_Generic_List_object__o *)v27[2].fields._syncRoot;
                if ( !Item )
                  goto LABEL_54;
                ListViewObject__SetTransform(
                  (ListViewObject_o *)Item,
                  *(UnityEngine_Vector3_o *)((char *)&v27[2].fields._items + 4),
                  0);
              }
            }
            LOBYTE(v27[2].fields._items) = this->fields.isAllDisp;
            Item = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
            v29 = v24 - 1;
            if ( v24 - 1 < 0 )
              v29 = v23;
            if ( !Item )
              goto LABEL_54;
            v22 = (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
            --v25;
            sortIndex = v24;
            v24 = v29;
          }
          while ( v29 != v17 );
        }
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              sortIndex,
                                                              v22);
        if ( !Item )
          goto LABEL_54;
        LOBYTE(Item[2].fields._items) = 1;
        this->fields.terminalIndex = sortIndex;
        ListViewManager__ClippingItems(this, 0, 0, v30);
      }
    }
  }
}


void ListViewManager__CheckEmptyMessageBase(ListViewManager_o *this, bool IsActive, const MethodInfo *method)
{
  UnityEngine_GameObject_o *emptyMessageBase; // x0

  emptyMessageBase = this->fields.emptyMessageBase;
  if ( !emptyMessageBase )
    sub_1C71608(0, IsActive);
  UnityEngine_GameObject__SetActive(emptyMessageBase, IsActive, 0);
}


void ListViewManager__CheckFocusItem(
        ListViewManager_o *this,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x3
  int32_t lastSelectIndex; // w2
  System_Collections_IEnumerator_o *v8; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = 0;
  if ( (((__int64 (__fastcall *)(ListViewManager_o *, int32_t *, System_Collections_Generic_List_ListViewItem__o *, _QWORD, const MethodInfo *))this->klass->vtable._6_GetFocusItemIndex.methodPtr)(
          this,
          &v9,
          list,
          (unsigned int)sum,
          this->klass->vtable._6_GetFocusItemIndex.method)
      & 1) != 0 )
  {
    lastSelectIndex = v9;
    if ( v9 < 0 )
    {
      lastSelectIndex = this->fields.lastSelectIndex;
      v9 = lastSelectIndex;
    }
    v8 = ListViewManager__FocusSelectItem(this, list, lastSelectIndex, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v8, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ListViewManager__CheckScroll(ListViewManager_o *this, int32_t scaleType, const MethodInfo *method)
{
  ListViewManager_o *v4; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  struct ListViewItemSeed_o *v6; // x9
  float v7; // s8
  int v8; // s9
  float v9; // s0
  float v10; // s1
  struct ListViewItemSeed_o *seed; // x9
  float x; // s8
  int size; // s9
  const MethodInfo *v14; // x1

  v4 = this;
  if ( (byte_4CC8B68 & 1) == 0 )
  {
    this = (ListViewManager_o *)sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4CC8B68 = 1;
  }
  itemSortList = v4->fields.itemSortList;
  if ( !itemSortList )
  {
    this = (ListViewManager_o *)v4->fields.scrollBar;
    if ( this )
    {
      this = (ListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( this )
      {
LABEL_19:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        return;
      }
    }
    goto LABEL_21;
  }
  if ( (unsigned int)scaleType < 2 )
  {
    seed = v4->fields.seed;
    if ( seed )
    {
      this = (ListViewManager_o *)v4->fields.scrollBar;
      if ( this )
      {
        x = seed->fields.arrangementVolume.fields.x;
        size = itemSortList->fields._size;
        this = (ListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( this )
        {
          v9 = (float)size;
          v10 = x + x;
LABEL_17:
          if ( v10 < v9 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
            ListViewManager__CheckVerticalScrollBar(v4, v14);
            return;
          }
          goto LABEL_19;
        }
      }
    }
LABEL_21:
    sub_1C71608(this, *(_QWORD *)&scaleType);
  }
  if ( (scaleType & 0xFFFFFFFE) == 2 )
  {
    v6 = v4->fields.seed;
    if ( v6 )
    {
      this = (ListViewManager_o *)v4->fields.scrollBar;
      if ( this )
      {
        v7 = v6->fields.arrangementVolume.fields.x;
        v8 = itemSortList->fields._size;
        this = (ListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( this )
        {
          v9 = (float)v8;
          v10 = v7 * 3.0;
          goto LABEL_17;
        }
      }
    }
    goto LABEL_21;
  }
}


void ListViewManager__CheckSortButton(ListViewManager_o *this, bool IsActive, const MethodInfo *method)
{
  UnityEngine_GameObject_o *SortObject; // x0

  SortObject = this->fields.SortObject;
  if ( !SortObject )
    sub_1C71608(0, IsActive);
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
  if ( (byte_4CC8B67 & 1) == 0 )
  {
    this = (ListViewManager_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B67 = 1;
  }
  scrollView = v2->fields.scrollView;
  if ( !scrollView )
    goto LABEL_15;
  verticalScrollBar = (UnityEngine_Object_o *)scrollView->fields.verticalScrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        if ( !LODWORD(this->fields.sortOrderSprite)
          || (this = (ListViewManager_o *)((__int64 (__fastcall *)(ListViewManager_o *, const MethodInfo *))this->klass->vtable._6_GetFocusItemIndex.methodPtr)(
                                            this,
                                            this->klass->vtable._6_GetFocusItemIndex.method),
              v6 = 0.0,
              ((unsigned __int8)this & 1) != 0) )
        {
          v6 = 1.0;
        }
        if ( sortKindLabel )
        {
          UIProgressBar__set_alpha((UIProgressBar_o *)sortKindLabel, v6, 0);
          return;
        }
      }
    }
LABEL_15:
    sub_1C71608(this, method);
  }
}


void ListViewManager__ClearScrollBarValue(ListViewManager_o *this, bool clearMaterialIdx, const MethodInfo *method)
{
  if ( (byte_4CC8B4D & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_13200/*"SvtEqScrollBarValue"*/);
    byte_4CC8B4D = 1;
  }
  UnityEngine_PlayerPrefs__SetFloat((System_String_o *)StringLiteral_13200/*"SvtEqScrollBarValue"*/, 0.0, 0);
  this->fields.scrollBarValue = 0.0;
  if ( clearMaterialIdx )
    this->fields.lastSelectIndex = -1;
}


bool ListViewManager__ClippingItem(ListViewManager_o *this, ListViewObject_o *obj, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4CC8B4E & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B4E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0, 0);
  if ( v5 )
    return 0;
  if ( !obj )
    sub_1C71608(v5, v6);
  return ListViewManager__ClippingItem_44112976(this, obj->fields.linkItem, v7);
}


bool ListViewManager__ClippingItem_44112976(ListViewManager_o *this, ListViewItem_o *item, const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  float x; // s3
  float v7; // s0
  float v8; // s4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( !item )
    return 0;
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(scrollView, 0)) == 0 )
    sub_1C71608(scrollView, item);
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0);
  x = item->fields.basePosition.fields.x;
  v7 = this->fields.clipOffset.fields.x - localPosition.fields.x;
  v8 = this->fields.clipRange.fields.x * 0.5;
  return x >= (float)(v7 - v8)
      && x <= (float)(v7 + v8)
      && item->fields.basePosition.fields.y <= (float)((float)(this->fields.clipOffset.fields.y - localPosition.fields.y)
                                                     + (float)(this->fields.clipRange.fields.y * 0.5))
      && item->fields.basePosition.fields.y >= (float)((float)(this->fields.clipOffset.fields.y - localPosition.fields.y)
                                                     - (float)(this->fields.clipRange.fields.y * 0.5));
}


void ListViewManager__ClippingItems(
        ListViewManager_o *this,
        bool isIndicatorUpdate,
        bool isCenterCheck,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int128 v8; // q12
  struct ListViewItem_o *centerItem; // x27
  struct ListViewItem_o **p_centerItem; // x22
  unsigned __int64 terminalIndex; // x1
  void *scrollView; // x0
  float v16; // s13
  float v17; // s14
  float v18; // s15
  float v19; // s10
  int v20; // w8
  const MethodInfo *v21; // x2
  int32_t loopIndex; // w8
  int32_t v23; // w9
  void *v24; // x23
  int v25; // w9
  float v26; // s11
  float v27; // s12
  int v28; // w24
  float x; // s8
  float y; // s9
  float v31; // s0
  float v32; // s0
  float v33; // s12
  float v34; // s11
  bool canMoveHorizontally; // w8
  float v36; // s12
  float v37; // s11
  bool canMoveVertically; // w0
  float v39; // s0
  float v40; // s1
  UnityEngine_Object_o *v41; // x24
  UnityEngine_Object_o *v42; // x21
  int32_t v43; // w29
  int32_t v44; // w25
  char *v45; // x23
  float v46; // s0
  float v47; // s1
  char *v48; // x24
  _BOOL4 v49; // w9
  _BOOL4 v50; // w10
  float v51; // s1
  int v52; // w9
  int32_t v53; // w9
  const MethodInfo *v54; // x2
  _BYTE *v55; // x24
  UnityEngine_Object_o *v56; // x26
  int32_t v57; // w1
  const MethodInfo *v58; // x2
  _BYTE *v59; // x23
  UnityEngine_Object_o *v60; // x26
  int32_t v61; // w23
  UnityEngine_Object_o *v62; // x24
  __int64 v63; // x8
  const MethodInfo *v64; // x2
  struct ListViewItem_o **p_horizontalItem; // x24
  struct ListViewItem_o **p_verticalItem; // x23
  float v67; // s8
  float v68; // s11
  __int128 v69; // q9
  _BOOL8 v70; // x0
  __int64 v71; // x1
  ListViewItem_o *current; // x25
  float v73; // s8
  float v74; // s11
  _BOOL4 v75; // w20
  Il2CppClass *klass; // x26
  const MethodInfo *v77; // x2
  ListViewObject_o *viewObject; // x1
  UnityEngine_Object_o *v79; // x26
  __int64 v80; // x1
  UIScrollView_o *v81; // x0
  __int64 v82; // x1
  bool v83; // w26
  UIScrollView_o *v84; // x0
  bool v85; // w0
  char v86; // w2
  int32_t v87; // w3
  System_String_o *v88; // x4
  int32_t v89; // w5
  int64_t v90; // x6
  System_String_o *v91; // x7
  float v92; // s0
  char v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  char v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  char v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UnityEngine_Object_o *indicator; // x21
  void (*v113)(void); // x9
  float position; // [xsp+0h] [xbp-F0h]
  float v115; // [xsp+4h] [xbp-ECh]
  float v116; // [xsp+4h] [xbp-ECh]
  float v117; // [xsp+8h] [xbp-E8h]
  float v118; // [xsp+Ch] [xbp-E4h]
  bool v119; // [xsp+10h] [xbp-E0h]
  float v120; // [xsp+14h] [xbp-DCh]
  float v121; // [xsp+14h] [xbp-DCh]
  System_Collections_Generic_List_Enumerator_object__o v122; // [xsp+18h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v123; // [xsp+30h] [xbp-C0h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v125; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v126; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC8B52 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B52 = 1;
  }
  memset(&v123, 0, sizeof(v123));
  centerItem = this->fields.centerItem;
  p_centerItem = &this->fields.centerItem;
  this->fields.centerItem = 0;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.centerItem,
    0,
    isCenterCheck,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  if ( this->fields.itemSortList )
  {
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_108;
    v119 = isIndicatorUpdate;
    scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0);
    if ( !scrollView )
      goto LABEL_108;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0);
    v117 = this->fields.clipOffset.fields.x - localPosition.fields.x;
    v118 = this->fields.clipOffset.fields.y - localPosition.fields.y;
    localPosition.fields.x = this->fields.clipRange.fields.x * 0.5;
    localPosition.fields.y = this->fields.clipRange.fields.y * 0.5;
    v16 = v117 - localPosition.fields.x;
    v17 = v117 + localPosition.fields.x;
    v18 = v118 + localPosition.fields.y;
    v19 = v118 - localPosition.fields.y;
    if ( this->fields.isLoop )
    {
      terminalIndex = (unsigned int)this->fields.terminalIndex;
      if ( (terminalIndex & 0x80000000) == 0 )
      {
        scrollView = this->fields.itemSortList;
        if ( !scrollView )
          goto LABEL_108;
        v20 = *((_DWORD *)scrollView + 6);
        if ( v20 >= 3 )
        {
          if ( (int)terminalIndex <= 0 )
            v43 = *((_DWORD *)scrollView + 6);
          else
            v43 = this->fields.terminalIndex;
          scrollView = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)scrollView,
                         terminalIndex,
                         (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !this->fields.itemSortList )
            goto LABEL_108;
          v44 = v43 - 1;
          v45 = (char *)scrollView;
          scrollView = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)this->fields.itemSortList,
                         v43 - 1,
                         (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !v45 )
            goto LABEL_108;
          v47 = *((float *)v45 + 25);
          v46 = *((float *)v45 + 26);
          v48 = (char *)scrollView;
          v49 = v47 < v16;
          v50 = v47 > v17;
          if ( !scrollView )
            goto LABEL_108;
          v51 = *((float *)scrollView + 26);
          v52 = v49 || v50 || v46 > v18;
          if ( v46 < v19
            || v52 == 1
            || v51 < v19
            || *((float *)scrollView + 25) < v16
            || *((float *)scrollView + 25) > v17
            || v51 > v18 )
          {
            if ( v52 & 1 | (v46 < v19) )
            {
              if ( *((float *)scrollView + 25) < v16 || *((float *)scrollView + 25) > v17 || v51 > v18 || v51 < v19 )
                goto LABEL_89;
              scrollView = this->fields.itemSortList;
              if ( !scrollView )
                goto LABEL_108;
              v53 = this->fields.terminalIndex;
              v44 = v53 < *((_DWORD *)scrollView + 6) - 1 ? v53 + 1 : 0;
              scrollView = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)scrollView,
                             v44,
                             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              v48[96] = this->fields.isAllDisp;
              v45[96] = 1;
              terminalIndex = (unsigned int)(*((_DWORD *)v48 + 7) + 1);
              *((_DWORD *)v45 + 7) = terminalIndex;
              if ( !this->fields.seed )
                goto LABEL_108;
              v55 = scrollView;
              *(UnityEngine_Vector3_o *)(v45 + 100) = ListViewItemSeed__GetLocalPosition(
                                                        this->fields.seed,
                                                        terminalIndex,
                                                        v54);
              v56 = (UnityEngine_Object_o *)*((_QWORD *)v45 + 14);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              scrollView = (void *)UnityEngine_Object__op_Inequality(v56, 0, 0);
              if ( ((unsigned __int8)scrollView & 1) != 0 )
              {
                scrollView = (void *)*((_QWORD *)v45 + 14);
                if ( !scrollView )
                  goto LABEL_108;
                ListViewObject__SetTransform((ListViewObject_o *)scrollView, *(UnityEngine_Vector3_o *)(v45 + 100), 0);
              }
              if ( !v55 )
                goto LABEL_108;
              v55[96] = 1;
            }
            else
            {
              if ( v43 <= 1 )
              {
                scrollView = this->fields.itemSortList;
                if ( !scrollView )
                  goto LABEL_108;
                v57 = *((_DWORD *)scrollView + 6) - 1;
              }
              else
              {
                scrollView = this->fields.itemSortList;
                if ( !scrollView )
                  goto LABEL_108;
                v57 = v43 - 2;
              }
              scrollView = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)scrollView,
                             v57,
                             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              v45[96] = this->fields.isAllDisp;
              v48[96] = 1;
              terminalIndex = (unsigned int)(*((_DWORD *)v45 + 7) - 1);
              *((_DWORD *)v48 + 7) = terminalIndex;
              if ( !this->fields.seed )
                goto LABEL_108;
              v59 = scrollView;
              *(UnityEngine_Vector3_o *)(v48 + 100) = ListViewItemSeed__GetLocalPosition(
                                                        this->fields.seed,
                                                        terminalIndex,
                                                        v58);
              v60 = (UnityEngine_Object_o *)*((_QWORD *)v48 + 14);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              scrollView = (void *)UnityEngine_Object__op_Inequality(v60, 0, 0);
              if ( ((unsigned __int8)scrollView & 1) != 0 )
              {
                scrollView = (void *)*((_QWORD *)v48 + 14);
                if ( !scrollView )
                  goto LABEL_108;
                ListViewObject__SetTransform((ListViewObject_o *)scrollView, *(UnityEngine_Vector3_o *)(v48 + 100), 0);
              }
              if ( !v59 )
                goto LABEL_108;
              v59[96] = 1;
            }
            this->fields.terminalIndex = v44;
          }
        }
        else if ( centerItem && v20 == 2 )
        {
          scrollView = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)scrollView,
                         centerItem->fields.index == 0,
                         (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !scrollView )
            goto LABEL_108;
          loopIndex = centerItem->fields.loopIndex;
          v23 = *((_DWORD *)scrollView + 7);
          v24 = scrollView;
          scrollView = this->fields.seed;
          v25 = loopIndex < v23 ? -1 : 1;
          if ( !scrollView )
            goto LABEL_108;
          v26 = *((float *)v24 + 25);
          v27 = *((float *)v24 + 26);
          v28 = v25 + loopIndex;
          v125 = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)scrollView, v25 + loopIndex, v21);
          position = v125.fields.z;
          x = v125.fields.x;
          y = v125.fields.y;
          scrollView = this->fields.scrollView;
          v31 = v27 - v118;
          if ( v27 <= v118 )
            v31 = v118 - v27;
          v120 = v31;
          v32 = v125.fields.y - v118;
          if ( v125.fields.y <= v118 )
            v32 = v118 - v125.fields.y;
          v115 = v32;
          if ( !scrollView )
            goto LABEL_108;
          v33 = x <= v117 ? v117 - x : x - v117;
          v34 = v26 <= v117 ? v117 - v26 : v26 - v117;
          canMoveHorizontally = UIScrollView__get_canMoveHorizontally((UIScrollView_o *)scrollView, 0);
          scrollView = this->fields.scrollView;
          v36 = canMoveHorizontally ? v33 + 0.0 : 0.0;
          v37 = canMoveHorizontally ? v34 + 0.0 : 0.0;
          if ( !scrollView )
            goto LABEL_108;
          canMoveVertically = UIScrollView__get_canMoveVertically((UIScrollView_o *)scrollView, 0);
          v39 = v120 + v37;
          v40 = v115 + v36;
          if ( !canMoveVertically )
          {
            v40 = v36;
            v39 = v37;
          }
          if ( v40 < v39 )
          {
            *((_DWORD *)v24 + 7) = v28;
            *((float *)v24 + 25) = x;
            *((float *)v24 + 26) = y;
            v41 = (UnityEngine_Object_o *)*((_QWORD *)v24 + 14);
            *((float *)v24 + 27) = position;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v41, 0, 0) )
            {
              scrollView = (void *)*((_QWORD *)v24 + 14);
              if ( !scrollView )
                goto LABEL_108;
              v126.fields.z = position;
              v126.fields.x = x;
              v126.fields.y = y;
              ListViewObject__SetTransform((ListViewObject_o *)scrollView, v126, 0);
            }
          }
        }
      }
    }
LABEL_89:
    scrollView = this->fields.itemSortList;
    if ( this->fields.execObjectExtraFlag )
    {
      if ( !scrollView )
        goto LABEL_108;
      v61 = 0;
      while ( v61 < *((_DWORD *)scrollView + 6) )
      {
        scrollView = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)scrollView,
                       v61,
                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !scrollView )
          goto LABEL_108;
        v62 = (UnityEngine_Object_o *)*((_QWORD *)scrollView + 14);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v62, 0, 0) )
        {
          scrollView = this->fields.itemSortList;
          if ( !scrollView )
            goto LABEL_108;
          scrollView = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)scrollView,
                         v61,
                         (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !scrollView )
            goto LABEL_108;
          if ( !*((_BYTE *)scrollView + 96) )
          {
            scrollView = this->fields.itemSortList;
            if ( !scrollView )
              goto LABEL_108;
            scrollView = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)scrollView,
                           v61,
                           (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            if ( !scrollView )
              goto LABEL_108;
            v63 = *((_QWORD *)scrollView + 14);
            if ( !v63 )
              goto LABEL_108;
            if ( !*(_BYTE *)(v63 + 112) )
            {
              scrollView = this->fields.itemSortList;
              if ( !scrollView )
                goto LABEL_108;
              scrollView = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)scrollView,
                             v61,
                             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !scrollView )
                goto LABEL_108;
              ListViewManager__ReleaseObjectExtra(this, *((ListViewObject_o **)scrollView + 14), v64);
            }
          }
        }
        scrollView = this->fields.itemSortList;
        ++v61;
        if ( !scrollView )
          goto LABEL_108;
      }
    }
    else if ( !scrollView )
    {
      goto LABEL_108;
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v122,
      (System_Collections_Generic_List_object__o *)scrollView,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    p_horizontalItem = &this->fields.horizontalItem;
    p_verticalItem = &this->fields.verticalItem;
    v67 = 0.0;
    v68 = 0.0;
    v123 = v122;
    LODWORD(v8) = 0;
LABEL_111:
    v116 = v67;
LABEL_112:
    v69 = v8;
    v121 = v68;
LABEL_113:
    v8 = v69;
    while ( 1 )
    {
      v70 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v123,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v70 )
        break;
      current = (ListViewItem_o *)v123.fields._current;
      if ( !v123.fields._current )
        sub_1C71608(v70, v71);
      v74 = *((float *)&v123.fields._current[6].klass + 1);
      v73 = *(float *)&v123.fields._current[6].monitor;
      if ( LOBYTE(v123.fields._current[6].klass) )
        v75 = 1;
      else
        v75 = v73 >= v19 && v74 >= v16 && v74 <= v17 && v73 <= v18;
      klass = v123.fields._current[7].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0, 0) )
      {
        if ( v75 )
          ListViewManager__MakeObject(this, current, v77);
      }
      else if ( !v75 )
      {
        viewObject = current->fields.viewObject;
        if ( this->fields.execObjectExtraFlag )
          ListViewManager__ReleaseObjectExtra(this, viewObject, v77);
        else
          ListViewManager__ReleaseObject_44113692(this, viewObject, v77);
      }
      v79 = (UnityEngine_Object_o *)current->fields.viewObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v79, 0, 0) )
      {
        v81 = this->fields.scrollView;
        if ( !v81 )
          sub_1C71608(0, v80);
        v83 = UIScrollView__get_canMoveHorizontally(v81, 0);
        v84 = this->fields.scrollView;
        if ( !v84 )
          sub_1C71608(0, v82);
        v85 = UIScrollView__get_canMoveVertically(v84, 0);
        if ( (current->fields.index & 0x80000000) == 0 )
        {
          if ( v74 <= v117 )
            v68 = v117 - v74;
          else
            v68 = v74 - v117;
          if ( v73 <= v118 )
            v67 = v118 - v73;
          else
            v67 = v73 - v118;
          v92 = v68 + 0.0;
          if ( !v83 )
            v92 = 0.0;
          if ( v85 )
            *(float *)&v69 = v67 + v92;
          else
            *(float *)&v69 = v92;
          if ( !*p_centerItem )
          {
            *p_centerItem = current;
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)&this->fields.centerItem,
              (int32_t)current,
              v86,
              v87,
              v88,
              v89,
              v90,
              v91);
            *p_horizontalItem = current;
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)&this->fields.horizontalItem,
              (int32_t)current,
              v93,
              v94,
              v95,
              v96,
              v97,
              v98);
            *p_verticalItem = current;
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)&this->fields.verticalItem,
              (int32_t)current,
              v99,
              v100,
              v101,
              v102,
              v103,
              v104);
            goto LABEL_113;
          }
          if ( *(float *)&v69 < *(float *)&v8 )
          {
            *p_centerItem = current;
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)&this->fields.centerItem,
              (int32_t)current,
              v86,
              v87,
              v88,
              v89,
              v90,
              v91);
            v8 = v69;
          }
          if ( v68 >= v121 )
          {
            v68 = v121;
          }
          else
          {
            *p_horizontalItem = current;
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)&this->fields.horizontalItem,
              (int32_t)current,
              v86,
              v87,
              v88,
              v89,
              v90,
              v91);
          }
          if ( v67 < v116 )
          {
            *p_verticalItem = current;
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)&this->fields.verticalItem,
              (int32_t)current,
              v86,
              v87,
              v88,
              v89,
              v90,
              v91);
            goto LABEL_111;
          }
          goto LABEL_112;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v123,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemSortList = this->fields.itemSortList;
    if ( !itemSortList )
      goto LABEL_108;
    if ( itemSortList->fields._size <= 1 )
    {
      *p_horizontalItem = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.horizontalItem, 0, v105, v106, v107, v108, v109, v110);
    }
    else
    {
      if ( v121 > 10.0 )
      {
        *p_horizontalItem = 0;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.horizontalItem, 0, v105, v106, v107, v108, v109, v110);
      }
      if ( v116 <= 10.0 )
      {
        if ( isCenterCheck )
        {
LABEL_161:
          indicator = (UnityEngine_Object_o *)this->fields.indicator;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(indicator, 0, 0) || !v119 )
            goto LABEL_177;
          if ( centerItem != *p_centerItem )
          {
            scrollView = this->fields.indicator;
            if ( *p_centerItem )
            {
              if ( !scrollView )
                goto LABEL_108;
              v113 = *(void (**)(void))(*(_QWORD *)scrollView + 392LL);
            }
            else
            {
              if ( !scrollView )
                goto LABEL_108;
              v113 = *(void (**)(void))(*(_QWORD *)scrollView + 392LL);
            }
            v113();
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
LABEL_177:
            if ( this->fields.execObjectExtraFlag )
              ListViewManager__PushObjectOutSideClipPosition(this, (const MethodInfo *)terminalIndex);
            return;
          }
LABEL_108:
          sub_1C71608(scrollView, terminalIndex);
        }
LABEL_160:
        *p_centerItem = 0;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.centerItem, 0, v105, v106, v107, v108, v109, v110);
        goto LABEL_161;
      }
    }
    *p_verticalItem = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.verticalItem, 0, v105, v106, v107, v108, v109, v110);
    if ( isCenterCheck )
      goto LABEL_161;
    goto LABEL_160;
  }
  if ( centerItem )
  {
    v42 = (UnityEngine_Object_o *)this->fields.indicator;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v42, 0, 0) && isIndicatorUpdate )
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
      goto LABEL_108;
    }
  }
}


void ListViewManager__ClippingTerminationItem(ListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x23
  UnityEngine_Object_o *klass; // x20
  const MethodInfo *v8; // x2
  _BOOL8 v9; // x0
  __int64 v10; // x1
  ListViewItem_o *v11; // x20
  Il2CppClass *v12; // x21
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4CC8B51 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B51 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  itemSortList = this->fields.itemSortList;
  if ( itemSortList )
  {
    if ( this->fields.isLoop )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)itemSortList,
        (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v15 = v14;
      while ( 1 )
      {
        v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v15,
               (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v4 )
          break;
        current = v15.fields._current;
        if ( !v15.fields._current )
          sub_1C71608(v4, v5);
        LOBYTE(v15.fields._current[6].klass) = 0;
        klass = (UnityEngine_Object_o *)current[7].klass;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
          ListViewManager__ReleaseObject_44113692(this, (ListViewObject_o *)current[7].klass, v8);
      }
    }
    else
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)itemSortList,
        (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v15 = v14;
      while ( 1 )
      {
        v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v15,
               (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v9 )
          break;
        v11 = (ListViewItem_o *)v15.fields._current;
        if ( !v15.fields._current )
          sub_1C71608(v9, v10);
        v12 = v15.fields._current[7].klass;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v12, 0, 0) )
        {
          if ( v11->fields.isTermination )
            ListViewManager__MakeObject(this, v11, v13);
        }
        else if ( !v11->fields.isTermination )
        {
          ListViewManager__ReleaseObject_44113692(this, v11->fields.viewObject, v13);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ListViewManager__CreateList(ListViewManager_o *this, int32_t sum, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Component_o *transform; // x0
  __int64 v14; // x1
  struct UIScrollView_o *v15; // x8
  struct UIPanel_o *mPanel; // x20
  float x; // s8
  float y; // s9
  System_Collections_Generic_List_object__o *dropList; // x0
  Il2CppObject *current; // x19
  _BOOL8 v21; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC8B41 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem___ctor___78588648);
    sub_1C713B0(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B41 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  ListViewManager__DestroyList(this, *(const MethodInfo **)&sum);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor_58785620(
    v5,
    sum,
    (const MethodInfo_380FF54 *)Method_System_Collections_Generic_List_ListViewItem___ctor___78588648);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v5;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.itemList, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v15 = this->fields.scrollView;
    if ( !v15 )
      goto LABEL_26;
    mPanel = v15->fields.mPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            v24.fields.x = -x;
            v24.fields.y = -y;
            v24.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v24, 0);
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
      sub_1C71608(transform, v14);
    }
  }
LABEL_15:
  dropList = (System_Collections_Generic_List_object__o *)this->fields.dropList;
  if ( dropList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      dropList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_UIDragDropListViewSurface__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__MoveNext__) )
    {
      current = v23.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v21 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
      if ( v21 )
      {
        if ( !current )
          sub_1C71608(v21, v22);
        UIDragDropListViewSurface__DragEnd((UIDragDropListViewSurface_o *)current, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__Dispose__);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v5, 0);
}


void ListViewManager__DestroyList(ListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  __int64 v27; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  Il2CppObject *current; // x21
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct System_Collections_Generic_List_GameObject__o *v35; // x8
  int32_t size; // w2
  int v37; // w9
  Il2CppObject *v38; // x21
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v40; // x20
  UnityEngine_Object_o *scrollBar; // x20
  UnityEngine_Object_o *emptyMessageBase; // x20
  UnityEngine_Object_o *indicator; // x20
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CC8B42 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Stack_GameObject__Pop__);
    sub_1C713B0(&Method_System_Collections_Generic_Stack_GameObject__get_Count__);
    byte_4CC8B42 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  this->fields.centerItem = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.centerItem, 0, v2, v3, v4, v5, v6, v7);
  this->fields.horizontalItem = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.horizontalItem, 0, v9, v10, v11, v12, v13, v14);
  this->fields.verticalItem = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.verticalItem, 0, v15, v16, v17, v18, v19, v20);
  this->fields.itemSortList = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.itemSortList, 0, v21, v22, v23, v24, v25, v26);
  if ( this->fields.itemList )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    if ( !objectList )
      goto LABEL_18;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v44,
      objectList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v45 = v44;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v45,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v45.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71724608((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v45,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v35 = this->fields.objectList;
    if ( !v35 )
      goto LABEL_18;
    size = v35->fields._size;
    v37 = v35->fields._version + 1;
    v35->fields._size = 0;
    v35->fields._version = v37;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v35->fields._items, 0, size, 0);
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectStock;
    if ( !objectList )
      goto LABEL_18;
    while ( objectList->fields._size > 0 )
    {
      v38 = System_Collections_Generic_Stack_object___Pop(
              (System_Collections_Generic_Stack_T__o *)objectList,
              (const MethodInfo_3A75798 *)Method_System_Collections_Generic_Stack_GameObject__Pop__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71724608((UnityEngine_Object_o *)v38, 0);
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectStock;
      if ( !objectList )
        goto LABEL_18;
    }
    this->fields.itemList = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.itemList, 0, size, v30, v31, v32, v33, v34);
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.scrollView;
    if ( !objectList )
      goto LABEL_18;
    UIScrollView__DisableSpring((UIScrollView_o *)objectList, 0);
    v40 = this->fields.scrollView;
    if ( !byte_4CC0D09 )
    {
      objectList = (System_Collections_Generic_List_object__o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      byte_4CC0D09 = 1;
    }
    if ( !v40 )
      goto LABEL_18;
    UIScrollView__set_currentMomentum(v40, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.scrollBar;
    if ( !objectList )
      goto LABEL_18;
    UIProgressBar__set_alpha((UIProgressBar_o *)objectList, 0.0, 0);
  }
  emptyMessageBase = (UnityEngine_Object_o *)this->fields.emptyMessageBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(emptyMessageBase, 0, 0) )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.emptyMessageBase;
    if ( !objectList )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)objectList, 0, 0);
  }
  indicator = (UnityEngine_Object_o *)this->fields.indicator;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C71608(objectList, v27);
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
  __int64 Instance; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_object__o *v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w21
  struct ListViewItem_o **p_topItem; // x25
  bool v22; // w22
  struct ListViewItem_o **p_bottomItem; // x26
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct ListViewItem_o **p_leftItem; // x27
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct ListViewItem_o **p_rightItem; // x28
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  const MethodInfo_3810448 **v50; // x20
  Il2CppObject *Item; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  Il2CppObject *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  Il2CppObject *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  Il2CppObject *v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  int32_t v79; // w29
  const MethodInfo_3810448 **v80; // x21
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  struct ListViewItem_o *v87; // x20
  struct System_Object_array *items; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass **v91; // x0
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  float y; // s0
  struct ListViewItem_o **v99; // x0
  float x; // s0
  struct ListViewItem_o **v101; // x0
  UnityEngine_Object_o *emptyMessageBase; // x20
  UnityEngine_Object_o *indicator; // x20
  UnityEngine_Object_o *scrollView; // x20
  const MethodInfo *v105; // x3
  UnityEngine_Object_o *v106; // x20
  UIScrollView_o *v107; // x20
  const MethodInfo *v108; // x4
  const MethodInfo *v109; // x2
  ListViewItem_o *v110; // x1
  const MethodInfo *v111; // x2
  int32_t v112; // [xsp+0h] [xbp-70h]
  int32_t index; // [xsp+8h] [xbp-68h]
  int v114; // [xsp+Ch] [xbp-64h]

  if ( (byte_4CC8B48 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    byte_4CC8B48 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)Instance, 0);
  ListViewManager__ReleaseObject(this, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_73;
  size = itemList->fields._size;
  this->fields.topItem = 0;
  p_topItem = &this->fields.topItem;
  v22 = isAllDisp;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.topItem, 0, v13, v14, v15, v16, v17, v18);
  this->fields.bottomItem = 0;
  p_bottomItem = &this->fields.bottomItem;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.bottomItem, 0, v24, v25, v26, v27, v28, v29);
  this->fields.leftItem = 0;
  p_leftItem = &this->fields.leftItem;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.leftItem, 0, v31, v32, v33, v34, v35, v36);
  p_rightItem = &this->fields.rightItem;
  this->fields.rightItem = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.rightItem, 0, v38, v39, v40, v41, v42, v43);
  index = size - 1;
  v114 = size;
  this->fields.isAllDisp = isAllDisp;
  if ( size < 1 )
    goto LABEL_44;
  Instance = (__int64)this->fields.scrollView;
  if ( !Instance )
    goto LABEL_73;
  v50 = (const MethodInfo_3810448 **)&Method_System_Collections_Generic_List_ListViewItem__get_Item__;
  if ( UIScrollView__get_canMoveHorizontally((UIScrollView_o *)Instance, 0) )
  {
    Instance = (__int64)this->fields.itemList;
    if ( !Instance )
      goto LABEL_73;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             0,
             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this->fields.leftItem = (struct ListViewItem_o *)Item;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.leftItem, (int32_t)Item, v52, v53, v54, v55, v56, v57);
    Instance = (__int64)this->fields.itemList;
    if ( !Instance )
      goto LABEL_73;
    v58 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)Instance,
            0,
            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    *p_rightItem = (struct ListViewItem_o *)v58;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.rightItem, (int32_t)v58, v59, v60, v61, v62, v63, v64);
  }
  Instance = (__int64)this->fields.scrollView;
  if ( !Instance )
    goto LABEL_73;
  v112 = addEmptyTarminal;
  if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)Instance, 0) )
  {
    Instance = (__int64)this->fields.itemList;
    if ( !Instance )
      goto LABEL_73;
    v65 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)Instance,
            0,
            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this->fields.topItem = (struct ListViewItem_o *)v65;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.topItem, (int32_t)v65, v66, v67, v68, v69, v70, v71);
    Instance = (__int64)this->fields.itemList;
    if ( !Instance )
      goto LABEL_73;
    v72 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)Instance,
            0,
            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    *p_bottomItem = (struct ListViewItem_o *)v72;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.bottomItem, (int32_t)v72, v73, v74, v75, v76, v77, v78);
  }
  v79 = 0;
  do
  {
    Instance = (__int64)this->fields.itemList;
    if ( !Instance )
      goto LABEL_73;
    v80 = v50;
    Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)Instance,
                          v79,
                          *v50);
    if ( !Instance )
      goto LABEL_73;
    v87 = (struct ListViewItem_o *)Instance;
    *(_DWORD *)(Instance + 24) = v79;
    *(_DWORD *)(Instance + 28) = v79;
    *(_BYTE *)(Instance + 96) = v22;
    if ( !v12 )
      goto LABEL_73;
    items = v12->fields._items;
    v89 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++v12->fields._version;
    if ( !items )
      goto LABEL_73;
    v90 = v12->fields._size;
    if ( (unsigned int)v90 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        (Il2CppObject *)Instance,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
    }
    else
    {
      v91 = &items->obj.klass + v90;
      v12->fields._size = v90 + 1;
      v91[4] = (Il2CppClass *)v87;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v91 + 4), (int32_t)v87, v81, v82, v83, v84, v85, v86);
    }
    if ( *p_topItem )
    {
      y = v87->fields.basePosition.fields.y;
      if ( y > (*p_topItem)->fields.basePosition.fields.y )
      {
        *p_topItem = v87;
        v99 = &this->fields.topItem;
LABEL_30:
        sub_1C71354((GrandQuestFolderBoardItem_o *)v99, (int32_t)v87, v92, v93, v94, v95, v96, v97);
        goto LABEL_31;
      }
      if ( !*p_bottomItem )
        goto LABEL_73;
      if ( y < (*p_bottomItem)->fields.basePosition.fields.y )
      {
        v99 = &this->fields.bottomItem;
        *p_bottomItem = v87;
        goto LABEL_30;
      }
    }
LABEL_31:
    if ( !*p_rightItem )
      goto LABEL_38;
    x = v87->fields.basePosition.fields.x;
    if ( x > (*p_rightItem)->fields.basePosition.fields.x )
    {
      *p_rightItem = v87;
      v101 = &this->fields.rightItem;
LABEL_37:
      sub_1C71354((GrandQuestFolderBoardItem_o *)v101, (int32_t)v87, v92, v93, v94, v95, v96, v97);
      goto LABEL_38;
    }
    if ( !*p_leftItem )
      goto LABEL_73;
    if ( x < (*p_leftItem)->fields.basePosition.fields.x )
    {
      v101 = &this->fields.leftItem;
      *p_leftItem = v87;
      goto LABEL_37;
    }
LABEL_38:
    ++v79;
    v50 = v80;
  }
  while ( v114 != v79 );
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(v12, 0, *v80);
  if ( !Instance )
    goto LABEL_73;
  *(_BYTE *)(Instance + 96) = 1;
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(v12, index, *v80);
  if ( !Instance )
    goto LABEL_73;
  *(_BYTE *)(Instance + 96) = 1;
  if ( v114 < v112 )
    goto LABEL_44;
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(v12, index, *v80);
  if ( !Instance )
    goto LABEL_73;
  *(_BYTE *)(Instance + 97) = 1;
LABEL_44:
  this->fields.itemSortList = (struct System_Collections_Generic_List_ListViewItem__o *)v12;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.itemSortList, (int32_t)v12, v44, v45, v46, v47, v48, v49);
  this->fields.terminalIndex = -1;
  emptyMessageBase = (UnityEngine_Object_o *)this->fields.emptyMessageBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(emptyMessageBase, 0, 0) )
  {
    Instance = (__int64)this->fields.emptyMessageBase;
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v114 < 1, 0);
      goto LABEL_49;
    }
LABEL_73:
    sub_1C71608(Instance, v10);
  }
LABEL_49:
  indicator = (UnityEngine_Object_o *)this->fields.indicator;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(indicator, 0, 0) )
  {
    Instance = (__int64)this->fields.indicator;
    if ( !Instance )
      goto LABEL_73;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)Instance + 376LL))(
      Instance,
      (unsigned int)v114,
      *(_QWORD *)(*(_QWORD *)Instance + 384LL));
    this->fields.isIndecatorRefresh = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    Instance = (__int64)this->fields.scrollView;
    if ( !Instance )
      goto LABEL_73;
    UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
  }
  ListViewManager__ClippingTerminationItem(this, v10);
  ListViewManager__ClippingItems(this, 1, 0, v105);
  v106 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v106, 0, 0) )
  {
    Instance = (__int64)this->fields.scrollView;
    if ( !Instance )
      goto LABEL_73;
    UIScrollView__DisableSpring((UIScrollView_o *)Instance, 0);
    v107 = this->fields.scrollView;
    if ( !byte_4CC0D09 )
    {
      Instance = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      byte_4CC0D09 = 1;
    }
    if ( !v107 )
      goto LABEL_73;
    UIScrollView__set_currentMomentum(v107, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    if ( selectIndex < 0 )
    {
      Instance = (__int64)this->fields.scrollView;
      if ( !Instance )
        goto LABEL_73;
      UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
      v110 = ListViewManager__GetItem(this, 0, v109);
      ListViewManager__CenterLoopItem(this, v110, v111);
    }
    else if ( !ListViewManager__MoveCenterItem(this, selectIndex, 0, 0, 0.0, v108) )
    {
      Instance = (__int64)this->fields.scrollView;
      if ( !Instance )
        goto LABEL_73;
      UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
    }
  }
}


void ListViewManager__DragMaskEnd(ListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v3; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4CC8B5A & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B5A = 1;
  }
  v3 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ListViewManager_o *, const MethodInfo *))this->klass->vtable._7_GetDragRoot.methodPtr)(
                                     this,
                                     this->klass->vtable._7_GetDragRoot.method);
  if ( !v3 )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v3,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)v3 & 1) != 0 )
  {
    if ( Component_object )
    {
      UIDragDropListViewBackMask__DragEnd((UIDragDropListViewBackMask_o *)Component_object, 0);
      return;
    }
LABEL_10:
    sub_1C71608(v3, v4);
  }
}


void ListViewManager__DragMaskStart(ListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v7; // x19

  if ( (byte_4CC8B59 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B59 = 1;
  }
  v3 = ((__int64 (__fastcall *)(ListViewManager_o *, const MethodInfo *))this->klass->vtable._7_GetDragRoot.methodPtr)(
         this,
         this->klass->vtable._7_GetDragRoot.method);
  if ( !v3 )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v3,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( (v3 & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_18;
    UIDragDropListViewBackMask__DragStart((UIDragDropListViewBackMask_o *)Component_object, 0);
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    v3 = (__int64)this->fields.scrollView;
    if ( v3 )
    {
      UIScrollView__DisableSpring((UIScrollView_o *)v3, 0);
      v7 = this->fields.scrollView;
      if ( !byte_4CC0D09 )
      {
        v3 = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
        byte_4CC0D09 = 1;
      }
      if ( v7 )
      {
        UIScrollView__set_currentMomentum(v7, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        return;
      }
    }
LABEL_18:
    sub_1C71608(v3, v4);
  }
}


void ListViewManager__EndScrollAnim(ListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_o *callbackAfterScroll; // x19
  GrandQuestFolderBoardItem_o *p_callbackAfterScroll; // x0

  callbackAfterScroll = this->fields.callbackAfterScroll;
  if ( callbackAfterScroll )
  {
    p_callbackAfterScroll = (GrandQuestFolderBoardItem_o *)&this->fields.callbackAfterScroll;
    p_callbackAfterScroll->klass = 0;
    sub_1C71354(p_callbackAfterScroll, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))callbackAfterScroll->fields.invoke_impl)(
      callbackAfterScroll->fields.method_code,
      callbackAfterScroll->fields.method);
  }
}


System_Collections_IEnumerator_o *ListViewManager__FocusSelectItem(
        ListViewManager_o *this,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4CC8B4B & 1) == 0 )
  {
    sub_1C713B0(&ListViewManager__FocusSelectItem_d__71_TypeInfo);
    byte_4CC8B4B = 1;
  }
  v7 = sub_1C715FC(ListViewManager__FocusSelectItem_d__71_TypeInfo);
  ListViewManager__FocusSelectItem_d__71___ctor((ListViewManager__FocusSelectItem_d__71_o *)v7, 0, 0);
  if ( !v7 )
    sub_1C71608(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 48) = list;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)list, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v7 + 40) = index;
  return (System_Collections_IEnumerator_o *)v7;
}


void ListViewManager__FowardLoopItem(ListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  struct ListViewItem_o *centerItem; // x8
  _DWORD *Item; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct ListViewItem_o *v8; // x8
  _DWORD *v9; // x20
  UnityEngine_Object_o *v10; // x19

  if ( (byte_4CC8B55 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B55 = 1;
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
          Item = System_Collections_Generic_List_object___get_Item(
                   itemSortList,
                   centerItem->fields.sortIndex == 0,
                   (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          v8 = this->fields.centerItem;
          if ( !v8 )
            goto LABEL_17;
          v9 = Item;
          if ( !Item )
            goto LABEL_17;
          v6 = (unsigned int)(v8->fields.loopIndex + 1);
          if ( Item[7] != (_DWORD)v6 )
          {
            Item[7] = v6;
            Item = this->fields.seed;
            if ( !Item )
              goto LABEL_17;
            *(UnityEngine_Vector3_o *)(v9 + 25) = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)Item, v6, v7);
            v10 = (UnityEngine_Object_o *)*((_QWORD *)v9 + 14);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v10, 0, 0) )
            {
              Item = (_DWORD *)*((_QWORD *)v9 + 14);
              if ( Item )
              {
                ListViewObject__SetTransform((ListViewObject_o *)Item, *(UnityEngine_Vector3_o *)(v9 + 25), 0);
                return;
              }
LABEL_17:
              sub_1C71608(Item, v6);
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

  if ( (byte_4CC8B5D & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B5D = 1;
  }
  *isTop = 0;
  *isBottom = 0;
  *isLeft = 0;
  *isRight = 0;
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = (UIScrollView_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( ((unsigned __int8)v12 & 1) == 0 )
    return 0;
  v14 = this->fields.scrollView;
  if ( !v14 )
    goto LABEL_33;
  mPanel = (UnityEngine_Object_o *)v14->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C71608(v12, v13);
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
  UnityEngine_Object_o *root; // x20
  struct UnityEngine_Transform_o *v6; // x0
  __int64 v7; // x1
  struct ListViewItemSeed_o *seed; // x8

  if ( (byte_4CC8B57 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UIDragDropRoot_TypeInfo);
    byte_4CC8B57 = 1;
  }
  dragParentObject = (UnityEngine_Object_o *)this->fields.dragParentObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragParentObject, 0, 0) )
    return this->fields.dragParentObject;
  root = (UnityEngine_Object_o *)UIDragDropRoot_TypeInfo->static_fields->root;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (struct UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(root, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    v6 = UIDragDropRoot_TypeInfo->static_fields->root;
    if ( v6 )
      return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
LABEL_14:
    sub_1C71608(v6, v7);
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

  if ( (byte_4CC8B44 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4CC8B44 = 1;
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
                               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CC8B49 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4CC8B49 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList || !this->fields.sort )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v5 = 0;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1C71608(0, v6);
    v5 += ((__int64 (*)(void))v8.fields._current->klass->vtable[5].methodPtr)() & 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  float v20; // s1

  if ( (byte_4CC8B63 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B63 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v10 = this->fields.scrollView;
    if ( !v10 )
      goto LABEL_23;
    mPanel = (UnityEngine_Object_o *)v10->fields.mPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1C71608(gameObject, v9);
    }
  }
  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&scroll->fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  scroll->fields.z = z;
  if ( !byte_4CC0BE9 )
  {
    sub_1C713B0(&UnityEngine_Vector2_TypeInfo);
    byte_4CC0BE9 = 1;
  }
  result = 0;
  p_mClipOffset = UnityEngine_Vector2_TypeInfo->static_fields;
  p_y = &p_mClipOffset->zeroVector.fields.y;
LABEL_22:
  v20 = *p_y;
  offset->fields.x = p_mClipOffset->zeroVector.fields.x;
  offset->fields.y = v20;
  return result;
}


UICommonButton_o *ListViewManager__GetSortKindButton(ListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.sortKindButton;
}


void ListViewManager__ItemDragEnd(ListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dropList; // x0
  Il2CppObject *current; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CC8B5C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B5C = 1;
  }
  memset(&v7, 0, sizeof(v7));
  dropList = (System_Collections_Generic_List_object__o *)this->fields.dropList;
  if ( !dropList )
    sub_1C71608(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    dropList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_UIDragDropListViewSurface__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__MoveNext__) )
  {
    current = v7.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v5 )
    {
      if ( !current )
        sub_1C71608(v5, v6);
      UIDragDropListViewSurface__DragEnd((UIDragDropListViewSurface_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__Dispose__);
}


void ListViewManager__ItemDragStart(ListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dropList; // x0
  Il2CppObject *current; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CC8B5B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B5B = 1;
  }
  memset(&v7, 0, sizeof(v7));
  dropList = (System_Collections_Generic_List_object__o *)this->fields.dropList;
  if ( !dropList )
    sub_1C71608(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    dropList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_UIDragDropListViewSurface__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__MoveNext__) )
  {
    current = v7.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v5 )
    {
      if ( !current )
        sub_1C71608(v5, v6);
      UIDragDropListViewSurface__DragStart((UIDragDropListViewSurface_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__Dispose__);
}


void ListViewManager__JumpItem(ListViewManager_o *this, int32_t index, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  UIScrollView_o *scrollView; // x0
  __int64 v7; // x1
  struct ListViewItemSeed_o *seed; // x8
  bool v9; // w3
  bool v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  struct ListViewItem_o *Item; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UnityEngine_Object_o *indicator; // x20
  struct ListViewItem_o *centerItem; // x2

  if ( (byte_4CC8B5F & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B5F = 1;
  }
  scrollView = (UIScrollView_o *)ListViewManager__MoveCenterItem(this, index, 0, 0, 0.0, v3);
  if ( ((unsigned __int8)scrollView & 1) != 0 )
  {
    seed = this->fields.seed;
    if ( !seed )
      goto LABEL_17;
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_17;
    if ( seed->fields.arrangement )
    {
      v9 = 1;
      v10 = 0;
    }
    else
    {
      v10 = 1;
      v9 = 0;
    }
    UIScrollView__RestrictWithinBounds_49595152(scrollView, 1, v10, v9, 0);
    ListViewManager__ClippingItems(this, 0, 0, v11);
    if ( !this->fields.centerItem )
    {
      Item = ListViewManager__GetItem(this, index, v12);
      this->fields.centerItem = Item;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.centerItem, (int32_t)Item, v14, v15, v16, v17, v18, v19);
      indicator = (UnityEngine_Object_o *)this->fields.indicator;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(indicator, 0, 0) )
      {
        scrollView = (UIScrollView_o *)this->fields.indicator;
        if ( scrollView )
        {
          centerItem = this->fields.centerItem;
          ((void (__fastcall *)(UIScrollView_o *, ListViewManager_o *, struct ListViewItem_o *, bool, bool, bool, bool, const MethodInfo *))scrollView->klass->vtable._5_get_shouldMoveHorizontally.methodPtr)(
            scrollView,
            this,
            centerItem,
            centerItem != this->fields.topItem,
            centerItem != this->fields.bottomItem,
            centerItem != this->fields.leftItem,
            centerItem != this->fields.rightItem,
            scrollView->klass->vtable._5_get_shouldMoveHorizontally.method);
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
LABEL_17:
        sub_1C71608(scrollView, v7);
      }
    }
  }
}


ListViewObject_o *ListViewManager__MakeObject(ListViewManager_o *this, ListViewItem_o *item, const MethodInfo *method)
{
  ListViewObject_o *result; // x0
  Il2CppObject *v6; // x0
  struct ListViewItemSeed_o *seed; // x8
  Il2CppObject *prefab; // x21
  UnityEngine_Object_o *v9; // x21
  bool v10; // w8
  Il2CppObject *Component_object; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  bool v18; // w8
  struct UnityEngine_GameObject_o *listDragPrefab; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v33; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v35; // x8

  if ( (byte_4CC8B4F & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Stack_GameObject__Pop__);
    sub_1C713B0(&Method_System_Collections_Generic_Stack_GameObject__get_Count__);
    byte_4CC8B4F = 1;
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__Instantiate_object_(
           prefab,
           (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  else
  {
    v6 = System_Collections_Generic_Stack_object___Pop(
           (System_Collections_Generic_Stack_T__o *)result,
           (const MethodInfo_3A75798 *)Method_System_Collections_Generic_Stack_GameObject__Pop__);
  }
  v9 = (UnityEngine_Object_o *)v6;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality(v9, 0, 0);
  result = 0;
  if ( v10 )
  {
    if ( !v9 )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v9,
                         (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v18 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    result = 0;
    if ( v18 )
    {
      if ( Component_object )
      {
        Component_object[2].monitor = this;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&Component_object[2].monitor,
          (int32_t)this,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
        ((void (__fastcall *)(Il2CppObject *, ListViewItem_o *, struct ListViewItemSeed_o *, const MethodInfo *))Component_object->klass->vtable[6].methodPtr)(
          Component_object,
          item,
          this->fields.seed,
          Component_object->klass->vtable[6].method);
        listDragPrefab = this->fields.listDragPrefab;
        Component_object[3].klass = (Il2CppClass *)listDragPrefab;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&Component_object[3],
          (int32_t)listDragPrefab,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
        ((void (__fastcall *)(ListViewManager_o *, Il2CppObject *, ListViewItem_o *, const MethodInfo *))this->klass->vtable._4_SetObjectItem.methodPtr)(
          this,
          Component_object,
          item,
          this->klass->vtable._4_SetObjectItem.method);
        result = (ListViewObject_o *)this->fields.objectList;
        if ( result )
        {
          m_CachedPtr = result->fields.m_CachedPtr;
          v33 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++HIDWORD(result->fields.m_CancellationTokenSource);
          if ( m_CachedPtr )
          {
            m_CancellationTokenSource_low = SLODWORD(result->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)result,
                (Il2CppObject *)v9,
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            }
            else
            {
              v35 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
              LODWORD(result->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_QWORD *)(v35 + 32) = v9;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v35 + 32), (int32_t)v9, v26, v27, v28, v29, v30, v31);
            }
            return (ListViewObject_o *)Component_object;
          }
        }
      }
LABEL_25:
      sub_1C71608(result, item);
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
  ListViewItem_o *v8; // x23
  UnityEngine_Object_o *viewObject; // x22
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  const MethodInfo *v11; // x2
  _BOOL8 v12; // x0
  __int64 v13; // x1
  float topFocusOffset; // s0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CC8B61 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B61 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  Item = ListViewManager__GetItem(this, index, (const MethodInfo *)isAnimation);
  if ( Item )
  {
    v8 = Item;
    viewObject = (UnityEngine_Object_o *)Item->fields.viewObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(viewObject, 0, 0) )
    {
      itemSortList = this->fields.itemSortList;
      if ( itemSortList )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v16,
          (System_Collections_Generic_List_object__o *)itemSortList,
          (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v16,
                  (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( (ListViewItem_o *)v16.fields._current == v8 )
          {
            viewObject = (UnityEngine_Object_o *)ListViewManager__MakeObject(this, v8, v11);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v16,
          (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = UnityEngine_Object__op_Equality(viewObject, 0, 0);
    if ( v12 )
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
        LOBYTE(Item) = ListViewObject__MoveBottom((ListViewObject_o *)viewObject, isAnimation, topFocusOffset, 0);
        return (unsigned __int8)Item & 1;
      }
    }
    sub_1C71608(v12, v13);
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
        const MethodInfo *method)
{
  ListViewItem_o *Item; // x0
  const MethodInfo *v12; // x2
  ListViewItem_o *v13; // x23
  UnityEngine_Object_o *viewObject; // x21
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  const MethodInfo *v16; // x2
  _BOOL8 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CC8B5E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B5E = 1;
  }
  memset(&v20, 0, sizeof(v20));
  Item = ListViewManager__GetItem(this, index, (const MethodInfo *)isAnimation);
  if ( Item )
  {
    v13 = Item;
    ListViewManager__CenterLoopItem(this, Item, v12);
    viewObject = (UnityEngine_Object_o *)v13->fields.viewObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(viewObject, 0, 0) )
    {
      itemSortList = this->fields.itemSortList;
      if ( itemSortList )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v20,
          (System_Collections_Generic_List_object__o *)itemSortList,
          (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v20,
                  (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( (ListViewItem_o *)v20.fields._current == v13 )
          {
            viewObject = (UnityEngine_Object_o *)ListViewManager__MakeObject(this, v13, v16);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v20,
          (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v17 = UnityEngine_Object__op_Equality(viewObject, 0, 0);
    if ( v17 )
    {
      LOBYTE(Item) = 0;
    }
    else
    {
      if ( !viewObject )
        sub_1C71608(v17, v18);
      LOBYTE(Item) = ListViewObject__MoveCenter(
                       (ListViewObject_o *)viewObject,
                       isAnimation,
                       restrictScrollViewRange,
                       forceShiftPosY,
                       0);
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
  ListViewItem_o *v10; // x23
  UnityEngine_Object_o *viewObject; // x22
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  const MethodInfo *v13; // x2
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CC8B60 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B60 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  Item = ListViewManager__GetItem(this, index, (const MethodInfo *)isAnimation);
  if ( Item )
  {
    v10 = Item;
    viewObject = (UnityEngine_Object_o *)Item->fields.viewObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(viewObject, 0, 0) )
    {
      itemSortList = this->fields.itemSortList;
      if ( itemSortList )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v17,
          (System_Collections_Generic_List_object__o *)itemSortList,
          (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v17,
                  (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( (ListViewItem_o *)v17.fields._current == v10 )
          {
            viewObject = (UnityEngine_Object_o *)ListViewManager__MakeObject(this, v10, v13);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v17,
          (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = UnityEngine_Object__op_Equality(viewObject, 0, 0);
    if ( v14 )
    {
      LOBYTE(Item) = 0;
    }
    else
    {
      if ( index >= 1 )
        defaultOffset = this->fields.topFocusOffset;
      if ( !viewObject )
        sub_1C71608(v14, v15);
      LOBYTE(Item) = ListViewObject__MoveTop((ListViewObject_o *)viewObject, isAnimation, defaultOffset, 0);
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
  Il2CppObject *Component_object; // x20
  struct ListViewItemSeed_o *seed; // x8
  UnityEngine_Object_o *v7; // x21
  UnityEngine_Object_o *parent; // x22
  struct ListViewItem_o *centerItem; // x8
  UnityEngine_Object_o *viewObject; // x19
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0

  v4 = this;
  if ( (byte_4CC8B62 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_1C713B0(&Method_ListViewManager_OnSwipeCenter__);
    this = (ListViewManager_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B62 = 1;
  }
  if ( !go )
    goto LABEL_22;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       go,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            v7 = (UnityEngine_Object_o *)this;
            parent = (UnityEngine_Object_o *)seed->fields.parent;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v7, parent, 0) )
            {
              centerItem = v4->fields.centerItem;
              if ( centerItem )
              {
                viewObject = (UnityEngine_Object_o *)centerItem->fields.viewObject;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(viewObject, (UnityEngine_Object_o *)Component_object, 0) )
                {
                  v11 = Method_ListViewManager_OnSwipeCenter__;
                  if ( (*((_BYTE *)Method_ListViewManager_OnSwipeCenter__ + 83) & 2) != 0 )
                    v11 = (_QWORD *)sub_1C713C8(Method_ListViewManager_OnSwipeCenter__);
                  v12 = (System_Reflection_MethodBase_o *)sub_1C71394(v11, v11[4]);
                  OverwriteAssetSoundName__PlaySystemSe(v12, 7, 0, 0);
                }
              }
            }
            return;
          }
        }
      }
    }
LABEL_22:
    sub_1C71608(this, go);
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
  unsigned int v12; // w22
  System_Collections_Generic_Stack_T__c **v13; // x23
  System_Collections_Generic_Stack_T__o **v14; // x23
  System_Collections_Generic_Stack_T__o *v15; // t1
  float x; // s8
  float v17; // s10
  float z; // s9
  _QWORD v19[2]; // [xsp+8h] [xbp-68h] BYREF
  float v20; // [xsp+18h] [xbp-58h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC8B66 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Stack_GameObject__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_Stack_GameObject__get_Count__);
    byte_4CC8B66 = 1;
  }
  objectStock = (System_Collections_Generic_Stack_T__o *)this->fields.objectStock;
  if ( !objectStock )
    goto LABEL_25;
  size = objectStock->fields._size;
  if ( size >= 1 )
  {
    objectStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___ToArray(
                                                             objectStock,
                                                             (const MethodInfo_3A758EC *)Method_System_Collections_Generic_Stack_GameObject__ToArray__);
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
            v19,
            objectStock,
            objectStock->klass->vtable._4_System_Collections_Generic_IEnumerable_T__GetEnumerator.method,
            *(long double *)&localPosition.fields.x);
          objectStock = (System_Collections_Generic_Stack_T__o *)this->fields.scrollView;
          if ( objectStock )
          {
            v8 = y - v7;
            v9 = *((float *)v19 + 1) + v20;
            objectStock = (System_Collections_Generic_Stack_T__o *)((System_Collections_Generic_Stack_T__o *(__fastcall *)(_QWORD *__return_ptr, System_Collections_Generic_Stack_T__o *, const MethodInfo *))objectStock->klass->vtable._4_System_Collections_Generic_IEnumerable_T__GetEnumerator.methodPtr)(
                                                                     v19,
                                                                     objectStock,
                                                                     objectStock->klass->vtable._4_System_Collections_Generic_IEnumerable_T__GetEnumerator.method);
            v10 = this->fields.clipRange.fields.y;
            v11 = v8 <= (float)((float)(*((float *)v19 + 1) - v20) + v10)
                ? v9 - (float)(v10 * 0.5)
                : (float)(*((float *)v19 + 1) - v20) + (float)(v10 * 0.5);
            if ( v5 )
            {
              v12 = 0;
              while ( v12 < v5->fields._size )
              {
                v13 = &v5->klass + (int)v12;
                v15 = (System_Collections_Generic_Stack_T__o *)v13[4];
                v14 = (System_Collections_Generic_Stack_T__o **)(v13 + 4);
                objectStock = v15;
                if ( !v15 )
                  goto LABEL_25;
                objectStock = (System_Collections_Generic_Stack_T__o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)objectStock,
                                                                         0);
                if ( !objectStock )
                  goto LABEL_25;
                v22 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)objectStock, 0);
                objectStock = (System_Collections_Generic_Stack_T__o *)this->fields.scrollView;
                if ( !objectStock )
                  goto LABEL_25;
                x = v22.fields.x;
                v17 = v22.fields.y;
                z = v22.fields.z;
                objectStock = (System_Collections_Generic_Stack_T__o *)UIScrollView__get_canMoveVertically(
                                                                         (UIScrollView_o *)objectStock,
                                                                         0);
                if ( ((unsigned __int8)objectStock & 1) != 0 )
                  v17 = v11;
                if ( v12 >= v5->fields._size )
                  break;
                objectStock = *v14;
                if ( !*v14 )
                  goto LABEL_25;
                objectStock = (System_Collections_Generic_Stack_T__o *)UnityEngine_GameObject__get_transform(
                                                                         (UnityEngine_GameObject_o *)objectStock,
                                                                         0);
                if ( !objectStock )
                  goto LABEL_25;
                v23.fields.x = x;
                v23.fields.y = v17;
                v23.fields.z = z;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)objectStock, v23, 0);
                if ( size == ++v12 )
                  return;
              }
              sub_1C71610(objectStock);
            }
          }
        }
      }
    }
LABEL_25:
    sub_1C71608(objectStock, method);
  }
}


void ListViewManager__ReleaseObject(ListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  Il2CppObject *Component_object; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Stack_T__o *objectStock; // x0
  struct System_Collections_Generic_List_GameObject__o *v12; // x8
  int32_t size; // w2
  int v14; // w9
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CC8B46 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Stack_GameObject__Push__);
    byte_4CC8B46 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v16 = v15;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v4 )
      break;
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1C71608(v4, v5);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v16.fields._current,
                         (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( v8 )
    {
      if ( !Component_object )
        sub_1C71608(v8, v9);
      ListViewObject__ReleaseItem((ListViewObject_o *)Component_object, 0);
      objectStock = (System_Collections_Generic_Stack_T__o *)this->fields.objectStock;
      if ( !objectStock )
        sub_1C71608(0, v10);
      System_Collections_Generic_Stack_object___Push(
        objectStock,
        current,
        (const MethodInfo_3A757F8 *)Method_System_Collections_Generic_Stack_GameObject__Push__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v12 = this->fields.objectList;
  if ( !v12 )
LABEL_20:
    sub_1C71608(objectList, method);
  size = v12->fields._size;
  v14 = v12->fields._version + 1;
  v12->fields._size = 0;
  v12->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v12->fields._items, 0, size, 0);
}


bool ListViewManager__ReleaseObjectExtra(ListViewManager_o *this, ListViewObject_o *obj, const MethodInfo *method)
{
  Il2CppObject *gameObject; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  unsigned int v8; // w0
  System_Collections_Generic_Stack_T__o *objectStock; // x20

  if ( (byte_4CC8B65 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__IndexOf__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Stack_GameObject__Push__);
    byte_4CC8B65 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !obj )
      goto LABEL_14;
    if ( ListViewObject__CleanItemExtra(obj, 0) )
    {
      objectList = this->fields.objectList;
      gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0);
      if ( !objectList )
        goto LABEL_14;
      v8 = System_Collections_Generic_List_object___IndexOf(
             (System_Collections_Generic_List_object__o *)objectList,
             gameObject,
             (const MethodInfo_38113B8 *)Method_System_Collections_Generic_List_GameObject__IndexOf__);
      if ( (v8 & 0x80000000) == 0 )
      {
        v6 = v8;
        gameObject = (Il2CppObject *)this->fields.objectList;
        if ( gameObject )
        {
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)gameObject,
            v6,
            (const MethodInfo_3811EEC *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
          objectStock = (System_Collections_Generic_Stack_T__o *)this->fields.objectStock;
          gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0);
          if ( objectStock )
          {
            System_Collections_Generic_Stack_object___Push(
              objectStock,
              gameObject,
              (const MethodInfo_3A757F8 *)Method_System_Collections_Generic_Stack_GameObject__Push__);
            return 1;
          }
        }
LABEL_14:
        sub_1C71608(gameObject, v6);
      }
    }
  }
  return 0;
}


bool ListViewManager__ReleaseObject_44113692(ListViewManager_o *this, ListViewObject_o *obj, const MethodInfo *method)
{
  Il2CppObject *gameObject; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  unsigned int v8; // w0
  System_Collections_Generic_Stack_T__o *objectStock; // x20

  if ( (byte_4CC8B50 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__IndexOf__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Stack_GameObject__Push__);
    byte_4CC8B50 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
             (const MethodInfo_38113B8 *)Method_System_Collections_Generic_List_GameObject__IndexOf__);
      if ( (v8 & 0x80000000) == 0 )
      {
        v6 = v8;
        gameObject = (Il2CppObject *)this->fields.objectList;
        if ( gameObject )
        {
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)gameObject,
            v6,
            (const MethodInfo_3811EEC *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
          objectStock = (System_Collections_Generic_Stack_T__o *)this->fields.objectStock;
          gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0);
          if ( objectStock )
          {
            System_Collections_Generic_Stack_object___Push(
              objectStock,
              gameObject,
              (const MethodInfo_3A757F8 *)Method_System_Collections_Generic_Stack_GameObject__Push__);
            return 1;
          }
        }
LABEL_14:
        sub_1C71608(gameObject, v6);
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
    sub_1C71608(this, method);
  seed->fields.arrangementPich.fields.y = y;
}


void ListViewManager__SetCallbackAfterScroll(
        ListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.callbackAfterScroll = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackAfterScroll,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ListViewManager__SetEmptyMessageBase(ListViewManager_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Object_o *emptyMessageBase; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4CC8B69 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B69 = 1;
  }
  emptyMessageBase = (UnityEngine_Object_o *)this->fields.emptyMessageBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(emptyMessageBase, 0, 0) )
  {
    v7 = this->fields.emptyMessageBase;
    if ( !v7 )
      sub_1C71608(0, v6);
    UnityEngine_GameObject__SetActive(v7, isActive, 0);
  }
}


void ListViewManager__SetEnabledColliderDragMask(ListViewManager_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4CC8B58 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B58 = 1;
  }
  v5 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ListViewManager_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._7_GetDragRoot.methodPtr)(
                                     this,
                                     this->klass->vtable._7_GetDragRoot.method,
                                     method);
  if ( !v5 )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v5,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    if ( Component_object )
    {
      UIDragDropListViewBackMask__SetEnabledCollider((UIDragDropListViewBackMask_o *)Component_object, value, 0);
      return;
    }
LABEL_10:
    sub_1C71608(v5, v6);
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
    sub_1C71608(this, 0);
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

  if ( (byte_4CC8B4C & 1) == 0 )
  {
    sub_1C713B0(&EquipGraphListViewManager_TypeInfo);
    sub_1C713B0(&SupportServantEquipListViewManager_TypeInfo);
    sub_1C713B0(&StringLiteral_13200/*"SvtEqScrollBarValue"*/);
    byte_4CC8B4C = 1;
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
    sub_1C71608(scrollBar, method);
  }
  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_12;
  value = UIProgressBar__get_value(scrollBar, 0);
  UnityEngine_PlayerPrefs__SetFloat((System_String_o *)StringLiteral_13200/*"SvtEqScrollBarValue"*/, value, 0);
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
  __int64 gameObject; // x0
  __int64 v12; // x1
  struct UIScrollView_o *v13; // x8
  UnityEngine_Object_o *mPanel; // x20
  struct UIScrollView_o *v15; // x8
  struct UIScrollView_o *v16; // x8
  UIScrollView_o *v17; // x20
  bool v18; // w20
  const MethodInfo *v19; // x3
  UnityEngine_Vector2_o v21; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  y = offset.fields.y;
  x = offset.fields.x;
  z = scroll.fields.z;
  v7 = scroll.fields.y;
  v8 = scroll.fields.x;
  if ( (byte_4CC8B64 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B64 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( (gameObject & 1) == 0 )
    return 0;
  v13 = this->fields.scrollView;
  if ( !v13 )
    goto LABEL_23;
  mPanel = (UnityEngine_Object_o *)v13->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(mPanel, 0, 0);
  if ( (gameObject & 1) == 0 )
    return 0;
  v15 = this->fields.scrollView;
  if ( !v15 )
    goto LABEL_23;
  gameObject = (__int64)v15->fields.mPanel;
  if ( !gameObject )
    goto LABEL_23;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_23;
  gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_23;
  v22.fields.x = v8;
  v22.fields.y = v7;
  v22.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v22, 0);
  v16 = this->fields.scrollView;
  if ( !v16 )
    goto LABEL_23;
  gameObject = (__int64)v16->fields.mPanel;
  if ( !gameObject )
    goto LABEL_23;
  v21.fields.x = x;
  v21.fields.y = y;
  UIPanel__set_clipOffset((UIPanel_o *)gameObject, v21, 0);
  gameObject = (__int64)this->fields.scrollView;
  if ( !gameObject )
    goto LABEL_23;
  UIScrollView__DisableSpring((UIScrollView_o *)gameObject, 0);
  v17 = this->fields.scrollView;
  if ( !byte_4CC0D09 )
  {
    gameObject = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  if ( !v17 )
LABEL_23:
    sub_1C71608(gameObject, v12);
  UIScrollView__set_currentMomentum(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  v18 = 1;
  ListViewManager__ClippingItems(this, 1, 0, v19);
  return v18;
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

  if ( (byte_4CC8B47 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_17545/*"btn_sort_up"*/);
    sub_1C713B0(&StringLiteral_17543/*"btn_sort_new"*/);
    sub_1C713B0(&StringLiteral_17544/*"btn_sort_old"*/);
    sub_1C713B0(&StringLiteral_17542/*"btn_sort_down"*/);
    byte_4CC8B47 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v10 = (System_String_o **)&StringLiteral_17544/*"btn_sort_old"*/;
          v11 = (System_String_o **)&StringLiteral_17543/*"btn_sort_new"*/;
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
          v10 = (System_String_o **)&StringLiteral_17545/*"btn_sort_up"*/;
          v11 = (System_String_o **)&StringLiteral_17542/*"btn_sort_down"*/;
          goto LABEL_20;
        }
      }
    }
LABEL_24:
    sub_1C71608(sort, v4);
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
  bool v8; // w3
  bool v9; // w2
  const MethodInfo *v10; // x3

  scrollView = (UIScrollView_o *)ListViewManager__MoveTopItem(this, index, 0, 0.0, v3);
  if ( ((unsigned __int8)scrollView & 1) != 0 )
  {
    seed = this->fields.seed;
    if ( !seed || (scrollView = this->fields.scrollView) == 0 )
      sub_1C71608(scrollView, v6);
    if ( seed->fields.arrangement )
    {
      v8 = 1;
      v9 = 0;
    }
    else
    {
      v9 = 1;
      v8 = 0;
    }
    UIScrollView__RestrictWithinBounds_49595152(scrollView, 1, v9, v8, 0);
    ListViewManager__ClippingItems(this, 1, 0, v10);
  }
}


void ListViewManager__SortItem(
        ListViewManager_o *this,
        int32_t selectIndex,
        bool isAllDisp,
        int32_t addEmptyTarminal,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_List_object__o *v18; // x22
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  struct ListViewSort_o *sort; // x8
  int32_t v35; // w23
  _BOOL4 isAscendingOrder; // w20
  bool v37; // w21
  ListViewManager___c_c *v38; // x0
  struct ListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__68_0; // x20
  Il2CppObject *v41; // x24
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  struct ListViewManager___c_StaticFields *v48; // x0
  GrandQuestFolderBoardItem_o *p__9__68_0; // x0
  Il2CppObject *v50; // x24
  struct ListViewManager___c_StaticFields *v51; // x0
  const MethodInfo *v52; // x3
  struct ListViewItem_o **p_topItem; // x25
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  struct ListViewItem_o **p_bottomItem; // x26
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  struct ListViewItem_o **p_leftItem; // x27
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  struct ListViewItem_o **p_rightItem; // x28
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  Il2CppObject *Item; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  Il2CppObject *v94; // x0
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7
  Il2CppObject *v101; // x0
  int32_t v102; // w2
  int32_t v103; // w3
  System_String_o *v104; // x4
  int32_t v105; // w5
  int64_t v106; // x6
  System_String_o *v107; // x7
  Il2CppObject *v108; // x0
  int32_t v109; // w2
  int32_t v110; // w3
  System_String_o *v111; // x4
  int32_t v112; // w5
  int64_t v113; // x6
  System_String_o *v114; // x7
  const MethodInfo_3810448 *v115; // x2
  int32_t i; // w29
  const MethodInfo *v117; // x2
  struct ListViewItem_o *v118; // x20
  int32_t v119; // w2
  int32_t v120; // w3
  System_String_o *v121; // x4
  int32_t v122; // w5
  int64_t v123; // x6
  System_String_o *v124; // x7
  struct ListViewItem_o **v125; // x0
  float x; // s0
  struct ListViewItem_o **v127; // x0
  UnityEngine_Object_o *emptyMessageBase; // x20
  UnityEngine_Object_o *indicator; // x20
  UnityEngine_Object_o *scrollView; // x20
  const MethodInfo *v131; // x3
  int32_t v132; // w2
  int32_t v133; // w3
  System_String_o *v134; // x4
  int32_t v135; // w5
  int64_t v136; // x6
  System_String_o *v137; // x7
  UnityEngine_Object_o *v138; // x20
  UIScrollView_o *v139; // x20
  const MethodInfo *v140; // x4
  const MethodInfo *v141; // x2
  ListViewItem_o *v142; // x0
  const MethodInfo *v143; // x2
  int32_t v144; // [xsp+Ch] [xbp-A4h]
  int32_t v145; // [xsp+10h] [xbp-A0h]
  int32_t index; // [xsp+14h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v147; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v148; // [xsp+30h] [xbp-80h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC8B4A & 1) == 0 )
  {
    sub_1C713B0(&System_Comparison_ListViewItem__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_1C713B0(&Method_ListViewManager___c__SortItem_b__68_0__);
    sub_1C713B0(&Method_ListViewManager___c__SortItem_b__68_1__);
    sub_1C713B0(&ListViewManager___c_TypeInfo);
    byte_4CC8B4A = 1;
  }
  memset(&v148, 0, sizeof(v148));
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !Instance )
    goto LABEL_94;
  v145 = addEmptyTarminal;
  SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)Instance, 0);
  ListViewManager__ReleaseObject(this, v11);
  Instance = (__int64)this->fields.sort;
  if ( !Instance )
    goto LABEL_94;
  *(_QWORD *)(Instance + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(Instance + 32), (int32_t)this, v12, v13, v14, v15, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  Instance = (__int64)this->fields.itemList;
  if ( Instance )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v147,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v148 = v147;
    while ( 1 )
    {
      v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v148,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v19 )
        break;
      current = v148.fields._current;
      if ( !v148.fields._current )
        sub_1C71608(v19, v20);
      v22 = ((__int64 (__fastcall *)(Il2CppObject *, struct ListViewSort_o *, const MethodInfo *))v148.fields._current->klass->vtable[4].methodPtr)(
              v148.fields._current,
              this->fields.sort,
              v148.fields._current->klass->vtable[4].method);
      if ( (v22 & 1) != 0 )
      {
        if ( !v18 )
          sub_1C71608(v22, v23);
        items = v18->fields._items;
        v31 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v18->fields._version;
        if ( !items )
          sub_1C71608(v22, v23);
        size = v18->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            current,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v33[4] = (Il2CppClass *)current;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)current, v24, v25, v26, v27, v28, v29);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v148,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  if ( !v18 )
    goto LABEL_94;
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_94;
  v35 = v18->fields._size;
  isAscendingOrder = sort->fields.isAscendingOrder;
  v37 = isAllDisp;
  v38 = ListViewManager___c_TypeInfo;
  if ( !ListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewManager___c_TypeInfo);
    v38 = ListViewManager___c_TypeInfo;
  }
  static_fields = v38->static_fields;
  if ( isAscendingOrder )
  {
    _9__68_0 = (System_Comparison_T__o *)static_fields->__9__68_0;
    if ( !_9__68_0 )
    {
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        v38 = ListViewManager___c_TypeInfo;
      }
      v41 = (Il2CppObject *)v38->static_fields->__9;
      _9__68_0 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_ListViewItem__TypeInfo);
      System_Comparison_object____ctor(_9__68_0, v41, Method_ListViewManager___c__SortItem_b__68_0__, 0);
      v48 = ListViewManager___c_TypeInfo->static_fields;
      v48->__9__68_0 = (struct System_Comparison_ListViewItem__o *)_9__68_0;
      p__9__68_0 = (GrandQuestFolderBoardItem_o *)&v48->__9__68_0;
LABEL_29:
      sub_1C71354(p__9__68_0, (int32_t)_9__68_0, v42, v43, v44, v45, v46, v47);
    }
  }
  else
  {
    _9__68_0 = (System_Comparison_T__o *)static_fields->__9__68_1;
    if ( !_9__68_0 )
    {
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        v38 = ListViewManager___c_TypeInfo;
      }
      v50 = (Il2CppObject *)v38->static_fields->__9;
      _9__68_0 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_ListViewItem__TypeInfo);
      System_Comparison_object____ctor(_9__68_0, v50, Method_ListViewManager___c__SortItem_b__68_1__, 0);
      v51 = ListViewManager___c_TypeInfo->static_fields;
      v51->__9__68_1 = (struct System_Comparison_ListViewItem__o *)_9__68_0;
      p__9__68_0 = (GrandQuestFolderBoardItem_o *)&v51->__9__68_1;
      goto LABEL_29;
    }
  }
  System_Collections_Generic_List_object___Sort_58794460(
    v18,
    _9__68_0,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  ListViewManager__CheckFocusItem(this, (System_Collections_Generic_List_ListViewItem__o *)v18, v35, v52);
  this->fields.topItem = 0;
  p_topItem = &this->fields.topItem;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.topItem, 0, v54, v55, v56, v57, v58, v59);
  this->fields.bottomItem = 0;
  p_bottomItem = &this->fields.bottomItem;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.bottomItem, 0, v61, v62, v63, v64, v65, v66);
  this->fields.leftItem = 0;
  p_leftItem = &this->fields.leftItem;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.leftItem, 0, v68, v69, v70, v71, v72, v73);
  p_rightItem = &this->fields.rightItem;
  this->fields.rightItem = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.rightItem, 0, v75, v76, v77, v78, v79, v80);
  index = v35 - 1;
  this->fields.isAllDisp = v37;
  if ( v35 < 1 )
    goto LABEL_64;
  Instance = (__int64)this->fields.scrollView;
  if ( !Instance )
    goto LABEL_94;
  if ( UIScrollView__get_canMoveHorizontally((UIScrollView_o *)Instance, 0) )
  {
    Instance = (__int64)this->fields.itemList;
    if ( !Instance )
      goto LABEL_94;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             0,
             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this->fields.leftItem = (struct ListViewItem_o *)Item;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.leftItem, (int32_t)Item, v88, v89, v90, v91, v92, v93);
    Instance = (__int64)this->fields.itemList;
    if ( !Instance )
      goto LABEL_94;
    v94 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)Instance,
            0,
            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    *p_rightItem = (struct ListViewItem_o *)v94;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.rightItem, (int32_t)v94, v95, v96, v97, v98, v99, v100);
  }
  Instance = (__int64)this->fields.scrollView;
  if ( !Instance )
    goto LABEL_94;
  v144 = selectIndex;
  if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)Instance, 0) )
  {
    Instance = (__int64)this->fields.itemList;
    if ( !Instance )
      goto LABEL_94;
    v101 = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             0,
             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this->fields.topItem = (struct ListViewItem_o *)v101;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.topItem, (int32_t)v101, v102, v103, v104, v105, v106, v107);
    Instance = (__int64)this->fields.itemList;
    if ( !Instance )
      goto LABEL_94;
    v108 = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             0,
             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    *p_bottomItem = (struct ListViewItem_o *)v108;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.bottomItem,
      (int32_t)v108,
      v109,
      v110,
      v111,
      v112,
      v113,
      v114);
  }
  v115 = (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
  for ( i = 0; i != v35; ++i )
  {
    Instance = (__int64)System_Collections_Generic_List_object___get_Item(v18, i, v115);
    if ( !Instance )
      goto LABEL_94;
    *(_DWORD *)(Instance + 24) = i;
    *(_DWORD *)(Instance + 28) = i;
    *(_BYTE *)(Instance + 96) = v37;
    v118 = (struct ListViewItem_o *)Instance;
    Instance = (__int64)this->fields.seed;
    if ( !Instance )
      goto LABEL_94;
    LocalPosition = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)Instance, i, v117);
    v118->fields.basePosition = LocalPosition;
    if ( *p_topItem )
    {
      if ( LocalPosition.fields.y > (*p_topItem)->fields.basePosition.fields.y )
      {
        *p_topItem = v118;
        v125 = &this->fields.topItem;
LABEL_50:
        sub_1C71354((GrandQuestFolderBoardItem_o *)v125, (int32_t)v118, v119, v120, v121, v122, v123, v124);
        goto LABEL_51;
      }
      if ( !*p_bottomItem )
        goto LABEL_94;
      if ( LocalPosition.fields.y < (*p_bottomItem)->fields.basePosition.fields.y )
      {
        v125 = &this->fields.bottomItem;
        *p_bottomItem = v118;
        goto LABEL_50;
      }
    }
LABEL_51:
    if ( !*p_rightItem )
      goto LABEL_58;
    x = v118->fields.basePosition.fields.x;
    if ( x > (*p_rightItem)->fields.basePosition.fields.x )
    {
      *p_rightItem = v118;
      v127 = &this->fields.rightItem;
LABEL_57:
      sub_1C71354((GrandQuestFolderBoardItem_o *)v127, (int32_t)v118, v119, v120, v121, v122, v123, v124);
      goto LABEL_58;
    }
    if ( !*p_leftItem )
      goto LABEL_94;
    if ( x < (*p_leftItem)->fields.basePosition.fields.x )
    {
      v127 = &this->fields.leftItem;
      *p_leftItem = v118;
      goto LABEL_57;
    }
LABEL_58:
    v115 = (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
  }
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                        v18,
                        0,
                        (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !Instance )
    goto LABEL_94;
  *(_BYTE *)(Instance + 96) = 1;
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                        v18,
                        index,
                        (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  selectIndex = v144;
  if ( !Instance )
    goto LABEL_94;
  *(_BYTE *)(Instance + 96) = 1;
  if ( v35 < v145 )
    goto LABEL_64;
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                        v18,
                        index,
                        (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !Instance )
    goto LABEL_94;
  *(_BYTE *)(Instance + 97) = 1;
LABEL_64:
  this->fields.itemSortList = (struct System_Collections_Generic_List_ListViewItem__o *)v18;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.itemSortList, (int32_t)v18, v81, v82, v83, v84, v85, v86);
  this->fields.terminalIndex = -1;
  emptyMessageBase = (UnityEngine_Object_o *)this->fields.emptyMessageBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(emptyMessageBase, 0, 0) )
  {
    Instance = (__int64)this->fields.emptyMessageBase;
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v35 < 1, 0);
      goto LABEL_69;
    }
    goto LABEL_94;
  }
LABEL_69:
  indicator = (UnityEngine_Object_o *)this->fields.indicator;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(indicator, 0, 0) )
  {
    Instance = (__int64)this->fields.indicator;
    if ( !Instance )
      goto LABEL_94;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)Instance + 376LL))(
      Instance,
      (unsigned int)v35,
      *(_QWORD *)(*(_QWORD *)Instance + 384LL));
    this->fields.isIndecatorRefresh = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    Instance = (__int64)this->fields.scrollView;
    if ( !Instance )
      goto LABEL_94;
    UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
  }
  ListViewManager__ClippingTerminationItem(this, v10);
  ListViewManager__ClippingItems(this, 1, 0, v131);
  ((void (__fastcall *)(ListViewManager_o *, const MethodInfo *))this->klass->vtable._5_SetSortButtonImage.methodPtr)(
    this,
    this->klass->vtable._5_SetSortButtonImage.method);
  Instance = (__int64)this->fields.sort;
  if ( !Instance )
LABEL_94:
    sub_1C71608(Instance, v10);
  *(_QWORD *)(Instance + 32) = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(Instance + 32), 0, v132, v133, v134, v135, v136, v137);
  v138 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v138, 0, 0) )
  {
    Instance = (__int64)this->fields.scrollView;
    if ( !Instance )
      goto LABEL_94;
    UIScrollView__DisableSpring((UIScrollView_o *)Instance, 0);
    v139 = this->fields.scrollView;
    if ( !byte_4CC0D09 )
    {
      Instance = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      byte_4CC0D09 = 1;
    }
    if ( !v139 )
      goto LABEL_94;
    UIScrollView__set_currentMomentum(v139, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    if ( selectIndex < 0 )
    {
      Instance = (__int64)this->fields.scrollView;
      if ( !Instance )
        goto LABEL_94;
      UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
      v142 = ListViewManager__GetItem(this, 0, v141);
      ListViewManager__CenterLoopItem(this, v142, v143);
    }
    else if ( !ListViewManager__MoveCenterItem(this, selectIndex, 0, 0, 0.0, v140) )
    {
      Instance = (__int64)this->fields.scrollView;
      if ( !Instance )
        goto LABEL_94;
      UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
    }
  }
}


void ListViewManager__Update(ListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v6; // x3
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *indicator; // x20
  void (*name)(void); // x9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC8B56 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B56 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(indicator, 0, 0) )
          goto LABEL_26;
        transform = (UnityEngine_Component_o *)this->fields.indicator;
        if ( this->fields.centerItem )
        {
          if ( !transform )
            goto LABEL_27;
          name = (void (*)(void))transform->klass[1]._1.name;
        }
        else
        {
          if ( !transform )
            goto LABEL_27;
          name = (void (*)(void))transform->klass[1]._1.name;
        }
        name();
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
        sub_1C71608(transform, v4);
      }
    }
    else
    {
      ListViewManager__ClippingItems(this, 1, 1, v6);
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
    sub_1C71608(this, method);
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
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CC8B3E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B3E = 1;
  }
  memset(&v7, 0, sizeof(v7));
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( !dropObjectList )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    dropObjectList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
  v4 = 0;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
  {
    current = v7.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 += UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
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

  if ( (byte_4CC8B43 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4CC8B43 = 1;
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
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CC8B40 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_ListViewObject__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B40 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C71608(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C71608(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1C71608(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_ListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C71608(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ListViewObject__o *)v3;
}


int32_t ListViewManager__get_ObjectSum(ListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int32_t i; // w19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x20
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CC8B45 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B45 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = 0; ; i += UnityEngine_Object__op_Inequality(v7, 0, 0) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v5 )
      break;
    if ( !v9.fields._current )
      sub_1C71608(v5, v6);
    v7 = *(UnityEngine_Object_o **)((char *)&v9.fields._current->klass + (unsigned __int64)&qword_70);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return i;
}


void ListViewManager__set_IsInput(ListViewManager_o *this, bool value, const MethodInfo *method)
{
  bool v4; // w21
  UnityEngine_Object_o *scrollBar; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UIProgressBar_o *v8; // x19
  float alpha; // s0

  v4 = value;
  if ( (byte_4CC8B3F & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8B3F = 1;
  }
  this->fields.isInput = v4;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(scrollBar, 0, 0);
  if ( v6 )
  {
    v8 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v8 )
      sub_1C71608(v6, v7);
    alpha = UIProgressBar__get_alpha(v8, 0);
    UIProgressBar__set_alpha(v8, alpha, 0);
  }
}


void ListViewManager__set_IsLoop(ListViewManager_o *this, bool value, const MethodInfo *method)
{
  this->fields.isLoop = value;
}


void ListViewManager__FocusSelectItem_d__71___ctor(
        ListViewManager__FocusSelectItem_d__71_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ListViewManager__FocusSelectItem_d__71__MoveNext(
        ListViewManager__FocusSelectItem_d__71_o *this,
        const MethodInfo *method)
{
  ListViewManager__FocusSelectItem_d__71_o *v2; // x19
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  bool result; // w0
  struct ListViewManager_o *_4__this; // x21
  UnityEngine_Object_o *scrollBar; // x20
  struct UIScrollBar_o *v14; // x20
  int32_t index; // w8
  int v16; // w22
  struct ListViewItemSeed_o *seed; // x8
  float x; // s8
  float v19; // s8
  struct System_Collections_Generic_List_ListViewItem__o *list; // x8
  struct ListViewItemSeed_o *v21; // x9
  int size; // w19
  float v23; // s9
  float height; // s0
  float v25; // s0
  ListViewManager_c *klass; // x8
  unsigned int naturalAligment; // w9
  __int64 v28; // x11
  __int64 v29; // x11
  float Float; // s0

  v2 = this;
  if ( (byte_4CC8B6C & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C713B0(&EquipGraphListViewManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C713B0(&System_Math_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&SupportServantEquipListViewManager_TypeInfo);
    sub_1C713B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    this = (ListViewManager__FocusSelectItem_d__71_o *)sub_1C713B0(&StringLiteral_13200/*"SvtEqScrollBarValue"*/);
    byte_4CC8B6C = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      scrollBar = (UnityEngine_Object_o *)_4__this->fields.scrollBar;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (ListViewManager__FocusSelectItem_d__71_o *)UnityEngine_Object__op_Inequality(scrollBar, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_32;
      v14 = _4__this->fields.scrollBar;
      if ( v14 )
      {
        if ( v14->fields.mSize > 0.98 )
        {
LABEL_32:
          result = 0;
          _4__this->fields.lastSelectIndex = -1;
          return result;
        }
        index = v2->fields.index;
        if ( index < 0 )
        {
          klass = _4__this->klass;
          naturalAligment = _4__this->klass->_2.naturalAligment;
          v28 = EquipGraphListViewManager_TypeInfo->_2.naturalAligment;
          if ( naturalAligment >= (unsigned int)v28
            && (EquipGraphListViewManager_c *)klass->_2.typeHierarchy[v28 - 1] == EquipGraphListViewManager_TypeInfo
            || (v29 = SupportServantEquipListViewManager_TypeInfo->_2.naturalAligment,
                naturalAligment >= (unsigned int)v29)
            && (SupportServantEquipListViewManager_c *)klass->_2.typeHierarchy[v29 - 1] == SupportServantEquipListViewManager_TypeInfo )
          {
            Float = UnityEngine_PlayerPrefs__GetFloat((System_String_o *)StringLiteral_13200/*"SvtEqScrollBarValue"*/, 0.0, 0);
            UIProgressBar__set_value((UIProgressBar_o *)v14, Float, 0);
            UnityEngine_PlayerPrefs__SetFloat((System_String_o *)StringLiteral_13200/*"SvtEqScrollBarValue"*/, 0.0, 0);
          }
          else
          {
            UIProgressBar__set_value((UIProgressBar_o *)_4__this->fields.scrollBar, _4__this->fields.scrollBarValue, 0);
            _4__this->fields.scrollBarValue = 0.0;
          }
          goto LABEL_32;
        }
        v16 = index + 1;
        v2->fields.index = index + 1;
        seed = _4__this->fields.seed;
        if ( seed )
        {
          x = seed->fields.arrangementVolume.fields.x;
          this = (ListViewManager__FocusSelectItem_d__71_o *)System_Math_TypeInfo;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v19 = ceilf((float)v16 / x);
          if ( v19 <= 1.0 )
            goto LABEL_32;
          list = v2->fields.list;
          if ( list )
          {
            v21 = _4__this->fields.seed;
            if ( v21 )
            {
              size = list->fields._size;
              v23 = v21->fields.arrangementVolume.fields.x;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              this = (ListViewManager__FocusSelectItem_d__71_o *)_4__this->fields.scrollView;
              if ( this )
              {
                this = (ListViewManager__FocusSelectItem_d__71_o *)UnityEngine_Component__GetComponent_object_(
                                                                     (UnityEngine_Component_o *)this,
                                                                     (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIPanel___);
                if ( this )
                {
                  height = UIPanel__get_height((UIPanel_o *)this, 0);
                  this = (ListViewManager__FocusSelectItem_d__71_o *)_4__this->fields.scrollBar;
                  if ( this )
                  {
                    v25 = ((v19 + 1.0) * 156.0 + -70.0 - height) / (ceilf((float)size / v23) * 156.0 - height);
                    UIProgressBar__set_value((UIProgressBar_o *)this, v25, 0);
                    goto LABEL_32;
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_1C71608(this, method);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
  UnityEngine_WaitForEndOfFrame___ctor(v4, 0);
  v2->fields.__2__current = (Il2CppObject *)v4;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.__2__current, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  result = 1;
  v2->fields.__1__state = 1;
  return result;
}


Il2CppObject *ListViewManager__FocusSelectItem_d__71__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ListViewManager__FocusSelectItem_d__71_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ListViewManager__FocusSelectItem_d__71__System_Collections_IEnumerator_Reset(
        ListViewManager__FocusSelectItem_d__71_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_ListViewManager__FocusSelectItem_d__71_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *ListViewManager__FocusSelectItem_d__71__System_Collections_IEnumerator_get_Current(
        ListViewManager__FocusSelectItem_d__71_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ListViewManager__FocusSelectItem_d__71__System_IDisposable_Dispose(
        ListViewManager__FocusSelectItem_d__71_o *this,
        const MethodInfo *method)
{
  ;
}


void ListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC8B6B & 1) == 0 )
  {
    sub_1C713B0(&ListViewManager___c_TypeInfo);
    byte_4CC8B6B = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(ListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ListViewManager___c_TypeInfo->static_fields->__9 = (struct ListViewManager___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)ListViewManager___c_TypeInfo->static_fields,
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
    sub_1C71608(this, 0);
  return ListViewItem__SortCompUp(a, b, 0);
}


int32_t ListViewManager___c___SortItem_b__68_1(
        ListViewManager___c_o *this,
        ListViewItem_o *a,
        ListViewItem_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C71608(this, 0);
  return ListViewItem__SortCompDown(a, b, 0);
}