void UILoopListView___ctor(UILoopListView_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C44861 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_1C37058(&System_Collections_Generic_List_Transform__TypeInfo);
    byte_4C44861 = 1;
  }
  this->fields.itemSize = 100;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_Transform___ctor__);
  this->fields.mChildList = (struct System_Collections_Generic_List_Transform__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mChildList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_Transform___ctor__);
  this->fields.realChildList = (struct System_Collections_Generic_List_Transform__o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.realChildList, (int32_t)v6, v7, v8);
  this->fields.isFirstTime = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t UILoopListView__getChildIdx(UILoopListView_o *this, const MethodInfo *method)
{
  return this->fields.childIdx;
}


void UILoopListView__initWrapContent(UILoopListView_o *this, const MethodInfo *method)
{
  UIScrollView_o *mScroll; // x0
  struct UIScrollView_o *v4; // x20
  CGThumbnailListItem_o *p_onDragFinished; // x20
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v7; // x22
  System_Delegate_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Delegate_o *v11; // x8
  UIScrollView_OnDragNotification_c *v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_4C4485B & 1) == 0 )
  {
    sub_1C37058(&UIScrollView_OnDragNotification_TypeInfo);
    sub_1C37058(&Method_UILoopListView_OnMove__);
    byte_4C4485B = 1;
  }
  UILoopListView__sortBaseOnMovement(this, method);
  mScroll = this->fields.mScroll;
  if ( !mScroll || (UIScrollView__ResetPosition(mScroll, 0), (v4 = this->fields.mScroll) == 0) )
    sub_1C372B4(mScroll);
  onDragFinished = (System_Delegate_o *)v4->fields.onDragFinished;
  p_onDragFinished = (CGThumbnailListItem_o *)&v4->fields.onDragFinished;
  v7 = (UIScrollView_OnDragNotification_o *)sub_1C372A4(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(v7, (Il2CppObject *)this, Method_UILoopListView_OnMove__, 0);
  v8 = System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v7, 0);
  v11 = v8;
  if ( !v8 )
    goto LABEL_9;
  v12 = UIScrollView_OnDragNotification_TypeInfo;
  if ( (UIScrollView_OnDragNotification_c *)v8->klass != UIScrollView_OnDragNotification_TypeInfo
    || (p_onDragFinished->klass = (CGThumbnailListItem_c *)v8, (UIScrollView_OnDragNotification_c *)v8->klass != v12) )
  {
    sub_1C37574(v8);
LABEL_9:
    p_onDragFinished->klass = (CGThumbnailListItem_c *)v11;
  }
  sub_1C36FFC(p_onDragFinished, (int32_t)v11, v9, v10);
  UILoopListView__wrapContent(this, v13);
  this->fields.isFirstTime = 0;
}


// local variable allocation has failed, the output may be wrong!
void UILoopListView__resetChildPos(UILoopListView_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mChildList; // x0
  int size; // w21
  int32_t v5; // w20
  int v6; // s2
  int v7; // w8
  float v8; // s0 OVERLAPPED
  float v9; // s1

  if ( (byte_4C4485E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_Transform__get_Item__);
    byte_4C4485E = 1;
  }
  mChildList = (System_Collections_Generic_List_object__o *)this->fields.mChildList;
  if ( !mChildList )
    goto LABEL_12;
  size = mChildList->fields._size;
  if ( size >= 1 )
  {
    v5 = 0;
    do
    {
      mChildList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  mChildList,
                                                                  v5,
                                                                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_Transform__get_Item__);
      if ( !mChildList )
        break;
      v6 = 0;
      v7 = this->fields.itemSize * v5;
      v8 = (float)v7;
      v9 = (float)-v7;
      if ( this->fields.isHorizontal )
        v9 = 0.0;
      else
        v8 = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)mChildList, *(UnityEngine_Vector3_o *)&v8, 0);
      if ( size == ++v5 )
        return;
      mChildList = (System_Collections_Generic_List_object__o *)this->fields.mChildList;
    }
    while ( mChildList );
LABEL_12:
    sub_1C372B4(mChildList);
  }
}


// local variable allocation has failed, the output may be wrong!
void UILoopListView__setScrollPos(UILoopListView_o *this, int32_t idx, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mChildList; // x0
  struct UIScrollView_o *mScroll; // x19
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4C44860 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Transform__get_Item__);
    byte_4C44860 = 1;
  }
  mChildList = (System_Collections_Generic_List_object__o *)this->fields.mChildList;
  if ( !mChildList
    || (mChildList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    mChildList,
                                                                    idx,
                                                                    (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_Transform__get_Item__)) == 0
    || (mScroll = this->fields.mScroll,
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)mChildList, 0),
        !mScroll) )
  {
    sub_1C372B4(mChildList);
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_GameObject_o *gameObject; // x21
  Il2CppObject *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  void *mPanel; // x0
  Il2CppObject *Component_object; // x0
  struct UIScrollView_o **p_mScroll; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *mScroll; // x22
  int32_t movement; // w8
  int32_t v18; // w8
  bool result; // w0

  if ( (byte_4C4485C & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C37058(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4485C = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  p_mTrans = &this->fields.mTrans;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mTrans, (int32_t)transform, v5, v6);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v8 = NGUITools__FindInParents_object_(
         gameObject,
         (const MethodInfo_3171F1C *)Method_NGUITools_FindInParents_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)v8;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mPanel, (int32_t)v8, v9, v10);
  mPanel = this->fields.mPanel;
  if ( !mPanel )
    goto LABEL_20;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)mPanel,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  this->fields.mScroll = (struct UIScrollView_o *)Component_object;
  p_mScroll = &this->fields.mScroll;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mScroll, (int32_t)Component_object, v14, v15);
  mScroll = (UnityEngine_Object_o *)this->fields.mScroll;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mScroll, 0, 0) )
    return 0;
  mPanel = *p_mTrans;
  if ( !*p_mTrans
    || (mPanel = UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)mPanel, 0, 0)) == 0
    || (mPanel = UnityEngine_Component__GetComponent_object_(
                   (UnityEngine_Component_o *)mPanel,
                   (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___),
        !*p_mScroll) )
  {
LABEL_20:
    sub_1C372B4(mPanel);
  }
  movement = (*p_mScroll)->fields.movement;
  if ( movement == 1 )
  {
    this->fields.isHorizontal = 0;
    if ( mPanel )
    {
      v18 = *((_DWORD *)mPanel + 43);
      goto LABEL_19;
    }
    goto LABEL_20;
  }
  if ( movement )
    return 0;
  this->fields.isHorizontal = 1;
  if ( !mPanel )
    goto LABEL_20;
  v18 = *((_DWORD *)mPanel + 42);
LABEL_19:
  result = 1;
  this->fields.itemSize = v18;
  return result;
}


void UILoopListView__sortBaseOnMovement(UILoopListView_o *this, const MethodInfo *method)
{
  void *mTrans; // x0
  struct System_Collections_Generic_List_Transform__o *mChildList; // x8
  int32_t size; // w2
  int v6; // w9
  int32_t v7; // w20
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_object__o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 v14; // x10
  Il2CppClass *v15; // x1
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_object__o *realChildList; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass *v23; // x1
  Il2CppClass **v24; // x0
  struct System_Collections_Generic_List_Transform__o *v25; // x19
  System_Comparison_T__o *v26; // x20
  Il2CppObject *v27; // x21
  struct UILoopListView___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_4C4485D & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_Transform__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_Transform__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_Transform__Sort__);
    sub_1C37058(&Method_UILoopListView___c__sortBaseOnMovement_b__16_0__);
    sub_1C37058(&UILoopListView___c_TypeInfo);
    byte_4C4485D = 1;
  }
  mTrans = (void *)UILoopListView__setScrollViewInfo(this, method);
  if ( ((unsigned __int8)mTrans & 1) != 0 )
  {
    mChildList = this->fields.mChildList;
    if ( !mChildList )
      goto LABEL_33;
    size = mChildList->fields._size;
    v6 = mChildList->fields._version + 1;
    mChildList->fields._size = 0;
    mChildList->fields._version = v6;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)mChildList->fields._items, 0, size, 0);
    mTrans = this->fields.mTrans;
    if ( !mTrans )
      goto LABEL_33;
    v7 = 0;
    while ( v7 < UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)mTrans, 0) )
    {
      mTrans = this->fields.mTrans;
      if ( mTrans )
      {
        v9 = (System_Collections_Generic_List_object__o *)this->fields.mChildList;
        mTrans = UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)mTrans, v7, 0);
        if ( v9 )
        {
          items = v9->fields._items;
          v13 = Method_System_Collections_Generic_List_Transform__Add__;
          ++v9->fields._version;
          if ( items )
          {
            v14 = v9->fields._size;
            v15 = (Il2CppClass *)mTrans;
            if ( (unsigned int)v14 >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                (Il2CppObject *)mTrans,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
            }
            else
            {
              v16 = &items->obj.klass + v14;
              v9->fields._size = v14 + 1;
              v16[4] = v15;
              sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v15, v10, v11);
            }
            mTrans = this->fields.mTrans;
            if ( mTrans )
            {
              realChildList = (System_Collections_Generic_List_object__o *)this->fields.realChildList;
              mTrans = UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)mTrans, v7, 0);
              if ( realChildList )
              {
                v20 = realChildList->fields._items;
                v21 = Method_System_Collections_Generic_List_Transform__Add__;
                ++realChildList->fields._version;
                if ( v20 )
                {
                  v22 = realChildList->fields._size;
                  v23 = (Il2CppClass *)mTrans;
                  if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      realChildList,
                      (Il2CppObject *)mTrans,
                      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v24 = &v20->obj.klass + v22;
                    realChildList->fields._size = v22 + 1;
                    v24[4] = v23;
                    sub_1C36FFC((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v23, v18, v19);
                  }
                  mTrans = this->fields.mTrans;
                  ++v7;
                  if ( mTrans )
                    continue;
                }
              }
            }
          }
        }
      }
      goto LABEL_33;
    }
    UILoopListView__resetChildPos(this, v8);
    v25 = this->fields.mChildList;
    mTrans = UILoopListView___c_TypeInfo;
    if ( !UILoopListView___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UILoopListView___c_TypeInfo);
      mTrans = UILoopListView___c_TypeInfo;
    }
    v26 = *(System_Comparison_T__o **)(*((_QWORD *)mTrans + 23) + 8LL);
    if ( !v26 )
    {
      if ( !*((_DWORD *)mTrans + 56) )
      {
        j_il2cpp_runtime_class_init_0(mTrans);
        mTrans = UILoopListView___c_TypeInfo;
      }
      v27 = (Il2CppObject *)**((_QWORD **)mTrans + 23);
      v26 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_Transform__TypeInfo);
      System_Comparison_object____ctor(v26, v27, Method_UILoopListView___c__sortBaseOnMovement_b__16_0__, 0);
      static_fields = UILoopListView___c_TypeInfo->static_fields;
      static_fields->__9__16_0 = (struct System_Comparison_Transform__o *)v26;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__16_0, (int32_t)v26, v29, v30);
    }
    if ( !v25 )
LABEL_33:
      sub_1C372B4(mTrans);
    System_Collections_Generic_List_object___Sort_58346216(
      (System_Collections_Generic_List_object__o *)v25,
      v26,
      (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_Transform__Sort__);
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
  int32_t movement; // w22
  float y; // s9
  float itemSize; // s8
  float v11; // s9
  float x; // s8
  float v13; // s9
  double v14; // d8
  double v15; // d0
  double v16; // d0
  double v17; // d1
  double v18; // d1
  double v19; // d8
  struct UILoopListView_OnInitializeItem_o *onInitializeItem; // x21
  __int64 v21; // x3
  double iptr; // [xsp+18h] [xbp-28h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( !this->fields.onInitializeItem )
    return;
  mScroll = this->fields.mScroll;
  v5 = this;
  if ( !mScroll || !item )
LABEL_29:
    sub_1C372B4(this);
  movement = mScroll->fields.movement;
  localPosition = UnityEngine_Transform__get_localPosition(item, 0);
  if ( movement == 1 )
  {
    y = localPosition.fields.y;
    itemSize = (float)v5->fields.itemSize;
    if ( !byte_4C3E100 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3E100 = 1;
    }
    v11 = y / itemSize;
  }
  else
  {
    x = localPosition.fields.x;
    v13 = (float)v5->fields.itemSize;
    if ( !byte_4C3E100 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3E100 = 1;
    }
    v11 = x / v13;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v14 = v11;
  v15 = modf(v11, &iptr);
  if ( v11 >= 0.0 )
  {
    if ( v15 != 0.5 )
    {
      v19 = floor(v14 + 0.5);
      goto LABEL_24;
    }
    v16 = iptr;
    v17 = 1.0;
  }
  else
  {
    if ( v15 != -0.5 )
    {
      v19 = ceil(v14 + -0.5);
      goto LABEL_24;
    }
    v16 = iptr;
    v17 = -1.0;
  }
  v18 = v16 + v17;
  if ( ((__int64)v16 & 1) != 0 )
    v19 = v18;
  else
    v19 = v16;
LABEL_24:
  onInitializeItem = v5->fields.onInitializeItem;
  this = (UILoopListView_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0);
  if ( !onInitializeItem )
    goto LABEL_29;
  if ( v19 == INFINITY )
    v21 = 0x80000000LL;
  else
    v21 = (unsigned int)(int)v19;
  ((void (__fastcall *)(intptr_t, UILoopListView_o *, _QWORD, __int64, intptr_t))onInitializeItem->fields.invoke_impl)(
    onInitializeItem->fields.method_code,
    this,
    (unsigned int)index,
    v21,
    onInitializeItem->fields.method);
}


void UILoopListView__wrapContent(UILoopListView_o *this, const MethodInfo *method)
{
  UILoopListView_o *v2; // x19
  struct System_Collections_Generic_List_Transform__o *mChildList; // x8
  int32_t size; // w24
  int32_t itemSize; // w22
  unsigned int m_CancellationTokenSource; // w8
  UILoopListView_o *v7; // x21
  unsigned __int64 v8; // x20
  float v9; // s0
  int32_t *p_maxIndex; // x22
  float v11; // s13
  float v12; // s1
  float v13; // s2
  int32_t v14; // w1
  float v15; // s15
  int v16; // w27
  UILoopListView_o *v17; // x21
  const MethodInfo *v18; // x3
  float v19; // s0
  int v20; // s11
  float v21; // s10
  float y; // s8
  float z; // s9
  float v24; // s10
  float x; // s10
  float v26; // s12
  double v27; // d11
  double v28; // d0
  double v29; // d0
  double v30; // d1
  double v31; // d1
  int32_t maxIndex; // w8
  int32_t minIndex; // w10
  int v34; // w9
  int v35; // w2
  const MethodInfo *v36; // x3
  System_String_o *v37; // x0
  int v38; // w28
  struct UIScrollView_o *mScroll; // x8
  int32_t v40; // w20
  float v41; // s15
  UILoopListView_o *v42; // x22
  const MethodInfo *v43; // x3
  int v44; // s11
  float v45; // s8
  float v46; // s10
  float v47; // s9
  float v48; // s10
  float v49; // s12
  double v50; // d11
  double v51; // d0
  double v52; // d0
  double v53; // d1
  int v54; // s11
  float v55; // s8
  float v56; // s10
  float v57; // s9
  float v58; // s10
  float v59; // s12
  double v60; // d11
  double v61; // d0
  double v62; // d0
  double v63; // d1
  double v64; // d1
  double v65; // d1
  int v66; // w8
  int32_t v67; // w9
  int32_t v68; // w10
  int v69; // w1
  const MethodInfo *v70; // x3
  int32_t *v71; // x0
  int v72; // w8
  int32_t v73; // w9
  int32_t v74; // w10
  const MethodInfo *v75; // x3
  System_String_o *v76; // x0
  float v77; // [xsp+0h] [xbp-B0h]
  int v78; // [xsp+4h] [xbp-ACh] BYREF
  int32_t index[2]; // [xsp+8h] [xbp-A8h] BYREF
  double iptr; // [xsp+58h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C4485F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Transform__get_Count__);
    this = (UILoopListView_o *)sub_1C37058(&Method_System_Collections_Generic_List_Transform__get_Item__);
    byte_4C4485F = 1;
  }
  *(_QWORD *)index = 0;
  v78 = 0;
  mChildList = v2->fields.mChildList;
  if ( !mChildList )
    goto LABEL_104;
  this = (UILoopListView_o *)v2->fields.mPanel;
  if ( !this )
    goto LABEL_104;
  size = mChildList->fields._size;
  itemSize = v2->fields.itemSize;
  this = (UILoopListView_o *)((__int64 (__fastcall *)(UILoopListView_o *, Il2CppClass *))this->klass[1]._1.interopData)(
                               this,
                               this->klass[1]._1.klass);
  if ( !this )
    goto LABEL_104;
  m_CancellationTokenSource = (unsigned int)this->fields.m_CancellationTokenSource;
  v7 = this;
  v8 = 0;
  v9 = (float)(size * itemSize) * 0.5;
  p_maxIndex = &this->fields.maxIndex;
  v77 = v9;
  do
  {
    if ( v8 >= m_CancellationTokenSource )
      goto LABEL_105;
    this = (UILoopListView_o *)v2->fields.mTrans;
    if ( !this )
      goto LABEL_104;
    v81 = UnityEngine_Transform__InverseTransformPoint(
            (UnityEngine_Transform_o *)this,
            *(UnityEngine_Vector3_o *)(p_maxIndex - 2),
            0);
    if ( v8 >= LODWORD(v7->fields.m_CancellationTokenSource) )
      goto LABEL_105;
    *(UnityEngine_Vector3_o *)(p_maxIndex - 2) = v81;
    p_maxIndex += 3;
    m_CancellationTokenSource = (unsigned int)v7->fields.m_CancellationTokenSource;
    ++v8;
  }
  while ( v8 != 4 );
  if ( m_CancellationTokenSource <= 2 )
LABEL_105:
    sub_1C372BC(this);
  v11 = v77 + v77;
  if ( v2->fields.isHorizontal )
  {
    v12 = *(float *)&v7->fields.itemSize;
    v13 = *(float *)&v7->fields.mTrans;
    index[1] = 0;
    this = (UILoopListView_o *)v2->fields.mChildList;
    if ( this )
    {
      v14 = 0;
      v15 = v12 + (float)((float)(v13 - v12) * 0.5);
      v16 = 1;
      do
      {
        if ( v14 >= SLODWORD(this->fields.m_CancellationTokenSource) )
        {
          LOBYTE(v38) = v16;
          goto LABEL_51;
        }
        this = (UILoopListView_o *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)this,
                                     v14,
                                     (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_Transform__get_Item__);
        if ( !this )
          break;
        v17 = this;
        v19 = COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0)) - v15;
        if ( v19 >= (float)-v77 )
        {
          if ( v19 <= v77 )
          {
            if ( v2->fields.isFirstTime )
              UILoopListView__updateItem(v2, (UnityEngine_Transform_o *)v17, index[1], v18);
            goto LABEL_47;
          }
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v17, 0);
          v20 = v2->fields.itemSize;
          x = localPosition.fields.x;
          y = localPosition.fields.y;
          z = localPosition.fields.z;
          if ( !byte_4C3E100 )
          {
            sub_1C37058(&System_Math_TypeInfo);
            byte_4C3E100 = 1;
          }
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v24 = x - v11;
        }
        else
        {
          v82 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v17, 0);
          v20 = v2->fields.itemSize;
          v21 = v82.fields.x;
          y = v82.fields.y;
          z = v82.fields.z;
          if ( !byte_4C3E100 )
          {
            sub_1C37058(&System_Math_TypeInfo);
            byte_4C3E100 = 1;
          }
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v24 = v11 + v21;
        }
        v26 = v24 / (float)v20;
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
        v34 = (int)v29;
        if ( v29 == INFINITY )
          v34 = 0x80000000;
        if ( minIndex != maxIndex )
        {
          v35 = 0;
          if ( minIndex > v34 || v34 > maxIndex )
            goto LABEL_48;
        }
        v84.fields.x = v24;
        v84.fields.y = y;
        v84.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v17, v84, 0);
        UILoopListView__updateItem(v2, (UnityEngine_Transform_o *)v17, index[1], v36);
        v37 = System_Int32__ToString((int32_t)&index[1], 0);
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v17, v37, 0);
        v2->fields.childIdx = index[1];
LABEL_47:
        v35 = v16;
LABEL_48:
        v16 = v35;
        v14 = ++index[1];
        this = (UILoopListView_o *)v2->fields.mChildList;
      }
      while ( this );
    }
LABEL_104:
    sub_1C372B4(this);
  }
  this = (UILoopListView_o *)v2->fields.mChildList;
  if ( !this )
    goto LABEL_104;
  v40 = 0;
  v41 = *(float *)&v7->fields.minIndex
      + (float)((float)(*((float *)&v7->fields.mTrans + 1) - *(float *)&v7->fields.minIndex) * 0.5);
  v38 = 1;
  while ( v40 < SLODWORD(this->fields.m_CancellationTokenSource) )
  {
    this = (UILoopListView_o *)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)this,
                                 v40,
                                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_Transform__get_Item__);
    if ( !this )
      goto LABEL_104;
    v42 = this;
    v85 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    if ( (float)(v85.fields.y - v41) < (float)-v77 )
    {
      v86 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v42, 0);
      v44 = v2->fields.itemSize;
      v45 = v86.fields.x;
      v46 = v86.fields.y;
      v47 = v86.fields.z;
      if ( !byte_4C3E100 )
      {
        sub_1C37058(&System_Math_TypeInfo);
        byte_4C3E100 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v48 = v11 + v46;
      v49 = v48 / (float)v44;
      v50 = v49;
      v51 = modf(v49, &iptr);
      if ( v49 >= 0.0 )
      {
        if ( v51 == 0.5 )
        {
          v52 = iptr;
          v53 = 1.0;
          goto LABEL_75;
        }
        v52 = floor(v50 + 0.5);
      }
      else if ( v51 == -0.5 )
      {
        v52 = iptr;
        v53 = -1.0;
LABEL_75:
        v64 = v52 + v53;
        if ( ((__int64)v52 & 1) != 0 )
          v52 = v64;
      }
      else
      {
        v52 = ceil(v50 + -0.5);
      }
      v66 = (int)v52;
      if ( v52 == INFINITY )
        v66 = 0x80000000;
      index[0] = v66;
      v68 = v2->fields.minIndex;
      v67 = v2->fields.maxIndex;
      if ( v68 != v67 )
      {
        v69 = 0;
        if ( v68 > v66 || v66 > v67 )
          goto LABEL_103;
      }
      v88.fields.x = v45;
      v88.fields.y = v48;
      v88.fields.z = v47;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v42, v88, 0);
      UILoopListView__updateItem(v2, (UnityEngine_Transform_o *)v42, v40, v70);
      v71 = index;
      goto LABEL_101;
    }
    if ( (float)(v85.fields.y - v41) <= v77 )
    {
      if ( v2->fields.isFirstTime )
        UILoopListView__updateItem(v2, (UnityEngine_Transform_o *)v42, v40, v43);
      goto LABEL_102;
    }
    v87 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v42, 0);
    v54 = v2->fields.itemSize;
    v55 = v87.fields.x;
    v56 = v87.fields.y;
    v57 = v87.fields.z;
    if ( !byte_4C3E100 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3E100 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v58 = v56 - v11;
    v59 = v58 / (float)v54;
    v60 = v59;
    v61 = modf(v59, &iptr);
    if ( v59 >= 0.0 )
    {
      if ( v61 == 0.5 )
      {
        v62 = iptr;
        v63 = 1.0;
LABEL_82:
        v65 = v62 + v63;
        if ( ((__int64)v62 & 1) != 0 )
          v62 = v65;
        goto LABEL_95;
      }
      v62 = floor(v60 + 0.5);
    }
    else
    {
      if ( v61 == -0.5 )
      {
        v62 = iptr;
        v63 = -1.0;
        goto LABEL_82;
      }
      v62 = ceil(v60 + -0.5);
    }
LABEL_95:
    v72 = (int)v62;
    if ( v62 == INFINITY )
      v72 = 0x80000000;
    v78 = v72;
    v74 = v2->fields.minIndex;
    v73 = v2->fields.maxIndex;
    if ( v74 != v73 )
    {
      v69 = 0;
      if ( v74 > v72 || v72 > v73 )
        goto LABEL_103;
    }
    v89.fields.x = v55;
    v89.fields.y = v58;
    v89.fields.z = v57;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v42, v89, 0);
    UILoopListView__updateItem(v2, (UnityEngine_Transform_o *)v42, v40, v75);
    v71 = &v78;
LABEL_101:
    v76 = System_Int32__ToString((int32_t)v71, 0);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v42, v76, 0);
LABEL_102:
    v69 = v38;
LABEL_103:
    this = (UILoopListView_o *)v2->fields.mChildList;
    ++v40;
    v38 = v69;
    if ( !this )
      goto LABEL_104;
  }
LABEL_51:
  mScroll = v2->fields.mScroll;
  if ( !mScroll )
    goto LABEL_104;
  mScroll->fields.restrictWithinPanel = (v38 & 1) == 0;
}


void UILoopListView_OnInitializeItem___ctor(
        UILoopListView_OnInitializeItem_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( v8 == 2 )
    {
      v9 = sub_1A7C9A4;
      goto LABEL_6;
    }
    if ( !object )
    {
      v11 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v11, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v8 != 3 )
    goto LABEL_8;
  v9 = sub_1A7C9CC;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v9;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A7C944;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *UILoopListView_OnInitializeItem__BeginInvoke(
        UILoopListView_OnInitializeItem_o *this,
        UnityEngine_GameObject_o *go,
        int32_t wrapIndex,
        int32_t realIndex,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v7; // x7
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  _QWORD v19[4]; // [xsp+0h] [xbp-60h] BYREF
  int32_t v20; // [xsp+28h] [xbp-38h] BYREF
  int32_t v21; // [xsp+2Ch] [xbp-34h] BYREF

  v20 = realIndex;
  v21 = wrapIndex;
  if ( (byte_4C44862 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    byte_4C44862 = 1;
  }
  v19[3] = 0;
  v19[0] = go;
  v19[1] = j_il2cpp_value_box_0(
             int_TypeInfo,
             &v21,
             *(_QWORD *)&wrapIndex,
             *(_QWORD *)&realIndex,
             callback,
             object,
             method,
             v7);
  v19[2] = j_il2cpp_value_box_0(int_TypeInfo, &v20, v12, v13, v14, v15, v16, v17);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v19, callback, object);
}


void UILoopListView_OnInitializeItem__EndInvoke(
        UILoopListView_OnInitializeItem_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C44863 & 1) == 0 )
  {
    sub_1C37058(&UILoopListView___c_TypeInfo);
    byte_4C44863 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(UILoopListView___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UILoopListView___c_TypeInfo->static_fields->__9 = (struct UILoopListView___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)UILoopListView___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
  v6 = v5 - COERCE_FLOAT(UnityEngine_Transform__get_localPosition(b, 0));
  if ( v6 == INFINITY )
    return 0x80000000;
  else
    return (int)v6;
}