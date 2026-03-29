void WarehouseUIDragDropListViewItem___ctor(WarehouseUIDragDropListViewItem_o *this, const MethodInfo *method)
{
  UIDragDropListViewItem___ctor((UIDragDropListViewItem_o *)this, 0);
}


void WarehouseUIDragDropListViewItem__DragEnd(WarehouseUIDragDropListViewItem_o *this, const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x21
  WarehouseUIDragDropListViewItem_o *v3; // x19
  WarehouseListViewObject_o *mListViewObject; // x20
  __int64 naturalAligment; // x9
  __int64 v6; // x9
  const MethodInfo *v7; // x2
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v15; // x8
  UnityEngine_Object_o *scrollView; // x19
  const MethodInfo *v17; // x2

  v3 = this;
  if ( (byte_4D2E7B3 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&WarehouseListViewManager_TypeInfo);
    this = (WarehouseUIDragDropListViewItem_o *)sub_1C93AD4(&WarehouseListViewObject_TypeInfo);
    byte_4D2E7B3 = 1;
  }
  mListViewObject = (WarehouseListViewObject_o *)v3->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_22;
  naturalAligment = WarehouseListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (WarehouseListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewObject_TypeInfo )
  {
    sub_1C940C8(v3->fields.mListViewObject);
    goto LABEL_20;
  }
  manager = mListViewObject->fields.manager;
  if ( !manager )
  {
LABEL_21:
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0, 0);
    WarehouseListViewObject__Init_39109764(mListViewObject, 3, v17);
    goto LABEL_22;
  }
  v6 = WarehouseListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)v6
    || (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] != WarehouseListViewManager_TypeInfo )
  {
LABEL_20:
    sub_1C940C8(manager);
    goto LABEL_21;
  }
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0, 0);
  WarehouseListViewObject__Init_39109764(mListViewObject, 3, v7);
  ((void (__fastcall *)(struct ListViewManager_o *, const MethodInfo *))manager->klass->vtable._9_ItemDragEnd.methodPtr)(
    manager,
    manager->klass->vtable._9_ItemDragEnd.method);
  v3->fields.dragSurface = 0;
  v3->fields.isDrag = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->fields.dragSurface, 0, v8, v9, v10, v11, v12, v13);
  mDragScrollView = (UnityEngine_Object_o *)v3->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (WarehouseUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v15 = v3->fields.mDragScrollView;
    if ( !v15 )
      goto LABEL_22;
    scrollView = (UnityEngine_Object_o *)v15->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (WarehouseUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
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


void WarehouseUIDragDropListViewItem__OnDragDropMove(
        WarehouseUIDragDropListViewItem_o *this,
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
  if ( (byte_4D2E7B0 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E7B0 = 1;
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


void WarehouseUIDragDropListViewItem__OnDragDropRelease(
        WarehouseUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x0
  __int64 naturalAligment; // x9
  __int64 v6; // x9
  const MethodInfo *v7; // x1

  if ( (byte_4D2E7B2 & 1) == 0 )
  {
    sub_1C93AD4(&WarehouseListViewManager_TypeInfo);
    sub_1C93AD4(&WarehouseListViewObject_TypeInfo);
    byte_4D2E7B2 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_1C93D2C(mListViewObject, surface);
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
  v6 = WarehouseListViewManager_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)v6
    || (WarehouseListViewManager_c *)mListViewObject->klass->_2.typeHierarchy[v6 - 1] != WarehouseListViewManager_TypeInfo )
  {
LABEL_10:
    sub_1C940C8(mListViewObject);
    goto LABEL_11;
  }
  WarehouseListViewManager__SetDragEnd((WarehouseListViewManager_o *)mListViewObject, 0);
  WarehouseUIDragDropListViewItem__DragEnd(this, v7);
}


void WarehouseUIDragDropListViewItem__OnDragDropStart(
        WarehouseUIDragDropListViewItem_o *this,
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UICamera_c *v20; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  struct UnityEngine_GameObject_o *dragged; // x1
  WarehouseUIDragDropListViewItem_o *v23; // x0
  const MethodInfo *v24; // x1
  long double v25; // q0
  float v26; // s1
  float v27; // s2
  UnityEngine_Vector3_o v28; // 0:kr00_12.12

  if ( (byte_4D2E7AF & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    sub_1C93AD4(&WarehouseListViewManager_TypeInfo);
    sub_1C93AD4(&WarehouseListViewObject_TypeInfo);
    byte_4D2E7AF = 1;
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
  v8 = (const MethodInfo *)WarehouseListViewObject_TypeInfo;
  naturalAligment = WarehouseListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (WarehouseListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewObject_TypeInfo )
  {
    sub_1C940C8(this->fields.mListViewObject);
LABEL_29:
    v25 = sub_1C940C8(mDragScrollView);
    v28.fields.x = *(float *)&v25;
    v28.fields.y = v26;
    v28.fields.z = v27;
    WarehouseUIDragDropListViewItem__OnDragDropMove(v23, v28, v24);
    return;
  }
  mDragScrollView = (UnityEngine_Object_o *)mListViewObject->fields.manager;
  if ( mDragScrollView )
  {
    v8 = (const MethodInfo *)WarehouseListViewManager_TypeInfo;
    v10 = WarehouseListViewManager_TypeInfo->_2.naturalAligment;
    if ( mDragScrollView->klass->_2.naturalAligment < (unsigned int)v10
      || (WarehouseListViewManager_c *)mDragScrollView->klass->_2.typeHierarchy[v10 - 1] != WarehouseListViewManager_TypeInfo )
    {
      goto LABEL_29;
    }
  }
  Item = (ListViewItem_o *)WarehouseListViewObject__GetItem(
                             (WarehouseListViewObject_o *)this->fields.mListViewObject,
                             v8);
  WarehouseListViewObject__OnDragDropStart((WarehouseListViewObject_o *)mListViewObject, v12);
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
  *(_WORD *)&this->fields.isDrag = 1;
  v20 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v20 = UICamera_TypeInfo;
  }
  currentTouch = v20->static_fields->currentTouch;
  if ( currentTouch )
    dragged = currentTouch->fields.dragged;
  else
    dragged = 0;
  this->fields.dragSurface = dragged;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.dragSurface, (int32_t)dragged, v14, v15, v16, v17, v18, v19);
}


void WarehouseUIDragDropListViewItem__Update(WarehouseUIDragDropListViewItem_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragSurface; // x20
  UnityEngine_GameObject_o *v4; // x20
  intptr_t main; // x0
  const MethodInfo *v6; // x1
  UnityEngine_Camera_o *v7; // x20
  UICamera_c *v8; // x8
  struct UICamera_StaticFields *static_fields; // x8
  UnityEngine_Object_o *Component_object; // x20
  WarehouseListViewManager_o *m_CachedPtr; // x21
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v14; // x8
  UnityEngine_Object_o *scrollView; // x20
  void *monitor; // x21
  UICamera_c *v17; // x8
  UnityEngine_Camera_o *v18; // x22
  struct UICamera_StaticFields *v19; // x8
  float v20; // s14
  float v21; // s15
  UnityEngine_Vector2_o ViewSize; // kr30_8
  __int64 v23; // x9
  bool IsLimitOverPosition2; // w21
  UnityEngine_Object_o *v25; // x22
  float v26; // s0
  float v27; // s1
  UnityEngine_Object_o *v29; // x22
  float v30; // s0
  WarehouseUIDragDropListViewItem_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x1
  const MethodInfo *v34; // x2
  unsigned __int64 v35; // kr20_8
  unsigned __int64 size; // kr38_8
  UnityEngine_Ray_o v37; // [xsp+0h] [xbp-100h] BYREF
  UnityEngine_Ray_o v38; // [xsp+18h] [xbp-E8h] BYREF
  UnityEngine_Ray_o v39; // [xsp+30h] [xbp-D0h]
  UnityEngine_RaycastHit_o v40; // [xsp+50h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v41; // 0:kr00_12.12
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E7B1 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_BoxCollider_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_WarehouseListViewObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UnityEngine_Physics_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    sub_1C93AD4(&WarehouseListViewManager_TypeInfo);
    byte_4D2E7B1 = 1;
  }
  memset(&v40, 0, sizeof(v40));
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
      ((void (__fastcall *)(WarehouseUIDragDropListViewItem_o *, struct UnityEngine_GameObject_o *, const MethodInfo *))this->klass->vtable._8_OnDragDropRelease.methodPtr)(
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
  v42.fields.z = 0.0;
  v42.fields.x = static_fields->lastTouchPosition.fields.x;
  v42.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_71924968(&v38, v7, v42, 0);
  v39 = v38;
  if ( !UnityEngine_Physics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo);
  v37 = v39;
  if ( !UnityEngine_Physics__Raycast_72438560(&v37, &v40, 0) )
    goto LABEL_26;
  main = (intptr_t)UnityEngine_RaycastHit__get_collider(&v40, 0);
  if ( !main )
    goto LABEL_85;
  Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)main,
                                               (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_WarehouseListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  main = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( (main & 1) == 0 )
    goto LABEL_26;
  if ( !Component_object )
    goto LABEL_85;
  m_CachedPtr = (WarehouseListViewManager_o *)Component_object[1].fields.m_CachedPtr;
  if ( !m_CachedPtr )
  {
LABEL_84:
    main = (intptr_t)WarehouseListViewObject__GetItem((WarehouseListViewObject_o *)Component_object, v6);
    goto LABEL_85;
  }
  naturalAligment = WarehouseListViewManager_TypeInfo->_2.naturalAligment;
  if ( m_CachedPtr->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (WarehouseListViewManager_c *)m_CachedPtr->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewManager_TypeInfo )
  {
    sub_1C940C8(Component_object[1].fields.m_CachedPtr);
    goto LABEL_84;
  }
  main = (intptr_t)WarehouseListViewObject__GetItem(
                     (WarehouseListViewObject_o *)Component_object,
                     (const MethodInfo *)WarehouseListViewManager_TypeInfo);
  if ( !main )
    goto LABEL_85;
  WarehouseListViewManager__SetDragMove(m_CachedPtr, *(_DWORD *)(main + 24), 0);
LABEL_26:
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  main = UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0);
  if ( (main & 1) == 0 )
    return;
  v14 = this->fields.mDragScrollView;
  if ( !v14 )
    goto LABEL_85;
  scrollView = (UnityEngine_Object_o *)v14->fields.scrollView;
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
  v17 = UICamera_TypeInfo;
  v18 = (UnityEngine_Camera_o *)main;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v17 = UICamera_TypeInfo;
  }
  if ( !v18 )
    goto LABEL_85;
  v19 = v17->static_fields;
  v43.fields.z = 0.0;
  v43.fields.x = v19->lastTouchPosition.fields.x;
  v43.fields.y = v19->lastTouchPosition.fields.y;
  v41 = UnityEngine_Camera__ScreenToWorldPoint_71924504(v18, v43, 0);
  if ( !monitor )
    goto LABEL_85;
  main = (intptr_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)monitor, 0);
  if ( !main )
    goto LABEL_85;
  v35 = (unsigned __int64)UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)main, v41, 0);
  v20 = *((float *)monitor + 83);
  v21 = *((float *)monitor + 84);
  ViewSize = UIPanel__GetViewSize((UIPanel_o *)monitor, 0);
  main = (intptr_t)this->fields.mCollider;
  if ( !main )
    goto LABEL_85;
  v23 = UnityEngine_BoxCollider_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)main + 304LL) < (unsigned int)v23
    || *(UnityEngine_BoxCollider_c **)(*(_QWORD *)(*(_QWORD *)main + 200LL) + 8 * v23 - 8) != UnityEngine_BoxCollider_TypeInfo )
  {
    sub_1C940C8(main);
    WarehouseUIDragDropListViewItem__OnDragDropRelease(v32, v33, v34);
    return;
  }
  size = (unsigned __int64)UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)main, 0);
  IsLimitOverPosition2 = UIScrollView__IsLimitOverPosition2((UIScrollView_o *)scrollView, 0);
  if ( IsLimitOverPosition2 )
    this->fields.isLimit = 1;
  if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)scrollView, 0) )
  {
    v25 = (UnityEngine_Object_o *)scrollView[2].fields.m_CachedPtr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v25, 0, 0) )
    {
      main = scrollView[2].fields.m_CachedPtr;
      if ( !main )
        goto LABEL_85;
      if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0) > 0.0 )
      {
        v26 = *((float *)&v35 + 1) - v21;
        v27 = (float)(ViewSize.fields.y - *((float *)&size + 1)) * 0.5;
        if ( !this->fields.isLimit )
        {
          if ( v26 > (float)-v27 )
          {
            if ( v26 < v27 )
              return;
            v44.fields.x = 0.0;
            v44.fields.y = -1.0;
LABEL_76:
            v44.fields.z = 0.0;
            if ( !UIScrollView__IsLimitOverPosition2_49959932((UIScrollView_o *)scrollView, v44, 0) )
            {
              v30 = 0.5;
LABEL_82:
              UIScrollView__Scroll((UIScrollView_o *)scrollView, v30, 0);
              return;
            }
            return;
          }
          v45.fields.x = 0.0;
          v45.fields.y = 1.0;
          goto LABEL_80;
        }
        goto LABEL_66;
      }
    }
  }
  if ( !UIScrollView__get_canMoveHorizontally((UIScrollView_o *)scrollView, 0) )
    goto LABEL_68;
  v29 = (UnityEngine_Object_o *)scrollView[2].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v29, 0, 0) )
  {
LABEL_68:
    if ( IsLimitOverPosition2 )
      return;
    goto LABEL_69;
  }
  main = (intptr_t)scrollView[2].monitor;
  if ( !main )
LABEL_85:
    sub_1C93D2C(main, v6);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0) <= 0.0 )
    goto LABEL_68;
  v26 = *(float *)&v35 - v20;
  v27 = (float)(ViewSize.fields.x - *(float *)&size) * 0.5;
  if ( this->fields.isLimit )
  {
LABEL_66:
    if ( IsLimitOverPosition2 )
    {
      UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0);
      return;
    }
    if ( v26 <= (float)-v27 || v26 >= v27 )
      return;
LABEL_69:
    this->fields.isLimit = 0;
    return;
  }
  if ( v26 > (float)-v27 )
  {
    if ( v26 < v27 )
      return;
    v44.fields.x = -1.0;
    v44.fields.y = 0.0;
    goto LABEL_76;
  }
  v45.fields.x = 1.0;
  v45.fields.y = 0.0;
LABEL_80:
  v45.fields.z = 0.0;
  if ( !UIScrollView__IsLimitOverPosition2_49959932((UIScrollView_o *)scrollView, v45, 0) )
  {
    v30 = -0.5;
    goto LABEL_82;
  }
}