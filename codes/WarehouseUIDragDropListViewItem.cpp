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
  __int64 v2; // x2
  struct ListViewManager_o *manager; // x21
  WarehouseUIDragDropListViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  WarehouseListViewObject_o *mListViewObject; // x20
  __int64 methodPtr_low; // x9
  __int64 v11; // x9
  const MethodInfo *v12; // x2
  __int64 v13; // x1
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v15; // x8
  UnityEngine_Object_o *scrollView; // x19
  const MethodInfo *v17; // x2

  v4 = this;
  if ( (byte_4B141FE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&WarehouseListViewManager_TypeInfo, v5, v6);
    this = (WarehouseUIDragDropListViewItem_o *)sub_1BCA7E0(&WarehouseListViewObject_TypeInfo, v7, v8);
    byte_4B141FE = 1;
  }
  mListViewObject = (WarehouseListViewObject_o *)v4->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_22;
  methodPtr_low = LOBYTE(WarehouseListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (WarehouseListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewObject_TypeInfo )
  {
    sub_1BCACFC(v4->fields.mListViewObject);
    goto LABEL_20;
  }
  manager = mListViewObject->fields.manager;
  if ( !manager )
  {
LABEL_21:
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v4, 0LL, 0LL);
    WarehouseListViewObject__Init_36533776(mListViewObject, 3, v17);
    goto LABEL_22;
  }
  v11 = LOBYTE(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v11
    || (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[v11 - 1] != WarehouseListViewManager_TypeInfo )
  {
LABEL_20:
    sub_1BCACFC(manager);
    goto LABEL_21;
  }
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v4, 0LL, 0LL);
  WarehouseListViewObject__Init_36533776(mListViewObject, 3, v12);
  ((void (__fastcall *)(struct ListViewManager_o *, Il2CppMethodPointer))manager->klass->vtable._9_ItemDragEnd.method)(
    manager,
    manager->klass->vtable._10_SetSortKind.methodPtr);
  v4->fields.isDrag = 0;
  mDragScrollView = (UnityEngine_Object_o *)v4->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  this = (WarehouseUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v15 = v4->fields.mDragScrollView;
    if ( !v15 )
      goto LABEL_22;
    scrollView = (UnityEngine_Object_o *)v15->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (WarehouseUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( scrollView )
      {
        UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0LL);
        return;
      }
LABEL_22:
      sub_1BCAA3C(this, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseUIDragDropListViewItem__OnDragDropMove(
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
  if ( (byte_4B141FB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    byte_4B141FB = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(dragObject, 0LL, 0LL) )
  {
    transform = this->fields.dragObject;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL )
    {
      sub_1BCAA3C(transform, v9);
    }
    v11 = (UnityEngine_Transform_o *)transform;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    localPosition.fields.y = y + localPosition.fields.y;
    localPosition.fields.z = z + localPosition.fields.z;
    localPosition.fields.x = x + localPosition.fields.x;
    UnityEngine_Transform__set_localPosition(v11, localPosition, 0LL);
  }
}


void __fastcall WarehouseUIDragDropListViewItem__OnDragDropRelease(
        WarehouseUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewObject_o *mListViewObject; // x0
  __int64 methodPtr_low; // x9
  __int64 v8; // x9
  const MethodInfo *v9; // x1

  if ( (byte_4B141FD & 1) == 0 )
  {
    sub_1BCA7E0(&WarehouseListViewManager_TypeInfo, surface, method);
    sub_1BCA7E0(&WarehouseListViewObject_TypeInfo, v4, v5);
    byte_4B141FD = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_1BCAA3C(mListViewObject, surface);
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
  v8 = LOBYTE(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)v8
    || (WarehouseListViewManager_c *)mListViewObject->klass->_2.typeHierarchy[v8 - 1] != WarehouseListViewManager_TypeInfo )
  {
LABEL_10:
    sub_1BCACFC(mListViewObject);
    goto LABEL_11;
  }
  WarehouseListViewManager__SetDragEnd((WarehouseListViewManager_o *)mListViewObject, 0LL);
  WarehouseUIDragDropListViewItem__DragEnd(this, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseUIDragDropListViewItem__OnDragDropStart(
        WarehouseUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *mDragScrollView; // x20
  UnityEngine_Collider_o *mCollider; // x0
  __int64 v10; // x1
  struct UIDragScrollView_o *v11; // x8
  WarehouseListViewObject_o *mListViewObject; // x21
  const MethodInfo *v13; // x1
  __int64 methodPtr_low; // x9
  __int64 v15; // x9
  ListViewItem_o *Item; // x22
  const MethodInfo *v17; // x1
  int32_t sortIndex; // w21
  WarehouseUIDragDropListViewItem_o *v19; // x0
  const MethodInfo *v20; // x1
  long double v21; // q0 OVERLAPPED

  if ( (byte_4B141FA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&WarehouseListViewManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&WarehouseListViewObject_TypeInfo, v6, v7);
    byte_4B141FA = 1;
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  mCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)mCollider & 1) != 0 )
  {
    v11 = this->fields.mDragScrollView;
    if ( !v11 )
      goto LABEL_22;
    mDragScrollView = (UnityEngine_Object_o *)v11->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
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
    sub_1BCAA3C(mCollider, v10);
  }
  v13 = (const MethodInfo *)WarehouseListViewObject_TypeInfo;
  methodPtr_low = LOBYTE(WarehouseListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (WarehouseListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == WarehouseListViewObject_TypeInfo )
  {
    mDragScrollView = (UnityEngine_Object_o *)mListViewObject->fields.manager;
    if ( !mDragScrollView
      || (v13 = (const MethodInfo *)WarehouseListViewManager_TypeInfo,
          v15 = LOBYTE(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(mDragScrollView->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v15)
      && (WarehouseListViewManager_c *)mDragScrollView->klass->_2.typeHierarchy[v15 - 1] == WarehouseListViewManager_TypeInfo )
    {
      Item = (ListViewItem_o *)WarehouseListViewObject__GetItem(
                                 (WarehouseListViewObject_o *)this->fields.mListViewObject,
                                 v13);
      WarehouseListViewObject__OnDragDropStart(mListViewObject, v17);
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
    sub_1BCACFC(this->fields.mListViewObject);
  }
  v21 = sub_1BCACFC(mDragScrollView);
  WarehouseUIDragDropListViewItem__OnDragDropMove(v19, *(UnityEngine_Vector3_o *)&v21, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseUIDragDropListViewItem__Update(
        WarehouseUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  void *main; // x0
  const MethodInfo *v15; // x1
  UICamera_c *v16; // x8
  UnityEngine_Camera_o *v17; // x20
  struct UICamera_StaticFields *static_fields; // x8
  __int64 v19; // x1
  __int64 v20; // x1
  Il2CppObject *Component_object; // x20
  WarehouseListViewManager_o *monitor; // x21
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v25; // x8
  struct UIScrollView_o *scrollView; // x20
  struct UIPanel_o *mPanel; // x21
  UICamera_c *v28; // x8
  UnityEngine_Camera_o *v29; // x22
  struct UICamera_StaticFields *v30; // x8
  float v31; // s0
  float v32; // s1
  float v33; // s2
  float v34; // s8
  float v35; // s9
  float v36; // s10
  float x; // s14
  float y; // s15
  float v39; // s8
  float v40; // s11
  UnityEngine_Vector2_o ViewSize; // kr00_8
  __int64 v42; // x9
  float v43; // s10
  float v44; // s13
  bool IsLimitOverPosition2; // w21
  __int64 v46; // x1
  UnityEngine_Object_o *verticalScrollBar; // x22
  float v48; // s0
  float v49; // s1
  float v50; // s0
  float v51; // s1
  __int64 v52; // x1
  UnityEngine_Object_o *horizontalScrollBar; // x22
  int v54; // s2
  float v55; // s0
  float v56; // s0
  float v57; // s1
  int v58; // s2
  WarehouseUIDragDropListViewItem_o *v59; // x0
  UnityEngine_GameObject_o *v60; // x1
  const MethodInfo *v61; // x2
  UnityEngine_Ray_o v62; // [xsp+0h] [xbp-100h] BYREF
  UnityEngine_Ray_o v63; // [xsp+18h] [xbp-E8h] BYREF
  UnityEngine_Ray_o v64; // [xsp+30h] [xbp-D0h]
  UnityEngine_RaycastHit_o v65; // [xsp+50h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B141FC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_BoxCollider_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_WarehouseListViewObject___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Physics_TypeInfo, v8, v9);
    sub_1BCA7E0(&UICamera_TypeInfo, v10, v11);
    sub_1BCA7E0(&WarehouseListViewManager_TypeInfo, v12, v13);
    byte_4B141FC = 1;
  }
  memset(&v65, 0, sizeof(v65));
  if ( !this->fields.isDrag )
    return;
  main = UnityEngine_Camera__get_main(0LL);
  v16 = UICamera_TypeInfo;
  v17 = (UnityEngine_Camera_o *)main;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v15);
    v16 = UICamera_TypeInfo;
  }
  if ( !v17 )
    goto LABEL_78;
  static_fields = v16->static_fields;
  v66.fields.z = 0.0;
  v66.fields.x = static_fields->lastTouchPosition.fields.x;
  v66.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_69960936(&v63, v17, v66, 0LL);
  v64 = v63;
  if ( !UnityEngine_Physics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo, v19);
  v62 = v64;
  if ( !UnityEngine_Physics__Raycast_70467096(&v62, &v65, 0LL) )
    goto LABEL_20;
  main = UnityEngine_RaycastHit__get_collider(&v65, 0LL);
  if ( !main )
    goto LABEL_78;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)main,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_WarehouseListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  main = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)main & 1) == 0 )
    goto LABEL_20;
  if ( !Component_object )
    goto LABEL_78;
  monitor = (WarehouseListViewManager_o *)Component_object[2].monitor;
  if ( !monitor )
  {
LABEL_77:
    main = WarehouseListViewObject__GetItem((WarehouseListViewObject_o *)Component_object, v15);
    goto LABEL_78;
  }
  methodPtr_low = LOBYTE(WarehouseListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(monitor->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (WarehouseListViewManager_c *)monitor->klass->_2.typeHierarchy[methodPtr_low - 1] != WarehouseListViewManager_TypeInfo )
  {
    sub_1BCACFC(Component_object[2].monitor);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  main = (void *)UnityEngine_Object__op_Inequality(mDragScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)main & 1) == 0 )
    return;
  v25 = this->fields.mDragScrollView;
  if ( !v25 )
    goto LABEL_78;
  scrollView = v25->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  main = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)scrollView, 0LL, 0LL);
  if ( ((unsigned __int8)main & 1) == 0 )
    return;
  if ( !scrollView )
    goto LABEL_78;
  mPanel = scrollView->fields.mPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)mPanel, 0LL, 0LL) )
    return;
  main = UnityEngine_Camera__get_main(0LL);
  v28 = UICamera_TypeInfo;
  v29 = (UnityEngine_Camera_o *)main;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v15);
    v28 = UICamera_TypeInfo;
  }
  if ( !v29 )
    goto LABEL_78;
  v30 = v28->static_fields;
  v67.fields.z = 0.0;
  v67.fields.x = v30->lastTouchPosition.fields.x;
  v67.fields.y = v30->lastTouchPosition.fields.y;
  *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Camera__ScreenToWorldPoint_69960472(v29, v67, 0LL);
  if ( !mPanel )
    goto LABEL_78;
  v34 = v31;
  v35 = v32;
  v36 = v33;
  main = UnityEngine_Component__get_transform((UnityEngine_Component_o *)mPanel, 0LL);
  if ( !main )
    goto LABEL_78;
  v68.fields.x = v34;
  v68.fields.y = v35;
  v68.fields.z = v36;
  v69 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)main, v68, 0LL);
  x = mPanel->fields.mClipOffset.fields.x;
  y = mPanel->fields.mClipOffset.fields.y;
  v39 = v69.fields.x;
  v40 = v69.fields.y;
  ViewSize = UIPanel__GetViewSize(mPanel, 0LL);
  main = this->fields.mCollider;
  if ( !main )
    goto LABEL_78;
  v42 = LOBYTE(UnityEngine_BoxCollider_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)main + 304LL) < (unsigned int)v42
    || *(UnityEngine_BoxCollider_c **)(*(_QWORD *)(*(_QWORD *)main + 200LL) + 8 * v42 - 8) != UnityEngine_BoxCollider_TypeInfo )
  {
    sub_1BCACFC(main);
    WarehouseUIDragDropListViewItem__OnDragDropRelease(v59, v60, v61);
    return;
  }
  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)main, 0LL);
  v43 = size.fields.x;
  v44 = size.fields.y;
  IsLimitOverPosition2 = UIScrollView__IsLimitOverPosition2(scrollView, 0LL);
  if ( IsLimitOverPosition2 )
    this->fields.isLimit = 1;
  if ( UIScrollView__get_canMoveVertically(scrollView, 0LL) )
  {
    verticalScrollBar = (UnityEngine_Object_o *)scrollView->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46);
    if ( UnityEngine_Object__op_Inequality(verticalScrollBar, 0LL, 0LL) )
    {
      main = scrollView->fields.verticalScrollBar;
      if ( !main )
        goto LABEL_78;
      if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0LL) > 0.0 )
      {
        v48 = v40 - y;
        v49 = (float)(ViewSize.fields.y - v44) * 0.5;
        if ( !this->fields.isLimit )
        {
          if ( v48 > (float)-v49 )
          {
            if ( v48 < v49 )
              return;
            v50 = 0.0;
            v51 = -1.0;
LABEL_69:
            v54 = 0;
            if ( !UIScrollView__IsLimitOverPosition2_47310024(scrollView, *(UnityEngine_Vector3_o *)&v50, 0LL) )
            {
              v55 = 0.5;
LABEL_75:
              UIScrollView__Scroll(scrollView, v55, 0LL);
              return;
            }
            return;
          }
          v56 = 0.0;
          v57 = 1.0;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52);
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
    sub_1BCAA3C(main, v15);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0LL) <= 0.0 )
    goto LABEL_60;
  v48 = v39 - x;
  v49 = (float)(ViewSize.fields.x - v43) * 0.5;
  if ( this->fields.isLimit )
  {
LABEL_58:
    if ( IsLimitOverPosition2 )
    {
      UIScrollView__Press(scrollView, 0, 0LL);
      return;
    }
    if ( v48 <= (float)-v49 || v48 >= v49 )
      return;
LABEL_61:
    this->fields.isLimit = 0;
    return;
  }
  if ( v48 > (float)-v49 )
  {
    if ( v48 < v49 )
      return;
    v50 = -1.0;
    v51 = 0.0;
    goto LABEL_69;
  }
  v56 = 1.0;
  v57 = 0.0;
LABEL_73:
  v58 = 0;
  if ( !UIScrollView__IsLimitOverPosition2_47310024(scrollView, *(UnityEngine_Vector3_o *)&v56, 0LL) )
  {
    v55 = -0.5;
    goto LABEL_75;
  }
}