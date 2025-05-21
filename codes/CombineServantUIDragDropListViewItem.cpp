void __fastcall CombineServantUIDragDropListViewItem___ctor(
        CombineServantUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewItem___ctor((UIDragDropListViewItem_o *)this, 0LL);
}


void __fastcall CombineServantUIDragDropListViewItem__DragEnd(
        CombineServantUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x21
  CombineServantUIDragDropListViewItem_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  CombineServantListViewObject_o *mListViewObject; // x20
  __int64 methodPtr_low; // x9
  __int64 v8; // x9
  const MethodInfo *v9; // x2
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v11; // x8
  UnityEngine_Object_o *scrollView; // x19
  const MethodInfo *v13; // x2

  v3 = this;
  if ( (byte_4B48AAB & 1) == 0 )
  {
    sub_1BDB878(&CombineServantListViewManager_TypeInfo, method);
    sub_1BDB878(&CombineServantListViewObject_TypeInfo, v4);
    this = (CombineServantUIDragDropListViewItem_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    byte_4B48AAB = 1;
  }
  mListViewObject = (CombineServantListViewObject_o *)v3->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_22;
  methodPtr_low = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1BDBD94(v3->fields.mListViewObject);
    goto LABEL_20;
  }
  manager = mListViewObject->fields.manager;
  if ( !manager )
  {
LABEL_21:
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0LL, 0LL);
    CombineServantListViewObject__Init_47628488(mListViewObject, 3, v13);
    goto LABEL_22;
  }
  v8 = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v8
    || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] != CombineServantListViewManager_TypeInfo )
  {
LABEL_20:
    sub_1BDBD94(manager);
    goto LABEL_21;
  }
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0LL, 0LL);
  CombineServantListViewObject__Init_47628488(mListViewObject, 3, v9);
  ((void (__fastcall *)(struct ListViewManager_o *, Il2CppMethodPointer))manager->klass->vtable._9_ItemDragEnd.method)(
    manager,
    manager->klass->vtable._10_SetSortKind.methodPtr);
  v3->fields.isDrag = 0;
  mDragScrollView = (UnityEngine_Object_o *)v3->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CombineServantUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v11 = v3->fields.mDragScrollView;
    if ( !v11 )
      goto LABEL_22;
    scrollView = (UnityEngine_Object_o *)v11->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (CombineServantUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( scrollView )
      {
        UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0LL);
        return;
      }
LABEL_22:
      sub_1BDBAD4(this, method);
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
  if ( (byte_4B48AA8 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B48AA8 = 1;
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
      sub_1BDBAD4(transform, v8);
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
  __int64 v4; // x1
  struct ListViewObject_o *mListViewObject; // x0
  __int64 methodPtr_low; // x9
  __int64 v7; // x9
  const MethodInfo *v8; // x1

  if ( (byte_4B48AAA & 1) == 0 )
  {
    sub_1BDB878(&CombineServantListViewManager_TypeInfo, surface);
    sub_1BDB878(&CombineServantListViewObject_TypeInfo, v4);
    byte_4B48AAA = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_1BDBAD4(mListViewObject, surface);
  surface = (UnityEngine_GameObject_o *)CombineServantListViewObject_TypeInfo;
  methodPtr_low = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewObject_TypeInfo )
  {
    goto LABEL_10;
  }
  mListViewObject = (struct ListViewObject_o *)mListViewObject->fields.manager;
  if ( !mListViewObject )
    goto LABEL_11;
  v7 = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) < (unsigned int)v7
    || (CombineServantListViewManager_c *)mListViewObject->klass->_2.typeHierarchy[v7 - 1] != CombineServantListViewManager_TypeInfo )
  {
LABEL_10:
    sub_1BDBD94(mListViewObject);
    goto LABEL_11;
  }
  CombineServantListViewManager__SetDragEnd((CombineServantListViewManager_o *)mListViewObject, 0LL);
  CombineServantUIDragDropListViewItem__DragEnd(this, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantUIDragDropListViewItem__OnDragDropStart(
        CombineServantUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *mDragScrollView; // x20
  UnityEngine_Collider_o *mCollider; // x0
  __int64 v7; // x1
  struct UIDragScrollView_o *v8; // x8
  CombineServantListViewObject_o *mListViewObject; // x21
  const MethodInfo *v10; // x1
  __int64 methodPtr_low; // x9
  __int64 v12; // x9
  ListViewItem_o *Item; // x22
  const MethodInfo *v14; // x1
  int32_t sortIndex; // w21
  CombineServantUIDragDropListViewItem_o *v16; // x0
  const MethodInfo *v17; // x1
  long double v18; // q0 OVERLAPPED

  if ( (byte_4B48AA7 & 1) == 0 )
  {
    sub_1BDB878(&CombineServantListViewManager_TypeInfo, method);
    sub_1BDB878(&CombineServantListViewObject_TypeInfo, v3);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v4);
    byte_4B48AA7 = 1;
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
        (mListViewObject = (CombineServantListViewObject_o *)this->fields.mListViewObject) == 0LL) )
  {
LABEL_22:
    sub_1BDBAD4(mCollider, v7);
  }
  v10 = (const MethodInfo *)CombineServantListViewObject_TypeInfo;
  methodPtr_low = LOBYTE(CombineServantListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (CombineServantListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineServantListViewObject_TypeInfo )
  {
    mDragScrollView = (UnityEngine_Object_o *)mListViewObject->fields.manager;
    if ( !mDragScrollView
      || (v10 = (const MethodInfo *)CombineServantListViewManager_TypeInfo,
          v12 = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(mDragScrollView->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v12)
      && (CombineServantListViewManager_c *)mDragScrollView->klass->_2.typeHierarchy[v12 - 1] == CombineServantListViewManager_TypeInfo )
    {
      Item = (ListViewItem_o *)CombineServantListViewObject__GetItem(
                                 (CombineServantListViewObject_o *)this->fields.mListViewObject,
                                 v10);
      CombineServantListViewObject__OnDragDropStart(mListViewObject, v14);
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
    sub_1BDBD94(this->fields.mListViewObject);
  }
  v18 = sub_1BDBD94(mDragScrollView);
  CombineServantUIDragDropListViewItem__OnDragDropMove(v16, *(UnityEngine_Vector3_o *)&v18, v17);
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
  __int64 v7; // x1
  void *main; // x0
  const MethodInfo *v9; // x1
  UICamera_c *v10; // x8
  UnityEngine_Camera_o *v11; // x20
  struct UICamera_StaticFields *static_fields; // x8
  Il2CppObject *Component_object; // x20
  CombineServantListViewManager_o *monitor; // x21
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v17; // x8
  struct UIScrollView_o *scrollView; // x20
  struct UIPanel_o *mPanel; // x21
  UICamera_c *v20; // x8
  UnityEngine_Camera_o *v21; // x22
  struct UICamera_StaticFields *v22; // x8
  float v23; // s0
  float v24; // s1
  float v25; // s2
  float v26; // s8
  float v27; // s9
  float v28; // s10
  float x; // s14
  float y; // s15
  float v31; // s8
  float v32; // s11
  UnityEngine_Vector2_o ViewSize; // kr00_8
  __int64 v34; // x9
  float v35; // s10
  float v36; // s13
  bool IsLimitOverPosition2; // w21
  UnityEngine_Object_o *verticalScrollBar; // x22
  float v39; // s0
  float v40; // s1
  float v41; // s0
  float v42; // s1
  UnityEngine_Object_o *horizontalScrollBar; // x22
  int v44; // s2
  float v45; // s0
  float v46; // s0
  float v47; // s1
  int v48; // s2
  CombineServantUIDragDropListViewItem_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x1
  const MethodInfo *v51; // x2
  UnityEngine_Ray_o v52; // [xsp+0h] [xbp-100h] BYREF
  UnityEngine_Ray_o v53; // [xsp+18h] [xbp-E8h] BYREF
  UnityEngine_Ray_o v54; // [xsp+30h] [xbp-D0h]
  UnityEngine_RaycastHit_o v55; // [xsp+50h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B48AA9 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_BoxCollider_TypeInfo, method);
    sub_1BDB878(&CombineServantListViewManager_TypeInfo, v3);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_CombineServantListViewObject___, v4);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    sub_1BDB878(&UnityEngine_Physics_TypeInfo, v6);
    sub_1BDB878(&UICamera_TypeInfo, v7);
    byte_4B48AA9 = 1;
  }
  memset(&v55, 0, sizeof(v55));
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
  v56.fields.z = 0.0;
  v56.fields.x = static_fields->lastTouchPosition.fields.x;
  v56.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_70090496(&v53, v11, v56, 0LL);
  v54 = v53;
  if ( !UnityEngine_Physics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo);
  v52 = v54;
  if ( !UnityEngine_Physics__Raycast_70601228(&v52, &v55, 0LL) )
    goto LABEL_20;
  main = UnityEngine_RaycastHit__get_collider(&v55, 0LL);
  if ( !main )
    goto LABEL_78;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)main,
                       (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_CombineServantListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  main = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)main & 1) == 0 )
    goto LABEL_20;
  if ( !Component_object )
    goto LABEL_78;
  monitor = (CombineServantListViewManager_o *)Component_object[2].monitor;
  if ( !monitor )
  {
LABEL_77:
    main = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)Component_object, v9);
    goto LABEL_78;
  }
  methodPtr_low = LOBYTE(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(monitor->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (CombineServantListViewManager_c *)monitor->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineServantListViewManager_TypeInfo )
  {
    sub_1BDBD94(Component_object[2].monitor);
    goto LABEL_77;
  }
  main = CombineServantListViewObject__GetItem(
           (CombineServantListViewObject_o *)Component_object,
           (const MethodInfo *)CombineServantListViewManager_TypeInfo);
  if ( !main )
    goto LABEL_78;
  CombineServantListViewManager__SetDragMove(monitor, *((_DWORD *)main + 6), 0LL);
LABEL_20:
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  main = (void *)UnityEngine_Object__op_Inequality(mDragScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)main & 1) == 0 )
    return;
  v17 = this->fields.mDragScrollView;
  if ( !v17 )
    goto LABEL_78;
  scrollView = v17->fields.scrollView;
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
  v20 = UICamera_TypeInfo;
  v21 = (UnityEngine_Camera_o *)main;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v20 = UICamera_TypeInfo;
  }
  if ( !v21 )
    goto LABEL_78;
  v22 = v20->static_fields;
  v57.fields.z = 0.0;
  v57.fields.x = v22->lastTouchPosition.fields.x;
  v57.fields.y = v22->lastTouchPosition.fields.y;
  *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Camera__ScreenToWorldPoint_70090032(v21, v57, 0LL);
  if ( !mPanel )
    goto LABEL_78;
  v26 = v23;
  v27 = v24;
  v28 = v25;
  main = UnityEngine_Component__get_transform((UnityEngine_Component_o *)mPanel, 0LL);
  if ( !main )
    goto LABEL_78;
  v58.fields.x = v26;
  v58.fields.y = v27;
  v58.fields.z = v28;
  v59 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)main, v58, 0LL);
  x = mPanel->fields.mClipOffset.fields.x;
  y = mPanel->fields.mClipOffset.fields.y;
  v31 = v59.fields.x;
  v32 = v59.fields.y;
  ViewSize = UIPanel__GetViewSize(mPanel, 0LL);
  main = this->fields.mCollider;
  if ( !main )
    goto LABEL_78;
  v34 = LOBYTE(UnityEngine_BoxCollider_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)main + 304LL) < (unsigned int)v34
    || *(UnityEngine_BoxCollider_c **)(*(_QWORD *)(*(_QWORD *)main + 200LL) + 8 * v34 - 8) != UnityEngine_BoxCollider_TypeInfo )
  {
    sub_1BDBD94(main);
    CombineServantUIDragDropListViewItem__OnDragDropRelease(v49, v50, v51);
    return;
  }
  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)main, 0LL);
  v35 = size.fields.x;
  v36 = size.fields.y;
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
        v39 = v32 - y;
        v40 = (float)(ViewSize.fields.y - v36) * 0.5;
        if ( !this->fields.isLimit )
        {
          if ( v39 > (float)-v40 )
          {
            if ( v39 < v40 )
              return;
            v41 = 0.0;
            v42 = -1.0;
LABEL_69:
            v44 = 0;
            if ( !UIScrollView__IsLimitOverPosition2_48531404(scrollView, *(UnityEngine_Vector3_o *)&v41, 0LL) )
            {
              v45 = 0.5;
LABEL_75:
              UIScrollView__Scroll(scrollView, v45, 0LL);
              return;
            }
            return;
          }
          v46 = 0.0;
          v47 = 1.0;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1BDBAD4(main, v9);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0LL) <= 0.0 )
    goto LABEL_60;
  v39 = v31 - x;
  v40 = (float)(ViewSize.fields.x - v35) * 0.5;
  if ( this->fields.isLimit )
  {
LABEL_58:
    if ( IsLimitOverPosition2 )
    {
      UIScrollView__Press(scrollView, 0, 0LL);
      return;
    }
    if ( v39 <= (float)-v40 || v39 >= v40 )
      return;
LABEL_61:
    this->fields.isLimit = 0;
    return;
  }
  if ( v39 > (float)-v40 )
  {
    if ( v39 < v40 )
      return;
    v41 = -1.0;
    v42 = 0.0;
    goto LABEL_69;
  }
  v46 = 1.0;
  v47 = 0.0;
LABEL_73:
  v48 = 0;
  if ( !UIScrollView__IsLimitOverPosition2_48531404(scrollView, *(UnityEngine_Vector3_o *)&v46, 0LL) )
  {
    v45 = -0.5;
    goto LABEL_75;
  }
}