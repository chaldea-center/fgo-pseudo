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
  const MethodInfo *v5; // x3

  if ( (byte_4C5B375 & 1) == 0 )
  {
    sub_1C3E564(&UIDragDropItem__EnableDragScrollView_d__30_TypeInfo);
    byte_4C5B375 = 1;
  }
  v3 = sub_1C3E7B0(UIDragDropItem__EnableDragScrollView_d__30_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  if ( (byte_4C5B371 & 1) == 0 )
  {
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B371 = 1;
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
        sub_1C3E7C0(0, v6);
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
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  mTrans = this->fields.mTrans;
  if ( !mTrans )
    sub_1C3E7C0(this, method);
  y = delta.fields.y;
  x = delta.fields.x;
  localPosition = UnityEngine_Transform__get_localPosition(this->fields.mTrans, 0);
  localPosition.fields.x = x + localPosition.fields.x;
  localPosition.fields.y = y + localPosition.fields.y;
  localPosition.fields.z = localPosition.fields.z + 0.0;
  UnityEngine_Transform__set_localPosition(mTrans, localPosition, 0);
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
  int v14; // s2
  struct UnityEngine_Transform_o *parent; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_Transform_o *mParent; // x20
  Il2CppObject *v19; // x0
  struct UIGrid_o **p_mGrid; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *v23; // x0
  struct UITable_o **p_mTable; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  UnityEngine_Object_o *mDragScrollView; // x22
  const MethodInfo *v28; // x1
  System_Collections_IEnumerator_o *v29; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_Object_o *v31; // x22
  UnityEngine_Object_o *v32; // x21
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5B374 & 1) == 0 )
  {
    sub_1C3E564(&Method_NGUITools_FindInParents_UIDragDropContainer___);
    sub_1C3E564(&Method_NGUITools_FindInParents_UIGrid____78269976);
    sub_1C3E564(&Method_NGUITools_FindInParents_UITable____78270064);
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B374 = 1;
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
                                      (const MethodInfo_3183E10 *)Method_NGUITools_FindInParents_UIDragDropContainer___);
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
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
      transform = (UnityEngine_Collider_o *)this->fields.mTrans;
      if ( !transform )
        goto LABEL_63;
      v14 = 0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, localPosition, 0);
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
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mParent, (int32_t)parent, v16, v17);
    mParent = this->fields.mParent;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    v19 = NGUITools__FindInParents_object__51920744(
            mParent,
            (const MethodInfo_3183F68 *)Method_NGUITools_FindInParents_UIGrid____78269976);
    this->fields.mGrid = (struct UIGrid_o *)v19;
    p_mGrid = &this->fields.mGrid;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mGrid, (int32_t)v19, v21, v22);
    v23 = NGUITools__FindInParents_object__51920744(
            this->fields.mParent,
            (const MethodInfo_3183F68 *)Method_NGUITools_FindInParents_UITable____78270064);
    this->fields.mTable = (struct UITable_o *)v23;
    p_mTable = &this->fields.mTable;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mTable, (int32_t)v23, v25, v26);
    mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0) )
    {
      v29 = UIDragDropItem__EnableDragScrollView(this, v28);
      UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, v29, 0);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__MarkParentAsChanged(gameObject, 0);
    v31 = (UnityEngine_Object_o *)*p_mTable;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v31, 0, 0) )
    {
      transform = (UnityEngine_Collider_o *)*p_mTable;
      if ( !*p_mTable )
        goto LABEL_63;
      UITable__set_repositionNow((UITable_o *)transform, 1, 0);
    }
    v32 = (UnityEngine_Object_o *)*p_mGrid;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v32, 0, 0) )
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
    sub_1C3E7C0(transform, v7);
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
  const MethodInfo *v11; // x3
  UnityEngine_Transform_o *mParent; // x20
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x0
  struct UIGrid_o **p_mGrid; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x0
  struct UITable_o **p_mTable; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  UnityEngine_Object_o *root; // x22
  int v25; // s2
  Il2CppObject *Component_object; // x22
  Il2CppObject *v27; // x22
  UnityEngine_GameObject_o *gameObject; // x19
  UnityEngine_Object_o *v29; // x19
  UnityEngine_Object_o *v30; // x19
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5B373 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_SpringPosition___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    sub_1C3E564(&Method_NGUITools_FindInParents_UIGrid____78269976);
    sub_1C3E564(&Method_NGUITools_FindInParents_UIRoot____78270032);
    sub_1C3E564(&Method_NGUITools_FindInParents_UITable____78270064);
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UIDragDropRoot_TypeInfo);
    byte_4C5B373 = 1;
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mParent, (int32_t)parent, v10, v11);
  mParent = this->fields.mParent;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v13 = NGUITools__FindInParents_object__51920744(
          mParent,
          (const MethodInfo_3183F68 *)Method_NGUITools_FindInParents_UIRoot____78270032);
  this->fields.mRoot = (struct UIRoot_o *)v13;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mRoot, (int32_t)v13, v14, v15);
  v16 = NGUITools__FindInParents_object__51920744(
          this->fields.mParent,
          (const MethodInfo_3183F68 *)Method_NGUITools_FindInParents_UIGrid____78269976);
  this->fields.mGrid = (struct UIGrid_o *)v16;
  p_mGrid = &this->fields.mGrid;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mGrid, (int32_t)v16, v18, v19);
  v20 = NGUITools__FindInParents_object__51920744(
          this->fields.mParent,
          (const MethodInfo_3183F68 *)Method_NGUITools_FindInParents_UITable____78270064);
  this->fields.mTable = (struct UITable_o *)v20;
  p_mTable = &this->fields.mTable;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mTable, (int32_t)v20, v22, v23);
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
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)mTrans, 0),
        (mTrans = (UnityEngine_Behaviour_o *)this->fields.mTrans) == 0) )
  {
LABEL_56:
    sub_1C3E7C0(mTrans, v4);
  }
  v25 = 0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)mTrans, localPosition, 0);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mTrans = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)mTrans & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_56;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
  }
  v27 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_SpringPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mTrans = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0, 0);
  if ( ((unsigned __int8)mTrans & 1) != 0 )
  {
    if ( !v27 )
      goto LABEL_56;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v27, 0, 0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__MarkParentAsChanged(gameObject, 0);
  v29 = (UnityEngine_Object_o *)*p_mTable;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v29, 0, 0) )
  {
    mTrans = (UnityEngine_Behaviour_o *)*p_mTable;
    if ( !*p_mTable )
      goto LABEL_56;
    UITable__set_repositionNow((UITable_o *)mTrans, 1, 0);
  }
  v30 = (UnityEngine_Object_o *)*p_mGrid;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v30, 0, 0) )
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

  if ( (byte_4C5B372 & 1) == 0 )
  {
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B372 = 1;
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

  if ( (byte_4C5B36F & 1) == 0 )
  {
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B36F = 1;
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
      sub_1C3E7C0(v5, v3);
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
  const MethodInfo *v3; // x3
  UICamera_c *v6; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x1
  struct UICamera_MouseOrTouch_o **p_mTouch; // x19
  float time; // s0
  float v10; // s1
  struct UICamera_MouseOrTouch_o **v11; // x19

  if ( (byte_4C5B36E & 1) == 0 )
  {
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B36E = 1;
  }
  if ( this->fields.interactable )
  {
    if ( isPressed )
    {
      v6 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v6 = UICamera_TypeInfo;
      }
      currentTouch = v6->static_fields->currentTouch;
      this->fields.mTouch = currentTouch;
      p_mTouch = &this->fields.mTouch;
      sub_1C3E508((CGThumbnailListItem_o *)p_mTouch, (int32_t)currentTouch, (int32_t)method, v3);
      time = RealTime__get_time(0);
      v10 = *((float *)p_mTouch - 24);
      *((_BYTE *)p_mTouch - 8) = 1;
      *((float *)p_mTouch - 6) = time + v10;
    }
    else
    {
      this->fields.mTouch = 0;
      v11 = &this->fields.mTouch;
      *((_BYTE *)v11 - 8) = 0;
      sub_1C3E508((CGThumbnailListItem_o *)v11, 0, (int32_t)method, v3);
    }
  }
}


void UIDragDropItem__Start(UIDragDropItem_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C5B36D & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_Collider2D___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    byte_4C5B36D = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_Collider___),
        this->fields.mCollider = (struct UnityEngine_Collider_o *)Component_object,
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mCollider, (int32_t)Component_object, v9, v10),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C3E7C0(gameObject, v7);
  }
  v11 = UnityEngine_GameObject__GetComponent_object_(
          gameObject,
          (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_Collider2D___);
  this->fields.mCollider2D = (struct UnityEngine_Collider2D_o *)v11;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mCollider2D, (int32_t)v11, v12, v13);
  v14 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIButton___);
  this->fields.mButton = (struct UIButton_o *)v14;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mButton, (int32_t)v14, v15, v16);
  v17 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___);
  this->fields.mDragScrollView = (struct UIDragScrollView_o *)v17;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mDragScrollView, (int32_t)v17, v18, v19);
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
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct UICamera_MouseOrTouch_o *v27; // x1
  char *v28; // x20
  __int64 v29; // x8
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  UICamera_c *v32; // x0
  struct UICamera_StaticFields *static_fields; // x8
  struct UICamera_MouseOrTouch_o *v34; // x20
  UnityEngine_GameObject_o *v35; // x20
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  Il2CppObject *v42; // x21
  UnityEngine_GameObject_o *v43; // x19
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  __int64 v47; // x5
  __int64 v48; // x6
  __int64 v49; // x7
  Il2CppObject *v50; // x0
  UIDragDropItem_c *klass; // x8
  char v52[4]; // [xsp+8h] [xbp-38h] BYREF
  char v53[4]; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C5B370 & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIButtonColor___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UIDragDropItem___);
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    sub_1C3E564(&StringLiteral_9914/*"OnHover"*/);
    sub_1C3E564(&StringLiteral_9945/*"OnPress"*/);
    byte_4C5B370 = 1;
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
        transform = (char *)NGUITools__AddChild_49422768(gameObject, v6, 0);
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
                                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
                      {
                        transform = (char *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this,
                                              (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIButtonColor___);
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
                          sub_1C3E508((CGThumbnailListItem_o *)(transform + 64), (int32_t)v7, v17, v18);
                          transform = (char *)*p_mTouch;
                          if ( !*p_mTouch )
                            goto LABEL_46;
                          *((_QWORD *)transform + 9) = v7;
                          sub_1C3E508((CGThumbnailListItem_o *)(transform + 72), (int32_t)v7, v19, v20);
                          transform = (char *)*p_mTouch;
                          if ( !*p_mTouch )
                            goto LABEL_46;
                          *((_QWORD *)transform + 10) = v7;
                          sub_1C3E508((CGThumbnailListItem_o *)(transform + 80), (int32_t)v7, v21, v22);
                          transform = (char *)*p_mTouch;
                          if ( !*p_mTouch )
                            goto LABEL_46;
                          *((_QWORD *)transform + 7) = v7;
                          sub_1C3E508((CGThumbnailListItem_o *)(transform + 56), (int32_t)v7, v23, v24);
                        }
                      }
                      transform = (char *)UnityEngine_GameObject__GetComponent_object_(
                                            v7,
                                            (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIDragDropItem___);
                      if ( transform )
                      {
                        v27 = *p_mTouch;
                        v28 = transform;
                        *((_QWORD *)transform + 17) = *p_mTouch;
                        sub_1C3E508((CGThumbnailListItem_o *)(transform + 136), (int32_t)v27, v25, v26);
                        v29 = *(_QWORD *)v28;
                        *((_WORD *)v28 + 64) = 257;
                        (*(void (__fastcall **)(char *, _QWORD))(v29 + 376))(v28, *(_QWORD *)(v29 + 384));
                        (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)v28 + 488LL))(
                          v28,
                          *(_QWORD *)(*(_QWORD *)v28 + 496LL));
                        v32 = UICamera_TypeInfo;
                        if ( !UICamera_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                          v32 = UICamera_TypeInfo;
                        }
                        static_fields = v32->static_fields;
                        if ( !static_fields->currentTouch )
                        {
                          v34 = *p_mTouch;
                          if ( !v32->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v32);
                            static_fields = UICamera_TypeInfo->static_fields;
                          }
                          static_fields->currentTouch = v34;
                          sub_1C3E508((CGThumbnailListItem_o *)&static_fields->currentTouch, (int32_t)v34, v30, v31);
                        }
                        this->fields.mTouch = 0;
                        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mTouch, 0, v30, v31);
                        v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                        v53[0] = 0;
                        v42 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v53, v36, v37, v38, v39, v40, v41);
                        if ( !UICamera_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
                        UICamera__Notify(v35, (System_String_o *)StringLiteral_9945/*"OnPress"*/, v42, 0);
                        v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                        v52[0] = 0;
                        v50 = (Il2CppObject *)j_il2cpp_value_box_0(bool_TypeInfo, v52, v44, v45, v46, v47, v48, v49);
                        UICamera__Notify(v43, (System_String_o *)StringLiteral_9914/*"OnHover"*/, v50, 0);
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
    sub_1C3E7C0(transform, v4);
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
  const MethodInfo *v6; // x3
  bool result; // w0
  struct UIDragDropItem_o *_4__this; // x20
  UnityEngine_Object_o *mDragScrollView; // x19

  v2 = this;
  if ( (byte_4C5B376 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    this = (UIDragDropItem__EnableDragScrollView_d__30_o *)sub_1C3E564(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4C5B376 = 1;
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
      sub_1C3E7C0(this, method);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v4, 0);
    v2->fields.__2__current = (Il2CppObject *)v4;
    sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.__2__current, (int32_t)v4, v5, v6);
    result = 1;
    v2->fields.__1__state = 1;
    return result;
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_UIDragDropItem__EnableDragScrollView_d__30_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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