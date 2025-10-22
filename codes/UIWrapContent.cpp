void UIWrapContent___cctor(const MethodInfo *method)
{
  if ( (byte_4C5B458 & 1) == 0 )
  {
    sub_1C3E564(&UIWrapContent_TypeInfo);
    byte_4C5B458 = 1;
  }
  LODWORD(UIWrapContent_TypeInfo->static_fields->MOVE_TIME) = (struct UIWrapContent_StaticFields)897988541;
}


void UIWrapContent___ctor(UIWrapContent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C5B457 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_Transform__TypeInfo);
    byte_4C5B457 = 1;
  }
  this->fields.itemSize = 100;
  this->fields.cullContent = 1;
  this->fields.mFirstTime = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_Transform___ctor__);
  this->fields.mChildren = (struct System_Collections_Generic_List_Transform__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mChildren, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool UIWrapContent__CacheScrollView(UIWrapContent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  struct UIPanel_o *mPanel; // x0
  Il2CppObject *Component_object; // x0
  struct UIScrollView_o **p_mScroll; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *mScroll; // x21
  int32_t movement; // w8
  bool result; // w0

  if ( (byte_4C5B452 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C3E564(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B452 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v7 = NGUITools__FindInParents_object_(
         gameObject,
         (const MethodInfo_3183E10 *)Method_NGUITools_FindInParents_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)v7;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mPanel, (int32_t)v7, v8, v9);
  mPanel = this->fields.mPanel;
  if ( !mPanel )
    goto LABEL_15;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)mPanel,
                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  this->fields.mScroll = (struct UIScrollView_o *)Component_object;
  p_mScroll = &this->fields.mScroll;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mScroll, (int32_t)Component_object, v14, v15);
  mScroll = (UnityEngine_Object_o *)this->fields.mScroll;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mPanel = (struct UIPanel_o *)UnityEngine_Object__op_Equality(mScroll, 0, 0);
  if ( ((unsigned __int8)mPanel & 1) != 0 )
    return 0;
  if ( !*p_mScroll )
LABEL_15:
    sub_1C3E7C0(mPanel, v10);
  movement = (*p_mScroll)->fields.movement;
  if ( movement != 1 )
  {
    if ( !movement )
    {
      result = 1;
      this->fields.mHorizontal = 1;
      return result;
    }
    return 0;
  }
  result = 1;
  this->fields.mHorizontal = 0;
  return result;
}


void UIWrapContent__EndCallback(UIWrapContent_o *this, const MethodInfo *method)
{
  struct UIWrapContent_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1C3E7C0(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
    callbackFunc->fields.method_code,
    callbackFunc->fields.method);
}


void UIWrapContent__OnValidate(UIWrapContent_o *this, const MethodInfo *method)
{
  int32_t minIndex; // w8

  minIndex = this->fields.minIndex;
  if ( this->fields.maxIndex < minIndex )
    this->fields.maxIndex = minIndex;
}


// local variable allocation has failed, the output may be wrong!
void UIWrapContent__ResetChildPositions(UIWrapContent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mChildren; // x0
  int size; // w8
  int v5; // w22
  unsigned int v6; // w20
  int v7; // s2
  int v8; // w8
  float v9; // s0 OVERLAPPED
  float v10; // s1
  System_Collections_Generic_List_object__o *v11; // x21

  if ( (byte_4C5B453 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Transform__get_Item__);
    byte_4C5B453 = 1;
  }
  mChildren = (System_Collections_Generic_List_object__o *)this->fields.mChildren;
  if ( !mChildren )
    goto LABEL_12;
  size = mChildren->fields._size;
  v5 = size - 1;
  if ( size >= 1 )
  {
    v6 = 0;
    do
    {
      mChildren = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 mChildren,
                                                                 v6,
                                                                 (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_Transform__get_Item__);
      if ( !mChildren )
        break;
      v7 = 0;
      v8 = this->fields.itemSize * v6;
      v9 = (float)v8;
      v10 = (float)-v8;
      if ( this->fields.mHorizontal )
        v10 = 0.0;
      else
        v9 = 0.0;
      v11 = mChildren;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)mChildren, *(UnityEngine_Vector3_o *)&v9, 0);
      ((void (__fastcall *)(UIWrapContent_o *, System_Collections_Generic_List_object__o *, _QWORD, const MethodInfo *))this->klass->vtable._6_UpdateItem.methodPtr)(
        this,
        v11,
        v6,
        this->klass->vtable._6_UpdateItem.method);
      if ( v5 == v6 )
        return;
      mChildren = (System_Collections_Generic_List_object__o *)this->fields.mChildren;
      ++v6;
    }
    while ( mChildren );
LABEL_12:
    sub_1C3E7C0(mChildren, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIWrapContent__SetEventRewardScrollPos(
        UIWrapContent_o *this,
        int32_t idx,
        UIWrapContent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mChildren; // x0
  Il2CppObject *Item; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  float v11; // s10
  float y; // s8
  float z; // s9
  float v14; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UIWrapContent_c *v16; // x8
  UnityEngine_GameObject_o *v17; // x21
  System_Collections_Generic_List_EventDelegate__o *syncRoot; // x21
  EventDelegate_Callback_o *v19; // x22
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x2
  UIPanel_o *mPanel; // x19
  unsigned int v23; // s0 OVERLAPPED
  int v24; // s1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C5B456 & 1) == 0 )
  {
    sub_1C3E564(&EventDelegate_Callback_TypeInfo);
    sub_1C3E564(&EventDelegate_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Transform__get_Item__);
    sub_1C3E564(&Method_UIWrapContent_EndCallback__);
    sub_1C3E564(&UIWrapContent_TypeInfo);
    byte_4C5B456 = 1;
  }
  mChildren = (System_Collections_Generic_List_object__o *)this->fields.mChildren;
  if ( !mChildren )
    goto LABEL_13;
  Item = System_Collections_Generic_List_object___get_Item(
           mChildren,
           idx,
           (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_Transform__get_Item__);
  this->fields.callbackFunc = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
  if ( !Item )
    goto LABEL_13;
  LODWORD(v11) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Item, 0);
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Item, 0);
  y = localPosition.fields.y;
  v26 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Item, 0);
  mChildren = (System_Collections_Generic_List_object__o *)this->fields.mScroll;
  if ( !mChildren )
    goto LABEL_13;
  z = v26.fields.z;
  v14 = -v11;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mChildren, 0);
  v16 = UIWrapContent_TypeInfo;
  v17 = gameObject;
  if ( !UIWrapContent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIWrapContent_TypeInfo);
    v16 = UIWrapContent_TypeInfo;
  }
  v27.fields.x = v14;
  v27.fields.y = y;
  v27.fields.z = z;
  mChildren = (System_Collections_Generic_List_object__o *)TweenPosition__Begin(
                                                             v17,
                                                             v16->static_fields->MOVE_TIME,
                                                             v27,
                                                             0);
  if ( !mChildren )
    goto LABEL_13;
  syncRoot = (System_Collections_Generic_List_EventDelegate__o *)mChildren[1].fields._syncRoot;
  v19 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v19, (Il2CppObject *)this, Method_UIWrapContent_EndCallback__, v20);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_49331860(syncRoot, v19, v21);
  mPanel = this->fields.mPanel;
  v23 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Item, 0);
  if ( !mPanel )
LABEL_13:
    sub_1C3E7C0(mChildren, *(_QWORD *)&idx);
  v24 = 0;
  UIPanel__set_clipOffset(mPanel, *(UnityEngine_Vector2_o *)&v23, 0);
}


void UIWrapContent__SortAlphabetically(UIWrapContent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *mTrans; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_Transform__o *mChildren; // x8
  int32_t size; // w2
  int v7; // w9
  int32_t v8; // w20
  int32_t childCount; // w0
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 v15; // x10
  UnityEngine_Transform_o *v16; // x1
  Il2CppClass **v17; // x0
  System_Comparison_T__o *v18; // x20
  const MethodInfo *v19; // x1

  if ( (byte_4C5B451 & 1) == 0 )
  {
    sub_1C3E564(&System_Comparison_Transform__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Transform__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Transform__Sort__);
    sub_1C3E564(&Method_UIGrid_SortByName__);
    byte_4C5B451 = 1;
  }
  mTrans = (UnityEngine_Transform_o *)UIWrapContent__CacheScrollView(this, method);
  if ( ((unsigned __int8)mTrans & 1) != 0 )
  {
    mChildren = this->fields.mChildren;
    if ( !mChildren )
      goto LABEL_21;
    size = mChildren->fields._size;
    v7 = mChildren->fields._version + 1;
    mChildren->fields._size = 0;
    mChildren->fields._version = v7;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)mChildren->fields._items, 0, size, 0);
    mTrans = this->fields.mTrans;
    if ( !mTrans )
      goto LABEL_21;
    v8 = 0;
    while ( 1 )
    {
      childCount = UnityEngine_Transform__get_childCount(mTrans, 0);
      v10 = (System_Collections_Generic_List_object__o *)this->fields.mChildren;
      if ( v8 >= childCount )
        break;
      mTrans = this->fields.mTrans;
      if ( mTrans )
      {
        mTrans = UnityEngine_Transform__GetChild(mTrans, v8, 0);
        if ( v10 )
        {
          items = v10->fields._items;
          v14 = Method_System_Collections_Generic_List_Transform__Add__;
          ++v10->fields._version;
          if ( items )
          {
            v15 = v10->fields._size;
            v16 = mTrans;
            if ( (unsigned int)v15 >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                (Il2CppObject *)mTrans,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
            }
            else
            {
              v17 = &items->obj.klass + v15;
              v10->fields._size = v15 + 1;
              v17[4] = (Il2CppClass *)v16;
              sub_1C3E508((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v16, v11, v12);
            }
            mTrans = this->fields.mTrans;
            ++v8;
            if ( mTrans )
              continue;
          }
        }
      }
      goto LABEL_21;
    }
    v18 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_Transform__TypeInfo);
    System_Comparison_object____ctor(v18, 0, Method_UIGrid_SortByName__, 0);
    if ( !v10 )
LABEL_21:
      sub_1C3E7C0(mTrans, v4);
    System_Collections_Generic_List_object___Sort_58421028(
      v10,
      v18,
      (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_Transform__Sort__);
    UIWrapContent__ResetChildPositions(this, v19);
  }
}


void UIWrapContent__SortBasedOnScrollMovement(UIWrapContent_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *mTrans; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_Transform__o *mChildren; // x8
  int32_t size; // w2
  int v7; // w9
  int32_t v8; // w20
  System_Collections_Generic_List_object__o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 v14; // x10
  UnityEngine_Transform_o *v15; // x1
  Il2CppClass **v16; // x0
  _BOOL4 mHorizontal; // w22
  struct System_Collections_Generic_List_Transform__o *v18; // x20
  System_Comparison_T__o *v19; // x0
  System_Comparison_T__o *v20; // x21
  intptr_t *v21; // x8
  const MethodInfo *v22; // x1

  if ( (byte_4C5B450 & 1) == 0 )
  {
    sub_1C3E564(&System_Comparison_Transform__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Transform__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Transform__Sort__);
    sub_1C3E564(&Method_UIGrid_SortHorizontal__);
    sub_1C3E564(&Method_UIGrid_SortVertical__);
    byte_4C5B450 = 1;
  }
  mTrans = (UnityEngine_Transform_o *)UIWrapContent__CacheScrollView(this, method);
  if ( ((unsigned __int8)mTrans & 1) != 0 )
  {
    mChildren = this->fields.mChildren;
    if ( !mChildren )
      goto LABEL_24;
    size = mChildren->fields._size;
    v7 = mChildren->fields._version + 1;
    mChildren->fields._size = 0;
    mChildren->fields._version = v7;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)mChildren->fields._items, 0, size, 0);
    mTrans = this->fields.mTrans;
    if ( !mTrans )
      goto LABEL_24;
    v8 = 0;
    while ( v8 < UnityEngine_Transform__get_childCount(mTrans, 0) )
    {
      mTrans = this->fields.mTrans;
      if ( mTrans )
      {
        v9 = (System_Collections_Generic_List_object__o *)this->fields.mChildren;
        mTrans = UnityEngine_Transform__GetChild(mTrans, v8, 0);
        if ( v9 )
        {
          items = v9->fields._items;
          v13 = Method_System_Collections_Generic_List_Transform__Add__;
          ++v9->fields._version;
          if ( items )
          {
            v14 = v9->fields._size;
            v15 = mTrans;
            if ( (unsigned int)v14 >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                (Il2CppObject *)mTrans,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
            }
            else
            {
              v16 = &items->obj.klass + v14;
              v9->fields._size = v14 + 1;
              v16[4] = (Il2CppClass *)v15;
              sub_1C3E508((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v15, v10, v11);
            }
            mTrans = this->fields.mTrans;
            ++v8;
            if ( mTrans )
              continue;
          }
        }
      }
      goto LABEL_24;
    }
    mHorizontal = this->fields.mHorizontal;
    v18 = this->fields.mChildren;
    v19 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_Transform__TypeInfo);
    v20 = v19;
    v21 = mHorizontal ? &Method_UIGrid_SortHorizontal__ : &Method_UIGrid_SortVertical__;
    System_Comparison_object____ctor(v19, 0, *v21, 0);
    if ( !v18 )
LABEL_24:
      sub_1C3E7C0(mTrans, v4);
    System_Collections_Generic_List_object___Sort_58421028(
      (System_Collections_Generic_List_object__o *)v18,
      v20,
      (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_Transform__Sort__);
    UIWrapContent__ResetChildPositions(this, v22);
  }
}


void UIWrapContent__Start(UIWrapContent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Object_o *mScroll; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x0
  Il2CppObject *Component_object; // x20
  UIPanel_OnClippingMoved_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C5B44F & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UIPanel_OnClippingMoved_TypeInfo);
    byte_4C5B44F = 1;
  }
  UIWrapContent__SortBasedOnScrollMovement(this, method);
  UIWrapContent__WrapContent(this, v3);
  mScroll = (UnityEngine_Object_o *)this->fields.mScroll;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mScroll, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.mScroll;
    if ( !v6
      || (Component_object = UnityEngine_Component__GetComponent_object_(
                               v6,
                               (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIPanel___),
          v8 = (UIPanel_OnClippingMoved_o *)sub_1C3E7B0(UIPanel_OnClippingMoved_TypeInfo),
          UIPanel_OnClippingMoved___ctor(v8, (Il2CppObject *)this, (intptr_t)this->klass->vtable._5_OnMove.method, 0),
          !Component_object) )
    {
      sub_1C3E7C0(v6, v5);
    }
    Component_object[17].klass = (Il2CppClass *)v8;
    sub_1C3E508((CGThumbnailListItem_o *)&Component_object[17], (int32_t)v8, v9, v10);
  }
  this->fields.mFirstTime = 0;
}


void UIWrapContent__UpdateItem(
        UIWrapContent_o *this,
        UnityEngine_Transform_o *item,
        int32_t index,
        const MethodInfo *method)
{
  struct UIScrollView_o *mScroll; // x8
  UIWrapContent_o *v5; // x21
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
  struct UIWrapContent_OnInitializeItem_o *onInitializeItem; // x21
  __int64 v21; // x3
  double iptr; // [xsp+18h] [xbp-28h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( !this->fields.onInitializeItem )
    return;
  mScroll = this->fields.mScroll;
  v5 = this;
  if ( !mScroll || !item )
LABEL_29:
    sub_1C3E7C0(this, item);
  movement = mScroll->fields.movement;
  localPosition = UnityEngine_Transform__get_localPosition(item, 0);
  if ( movement == 1 )
  {
    y = localPosition.fields.y;
    itemSize = (float)v5->fields.itemSize;
    if ( !byte_4C51E80 )
    {
      sub_1C3E564(&System_Math_TypeInfo);
      byte_4C51E80 = 1;
    }
    v11 = y / itemSize;
  }
  else
  {
    x = localPosition.fields.x;
    v13 = (float)v5->fields.itemSize;
    if ( !byte_4C51E80 )
    {
      sub_1C3E564(&System_Math_TypeInfo);
      byte_4C51E80 = 1;
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
  this = (UIWrapContent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0);
  if ( !onInitializeItem )
    goto LABEL_29;
  if ( v19 == INFINITY )
    v21 = 0x80000000LL;
  else
    v21 = (unsigned int)(int)v19;
  ((void (__fastcall *)(intptr_t, UIWrapContent_o *, _QWORD, __int64, intptr_t))onInitializeItem->fields.invoke_impl)(
    onInitializeItem->fields.method_code,
    this,
    (unsigned int)index,
    v21,
    onInitializeItem->fields.method);
}


void UIWrapContent__WrapContent(UIWrapContent_o *this, const MethodInfo *method)
{
  UIWrapContent_o *v2; // x19
  struct System_Collections_Generic_List_Transform__o *mChildren; // x8
  int32_t size; // w23
  int32_t itemSize; // w22
  unsigned int m_CancellationTokenSource; // w8
  UIWrapContent_o *v7; // x21
  unsigned __int64 v8; // x20
  float v9; // s0
  int32_t *p_minIndex; // x22
  float v11; // s0
  float v12; // s13
  int v13; // w8
  int v14; // w25
  float v15; // s2
  float v16; // s3
  unsigned int v17; // w20
  float v18; // s15
  UnityEngine_Transform_o *v19; // x22
  float v20; // s11
  int v21; // s11
  float v22; // s10
  float v23; // s8
  float v24; // s9
  float v25; // s10
  float v26; // s10
  float v27; // s12
  double v28; // d11
  double v29; // d0
  double v30; // d0
  double v31; // d1
  double v32; // d1
  int32_t v33; // w8
  int32_t v34; // w10
  int v35; // w9
  struct UIPanel_o *v36; // x8
  float v37; // s9
  float v38; // s8
  UnityEngine_GameObject_o *v39; // x23
  float v40; // s8
  UnityEngine_GameObject_o *v41; // x22
  char v42; // w8
  int v43; // w8
  int v44; // w25
  float v45; // s2
  float v46; // s3
  unsigned int v47; // w20
  float v48; // s15
  UnityEngine_Transform_o *v49; // x22
  float v50; // s11
  int v51; // s11
  float x; // s8
  float v53; // s10
  float z; // s9
  float v55; // s10
  float y; // s10
  float v57; // s12
  double v58; // d11
  double v59; // d0
  double v60; // d0
  double v61; // d1
  double v62; // d1
  int32_t maxIndex; // w8
  int32_t minIndex; // w10
  int v65; // w9
  struct UIPanel_o *mPanel; // x8
  float v67; // s9
  float v68; // s8
  UnityEngine_GameObject_o *gameObject; // x23
  float v70; // s8
  UnityEngine_GameObject_o *v71; // x22
  struct UIScrollView_o *mScroll; // x8
  char v73; // [xsp+4h] [xbp-BCh]
  char v74; // [xsp+8h] [xbp-B8h]
  float v75; // [xsp+Ch] [xbp-B4h]
  float v76; // [xsp+Ch] [xbp-B4h]
  float v77; // [xsp+10h] [xbp-B0h]
  float v78; // [xsp+10h] [xbp-B0h]
  float v79; // [xsp+14h] [xbp-ACh]
  double iptr; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C5B454 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Transform__get_Item__);
    sub_1C3E564(&NGUITools_TypeInfo);
    this = (UIWrapContent_o *)sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B454 = 1;
  }
  mChildren = v2->fields.mChildren;
  if ( !mChildren
    || (this = (UIWrapContent_o *)v2->fields.mPanel) == 0
    || (size = mChildren->fields._size,
        itemSize = v2->fields.itemSize,
        (this = (UIWrapContent_o *)((__int64 (__fastcall *)(UIWrapContent_o *, Il2CppClass *))this->klass[1]._1.element_class)(
                                     this,
                                     this->klass[1]._1.castClass)) == 0) )
  {
LABEL_114:
    sub_1C3E7C0(this, method);
  }
  m_CancellationTokenSource = (unsigned int)this->fields.m_CancellationTokenSource;
  v7 = this;
  v8 = 0;
  v9 = (float)(size * itemSize) * 0.5;
  p_minIndex = &this->fields.minIndex;
  v79 = v9;
  do
  {
    if ( v8 >= m_CancellationTokenSource )
      goto LABEL_115;
    this = (UIWrapContent_o *)v2->fields.mTrans;
    if ( !this )
      goto LABEL_114;
    v81 = UnityEngine_Transform__InverseTransformPoint(
            (UnityEngine_Transform_o *)this,
            *(UnityEngine_Vector3_o *)(p_minIndex - 2),
            0);
    if ( v8 >= LODWORD(v7->fields.m_CancellationTokenSource) )
      goto LABEL_115;
    *(UnityEngine_Vector3_o *)(p_minIndex - 2) = v81;
    p_minIndex += 3;
    m_CancellationTokenSource = (unsigned int)v7->fields.m_CancellationTokenSource;
    ++v8;
  }
  while ( v8 != 4 );
  if ( m_CancellationTokenSource <= 2 )
LABEL_115:
    sub_1C3E7C8(this, method);
  v11 = (float)v2->fields.itemSize;
  v12 = v79 + v79;
  if ( !v2->fields.mHorizontal )
  {
    this = (UIWrapContent_o *)v2->fields.mChildren;
    if ( !this )
      goto LABEL_114;
    v43 = (int)this->fields.m_CancellationTokenSource;
    v44 = v43 - 1;
    if ( v43 < 1 )
    {
      v42 = 1;
LABEL_111:
      v74 = v42;
      goto LABEL_112;
    }
    v45 = *(float *)&v7->fields.cullContent;
    v46 = *((float *)&v7->fields.mTrans + 1);
    v76 = v45 - v11;
    v78 = v46 + v11;
    v47 = 0;
    v48 = v45 + (float)((float)(v46 - v45) * 0.5);
    v74 = 1;
    while ( 1 )
    {
      this = (UIWrapContent_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v47,
                                  (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_Transform__get_Item__);
      if ( !this )
        goto LABEL_114;
      v49 = (UnityEngine_Transform_o *)this;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      v50 = localPosition.fields.y - v48;
      if ( (float)(localPosition.fields.y - v48) >= (float)-v79 )
      {
        if ( v50 <= v79 )
        {
          if ( !v2->fields.mFirstTime )
            goto LABEL_98;
          goto LABEL_96;
        }
        v87 = UnityEngine_Transform__get_localPosition(v49, 0);
        v51 = v2->fields.itemSize;
        x = v87.fields.x;
        y = v87.fields.y;
        z = v87.fields.z;
        if ( !byte_4C51E80 )
        {
          sub_1C3E564(&System_Math_TypeInfo);
          byte_4C51E80 = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v55 = y - v12;
      }
      else
      {
        v86 = UnityEngine_Transform__get_localPosition(v49, 0);
        v51 = v2->fields.itemSize;
        x = v86.fields.x;
        v53 = v86.fields.y;
        z = v86.fields.z;
        if ( !byte_4C51E80 )
        {
          sub_1C3E564(&System_Math_TypeInfo);
          byte_4C51E80 = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v55 = v12 + v53;
      }
      v57 = v55 / (float)v51;
      v58 = v57;
      v59 = modf(v57, &iptr);
      if ( v57 >= 0.0 )
      {
        if ( v59 == 0.5 )
        {
          v60 = iptr;
          v61 = 1.0;
LABEL_83:
          v62 = v60 + v61;
          if ( ((__int64)v60 & 1) != 0 )
            v60 = v62;
          goto LABEL_90;
        }
        v60 = floor(v58 + 0.5);
      }
      else
      {
        if ( v59 == -0.5 )
        {
          v60 = iptr;
          v61 = -1.0;
          goto LABEL_83;
        }
        v60 = ceil(v58 + -0.5);
      }
LABEL_90:
      minIndex = v2->fields.minIndex;
      maxIndex = v2->fields.maxIndex;
      v65 = (int)v60;
      if ( v60 == INFINITY )
        v65 = 0x80000000;
      v50 = v55 - v48;
      if ( minIndex != maxIndex && (minIndex > v65 || v65 > maxIndex) )
      {
        v74 = 0;
        goto LABEL_98;
      }
      v88.fields.x = x;
      v88.fields.y = v55;
      v88.fields.z = z;
      UnityEngine_Transform__set_localPosition(v49, v88, 0);
LABEL_96:
      this = (UIWrapContent_o *)((__int64 (__fastcall *)(UIWrapContent_o *, UnityEngine_Transform_o *, _QWORD, const MethodInfo *))v2->klass->vtable._6_UpdateItem.methodPtr)(
                                  v2,
                                  v49,
                                  v47,
                                  v2->klass->vtable._6_UpdateItem.method);
LABEL_98:
      if ( v2->fields.cullContent )
      {
        mPanel = v2->fields.mPanel;
        if ( !mPanel )
          goto LABEL_114;
        this = (UIWrapContent_o *)v2->fields.mTrans;
        if ( !this )
          goto LABEL_114;
        v67 = mPanel->fields.mClipOffset.fields.y;
        v89 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
        v68 = v89.fields.y;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v49, 0);
        if ( !UICamera_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        this = (UIWrapContent_o *)UICamera__IsPressed(gameObject, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v70 = v50 + (float)(v67 - v68);
          v71 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v49, 0);
          if ( !NGUITools_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          NGUITools__SetActive_49431700(v71, v70 > v76 && v70 < v78, 0, 0);
        }
      }
      if ( v44 == v47 )
        goto LABEL_112;
      this = (UIWrapContent_o *)v2->fields.mChildren;
      ++v47;
      if ( !this )
        goto LABEL_114;
    }
  }
  this = (UIWrapContent_o *)v2->fields.mChildren;
  if ( !this )
    goto LABEL_114;
  v13 = (int)this->fields.m_CancellationTokenSource;
  v14 = v13 - 1;
  v74 = 1;
  if ( v13 >= 1 )
  {
    v15 = *(float *)&v7->fields.itemSize;
    v16 = *(float *)&v7->fields.mTrans;
    v75 = v15 - v11;
    v77 = v16 + v11;
    v17 = 0;
    v18 = v15 + (float)((float)(v16 - v15) * 0.5);
    v73 = 1;
    while ( 1 )
    {
      this = (UIWrapContent_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v17,
                                  (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_Transform__get_Item__);
      if ( !this )
        goto LABEL_114;
      v19 = (UnityEngine_Transform_o *)this;
      v20 = COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0)) - v18;
      if ( v20 >= (float)-v79 )
      {
        if ( v20 <= v79 )
        {
          if ( v2->fields.mFirstTime )
            goto LABEL_47;
          goto LABEL_49;
        }
        v83 = UnityEngine_Transform__get_localPosition(v19, 0);
        v21 = v2->fields.itemSize;
        v26 = v83.fields.x;
        v23 = v83.fields.y;
        v24 = v83.fields.z;
        if ( !byte_4C51E80 )
        {
          sub_1C3E564(&System_Math_TypeInfo);
          byte_4C51E80 = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v25 = v26 - v12;
      }
      else
      {
        v82 = UnityEngine_Transform__get_localPosition(v19, 0);
        v21 = v2->fields.itemSize;
        v22 = v82.fields.x;
        v23 = v82.fields.y;
        v24 = v82.fields.z;
        if ( !byte_4C51E80 )
        {
          sub_1C3E564(&System_Math_TypeInfo);
          byte_4C51E80 = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v25 = v12 + v22;
      }
      v27 = v25 / (float)v21;
      v28 = v27;
      v29 = modf(v27, &iptr);
      if ( v27 >= 0.0 )
      {
        if ( v29 == 0.5 )
        {
          v30 = iptr;
          v31 = 1.0;
LABEL_34:
          v32 = v30 + v31;
          if ( ((__int64)v30 & 1) != 0 )
            v30 = v32;
          goto LABEL_41;
        }
        v30 = floor(v28 + 0.5);
      }
      else
      {
        if ( v29 == -0.5 )
        {
          v30 = iptr;
          v31 = -1.0;
          goto LABEL_34;
        }
        v30 = ceil(v28 + -0.5);
      }
LABEL_41:
      v34 = v2->fields.minIndex;
      v33 = v2->fields.maxIndex;
      v35 = (int)v30;
      if ( v30 == INFINITY )
        v35 = 0x80000000;
      v20 = v25 - v18;
      if ( v34 == v33 || v34 <= v35 && v35 <= v33 )
      {
        v84.fields.x = v25;
        v84.fields.y = v23;
        v84.fields.z = v24;
        UnityEngine_Transform__set_localPosition(v19, v84, 0);
LABEL_47:
        this = (UIWrapContent_o *)((__int64 (__fastcall *)(UIWrapContent_o *, UnityEngine_Transform_o *, _QWORD, const MethodInfo *))v2->klass->vtable._6_UpdateItem.methodPtr)(
                                    v2,
                                    v19,
                                    v17,
                                    v2->klass->vtable._6_UpdateItem.method);
        goto LABEL_49;
      }
      v73 = 0;
LABEL_49:
      if ( v2->fields.cullContent )
      {
        v36 = v2->fields.mPanel;
        if ( !v36 )
          goto LABEL_114;
        this = (UIWrapContent_o *)v2->fields.mTrans;
        if ( !this )
          goto LABEL_114;
        v37 = v36->fields.mClipOffset.fields.x;
        LODWORD(v38) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
        v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19, 0);
        if ( !UICamera_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        this = (UIWrapContent_o *)UICamera__IsPressed(v39, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v40 = v20 + (float)(v37 - v38);
          v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19, 0);
          if ( !NGUITools_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          NGUITools__SetActive_49431700(v41, v40 > v75 && v40 < v77, 0, 0);
        }
      }
      if ( v14 == v17 )
      {
        v42 = v73 & 1;
        goto LABEL_111;
      }
      this = (UIWrapContent_o *)v2->fields.mChildren;
      ++v17;
      if ( !this )
        goto LABEL_114;
    }
  }
LABEL_112:
  mScroll = v2->fields.mScroll;
  if ( !mScroll )
    goto LABEL_114;
  mScroll->fields.restrictWithinPanel = (v74 & 1) == 0;
}


void UIWrapContent__resetScroll(UIWrapContent_o *this, const MethodInfo *method)
{
  UIScrollView_o *mScroll; // x0

  mScroll = this->fields.mScroll;
  if ( !mScroll )
    sub_1C3E7C0(0, method);
  UIScrollView__ResetPosition(mScroll, method);
}


// local variable allocation has failed, the output may be wrong!
void UIWrapContent__setScrollPos(UIWrapContent_o *this, int32_t idx, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mChildren; // x0
  UnityEngine_Transform_o *v6; // x19
  UnityEngine_Transform_o *v7; // x21
  float v8; // s8
  float y; // s9
  float v10; // s0
  float v11; // s1
  UIPanel_o *mPanel; // x20
  unsigned int v13; // s0 OVERLAPPED
  int v14; // s1
  System_String_o *v15; // x0
  Il2CppObject *v16; // x20
  System_String_o *v17; // x0
  Il2CppObject *v18; // x0
  UnityEngine_Vector3_o v19; // [xsp+0h] [xbp-50h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  v20 = idx;
  if ( (byte_4C5B455 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Debug_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Transform__get_Item__);
    sub_1C3E564(&StringLiteral_335/*"!!** setScrollPos : "*/);
    sub_1C3E564(&StringLiteral_336/*"!!** setScrollPos mChildList Position: "*/);
    byte_4C5B455 = 1;
  }
  v19.fields.z = 0.0;
  *(_QWORD *)&v19.fields.x = 0;
  mChildren = (System_Collections_Generic_List_object__o *)this->fields.mChildren;
  if ( !mChildren )
    goto LABEL_11;
  mChildren = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             mChildren,
                                                             idx,
                                                             (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_Transform__get_Item__);
  if ( !this->fields.mScroll )
    goto LABEL_11;
  v6 = (UnityEngine_Transform_o *)mChildren;
  mChildren = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_transform(
                                                             (UnityEngine_Component_o *)this->fields.mScroll,
                                                             0);
  if ( !v6 )
    goto LABEL_11;
  v7 = (UnityEngine_Transform_o *)mChildren;
  LODWORD(v8) = (unsigned int)UnityEngine_Transform__get_localPosition(v6, 0);
  localPosition = UnityEngine_Transform__get_localPosition(v6, 0);
  y = localPosition.fields.y;
  v22 = UnityEngine_Transform__get_localPosition(v6, 0);
  if ( !v7
    || (v10 = -v8,
        v11 = y,
        UnityEngine_Transform__set_localPosition(v7, v22, 0),
        mPanel = this->fields.mPanel,
        v13 = (unsigned int)UnityEngine_Transform__get_localPosition(v6, 0),
        !mPanel) )
  {
LABEL_11:
    sub_1C3E7C0(mChildren, *(_QWORD *)&idx);
  }
  v14 = 0;
  UIPanel__set_clipOffset(mPanel, *(UnityEngine_Vector2_o *)&v13, 0);
  v15 = System_Int32__ToString((int32_t)&v20, 0);
  v16 = (Il2CppObject *)System_String__Concat_63636468((System_String_o *)StringLiteral_335/*"!!** setScrollPos : "*/, v15, 0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__Log(v16, 0);
  v19 = UnityEngine_Transform__get_localPosition(v6, 0);
  v17 = (System_String_o *)sub_1DFD43C(&v19, 0, 0, 0);
  v18 = (Il2CppObject *)System_String__Concat_63636468((System_String_o *)StringLiteral_336/*"!!** setScrollPos mChildList Position: "*/, v17, 0);
  UnityEngine_Debug__Log(v18, 0);
}


void UIWrapContent_CallbackFunc___ctor(
        UIWrapContent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A898A4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A89864;
}


System_IAsyncResult_o *UIWrapContent_CallbackFunc__BeginInvoke(
        UIWrapContent_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C3E518(this, &v5, callback, object);
}


void UIWrapContent_CallbackFunc__EndInvoke(
        UIWrapContent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
}


void UIWrapContent_CallbackFunc__Invoke(UIWrapContent_CallbackFunc_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void UIWrapContent_OnInitializeItem___ctor(
        UIWrapContent_OnInitializeItem_o *this,
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( v8 == 2 )
    {
      v9 = sub_1A89824;
      goto LABEL_6;
    }
    if ( !object )
    {
      v11 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v11, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v8 != 3 )
    goto LABEL_8;
  v9 = sub_1A8984C;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v9;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A897C4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *UIWrapContent_OnInitializeItem__BeginInvoke(
        UIWrapContent_OnInitializeItem_o *this,
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
  if ( (byte_4C5B459 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    byte_4C5B459 = 1;
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
  return (System_IAsyncResult_o *)sub_1C3E518(this, v19, callback, object);
}


void UIWrapContent_OnInitializeItem__EndInvoke(
        UIWrapContent_OnInitializeItem_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
}


void UIWrapContent_OnInitializeItem__Invoke(
        UIWrapContent_OnInitializeItem_o *this,
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