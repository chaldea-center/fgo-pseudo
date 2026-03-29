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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  bool *p_mAutoFind; // x24
  UnityEngine_Object_o *v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UnityEngine_Object_o *v22; // x21
  struct UIScrollView_o *v23; // x1

  if ( (byte_4D35097 & 1) == 0 )
  {
    sub_1C93AD4(&Method_NGUITools_FindInParents_UIScrollView____79143664);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35097 = 1;
  }
  mTrans = this->fields.mTrans;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v4 = NGUITools__FindInParents_object__52621088(
         mTrans,
         (const MethodInfo_322EF20 *)Method_NGUITools_FindInParents_UIScrollView____79143664);
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
    v15 = (UnityEngine_Object_o *)*p_scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, v15, 0) )
    {
LABEL_12:
      this->fields.scrollView = v7;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.scrollView, (int32_t)v7, v8, v9, v10, v11, v12, v13);
      p_mAutoFind = &this->fields.mAutoFind;
LABEL_16:
      *p_mAutoFind = 1;
      goto LABEL_17;
    }
  }
  v22 = (UnityEngine_Object_o *)*p_scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v22, (UnityEngine_Object_o *)v7, 0) )
    goto LABEL_16;
LABEL_17:
  v23 = this->fields.scrollView;
  this->fields.mScroll = v23;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mScroll, (int32_t)v23, v16, v17, v18, v19, v20, v21);
}


void UIDragScrollView__OnDrag(UIDragScrollView_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v5; // x1
  UIScrollView_o *v6; // x0

  if ( (byte_4D35099 & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35099 = 1;
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
        sub_1C93D2C(0, v5);
      UIScrollView__Drag(v6, 0);
    }
  }
}


void UIDragScrollView__OnEnable(UIDragScrollView_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v11; // x1
  struct UIScrollView_o **p_draggablePanel; // x21
  UnityEngine_Object_o *draggablePanel; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct UIScrollView_o *v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  UnityEngine_Object_o *mScroll; // x20

  if ( (byte_4D35096 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35096 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5, v6, v7, v8, v9);
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
      v20 = *p_draggablePanel;
      this->fields.scrollView = *p_draggablePanel;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.scrollView, (int32_t)v20, v14, v15, v16, v17, v18, v19);
      *p_draggablePanel = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.draggablePanel, 0, v21, v22, v23, v24, v25, v26);
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
      UIDragScrollView__FindScrollView(this, v11);
  }
}


void UIDragScrollView__OnPress(UIDragScrollView_o *this, bool pressed, const MethodInfo *method)
{
  UnityEngine_Object_o *mScroll; // x22
  UnityEngine_Object_o *scrollView; // x23
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct UIScrollView_o *v13; // x1
  UIScrollView_o **p_scrollView; // x21
  UnityEngine_Object_o *v15; // x22
  UnityEngine_GameObject_o *gameObject; // x22
  __int64 v17; // x1
  UnityEngine_Transform_o *mTrans; // x20
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct UIScrollView_o *v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7

  if ( (byte_4D35098 & 1) == 0 )
  {
    sub_1C93AD4(&Method_NGUITools_FindInParents_UIScrollView____79143664);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35098 = 1;
  }
  if ( this->fields.mAutoFind )
  {
    mScroll = (UnityEngine_Object_o *)this->fields.mScroll;
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mScroll, scrollView, 0) )
    {
      v13 = this->fields.scrollView;
      this->fields.mScroll = v13;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mScroll, (int32_t)v13, v7, v8, v9, v10, v11, v12);
      this->fields.mAutoFind = 0;
    }
  }
  p_scrollView = &this->fields.scrollView;
  v15 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(v15, 0) && UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive_50071416(gameObject, 0) )
    {
      if ( !*p_scrollView )
        sub_1C93D2C(0, v17);
      UIScrollView__Press(*p_scrollView, pressed, 0);
      if ( !pressed && this->fields.mAutoFind )
      {
        mTrans = this->fields.mTrans;
        if ( !NGUITools_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
        v19 = NGUITools__FindInParents_object__52621088(
                mTrans,
                (const MethodInfo_322EF20 *)Method_NGUITools_FindInParents_UIScrollView____79143664);
        this->fields.scrollView = (struct UIScrollView_o *)v19;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.scrollView, (int32_t)v19, v20, v21, v22, v23, v24, v25);
        v26 = this->fields.scrollView;
        this->fields.mScroll = v26;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mScroll, (int32_t)v26, v27, v28, v29, v30, v31, v32);
      }
    }
  }
}


void UIDragScrollView__OnScroll(UIDragScrollView_o *this, float delta, const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v6; // x1
  UIScrollView_o *v7; // x0

  if ( (byte_4D3509A & 1) == 0 )
  {
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3509A = 1;
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
      v7 = this->fields.scrollView;
      if ( !v7 )
        sub_1C93D2C(0, v6);
      UIScrollView__Scroll(v7, delta, 0);
    }
  }
}


void UIDragScrollView__OnScrollStop(UIDragScrollView_o *this, bool dummy, const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v5; // x1
  UIScrollView_o *v6; // x0
  UIScrollView_o *v7; // x19

  if ( (byte_4D3509B & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3509B = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(scrollView, 0) )
  {
    v6 = this->fields.scrollView;
    if ( !v6 )
      goto LABEL_12;
    UIScrollView__DisableSpring(v6, 0);
    v7 = this->fields.scrollView;
    if ( !byte_4D2A139 )
    {
      v6 = (UIScrollView_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    if ( !v7 )
LABEL_12:
      sub_1C93D2C(v6, v5);
    UIScrollView__set_currentMomentum(v7, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
}


void UIDragScrollView__Start(UIDragScrollView_o *this, const MethodInfo *method)
{
  this->fields.mStarted = 1;
  UIDragScrollView__FindScrollView(this, method);
}