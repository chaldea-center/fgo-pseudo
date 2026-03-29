void SvtEqCombineUIDragDropListViewItem___ctor(SvtEqCombineUIDragDropListViewItem_o *this, const MethodInfo *method)
{
  UIDragDropListViewItem___ctor((UIDragDropListViewItem_o *)this, 0);
}


void SvtEqCombineUIDragDropListViewItem__DragEnd(SvtEqCombineUIDragDropListViewItem_o *this, const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x21
  SvtEqCombineUIDragDropListViewItem_o *v3; // x19
  SvtEqCombineListViewObject_o *mListViewObject; // x20
  __int64 naturalAligment; // x9
  __int64 v6; // x9
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v9; // x8
  UnityEngine_Object_o *scrollView; // x19
  const MethodInfo *v11; // x2

  v3 = this;
  if ( (byte_4D2A957 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SvtEqCombineListViewManager_TypeInfo);
    this = (SvtEqCombineUIDragDropListViewItem_o *)sub_1C93AD4(&SvtEqCombineListViewObject_TypeInfo);
    byte_4D2A957 = 1;
  }
  mListViewObject = (SvtEqCombineListViewObject_o *)v3->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_22;
  naturalAligment = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_1C940C8(v3->fields.mListViewObject);
    goto LABEL_20;
  }
  manager = mListViewObject->fields.manager;
  if ( !manager )
  {
LABEL_21:
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0, 0);
    SvtEqCombineListViewObject__Init_32021648(mListViewObject, 4, v11);
    goto LABEL_22;
  }
  v6 = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)v6
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
LABEL_20:
    sub_1C940C8(manager);
    goto LABEL_21;
  }
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0, 0);
  SvtEqCombineListViewObject__Init_32021648(mListViewObject, 4, v7);
  ((void (__fastcall *)(struct ListViewManager_o *, const MethodInfo *))manager->klass->vtable._9_ItemDragEnd.methodPtr)(
    manager,
    manager->klass->vtable._9_ItemDragEnd.method);
  v3->fields.dragSurface = 0;
  v3->fields.isDrag = 0;
  sub_1C93A78(&v3->fields.dragSurface, 0);
  mDragScrollView = (UnityEngine_Object_o *)v3->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SvtEqCombineUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v3->fields.mDragScrollView;
    if ( !v9 )
      goto LABEL_22;
    scrollView = (UnityEngine_Object_o *)v9->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (SvtEqCombineUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( scrollView )
      {
        UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0);
        return;
      }
LABEL_22:
      sub_1C93D2C(this, method);
    }
  }
}


void SvtEqCombineUIDragDropListViewItem__OnDragDropMove(
        SvtEqCombineUIDragDropListViewItem_o *this,
        UnityEngine_Vector3_o delta,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *dragObject; // x20
  __int64 v8; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *v10; // x19
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  z = delta.fields.z;
  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_4D2A954 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2A954 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragObject, 0, 0) )
  {
    transform = this->fields.dragObject;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0)) == 0 )
    {
      sub_1C93D2C(transform, v8);
    }
    v10 = (UnityEngine_Transform_o *)transform;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    v12.fields.y = y + localPosition.fields.y;
    v12.fields.z = z + localPosition.fields.z;
    v12.fields.x = x + localPosition.fields.x;
    UnityEngine_Transform__set_localPosition(v10, v12, 0);
  }
}


void SvtEqCombineUIDragDropListViewItem__OnDragDropRelease(
        SvtEqCombineUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x0
  __int64 naturalAligment; // x9
  __int64 v6; // x9
  const MethodInfo *v7; // x1

  if ( (byte_4D2A956 & 1) == 0 )
  {
    sub_1C93AD4(&SvtEqCombineListViewManager_TypeInfo);
    sub_1C93AD4(&SvtEqCombineListViewObject_TypeInfo);
    byte_4D2A956 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_1C93D2C(mListViewObject, surface);
  surface = (UnityEngine_GameObject_o *)SvtEqCombineListViewObject_TypeInfo;
  naturalAligment = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    goto LABEL_10;
  }
  mListViewObject = (struct ListViewObject_o *)mListViewObject->fields.manager;
  if ( !mListViewObject )
    goto LABEL_11;
  v6 = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)v6
    || (SvtEqCombineListViewManager_c *)mListViewObject->klass->_2.typeHierarchy[v6 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
LABEL_10:
    mListViewObject = (struct ListViewObject_o *)sub_1C940C8(mListViewObject);
    goto LABEL_11;
  }
  SvtEqCombineListViewManager__SetDragEnd(
    (SvtEqCombineListViewManager_o *)mListViewObject,
    (const MethodInfo *)SvtEqCombineListViewManager_TypeInfo);
  SvtEqCombineUIDragDropListViewItem__DragEnd(this, v7);
}


void SvtEqCombineUIDragDropListViewItem__OnDragDropStart(
        SvtEqCombineUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mDragScrollView; // x20
  UnityEngine_Collider_o *mCollider; // x0
  __int64 v5; // x1
  struct UIDragScrollView_o *v6; // x8
  struct ListViewObject_o *mListViewObject; // x21
  const MethodInfo *v8; // x1
  __int64 naturalAligment; // x9
  __int64 v10; // x9
  ListViewItem_o *Item; // x22
  const MethodInfo *v12; // x1
  int32_t sortIndex; // w21
  const MethodInfo *v14; // x3
  UICamera_c *v15; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  struct UnityEngine_GameObject_o *dragged; // x1
  SvtEqCombineUIDragDropListViewItem_o *v18; // x0
  const MethodInfo *v19; // x1
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2A953 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SvtEqCombineListViewManager_TypeInfo);
    sub_1C93AD4(&SvtEqCombineListViewObject_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D2A953 = 1;
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0);
  if ( ((unsigned __int8)mCollider & 1) != 0 )
  {
    v6 = this->fields.mDragScrollView;
    if ( !v6 )
      goto LABEL_27;
    mDragScrollView = (UnityEngine_Object_o *)v6->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0);
    if ( ((unsigned __int8)mCollider & 1) != 0 )
    {
      if ( !mDragScrollView )
        goto LABEL_27;
      UIScrollView__Press((UIScrollView_o *)mDragScrollView, 0, 0);
    }
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0);
  mCollider = this->fields.mCollider;
  if ( !mCollider
    || (UnityEngine_Collider__set_enabled(mCollider, 1, 0), (mListViewObject = this->fields.mListViewObject) == 0) )
  {
LABEL_27:
    sub_1C93D2C(mCollider, v5);
  }
  v8 = (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo;
  naturalAligment = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_1C940C8(this->fields.mListViewObject);
LABEL_29:
    v18 = (SvtEqCombineUIDragDropListViewItem_o *)sub_1C940C8(mDragScrollView);
    SvtEqCombineUIDragDropListViewItem__OnDragDropMove(v18, v20, v19);
    return;
  }
  mDragScrollView = (UnityEngine_Object_o *)mListViewObject->fields.manager;
  if ( mDragScrollView )
  {
    v8 = (const MethodInfo *)SvtEqCombineListViewManager_TypeInfo;
    v10 = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
    if ( mDragScrollView->klass->_2.naturalAligment < (unsigned int)v10
      || (SvtEqCombineListViewManager_c *)mDragScrollView->klass->_2.typeHierarchy[v10 - 1] != SvtEqCombineListViewManager_TypeInfo )
    {
      goto LABEL_29;
    }
  }
  Item = (ListViewItem_o *)SvtEqCombineListViewObject__GetItem(
                             (SvtEqCombineListViewObject_o *)this->fields.mListViewObject,
                             v8);
  SvtEqCombineListViewObject__OnDragDropStart((SvtEqCombineListViewObject_o *)mListViewObject, v12);
  if ( !Item )
    goto LABEL_27;
  sortIndex = Item->fields.sortIndex;
  mCollider = (UnityEngine_Collider_o *)ListViewItem__get_IsSelect(Item, 0);
  if ( !mDragScrollView )
    goto LABEL_27;
  SvtEqCombineListViewManager__SetDragStart(
    (SvtEqCombineListViewManager_o *)mDragScrollView,
    sortIndex,
    ((unsigned __int8)mCollider & 1) == 0,
    v14);
  ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *))mDragScrollView->klass[1]._1.element_class)(
    mDragScrollView,
    mDragScrollView->klass[1]._1.castClass);
  *(_WORD *)&this->fields.isDrag = 1;
  v15 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v15 = UICamera_TypeInfo;
  }
  currentTouch = v15->static_fields->currentTouch;
  if ( currentTouch )
    dragged = currentTouch->fields.dragged;
  else
    dragged = 0;
  this->fields.dragSurface = dragged;
  sub_1C93A78(&this->fields.dragSurface, dragged);
}


void SvtEqCombineUIDragDropListViewItem__Update(SvtEqCombineUIDragDropListViewItem_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragSurface; // x20
  UnityEngine_GameObject_o *v4; // x20
  intptr_t main; // x0
  SvtEqCombineListViewManager_c *v6; // x1
  UnityEngine_Camera_o *v7; // x20
  UICamera_c *v8; // x8
  struct UICamera_StaticFields *static_fields; // x8
  UnityEngine_Object_o *Component_object; // x20
  SvtEqCombineListViewManager_o *m_CachedPtr; // x21
  __int64 naturalAligment; // x9
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v16; // x8
  UnityEngine_Object_o *scrollView; // x20
  void *monitor; // x21
  UICamera_c *v19; // x8
  UnityEngine_Camera_o *v20; // x22
  struct UICamera_StaticFields *v21; // x8
  float v22; // s14
  float v23; // s15
  UnityEngine_Vector2_o ViewSize; // kr30_8
  __int64 v25; // x9
  bool IsLimitOverPosition2; // w21
  UnityEngine_Object_o *v27; // x22
  float v28; // s0
  float v29; // s1
  UnityEngine_Object_o *v31; // x22
  float v32; // s0
  SvtEqCombineUIDragDropListViewItem_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x1
  const MethodInfo *v36; // x2
  unsigned __int64 v37; // kr20_8
  unsigned __int64 size; // kr38_8
  UnityEngine_Ray_o v39; // [xsp+0h] [xbp-100h] BYREF
  UnityEngine_Ray_o v40; // [xsp+18h] [xbp-E8h] BYREF
  UnityEngine_Ray_o v41; // [xsp+30h] [xbp-D0h]
  UnityEngine_RaycastHit_o v42; // [xsp+50h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v43; // 0:kr00_12.12
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2A955 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_BoxCollider_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_SvtEqCombineListViewObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UnityEngine_Physics_TypeInfo);
    sub_1C93AD4(&SvtEqCombineListViewManager_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D2A955 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( !this->fields.isDrag )
    return;
  dragSurface = (UnityEngine_Object_o *)this->fields.dragSurface;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragSurface, 0, 0) )
  {
    v4 = this->fields.dragSurface;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    if ( !UICamera__IsPressed(v4, 0) )
    {
      ((void (__fastcall *)(SvtEqCombineUIDragDropListViewItem_o *, struct UnityEngine_GameObject_o *, const MethodInfo *))this->klass->vtable._8_OnDragDropRelease.methodPtr)(
        this,
        this->fields.dragSurface,
        this->klass->vtable._8_OnDragDropRelease.method);
      return;
    }
  }
  main = (intptr_t)UnityEngine_Camera__get_main(0);
  v7 = (UnityEngine_Camera_o *)main;
  v8 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v8 = UICamera_TypeInfo;
  }
  if ( !v7 )
    goto LABEL_85;
  static_fields = v8->static_fields;
  v44.fields.z = 0.0;
  v44.fields.x = static_fields->lastTouchPosition.fields.x;
  v44.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_71924968(&v40, v7, v44, 0);
  v41 = v40;
  if ( !UnityEngine_Physics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo);
  v39 = v41;
  if ( UnityEngine_Physics__Raycast_72438560(&v39, &v42, 0) )
  {
    main = (intptr_t)UnityEngine_RaycastHit__get_collider(&v42, 0);
    if ( !main )
      goto LABEL_85;
    Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)main,
                                                 (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_SvtEqCombineListViewObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    main = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
    if ( (main & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_85;
      m_CachedPtr = (SvtEqCombineListViewManager_o *)Component_object[1].fields.m_CachedPtr;
      if ( m_CachedPtr )
      {
        v6 = SvtEqCombineListViewManager_TypeInfo;
        naturalAligment = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
        if ( m_CachedPtr->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (SvtEqCombineListViewManager_c *)m_CachedPtr->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewManager_TypeInfo )
        {
          main = Component_object[1].fields.m_CachedPtr;
          goto LABEL_87;
        }
      }
      main = (intptr_t)SvtEqCombineListViewObject__GetItem(
                         (SvtEqCombineListViewObject_o *)Component_object,
                         (const MethodInfo *)v6);
      if ( !main || !m_CachedPtr )
        goto LABEL_85;
      v14 = *(_DWORD *)(main + 24);
      if ( m_CachedPtr->fields.dragEndIndex != v14 )
        SvtEqCombineListViewManager__SetDragSelectItem(m_CachedPtr, m_CachedPtr->fields.dragStartIndex, v14, v13);
    }
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  main = UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0);
  if ( (main & 1) == 0 )
    return;
  v16 = this->fields.mDragScrollView;
  if ( !v16 )
    goto LABEL_85;
  scrollView = (UnityEngine_Object_o *)v16->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  main = UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( (main & 1) == 0 )
    return;
  if ( !scrollView )
    goto LABEL_85;
  monitor = scrollView[6].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)monitor, 0, 0) )
    return;
  main = (intptr_t)UnityEngine_Camera__get_main(0);
  v19 = UICamera_TypeInfo;
  v20 = (UnityEngine_Camera_o *)main;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v19 = UICamera_TypeInfo;
  }
  if ( !v20 )
    goto LABEL_85;
  v21 = v19->static_fields;
  v45.fields.z = 0.0;
  v45.fields.x = v21->lastTouchPosition.fields.x;
  v45.fields.y = v21->lastTouchPosition.fields.y;
  v43 = UnityEngine_Camera__ScreenToWorldPoint_71924504(v20, v45, 0);
  if ( !monitor )
    goto LABEL_85;
  main = (intptr_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)monitor, 0);
  if ( !main )
    goto LABEL_85;
  v37 = (unsigned __int64)UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)main, v43, 0);
  v22 = *((float *)monitor + 83);
  v23 = *((float *)monitor + 84);
  ViewSize = UIPanel__GetViewSize((UIPanel_o *)monitor, 0);
  main = (intptr_t)this->fields.mCollider;
  if ( !main )
    goto LABEL_85;
  v25 = UnityEngine_BoxCollider_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)main + 304LL) < (unsigned int)v25
    || *(UnityEngine_BoxCollider_c **)(*(_QWORD *)(*(_QWORD *)main + 200LL) + 8 * v25 - 8) != UnityEngine_BoxCollider_TypeInfo )
  {
LABEL_87:
    v34 = (SvtEqCombineUIDragDropListViewItem_o *)sub_1C940C8(main);
    SvtEqCombineUIDragDropListViewItem__OnDragDropRelease(v34, v35, v36);
    return;
  }
  size = (unsigned __int64)UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)main, 0);
  IsLimitOverPosition2 = UIScrollView__IsLimitOverPosition2((UIScrollView_o *)scrollView, 0);
  if ( IsLimitOverPosition2 )
    this->fields.isLimit = 1;
  if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)scrollView, 0) )
  {
    v27 = (UnityEngine_Object_o *)scrollView[2].fields.m_CachedPtr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v27, 0, 0) )
    {
      main = scrollView[2].fields.m_CachedPtr;
      if ( !main )
        goto LABEL_85;
      if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0) > 0.0 )
      {
        v28 = *((float *)&v37 + 1) - v23;
        v29 = (float)(ViewSize.fields.y - *((float *)&size + 1)) * 0.5;
        if ( !this->fields.isLimit )
        {
          if ( v28 > (float)-v29 )
          {
            if ( v28 < v29 )
              return;
            v46.fields.x = 0.0;
            v46.fields.y = -1.0;
LABEL_78:
            v46.fields.z = 0.0;
            if ( !UIScrollView__IsLimitOverPosition2_49959932((UIScrollView_o *)scrollView, v46, 0) )
            {
              v32 = 0.5;
LABEL_84:
              UIScrollView__Scroll((UIScrollView_o *)scrollView, v32, 0);
              return;
            }
            return;
          }
          v47.fields.x = 0.0;
          v47.fields.y = 1.0;
          goto LABEL_82;
        }
        goto LABEL_68;
      }
    }
  }
  if ( !UIScrollView__get_canMoveHorizontally((UIScrollView_o *)scrollView, 0) )
    goto LABEL_70;
  v31 = (UnityEngine_Object_o *)scrollView[2].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v31, 0, 0) )
  {
LABEL_70:
    if ( IsLimitOverPosition2 )
      return;
    goto LABEL_71;
  }
  main = (intptr_t)scrollView[2].monitor;
  if ( !main )
LABEL_85:
    sub_1C93D2C(main, v6);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0) <= 0.0 )
    goto LABEL_70;
  v28 = *(float *)&v37 - v22;
  v29 = (float)(ViewSize.fields.x - *(float *)&size) * 0.5;
  if ( this->fields.isLimit )
  {
LABEL_68:
    if ( IsLimitOverPosition2 )
    {
      UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0);
      return;
    }
    if ( v28 <= (float)-v29 || v28 >= v29 )
      return;
LABEL_71:
    this->fields.isLimit = 0;
    return;
  }
  if ( v28 > (float)-v29 )
  {
    if ( v28 < v29 )
      return;
    v46.fields.x = -1.0;
    v46.fields.y = 0.0;
    goto LABEL_78;
  }
  v47.fields.x = 1.0;
  v47.fields.y = 0.0;
LABEL_82:
  v47.fields.z = 0.0;
  if ( !UIScrollView__IsLimitOverPosition2_49959932((UIScrollView_o *)scrollView, v47, 0) )
  {
    v32 = -0.5;
    goto LABEL_84;
  }
}