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
  CombineServantUIDragDropListViewItem_o *v3; // x19
  CombineServantListViewObject_o *mListViewObject; // x20
  __int64 v5; // x9
  __int64 v6; // x9
  const MethodInfo *v7; // x3
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v9; // x8
  UnityEngine_Object_o *scrollView; // x19
  const MethodInfo *v11; // x3
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  v3 = this;
  if ( (byte_438DEAD & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    sub_B775C4(&CombineServantListViewObject_TypeInfo);
    this = (CombineServantUIDragDropListViewItem_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DEAD = 1;
  }
  mListViewObject = (CombineServantListViewObject_o *)v3->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_24;
  v5 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v5
    || (CombineServantListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v5 - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_B77990(v3->fields.mListViewObject);
    goto LABEL_22;
  }
  manager = mListViewObject->fields.manager;
  if ( !manager )
  {
LABEL_23:
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0LL, 0LL);
    zero = UnityEngine_Vector3__get_zero(0LL);
    CombineServantListViewObject__Init(
      mListViewObject,
      3,
      0LL,
      zero.fields.x,
      *(UnityEngine_Vector3_o *)&zero.fields.y,
      v11);
    goto LABEL_24;
  }
  v6 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] != CombineServantListViewManager_TypeInfo )
  {
LABEL_22:
    sub_B77990(manager);
    goto LABEL_23;
  }
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0LL, 0LL);
  v12 = UnityEngine_Vector3__get_zero(0LL);
  CombineServantListViewObject__Init(mListViewObject, 3, 0LL, v12.fields.x, *(UnityEngine_Vector3_o *)&v12.fields.y, v7);
  ((void (__fastcall *)(struct ListViewManager_o *, Il2CppMethodPointer))manager->klass->vtable._8_ItemDragEnd.method)(
    manager,
    manager->klass->vtable._9_SetSortKind.methodPtr);
  v3->fields.isDrag = 0;
  mDragScrollView = (UnityEngine_Object_o *)v3->fields.mDragScrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (CombineServantUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v3->fields.mDragScrollView;
    if ( !v9 )
      goto LABEL_24;
    scrollView = (UnityEngine_Object_o *)v9->fields.scrollView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (CombineServantUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( scrollView )
      {
        UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0LL);
        return;
      }
LABEL_24:
      sub_B7769C(this, method);
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
  __int64 v8; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *v10; // x19
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = delta.fields.z;
  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_438DEAA & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DEAA = 1;
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
      sub_B7769C(transform, v8);
    }
    v10 = (UnityEngine_Transform_o *)transform;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
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
  struct ListViewObject_o *mListViewObject; // x0
  __int64 v5; // x9
  __int64 v6; // x9
  const MethodInfo *v7; // x1

  if ( (byte_438DEAC & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    sub_B775C4(&CombineServantListViewObject_TypeInfo);
    byte_438DEAC = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_B7769C(mListViewObject, surface);
  surface = (UnityEngine_GameObject_o *)CombineServantListViewObject_TypeInfo;
  v5 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v5
    || (CombineServantListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v5 - 1] != CombineServantListViewObject_TypeInfo )
  {
    goto LABEL_10;
  }
  mListViewObject = (struct ListViewObject_o *)mListViewObject->fields.manager;
  if ( !mListViewObject )
    goto LABEL_11;
  v6 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (CombineServantListViewManager_c *)mListViewObject->klass->_2.typeHierarchy[v6 - 1] != CombineServantListViewManager_TypeInfo )
  {
LABEL_10:
    sub_B77990(mListViewObject);
    goto LABEL_11;
  }
  CombineServantListViewManager__SetDragEnd((CombineServantListViewManager_o *)mListViewObject, 0LL);
  CombineServantUIDragDropListViewItem__DragEnd(this, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantUIDragDropListViewItem__OnDragDropStart(
        CombineServantUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mDragScrollView; // x20
  UnityEngine_Collider_o *mCollider; // x0
  __int64 v5; // x1
  struct UIDragScrollView_o *v6; // x8
  CombineServantListViewObject_o *mListViewObject; // x21
  const MethodInfo *v8; // x1
  __int64 v9; // x9
  __int64 v10; // x9
  ListViewItem_o *Item; // x22
  const MethodInfo *v12; // x1
  int32_t sortIndex; // w21
  CombineServantUIDragDropListViewItem_o *v14; // x0
  const MethodInfo *v15; // x1
  long double v16; // q0 OVERLAPPED

  if ( (byte_438DEA9 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    sub_B775C4(&CombineServantListViewObject_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438DEA9 = 1;
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
    v6 = this->fields.mDragScrollView;
    if ( !v6 )
      goto LABEL_24;
    mDragScrollView = (UnityEngine_Object_o *)v6->fields.scrollView;
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
        (mListViewObject = (CombineServantListViewObject_o *)this->fields.mListViewObject) == 0LL) )
  {
LABEL_24:
    sub_B7769C(mCollider, v5);
  }
  v8 = (const MethodInfo *)CombineServantListViewObject_TypeInfo;
  v9 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v9
    && (CombineServantListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v9 - 1] == CombineServantListViewObject_TypeInfo )
  {
    mDragScrollView = (UnityEngine_Object_o *)mListViewObject->fields.manager;
    if ( !mDragScrollView
      || (v8 = (const MethodInfo *)CombineServantListViewManager_TypeInfo,
          v10 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&mDragScrollView->klass->_2.bitflags2 + 1) >= (unsigned int)v10)
      && (CombineServantListViewManager_c *)mDragScrollView->klass->_2.typeHierarchy[v10 - 1] == CombineServantListViewManager_TypeInfo )
    {
      Item = (ListViewItem_o *)CombineServantListViewObject__GetItem(
                                 (CombineServantListViewObject_o *)this->fields.mListViewObject,
                                 v8);
      CombineServantListViewObject__OnDragDropStart(mListViewObject, v12);
      if ( Item )
      {
        sortIndex = Item->fields.sortIndex;
        mCollider = (UnityEngine_Collider_o *)ListViewItem__get_IsSelect(Item, 0LL);
        if ( mDragScrollView )
        {
          CombineServantListViewManager__SetDragStart(
            (CombineServantListViewManager_o *)mDragScrollView,
            sortIndex,
            ((unsigned __int8)mCollider & 1) == 0,
            0LL);
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
    sub_B77990(this->fields.mListViewObject);
  }
  v16 = sub_B77990(mDragScrollView);
  CombineServantUIDragDropListViewItem__OnDragDropMove(v14, *(UnityEngine_Vector3_o *)&v16, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantUIDragDropListViewItem__Update(
        CombineServantUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  void *main; // x0
  CombineServantListViewManager_c *v4; // x1
  UnityEngine_Camera_o *v5; // x20
  UICamera_c *v6; // x8
  struct UICamera_StaticFields *static_fields; // x8
  UnityEngine_Object_o *Component_WebViewObject; // x20
  CombineServantListViewManager_o *monitor; // x21
  __int64 v10; // x9
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v12; // x8
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Object_c *klass; // x21
  UICamera_c *v15; // x8
  UnityEngine_Camera_o *v16; // x22
  struct UICamera_StaticFields *v17; // x8
  float v18; // s0
  float v19; // s1
  float v20; // s2
  float v21; // s8
  float v22; // s9
  float v23; // s10
  float v24; // s14
  float v25; // s15
  float x; // s8
  float y; // s11
  UnityEngine_Vector2_o ViewSize; // kr00_8
  __int64 v29; // x9
  float v30; // s10
  float v31; // s13
  bool IsLimitOverPosition2; // w21
  UnityEngine_Object_o *v33; // x22
  float v34; // s0
  float v35; // s1
  float v36; // s1
  float v37; // s0
  UnityEngine_Object_o *v38; // x22
  int v39; // s2
  float v40; // s0
  float v41; // s1
  float v42; // s0
  int v43; // s2
  CombineServantUIDragDropListViewItem_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x1
  const MethodInfo *v46; // x2
  UnityEngine_Ray_o v47; // [xsp+0h] [xbp-D0h] BYREF
  UnityEngine_Ray_o v48; // [xsp+18h] [xbp-B8h] BYREF
  UnityEngine_RaycastHit_o v49; // [xsp+30h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438DEAB & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_BoxCollider_TypeInfo);
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_CombineServantListViewObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&UICamera_TypeInfo);
    byte_438DEAB = 1;
  }
  memset(&v49, 0, sizeof(v49));
  if ( !this->fields.isDrag )
    return;
  main = UnityEngine_Camera__get_main(0LL);
  v5 = (UnityEngine_Camera_o *)main;
  v6 = UICamera_TypeInfo;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v6 = UICamera_TypeInfo;
  }
  if ( !v5 )
    goto LABEL_83;
  static_fields = v6->static_fields;
  v50.fields.z = 0.0;
  v50.fields.x = static_fields->lastTouchPosition.fields.x;
  v50.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_41408892(&v48, v5, v50, 0LL);
  v47 = v48;
  if ( UnityEngine_Physics__Raycast_16963696(&v47, &v49, 0LL) )
  {
    main = UnityEngine_RaycastHit__get_collider(&v49, 0LL);
    if ( !main )
      goto LABEL_83;
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)main,
                                                        (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_CombineServantListViewObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    main = (void *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
    if ( ((unsigned __int8)main & 1) != 0 )
    {
      if ( !Component_WebViewObject )
        goto LABEL_83;
      monitor = (CombineServantListViewManager_o *)Component_WebViewObject[1].monitor;
      if ( monitor )
      {
        v4 = CombineServantListViewManager_TypeInfo;
        v10 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1);
        if ( *(&monitor->klass->_2.bitflags2 + 1) < (unsigned int)v10
          || (CombineServantListViewManager_c *)monitor->klass->_2.typeHierarchy[v10 - 1] != CombineServantListViewManager_TypeInfo )
        {
          main = Component_WebViewObject[1].monitor;
          goto LABEL_85;
        }
      }
      main = CombineServantListViewObject__GetItem(
               (CombineServantListViewObject_o *)Component_WebViewObject,
               (const MethodInfo *)v4);
      if ( !main || !monitor )
        goto LABEL_83;
      CombineServantListViewManager__SetDragMove(monitor, *((_DWORD *)main + 6), 0LL);
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
  v12 = this->fields.mDragScrollView;
  if ( !v12 )
    goto LABEL_83;
  scrollView = (UnityEngine_Object_o *)v12->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  main = (void *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
  if ( ((unsigned __int8)main & 1) == 0 )
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
  main = UnityEngine_Camera__get_main(0LL);
  v15 = UICamera_TypeInfo;
  v16 = (UnityEngine_Camera_o *)main;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v15 = UICamera_TypeInfo;
  }
  if ( !v16 )
    goto LABEL_83;
  v17 = v15->static_fields;
  v51.fields.z = 0.0;
  v51.fields.x = v17->lastTouchPosition.fields.x;
  v51.fields.y = v17->lastTouchPosition.fields.y;
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Camera__ScreenToWorldPoint_41408388(v16, v51, 0LL);
  if ( !klass )
    goto LABEL_83;
  v21 = v18;
  v22 = v19;
  v23 = v20;
  main = UnityEngine_Component__get_transform((UnityEngine_Component_o *)klass, 0LL);
  if ( !main )
    goto LABEL_83;
  v52.fields.x = v21;
  v52.fields.y = v22;
  v52.fields.z = v23;
  v53 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)main, v52, 0LL);
  v24 = *((float *)&klass->vtable._1_Finalize.methodPtr + 1);
  v25 = *(float *)&klass->vtable._1_Finalize.method;
  x = v53.fields.x;
  y = v53.fields.y;
  ViewSize = UIPanel__GetViewSize((UIPanel_o *)klass, 0LL);
  main = this->fields.mCollider;
  if ( !main )
    goto LABEL_83;
  v29 = *(&UnityEngine_BoxCollider_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)main + 300LL) < (unsigned int)v29
    || *(UnityEngine_BoxCollider_c **)(*(_QWORD *)(*(_QWORD *)main + 200LL) + 8 * v29 - 8) != UnityEngine_BoxCollider_TypeInfo )
  {
LABEL_85:
    sub_B77990(main);
    CombineServantUIDragDropListViewItem__OnDragDropRelease(v44, v45, v46);
    return;
  }
  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)main, 0LL);
  v30 = size.fields.x;
  v31 = size.fields.y;
  IsLimitOverPosition2 = UIScrollView__IsLimitOverPosition2((UIScrollView_o *)scrollView, 0LL);
  if ( IsLimitOverPosition2 )
    this->fields.isLimit = 1;
  if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)scrollView, 0LL) )
  {
    v33 = (UnityEngine_Object_o *)scrollView[2].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v33, 0LL, 0LL) )
    {
      main = scrollView[2].monitor;
      if ( !main )
        goto LABEL_83;
      if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0LL) > 0.0 )
      {
        v34 = y - v25;
        v35 = (float)(ViewSize.fields.y - v31) * 0.5;
        if ( !this->fields.isLimit )
        {
          if ( v34 > (float)-v35 )
          {
            if ( v34 < v35 )
              return;
            v36 = -1.0;
            v37 = 0.0;
LABEL_76:
            v39 = 0;
            if ( !UIScrollView__IsLimitOverPosition2_39163776(
                    (UIScrollView_o *)scrollView,
                    *(UnityEngine_Vector3_o *)&v37,
                    0LL) )
            {
              v40 = 0.5;
LABEL_82:
              UIScrollView__Scroll((UIScrollView_o *)scrollView, v40, 0LL);
              return;
            }
            return;
          }
          v41 = 1.0;
          v42 = 0.0;
          goto LABEL_80;
        }
        goto LABEL_65;
      }
    }
  }
  if ( !UIScrollView__get_canMoveHorizontally((UIScrollView_o *)scrollView, 0LL) )
    goto LABEL_67;
  v38 = (UnityEngine_Object_o *)scrollView[2].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v38, 0LL, 0LL) )
  {
LABEL_67:
    if ( IsLimitOverPosition2 )
      return;
    goto LABEL_68;
  }
  main = scrollView[2].klass;
  if ( !main )
LABEL_83:
    sub_B7769C(main, v4);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0LL) <= 0.0 )
    goto LABEL_67;
  v34 = x - v24;
  v35 = (float)(ViewSize.fields.x - v30) * 0.5;
  if ( this->fields.isLimit )
  {
LABEL_65:
    if ( IsLimitOverPosition2 )
    {
      UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0LL);
      return;
    }
    if ( v34 <= (float)-v35 || v34 >= v35 )
      return;
LABEL_68:
    this->fields.isLimit = 0;
    return;
  }
  if ( v34 > (float)-v35 )
  {
    if ( v34 < v35 )
      return;
    v37 = -1.0;
    v36 = 0.0;
    goto LABEL_76;
  }
  v42 = 1.0;
  v41 = 0.0;
LABEL_80:
  v43 = 0;
  if ( !UIScrollView__IsLimitOverPosition2_39163776((UIScrollView_o *)scrollView, *(UnityEngine_Vector3_o *)&v42, 0LL) )
  {
    v40 = -0.5;
    goto LABEL_82;
  }
}