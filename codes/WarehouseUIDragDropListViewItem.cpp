void __fastcall WarehouseUIDragDropListViewItem___ctor(
        WarehouseUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewItem___ctor((UIDragDropListViewItem_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseUIDragDropListViewItem__DragEnd(
        WarehouseUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x21
  WarehouseUIDragDropListViewItem_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  WarehouseListViewObject_o *mListViewObject; // x20
  __int64 v7; // x9
  __int64 v8; // x9
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v11; // x8
  UnityEngine_Object_o *scrollView; // x19
  const MethodInfo *v13; // x3
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  v3 = this;
  if ( (byte_41873C9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&WarehouseListViewManager_TypeInfo, v4);
    this = (WarehouseUIDragDropListViewItem_o *)sub_B2C35C(&WarehouseListViewObject_TypeInfo, v5);
    byte_41873C9 = 1;
  }
  mListViewObject = (WarehouseListViewObject_o *)v3->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_24;
  v7 = *(&WarehouseListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (WarehouseListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v7 - 1] != WarehouseListViewObject_TypeInfo )
  {
    sub_B2C728(v3->fields.mListViewObject);
    goto LABEL_22;
  }
  manager = mListViewObject->fields.manager;
  if ( !manager )
  {
LABEL_23:
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0LL, 0LL);
    zero = UnityEngine_Vector3__get_zero(0LL);
    WarehouseListViewObject__Init(mListViewObject, 3, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v13);
    goto LABEL_24;
  }
  v8 = *(&WarehouseListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v8
    || (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] != WarehouseListViewManager_TypeInfo )
  {
LABEL_22:
    sub_B2C728(manager);
    goto LABEL_23;
  }
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0LL, 0LL);
  v14 = UnityEngine_Vector3__get_zero(0LL);
  WarehouseListViewObject__Init(mListViewObject, 3, 0LL, v14.fields.x, *(UnityEngine_Vector3_o *)&v14.fields.y, v9);
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
  this = (WarehouseUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v11 = v3->fields.mDragScrollView;
    if ( !v11 )
      goto LABEL_24;
    scrollView = (UnityEngine_Object_o *)v11->fields.scrollView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (WarehouseUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( scrollView )
      {
        UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0LL);
        return;
      }
LABEL_24:
      sub_B2C434(this, method);
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
  if ( (byte_41873C6 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41873C6 = 1;
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
      sub_B2C434(transform, v8);
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
  __int64 v4; // x1
  struct ListViewObject_o *mListViewObject; // x0
  __int64 v6; // x9
  __int64 v7; // x9
  const MethodInfo *v8; // x1

  if ( (byte_41873C8 & 1) == 0 )
  {
    sub_B2C35C(&WarehouseListViewManager_TypeInfo, surface);
    sub_B2C35C(&WarehouseListViewObject_TypeInfo, v4);
    byte_41873C8 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_B2C434(mListViewObject, surface);
  surface = (UnityEngine_GameObject_o *)WarehouseListViewObject_TypeInfo;
  v6 = *(&WarehouseListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (WarehouseListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v6 - 1] != WarehouseListViewObject_TypeInfo )
  {
    goto LABEL_10;
  }
  mListViewObject = (struct ListViewObject_o *)mListViewObject->fields.manager;
  if ( !mListViewObject )
    goto LABEL_11;
  v7 = *(&WarehouseListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (WarehouseListViewManager_c *)mListViewObject->klass->_2.typeHierarchy[v7 - 1] != WarehouseListViewManager_TypeInfo )
  {
LABEL_10:
    mListViewObject = (struct ListViewObject_o *)sub_B2C728(mListViewObject);
    goto LABEL_11;
  }
  WarehouseListViewManager__SetDragEnd((WarehouseListViewManager_o *)mListViewObject, 0LL);
  WarehouseUIDragDropListViewItem__DragEnd(this, v8);
}


void __fastcall WarehouseUIDragDropListViewItem__OnDragDropStart(
        WarehouseUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *mDragScrollView; // x20
  UnityEngine_Collider_o *mCollider; // x0
  __int64 v7; // x1
  struct UIDragScrollView_o *v8; // x8
  WarehouseListViewObject_o *mListViewObject; // x21
  const MethodInfo *v10; // x1
  __int64 v11; // x9
  __int64 v12; // x9
  ListViewItem_o *Item; // x22
  const MethodInfo *v14; // x1
  int32_t sortIndex; // w21
  WarehouseUIDragDropListViewItem_o *v16; // x0
  const MethodInfo *v17; // x1
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41873C5 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&WarehouseListViewManager_TypeInfo, v3);
    sub_B2C35C(&WarehouseListViewObject_TypeInfo, v4);
    byte_41873C5 = 1;
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
    v8 = this->fields.mDragScrollView;
    if ( !v8 )
      goto LABEL_24;
    mDragScrollView = (UnityEngine_Object_o *)v8->fields.scrollView;
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
        (mListViewObject = (WarehouseListViewObject_o *)this->fields.mListViewObject) == 0LL) )
  {
LABEL_24:
    sub_B2C434(mCollider, v7);
  }
  v10 = (const MethodInfo *)WarehouseListViewObject_TypeInfo;
  v11 = *(&WarehouseListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v11
    && (WarehouseListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v11 - 1] == WarehouseListViewObject_TypeInfo )
  {
    mDragScrollView = (UnityEngine_Object_o *)mListViewObject->fields.manager;
    if ( !mDragScrollView
      || (v10 = (const MethodInfo *)WarehouseListViewManager_TypeInfo,
          v12 = *(&WarehouseListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&mDragScrollView->klass->_2.bitflags2 + 1) >= (unsigned int)v12)
      && (WarehouseListViewManager_c *)mDragScrollView->klass->_2.typeHierarchy[v12 - 1] == WarehouseListViewManager_TypeInfo )
    {
      Item = (ListViewItem_o *)WarehouseListViewObject__GetItem(
                                 (WarehouseListViewObject_o *)this->fields.mListViewObject,
                                 v10);
      WarehouseListViewObject__OnDragDropStart(mListViewObject, v14);
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
    sub_B2C728(this->fields.mListViewObject);
  }
  v16 = (WarehouseUIDragDropListViewItem_o *)sub_B2C728(mDragScrollView);
  WarehouseUIDragDropListViewItem__OnDragDropMove(v16, v18, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseUIDragDropListViewItem__Update(
        WarehouseUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  void *main; // x0
  WarehouseListViewManager_c *v8; // x1
  UnityEngine_Camera_o *v9; // x20
  UICamera_c *v10; // x8
  struct UICamera_StaticFields *static_fields; // x8
  UnityEngine_Object_o *Component_WebViewObject; // x20
  WarehouseListViewManager_o *monitor; // x21
  __int64 v14; // x9
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v16; // x8
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Object_c *klass; // x21
  UICamera_c *v19; // x8
  UnityEngine_Camera_o *v20; // x22
  struct UICamera_StaticFields *v21; // x8
  float v22; // s0
  float v23; // s1
  float v24; // s2
  float v25; // s8
  float v26; // s9
  float v27; // s10
  float v28; // s14
  float v29; // s15
  float x; // s8
  float y; // s11
  UnityEngine_Vector2_o ViewSize; // kr00_8
  __int64 v33; // x9
  float v34; // s10
  float v35; // s13
  bool IsLimitOverPosition2; // w21
  UnityEngine_Object_o *v37; // x22
  float v38; // s0
  float v39; // s1
  float v40; // s1
  float v41; // s0
  UnityEngine_Object_o *v42; // x22
  int v43; // s2
  float v44; // s0
  float v45; // s1
  float v46; // s0
  int v47; // s2
  WarehouseUIDragDropListViewItem_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x1
  const MethodInfo *v50; // x2
  UnityEngine_Ray_o v51; // [xsp+0h] [xbp-D0h] BYREF
  UnityEngine_Ray_o v52; // [xsp+18h] [xbp-B8h] BYREF
  UnityEngine_RaycastHit_o v53; // [xsp+30h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41873C7 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_BoxCollider_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_WarehouseListViewObject___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&UICamera_TypeInfo, v5);
    sub_B2C35C(&WarehouseListViewManager_TypeInfo, v6);
    byte_41873C7 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  if ( !this->fields.isDrag )
    return;
  main = UnityEngine_Camera__get_main(0LL);
  v9 = (UnityEngine_Camera_o *)main;
  v10 = UICamera_TypeInfo;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v10 = UICamera_TypeInfo;
  }
  if ( !v9 )
    goto LABEL_83;
  static_fields = v10->static_fields;
  v54.fields.z = 0.0;
  v54.fields.x = static_fields->lastTouchPosition.fields.x;
  v54.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_40631244(&v52, v9, v54, 0LL);
  v51 = v52;
  if ( UnityEngine_Physics__Raycast_16635124(&v51, &v53, 0LL) )
  {
    main = UnityEngine_RaycastHit__get_collider(&v53, 0LL);
    if ( !main )
      goto LABEL_83;
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)main,
                                                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_WarehouseListViewObject___);
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
      monitor = (WarehouseListViewManager_o *)Component_WebViewObject[1].monitor;
      if ( monitor )
      {
        v8 = WarehouseListViewManager_TypeInfo;
        v14 = *(&WarehouseListViewManager_TypeInfo->_2.bitflags2 + 1);
        if ( *(&monitor->klass->_2.bitflags2 + 1) < (unsigned int)v14
          || (WarehouseListViewManager_c *)monitor->klass->_2.typeHierarchy[v14 - 1] != WarehouseListViewManager_TypeInfo )
        {
          main = Component_WebViewObject[1].monitor;
          goto LABEL_85;
        }
      }
      main = WarehouseListViewObject__GetItem(
               (WarehouseListViewObject_o *)Component_WebViewObject,
               (const MethodInfo *)v8);
      if ( !main || !monitor )
        goto LABEL_83;
      WarehouseListViewManager__SetDragMove(monitor, *((_DWORD *)main + 6), 0LL);
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
  v16 = this->fields.mDragScrollView;
  if ( !v16 )
    goto LABEL_83;
  scrollView = (UnityEngine_Object_o *)v16->fields.scrollView;
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
  v19 = UICamera_TypeInfo;
  v20 = (UnityEngine_Camera_o *)main;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v19 = UICamera_TypeInfo;
  }
  if ( !v20 )
    goto LABEL_83;
  v21 = v19->static_fields;
  v55.fields.z = 0.0;
  v55.fields.x = v21->lastTouchPosition.fields.x;
  v55.fields.y = v21->lastTouchPosition.fields.y;
  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Camera__ScreenToWorldPoint_40630740(v20, v55, 0LL);
  if ( !klass )
    goto LABEL_83;
  v25 = v22;
  v26 = v23;
  v27 = v24;
  main = UnityEngine_Component__get_transform((UnityEngine_Component_o *)klass, 0LL);
  if ( !main )
    goto LABEL_83;
  v56.fields.x = v25;
  v56.fields.y = v26;
  v56.fields.z = v27;
  v57 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)main, v56, 0LL);
  v28 = *((float *)&klass->vtable._1_Finalize.methodPtr + 1);
  v29 = *(float *)&klass->vtable._1_Finalize.method;
  x = v57.fields.x;
  y = v57.fields.y;
  ViewSize = UIPanel__GetViewSize((UIPanel_o *)klass, 0LL);
  main = this->fields.mCollider;
  if ( !main )
    goto LABEL_83;
  v33 = *(&UnityEngine_BoxCollider_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)main + 300LL) < (unsigned int)v33
    || *(UnityEngine_BoxCollider_c **)(*(_QWORD *)(*(_QWORD *)main + 200LL) + 8 * v33 - 8) != UnityEngine_BoxCollider_TypeInfo )
  {
LABEL_85:
    v48 = (WarehouseUIDragDropListViewItem_o *)sub_B2C728(main);
    WarehouseUIDragDropListViewItem__OnDragDropRelease(v48, v49, v50);
    return;
  }
  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)main, 0LL);
  v34 = size.fields.x;
  v35 = size.fields.y;
  IsLimitOverPosition2 = UIScrollView__IsLimitOverPosition2((UIScrollView_o *)scrollView, 0LL);
  if ( IsLimitOverPosition2 )
    this->fields.isLimit = 1;
  if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)scrollView, 0LL) )
  {
    v37 = (UnityEngine_Object_o *)scrollView[2].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v37, 0LL, 0LL) )
    {
      main = scrollView[2].monitor;
      if ( !main )
        goto LABEL_83;
      if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0LL) > 0.0 )
      {
        v38 = y - v29;
        v39 = (float)(ViewSize.fields.y - v35) * 0.5;
        if ( !this->fields.isLimit )
        {
          if ( v38 > (float)-v39 )
          {
            if ( v38 < v39 )
              return;
            v40 = -1.0;
            v41 = 0.0;
LABEL_76:
            v43 = 0;
            if ( !UIScrollView__IsLimitOverPosition2_37886296(
                    (UIScrollView_o *)scrollView,
                    *(UnityEngine_Vector3_o *)&v41,
                    0LL) )
            {
              v44 = 0.5;
LABEL_82:
              UIScrollView__Scroll((UIScrollView_o *)scrollView, v44, 0LL);
              return;
            }
            return;
          }
          v45 = 1.0;
          v46 = 0.0;
          goto LABEL_80;
        }
        goto LABEL_65;
      }
    }
  }
  if ( !UIScrollView__get_canMoveHorizontally((UIScrollView_o *)scrollView, 0LL) )
    goto LABEL_67;
  v42 = (UnityEngine_Object_o *)scrollView[2].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
  {
LABEL_67:
    if ( IsLimitOverPosition2 )
      return;
    goto LABEL_68;
  }
  main = scrollView[2].klass;
  if ( !main )
LABEL_83:
    sub_B2C434(main, v8);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0LL) <= 0.0 )
    goto LABEL_67;
  v38 = x - v28;
  v39 = (float)(ViewSize.fields.x - v34) * 0.5;
  if ( this->fields.isLimit )
  {
LABEL_65:
    if ( IsLimitOverPosition2 )
    {
      UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0LL);
      return;
    }
    if ( v38 <= (float)-v39 || v38 >= v39 )
      return;
LABEL_68:
    this->fields.isLimit = 0;
    return;
  }
  if ( v38 > (float)-v39 )
  {
    if ( v38 < v39 )
      return;
    v41 = -1.0;
    v40 = 0.0;
    goto LABEL_76;
  }
  v46 = 1.0;
  v45 = 0.0;
LABEL_80:
  v47 = 0;
  if ( !UIScrollView__IsLimitOverPosition2_37886296((UIScrollView_o *)scrollView, *(UnityEngine_Vector3_o *)&v46, 0LL) )
  {
    v44 = -0.5;
    goto LABEL_82;
  }
}