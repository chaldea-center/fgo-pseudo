void UIDragDropItem___ctor(UIDragDropItem_o *this, const MethodInfo *method)
{
  this->fields.pressAndHoldDelay = 1.0;
  this->fields.interactable = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


System_Collections_IEnumerator_o *UIDragDropItem__EnableDragScrollView(
        UIDragDropItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D3507F & 1) == 0 )
  {
    sub_1C93AD4(&UIDragDropItem__EnableDragScrollView_d__30_TypeInfo);
    byte_4D3507F = 1;
  }
  v3 = sub_1C93D20(UIDragDropItem__EnableDragScrollView_d__30_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void UIDragDropItem__OnDrag(UIDragDropItem_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  __int64 v6; // x1
  struct UICamera_MouseOrTouch_o *mTouch; // x20
  UICamera_c *v8; // x0
  UIRoot_o *mRoot; // x0
  float pixelSizeAdjustment; // s0
  long double v11; // q2

  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_4D3507B & 1) == 0 )
  {
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D3507B = 1;
  }
  if ( this->fields.interactable
    && this->fields.mDragging
    && UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    mTouch = this->fields.mTouch;
    v8 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v8 = UICamera_TypeInfo;
    }
    if ( mTouch == v8->static_fields->currentTouch )
    {
      mRoot = this->fields.mRoot;
      if ( !mRoot )
        sub_1C93D2C(0, v6);
      pixelSizeAdjustment = UIRoot__get_pixelSizeAdjustment(mRoot, 0);
      *(float *)&v11 = x * pixelSizeAdjustment;
      ((void (__fastcall *)(UIDragDropItem_o *, const MethodInfo *, long double, float))this->klass->vtable._12_OnDragDropMove.methodPtr)(
        this,
        this->klass->vtable._12_OnDragDropMove.method,
        v11,
        y * pixelSizeAdjustment);
    }
  }
}


void UIDragDropItem__OnDragDropEnd(UIDragDropItem_o *this, const MethodInfo *method)
{
  ;
}


void UIDragDropItem__OnDragDropMove(UIDragDropItem_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  UnityEngine_Transform_o *mTrans; // x19
  float y; // s8
  float x; // s9
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  mTrans = this->fields.mTrans;
  if ( !mTrans )
    sub_1C93D2C(this, method);
  y = delta.fields.y;
  x = delta.fields.x;
  localPosition = UnityEngine_Transform__get_localPosition(this->fields.mTrans, 0);
  v7.fields.x = x + localPosition.fields.x;
  v7.fields.y = y + localPosition.fields.y;
  v7.fields.z = localPosition.fields.z + 0.0;
  UnityEngine_Transform__set_localPosition(mTrans, v7, 0);
}


void UIDragDropItem__OnDragDropRelease(
        UIDragDropItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x19
  UnityEngine_Object_o *mButton; // x21
  UnityEngine_Transform_o *v7; // x1
  UnityEngine_Collider_o *transform; // x0
  UnityEngine_Object_o *mCollider; // x21
  UnityEngine_Object_o *mCollider2D; // x21
  UnityEngine_Object_o *v11; // x21
  UnityEngine_Transform_o *mTrans; // x20
  UnityEngine_Object_o *monitor; // x22
  struct UnityEngine_Transform_o *parent; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UnityEngine_Transform_o *mParent; // x20
  Il2CppObject *v22; // x0
  struct UIGrid_o **p_mGrid; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  Il2CppObject *v30; // x0
  struct UITable_o **p_mTable; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  UnityEngine_Object_o *mDragScrollView; // x22
  const MethodInfo *v39; // x1
  System_Collections_IEnumerator_o *v40; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_Object_o *v42; // x22
  UnityEngine_Object_o *v43; // x21
  UnityEngine_Vector3_o v45; // 0:kr14_12.12
  unsigned __int64 localPosition; // 0:s0.4,4:s1.4

  if ( (byte_4D3507E & 1) == 0 )
  {
    sub_1C93AD4(&Method_NGUITools_FindInParents_UIDragDropContainer___);
    sub_1C93AD4(&Method_NGUITools_FindInParents_UIGrid____79143592);
    sub_1C93AD4(&Method_NGUITools_FindInParents_UITable____79143680);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3507E = 1;
  }
  if ( !this->fields.cloneOnDrag )
  {
    mButton = (UnityEngine_Object_o *)this->fields.mButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mButton, 0, 0) )
    {
      transform = (UnityEngine_Collider_o *)this->fields.mButton;
      if ( !transform )
        goto LABEL_63;
      ((void (__fastcall *)(UnityEngine_Collider_o *, __int64, const char *))transform->klass[1]._1.name)(
        transform,
        1,
        transform->klass[1]._1.namespaze);
    }
    else
    {
      mCollider = (UnityEngine_Object_o *)this->fields.mCollider;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(mCollider, 0, 0) )
      {
        transform = this->fields.mCollider;
        if ( !transform )
          goto LABEL_63;
        UnityEngine_Collider__set_enabled(transform, 1, 0);
      }
      else
      {
        mCollider2D = (UnityEngine_Object_o *)this->fields.mCollider2D;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(mCollider2D, 0, 0) )
        {
          transform = (UnityEngine_Collider_o *)this->fields.mCollider2D;
          if ( !transform )
            goto LABEL_63;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 1, 0);
        }
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = 0;
    if ( UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)surface, 0) )
    {
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      v11 = (UnityEngine_Object_o *)NGUITools__FindInParents_object_(
                                      surface,
                                      (const MethodInfo_322EDC8 *)Method_NGUITools_FindInParents_UIDragDropContainer___);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(v11, 0, 0);
    mTrans = this->fields.mTrans;
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v11 )
        goto LABEL_63;
      monitor = (UnityEngine_Object_o *)v11[1].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(monitor, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        v7 = (UnityEngine_Transform_o *)v11[1].monitor;
      }
      else
      {
        transform = (UnityEngine_Collider_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v11, 0);
        v7 = (UnityEngine_Transform_o *)transform;
      }
      if ( !mTrans )
        goto LABEL_63;
      UnityEngine_Transform__set_parent(mTrans, v7, 0);
      transform = (UnityEngine_Collider_o *)this->fields.mTrans;
      if ( !transform )
        goto LABEL_63;
      localPosition = (unsigned __int64)UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)transform,
                                          0);
      transform = (UnityEngine_Collider_o *)this->fields.mTrans;
      if ( !transform )
        goto LABEL_63;
      *(_QWORD *)&v45.fields.x = localPosition;
      v45.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v45, 0);
    }
    else
    {
      if ( !mTrans )
        goto LABEL_63;
      UnityEngine_Transform__set_parent(this->fields.mTrans, this->fields.mParent, 0);
    }
    transform = (UnityEngine_Collider_o *)this->fields.mTrans;
    if ( !transform )
      goto LABEL_63;
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    this->fields.mParent = parent;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mParent, (int32_t)parent, v15, v16, v17, v18, v19, v20);
    mParent = this->fields.mParent;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    v22 = NGUITools__FindInParents_object__52621088(
            mParent,
            (const MethodInfo_322EF20 *)Method_NGUITools_FindInParents_UIGrid____79143592);
    this->fields.mGrid = (struct UIGrid_o *)v22;
    p_mGrid = &this->fields.mGrid;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mGrid, (int32_t)v22, v24, v25, v26, v27, v28, v29);
    v30 = NGUITools__FindInParents_object__52621088(
            this->fields.mParent,
            (const MethodInfo_322EF20 *)Method_NGUITools_FindInParents_UITable____79143680);
    this->fields.mTable = (struct UITable_o *)v30;
    p_mTable = &this->fields.mTable;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mTable, (int32_t)v30, v32, v33, v34, v35, v36, v37);
    mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0) )
    {
      v40 = UIDragDropItem__EnableDragScrollView(this, v39);
      UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v40, 0);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__MarkParentAsChanged(gameObject, 0);
    v42 = (UnityEngine_Object_o *)*p_mTable;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v42, 0, 0) )
    {
      transform = (UnityEngine_Collider_o *)*p_mTable;
      if ( !*p_mTable )
        goto LABEL_63;
      UITable__set_repositionNow((UITable_o *)transform, 1, 0);
    }
    v43 = (UnityEngine_Object_o *)*p_mGrid;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v43, 0, 0) )
      goto LABEL_62;
    transform = (UnityEngine_Collider_o *)*p_mGrid;
    if ( *p_mGrid )
    {
      BYTE1(transform[3].monitor) = 1;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 1, 0);
LABEL_62:
      ((void (__fastcall *)(UIDragDropItem_o *, const MethodInfo *))this->klass->vtable._14_OnDragDropEnd.methodPtr)(
        this,
        this->klass->vtable._14_OnDragDropEnd.method);
      return;
    }
LABEL_63:
    sub_1C93D2C(transform, v7);
  }
  v5 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__Destroy(v5, 0);
}


void UIDragDropItem__OnDragDropStart(UIDragDropItem_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mDragScrollView; // x20
  __int64 v4; // x1
  UnityEngine_Behaviour_o *mTrans; // x0
  UnityEngine_Object_o *mButton; // x20
  UnityEngine_Object_o *mCollider; // x20
  UnityEngine_Object_o *mCollider2D; // x20
  struct UnityEngine_Transform_o *parent; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  UnityEngine_Transform_o *mParent; // x20
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  Il2CppObject *v24; // x0
  struct UIGrid_o **p_mGrid; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  Il2CppObject *v32; // x0
  struct UITable_o **p_mTable; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  UnityEngine_Object_o *root; // x22
  Il2CppObject *Component_object; // x22
  Il2CppObject *v42; // x22
  UnityEngine_GameObject_o *gameObject; // x19
  UnityEngine_Object_o *v44; // x19
  UnityEngine_Object_o *v45; // x19
  UnityEngine_Vector3_o v47; // 0:kr14_12.12
  unsigned __int64 localPosition; // 0:s0.4,4:s1.4

  if ( (byte_4D3507D & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_SpringPosition___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    sub_1C93AD4(&Method_NGUITools_FindInParents_UIGrid____79143592);
    sub_1C93AD4(&Method_NGUITools_FindInParents_UIRoot____79143648);
    sub_1C93AD4(&Method_NGUITools_FindInParents_UITable____79143680);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UIDragDropRoot_TypeInfo);
    byte_4D3507D = 1;
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0) )
  {
    mTrans = (UnityEngine_Behaviour_o *)this->fields.mDragScrollView;
    if ( !mTrans )
      goto LABEL_56;
    UnityEngine_Behaviour__set_enabled(mTrans, 0, 0);
  }
  mButton = (UnityEngine_Object_o *)this->fields.mButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mButton, 0, 0) )
  {
    mTrans = (UnityEngine_Behaviour_o *)this->fields.mButton;
    if ( !mTrans )
      goto LABEL_56;
    ((void (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, const char *))mTrans->klass[1]._1.name)(
      mTrans,
      0,
      mTrans->klass[1]._1.namespaze);
  }
  else
  {
    mCollider = (UnityEngine_Object_o *)this->fields.mCollider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mCollider, 0, 0) )
    {
      mTrans = (UnityEngine_Behaviour_o *)this->fields.mCollider;
      if ( !mTrans )
        goto LABEL_56;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)mTrans, 0, 0);
    }
    else
    {
      mCollider2D = (UnityEngine_Object_o *)this->fields.mCollider2D;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(mCollider2D, 0, 0) )
      {
        mTrans = (UnityEngine_Behaviour_o *)this->fields.mCollider2D;
        if ( !mTrans )
          goto LABEL_56;
        UnityEngine_Behaviour__set_enabled(mTrans, 0, 0);
      }
    }
  }
  mTrans = (UnityEngine_Behaviour_o *)this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_56;
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mTrans, 0);
  this->fields.mParent = parent;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mParent, (int32_t)parent, v10, v11, v12, v13, v14, v15);
  mParent = this->fields.mParent;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v17 = NGUITools__FindInParents_object__52621088(
          mParent,
          (const MethodInfo_322EF20 *)Method_NGUITools_FindInParents_UIRoot____79143648);
  this->fields.mRoot = (struct UIRoot_o *)v17;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mRoot, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = NGUITools__FindInParents_object__52621088(
          this->fields.mParent,
          (const MethodInfo_322EF20 *)Method_NGUITools_FindInParents_UIGrid____79143592);
  this->fields.mGrid = (struct UIGrid_o *)v24;
  p_mGrid = &this->fields.mGrid;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mGrid, (int32_t)v24, v26, v27, v28, v29, v30, v31);
  v32 = NGUITools__FindInParents_object__52621088(
          this->fields.mParent,
          (const MethodInfo_322EF20 *)Method_NGUITools_FindInParents_UITable____79143680);
  this->fields.mTable = (struct UITable_o *)v32;
  p_mTable = &this->fields.mTable;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mTable, (int32_t)v32, v34, v35, v36, v37, v38, v39);
  root = (UnityEngine_Object_o *)UIDragDropRoot_TypeInfo->static_fields->root;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(root, 0, 0) )
  {
    mTrans = (UnityEngine_Behaviour_o *)this->fields.mTrans;
    if ( !mTrans )
      goto LABEL_56;
    UnityEngine_Transform__set_parent(
      (UnityEngine_Transform_o *)mTrans,
      UIDragDropRoot_TypeInfo->static_fields->root,
      0);
  }
  mTrans = (UnityEngine_Behaviour_o *)this->fields.mTrans;
  if ( !mTrans
    || (localPosition = (unsigned __int64)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)mTrans, 0),
        (mTrans = (UnityEngine_Behaviour_o *)this->fields.mTrans) == 0) )
  {
LABEL_56:
    sub_1C93D2C(mTrans, v4);
  }
  *(_QWORD *)&v47.fields.x = localPosition;
  v47.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)mTrans, v47, 0);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mTrans = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)mTrans & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_56;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
  }
  v42 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_SpringPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mTrans = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v42, 0, 0);
  if ( ((unsigned __int8)mTrans & 1) != 0 )
  {
    if ( !v42 )
      goto LABEL_56;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v42, 0, 0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__MarkParentAsChanged(gameObject, 0);
  v44 = (UnityEngine_Object_o *)*p_mTable;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v44, 0, 0) )
  {
    mTrans = (UnityEngine_Behaviour_o *)*p_mTable;
    if ( !*p_mTable )
      goto LABEL_56;
    UITable__set_repositionNow((UITable_o *)mTrans, 1, 0);
  }
  v45 = (UnityEngine_Object_o *)*p_mGrid;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v45, 0, 0) )
  {
    mTrans = (UnityEngine_Behaviour_o *)*p_mGrid;
    if ( *p_mGrid )
    {
      BYTE1(mTrans[3].monitor) = 1;
      UnityEngine_Behaviour__set_enabled(mTrans, 1, 0);
      return;
    }
    goto LABEL_56;
  }
}


void UIDragDropItem__OnDragEnd(UIDragDropItem_o *this, const MethodInfo *method)
{
  long double inited; // q0
  struct UICamera_MouseOrTouch_o *mTouch; // x21
  UICamera_c *v5; // x0
  UIDragDropItem_c *klass; // x9
  struct UnityEngine_GameObject_o *hoveredObject; // x1

  if ( (byte_4D3507C & 1) == 0 )
  {
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D3507C = 1;
  }
  if ( this->fields.interactable && UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    mTouch = this->fields.mTouch;
    v5 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      inited = j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v5 = UICamera_TypeInfo;
    }
    if ( mTouch == v5->static_fields->currentTouch )
    {
      if ( !v5->_2.cctor_finished )
        inited = j_il2cpp_runtime_class_init_0(v5);
      if ( this->fields.mDragging )
      {
        klass = this->klass;
        hoveredObject = UICamera_TypeInfo->static_fields->hoveredObject;
        this->fields.mDragging = 0;
        ((void (__fastcall *)(UIDragDropItem_o *, struct UnityEngine_GameObject_o *, const MethodInfo *, long double))klass->vtable._13_OnDragDropRelease.methodPtr)(
          this,
          hoveredObject,
          klass->vtable._13_OnDragDropRelease.method,
          inited);
      }
    }
  }
}


void UIDragDropItem__OnDragStart(UIDragDropItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UICamera_MouseOrTouch_o *mTouch; // x20
  UICamera_c *v5; // x0
  int32_t restriction; // w8
  struct UICamera_MouseOrTouch_o *v7; // x8
  struct UICamera_MouseOrTouch_o *v8; // x8

  if ( (byte_4D35079 & 1) == 0 )
  {
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D35079 = 1;
  }
  if ( !this->fields.interactable || !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    return;
  mTouch = this->fields.mTouch;
  v5 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v5 = UICamera_TypeInfo;
  }
  if ( mTouch != v5->static_fields->currentTouch )
    return;
  restriction = this->fields.restriction;
  if ( restriction == 3 )
    return;
  if ( restriction == 2 )
  {
    v8 = this->fields.mTouch;
    if ( !v8 )
LABEL_18:
      sub_1C93D2C(v5, v3);
    if ( fabsf(v8->fields.totalDelta.fields.x) > fabsf(v8->fields.totalDelta.fields.y) )
      return;
LABEL_17:
    ((void (__fastcall *)(UIDragDropItem_o *, const MethodInfo *))this->klass->vtable._8_StartDragging.methodPtr)(
      this,
      this->klass->vtable._8_StartDragging.method);
    return;
  }
  if ( restriction != 1 )
    goto LABEL_17;
  v7 = this->fields.mTouch;
  if ( !v7 )
    goto LABEL_18;
  if ( fabsf(v7->fields.totalDelta.fields.x) >= fabsf(v7->fields.totalDelta.fields.y) )
    goto LABEL_17;
}


void UIDragDropItem__OnPress(UIDragDropItem_o *this, bool isPressed, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UICamera_c *v10; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x1
  struct UICamera_MouseOrTouch_o **p_mTouch; // x19
  float time; // s0
  float v14; // s1
  struct UICamera_MouseOrTouch_o **v15; // x19

  if ( (byte_4D35078 & 1) == 0 )
  {
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D35078 = 1;
  }
  if ( this->fields.interactable )
  {
    if ( isPressed )
    {
      v10 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v10 = UICamera_TypeInfo;
      }
      currentTouch = v10->static_fields->currentTouch;
      this->fields.mTouch = currentTouch;
      p_mTouch = &this->fields.mTouch;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)p_mTouch, (int32_t)currentTouch, (int32_t)method, v3, v4, v5, v6, v7);
      time = RealTime__get_time(0);
      v14 = *((float *)p_mTouch - 24);
      *((_BYTE *)p_mTouch - 8) = 1;
      *((float *)p_mTouch - 6) = time + v14;
    }
    else
    {
      this->fields.mTouch = 0;
      v15 = &this->fields.mTouch;
      *((_BYTE *)v15 - 8) = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)v15, 0, (int32_t)method, v3, v4, v5, v6, v7);
    }
  }
}


void UIDragDropItem__Start(UIDragDropItem_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  Il2CppObject *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  Il2CppObject *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7

  if ( (byte_4D35077 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_Collider2D___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    byte_4D35077 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5, v6, v7, v8, v9);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_Collider___),
        this->fields.mCollider = (struct UnityEngine_Collider_o *)Component_object,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.mCollider,
          (int32_t)Component_object,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C93D2C(gameObject, v11);
  }
  v19 = UnityEngine_GameObject__GetComponent_object_(
          gameObject,
          (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_Collider2D___);
  this->fields.mCollider2D = (struct UnityEngine_Collider2D_o *)v19;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mCollider2D, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIButton___);
  this->fields.mButton = (struct UIButton_o *)v26;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mButton, (int32_t)v26, v27, v28, v29, v30, v31, v32);
  v33 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___);
  this->fields.mDragScrollView = (struct UIDragScrollView_o *)v33;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mDragScrollView, (int32_t)v33, v34, v35, v36, v37, v38, v39);
}


void UIDragDropItem__StartDragging(UIDragDropItem_o *this, const MethodInfo *method)
{
  char *transform; // x0
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *v6; // x21
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_Transform_o *v8; // x21
  UnityEngine_Transform_o *v9; // x21
  UnityEngine_Transform_o *v10; // x21
  Il2CppObject *Component_object; // x21
  char *v12; // x22
  struct UICamera_MouseOrTouch_o *mTouch; // x8
  struct UICamera_MouseOrTouch_o **p_mTouch; // x21
  UnityEngine_Object_o *pressed; // x22
  UnityEngine_Object_o *v16; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct UICamera_MouseOrTouch_o *v47; // x1
  char *v48; // x20
  __int64 v49; // x8
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  UICamera_c *v56; // x0
  GrandQuestFolderBoardItem_o *static_fields; // x8
  GrandQuestFolderBoardItem_c *v58; // x20
  UnityEngine_GameObject_o *v59; // x20
  Il2CppObject *v60; // x21
  UnityEngine_GameObject_o *v61; // x19
  Il2CppObject *v62; // x0
  UIDragDropItem_c *klass; // x8
  char v64[4]; // [xsp+8h] [xbp-38h] BYREF
  char v65[4]; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D3507A & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIButtonColor___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIDragDropItem___);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    sub_1C93AD4(&StringLiteral_9970/*"OnHover"*/);
    sub_1C93AD4(&StringLiteral_10001/*"OnPress"*/);
    byte_4D3507A = 1;
  }
  if ( this->fields.interactable && !this->fields.mDragging )
  {
    if ( !this->fields.cloneOnDrag )
    {
      klass = this->klass;
      this->fields.mDragging = 1;
      ((void (__fastcall *)(UIDragDropItem_o *, const MethodInfo *))klass->vtable._11_OnDragDropStart.methodPtr)(
        this,
        klass->vtable._11_OnDragDropStart.method);
      return;
    }
    this->fields.mPressed = 0;
    transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( transform )
    {
      transform = (char *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
      if ( transform )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
        v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !NGUITools_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
        transform = (char *)NGUITools__AddChild_50075848(gameObject, v6, 0);
        if ( transform )
        {
          v7 = (UnityEngine_GameObject_o *)transform;
          v8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
          transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
          if ( transform )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
            if ( v8 )
            {
              UnityEngine_Transform__set_localPosition(v8, localPosition, 0);
              v9 = UnityEngine_GameObject__get_transform(v7, 0);
              transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
              if ( transform )
              {
                localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)transform, 0);
                if ( v9 )
                {
                  UnityEngine_Transform__set_localRotation(v9, localRotation, 0);
                  v10 = UnityEngine_GameObject__get_transform(v7, 0);
                  transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
                  if ( transform )
                  {
                    localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
                    if ( v10 )
                    {
                      UnityEngine_Transform__set_localScale(v10, localScale, 0);
                      Component_object = UnityEngine_GameObject__GetComponent_object_(
                                           v7,
                                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
                      {
                        transform = (char *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this,
                                              (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIButtonColor___);
                        if ( !transform )
                          goto LABEL_46;
                        v12 = transform;
                        if ( !transform[124] )
                          transform = (char *)(*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)transform + 408LL))(
                                                transform,
                                                *(_QWORD *)(*(_QWORD *)transform + 416LL));
                        if ( !Component_object )
                          goto LABEL_46;
                        UIButtonColor__set_defaultColor(
                          (UIButtonColor_o *)Component_object,
                          *(UnityEngine_Color_o *)(v12 + 108),
                          v4);
                      }
                      p_mTouch = &this->fields.mTouch;
                      mTouch = this->fields.mTouch;
                      if ( mTouch )
                      {
                        pressed = (UnityEngine_Object_o *)mTouch->fields.pressed;
                        v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        if ( UnityEngine_Object__op_Equality(pressed, v16, 0) )
                        {
                          transform = (char *)*p_mTouch;
                          if ( !*p_mTouch )
                            goto LABEL_46;
                          *((_QWORD *)transform + 8) = v7;
                          sub_1C93A78(
                            (GrandQuestFolderBoardItem_o *)(transform + 64),
                            (int32_t)v7,
                            v17,
                            v18,
                            v19,
                            v20,
                            v21,
                            v22);
                          transform = (char *)*p_mTouch;
                          if ( !*p_mTouch )
                            goto LABEL_46;
                          *((_QWORD *)transform + 9) = v7;
                          sub_1C93A78(
                            (GrandQuestFolderBoardItem_o *)(transform + 72),
                            (int32_t)v7,
                            v23,
                            v24,
                            v25,
                            v26,
                            v27,
                            v28);
                          transform = (char *)*p_mTouch;
                          if ( !*p_mTouch )
                            goto LABEL_46;
                          *((_QWORD *)transform + 10) = v7;
                          sub_1C93A78(
                            (GrandQuestFolderBoardItem_o *)(transform + 80),
                            (int32_t)v7,
                            v29,
                            v30,
                            v31,
                            v32,
                            v33,
                            v34);
                          transform = (char *)*p_mTouch;
                          if ( !*p_mTouch )
                            goto LABEL_46;
                          *((_QWORD *)transform + 7) = v7;
                          sub_1C93A78(
                            (GrandQuestFolderBoardItem_o *)(transform + 56),
                            (int32_t)v7,
                            v35,
                            v36,
                            v37,
                            v38,
                            v39,
                            v40);
                        }
                      }
                      transform = (char *)UnityEngine_GameObject__GetComponent_object_(
                                            v7,
                                            (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIDragDropItem___);
                      if ( transform )
                      {
                        v47 = *p_mTouch;
                        v48 = transform;
                        *((_QWORD *)transform + 17) = *p_mTouch;
                        sub_1C93A78(
                          (GrandQuestFolderBoardItem_o *)(transform + 136),
                          (int32_t)v47,
                          v41,
                          v42,
                          v43,
                          v44,
                          v45,
                          v46);
                        v49 = *(_QWORD *)v48;
                        *((_WORD *)v48 + 64) = 257;
                        (*(void (__fastcall **)(char *, _QWORD))(v49 + 376))(v48, *(_QWORD *)(v49 + 384));
                        (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)v48 + 488LL))(
                          v48,
                          *(_QWORD *)(*(_QWORD *)v48 + 496LL));
                        v56 = UICamera_TypeInfo;
                        if ( !UICamera_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                          v56 = UICamera_TypeInfo;
                        }
                        static_fields = (GrandQuestFolderBoardItem_o *)v56->static_fields;
                        if ( !static_fields[1].klass )
                        {
                          v58 = (GrandQuestFolderBoardItem_c *)*p_mTouch;
                          if ( !v56->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v56);
                            static_fields = (GrandQuestFolderBoardItem_o *)UICamera_TypeInfo->static_fields;
                          }
                          static_fields[1].klass = v58;
                          sub_1C93A78(static_fields + 1, (int32_t)v58, v50, v51, v52, v53, v54, v55);
                        }
                        this->fields.mTouch = 0;
                        sub_1C93A78(
                          (GrandQuestFolderBoardItem_o *)&this->fields.mTouch,
                          0,
                          v50,
                          v51,
                          v52,
                          v53,
                          v54,
                          v55);
                        v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                        v65[0] = 0;
                        v60 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v65);
                        if ( !UICamera_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                        UICamera__Notify(v59, (System_String_o *)StringLiteral_10001/*"OnPress"*/, v60, 0);
                        v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                        v64[0] = 0;
                        v62 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v64);
                        UICamera__Notify(v61, (System_String_o *)StringLiteral_9970/*"OnHover"*/, v62, 0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_46:
    sub_1C93D2C(transform, v4);
  }
}


void UIDragDropItem__StopDragging(UIDragDropItem_o *this, UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  UIDragDropItem_c *klass; // x8

  if ( this->fields.mDragging )
  {
    klass = this->klass;
    this->fields.mDragging = 0;
    ((void (__fastcall *)(UIDragDropItem_o *, UnityEngine_GameObject_o *, const MethodInfo *))klass->vtable._13_OnDragDropRelease.methodPtr)(
      this,
      go,
      klass->vtable._13_OnDragDropRelease.method);
  }
}


void UIDragDropItem__Update(UIDragDropItem_o *this, const MethodInfo *method)
{
  float mDragStartTime; // s8

  if ( this->fields.restriction == 3 && this->fields.mPressed && !this->fields.mDragging )
  {
    mDragStartTime = this->fields.mDragStartTime;
    if ( mDragStartTime < RealTime__get_time(0) )
      ((void (__fastcall *)(UIDragDropItem_o *, const MethodInfo *))this->klass->vtable._8_StartDragging.methodPtr)(
        this,
        this->klass->vtable._8_StartDragging.method);
  }
}


void UIDragDropItem__EnableDragScrollView_d__30___ctor(
        UIDragDropItem__EnableDragScrollView_d__30_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool UIDragDropItem__EnableDragScrollView_d__30__MoveNext(
        UIDragDropItem__EnableDragScrollView_d__30_o *this,
        const MethodInfo *method)
{
  UIDragDropItem__EnableDragScrollView_d__30_o *v2; // x19
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct UIDragDropItem_o *_4__this; // x20
  UnityEngine_Object_o *mDragScrollView; // x19

  v2 = this;
  if ( (byte_4D35080 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    this = (UIDragDropItem__EnableDragScrollView_d__30_o *)sub_1C93AD4(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4D35080 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_13;
    mDragScrollView = (UnityEngine_Object_o *)_4__this->fields.mDragScrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0) )
      return 0;
    this = (UIDragDropItem__EnableDragScrollView_d__30_o *)_4__this->fields.mDragScrollView;
    if ( !this )
LABEL_13:
      sub_1C93D2C(this, method);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C93D20(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v4, 0);
    v2->fields.__2__current = (Il2CppObject *)v4;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.__2__current, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    v2->fields.__1__state = 1;
    return 1;
  }
  return 0;
}


Il2CppObject *UIDragDropItem__EnableDragScrollView_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        UIDragDropItem__EnableDragScrollView_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn UIDragDropItem__EnableDragScrollView_d__30__System_Collections_IEnumerator_Reset(
        UIDragDropItem__EnableDragScrollView_d__30_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_UIDragDropItem__EnableDragScrollView_d__30_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *UIDragDropItem__EnableDragScrollView_d__30__System_Collections_IEnumerator_get_Current(
        UIDragDropItem__EnableDragScrollView_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void UIDragDropItem__EnableDragScrollView_d__30__System_IDisposable_Dispose(
        UIDragDropItem__EnableDragScrollView_d__30_o *this,
        const MethodInfo *method)
{
  ;
}