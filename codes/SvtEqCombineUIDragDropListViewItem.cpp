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
  if ( (byte_4DFE979 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&SvtEqCombineListViewManager_TypeInfo);
    this = (SvtEqCombineUIDragDropListViewItem_o *)sub_1CE6700(&SvtEqCombineListViewObject_TypeInfo);
    byte_4DFE979 = 1;
  }
  mListViewObject = (SvtEqCombineListViewObject_o *)v3->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_22;
  naturalAligment = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_1CE6CF4(v3->fields.mListViewObject);
    goto LABEL_20;
  }
  manager = mListViewObject->fields.manager;
  if ( !manager )
  {
LABEL_21:
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0, 0);
    SvtEqCombineListViewObject__Init_32446052(mListViewObject, 4, v11);
    goto LABEL_22;
  }
  v6 = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)v6
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
LABEL_20:
    sub_1CE6CF4(manager);
    goto LABEL_21;
  }
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0, 0);
  SvtEqCombineListViewObject__Init_32446052(mListViewObject, 4, v7);
  ((void (__fastcall *)(struct ListViewManager_o *, const MethodInfo *))manager->klass->vtable._9_ItemDragEnd.methodPtr)(
    manager,
    manager->klass->vtable._9_ItemDragEnd.method);
  v3->fields.dragSurface = 0;
  v3->fields.isDrag = 0;
  sub_1CE66A4(&v3->fields.dragSurface, 0);
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
      sub_1CE6958(this, method);
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
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = delta.fields.z;
  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_4DFE976 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4DFE976 = 1;
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
      sub_1CE6958(transform, v8);
    }
    v10 = (UnityEngine_Transform_o *)transform;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    localPosition.fields.y = y + localPosition.fields.y;
    localPosition.fields.z = z + localPosition.fields.z;
    localPosition.fields.x = x + localPosition.fields.x;
    UnityEngine_Transform__set_localPosition(v10, localPosition, 0);
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

  if ( (byte_4DFE978 & 1) == 0 )
  {
    sub_1CE6700(&SvtEqCombineListViewManager_TypeInfo);
    sub_1CE6700(&SvtEqCombineListViewObject_TypeInfo);
    byte_4DFE978 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_1CE6958(mListViewObject, surface);
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
    mListViewObject = (struct ListViewObject_o *)sub_1CE6CF4(mListViewObject);
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

  if ( (byte_4DFE975 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&SvtEqCombineListViewManager_TypeInfo);
    sub_1CE6700(&SvtEqCombineListViewObject_TypeInfo);
    sub_1CE6700(&UICamera_TypeInfo);
    byte_4DFE975 = 1;
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
    sub_1CE6958(mCollider, v5);
  }
  v8 = (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo;
  naturalAligment = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_1CE6CF4(this->fields.mListViewObject);
LABEL_29:
    v18 = (SvtEqCombineUIDragDropListViewItem_o *)sub_1CE6CF4(mDragScrollView);
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
  sub_1CE66A4(&this->fields.dragSurface, dragged);
}


// local variable allocation has failed, the output may be wrong!
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
  float x; // s8
  float y; // s9
  float z; // s10
  float v25; // s14
  float v26; // s15
  float v27; // s8
  float v28; // s11
  UnityEngine_Vector2_o ViewSize; // kr00_8
  __int64 v30; // x9
  float v31; // s10
  float v32; // s13
  bool IsLimitOverPosition2; // w21
  UnityEngine_Object_o *v34; // x22
  float v35; // s0
  float v36; // s1
  float v37; // s0 OVERLAPPED
  float v38; // s1
  UnityEngine_Object_o *v39; // x22
  int v40; // s2
  float v41; // s0
  float v42; // s0 OVERLAPPED
  float v43; // s1
  int v44; // s2
  SvtEqCombineUIDragDropListViewItem_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x1
  const MethodInfo *v47; // x2
  UnityEngine_Ray_o v48; // [xsp+0h] [xbp-100h] BYREF
  UnityEngine_Ray_o v49; // [xsp+18h] [xbp-E8h] BYREF
  UnityEngine_Ray_o v50; // [xsp+30h] [xbp-D0h]
  UnityEngine_RaycastHit_o v51; // [xsp+50h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4DFE977 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_BoxCollider_TypeInfo);
    sub_1CE6700(&Method_UnityEngine_Component_GetComponent_SvtEqCombineListViewObject___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&UnityEngine_Physics_TypeInfo);
    sub_1CE6700(&SvtEqCombineListViewManager_TypeInfo);
    sub_1CE6700(&UICamera_TypeInfo);
    byte_4DFE977 = 1;
  }
  memset(&v51, 0, sizeof(v51));
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
  v52.fields.z = 0.0;
  v52.fields.x = static_fields->lastTouchPosition.fields.x;
  v52.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_72723200(&v49, v7, v52, 0);
  v50 = v49;
  if ( !UnityEngine_Physics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo);
  v48 = v50;
  if ( UnityEngine_Physics__Raycast_73237192(&v48, &v51, 0) )
  {
    main = (intptr_t)UnityEngine_RaycastHit__get_collider(&v51, 0);
    if ( !main )
      goto LABEL_85;
    Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)main,
                                                 (const MethodInfo_31FAB78 *)Method_UnityEngine_Component_GetComponent_SvtEqCombineListViewObject___);
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
  v53.fields.z = 0.0;
  v53.fields.x = v21->lastTouchPosition.fields.x;
  v53.fields.y = v21->lastTouchPosition.fields.y;
  v54 = UnityEngine_Camera__ScreenToWorldPoint_72722736(v20, v53, 0);
  if ( !monitor )
    goto LABEL_85;
  x = v54.fields.x;
  y = v54.fields.y;
  z = v54.fields.z;
  main = (intptr_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)monitor, 0);
  if ( !main )
    goto LABEL_85;
  v55.fields.x = x;
  v55.fields.y = y;
  v55.fields.z = z;
  v56 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)main, v55, 0);
  v25 = *((float *)monitor + 83);
  v26 = *((float *)monitor + 84);
  v27 = v56.fields.x;
  v28 = v56.fields.y;
  ViewSize = UIPanel__GetViewSize((UIPanel_o *)monitor, 0);
  main = (intptr_t)this->fields.mCollider;
  if ( !main )
    goto LABEL_85;
  v30 = UnityEngine_BoxCollider_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)main + 304LL) < (unsigned int)v30
    || *(UnityEngine_BoxCollider_c **)(*(_QWORD *)(*(_QWORD *)main + 200LL) + 8 * v30 - 8) != UnityEngine_BoxCollider_TypeInfo )
  {
LABEL_87:
    v45 = (SvtEqCombineUIDragDropListViewItem_o *)sub_1CE6CF4(main);
    SvtEqCombineUIDragDropListViewItem__OnDragDropRelease(v45, v46, v47);
    return;
  }
  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)main, 0);
  v31 = size.fields.x;
  v32 = size.fields.y;
  IsLimitOverPosition2 = UIScrollView__IsLimitOverPosition2((UIScrollView_o *)scrollView, 0);
  if ( IsLimitOverPosition2 )
    this->fields.isLimit = 1;
  if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)scrollView, 0) )
  {
    v34 = (UnityEngine_Object_o *)scrollView[2].fields.m_CachedPtr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v34, 0, 0) )
    {
      main = scrollView[2].fields.m_CachedPtr;
      if ( !main )
        goto LABEL_85;
      if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0) > 0.0 )
      {
        v35 = v28 - v26;
        v36 = (float)(ViewSize.fields.y - v32) * 0.5;
        if ( !this->fields.isLimit )
        {
          if ( v35 > (float)-v36 )
          {
            if ( v35 < v36 )
              return;
            v37 = 0.0;
            v38 = -1.0;
LABEL_78:
            v40 = 0;
            if ( !UIScrollView__IsLimitOverPosition2_50343912(
                    (UIScrollView_o *)scrollView,
                    *(UnityEngine_Vector3_o *)&v37,
                    0) )
            {
              v41 = 0.5;
LABEL_84:
              UIScrollView__Scroll((UIScrollView_o *)scrollView, v41, 0);
              return;
            }
            return;
          }
          v42 = 0.0;
          v43 = 1.0;
          goto LABEL_82;
        }
        goto LABEL_68;
      }
    }
  }
  if ( !UIScrollView__get_canMoveHorizontally((UIScrollView_o *)scrollView, 0) )
    goto LABEL_70;
  v39 = (UnityEngine_Object_o *)scrollView[2].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v39, 0, 0) )
  {
LABEL_70:
    if ( IsLimitOverPosition2 )
      return;
    goto LABEL_71;
  }
  main = (intptr_t)scrollView[2].monitor;
  if ( !main )
LABEL_85:
    sub_1CE6958(main, v6);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0) <= 0.0 )
    goto LABEL_70;
  v35 = v27 - v25;
  v36 = (float)(ViewSize.fields.x - v31) * 0.5;
  if ( this->fields.isLimit )
  {
LABEL_68:
    if ( IsLimitOverPosition2 )
    {
      UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0);
      return;
    }
    if ( v35 <= (float)-v36 || v35 >= v36 )
      return;
LABEL_71:
    this->fields.isLimit = 0;
    return;
  }
  if ( v35 > (float)-v36 )
  {
    if ( v35 < v36 )
      return;
    v37 = -1.0;
    v38 = 0.0;
    goto LABEL_78;
  }
  v42 = 1.0;
  v43 = 0.0;
LABEL_82:
  v44 = 0;
  if ( !UIScrollView__IsLimitOverPosition2_50343912((UIScrollView_o *)scrollView, *(UnityEngine_Vector3_o *)&v42, 0) )
  {
    v41 = -0.5;
    goto LABEL_84;
  }
}