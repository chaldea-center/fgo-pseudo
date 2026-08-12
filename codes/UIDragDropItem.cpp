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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5974FBA & 1) == 0 )
  {
    sub_2213A60(&UIDragDropItem__EnableDragScrollView_d__30_TypeInfo);
    byte_5974FBA = 1;
  }
  v3 = sub_2213CCC(UIDragDropItem__EnableDragScrollView_d__30_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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

  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_5974FB6 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974FB6 = 1;
  }
  if ( this->fields.interactable
    && this->fields.mDragging
    && UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    mTouch = this->fields.mTouch;
    v8 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v6);
      v8 = UICamera_TypeInfo;
    }
    if ( mTouch == v8->static_fields->currentTouch )
    {
      mRoot = this->fields.mRoot;
      if ( !mRoot )
        sub_2213CDC(0, v6);
      pixelSizeAdjustment = UIRoot__get_pixelSizeAdjustment(mRoot, 0);
      ((void (__fastcall *)(UIDragDropItem_o *, const MethodInfo *, float, float))this->klass->vtable._12_OnDragDropMove.methodPtr)(
        this,
        this->klass->vtable._12_OnDragDropMove.method,
        x * pixelSizeAdjustment,
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
    sub_2213CDC(this, method);
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
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x19
  UnityEngine_Object_o *mButton; // x21
  UnityEngine_Transform_o *v8; // x1
  UnityEngine_Collider_o *transform; // x0
  UnityEngine_Object_o *mCollider; // x21
  UnityEngine_Object_o *mCollider2D; // x21
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x21
  UnityEngine_Transform_o *mTrans; // x20
  UnityEngine_Object_o *monitor; // x22
  struct UnityEngine_Transform_o *parent; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  UnityEngine_Transform_o *mParent; // x20
  Il2CppObject *v25; // x0
  struct UIGrid_o **p_mGrid; // x20
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  Il2CppObject *v33; // x0
  struct UITable_o **p_mTable; // x21
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  __int64 v41; // x1
  UnityEngine_Object_o *mDragScrollView; // x22
  const MethodInfo *v43; // x1
  System_Collections_IEnumerator_o *v44; // x0
  __int64 v45; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  __int64 v47; // x1
  UnityEngine_Object_o *v48; // x22
  UnityEngine_Object_o *v49; // x21
  UnityEngine_Vector3_o v51; // 0:kr14_12.12
  unsigned __int64 localPosition; // 0:s0.4,4:s1.4

  if ( (byte_5974FB9 & 1) == 0 )
  {
    sub_2213A60(&Method_NGUITools_FindInParents_UIDragDropContainer___);
    sub_2213A60(&Method_NGUITools_FindInParents_UIGrid____91798288);
    sub_2213A60(&Method_NGUITools_FindInParents_UITable____91798376);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974FB9 = 1;
  }
  if ( !this->fields.cloneOnDrag )
  {
    mButton = (UnityEngine_Object_o *)this->fields.mButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, surface);
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
        if ( UnityEngine_Object__op_Inequality(mCollider2D, 0, 0) )
        {
          transform = (UnityEngine_Collider_o *)this->fields.mCollider2D;
          if ( !transform )
            goto LABEL_63;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 1, 0);
        }
      }
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    v13 = 0;
    if ( UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)surface, 0) )
    {
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v12);
      v13 = (UnityEngine_Object_o *)NGUITools__FindInParents_object_(
                                      surface,
                                      (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UIDragDropContainer___);
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    transform = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(v13, 0, 0);
    mTrans = this->fields.mTrans;
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v13 )
        goto LABEL_63;
      monitor = (UnityEngine_Object_o *)v13[1].monitor;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      transform = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(monitor, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        v8 = (UnityEngine_Transform_o *)v13[1].monitor;
      }
      else
      {
        transform = (UnityEngine_Collider_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v13, 0);
        v8 = (UnityEngine_Transform_o *)transform;
      }
      if ( !mTrans )
        goto LABEL_63;
      UnityEngine_Transform__set_parent(mTrans, v8, 0);
      transform = (UnityEngine_Collider_o *)this->fields.mTrans;
      if ( !transform )
        goto LABEL_63;
      localPosition = (unsigned __int64)UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)transform,
                                          0);
      transform = (UnityEngine_Collider_o *)this->fields.mTrans;
      if ( !transform )
        goto LABEL_63;
      *(_QWORD *)&v51.fields.x = localPosition;
      v51.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v51, 0);
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mParent,
      (int32_t)parent,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    mParent = this->fields.mParent;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v23);
    v25 = NGUITools__FindInParents_object__59706528(
            mParent,
            (const MethodInfo_38F0CA0 *)Method_NGUITools_FindInParents_UIGrid____91798288);
    this->fields.mGrid = (struct UIGrid_o *)v25;
    p_mGrid = &this->fields.mGrid;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mGrid, (int32_t)v25, v27, v28, v29, v30, v31, v32);
    v33 = NGUITools__FindInParents_object__59706528(
            this->fields.mParent,
            (const MethodInfo_38F0CA0 *)Method_NGUITools_FindInParents_UITable____91798376);
    this->fields.mTable = (struct UITable_o *)v33;
    p_mTable = &this->fields.mTable;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mTable, (int32_t)v33, v35, v36, v37, v38, v39, v40);
    mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
    if ( UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0) )
    {
      v44 = UIDragDropItem__EnableDragScrollView(this, v43);
      UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v44, 0);
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v45);
    NGUITools__MarkParentAsChanged(gameObject, 0);
    v48 = (UnityEngine_Object_o *)*p_mTable;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
    if ( UnityEngine_Object__op_Inequality(v48, 0, 0) )
    {
      transform = (UnityEngine_Collider_o *)*p_mTable;
      if ( !*p_mTable )
        goto LABEL_63;
      UITable__set_repositionNow((UITable_o *)transform, 1, 0);
    }
    v49 = (UnityEngine_Object_o *)*p_mGrid;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( !UnityEngine_Object__op_Inequality(v49, 0, 0) )
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
    sub_2213CDC(transform, v8);
  }
  v6 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v5);
  NGUITools__Destroy(v6, 0);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  UnityEngine_Transform_o *mParent; // x20
  Il2CppObject *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  Il2CppObject *v25; // x0
  struct UIGrid_o **p_mGrid; // x20
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  Il2CppObject *v33; // x0
  struct UITable_o **p_mTable; // x21
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  __int64 v41; // x1
  UnityEngine_Object_o *root; // x22
  __int64 v43; // x1
  Il2CppObject *Component_object; // x22
  __int64 v45; // x1
  Il2CppObject *v46; // x22
  __int64 v47; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v49; // x1
  UnityEngine_Object_o *v50; // x19
  UnityEngine_Object_o *v51; // x19
  UnityEngine_Vector3_o v53; // 0:kr14_12.12
  unsigned __int64 localPosition; // 0:s0.4,4:s1.4

  if ( (byte_5974FB8 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SpringPosition___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_TweenPosition___);
    sub_2213A60(&Method_NGUITools_FindInParents_UIGrid____91798288);
    sub_2213A60(&Method_NGUITools_FindInParents_UIRoot____91798344);
    sub_2213A60(&Method_NGUITools_FindInParents_UITable____91798376);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIDragDropRoot_TypeInfo);
    byte_5974FB8 = 1;
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0) )
  {
    mTrans = (UnityEngine_Behaviour_o *)this->fields.mDragScrollView;
    if ( !mTrans )
      goto LABEL_56;
    UnityEngine_Behaviour__set_enabled(mTrans, 0, 0);
  }
  mButton = (UnityEngine_Object_o *)this->fields.mButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
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
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mParent, (int32_t)parent, v10, v11, v12, v13, v14, v15);
  mParent = this->fields.mParent;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v16);
  v18 = NGUITools__FindInParents_object__59706528(
          mParent,
          (const MethodInfo_38F0CA0 *)Method_NGUITools_FindInParents_UIRoot____91798344);
  this->fields.mRoot = (struct UIRoot_o *)v18;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mRoot, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = NGUITools__FindInParents_object__59706528(
          this->fields.mParent,
          (const MethodInfo_38F0CA0 *)Method_NGUITools_FindInParents_UIGrid____91798288);
  this->fields.mGrid = (struct UIGrid_o *)v25;
  p_mGrid = &this->fields.mGrid;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mGrid, (int32_t)v25, v27, v28, v29, v30, v31, v32);
  v33 = NGUITools__FindInParents_object__59706528(
          this->fields.mParent,
          (const MethodInfo_38F0CA0 *)Method_NGUITools_FindInParents_UITable____91798376);
  this->fields.mTable = (struct UITable_o *)v33;
  p_mTable = &this->fields.mTable;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mTable, (int32_t)v33, v35, v36, v37, v38, v39, v40);
  root = (UnityEngine_Object_o *)UIDragDropRoot_TypeInfo->static_fields->root;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
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
    sub_2213CDC(mTrans, v4);
  }
  *(_QWORD *)&v53.fields.x = localPosition;
  v53.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)mTrans, v53, 0);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_TweenPosition___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
  mTrans = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)mTrans & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_56;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
  }
  v46 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SpringPosition___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
  mTrans = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v46, 0, 0);
  if ( ((unsigned __int8)mTrans & 1) != 0 )
  {
    if ( !v46 )
      goto LABEL_56;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v46, 0, 0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v47);
  NGUITools__MarkParentAsChanged(gameObject, 0);
  v50 = (UnityEngine_Object_o *)*p_mTable;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
  if ( UnityEngine_Object__op_Inequality(v50, 0, 0) )
  {
    mTrans = (UnityEngine_Behaviour_o *)*p_mTable;
    if ( !*p_mTable )
      goto LABEL_56;
    UITable__set_repositionNow((UITable_o *)mTrans, 1, 0);
  }
  v51 = (UnityEngine_Object_o *)*p_mGrid;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(v51, 0, 0) )
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
  __int64 v3; // x1
  long double v4; // q0
  struct UICamera_MouseOrTouch_o *mTouch; // x21
  UICamera_c *v6; // x0
  UICamera_c *v7; // x8
  UIDragDropItem_c *klass; // x9

  if ( (byte_5974FB7 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974FB7 = 1;
  }
  if ( this->fields.interactable && UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    mTouch = this->fields.mTouch;
    v6 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      *(__n128 *)&v4 = j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v3);
      v6 = UICamera_TypeInfo;
    }
    if ( mTouch == v6->static_fields->currentTouch )
    {
      if ( !*(&v6->_2.cctor_finished + 1) )
        *(__n128 *)&v4 = j_il2cpp_runtime_class_init_0(v6, v3);
      if ( this->fields.mDragging )
      {
        v7 = UICamera_TypeInfo;
        klass = this->klass;
        this->fields.mDragging = 0;
        ((void (__fastcall *)(UIDragDropItem_o *, struct UnityEngine_GameObject_o *, const MethodInfo *, long double))klass->vtable._13_OnDragDropRelease.methodPtr)(
          this,
          v7->static_fields->hoveredObject,
          klass->vtable._13_OnDragDropRelease.method,
          v4);
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

  if ( (byte_5974FB4 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974FB4 = 1;
  }
  if ( !this->fields.interactable || !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    return;
  mTouch = this->fields.mTouch;
  v5 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v3);
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
      sub_2213CDC(v5, v3);
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


// local variable allocation has failed, the output may be wrong!
void UIDragDropItem__OnPress(UIDragDropItem_o *this, bool isPressed, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UICamera_c *v10; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x1
  struct UICamera_MouseOrTouch_o **p_mTouch; // x19
  float time; // s0
  float v14; // s1

  if ( (byte_5974FB3 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5974FB3 = 1;
  }
  if ( this->fields.interactable )
  {
    if ( isPressed )
    {
      v10 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, isPressed);
        v10 = UICamera_TypeInfo;
      }
      currentTouch = v10->static_fields->currentTouch;
      this->fields.mTouch = currentTouch;
      p_mTouch = &this->fields.mTouch;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)p_mTouch,
        (int32_t)currentTouch,
        (System_String_o *)method,
        v3,
        v4,
        v5,
        v6,
        v7);
      time = RealTime__get_time(0);
      v14 = *((float *)p_mTouch - 24);
      *((_BYTE *)p_mTouch - 8) = 1;
      *((float *)p_mTouch - 6) = time + v14;
    }
    else
    {
      this->fields.mTouch = 0;
      this->fields.mPressed = 0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.mTouch,
        0,
        (System_String_o *)method,
        v3,
        v4,
        v5,
        v6,
        v7);
    }
  }
}


void UIDragDropItem__Start(UIDragDropItem_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  Il2CppObject *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  Il2CppObject *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  Il2CppObject *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_5974FB2 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIDragScrollView___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Collider2D___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    byte_5974FB2 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5, v6, v7, v8, v9);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Collider___),
        this->fields.mCollider = (struct UnityEngine_Collider_o *)Component_object,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mCollider,
          (int32_t)Component_object,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(gameObject, v11);
  }
  v19 = UnityEngine_GameObject__GetComponent_object_(
          gameObject,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Collider2D___);
  this->fields.mCollider2D = (struct UnityEngine_Collider2D_o *)v19;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mCollider2D, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIButton___);
  this->fields.mButton = (struct UIButton_o *)v26;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mButton, (int32_t)v26, v27, v28, v29, v30, v31, v32);
  v33 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIDragScrollView___);
  this->fields.mDragScrollView = (struct UIDragScrollView_o *)v33;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mDragScrollView,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
}


void UIDragDropItem__StartDragging(UIDragDropItem_o *this, const MethodInfo *method)
{
  char *transform; // x0
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x21
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *v9; // x21
  UnityEngine_Transform_o *v10; // x21
  UnityEngine_Transform_o *v11; // x21
  __int64 v12; // x1
  Il2CppObject *Component_object; // x21
  char *v14; // x22
  struct UICamera_MouseOrTouch_o *mTouch; // x8
  struct UICamera_MouseOrTouch_o **p_mTouch; // x21
  UnityEngine_Object_o *pressed; // x22
  __int64 v18; // x1
  UnityEngine_Object_o *v19; // x23
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct UICamera_MouseOrTouch_o *v50; // x1
  char *v51; // x20
  __int64 v52; // x9
  __int64 v53; // x1
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  UICamera_c *v60; // x0
  struct UICamera_StaticFields *static_fields; // x8
  struct UICamera_MouseOrTouch_o *v62; // x20
  UnityEngine_GameObject_o *v63; // x20
  __int64 v64; // x1
  Il2CppObject *v65; // x21
  UnityEngine_GameObject_o *v66; // x19
  Il2CppObject *v67; // x0
  const MethodInfo *v68; // x1
  Il2CppMethodPointer methodPtr; // x2
  char v70[4]; // [xsp+8h] [xbp-38h] BYREF
  char v71[4]; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974FB5 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIButtonColor___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIDragDropItem___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&StringLiteral_10316/*"OnHover"*/);
    sub_2213A60(&StringLiteral_10348/*"OnPress"*/);
    byte_5974FB5 = 1;
  }
  if ( this->fields.interactable && !this->fields.mDragging )
  {
    if ( !this->fields.cloneOnDrag )
    {
      methodPtr = this->klass->vtable._11_OnDragDropStart.methodPtr;
      v68 = this->klass->vtable._11_OnDragDropStart.method;
      this->fields.mDragging = 1;
      ((void (__fastcall *)(UIDragDropItem_o *, const MethodInfo *))methodPtr)(this, v68);
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
        v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v6);
        transform = (char *)NGUITools__AddChild_56415424(gameObject, v7, 0);
        if ( transform )
        {
          v8 = (UnityEngine_GameObject_o *)transform;
          v9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
          transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
          if ( transform )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
            if ( v9 )
            {
              UnityEngine_Transform__set_localPosition(v9, localPosition, 0);
              v10 = UnityEngine_GameObject__get_transform(v8, 0);
              transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
              if ( transform )
              {
                localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)transform, 0);
                if ( v10 )
                {
                  UnityEngine_Transform__set_localRotation(v10, localRotation, 0);
                  v11 = UnityEngine_GameObject__get_transform(v8, 0);
                  transform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
                  if ( transform )
                  {
                    localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
                    if ( v11 )
                    {
                      UnityEngine_Transform__set_localScale(v11, localScale, 0);
                      Component_object = UnityEngine_GameObject__GetComponent_object_(
                                           v8,
                                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIButtonColor___);
                      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
                      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
                      {
                        transform = (char *)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)this,
                                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIButtonColor___);
                        if ( !transform )
                          goto LABEL_46;
                        v14 = transform;
                        if ( !transform[124] )
                          transform = (char *)(*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)transform + 408LL))(
                                                transform,
                                                *(_QWORD *)(*(_QWORD *)transform + 416LL));
                        if ( !Component_object )
                          goto LABEL_46;
                        UIButtonColor__set_defaultColor(
                          (UIButtonColor_o *)Component_object,
                          *(UnityEngine_Color_o *)(v14 + 108),
                          v4);
                      }
                      p_mTouch = &this->fields.mTouch;
                      mTouch = this->fields.mTouch;
                      if ( mTouch )
                      {
                        pressed = (UnityEngine_Object_o *)mTouch->fields.pressed;
                        v19 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
                        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
                        if ( UnityEngine_Object__op_Equality(pressed, v19, 0) )
                        {
                          transform = (char *)*p_mTouch;
                          if ( !*p_mTouch )
                            goto LABEL_46;
                          *((_QWORD *)transform + 8) = v8;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)(transform + 64),
                            (int32_t)v8,
                            v20,
                            v21,
                            v22,
                            v23,
                            v24,
                            v25);
                          transform = (char *)*p_mTouch;
                          if ( !*p_mTouch )
                            goto LABEL_46;
                          *((_QWORD *)transform + 9) = v8;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)(transform + 72),
                            (int32_t)v8,
                            v26,
                            v27,
                            v28,
                            v29,
                            v30,
                            v31);
                          transform = (char *)*p_mTouch;
                          if ( !*p_mTouch )
                            goto LABEL_46;
                          *((_QWORD *)transform + 10) = v8;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)(transform + 80),
                            (int32_t)v8,
                            v32,
                            v33,
                            v34,
                            v35,
                            v36,
                            v37);
                          transform = (char *)*p_mTouch;
                          if ( !*p_mTouch )
                            goto LABEL_46;
                          *((_QWORD *)transform + 7) = v8;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)(transform + 56),
                            (int32_t)v8,
                            v38,
                            v39,
                            v40,
                            v41,
                            v42,
                            v43);
                        }
                      }
                      transform = (char *)UnityEngine_GameObject__GetComponent_object_(
                                            v8,
                                            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIDragDropItem___);
                      if ( transform )
                      {
                        v50 = *p_mTouch;
                        v51 = transform;
                        *((_QWORD *)transform + 17) = *p_mTouch;
                        sub_2213A04(
                          (MissionNaviTransitionBoardItem_o *)(transform + 136),
                          (int32_t)v50,
                          v44,
                          v45,
                          v46,
                          v47,
                          v48,
                          v49);
                        v52 = *(_QWORD *)v51;
                        *((_WORD *)v51 + 64) = 257;
                        (*(void (__fastcall **)(char *, _QWORD))(v52 + 376))(v51, *(_QWORD *)(v52 + 384));
                        (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)v51 + 488LL))(
                          v51,
                          *(_QWORD *)(*(_QWORD *)v51 + 496LL));
                        v60 = UICamera_TypeInfo;
                        if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
                        {
                          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v53);
                          v60 = UICamera_TypeInfo;
                        }
                        static_fields = v60->static_fields;
                        if ( !static_fields->currentTouch )
                        {
                          v62 = *p_mTouch;
                          if ( !*(&v60->_2.cctor_finished + 1) )
                          {
                            j_il2cpp_runtime_class_init_0(v60, v53);
                            static_fields = UICamera_TypeInfo->static_fields;
                          }
                          static_fields->currentTouch = v62;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)&static_fields->currentTouch,
                            (int32_t)v62,
                            v54,
                            v55,
                            v56,
                            v57,
                            v58,
                            v59);
                        }
                        this->fields.mTouch = 0;
                        sub_2213A04(
                          (MissionNaviTransitionBoardItem_o *)&this->fields.mTouch,
                          0,
                          v54,
                          v55,
                          v56,
                          v57,
                          v58,
                          v59);
                        v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                        v71[0] = 0;
                        v65 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984328, v71);
                        if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v64);
                        UICamera__Notify(v63, (System_String_o *)StringLiteral_10348/*"OnPress"*/, v65, 0);
                        v66 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                        v70[0] = 0;
                        v67 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984328, v70);
                        UICamera__Notify(v66, (System_String_o *)StringLiteral_10316/*"OnHover"*/, v67, 0);
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
    sub_2213CDC(transform, v4);
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
  int32_t _1__state; // w21
  struct UIDragDropItem_o *_4__this; // x20
  UnityEngine_Object_o *mDragScrollView; // x19
  UnityEngine_WaitForEndOfFrame_o *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v2 = this;
  if ( (byte_5974FBB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (UIDragDropItem__EnableDragScrollView_d__30_o *)sub_2213A60(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_5974FBB = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v6, 0);
    v2->fields.__2__current = (Il2CppObject *)v6;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    v2->fields.__1__state = 1;
    return _1__state == 0;
  }
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_13;
    mDragScrollView = (UnityEngine_Object_o *)_4__this->fields.mDragScrollView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0) )
    {
      this = (UIDragDropItem__EnableDragScrollView_d__30_o *)_4__this->fields.mDragScrollView;
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
        return _1__state == 0;
      }
LABEL_13:
      sub_2213CDC(this, method);
    }
  }
  return _1__state == 0;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_UIDragDropItem__EnableDragScrollView_d__30_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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