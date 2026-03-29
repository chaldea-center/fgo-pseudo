void UIWrapContent___cctor(const MethodInfo *method)
{
  if ( (byte_4D35162 & 1) == 0 )
  {
    sub_1C93AD4(&UIWrapContent_TypeInfo);
    byte_4D35162 = 1;
  }
  LODWORD(UIWrapContent_TypeInfo->static_fields->MOVE_TIME) = (struct UIWrapContent_StaticFields)897988541;
}


void UIWrapContent___ctor(UIWrapContent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D35161 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_Transform__TypeInfo);
    byte_4D35161 = 1;
  }
  this->fields.itemSize = 100;
  this->fields.cullContent = 1;
  this->fields.mFirstTime = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_Transform___ctor__);
  this->fields.mChildren = (struct System_Collections_Generic_List_Transform__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mChildren, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool UIWrapContent__CacheScrollView(UIWrapContent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x1
  struct UIPanel_o *mPanel; // x0
  Il2CppObject *Component_object; // x0
  struct UIScrollView_o **p_mScroll; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  UnityEngine_Object_o *mScroll; // x21
  int32_t movement; // w8

  if ( (byte_4D3515C & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C93AD4(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3515C = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5, v6, v7, v8, v9);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v11 = NGUITools__FindInParents_object_(
          gameObject,
          (const MethodInfo_322EDC8 *)Method_NGUITools_FindInParents_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)v11;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mPanel, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  mPanel = this->fields.mPanel;
  if ( !mPanel )
    goto LABEL_15;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)mPanel,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  this->fields.mScroll = (struct UIScrollView_o *)Component_object;
  p_mScroll = &this->fields.mScroll;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.mScroll,
    (int32_t)Component_object,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  mScroll = (UnityEngine_Object_o *)this->fields.mScroll;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mPanel = (struct UIPanel_o *)UnityEngine_Object__op_Equality(mScroll, 0, 0);
  if ( ((unsigned __int8)mPanel & 1) != 0 )
    return 0;
  if ( !*p_mScroll )
LABEL_15:
    sub_1C93D2C(mPanel, v18);
  movement = (*p_mScroll)->fields.movement;
  if ( movement != 1 )
  {
    if ( !movement )
    {
      this->fields.mHorizontal = 1;
      return 1;
    }
    return 0;
  }
  this->fields.mHorizontal = 0;
  return 1;
}


void UIWrapContent__EndCallback(UIWrapContent_o *this, const MethodInfo *method)
{
  struct UIWrapContent_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1C93D2C(this, method);
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


void UIWrapContent__ResetChildPositions(UIWrapContent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mChildren; // x0
  int size; // w8
  int v5; // w22
  unsigned int v6; // w20
  int v8; // w8
  System_Collections_Generic_List_object__o *v10; // x21
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D3515D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__get_Item__);
    byte_4D3515D = 1;
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
                                                                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_Transform__get_Item__);
      if ( !mChildren )
        break;
      v11.fields.z = 0.0;
      v8 = this->fields.itemSize * v6;
      v11.fields.x = (float)v8;
      v11.fields.y = (float)-v8;
      if ( this->fields.mHorizontal )
        v11.fields.y = 0.0;
      else
        v11.fields.x = 0.0;
      v10 = mChildren;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)mChildren, v11, 0);
      ((void (__fastcall *)(UIWrapContent_o *, System_Collections_Generic_List_object__o *, _QWORD, const MethodInfo *))this->klass->vtable._6_UpdateItem.methodPtr)(
        this,
        v10,
        v6,
        this->klass->vtable._6_UpdateItem.method);
      if ( v5 == v6 )
        return;
      mChildren = (System_Collections_Generic_List_object__o *)this->fields.mChildren;
      ++v6;
    }
    while ( mChildren );
LABEL_12:
    sub_1C93D2C(mChildren, method);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  float v15; // s10
  float y; // s8
  float v17; // s9
  float v18; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UIWrapContent_c *v20; // x8
  UnityEngine_GameObject_o *v21; // x21
  System_Collections_Generic_List_EventDelegate__o *syncRoot; // x21
  EventDelegate_Callback_o *v23; // x22
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x2
  UIPanel_o *mPanel; // x19
  float z; // s2
  UnityEngine_Vector2_o v28; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v29; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4D35160 & 1) == 0 )
  {
    sub_1C93AD4(&EventDelegate_Callback_TypeInfo);
    sub_1C93AD4(&EventDelegate_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__get_Item__);
    sub_1C93AD4(&Method_UIWrapContent_EndCallback__);
    sub_1C93AD4(&UIWrapContent_TypeInfo);
    byte_4D35160 = 1;
  }
  mChildren = (System_Collections_Generic_List_object__o *)this->fields.mChildren;
  if ( !mChildren )
    goto LABEL_13;
  Item = System_Collections_Generic_List_object___get_Item(
           mChildren,
           idx,
           (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_Transform__get_Item__);
  this->fields.callbackFunc = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10, v11, v12, v13, v14);
  if ( !Item )
    goto LABEL_13;
  LODWORD(v15) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Item, 0);
  y = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Item, 0).fields.y;
  z = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Item, 0).fields.z;
  mChildren = (System_Collections_Generic_List_object__o *)this->fields.mScroll;
  if ( !mChildren )
    goto LABEL_13;
  v17 = z;
  v18 = -v15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mChildren, 0);
  v20 = UIWrapContent_TypeInfo;
  v21 = gameObject;
  if ( !UIWrapContent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIWrapContent_TypeInfo);
    v20 = UIWrapContent_TypeInfo;
  }
  v29.fields.x = v18;
  v29.fields.y = y;
  v29.fields.z = v17;
  mChildren = (System_Collections_Generic_List_object__o *)TweenPosition__Begin(
                                                             v21,
                                                             v20->static_fields->MOVE_TIME,
                                                             v29,
                                                             0);
  if ( !mChildren )
    goto LABEL_13;
  syncRoot = (System_Collections_Generic_List_EventDelegate__o *)mChildren[1].fields._syncRoot;
  v23 = (EventDelegate_Callback_o *)sub_1C93D20(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v23, (Il2CppObject *)this, Method_UIWrapContent_EndCallback__, v24);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_49981852(syncRoot, v23, v25);
  mPanel = this->fields.mPanel;
  LODWORD(v28.fields.x) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Item, 0);
  if ( !mPanel )
LABEL_13:
    sub_1C93D2C(mChildren, *(_QWORD *)&idx);
  v28.fields.y = 0.0;
  UIPanel__set_clipOffset(mPanel, v28, 0);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  UnityEngine_Transform_o *v20; // x1
  Il2CppClass **v21; // x0
  System_Comparison_T__o *v22; // x20
  const MethodInfo *v23; // x1

  if ( (byte_4D3515B & 1) == 0 )
  {
    sub_1C93AD4(&System_Comparison_Transform__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__Sort__);
    sub_1C93AD4(&Method_UIGrid_SortByName__);
    byte_4D3515B = 1;
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
          v18 = Method_System_Collections_Generic_List_Transform__Add__;
          ++v10->fields._version;
          if ( items )
          {
            v19 = v10->fields._size;
            v20 = mTrans;
            if ( (unsigned int)v19 >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                (Il2CppObject *)mTrans,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v21 = &items->obj.klass + v19;
              v10->fields._size = v19 + 1;
              v21[4] = (Il2CppClass *)v20;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v20, v11, v12, v13, v14, v15, v16);
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
    v22 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_Transform__TypeInfo);
    System_Comparison_object____ctor(v22, 0, Method_UIGrid_SortByName__, 0);
    if ( !v10 )
LABEL_21:
      sub_1C93D2C(mTrans, v4);
    System_Collections_Generic_List_object___Sort_59225184(
      v10,
      v22,
      (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_Transform__Sort__);
    UIWrapContent__ResetChildPositions(this, v23);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  UnityEngine_Transform_o *v19; // x1
  Il2CppClass **v20; // x0
  _BOOL4 mHorizontal; // w22
  struct System_Collections_Generic_List_Transform__o *v22; // x20
  System_Comparison_T__o *v23; // x0
  System_Comparison_T__o *v24; // x21
  intptr_t *v25; // x8
  const MethodInfo *v26; // x1

  if ( (byte_4D3515A & 1) == 0 )
  {
    sub_1C93AD4(&System_Comparison_Transform__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__Sort__);
    sub_1C93AD4(&Method_UIGrid_SortHorizontal__);
    sub_1C93AD4(&Method_UIGrid_SortVertical__);
    byte_4D3515A = 1;
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
          v17 = Method_System_Collections_Generic_List_Transform__Add__;
          ++v9->fields._version;
          if ( items )
          {
            v18 = v9->fields._size;
            v19 = mTrans;
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
              v20[4] = (Il2CppClass *)v19;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v19, v10, v11, v12, v13, v14, v15);
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
    v22 = this->fields.mChildren;
    v23 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_Transform__TypeInfo);
    v24 = v23;
    v25 = mHorizontal ? &Method_UIGrid_SortHorizontal__ : &Method_UIGrid_SortVertical__;
    System_Comparison_object____ctor(v23, 0, *v25, 0);
    if ( !v22 )
LABEL_24:
      sub_1C93D2C(mTrans, v4);
    System_Collections_Generic_List_object___Sort_59225184(
      (System_Collections_Generic_List_object__o *)v22,
      v24,
      (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_Transform__Sort__);
    UIWrapContent__ResetChildPositions(this, v26);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D35159 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UIPanel_OnClippingMoved_TypeInfo);
    byte_4D35159 = 1;
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
                               (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIPanel___),
          v8 = (UIPanel_OnClippingMoved_o *)sub_1C93D20(UIPanel_OnClippingMoved_TypeInfo),
          UIPanel_OnClippingMoved___ctor(v8, (Il2CppObject *)this, (intptr_t)this->klass->vtable._5_OnMove.method, 0),
          !Component_object) )
    {
      sub_1C93D2C(v6, v5);
    }
    Component_object[17].klass = (Il2CppClass *)v8;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&Component_object[17], (int32_t)v8, v9, v10, v11, v12, v13, v14);
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
  float itemSize; // s8
  float v10; // s9
  float v11; // s9
  double v12; // d8
  double v13; // d0
  double v14; // d0
  double v15; // d1
  double v16; // d1
  double v17; // d8
  struct UIWrapContent_OnInitializeItem_o *onInitializeItem; // x21
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
  this = (UIWrapContent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0);
  if ( !onInitializeItem )
    goto LABEL_29;
  if ( v17 == INFINITY )
    v19 = 0x80000000LL;
  else
    v19 = (unsigned int)(int)v17;
  ((void (__fastcall *)(intptr_t, UIWrapContent_o *, _QWORD, __int64, intptr_t))onInitializeItem->fields.invoke_impl)(
    onInitializeItem->fields.method_code,
    this,
    (unsigned int)index,
    v19,
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
  Il2CppObject *v19; // x22
  float v20; // s11
  int v21; // s11
  float v22; // s8
  float v23; // s9
  float v24; // s10
  float v25; // s12
  double v26; // d11
  double v27; // d0
  double v28; // d0
  double v29; // d1
  double v30; // d1
  int32_t v31; // w8
  int32_t v32; // w10
  int v33; // w9
  struct UIPanel_o *v34; // x8
  float v35; // s9
  float v36; // s8
  UnityEngine_GameObject_o *v37; // x23
  float v38; // s8
  UnityEngine_GameObject_o *v39; // x22
  char v40; // w8
  int v41; // w8
  int v42; // w25
  float v43; // s2
  float v44; // s3
  unsigned int v45; // w20
  float v46; // s15
  Il2CppObject *Item; // x22
  float v48; // s11
  int v49; // s11
  float x; // s8
  float z; // s9
  float v52; // s10
  float v53; // s12
  double v54; // d11
  double v55; // d0
  double v56; // d0
  double v57; // d1
  double v58; // d1
  int32_t maxIndex; // w8
  int32_t minIndex; // w10
  int v61; // w9
  struct UIPanel_o *mPanel; // x8
  float y; // s9
  float v64; // s8
  UnityEngine_GameObject_o *gameObject; // x23
  float v66; // s8
  UnityEngine_GameObject_o *v67; // x22
  struct UIScrollView_o *mScroll; // x8
  char v69; // [xsp+4h] [xbp-BCh]
  float v70; // [xsp+8h] [xbp-B8h]
  float v71; // [xsp+8h] [xbp-B8h]
  float v72; // [xsp+Ch] [xbp-B4h]
  float v73; // [xsp+Ch] [xbp-B4h]
  char v74; // [xsp+10h] [xbp-B0h]
  float v75; // [xsp+14h] [xbp-ACh]
  double iptr; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v77; // 0:kr00_12.12
  UnityEngine_Vector3_o v78; // 0:kr20_12.12
  UnityEngine_Vector3_o v79; // 0:kr34_12.12
  UnityEngine_Vector3_o v80; // 0:kr60_12.12
  UnityEngine_Vector3_o localPosition; // 0:kr74_12.12
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v83; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4D3515E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__get_Item__);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    this = (UIWrapContent_o *)sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D3515E = 1;
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
LABEL_120:
    sub_1C93D2C(this, method);
  }
  m_CancellationTokenSource = (unsigned int)this->fields.m_CancellationTokenSource;
  v7 = this;
  v8 = 0;
  v9 = (float)(size * itemSize) * 0.5;
  p_minIndex = &this->fields.minIndex;
  v75 = v9;
  do
  {
    if ( v8 >= m_CancellationTokenSource )
      goto LABEL_121;
    this = (UIWrapContent_o *)v2->fields.mTrans;
    if ( !this )
      goto LABEL_120;
    v77 = UnityEngine_Transform__InverseTransformPoint(
            (UnityEngine_Transform_o *)this,
            *(UnityEngine_Vector3_o *)(p_minIndex - 2),
            0);
    if ( v8 >= LODWORD(v7->fields.m_CancellationTokenSource) )
      goto LABEL_121;
    *(UnityEngine_Vector3_o *)(p_minIndex - 2) = v77;
    p_minIndex += 3;
    m_CancellationTokenSource = (unsigned int)v7->fields.m_CancellationTokenSource;
    ++v8;
  }
  while ( v8 != 4 );
  if ( m_CancellationTokenSource <= 2 )
LABEL_121:
    sub_1C93D34(this);
  v11 = (float)v2->fields.itemSize;
  v12 = v75 + v75;
  if ( !v2->fields.mHorizontal )
  {
    this = (UIWrapContent_o *)v2->fields.mChildren;
    if ( !this )
      goto LABEL_120;
    v41 = (int)this->fields.m_CancellationTokenSource;
    v42 = v41 - 1;
    if ( v41 < 1 )
    {
      v40 = 1;
LABEL_117:
      v74 = v40;
      goto LABEL_118;
    }
    v43 = *(float *)&v7->fields.cullContent;
    v44 = *((float *)&v7->fields.mTrans + 1);
    v45 = 0;
    v46 = v43 + (float)((float)(v44 - v43) * 0.5);
    v71 = v43 - v11;
    v73 = v44 + v11;
    v74 = 1;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v45,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_Transform__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (UIWrapContent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
LABEL_113:
      if ( v42 == v45 )
        goto LABEL_118;
      this = (UIWrapContent_o *)v2->fields.mChildren;
      ++v45;
      if ( !this )
        goto LABEL_120;
    }
    if ( !Item )
      goto LABEL_120;
    v48 = COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Item, 0).fields.y))
        - v46;
    if ( v48 >= (float)-v75 )
    {
      if ( v48 <= v75 )
      {
        if ( v2->fields.mFirstTime )
LABEL_102:
          this = (UIWrapContent_o *)((__int64 (__fastcall *)(UIWrapContent_o *, Il2CppObject *, _QWORD, const MethodInfo *))v2->klass->vtable._6_UpdateItem.methodPtr)(
                                      v2,
                                      Item,
                                      v45,
                                      v2->klass->vtable._6_UpdateItem.method);
LABEL_104:
        if ( v2->fields.cullContent )
        {
          mPanel = v2->fields.mPanel;
          if ( !mPanel )
            goto LABEL_120;
          this = (UIWrapContent_o *)v2->fields.mTrans;
          if ( !this )
            goto LABEL_120;
          y = mPanel->fields.mClipOffset.fields.y;
          v64 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.y;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
          if ( !UICamera_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
          this = (UIWrapContent_o *)UICamera__IsPressed(gameObject, 0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v66 = v48 + (float)(y - v64);
            v67 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            NGUITools__SetActive_50084780(v67, v66 > v71 && v66 < v73, 0, 0);
          }
        }
        goto LABEL_113;
      }
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Item, 0);
      v49 = v2->fields.itemSize;
      x = localPosition.fields.x;
      z = localPosition.fields.z;
      if ( !byte_4D2A83C )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A83C = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v52 = localPosition.fields.y - v12;
    }
    else
    {
      v80 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Item, 0);
      v49 = v2->fields.itemSize;
      x = v80.fields.x;
      z = v80.fields.z;
      if ( !byte_4D2A83C )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A83C = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v52 = v12 + v80.fields.y;
    }
    v53 = v52 / (float)v49;
    v54 = v53;
    v55 = modf(v53, &iptr);
    if ( v53 >= 0.0 )
    {
      if ( v55 == 0.5 )
      {
        v56 = iptr;
        v57 = 1.0;
LABEL_89:
        v58 = v56 + v57;
        if ( ((__int64)v56 & 1) != 0 )
          v56 = v58;
        goto LABEL_96;
      }
      v56 = floor(v54 + 0.5);
    }
    else
    {
      if ( v55 == -0.5 )
      {
        v56 = iptr;
        v57 = -1.0;
        goto LABEL_89;
      }
      v56 = ceil(v54 + -0.5);
    }
LABEL_96:
    minIndex = v2->fields.minIndex;
    maxIndex = v2->fields.maxIndex;
    v61 = (int)v56;
    if ( v56 == INFINITY )
      v61 = 0x80000000;
    v48 = v52 - v46;
    if ( minIndex == maxIndex || minIndex <= v61 && v61 <= maxIndex )
    {
      v83.fields.x = x;
      v83.fields.y = v52;
      v83.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Item, v83, 0);
      goto LABEL_102;
    }
    v74 = 0;
    goto LABEL_104;
  }
  this = (UIWrapContent_o *)v2->fields.mChildren;
  if ( !this )
    goto LABEL_120;
  v13 = (int)this->fields.m_CancellationTokenSource;
  v14 = v13 - 1;
  v74 = 1;
  if ( v13 >= 1 )
  {
    v15 = *(float *)&v7->fields.itemSize;
    v16 = *(float *)&v7->fields.mTrans;
    v17 = 0;
    v18 = v15 + (float)((float)(v16 - v15) * 0.5);
    v70 = v15 - v11;
    v72 = v16 + v11;
    v69 = 1;
    while ( 1 )
    {
      v19 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)this,
              v17,
              (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_Transform__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (UIWrapContent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v19, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_61;
      if ( !v19 )
        goto LABEL_120;
      v20 = COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v19, 0)) - v18;
      if ( v20 >= (float)-v75 )
      {
        if ( v20 <= v75 )
        {
          if ( v2->fields.mFirstTime )
            goto LABEL_50;
          goto LABEL_52;
        }
        v79 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v19, 0);
        v21 = v2->fields.itemSize;
        v22 = v79.fields.y;
        v23 = v79.fields.z;
        if ( !byte_4D2A83C )
        {
          sub_1C93AD4(&System_Math_TypeInfo);
          byte_4D2A83C = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v24 = v79.fields.x - v12;
      }
      else
      {
        v78 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v19, 0);
        v21 = v2->fields.itemSize;
        v22 = v78.fields.y;
        v23 = v78.fields.z;
        if ( !byte_4D2A83C )
        {
          sub_1C93AD4(&System_Math_TypeInfo);
          byte_4D2A83C = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v24 = v12 + v78.fields.x;
      }
      v25 = v24 / (float)v21;
      v26 = v25;
      v27 = modf(v25, &iptr);
      if ( v25 >= 0.0 )
      {
        if ( v27 == 0.5 )
        {
          v28 = iptr;
          v29 = 1.0;
LABEL_37:
          v30 = v28 + v29;
          if ( ((__int64)v28 & 1) != 0 )
            v28 = v30;
          goto LABEL_44;
        }
        v28 = floor(v26 + 0.5);
      }
      else
      {
        if ( v27 == -0.5 )
        {
          v28 = iptr;
          v29 = -1.0;
          goto LABEL_37;
        }
        v28 = ceil(v26 + -0.5);
      }
LABEL_44:
      v32 = v2->fields.minIndex;
      v31 = v2->fields.maxIndex;
      v33 = (int)v28;
      if ( v28 == INFINITY )
        v33 = 0x80000000;
      v20 = v24 - v18;
      if ( v32 == v31 || v32 <= v33 && v33 <= v31 )
      {
        v82.fields.x = v24;
        v82.fields.y = v22;
        v82.fields.z = v23;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v19, v82, 0);
LABEL_50:
        this = (UIWrapContent_o *)((__int64 (__fastcall *)(UIWrapContent_o *, Il2CppObject *, _QWORD, const MethodInfo *))v2->klass->vtable._6_UpdateItem.methodPtr)(
                                    v2,
                                    v19,
                                    v17,
                                    v2->klass->vtable._6_UpdateItem.method);
        goto LABEL_52;
      }
      v69 = 0;
LABEL_52:
      if ( v2->fields.cullContent )
      {
        v34 = v2->fields.mPanel;
        if ( !v34 )
          goto LABEL_120;
        this = (UIWrapContent_o *)v2->fields.mTrans;
        if ( !this )
          goto LABEL_120;
        v35 = v34->fields.mClipOffset.fields.x;
        LODWORD(v36) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
        v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19, 0);
        if ( !UICamera_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        this = (UIWrapContent_o *)UICamera__IsPressed(v37, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v38 = v20 + (float)(v35 - v36);
          v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19, 0);
          if ( !NGUITools_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          NGUITools__SetActive_50084780(v39, v38 > v70 && v38 < v72, 0, 0);
        }
      }
LABEL_61:
      if ( v14 == v17 )
      {
        v40 = v69 & 1;
        goto LABEL_117;
      }
      this = (UIWrapContent_o *)v2->fields.mChildren;
      ++v17;
      if ( !this )
        goto LABEL_120;
    }
  }
LABEL_118:
  mScroll = v2->fields.mScroll;
  if ( !mScroll )
    goto LABEL_120;
  mScroll->fields.restrictWithinPanel = (v74 & 1) == 0;
}


void UIWrapContent__resetScroll(UIWrapContent_o *this, const MethodInfo *method)
{
  UIScrollView_o *mScroll; // x0

  mScroll = this->fields.mScroll;
  if ( !mScroll )
    sub_1C93D2C(0, method);
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
  UIPanel_o *mPanel; // x20
  System_String_o *v11; // x0
  Il2CppObject *v12; // x20
  System_String_o *v13; // x0
  Il2CppObject *v14; // x0
  UnityEngine_Vector3_o localPosition; // [xsp+0h] [xbp-50h] BYREF
  int32_t v16; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector2_o v17; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  v16 = idx;
  if ( (byte_4D3515F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Debug_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Transform__get_Item__);
    sub_1C93AD4(&StringLiteral_336/*"!!** setScrollPos : "*/);
    sub_1C93AD4(&StringLiteral_337/*"!!** setScrollPos mChildList Position: "*/);
    byte_4D3515F = 1;
  }
  localPosition.fields.z = 0.0;
  *(_QWORD *)&localPosition.fields.x = 0;
  mChildren = (System_Collections_Generic_List_object__o *)this->fields.mChildren;
  if ( !mChildren )
    goto LABEL_11;
  mChildren = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             mChildren,
                                                             idx,
                                                             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_Transform__get_Item__);
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
  y = UnityEngine_Transform__get_localPosition(v6, 0).fields.y;
  v18.fields.z = UnityEngine_Transform__get_localPosition(v6, 0).fields.z;
  if ( !v7
    || (v18.fields.x = -v8,
        v18.fields.y = y,
        UnityEngine_Transform__set_localPosition(v7, v18, 0),
        mPanel = this->fields.mPanel,
        LODWORD(v17.fields.x) = (unsigned int)UnityEngine_Transform__get_localPosition(v6, 0),
        !mPanel) )
  {
LABEL_11:
    sub_1C93D2C(mChildren, *(_QWORD *)&idx);
  }
  v17.fields.y = 0.0;
  UIPanel__set_clipOffset(mPanel, v17, 0);
  v11 = System_Int32__ToString((int32_t)&v16, 0);
  v12 = (Il2CppObject *)System_String__Concat_64425724((System_String_o *)StringLiteral_336/*"!!** setScrollPos : "*/, v11, 0);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__Log(v12, 0);
  localPosition = UnityEngine_Transform__get_localPosition(v6, 0);
  v13 = (System_String_o *)sub_1E502DC(&localPosition, 0, 0, 0);
  v14 = (Il2CppObject *)System_String__Concat_64425724((System_String_o *)StringLiteral_337/*"!!** setScrollPos mChildList Position: "*/, v13, 0);
  UnityEngine_Debug__Log(v14, 0);
}


void UIWrapContent_CallbackFunc___ctor(
        UIWrapContent_CallbackFunc_o *this,
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
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

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
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1ACFFB4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1ACFF74;
}


System_IAsyncResult_o *UIWrapContent_CallbackFunc__BeginInvoke(
        UIWrapContent_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return sub_1C93A88(this, &v5, callback, object);
}


void UIWrapContent_CallbackFunc__EndInvoke(
        UIWrapContent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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
      v13 = sub_1ACFF34;
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
  v13 = sub_1ACFF5C;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v13;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1ACFED4;
}


System_IAsyncResult_o *UIWrapContent_OnInitializeItem__BeginInvoke(
        UIWrapContent_OnInitializeItem_o *this,
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
  if ( (byte_4D35163 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    byte_4D35163 = 1;
  }
  v12[3] = 0;
  v12[0] = go;
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return sub_1C93A88(this, v12, callback, object);
}


void UIWrapContent_OnInitializeItem__EndInvoke(
        UIWrapContent_OnInitializeItem_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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