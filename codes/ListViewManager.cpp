void ListViewManager___ctor(ListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_c *v3; // x8
  ListViewSort_o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_Stack_T__o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C44706 & 1) == 0 )
  {
    sub_1C37058(&ListViewSort_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Stack_GameObject___ctor__);
    sub_1C37058(&System_Collections_Generic_Stack_GameObject__TypeInfo);
    byte_4C44706 = 1;
  }
  if ( !byte_4C3C81A )
  {
    sub_1C37058(&UnityEngine_Vector2_TypeInfo);
    byte_4C3C81A = 1;
  }
  v3 = UnityEngine_Vector2_TypeInfo;
  this->fields.clipRange = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  this->fields.clipOffset = v3->static_fields->zeroVector;
  v4 = (ListViewSort_o *)sub_1C372A4(ListViewSort_TypeInfo);
  ListViewSort___ctor(v4, 3, 1, 0);
  this->fields.sort = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v4, v5, v6);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.objectList, (int32_t)v7, v8, v9);
  this->fields.isInput = 1;
  v10 = (System_Collections_Generic_Stack_T__o *)sub_1C372A4(System_Collections_Generic_Stack_GameObject__TypeInfo);
  System_Collections_Generic_Stack_object____ctor(
    v10,
    (const MethodInfo_3A031E4 *)Method_System_Collections_Generic_Stack_GameObject___ctor__);
  this->fields.objectStock = (struct System_Collections_Generic_Stack_GameObject__o *)v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.objectStock, (int32_t)v10, v11, v12);
  this->fields.terminalIndex = -2;
  this->fields.lastSelectIndex = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ListViewManager__BackLoopItem(ListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  struct ListViewItem_o *centerItem; // x8
  _DWORD *Item; // x0
  const MethodInfo *v6; // x2
  struct ListViewItem_o *v7; // x8
  _DWORD *v8; // x20
  int32_t v9; // w1
  UnityEngine_Object_o *v10; // x19

  if ( (byte_4C446F0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446F0 = 1;
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
                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          v7 = this->fields.centerItem;
          if ( !v7 )
            goto LABEL_17;
          v8 = Item;
          if ( !Item )
            goto LABEL_17;
          v9 = v7->fields.loopIndex - 1;
          if ( Item[7] != v9 )
          {
            Item[7] = v9;
            Item = this->fields.seed;
            if ( !Item )
              goto LABEL_17;
            *(UnityEngine_Vector3_o *)(v8 + 25) = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)Item, v9, v6);
            v10 = (UnityEngine_Object_o *)*((_QWORD *)v8 + 14);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v10, 0, 0) )
            {
              Item = (_DWORD *)*((_QWORD *)v8 + 14);
              if ( Item )
              {
                ListViewObject__SetTransform((ListViewObject_o *)Item, *(UnityEngine_Vector3_o *)(v8 + 25), 0);
                return;
              }
LABEL_17:
              sub_1C372B4(Item);
            }
          }
        }
      }
    }
  }
}


void ListViewManager__CenterLoopItem(ListViewManager_o *this, ListViewItem_o *centerItem, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  System_Collections_Generic_List_object__o *Item; // x0
  int size; // w26
  int32_t sortIndex; // w22
  int v10; // w8
  int v11; // w28
  int32_t v12; // w20
  int32_t v13; // w23
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_object__o *v15; // x24
  UnityEngine_Object_o *syncRoot; // x25
  const MethodInfo_37A2D54 *v17; // x2
  int32_t v18; // w26
  int32_t v19; // w23
  int32_t v20; // w21
  const MethodInfo *v21; // x2
  System_Collections_Generic_List_object__o *v22; // x22
  UnityEngine_Object_o *v23; // x24
  int32_t v24; // w8
  const MethodInfo *v25; // x3

  if ( (byte_4C446EF & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446EF = 1;
  }
  if ( this->fields.isLoop )
  {
    itemSortList = this->fields.itemSortList;
    if ( itemSortList )
    {
      if ( centerItem && itemSortList->fields._size >= 3 )
      {
        this->fields.centerItem = centerItem;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.centerItem, (int32_t)centerItem, (int32_t)method, v3);
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( !Item )
          goto LABEL_54;
        size = Item->fields._size;
        sortIndex = centerItem->fields.sortIndex;
        if ( size >= 0 )
          v10 = Item->fields._size;
        else
          v10 = size + 1;
        if ( size < 2 )
        {
          v12 = centerItem->fields.sortIndex;
        }
        else
        {
          v11 = (v10 >> 1) - 1;
          if ( sortIndex + 1 < size )
            v12 = sortIndex + 1;
          else
            v12 = 0;
          v13 = centerItem->fields.loopIndex + 1;
          while ( 1 )
          {
            Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  Item,
                                                                  v12,
                                                                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            if ( !Item )
              goto LABEL_54;
            v15 = Item;
            if ( v13 != Item->fields._version )
            {
              Item->fields._version = v13;
              Item = (System_Collections_Generic_List_object__o *)this->fields.seed;
              if ( !Item )
                goto LABEL_54;
              *(UnityEngine_Vector3_o *)((char *)&v15[2].fields._items + 4) = ListViewItemSeed__GetLocalPosition(
                                                                                (ListViewItemSeed_o *)Item,
                                                                                v13,
                                                                                v14);
              syncRoot = (UnityEngine_Object_o *)v15[2].fields._syncRoot;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(syncRoot, 0, 0) )
              {
                Item = (System_Collections_Generic_List_object__o *)v15[2].fields._syncRoot;
                if ( !Item )
                  goto LABEL_54;
                ListViewObject__SetTransform(
                  (ListViewObject_o *)Item,
                  *(UnityEngine_Vector3_o *)((char *)&v15[2].fields._items + 4),
                  0);
              }
            }
            LOBYTE(v15[2].fields._items) = this->fields.isAllDisp;
            Item = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
            if ( !v11 )
              break;
            ++v13;
            if ( v12 + 1 < size )
              ++v12;
            else
              v12 = 0;
            --v11;
            if ( !Item )
              goto LABEL_54;
          }
          if ( !Item )
LABEL_54:
            sub_1C372B4(Item);
        }
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v12,
                                                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Item )
          goto LABEL_54;
        LOBYTE(Item[2].fields._items) = 1;
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( !Item )
          goto LABEL_54;
        v17 = (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
        v18 = size - 1;
        if ( sortIndex - 1 < 0 )
          v19 = v18;
        else
          v19 = sortIndex - 1;
        if ( v19 != v12 )
        {
          v20 = centerItem->fields.loopIndex - 1;
          do
          {
            Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  Item,
                                                                  v19,
                                                                  v17);
            if ( !Item )
              goto LABEL_54;
            v22 = Item;
            if ( v20 != Item->fields._version )
            {
              Item->fields._version = v20;
              Item = (System_Collections_Generic_List_object__o *)this->fields.seed;
              if ( !Item )
                goto LABEL_54;
              *(UnityEngine_Vector3_o *)((char *)&v22[2].fields._items + 4) = ListViewItemSeed__GetLocalPosition(
                                                                                (ListViewItemSeed_o *)Item,
                                                                                v20,
                                                                                v21);
              v23 = (UnityEngine_Object_o *)v22[2].fields._syncRoot;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
              {
                Item = (System_Collections_Generic_List_object__o *)v22[2].fields._syncRoot;
                if ( !Item )
                  goto LABEL_54;
                ListViewObject__SetTransform(
                  (ListViewObject_o *)Item,
                  *(UnityEngine_Vector3_o *)((char *)&v22[2].fields._items + 4),
                  0);
              }
            }
            LOBYTE(v22[2].fields._items) = this->fields.isAllDisp;
            Item = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
            v24 = v19 - 1;
            if ( v19 - 1 < 0 )
              v24 = v18;
            if ( !Item )
              goto LABEL_54;
            v17 = (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
            --v20;
            sortIndex = v19;
            v19 = v24;
          }
          while ( v24 != v12 );
        }
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              sortIndex,
                                                              v17);
        if ( !Item )
          goto LABEL_54;
        LOBYTE(Item[2].fields._items) = 1;
        this->fields.terminalIndex = sortIndex;
        ListViewManager__ClippingItems(this, 0, 0, v25);
      }
    }
  }
}


void ListViewManager__CheckEmptyMessageBase(ListViewManager_o *this, bool IsActive, const MethodInfo *method)
{
  UnityEngine_GameObject_o *emptyMessageBase; // x0

  emptyMessageBase = this->fields.emptyMessageBase;
  if ( !emptyMessageBase )
    sub_1C372B4(0);
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
    UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v8, 0);
  }
}


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
  if ( (byte_4C44704 & 1) == 0 )
  {
    this = (ListViewManager_o *)sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4C44704 = 1;
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
    sub_1C372B4(this);
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
    sub_1C372B4(0);
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
  if ( (byte_4C44703 & 1) == 0 )
  {
    this = (ListViewManager_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C44703 = 1;
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
    sub_1C372B4(this);
  }
}


void ListViewManager__ClearScrollBarValue(ListViewManager_o *this, bool clearMaterialIdx, const MethodInfo *method)
{
  if ( (byte_4C446E9 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_13193/*"SvtEqScrollBarValue"*/);
    byte_4C446E9 = 1;
  }
  UnityEngine_PlayerPrefs__SetFloat((System_String_o *)StringLiteral_13193/*"SvtEqScrollBarValue"*/, 0.0, 0);
  this->fields.scrollBarValue = 0.0;
  if ( clearMaterialIdx )
    this->fields.lastSelectIndex = -1;
}


bool ListViewManager__ClippingItem(ListViewManager_o *this, ListViewObject_o *obj, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C446EA & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446EA = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0, 0);
  if ( v5 )
    return 0;
  if ( !obj )
    sub_1C372B4(v5);
  return ListViewManager__ClippingItem_43820548(this, obj->fields.linkItem, v6);
}


bool ListViewManager__ClippingItem_43820548(ListViewManager_o *this, ListViewItem_o *item, const MethodInfo *method)
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
    sub_1C372B4(scrollView);
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
  __int128 v4; // q12
  struct ListViewItem_o *centerItem; // x27
  struct ListViewItem_o **p_centerItem; // x22
  void *scrollView; // x0
  float v11; // s13
  float v12; // s14
  float v13; // s15
  float v14; // s10
  int terminalIndex; // w1
  int v16; // w8
  const MethodInfo *v17; // x2
  int32_t loopIndex; // w8
  int32_t v19; // w9
  void *v20; // x23
  int v21; // w9
  float v22; // s11
  float v23; // s12
  int v24; // w24
  float x; // s8
  float y; // s9
  float v27; // s0
  float v28; // s0
  float v29; // s12
  float v30; // s11
  bool canMoveHorizontally; // w8
  float v32; // s12
  float v33; // s11
  bool canMoveVertically; // w0
  float v35; // s0
  float v36; // s1
  UnityEngine_Object_o *v37; // x24
  UnityEngine_Object_o *v38; // x21
  int32_t v39; // w29
  int32_t v40; // w25
  char *v41; // x23
  float v42; // s0
  float v43; // s1
  char *v44; // x24
  _BOOL4 v45; // w9
  _BOOL4 v46; // w10
  float v47; // s1
  int v48; // w9
  int32_t v49; // w9
  const MethodInfo *v50; // x2
  int32_t v51; // w1
  _BYTE *v52; // x24
  UnityEngine_Object_o *v53; // x26
  int32_t v54; // w1
  const MethodInfo *v55; // x2
  int32_t v56; // w1
  _BYTE *v57; // x23
  UnityEngine_Object_o *v58; // x26
  int32_t v59; // w23
  UnityEngine_Object_o *v60; // x24
  __int64 v61; // x8
  const MethodInfo *v62; // x2
  struct ListViewItem_o **p_horizontalItem; // x24
  struct ListViewItem_o **p_verticalItem; // x23
  float v65; // s8
  float v66; // s11
  __int128 v67; // q9
  _BOOL8 v68; // x0
  ListViewItem_o *current; // x25
  float v70; // s8
  float v71; // s11
  _BOOL4 v72; // w20
  Il2CppClass *klass; // x26
  const MethodInfo *v74; // x2
  ListViewObject_o *viewObject; // x1
  UnityEngine_Object_o *v76; // x26
  UIScrollView_o *v77; // x0
  bool v78; // w26
  UIScrollView_o *v79; // x0
  bool v80; // w0
  char v81; // w2
  const MethodInfo *v82; // x3
  float v83; // s0
  char v84; // w2
  const MethodInfo *v85; // x3
  char v86; // w2
  const MethodInfo *v87; // x3
  char v88; // w2
  const MethodInfo *v89; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UnityEngine_Object_o *indicator; // x21
  const MethodInfo *v92; // x1
  void (*v93)(void); // x9
  float position; // [xsp+0h] [xbp-F0h]
  float v95; // [xsp+4h] [xbp-ECh]
  float v96; // [xsp+4h] [xbp-ECh]
  float v97; // [xsp+8h] [xbp-E8h]
  float v98; // [xsp+Ch] [xbp-E4h]
  bool v99; // [xsp+10h] [xbp-E0h]
  float v100; // [xsp+14h] [xbp-DCh]
  float v101; // [xsp+14h] [xbp-DCh]
  System_Collections_Generic_List_Enumerator_object__o v102; // [xsp+18h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v103; // [xsp+30h] [xbp-C0h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C446EE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446EE = 1;
  }
  memset(&v103, 0, sizeof(v103));
  centerItem = this->fields.centerItem;
  p_centerItem = &this->fields.centerItem;
  this->fields.centerItem = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.centerItem, 0, isCenterCheck, method);
  if ( this->fields.itemSortList )
  {
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_108;
    v99 = isIndicatorUpdate;
    scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0);
    if ( !scrollView )
      goto LABEL_108;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0);
    v97 = this->fields.clipOffset.fields.x - localPosition.fields.x;
    v98 = this->fields.clipOffset.fields.y - localPosition.fields.y;
    localPosition.fields.x = this->fields.clipRange.fields.x * 0.5;
    localPosition.fields.y = this->fields.clipRange.fields.y * 0.5;
    v11 = v97 - localPosition.fields.x;
    v12 = v97 + localPosition.fields.x;
    v13 = v98 + localPosition.fields.y;
    v14 = v98 - localPosition.fields.y;
    if ( this->fields.isLoop )
    {
      terminalIndex = this->fields.terminalIndex;
      if ( (terminalIndex & 0x80000000) == 0 )
      {
        scrollView = this->fields.itemSortList;
        if ( !scrollView )
          goto LABEL_108;
        v16 = *((_DWORD *)scrollView + 6);
        if ( v16 >= 3 )
        {
          if ( terminalIndex <= 0 )
            v39 = *((_DWORD *)scrollView + 6);
          else
            v39 = this->fields.terminalIndex;
          scrollView = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)scrollView,
                         terminalIndex,
                         (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !this->fields.itemSortList )
            goto LABEL_108;
          v40 = v39 - 1;
          v41 = (char *)scrollView;
          scrollView = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)this->fields.itemSortList,
                         v39 - 1,
                         (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !v41 )
            goto LABEL_108;
          v43 = *((float *)v41 + 25);
          v42 = *((float *)v41 + 26);
          v44 = (char *)scrollView;
          v45 = v43 < v11;
          v46 = v43 > v12;
          if ( !scrollView )
            goto LABEL_108;
          v47 = *((float *)scrollView + 26);
          v48 = v45 || v46 || v42 > v13;
          if ( v42 < v14
            || v48 == 1
            || v47 < v14
            || *((float *)scrollView + 25) < v11
            || *((float *)scrollView + 25) > v12
            || v47 > v13 )
          {
            if ( v48 & 1 | (v42 < v14) )
            {
              if ( *((float *)scrollView + 25) < v11 || *((float *)scrollView + 25) > v12 || v47 > v13 || v47 < v14 )
                goto LABEL_89;
              scrollView = this->fields.itemSortList;
              if ( !scrollView )
                goto LABEL_108;
              v49 = this->fields.terminalIndex;
              v40 = v49 < *((_DWORD *)scrollView + 6) - 1 ? v49 + 1 : 0;
              scrollView = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)scrollView,
                             v40,
                             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              v44[96] = this->fields.isAllDisp;
              v41[96] = 1;
              v51 = *((_DWORD *)v44 + 7) + 1;
              *((_DWORD *)v41 + 7) = v51;
              if ( !this->fields.seed )
                goto LABEL_108;
              v52 = scrollView;
              *(UnityEngine_Vector3_o *)(v41 + 100) = ListViewItemSeed__GetLocalPosition(this->fields.seed, v51, v50);
              v53 = (UnityEngine_Object_o *)*((_QWORD *)v41 + 14);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              scrollView = (void *)UnityEngine_Object__op_Inequality(v53, 0, 0);
              if ( ((unsigned __int8)scrollView & 1) != 0 )
              {
                scrollView = (void *)*((_QWORD *)v41 + 14);
                if ( !scrollView )
                  goto LABEL_108;
                ListViewObject__SetTransform((ListViewObject_o *)scrollView, *(UnityEngine_Vector3_o *)(v41 + 100), 0);
              }
              if ( !v52 )
                goto LABEL_108;
              v52[96] = 1;
            }
            else
            {
              if ( v39 <= 1 )
              {
                scrollView = this->fields.itemSortList;
                if ( !scrollView )
                  goto LABEL_108;
                v54 = *((_DWORD *)scrollView + 6) - 1;
              }
              else
              {
                scrollView = this->fields.itemSortList;
                if ( !scrollView )
                  goto LABEL_108;
                v54 = v39 - 2;
              }
              scrollView = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)scrollView,
                             v54,
                             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              v41[96] = this->fields.isAllDisp;
              v44[96] = 1;
              v56 = *((_DWORD *)v41 + 7) - 1;
              *((_DWORD *)v44 + 7) = v56;
              if ( !this->fields.seed )
                goto LABEL_108;
              v57 = scrollView;
              *(UnityEngine_Vector3_o *)(v44 + 100) = ListViewItemSeed__GetLocalPosition(this->fields.seed, v56, v55);
              v58 = (UnityEngine_Object_o *)*((_QWORD *)v44 + 14);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              scrollView = (void *)UnityEngine_Object__op_Inequality(v58, 0, 0);
              if ( ((unsigned __int8)scrollView & 1) != 0 )
              {
                scrollView = (void *)*((_QWORD *)v44 + 14);
                if ( !scrollView )
                  goto LABEL_108;
                ListViewObject__SetTransform((ListViewObject_o *)scrollView, *(UnityEngine_Vector3_o *)(v44 + 100), 0);
              }
              if ( !v57 )
                goto LABEL_108;
              v57[96] = 1;
            }
            this->fields.terminalIndex = v40;
          }
        }
        else if ( centerItem && v16 == 2 )
        {
          scrollView = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)scrollView,
                         centerItem->fields.index == 0,
                         (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !scrollView )
            goto LABEL_108;
          loopIndex = centerItem->fields.loopIndex;
          v19 = *((_DWORD *)scrollView + 7);
          v20 = scrollView;
          scrollView = this->fields.seed;
          v21 = loopIndex < v19 ? -1 : 1;
          if ( !scrollView )
            goto LABEL_108;
          v22 = *((float *)v20 + 25);
          v23 = *((float *)v20 + 26);
          v24 = v21 + loopIndex;
          v105 = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)scrollView, v21 + loopIndex, v17);
          position = v105.fields.z;
          x = v105.fields.x;
          y = v105.fields.y;
          scrollView = this->fields.scrollView;
          v27 = v23 - v98;
          if ( v23 <= v98 )
            v27 = v98 - v23;
          v100 = v27;
          v28 = v105.fields.y - v98;
          if ( v105.fields.y <= v98 )
            v28 = v98 - v105.fields.y;
          v95 = v28;
          if ( !scrollView )
            goto LABEL_108;
          v29 = x <= v97 ? v97 - x : x - v97;
          v30 = v22 <= v97 ? v97 - v22 : v22 - v97;
          canMoveHorizontally = UIScrollView__get_canMoveHorizontally((UIScrollView_o *)scrollView, 0);
          scrollView = this->fields.scrollView;
          v32 = canMoveHorizontally ? v29 + 0.0 : 0.0;
          v33 = canMoveHorizontally ? v30 + 0.0 : 0.0;
          if ( !scrollView )
            goto LABEL_108;
          canMoveVertically = UIScrollView__get_canMoveVertically((UIScrollView_o *)scrollView, 0);
          v35 = v100 + v33;
          v36 = v95 + v32;
          if ( !canMoveVertically )
          {
            v36 = v32;
            v35 = v33;
          }
          if ( v36 < v35 )
          {
            *((_DWORD *)v20 + 7) = v24;
            *((float *)v20 + 25) = x;
            *((float *)v20 + 26) = y;
            v37 = (UnityEngine_Object_o *)*((_QWORD *)v20 + 14);
            *((float *)v20 + 27) = position;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v37, 0, 0) )
            {
              scrollView = (void *)*((_QWORD *)v20 + 14);
              if ( !scrollView )
                goto LABEL_108;
              v106.fields.z = position;
              v106.fields.x = x;
              v106.fields.y = y;
              ListViewObject__SetTransform((ListViewObject_o *)scrollView, v106, 0);
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
      v59 = 0;
      while ( v59 < *((_DWORD *)scrollView + 6) )
      {
        scrollView = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)scrollView,
                       v59,
                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !scrollView )
          goto LABEL_108;
        v60 = (UnityEngine_Object_o *)*((_QWORD *)scrollView + 14);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v60, 0, 0) )
        {
          scrollView = this->fields.itemSortList;
          if ( !scrollView )
            goto LABEL_108;
          scrollView = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)scrollView,
                         v59,
                         (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !scrollView )
            goto LABEL_108;
          if ( !*((_BYTE *)scrollView + 96) )
          {
            scrollView = this->fields.itemSortList;
            if ( !scrollView )
              goto LABEL_108;
            scrollView = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)scrollView,
                           v59,
                           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            if ( !scrollView )
              goto LABEL_108;
            v61 = *((_QWORD *)scrollView + 14);
            if ( !v61 )
              goto LABEL_108;
            if ( !*(_BYTE *)(v61 + 112) )
            {
              scrollView = this->fields.itemSortList;
              if ( !scrollView )
                goto LABEL_108;
              scrollView = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)scrollView,
                             v59,
                             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !scrollView )
                goto LABEL_108;
              ListViewManager__ReleaseObjectExtra(this, *((ListViewObject_o **)scrollView + 14), v62);
            }
          }
        }
        scrollView = this->fields.itemSortList;
        ++v59;
        if ( !scrollView )
          goto LABEL_108;
      }
    }
    else if ( !scrollView )
    {
      goto LABEL_108;
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v102,
      (System_Collections_Generic_List_object__o *)scrollView,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    p_horizontalItem = &this->fields.horizontalItem;
    p_verticalItem = &this->fields.verticalItem;
    v65 = 0.0;
    v66 = 0.0;
    v103 = v102;
    LODWORD(v4) = 0;
LABEL_111:
    v96 = v65;
LABEL_112:
    v67 = v4;
    v101 = v66;
LABEL_113:
    v4 = v67;
    while ( 1 )
    {
      v68 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v103,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v68 )
        break;
      current = (ListViewItem_o *)v103.fields._current;
      if ( !v103.fields._current )
        sub_1C372B4(v68);
      v71 = *((float *)&v103.fields._current[6].klass + 1);
      v70 = *(float *)&v103.fields._current[6].monitor;
      if ( LOBYTE(v103.fields._current[6].klass) )
        v72 = 1;
      else
        v72 = v70 >= v14 && v71 >= v11 && v71 <= v12 && v70 <= v13;
      klass = v103.fields._current[7].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0, 0) )
      {
        if ( v72 )
          ListViewManager__MakeObject(this, current, v74);
      }
      else if ( !v72 )
      {
        viewObject = current->fields.viewObject;
        if ( this->fields.execObjectExtraFlag )
          ListViewManager__ReleaseObjectExtra(this, viewObject, v74);
        else
          ListViewManager__ReleaseObject_43821264(this, viewObject, v74);
      }
      v76 = (UnityEngine_Object_o *)current->fields.viewObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v76, 0, 0) )
      {
        v77 = this->fields.scrollView;
        if ( !v77 )
          sub_1C372B4(0);
        v78 = UIScrollView__get_canMoveHorizontally(v77, 0);
        v79 = this->fields.scrollView;
        if ( !v79 )
          sub_1C372B4(0);
        v80 = UIScrollView__get_canMoveVertically(v79, 0);
        if ( (current->fields.index & 0x80000000) == 0 )
        {
          if ( v71 <= v97 )
            v66 = v97 - v71;
          else
            v66 = v71 - v97;
          if ( v70 <= v98 )
            v65 = v98 - v70;
          else
            v65 = v70 - v98;
          v83 = v66 + 0.0;
          if ( !v78 )
            v83 = 0.0;
          if ( v80 )
            *(float *)&v67 = v65 + v83;
          else
            *(float *)&v67 = v83;
          if ( !*p_centerItem )
          {
            *p_centerItem = current;
            sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.centerItem, (int32_t)current, v81, v82);
            *p_horizontalItem = current;
            sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.horizontalItem, (int32_t)current, v84, v85);
            *p_verticalItem = current;
            sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.verticalItem, (int32_t)current, v86, v87);
            goto LABEL_113;
          }
          if ( *(float *)&v67 < *(float *)&v4 )
          {
            *p_centerItem = current;
            sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.centerItem, (int32_t)current, v81, v82);
            v4 = v67;
          }
          if ( v66 >= v101 )
          {
            v66 = v101;
          }
          else
          {
            *p_horizontalItem = current;
            sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.horizontalItem, (int32_t)current, v81, v82);
          }
          if ( v65 < v96 )
          {
            *p_verticalItem = current;
            sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.verticalItem, (int32_t)current, v81, v82);
            goto LABEL_111;
          }
          goto LABEL_112;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v103,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemSortList = this->fields.itemSortList;
    if ( !itemSortList )
      goto LABEL_108;
    if ( itemSortList->fields._size <= 1 )
    {
      *p_horizontalItem = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.horizontalItem, 0, v88, v89);
    }
    else
    {
      if ( v101 > 10.0 )
      {
        *p_horizontalItem = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.horizontalItem, 0, v88, v89);
      }
      if ( v96 <= 10.0 )
      {
        if ( isCenterCheck )
        {
LABEL_161:
          indicator = (UnityEngine_Object_o *)this->fields.indicator;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(indicator, 0, 0) || !v99 )
            goto LABEL_177;
          if ( centerItem != *p_centerItem )
          {
            scrollView = this->fields.indicator;
            if ( *p_centerItem )
            {
              if ( !scrollView )
                goto LABEL_108;
              v93 = *(void (**)(void))(*(_QWORD *)scrollView + 392LL);
            }
            else
            {
              if ( !scrollView )
                goto LABEL_108;
              v93 = *(void (**)(void))(*(_QWORD *)scrollView + 392LL);
            }
            v93();
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
              ListViewManager__PushObjectOutSideClipPosition(this, v92);
            return;
          }
LABEL_108:
          sub_1C372B4(scrollView);
        }
LABEL_160:
        *p_centerItem = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.centerItem, 0, v88, v89);
        goto LABEL_161;
      }
    }
    *p_verticalItem = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.verticalItem, 0, v88, v89);
    if ( isCenterCheck )
      goto LABEL_161;
    goto LABEL_160;
  }
  if ( centerItem )
  {
    v38 = (UnityEngine_Object_o *)this->fields.indicator;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v38, 0, 0) && isIndicatorUpdate )
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
  Il2CppObject *current; // x23
  UnityEngine_Object_o *klass; // x20
  const MethodInfo *v7; // x2
  _BOOL8 v8; // x0
  ListViewItem_o *v9; // x20
  Il2CppClass *v10; // x21
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C446ED & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446ED = 1;
  }
  memset(&v13, 0, sizeof(v13));
  itemSortList = this->fields.itemSortList;
  if ( itemSortList )
  {
    if ( this->fields.isLoop )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v12,
        (System_Collections_Generic_List_object__o *)itemSortList,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v13 = v12;
      while ( 1 )
      {
        v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v13,
               (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v4 )
          break;
        current = v13.fields._current;
        if ( !v13.fields._current )
          sub_1C372B4(v4);
        LOBYTE(v13.fields._current[6].klass) = 0;
        klass = (UnityEngine_Object_o *)current[7].klass;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
          ListViewManager__ReleaseObject_43821264(this, (ListViewObject_o *)current[7].klass, v7);
      }
    }
    else
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v12,
        (System_Collections_Generic_List_object__o *)itemSortList,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v13 = v12;
      while ( 1 )
      {
        v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v13,
               (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v8 )
          break;
        v9 = (ListViewItem_o *)v13.fields._current;
        if ( !v13.fields._current )
          sub_1C372B4(v8);
        v10 = v13.fields._current[7].klass;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0, 0) )
        {
          if ( v9->fields.isTermination )
            ListViewManager__MakeObject(this, v9, v11);
        }
        else if ( !v9->fields.isTermination )
        {
          ListViewManager__ReleaseObject_43821264(this, v9->fields.viewObject, v11);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ListViewManager__CreateList(ListViewManager_o *this, int32_t sum, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Component_o *transform; // x0
  struct UIScrollView_o *v10; // x8
  struct UIPanel_o *mPanel; // x20
  float x; // s8
  float y; // s9
  System_Collections_Generic_List_object__o *dropList; // x0
  Il2CppObject *current; // x19
  _BOOL8 v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C446DD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem___ctor___78057072);
    sub_1C37058(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446DD = 1;
  }
  memset(&v17, 0, sizeof(v17));
  ListViewManager__DestroyList(this, *(const MethodInfo **)&sum);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor_58337376(
    v5,
    sum,
    (const MethodInfo_37A2860 *)Method_System_Collections_Generic_List_ListViewItem___ctor___78057072);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v5;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.itemList, (int32_t)v5, v6, v7);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v10 = this->fields.scrollView;
    if ( !v10 )
      goto LABEL_26;
    mPanel = v10->fields.mPanel;
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
            v18.fields.x = -x;
            v18.fields.y = -y;
            v18.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v18, 0);
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
      sub_1C372B4(transform);
    }
  }
LABEL_15:
  dropList = (System_Collections_Generic_List_object__o *)this->fields.dropList;
  if ( dropList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      dropList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_UIDragDropListViewSurface__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__MoveNext__) )
    {
      current = v17.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
      if ( v16 )
      {
        if ( !current )
          sub_1C372B4(v16);
        UIDragDropListViewSurface__DragEnd((UIDragDropListViewSurface_o *)current, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__Dispose__);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v5, 0);
}


void ListViewManager__DestroyList(ListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *objectList; // x0
  Il2CppObject *current; // x21
  const MethodInfo *v13; // x3
  struct System_Collections_Generic_List_GameObject__o *v14; // x8
  int32_t size; // w2
  int v16; // w9
  Il2CppObject *v17; // x21
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v19; // x20
  UnityEngine_Object_o *scrollBar; // x20
  UnityEngine_Object_o *emptyMessageBase; // x20
  UnityEngine_Object_o *indicator; // x20
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C446DE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Stack_GameObject__Pop__);
    sub_1C37058(&Method_System_Collections_Generic_Stack_GameObject__get_Count__);
    byte_4C446DE = 1;
  }
  memset(&v24, 0, sizeof(v24));
  this->fields.centerItem = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.centerItem, 0, v2, v3);
  this->fields.horizontalItem = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.horizontalItem, 0, v5, v6);
  this->fields.verticalItem = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.verticalItem, 0, v7, v8);
  this->fields.itemSortList = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.itemSortList, 0, v9, v10);
  if ( this->fields.itemList )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    if ( !objectList )
      goto LABEL_18;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      objectList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v24 = v23;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v24,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v24.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v24,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v14 = this->fields.objectList;
    if ( !v14 )
      goto LABEL_18;
    size = v14->fields._size;
    v16 = v14->fields._version + 1;
    v14->fields._size = 0;
    v14->fields._version = v16;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v14->fields._items, 0, size, 0);
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectStock;
    if ( !objectList )
      goto LABEL_18;
    while ( objectList->fields._size > 0 )
    {
      v17 = System_Collections_Generic_Stack_object___Pop(
              (System_Collections_Generic_Stack_T__o *)objectList,
              (const MethodInfo_3A037AC *)Method_System_Collections_Generic_Stack_GameObject__Pop__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752((UnityEngine_Object_o *)v17, 0);
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectStock;
      if ( !objectList )
        goto LABEL_18;
    }
    this->fields.itemList = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.itemList, 0, size, v13);
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
    v19 = this->fields.scrollView;
    if ( !byte_4C3C921 )
    {
      objectList = (System_Collections_Generic_List_object__o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    if ( !v19 )
      goto LABEL_18;
    UIScrollView__set_currentMomentum(v19, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
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
    sub_1C372B4(objectList);
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
  System_Collections_Generic_List_object__o *v11; // x23
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w21
  struct ListViewItem_o **p_topItem; // x25
  bool v17; // w22
  struct ListViewItem_o **p_bottomItem; // x26
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct ListViewItem_o **p_leftItem; // x27
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct ListViewItem_o **p_rightItem; // x28
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  const MethodInfo_37A2D54 **v29; // x20
  Il2CppObject *Item; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  Il2CppObject *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  Il2CppObject *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w29
  const MethodInfo_37A2D54 **v43; // x21
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct ListViewItem_o *v46; // x20
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  float y; // s0
  struct ListViewItem_o **v54; // x0
  float x; // s0
  struct ListViewItem_o **v56; // x0
  UnityEngine_Object_o *emptyMessageBase; // x20
  UnityEngine_Object_o *indicator; // x20
  UnityEngine_Object_o *scrollView; // x20
  const MethodInfo *v60; // x1
  const MethodInfo *v61; // x3
  UnityEngine_Object_o *v62; // x20
  UIScrollView_o *v63; // x20
  const MethodInfo *v64; // x4
  const MethodInfo *v65; // x2
  ListViewItem_o *v66; // x1
  const MethodInfo *v67; // x2
  int32_t v68; // [xsp+0h] [xbp-70h]
  int32_t index; // [xsp+8h] [xbp-68h]
  int v70; // [xsp+Ch] [xbp-64h]

  if ( (byte_4C446E4 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    byte_4C446E4 = 1;
  }
  Instance = (SwitchParameterDisplayManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  SwitchParameterDisplayManager__Reset(Instance, 0);
  ListViewManager__ReleaseObject(this, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_73;
  size = itemList->fields._size;
  this->fields.topItem = 0;
  p_topItem = &this->fields.topItem;
  v17 = isAllDisp;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.topItem, 0, v12, v13);
  this->fields.bottomItem = 0;
  p_bottomItem = &this->fields.bottomItem;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bottomItem, 0, v19, v20);
  this->fields.leftItem = 0;
  p_leftItem = &this->fields.leftItem;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.leftItem, 0, v22, v23);
  p_rightItem = &this->fields.rightItem;
  this->fields.rightItem = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.rightItem, 0, v25, v26);
  index = size - 1;
  v70 = size;
  this->fields.isAllDisp = isAllDisp;
  if ( size < 1 )
    goto LABEL_44;
  Instance = (SwitchParameterDisplayManager_o *)this->fields.scrollView;
  if ( !Instance )
    goto LABEL_73;
  v29 = (const MethodInfo_37A2D54 **)&Method_System_Collections_Generic_List_ListViewItem__get_Item__;
  if ( UIScrollView__get_canMoveHorizontally((UIScrollView_o *)Instance, 0) )
  {
    Instance = (SwitchParameterDisplayManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_73;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             0,
             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this->fields.leftItem = (struct ListViewItem_o *)Item;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.leftItem, (int32_t)Item, v31, v32);
    Instance = (SwitchParameterDisplayManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_73;
    v33 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)Instance,
            0,
            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    *p_rightItem = (struct ListViewItem_o *)v33;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.rightItem, (int32_t)v33, v34, v35);
  }
  Instance = (SwitchParameterDisplayManager_o *)this->fields.scrollView;
  if ( !Instance )
    goto LABEL_73;
  v68 = addEmptyTarminal;
  if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)Instance, 0) )
  {
    Instance = (SwitchParameterDisplayManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_73;
    v36 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)Instance,
            0,
            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this->fields.topItem = (struct ListViewItem_o *)v36;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.topItem, (int32_t)v36, v37, v38);
    Instance = (SwitchParameterDisplayManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_73;
    v39 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)Instance,
            0,
            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    *p_bottomItem = (struct ListViewItem_o *)v39;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bottomItem, (int32_t)v39, v40, v41);
  }
  v42 = 0;
  do
  {
    Instance = (SwitchParameterDisplayManager_o *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_73;
    v43 = v29;
    Instance = (SwitchParameterDisplayManager_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)Instance,
                                                    v42,
                                                    *v29);
    if ( !Instance )
      goto LABEL_73;
    v46 = (struct ListViewItem_o *)Instance;
    LODWORD(Instance->fields.m_CancellationTokenSource) = v42;
    HIDWORD(Instance->fields.m_CancellationTokenSource) = v42;
    LOBYTE(Instance[1].fields.FADE_TIME) = v17;
    if ( !v11 )
      goto LABEL_73;
    items = v11->fields._items;
    v48 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++v11->fields._version;
    if ( !items )
      goto LABEL_73;
    v49 = v11->fields._size;
    if ( (unsigned int)v49 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v11,
        (Il2CppObject *)Instance,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
    }
    else
    {
      v50 = &items->obj.klass + v49;
      v11->fields._size = v49 + 1;
      v50[4] = (Il2CppClass *)v46;
      sub_1C36FFC((CGThumbnailListItem_o *)(v50 + 4), (int32_t)v46, v44, v45);
    }
    if ( *p_topItem )
    {
      y = v46->fields.basePosition.fields.y;
      if ( y > (*p_topItem)->fields.basePosition.fields.y )
      {
        *p_topItem = v46;
        v54 = &this->fields.topItem;
LABEL_30:
        sub_1C36FFC((CGThumbnailListItem_o *)v54, (int32_t)v46, v51, v52);
        goto LABEL_31;
      }
      if ( !*p_bottomItem )
        goto LABEL_73;
      if ( y < (*p_bottomItem)->fields.basePosition.fields.y )
      {
        v54 = &this->fields.bottomItem;
        *p_bottomItem = v46;
        goto LABEL_30;
      }
    }
LABEL_31:
    if ( !*p_rightItem )
      goto LABEL_38;
    x = v46->fields.basePosition.fields.x;
    if ( x > (*p_rightItem)->fields.basePosition.fields.x )
    {
      *p_rightItem = v46;
      v56 = &this->fields.rightItem;
LABEL_37:
      sub_1C36FFC((CGThumbnailListItem_o *)v56, (int32_t)v46, v51, v52);
      goto LABEL_38;
    }
    if ( !*p_leftItem )
      goto LABEL_73;
    if ( x < (*p_leftItem)->fields.basePosition.fields.x )
    {
      v56 = &this->fields.leftItem;
      *p_leftItem = v46;
      goto LABEL_37;
    }
LABEL_38:
    ++v42;
    v29 = v43;
  }
  while ( v70 != v42 );
  Instance = (SwitchParameterDisplayManager_o *)System_Collections_Generic_List_object___get_Item(v11, 0, *v43);
  if ( !Instance )
    goto LABEL_73;
  LOBYTE(Instance[1].fields.FADE_TIME) = 1;
  Instance = (SwitchParameterDisplayManager_o *)System_Collections_Generic_List_object___get_Item(v11, index, *v43);
  if ( !Instance )
    goto LABEL_73;
  LOBYTE(Instance[1].fields.FADE_TIME) = 1;
  if ( v70 < v68 )
    goto LABEL_44;
  Instance = (SwitchParameterDisplayManager_o *)System_Collections_Generic_List_object___get_Item(v11, index, *v43);
  if ( !Instance )
    goto LABEL_73;
  BYTE1(Instance[1].fields.FADE_TIME) = 1;
LABEL_44:
  this->fields.itemSortList = (struct System_Collections_Generic_List_ListViewItem__o *)v11;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.itemSortList, (int32_t)v11, v27, v28);
  this->fields.terminalIndex = -1;
  emptyMessageBase = (UnityEngine_Object_o *)this->fields.emptyMessageBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(emptyMessageBase, 0, 0) )
  {
    Instance = (SwitchParameterDisplayManager_o *)this->fields.emptyMessageBase;
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v70 < 1, 0);
      goto LABEL_49;
    }
LABEL_73:
    sub_1C372B4(Instance);
  }
LABEL_49:
  indicator = (UnityEngine_Object_o *)this->fields.indicator;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(indicator, 0, 0) )
  {
    Instance = (SwitchParameterDisplayManager_o *)this->fields.indicator;
    if ( !Instance )
      goto LABEL_73;
    ((void (__fastcall *)(SwitchParameterDisplayManager_o *, _QWORD, void *))Instance->klass[1]._1.image)(
      Instance,
      (unsigned int)v70,
      Instance->klass[1]._1.gc_desc);
    this->fields.isIndecatorRefresh = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    Instance = (SwitchParameterDisplayManager_o *)this->fields.scrollView;
    if ( !Instance )
      goto LABEL_73;
    UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
  }
  ListViewManager__ClippingTerminationItem(this, v60);
  ListViewManager__ClippingItems(this, 1, 0, v61);
  v62 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v62, 0, 0) )
  {
    Instance = (SwitchParameterDisplayManager_o *)this->fields.scrollView;
    if ( !Instance )
      goto LABEL_73;
    UIScrollView__DisableSpring((UIScrollView_o *)Instance, 0);
    v63 = this->fields.scrollView;
    if ( !byte_4C3C921 )
    {
      Instance = (SwitchParameterDisplayManager_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    if ( !v63 )
      goto LABEL_73;
    UIScrollView__set_currentMomentum(v63, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    if ( selectIndex < 0 )
    {
      Instance = (SwitchParameterDisplayManager_o *)this->fields.scrollView;
      if ( !Instance )
        goto LABEL_73;
      UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
      v66 = ListViewManager__GetItem(this, 0, v65);
      ListViewManager__CenterLoopItem(this, v66, v67);
    }
    else if ( !ListViewManager__MoveCenterItem(this, selectIndex, 0, 0, 0.0, v64) )
    {
      Instance = (SwitchParameterDisplayManager_o *)this->fields.scrollView;
      if ( !Instance )
        goto LABEL_73;
      UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
    }
  }
}


void ListViewManager__DragMaskEnd(ListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v3; // x0
  Il2CppObject *Component_object; // x19

  if ( (byte_4C446F6 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446F6 = 1;
  }
  v3 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ListViewManager_o *, const MethodInfo *))this->klass->vtable._7_GetDragRoot.methodPtr)(
                                     this,
                                     this->klass->vtable._7_GetDragRoot.method);
  if ( !v3 )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v3,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
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
    sub_1C372B4(v3);
  }
}


void ListViewManager__DragMaskStart(ListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  Il2CppObject *Component_object; // x20
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v6; // x19

  if ( (byte_4C446F5 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446F5 = 1;
  }
  v3 = ((__int64 (__fastcall *)(ListViewManager_o *, const MethodInfo *))this->klass->vtable._7_GetDragRoot.methodPtr)(
         this,
         this->klass->vtable._7_GetDragRoot.method);
  if ( !v3 )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v3,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
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
      v6 = this->fields.scrollView;
      if ( !byte_4C3C921 )
      {
        v3 = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C921 = 1;
      }
      if ( v6 )
      {
        UIScrollView__set_currentMomentum(v6, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        return;
      }
    }
LABEL_18:
    sub_1C372B4(v3);
  }
}


void ListViewManager__EndScrollAnim(ListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Action_o *callbackAfterScroll; // x19
  CGThumbnailListItem_o *p_callbackAfterScroll; // x0

  callbackAfterScroll = this->fields.callbackAfterScroll;
  if ( callbackAfterScroll )
  {
    p_callbackAfterScroll = (CGThumbnailListItem_o *)&this->fields.callbackAfterScroll;
    p_callbackAfterScroll->klass = 0;
    sub_1C36FFC(p_callbackAfterScroll, 0, v2, v3);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C446E7 & 1) == 0 )
  {
    sub_1C37058(&ListViewManager__FocusSelectItem_d__71_TypeInfo);
    byte_4C446E7 = 1;
  }
  v7 = sub_1C372A4(ListViewManager__FocusSelectItem_d__71_TypeInfo);
  ListViewManager__FocusSelectItem_d__71___ctor((ListViewManager__FocusSelectItem_d__71_o *)v7, 0, 0);
  if ( !v7 )
    sub_1C372B4(v8);
  *(_QWORD *)(v7 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 48) = list;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 48), (int32_t)list, v11, v12);
  *(_DWORD *)(v7 + 40) = index;
  return (System_Collections_IEnumerator_o *)v7;
}


void ListViewManager__FowardLoopItem(ListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemSortList; // x0
  struct ListViewItem_o *centerItem; // x8
  _DWORD *Item; // x0
  const MethodInfo *v6; // x2
  struct ListViewItem_o *v7; // x8
  _DWORD *v8; // x20
  int32_t v9; // w1
  UnityEngine_Object_o *v10; // x19

  if ( (byte_4C446F1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446F1 = 1;
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
                   (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          v7 = this->fields.centerItem;
          if ( !v7 )
            goto LABEL_17;
          v8 = Item;
          if ( !Item )
            goto LABEL_17;
          v9 = v7->fields.loopIndex + 1;
          if ( Item[7] != v9 )
          {
            Item[7] = v9;
            Item = this->fields.seed;
            if ( !Item )
              goto LABEL_17;
            *(UnityEngine_Vector3_o *)(v8 + 25) = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)Item, v9, v6);
            v10 = (UnityEngine_Object_o *)*((_QWORD *)v8 + 14);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v10, 0, 0) )
            {
              Item = (_DWORD *)*((_QWORD *)v8 + 14);
              if ( Item )
              {
                ListViewObject__SetTransform((ListViewObject_o *)Item, *(UnityEngine_Vector3_o *)(v8 + 25), 0);
                return;
              }
LABEL_17:
              sub_1C372B4(Item);
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
  struct UIScrollView_o *v13; // x8
  UnityEngine_Object_o *mPanel; // x24
  float x; // s9
  float y; // s8
  float z; // s11
  float w; // s10
  __int64 v19; // kr00_8
  float v20; // s13
  float v21; // s15
  float v22; // s11
  bool result; // w0
  float v24; // s10
  __int64 v25; // [xsp+8h] [xbp-98h] BYREF
  float v26; // [xsp+14h] [xbp-8Ch]
  float v27; // [xsp+18h] [xbp-88h]
  UnityEngine_Vector4_o finalClipRegion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C446F9 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446F9 = 1;
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
  v13 = this->fields.scrollView;
  if ( !v13 )
    goto LABEL_33;
  mPanel = (UnityEngine_Object_o *)v13->fields.mPanel;
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
    &v25,
    v12,
    v12->klass->vtable._4_get_bounds.method);
  v19 = v25;
  v21 = v26;
  v20 = v27;
  v22 = z == 0.0 ? (float)UnityEngine_Screen__get_width(0) : z * 0.5;
  v24 = w == 0.0 ? (float)UnityEngine_Screen__get_height(0) : w * 0.5;
  v12 = this->fields.scrollView;
  if ( !v12 )
    goto LABEL_33;
  if ( UIScrollView__get_canMoveHorizontally(v12, 0) )
  {
    if ( (float)(*(float *)&v19 - v21) < (float)(x - v22) )
      *isLeft = 1;
    if ( (float)(*(float *)&v19 + v21) > (float)(x + v22) )
      *isRight = 1;
  }
  v12 = this->fields.scrollView;
  if ( !v12 )
LABEL_33:
    sub_1C372B4(v12);
  if ( !UIScrollView__get_canMoveVertically(v12, 0) )
    return 1;
  if ( (float)(*((float *)&v19 + 1) - v20) < (float)(y - v24) )
    *isBottom = 1;
  result = 1;
  if ( (float)(*((float *)&v19 + 1) + v20) > (float)(y + v24) )
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
  struct ListViewItemSeed_o *seed; // x8

  if ( (byte_4C446F3 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UIDragDropRoot_TypeInfo);
    byte_4C446F3 = 1;
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
    sub_1C372B4(v6);
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

  if ( (byte_4C446E0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C446E0 = 1;
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
                               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C446E5 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4C446E5 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  itemList = this->fields.itemList;
  if ( !itemList || !this->fields.sort )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v5 = 0;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( !v7.fields._current )
      sub_1C372B4(0);
    v5 += ((__int64 (*)(void))v7.fields._current->klass->vtable[5].methodPtr)() & 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  struct UIScrollView_o *v9; // x8
  UnityEngine_Object_o *mPanel; // x22
  struct UIScrollView_o *v11; // x8
  struct UIScrollView_o *v12; // x8
  struct UIPanel_o *v13; // x9
  struct UnityEngine_Vector2_StaticFields *p_mClipOffset; // x8
  float *p_y; // x9
  bool result; // w0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  float v19; // s1

  if ( (byte_4C446FF & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446FF = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v9 = this->fields.scrollView;
    if ( !v9 )
      goto LABEL_23;
    mPanel = (UnityEngine_Object_o *)v9->fields.mPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(mPanel, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v11 = this->fields.scrollView;
      if ( v11 )
      {
        gameObject = (UnityEngine_Component_o *)v11->fields.mPanel;
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
              v12 = this->fields.scrollView;
              if ( v12 )
              {
                v13 = v12->fields.mPanel;
                if ( v13 )
                {
                  p_mClipOffset = (struct UnityEngine_Vector2_StaticFields *)&v13->fields.mClipOffset;
                  p_y = &v13->fields.mClipOffset.fields.y;
                  result = 1;
                  goto LABEL_22;
                }
              }
            }
          }
        }
      }
LABEL_23:
      sub_1C372B4(gameObject);
    }
  }
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&scroll->fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  scroll->fields.z = z;
  if ( !byte_4C3C81A )
  {
    sub_1C37058(&UnityEngine_Vector2_TypeInfo);
    byte_4C3C81A = 1;
  }
  result = 0;
  p_mClipOffset = UnityEngine_Vector2_TypeInfo->static_fields;
  p_y = &p_mClipOffset->zeroVector.fields.y;
LABEL_22:
  v19 = *p_y;
  offset->fields.x = p_mClipOffset->zeroVector.fields.x;
  offset->fields.y = v19;
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
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C446F8 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446F8 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  dropList = (System_Collections_Generic_List_object__o *)this->fields.dropList;
  if ( !dropList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    dropList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_UIDragDropListViewSurface__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__MoveNext__) )
  {
    current = v6.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v5 )
    {
      if ( !current )
        sub_1C372B4(v5);
      UIDragDropListViewSurface__DragEnd((UIDragDropListViewSurface_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__Dispose__);
}


void ListViewManager__ItemDragStart(ListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dropList; // x0
  Il2CppObject *current; // x19
  _BOOL8 v5; // x0
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C446F7 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446F7 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  dropList = (System_Collections_Generic_List_object__o *)this->fields.dropList;
  if ( !dropList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    dropList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_UIDragDropListViewSurface__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__MoveNext__) )
  {
    current = v6.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v5 )
    {
      if ( !current )
        sub_1C372B4(v5);
      UIDragDropListViewSurface__DragStart((UIDragDropListViewSurface_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__Dispose__);
}


void ListViewManager__JumpItem(ListViewManager_o *this, int32_t index, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  UIScrollView_o *scrollView; // x0
  struct ListViewItemSeed_o *seed; // x8
  bool v8; // w3
  bool v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  struct ListViewItem_o *Item; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *indicator; // x20
  struct ListViewItem_o *centerItem; // x2

  if ( (byte_4C446FB & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446FB = 1;
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
      v8 = 1;
      v9 = 0;
    }
    else
    {
      v9 = 1;
      v8 = 0;
    }
    UIScrollView__RestrictWithinBounds_49228096(scrollView, 1, v9, v8, 0);
    ListViewManager__ClippingItems(this, 0, 0, v10);
    if ( !this->fields.centerItem )
    {
      Item = ListViewManager__GetItem(this, index, v11);
      this->fields.centerItem = Item;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.centerItem, (int32_t)Item, v13, v14);
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
        sub_1C372B4(scrollView);
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
  const MethodInfo *v13; // x3
  bool v14; // w8
  struct UnityEngine_GameObject_o *listDragPrefab; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v21; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v23; // x8

  if ( (byte_4C446EB & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Stack_GameObject__Pop__);
    sub_1C37058(&Method_System_Collections_Generic_Stack_GameObject__get_Count__);
    byte_4C446EB = 1;
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
           (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  else
  {
    v6 = System_Collections_Generic_Stack_object___Pop(
           (System_Collections_Generic_Stack_T__o *)result,
           (const MethodInfo_3A037AC *)Method_System_Collections_Generic_Stack_GameObject__Pop__);
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
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    result = 0;
    if ( v14 )
    {
      if ( Component_object )
      {
        Component_object[2].monitor = this;
        sub_1C36FFC((CGThumbnailListItem_o *)&Component_object[2].monitor, (int32_t)this, v12, v13);
        ((void (__fastcall *)(Il2CppObject *, ListViewItem_o *, struct ListViewItemSeed_o *, const MethodInfo *))Component_object->klass->vtable[6].methodPtr)(
          Component_object,
          item,
          this->fields.seed,
          Component_object->klass->vtable[6].method);
        listDragPrefab = this->fields.listDragPrefab;
        Component_object[3].klass = (Il2CppClass *)listDragPrefab;
        sub_1C36FFC((CGThumbnailListItem_o *)&Component_object[3], (int32_t)listDragPrefab, v16, v17);
        ((void (__fastcall *)(ListViewManager_o *, Il2CppObject *, ListViewItem_o *, const MethodInfo *))this->klass->vtable._4_SetObjectItem.methodPtr)(
          this,
          Component_object,
          item,
          this->klass->vtable._4_SetObjectItem.method);
        result = (ListViewObject_o *)this->fields.objectList;
        if ( result )
        {
          m_CachedPtr = result->fields.m_CachedPtr;
          v21 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++HIDWORD(result->fields.m_CancellationTokenSource);
          if ( m_CachedPtr )
          {
            m_CancellationTokenSource_low = SLODWORD(result->fields.m_CancellationTokenSource);
            if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)result,
                (Il2CppObject *)v9,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
              LODWORD(result->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_QWORD *)(v23 + 32) = v9;
              sub_1C36FFC((CGThumbnailListItem_o *)(v23 + 32), (int32_t)v9, v18, v19);
            }
            return (ListViewObject_o *)Component_object;
          }
        }
      }
LABEL_25:
      sub_1C372B4(result);
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
  float topFocusOffset; // s0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C446FD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446FD = 1;
  }
  memset(&v15, 0, sizeof(v15));
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v15,
          (System_Collections_Generic_List_object__o *)itemSortList,
          (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v15,
                  (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( (ListViewItem_o *)v15.fields._current == v8 )
          {
            viewObject = (UnityEngine_Object_o *)ListViewManager__MakeObject(this, v8, v11);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v15,
          (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
    sub_1C372B4(v12);
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
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C446FA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446FA = 1;
  }
  memset(&v19, 0, sizeof(v19));
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v19,
          (System_Collections_Generic_List_object__o *)itemSortList,
          (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v19,
                  (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( (ListViewItem_o *)v19.fields._current == v13 )
          {
            viewObject = (UnityEngine_Object_o *)ListViewManager__MakeObject(this, v13, v16);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v19,
          (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
        sub_1C372B4(v17);
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
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C446FC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446FC = 1;
  }
  memset(&v16, 0, sizeof(v16));
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v16,
          (System_Collections_Generic_List_object__o *)itemSortList,
          (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v16,
                  (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( (ListViewItem_o *)v16.fields._current == v10 )
          {
            viewObject = (UnityEngine_Object_o *)ListViewManager__MakeObject(this, v10, v13);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v16,
          (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
        sub_1C372B4(v14);
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
  if ( (byte_4C446FE & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_1C37058(&Method_ListViewManager_OnSwipeCenter__);
    this = (ListViewManager_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446FE = 1;
  }
  if ( !go )
    goto LABEL_22;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       go,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
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
                    v11 = (_QWORD *)sub_1C37070(Method_ListViewManager_OnSwipeCenter__);
                  v12 = (System_Reflection_MethodBase_o *)sub_1C3703C(v11, v11[4]);
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
    sub_1C372B4(this);
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

  if ( (byte_4C44702 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Stack_GameObject__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_Stack_GameObject__get_Count__);
    byte_4C44702 = 1;
  }
  objectStock = (System_Collections_Generic_Stack_T__o *)this->fields.objectStock;
  if ( !objectStock )
    goto LABEL_25;
  size = objectStock->fields._size;
  if ( size >= 1 )
  {
    objectStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___ToArray(
                                                             objectStock,
                                                             (const MethodInfo_3A03900 *)Method_System_Collections_Generic_Stack_GameObject__ToArray__);
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
              sub_1C372BC(objectStock);
            }
          }
        }
      }
    }
LABEL_25:
    sub_1C372B4(objectStock);
  }
}


void ListViewManager__ReleaseObject(ListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  _BOOL8 v4; // x0
  Il2CppObject *current; // x20
  Il2CppObject *Component_object; // x21
  _BOOL8 v7; // x0
  System_Collections_Generic_Stack_T__o *objectStock; // x0
  struct System_Collections_Generic_List_GameObject__o *v9; // x8
  int32_t size; // w2
  int v11; // w9
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C446E2 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Stack_GameObject__Push__);
    byte_4C446E2 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v13 = v12;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v4 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_1C372B4(v4);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v13.fields._current,
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( v7 )
    {
      if ( !Component_object )
        sub_1C372B4(v7);
      ListViewObject__ReleaseItem((ListViewObject_o *)Component_object, 0);
      objectStock = (System_Collections_Generic_Stack_T__o *)this->fields.objectStock;
      if ( !objectStock )
        sub_1C372B4(0);
      System_Collections_Generic_Stack_object___Push(
        objectStock,
        current,
        (const MethodInfo_3A0380C *)Method_System_Collections_Generic_Stack_GameObject__Push__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v9 = this->fields.objectList;
  if ( !v9 )
LABEL_20:
    sub_1C372B4(objectList);
  size = v9->fields._size;
  v11 = v9->fields._version + 1;
  v9->fields._size = 0;
  v9->fields._version = v11;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v9->fields._items, 0, size, 0);
}


bool ListViewManager__ReleaseObjectExtra(ListViewManager_o *this, ListViewObject_o *obj, const MethodInfo *method)
{
  Il2CppObject *gameObject; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  int32_t v7; // w0
  int32_t v8; // w1
  System_Collections_Generic_Stack_T__o *objectStock; // x20

  if ( (byte_4C44701 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__IndexOf__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Stack_GameObject__Push__);
    byte_4C44701 = 1;
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
      v7 = System_Collections_Generic_List_object___IndexOf(
             (System_Collections_Generic_List_object__o *)objectList,
             gameObject,
             (const MethodInfo_37A3CC4 *)Method_System_Collections_Generic_List_GameObject__IndexOf__);
      if ( (v7 & 0x80000000) == 0 )
      {
        v8 = v7;
        gameObject = (Il2CppObject *)this->fields.objectList;
        if ( gameObject )
        {
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)gameObject,
            v8,
            (const MethodInfo_37A47F8 *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
          objectStock = (System_Collections_Generic_Stack_T__o *)this->fields.objectStock;
          gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0);
          if ( objectStock )
          {
            System_Collections_Generic_Stack_object___Push(
              objectStock,
              gameObject,
              (const MethodInfo_3A0380C *)Method_System_Collections_Generic_Stack_GameObject__Push__);
            return 1;
          }
        }
LABEL_14:
        sub_1C372B4(gameObject);
      }
    }
  }
  return 0;
}


bool ListViewManager__ReleaseObject_43821264(ListViewManager_o *this, ListViewObject_o *obj, const MethodInfo *method)
{
  Il2CppObject *gameObject; // x0
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  int32_t v7; // w0
  int32_t v8; // w1
  System_Collections_Generic_Stack_T__o *objectStock; // x20

  if ( (byte_4C446EC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__IndexOf__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Stack_GameObject__Push__);
    byte_4C446EC = 1;
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
      v7 = System_Collections_Generic_List_object___IndexOf(
             (System_Collections_Generic_List_object__o *)objectList,
             gameObject,
             (const MethodInfo_37A3CC4 *)Method_System_Collections_Generic_List_GameObject__IndexOf__);
      if ( (v7 & 0x80000000) == 0 )
      {
        v8 = v7;
        gameObject = (Il2CppObject *)this->fields.objectList;
        if ( gameObject )
        {
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)gameObject,
            v8,
            (const MethodInfo_37A47F8 *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
          objectStock = (System_Collections_Generic_Stack_T__o *)this->fields.objectStock;
          gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0);
          if ( objectStock )
          {
            System_Collections_Generic_Stack_object___Push(
              objectStock,
              gameObject,
              (const MethodInfo_3A0380C *)Method_System_Collections_Generic_Stack_GameObject__Push__);
            return 1;
          }
        }
LABEL_14:
        sub_1C372B4(gameObject);
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
    sub_1C372B4(this);
  seed->fields.arrangementPich.fields.y = y;
}


void ListViewManager__SetCallbackAfterScroll(
        ListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.callbackAfterScroll = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackAfterScroll, (int32_t)callback, (int32_t)method, v3);
}


void ListViewManager__SetEmptyMessageBase(ListViewManager_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Object_o *emptyMessageBase; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4C44705 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C44705 = 1;
  }
  emptyMessageBase = (UnityEngine_Object_o *)this->fields.emptyMessageBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(emptyMessageBase, 0, 0) )
  {
    v6 = this->fields.emptyMessageBase;
    if ( !v6 )
      sub_1C372B4(0);
    UnityEngine_GameObject__SetActive(v6, isActive, 0);
  }
}


void ListViewManager__SetEnabledColliderDragMask(ListViewManager_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v5; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4C446F4 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446F4 = 1;
  }
  v5 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ListViewManager_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._7_GetDragRoot.methodPtr)(
                                     this,
                                     this->klass->vtable._7_GetDragRoot.method,
                                     method);
  if ( !v5 )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v5,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
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
    sub_1C372B4(v5);
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
    sub_1C372B4(this);
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

  if ( (byte_4C446E8 & 1) == 0 )
  {
    sub_1C37058(&EquipGraphListViewManager_TypeInfo);
    sub_1C37058(&SupportServantEquipListViewManager_TypeInfo);
    sub_1C37058(&StringLiteral_13193/*"SvtEqScrollBarValue"*/);
    byte_4C446E8 = 1;
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
    sub_1C372B4(scrollBar);
  }
  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_12;
  value = UIProgressBar__get_value(scrollBar, 0);
  UnityEngine_PlayerPrefs__SetFloat((System_String_o *)StringLiteral_13193/*"SvtEqScrollBarValue"*/, value, 0);
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
  struct UIScrollView_o *v12; // x8
  UnityEngine_Object_o *mPanel; // x20
  struct UIScrollView_o *v14; // x8
  struct UIScrollView_o *v15; // x8
  UIScrollView_o *v16; // x20
  bool v17; // w20
  const MethodInfo *v18; // x3
  UnityEngine_Vector2_o v20; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  y = offset.fields.y;
  x = offset.fields.x;
  z = scroll.fields.z;
  v7 = scroll.fields.y;
  v8 = scroll.fields.x;
  if ( (byte_4C44700 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C44700 = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return 0;
  v12 = this->fields.scrollView;
  if ( !v12 )
    goto LABEL_23;
  mPanel = (UnityEngine_Object_o *)v12->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(mPanel, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return 0;
  v14 = this->fields.scrollView;
  if ( !v14 )
    goto LABEL_23;
  gameObject = (UnityEngine_Component_o *)v14->fields.mPanel;
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
  v21.fields.x = v8;
  v21.fields.y = v7;
  v21.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v21, 0);
  v15 = this->fields.scrollView;
  if ( !v15 )
    goto LABEL_23;
  gameObject = (UnityEngine_Component_o *)v15->fields.mPanel;
  if ( !gameObject )
    goto LABEL_23;
  v20.fields.x = x;
  v20.fields.y = y;
  UIPanel__set_clipOffset((UIPanel_o *)gameObject, v20, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !gameObject )
    goto LABEL_23;
  UIScrollView__DisableSpring((UIScrollView_o *)gameObject, 0);
  v16 = this->fields.scrollView;
  if ( !byte_4C3C921 )
  {
    gameObject = (UnityEngine_Component_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  if ( !v16 )
LABEL_23:
    sub_1C372B4(gameObject);
  UIScrollView__set_currentMomentum(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  v17 = 1;
  ListViewManager__ClippingItems(this, 1, 0, v18);
  return v17;
}


void ListViewManager__SetSortAscendingOrder(ListViewManager_o *this, bool isAscendingOrder, const MethodInfo *method)
{
  ;
}


void ListViewManager__SetSortButtonImage(ListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  ListViewSort_o *sort; // x0
  UILabel_o *v5; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v7; // x8
  int32_t sortKind; // w9
  System_String_o **v9; // x9
  System_String_o **v10; // x10
  System_String_o **v11; // x8

  if ( (byte_4C446E3 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_17523/*"btn_sort_up"*/);
    sub_1C37058(&StringLiteral_17521/*"btn_sort_new"*/);
    sub_1C37058(&StringLiteral_17522/*"btn_sort_old"*/);
    sub_1C37058(&StringLiteral_17520/*"btn_sort_down"*/);
    byte_4C446E3 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0, 0) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_24;
    v5 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0, 0);
    if ( !v5 )
      goto LABEL_24;
    UILabel__set_text(v5, (System_String_o *)sort, 0);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0, 0);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v7 = this->fields.sort;
    if ( v7 )
    {
      sortKind = v7->fields.sortKind;
      if ( sortKind == 11 || sortKind == 1 )
      {
        sort = (ListViewSort_o *)this->fields.sortOrderSprite;
        if ( sort )
        {
          v9 = (System_String_o **)&StringLiteral_17522/*"btn_sort_old"*/;
          v10 = (System_String_o **)&StringLiteral_17521/*"btn_sort_new"*/;
LABEL_20:
          if ( v7->fields.isAscendingOrder )
            v11 = v9;
          else
            v11 = v10;
          UISprite__set_spriteName((UISprite_o *)sort, *v11, 0);
          return;
        }
      }
      else
      {
        sort = (ListViewSort_o *)this->fields.sortOrderSprite;
        if ( sort )
        {
          v9 = (System_String_o **)&StringLiteral_17523/*"btn_sort_up"*/;
          v10 = (System_String_o **)&StringLiteral_17520/*"btn_sort_down"*/;
          goto LABEL_20;
        }
      }
    }
LABEL_24:
    sub_1C372B4(sort);
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
  struct ListViewItemSeed_o *seed; // x8
  bool v7; // w3
  bool v8; // w2
  const MethodInfo *v9; // x3

  scrollView = (UIScrollView_o *)ListViewManager__MoveTopItem(this, index, 0, 0.0, v3);
  if ( ((unsigned __int8)scrollView & 1) != 0 )
  {
    seed = this->fields.seed;
    if ( !seed || (scrollView = this->fields.scrollView) == 0 )
      sub_1C372B4(scrollView);
    if ( seed->fields.arrangement )
    {
      v7 = 1;
      v8 = 0;
    }
    else
    {
      v8 = 1;
      v7 = 0;
    }
    UIScrollView__RestrictWithinBounds_49228096(scrollView, 1, v8, v7, 0);
    ListViewManager__ClippingItems(this, 1, 0, v9);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *v13; // x22
  _BOOL8 v14; // x0
  Il2CppObject *current; // x20
  __int64 v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  struct ListViewSort_o *sort; // x8
  int32_t v24; // w23
  _BOOL4 isAscendingOrder; // w20
  bool v26; // w21
  ListViewManager___c_c *v27; // x0
  struct ListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__68_0; // x20
  Il2CppObject *v30; // x24
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct ListViewManager___c_StaticFields *v33; // x0
  CGThumbnailListItem_o *p__9__68_0; // x0
  Il2CppObject *v35; // x24
  struct ListViewManager___c_StaticFields *v36; // x0
  const MethodInfo *v37; // x3
  struct ListViewItem_o **p_topItem; // x25
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct ListViewItem_o **p_bottomItem; // x26
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct ListViewItem_o **p_leftItem; // x27
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct ListViewItem_o **p_rightItem; // x28
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  Il2CppObject *Item; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  Il2CppObject *v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  Il2CppObject *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  Il2CppObject *v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  const MethodInfo_37A2D54 *v64; // x2
  int32_t i; // w29
  const MethodInfo *v66; // x2
  struct ListViewItem_o *v67; // x20
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  struct ListViewItem_o **v70; // x0
  float x; // s0
  struct ListViewItem_o **v72; // x0
  UnityEngine_Object_o *emptyMessageBase; // x20
  UnityEngine_Object_o *indicator; // x20
  UnityEngine_Object_o *scrollView; // x20
  const MethodInfo *v76; // x1
  const MethodInfo *v77; // x3
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  UnityEngine_Object_o *v80; // x20
  UIScrollView_o *v81; // x20
  const MethodInfo *v82; // x4
  const MethodInfo *v83; // x2
  ListViewItem_o *v84; // x0
  const MethodInfo *v85; // x2
  int32_t v86; // [xsp+Ch] [xbp-A4h]
  int32_t v87; // [xsp+10h] [xbp-A0h]
  int32_t index; // [xsp+14h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+30h] [xbp-80h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C446E6 & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_ListViewItem__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_1C37058(&Method_ListViewManager___c__SortItem_b__68_0__);
    sub_1C37058(&Method_ListViewManager___c__SortItem_b__68_1__);
    sub_1C37058(&ListViewManager___c_TypeInfo);
    byte_4C446E6 = 1;
  }
  memset(&v90, 0, sizeof(v90));
  Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !Instance )
    goto LABEL_94;
  v87 = addEmptyTarminal;
  SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)Instance, 0);
  ListViewManager__ReleaseObject(this, v10);
  Instance = (char *)this->fields.sort;
  if ( !Instance )
    goto LABEL_94;
  *((_QWORD *)Instance + 4) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(Instance + 32), (int32_t)this, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  Instance = (char *)this->fields.itemList;
  if ( Instance )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v89,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v90 = v89;
    while ( 1 )
    {
      v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v90,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v14 )
        break;
      current = v90.fields._current;
      if ( !v90.fields._current )
        sub_1C372B4(v14);
      v16 = ((__int64 (__fastcall *)(Il2CppObject *, struct ListViewSort_o *, const MethodInfo *))v90.fields._current->klass->vtable[4].methodPtr)(
              v90.fields._current,
              this->fields.sort,
              v90.fields._current->klass->vtable[4].method);
      if ( (v16 & 1) != 0 )
      {
        if ( !v13 )
          sub_1C372B4(v16);
        items = v13->fields._items;
        v20 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v13->fields._version;
        if ( !items )
          sub_1C372B4(v16);
        size = v13->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            current,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v22[4] = (Il2CppClass *)current;
          sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 4), (int32_t)current, v17, v18);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v90,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  if ( !v13 )
    goto LABEL_94;
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_94;
  v24 = v13->fields._size;
  isAscendingOrder = sort->fields.isAscendingOrder;
  v26 = isAllDisp;
  v27 = ListViewManager___c_TypeInfo;
  if ( !ListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewManager___c_TypeInfo);
    v27 = ListViewManager___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  if ( isAscendingOrder )
  {
    _9__68_0 = (System_Comparison_T__o *)static_fields->__9__68_0;
    if ( !_9__68_0 )
    {
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v27 = ListViewManager___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v27->static_fields->__9;
      _9__68_0 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_ListViewItem__TypeInfo);
      System_Comparison_object____ctor(_9__68_0, v30, Method_ListViewManager___c__SortItem_b__68_0__, 0);
      v33 = ListViewManager___c_TypeInfo->static_fields;
      v33->__9__68_0 = (struct System_Comparison_ListViewItem__o *)_9__68_0;
      p__9__68_0 = (CGThumbnailListItem_o *)&v33->__9__68_0;
LABEL_29:
      sub_1C36FFC(p__9__68_0, (int32_t)_9__68_0, v31, v32);
    }
  }
  else
  {
    _9__68_0 = (System_Comparison_T__o *)static_fields->__9__68_1;
    if ( !_9__68_0 )
    {
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v27 = ListViewManager___c_TypeInfo;
      }
      v35 = (Il2CppObject *)v27->static_fields->__9;
      _9__68_0 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_ListViewItem__TypeInfo);
      System_Comparison_object____ctor(_9__68_0, v35, Method_ListViewManager___c__SortItem_b__68_1__, 0);
      v36 = ListViewManager___c_TypeInfo->static_fields;
      v36->__9__68_1 = (struct System_Comparison_ListViewItem__o *)_9__68_0;
      p__9__68_0 = (CGThumbnailListItem_o *)&v36->__9__68_1;
      goto LABEL_29;
    }
  }
  System_Collections_Generic_List_object___Sort_58346216(
    v13,
    _9__68_0,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  ListViewManager__CheckFocusItem(this, (System_Collections_Generic_List_ListViewItem__o *)v13, v24, v37);
  this->fields.topItem = 0;
  p_topItem = &this->fields.topItem;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.topItem, 0, v39, v40);
  this->fields.bottomItem = 0;
  p_bottomItem = &this->fields.bottomItem;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bottomItem, 0, v42, v43);
  this->fields.leftItem = 0;
  p_leftItem = &this->fields.leftItem;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.leftItem, 0, v45, v46);
  p_rightItem = &this->fields.rightItem;
  this->fields.rightItem = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.rightItem, 0, v48, v49);
  index = v24 - 1;
  this->fields.isAllDisp = v26;
  if ( v24 < 1 )
    goto LABEL_64;
  Instance = (char *)this->fields.scrollView;
  if ( !Instance )
    goto LABEL_94;
  if ( UIScrollView__get_canMoveHorizontally((UIScrollView_o *)Instance, 0) )
  {
    Instance = (char *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_94;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             0,
             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this->fields.leftItem = (struct ListViewItem_o *)Item;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.leftItem, (int32_t)Item, v53, v54);
    Instance = (char *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_94;
    v55 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)Instance,
            0,
            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    *p_rightItem = (struct ListViewItem_o *)v55;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.rightItem, (int32_t)v55, v56, v57);
  }
  Instance = (char *)this->fields.scrollView;
  if ( !Instance )
    goto LABEL_94;
  v86 = selectIndex;
  if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)Instance, 0) )
  {
    Instance = (char *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_94;
    v58 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)Instance,
            0,
            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this->fields.topItem = (struct ListViewItem_o *)v58;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.topItem, (int32_t)v58, v59, v60);
    Instance = (char *)this->fields.itemList;
    if ( !Instance )
      goto LABEL_94;
    v61 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)Instance,
            0,
            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    *p_bottomItem = (struct ListViewItem_o *)v61;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bottomItem, (int32_t)v61, v62, v63);
  }
  v64 = (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
  for ( i = 0; i != v24; ++i )
  {
    Instance = (char *)System_Collections_Generic_List_object___get_Item(v13, i, v64);
    if ( !Instance )
      goto LABEL_94;
    *((_DWORD *)Instance + 6) = i;
    *((_DWORD *)Instance + 7) = i;
    Instance[96] = v26;
    v67 = (struct ListViewItem_o *)Instance;
    Instance = (char *)this->fields.seed;
    if ( !Instance )
      goto LABEL_94;
    LocalPosition = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)Instance, i, v66);
    v67->fields.basePosition = LocalPosition;
    if ( *p_topItem )
    {
      if ( LocalPosition.fields.y > (*p_topItem)->fields.basePosition.fields.y )
      {
        *p_topItem = v67;
        v70 = &this->fields.topItem;
LABEL_50:
        sub_1C36FFC((CGThumbnailListItem_o *)v70, (int32_t)v67, v68, v69);
        goto LABEL_51;
      }
      if ( !*p_bottomItem )
        goto LABEL_94;
      if ( LocalPosition.fields.y < (*p_bottomItem)->fields.basePosition.fields.y )
      {
        v70 = &this->fields.bottomItem;
        *p_bottomItem = v67;
        goto LABEL_50;
      }
    }
LABEL_51:
    if ( !*p_rightItem )
      goto LABEL_58;
    x = v67->fields.basePosition.fields.x;
    if ( x > (*p_rightItem)->fields.basePosition.fields.x )
    {
      *p_rightItem = v67;
      v72 = &this->fields.rightItem;
LABEL_57:
      sub_1C36FFC((CGThumbnailListItem_o *)v72, (int32_t)v67, v68, v69);
      goto LABEL_58;
    }
    if ( !*p_leftItem )
      goto LABEL_94;
    if ( x < (*p_leftItem)->fields.basePosition.fields.x )
    {
      v72 = &this->fields.leftItem;
      *p_leftItem = v67;
      goto LABEL_57;
    }
LABEL_58:
    v64 = (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
  }
  Instance = (char *)System_Collections_Generic_List_object___get_Item(
                       v13,
                       0,
                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !Instance )
    goto LABEL_94;
  Instance[96] = 1;
  Instance = (char *)System_Collections_Generic_List_object___get_Item(
                       v13,
                       index,
                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  selectIndex = v86;
  if ( !Instance )
    goto LABEL_94;
  Instance[96] = 1;
  if ( v24 < v87 )
    goto LABEL_64;
  Instance = (char *)System_Collections_Generic_List_object___get_Item(
                       v13,
                       index,
                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !Instance )
    goto LABEL_94;
  Instance[97] = 1;
LABEL_64:
  this->fields.itemSortList = (struct System_Collections_Generic_List_ListViewItem__o *)v13;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.itemSortList, (int32_t)v13, v50, v51);
  this->fields.terminalIndex = -1;
  emptyMessageBase = (UnityEngine_Object_o *)this->fields.emptyMessageBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(emptyMessageBase, 0, 0) )
  {
    Instance = (char *)this->fields.emptyMessageBase;
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v24 < 1, 0);
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
    Instance = (char *)this->fields.indicator;
    if ( !Instance )
      goto LABEL_94;
    (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*(_QWORD *)Instance + 376LL))(
      Instance,
      (unsigned int)v24,
      *(_QWORD *)(*(_QWORD *)Instance + 384LL));
    this->fields.isIndecatorRefresh = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    Instance = (char *)this->fields.scrollView;
    if ( !Instance )
      goto LABEL_94;
    UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
  }
  ListViewManager__ClippingTerminationItem(this, v76);
  ListViewManager__ClippingItems(this, 1, 0, v77);
  ((void (__fastcall *)(ListViewManager_o *, const MethodInfo *))this->klass->vtable._5_SetSortButtonImage.methodPtr)(
    this,
    this->klass->vtable._5_SetSortButtonImage.method);
  Instance = (char *)this->fields.sort;
  if ( !Instance )
LABEL_94:
    sub_1C372B4(Instance);
  *((_QWORD *)Instance + 4) = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)(Instance + 32), 0, v78, v79);
  v80 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v80, 0, 0) )
  {
    Instance = (char *)this->fields.scrollView;
    if ( !Instance )
      goto LABEL_94;
    UIScrollView__DisableSpring((UIScrollView_o *)Instance, 0);
    v81 = this->fields.scrollView;
    if ( !byte_4C3C921 )
    {
      Instance = (char *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    if ( !v81 )
      goto LABEL_94;
    UIScrollView__set_currentMomentum(v81, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    if ( selectIndex < 0 )
    {
      Instance = (char *)this->fields.scrollView;
      if ( !Instance )
        goto LABEL_94;
      UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
      v84 = ListViewManager__GetItem(this, 0, v83);
      ListViewManager__CenterLoopItem(this, v84, v85);
    }
    else if ( !ListViewManager__MoveCenterItem(this, selectIndex, 0, 0, 0.0, v82) )
    {
      Instance = (char *)this->fields.scrollView;
      if ( !Instance )
        goto LABEL_94;
      UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
    }
  }
}


void ListViewManager__Update(ListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Component_o *transform; // x0
  const MethodInfo *v5; // x3
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *indicator; // x20
  void (*name)(void); // x9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C446F2 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446F2 = 1;
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
        sub_1C372B4(transform);
      }
    }
    else
    {
      ListViewManager__ClippingItems(this, 1, 1, v5);
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
    sub_1C372B4(this);
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

  if ( (byte_4C446DA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446DA = 1;
  }
  memset(&v7, 0, sizeof(v7));
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( !dropObjectList )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    dropObjectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
  v4 = 0;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
  {
    current = v7.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 += UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
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

  if ( (byte_4C446DF & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4C446DF = 1;
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
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C446DC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446DC = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v6 )
    {
      if ( !current )
        sub_1C372B4(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C372B4(Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_ListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C372B4(Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v8, v9);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ListViewObject__o *)v3;
}


int32_t ListViewManager__get_ObjectSum(ListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int32_t i; // w19
  _BOOL8 v5; // x0
  UnityEngine_Object_o *v6; // x20
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C446E1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446E1 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = 0; ; i += UnityEngine_Object__op_Inequality(v6, 0, 0) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields._current )
      sub_1C372B4(v5);
    v6 = *(UnityEngine_Object_o **)((char *)&v8.fields._current->klass + (unsigned __int64)&qword_70);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return i;
}


void ListViewManager__set_IsInput(ListViewManager_o *this, bool value, const MethodInfo *method)
{
  bool v4; // w21
  UnityEngine_Object_o *scrollBar; // x20
  _BOOL8 v6; // x0
  UIProgressBar_o *v7; // x19
  float alpha; // s0

  v4 = value;
  if ( (byte_4C446DB & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C446DB = 1;
  }
  this->fields.isInput = v4;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(scrollBar, 0, 0);
  if ( v6 )
  {
    v7 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v7 )
      sub_1C372B4(v6);
    alpha = UIProgressBar__get_alpha(v7, 0);
    UIProgressBar__set_alpha(v7, alpha, 0);
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
  const MethodInfo *v6; // x3
  bool result; // w0
  struct ListViewManager_o *_4__this; // x21
  UnityEngine_Object_o *scrollBar; // x20
  struct UIScrollBar_o *v10; // x20
  int32_t index; // w8
  int v12; // w22
  struct ListViewItemSeed_o *seed; // x8
  float x; // s8
  float v15; // s8
  struct System_Collections_Generic_List_ListViewItem__o *list; // x8
  struct ListViewItemSeed_o *v17; // x9
  int size; // w19
  float v19; // s9
  float height; // s0
  float v21; // s0
  ListViewManager_c *klass; // x8
  unsigned int naturalAligment; // w9
  __int64 v24; // x11
  __int64 v25; // x11
  float Float; // s0

  v2 = this;
  if ( (byte_4C44708 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C37058(&EquipGraphListViewManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&System_Math_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SupportServantEquipListViewManager_TypeInfo);
    sub_1C37058(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    this = (ListViewManager__FocusSelectItem_d__71_o *)sub_1C37058(&StringLiteral_13193/*"SvtEqScrollBarValue"*/);
    byte_4C44708 = 1;
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
      v10 = _4__this->fields.scrollBar;
      if ( v10 )
      {
        if ( v10->fields.mSize > 0.98 )
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
          v24 = EquipGraphListViewManager_TypeInfo->_2.naturalAligment;
          if ( naturalAligment >= (unsigned int)v24
            && (EquipGraphListViewManager_c *)klass->_2.typeHierarchy[v24 - 1] == EquipGraphListViewManager_TypeInfo
            || (v25 = SupportServantEquipListViewManager_TypeInfo->_2.naturalAligment,
                naturalAligment >= (unsigned int)v25)
            && (SupportServantEquipListViewManager_c *)klass->_2.typeHierarchy[v25 - 1] == SupportServantEquipListViewManager_TypeInfo )
          {
            Float = UnityEngine_PlayerPrefs__GetFloat((System_String_o *)StringLiteral_13193/*"SvtEqScrollBarValue"*/, 0.0, 0);
            UIProgressBar__set_value((UIProgressBar_o *)v10, Float, 0);
            UnityEngine_PlayerPrefs__SetFloat((System_String_o *)StringLiteral_13193/*"SvtEqScrollBarValue"*/, 0.0, 0);
          }
          else
          {
            UIProgressBar__set_value((UIProgressBar_o *)_4__this->fields.scrollBar, _4__this->fields.scrollBarValue, 0);
            _4__this->fields.scrollBarValue = 0.0;
          }
          goto LABEL_32;
        }
        v12 = index + 1;
        v2->fields.index = index + 1;
        seed = _4__this->fields.seed;
        if ( seed )
        {
          x = seed->fields.arrangementVolume.fields.x;
          this = (ListViewManager__FocusSelectItem_d__71_o *)System_Math_TypeInfo;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v15 = ceilf((float)v12 / x);
          if ( v15 <= 1.0 )
            goto LABEL_32;
          list = v2->fields.list;
          if ( list )
          {
            v17 = _4__this->fields.seed;
            if ( v17 )
            {
              size = list->fields._size;
              v19 = v17->fields.arrangementVolume.fields.x;
              if ( !System_Math_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
              this = (ListViewManager__FocusSelectItem_d__71_o *)_4__this->fields.scrollView;
              if ( this )
              {
                this = (ListViewManager__FocusSelectItem_d__71_o *)UnityEngine_Component__GetComponent_object_(
                                                                     (UnityEngine_Component_o *)this,
                                                                     (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
                if ( this )
                {
                  height = UIPanel__get_height((UIPanel_o *)this, 0);
                  this = (ListViewManager__FocusSelectItem_d__71_o *)_4__this->fields.scrollBar;
                  if ( this )
                  {
                    v21 = ((v15 + 1.0) * 156.0 + -70.0 - height) / (ceilf((float)size / v19) * 156.0 - height);
                    UIProgressBar__set_value((UIProgressBar_o *)this, v21, 0);
                    goto LABEL_32;
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_1C372B4(this);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C372A4(UnityEngine_WaitForEndOfFrame_TypeInfo);
  UnityEngine_WaitForEndOfFrame___ctor(v4, 0);
  v2->fields.__2__current = (Il2CppObject *)v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__2__current, (int32_t)v4, v5, v6);
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_ListViewManager__FocusSelectItem_d__71_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C44707 & 1) == 0 )
  {
    sub_1C37058(&ListViewManager___c_TypeInfo);
    byte_4C44707 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ListViewManager___c_TypeInfo->static_fields->__9 = (struct ListViewManager___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
  return ListViewItem__SortCompUp(a, b, 0);
}


int32_t ListViewManager___c___SortItem_b__68_1(
        ListViewManager___c_o *this,
        ListViewItem_o *a,
        ListViewItem_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C372B4(this);
  return ListViewItem__SortCompDown(a, b, 0);
}