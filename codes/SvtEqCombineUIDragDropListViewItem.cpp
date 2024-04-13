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
  int v2; // w2
  __int64 v3; // x3
  struct ListViewManager_o *manager; // x21
  SvtEqCombineUIDragDropListViewItem_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  SvtEqCombineListViewObject_o *mListViewObject; // x20
  __int64 v13; // x9
  __int64 v14; // x9
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v17; // x8
  UnityEngine_Object_o *scrollView; // x19
  const MethodInfo *v19; // x3
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  v5 = this;
  if ( (byte_42EE527 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SvtEqCombineListViewManager_TypeInfo, v6, v7, v8);
    this = (SvtEqCombineUIDragDropListViewItem_o *)sub_B5D5C4(&SvtEqCombineListViewObject_TypeInfo, v9, v10, v11);
    byte_42EE527 = 1;
  }
  mListViewObject = (SvtEqCombineListViewObject_o *)v5->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_24;
  v13 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v13
    || (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v13 - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_B5D990(v5->fields.mListViewObject);
    goto LABEL_22;
  }
  manager = mListViewObject->fields.manager;
  if ( !manager )
  {
LABEL_23:
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v5, 0LL, 0LL);
    zero = UnityEngine_Vector3__get_zero(0LL);
    SvtEqCombineListViewObject__Init(
      mListViewObject,
      4,
      0LL,
      zero.fields.x,
      *(UnityEngine_Vector3_o *)&zero.fields.y,
      v19);
    goto LABEL_24;
  }
  v14 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v14
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v14 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
LABEL_22:
    sub_B5D990(manager);
    goto LABEL_23;
  }
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v5, 0LL, 0LL);
  v20 = UnityEngine_Vector3__get_zero(0LL);
  SvtEqCombineListViewObject__Init(mListViewObject, 4, 0LL, v20.fields.x, *(UnityEngine_Vector3_o *)&v20.fields.y, v15);
  ((void (__fastcall *)(struct ListViewManager_o *, Il2CppMethodPointer))manager->klass->vtable._8_ItemDragEnd.method)(
    manager,
    manager->klass->vtable._9_SetSortKind.methodPtr);
  v5->fields.isDrag = 0;
  mDragScrollView = (UnityEngine_Object_o *)v5->fields.mDragScrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (SvtEqCombineUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v17 = v5->fields.mDragScrollView;
    if ( !v17 )
      goto LABEL_24;
    scrollView = (UnityEngine_Object_o *)v17->fields.scrollView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (SvtEqCombineUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( scrollView )
      {
        UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0LL);
        return;
      }
LABEL_24:
      sub_B5D69C(this, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineUIDragDropListViewItem__OnDragDropMove(
        SvtEqCombineUIDragDropListViewItem_o *this,
        UnityEngine_Vector3_o delta,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *dragObject; // x20
  __int64 v10; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *v12; // x19
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = delta.fields.z;
  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_42EE524 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42EE524 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(dragObject, 0LL, 0LL) )
  {
    transform = this->fields.dragObject;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL )
    {
      sub_B5D69C(transform, v10);
    }
    v12 = (UnityEngine_Transform_o *)transform;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    localPosition.fields.y = y + localPosition.fields.y;
    localPosition.fields.z = z + localPosition.fields.z;
    localPosition.fields.x = x + localPosition.fields.x;
    UnityEngine_Transform__set_localPosition(v12, localPosition, 0LL);
  }
}


void __fastcall SvtEqCombineUIDragDropListViewItem__OnDragDropRelease(
        SvtEqCombineUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewObject_o *mListViewObject; // x0
  __int64 v9; // x9
  __int64 v10; // x9
  const MethodInfo *v11; // x1

  if ( (byte_42EE526 & 1) == 0 )
  {
    sub_B5D5C4(&SvtEqCombineListViewManager_TypeInfo, (_DWORD)surface, (_DWORD)method, v3);
    sub_B5D5C4(&SvtEqCombineListViewObject_TypeInfo, v5, v6, v7);
    byte_42EE526 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_B5D69C(mListViewObject, surface);
  surface = (UnityEngine_GameObject_o *)SvtEqCombineListViewObject_TypeInfo;
  v9 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v9
    || (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v9 - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    goto LABEL_10;
  }
  mListViewObject = (struct ListViewObject_o *)mListViewObject->fields.manager;
  if ( !mListViewObject )
    goto LABEL_11;
  v10 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v10
    || (SvtEqCombineListViewManager_c *)mListViewObject->klass->_2.typeHierarchy[v10 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
LABEL_10:
    sub_B5D990(mListViewObject);
    goto LABEL_11;
  }
  SvtEqCombineListViewManager__SetDragEnd(
    (SvtEqCombineListViewManager_o *)mListViewObject,
    (const MethodInfo *)SvtEqCombineListViewManager_TypeInfo);
  SvtEqCombineUIDragDropListViewItem__DragEnd(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineUIDragDropListViewItem__OnDragDropStart(
        SvtEqCombineUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *mDragScrollView; // x20
  UnityEngine_Collider_o *mCollider; // x0
  __int64 v13; // x1
  struct UIDragScrollView_o *v14; // x8
  SvtEqCombineListViewObject_o *mListViewObject; // x21
  const MethodInfo *v16; // x1
  __int64 v17; // x9
  __int64 v18; // x9
  ListViewItem_o *Item; // x22
  const MethodInfo *v20; // x1
  int32_t sortIndex; // w21
  const MethodInfo *v22; // x3
  SvtEqCombineUIDragDropListViewItem_o *v23; // x0
  const MethodInfo *v24; // x1
  long double v25; // q0 OVERLAPPED

  if ( (byte_42EE523 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SvtEqCombineListViewManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SvtEqCombineListViewObject_TypeInfo, v8, v9, v10);
    byte_42EE523 = 1;
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  mCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)mCollider & 1) != 0 )
  {
    v14 = this->fields.mDragScrollView;
    if ( !v14 )
      goto LABEL_24;
    mDragScrollView = (UnityEngine_Object_o *)v14->fields.scrollView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    mCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0LL, 0LL);
    if ( ((unsigned __int8)mCollider & 1) != 0 )
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
    sub_B5D69C(mCollider, v13);
  }
  v16 = (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo;
  v17 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v17
    && (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v17 - 1] == SvtEqCombineListViewObject_TypeInfo )
  {
    mDragScrollView = (UnityEngine_Object_o *)mListViewObject->fields.manager;
    if ( !mDragScrollView
      || (v16 = (const MethodInfo *)SvtEqCombineListViewManager_TypeInfo,
          v18 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&mDragScrollView->klass->_2.bitflags2 + 1) >= (unsigned int)v18)
      && (SvtEqCombineListViewManager_c *)mDragScrollView->klass->_2.typeHierarchy[v18 - 1] == SvtEqCombineListViewManager_TypeInfo )
    {
      Item = (ListViewItem_o *)SvtEqCombineListViewObject__GetItem(
                                 (SvtEqCombineListViewObject_o *)this->fields.mListViewObject,
                                 v16);
      SvtEqCombineListViewObject__OnDragDropStart(mListViewObject, v20);
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
            v22);
          (*(void (__fastcall **)(UnityEngine_Object_o *, Il2CppClass *))&mDragScrollView->klass[1]._1.this_arg.bits)(
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
    sub_B5D990(this->fields.mListViewObject);
  }
  v25 = sub_B5D990(mDragScrollView);
  SvtEqCombineUIDragDropListViewItem__OnDragDropMove(v23, *(UnityEngine_Vector3_o *)&v25, v24);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineUIDragDropListViewItem__Update(
        SvtEqCombineUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  void *main; // x0
  SvtEqCombineListViewManager_c *v18; // x1
  UnityEngine_Camera_o *v19; // x20
  UICamera_c *v20; // x8
  struct UICamera_StaticFields *static_fields; // x8
  UnityEngine_Object_o *Component_WebViewObject; // x20
  SvtEqCombineListViewManager_o *monitor; // x21
  __int64 v24; // x9
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v28; // x8
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Object_c *klass; // x21
  UICamera_c *v31; // x8
  UnityEngine_Camera_o *v32; // x22
  struct UICamera_StaticFields *v33; // x8
  float v34; // s0
  float v35; // s1
  float v36; // s2
  float v37; // s8
  float v38; // s9
  float v39; // s10
  float v40; // s14
  float v41; // s15
  float x; // s8
  float y; // s11
  UnityEngine_Vector2_o ViewSize; // kr00_8
  __int64 v45; // x9
  float v46; // s10
  float v47; // s13
  bool IsLimitOverPosition2; // w21
  UnityEngine_Object_o *v49; // x22
  float v50; // s0
  float v51; // s1
  float v52; // s1
  float v53; // s0
  UnityEngine_Object_o *v54; // x22
  int v55; // s2
  float v56; // s0
  float v57; // s1
  float v58; // s0
  int v59; // s2
  SvtEqCombineUIDragDropListViewItem_o *v60; // x0
  UnityEngine_GameObject_o *v61; // x1
  const MethodInfo *v62; // x2
  UnityEngine_Ray_o v63; // [xsp+0h] [xbp-D0h] BYREF
  UnityEngine_Ray_o v64; // [xsp+18h] [xbp-B8h] BYREF
  UnityEngine_RaycastHit_o v65; // [xsp+30h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EE525 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_BoxCollider_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_SvtEqCombineListViewObject___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SvtEqCombineListViewManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UICamera_TypeInfo, v14, v15, v16);
    byte_42EE525 = 1;
  }
  memset(&v65, 0, sizeof(v65));
  if ( !this->fields.isDrag )
    return;
  main = UnityEngine_Camera__get_main(0LL);
  v19 = (UnityEngine_Camera_o *)main;
  v20 = UICamera_TypeInfo;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v20 = UICamera_TypeInfo;
  }
  if ( !v19 )
    goto LABEL_84;
  static_fields = v20->static_fields;
  v66.fields.z = 0.0;
  v66.fields.x = static_fields->lastTouchPosition.fields.x;
  v66.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_41565876(&v64, v19, v66, 0LL);
  v63 = v64;
  if ( UnityEngine_Physics__Raycast_16828644(&v63, &v65, 0LL) )
  {
    main = UnityEngine_RaycastHit__get_collider(&v65, 0LL);
    if ( !main )
      goto LABEL_84;
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)main,
                                                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_SvtEqCombineListViewObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    main = (void *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
    if ( ((unsigned __int8)main & 1) != 0 )
    {
      if ( !Component_WebViewObject )
        goto LABEL_84;
      monitor = (SvtEqCombineListViewManager_o *)Component_WebViewObject[1].monitor;
      if ( monitor )
      {
        v18 = SvtEqCombineListViewManager_TypeInfo;
        v24 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
        if ( *(&monitor->klass->_2.bitflags2 + 1) < (unsigned int)v24
          || (SvtEqCombineListViewManager_c *)monitor->klass->_2.typeHierarchy[v24 - 1] != SvtEqCombineListViewManager_TypeInfo )
        {
          main = Component_WebViewObject[1].monitor;
          goto LABEL_86;
        }
      }
      main = SvtEqCombineListViewObject__GetItem(
               (SvtEqCombineListViewObject_o *)Component_WebViewObject,
               (const MethodInfo *)v18);
      if ( !main || !monitor )
        goto LABEL_84;
      v26 = *((_DWORD *)main + 6);
      if ( monitor->fields.dragEndIndex != v26 )
        SvtEqCombineListViewManager__SetDragSelectItem(monitor, monitor->fields.dragStartIndex, v26, v25);
    }
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  main = (void *)UnityEngine_Object__op_Inequality(mDragScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)main & 1) == 0 )
    return;
  v28 = this->fields.mDragScrollView;
  if ( !v28 )
    goto LABEL_84;
  scrollView = (UnityEngine_Object_o *)v28->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  main = (void *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
  if ( ((unsigned __int8)main & 1) == 0 )
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
  main = UnityEngine_Camera__get_main(0LL);
  v31 = UICamera_TypeInfo;
  v32 = (UnityEngine_Camera_o *)main;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v31 = UICamera_TypeInfo;
  }
  if ( !v32 )
    goto LABEL_84;
  v33 = v31->static_fields;
  v67.fields.z = 0.0;
  v67.fields.x = v33->lastTouchPosition.fields.x;
  v67.fields.y = v33->lastTouchPosition.fields.y;
  *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Camera__ScreenToWorldPoint_41565372(v32, v67, 0LL);
  if ( !klass )
    goto LABEL_84;
  v37 = v34;
  v38 = v35;
  v39 = v36;
  main = UnityEngine_Component__get_transform((UnityEngine_Component_o *)klass, 0LL);
  if ( !main )
    goto LABEL_84;
  v68.fields.x = v37;
  v68.fields.y = v38;
  v68.fields.z = v39;
  v69 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)main, v68, 0LL);
  v40 = *((float *)&klass->vtable._1_Finalize.methodPtr + 1);
  v41 = *(float *)&klass->vtable._1_Finalize.method;
  x = v69.fields.x;
  y = v69.fields.y;
  ViewSize = UIPanel__GetViewSize((UIPanel_o *)klass, 0LL);
  main = this->fields.mCollider;
  if ( !main )
    goto LABEL_84;
  v45 = *(&UnityEngine_BoxCollider_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)main + 300LL) < (unsigned int)v45
    || *(UnityEngine_BoxCollider_c **)(*(_QWORD *)(*(_QWORD *)main + 200LL) + 8 * v45 - 8) != UnityEngine_BoxCollider_TypeInfo )
  {
LABEL_86:
    sub_B5D990(main);
    SvtEqCombineUIDragDropListViewItem__OnDragDropRelease(v60, v61, v62);
    return;
  }
  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)main, 0LL);
  v46 = size.fields.x;
  v47 = size.fields.y;
  IsLimitOverPosition2 = UIScrollView__IsLimitOverPosition2((UIScrollView_o *)scrollView, 0LL);
  if ( IsLimitOverPosition2 )
    this->fields.isLimit = 1;
  if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)scrollView, 0LL) )
  {
    v49 = (UnityEngine_Object_o *)scrollView[2].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v49, 0LL, 0LL) )
    {
      main = scrollView[2].monitor;
      if ( !main )
        goto LABEL_84;
      if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0LL) > 0.0 )
      {
        v50 = y - v41;
        v51 = (float)(ViewSize.fields.y - v47) * 0.5;
        if ( !this->fields.isLimit )
        {
          if ( v50 > (float)-v51 )
          {
            if ( v50 < v51 )
              return;
            v52 = -1.0;
            v53 = 0.0;
LABEL_77:
            v55 = 0;
            if ( !UIScrollView__IsLimitOverPosition2_39202856(
                    (UIScrollView_o *)scrollView,
                    *(UnityEngine_Vector3_o *)&v53,
                    0LL) )
            {
              v56 = 0.5;
LABEL_83:
              UIScrollView__Scroll((UIScrollView_o *)scrollView, v56, 0LL);
              return;
            }
            return;
          }
          v57 = 1.0;
          v58 = 0.0;
          goto LABEL_81;
        }
        goto LABEL_66;
      }
    }
  }
  if ( !UIScrollView__get_canMoveHorizontally((UIScrollView_o *)scrollView, 0LL) )
    goto LABEL_68;
  v54 = (UnityEngine_Object_o *)scrollView[2].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v54, 0LL, 0LL) )
  {
LABEL_68:
    if ( IsLimitOverPosition2 )
      return;
    goto LABEL_69;
  }
  main = scrollView[2].klass;
  if ( !main )
LABEL_84:
    sub_B5D69C(main, v18);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0LL) <= 0.0 )
    goto LABEL_68;
  v50 = x - v40;
  v51 = (float)(ViewSize.fields.x - v46) * 0.5;
  if ( this->fields.isLimit )
  {
LABEL_66:
    if ( IsLimitOverPosition2 )
    {
      UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0LL);
      return;
    }
    if ( v50 <= (float)-v51 || v50 >= v51 )
      return;
LABEL_69:
    this->fields.isLimit = 0;
    return;
  }
  if ( v50 > (float)-v51 )
  {
    if ( v50 < v51 )
      return;
    v53 = -1.0;
    v52 = 0.0;
    goto LABEL_77;
  }
  v58 = 1.0;
  v57 = 0.0;
LABEL_81:
  v59 = 0;
  if ( !UIScrollView__IsLimitOverPosition2_39202856((UIScrollView_o *)scrollView, *(UnityEngine_Vector3_o *)&v58, 0LL) )
  {
    v56 = -0.5;
    goto LABEL_83;
  }
}