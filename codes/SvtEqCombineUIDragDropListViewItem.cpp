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
  __int64 v4; // x1
  __int64 v5; // x1
  SvtEqCombineListViewObject_o *mListViewObject; // x20
  __int64 methodPtr_low; // x9
  __int64 v8; // x9
  const MethodInfo *v9; // x2
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v11; // x8
  UnityEngine_Object_o *scrollView; // x19
  const MethodInfo *v13; // x2

  v3 = this;
  if ( (byte_4C25E3B & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&SvtEqCombineListViewManager_TypeInfo, v4);
    this = (SvtEqCombineUIDragDropListViewItem_o *)sub_1C3B764(&SvtEqCombineListViewObject_TypeInfo, v5);
    byte_4C25E3B = 1;
  }
  mListViewObject = (SvtEqCombineListViewObject_o *)v3->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_22;
  methodPtr_low = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_1C3BC80(v3->fields.mListViewObject);
    goto LABEL_20;
  }
  manager = mListViewObject->fields.manager;
  if ( !manager )
  {
LABEL_21:
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0LL, 0LL);
    SvtEqCombineListViewObject__Init_47113388(mListViewObject, 4, v13);
    goto LABEL_22;
  }
  v8 = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v8
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
LABEL_20:
    sub_1C3BC80(manager);
    goto LABEL_21;
  }
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0LL, 0LL);
  SvtEqCombineListViewObject__Init_47113388(mListViewObject, 4, v9);
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
    v11 = v3->fields.mDragScrollView;
    if ( !v11 )
      goto LABEL_22;
    scrollView = (UnityEngine_Object_o *)v11->fields.scrollView;
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
      sub_1C3B9C0(this, method);
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
  if ( (byte_4C25E38 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C25E38 = 1;
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
      sub_1C3B9C0(transform, v8);
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
  __int64 v4; // x1
  struct ListViewObject_o *mListViewObject; // x0
  __int64 methodPtr_low; // x9
  __int64 v7; // x9
  const MethodInfo *v8; // x1

  if ( (byte_4C25E3A & 1) == 0 )
  {
    sub_1C3B764(&SvtEqCombineListViewManager_TypeInfo, surface);
    sub_1C3B764(&SvtEqCombineListViewObject_TypeInfo, v4);
    byte_4C25E3A = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_1C3B9C0(mListViewObject, surface);
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
  v7 = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)v7
    || (SvtEqCombineListViewManager_c *)mListViewObject->klass->_2.typeHierarchy[v7 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
LABEL_10:
    sub_1C3BC80(mListViewObject);
    goto LABEL_11;
  }
  SvtEqCombineListViewManager__SetDragEnd(
    (SvtEqCombineListViewManager_o *)mListViewObject,
    (const MethodInfo *)SvtEqCombineListViewManager_TypeInfo);
  SvtEqCombineUIDragDropListViewItem__DragEnd(this, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineUIDragDropListViewItem__OnDragDropStart(
        SvtEqCombineUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *mDragScrollView; // x20
  UnityEngine_Collider_o *mCollider; // x0
  __int64 v7; // x1
  struct UIDragScrollView_o *v8; // x8
  SvtEqCombineListViewObject_o *mListViewObject; // x21
  const MethodInfo *v10; // x1
  __int64 methodPtr_low; // x9
  __int64 v12; // x9
  ListViewItem_o *Item; // x22
  const MethodInfo *v14; // x1
  int32_t sortIndex; // w21
  const MethodInfo *v16; // x3
  SvtEqCombineUIDragDropListViewItem_o *v17; // x0
  const MethodInfo *v18; // x1
  long double v19; // q0 OVERLAPPED

  if ( (byte_4C25E37 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&SvtEqCombineListViewManager_TypeInfo, v3);
    sub_1C3B764(&SvtEqCombineListViewObject_TypeInfo, v4);
    byte_4C25E37 = 1;
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)mCollider & 1) != 0 )
  {
    v8 = this->fields.mDragScrollView;
    if ( !v8 )
      goto LABEL_22;
    mDragScrollView = (UnityEngine_Object_o *)v8->fields.scrollView;
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
    sub_1C3B9C0(mCollider, v7);
  }
  v10 = (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo;
  methodPtr_low = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == SvtEqCombineListViewObject_TypeInfo )
  {
    mDragScrollView = (UnityEngine_Object_o *)mListViewObject->fields.manager;
    if ( !mDragScrollView
      || (v10 = (const MethodInfo *)SvtEqCombineListViewManager_TypeInfo,
          v12 = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(mDragScrollView->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v12)
      && (SvtEqCombineListViewManager_c *)mDragScrollView->klass->_2.typeHierarchy[v12 - 1] == SvtEqCombineListViewManager_TypeInfo )
    {
      Item = (ListViewItem_o *)SvtEqCombineListViewObject__GetItem(
                                 (SvtEqCombineListViewObject_o *)this->fields.mListViewObject,
                                 v10);
      SvtEqCombineListViewObject__OnDragDropStart(mListViewObject, v14);
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
            v16);
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
    sub_1C3BC80(this->fields.mListViewObject);
  }
  v19 = sub_1C3BC80(mDragScrollView);
  SvtEqCombineUIDragDropListViewItem__OnDragDropMove(v17, *(UnityEngine_Vector3_o *)&v19, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineUIDragDropListViewItem__Update(
        SvtEqCombineUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *main; // x0
  SvtEqCombineListViewManager_c *v9; // x1
  UICamera_c *v10; // x8
  UnityEngine_Camera_o *v11; // x20
  struct UICamera_StaticFields *static_fields; // x8
  Il2CppObject *Component_object; // x20
  SvtEqCombineListViewManager_o *monitor; // x21
  __int64 methodPtr_low; // x9
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v19; // x8
  struct UIScrollView_o *scrollView; // x20
  struct UIPanel_o *mPanel; // x21
  UICamera_c *v22; // x8
  UnityEngine_Camera_o *v23; // x22
  struct UICamera_StaticFields *v24; // x8
  float v25; // s0
  float v26; // s1
  float v27; // s2
  float v28; // s8
  float v29; // s9
  float v30; // s10
  float x; // s14
  float y; // s15
  float v33; // s8
  float v34; // s11
  UnityEngine_Vector2_o ViewSize; // kr00_8
  __int64 v36; // x9
  float v37; // s10
  float v38; // s13
  bool IsLimitOverPosition2; // w21
  UnityEngine_Object_o *verticalScrollBar; // x22
  float v41; // s0
  float v42; // s1
  float v43; // s0
  float v44; // s1
  UnityEngine_Object_o *horizontalScrollBar; // x22
  int v46; // s2
  float v47; // s0
  float v48; // s0
  float v49; // s1
  int v50; // s2
  SvtEqCombineUIDragDropListViewItem_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x1
  const MethodInfo *v53; // x2
  UnityEngine_Ray_o v54; // [xsp+0h] [xbp-100h] BYREF
  UnityEngine_Ray_o v55; // [xsp+18h] [xbp-E8h] BYREF
  UnityEngine_Ray_o v56; // [xsp+30h] [xbp-D0h]
  UnityEngine_RaycastHit_o v57; // [xsp+50h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C25E39 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_BoxCollider_TypeInfo, method);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_SvtEqCombineListViewObject___, v3);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v4);
    sub_1C3B764(&UnityEngine_Physics_TypeInfo, v5);
    sub_1C3B764(&SvtEqCombineListViewManager_TypeInfo, v6);
    sub_1C3B764(&UICamera_TypeInfo, v7);
    byte_4C25E39 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  if ( !this->fields.isDrag )
    return;
  main = UnityEngine_Camera__get_main(0LL);
  v10 = UICamera_TypeInfo;
  v11 = (UnityEngine_Camera_o *)main;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v10 = UICamera_TypeInfo;
  }
  if ( !v11 )
    goto LABEL_78;
  static_fields = v10->static_fields;
  v58.fields.z = 0.0;
  v58.fields.x = static_fields->lastTouchPosition.fields.x;
  v58.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_70929208(&v55, v11, v58, 0LL);
  v56 = v55;
  if ( !UnityEngine_Physics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo);
  v54 = v56;
  if ( UnityEngine_Physics__Raycast_71435768(&v54, &v57, 0LL) )
  {
    main = UnityEngine_RaycastHit__get_collider(&v57, 0LL);
    if ( !main )
      goto LABEL_78;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)main,
                         (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_SvtEqCombineListViewObject___);
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
        v9 = SvtEqCombineListViewManager_TypeInfo;
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
               (const MethodInfo *)v9);
      if ( !main || !monitor )
        goto LABEL_78;
      v17 = *((_DWORD *)main + 6);
      if ( monitor->fields.dragEndIndex != v17 )
        SvtEqCombineListViewManager__SetDragSelectItem(monitor, monitor->fields.dragStartIndex, v17, v16);
    }
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  main = (void *)UnityEngine_Object__op_Inequality(mDragScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)main & 1) == 0 )
    return;
  v19 = this->fields.mDragScrollView;
  if ( !v19 )
    goto LABEL_78;
  scrollView = v19->fields.scrollView;
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
  v22 = UICamera_TypeInfo;
  v23 = (UnityEngine_Camera_o *)main;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v22 = UICamera_TypeInfo;
  }
  if ( !v23 )
    goto LABEL_78;
  v24 = v22->static_fields;
  v59.fields.z = 0.0;
  v59.fields.x = v24->lastTouchPosition.fields.x;
  v59.fields.y = v24->lastTouchPosition.fields.y;
  *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Camera__ScreenToWorldPoint_70928744(v23, v59, 0LL);
  if ( !mPanel )
    goto LABEL_78;
  v28 = v25;
  v29 = v26;
  v30 = v27;
  main = UnityEngine_Component__get_transform((UnityEngine_Component_o *)mPanel, 0LL);
  if ( !main )
    goto LABEL_78;
  v60.fields.x = v28;
  v60.fields.y = v29;
  v60.fields.z = v30;
  v61 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)main, v60, 0LL);
  x = mPanel->fields.mClipOffset.fields.x;
  y = mPanel->fields.mClipOffset.fields.y;
  v33 = v61.fields.x;
  v34 = v61.fields.y;
  ViewSize = UIPanel__GetViewSize(mPanel, 0LL);
  main = this->fields.mCollider;
  if ( !main )
    goto LABEL_78;
  v36 = LOBYTE(UnityEngine_BoxCollider_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)main + 304LL) < (unsigned int)v36
    || *(UnityEngine_BoxCollider_c **)(*(_QWORD *)(*(_QWORD *)main + 200LL) + 8 * v36 - 8) != UnityEngine_BoxCollider_TypeInfo )
  {
LABEL_80:
    sub_1C3BC80(main);
    SvtEqCombineUIDragDropListViewItem__OnDragDropRelease(v51, v52, v53);
    return;
  }
  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)main, 0LL);
  v37 = size.fields.x;
  v38 = size.fields.y;
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
        v41 = v34 - y;
        v42 = (float)(ViewSize.fields.y - v38) * 0.5;
        if ( !this->fields.isLimit )
        {
          if ( v41 > (float)-v42 )
          {
            if ( v41 < v42 )
              return;
            v43 = 0.0;
            v44 = -1.0;
LABEL_71:
            v46 = 0;
            if ( !UIScrollView__IsLimitOverPosition2_48183932(scrollView, *(UnityEngine_Vector3_o *)&v43, 0LL) )
            {
              v47 = 0.5;
LABEL_77:
              UIScrollView__Scroll(scrollView, v47, 0LL);
              return;
            }
            return;
          }
          v48 = 0.0;
          v49 = 1.0;
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
    sub_1C3B9C0(main, v9);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0LL) <= 0.0 )
    goto LABEL_62;
  v41 = v33 - x;
  v42 = (float)(ViewSize.fields.x - v37) * 0.5;
  if ( this->fields.isLimit )
  {
LABEL_60:
    if ( IsLimitOverPosition2 )
    {
      UIScrollView__Press(scrollView, 0, 0LL);
      return;
    }
    if ( v41 <= (float)-v42 || v41 >= v42 )
      return;
LABEL_63:
    this->fields.isLimit = 0;
    return;
  }
  if ( v41 > (float)-v42 )
  {
    if ( v41 < v42 )
      return;
    v43 = -1.0;
    v44 = 0.0;
    goto LABEL_71;
  }
  v48 = 1.0;
  v49 = 0.0;
LABEL_75:
  v50 = 0;
  if ( !UIScrollView__IsLimitOverPosition2_48183932(scrollView, *(UnityEngine_Vector3_o *)&v48, 0LL) )
  {
    v47 = -0.5;
    goto LABEL_77;
  }
}