void UIWrapContent___cctor(const MethodInfo *method)
{
  if ( (byte_597509C & 1) == 0 )
  {
    sub_2213A60(&UIWrapContent_TypeInfo);
    byte_597509C = 1;
  }
  LODWORD(UIWrapContent_TypeInfo->static_fields->MOVE_TIME) = (struct UIWrapContent_StaticFields)897988541;
}


void UIWrapContent___ctor(UIWrapContent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_Transform__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_597509B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_2213A60(&System_Collections_Generic_List_Transform__TypeInfo);
    byte_597509B = 1;
  }
  v3 = System_Collections_Generic_List_Transform__TypeInfo;
  this->fields.itemSize = 100;
  this->fields.cullContent = 1;
  this->fields.mFirstTime = 1;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_Transform___ctor__);
  this->fields.mChildren = (struct System_Collections_Generic_List_Transform__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mChildren, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool UIWrapContent__CacheScrollView(UIWrapContent_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppObject *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  struct UIPanel_o *mPanel; // x0
  Il2CppObject *Component_object; // x0
  struct UIScrollView_o **p_mScroll; // x20
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x1
  UnityEngine_Object_o *mScroll; // x21
  int32_t movement; // w8
  bool v32; // w8
  bool result; // w0

  if ( (byte_5975096 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_2213A60(&Method_NGUITools_FindInParents_UIPanel___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975096 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5, v6, v7, v8, v9);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v10);
  v12 = NGUITools__FindInParents_object_(
          gameObject,
          (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mPanel, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  mPanel = this->fields.mPanel;
  if ( !mPanel )
    goto LABEL_16;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)mPanel,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  this->fields.mScroll = (struct UIScrollView_o *)Component_object;
  p_mScroll = &this->fields.mScroll;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mScroll,
    (int32_t)Component_object,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  mScroll = (UnityEngine_Object_o *)this->fields.mScroll;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  mPanel = (struct UIPanel_o *)UnityEngine_Object__op_Equality(mScroll, 0, 0);
  if ( ((unsigned __int8)mPanel & 1) != 0 )
    return 0;
  if ( !*p_mScroll )
LABEL_16:
    sub_2213CDC(mPanel, v19);
  movement = (*p_mScroll)->fields.movement;
  if ( !movement )
  {
    v32 = 1;
    goto LABEL_15;
  }
  if ( movement != 1 )
    return 0;
  v32 = 0;
LABEL_15:
  result = 1;
  this->fields.mHorizontal = v32;
  return result;
}


void UIWrapContent__EndCallback(UIWrapContent_o *this, const MethodInfo *method)
{
  struct UIWrapContent_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_2213CDC(this, method);
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
  UIWrapContent_o *v2; // x19
  struct System_Collections_Generic_List_Transform__o *mChildren; // x8
  int size; // w22
  unsigned int v5; // w20
  int32_t itemSize; // w8
  UIWrapContent_o *v7; // x21
  float v8; // s1
  float v9; // s0 OVERLAPPED
  int v10; // s2

  v2 = this;
  if ( (byte_5975097 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__get_Count__);
    this = (UIWrapContent_o *)sub_2213A60(&Method_System_Collections_Generic_List_Transform__get_Item__);
    byte_5975097 = 1;
  }
  mChildren = v2->fields.mChildren;
  if ( !mChildren )
    goto LABEL_13;
  size = mChildren->fields._size;
  if ( size >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      this = (UIWrapContent_o *)v2->fields.mChildren;
      if ( !this )
        break;
      this = (UIWrapContent_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v5,
                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_Transform__get_Item__);
      itemSize = v2->fields.itemSize;
      v7 = this;
      if ( v2->fields.mHorizontal )
      {
        v8 = 0.0;
        v9 = (float)(int)(itemSize * v5);
        if ( !this )
          break;
      }
      else
      {
        v9 = 0.0;
        v8 = (float)-(v5 * itemSize);
        if ( !this )
          break;
      }
      v10 = 0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v9, 0);
      ((void (__fastcall *)(UIWrapContent_o *, UIWrapContent_o *, _QWORD, const MethodInfo *))v2->klass->vtable._6_UpdateItem.methodPtr)(
        v2,
        v7,
        v5++,
        v2->klass->vtable._6_UpdateItem.method);
      if ( size == v5 )
        return;
    }
LABEL_13:
    sub_2213CDC(this, method);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  float v15; // s10
  float y; // s8
  float z; // s9
  float v18; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  UIWrapContent_c *v21; // x8
  UnityEngine_GameObject_o *v22; // x21
  System_Collections_Generic_List_EventDelegate__o *syncRoot; // x21
  EventDelegate_Callback_o *v24; // x22
  const MethodInfo *v25; // x3
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  UIPanel_o *mPanel; // x19
  unsigned int v29; // s0 OVERLAPPED
  int v30; // s1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_597509A & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__get_Item__);
    sub_2213A60(&Method_UIWrapContent_EndCallback__);
    sub_2213A60(&UIWrapContent_TypeInfo);
    byte_597509A = 1;
  }
  mChildren = (System_Collections_Generic_List_object__o *)this->fields.mChildren;
  if ( !mChildren )
    goto LABEL_13;
  Item = System_Collections_Generic_List_object___get_Item(
           mChildren,
           idx,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_Transform__get_Item__);
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( !Item )
    goto LABEL_13;
  LODWORD(v15) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Item, 0);
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Item, 0);
  y = localPosition.fields.y;
  v32 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Item, 0);
  mChildren = (System_Collections_Generic_List_object__o *)this->fields.mScroll;
  if ( !mChildren )
    goto LABEL_13;
  z = v32.fields.z;
  v18 = -v15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mChildren, 0);
  v21 = UIWrapContent_TypeInfo;
  v22 = gameObject;
  if ( !*(&UIWrapContent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIWrapContent_TypeInfo, v20);
    v21 = UIWrapContent_TypeInfo;
  }
  v33.fields.x = v18;
  v33.fields.y = y;
  v33.fields.z = z;
  mChildren = (System_Collections_Generic_List_object__o *)TweenPosition__Begin(
                                                             v22,
                                                             v21->static_fields->MOVE_TIME,
                                                             v33,
                                                             0);
  if ( !mChildren )
    goto LABEL_13;
  syncRoot = (System_Collections_Generic_List_EventDelegate__o *)mChildren[1].fields._syncRoot;
  v24 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v24, (Il2CppObject *)this, Method_UIWrapContent_EndCallback__, v25);
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v26);
  EventDelegate__Set_56322328(syncRoot, v24, v27);
  mPanel = this->fields.mPanel;
  v29 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Item, 0);
  if ( !mPanel )
LABEL_13:
    sub_2213CDC(mChildren, *(_QWORD *)&idx);
  v30 = 0;
  UIPanel__set_clipOffset(mPanel, *(UnityEngine_Vector2_o *)&v29, 0);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  UnityEngine_Transform_o *v20; // x1
  Il2CppClass **v21; // x0
  System_Comparison_T__o *v22; // x20
  const MethodInfo *v23; // x1

  if ( (byte_5975095 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_Transform__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__Sort__);
    sub_2213A60(&Method_UIGrid_SortByName__);
    byte_5975095 = 1;
  }
  mTrans = (UnityEngine_Transform_o *)UIWrapContent__CacheScrollView(this, method);
  if ( ((unsigned __int8)mTrans & 1) != 0 )
  {
    mChildren = this->fields.mChildren;
    if ( !mChildren )
      goto LABEL_17;
    size = mChildren->fields._size;
    v7 = mChildren->fields._version + 1;
    mChildren->fields._size = 0;
    mChildren->fields._version = v7;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)mChildren->fields._items, 0, size, 0);
    mTrans = this->fields.mTrans;
    if ( !mTrans )
      goto LABEL_17;
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
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v21 = &items->obj.klass + v19;
              v10->fields._size = v19 + 1;
              v21[4] = (Il2CppClass *)v20;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v20, v11, v12, v13, v14, v15, v16);
            }
            mTrans = this->fields.mTrans;
            ++v8;
            if ( mTrans )
              continue;
          }
        }
      }
      goto LABEL_17;
    }
    v22 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_Transform__TypeInfo);
    System_Comparison_object____ctor(v22, 0, Method_UIGrid_SortByName__, 0);
    if ( !v10 )
LABEL_17:
      sub_2213CDC(mTrans, v4);
    System_Collections_Generic_List_object___Sort_71849708(
      v10,
      v22,
      (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_Transform__Sort__);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
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

  if ( (byte_5975094 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_Transform__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__Sort__);
    sub_2213A60(&Method_UIGrid_SortHorizontal__);
    sub_2213A60(&Method_UIGrid_SortVertical__);
    byte_5975094 = 1;
  }
  mTrans = (UnityEngine_Transform_o *)UIWrapContent__CacheScrollView(this, method);
  if ( ((unsigned __int8)mTrans & 1) != 0 )
  {
    mChildren = this->fields.mChildren;
    if ( !mChildren )
      goto LABEL_17;
    size = mChildren->fields._size;
    v7 = mChildren->fields._version + 1;
    mChildren->fields._size = 0;
    mChildren->fields._version = v7;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)mChildren->fields._items, 0, size, 0);
    mTrans = this->fields.mTrans;
    if ( !mTrans )
      goto LABEL_17;
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
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + v18;
              v9->fields._size = v18 + 1;
              v20[4] = (Il2CppClass *)v19;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v19, v10, v11, v12, v13, v14, v15);
            }
            mTrans = this->fields.mTrans;
            ++v8;
            if ( mTrans )
              continue;
          }
        }
      }
      goto LABEL_17;
    }
    mHorizontal = this->fields.mHorizontal;
    v22 = this->fields.mChildren;
    v23 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_Transform__TypeInfo);
    v24 = v23;
    v25 = mHorizontal ? &Method_UIGrid_SortHorizontal__ : &Method_UIGrid_SortVertical__;
    System_Comparison_object____ctor(v23, 0, *v25, 0);
    if ( !v22 )
LABEL_17:
      sub_2213CDC(mTrans, v4);
    System_Collections_Generic_List_object___Sort_71849708(
      (System_Collections_Generic_List_object__o *)v22,
      v24,
      (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_Transform__Sort__);
    UIWrapContent__ResetChildPositions(this, v26);
  }
}


void UIWrapContent__Start(UIWrapContent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *mScroll; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  Il2CppObject *Component_object; // x20
  UIPanel_OnClippingMoved_o *v9; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5975093 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIPanel_OnClippingMoved_TypeInfo);
    byte_5975093 = 1;
  }
  UIWrapContent__SortBasedOnScrollMovement(this, method);
  UIWrapContent__WrapContent(this, v3);
  mScroll = (UnityEngine_Object_o *)this->fields.mScroll;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(mScroll, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.mScroll;
    if ( !v7
      || (Component_object = UnityEngine_Component__GetComponent_object_(
                               v7,
                               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___),
          v9 = (UIPanel_OnClippingMoved_o *)sub_2213CCC(UIPanel_OnClippingMoved_TypeInfo),
          UIPanel_OnClippingMoved___ctor(v9, (Il2CppObject *)this, (intptr_t)this->klass->vtable._5_OnMove.method, 0),
          !Component_object) )
    {
      sub_2213CDC(v7, v6);
    }
    Component_object[17].klass = (Il2CppClass *)v9;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&Component_object[17], (int32_t)v9, v10, v11, v12, v13, v14, v15);
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
  struct UIWrapContent_OnInitializeItem_o *onInitializeItem; // x21
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
  this = (UIWrapContent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0);
  if ( !onInitializeItem )
    goto LABEL_28;
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
  unsigned int v6; // w8
  UIWrapContent_o *v7; // x21
  unsigned __int64 v8; // x20
  int32_t *p_minIndex; // x22
  struct System_Collections_Generic_List_Transform__o *v10; // x8
  float v11; // s13
  float v12; // s0
  int v13; // w25
  char v14; // w24
  float v15; // s2
  float v16; // s3
  unsigned int v17; // w20
  float v18; // s15
  __int64 v19; // x1
  Il2CppObject *Item; // x22
  float v21; // s11
  __int64 v22; // x1
  float x; // s10
  float y; // s8
  float z; // s9
  int v26; // s11
  float v27; // s10
  __int64 v28; // x1
  float v29; // s10
  float v30; // s12
  double v31; // d11
  double v32; // d0
  double v33; // d0
  double v34; // d1
  double v35; // d1
  int32_t minIndex; // w8
  int32_t maxIndex; // w9
  int v38; // w10
  struct UIPanel_o *mPanel; // x8
  float v41; // s9
  float v42; // s8
  __int64 v43; // x1
  UnityEngine_GameObject_o *gameObject; // x23
  float v45; // s8
  __int64 v46; // x1
  UnityEngine_GameObject_o *v47; // x22
  bool v49; // w23
  int v50; // w25
  float v51; // s2
  float v52; // s3
  unsigned int v53; // w20
  float v54; // s15
  __int64 v55; // x1
  Il2CppObject *v56; // x22
  float v57; // s11
  __int64 v58; // x1
  float v59; // s8
  float v60; // s10
  float v61; // s9
  int v62; // s11
  float v63; // s10
  __int64 v64; // x1
  float v65; // s10
  float v66; // s12
  double v67; // d11
  double v68; // d0
  double v69; // d0
  double v70; // d1
  double v71; // d1
  int32_t v72; // w8
  int32_t v73; // w9
  int v74; // w10
  struct UIPanel_o *v76; // x8
  float v77; // s9
  float v78; // s8
  __int64 v79; // x1
  UnityEngine_GameObject_o *v80; // x23
  float v81; // s8
  __int64 v82; // x1
  UnityEngine_GameObject_o *v83; // x22
  bool v85; // w23
  struct UIScrollView_o *mScroll; // x8
  char v87; // [xsp+8h] [xbp-B8h]
  float v88; // [xsp+Ch] [xbp-B4h]
  float v89; // [xsp+Ch] [xbp-B4h]
  float v90; // [xsp+10h] [xbp-B0h]
  float v91; // [xsp+10h] [xbp-B0h]
  float v92; // [xsp+14h] [xbp-ACh]
  double iptr; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_5975098 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__get_Item__);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (UIWrapContent_o *)sub_2213A60(&UICamera_TypeInfo);
    byte_5975098 = 1;
  }
  mChildren = v2->fields.mChildren;
  if ( !mChildren )
    goto LABEL_134;
  this = (UIWrapContent_o *)v2->fields.mPanel;
  if ( !this )
    goto LABEL_134;
  size = mChildren->fields._size;
  itemSize = v2->fields.itemSize;
  this = (UIWrapContent_o *)((__int64 (__fastcall *)(UIWrapContent_o *, Il2CppClass *))this->klass[1]._1.element_class)(
                              this,
                              this->klass[1]._1.castClass);
  if ( !this )
    goto LABEL_134;
  v6 = size * itemSize;
  v7 = this;
  v8 = 0;
  p_minIndex = &this->fields.minIndex;
  v92 = vcvts_n_f32_s32(v6, 1u);
  do
  {
    if ( v8 >= LODWORD(v7->fields.m_CancellationTokenSource) )
      goto LABEL_135;
    this = (UIWrapContent_o *)v2->fields.mTrans;
    if ( !this )
      goto LABEL_134;
    v94 = UnityEngine_Transform__InverseTransformPoint(
            (UnityEngine_Transform_o *)this,
            *(UnityEngine_Vector3_o *)(p_minIndex - 2),
            0);
    if ( v8 >= LODWORD(v7->fields.m_CancellationTokenSource) )
      goto LABEL_135;
    ++v8;
    *(UnityEngine_Vector3_o *)(p_minIndex - 2) = v94;
    p_minIndex += 3;
  }
  while ( v8 != 4 );
  if ( LODWORD(v7->fields.m_CancellationTokenSource) <= 2 )
LABEL_135:
    sub_2213CE4(this);
  v10 = v2->fields.mChildren;
  v11 = v92 + v92;
  v12 = (float)v2->fields.itemSize;
  if ( v2->fields.mHorizontal )
  {
    if ( v10 )
    {
      v13 = v10->fields._size;
      v14 = 1;
      if ( v13 < 1 )
        goto LABEL_132;
      v15 = *(float *)&v7->fields.itemSize;
      v16 = *(float *)&v7->fields.mTrans;
      v17 = 0;
      v18 = v15 + (float)((float)(v16 - v15) * 0.5);
      v88 = v16 + v12;
      v90 = v15 - v12;
      v87 = 1;
      while ( 1 )
      {
        this = (UIWrapContent_o *)v2->fields.mChildren;
        if ( !this )
          goto LABEL_134;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this,
                 v17,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_Transform__get_Item__);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
        this = (UIWrapContent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_70;
        if ( !Item )
          goto LABEL_134;
        v21 = COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Item, 0)) - v18;
        if ( v21 < (float)-v92 )
        {
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Item, 0);
          x = localPosition.fields.x;
          y = localPosition.fields.y;
          z = localPosition.fields.z;
          v26 = v2->fields.itemSize;
          if ( !byte_596A30A )
          {
            sub_2213A60(&System_Math_TypeInfo);
            byte_596A30A = 1;
          }
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v22);
          v27 = v11 + x;
          goto LABEL_33;
        }
        if ( v21 > v92 )
          break;
        if ( v2->fields.mFirstTime )
          goto LABEL_54;
LABEL_55:
        if ( v2->fields.cullContent )
        {
          mPanel = v2->fields.mPanel;
          if ( !mPanel )
            goto LABEL_134;
          this = (UIWrapContent_o *)v2->fields.mTrans;
          if ( !this )
            goto LABEL_134;
          v41 = mPanel->fields.mClipOffset.fields.x;
          LODWORD(v42) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v43);
          this = (UIWrapContent_o *)UICamera__IsPressed(gameObject, 0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v45 = v21 + (float)(v41 - v42);
            v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
            v49 = v45 < v88 && v45 > v90;
            if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v46);
            NGUITools__SetActive_56424288(v47, v49, 0, 0);
          }
        }
LABEL_70:
        if ( v13 == ++v17 )
        {
          v14 = v87;
          goto LABEL_132;
        }
      }
      v96 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Item, 0);
      v29 = v96.fields.x;
      y = v96.fields.y;
      z = v96.fields.z;
      v26 = v2->fields.itemSize;
      if ( !byte_596A30A )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_596A30A = 1;
      }
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v28);
      v27 = v29 - v11;
LABEL_33:
      v30 = v27 / (float)v26;
      v31 = v30;
      v32 = modf(v30, &iptr);
      if ( v30 >= 0.0 )
      {
        if ( v32 == 0.5 )
        {
          v33 = iptr;
          v34 = 1.0;
LABEL_38:
          v35 = v33 + v34;
          if ( ((__int64)v33 & 1) != 0 )
            v33 = v35;
          goto LABEL_45;
        }
        v33 = floor(v31 + 0.5);
      }
      else
      {
        if ( v32 == -0.5 )
        {
          v33 = iptr;
          v34 = -1.0;
          goto LABEL_38;
        }
        v33 = ceil(v31 + -0.5);
      }
LABEL_45:
      v21 = v27 - v18;
      minIndex = v2->fields.minIndex;
      maxIndex = v2->fields.maxIndex;
      if ( minIndex != maxIndex )
      {
        v38 = (int)v33;
        if ( v33 == INFINITY )
          v38 = 0x80000000;
        if ( minIndex > v38 || v38 > maxIndex )
        {
          v87 = 0;
          goto LABEL_55;
        }
      }
      v97.fields.x = v27;
      v97.fields.y = y;
      v97.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Item, v97, 0);
LABEL_54:
      this = (UIWrapContent_o *)((__int64 (__fastcall *)(UIWrapContent_o *, Il2CppObject *, _QWORD, const MethodInfo *))v2->klass->vtable._6_UpdateItem.methodPtr)(
                                  v2,
                                  Item,
                                  v17,
                                  v2->klass->vtable._6_UpdateItem.method);
      goto LABEL_55;
    }
LABEL_134:
    sub_2213CDC(this, method);
  }
  if ( !v10 )
    goto LABEL_134;
  v50 = v10->fields._size;
  if ( v50 >= 1 )
  {
    v51 = *(float *)&v7->fields.cullContent;
    v52 = *((float *)&v7->fields.mTrans + 1);
    v53 = 0;
    v14 = 1;
    v54 = v51 + (float)((float)(v52 - v51) * 0.5);
    v89 = v52 + v12;
    v91 = v51 - v12;
    while ( 1 )
    {
      this = (UIWrapContent_o *)v2->fields.mChildren;
      if ( !this )
        goto LABEL_134;
      v56 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)this,
              v53,
              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_Transform__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v55);
      this = (UIWrapContent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v56, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
LABEL_129:
      if ( v50 == ++v53 )
        goto LABEL_132;
    }
    if ( !v56 )
      goto LABEL_134;
    v98 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v56, 0);
    v57 = v98.fields.y - v54;
    if ( (float)(v98.fields.y - v54) >= (float)-v92 )
    {
      if ( v57 <= v92 )
      {
        if ( !v2->fields.mFirstTime )
        {
LABEL_114:
          if ( v2->fields.cullContent )
          {
            v76 = v2->fields.mPanel;
            if ( !v76 )
              goto LABEL_134;
            this = (UIWrapContent_o *)v2->fields.mTrans;
            if ( !this )
              goto LABEL_134;
            v77 = v76->fields.mClipOffset.fields.y;
            v102 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
            v78 = v102.fields.y;
            v80 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v56, 0);
            if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v79);
            this = (UIWrapContent_o *)UICamera__IsPressed(v80, 0);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              v81 = v57 + (float)(v77 - v78);
              v83 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v56, 0);
              v85 = v81 < v89 && v81 > v91;
              if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v82);
              NGUITools__SetActive_56424288(v83, v85, 0, 0);
            }
          }
          goto LABEL_129;
        }
LABEL_113:
        this = (UIWrapContent_o *)((__int64 (__fastcall *)(UIWrapContent_o *, Il2CppObject *, _QWORD, const MethodInfo *))v2->klass->vtable._6_UpdateItem.methodPtr)(
                                    v2,
                                    v56,
                                    v53,
                                    v2->klass->vtable._6_UpdateItem.method);
        goto LABEL_114;
      }
      v100 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v56, 0);
      v59 = v100.fields.x;
      v65 = v100.fields.y;
      v61 = v100.fields.z;
      v62 = v2->fields.itemSize;
      if ( !byte_596A30A )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_596A30A = 1;
      }
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v64);
      v63 = v65 - v11;
    }
    else
    {
      v99 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v56, 0);
      v59 = v99.fields.x;
      v60 = v99.fields.y;
      v61 = v99.fields.z;
      v62 = v2->fields.itemSize;
      if ( !byte_596A30A )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_596A30A = 1;
      }
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v58);
      v63 = v11 + v60;
    }
    v66 = v63 / (float)v62;
    v67 = v66;
    v68 = modf(v66, &iptr);
    if ( v66 >= 0.0 )
    {
      if ( v68 == 0.5 )
      {
        v69 = iptr;
        v70 = 1.0;
LABEL_97:
        v71 = v69 + v70;
        if ( ((__int64)v69 & 1) != 0 )
          v69 = v71;
        goto LABEL_104;
      }
      v69 = floor(v67 + 0.5);
    }
    else
    {
      if ( v68 == -0.5 )
      {
        v69 = iptr;
        v70 = -1.0;
        goto LABEL_97;
      }
      v69 = ceil(v67 + -0.5);
    }
LABEL_104:
    v57 = v63 - v54;
    v72 = v2->fields.minIndex;
    v73 = v2->fields.maxIndex;
    if ( v72 != v73 )
    {
      v74 = (int)v69;
      if ( v69 == INFINITY )
        v74 = 0x80000000;
      if ( v72 > v74 || v74 > v73 )
      {
        v14 = 0;
        goto LABEL_114;
      }
    }
    v101.fields.x = v59;
    v101.fields.y = v63;
    v101.fields.z = v61;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v56, v101, 0);
    goto LABEL_113;
  }
  v14 = 1;
LABEL_132:
  mScroll = v2->fields.mScroll;
  if ( !mScroll )
    goto LABEL_134;
  mScroll->fields.restrictWithinPanel = (v14 & 1) == 0;
}


void UIWrapContent__resetScroll(UIWrapContent_o *this, const MethodInfo *method)
{
  UIScrollView_o *mScroll; // x0

  mScroll = this->fields.mScroll;
  if ( !mScroll )
    sub_2213CDC(0, method);
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
  __int64 v16; // x1
  Il2CppObject *v17; // x20
  System_String_o *v18; // x0
  Il2CppObject *v19; // x0
  UnityEngine_Vector3_o v20; // [xsp+0h] [xbp-50h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  v21 = idx;
  if ( (byte_5975099 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Transform__get_Item__);
    sub_2213A60(&StringLiteral_357/*"!!** setScrollPos : "*/);
    sub_2213A60(&StringLiteral_358/*"!!** setScrollPos mChildList Position: "*/);
    byte_5975099 = 1;
  }
  mChildren = (System_Collections_Generic_List_object__o *)this->fields.mChildren;
  v20.fields.z = 0.0;
  *(_QWORD *)&v20.fields.x = 0;
  if ( !mChildren )
    goto LABEL_11;
  mChildren = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             mChildren,
                                                             idx,
                                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_Transform__get_Item__);
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
  v23 = UnityEngine_Transform__get_localPosition(v6, 0);
  if ( !v7
    || (v10 = -v8,
        v11 = y,
        UnityEngine_Transform__set_localPosition(v7, v23, 0),
        mPanel = this->fields.mPanel,
        v13 = (unsigned int)UnityEngine_Transform__get_localPosition(v6, 0),
        !mPanel) )
  {
LABEL_11:
    sub_2213CDC(mChildren, *(_QWORD *)&idx);
  }
  v14 = 0;
  UIPanel__set_clipOffset(mPanel, *(UnityEngine_Vector2_o *)&v13, 0);
  v15 = System_Int32__ToString((int32_t)&v21, 0);
  v17 = (Il2CppObject *)System_String__Concat_75651716((System_String_o *)StringLiteral_357/*"!!** setScrollPos : "*/, v15, 0);
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v16);
  UnityEngine_Debug__Log(v17, 0);
  v20 = UnityEngine_Transform__get_localPosition(v6, 0);
  v18 = (System_String_o *)sub_2402C74(&v20, 0, 0, 0);
  v19 = (Il2CppObject *)System_String__Concat_75651716((System_String_o *)StringLiteral_358/*"!!** setScrollPos mChildList Position: "*/, v18, 0);
  UnityEngine_Debug__Log(v19, 0);
}


void UIWrapContent_CallbackFunc___ctor(
        UIWrapContent_CallbackFunc_o *this,
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
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

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
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_20170E4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20170A4;
}


System_IAsyncResult_o *UIWrapContent_CallbackFunc__BeginInvoke(
        UIWrapContent_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  return (System_IAsyncResult_o *)sub_2213A14(this, &v5, callback, object);
}


void UIWrapContent_CallbackFunc__EndInvoke(
        UIWrapContent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
      v13 = sub_2017068;
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
  v13 = sub_201708C;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v13;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_2017008;
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


void UIWrapContent_OnInitializeItem__EndInvoke(
        UIWrapContent_OnInitializeItem_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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