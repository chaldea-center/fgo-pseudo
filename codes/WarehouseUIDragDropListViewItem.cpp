void WarehouseUIDragDropListViewItem___ctor(WarehouseUIDragDropListViewItem_o *this, const MethodInfo *method)
{
  UIDragDropListViewItem___ctor((UIDragDropListViewItem_o *)this, 0);
}


void WarehouseUIDragDropListViewItem__DragEnd(WarehouseUIDragDropListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  struct ListViewManager_o *manager; // x21
  WarehouseUIDragDropListViewItem_o *v5; // x19
  WarehouseListViewObject_o *mListViewObject; // x20
  __int64 naturalAligment; // x9
  WarehouseListViewManager_c *v8; // x1
  __int64 v9; // x9
  const MethodInfo *v10; // x2
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Object_o *mDragScrollView; // x20
  __int64 v20; // x2
  struct UIDragScrollView_o *v21; // x8
  UnityEngine_Object_o *scrollView; // x19
  const MethodInfo *v23; // x2

  v5 = this;
  if ( (byte_596E527 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&WarehouseListViewManager_TypeInfo);
    this = (WarehouseUIDragDropListViewItem_o *)sub_2213A60(&WarehouseListViewObject_TypeInfo);
    byte_596E527 = 1;
  }
  mListViewObject = (WarehouseListViewObject_o *)v5->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_22;
  naturalAligment = WarehouseListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (WarehouseListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewObject_TypeInfo )
  {
    sub_221405C(v5->fields.mListViewObject, WarehouseListViewObject_TypeInfo, v2, v3);
    goto LABEL_20;
  }
  manager = mListViewObject->fields.manager;
  if ( !manager )
  {
LABEL_21:
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v5, 0, 0);
    WarehouseListViewObject__Init_45323744(mListViewObject, 3, v23);
    goto LABEL_22;
  }
  v8 = WarehouseListViewManager_TypeInfo;
  v9 = WarehouseListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)v9
    || (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] != WarehouseListViewManager_TypeInfo )
  {
LABEL_20:
    sub_221405C(manager, v8, v2, v3);
    goto LABEL_21;
  }
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v5, 0, 0);
  WarehouseListViewObject__Init_45323744(mListViewObject, 3, v10);
  ((void (__fastcall *)(struct ListViewManager_o *, const MethodInfo *))manager->klass->vtable._9_ItemDragEnd.methodPtr)(
    manager,
    manager->klass->vtable._9_ItemDragEnd.method);
  v5->fields.dragSurface = 0;
  v5->fields.isDrag = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v5->fields.dragSurface, 0, v11, v12, v13, v14, v15, v16);
  mDragScrollView = (UnityEngine_Object_o *)v5->fields.mDragScrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
  this = (WarehouseUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v21 = v5->fields.mDragScrollView;
    if ( !v21 )
      goto LABEL_22;
    scrollView = (UnityEngine_Object_o *)v21->fields.scrollView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v20);
    this = (WarehouseUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( scrollView )
      {
        UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0);
        return;
      }
LABEL_22:
      sub_2213CDC(this, method);
    }
  }
}


void WarehouseUIDragDropListViewItem__OnDragDropMove(
        WarehouseUIDragDropListViewItem_o *this,
        UnityEngine_Vector3_o delta,
        const MethodInfo *method)
{
  __int64 v3; // x2
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *dragObject; // x20
  __int64 v9; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *v11; // x19
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = delta.fields.z;
  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_596E524 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E524 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
  if ( UnityEngine_Object__op_Inequality(dragObject, 0, 0) )
  {
    transform = this->fields.dragObject;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0)) == 0 )
    {
      sub_2213CDC(transform, v9);
    }
    v11 = (UnityEngine_Transform_o *)transform;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    localPosition.fields.y = y + localPosition.fields.y;
    localPosition.fields.z = z + localPosition.fields.z;
    localPosition.fields.x = x + localPosition.fields.x;
    UnityEngine_Transform__set_localPosition(v11, localPosition, 0);
  }
}


void WarehouseUIDragDropListViewItem__OnDragDropRelease(
        WarehouseUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct ListViewObject_o *mListViewObject; // x0
  __int64 naturalAligment; // x9
  __int64 v7; // x9
  const MethodInfo *v8; // x1

  if ( (byte_596E526 & 1) == 0 )
  {
    sub_2213A60(&WarehouseListViewManager_TypeInfo);
    sub_2213A60(&WarehouseListViewObject_TypeInfo);
    byte_596E526 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_2213CDC(mListViewObject, surface);
  surface = (UnityEngine_GameObject_o *)WarehouseListViewObject_TypeInfo;
  naturalAligment = WarehouseListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (WarehouseListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewObject_TypeInfo )
  {
    goto LABEL_10;
  }
  mListViewObject = (struct ListViewObject_o *)mListViewObject->fields.manager;
  if ( !mListViewObject )
    goto LABEL_11;
  surface = (UnityEngine_GameObject_o *)WarehouseListViewManager_TypeInfo;
  v7 = WarehouseListViewManager_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)v7
    || (WarehouseListViewManager_c *)mListViewObject->klass->_2.typeHierarchy[v7 - 1] != WarehouseListViewManager_TypeInfo )
  {
LABEL_10:
    sub_221405C(mListViewObject, surface, method, v3);
    goto LABEL_11;
  }
  WarehouseListViewManager__SetDragEnd((WarehouseListViewManager_o *)mListViewObject, 0);
  WarehouseUIDragDropListViewItem__DragEnd(this, v8);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseUIDragDropListViewItem__OnDragDropStart(
        WarehouseUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mDragScrollView; // x20
  UnityEngine_Collider_o *mCollider; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct UIDragScrollView_o *v8; // x8
  __int64 v9; // x2
  __int64 v10; // x3
  struct ListViewObject_o *mListViewObject; // x21
  const MethodInfo *v12; // x1
  __int64 naturalAligment; // x9
  __int64 v14; // x9
  ListViewItem_o *Item; // x22
  const MethodInfo *v16; // x1
  int32_t sortIndex; // w21
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  UICamera_c *v25; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  struct UnityEngine_GameObject_o *dragged; // x1
  WarehouseUIDragDropListViewItem_o *v28; // x0
  const MethodInfo *v29; // x1
  long double v30; // q0 OVERLAPPED

  if ( (byte_596E523 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&WarehouseListViewManager_TypeInfo);
    sub_2213A60(&WarehouseListViewObject_TypeInfo);
    byte_596E523 = 1;
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  mCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0);
  if ( ((unsigned __int8)mCollider & 1) != 0 )
  {
    v8 = this->fields.mDragScrollView;
    if ( !v8 )
      goto LABEL_27;
    mDragScrollView = (UnityEngine_Object_o *)v8->fields.scrollView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
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
    sub_2213CDC(mCollider, v6);
  }
  v12 = (const MethodInfo *)WarehouseListViewObject_TypeInfo;
  naturalAligment = WarehouseListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (WarehouseListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewObject_TypeInfo )
  {
    sub_221405C(this->fields.mListViewObject, WarehouseListViewObject_TypeInfo, v9, v10);
LABEL_29:
    v30 = sub_221405C(mDragScrollView, v12, v9, v10);
    WarehouseUIDragDropListViewItem__OnDragDropMove(v28, *(UnityEngine_Vector3_o *)&v30, v29);
    return;
  }
  mDragScrollView = (UnityEngine_Object_o *)mListViewObject->fields.manager;
  if ( mDragScrollView )
  {
    v12 = (const MethodInfo *)WarehouseListViewManager_TypeInfo;
    v14 = WarehouseListViewManager_TypeInfo->_2.naturalAligment;
    if ( mDragScrollView->klass->_2.naturalAligment < (unsigned int)v14
      || (WarehouseListViewManager_c *)mDragScrollView->klass->_2.typeHierarchy[v14 - 1] != WarehouseListViewManager_TypeInfo )
    {
      goto LABEL_29;
    }
  }
  Item = (ListViewItem_o *)WarehouseListViewObject__GetItem(
                             (WarehouseListViewObject_o *)this->fields.mListViewObject,
                             v12);
  WarehouseListViewObject__OnDragDropStart((WarehouseListViewObject_o *)mListViewObject, v16);
  if ( !Item )
    goto LABEL_27;
  sortIndex = Item->fields.sortIndex;
  mCollider = (UnityEngine_Collider_o *)ListViewItem__get_IsSelect(Item, 0);
  if ( !mDragScrollView )
    goto LABEL_27;
  WarehouseListViewManager__SetDragStart(
    (WarehouseListViewManager_o *)mDragScrollView,
    sortIndex,
    ((unsigned __int8)mCollider & 1) == 0,
    0);
  ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *))mDragScrollView->klass[1]._1.element_class)(
    mDragScrollView,
    mDragScrollView->klass[1]._1.castClass);
  v25 = UICamera_TypeInfo;
  *(_WORD *)&this->fields.isDrag = 1;
  if ( !*(&v25->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v25, v18, v19);
    v25 = UICamera_TypeInfo;
  }
  currentTouch = v25->static_fields->currentTouch;
  if ( currentTouch )
    dragged = currentTouch->fields.dragged;
  else
    dragged = 0;
  this->fields.dragSurface = dragged;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dragSurface,
    (int32_t)dragged,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseUIDragDropListViewItem__Update(WarehouseUIDragDropListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isDrag; // w8
  UnityEngine_Object_o *dragSurface; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *v8; // x20
  __int64 main; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x2
  UnityEngine_Camera_o *v12; // x20
  struct UICamera_StaticFields *static_fields; // x8
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Object_o *Component_object; // x20
  __int64 v20; // x3
  WarehouseListViewManager_o *m_CachedPtr; // x21
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *mDragScrollView; // x20
  __int64 v24; // x2
  struct UIDragScrollView_o *v25; // x8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v27; // x2
  void *monitor; // x21
  __int64 v29; // x2
  UnityEngine_Camera_o *v30; // x22
  struct UICamera_StaticFields *v31; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  float v35; // s14
  float v36; // s15
  float v37; // s8
  float v38; // s11
  UnityEngine_Vector2_o ViewSize; // kr00_8
  float v40; // s10
  float v41; // s13
  bool IsLimitOverPosition2; // w21
  __int64 v43; // x1
  __int64 v44; // x2
  UnityEngine_Object_o *v45; // x22
  float v46; // s0
  float v47; // s1
  float v48; // s0 OVERLAPPED
  int v49; // s2
  float v50; // s1
  __int64 v51; // x1
  __int64 v52; // x2
  UnityEngine_Object_o *v53; // x22
  float v54; // s0
  float v55; // s0 OVERLAPPED
  int v56; // s2
  float v57; // s1
  UnityEngine_Ray_o v58; // [xsp+0h] [xbp-E0h] BYREF
  UnityEngine_Ray_o v59; // [xsp+18h] [xbp-C8h] BYREF
  UnityEngine_RaycastHit_o v60; // [xsp+30h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596E525 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_BoxCollider_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_WarehouseListViewObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Physics_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&WarehouseListViewManager_TypeInfo);
    byte_596E525 = 1;
  }
  isDrag = this->fields.isDrag;
  memset(&v60, 0, sizeof(v60));
  if ( !isDrag )
    return;
  dragSurface = (UnityEngine_Object_o *)this->fields.dragSurface;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(dragSurface, 0, 0) )
  {
    v8 = this->fields.dragSurface;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v6, v7);
    if ( !UICamera__IsPressed(v8, 0) )
    {
      ((void (__fastcall *)(WarehouseUIDragDropListViewItem_o *, struct UnityEngine_GameObject_o *, const MethodInfo *))this->klass->vtable._8_OnDragDropRelease.methodPtr)(
        this,
        this->fields.dragSurface,
        this->klass->vtable._8_OnDragDropRelease.method);
      return;
    }
  }
  main = (__int64)UnityEngine_Camera__get_main(0);
  v12 = (UnityEngine_Camera_o *)main;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v10, v11);
  if ( !v12 )
    goto LABEL_83;
  v61.fields.z = 0.0;
  static_fields = UICamera_TypeInfo->static_fields;
  v61.fields.x = static_fields->lastTouchPosition.fields.x;
  v61.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_83198808(&v59, v12, v61, 0);
  if ( !*(&UnityEngine_Physics_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo, v14, v15);
  v58 = v59;
  if ( !UnityEngine_Physics__Raycast_83886968(&v58, &v60, 0) )
    goto LABEL_26;
  main = (__int64)UnityEngine_RaycastHit__get_collider(&v60, 0);
  if ( !main )
    goto LABEL_83;
  Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)main,
                                               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_WarehouseListViewObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
  main = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( (main & 1) == 0 )
    goto LABEL_26;
  if ( !Component_object )
    goto LABEL_83;
  m_CachedPtr = (WarehouseListViewManager_o *)Component_object[1].fields.m_CachedPtr;
  if ( !m_CachedPtr )
  {
LABEL_82:
    main = (__int64)WarehouseListViewObject__GetItem((WarehouseListViewObject_o *)Component_object, v10);
    goto LABEL_83;
  }
  naturalAligment = WarehouseListViewManager_TypeInfo->_2.naturalAligment;
  if ( m_CachedPtr->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (WarehouseListViewManager_c *)m_CachedPtr->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewManager_TypeInfo )
  {
    sub_221405C(Component_object[1].fields.m_CachedPtr, WarehouseListViewManager_TypeInfo, v16, v20);
    goto LABEL_82;
  }
  main = (__int64)WarehouseListViewObject__GetItem(
                    (WarehouseListViewObject_o *)Component_object,
                    (const MethodInfo *)WarehouseListViewManager_TypeInfo);
  if ( !main )
    goto LABEL_83;
  WarehouseListViewManager__SetDragMove(m_CachedPtr, *(_DWORD *)(main + 24), 0);
LABEL_26:
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v16);
  main = UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0);
  if ( (main & 1) == 0 )
    return;
  v25 = this->fields.mDragScrollView;
  if ( !v25 )
    goto LABEL_83;
  scrollView = (UnityEngine_Object_o *)v25->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v24);
  main = UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( (main & 1) == 0 )
    return;
  if ( !scrollView )
    goto LABEL_83;
  monitor = scrollView[6].monitor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v27);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)monitor, 0, 0) )
    return;
  main = (__int64)UnityEngine_Camera__get_main(0);
  v30 = (UnityEngine_Camera_o *)main;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v10, v29);
  if ( !v30 )
    goto LABEL_83;
  v62.fields.z = 0.0;
  v31 = UICamera_TypeInfo->static_fields;
  v62.fields.x = v31->lastTouchPosition.fields.x;
  v62.fields.y = v31->lastTouchPosition.fields.y;
  v63 = UnityEngine_Camera__ScreenToWorldPoint_83198228(v30, v62, 0);
  if ( !monitor )
    goto LABEL_83;
  x = v63.fields.x;
  y = v63.fields.y;
  z = v63.fields.z;
  main = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)monitor, 0);
  if ( !main )
    goto LABEL_83;
  v64.fields.x = x;
  v64.fields.y = y;
  v64.fields.z = z;
  v65 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)main, v64, 0);
  v35 = *((float *)monitor + 83);
  v36 = *((float *)monitor + 84);
  v37 = v65.fields.x;
  v38 = v65.fields.y;
  ViewSize = UIPanel__GetViewSize((UIPanel_o *)monitor, 0);
  main = sub_1FFEA10(this->fields.mCollider, UnityEngine_BoxCollider_TypeInfo);
  if ( !main )
    goto LABEL_83;
  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)main, 0);
  v40 = size.fields.x;
  v41 = size.fields.y;
  IsLimitOverPosition2 = UIScrollView__IsLimitOverPosition2((UIScrollView_o *)scrollView, 0);
  if ( IsLimitOverPosition2 )
    this->fields.isLimit = 1;
  if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)scrollView, 0) )
  {
    v45 = (UnityEngine_Object_o *)scrollView[2].fields.m_CachedPtr;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43, v44);
    if ( UnityEngine_Object__op_Inequality(v45, 0, 0) )
    {
      main = scrollView[2].fields.m_CachedPtr;
      if ( !main )
        goto LABEL_83;
      if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0) > 0.0 )
      {
        v46 = v38 - v36;
        v47 = (float)(ViewSize.fields.y - v41) * 0.5;
        if ( !this->fields.isLimit )
        {
          if ( v46 > (float)-v47 )
          {
            if ( v46 < v47 )
              return;
            v48 = 0.0;
            v49 = 0;
            v50 = -1.0;
LABEL_74:
            if ( !UIScrollView__IsLimitOverPosition2_56300764(
                    (UIScrollView_o *)scrollView,
                    *(UnityEngine_Vector3_o *)&v48,
                    0) )
            {
              v54 = 0.5;
LABEL_80:
              UIScrollView__Scroll((UIScrollView_o *)scrollView, v54, 0);
              return;
            }
            return;
          }
          v55 = 0.0;
          v56 = 0;
          v57 = 1.0;
          goto LABEL_78;
        }
        goto LABEL_63;
      }
    }
  }
  if ( !UIScrollView__get_canMoveHorizontally((UIScrollView_o *)scrollView, 0) )
    goto LABEL_65;
  v53 = (UnityEngine_Object_o *)scrollView[2].monitor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51, v52);
  if ( !UnityEngine_Object__op_Inequality(v53, 0, 0) )
  {
LABEL_65:
    if ( IsLimitOverPosition2 )
      return;
    goto LABEL_66;
  }
  main = (__int64)scrollView[2].monitor;
  if ( !main )
LABEL_83:
    sub_2213CDC(main, v10);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0) <= 0.0 )
    goto LABEL_65;
  v46 = v37 - v35;
  v47 = (float)(ViewSize.fields.x - v40) * 0.5;
  if ( this->fields.isLimit )
  {
LABEL_63:
    if ( IsLimitOverPosition2 )
    {
      UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0);
      return;
    }
    if ( v46 <= (float)-v47 || v46 >= v47 )
      return;
LABEL_66:
    this->fields.isLimit = 0;
    return;
  }
  if ( v46 > (float)-v47 )
  {
    if ( v46 < v47 )
      return;
    v50 = 0.0;
    v49 = 0;
    v48 = -1.0;
    goto LABEL_74;
  }
  v57 = 0.0;
  v56 = 0;
  v55 = 1.0;
LABEL_78:
  if ( !UIScrollView__IsLimitOverPosition2_56300764((UIScrollView_o *)scrollView, *(UnityEngine_Vector3_o *)&v55, 0) )
  {
    v54 = -0.5;
    goto LABEL_80;
  }
}