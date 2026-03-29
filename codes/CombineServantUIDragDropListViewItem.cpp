void CombineServantUIDragDropListViewItem___ctor(
        CombineServantUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewItem___ctor((UIDragDropListViewItem_o *)this, 0);
}


void CombineServantUIDragDropListViewItem__DragEnd(
        CombineServantUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x21
  CombineServantUIDragDropListViewItem_o *v3; // x19
  CombineServantListViewObject_o *mListViewObject; // x20
  __int64 naturalAligment; // x9
  __int64 v6; // x9
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v9; // x8
  UnityEngine_Object_o *scrollView; // x19
  const MethodInfo *v11; // x2

  v3 = this;
  if ( (byte_4D2A862 & 1) == 0 )
  {
    sub_1C93AD4(&CombineServantListViewManager_TypeInfo);
    sub_1C93AD4(&CombineServantListViewObject_TypeInfo);
    this = (CombineServantUIDragDropListViewItem_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2A862 = 1;
  }
  mListViewObject = (CombineServantListViewObject_o *)v3->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_22;
  naturalAligment = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1C940C8(v3->fields.mListViewObject);
    goto LABEL_20;
  }
  manager = mListViewObject->fields.manager;
  if ( !manager )
  {
LABEL_21:
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0, 0);
    CombineServantListViewObject__Init_31903856(mListViewObject, 3, v11);
    goto LABEL_22;
  }
  v6 = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)v6
    || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] != CombineServantListViewManager_TypeInfo )
  {
LABEL_20:
    sub_1C940C8(manager);
    goto LABEL_21;
  }
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0, 0);
  CombineServantListViewObject__Init_31903856(mListViewObject, 3, v7);
  ((void (__fastcall *)(struct ListViewManager_o *, const MethodInfo *))manager->klass->vtable._9_ItemDragEnd.methodPtr)(
    manager,
    manager->klass->vtable._9_ItemDragEnd.method);
  v3->fields.dragSurface = 0;
  v3->fields.isDrag = 0;
  sub_1C93A78(&v3->fields.dragSurface, 0);
  mDragScrollView = (UnityEngine_Object_o *)v3->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CombineServantUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v3->fields.mDragScrollView;
    if ( !v9 )
      goto LABEL_22;
    scrollView = (UnityEngine_Object_o *)v9->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (CombineServantUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
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


void CombineServantUIDragDropListViewItem__OnDragDropMove(
        CombineServantUIDragDropListViewItem_o *this,
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
  if ( (byte_4D2A85F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2A85F = 1;
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


void CombineServantUIDragDropListViewItem__OnDragDropRelease(
        CombineServantUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x0
  __int64 naturalAligment; // x9
  __int64 v6; // x9
  const MethodInfo *v7; // x1

  if ( (byte_4D2A861 & 1) == 0 )
  {
    sub_1C93AD4(&CombineServantListViewManager_TypeInfo);
    sub_1C93AD4(&CombineServantListViewObject_TypeInfo);
    byte_4D2A861 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_1C93D2C(mListViewObject, surface);
  surface = (UnityEngine_GameObject_o *)CombineServantListViewObject_TypeInfo;
  naturalAligment = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewObject_TypeInfo )
  {
    goto LABEL_10;
  }
  mListViewObject = (struct ListViewObject_o *)mListViewObject->fields.manager;
  if ( !mListViewObject )
    goto LABEL_11;
  v6 = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)v6
    || (CombineServantListViewManager_c *)mListViewObject->klass->_2.typeHierarchy[v6 - 1] != CombineServantListViewManager_TypeInfo )
  {
LABEL_10:
    mListViewObject = (struct ListViewObject_o *)sub_1C940C8(mListViewObject);
    goto LABEL_11;
  }
  CombineServantListViewManager__SetDragEnd((CombineServantListViewManager_o *)mListViewObject, 0);
  CombineServantUIDragDropListViewItem__DragEnd(this, v7);
}


void CombineServantUIDragDropListViewItem__OnDragDropStart(
        CombineServantUIDragDropListViewItem_o *this,
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
  UICamera_c *v14; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  struct UnityEngine_GameObject_o *dragged; // x1
  CombineServantUIDragDropListViewItem_o *v17; // x0
  const MethodInfo *v18; // x1
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2A85E & 1) == 0 )
  {
    sub_1C93AD4(&CombineServantListViewManager_TypeInfo);
    sub_1C93AD4(&CombineServantListViewObject_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D2A85E = 1;
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
  v8 = (const MethodInfo *)CombineServantListViewObject_TypeInfo;
  naturalAligment = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1C940C8(this->fields.mListViewObject);
LABEL_29:
    v17 = (CombineServantUIDragDropListViewItem_o *)sub_1C940C8(mDragScrollView);
    CombineServantUIDragDropListViewItem__OnDragDropMove(v17, v19, v18);
    return;
  }
  mDragScrollView = (UnityEngine_Object_o *)mListViewObject->fields.manager;
  if ( mDragScrollView )
  {
    v8 = (const MethodInfo *)CombineServantListViewManager_TypeInfo;
    v10 = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
    if ( mDragScrollView->klass->_2.naturalAligment < (unsigned int)v10
      || (CombineServantListViewManager_c *)mDragScrollView->klass->_2.typeHierarchy[v10 - 1] != CombineServantListViewManager_TypeInfo )
    {
      goto LABEL_29;
    }
  }
  Item = (ListViewItem_o *)CombineServantListViewObject__GetItem(
                             (CombineServantListViewObject_o *)this->fields.mListViewObject,
                             v8);
  CombineServantListViewObject__OnDragDropStart((CombineServantListViewObject_o *)mListViewObject, v12);
  if ( !Item )
    goto LABEL_27;
  sortIndex = Item->fields.sortIndex;
  mCollider = (UnityEngine_Collider_o *)ListViewItem__get_IsSelect(Item, 0);
  if ( !mDragScrollView )
    goto LABEL_27;
  CombineServantListViewManager__SetDragStart(
    (CombineServantListViewManager_o *)mDragScrollView,
    sortIndex,
    ((unsigned __int8)mCollider & 1) == 0,
    0);
  ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *))mDragScrollView->klass[1]._1.element_class)(
    mDragScrollView,
    mDragScrollView->klass[1]._1.castClass);
  *(_WORD *)&this->fields.isDrag = 1;
  v14 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v14 = UICamera_TypeInfo;
  }
  currentTouch = v14->static_fields->currentTouch;
  if ( currentTouch )
    dragged = currentTouch->fields.dragged;
  else
    dragged = 0;
  this->fields.dragSurface = dragged;
  sub_1C93A78(&this->fields.dragSurface, dragged);
}


void CombineServantUIDragDropListViewItem__Update(
        CombineServantUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragSurface; // x20
  UnityEngine_GameObject_o *v4; // x20
  intptr_t main; // x0
  const MethodInfo *v6; // x1
  UnityEngine_Camera_o *v7; // x20
  UICamera_c *v8; // x8
  struct UICamera_StaticFields *static_fields; // x8
  UnityEngine_Object_o *Component_object; // x20
  CombineServantListViewManager_o *m_CachedPtr; // x21
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
  CombineServantUIDragDropListViewItem_o *v32; // x0
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

  if ( (byte_4D2A860 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_BoxCollider_TypeInfo);
    sub_1C93AD4(&CombineServantListViewManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_CombineServantListViewObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UnityEngine_Physics_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D2A860 = 1;
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
      ((void (__fastcall *)(CombineServantUIDragDropListViewItem_o *, struct UnityEngine_GameObject_o *, const MethodInfo *))this->klass->vtable._8_OnDragDropRelease.methodPtr)(
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
                                               (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_CombineServantListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  main = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( (main & 1) == 0 )
    goto LABEL_26;
  if ( !Component_object )
    goto LABEL_85;
  m_CachedPtr = (CombineServantListViewManager_o *)Component_object[1].fields.m_CachedPtr;
  if ( !m_CachedPtr )
  {
LABEL_84:
    main = (intptr_t)CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)Component_object, v6);
    goto LABEL_85;
  }
  naturalAligment = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
  if ( m_CachedPtr->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewManager_c *)m_CachedPtr->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewManager_TypeInfo )
  {
    sub_1C940C8(Component_object[1].fields.m_CachedPtr);
    goto LABEL_84;
  }
  main = (intptr_t)CombineServantListViewObject__GetItem(
                     (CombineServantListViewObject_o *)Component_object,
                     (const MethodInfo *)CombineServantListViewManager_TypeInfo);
  if ( !main )
    goto LABEL_85;
  CombineServantListViewManager__SetDragMove(m_CachedPtr, *(_DWORD *)(main + 24), 0);
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
    v32 = (CombineServantUIDragDropListViewItem_o *)sub_1C940C8(main);
    CombineServantUIDragDropListViewItem__OnDragDropRelease(v32, v33, v34);
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