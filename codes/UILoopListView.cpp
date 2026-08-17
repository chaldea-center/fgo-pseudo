void UILoopListView___ctor(UILoopListView_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_Transform__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_597216E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_2213A60(&System_Collections_Generic_List_Transform__TypeInfo);
    byte_597216E = 1;
  }
  v3 = System_Collections_Generic_List_Transform__TypeInfo;
  this->fields.itemSize = 100;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_Transform___ctor__);
  this->fields.mChildList = (struct System_Collections_Generic_List_Transform__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mChildList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_Transform___ctor__);
  this->fields.realChildList = (struct System_Collections_Generic_List_Transform__o *)v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.realChildList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.isFirstTime = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t UILoopListView__getChildIdx(UILoopListView_o *this, const MethodInfo *method)
{
  return this->fields.childIdx;
}


void UILoopListView__initWrapContent(UILoopListView_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIScrollView_o *mScroll; // x0
  struct UIScrollView_o *v5; // x20
  MissionNaviTransitionBoardItem_o *p_onDragFinished; // x20
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v8; // x22
  System_Delegate_o *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w8
  UIScrollView_OnDragNotification_c *v17; // x1
  const MethodInfo *v18; // x1

  if ( (byte_5972168 & 1) == 0 )
  {
    sub_2213A60(&UIScrollView_OnDragNotification_TypeInfo);
    sub_2213A60(&Method_UILoopListView_OnMove__);
    byte_5972168 = 1;
  }
  UILoopListView__sortBaseOnMovement(this, method);
  mScroll = this->fields.mScroll;
  if ( !mScroll || (UIScrollView__ResetPosition(mScroll, 0), (v5 = this->fields.mScroll) == 0) )
    sub_2213CDC(mScroll, v3);
  onDragFinished = (System_Delegate_o *)v5->fields.onDragFinished;
  p_onDragFinished = (MissionNaviTransitionBoardItem_o *)&v5->fields.onDragFinished;
  v8 = (UIScrollView_OnDragNotification_o *)sub_2213CCC(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(v8, (Il2CppObject *)this, Method_UILoopListView_OnMove__, 0);
  v9 = System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v8, 0);
  v16 = (int)v9;
  if ( !v9 )
    goto LABEL_9;
  v17 = UIScrollView_OnDragNotification_TypeInfo;
  if ( (UIScrollView_OnDragNotification_c *)v9->klass != UIScrollView_OnDragNotification_TypeInfo
    || (p_onDragFinished->klass = (MissionNaviTransitionBoardItem_c *)v9,
        (UIScrollView_OnDragNotification_c *)v9->klass != v17) )
  {
    sub_221405C(v9, v17, v10);
LABEL_9:
    p_onDragFinished->klass = 0;
  }
  sub_2213A04(p_onDragFinished, v16, v10, v11, v12, v13, v14, v15);
  UILoopListView__wrapContent(this, v18);
  this->fields.isFirstTime = 0;
}


// local variable allocation has failed, the output may be wrong!
void UILoopListView__resetChildPos(UILoopListView_o *this, const MethodInfo *method)
{
  UILoopListView_o *v2; // x19
  struct System_Collections_Generic_List_Transform__o *mChildList; // x8
  int size; // w21
  int32_t v5; // w20
  int32_t itemSize; // w8
  float v7; // s1
  float v8; // s0 OVERLAPPED
  int v9; // s2

  v2 = this;
  if ( (byte_597216B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__get_Count__);
    this = (UILoopListView_o *)sub_2213A60(&Method_System_Collections_Generic_List_Transform__get_Item__);
    byte_597216B = 1;
  }
  mChildList = v2->fields.mChildList;
  if ( !mChildList )
    goto LABEL_13;
  size = mChildList->fields._size;
  if ( size >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      this = (UILoopListView_o *)v2->fields.mChildList;
      if ( !this )
        break;
      this = (UILoopListView_o *)System_Collections_Generic_List_object___get_Item(
                                   (System_Collections_Generic_List_object__o *)this,
                                   v5,
                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_Transform__get_Item__);
      itemSize = v2->fields.itemSize;
      if ( v2->fields.isHorizontal )
      {
        v7 = 0.0;
        v8 = (float)(itemSize * v5);
        if ( !this )
          break;
      }
      else
      {
        v8 = 0.0;
        v7 = (float)-(v5 * itemSize);
        if ( !this )
          break;
      }
      v9 = 0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v8, 0);
      if ( size == ++v5 )
        return;
    }
LABEL_13:
    sub_2213CDC(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void UILoopListView__setScrollPos(UILoopListView_o *this, int32_t idx, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mChildList; // x0
  struct UIScrollView_o *mScroll; // x19
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_597216D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__get_Item__);
    byte_597216D = 1;
  }
  mChildList = (System_Collections_Generic_List_object__o *)this->fields.mChildList;
  if ( !mChildList
    || (mChildList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    mChildList,
                                                                    idx,
                                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_Transform__get_Item__)) == 0
    || (mScroll = this->fields.mScroll,
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)mChildList, 0),
        !mScroll) )
  {
    sub_2213CDC(mChildList, *(_QWORD *)&idx);
  }
  ((void (__fastcall *)(struct UIScrollView_o *, const MethodInfo *, long double, long double, long double))mScroll->klass->vtable._10_MoveRelative.methodPtr)(
    mScroll,
    mScroll->klass->vtable._10_MoveRelative.method,
    *(long double *)&localPosition.fields.x,
    *(long double *)&localPosition.fields.y,
    *(long double *)&localPosition.fields.z);
}


bool UILoopListView__setScrollViewInfo(UILoopListView_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_Transform_o **p_mTrans; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  Il2CppObject *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  UnityEngine_Component_o *mPanel; // x0
  Il2CppObject *Component_object; // x0
  struct UIScrollView_o **p_mScroll; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x1
  UnityEngine_Object_o *mScroll; // x22
  int32_t movement; // w8
  int32_t *v33; // x8
  bool result; // w0

  if ( (byte_5972169 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&Method_NGUITools_FindInParents_UIPanel___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972169 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  p_mTrans = &this->fields.mTrans;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v5, v6, v7, v8, v9, v10);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v11);
  v13 = NGUITools__FindInParents_object_(
          gameObject,
          (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)v13;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mPanel, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  mPanel = (UnityEngine_Component_o *)this->fields.mPanel;
  if ( !mPanel )
    goto LABEL_20;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       mPanel,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  this->fields.mScroll = (struct UIScrollView_o *)Component_object;
  p_mScroll = &this->fields.mScroll;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mScroll,
    (int32_t)Component_object,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  mScroll = (UnityEngine_Object_o *)this->fields.mScroll;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
  if ( UnityEngine_Object__op_Equality(mScroll, 0, 0) )
    return 0;
  mPanel = (UnityEngine_Component_o *)*p_mTrans;
  if ( !*p_mTrans
    || (mPanel = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)mPanel, 0, 0)) == 0
    || (mPanel = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                              mPanel,
                                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___),
        !*p_mScroll) )
  {
LABEL_20:
    sub_2213CDC(mPanel, v20);
  }
  movement = (*p_mScroll)->fields.movement;
  if ( movement == 1 )
  {
    this->fields.isHorizontal = 0;
    if ( mPanel )
    {
      v33 = (int32_t *)&mPanel[7].klass + 1;
      goto LABEL_19;
    }
    goto LABEL_20;
  }
  if ( movement )
    return 0;
  this->fields.isHorizontal = 1;
  if ( !mPanel )
    goto LABEL_20;
  v33 = (int32_t *)&mPanel[7];
LABEL_19:
  result = 1;
  this->fields.itemSize = *v33;
  return result;
}


void UILoopListView__sortBaseOnMovement(UILoopListView_o *this, const MethodInfo *method)
{
  void *mTrans; // x0
  const MethodInfo *v4; // x1
  struct System_Collections_Generic_List_Transform__o *mChildList; // x8
  int32_t size; // w2
  int v7; // w9
  int32_t v8; // w20
  System_Collections_Generic_List_object__o *v9; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass *v19; // x1
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_object__o *realChildList; // x21
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass *v31; // x1
  Il2CppClass **v32; // x0
  struct System_Collections_Generic_List_Transform__o *v33; // x19
  struct UILoopListView___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__16_0; // x20
  Il2CppObject *v36; // x21
  struct UILoopListView___c_StaticFields *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7

  if ( (byte_597216A & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_Transform__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__Sort__);
    sub_2213A60(&Method_UILoopListView___c__sortBaseOnMovement_b__16_0__);
    sub_2213A60(&UILoopListView___c_TypeInfo);
    byte_597216A = 1;
  }
  mTrans = (void *)UILoopListView__setScrollViewInfo(this, method);
  if ( ((unsigned __int8)mTrans & 1) != 0 )
  {
    mChildList = this->fields.mChildList;
    if ( !mChildList )
      goto LABEL_23;
    size = mChildList->fields._size;
    v7 = mChildList->fields._version + 1;
    mChildList->fields._size = 0;
    mChildList->fields._version = v7;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)mChildList->fields._items, 0, size, 0);
    mTrans = this->fields.mTrans;
    if ( !mTrans )
      goto LABEL_23;
    v8 = 0;
    while ( v8 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)mTrans, 0) )
    {
      mTrans = this->fields.mTrans;
      if ( mTrans )
      {
        v9 = (System_Collections_Generic_List_object__o *)this->fields.mChildList;
        mTrans = UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)mTrans, v8, 0);
        if ( v9 )
        {
          items = v9->fields._items;
          v17 = Method_System_Collections_Generic_List_Transform__Add__;
          ++v9->fields._version;
          if ( items )
          {
            v18 = v9->fields._size;
            v19 = (Il2CppClass *)mTrans;
            if ( (unsigned int)v18 >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                (Il2CppObject *)mTrans,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + v18;
              v9->fields._size = v18 + 1;
              v20[4] = v19;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v19, v10, v11, v12, v13, v14, v15);
            }
            mTrans = this->fields.mTrans;
            if ( mTrans )
            {
              realChildList = (System_Collections_Generic_List_object__o *)this->fields.realChildList;
              mTrans = UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)mTrans, v8, 0);
              if ( realChildList )
              {
                v28 = realChildList->fields._items;
                v29 = Method_System_Collections_Generic_List_Transform__Add__;
                ++realChildList->fields._version;
                if ( v28 )
                {
                  v30 = realChildList->fields._size;
                  v31 = (Il2CppClass *)mTrans;
                  if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      realChildList,
                      (Il2CppObject *)mTrans,
                      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v32 = &v28->obj.klass + v30;
                    realChildList->fields._size = v30 + 1;
                    v32[4] = v31;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)(v32 + 4),
                      (int32_t)v31,
                      v22,
                      v23,
                      v24,
                      v25,
                      v26,
                      v27);
                  }
                  mTrans = this->fields.mTrans;
                  ++v8;
                  if ( mTrans )
                    continue;
                }
              }
            }
          }
        }
      }
      goto LABEL_23;
    }
    UILoopListView__resetChildPos(this, v4);
    v33 = this->fields.mChildList;
    mTrans = UILoopListView___c_TypeInfo;
    if ( !*(&UILoopListView___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UILoopListView___c_TypeInfo, v4);
      mTrans = UILoopListView___c_TypeInfo;
    }
    static_fields = (struct UILoopListView___c_StaticFields *)*((_QWORD *)mTrans + 23);
    _9__16_0 = (System_Comparison_T__o *)static_fields->__9__16_0;
    if ( !_9__16_0 )
    {
      if ( !*((_DWORD *)mTrans + 57) )
      {
        j_il2cpp_runtime_class_init_0(mTrans, v4);
        static_fields = UILoopListView___c_TypeInfo->static_fields;
      }
      v36 = (Il2CppObject *)static_fields->__9;
      _9__16_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_Transform__TypeInfo);
      System_Comparison_object____ctor(_9__16_0, v36, Method_UILoopListView___c__sortBaseOnMovement_b__16_0__, 0);
      v37 = UILoopListView___c_TypeInfo->static_fields;
      v37->__9__16_0 = (struct System_Comparison_Transform__o *)_9__16_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v37->__9__16_0, (int32_t)_9__16_0, v38, v39, v40, v41, v42, v43);
    }
    if ( !v33 )
LABEL_23:
      sub_2213CDC(mTrans, v4);
    System_Collections_Generic_List_object___Sort_71849708(
      (System_Collections_Generic_List_object__o *)v33,
      _9__16_0,
      (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_Transform__Sort__);
  }
}


void UILoopListView__updateItem(
        UILoopListView_o *this,
        UnityEngine_Transform_o *item,
        int32_t index,
        const MethodInfo *method)
{
  struct UIScrollView_o *mScroll; // x8
  UILoopListView_o *v5; // x21
  __int64 v8; // x1
  float y; // s8
  float itemSize; // s9
  float v11; // s9
  double v12; // d8
  double v13; // d0
  double v14; // d0
  double v15; // d1
  double v16; // d1
  double v17; // d8
  struct UILoopListView_OnInitializeItem_o *onInitializeItem; // x21
  __int64 v19; // x3
  double iptr; // [xsp+18h] [xbp-28h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( !this->fields.onInitializeItem )
    return;
  mScroll = this->fields.mScroll;
  v5 = this;
  if ( !mScroll )
LABEL_28:
    sub_2213CDC(this, item);
  if ( mScroll->fields.movement == 1 )
  {
    if ( !item )
      goto LABEL_28;
    localPosition = UnityEngine_Transform__get_localPosition(item, 0);
    y = localPosition.fields.y;
    itemSize = (float)v5->fields.itemSize;
    if ( !byte_596A30A )
    {
LABEL_10:
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
  }
  else
  {
    if ( !item )
      goto LABEL_28;
    LODWORD(y) = (unsigned int)UnityEngine_Transform__get_localPosition(item, 0);
    itemSize = (float)v5->fields.itemSize;
    if ( !byte_596A30A )
      goto LABEL_10;
  }
  v11 = y / itemSize;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v8);
  v12 = v11;
  v13 = modf(v11, &iptr);
  if ( v11 >= 0.0 )
  {
    if ( v13 != 0.5 )
    {
      v17 = floor(v12 + 0.5);
      goto LABEL_23;
    }
    v15 = 1.0;
    v14 = iptr;
  }
  else
  {
    if ( v13 != -0.5 )
    {
      v17 = ceil(v12 + -0.5);
      goto LABEL_23;
    }
    v14 = iptr;
    v15 = -1.0;
  }
  v16 = v14 + v15;
  if ( ((__int64)v14 & 1) != 0 )
    v17 = v16;
  else
    v17 = v14;
LABEL_23:
  onInitializeItem = v5->fields.onInitializeItem;
  this = (UILoopListView_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0);
  if ( !onInitializeItem )
    goto LABEL_28;
  if ( v17 == INFINITY )
    v19 = 0x80000000LL;
  else
    v19 = (unsigned int)(int)v17;
  ((void (__fastcall *)(intptr_t, UILoopListView_o *, _QWORD, __int64, intptr_t))onInitializeItem->fields.invoke_impl)(
    onInitializeItem->fields.method_code,
    this,
    (unsigned int)index,
    v19,
    onInitializeItem->fields.method);
}


void UILoopListView__wrapContent(UILoopListView_o *this, const MethodInfo *method)
{
  UILoopListView_o *v2; // x19
  struct System_Collections_Generic_List_Transform__o *mChildList; // x8
  int32_t size; // w23
  int32_t itemSize; // w22
  unsigned int v6; // w8
  UILoopListView_o *v7; // x21
  unsigned __int64 v8; // x20
  int32_t *p_maxIndex; // x22
  float v10; // s13
  float v11; // s1
  float v12; // s2
  char v13; // w27
  float v14; // s14
  UILoopListView_o *v15; // x21
  const MethodInfo *v16; // x3
  float v17; // s0
  __int64 v18; // x1
  float v19; // s10
  float y; // s8
  float z; // s9
  int v22; // s11
  float v23; // s10
  __int64 v24; // x1
  float x; // s10
  float v26; // s12
  double v27; // d11
  double v28; // d0
  double v29; // d0
  double v30; // d1
  double v31; // d1
  int32_t minIndex; // w8
  int32_t maxIndex; // w9
  int v34; // w10
  const MethodInfo *v36; // x3
  System_String_o *v37; // x0
  char v38; // w25
  struct UIScrollView_o *mScroll; // x8
  int32_t v40; // w20
  float v41; // s14
  UILoopListView_o *v42; // x22
  const MethodInfo *v43; // x3
  __int64 v44; // x1
  float v45; // s8
  float v46; // s10
  float v47; // s9
  int v48; // s11
  float v49; // s10
  float v50; // s12
  double v51; // d11
  double v52; // d0
  double v53; // d0
  double v54; // d1
  __int64 v55; // x1
  float v56; // s8
  float v57; // s10
  float v58; // s9
  int v59; // s11
  float v60; // s10
  float v61; // s12
  double v62; // d11
  double v63; // d0
  double v64; // d0
  double v65; // d1
  double v66; // d1
  double v67; // d1
  int v68; // w10
  int32_t v69; // w8
  int32_t v70; // w9
  bool v71; // cc
  const MethodInfo *v72; // x3
  int32_t *v73; // x0
  int v74; // w10
  int32_t v75; // w8
  int32_t v76; // w9
  bool v77; // cc
  const MethodInfo *v78; // x3
  System_String_o *v79; // x0
  float v80; // [xsp+0h] [xbp-B0h]
  int v81; // [xsp+4h] [xbp-ACh] BYREF
  int32_t index[2]; // [xsp+8h] [xbp-A8h] BYREF
  double iptr; // [xsp+58h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_597216C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__get_Count__);
    this = (UILoopListView_o *)sub_2213A60(&Method_System_Collections_Generic_List_Transform__get_Item__);
    byte_597216C = 1;
  }
  mChildList = v2->fields.mChildList;
  *(_QWORD *)index = 0;
  v81 = 0;
  if ( !mChildList )
    goto LABEL_111;
  this = (UILoopListView_o *)v2->fields.mPanel;
  if ( !this )
    goto LABEL_111;
  size = mChildList->fields._size;
  itemSize = v2->fields.itemSize;
  this = (UILoopListView_o *)((__int64 (__fastcall *)(UILoopListView_o *, Il2CppClass *))this->klass[1]._1.interopData)(
                               this,
                               this->klass[1]._1.klass);
  if ( !this )
    goto LABEL_111;
  v6 = size * itemSize;
  v7 = this;
  v8 = 0;
  p_maxIndex = &this->fields.maxIndex;
  v80 = vcvts_n_f32_s32(v6, 1u);
  do
  {
    if ( v8 >= LODWORD(v7->fields.m_CancellationTokenSource) )
      goto LABEL_112;
    this = (UILoopListView_o *)v2->fields.mTrans;
    if ( !this )
      goto LABEL_111;
    v84 = UnityEngine_Transform__InverseTransformPoint(
            (UnityEngine_Transform_o *)this,
            *(UnityEngine_Vector3_o *)(p_maxIndex - 2),
            0);
    if ( v8 >= LODWORD(v7->fields.m_CancellationTokenSource) )
      goto LABEL_112;
    ++v8;
    *(UnityEngine_Vector3_o *)(p_maxIndex - 2) = v84;
    p_maxIndex += 3;
  }
  while ( v8 != 4 );
  if ( LODWORD(v7->fields.m_CancellationTokenSource) <= 2 )
LABEL_112:
    sub_2213CE4(this);
  v10 = v80 + v80;
  if ( v2->fields.isHorizontal )
  {
    this = (UILoopListView_o *)v2->fields.mChildList;
    v11 = *(float *)&v7->fields.itemSize;
    v12 = *(float *)&v7->fields.mTrans;
    index[1] = 0;
    if ( this )
    {
      method = 0;
      v13 = 1;
      v14 = v11 + (float)((float)(v12 - v11) * 0.5);
      do
      {
        if ( (int)method >= SLODWORD(this->fields.m_CancellationTokenSource) )
        {
          v38 = v13;
          goto LABEL_53;
        }
        this = (UILoopListView_o *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)this,
                                     (int32_t)method,
                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_Transform__get_Item__);
        if ( !this )
          break;
        v15 = this;
        v17 = COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0)) - v14;
        if ( v17 >= (float)-v80 )
        {
          if ( v17 <= v80 )
          {
            if ( v2->fields.isFirstTime )
              UILoopListView__updateItem(v2, (UnityEngine_Transform_o *)v15, index[1], v16);
            goto LABEL_50;
          }
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v15, 0);
          x = localPosition.fields.x;
          y = localPosition.fields.y;
          z = localPosition.fields.z;
          v22 = v2->fields.itemSize;
          if ( !byte_596A30A )
          {
            sub_2213A60(&System_Math_TypeInfo);
            byte_596A30A = 1;
          }
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v24);
          v23 = x - v10;
        }
        else
        {
          v85 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v15, 0);
          v19 = v85.fields.x;
          y = v85.fields.y;
          z = v85.fields.z;
          v22 = v2->fields.itemSize;
          if ( !byte_596A30A )
          {
            sub_2213A60(&System_Math_TypeInfo);
            byte_596A30A = 1;
          }
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v18);
          v23 = v10 + v19;
        }
        v26 = v23 / (float)v22;
        v27 = v26;
        v28 = modf(v26, &iptr);
        if ( v26 >= 0.0 )
        {
          if ( v28 == 0.5 )
          {
            v29 = iptr;
            v30 = 1.0;
LABEL_34:
            v31 = v29 + v30;
            if ( ((__int64)v29 & 1) != 0 )
              v29 = v31;
            goto LABEL_41;
          }
          v29 = floor(v27 + 0.5);
        }
        else
        {
          if ( v28 == -0.5 )
          {
            v29 = iptr;
            v30 = -1.0;
            goto LABEL_34;
          }
          v29 = ceil(v27 + -0.5);
        }
LABEL_41:
        minIndex = v2->fields.minIndex;
        maxIndex = v2->fields.maxIndex;
        if ( minIndex == maxIndex )
          goto LABEL_49;
        v34 = (int)v29;
        if ( v29 == INFINITY )
          v34 = 0x80000000;
        if ( minIndex <= v34 && v34 <= maxIndex )
        {
LABEL_49:
          v87.fields.x = v23;
          v87.fields.y = y;
          v87.fields.z = z;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v15, v87, 0);
          UILoopListView__updateItem(v2, (UnityEngine_Transform_o *)v15, index[1], v36);
          v37 = System_Int32__ToString((int32_t)&index[1], 0);
          UnityEngine_Object__set_name((UnityEngine_Object_o *)v15, v37, 0);
          v2->fields.childIdx = index[1];
        }
        else
        {
          v13 = 0;
        }
LABEL_50:
        this = (UILoopListView_o *)v2->fields.mChildList;
        method = (const MethodInfo *)(unsigned int)++index[1];
      }
      while ( this );
    }
LABEL_111:
    sub_2213CDC(this, method);
  }
  this = (UILoopListView_o *)v2->fields.mChildList;
  if ( !this )
    goto LABEL_111;
  v40 = 0;
  v38 = 1;
  v41 = *(float *)&v7->fields.minIndex
      + (float)((float)(*((float *)&v7->fields.mTrans + 1) - *(float *)&v7->fields.minIndex) * 0.5);
  while ( v40 < SLODWORD(this->fields.m_CancellationTokenSource) )
  {
    this = (UILoopListView_o *)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)this,
                                 v40,
                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_Transform__get_Item__);
    if ( !this )
      goto LABEL_111;
    v42 = this;
    v88 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    if ( (float)(v88.fields.y - v41) < (float)-v80 )
    {
      v89 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v42, 0);
      v45 = v89.fields.x;
      v46 = v89.fields.y;
      v47 = v89.fields.z;
      v48 = v2->fields.itemSize;
      if ( !byte_596A30A )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_596A30A = 1;
      }
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v44);
      v49 = v10 + v46;
      v50 = v49 / (float)v48;
      v51 = v50;
      v52 = modf(v50, &iptr);
      if ( v50 >= 0.0 )
      {
        if ( v52 == 0.5 )
        {
          v53 = iptr;
          v54 = 1.0;
          goto LABEL_77;
        }
        v53 = floor(v51 + 0.5);
      }
      else if ( v52 == -0.5 )
      {
        v53 = iptr;
        v54 = -1.0;
LABEL_77:
        v66 = v53 + v54;
        if ( ((__int64)v53 & 1) != 0 )
          v53 = v66;
      }
      else
      {
        v53 = ceil(v51 + -0.5);
      }
      v68 = (int)v53;
      v69 = v2->fields.minIndex;
      v70 = v2->fields.maxIndex;
      if ( v53 == INFINITY )
        v68 = 0x80000000;
      index[0] = v68;
      if ( v69 == v70 || (v69 <= v68 ? (v71 = v68 <= v70) : (v71 = 0), v71) )
      {
        v91.fields.x = v45;
        v91.fields.y = v49;
        v91.fields.z = v47;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v42, v91, 0);
        UILoopListView__updateItem(v2, (UnityEngine_Transform_o *)v42, v40, v72);
        v73 = index;
LABEL_109:
        v79 = System_Int32__ToString((int32_t)v73, 0);
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v42, v79, 0);
        goto LABEL_110;
      }
      goto LABEL_107;
    }
    if ( (float)(v88.fields.y - v41) <= v80 )
    {
      if ( v2->fields.isFirstTime )
        UILoopListView__updateItem(v2, (UnityEngine_Transform_o *)v42, v40, v43);
      goto LABEL_110;
    }
    v90 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v42, 0);
    v56 = v90.fields.x;
    v57 = v90.fields.y;
    v58 = v90.fields.z;
    v59 = v2->fields.itemSize;
    if ( !byte_596A30A )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v55);
    v60 = v57 - v10;
    v61 = v60 / (float)v59;
    v62 = v61;
    v63 = modf(v61, &iptr);
    if ( v61 >= 0.0 )
    {
      if ( v63 != 0.5 )
      {
        v64 = floor(v62 + 0.5);
        goto LABEL_100;
      }
      v64 = iptr;
      v65 = 1.0;
    }
    else
    {
      if ( v63 != -0.5 )
      {
        v64 = ceil(v62 + -0.5);
        goto LABEL_100;
      }
      v64 = iptr;
      v65 = -1.0;
    }
    v67 = v64 + v65;
    if ( ((__int64)v64 & 1) != 0 )
      v64 = v67;
LABEL_100:
    v74 = (int)v64;
    v75 = v2->fields.minIndex;
    v76 = v2->fields.maxIndex;
    if ( v64 == INFINITY )
      v74 = 0x80000000;
    v81 = v74;
    if ( v75 == v76 || (v75 <= v74 ? (v77 = v74 <= v76) : (v77 = 0), v77) )
    {
      v92.fields.x = v56;
      v92.fields.y = v60;
      v92.fields.z = v58;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v42, v92, 0);
      UILoopListView__updateItem(v2, (UnityEngine_Transform_o *)v42, v40, v78);
      v73 = &v81;
      goto LABEL_109;
    }
LABEL_107:
    v38 = 0;
LABEL_110:
    this = (UILoopListView_o *)v2->fields.mChildList;
    ++v40;
    if ( !this )
      goto LABEL_111;
  }
LABEL_53:
  mScroll = v2->fields.mScroll;
  if ( !mScroll )
    goto LABEL_111;
  mScroll->fields.restrictWithinPanel = (v38 & 1) == 0;
}


void UILoopListView_OnInitializeItem___ctor(
        UILoopListView_OnInitializeItem_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( v12 == 2 )
    {
      v13 = sub_200F334;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v15, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v12 != 3 )
    goto LABEL_8;
  v13 = sub_200F358;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v13;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_200F2D4;
}


System_IAsyncResult_o *UILoopListView_OnInitializeItem__BeginInvoke(
        UILoopListView_OnInitializeItem_o *this,
        UnityEngine_GameObject_o *go,
        int32_t wrapIndex,
        int32_t realIndex,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int128 v11; // [xsp+0h] [xbp-50h] BYREF
  __int128 v12; // [xsp+10h] [xbp-40h]
  int32_t v13; // [xsp+28h] [xbp-28h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-24h] BYREF

  v14 = wrapIndex;
  v13 = realIndex;
  v12 = 0u;
  v11 = (unsigned __int64)go;
  *((_QWORD *)&v11 + 1) = j_il2cpp_value_box_0(qword_5984348, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(qword_5984348, &v13);
  return (System_IAsyncResult_o *)sub_2213A14(this, &v11, callback, object);
}


void UILoopListView_OnInitializeItem__EndInvoke(
        UILoopListView_OnInitializeItem_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void UILoopListView_OnInitializeItem__Invoke(
        UILoopListView_OnInitializeItem_o *this,
        UnityEngine_GameObject_o *go,
        int32_t wrapIndex,
        int32_t realIndex,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    go,
    wrapIndex,
    realIndex,
    this->fields.method);
}


void UILoopListView___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597216F & 1) == 0 )
  {
    sub_2213A60(&UILoopListView___c_TypeInfo);
    byte_597216F = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(UILoopListView___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UILoopListView___c_TypeInfo->static_fields->__9 = (struct UILoopListView___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)UILoopListView___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UILoopListView___c___ctor(UILoopListView___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t UILoopListView___c___sortBaseOnMovement_b__16_0(
        UILoopListView___c_o *this,
        UnityEngine_Transform_o *a,
        UnityEngine_Transform_o *b,
        const MethodInfo *method)
{
  float v5; // s0
  float v6; // s0

  if ( !a || (LODWORD(v5) = (unsigned int)UnityEngine_Transform__get_localPosition(a, 0), !b) )
    sub_2213CDC(this, a);
  v6 = v5 - COERCE_FLOAT(UnityEngine_Transform__get_localPosition(b, 0));
  if ( v6 == INFINITY )
    return 0x80000000;
  else
    return (int)v6;
}