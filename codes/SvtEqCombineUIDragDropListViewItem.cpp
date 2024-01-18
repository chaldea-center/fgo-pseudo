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
  __int64 v4; // x1
  __int64 v5; // x1
  SvtEqCombineListViewObject_o *mListViewObject; // x20
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
  if ( (byte_418B1E9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&SvtEqCombineListViewManager_TypeInfo, v4);
    this = (SvtEqCombineUIDragDropListViewItem_o *)sub_B2C35C(&SvtEqCombineListViewObject_TypeInfo, v5);
    byte_418B1E9 = 1;
  }
  mListViewObject = (SvtEqCombineListViewObject_o *)v3->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_24;
  v7 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v7 - 1] != SvtEqCombineListViewObject_TypeInfo )
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
    SvtEqCombineListViewObject__Init(
      mListViewObject,
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
    sub_B2C728(manager);
    goto LABEL_23;
  }
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0LL, 0LL);
  v14 = UnityEngine_Vector3__get_zero(0LL);
  SvtEqCombineListViewObject__Init(mListViewObject, 4, 0LL, v14.fields.x, *(UnityEngine_Vector3_o *)&v14.fields.y, v9);
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
    v11 = v3->fields.mDragScrollView;
    if ( !v11 )
      goto LABEL_24;
    scrollView = (UnityEngine_Object_o *)v11->fields.scrollView;
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
      sub_B2C434(this, method);
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
  if ( (byte_418B1E6 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B1E6 = 1;
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

  if ( (byte_418B1E8 & 1) == 0 )
  {
    sub_B2C35C(&SvtEqCombineListViewManager_TypeInfo, surface);
    sub_B2C35C(&SvtEqCombineListViewObject_TypeInfo, v4);
    byte_418B1E8 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_B2C434(mListViewObject, surface);
  surface = (UnityEngine_GameObject_o *)SvtEqCombineListViewObject_TypeInfo;
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
    sub_B2C728(mListViewObject);
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
  __int64 v11; // x9
  __int64 v12; // x9
  ListViewItem_o *Item; // x22
  const MethodInfo *v14; // x1
  int32_t sortIndex; // w21
  const MethodInfo *v16; // x3
  SvtEqCombineUIDragDropListViewItem_o *v17; // x0
  const MethodInfo *v18; // x1
  long double v19; // q0 OVERLAPPED

  if ( (byte_418B1E5 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&SvtEqCombineListViewManager_TypeInfo, v3);
    sub_B2C35C(&SvtEqCombineListViewObject_TypeInfo, v4);
    byte_418B1E5 = 1;
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
        (mListViewObject = (SvtEqCombineListViewObject_o *)this->fields.mListViewObject) == 0LL) )
  {
LABEL_24:
    sub_B2C434(mCollider, v7);
  }
  v10 = (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo;
  v11 = *(&SvtEqCombineListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v11
    && (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v11 - 1] == SvtEqCombineListViewObject_TypeInfo )
  {
    mDragScrollView = (UnityEngine_Object_o *)mListViewObject->fields.manager;
    if ( !mDragScrollView
      || (v10 = (const MethodInfo *)SvtEqCombineListViewManager_TypeInfo,
          v12 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&mDragScrollView->klass->_2.bitflags2 + 1) >= (unsigned int)v12)
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
  v19 = sub_B2C728(mDragScrollView);
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
  void *main; // x0
  SvtEqCombineListViewManager_c *v8; // x1
  UnityEngine_Camera_o *v9; // x20
  UICamera_c *v10; // x8
  struct UICamera_StaticFields *static_fields; // x8
  UnityEngine_Object_o *Component_WebViewObject; // x20
  SvtEqCombineListViewManager_o *monitor; // x21
  __int64 v14; // x9
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v18; // x8
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Object_c *klass; // x21
  UICamera_c *v21; // x8
  UnityEngine_Camera_o *v22; // x22
  struct UICamera_StaticFields *v23; // x8
  float v24; // s0
  float v25; // s1
  float v26; // s2
  float v27; // s8
  float v28; // s9
  float v29; // s10
  float v30; // s14
  float v31; // s15
  float x; // s8
  float y; // s11
  UnityEngine_Vector2_o ViewSize; // kr00_8
  __int64 v35; // x9
  float v36; // s10
  float v37; // s13
  bool IsLimitOverPosition2; // w21
  UnityEngine_Object_o *v39; // x22
  float v40; // s0
  float v41; // s1
  float v42; // s1
  float v43; // s0
  UnityEngine_Object_o *v44; // x22
  int v45; // s2
  float v46; // s0
  float v47; // s1
  float v48; // s0
  int v49; // s2
  SvtEqCombineUIDragDropListViewItem_o *v50; // x0
  UnityEngine_GameObject_o *v51; // x1
  const MethodInfo *v52; // x2
  UnityEngine_Ray_o v53; // [xsp+0h] [xbp-D0h] BYREF
  UnityEngine_Ray_o v54; // [xsp+18h] [xbp-B8h] BYREF
  UnityEngine_RaycastHit_o v55; // [xsp+30h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418B1E7 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_BoxCollider_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_SvtEqCombineListViewObject___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&SvtEqCombineListViewManager_TypeInfo, v5);
    sub_B2C35C(&UICamera_TypeInfo, v6);
    byte_418B1E7 = 1;
  }
  memset(&v55, 0, sizeof(v55));
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
    goto LABEL_84;
  static_fields = v10->static_fields;
  v56.fields.z = 0.0;
  v56.fields.x = static_fields->lastTouchPosition.fields.x;
  v56.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_40631244(&v54, v9, v56, 0LL);
  v53 = v54;
  if ( UnityEngine_Physics__Raycast_16635124(&v53, &v55, 0LL) )
  {
    main = UnityEngine_RaycastHit__get_collider(&v55, 0LL);
    if ( !main )
      goto LABEL_84;
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)main,
                                                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_SvtEqCombineListViewObject___);
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
        v8 = SvtEqCombineListViewManager_TypeInfo;
        v14 = *(&SvtEqCombineListViewManager_TypeInfo->_2.bitflags2 + 1);
        if ( *(&monitor->klass->_2.bitflags2 + 1) < (unsigned int)v14
          || (SvtEqCombineListViewManager_c *)monitor->klass->_2.typeHierarchy[v14 - 1] != SvtEqCombineListViewManager_TypeInfo )
        {
          main = Component_WebViewObject[1].monitor;
          goto LABEL_86;
        }
      }
      main = SvtEqCombineListViewObject__GetItem(
               (SvtEqCombineListViewObject_o *)Component_WebViewObject,
               (const MethodInfo *)v8);
      if ( !main || !monitor )
        goto LABEL_84;
      v16 = *((_DWORD *)main + 6);
      if ( monitor->fields.dragEndIndex != v16 )
        SvtEqCombineListViewManager__SetDragSelectItem(monitor, monitor->fields.dragStartIndex, v16, v15);
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
  v18 = this->fields.mDragScrollView;
  if ( !v18 )
    goto LABEL_84;
  scrollView = (UnityEngine_Object_o *)v18->fields.scrollView;
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
  v21 = UICamera_TypeInfo;
  v22 = (UnityEngine_Camera_o *)main;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v21 = UICamera_TypeInfo;
  }
  if ( !v22 )
    goto LABEL_84;
  v23 = v21->static_fields;
  v57.fields.z = 0.0;
  v57.fields.x = v23->lastTouchPosition.fields.x;
  v57.fields.y = v23->lastTouchPosition.fields.y;
  *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Camera__ScreenToWorldPoint_40630740(v22, v57, 0LL);
  if ( !klass )
    goto LABEL_84;
  v27 = v24;
  v28 = v25;
  v29 = v26;
  main = UnityEngine_Component__get_transform((UnityEngine_Component_o *)klass, 0LL);
  if ( !main )
    goto LABEL_84;
  v58.fields.x = v27;
  v58.fields.y = v28;
  v58.fields.z = v29;
  v59 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)main, v58, 0LL);
  v30 = *((float *)&klass->vtable._1_Finalize.methodPtr + 1);
  v31 = *(float *)&klass->vtable._1_Finalize.method;
  x = v59.fields.x;
  y = v59.fields.y;
  ViewSize = UIPanel__GetViewSize((UIPanel_o *)klass, 0LL);
  main = this->fields.mCollider;
  if ( !main )
    goto LABEL_84;
  v35 = *(&UnityEngine_BoxCollider_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)main + 300LL) < (unsigned int)v35
    || *(UnityEngine_BoxCollider_c **)(*(_QWORD *)(*(_QWORD *)main + 200LL) + 8 * v35 - 8) != UnityEngine_BoxCollider_TypeInfo )
  {
LABEL_86:
    sub_B2C728(main);
    SvtEqCombineUIDragDropListViewItem__OnDragDropRelease(v50, v51, v52);
    return;
  }
  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)main, 0LL);
  v36 = size.fields.x;
  v37 = size.fields.y;
  IsLimitOverPosition2 = UIScrollView__IsLimitOverPosition2((UIScrollView_o *)scrollView, 0LL);
  if ( IsLimitOverPosition2 )
    this->fields.isLimit = 1;
  if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)scrollView, 0LL) )
  {
    v39 = (UnityEngine_Object_o *)scrollView[2].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v39, 0LL, 0LL) )
    {
      main = scrollView[2].monitor;
      if ( !main )
        goto LABEL_84;
      if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0LL) > 0.0 )
      {
        v40 = y - v31;
        v41 = (float)(ViewSize.fields.y - v37) * 0.5;
        if ( !this->fields.isLimit )
        {
          if ( v40 > (float)-v41 )
          {
            if ( v40 < v41 )
              return;
            v42 = -1.0;
            v43 = 0.0;
LABEL_77:
            v45 = 0;
            if ( !UIScrollView__IsLimitOverPosition2_37886296(
                    (UIScrollView_o *)scrollView,
                    *(UnityEngine_Vector3_o *)&v43,
                    0LL) )
            {
              v46 = 0.5;
LABEL_83:
              UIScrollView__Scroll((UIScrollView_o *)scrollView, v46, 0LL);
              return;
            }
            return;
          }
          v47 = 1.0;
          v48 = 0.0;
          goto LABEL_81;
        }
        goto LABEL_66;
      }
    }
  }
  if ( !UIScrollView__get_canMoveHorizontally((UIScrollView_o *)scrollView, 0LL) )
    goto LABEL_68;
  v44 = (UnityEngine_Object_o *)scrollView[2].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v44, 0LL, 0LL) )
  {
LABEL_68:
    if ( IsLimitOverPosition2 )
      return;
    goto LABEL_69;
  }
  main = scrollView[2].klass;
  if ( !main )
LABEL_84:
    sub_B2C434(main, v8);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0LL) <= 0.0 )
    goto LABEL_68;
  v40 = x - v30;
  v41 = (float)(ViewSize.fields.x - v36) * 0.5;
  if ( this->fields.isLimit )
  {
LABEL_66:
    if ( IsLimitOverPosition2 )
    {
      UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0LL);
      return;
    }
    if ( v40 <= (float)-v41 || v40 >= v41 )
      return;
LABEL_69:
    this->fields.isLimit = 0;
    return;
  }
  if ( v40 > (float)-v41 )
  {
    if ( v40 < v41 )
      return;
    v43 = -1.0;
    v42 = 0.0;
    goto LABEL_77;
  }
  v48 = 1.0;
  v47 = 0.0;
LABEL_81:
  v49 = 0;
  if ( !UIScrollView__IsLimitOverPosition2_37886296((UIScrollView_o *)scrollView, *(UnityEngine_Vector3_o *)&v48, 0LL) )
  {
    v46 = -0.5;
    goto LABEL_83;
  }
}