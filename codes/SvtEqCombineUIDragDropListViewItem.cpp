void __fastcall SvtEqCombineUIDragDropListViewItem___ctor(
        SvtEqCombineUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewItem___ctor((UIDragDropListViewItem_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineUIDragDropListViewItem__DragEnd(
        SvtEqCombineUIDragDropListViewItem_o *this,
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

  if ( (byte_40FD673 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&SvtEqCombineListViewManager_TypeInfo, v4);
    sub_B16FFC(&SvtEqCombineListViewObject_TypeInfo, v5);
    byte_40FD673 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_24;
  v7 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v7 - 1] != SvtEqCombineListViewObject_TypeInfo )
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
    SvtEqCombineListViewObject__Init(
      (SvtEqCombineListViewObject_o *)mListViewObject,
      4,
      0LL,
      zero.fields.x,
      *(UnityEngine_Vector3_o *)&zero.fields.y,
      v13);
    goto LABEL_24;
  }
  v8 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v8
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
LABEL_22:
    sub_B173C8(manager);
    goto LABEL_23;
  }
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
  v14 = UnityEngine_Vector3__get_zero(0LL);
  SvtEqCombineListViewObject__Init(
    (SvtEqCombineListViewObject_o *)mListViewObject,
    4,
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
void __fastcall SvtEqCombineUIDragDropListViewItem__OnDragDropMove(
        SvtEqCombineUIDragDropListViewItem_o *this,
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
  if ( (byte_40FD670 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FD670 = 1;
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


void __fastcall SvtEqCombineUIDragDropListViewItem__OnDragDropRelease(
        SvtEqCombineUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  __int64 v4; // x1
  struct ListViewObject_o *mListViewObject; // x0
  __int64 v6; // x9
  __int64 v7; // x9
  const MethodInfo *v8; // x1

  if ( (byte_40FD672 & 1) == 0 )
  {
    sub_B16FFC(&SvtEqCombineListViewManager_TypeInfo, surface);
    sub_B16FFC(&SvtEqCombineListViewObject_TypeInfo, v4);
    byte_40FD672 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_B170D4();
  v6 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v6 - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    goto LABEL_10;
  }
  mListViewObject = (struct ListViewObject_o *)mListViewObject->fields.manager;
  if ( !mListViewObject )
    goto LABEL_11;
  v7 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (SvtEqCombineListViewManager_c *)mListViewObject->klass->_2.typeHierarchy[v7 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
LABEL_10:
    sub_B173C8(mListViewObject);
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
  struct UIDragScrollView_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v6; // x8
  UnityEngine_Collider_o *mCollider; // x0
  SvtEqCombineListViewObject_o *mListViewObject; // x21
  const MethodInfo *v9; // x1
  __int64 v10; // x9
  __int64 v11; // x9
  ListViewItem_o *Item; // x22
  const MethodInfo *v13; // x1
  int32_t sortIndex; // w21
  bool IsSelect; // w0
  const MethodInfo *v16; // x3
  SvtEqCombineUIDragDropListViewItem_o *v17; // x0
  const MethodInfo *v18; // x1
  long double v19; // q0 OVERLAPPED

  if ( (byte_40FD66F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&SvtEqCombineListViewManager_TypeInfo, v3);
    sub_B16FFC(&SvtEqCombineListViewObject_TypeInfo, v4);
    byte_40FD66F = 1;
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
        (mListViewObject = (SvtEqCombineListViewObject_o *)this->fields.mListViewObject) == 0LL) )
  {
LABEL_24:
    sub_B170D4();
  }
  v9 = (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo;
  v10 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v10
    && (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v10 - 1] == SvtEqCombineListViewObject_TypeInfo )
  {
    mDragScrollView = (struct UIDragScrollView_o *)mListViewObject->fields.manager;
    if ( !mDragScrollView
      || (v9 = (const MethodInfo *)SvtEqCombineListViewManager_TypeInfo,
          v11 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&mDragScrollView->klass->_2.bitflags2 + 1) >= (unsigned int)v11)
      && (SvtEqCombineListViewManager_c *)mDragScrollView->klass->_2.typeHierarchy[v11 - 1] == SvtEqCombineListViewManager_TypeInfo )
    {
      Item = (ListViewItem_o *)SvtEqCombineListViewObject__GetItem(
                                 (SvtEqCombineListViewObject_o *)this->fields.mListViewObject,
                                 v9);
      SvtEqCombineListViewObject__OnDragDropStart(mListViewObject, v13);
      if ( Item )
      {
        sortIndex = Item->fields.sortIndex;
        IsSelect = ListViewItem__get_IsSelect(Item, 0LL);
        if ( mDragScrollView )
        {
          SvtEqCombineListViewManager__SetDragStart(
            (SvtEqCombineListViewManager_o *)mDragScrollView,
            sortIndex,
            !IsSelect,
            v16);
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
  v19 = sub_B173C8(mDragScrollView);
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
  UnityEngine_Camera_o *main; // x20
  UICamera_c *v8; // x8
  struct UICamera_StaticFields *static_fields; // x8
  UnityEngine_Component_o *collider; // x0
  SvtEqCombineListViewObject_o *Component_WebViewObject; // x20
  SvtEqCombineListViewManager_c *v12; // x1
  SvtEqCombineListViewManager_o *manager; // x21
  __int64 v14; // x9
  SvtEqCombineListViewItem_o *Item; // x0
  const MethodInfo *v16; // x3
  int32_t sortIndex; // w2
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v19; // x8
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Object_c *klass; // x21
  UnityEngine_Camera_o *v22; // x0
  UICamera_c *v23; // x8
  UnityEngine_Camera_o *v24; // x22
  struct UICamera_StaticFields *v25; // x8
  float v26; // s0
  float v27; // s1
  float v28; // s2
  float v29; // s8
  float v30; // s9
  float v31; // s10
  UnityEngine_Transform_o *transform; // x0
  float v33; // s14
  float v34; // s15
  float x; // s8
  float y; // s11
  UnityEngine_Vector2_o ViewSize; // kr00_8
  struct UnityEngine_Collider_o *mCollider; // x0
  __int64 v39; // x9
  float v40; // s10
  float v41; // s13
  bool IsLimitOverPosition2; // w21
  UnityEngine_Object_o *monitor; // x22
  UIProgressBar_o *v44; // x0
  float v45; // s0
  float v46; // s1
  float v47; // s1
  float v48; // s0
  UnityEngine_Object_o *v49; // x22
  UIProgressBar_o *v50; // x0
  int v51; // s2
  float v52; // s0
  float v53; // s1
  float v54; // s0
  int v55; // s2
  SvtEqCombineUIDragDropListViewItem_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x1
  const MethodInfo *v58; // x2
  UnityEngine_Ray_o v59; // [xsp+0h] [xbp-D0h] BYREF
  UnityEngine_Ray_o v60; // [xsp+18h] [xbp-B8h] BYREF
  UnityEngine_RaycastHit_o v61; // [xsp+30h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FD671 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_BoxCollider_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_SvtEqCombineListViewObject___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&SvtEqCombineListViewManager_TypeInfo, v5);
    sub_B16FFC(&UICamera_TypeInfo, v6);
    byte_40FD671 = 1;
  }
  memset(&v61, 0, sizeof(v61));
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
    goto LABEL_84;
  static_fields = v8->static_fields;
  v62.fields.z = 0.0;
  v62.fields.x = static_fields->lastTouchPosition.fields.x;
  v62.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_40664072(&v60, main, v62, 0LL);
  v59 = v60;
  if ( UnityEngine_Physics__Raycast_16528960(&v59, &v61, 0LL) )
  {
    collider = (UnityEngine_Component_o *)UnityEngine_RaycastHit__get_collider(&v61, 0LL);
    if ( !collider )
      goto LABEL_84;
    Component_WebViewObject = (SvtEqCombineListViewObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                collider,
                                                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SvtEqCombineListViewObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
    {
      if ( !Component_WebViewObject )
        goto LABEL_84;
      manager = (SvtEqCombineListViewManager_o *)Component_WebViewObject->fields.manager;
      if ( manager )
      {
        v12 = SvtEqCombineListViewManager_TypeInfo;
        v14 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
        if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v14
          || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v14 - 1] != SvtEqCombineListViewManager_TypeInfo )
        {
          mCollider = (struct UnityEngine_Collider_o *)Component_WebViewObject->fields.manager;
          goto LABEL_86;
        }
      }
      Item = SvtEqCombineListViewObject__GetItem(Component_WebViewObject, (const MethodInfo *)v12);
      if ( !Item || !manager )
        goto LABEL_84;
      sortIndex = Item->fields.sortIndex;
      if ( manager->fields.dragEndIndex != sortIndex )
        SvtEqCombineListViewManager__SetDragSelectItem(manager, manager->fields.dragStartIndex, sortIndex, v16);
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
  v19 = this->fields.mDragScrollView;
  if ( !v19 )
    goto LABEL_84;
  scrollView = (UnityEngine_Object_o *)v19->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
    return;
  if ( !scrollView )
    goto LABEL_84;
  klass = scrollView[6].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
    return;
  v22 = UnityEngine_Camera__get_main(0LL);
  v23 = UICamera_TypeInfo;
  v24 = v22;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v23 = UICamera_TypeInfo;
  }
  if ( !v24 )
    goto LABEL_84;
  v25 = v23->static_fields;
  v63.fields.z = 0.0;
  v63.fields.x = v25->lastTouchPosition.fields.x;
  v63.fields.y = v25->lastTouchPosition.fields.y;
  *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Camera__ScreenToWorldPoint_40663568(v24, v63, 0LL);
  if ( !klass )
    goto LABEL_84;
  v29 = v26;
  v30 = v27;
  v31 = v28;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)klass, 0LL);
  if ( !transform )
    goto LABEL_84;
  v64.fields.x = v29;
  v64.fields.y = v30;
  v64.fields.z = v31;
  v65 = UnityEngine_Transform__InverseTransformPoint(transform, v64, 0LL);
  v33 = *((float *)&klass->vtable._1_Finalize.methodPtr + 1);
  v34 = *(float *)&klass->vtable._1_Finalize.method;
  x = v65.fields.x;
  y = v65.fields.y;
  ViewSize = UIPanel__GetViewSize((UIPanel_o *)klass, 0LL);
  mCollider = this->fields.mCollider;
  if ( !mCollider )
    goto LABEL_84;
  v39 = *(&UnityEngine_BoxCollider_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mCollider->klass->_2.bitflags2 + 1) < (unsigned int)v39
    || (UnityEngine_BoxCollider_c *)mCollider->klass->_2.typeHierarchy[v39 - 1] != UnityEngine_BoxCollider_TypeInfo )
  {
LABEL_86:
    sub_B173C8(mCollider);
    SvtEqCombineUIDragDropListViewItem__OnDragDropRelease(v56, v57, v58);
    return;
  }
  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)mCollider, 0LL);
  v40 = size.fields.x;
  v41 = size.fields.y;
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
      v44 = (UIProgressBar_o *)scrollView[2].monitor;
      if ( !v44 )
        goto LABEL_84;
      if ( UIProgressBar__get_alpha(v44, 0LL) > 0.0 )
      {
        v45 = y - v34;
        v46 = (float)(ViewSize.fields.y - v41) * 0.5;
        if ( !this->fields.isLimit )
        {
          if ( v45 > (float)-v46 )
          {
            if ( v45 < v46 )
              return;
            v47 = -1.0;
            v48 = 0.0;
LABEL_77:
            v51 = 0;
            if ( !UIScrollView__IsLimitOverPosition2_37892472(
                    (UIScrollView_o *)scrollView,
                    *(UnityEngine_Vector3_o *)&v48,
                    0LL) )
            {
              v52 = 0.5;
LABEL_83:
              UIScrollView__Scroll((UIScrollView_o *)scrollView, v52, 0LL);
              return;
            }
            return;
          }
          v53 = 1.0;
          v54 = 0.0;
          goto LABEL_81;
        }
        goto LABEL_66;
      }
    }
  }
  if ( !UIScrollView__get_canMoveHorizontally((UIScrollView_o *)scrollView, 0LL) )
    goto LABEL_68;
  v49 = (UnityEngine_Object_o *)scrollView[2].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v49, 0LL, 0LL) )
  {
LABEL_68:
    if ( IsLimitOverPosition2 )
      return;
    goto LABEL_69;
  }
  v50 = (UIProgressBar_o *)scrollView[2].klass;
  if ( !v50 )
LABEL_84:
    sub_B170D4();
  if ( UIProgressBar__get_alpha(v50, 0LL) <= 0.0 )
    goto LABEL_68;
  v45 = x - v33;
  v46 = (float)(ViewSize.fields.x - v40) * 0.5;
  if ( this->fields.isLimit )
  {
LABEL_66:
    if ( IsLimitOverPosition2 )
    {
      UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0LL);
      return;
    }
    if ( v45 <= (float)-v46 || v45 >= v46 )
      return;
LABEL_69:
    this->fields.isLimit = 0;
    return;
  }
  if ( v45 > (float)-v46 )
  {
    if ( v45 < v46 )
      return;
    v48 = -1.0;
    v47 = 0.0;
    goto LABEL_77;
  }
  v54 = 1.0;
  v53 = 0.0;
LABEL_81:
  v55 = 0;
  if ( !UIScrollView__IsLimitOverPosition2_37892472((UIScrollView_o *)scrollView, *(UnityEngine_Vector3_o *)&v54, 0LL) )
  {
    v52 = -0.5;
    goto LABEL_83;
  }
}