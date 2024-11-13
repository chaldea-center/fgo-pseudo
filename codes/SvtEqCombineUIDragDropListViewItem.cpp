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
  __int64 v2; // x2
  struct ListViewManager_o *manager; // x21
  SvtEqCombineUIDragDropListViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  SvtEqCombineListViewObject_o *mListViewObject; // x20
  __int64 methodPtr_low; // x9
  __int64 v11; // x9
  const MethodInfo *v12; // x2
  __int64 v13; // x1
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v15; // x8
  UnityEngine_Object_o *scrollView; // x19
  const MethodInfo *v17; // x2

  v4 = this;
  if ( (byte_4B19F22 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&SvtEqCombineListViewManager_TypeInfo, v5, v6);
    this = (SvtEqCombineUIDragDropListViewItem_o *)sub_1BCA7E0(&SvtEqCombineListViewObject_TypeInfo, v7, v8);
    byte_4B19F22 = 1;
  }
  mListViewObject = (SvtEqCombineListViewObject_o *)v4->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_22;
  methodPtr_low = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_1BCACFC(v4->fields.mListViewObject);
    goto LABEL_20;
  }
  manager = mListViewObject->fields.manager;
  if ( !manager )
  {
LABEL_21:
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v4, 0LL, 0LL);
    SvtEqCombineListViewObject__Init_46249876(mListViewObject, 4, v17);
    goto LABEL_22;
  }
  v11 = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v11
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v11 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
LABEL_20:
    sub_1BCACFC(manager);
    goto LABEL_21;
  }
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v4, 0LL, 0LL);
  SvtEqCombineListViewObject__Init_46249876(mListViewObject, 4, v12);
  ((void (__fastcall *)(struct ListViewManager_o *, Il2CppMethodPointer))manager->klass->vtable._9_ItemDragEnd.method)(
    manager,
    manager->klass->vtable._10_SetSortKind.methodPtr);
  v4->fields.isDrag = 0;
  mDragScrollView = (UnityEngine_Object_o *)v4->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  this = (SvtEqCombineUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v15 = v4->fields.mDragScrollView;
    if ( !v15 )
      goto LABEL_22;
    scrollView = (UnityEngine_Object_o *)v15->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (SvtEqCombineUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
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
void __fastcall SvtEqCombineUIDragDropListViewItem__OnDragDropMove(
        SvtEqCombineUIDragDropListViewItem_o *this,
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
  if ( (byte_4B19F1F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    byte_4B19F1F = 1;
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


void __fastcall SvtEqCombineUIDragDropListViewItem__OnDragDropRelease(
        SvtEqCombineUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewObject_o *mListViewObject; // x0
  __int64 methodPtr_low; // x9
  __int64 v8; // x9
  const MethodInfo *v9; // x1

  if ( (byte_4B19F21 & 1) == 0 )
  {
    sub_1BCA7E0(&SvtEqCombineListViewManager_TypeInfo, surface, method);
    sub_1BCA7E0(&SvtEqCombineListViewObject_TypeInfo, v4, v5);
    byte_4B19F21 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_1BCAA3C(mListViewObject, surface);
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
  v8 = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)v8
    || (SvtEqCombineListViewManager_c *)mListViewObject->klass->_2.typeHierarchy[v8 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
LABEL_10:
    sub_1BCACFC(mListViewObject);
    goto LABEL_11;
  }
  SvtEqCombineListViewManager__SetDragEnd(
    (SvtEqCombineListViewManager_o *)mListViewObject,
    (const MethodInfo *)SvtEqCombineListViewManager_TypeInfo);
  SvtEqCombineUIDragDropListViewItem__DragEnd(this, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineUIDragDropListViewItem__OnDragDropStart(
        SvtEqCombineUIDragDropListViewItem_o *this,
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
  SvtEqCombineListViewObject_o *mListViewObject; // x21
  const MethodInfo *v13; // x1
  __int64 methodPtr_low; // x9
  __int64 v15; // x9
  ListViewItem_o *Item; // x22
  const MethodInfo *v17; // x1
  int32_t sortIndex; // w21
  const MethodInfo *v19; // x3
  SvtEqCombineUIDragDropListViewItem_o *v20; // x0
  const MethodInfo *v21; // x1
  long double v22; // q0 OVERLAPPED

  if ( (byte_4B19F1E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&SvtEqCombineListViewManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&SvtEqCombineListViewObject_TypeInfo, v6, v7);
    byte_4B19F1E = 1;
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
        (mListViewObject = (SvtEqCombineListViewObject_o *)this->fields.mListViewObject) == 0LL) )
  {
LABEL_22:
    sub_1BCAA3C(mCollider, v10);
  }
  v13 = (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo;
  methodPtr_low = LOBYTE(SvtEqCombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == SvtEqCombineListViewObject_TypeInfo )
  {
    mDragScrollView = (UnityEngine_Object_o *)mListViewObject->fields.manager;
    if ( !mDragScrollView
      || (v13 = (const MethodInfo *)SvtEqCombineListViewManager_TypeInfo,
          v15 = LOBYTE(SvtEqCombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(mDragScrollView->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v15)
      && (SvtEqCombineListViewManager_c *)mDragScrollView->klass->_2.typeHierarchy[v15 - 1] == SvtEqCombineListViewManager_TypeInfo )
    {
      Item = (ListViewItem_o *)SvtEqCombineListViewObject__GetItem(
                                 (SvtEqCombineListViewObject_o *)this->fields.mListViewObject,
                                 v13);
      SvtEqCombineListViewObject__OnDragDropStart(mListViewObject, v17);
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
            v19);
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
  v22 = sub_1BCACFC(mDragScrollView);
  SvtEqCombineUIDragDropListViewItem__OnDragDropMove(v20, *(UnityEngine_Vector3_o *)&v22, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineUIDragDropListViewItem__Update(
        SvtEqCombineUIDragDropListViewItem_o *this,
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
  SvtEqCombineListViewManager_c *v15; // x1
  UICamera_c *v16; // x8
  UnityEngine_Camera_o *v17; // x20
  struct UICamera_StaticFields *static_fields; // x8
  __int64 v19; // x1
  __int64 v20; // x1
  Il2CppObject *Component_object; // x20
  SvtEqCombineListViewManager_o *monitor; // x21
  __int64 methodPtr_low; // x9
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v27; // x8
  struct UIScrollView_o *scrollView; // x20
  struct UIPanel_o *mPanel; // x21
  UICamera_c *v30; // x8
  UnityEngine_Camera_o *v31; // x22
  struct UICamera_StaticFields *v32; // x8
  float v33; // s0
  float v34; // s1
  float v35; // s2
  float v36; // s8
  float v37; // s9
  float v38; // s10
  float x; // s14
  float y; // s15
  float v41; // s8
  float v42; // s11
  UnityEngine_Vector2_o ViewSize; // kr00_8
  __int64 v44; // x9
  float v45; // s10
  float v46; // s13
  bool IsLimitOverPosition2; // w21
  __int64 v48; // x1
  UnityEngine_Object_o *verticalScrollBar; // x22
  float v50; // s0
  float v51; // s1
  float v52; // s0
  float v53; // s1
  __int64 v54; // x1
  UnityEngine_Object_o *horizontalScrollBar; // x22
  int v56; // s2
  float v57; // s0
  float v58; // s0
  float v59; // s1
  int v60; // s2
  SvtEqCombineUIDragDropListViewItem_o *v61; // x0
  UnityEngine_GameObject_o *v62; // x1
  const MethodInfo *v63; // x2
  UnityEngine_Ray_o v64; // [xsp+0h] [xbp-100h] BYREF
  UnityEngine_Ray_o v65; // [xsp+18h] [xbp-E8h] BYREF
  UnityEngine_Ray_o v66; // [xsp+30h] [xbp-D0h]
  UnityEngine_RaycastHit_o v67; // [xsp+50h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19F20 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_BoxCollider_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SvtEqCombineListViewObject___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&UnityEngine_Physics_TypeInfo, v8, v9);
    sub_1BCA7E0(&SvtEqCombineListViewManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&UICamera_TypeInfo, v12, v13);
    byte_4B19F20 = 1;
  }
  memset(&v67, 0, sizeof(v67));
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
  v68.fields.z = 0.0;
  v68.fields.x = static_fields->lastTouchPosition.fields.x;
  v68.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_69960936(&v65, v17, v68, 0LL);
  v66 = v65;
  if ( !UnityEngine_Physics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo, v19);
  v64 = v66;
  if ( UnityEngine_Physics__Raycast_70467096(&v64, &v67, 0LL) )
  {
    main = UnityEngine_RaycastHit__get_collider(&v67, 0LL);
    if ( !main )
      goto LABEL_78;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)main,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SvtEqCombineListViewObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    main = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)main & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_78;
      monitor = (SvtEqCombineListViewManager_o *)Component_object[2].monitor;
      if ( monitor )
      {
        v15 = SvtEqCombineListViewManager_TypeInfo;
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
               (const MethodInfo *)v15);
      if ( !main || !monitor )
        goto LABEL_78;
      v25 = *((_DWORD *)main + 6);
      if ( monitor->fields.dragEndIndex != v25 )
        SvtEqCombineListViewManager__SetDragSelectItem(monitor, monitor->fields.dragStartIndex, v25, v24);
    }
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  main = (void *)UnityEngine_Object__op_Inequality(mDragScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)main & 1) == 0 )
    return;
  v27 = this->fields.mDragScrollView;
  if ( !v27 )
    goto LABEL_78;
  scrollView = v27->fields.scrollView;
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
  v30 = UICamera_TypeInfo;
  v31 = (UnityEngine_Camera_o *)main;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v15);
    v30 = UICamera_TypeInfo;
  }
  if ( !v31 )
    goto LABEL_78;
  v32 = v30->static_fields;
  v69.fields.z = 0.0;
  v69.fields.x = v32->lastTouchPosition.fields.x;
  v69.fields.y = v32->lastTouchPosition.fields.y;
  *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Camera__ScreenToWorldPoint_69960472(v31, v69, 0LL);
  if ( !mPanel )
    goto LABEL_78;
  v36 = v33;
  v37 = v34;
  v38 = v35;
  main = UnityEngine_Component__get_transform((UnityEngine_Component_o *)mPanel, 0LL);
  if ( !main )
    goto LABEL_78;
  v70.fields.x = v36;
  v70.fields.y = v37;
  v70.fields.z = v38;
  v71 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)main, v70, 0LL);
  x = mPanel->fields.mClipOffset.fields.x;
  y = mPanel->fields.mClipOffset.fields.y;
  v41 = v71.fields.x;
  v42 = v71.fields.y;
  ViewSize = UIPanel__GetViewSize(mPanel, 0LL);
  main = this->fields.mCollider;
  if ( !main )
    goto LABEL_78;
  v44 = LOBYTE(UnityEngine_BoxCollider_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)main + 304LL) < (unsigned int)v44
    || *(UnityEngine_BoxCollider_c **)(*(_QWORD *)(*(_QWORD *)main + 200LL) + 8 * v44 - 8) != UnityEngine_BoxCollider_TypeInfo )
  {
LABEL_80:
    sub_1BCACFC(main);
    SvtEqCombineUIDragDropListViewItem__OnDragDropRelease(v61, v62, v63);
    return;
  }
  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)main, 0LL);
  v45 = size.fields.x;
  v46 = size.fields.y;
  IsLimitOverPosition2 = UIScrollView__IsLimitOverPosition2(scrollView, 0LL);
  if ( IsLimitOverPosition2 )
    this->fields.isLimit = 1;
  if ( UIScrollView__get_canMoveVertically(scrollView, 0LL) )
  {
    verticalScrollBar = (UnityEngine_Object_o *)scrollView->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
    if ( UnityEngine_Object__op_Inequality(verticalScrollBar, 0LL, 0LL) )
    {
      main = scrollView->fields.verticalScrollBar;
      if ( !main )
        goto LABEL_78;
      if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0LL) > 0.0 )
      {
        v50 = v42 - y;
        v51 = (float)(ViewSize.fields.y - v46) * 0.5;
        if ( !this->fields.isLimit )
        {
          if ( v50 > (float)-v51 )
          {
            if ( v50 < v51 )
              return;
            v52 = 0.0;
            v53 = -1.0;
LABEL_71:
            v56 = 0;
            if ( !UIScrollView__IsLimitOverPosition2_47310024(scrollView, *(UnityEngine_Vector3_o *)&v52, 0LL) )
            {
              v57 = 0.5;
LABEL_77:
              UIScrollView__Scroll(scrollView, v57, 0LL);
              return;
            }
            return;
          }
          v58 = 0.0;
          v59 = 1.0;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54);
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
    sub_1BCAA3C(main, v15);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0LL) <= 0.0 )
    goto LABEL_62;
  v50 = v41 - x;
  v51 = (float)(ViewSize.fields.x - v45) * 0.5;
  if ( this->fields.isLimit )
  {
LABEL_60:
    if ( IsLimitOverPosition2 )
    {
      UIScrollView__Press(scrollView, 0, 0LL);
      return;
    }
    if ( v50 <= (float)-v51 || v50 >= v51 )
      return;
LABEL_63:
    this->fields.isLimit = 0;
    return;
  }
  if ( v50 > (float)-v51 )
  {
    if ( v50 < v51 )
      return;
    v52 = -1.0;
    v53 = 0.0;
    goto LABEL_71;
  }
  v58 = 1.0;
  v59 = 0.0;
LABEL_75:
  v60 = 0;
  if ( !UIScrollView__IsLimitOverPosition2_47310024(scrollView, *(UnityEngine_Vector3_o *)&v58, 0LL) )
  {
    v57 = -0.5;
    goto LABEL_77;
  }
}