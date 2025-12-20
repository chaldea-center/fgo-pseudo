void UILoopListView___ctor(UILoopListView_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D2E169 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_1C94098(&System_Collections_Generic_List_Transform__TypeInfo);
    byte_4D2E169 = 1;
  }
  this->fields.itemSize = 100;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_Transform___ctor__);
  this->fields.mChildList = (struct System_Collections_Generic_List_Transform__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mChildList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_Transform___ctor__);
  this->fields.realChildList = (struct System_Collections_Generic_List_Transform__o *)v10;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.realChildList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
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
  GrandQuestFolderBoardItem_o *p_onDragFinished; // x20
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v8; // x22
  System_Delegate_o *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Delegate_o *v16; // x8
  UIScrollView_OnDragNotification_c *v17; // x1
  const MethodInfo *v18; // x1

  if ( (byte_4D2E163 & 1) == 0 )
  {
    sub_1C94098(&UIScrollView_OnDragNotification_TypeInfo);
    sub_1C94098(&Method_UILoopListView_OnMove__);
    byte_4D2E163 = 1;
  }
  UILoopListView__sortBaseOnMovement(this, method);
  mScroll = this->fields.mScroll;
  if ( !mScroll || (UIScrollView__ResetPosition(mScroll, 0), (v5 = this->fields.mScroll) == 0) )
    sub_1C942F0(mScroll, v3);
  onDragFinished = (System_Delegate_o *)v5->fields.onDragFinished;
  p_onDragFinished = (GrandQuestFolderBoardItem_o *)&v5->fields.onDragFinished;
  v8 = (UIScrollView_OnDragNotification_o *)sub_1C942E4(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(v8, (Il2CppObject *)this, Method_UILoopListView_OnMove__, 0);
  v9 = System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v8, 0);
  v16 = v9;
  if ( !v9 )
    goto LABEL_9;
  v17 = UIScrollView_OnDragNotification_TypeInfo;
  if ( (UIScrollView_OnDragNotification_c *)v9->klass != UIScrollView_OnDragNotification_TypeInfo
    || (p_onDragFinished->klass = (GrandQuestFolderBoardItem_c *)v9,
        (UIScrollView_OnDragNotification_c *)v9->klass != v17) )
  {
    sub_1C9468C(v9);
LABEL_9:
    p_onDragFinished->klass = (GrandQuestFolderBoardItem_c *)v16;
  }
  sub_1C9403C(p_onDragFinished, (int32_t)v16, v10, v11, v12, v13, v14, v15);
  UILoopListView__wrapContent(this, v18);
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

  if ( (byte_4D2E166 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_Transform__get_Item__);
    byte_4D2E166 = 1;
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
                                                                  (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_Transform__get_Item__);
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
    sub_1C942F0(mChildList, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void UILoopListView__setScrollPos(UILoopListView_o *this, int32_t idx, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mChildList; // x0
  struct UIScrollView_o *mScroll; // x19
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4D2E168 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Transform__get_Item__);
    byte_4D2E168 = 1;
  }
  mChildList = (System_Collections_Generic_List_object__o *)this->fields.mChildList;
  if ( !mChildList
    || (mChildList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    mChildList,
                                                                    idx,
                                                                    (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_Transform__get_Item__)) == 0
    || (mScroll = this->fields.mScroll,
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)mChildList, 0),
        !mScroll) )
  {
    sub_1C942F0(mChildList, *(_QWORD *)&idx);
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  UnityEngine_GameObject_o *gameObject; // x21
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int64 v19; // x1
  void *mPanel; // x0
  Il2CppObject *Component_object; // x0
  struct UIScrollView_o **p_mScroll; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  UnityEngine_Object_o *mScroll; // x22
  int32_t movement; // w8
  int32_t v31; // w8
  bool result; // w0

  if ( (byte_4D2E164 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C94098(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C94098(&NGUITools_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2E164 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  p_mTrans = &this->fields.mTrans;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v5, v6, v7, v8, v9, v10);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v12 = NGUITools__FindInParents_object_(
          gameObject,
          (const MethodInfo_32274D4 *)Method_NGUITools_FindInParents_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)v12;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mPanel, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  mPanel = this->fields.mPanel;
  if ( !mPanel )
    goto LABEL_20;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)mPanel,
                       (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  this->fields.mScroll = (struct UIScrollView_o *)Component_object;
  p_mScroll = &this->fields.mScroll;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.mScroll,
    (int32_t)Component_object,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
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
                   (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIWidget___),
        !*p_mScroll) )
  {
LABEL_20:
    sub_1C942F0(mPanel, v19);
  }
  movement = (*p_mScroll)->fields.movement;
  if ( movement == 1 )
  {
    this->fields.isHorizontal = 0;
    if ( mPanel )
    {
      v31 = *((_DWORD *)mPanel + 43);
      goto LABEL_19;
    }
    goto LABEL_20;
  }
  if ( movement )
    return 0;
  this->fields.isHorizontal = 1;
  if ( !mPanel )
    goto LABEL_20;
  v31 = *((_DWORD *)mPanel + 42);
LABEL_19:
  result = 1;
  this->fields.itemSize = v31;
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass *v19; // x1
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_object__o *realChildList; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass *v31; // x1
  Il2CppClass **v32; // x0
  struct System_Collections_Generic_List_Transform__o *v33; // x19
  System_Comparison_T__o *v34; // x20
  Il2CppObject *v35; // x21
  struct UILoopListView___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7

  if ( (byte_4D2E165 & 1) == 0 )
  {
    sub_1C94098(&System_Comparison_Transform__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_Transform__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_Transform__Sort__);
    sub_1C94098(&Method_UILoopListView___c__sortBaseOnMovement_b__16_0__);
    sub_1C94098(&UILoopListView___c_TypeInfo);
    byte_4D2E165 = 1;
  }
  mTrans = (void *)UILoopListView__setScrollViewInfo(this, method);
  if ( ((unsigned __int8)mTrans & 1) != 0 )
  {
    mChildList = this->fields.mChildList;
    if ( !mChildList )
      goto LABEL_33;
    size = mChildList->fields._size;
    v7 = mChildList->fields._version + 1;
    mChildList->fields._size = 0;
    mChildList->fields._version = v7;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)mChildList->fields._items, 0, size, 0);
    mTrans = this->fields.mTrans;
    if ( !mTrans )
      goto LABEL_33;
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
                *(const MethodInfo_386AE34 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + v18;
              v9->fields._size = v18 + 1;
              v20[4] = v19;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v19, v10, v11, v12, v13, v14, v15);
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
                      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v32 = &v28->obj.klass + v30;
                    realChildList->fields._size = v30 + 1;
                    v32[4] = v31;
                    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v32 + 4), (int32_t)v31, v22, v23, v24, v25, v26, v27);
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
      goto LABEL_33;
    }
    UILoopListView__resetChildPos(this, v4);
    v33 = this->fields.mChildList;
    mTrans = UILoopListView___c_TypeInfo;
    if ( !UILoopListView___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UILoopListView___c_TypeInfo);
      mTrans = UILoopListView___c_TypeInfo;
    }
    v34 = *(System_Comparison_T__o **)(*((_QWORD *)mTrans + 23) + 8LL);
    if ( !v34 )
    {
      if ( !*((_DWORD *)mTrans + 56) )
      {
        j_il2cpp_runtime_class_init_0(mTrans);
        mTrans = UILoopListView___c_TypeInfo;
      }
      v35 = (Il2CppObject *)**((_QWORD **)mTrans + 23);
      v34 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_Transform__TypeInfo);
      System_Comparison_object____ctor(v34, v35, Method_UILoopListView___c__sortBaseOnMovement_b__16_0__, 0);
      static_fields = UILoopListView___c_TypeInfo->static_fields;
      static_fields->__9__16_0 = (struct System_Comparison_Transform__o *)v34;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__16_0, (int32_t)v34, v37, v38, v39, v40, v41, v42);
    }
    if ( !v33 )
LABEL_33:
      sub_1C942F0(mTrans, v4);
    System_Collections_Generic_List_object___Sort_59164920(
      (System_Collections_Generic_List_object__o *)v33,
      v34,
      (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_Transform__Sort__);
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
    sub_1C942F0(this, item);
  movement = mScroll->fields.movement;
  localPosition = UnityEngine_Transform__get_localPosition(item, 0);
  if ( movement == 1 )
  {
    y = localPosition.fields.y;
    itemSize = (float)v5->fields.itemSize;
    if ( !byte_4D266E8 )
    {
      sub_1C94098(&System_Math_TypeInfo);
      byte_4D266E8 = 1;
    }
    v11 = y / itemSize;
  }
  else
  {
    x = localPosition.fields.x;
    v13 = (float)v5->fields.itemSize;
    if ( !byte_4D266E8 )
    {
      sub_1C94098(&System_Math_TypeInfo);
      byte_4D266E8 = 1;
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
  float v14; // s15
  int v15; // w27
  UILoopListView_o *v16; // x21
  const MethodInfo *v17; // x3
  float v18; // s0
  int v19; // s11
  float v20; // s10
  float y; // s8
  float z; // s9
  float v23; // s10
  float x; // s10
  float v25; // s12
  double v26; // d11
  double v27; // d0
  double v28; // d0
  double v29; // d1
  double v30; // d1
  int32_t maxIndex; // w8
  int32_t minIndex; // w10
  int v33; // w9
  int v34; // w2
  const MethodInfo *v35; // x3
  System_String_o *v36; // x0
  unsigned int v37; // w28
  struct UIScrollView_o *mScroll; // x8
  int32_t v39; // w20
  float v40; // s15
  UILoopListView_o *v41; // x22
  const MethodInfo *v42; // x3
  int v43; // s11
  float v44; // s8
  float v45; // s10
  float v46; // s9
  float v47; // s10
  float v48; // s12
  double v49; // d11
  double v50; // d0
  double v51; // d0
  double v52; // d1
  int v53; // s11
  float v54; // s8
  float v55; // s10
  float v56; // s9
  float v57; // s10
  float v58; // s12
  double v59; // d11
  double v60; // d0
  double v61; // d0
  double v62; // d1
  double v63; // d1
  double v64; // d1
  int v65; // w8
  int32_t v66; // w9
  int32_t v67; // w10
  const MethodInfo *v68; // x3
  int32_t *v69; // x0
  int v70; // w8
  int32_t v71; // w9
  int32_t v72; // w10
  const MethodInfo *v73; // x3
  System_String_o *v74; // x0
  float v75; // [xsp+0h] [xbp-B0h]
  int v76; // [xsp+4h] [xbp-ACh] BYREF
  int32_t index[2]; // [xsp+8h] [xbp-A8h] BYREF
  double iptr; // [xsp+58h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4D2E167 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Transform__get_Count__);
    this = (UILoopListView_o *)sub_1C94098(&Method_System_Collections_Generic_List_Transform__get_Item__);
    byte_4D2E167 = 1;
  }
  *(_QWORD *)index = 0;
  v76 = 0;
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
  v75 = v9;
  do
  {
    if ( v8 >= m_CancellationTokenSource )
      goto LABEL_105;
    this = (UILoopListView_o *)v2->fields.mTrans;
    if ( !this )
      goto LABEL_104;
    v79 = UnityEngine_Transform__InverseTransformPoint(
            (UnityEngine_Transform_o *)this,
            *(UnityEngine_Vector3_o *)(p_maxIndex - 2),
            0);
    if ( v8 >= LODWORD(v7->fields.m_CancellationTokenSource) )
      goto LABEL_105;
    *(UnityEngine_Vector3_o *)(p_maxIndex - 2) = v79;
    p_maxIndex += 3;
    m_CancellationTokenSource = (unsigned int)v7->fields.m_CancellationTokenSource;
    ++v8;
  }
  while ( v8 != 4 );
  if ( m_CancellationTokenSource <= 2 )
LABEL_105:
    sub_1C942F8(this);
  v11 = v75 + v75;
  if ( v2->fields.isHorizontal )
  {
    v12 = *(float *)&v7->fields.itemSize;
    v13 = *(float *)&v7->fields.mTrans;
    index[1] = 0;
    this = (UILoopListView_o *)v2->fields.mChildList;
    if ( this )
    {
      method = 0;
      v14 = v12 + (float)((float)(v13 - v12) * 0.5);
      v15 = 1;
      do
      {
        if ( (int)method >= SLODWORD(this->fields.m_CancellationTokenSource) )
        {
          LOBYTE(v37) = v15;
          goto LABEL_51;
        }
        this = (UILoopListView_o *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)this,
                                     (int32_t)method,
                                     (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_Transform__get_Item__);
        if ( !this )
          break;
        v16 = this;
        v18 = COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0)) - v14;
        if ( v18 >= (float)-v75 )
        {
          if ( v18 <= v75 )
          {
            if ( v2->fields.isFirstTime )
              UILoopListView__updateItem(v2, (UnityEngine_Transform_o *)v16, index[1], v17);
            goto LABEL_47;
          }
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v16, 0);
          v19 = v2->fields.itemSize;
          x = localPosition.fields.x;
          y = localPosition.fields.y;
          z = localPosition.fields.z;
          if ( !byte_4D266E8 )
          {
            sub_1C94098(&System_Math_TypeInfo);
            byte_4D266E8 = 1;
          }
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v23 = x - v11;
        }
        else
        {
          v80 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v16, 0);
          v19 = v2->fields.itemSize;
          v20 = v80.fields.x;
          y = v80.fields.y;
          z = v80.fields.z;
          if ( !byte_4D266E8 )
          {
            sub_1C94098(&System_Math_TypeInfo);
            byte_4D266E8 = 1;
          }
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v23 = v11 + v20;
        }
        v25 = v23 / (float)v19;
        v26 = v25;
        v27 = modf(v25, &iptr);
        if ( v25 >= 0.0 )
        {
          if ( v27 == 0.5 )
          {
            v28 = iptr;
            v29 = 1.0;
LABEL_34:
            v30 = v28 + v29;
            if ( ((__int64)v28 & 1) != 0 )
              v28 = v30;
            goto LABEL_41;
          }
          v28 = floor(v26 + 0.5);
        }
        else
        {
          if ( v27 == -0.5 )
          {
            v28 = iptr;
            v29 = -1.0;
            goto LABEL_34;
          }
          v28 = ceil(v26 + -0.5);
        }
LABEL_41:
        minIndex = v2->fields.minIndex;
        maxIndex = v2->fields.maxIndex;
        v33 = (int)v28;
        if ( v28 == INFINITY )
          v33 = 0x80000000;
        if ( minIndex != maxIndex )
        {
          v34 = 0;
          if ( minIndex > v33 || v33 > maxIndex )
            goto LABEL_48;
        }
        v82.fields.x = v23;
        v82.fields.y = y;
        v82.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v16, v82, 0);
        UILoopListView__updateItem(v2, (UnityEngine_Transform_o *)v16, index[1], v35);
        v36 = System_Int32__ToString((int32_t)&index[1], 0);
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v16, v36, 0);
        v2->fields.childIdx = index[1];
LABEL_47:
        v34 = v15;
LABEL_48:
        v15 = v34;
        method = (const MethodInfo *)(unsigned int)++index[1];
        this = (UILoopListView_o *)v2->fields.mChildList;
      }
      while ( this );
    }
LABEL_104:
    sub_1C942F0(this, method);
  }
  this = (UILoopListView_o *)v2->fields.mChildList;
  if ( !this )
    goto LABEL_104;
  v39 = 0;
  v40 = *(float *)&v7->fields.minIndex
      + (float)((float)(*((float *)&v7->fields.mTrans + 1) - *(float *)&v7->fields.minIndex) * 0.5);
  v37 = 1;
  while ( v39 < SLODWORD(this->fields.m_CancellationTokenSource) )
  {
    this = (UILoopListView_o *)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)this,
                                 v39,
                                 (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_Transform__get_Item__);
    if ( !this )
      goto LABEL_104;
    v41 = this;
    v83 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    if ( (float)(v83.fields.y - v40) < (float)-v75 )
    {
      v84 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v41, 0);
      v43 = v2->fields.itemSize;
      v44 = v84.fields.x;
      v45 = v84.fields.y;
      v46 = v84.fields.z;
      if ( !byte_4D266E8 )
      {
        sub_1C94098(&System_Math_TypeInfo);
        byte_4D266E8 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v47 = v11 + v45;
      v48 = v47 / (float)v43;
      v49 = v48;
      v50 = modf(v48, &iptr);
      if ( v48 >= 0.0 )
      {
        if ( v50 == 0.5 )
        {
          v51 = iptr;
          v52 = 1.0;
          goto LABEL_75;
        }
        v51 = floor(v49 + 0.5);
      }
      else if ( v50 == -0.5 )
      {
        v51 = iptr;
        v52 = -1.0;
LABEL_75:
        v63 = v51 + v52;
        if ( ((__int64)v51 & 1) != 0 )
          v51 = v63;
      }
      else
      {
        v51 = ceil(v49 + -0.5);
      }
      v65 = (int)v51;
      if ( v51 == INFINITY )
        v65 = 0x80000000;
      index[0] = v65;
      v67 = v2->fields.minIndex;
      v66 = v2->fields.maxIndex;
      if ( v67 != v66 )
      {
        method = 0;
        if ( v67 > v65 || v65 > v66 )
          goto LABEL_103;
      }
      v86.fields.x = v44;
      v86.fields.y = v47;
      v86.fields.z = v46;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v41, v86, 0);
      UILoopListView__updateItem(v2, (UnityEngine_Transform_o *)v41, v39, v68);
      v69 = index;
      goto LABEL_101;
    }
    if ( (float)(v83.fields.y - v40) <= v75 )
    {
      if ( v2->fields.isFirstTime )
        UILoopListView__updateItem(v2, (UnityEngine_Transform_o *)v41, v39, v42);
      goto LABEL_102;
    }
    v85 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v41, 0);
    v53 = v2->fields.itemSize;
    v54 = v85.fields.x;
    v55 = v85.fields.y;
    v56 = v85.fields.z;
    if ( !byte_4D266E8 )
    {
      sub_1C94098(&System_Math_TypeInfo);
      byte_4D266E8 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v57 = v55 - v11;
    v58 = v57 / (float)v53;
    v59 = v58;
    v60 = modf(v58, &iptr);
    if ( v58 >= 0.0 )
    {
      if ( v60 == 0.5 )
      {
        v61 = iptr;
        v62 = 1.0;
LABEL_82:
        v64 = v61 + v62;
        if ( ((__int64)v61 & 1) != 0 )
          v61 = v64;
        goto LABEL_95;
      }
      v61 = floor(v59 + 0.5);
    }
    else
    {
      if ( v60 == -0.5 )
      {
        v61 = iptr;
        v62 = -1.0;
        goto LABEL_82;
      }
      v61 = ceil(v59 + -0.5);
    }
LABEL_95:
    v70 = (int)v61;
    if ( v61 == INFINITY )
      v70 = 0x80000000;
    v76 = v70;
    v72 = v2->fields.minIndex;
    v71 = v2->fields.maxIndex;
    if ( v72 != v71 )
    {
      method = 0;
      if ( v72 > v70 || v70 > v71 )
        goto LABEL_103;
    }
    v87.fields.x = v54;
    v87.fields.y = v57;
    v87.fields.z = v56;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v41, v87, 0);
    UILoopListView__updateItem(v2, (UnityEngine_Transform_o *)v41, v39, v73);
    v69 = &v76;
LABEL_101:
    v74 = System_Int32__ToString((int32_t)v69, 0);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v41, v74, 0);
LABEL_102:
    method = (const MethodInfo *)v37;
LABEL_103:
    this = (UILoopListView_o *)v2->fields.mChildList;
    ++v39;
    v37 = (unsigned int)method;
    if ( !this )
      goto LABEL_104;
  }
LABEL_51:
  mScroll = v2->fields.mScroll;
  if ( !mScroll )
    goto LABEL_104;
  mScroll->fields.restrictWithinPanel = (v37 & 1) == 0;
}


void UILoopListView_OnInitializeItem___ctor(
        UILoopListView_OnInitializeItem_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( v12 == 2 )
    {
      v13 = sub_1AC9C6C;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v15, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v12 != 3 )
    goto LABEL_8;
  v13 = sub_1AC9C94;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v13;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AC9C0C;
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
  _QWORD v12[4]; // [xsp+0h] [xbp-60h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = realIndex;
  v14 = wrapIndex;
  if ( (byte_4D2E16A & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    byte_4D2E16A = 1;
  }
  v12[3] = 0;
  v12[0] = go;
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v12, callback, object);
}


void UILoopListView_OnInitializeItem__EndInvoke(
        UILoopListView_OnInitializeItem_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2E16B & 1) == 0 )
  {
    sub_1C94098(&UILoopListView___c_TypeInfo);
    byte_4D2E16B = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(UILoopListView___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UILoopListView___c_TypeInfo->static_fields->__9 = (struct UILoopListView___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)UILoopListView___c_TypeInfo->static_fields,
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
    sub_1C942F0(this, a);
  v6 = v5 - COERCE_FLOAT(UnityEngine_Transform__get_localPosition(b, 0));
  if ( v6 == INFINITY )
    return 0x80000000;
  else
    return (int)v6;
}