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
  SvtEqCombineUIDragDropListViewItem_o *v3; // x19
  SvtEqCombineListViewObject_o *mListViewObject; // x20
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
  if ( (byte_42B5B97 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SvtEqCombineListViewManager_TypeInfo);
    this = (SvtEqCombineUIDragDropListViewItem_o *)sub_B52984(&SvtEqCombineListViewObject_TypeInfo);
    byte_42B5B97 = 1;
  }
  mListViewObject = (SvtEqCombineListViewObject_o *)v3->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_24;
  v5 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v5
    || (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v5 - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_B52D50(v3->fields.mListViewObject);
    goto LABEL_22;
  }
  manager = mListViewObject->fields.manager;
  if ( !manager )
  {
LABEL_23:
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0LL, 0LL);
    zero = UnityEngine_Vector3__get_zero(0LL);
    SvtEqCombineListViewObject__Init(
      mListViewObject,
      4,
      0LL,
      zero.fields.x,
      *(UnityEngine_Vector3_o *)&zero.fields.y,
      v11);
    goto LABEL_24;
  }
  v6 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
LABEL_22:
    sub_B52D50(manager);
    goto LABEL_23;
  }
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0LL, 0LL);
  v12 = UnityEngine_Vector3__get_zero(0LL);
  SvtEqCombineListViewObject__Init(mListViewObject, 4, 0LL, v12.fields.x, *(UnityEngine_Vector3_o *)&v12.fields.y, v7);
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
  this = (SvtEqCombineUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0LL, 0LL);
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
    this = (SvtEqCombineUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( scrollView )
      {
        UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0LL);
        return;
      }
LABEL_24:
      sub_B52A5C(this, method);
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
  if ( (byte_42B5B94 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B5B94 = 1;
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
      sub_B52A5C(transform, v8);
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
  __int64 v5; // x9
  __int64 v6; // x9
  const MethodInfo *v7; // x1

  if ( (byte_42B5B96 & 1) == 0 )
  {
    sub_B52984(&SvtEqCombineListViewManager_TypeInfo);
    sub_B52984(&SvtEqCombineListViewObject_TypeInfo);
    byte_42B5B96 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_B52A5C(mListViewObject, surface);
  surface = (UnityEngine_GameObject_o *)SvtEqCombineListViewObject_TypeInfo;
  v5 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v5
    || (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v5 - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    goto LABEL_10;
  }
  mListViewObject = (struct ListViewObject_o *)mListViewObject->fields.manager;
  if ( !mListViewObject )
    goto LABEL_11;
  v6 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (SvtEqCombineListViewManager_c *)mListViewObject->klass->_2.typeHierarchy[v6 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
LABEL_10:
    sub_B52D50(mListViewObject);
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
  __int64 v9; // x9
  __int64 v10; // x9
  ListViewItem_o *Item; // x22
  const MethodInfo *v12; // x1
  int32_t sortIndex; // w21
  const MethodInfo *v14; // x3
  SvtEqCombineUIDragDropListViewItem_o *v15; // x0
  const MethodInfo *v16; // x1
  long double v17; // q0 OVERLAPPED

  if ( (byte_42B5B93 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SvtEqCombineListViewManager_TypeInfo);
    sub_B52984(&SvtEqCombineListViewObject_TypeInfo);
    byte_42B5B93 = 1;
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
        (mListViewObject = (SvtEqCombineListViewObject_o *)this->fields.mListViewObject) == 0LL) )
  {
LABEL_24:
    sub_B52A5C(mCollider, v5);
  }
  v8 = (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo;
  v9 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v9
    && (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v9 - 1] == SvtEqCombineListViewObject_TypeInfo )
  {
    mDragScrollView = (UnityEngine_Object_o *)mListViewObject->fields.manager;
    if ( !mDragScrollView
      || (v8 = (const MethodInfo *)SvtEqCombineListViewManager_TypeInfo,
          v10 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&mDragScrollView->klass->_2.bitflags2 + 1) >= (unsigned int)v10)
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
    sub_B52D50(this->fields.mListViewObject);
  }
  v17 = sub_B52D50(mDragScrollView);
  SvtEqCombineUIDragDropListViewItem__OnDragDropMove(v15, *(UnityEngine_Vector3_o *)&v17, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SvtEqCombineUIDragDropListViewItem__Update(
        SvtEqCombineUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  void *main; // x0
  SvtEqCombineListViewManager_c *v4; // x1
  UnityEngine_Camera_o *v5; // x20
  UICamera_c *v6; // x8
  struct UICamera_StaticFields *static_fields; // x8
  UnityEngine_Object_o *Component_WebViewObject; // x20
  SvtEqCombineListViewManager_o *monitor; // x21
  __int64 v10; // x9
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v14; // x8
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Object_c *klass; // x21
  UICamera_c *v17; // x8
  UnityEngine_Camera_o *v18; // x22
  struct UICamera_StaticFields *v19; // x8
  float v20; // s0
  float v21; // s1
  float v22; // s2
  float v23; // s8
  float v24; // s9
  float v25; // s10
  float v26; // s14
  float v27; // s15
  float x; // s8
  float y; // s11
  UnityEngine_Vector2_o ViewSize; // kr00_8
  __int64 v31; // x9
  float v32; // s10
  float v33; // s13
  bool IsLimitOverPosition2; // w21
  UnityEngine_Object_o *v35; // x22
  float v36; // s0
  float v37; // s1
  float v38; // s1
  float v39; // s0
  UnityEngine_Object_o *v40; // x22
  int v41; // s2
  float v42; // s0
  float v43; // s1
  float v44; // s0
  int v45; // s2
  SvtEqCombineUIDragDropListViewItem_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x1
  const MethodInfo *v48; // x2
  UnityEngine_Ray_o v49; // [xsp+0h] [xbp-D0h] BYREF
  UnityEngine_Ray_o v50; // [xsp+18h] [xbp-B8h] BYREF
  UnityEngine_RaycastHit_o v51; // [xsp+30h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B5B95 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_BoxCollider_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_SvtEqCombineListViewObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SvtEqCombineListViewManager_TypeInfo);
    sub_B52984(&UICamera_TypeInfo);
    byte_42B5B95 = 1;
  }
  memset(&v51, 0, sizeof(v51));
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
    goto LABEL_84;
  static_fields = v6->static_fields;
  v52.fields.z = 0.0;
  v52.fields.x = static_fields->lastTouchPosition.fields.x;
  v52.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_41461728(&v50, v5, v52, 0LL);
  v49 = v50;
  if ( UnityEngine_Physics__Raycast_16778008(&v49, &v51, 0LL) )
  {
    main = UnityEngine_RaycastHit__get_collider(&v51, 0LL);
    if ( !main )
      goto LABEL_84;
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)main,
                                                        (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_SvtEqCombineListViewObject___);
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
        v4 = SvtEqCombineListViewManager_TypeInfo;
        v10 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
        if ( *(&monitor->klass->_2.bitflags2 + 1) < (unsigned int)v10
          || (SvtEqCombineListViewManager_c *)monitor->klass->_2.typeHierarchy[v10 - 1] != SvtEqCombineListViewManager_TypeInfo )
        {
          main = Component_WebViewObject[1].monitor;
          goto LABEL_86;
        }
      }
      main = SvtEqCombineListViewObject__GetItem(
               (SvtEqCombineListViewObject_o *)Component_WebViewObject,
               (const MethodInfo *)v4);
      if ( !main || !monitor )
        goto LABEL_84;
      v12 = *((_DWORD *)main + 6);
      if ( monitor->fields.dragEndIndex != v12 )
        SvtEqCombineListViewManager__SetDragSelectItem(monitor, monitor->fields.dragStartIndex, v12, v11);
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
  v14 = this->fields.mDragScrollView;
  if ( !v14 )
    goto LABEL_84;
  scrollView = (UnityEngine_Object_o *)v14->fields.scrollView;
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
  v17 = UICamera_TypeInfo;
  v18 = (UnityEngine_Camera_o *)main;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v17 = UICamera_TypeInfo;
  }
  if ( !v18 )
    goto LABEL_84;
  v19 = v17->static_fields;
  v53.fields.z = 0.0;
  v53.fields.x = v19->lastTouchPosition.fields.x;
  v53.fields.y = v19->lastTouchPosition.fields.y;
  *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Camera__ScreenToWorldPoint_41461224(v18, v53, 0LL);
  if ( !klass )
    goto LABEL_84;
  v23 = v20;
  v24 = v21;
  v25 = v22;
  main = UnityEngine_Component__get_transform((UnityEngine_Component_o *)klass, 0LL);
  if ( !main )
    goto LABEL_84;
  v54.fields.x = v23;
  v54.fields.y = v24;
  v54.fields.z = v25;
  v55 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)main, v54, 0LL);
  v26 = *((float *)&klass->vtable._1_Finalize.methodPtr + 1);
  v27 = *(float *)&klass->vtable._1_Finalize.method;
  x = v55.fields.x;
  y = v55.fields.y;
  ViewSize = UIPanel__GetViewSize((UIPanel_o *)klass, 0LL);
  main = this->fields.mCollider;
  if ( !main )
    goto LABEL_84;
  v31 = *(&UnityEngine_BoxCollider_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)main + 300LL) < (unsigned int)v31
    || *(UnityEngine_BoxCollider_c **)(*(_QWORD *)(*(_QWORD *)main + 200LL) + 8 * v31 - 8) != UnityEngine_BoxCollider_TypeInfo )
  {
LABEL_86:
    sub_B52D50(main);
    SvtEqCombineUIDragDropListViewItem__OnDragDropRelease(v46, v47, v48);
    return;
  }
  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)main, 0LL);
  v32 = size.fields.x;
  v33 = size.fields.y;
  IsLimitOverPosition2 = UIScrollView__IsLimitOverPosition2((UIScrollView_o *)scrollView, 0LL);
  if ( IsLimitOverPosition2 )
    this->fields.isLimit = 1;
  if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)scrollView, 0LL) )
  {
    v35 = (UnityEngine_Object_o *)scrollView[2].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
    {
      main = scrollView[2].monitor;
      if ( !main )
        goto LABEL_84;
      if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0LL) > 0.0 )
      {
        v36 = y - v27;
        v37 = (float)(ViewSize.fields.y - v33) * 0.5;
        if ( !this->fields.isLimit )
        {
          if ( v36 > (float)-v37 )
          {
            if ( v36 < v37 )
              return;
            v38 = -1.0;
            v39 = 0.0;
LABEL_77:
            v41 = 0;
            if ( !UIScrollView__IsLimitOverPosition2_39113064(
                    (UIScrollView_o *)scrollView,
                    *(UnityEngine_Vector3_o *)&v39,
                    0LL) )
            {
              v42 = 0.5;
LABEL_83:
              UIScrollView__Scroll((UIScrollView_o *)scrollView, v42, 0LL);
              return;
            }
            return;
          }
          v43 = 1.0;
          v44 = 0.0;
          goto LABEL_81;
        }
        goto LABEL_66;
      }
    }
  }
  if ( !UIScrollView__get_canMoveHorizontally((UIScrollView_o *)scrollView, 0LL) )
    goto LABEL_68;
  v40 = (UnityEngine_Object_o *)scrollView[2].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v40, 0LL, 0LL) )
  {
LABEL_68:
    if ( IsLimitOverPosition2 )
      return;
    goto LABEL_69;
  }
  main = scrollView[2].klass;
  if ( !main )
LABEL_84:
    sub_B52A5C(main, v4);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0LL) <= 0.0 )
    goto LABEL_68;
  v36 = x - v26;
  v37 = (float)(ViewSize.fields.x - v32) * 0.5;
  if ( this->fields.isLimit )
  {
LABEL_66:
    if ( IsLimitOverPosition2 )
    {
      UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0LL);
      return;
    }
    if ( v36 <= (float)-v37 || v36 >= v37 )
      return;
LABEL_69:
    this->fields.isLimit = 0;
    return;
  }
  if ( v36 > (float)-v37 )
  {
    if ( v36 < v37 )
      return;
    v39 = -1.0;
    v38 = 0.0;
    goto LABEL_77;
  }
  v44 = 1.0;
  v43 = 0.0;
LABEL_81:
  v45 = 0;
  if ( !UIScrollView__IsLimitOverPosition2_39113064((UIScrollView_o *)scrollView, *(UnityEngine_Vector3_o *)&v44, 0LL) )
  {
    v42 = -0.5;
    goto LABEL_83;
  }
}