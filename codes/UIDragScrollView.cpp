void UIDragScrollView___ctor(UIDragScrollView_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIDragScrollView__FindScrollView(UIDragScrollView_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *mTrans; // x20
  Il2CppObject *v4; // x0
  struct UIScrollView_o **p_scrollView; // x21
  UnityEngine_Object_o *scrollView; // x22
  struct UIScrollView_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  bool *p_mAutoFind; // x24
  UnityEngine_Object_o *v11; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *v14; // x21
  struct UIScrollView_o *v15; // x1

  if ( (byte_4C3C01B & 1) == 0 )
  {
    sub_1C32C20(&Method_NGUITools_FindInParents_UIScrollView____78144240);
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C01B = 1;
  }
  mTrans = this->fields.mTrans;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v4 = NGUITools__FindInParents_object__51804172(
         mTrans,
         (const MethodInfo_316780C *)Method_NGUITools_FindInParents_UIScrollView____78144240);
  p_scrollView = &this->fields.scrollView;
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  v7 = (struct UIScrollView_o *)v4;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(scrollView, 0, 0) )
    goto LABEL_12;
  p_mAutoFind = &this->fields.mAutoFind;
  if ( this->fields.mAutoFind )
  {
    v11 = (UnityEngine_Object_o *)*p_scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, v11, 0) )
    {
LABEL_12:
      this->fields.scrollView = v7;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.scrollView, (int32_t)v7, v8, v9);
      p_mAutoFind = &this->fields.mAutoFind;
LABEL_16:
      *p_mAutoFind = 1;
      goto LABEL_17;
    }
  }
  v14 = (UnityEngine_Object_o *)*p_scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v14, (UnityEngine_Object_o *)v7, 0) )
    goto LABEL_16;
LABEL_17:
  v15 = this->fields.scrollView;
  this->fields.mScroll = v15;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mScroll, (int32_t)v15, v12, v13);
}


void UIDragScrollView__OnDrag(UIDragScrollView_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v5; // x0

  if ( (byte_4C3C01D & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C01D = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(scrollView, 0) )
  {
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
    {
      v5 = this->fields.scrollView;
      if ( !v5 )
        sub_1C32E7C(0);
      UIScrollView__Drag(v5, 0);
    }
  }
}


void UIDragScrollView__OnEnable(UIDragScrollView_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v7; // x1
  struct UIScrollView_o **p_draggablePanel; // x21
  UnityEngine_Object_o *draggablePanel; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UIScrollView_o *v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *mScroll; // x20

  if ( (byte_4C3C01A & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C01A = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(scrollView, 0, 0) )
  {
    p_draggablePanel = &this->fields.draggablePanel;
    draggablePanel = (UnityEngine_Object_o *)this->fields.draggablePanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(draggablePanel, 0, 0) )
    {
      v12 = *p_draggablePanel;
      this->fields.scrollView = *p_draggablePanel;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.scrollView, (int32_t)v12, v10, v11);
      *p_draggablePanel = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.draggablePanel, 0, v13, v14);
    }
  }
  if ( this->fields.mStarted )
  {
    if ( this->fields.mAutoFind )
      goto LABEL_15;
    mScroll = (UnityEngine_Object_o *)this->fields.mScroll;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(mScroll, 0, 0) )
LABEL_15:
      UIDragScrollView__FindScrollView(this, v7);
  }
}


void UIDragScrollView__OnPress(UIDragScrollView_o *this, bool pressed, const MethodInfo *method)
{
  UnityEngine_Object_o *mScroll; // x22
  UnityEngine_Object_o *scrollView; // x23
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UIScrollView_o *v9; // x1
  UIScrollView_o **p_scrollView; // x21
  UnityEngine_Object_o *v11; // x22
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_Transform_o *mTrans; // x20
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct UIScrollView_o *v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C3C01C & 1) == 0 )
  {
    sub_1C32C20(&Method_NGUITools_FindInParents_UIScrollView____78144240);
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C01C = 1;
  }
  if ( this->fields.mAutoFind )
  {
    mScroll = (UnityEngine_Object_o *)this->fields.mScroll;
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mScroll, scrollView, 0) )
    {
      v9 = this->fields.scrollView;
      this->fields.mScroll = v9;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mScroll, (int32_t)v9, v7, v8);
      this->fields.mAutoFind = 0;
    }
  }
  p_scrollView = &this->fields.scrollView;
  v11 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(v11, 0) && UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_49301984(gameObject, 0) )
    {
      if ( !*p_scrollView )
        sub_1C32E7C(0);
      UIScrollView__Press(*p_scrollView, pressed, 0);
      if ( !pressed && this->fields.mAutoFind )
      {
        mTrans = this->fields.mTrans;
        if ( !NGUITools_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
        v14 = NGUITools__FindInParents_object__51804172(
                mTrans,
                (const MethodInfo_316780C *)Method_NGUITools_FindInParents_UIScrollView____78144240);
        this->fields.scrollView = (struct UIScrollView_o *)v14;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.scrollView, (int32_t)v14, v15, v16);
        v17 = this->fields.scrollView;
        this->fields.mScroll = v17;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mScroll, (int32_t)v17, v18, v19);
      }
    }
  }
}


void UIDragScrollView__OnScroll(UIDragScrollView_o *this, float delta, const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v6; // x0

  if ( (byte_4C3C01E & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C01E = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(scrollView, 0) )
  {
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
    {
      v6 = this->fields.scrollView;
      if ( !v6 )
        sub_1C32E7C(0);
      UIScrollView__Scroll(v6, delta, 0);
    }
  }
}


void UIDragScrollView__OnScrollStop(UIDragScrollView_o *this, bool dummy, const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v5; // x0
  UIScrollView_o *v6; // x19

  if ( (byte_4C3C01F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C01F = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(scrollView, 0) )
  {
    v5 = this->fields.scrollView;
    if ( !v5 )
      goto LABEL_12;
    UIScrollView__DisableSpring(v5, 0);
    v6 = this->fields.scrollView;
    if ( !byte_4C313D1 )
    {
      v5 = (UIScrollView_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D1 = 1;
    }
    if ( !v6 )
LABEL_12:
      sub_1C32E7C(v5);
    UIScrollView__set_currentMomentum(v6, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
}


void UIDragScrollView__Start(UIDragScrollView_o *this, const MethodInfo *method)
{
  this->fields.mStarted = 1;
  UIDragScrollView__FindScrollView(this, method);
}