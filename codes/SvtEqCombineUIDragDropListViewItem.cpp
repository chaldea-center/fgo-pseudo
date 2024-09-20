void __fastcall SvtEqCombineUIDragDropListViewItem___ctor(
        SvtEqCombineUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewItem___ctor((UIDragDropListViewItem_o *)this, 0LL);
}


void __fastcall SvtEqCombineUIDragDropListViewItem__DragEnd(
        SvtEqCombineUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x21
  SvtEqCombineUIDragDropListViewItem_o *v3; // x19
  SvtEqCombineListViewObject_o *mListViewObject; // x20
  __int64 methodPtr_low; // x9
  __int64 v6; // x9
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v9; // x8
  UnityEngine_Object_o *scrollView; // x19
  const MethodInfo *v11; // x2

  v3 = this;
  if ( (byte_4A5EDB2 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SvtEqCombineListViewManager_TypeInfo);
    this = (SvtEqCombineUIDragDropListViewItem_o *)sub_1B885B0(&SvtEqCombineListViewObject_TypeInfo);
    byte_4A5EDB2 = 1;
  }
  mListViewObject = (SvtEqCombineListViewObject_o *)v3->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_22;
  methodPtr_low = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_1B88ACC(v3->fields.mListViewObject);
    goto LABEL_20;
  }
  manager = mListViewObject->fields.manager;
  if ( !manager )
  {
LABEL_21:
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0LL, 0LL);
    SvtEqCombineListViewObject__Init_45436248(mListViewObject, 4, v11);
    goto LABEL_22;
  }
  v6 = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v6
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
LABEL_20:
    sub_1B88ACC(manager);
    goto LABEL_21;
  }
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0LL, 0LL);
  SvtEqCombineListViewObject__Init_45436248(mListViewObject, 4, v7);
  ((void (__fastcall *)(struct ListViewManager_o *, Il2CppMethodPointer))manager->klass->vtable._9_ItemDragEnd.method)(
    manager,
    manager->klass->vtable._10_SetSortKind.methodPtr);
  v3->fields.isDrag = 0;
  mDragScrollView = (UnityEngine_Object_o *)v3->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SvtEqCombineUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v3->fields.mDragScrollView;
    if ( !v9 )
      goto LABEL_22;
    scrollView = (UnityEngine_Object_o *)v9->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (SvtEqCombineUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( scrollView )
      {
        UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0LL);
        return;
      }
LABEL_22:
      sub_1B8880C(this, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineUIDragDropListViewItem__OnDragDropMove(
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
  if ( (byte_4A5EDAF & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EDAF = 1;
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
      sub_1B8880C(transform, v8);
    }
    v10 = (UnityEngine_Transform_o *)transform;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    localPosition.fields.y = y + localPosition.fields.y;
    localPosition.fields.z = z + localPosition.fields.z;
    localPosition.fields.x = x + localPosition.fields.x;
    UnityEngine_Transform__set_localPosition(v10, localPosition, 0LL);
  }
}


void __fastcall SvtEqCombineUIDragDropListViewItem__OnDragDropRelease(
        SvtEqCombineUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x0
  __int64 methodPtr_low; // x9
  __int64 v6; // x9
  const MethodInfo *v7; // x1

  if ( (byte_4A5EDB1 & 1) == 0 )
  {
    sub_1B885B0(&SvtEqCombineListViewManager_TypeInfo);
    sub_1B885B0(&SvtEqCombineListViewObject_TypeInfo);
    byte_4A5EDB1 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_1B8880C(mListViewObject, surface);
  surface = (UnityEngine_GameObject_o *)SvtEqCombineListViewObject_TypeInfo;
  methodPtr_low = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    goto LABEL_10;
  }
  mListViewObject = (struct ListViewObject_o *)mListViewObject->fields.manager;
  if ( !mListViewObject )
    goto LABEL_11;
  v6 = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)v6
    || (SvtEqCombineListViewManager_c *)mListViewObject->klass->_2.typeHierarchy[v6 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
LABEL_10:
    sub_1B88ACC(mListViewObject);
    goto LABEL_11;
  }
  SvtEqCombineListViewManager__SetDragEnd(
    (SvtEqCombineListViewManager_o *)mListViewObject,
    (const MethodInfo *)SvtEqCombineListViewManager_TypeInfo);
  SvtEqCombineUIDragDropListViewItem__DragEnd(this, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineUIDragDropListViewItem__OnDragDropStart(
        SvtEqCombineUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mDragScrollView; // x20
  UnityEngine_Collider_o *mCollider; // x0
  __int64 v5; // x1
  struct UIDragScrollView_o *v6; // x8
  SvtEqCombineListViewObject_o *mListViewObject; // x21
  const MethodInfo *v8; // x1
  __int64 methodPtr_low; // x9
  __int64 v10; // x9
  ListViewItem_o *Item; // x22
  const MethodInfo *v12; // x1
  int32_t sortIndex; // w21
  const MethodInfo *v14; // x3
  SvtEqCombineUIDragDropListViewItem_o *v15; // x0
  const MethodInfo *v16; // x1
  long double v17; // q0 OVERLAPPED

  if ( (byte_4A5EDAE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SvtEqCombineListViewManager_TypeInfo);
    sub_1B885B0(&SvtEqCombineListViewObject_TypeInfo);
    byte_4A5EDAE = 1;
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
        (mListViewObject = (SvtEqCombineListViewObject_o *)this->fields.mListViewObject) == 0LL) )
  {
LABEL_22:
    sub_1B8880C(mCollider, v5);
  }
  v8 = (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo;
  methodPtr_low = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == SvtEqCombineListViewObject_TypeInfo )
  {
    mDragScrollView = (UnityEngine_Object_o *)mListViewObject->fields.manager;
    if ( !mDragScrollView
      || (v8 = (const MethodInfo *)SvtEqCombineListViewManager_TypeInfo,
          v10 = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(mDragScrollView->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v10)
      && (SvtEqCombineListViewManager_c *)mDragScrollView->klass->_2.typeHierarchy[v10 - 1] == SvtEqCombineListViewManager_TypeInfo )
    {
      Item = (ListViewItem_o *)SvtEqCombineListViewObject__GetItem(
                                 (SvtEqCombineListViewObject_o *)this->fields.mListViewObject,
                                 v8);
      SvtEqCombineListViewObject__OnDragDropStart(mListViewObject, v12);
      if ( Item )
      {
        sortIndex = Item->fields.sortIndex;
        mCollider = (UnityEngine_Collider_o *)ListViewItem__get_IsSelect(Item, 0LL);
        if ( mDragScrollView )
        {
          SvtEqCombineListViewManager__SetDragStart(
            (SvtEqCombineListViewManager_o *)mDragScrollView,
            sortIndex,
            ((unsigned __int8)mCollider & 1) == 0,
            v14);
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
    sub_1B88ACC(this->fields.mListViewObject);
  }
  v17 = sub_1B88ACC(mDragScrollView);
  SvtEqCombineUIDragDropListViewItem__OnDragDropMove(v15, *(UnityEngine_Vector3_o *)&v17, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineUIDragDropListViewItem__Update(
        SvtEqCombineUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  void *main; // x0
  SvtEqCombineListViewManager_c *v4; // x1
  UICamera_c *v5; // x8
  UnityEngine_Camera_o *v6; // x20
  struct UICamera_StaticFields *static_fields; // x8
  Il2CppObject *Component_object; // x20
  SvtEqCombineListViewManager_o *monitor; // x21
  __int64 methodPtr_low; // x9
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v14; // x8
  struct UIScrollView_o *scrollView; // x20
  struct UIPanel_o *mPanel; // x21
  UICamera_c *v17; // x8
  UnityEngine_Camera_o *v18; // x22
  struct UICamera_StaticFields *v19; // x8
  float v20; // s0
  float v21; // s1
  float v22; // s2
  float v23; // s8
  float v24; // s9
  float v25; // s10
  float x; // s14
  float y; // s15
  float v28; // s8
  float v29; // s11
  UnityEngine_Vector2_o ViewSize; // kr00_8
  __int64 v31; // x9
  float v32; // s10
  float v33; // s13
  bool IsLimitOverPosition2; // w21
  UnityEngine_Object_o *verticalScrollBar; // x22
  float v36; // s0
  float v37; // s1
  float v38; // s0
  float v39; // s1
  UnityEngine_Object_o *horizontalScrollBar; // x22
  int v41; // s2
  float v42; // s0
  float v43; // s0
  float v44; // s1
  int v45; // s2
  SvtEqCombineUIDragDropListViewItem_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x1
  const MethodInfo *v48; // x2
  UnityEngine_Ray_o v49; // [xsp+0h] [xbp-100h] BYREF
  UnityEngine_Ray_o v50; // [xsp+18h] [xbp-E8h] BYREF
  UnityEngine_Ray_o v51; // [xsp+30h] [xbp-D0h]
  UnityEngine_RaycastHit_o v52; // [xsp+50h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5EDB0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_BoxCollider_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_SvtEqCombineListViewObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UnityEngine_Physics_TypeInfo);
    sub_1B885B0(&SvtEqCombineListViewManager_TypeInfo);
    sub_1B885B0(&UICamera_TypeInfo);
    byte_4A5EDB0 = 1;
  }
  memset(&v52, 0, sizeof(v52));
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
  v53.fields.z = 0.0;
  v53.fields.x = static_fields->lastTouchPosition.fields.x;
  v53.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_69266160(&v50, v6, v53, 0LL);
  v51 = v50;
  if ( !UnityEngine_Physics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo);
  v49 = v51;
  if ( UnityEngine_Physics__Raycast_69772272(&v49, &v52, 0LL) )
  {
    main = UnityEngine_RaycastHit__get_collider(&v52, 0LL);
    if ( !main )
      goto LABEL_78;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)main,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_SvtEqCombineListViewObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    main = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)main & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_78;
      monitor = (SvtEqCombineListViewManager_o *)Component_object[2].monitor;
      if ( monitor )
      {
        v4 = SvtEqCombineListViewManager_TypeInfo;
        methodPtr_low = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(monitor->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
          || (SvtEqCombineListViewManager_c *)monitor->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewManager_TypeInfo )
        {
          main = Component_object[2].monitor;
          goto LABEL_80;
        }
      }
      main = SvtEqCombineListViewObject__GetItem(
               (SvtEqCombineListViewObject_o *)Component_object,
               (const MethodInfo *)v4);
      if ( !main || !monitor )
        goto LABEL_78;
      v12 = *((_DWORD *)main + 6);
      if ( monitor->fields.dragEndIndex != v12 )
        SvtEqCombineListViewManager__SetDragSelectItem(monitor, monitor->fields.dragStartIndex, v12, v11);
    }
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  main = (void *)UnityEngine_Object__op_Inequality(mDragScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)main & 1) == 0 )
    return;
  v14 = this->fields.mDragScrollView;
  if ( !v14 )
    goto LABEL_78;
  scrollView = v14->fields.scrollView;
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
  v17 = UICamera_TypeInfo;
  v18 = (UnityEngine_Camera_o *)main;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v17 = UICamera_TypeInfo;
  }
  if ( !v18 )
    goto LABEL_78;
  v19 = v17->static_fields;
  v54.fields.z = 0.0;
  v54.fields.x = v19->lastTouchPosition.fields.x;
  v54.fields.y = v19->lastTouchPosition.fields.y;
  *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Camera__ScreenToWorldPoint_69265696(v18, v54, 0LL);
  if ( !mPanel )
    goto LABEL_78;
  v23 = v20;
  v24 = v21;
  v25 = v22;
  main = UnityEngine_Component__get_transform((UnityEngine_Component_o *)mPanel, 0LL);
  if ( !main )
    goto LABEL_78;
  v55.fields.x = v23;
  v55.fields.y = v24;
  v55.fields.z = v25;
  v56 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)main, v55, 0LL);
  x = mPanel->fields.mClipOffset.fields.x;
  y = mPanel->fields.mClipOffset.fields.y;
  v28 = v56.fields.x;
  v29 = v56.fields.y;
  ViewSize = UIPanel__GetViewSize(mPanel, 0LL);
  main = this->fields.mCollider;
  if ( !main )
    goto LABEL_78;
  v31 = LOBYTE(UnityEngine_BoxCollider_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)main + 304LL) < (unsigned int)v31
    || *(UnityEngine_BoxCollider_c **)(*(_QWORD *)(*(_QWORD *)main + 200LL) + 8 * v31 - 8) != UnityEngine_BoxCollider_TypeInfo )
  {
LABEL_80:
    sub_1B88ACC(main);
    SvtEqCombineUIDragDropListViewItem__OnDragDropRelease(v46, v47, v48);
    return;
  }
  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)main, 0LL);
  v32 = size.fields.x;
  v33 = size.fields.y;
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
        v36 = v29 - y;
        v37 = (float)(ViewSize.fields.y - v33) * 0.5;
        if ( !this->fields.isLimit )
        {
          if ( v36 > (float)-v37 )
          {
            if ( v36 < v37 )
              return;
            v38 = 0.0;
            v39 = -1.0;
LABEL_71:
            v41 = 0;
            if ( !UIScrollView__IsLimitOverPosition2_46748092(scrollView, *(UnityEngine_Vector3_o *)&v38, 0LL) )
            {
              v42 = 0.5;
LABEL_77:
              UIScrollView__Scroll(scrollView, v42, 0LL);
              return;
            }
            return;
          }
          v43 = 0.0;
          v44 = 1.0;
          goto LABEL_75;
        }
        goto LABEL_60;
      }
    }
  }
  if ( !UIScrollView__get_canMoveHorizontally(scrollView, 0LL) )
    goto LABEL_62;
  horizontalScrollBar = (UnityEngine_Object_o *)scrollView->fields.horizontalScrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(horizontalScrollBar, 0LL, 0LL) )
  {
LABEL_62:
    if ( IsLimitOverPosition2 )
      return;
    goto LABEL_63;
  }
  main = scrollView->fields.horizontalScrollBar;
  if ( !main )
LABEL_78:
    sub_1B8880C(main, v4);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0LL) <= 0.0 )
    goto LABEL_62;
  v36 = v28 - x;
  v37 = (float)(ViewSize.fields.x - v32) * 0.5;
  if ( this->fields.isLimit )
  {
LABEL_60:
    if ( IsLimitOverPosition2 )
    {
      UIScrollView__Press(scrollView, 0, 0LL);
      return;
    }
    if ( v36 <= (float)-v37 || v36 >= v37 )
      return;
LABEL_63:
    this->fields.isLimit = 0;
    return;
  }
  if ( v36 > (float)-v37 )
  {
    if ( v36 < v37 )
      return;
    v38 = -1.0;
    v39 = 0.0;
    goto LABEL_71;
  }
  v43 = 1.0;
  v44 = 0.0;
LABEL_75:
  v45 = 0;
  if ( !UIScrollView__IsLimitOverPosition2_46748092(scrollView, *(UnityEngine_Vector3_o *)&v43, 0LL) )
  {
    v42 = -0.5;
    goto LABEL_77;
  }
}