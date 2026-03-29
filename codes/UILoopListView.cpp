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

  if ( (byte_4D3225A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_Transform__TypeInfo);
    byte_4D3225A = 1;
  }
  this->fields.itemSize = 100;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_Transform___ctor__);
  this->fields.mChildList = (struct System_Collections_Generic_List_Transform__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mChildList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_Transform___ctor__);
  this->fields.realChildList = (struct System_Collections_Generic_List_Transform__o *)v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.realChildList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_4D32254 & 1) == 0 )
  {
    sub_1C93AD4(&UIScrollView_OnDragNotification_TypeInfo);
    sub_1C93AD4(&Method_UILoopListView_OnMove__);
    byte_4D32254 = 1;
  }
  UILoopListView__sortBaseOnMovement(this, method);
  mScroll = this->fields.mScroll;
  if ( !mScroll || (UIScrollView__ResetPosition(mScroll, 0), (v5 = this->fields.mScroll) == 0) )
    sub_1C93D2C(mScroll, v3);
  onDragFinished = (System_Delegate_o *)v5->fields.onDragFinished;
  p_onDragFinished = (GrandQuestFolderBoardItem_o *)&v5->fields.onDragFinished;
  v8 = (UIScrollView_OnDragNotification_o *)sub_1C93D20(UIScrollView_OnDragNotification_TypeInfo);
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
    sub_1C940C8(v9);
LABEL_9:
    p_onDragFinished->klass = (GrandQuestFolderBoardItem_c *)v16;
  }
  sub_1C93A78(p_onDragFinished, (int32_t)v16, v10, v11, v12, v13, v14, v15);
  UILoopListView__wrapContent(this, v18);
  this->fields.isFirstTime = 0;
}


void UILoopListView__resetChildPos(UILoopListView_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mChildList; // x0
  int size; // w21
  int32_t v5; // w20
  int v7; // w8
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D32257 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__get_Item__);
    byte_4D32257 = 1;
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
                                                                  (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_Transform__get_Item__);
      if ( !mChildList )
        break;
      v9.fields.z = 0.0;
      v7 = this->fields.itemSize * v5;
      v9.fields.x = (float)v7;
      v9.fields.y = (float)-v7;
      if ( this->fields.isHorizontal )
        v9.fields.y = 0.0;
      else
        v9.fields.x = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)mChildList, v9, 0);
      if ( size == ++v5 )
        return;
      mChildList = (System_Collections_Generic_List_object__o *)this->fields.mChildList;
    }
    while ( mChildList );
LABEL_12:
    sub_1C93D2C(mChildList, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void UILoopListView__setScrollPos(UILoopListView_o *this, int32_t idx, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mChildList; // x0
  struct UIScrollView_o *mScroll; // x19
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12

  if ( (byte_4D32259 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__get_Item__);
    byte_4D32259 = 1;
  }
  mChildList = (System_Collections_Generic_List_object__o *)this->fields.mChildList;
  if ( !mChildList
    || (mChildList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    mChildList,
                                                                    idx,
                                                                    (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_Transform__get_Item__)) == 0
    || (mScroll = this->fields.mScroll,
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)mChildList, 0),
        !mScroll) )
  {
    sub_1C93D2C(mChildList, *(_QWORD *)&idx);
  }
  ((void (__fastcall *)(struct UIScrollView_o *, const MethodInfo *, float, float, float))mScroll->klass->vtable._10_MoveRelative.methodPtr)(
    mScroll,
    mScroll->klass->vtable._10_MoveRelative.method,
    localPosition.fields.x,
    localPosition.fields.y,
    localPosition.fields.z);
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

  if ( (byte_4D32255 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C93AD4(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32255 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  p_mTrans = &this->fields.mTrans;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v5, v6, v7, v8, v9, v10);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v12 = NGUITools__FindInParents_object_(
          gameObject,
          (const MethodInfo_322EDC8 *)Method_NGUITools_FindInParents_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)v12;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mPanel, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  mPanel = this->fields.mPanel;
  if ( !mPanel )
    goto LABEL_20;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)mPanel,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  this->fields.mScroll = (struct UIScrollView_o *)Component_object;
  p_mScroll = &this->fields.mScroll;
  sub_1C93A78(
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
                   (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIWidget___),
        !*p_mScroll) )
  {
LABEL_20:
    sub_1C93D2C(mPanel, v19);
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
  this->fields.itemSize = v31;
  return 1;
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

  if ( (byte_4D32256 & 1) == 0 )
  {
    sub_1C93AD4(&System_Comparison_Transform__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__Sort__);
    sub_1C93AD4(&Method_UILoopListView___c__sortBaseOnMovement_b__16_0__);
    sub_1C93AD4(&UILoopListView___c_TypeInfo);
    byte_4D32256 = 1;
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
                *(const MethodInfo_387999C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + v18;
              v9->fields._size = v18 + 1;
              v20[4] = v19;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v19, v10, v11, v12, v13, v14, v15);
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
                      *(const MethodInfo_387999C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v32 = &v28->obj.klass + v30;
                    realChildList->fields._size = v30 + 1;
                    v32[4] = v31;
                    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v32 + 4), (int32_t)v31, v22, v23, v24, v25, v26, v27);
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
      v34 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_Transform__TypeInfo);
      System_Comparison_object____ctor(v34, v35, Method_UILoopListView___c__sortBaseOnMovement_b__16_0__, 0);
      static_fields = UILoopListView___c_TypeInfo->static_fields;
      static_fields->__9__16_0 = (struct System_Comparison_Transform__o *)v34;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__16_0, (int32_t)v34, v37, v38, v39, v40, v41, v42);
    }
    if ( !v33 )
LABEL_33:
      sub_1C93D2C(mTrans, v4);
    System_Collections_Generic_List_object___Sort_59225184(
      (System_Collections_Generic_List_object__o *)v33,
      v34,
      (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_Transform__Sort__);
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
  float itemSize; // s8
  float v10; // s9
  float v11; // s9
  double v12; // d8
  double v13; // d0
  double v14; // d0
  double v15; // d1
  double v16; // d1
  double v17; // d8
  struct UILoopListView_OnInitializeItem_o *onInitializeItem; // x21
  __int64 v19; // x3
  unsigned __int64 localPosition; // kr00_8
  double iptr; // [xsp+18h] [xbp-28h] BYREF

  if ( !this->fields.onInitializeItem )
    return;
  mScroll = this->fields.mScroll;
  v5 = this;
  if ( !mScroll || !item )
LABEL_29:
    sub_1C93D2C(this, item);
  movement = mScroll->fields.movement;
  localPosition = (unsigned __int64)UnityEngine_Transform__get_localPosition(item, 0);
  if ( movement == 1 )
  {
    itemSize = (float)v5->fields.itemSize;
    if ( !byte_4D2A83C )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A83C = 1;
    }
    v10 = *((float *)&localPosition + 1) / itemSize;
  }
  else
  {
    v11 = (float)v5->fields.itemSize;
    if ( !byte_4D2A83C )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A83C = 1;
    }
    v10 = *(float *)&localPosition / v11;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v12 = v10;
  v13 = modf(v10, &iptr);
  if ( v10 >= 0.0 )
  {
    if ( v13 != 0.5 )
    {
      v17 = floor(v12 + 0.5);
      goto LABEL_24;
    }
    v14 = iptr;
    v15 = 1.0;
  }
  else
  {
    if ( v13 != -0.5 )
    {
      v17 = ceil(v12 + -0.5);
      goto LABEL_24;
    }
    v14 = iptr;
    v15 = -1.0;
  }
  v16 = v14 + v15;
  if ( ((__int64)v14 & 1) != 0 )
    v17 = v16;
  else
    v17 = v14;
LABEL_24:
  onInitializeItem = v5->fields.onInitializeItem;
  this = (UILoopListView_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0);
  if ( !onInitializeItem )
    goto LABEL_29;
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
  float y; // s8
  float z; // s9
  float v22; // s10
  float v23; // s12
  double v24; // d11
  double v25; // d0
  double v26; // d0
  double v27; // d1
  double v28; // d1
  int32_t maxIndex; // w8
  int32_t minIndex; // w10
  int v31; // w9
  int v32; // w2
  const MethodInfo *v33; // x3
  System_String_o *v34; // x0
  unsigned int v35; // w28
  struct UIScrollView_o *mScroll; // x8
  int32_t v37; // w20
  float v38; // s15
  UILoopListView_o *v39; // x22
  const MethodInfo *v40; // x3
  float v41; // s0
  int v42; // s11
  float v43; // s12
  double v44; // d11
  double v45; // d0
  double v46; // d0
  double v47; // d1
  int v48; // s11
  float v49; // s12
  double v50; // d11
  double v51; // d0
  double v52; // d0
  double v53; // d1
  double v54; // d1
  double v55; // d1
  int v56; // w8
  int32_t v57; // w9
  int32_t v58; // w10
  const MethodInfo *v59; // x3
  int32_t *v60; // x0
  int v61; // w8
  int32_t v62; // w9
  int32_t v63; // w10
  const MethodInfo *v64; // x3
  System_String_o *v65; // x0
  float v66; // [xsp+0h] [xbp-B0h]
  int v67; // [xsp+4h] [xbp-ACh] BYREF
  int32_t index[2]; // [xsp+8h] [xbp-A8h] BYREF
  double iptr; // [xsp+58h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v70; // 0:kr00_12.12
  UnityEngine_Vector3_o v71; // 0:kr20_12.12
  UnityEngine_Vector3_o localPosition; // 0:kr34_12.12
  UnityEngine_Vector3_o v73; // 0:kr54_12.12
  UnityEngine_Vector3_o v74; // 0:kr60_12.12
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4D32258 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__get_Count__);
    this = (UILoopListView_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__get_Item__);
    byte_4D32258 = 1;
  }
  *(_QWORD *)index = 0;
  v67 = 0;
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
  v66 = v9;
  do
  {
    if ( v8 >= m_CancellationTokenSource )
      goto LABEL_105;
    this = (UILoopListView_o *)v2->fields.mTrans;
    if ( !this )
      goto LABEL_104;
    v70 = UnityEngine_Transform__InverseTransformPoint(
            (UnityEngine_Transform_o *)this,
            *(UnityEngine_Vector3_o *)(p_maxIndex - 2),
            0);
    if ( v8 >= LODWORD(v7->fields.m_CancellationTokenSource) )
      goto LABEL_105;
    *(UnityEngine_Vector3_o *)(p_maxIndex - 2) = v70;
    p_maxIndex += 3;
    m_CancellationTokenSource = (unsigned int)v7->fields.m_CancellationTokenSource;
    ++v8;
  }
  while ( v8 != 4 );
  if ( m_CancellationTokenSource <= 2 )
LABEL_105:
    sub_1C93D34(this);
  v11 = v66 + v66;
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
          LOBYTE(v35) = v15;
          goto LABEL_51;
        }
        this = (UILoopListView_o *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)this,
                                     (int32_t)method,
                                     (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_Transform__get_Item__);
        if ( !this )
          break;
        v16 = this;
        v18 = COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0)) - v14;
        if ( v18 >= (float)-v66 )
        {
          if ( v18 <= v66 )
          {
            if ( v2->fields.isFirstTime )
              UILoopListView__updateItem(v2, (UnityEngine_Transform_o *)v16, index[1], v17);
            goto LABEL_47;
          }
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v16, 0);
          v19 = v2->fields.itemSize;
          y = localPosition.fields.y;
          z = localPosition.fields.z;
          if ( !byte_4D2A83C )
          {
            sub_1C93AD4(&System_Math_TypeInfo);
            byte_4D2A83C = 1;
          }
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v22 = localPosition.fields.x - v11;
        }
        else
        {
          v71 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v16, 0);
          v19 = v2->fields.itemSize;
          y = v71.fields.y;
          z = v71.fields.z;
          if ( !byte_4D2A83C )
          {
            sub_1C93AD4(&System_Math_TypeInfo);
            byte_4D2A83C = 1;
          }
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v22 = v11 + v71.fields.x;
        }
        v23 = v22 / (float)v19;
        v24 = v23;
        v25 = modf(v23, &iptr);
        if ( v23 >= 0.0 )
        {
          if ( v25 == 0.5 )
          {
            v26 = iptr;
            v27 = 1.0;
LABEL_34:
            v28 = v26 + v27;
            if ( ((__int64)v26 & 1) != 0 )
              v26 = v28;
            goto LABEL_41;
          }
          v26 = floor(v24 + 0.5);
        }
        else
        {
          if ( v25 == -0.5 )
          {
            v26 = iptr;
            v27 = -1.0;
            goto LABEL_34;
          }
          v26 = ceil(v24 + -0.5);
        }
LABEL_41:
        minIndex = v2->fields.minIndex;
        maxIndex = v2->fields.maxIndex;
        v31 = (int)v26;
        if ( v26 == INFINITY )
          v31 = 0x80000000;
        if ( minIndex != maxIndex )
        {
          v32 = 0;
          if ( minIndex > v31 || v31 > maxIndex )
            goto LABEL_48;
        }
        v75.fields.x = v22;
        v75.fields.y = y;
        v75.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v16, v75, 0);
        UILoopListView__updateItem(v2, (UnityEngine_Transform_o *)v16, index[1], v33);
        v34 = System_Int32__ToString((int32_t)&index[1], 0);
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v16, v34, 0);
        v2->fields.childIdx = index[1];
LABEL_47:
        v32 = v15;
LABEL_48:
        v15 = v32;
        method = (const MethodInfo *)(unsigned int)++index[1];
        this = (UILoopListView_o *)v2->fields.mChildList;
      }
      while ( this );
    }
LABEL_104:
    sub_1C93D2C(this, method);
  }
  this = (UILoopListView_o *)v2->fields.mChildList;
  if ( !this )
    goto LABEL_104;
  v37 = 0;
  v38 = *(float *)&v7->fields.minIndex
      + (float)((float)(*((float *)&v7->fields.mTrans + 1) - *(float *)&v7->fields.minIndex) * 0.5);
  v35 = 1;
  while ( v37 < SLODWORD(this->fields.m_CancellationTokenSource) )
  {
    this = (UILoopListView_o *)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)this,
                                 v37,
                                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_Transform__get_Item__);
    if ( !this )
      goto LABEL_104;
    v39 = this;
    v41 = COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.y))
        - v38;
    if ( v41 < (float)-v66 )
    {
      v73 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v39, 0);
      v42 = v2->fields.itemSize;
      if ( !byte_4D2A83C )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A83C = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v43 = (float)(v11 + v73.fields.y) / (float)v42;
      v44 = v43;
      v45 = modf(v43, &iptr);
      if ( v43 >= 0.0 )
      {
        if ( v45 == 0.5 )
        {
          v46 = iptr;
          v47 = 1.0;
          goto LABEL_75;
        }
        v46 = floor(v44 + 0.5);
      }
      else if ( v45 == -0.5 )
      {
        v46 = iptr;
        v47 = -1.0;
LABEL_75:
        v54 = v46 + v47;
        if ( ((__int64)v46 & 1) != 0 )
          v46 = v54;
      }
      else
      {
        v46 = ceil(v44 + -0.5);
      }
      v56 = (int)v46;
      if ( v46 == INFINITY )
        v56 = 0x80000000;
      index[0] = v56;
      v58 = v2->fields.minIndex;
      v57 = v2->fields.maxIndex;
      if ( v58 != v57 )
      {
        method = 0;
        if ( v58 > v56 || v56 > v57 )
          goto LABEL_103;
      }
      v76.fields.x = v73.fields.x;
      v76.fields.y = v11 + v73.fields.y;
      v76.fields.z = v73.fields.z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v39, v76, 0);
      UILoopListView__updateItem(v2, (UnityEngine_Transform_o *)v39, v37, v59);
      v60 = index;
      goto LABEL_101;
    }
    if ( v41 <= v66 )
    {
      if ( v2->fields.isFirstTime )
        UILoopListView__updateItem(v2, (UnityEngine_Transform_o *)v39, v37, v40);
      goto LABEL_102;
    }
    v74 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v39, 0);
    v48 = v2->fields.itemSize;
    if ( !byte_4D2A83C )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A83C = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v49 = (float)(v74.fields.y - v11) / (float)v48;
    v50 = v49;
    v51 = modf(v49, &iptr);
    if ( v49 >= 0.0 )
    {
      if ( v51 == 0.5 )
      {
        v52 = iptr;
        v53 = 1.0;
LABEL_82:
        v55 = v52 + v53;
        if ( ((__int64)v52 & 1) != 0 )
          v52 = v55;
        goto LABEL_95;
      }
      v52 = floor(v50 + 0.5);
    }
    else
    {
      if ( v51 == -0.5 )
      {
        v52 = iptr;
        v53 = -1.0;
        goto LABEL_82;
      }
      v52 = ceil(v50 + -0.5);
    }
LABEL_95:
    v61 = (int)v52;
    if ( v52 == INFINITY )
      v61 = 0x80000000;
    v67 = v61;
    v63 = v2->fields.minIndex;
    v62 = v2->fields.maxIndex;
    if ( v63 != v62 )
    {
      method = 0;
      if ( v63 > v61 || v61 > v62 )
        goto LABEL_103;
    }
    v77.fields.x = v74.fields.x;
    v77.fields.y = v74.fields.y - v11;
    v77.fields.z = v74.fields.z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v39, v77, 0);
    UILoopListView__updateItem(v2, (UnityEngine_Transform_o *)v39, v37, v64);
    v60 = &v67;
LABEL_101:
    v65 = System_Int32__ToString((int32_t)v60, 0);
    UnityEngine_Object__set_name((UnityEngine_Object_o *)v39, v65, 0);
LABEL_102:
    method = (const MethodInfo *)v35;
LABEL_103:
    this = (UILoopListView_o *)v2->fields.mChildList;
    ++v37;
    v35 = (unsigned int)method;
    if ( !this )
      goto LABEL_104;
  }
LABEL_51:
  mScroll = v2->fields.mScroll;
  if ( !mScroll )
    goto LABEL_104;
  mScroll->fields.restrictWithinPanel = (v35 & 1) == 0;
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
  sub_1C93A78(
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
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( v12 == 2 )
    {
      v13 = sub_1AC9F5C;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v15, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v12 != 3 )
    goto LABEL_8;
  v13 = sub_1AC9F84;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v13;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AC9EFC;
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
  if ( (byte_4D3225B & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    byte_4D3225B = 1;
  }
  v12[3] = 0;
  v12[0] = go;
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return sub_1C93A88(this, v12, callback, object);
}


void UILoopListView_OnInitializeItem__EndInvoke(
        UILoopListView_OnInitializeItem_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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

  if ( (byte_4D3225C & 1) == 0 )
  {
    sub_1C93AD4(&UILoopListView___c_TypeInfo);
    byte_4D3225C = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(UILoopListView___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UILoopListView___c_TypeInfo->static_fields->__9 = (struct UILoopListView___c_o *)v1;
  sub_1C93A78(
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
  float v7; // s0

  if ( !a || (LODWORD(v7) = (unsigned int)UnityEngine_Transform__get_localPosition(a, 0), !b) )
    sub_1C93D2C(this, a);
  v5 = v7 - COERCE_FLOAT(UnityEngine_Transform__get_localPosition(b, 0));
  if ( v5 == INFINITY )
    return 0x80000000;
  else
    return (int)v5;
}