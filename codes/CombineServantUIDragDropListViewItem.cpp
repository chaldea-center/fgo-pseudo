void __fastcall CombineServantUIDragDropListViewItem___ctor(
        CombineServantUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewItem___ctor((UIDragDropListViewItem_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantUIDragDropListViewItem__DragEnd(
        CombineServantUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x21
  __int64 v4; // x1
  __int64 v5; // x1
  struct ListViewObject_o *mListViewObject; // x20
  __int64 v7; // x9
  __int64 v8; // x9
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v11; // x8
  UIScrollView_o *scrollView; // x19
  const MethodInfo *v13; // x3
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FA519 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewManager_TypeInfo, method);
    sub_B16FFC(&CombineServantListViewObject_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FA519 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_24;
  v7 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (CombineServantListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v7 - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_B173C8(this->fields.mListViewObject);
    goto LABEL_22;
  }
  manager = mListViewObject->fields.manager;
  if ( !manager )
  {
LABEL_23:
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
    zero = UnityEngine_Vector3__get_zero(0LL);
    CombineServantListViewObject__Init(
      (CombineServantListViewObject_o *)mListViewObject,
      3,
      0LL,
      zero.fields.x,
      *(UnityEngine_Vector3_o *)&zero.fields.y,
      v13);
    goto LABEL_24;
  }
  v8 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v8
    || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] != CombineServantListViewManager_TypeInfo )
  {
LABEL_22:
    sub_B173C8(manager);
    goto LABEL_23;
  }
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
  v14 = UnityEngine_Vector3__get_zero(0LL);
  CombineServantListViewObject__Init(
    (CombineServantListViewObject_o *)mListViewObject,
    3,
    0LL,
    v14.fields.x,
    *(UnityEngine_Vector3_o *)&v14.fields.y,
    v9);
  ((void (__fastcall *)(struct ListViewManager_o *, Il2CppMethodPointer))manager->klass->vtable._8_ItemDragEnd.method)(
    manager,
    manager->klass->vtable._9_SetSortKind.methodPtr);
  this->fields.isDrag = 0;
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mDragScrollView, 0LL, 0LL) )
  {
    v11 = this->fields.mDragScrollView;
    if ( !v11 )
      goto LABEL_24;
    scrollView = v11->fields.scrollView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)scrollView, 0LL, 0LL) )
    {
      if ( scrollView )
      {
        UIScrollView__Press(scrollView, 0, 0LL);
        return;
      }
LABEL_24:
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantUIDragDropListViewItem__OnDragDropMove(
        CombineServantUIDragDropListViewItem_o *this,
        UnityEngine_Vector3_o delta,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *dragObject; // x20
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v10; // x19
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = delta.fields.z;
  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_40FA516 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA516 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(dragObject, 0LL, 0LL) )
  {
    v8 = this->fields.dragObject;
    if ( !v8 || (transform = UnityEngine_GameObject__get_transform(v8, 0LL)) == 0LL )
      sub_B170D4();
    v10 = transform;
    localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
    localPosition.fields.y = y + localPosition.fields.y;
    localPosition.fields.z = z + localPosition.fields.z;
    localPosition.fields.x = x + localPosition.fields.x;
    UnityEngine_Transform__set_localPosition(v10, localPosition, 0LL);
  }
}


void __fastcall CombineServantUIDragDropListViewItem__OnDragDropRelease(
        CombineServantUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  __int64 v4; // x1
  struct ListViewObject_o *mListViewObject; // x0
  __int64 v6; // x9
  __int64 v7; // x9
  const MethodInfo *v8; // x1

  if ( (byte_40FA518 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewManager_TypeInfo, surface);
    sub_B16FFC(&CombineServantListViewObject_TypeInfo, v4);
    byte_40FA518 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_B170D4();
  v6 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (CombineServantListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v6 - 1] != CombineServantListViewObject_TypeInfo )
  {
    goto LABEL_10;
  }
  mListViewObject = (struct ListViewObject_o *)mListViewObject->fields.manager;
  if ( !mListViewObject )
    goto LABEL_11;
  v7 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (CombineServantListViewManager_c *)mListViewObject->klass->_2.typeHierarchy[v7 - 1] != CombineServantListViewManager_TypeInfo )
  {
LABEL_10:
    sub_B173C8(mListViewObject);
    goto LABEL_11;
  }
  CombineServantListViewManager__SetDragEnd((CombineServantListViewManager_o *)mListViewObject, 0LL);
  CombineServantUIDragDropListViewItem__DragEnd(this, v8);
}


void __fastcall CombineServantUIDragDropListViewItem__OnDragDropStart(
        CombineServantUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UIDragScrollView_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v6; // x8
  UnityEngine_Collider_o *mCollider; // x0
  CombineServantListViewObject_o *mListViewObject; // x21
  const MethodInfo *v9; // x1
  __int64 v10; // x9
  __int64 v11; // x9
  ListViewItem_o *Item; // x22
  const MethodInfo *v13; // x1
  int32_t sortIndex; // w21
  bool IsSelect; // w0
  CombineServantUIDragDropListViewItem_o *v16; // x0
  const MethodInfo *v17; // x1
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FA515 & 1) == 0 )
  {
    sub_B16FFC(&CombineServantListViewManager_TypeInfo, method);
    sub_B16FFC(&CombineServantListViewObject_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FA515 = 1;
  }
  mDragScrollView = this->fields.mDragScrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)mDragScrollView, 0LL, 0LL) )
  {
    v6 = this->fields.mDragScrollView;
    if ( !v6 )
      goto LABEL_24;
    mDragScrollView = (struct UIDragScrollView_o *)v6->fields.scrollView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)mDragScrollView, 0LL, 0LL) )
    {
      if ( !mDragScrollView )
        goto LABEL_24;
      UIScrollView__Press((UIScrollView_o *)mDragScrollView, 0, 0LL);
    }
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0LL);
  mCollider = this->fields.mCollider;
  if ( !mCollider
    || (UnityEngine_Collider__set_enabled(mCollider, 1, 0LL),
        (mListViewObject = (CombineServantListViewObject_o *)this->fields.mListViewObject) == 0LL) )
  {
LABEL_24:
    sub_B170D4();
  }
  v9 = (const MethodInfo *)CombineServantListViewObject_TypeInfo;
  v10 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v10
    && (CombineServantListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v10 - 1] == CombineServantListViewObject_TypeInfo )
  {
    mDragScrollView = (struct UIDragScrollView_o *)mListViewObject->fields.manager;
    if ( !mDragScrollView
      || (v9 = (const MethodInfo *)CombineServantListViewManager_TypeInfo,
          v11 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&mDragScrollView->klass->_2.bitflags2 + 1) >= (unsigned int)v11)
      && (CombineServantListViewManager_c *)mDragScrollView->klass->_2.typeHierarchy[v11 - 1] == CombineServantListViewManager_TypeInfo )
    {
      Item = (ListViewItem_o *)CombineServantListViewObject__GetItem(
                                 (CombineServantListViewObject_o *)this->fields.mListViewObject,
                                 v9);
      CombineServantListViewObject__OnDragDropStart(mListViewObject, v13);
      if ( Item )
      {
        sortIndex = Item->fields.sortIndex;
        IsSelect = ListViewItem__get_IsSelect(Item, 0LL);
        if ( mDragScrollView )
        {
          CombineServantListViewManager__SetDragStart(
            (CombineServantListViewManager_o *)mDragScrollView,
            sortIndex,
            !IsSelect,
            0LL);
          (*(void (__fastcall **)(struct UIDragScrollView_o *, Il2CppClass *))&mDragScrollView->klass[1]._1.this_arg.bits)(
            mDragScrollView,
            mDragScrollView->klass[1]._1.element_class);
          *(_WORD *)&this->fields.isDrag = 1;
          return;
        }
      }
      goto LABEL_24;
    }
  }
  else
  {
    sub_B173C8(this->fields.mListViewObject);
  }
  v16 = (CombineServantUIDragDropListViewItem_o *)sub_B173C8(mDragScrollView);
  CombineServantUIDragDropListViewItem__OnDragDropMove(v16, v18, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantUIDragDropListViewItem__Update(
        CombineServantUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Camera_o *main; // x20
  UICamera_c *v8; // x8
  struct UICamera_StaticFields *static_fields; // x8
  UnityEngine_Component_o *collider; // x0
  CombineServantListViewObject_o *Component_WebViewObject; // x20
  CombineServantListViewManager_c *v12; // x1
  CombineServantListViewManager_o *manager; // x21
  __int64 v14; // x9
  CombineServantListViewItem_o *Item; // x0
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v17; // x8
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Object_c *klass; // x21
  UnityEngine_Camera_o *v20; // x0
  UICamera_c *v21; // x8
  UnityEngine_Camera_o *v22; // x22
  struct UICamera_StaticFields *v23; // x8
  float v24; // s0
  float v25; // s1
  float v26; // s2
  float v27; // s8
  float v28; // s9
  float v29; // s10
  UnityEngine_Transform_o *transform; // x0
  float v31; // s14
  float v32; // s15
  float x; // s8
  float y; // s11
  UnityEngine_Vector2_o ViewSize; // kr00_8
  struct UnityEngine_Collider_o *mCollider; // x0
  __int64 v37; // x9
  float v38; // s10
  float v39; // s13
  bool IsLimitOverPosition2; // w21
  UnityEngine_Object_o *monitor; // x22
  UIProgressBar_o *v42; // x0
  float v43; // s0
  float v44; // s1
  float v45; // s1
  float v46; // s0
  UnityEngine_Object_o *v47; // x22
  UIProgressBar_o *v48; // x0
  int v49; // s2
  float v50; // s0
  float v51; // s1
  float v52; // s0
  int v53; // s2
  CombineServantUIDragDropListViewItem_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x1
  const MethodInfo *v56; // x2
  UnityEngine_Ray_o v57; // [xsp+0h] [xbp-D0h] BYREF
  UnityEngine_Ray_o v58; // [xsp+18h] [xbp-B8h] BYREF
  UnityEngine_RaycastHit_o v59; // [xsp+30h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FA517 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_BoxCollider_TypeInfo, method);
    sub_B16FFC(&CombineServantListViewManager_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CombineServantListViewObject___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&UICamera_TypeInfo, v6);
    byte_40FA517 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  if ( !this->fields.isDrag )
    return;
  main = UnityEngine_Camera__get_main(0LL);
  v8 = UICamera_TypeInfo;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v8 = UICamera_TypeInfo;
  }
  if ( !main )
    goto LABEL_83;
  static_fields = v8->static_fields;
  v60.fields.z = 0.0;
  v60.fields.x = static_fields->lastTouchPosition.fields.x;
  v60.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_40664072(&v58, main, v60, 0LL);
  v57 = v58;
  if ( UnityEngine_Physics__Raycast_16528960(&v57, &v59, 0LL) )
  {
    collider = (UnityEngine_Component_o *)UnityEngine_RaycastHit__get_collider(&v59, 0LL);
    if ( !collider )
      goto LABEL_83;
    Component_WebViewObject = (CombineServantListViewObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                  collider,
                                                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CombineServantListViewObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
    {
      if ( !Component_WebViewObject )
        goto LABEL_83;
      manager = (CombineServantListViewManager_o *)Component_WebViewObject->fields.manager;
      if ( manager )
      {
        v12 = CombineServantListViewManager_TypeInfo;
        v14 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1);
        if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v14
          || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v14 - 1] != CombineServantListViewManager_TypeInfo )
        {
          mCollider = (struct UnityEngine_Collider_o *)Component_WebViewObject->fields.manager;
          goto LABEL_85;
        }
      }
      Item = CombineServantListViewObject__GetItem(Component_WebViewObject, (const MethodInfo *)v12);
      if ( !Item || !manager )
        goto LABEL_83;
      CombineServantListViewManager__SetDragMove(manager, Item->fields.sortIndex, 0LL);
    }
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(mDragScrollView, 0LL, 0LL) )
    return;
  v17 = this->fields.mDragScrollView;
  if ( !v17 )
    goto LABEL_83;
  scrollView = (UnityEngine_Object_o *)v17->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
    return;
  if ( !scrollView )
    goto LABEL_83;
  klass = scrollView[6].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
    return;
  v20 = UnityEngine_Camera__get_main(0LL);
  v21 = UICamera_TypeInfo;
  v22 = v20;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v21 = UICamera_TypeInfo;
  }
  if ( !v22 )
    goto LABEL_83;
  v23 = v21->static_fields;
  v61.fields.z = 0.0;
  v61.fields.x = v23->lastTouchPosition.fields.x;
  v61.fields.y = v23->lastTouchPosition.fields.y;
  *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Camera__ScreenToWorldPoint_40663568(v22, v61, 0LL);
  if ( !klass )
    goto LABEL_83;
  v27 = v24;
  v28 = v25;
  v29 = v26;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)klass, 0LL);
  if ( !transform )
    goto LABEL_83;
  v62.fields.x = v27;
  v62.fields.y = v28;
  v62.fields.z = v29;
  v63 = UnityEngine_Transform__InverseTransformPoint(transform, v62, 0LL);
  v31 = *((float *)&klass->vtable._1_Finalize.methodPtr + 1);
  v32 = *(float *)&klass->vtable._1_Finalize.method;
  x = v63.fields.x;
  y = v63.fields.y;
  ViewSize = UIPanel__GetViewSize((UIPanel_o *)klass, 0LL);
  mCollider = this->fields.mCollider;
  if ( !mCollider )
    goto LABEL_83;
  v37 = *(&UnityEngine_BoxCollider_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mCollider->klass->_2.bitflags2 + 1) < (unsigned int)v37
    || (UnityEngine_BoxCollider_c *)mCollider->klass->_2.typeHierarchy[v37 - 1] != UnityEngine_BoxCollider_TypeInfo )
  {
LABEL_85:
    v54 = (CombineServantUIDragDropListViewItem_o *)sub_B173C8(mCollider);
    CombineServantUIDragDropListViewItem__OnDragDropRelease(v54, v55, v56);
    return;
  }
  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)mCollider, 0LL);
  v38 = size.fields.x;
  v39 = size.fields.y;
  IsLimitOverPosition2 = UIScrollView__IsLimitOverPosition2((UIScrollView_o *)scrollView, 0LL);
  if ( IsLimitOverPosition2 )
    this->fields.isLimit = 1;
  if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)scrollView, 0LL) )
  {
    monitor = (UnityEngine_Object_o *)scrollView[2].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v42 = (UIProgressBar_o *)scrollView[2].monitor;
      if ( !v42 )
        goto LABEL_83;
      if ( UIProgressBar__get_alpha(v42, 0LL) > 0.0 )
      {
        v43 = y - v32;
        v44 = (float)(ViewSize.fields.y - v39) * 0.5;
        if ( !this->fields.isLimit )
        {
          if ( v43 > (float)-v44 )
          {
            if ( v43 < v44 )
              return;
            v45 = -1.0;
            v46 = 0.0;
LABEL_76:
            v49 = 0;
            if ( !UIScrollView__IsLimitOverPosition2_37892472(
                    (UIScrollView_o *)scrollView,
                    *(UnityEngine_Vector3_o *)&v46,
                    0LL) )
            {
              v50 = 0.5;
LABEL_82:
              UIScrollView__Scroll((UIScrollView_o *)scrollView, v50, 0LL);
              return;
            }
            return;
          }
          v51 = 1.0;
          v52 = 0.0;
          goto LABEL_80;
        }
        goto LABEL_65;
      }
    }
  }
  if ( !UIScrollView__get_canMoveHorizontally((UIScrollView_o *)scrollView, 0LL) )
    goto LABEL_67;
  v47 = (UnityEngine_Object_o *)scrollView[2].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v47, 0LL, 0LL) )
  {
LABEL_67:
    if ( IsLimitOverPosition2 )
      return;
    goto LABEL_68;
  }
  v48 = (UIProgressBar_o *)scrollView[2].klass;
  if ( !v48 )
LABEL_83:
    sub_B170D4();
  if ( UIProgressBar__get_alpha(v48, 0LL) <= 0.0 )
    goto LABEL_67;
  v43 = x - v31;
  v44 = (float)(ViewSize.fields.x - v38) * 0.5;
  if ( this->fields.isLimit )
  {
LABEL_65:
    if ( IsLimitOverPosition2 )
    {
      UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0LL);
      return;
    }
    if ( v43 <= (float)-v44 || v43 >= v44 )
      return;
LABEL_68:
    this->fields.isLimit = 0;
    return;
  }
  if ( v43 > (float)-v44 )
  {
    if ( v43 < v44 )
      return;
    v46 = -1.0;
    v45 = 0.0;
    goto LABEL_76;
  }
  v52 = 1.0;
  v51 = 0.0;
LABEL_80:
  v53 = 0;
  if ( !UIScrollView__IsLimitOverPosition2_37892472((UIScrollView_o *)scrollView, *(UnityEngine_Vector3_o *)&v52, 0LL) )
  {
    v50 = -0.5;
    goto LABEL_82;
  }
}