void UIDragScrollView___ctor(UIDragScrollView_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIDragScrollView__FindScrollView(UIDragScrollView_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *mTrans; // x20
  __int64 v4; // x1
  Il2CppObject *v5; // x20
  struct UIScrollView_o **p_scrollView; // x21
  UnityEngine_Object_o *scrollView; // x22
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  bool *p_mAutoFind; // x24
  UnityEngine_Object_o *v16; // x22
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  UnityEngine_Object_o *v23; // x21
  struct UIScrollView_o *v24; // x1

  if ( (byte_593CCFB & 1) == 0 )
  {
    sub_21FFC50(&Method_NGUITools_FindInParents_UIScrollView____91571960);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CCFB = 1;
  }
  mTrans = this->fields.mTrans;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  v5 = NGUITools__FindInParents_object__59496408(
         mTrans,
         (const MethodInfo_38BD7D8 *)Method_NGUITools_FindInParents_UIScrollView____91571960);
  p_scrollView = &this->fields.scrollView;
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Equality(scrollView, 0, 0) )
    goto LABEL_12;
  p_mAutoFind = &this->fields.mAutoFind;
  if ( this->fields.mAutoFind )
  {
    v16 = (UnityEngine_Object_o *)*p_scrollView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, v16, 0) )
    {
LABEL_12:
      this->fields.scrollView = (struct UIScrollView_o *)v5;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.scrollView,
        (int32_t)v5,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      p_mAutoFind = &this->fields.mAutoFind;
LABEL_16:
      *p_mAutoFind = 1;
      goto LABEL_17;
    }
  }
  v23 = (UnityEngine_Object_o *)*p_scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Equality(v23, (UnityEngine_Object_o *)v5, 0) )
    goto LABEL_16;
LABEL_17:
  v24 = this->fields.scrollView;
  this->fields.mScroll = v24;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mScroll, (int32_t)v24, v17, v18, v19, v20, v21, v22);
}


void UIDragScrollView__OnDrag(UIDragScrollView_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  UIScrollView_o *v7; // x0

  if ( (byte_593CCFD & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CCFD = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Implicit(scrollView, 0) )
  {
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5);
    if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
    {
      v7 = this->fields.scrollView;
      if ( !v7 )
        sub_21FFECC(0, v6);
      UIScrollView__Drag(v7, 0);
    }
  }
}


void UIDragScrollView__OnEnable(UIDragScrollView_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v12; // x1
  struct UIScrollView_o **p_draggablePanel; // x21
  UnityEngine_Object_o *draggablePanel; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct UIScrollView_o *v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  UnityEngine_Object_o *mScroll; // x20

  if ( (byte_593CCFA & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CCFA = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5, v6, v7, v8, v9);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Equality(scrollView, 0, 0) )
  {
    p_draggablePanel = &this->fields.draggablePanel;
    draggablePanel = (UnityEngine_Object_o *)this->fields.draggablePanel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    if ( UnityEngine_Object__op_Inequality(draggablePanel, 0, 0) )
    {
      v21 = *p_draggablePanel;
      this->fields.scrollView = *p_draggablePanel;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.scrollView,
        (int32_t)v21,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      *p_draggablePanel = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.draggablePanel, 0, v22, v23, v24, v25, v26, v27);
    }
  }
  if ( this->fields.mStarted )
  {
    if ( this->fields.mAutoFind )
      goto LABEL_15;
    mScroll = (UnityEngine_Object_o *)this->fields.mScroll;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    if ( UnityEngine_Object__op_Equality(mScroll, 0, 0) )
LABEL_15:
      UIDragScrollView__FindScrollView(this, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIDragScrollView__OnPress(UIDragScrollView_o *this, bool pressed, const MethodInfo *method)
{
  UnityEngine_Object_o *mScroll; // x22
  UnityEngine_Object_o *scrollView; // x23
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct UIScrollView_o *v13; // x1
  UIScrollView_o **p_scrollView; // x21
  UnityEngine_Object_o *v15; // x22
  __int64 v16; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_Transform_o *mTrans; // x20
  Il2CppObject *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct UIScrollView_o *v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  if ( (byte_593CCFC & 1) == 0 )
  {
    sub_21FFC50(&Method_NGUITools_FindInParents_UIScrollView____91571960);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CCFC = 1;
  }
  if ( this->fields.mAutoFind )
  {
    mScroll = (UnityEngine_Object_o *)this->fields.mScroll;
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, pressed);
    if ( UnityEngine_Object__op_Inequality(mScroll, scrollView, 0) )
    {
      v13 = this->fields.scrollView;
      this->fields.mScroll = v13;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mScroll, (int32_t)v13, v7, v8, v9, v10, v11, v12);
      this->fields.mAutoFind = 0;
    }
  }
  p_scrollView = &this->fields.scrollView;
  v15 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, pressed);
  if ( UnityEngine_Object__op_Implicit(v15, 0) && UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v16);
    if ( NGUITools__GetActive_56206348(gameObject, 0) )
    {
      if ( !*p_scrollView )
        sub_21FFECC(0, v18);
      UIScrollView__Press(*p_scrollView, pressed, 0);
      if ( !pressed && this->fields.mAutoFind )
      {
        mTrans = this->fields.mTrans;
        if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v19);
        v21 = NGUITools__FindInParents_object__59496408(
                mTrans,
                (const MethodInfo_38BD7D8 *)Method_NGUITools_FindInParents_UIScrollView____91571960);
        this->fields.scrollView = (struct UIScrollView_o *)v21;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.scrollView,
          (int32_t)v21,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
        v28 = this->fields.scrollView;
        this->fields.mScroll = v28;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mScroll,
          (int32_t)v28,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
      }
    }
  }
}


void UIDragScrollView__OnScroll(UIDragScrollView_o *this, float delta, const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v6; // x1
  __int64 v7; // x1
  UIScrollView_o *v8; // x0

  if ( (byte_593CCFE & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CCFE = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Implicit(scrollView, 0) )
  {
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v6);
    if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
    {
      v8 = this->fields.scrollView;
      if ( !v8 )
        sub_21FFECC(0, v7);
      UIScrollView__Scroll(v8, delta, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UIDragScrollView__OnScrollStop(UIDragScrollView_o *this, bool dummy, const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v5; // x1
  UIScrollView_o *v6; // x0
  UIScrollView_o *v7; // x19

  if ( (byte_593CCFF & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CCFF = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, dummy);
  if ( UnityEngine_Object__op_Implicit(scrollView, 0) )
  {
    v6 = this->fields.scrollView;
    if ( !v6 )
      goto LABEL_12;
    UIScrollView__DisableSpring(v6, 0);
    v7 = this->fields.scrollView;
    if ( !byte_5931940 )
    {
      v6 = (UIScrollView_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    if ( !v7 )
LABEL_12:
      sub_21FFECC(v6, v5);
    UIScrollView__set_currentMomentum(v7, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
}


void UIDragScrollView__Start(UIDragScrollView_o *this, const MethodInfo *method)
{
  this->fields.mStarted = 1;
  UIDragScrollView__FindScrollView(this, method);
}