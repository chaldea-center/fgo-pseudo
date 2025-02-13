void __fastcall WarehouseUIDragDropListViewItem___ctor(
        WarehouseUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewItem___ctor((UIDragDropListViewItem_o *)this, 0LL);
}


void __fastcall WarehouseUIDragDropListViewItem__DragEnd(
        WarehouseUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x21
  WarehouseUIDragDropListViewItem_o *v3; // x19
  WarehouseListViewObject_o *mListViewObject; // x20
  __int64 methodPtr_low; // x9
  __int64 v6; // x9
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v9; // x8
  UnityEngine_Object_o *scrollView; // x19
  const MethodInfo *v11; // x2

  v3 = this;
  if ( (byte_4BDA4F0 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&WarehouseListViewManager_TypeInfo);
    this = (WarehouseUIDragDropListViewItem_o *)sub_1C21E38(&WarehouseListViewObject_TypeInfo);
    byte_4BDA4F0 = 1;
  }
  mListViewObject = (WarehouseListViewObject_o *)v3->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_22;
  methodPtr_low = LOBYTE(WarehouseListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (WarehouseListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewObject_TypeInfo )
  {
    sub_1C22354(v3->fields.mListViewObject);
    goto LABEL_20;
  }
  manager = mListViewObject->fields.manager;
  if ( !manager )
  {
LABEL_21:
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0LL, 0LL);
    WarehouseListViewObject__Init_37022888(mListViewObject, 3, v11);
    goto LABEL_22;
  }
  v6 = LOBYTE(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v6
    || (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] != WarehouseListViewManager_TypeInfo )
  {
LABEL_20:
    sub_1C22354(manager);
    goto LABEL_21;
  }
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0LL, 0LL);
  WarehouseListViewObject__Init_37022888(mListViewObject, 3, v7);
  ((void (__fastcall *)(struct ListViewManager_o *, Il2CppMethodPointer))manager->klass->vtable._9_ItemDragEnd.method)(
    manager,
    manager->klass->vtable._10_SetSortKind.methodPtr);
  v3->fields.isDrag = 0;
  mDragScrollView = (UnityEngine_Object_o *)v3->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (WarehouseUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v3->fields.mDragScrollView;
    if ( !v9 )
      goto LABEL_22;
    scrollView = (UnityEngine_Object_o *)v9->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (WarehouseUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( scrollView )
      {
        UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0LL);
        return;
      }
LABEL_22:
      sub_1C22094(this, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseUIDragDropListViewItem__OnDragDropMove(
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
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = delta.fields.z;
  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_4BDA4ED & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDA4ED = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragObject, 0LL, 0LL) )
  {
    transform = this->fields.dragObject;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL )
    {
      sub_1C22094(transform, v8);
    }
    v10 = (UnityEngine_Transform_o *)transform;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    localPosition.fields.y = y + localPosition.fields.y;
    localPosition.fields.z = z + localPosition.fields.z;
    localPosition.fields.x = x + localPosition.fields.x;
    UnityEngine_Transform__set_localPosition(v10, localPosition, 0LL);
  }
}


void __fastcall WarehouseUIDragDropListViewItem__OnDragDropRelease(
        WarehouseUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x0
  __int64 methodPtr_low; // x9
  __int64 v6; // x9
  const MethodInfo *v7; // x1

  if ( (byte_4BDA4EF & 1) == 0 )
  {
    sub_1C21E38(&WarehouseListViewManager_TypeInfo);
    sub_1C21E38(&WarehouseListViewObject_TypeInfo);
    byte_4BDA4EF = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_1C22094(mListViewObject, surface);
  surface = (UnityEngine_GameObject_o *)WarehouseListViewObject_TypeInfo;
  methodPtr_low = LOBYTE(WarehouseListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (WarehouseListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewObject_TypeInfo )
  {
    goto LABEL_10;
  }
  mListViewObject = (struct ListViewObject_o *)mListViewObject->fields.manager;
  if ( !mListViewObject )
    goto LABEL_11;
  v6 = LOBYTE(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)v6
    || (WarehouseListViewManager_c *)mListViewObject->klass->_2.typeHierarchy[v6 - 1] != WarehouseListViewManager_TypeInfo )
  {
LABEL_10:
    sub_1C22354(mListViewObject);
    goto LABEL_11;
  }
  WarehouseListViewManager__SetDragEnd((WarehouseListViewManager_o *)mListViewObject, 0LL);
  WarehouseUIDragDropListViewItem__DragEnd(this, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseUIDragDropListViewItem__OnDragDropStart(
        WarehouseUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mDragScrollView; // x20
  UnityEngine_Collider_o *mCollider; // x0
  __int64 v5; // x1
  struct UIDragScrollView_o *v6; // x8
  WarehouseListViewObject_o *mListViewObject; // x21
  const MethodInfo *v8; // x1
  __int64 methodPtr_low; // x9
  __int64 v10; // x9
  ListViewItem_o *Item; // x22
  const MethodInfo *v12; // x1
  int32_t sortIndex; // w21
  WarehouseUIDragDropListViewItem_o *v14; // x0
  const MethodInfo *v15; // x1
  long double v16; // q0 OVERLAPPED

  if ( (byte_4BDA4EC & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&WarehouseListViewManager_TypeInfo);
    sub_1C21E38(&WarehouseListViewObject_TypeInfo);
    byte_4BDA4EC = 1;
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)mCollider & 1) != 0 )
  {
    v6 = this->fields.mDragScrollView;
    if ( !v6 )
      goto LABEL_22;
    mDragScrollView = (UnityEngine_Object_o *)v6->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0LL, 0LL);
    if ( ((unsigned __int8)mCollider & 1) != 0 )
    {
      if ( !mDragScrollView )
        goto LABEL_22;
      UIScrollView__Press((UIScrollView_o *)mDragScrollView, 0, 0LL);
    }
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0LL);
  mCollider = this->fields.mCollider;
  if ( !mCollider
    || (UnityEngine_Collider__set_enabled(mCollider, 1, 0LL),
        (mListViewObject = (WarehouseListViewObject_o *)this->fields.mListViewObject) == 0LL) )
  {
LABEL_22:
    sub_1C22094(mCollider, v5);
  }
  v8 = (const MethodInfo *)WarehouseListViewObject_TypeInfo;
  methodPtr_low = LOBYTE(WarehouseListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (WarehouseListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == WarehouseListViewObject_TypeInfo )
  {
    mDragScrollView = (UnityEngine_Object_o *)mListViewObject->fields.manager;
    if ( !mDragScrollView
      || (v8 = (const MethodInfo *)WarehouseListViewManager_TypeInfo,
          v10 = LOBYTE(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(mDragScrollView->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v10)
      && (WarehouseListViewManager_c *)mDragScrollView->klass->_2.typeHierarchy[v10 - 1] == WarehouseListViewManager_TypeInfo )
    {
      Item = (ListViewItem_o *)WarehouseListViewObject__GetItem(
                                 (WarehouseListViewObject_o *)this->fields.mListViewObject,
                                 v8);
      WarehouseListViewObject__OnDragDropStart(mListViewObject, v12);
      if ( Item )
      {
        sortIndex = Item->fields.sortIndex;
        mCollider = (UnityEngine_Collider_o *)ListViewItem__get_IsSelect(Item, 0LL);
        if ( mDragScrollView )
        {
          WarehouseListViewManager__SetDragStart(
            (WarehouseListViewManager_o *)mDragScrollView,
            sortIndex,
            ((unsigned __int8)mCollider & 1) == 0,
            0LL);
          ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *))mDragScrollView->klass[1]._1.castClass)(
            mDragScrollView,
            mDragScrollView->klass[1]._1.declaringType);
          *(_WORD *)&this->fields.isDrag = 1;
          return;
        }
      }
      goto LABEL_22;
    }
  }
  else
  {
    sub_1C22354(this->fields.mListViewObject);
  }
  v16 = sub_1C22354(mDragScrollView);
  WarehouseUIDragDropListViewItem__OnDragDropMove(v14, *(UnityEngine_Vector3_o *)&v16, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseUIDragDropListViewItem__Update(
        WarehouseUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  void *main; // x0
  const MethodInfo *v4; // x1
  UICamera_c *v5; // x8
  UnityEngine_Camera_o *v6; // x20
  struct UICamera_StaticFields *static_fields; // x8
  Il2CppObject *Component_object; // x20
  WarehouseListViewManager_o *monitor; // x21
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v12; // x8
  struct UIScrollView_o *scrollView; // x20
  struct UIPanel_o *mPanel; // x21
  UICamera_c *v15; // x8
  UnityEngine_Camera_o *v16; // x22
  struct UICamera_StaticFields *v17; // x8
  float v18; // s0
  float v19; // s1
  float v20; // s2
  float v21; // s8
  float v22; // s9
  float v23; // s10
  float x; // s14
  float y; // s15
  float v26; // s8
  float v27; // s11
  UnityEngine_Vector2_o ViewSize; // kr00_8
  __int64 v29; // x9
  float v30; // s10
  float v31; // s13
  bool IsLimitOverPosition2; // w21
  UnityEngine_Object_o *verticalScrollBar; // x22
  float v34; // s0
  float v35; // s1
  float v36; // s0
  float v37; // s1
  UnityEngine_Object_o *horizontalScrollBar; // x22
  int v39; // s2
  float v40; // s0
  float v41; // s0
  float v42; // s1
  int v43; // s2
  WarehouseUIDragDropListViewItem_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x1
  const MethodInfo *v46; // x2
  UnityEngine_Ray_o v47; // [xsp+0h] [xbp-100h] BYREF
  UnityEngine_Ray_o v48; // [xsp+18h] [xbp-E8h] BYREF
  UnityEngine_Ray_o v49; // [xsp+30h] [xbp-D0h]
  UnityEngine_RaycastHit_o v50; // [xsp+50h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDA4EE & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_BoxCollider_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_WarehouseListViewObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UnityEngine_Physics_TypeInfo);
    sub_1C21E38(&UICamera_TypeInfo);
    sub_1C21E38(&WarehouseListViewManager_TypeInfo);
    byte_4BDA4EE = 1;
  }
  memset(&v50, 0, sizeof(v50));
  if ( !this->fields.isDrag )
    return;
  main = UnityEngine_Camera__get_main(0LL);
  v5 = UICamera_TypeInfo;
  v6 = (UnityEngine_Camera_o *)main;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v5 = UICamera_TypeInfo;
  }
  if ( !v6 )
    goto LABEL_78;
  static_fields = v5->static_fields;
  v51.fields.z = 0.0;
  v51.fields.x = static_fields->lastTouchPosition.fields.x;
  v51.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_70676072(&v48, v6, v51, 0LL);
  v49 = v48;
  if ( !UnityEngine_Physics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo);
  v47 = v49;
  if ( !UnityEngine_Physics__Raycast_71182632(&v47, &v50, 0LL) )
    goto LABEL_20;
  main = UnityEngine_RaycastHit__get_collider(&v50, 0LL);
  if ( !main )
    goto LABEL_78;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)main,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_WarehouseListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  main = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)main & 1) == 0 )
    goto LABEL_20;
  if ( !Component_object )
    goto LABEL_78;
  monitor = (WarehouseListViewManager_o *)Component_object[2].monitor;
  if ( !monitor )
  {
LABEL_77:
    main = WarehouseListViewObject__GetItem((WarehouseListViewObject_o *)Component_object, v4);
    goto LABEL_78;
  }
  methodPtr_low = LOBYTE(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(monitor->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (WarehouseListViewManager_c *)monitor->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewManager_TypeInfo )
  {
    sub_1C22354(Component_object[2].monitor);
    goto LABEL_77;
  }
  main = WarehouseListViewObject__GetItem(
           (WarehouseListViewObject_o *)Component_object,
           (const MethodInfo *)WarehouseListViewManager_TypeInfo);
  if ( !main )
    goto LABEL_78;
  WarehouseListViewManager__SetDragMove(monitor, *((_DWORD *)main + 6), 0LL);
LABEL_20:
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  main = (void *)UnityEngine_Object__op_Inequality(mDragScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)main & 1) == 0 )
    return;
  v12 = this->fields.mDragScrollView;
  if ( !v12 )
    goto LABEL_78;
  scrollView = v12->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  main = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)scrollView, 0LL, 0LL);
  if ( ((unsigned __int8)main & 1) == 0 )
    return;
  if ( !scrollView )
    goto LABEL_78;
  mPanel = scrollView->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)mPanel, 0LL, 0LL) )
    return;
  main = UnityEngine_Camera__get_main(0LL);
  v15 = UICamera_TypeInfo;
  v16 = (UnityEngine_Camera_o *)main;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v15 = UICamera_TypeInfo;
  }
  if ( !v16 )
    goto LABEL_78;
  v17 = v15->static_fields;
  v52.fields.z = 0.0;
  v52.fields.x = v17->lastTouchPosition.fields.x;
  v52.fields.y = v17->lastTouchPosition.fields.y;
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Camera__ScreenToWorldPoint_70675608(v16, v52, 0LL);
  if ( !mPanel )
    goto LABEL_78;
  v21 = v18;
  v22 = v19;
  v23 = v20;
  main = UnityEngine_Component__get_transform((UnityEngine_Component_o *)mPanel, 0LL);
  if ( !main )
    goto LABEL_78;
  v53.fields.x = v21;
  v53.fields.y = v22;
  v53.fields.z = v23;
  v54 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)main, v53, 0LL);
  x = mPanel->fields.mClipOffset.fields.x;
  y = mPanel->fields.mClipOffset.fields.y;
  v26 = v54.fields.x;
  v27 = v54.fields.y;
  ViewSize = UIPanel__GetViewSize(mPanel, 0LL);
  main = this->fields.mCollider;
  if ( !main )
    goto LABEL_78;
  v29 = LOBYTE(UnityEngine_BoxCollider_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)main + 304LL) < (unsigned int)v29
    || *(UnityEngine_BoxCollider_c **)(*(_QWORD *)(*(_QWORD *)main + 200LL) + 8 * v29 - 8) != UnityEngine_BoxCollider_TypeInfo )
  {
    sub_1C22354(main);
    WarehouseUIDragDropListViewItem__OnDragDropRelease(v44, v45, v46);
    return;
  }
  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)main, 0LL);
  v30 = size.fields.x;
  v31 = size.fields.y;
  IsLimitOverPosition2 = UIScrollView__IsLimitOverPosition2(scrollView, 0LL);
  if ( IsLimitOverPosition2 )
    this->fields.isLimit = 1;
  if ( UIScrollView__get_canMoveVertically(scrollView, 0LL) )
  {
    verticalScrollBar = (UnityEngine_Object_o *)scrollView->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(verticalScrollBar, 0LL, 0LL) )
    {
      main = scrollView->fields.verticalScrollBar;
      if ( !main )
        goto LABEL_78;
      if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0LL) > 0.0 )
      {
        v34 = v27 - y;
        v35 = (float)(ViewSize.fields.y - v31) * 0.5;
        if ( !this->fields.isLimit )
        {
          if ( v34 > (float)-v35 )
          {
            if ( v34 < v35 )
              return;
            v36 = 0.0;
            v37 = -1.0;
LABEL_69:
            v39 = 0;
            if ( !UIScrollView__IsLimitOverPosition2_47922736(scrollView, *(UnityEngine_Vector3_o *)&v36, 0LL) )
            {
              v40 = 0.5;
LABEL_75:
              UIScrollView__Scroll(scrollView, v40, 0LL);
              return;
            }
            return;
          }
          v41 = 0.0;
          v42 = 1.0;
          goto LABEL_73;
        }
        goto LABEL_58;
      }
    }
  }
  if ( !UIScrollView__get_canMoveHorizontally(scrollView, 0LL) )
    goto LABEL_60;
  horizontalScrollBar = (UnityEngine_Object_o *)scrollView->fields.horizontalScrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(horizontalScrollBar, 0LL, 0LL) )
  {
LABEL_60:
    if ( IsLimitOverPosition2 )
      return;
    goto LABEL_61;
  }
  main = scrollView->fields.horizontalScrollBar;
  if ( !main )
LABEL_78:
    sub_1C22094(main, v4);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0LL) <= 0.0 )
    goto LABEL_60;
  v34 = v26 - x;
  v35 = (float)(ViewSize.fields.x - v30) * 0.5;
  if ( this->fields.isLimit )
  {
LABEL_58:
    if ( IsLimitOverPosition2 )
    {
      UIScrollView__Press(scrollView, 0, 0LL);
      return;
    }
    if ( v34 <= (float)-v35 || v34 >= v35 )
      return;
LABEL_61:
    this->fields.isLimit = 0;
    return;
  }
  if ( v34 > (float)-v35 )
  {
    if ( v34 < v35 )
      return;
    v36 = -1.0;
    v37 = 0.0;
    goto LABEL_69;
  }
  v41 = 1.0;
  v42 = 0.0;
LABEL_73:
  v43 = 0;
  if ( !UIScrollView__IsLimitOverPosition2_47922736(scrollView, *(UnityEngine_Vector3_o *)&v41, 0LL) )
  {
    v40 = -0.5;
    goto LABEL_75;
  }
}