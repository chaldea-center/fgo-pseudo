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

  if ( (byte_4CB7A41 & 1) == 0 )
  {
    sub_1C6BA08(&ListViewSort_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Stack_GameObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Stack_GameObject__TypeInfo);
    byte_4CB7A41 = 1;
  }
  if ( !byte_4CAFAE9 )
  {
    sub_1C6BA08(&UnityEngine_Vector2_TypeInfo);
    byte_4CAFAE9 = 1;
  }
  v3 = UnityEngine_Vector2_TypeInfo;
  this->fields.clipRange = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  this->fields.clipOffset = v3->static_fields->zeroVector;
  v4 = (ListViewSort_o *)sub_1C6BC54(ListViewSort_TypeInfo);
  ListViewSort___ctor(v4, 3, 1, 0);
  this->fields.sort = v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v4, v5, v6);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.objectList, (int32_t)v7, v8, v9);
  this->fields.isInput = 1;
  v10 = (System_Collections_Generic_Stack_T__o *)sub_1C6BC54(System_Collections_Generic_Stack_GameObject__TypeInfo);
  System_Collections_Generic_Stack_object____ctor(
    v10,
    (const MethodInfo_3A6542C *)Method_System_Collections_Generic_Stack_GameObject___ctor__);
  this->fields.objectStock = (struct System_Collections_Generic_Stack_GameObject__o *)v10;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.objectStock, (int32_t)v10, v11, v12);
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

  if ( (byte_4CB7A2B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A2B = 1;
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
                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
              sub_1C6BC60(Item, v6);
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
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  int size; // w26
  int32_t sortIndex; // w22
  int v11; // w8
  int v12; // w28
  int32_t v13; // w20
  int32_t v14; // w23
  const MethodInfo *v15; // x2
  System_Collections_Generic_List_object__o *v16; // x24
  UnityEngine_Object_o *syncRoot; // x25
  const MethodInfo_38006A4 *v18; // x2
  int32_t v19; // w26
  int32_t v20; // w23
  int32_t v21; // w21
  const MethodInfo *v22; // x2
  System_Collections_Generic_List_object__o *v23; // x22
  UnityEngine_Object_o *v24; // x24
  int32_t v25; // w8
  const MethodInfo *v26; // x3

  if ( (byte_4CB7A2A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A2A = 1;
  }
  if ( this->fields.isLoop )
  {
    itemSortList = this->fields.itemSortList;
    if ( itemSortList )
    {
      if ( centerItem && itemSortList->fields._size >= 3 )
      {
        this->fields.centerItem = centerItem;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.centerItem, (int32_t)centerItem, (int32_t)method, v3);
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( !Item )
          goto LABEL_54;
        size = Item->fields._size;
        sortIndex = centerItem->fields.sortIndex;
        if ( size >= 0 )
          v11 = Item->fields._size;
        else
          v11 = size + 1;
        if ( size < 2 )
        {
          v13 = centerItem->fields.sortIndex;
        }
        else
        {
          v12 = (v11 >> 1) - 1;
          if ( sortIndex + 1 < size )
            v13 = sortIndex + 1;
          else
            v13 = 0;
          v14 = centerItem->fields.loopIndex + 1;
          while ( 1 )
          {
            Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  Item,
                                                                  v13,
                                                                  (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            if ( !Item )
              goto LABEL_54;
            v16 = Item;
            if ( v14 != Item->fields._version )
            {
              Item->fields._version = v14;
              Item = (System_Collections_Generic_List_object__o *)this->fields.seed;
              if ( !Item )
                goto LABEL_54;
              *(UnityEngine_Vector3_o *)((char *)&v16[2].fields._items + 4) = ListViewItemSeed__GetLocalPosition(
                                                                                (ListViewItemSeed_o *)Item,
                                                                                v14,
                                                                                v15);
              syncRoot = (UnityEngine_Object_o *)v16[2].fields._syncRoot;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(syncRoot, 0, 0) )
              {
                Item = (System_Collections_Generic_List_object__o *)v16[2].fields._syncRoot;
                if ( !Item )
                  goto LABEL_54;
                ListViewObject__SetTransform(
                  (ListViewObject_o *)Item,
                  *(UnityEngine_Vector3_o *)((char *)&v16[2].fields._items + 4),
                  0);
              }
            }
            LOBYTE(v16[2].fields._items) = this->fields.isAllDisp;
            Item = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
            if ( !v12 )
              break;
            ++v14;
            if ( v13 + 1 < size )
              ++v13;
            else
              v13 = 0;
            --v12;
            if ( !Item )
              goto LABEL_54;
          }
          if ( !Item )
LABEL_54:
            sub_1C6BC60(Item, v7);
        }
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v13,
                                                              (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !Item )
          goto LABEL_54;
        LOBYTE(Item[2].fields._items) = 1;
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
        if ( !Item )
          goto LABEL_54;
        v18 = (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
        v19 = size - 1;
        if ( sortIndex - 1 < 0 )
          v20 = v19;
        else
          v20 = sortIndex - 1;
        if ( v20 != v13 )
        {
          v21 = centerItem->fields.loopIndex - 1;
          do
          {
            Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  Item,
                                                                  v20,
                                                                  v18);
            if ( !Item )
              goto LABEL_54;
            v23 = Item;
            if ( v21 != Item->fields._version )
            {
              Item->fields._version = v21;
              Item = (System_Collections_Generic_List_object__o *)this->fields.seed;
              if ( !Item )
                goto LABEL_54;
              *(UnityEngine_Vector3_o *)((char *)&v23[2].fields._items + 4) = ListViewItemSeed__GetLocalPosition(
                                                                                (ListViewItemSeed_o *)Item,
                                                                                v21,
                                                                                v22);
              v24 = (UnityEngine_Object_o *)v23[2].fields._syncRoot;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v24, 0, 0) )
              {
                Item = (System_Collections_Generic_List_object__o *)v23[2].fields._syncRoot;
                if ( !Item )
                  goto LABEL_54;
                ListViewObject__SetTransform(
                  (ListViewObject_o *)Item,
                  *(UnityEngine_Vector3_o *)((char *)&v23[2].fields._items + 4),
                  0);
              }
            }
            LOBYTE(v23[2].fields._items) = this->fields.isAllDisp;
            Item = (System_Collections_Generic_List_object__o *)this->fields.itemSortList;
            v25 = v20 - 1;
            if ( v20 - 1 < 0 )
              v25 = v19;
            if ( !Item )
              goto LABEL_54;
            v18 = (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
            --v21;
            sortIndex = v20;
            v20 = v25;
          }
          while ( v25 != v13 );
        }
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              sortIndex,
                                                              v18);
        if ( !Item )
          goto LABEL_54;
        LOBYTE(Item[2].fields._items) = 1;
        this->fields.terminalIndex = sortIndex;
        ListViewManager__ClippingItems(this, 0, 0, v26);
      }
    }
  }
}


void ListViewManager__CheckEmptyMessageBase(ListViewManager_o *this, bool IsActive, const MethodInfo *method)
{
  UnityEngine_GameObject_o *emptyMessageBase; // x0

  emptyMessageBase = this->fields.emptyMessageBase;
  if ( !emptyMessageBase )
    sub_1C6BC60(0, IsActive);
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
    UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, v8, 0);
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
  if ( (byte_4CB7A3F & 1) == 0 )
  {
    this = (ListViewManager_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4CB7A3F = 1;
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
    sub_1C6BC60(this, *(_QWORD *)&scaleType);
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
    sub_1C6BC60(0, IsActive);
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
  if ( (byte_4CB7A3E & 1) == 0 )
  {
    this = (ListViewManager_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A3E = 1;
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
    sub_1C6BC60(this, method);
  }
}


void ListViewManager__ClearScrollBarValue(ListViewManager_o *this, bool clearMaterialIdx, const MethodInfo *method)
{
  if ( (byte_4CB7A24 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_13194/*"SvtEqScrollBarValue"*/);
    byte_4CB7A24 = 1;
  }
  UnityEngine_PlayerPrefs__SetFloat((System_String_o *)StringLiteral_13194/*"SvtEqScrollBarValue"*/, 0.0, 0);
  this->fields.scrollBarValue = 0.0;
  if ( clearMaterialIdx )
    this->fields.lastSelectIndex = -1;
}


bool ListViewManager__ClippingItem(ListViewManager_o *this, ListViewObject_o *obj, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4CB7A25 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A25 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0, 0);
  if ( v5 )
    return 0;
  if ( !obj )
    sub_1C6BC60(v5, v6);
  return ListViewManager__ClippingItem_44066648(this, obj->fields.linkItem, v7);
}


bool ListViewManager__ClippingItem_44066648(ListViewManager_o *this, ListViewItem_o *item, const MethodInfo *method)
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
    sub_1C6BC60(scrollView, item);
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
  unsigned __int64 terminalIndex; // x1
  void *scrollView; // x0
  float v12; // s13
  float v13; // s14
  float v14; // s15
  float v15; // s10
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
  _BYTE *v51; // x24
  UnityEngine_Object_o *v52; // x26
  int32_t v53; // w1
  const MethodInfo *v54; // x2
  _BYTE *v55; // x23
  UnityEngine_Object_o *v56; // x26
  int32_t v57; // w23
  UnityEngine_Object_o *v58; // x24
  __int64 v59; // x8
  const MethodInfo *v60; // x2
  struct ListViewItem_o **p_horizontalItem; // x24
  struct ListViewItem_o **p_verticalItem; // x23
  float v63; // s8
  float v64; // s11
  __int128 v65; // q9
  _BOOL8 v66; // x0
  __int64 v67; // x1
  ListViewItem_o *current; // x25
  float v69; // s8
  float v70; // s11
  _BOOL4 v71; // w20
  Il2CppClass *klass; // x26
  const MethodInfo *v73; // x2
  ListViewObject_o *viewObject; // x1
  UnityEngine_Object_o *v75; // x26
  __int64 v76; // x1
  UIScrollView_o *v77; // x0
  __int64 v78; // x1
  bool v79; // w26
  UIScrollView_o *v80; // x0
  bool v81; // w0
  char v82; // w2
  const MethodInfo *v83; // x3
  float v84; // s0
  char v85; // w2
  const MethodInfo *v86; // x3
  char v87; // w2
  const MethodInfo *v88; // x3
  char v89; // w2
  const MethodInfo *v90; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x8
  UnityEngine_Object_o *indicator; // x21
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

  if ( (byte_4CB7A29 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A29 = 1;
  }
  memset(&v103, 0, sizeof(v103));
  centerItem = this->fields.centerItem;
  p_centerItem = &this->fields.centerItem;
  this->fields.centerItem = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.centerItem, 0, isCenterCheck, method);
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
    v12 = v97 - localPosition.fields.x;
    v13 = v97 + localPosition.fields.x;
    v14 = v98 + localPosition.fields.y;
    v15 = v98 - localPosition.fields.y;
    if ( this->fields.isLoop )
    {
      terminalIndex = (unsigned int)this->fields.terminalIndex;
      if ( (terminalIndex & 0x80000000) == 0 )
      {
        scrollView = this->fields.itemSortList;
        if ( !scrollView )
          goto LABEL_108;
        v16 = *((_DWORD *)scrollView + 6);
        if ( v16 >= 3 )
        {
          if ( (int)terminalIndex <= 0 )
            v39 = *((_DWORD *)scrollView + 6);
          else
            v39 = this->fields.terminalIndex;
          scrollView = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)scrollView,
                         terminalIndex,
                         (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !this->fields.itemSortList )
            goto LABEL_108;
          v40 = v39 - 1;
          v41 = (char *)scrollView;
          scrollView = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)this->fields.itemSortList,
                         v39 - 1,
                         (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !v41 )
            goto LABEL_108;
          v43 = *((float *)v41 + 25);
          v42 = *((float *)v41 + 26);
          v44 = (char *)scrollView;
          v45 = v43 < v12;
          v46 = v43 > v13;
          if ( !scrollView )
            goto LABEL_108;
          v47 = *((float *)scrollView + 26);
          v48 = v45 || v46 || v42 > v14;
          if ( v42 < v15
            || v48 == 1
            || v47 < v15
            || *((float *)scrollView + 25) < v12
            || *((float *)scrollView + 25) > v13
            || v47 > v14 )
          {
            if ( v48 & 1 | (v42 < v15) )
            {
              if ( *((float *)scrollView + 25) < v12 || *((float *)scrollView + 25) > v13 || v47 > v14 || v47 < v15 )
                goto LABEL_89;
              scrollView = this->fields.itemSortList;
              if ( !scrollView )
                goto LABEL_108;
              v49 = this->fields.terminalIndex;
              v40 = v49 < *((_DWORD *)scrollView + 6) - 1 ? v49 + 1 : 0;
              scrollView = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)scrollView,
                             v40,
                             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              v44[96] = this->fields.isAllDisp;
              v41[96] = 1;
              terminalIndex = (unsigned int)(*((_DWORD *)v44 + 7) + 1);
              *((_DWORD *)v41 + 7) = terminalIndex;
              if ( !this->fields.seed )
                goto LABEL_108;
              v51 = scrollView;
              *(UnityEngine_Vector3_o *)(v41 + 100) = ListViewItemSeed__GetLocalPosition(
                                                        this->fields.seed,
                                                        terminalIndex,
                                                        v50);
              v52 = (UnityEngine_Object_o *)*((_QWORD *)v41 + 14);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              scrollView = (void *)UnityEngine_Object__op_Inequality(v52, 0, 0);
              if ( ((unsigned __int8)scrollView & 1) != 0 )
              {
                scrollView = (void *)*((_QWORD *)v41 + 14);
                if ( !scrollView )
                  goto LABEL_108;
                ListViewObject__SetTransform((ListViewObject_o *)scrollView, *(UnityEngine_Vector3_o *)(v41 + 100), 0);
              }
              if ( !v51 )
                goto LABEL_108;
              v51[96] = 1;
            }
            else
            {
              if ( v39 <= 1 )
              {
                scrollView = this->fields.itemSortList;
                if ( !scrollView )
                  goto LABEL_108;
                v53 = *((_DWORD *)scrollView + 6) - 1;
              }
              else
              {
                scrollView = this->fields.itemSortList;
                if ( !scrollView )
                  goto LABEL_108;
                v53 = v39 - 2;
              }
              scrollView = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)scrollView,
                             v53,
                             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              v41[96] = this->fields.isAllDisp;
              v44[96] = 1;
              terminalIndex = (unsigned int)(*((_DWORD *)v41 + 7) - 1);
              *((_DWORD *)v44 + 7) = terminalIndex;
              if ( !this->fields.seed )
                goto LABEL_108;
              v55 = scrollView;
              *(UnityEngine_Vector3_o *)(v44 + 100) = ListViewItemSeed__GetLocalPosition(
                                                        this->fields.seed,
                                                        terminalIndex,
                                                        v54);
              v56 = (UnityEngine_Object_o *)*((_QWORD *)v44 + 14);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              scrollView = (void *)UnityEngine_Object__op_Inequality(v56, 0, 0);
              if ( ((unsigned __int8)scrollView & 1) != 0 )
              {
                scrollView = (void *)*((_QWORD *)v44 + 14);
                if ( !scrollView )
                  goto LABEL_108;
                ListViewObject__SetTransform((ListViewObject_o *)scrollView, *(UnityEngine_Vector3_o *)(v44 + 100), 0);
              }
              if ( !v55 )
                goto LABEL_108;
              v55[96] = 1;
            }
            this->fields.terminalIndex = v40;
          }
        }
        else if ( centerItem && v16 == 2 )
        {
          scrollView = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)scrollView,
                         centerItem->fields.index == 0,
                         (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      v57 = 0;
      while ( v57 < *((_DWORD *)scrollView + 6) )
      {
        scrollView = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)scrollView,
                       v57,
                       (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !scrollView )
          goto LABEL_108;
        v58 = (UnityEngine_Object_o *)*((_QWORD *)scrollView + 14);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v58, 0, 0) )
        {
          scrollView = this->fields.itemSortList;
          if ( !scrollView )
            goto LABEL_108;
          scrollView = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)scrollView,
                         v57,
                         (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
          if ( !scrollView )
            goto LABEL_108;
          if ( !*((_BYTE *)scrollView + 96) )
          {
            scrollView = this->fields.itemSortList;
            if ( !scrollView )
              goto LABEL_108;
            scrollView = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)scrollView,
                           v57,
                           (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
            if ( !scrollView )
              goto LABEL_108;
            v59 = *((_QWORD *)scrollView + 14);
            if ( !v59 )
              goto LABEL_108;
            if ( !*(_BYTE *)(v59 + 112) )
            {
              scrollView = this->fields.itemSortList;
              if ( !scrollView )
                goto LABEL_108;
              scrollView = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)scrollView,
                             v57,
                             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
              if ( !scrollView )
                goto LABEL_108;
              ListViewManager__ReleaseObjectExtra(this, *((ListViewObject_o **)scrollView + 14), v60);
            }
          }
        }
        scrollView = this->fields.itemSortList;
        ++v57;
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
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    p_horizontalItem = &this->fields.horizontalItem;
    p_verticalItem = &this->fields.verticalItem;
    v63 = 0.0;
    v64 = 0.0;
    v103 = v102;
    LODWORD(v4) = 0;
LABEL_111:
    v96 = v63;
LABEL_112:
    v65 = v4;
    v101 = v64;
LABEL_113:
    v4 = v65;
    while ( 1 )
    {
      v66 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v103,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v66 )
        break;
      current = (ListViewItem_o *)v103.fields._current;
      if ( !v103.fields._current )
        sub_1C6BC60(v66, v67);
      v70 = *((float *)&v103.fields._current[6].klass + 1);
      v69 = *(float *)&v103.fields._current[6].monitor;
      if ( LOBYTE(v103.fields._current[6].klass) )
        v71 = 1;
      else
        v71 = v69 >= v15 && v70 >= v12 && v70 <= v13 && v69 <= v14;
      klass = v103.fields._current[7].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0, 0) )
      {
        if ( v71 )
          ListViewManager__MakeObject(this, current, v73);
      }
      else if ( !v71 )
      {
        viewObject = current->fields.viewObject;
        if ( this->fields.execObjectExtraFlag )
          ListViewManager__ReleaseObjectExtra(this, viewObject, v73);
        else
          ListViewManager__ReleaseObject_44067364(this, viewObject, v73);
      }
      v75 = (UnityEngine_Object_o *)current->fields.viewObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v75, 0, 0) )
      {
        v77 = this->fields.scrollView;
        if ( !v77 )
          sub_1C6BC60(0, v76);
        v79 = UIScrollView__get_canMoveHorizontally(v77, 0);
        v80 = this->fields.scrollView;
        if ( !v80 )
          sub_1C6BC60(0, v78);
        v81 = UIScrollView__get_canMoveVertically(v80, 0);
        if ( (current->fields.index & 0x80000000) == 0 )
        {
          if ( v70 <= v97 )
            v64 = v97 - v70;
          else
            v64 = v70 - v97;
          if ( v69 <= v98 )
            v63 = v98 - v69;
          else
            v63 = v69 - v98;
          v84 = v64 + 0.0;
          if ( !v79 )
            v84 = 0.0;
          if ( v81 )
            *(float *)&v65 = v63 + v84;
          else
            *(float *)&v65 = v84;
          if ( !*p_centerItem )
          {
            *p_centerItem = current;
            sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.centerItem, (int32_t)current, v82, v83);
            *p_horizontalItem = current;
            sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.horizontalItem, (int32_t)current, v85, v86);
            *p_verticalItem = current;
            sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.verticalItem, (int32_t)current, v87, v88);
            goto LABEL_113;
          }
          if ( *(float *)&v65 < *(float *)&v4 )
          {
            *p_centerItem = current;
            sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.centerItem, (int32_t)current, v82, v83);
            v4 = v65;
          }
          if ( v64 >= v101 )
          {
            v64 = v101;
          }
          else
          {
            *p_horizontalItem = current;
            sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.horizontalItem, (int32_t)current, v82, v83);
          }
          if ( v63 < v96 )
          {
            *p_verticalItem = current;
            sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.verticalItem, (int32_t)current, v82, v83);
            goto LABEL_111;
          }
          goto LABEL_112;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v103,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemSortList = this->fields.itemSortList;
    if ( !itemSortList )
      goto LABEL_108;
    if ( itemSortList->fields._size <= 1 )
    {
      *p_horizontalItem = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.horizontalItem, 0, v89, v90);
    }
    else
    {
      if ( v101 > 10.0 )
      {
        *p_horizontalItem = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.horizontalItem, 0, v89, v90);
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
              ListViewManager__PushObjectOutSideClipPosition(this, (const MethodInfo *)terminalIndex);
            return;
          }
LABEL_108:
          sub_1C6BC60(scrollView, terminalIndex);
        }
LABEL_160:
        *p_centerItem = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.centerItem, 0, v89, v90);
        goto LABEL_161;
      }
    }
    *p_verticalItem = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.verticalItem, 0, v89, v90);
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

  if ( (byte_4CB7A28 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A28 = 1;
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
        (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v15 = v14;
      while ( 1 )
      {
        v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v15,
               (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v4 )
          break;
        current = v15.fields._current;
        if ( !v15.fields._current )
          sub_1C6BC60(v4, v5);
        LOBYTE(v15.fields._current[6].klass) = 0;
        klass = (UnityEngine_Object_o *)current[7].klass;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
          ListViewManager__ReleaseObject_44067364(this, (ListViewObject_o *)current[7].klass, v8);
      }
    }
    else
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)itemSortList,
        (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v15 = v14;
      while ( 1 )
      {
        v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v15,
               (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v9 )
          break;
        v11 = (ListViewItem_o *)v15.fields._current;
        if ( !v15.fields._current )
          sub_1C6BC60(v9, v10);
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
          ListViewManager__ReleaseObject_44067364(this, v11->fields.viewObject, v13);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  __int64 v10; // x1
  struct UIScrollView_o *v11; // x8
  struct UIPanel_o *mPanel; // x20
  float x; // s8
  float y; // s9
  System_Collections_Generic_List_object__o *dropList; // x0
  Il2CppObject *current; // x19
  _BOOL8 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB7A18 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem___ctor___78519896);
    sub_1C6BA08(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A18 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ListViewManager__DestroyList(this, *(const MethodInfo **)&sum);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor_58720688(
    v5,
    sum,
    (const MethodInfo_38001B0 *)Method_System_Collections_Generic_List_ListViewItem___ctor___78519896);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v5;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.itemList, (int32_t)v5, v6, v7);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v11 = this->fields.scrollView;
    if ( !v11 )
      goto LABEL_26;
    mPanel = v11->fields.mPanel;
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
            v20.fields.x = -x;
            v20.fields.y = -y;
            v20.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v20, 0);
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
      sub_1C6BC60(transform, v10);
    }
  }
LABEL_15:
  dropList = (System_Collections_Generic_List_object__o *)this->fields.dropList;
  if ( dropList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      dropList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_UIDragDropListViewSurface__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__MoveNext__) )
    {
      current = v19.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v17 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
      if ( v17 )
      {
        if ( !current )
          sub_1C6BC60(v17, v18);
        UIDragDropListViewSurface__DragEnd((UIDragDropListViewSurface_o *)current, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__Dispose__);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, v5, 0);
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
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *objectList; // x0
  Il2CppObject *current; // x21
  const MethodInfo *v14; // x3
  struct System_Collections_Generic_List_GameObject__o *v15; // x8
  int32_t size; // w2
  int v17; // w9
  Il2CppObject *v18; // x21
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v20; // x20
  UnityEngine_Object_o *scrollBar; // x20
  UnityEngine_Object_o *emptyMessageBase; // x20
  UnityEngine_Object_o *indicator; // x20
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CB7A19 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Stack_GameObject__Pop__);
    sub_1C6BA08(&Method_System_Collections_Generic_Stack_GameObject__get_Count__);
    byte_4CB7A19 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  this->fields.centerItem = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.centerItem, 0, v2, v3);
  this->fields.horizontalItem = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.horizontalItem, 0, v5, v6);
  this->fields.verticalItem = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.verticalItem, 0, v7, v8);
  this->fields.itemSortList = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.itemSortList, 0, v9, v10);
  if ( this->fields.itemList )
  {
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectList;
    if ( !objectList )
      goto LABEL_18;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      objectList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v25 = v24;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v25.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71659676((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    v15 = this->fields.objectList;
    if ( !v15 )
      goto LABEL_18;
    size = v15->fields._size;
    v17 = v15->fields._version + 1;
    v15->fields._size = 0;
    v15->fields._version = v17;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v15->fields._items, 0, size, 0);
    objectList = (System_Collections_Generic_List_object__o *)this->fields.objectStock;
    if ( !objectList )
      goto LABEL_18;
    while ( objectList->fields._size > 0 )
    {
      v18 = System_Collections_Generic_Stack_object___Pop(
              (System_Collections_Generic_Stack_T__o *)objectList,
              (const MethodInfo_3A659F4 *)Method_System_Collections_Generic_Stack_GameObject__Pop__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71659676((UnityEngine_Object_o *)v18, 0);
      objectList = (System_Collections_Generic_List_object__o *)this->fields.objectStock;
      if ( !objectList )
        goto LABEL_18;
    }
    this->fields.itemList = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.itemList, 0, size, v14);
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
    v20 = this->fields.scrollView;
    if ( !byte_4CAFC09 )
    {
      objectList = (System_Collections_Generic_List_object__o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
      byte_4CAFC09 = 1;
    }
    if ( !v20 )
      goto LABEL_18;
    UIScrollView__set_currentMomentum(v20, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
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
    sub_1C6BC60(objectList, v11);
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
  const MethodInfo *v14; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w21
  struct ListViewItem_o **p_topItem; // x25
  bool v18; // w22
  struct ListViewItem_o **p_bottomItem; // x26
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct ListViewItem_o **p_leftItem; // x27
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct ListViewItem_o **p_rightItem; // x28
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  const MethodInfo_38006A4 **v30; // x20
  Il2CppObject *Item; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  Il2CppObject *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w29
  const MethodInfo_38006A4 **v44; // x21
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct ListViewItem_o *v47; // x20
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  float y; // s0
  struct ListViewItem_o **v55; // x0
  float x; // s0
  struct ListViewItem_o **v57; // x0
  UnityEngine_Object_o *emptyMessageBase; // x20
  UnityEngine_Object_o *indicator; // x20
  UnityEngine_Object_o *scrollView; // x20
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

  if ( (byte_4CB7A1F & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    byte_4CB7A1F = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)Instance, 0);
  ListViewManager__ReleaseObject(this, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_73;
  size = itemList->fields._size;
  this->fields.topItem = 0;
  p_topItem = &this->fields.topItem;
  v18 = isAllDisp;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.topItem, 0, v13, v14);
  this->fields.bottomItem = 0;
  p_bottomItem = &this->fields.bottomItem;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.bottomItem, 0, v20, v21);
  this->fields.leftItem = 0;
  p_leftItem = &this->fields.leftItem;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.leftItem, 0, v23, v24);
  p_rightItem = &this->fields.rightItem;
  this->fields.rightItem = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.rightItem, 0, v26, v27);
  index = size - 1;
  v70 = size;
  this->fields.isAllDisp = isAllDisp;
  if ( size < 1 )
    goto LABEL_44;
  Instance = (__int64)this->fields.scrollView;
  if ( !Instance )
    goto LABEL_73;
  v30 = (const MethodInfo_38006A4 **)&Method_System_Collections_Generic_List_ListViewItem__get_Item__;
  if ( UIScrollView__get_canMoveHorizontally((UIScrollView_o *)Instance, 0) )
  {
    Instance = (__int64)this->fields.itemList;
    if ( !Instance )
      goto LABEL_73;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             0,
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this->fields.leftItem = (struct ListViewItem_o *)Item;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.leftItem, (int32_t)Item, v32, v33);
    Instance = (__int64)this->fields.itemList;
    if ( !Instance )
      goto LABEL_73;
    v34 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)Instance,
            0,
            (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    *p_rightItem = (struct ListViewItem_o *)v34;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.rightItem, (int32_t)v34, v35, v36);
  }
  Instance = (__int64)this->fields.scrollView;
  if ( !Instance )
    goto LABEL_73;
  v68 = addEmptyTarminal;
  if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)Instance, 0) )
  {
    Instance = (__int64)this->fields.itemList;
    if ( !Instance )
      goto LABEL_73;
    v37 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)Instance,
            0,
            (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this->fields.topItem = (struct ListViewItem_o *)v37;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.topItem, (int32_t)v37, v38, v39);
    Instance = (__int64)this->fields.itemList;
    if ( !Instance )
      goto LABEL_73;
    v40 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)Instance,
            0,
            (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    *p_bottomItem = (struct ListViewItem_o *)v40;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.bottomItem, (int32_t)v40, v41, v42);
  }
  v43 = 0;
  do
  {
    Instance = (__int64)this->fields.itemList;
    if ( !Instance )
      goto LABEL_73;
    v44 = v30;
    Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)Instance,
                          v43,
                          *v30);
    if ( !Instance )
      goto LABEL_73;
    v47 = (struct ListViewItem_o *)Instance;
    *(_DWORD *)(Instance + 24) = v43;
    *(_DWORD *)(Instance + 28) = v43;
    *(_BYTE *)(Instance + 96) = v18;
    if ( !v12 )
      goto LABEL_73;
    items = v12->fields._items;
    v49 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++v12->fields._version;
    if ( !items )
      goto LABEL_73;
    v50 = v12->fields._size;
    if ( (unsigned int)v50 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        (Il2CppObject *)Instance,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
    }
    else
    {
      v51 = &items->obj.klass + v50;
      v12->fields._size = v50 + 1;
      v51[4] = (Il2CppClass *)v47;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v51 + 4), (int32_t)v47, v45, v46);
    }
    if ( *p_topItem )
    {
      y = v47->fields.basePosition.fields.y;
      if ( y > (*p_topItem)->fields.basePosition.fields.y )
      {
        *p_topItem = v47;
        v55 = &this->fields.topItem;
LABEL_30:
        sub_1C6B9AC((CGThumbnailListItem_o *)v55, (int32_t)v47, v52, v53);
        goto LABEL_31;
      }
      if ( !*p_bottomItem )
        goto LABEL_73;
      if ( y < (*p_bottomItem)->fields.basePosition.fields.y )
      {
        v55 = &this->fields.bottomItem;
        *p_bottomItem = v47;
        goto LABEL_30;
      }
    }
LABEL_31:
    if ( !*p_rightItem )
      goto LABEL_38;
    x = v47->fields.basePosition.fields.x;
    if ( x > (*p_rightItem)->fields.basePosition.fields.x )
    {
      *p_rightItem = v47;
      v57 = &this->fields.rightItem;
LABEL_37:
      sub_1C6B9AC((CGThumbnailListItem_o *)v57, (int32_t)v47, v52, v53);
      goto LABEL_38;
    }
    if ( !*p_leftItem )
      goto LABEL_73;
    if ( x < (*p_leftItem)->fields.basePosition.fields.x )
    {
      v57 = &this->fields.leftItem;
      *p_leftItem = v47;
      goto LABEL_37;
    }
LABEL_38:
    ++v43;
    v30 = v44;
  }
  while ( v70 != v43 );
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(v12, 0, *v44);
  if ( !Instance )
    goto LABEL_73;
  *(_BYTE *)(Instance + 96) = 1;
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(v12, index, *v44);
  if ( !Instance )
    goto LABEL_73;
  *(_BYTE *)(Instance + 96) = 1;
  if ( v70 < v68 )
    goto LABEL_44;
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(v12, index, *v44);
  if ( !Instance )
    goto LABEL_73;
  *(_BYTE *)(Instance + 97) = 1;
LABEL_44:
  this->fields.itemSortList = (struct System_Collections_Generic_List_ListViewItem__o *)v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.itemSortList, (int32_t)v12, v28, v29);
  this->fields.terminalIndex = -1;
  emptyMessageBase = (UnityEngine_Object_o *)this->fields.emptyMessageBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(emptyMessageBase, 0, 0) )
  {
    Instance = (__int64)this->fields.emptyMessageBase;
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v70 < 1, 0);
      goto LABEL_49;
    }
LABEL_73:
    sub_1C6BC60(Instance, v10);
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
      (unsigned int)v70,
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
  ListViewManager__ClippingItems(this, 1, 0, v61);
  v62 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v62, 0, 0) )
  {
    Instance = (__int64)this->fields.scrollView;
    if ( !Instance )
      goto LABEL_73;
    UIScrollView__DisableSpring((UIScrollView_o *)Instance, 0);
    v63 = this->fields.scrollView;
    if ( !byte_4CAFC09 )
    {
      Instance = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
      byte_4CAFC09 = 1;
    }
    if ( !v63 )
      goto LABEL_73;
    UIScrollView__set_currentMomentum(v63, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    if ( selectIndex < 0 )
    {
      Instance = (__int64)this->fields.scrollView;
      if ( !Instance )
        goto LABEL_73;
      UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
      v66 = ListViewManager__GetItem(this, 0, v65);
      ListViewManager__CenterLoopItem(this, v66, v67);
    }
    else if ( !ListViewManager__MoveCenterItem(this, selectIndex, 0, 0, 0.0, v64) )
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

  if ( (byte_4CB7A31 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A31 = 1;
  }
  v3 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ListViewManager_o *, const MethodInfo *))this->klass->vtable._7_GetDragRoot.methodPtr)(
                                     this,
                                     this->klass->vtable._7_GetDragRoot.method);
  if ( !v3 )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v3,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
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
    sub_1C6BC60(v3, v4);
  }
}


void ListViewManager__DragMaskStart(ListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v7; // x19

  if ( (byte_4CB7A30 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A30 = 1;
  }
  v3 = ((__int64 (__fastcall *)(ListViewManager_o *, const MethodInfo *))this->klass->vtable._7_GetDragRoot.methodPtr)(
         this,
         this->klass->vtable._7_GetDragRoot.method);
  if ( !v3 )
    goto LABEL_18;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v3,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
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
      if ( !byte_4CAFC09 )
      {
        v3 = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
        byte_4CAFC09 = 1;
      }
      if ( v7 )
      {
        UIScrollView__set_currentMomentum(v7, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        return;
      }
    }
LABEL_18:
    sub_1C6BC60(v3, v4);
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
    sub_1C6B9AC(p_callbackAfterScroll, 0, v2, v3);
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
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4CB7A22 & 1) == 0 )
  {
    sub_1C6BA08(&ListViewManager__FocusSelectItem_d__71_TypeInfo);
    byte_4CB7A22 = 1;
  }
  v7 = sub_1C6BC54(ListViewManager__FocusSelectItem_d__71_TypeInfo);
  ListViewManager__FocusSelectItem_d__71___ctor((ListViewManager__FocusSelectItem_d__71_o *)v7, 0, 0);
  if ( !v7 )
    sub_1C6BC60(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 48) = list;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 48), (int32_t)list, v12, v13);
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

  if ( (byte_4CB7A2C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A2C = 1;
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
                   (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
              sub_1C6BC60(Item, v6);
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

  if ( (byte_4CB7A34 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A34 = 1;
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
    sub_1C6BC60(v12, v13);
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

  if ( (byte_4CB7A2E & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&UIDragDropRoot_TypeInfo);
    byte_4CB7A2E = 1;
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
    sub_1C6BC60(v6, v7);
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

  if ( (byte_4CB7A1B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4CB7A1B = 1;
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
                               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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

  if ( (byte_4CB7A20 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4CB7A20 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemList = this->fields.itemList;
  if ( !itemList || !this->fields.sort )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v5 = 0;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1C6BC60(0, v6);
    v5 += ((__int64 (*)(void))v8.fields._current->klass->vtable[5].methodPtr)() & 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4CB7A3A & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A3A = 1;
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
      sub_1C6BC60(gameObject, v9);
    }
  }
  if ( !byte_4CAFC09 )
  {
    sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&scroll->fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  scroll->fields.z = z;
  if ( !byte_4CAFAE9 )
  {
    sub_1C6BA08(&UnityEngine_Vector2_TypeInfo);
    byte_4CAFAE9 = 1;
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

  if ( (byte_4CB7A33 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__GetEnumerator__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A33 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  dropList = (System_Collections_Generic_List_object__o *)this->fields.dropList;
  if ( !dropList )
    sub_1C6BC60(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    dropList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_UIDragDropListViewSurface__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__MoveNext__) )
  {
    current = v7.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v5 )
    {
      if ( !current )
        sub_1C6BC60(v5, v6);
      UIDragDropListViewSurface__DragEnd((UIDragDropListViewSurface_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__Dispose__);
}


void ListViewManager__ItemDragStart(ListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dropList; // x0
  Il2CppObject *current; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CB7A32 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIDragDropListViewSurface__GetEnumerator__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A32 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  dropList = (System_Collections_Generic_List_object__o *)this->fields.dropList;
  if ( !dropList )
    sub_1C6BC60(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    dropList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_UIDragDropListViewSurface__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__MoveNext__) )
  {
    current = v7.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v5 )
    {
      if ( !current )
        sub_1C6BC60(v5, v6);
      UIDragDropListViewSurface__DragStart((UIDragDropListViewSurface_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_UIDragDropListViewSurface__Dispose__);
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
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *indicator; // x20
  struct ListViewItem_o *centerItem; // x2

  if ( (byte_4CB7A36 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A36 = 1;
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
    UIScrollView__RestrictWithinBounds_49530220(scrollView, 1, v10, v9, 0);
    ListViewManager__ClippingItems(this, 0, 0, v11);
    if ( !this->fields.centerItem )
    {
      Item = ListViewManager__GetItem(this, index, v12);
      this->fields.centerItem = Item;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.centerItem, (int32_t)Item, v14, v15);
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
        sub_1C6BC60(scrollView, v7);
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

  if ( (byte_4CB7A26 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Stack_GameObject__Pop__);
    sub_1C6BA08(&Method_System_Collections_Generic_Stack_GameObject__get_Count__);
    byte_4CB7A26 = 1;
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
           (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  else
  {
    v6 = System_Collections_Generic_Stack_object___Pop(
           (System_Collections_Generic_Stack_T__o *)result,
           (const MethodInfo_3A659F4 *)Method_System_Collections_Generic_Stack_GameObject__Pop__);
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
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    result = 0;
    if ( v14 )
    {
      if ( Component_object )
      {
        Component_object[2].monitor = this;
        sub_1C6B9AC((CGThumbnailListItem_o *)&Component_object[2].monitor, (int32_t)this, v12, v13);
        ((void (__fastcall *)(Il2CppObject *, ListViewItem_o *, struct ListViewItemSeed_o *, const MethodInfo *))Component_object->klass->vtable[6].methodPtr)(
          Component_object,
          item,
          this->fields.seed,
          Component_object->klass->vtable[6].method);
        listDragPrefab = this->fields.listDragPrefab;
        Component_object[3].klass = (Il2CppClass *)listDragPrefab;
        sub_1C6B9AC((CGThumbnailListItem_o *)&Component_object[3], (int32_t)listDragPrefab, v16, v17);
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
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
              LODWORD(result->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
              *(_QWORD *)(v23 + 32) = v9;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v23 + 32), (int32_t)v9, v18, v19);
            }
            return (ListViewObject_o *)Component_object;
          }
        }
      }
LABEL_25:
      sub_1C6BC60(result, item);
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

  if ( (byte_4CB7A38 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A38 = 1;
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
          (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v16,
                  (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( (ListViewItem_o *)v16.fields._current == v8 )
          {
            viewObject = (UnityEngine_Object_o *)ListViewManager__MakeObject(this, v8, v11);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v16,
          (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
    sub_1C6BC60(v12, v13);
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

  if ( (byte_4CB7A35 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A35 = 1;
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
          (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v20,
                  (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( (ListViewItem_o *)v20.fields._current == v13 )
          {
            viewObject = (UnityEngine_Object_o *)ListViewManager__MakeObject(this, v13, v16);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v20,
          (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
        sub_1C6BC60(v17, v18);
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

  if ( (byte_4CB7A37 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A37 = 1;
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
          (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v17,
                  (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
        {
          if ( (ListViewItem_o *)v17.fields._current == v10 )
          {
            viewObject = (UnityEngine_Object_o *)ListViewManager__MakeObject(this, v10, v13);
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v17,
          (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
        sub_1C6BC60(v14, v15);
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
  if ( (byte_4CB7A39 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_1C6BA08(&Method_ListViewManager_OnSwipeCenter__);
    this = (ListViewManager_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A39 = 1;
  }
  if ( !go )
    goto LABEL_22;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       go,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
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
                    v11 = (_QWORD *)sub_1C6BA20(Method_ListViewManager_OnSwipeCenter__);
                  v12 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v11, v11[4]);
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
    sub_1C6BC60(this, go);
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

  if ( (byte_4CB7A3D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Stack_GameObject__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_Stack_GameObject__get_Count__);
    byte_4CB7A3D = 1;
  }
  objectStock = (System_Collections_Generic_Stack_T__o *)this->fields.objectStock;
  if ( !objectStock )
    goto LABEL_25;
  size = objectStock->fields._size;
  if ( size >= 1 )
  {
    objectStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___ToArray(
                                                             objectStock,
                                                             (const MethodInfo_3A65B48 *)Method_System_Collections_Generic_Stack_GameObject__ToArray__);
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
              sub_1C6BC68(objectStock);
            }
          }
        }
      }
    }
LABEL_25:
    sub_1C6BC60(objectStock, method);
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

  if ( (byte_4CB7A1D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Stack_GameObject__Push__);
    byte_4CB7A1D = 1;
  }
  memset(&v16, 0, sizeof(v16));
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v16 = v15;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v4 )
      break;
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1C6BC60(v4, v5);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v16.fields._current,
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( v8 )
    {
      if ( !Component_object )
        sub_1C6BC60(v8, v9);
      ListViewObject__ReleaseItem((ListViewObject_o *)Component_object, 0);
      objectStock = (System_Collections_Generic_Stack_T__o *)this->fields.objectStock;
      if ( !objectStock )
        sub_1C6BC60(0, v10);
      System_Collections_Generic_Stack_object___Push(
        objectStock,
        current,
        (const MethodInfo_3A65A54 *)Method_System_Collections_Generic_Stack_GameObject__Push__);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v12 = this->fields.objectList;
  if ( !v12 )
LABEL_20:
    sub_1C6BC60(objectList, method);
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

  if ( (byte_4CB7A3C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__IndexOf__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Stack_GameObject__Push__);
    byte_4CB7A3C = 1;
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
             (const MethodInfo_3801614 *)Method_System_Collections_Generic_List_GameObject__IndexOf__);
      if ( (v8 & 0x80000000) == 0 )
      {
        v6 = v8;
        gameObject = (Il2CppObject *)this->fields.objectList;
        if ( gameObject )
        {
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)gameObject,
            v6,
            (const MethodInfo_3802148 *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
          objectStock = (System_Collections_Generic_Stack_T__o *)this->fields.objectStock;
          gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0);
          if ( objectStock )
          {
            System_Collections_Generic_Stack_object___Push(
              objectStock,
              gameObject,
              (const MethodInfo_3A65A54 *)Method_System_Collections_Generic_Stack_GameObject__Push__);
            return 1;
          }
        }
LABEL_14:
        sub_1C6BC60(gameObject, v6);
      }
    }
  }
  return 0;
}


bool ListViewManager__ReleaseObject_44067364(ListViewManager_o *this, ListViewObject_o *obj, const MethodInfo *method)
{
  Il2CppObject *gameObject; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x21
  unsigned int v8; // w0
  System_Collections_Generic_Stack_T__o *objectStock; // x20

  if ( (byte_4CB7A27 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__IndexOf__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__RemoveAt__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Stack_GameObject__Push__);
    byte_4CB7A27 = 1;
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
             (const MethodInfo_3801614 *)Method_System_Collections_Generic_List_GameObject__IndexOf__);
      if ( (v8 & 0x80000000) == 0 )
      {
        v6 = v8;
        gameObject = (Il2CppObject *)this->fields.objectList;
        if ( gameObject )
        {
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)gameObject,
            v6,
            (const MethodInfo_3802148 *)Method_System_Collections_Generic_List_GameObject__RemoveAt__);
          objectStock = (System_Collections_Generic_Stack_T__o *)this->fields.objectStock;
          gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0);
          if ( objectStock )
          {
            System_Collections_Generic_Stack_object___Push(
              objectStock,
              gameObject,
              (const MethodInfo_3A65A54 *)Method_System_Collections_Generic_Stack_GameObject__Push__);
            return 1;
          }
        }
LABEL_14:
        sub_1C6BC60(gameObject, v6);
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
    sub_1C6BC60(this, method);
  seed->fields.arrangementPich.fields.y = y;
}


void ListViewManager__SetCallbackAfterScroll(
        ListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.callbackAfterScroll = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callbackAfterScroll, (int32_t)callback, (int32_t)method, v3);
}


void ListViewManager__SetEmptyMessageBase(ListViewManager_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Object_o *emptyMessageBase; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4CB7A40 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A40 = 1;
  }
  emptyMessageBase = (UnityEngine_Object_o *)this->fields.emptyMessageBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(emptyMessageBase, 0, 0) )
  {
    v7 = this->fields.emptyMessageBase;
    if ( !v7 )
      sub_1C6BC60(0, v6);
    UnityEngine_GameObject__SetActive(v7, isActive, 0);
  }
}


void ListViewManager__SetEnabledColliderDragMask(ListViewManager_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4CB7A2F & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A2F = 1;
  }
  v5 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ListViewManager_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._7_GetDragRoot.methodPtr)(
                                     this,
                                     this->klass->vtable._7_GetDragRoot.method,
                                     method);
  if ( !v5 )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v5,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIDragDropListViewBackMask___);
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
    sub_1C6BC60(v5, v6);
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
    sub_1C6BC60(this, 0);
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

  if ( (byte_4CB7A23 & 1) == 0 )
  {
    sub_1C6BA08(&EquipGraphListViewManager_TypeInfo);
    sub_1C6BA08(&SupportServantEquipListViewManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_13194/*"SvtEqScrollBarValue"*/);
    byte_4CB7A23 = 1;
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
    sub_1C6BC60(scrollBar, method);
  }
  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_12;
  value = UIProgressBar__get_value(scrollBar, 0);
  UnityEngine_PlayerPrefs__SetFloat((System_String_o *)StringLiteral_13194/*"SvtEqScrollBarValue"*/, value, 0);
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
  if ( (byte_4CB7A3B & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A3B = 1;
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
  if ( !byte_4CAFC09 )
  {
    gameObject = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  if ( !v17 )
LABEL_23:
    sub_1C6BC60(gameObject, v12);
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

  if ( (byte_4CB7A1E & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_17538/*"btn_sort_up"*/);
    sub_1C6BA08(&StringLiteral_17536/*"btn_sort_new"*/);
    sub_1C6BA08(&StringLiteral_17537/*"btn_sort_old"*/);
    sub_1C6BA08(&StringLiteral_17535/*"btn_sort_down"*/);
    byte_4CB7A1E = 1;
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
          v10 = (System_String_o **)&StringLiteral_17537/*"btn_sort_old"*/;
          v11 = (System_String_o **)&StringLiteral_17536/*"btn_sort_new"*/;
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
          v10 = (System_String_o **)&StringLiteral_17538/*"btn_sort_up"*/;
          v11 = (System_String_o **)&StringLiteral_17535/*"btn_sort_down"*/;
          goto LABEL_20;
        }
      }
    }
LABEL_24:
    sub_1C6BC60(sort, v4);
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
      sub_1C6BC60(scrollView, v6);
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
    UIScrollView__RestrictWithinBounds_49530220(scrollView, 1, v9, v8, 0);
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
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_object__o *v14; // x22
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  struct ListViewSort_o *sort; // x8
  int32_t v27; // w23
  _BOOL4 isAscendingOrder; // w20
  bool v29; // w21
  ListViewManager___c_c *v30; // x0
  struct ListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__68_0; // x20
  Il2CppObject *v33; // x24
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct ListViewManager___c_StaticFields *v36; // x0
  CGThumbnailListItem_o *p__9__68_0; // x0
  Il2CppObject *v38; // x24
  struct ListViewManager___c_StaticFields *v39; // x0
  const MethodInfo *v40; // x3
  struct ListViewItem_o **p_topItem; // x25
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct ListViewItem_o **p_bottomItem; // x26
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct ListViewItem_o **p_leftItem; // x27
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct ListViewItem_o **p_rightItem; // x28
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  Il2CppObject *Item; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  Il2CppObject *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  Il2CppObject *v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  Il2CppObject *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  const MethodInfo_38006A4 *v67; // x2
  int32_t i; // w29
  const MethodInfo *v69; // x2
  struct ListViewItem_o *v70; // x20
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  struct ListViewItem_o **v73; // x0
  float x; // s0
  struct ListViewItem_o **v75; // x0
  UnityEngine_Object_o *emptyMessageBase; // x20
  UnityEngine_Object_o *indicator; // x20
  UnityEngine_Object_o *scrollView; // x20
  const MethodInfo *v79; // x3
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  UnityEngine_Object_o *v82; // x20
  UIScrollView_o *v83; // x20
  const MethodInfo *v84; // x4
  const MethodInfo *v85; // x2
  ListViewItem_o *v86; // x0
  const MethodInfo *v87; // x2
  int32_t v88; // [xsp+Ch] [xbp-A4h]
  int32_t v89; // [xsp+10h] [xbp-A0h]
  int32_t index; // [xsp+14h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v91; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+30h] [xbp-80h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB7A21 & 1) == 0 )
  {
    sub_1C6BA08(&System_Comparison_ListViewItem__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__Sort__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_ListViewItem__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    sub_1C6BA08(&Method_ListViewManager___c__SortItem_b__68_0__);
    sub_1C6BA08(&Method_ListViewManager___c__SortItem_b__68_1__);
    sub_1C6BA08(&ListViewManager___c_TypeInfo);
    byte_4CB7A21 = 1;
  }
  memset(&v92, 0, sizeof(v92));
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !Instance )
    goto LABEL_94;
  v89 = addEmptyTarminal;
  SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)Instance, 0);
  ListViewManager__ReleaseObject(this, v11);
  Instance = (__int64)this->fields.sort;
  if ( !Instance )
    goto LABEL_94;
  *(_QWORD *)(Instance + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(Instance + 32), (int32_t)this, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  Instance = (__int64)this->fields.itemList;
  if ( Instance )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v91,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v92 = v91;
    while ( 1 )
    {
      v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v92,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v15 )
        break;
      current = v92.fields._current;
      if ( !v92.fields._current )
        sub_1C6BC60(v15, v16);
      v18 = ((__int64 (__fastcall *)(Il2CppObject *, struct ListViewSort_o *, const MethodInfo *))v92.fields._current->klass->vtable[4].methodPtr)(
              v92.fields._current,
              this->fields.sort,
              v92.fields._current->klass->vtable[4].method);
      if ( (v18 & 1) != 0 )
      {
        if ( !v14 )
          sub_1C6BC60(v18, v19);
        items = v14->fields._items;
        v23 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++v14->fields._version;
        if ( !items )
          sub_1C6BC60(v18, v19);
        size = v14->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            current,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v25[4] = (Il2CppClass *)current;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v25 + 4), (int32_t)current, v20, v21);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v92,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  if ( !v14 )
    goto LABEL_94;
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_94;
  v27 = v14->fields._size;
  isAscendingOrder = sort->fields.isAscendingOrder;
  v29 = isAllDisp;
  v30 = ListViewManager___c_TypeInfo;
  if ( !ListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewManager___c_TypeInfo);
    v30 = ListViewManager___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  if ( isAscendingOrder )
  {
    _9__68_0 = (System_Comparison_T__o *)static_fields->__9__68_0;
    if ( !_9__68_0 )
    {
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = ListViewManager___c_TypeInfo;
      }
      v33 = (Il2CppObject *)v30->static_fields->__9;
      _9__68_0 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_ListViewItem__TypeInfo);
      System_Comparison_object____ctor(_9__68_0, v33, Method_ListViewManager___c__SortItem_b__68_0__, 0);
      v36 = ListViewManager___c_TypeInfo->static_fields;
      v36->__9__68_0 = (struct System_Comparison_ListViewItem__o *)_9__68_0;
      p__9__68_0 = (CGThumbnailListItem_o *)&v36->__9__68_0;
LABEL_29:
      sub_1C6B9AC(p__9__68_0, (int32_t)_9__68_0, v34, v35);
    }
  }
  else
  {
    _9__68_0 = (System_Comparison_T__o *)static_fields->__9__68_1;
    if ( !_9__68_0 )
    {
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = ListViewManager___c_TypeInfo;
      }
      v38 = (Il2CppObject *)v30->static_fields->__9;
      _9__68_0 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_ListViewItem__TypeInfo);
      System_Comparison_object____ctor(_9__68_0, v38, Method_ListViewManager___c__SortItem_b__68_1__, 0);
      v39 = ListViewManager___c_TypeInfo->static_fields;
      v39->__9__68_1 = (struct System_Comparison_ListViewItem__o *)_9__68_0;
      p__9__68_0 = (CGThumbnailListItem_o *)&v39->__9__68_1;
      goto LABEL_29;
    }
  }
  System_Collections_Generic_List_object___Sort_58729528(
    v14,
    _9__68_0,
    (const MethodInfo_3802438 *)Method_System_Collections_Generic_List_ListViewItem__Sort__);
  ListViewManager__CheckFocusItem(this, (System_Collections_Generic_List_ListViewItem__o *)v14, v27, v40);
  this->fields.topItem = 0;
  p_topItem = &this->fields.topItem;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.topItem, 0, v42, v43);
  this->fields.bottomItem = 0;
  p_bottomItem = &this->fields.bottomItem;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.bottomItem, 0, v45, v46);
  this->fields.leftItem = 0;
  p_leftItem = &this->fields.leftItem;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.leftItem, 0, v48, v49);
  p_rightItem = &this->fields.rightItem;
  this->fields.rightItem = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.rightItem, 0, v51, v52);
  index = v27 - 1;
  this->fields.isAllDisp = v29;
  if ( v27 < 1 )
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
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this->fields.leftItem = (struct ListViewItem_o *)Item;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.leftItem, (int32_t)Item, v56, v57);
    Instance = (__int64)this->fields.itemList;
    if ( !Instance )
      goto LABEL_94;
    v58 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)Instance,
            0,
            (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    *p_rightItem = (struct ListViewItem_o *)v58;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.rightItem, (int32_t)v58, v59, v60);
  }
  Instance = (__int64)this->fields.scrollView;
  if ( !Instance )
    goto LABEL_94;
  v88 = selectIndex;
  if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)Instance, 0) )
  {
    Instance = (__int64)this->fields.itemList;
    if ( !Instance )
      goto LABEL_94;
    v61 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)Instance,
            0,
            (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this->fields.topItem = (struct ListViewItem_o *)v61;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.topItem, (int32_t)v61, v62, v63);
    Instance = (__int64)this->fields.itemList;
    if ( !Instance )
      goto LABEL_94;
    v64 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)Instance,
            0,
            (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    *p_bottomItem = (struct ListViewItem_o *)v64;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.bottomItem, (int32_t)v64, v65, v66);
  }
  v67 = (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
  for ( i = 0; i != v27; ++i )
  {
    Instance = (__int64)System_Collections_Generic_List_object___get_Item(v14, i, v67);
    if ( !Instance )
      goto LABEL_94;
    *(_DWORD *)(Instance + 24) = i;
    *(_DWORD *)(Instance + 28) = i;
    *(_BYTE *)(Instance + 96) = v29;
    v70 = (struct ListViewItem_o *)Instance;
    Instance = (__int64)this->fields.seed;
    if ( !Instance )
      goto LABEL_94;
    LocalPosition = ListViewItemSeed__GetLocalPosition((ListViewItemSeed_o *)Instance, i, v69);
    v70->fields.basePosition = LocalPosition;
    if ( *p_topItem )
    {
      if ( LocalPosition.fields.y > (*p_topItem)->fields.basePosition.fields.y )
      {
        *p_topItem = v70;
        v73 = &this->fields.topItem;
LABEL_50:
        sub_1C6B9AC((CGThumbnailListItem_o *)v73, (int32_t)v70, v71, v72);
        goto LABEL_51;
      }
      if ( !*p_bottomItem )
        goto LABEL_94;
      if ( LocalPosition.fields.y < (*p_bottomItem)->fields.basePosition.fields.y )
      {
        v73 = &this->fields.bottomItem;
        *p_bottomItem = v70;
        goto LABEL_50;
      }
    }
LABEL_51:
    if ( !*p_rightItem )
      goto LABEL_58;
    x = v70->fields.basePosition.fields.x;
    if ( x > (*p_rightItem)->fields.basePosition.fields.x )
    {
      *p_rightItem = v70;
      v75 = &this->fields.rightItem;
LABEL_57:
      sub_1C6B9AC((CGThumbnailListItem_o *)v75, (int32_t)v70, v71, v72);
      goto LABEL_58;
    }
    if ( !*p_leftItem )
      goto LABEL_94;
    if ( x < (*p_leftItem)->fields.basePosition.fields.x )
    {
      v75 = &this->fields.leftItem;
      *p_leftItem = v70;
      goto LABEL_57;
    }
LABEL_58:
    v67 = (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__;
  }
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                        v14,
                        0,
                        (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !Instance )
    goto LABEL_94;
  *(_BYTE *)(Instance + 96) = 1;
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                        v14,
                        index,
                        (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  selectIndex = v88;
  if ( !Instance )
    goto LABEL_94;
  *(_BYTE *)(Instance + 96) = 1;
  if ( v27 < v89 )
    goto LABEL_64;
  Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                        v14,
                        index,
                        (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
  if ( !Instance )
    goto LABEL_94;
  *(_BYTE *)(Instance + 97) = 1;
LABEL_64:
  this->fields.itemSortList = (struct System_Collections_Generic_List_ListViewItem__o *)v14;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.itemSortList, (int32_t)v14, v53, v54);
  this->fields.terminalIndex = -1;
  emptyMessageBase = (UnityEngine_Object_o *)this->fields.emptyMessageBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(emptyMessageBase, 0, 0) )
  {
    Instance = (__int64)this->fields.emptyMessageBase;
    if ( Instance )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v27 < 1, 0);
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
      (unsigned int)v27,
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
  ListViewManager__ClippingItems(this, 1, 0, v79);
  ((void (__fastcall *)(ListViewManager_o *, const MethodInfo *))this->klass->vtable._5_SetSortButtonImage.methodPtr)(
    this,
    this->klass->vtable._5_SetSortButtonImage.method);
  Instance = (__int64)this->fields.sort;
  if ( !Instance )
LABEL_94:
    sub_1C6BC60(Instance, v10);
  *(_QWORD *)(Instance + 32) = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)(Instance + 32), 0, v80, v81);
  v82 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v82, 0, 0) )
  {
    Instance = (__int64)this->fields.scrollView;
    if ( !Instance )
      goto LABEL_94;
    UIScrollView__DisableSpring((UIScrollView_o *)Instance, 0);
    v83 = this->fields.scrollView;
    if ( !byte_4CAFC09 )
    {
      Instance = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
      byte_4CAFC09 = 1;
    }
    if ( !v83 )
      goto LABEL_94;
    UIScrollView__set_currentMomentum(v83, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    if ( selectIndex < 0 )
    {
      Instance = (__int64)this->fields.scrollView;
      if ( !Instance )
        goto LABEL_94;
      UIScrollView__ResetPosition((UIScrollView_o *)Instance, 0);
      v86 = ListViewManager__GetItem(this, 0, v85);
      ListViewManager__CenterLoopItem(this, v86, v87);
    }
    else if ( !ListViewManager__MoveCenterItem(this, selectIndex, 0, 0, 0.0, v84) )
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

  if ( (byte_4CB7A2D & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A2D = 1;
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
        sub_1C6BC60(transform, v4);
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
    sub_1C6BC60(this, method);
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

  if ( (byte_4CB7A15 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A15 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  dropObjectList = (System_Collections_Generic_List_object__o *)this->fields.dropObjectList;
  if ( !dropObjectList )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    dropObjectList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ListViewDropObject__GetEnumerator__);
  v4 = 0;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v7,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__MoveNext__) )
  {
    current = v7.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 += UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ListViewDropObject__Dispose__);
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

  if ( (byte_4CB7A1A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    byte_4CB7A1A = 1;
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
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CB7A17 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewObject__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewObject___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ListViewObject__TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A17 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C6BC60(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C6BC60(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C6BC60(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_ListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C6BC60(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4CB7A1C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A1C = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)itemList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = 0; ; i += UnityEngine_Object__op_Inequality(v7, 0, 0) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v5 )
      break;
    if ( !v9.fields._current )
      sub_1C6BC60(v5, v6);
    v7 = *(UnityEngine_Object_o **)((char *)&v9.fields._current->klass + (unsigned __int64)&qword_70);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  if ( (byte_4CB7A16 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7A16 = 1;
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
      sub_1C6BC60(v6, v7);
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
  if ( (byte_4CB7A43 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C6BA08(&EquipGraphListViewManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&System_Math_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&SupportServantEquipListViewManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    this = (ListViewManager__FocusSelectItem_d__71_o *)sub_1C6BA08(&StringLiteral_13194/*"SvtEqScrollBarValue"*/);
    byte_4CB7A43 = 1;
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
            Float = UnityEngine_PlayerPrefs__GetFloat((System_String_o *)StringLiteral_13194/*"SvtEqScrollBarValue"*/, 0.0, 0);
            UIProgressBar__set_value((UIProgressBar_o *)v10, Float, 0);
            UnityEngine_PlayerPrefs__SetFloat((System_String_o *)StringLiteral_13194/*"SvtEqScrollBarValue"*/, 0.0, 0);
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
                                                                     (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1C6BC60(this, method);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
  UnityEngine_WaitForEndOfFrame___ctor(v4, 0);
  v2->fields.__2__current = (Il2CppObject *)v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields.__2__current, (int32_t)v4, v5, v6);
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_ListViewManager__FocusSelectItem_d__71_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
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

  if ( (byte_4CB7A42 & 1) == 0 )
  {
    sub_1C6BA08(&ListViewManager___c_TypeInfo);
    byte_4CB7A42 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(ListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ListViewManager___c_TypeInfo->static_fields->__9 = (struct ListViewManager___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)ListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C6BC60(this, 0);
  return ListViewItem__SortCompUp(a, b, 0);
}


int32_t ListViewManager___c___SortItem_b__68_1(
        ListViewManager___c_o *this,
        ListViewItem_o *a,
        ListViewItem_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C6BC60(this, 0);
  return ListViewItem__SortCompDown(a, b, 0);
}