void __fastcall ServantOperationUIDragDropListViewItem___ctor(
        ServantOperationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewItem___ctor((UIDragDropListViewItem_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationUIDragDropListViewItem__OnDragDropMove(
        ServantOperationUIDragDropListViewItem_o *this,
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
  if ( (byte_438D0DC & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D0DC = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
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


void __fastcall ServantOperationUIDragDropListViewItem__OnDragDropRelease(
        ServantOperationUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  ServantOperationUIDragDropListViewItem_o *v3; // x19
  ServantOperationListViewManager_o **mListViewObject; // x20
  __int64 v5; // x9
  ServantOperationListViewManager_o *v6; // x21
  __int64 v7; // x9
  const MethodInfo *v8; // x2
  ServantOperationUIDragDropListViewItem_o *v9; // x0
  const MethodInfo *v10; // x1

  v3 = this;
  if ( (byte_438D0E0 & 1) == 0 )
  {
    sub_B775C4(&ServantOperationListViewManager_TypeInfo);
    this = (ServantOperationUIDragDropListViewItem_o *)sub_B775C4(&ServantOperationListViewObject_TypeInfo);
    byte_438D0E0 = 1;
  }
  mListViewObject = (ServantOperationListViewManager_o **)v3->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_B7769C(this, surface);
  surface = (UnityEngine_GameObject_o *)ServantOperationListViewObject_TypeInfo;
  v5 = *(&ServantOperationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( LOBYTE((*mListViewObject)->fields.oldScrollPosition.fields.y) < (unsigned int)v5
    || *((ServantOperationListViewObject_c **)(*mListViewObject)->fields.objectList + v5 - 1) != ServantOperationListViewObject_TypeInfo )
  {
    sub_B77990(v3->fields.mListViewObject);
    goto LABEL_11;
  }
  v6 = mListViewObject[4];
  if ( !v6 )
    goto LABEL_11;
  v7 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) >= (unsigned int)v7
    && (ServantOperationListViewManager_c *)v6->klass->_2.typeHierarchy[v7 - 1] == ServantOperationListViewManager_TypeInfo )
  {
    ServantOperationListViewManager__SetDragEnd(mListViewObject[4], 0LL);
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0LL, 0LL);
    ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)mListViewObject, 3, 0LL, 0LL);
    ((void (__fastcall *)(ServantOperationListViewManager_o *, Il2CppMethodPointer))v6->klass->vtable._8_ItemDragEnd.method)(
      v6,
      v6->klass->vtable._9_SetSortKind.methodPtr);
    v3->fields.isDrag = 0;
    ServantOperationUIDragDropListViewItem__SetDragScrollViewPress(v3, 0, v8);
  }
  else
  {
    sub_B77990(mListViewObject[4]);
    ServantOperationUIDragDropListViewItem___ctor(v9, v10);
  }
}


void __fastcall ServantOperationUIDragDropListViewItem__OnDragDropStart(
        ServantOperationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantOperationListViewManager_o *manager; // x20
  __int64 v5; // x1
  UnityEngine_Collider_o *mCollider; // x0
  ServantOperationListViewObject_o *mListViewObject; // x21
  __int64 v8; // x9
  __int64 v9; // x9
  ListViewItem_o *Item; // x22
  int32_t sortIndex; // w21
  ServantOperationUIDragDropListViewItem_o *v12; // x0
  bool v13; // w1
  const MethodInfo *v14; // x2

  manager = (ServantOperationListViewManager_o *)&byte_438D000;
  if ( (byte_438D0DA & 1) == 0 )
  {
    sub_B775C4(&ServantOperationListViewManager_TypeInfo);
    sub_B775C4(&ServantOperationListViewObject_TypeInfo);
    byte_438D0DA = 1;
  }
  ServantOperationUIDragDropListViewItem__SetDragScrollViewPress(this, 0, v2);
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0LL);
  mCollider = this->fields.mCollider;
  if ( !mCollider )
    goto LABEL_13;
  UnityEngine_Collider__set_enabled(mCollider, 1, 0LL);
  mListViewObject = (ServantOperationListViewObject_o *)this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_13;
  v8 = *(&ServantOperationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v8
    && (ServantOperationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v8 - 1] == ServantOperationListViewObject_TypeInfo )
  {
    manager = (ServantOperationListViewManager_o *)mListViewObject->fields.manager;
    if ( !manager
      || (v9 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v9)
      && (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] == ServantOperationListViewManager_TypeInfo )
    {
      Item = (ListViewItem_o *)ServantOperationListViewObject__GetItem(
                                 (ServantOperationListViewObject_o *)this->fields.mListViewObject,
                                 0LL);
      ServantOperationListViewObject__OnDragDropStart(mListViewObject, 0LL);
      if ( Item )
      {
        sortIndex = Item->fields.sortIndex;
        mCollider = (UnityEngine_Collider_o *)ListViewItem__get_IsSelect(Item, 0LL);
        if ( manager )
        {
          ServantOperationListViewManager__SetDragStart(manager, sortIndex, ((unsigned __int8)mCollider & 1) == 0, 0LL);
          ((void (__fastcall *)(ServantOperationListViewManager_o *, Il2CppMethodPointer))manager->klass->vtable._7_ItemDragStart.method)(
            manager,
            manager->klass->vtable._8_ItemDragEnd.methodPtr);
          *(_WORD *)&this->fields.isDrag = 1;
          return;
        }
      }
LABEL_13:
      sub_B7769C(mCollider, v5);
    }
  }
  else
  {
    sub_B77990(this->fields.mListViewObject);
  }
  v12 = (ServantOperationUIDragDropListViewItem_o *)sub_B77990(manager);
  ServantOperationUIDragDropListViewItem__SetDragScrollViewPress(v12, v13, v14);
}


void __fastcall ServantOperationUIDragDropListViewItem__SetDragScrollViewPress(
        ServantOperationUIDragDropListViewItem_o *this,
        bool isPressed,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mDragScrollView; // x21
  UIScrollView_o *v6; // x0
  __int64 v7; // x1
  struct UIDragScrollView_o *v8; // x8
  UnityEngine_Object_o *scrollView; // x21
  struct UIDragScrollView_o *v10; // x8

  if ( (byte_438D0DB & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D0DB = 1;
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UIScrollView_o *)UnityEngine_Object__op_Equality(mDragScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    v8 = this->fields.mDragScrollView;
    if ( v8 )
    {
      scrollView = (UnityEngine_Object_o *)v8->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v6 = (UIScrollView_o *)UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL);
      if ( ((unsigned __int8)v6 & 1) != 0 )
        return;
      v10 = this->fields.mDragScrollView;
      if ( v10 )
      {
        v6 = v10->fields.scrollView;
        if ( v6 )
        {
          UIScrollView__Press(v6, isPressed, 0LL);
          return;
        }
      }
    }
    sub_B7769C(v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationUIDragDropListViewItem__SetManagerDragMove(
        ServantOperationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  void *main; // x0
  __int64 v3; // x1
  UnityEngine_Camera_o *v4; // x19
  UICamera_c *v5; // x8
  struct UICamera_StaticFields *static_fields; // x8
  UnityEngine_Object_o *Component_WebViewObject; // x19
  ServantOperationListViewManager_o *monitor; // x20
  __int64 v9; // x9
  ServantOperationUIDragDropListViewItem_o *v10; // x0
  UIScrollView_o *v11; // x1
  const MethodInfo *v12; // x2
  long double v13; // q0 OVERLAPPED
  UnityEngine_Ray_o v14; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Ray_o v15; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_RaycastHit_o v16; // [xsp+30h] [xbp-40h] BYREF
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_438D0DE & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_ServantOperationListViewObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantOperationListViewManager_TypeInfo);
    sub_B775C4(&UICamera_TypeInfo);
    byte_438D0DE = 1;
  }
  memset(&v16, 0, sizeof(v16));
  main = UnityEngine_Camera__get_main(0LL);
  v4 = (UnityEngine_Camera_o *)main;
  v5 = UICamera_TypeInfo;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v5 = UICamera_TypeInfo;
  }
  if ( !v4 )
    goto LABEL_21;
  static_fields = v5->static_fields;
  v17.fields.z = 0.0;
  v17.fields.x = static_fields->lastTouchPosition.fields.x;
  v17.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_41408892(&v15, v4, v17, 0LL);
  v14 = v15;
  if ( !UnityEngine_Physics__Raycast_16963696(&v14, &v16, 0LL) )
    return;
  main = UnityEngine_RaycastHit__get_collider(&v16, 0LL);
  if ( !main )
    goto LABEL_21;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)main,
                                                      (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_ServantOperationListViewObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  main = (void *)UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)main & 1) == 0 )
  {
    if ( Component_WebViewObject )
    {
      monitor = (ServantOperationListViewManager_o *)Component_WebViewObject[1].monitor;
      if ( monitor )
      {
        v9 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1);
        if ( *(&monitor->klass->_2.bitflags2 + 1) < (unsigned int)v9
          || (ServantOperationListViewManager_c *)monitor->klass->_2.typeHierarchy[v9 - 1] != ServantOperationListViewManager_TypeInfo )
        {
          v13 = sub_B77990(Component_WebViewObject[1].monitor);
          ServantOperationUIDragDropListViewItem__SetScrollView(v10, v11, *(UnityEngine_Vector3_o *)&v13, v18, v12);
          return;
        }
      }
      main = ServantOperationListViewObject__GetItem((ServantOperationListViewObject_o *)Component_WebViewObject, 0LL);
      if ( main )
      {
        if ( monitor )
        {
          ServantOperationListViewManager__SetDragMove(monitor, *((_DWORD *)main + 6), 0LL);
          return;
        }
      }
    }
LABEL_21:
    sub_B7769C(main, v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationUIDragDropListViewItem__SetScrollView(
        ServantOperationUIDragDropListViewItem_o *this,
        UIScrollView_o *scrollView,
        UnityEngine_Vector3_o localPos,
        UnityEngine_Vector3_o range,
        const MethodInfo *method)
{
  float y; // s10
  float x; // s8
  float v7; // s11
  float v8; // s9
  ServantOperationUIDragDropListViewItem_o *v10; // x20
  bool IsLimitOverPosition2; // w21
  UnityEngine_Object_o *v12; // x22
  UnityEngine_Object_o *verticalScrollBar; // x22
  float v14; // s1
  float v15; // s0
  int v16; // s2
  float v17; // s0
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  y = range.fields.y;
  x = range.fields.x;
  v7 = localPos.fields.y;
  v8 = localPos.fields.x;
  v10 = this;
  if ( (byte_438D0DF & 1) == 0 )
  {
    this = (ServantOperationUIDragDropListViewItem_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D0DF = 1;
  }
  if ( !scrollView )
    goto LABEL_46;
  IsLimitOverPosition2 = UIScrollView__IsLimitOverPosition2(scrollView, 0LL);
  if ( IsLimitOverPosition2 )
    v10->fields.isLimit = 1;
  if ( UIScrollView__get_canMoveVertically(scrollView, 0LL) )
  {
    v12 = *(UnityEngine_Object_o **)&scrollView->fields.showScrollBars;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
    {
      this = *(ServantOperationUIDragDropListViewItem_o **)&scrollView->fields.showScrollBars;
      if ( !this )
        goto LABEL_46;
      if ( UIProgressBar__get_alpha((UIProgressBar_o *)this, 0LL) > 0.0 )
      {
        if ( v10->fields.isLimit )
        {
          if ( !IsLimitOverPosition2 )
          {
            if ( v7 <= (float)-y || v7 >= y )
              return;
LABEL_29:
            v10->fields.isLimit = 0;
            return;
          }
LABEL_27:
          UIScrollView__Press(scrollView, 0, 0LL);
          return;
        }
        if ( v7 > (float)-y
          || (v18.fields.y = 1.0,
              v18.fields.x = 0.0,
              v18.fields.z = 0.0,
              UIScrollView__IsLimitOverPosition2_39163776(scrollView, v18, 0LL)) )
        {
          if ( v7 < y )
            return;
          v14 = -1.0;
          v15 = 0.0;
LABEL_39:
          v16 = 0;
          if ( UIScrollView__IsLimitOverPosition2_39163776(scrollView, *(UnityEngine_Vector3_o *)&v15, 0LL) )
            return;
          v17 = 0.5;
LABEL_45:
          UIScrollView__Scroll(scrollView, v17, 0LL);
          return;
        }
        goto LABEL_44;
      }
    }
  }
  if ( !UIScrollView__get_canMoveHorizontally(scrollView, 0LL) )
    goto LABEL_28;
  verticalScrollBar = (UnityEngine_Object_o *)scrollView->fields.verticalScrollBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(verticalScrollBar, 0LL, 0LL) )
  {
LABEL_28:
    if ( IsLimitOverPosition2 )
      return;
    goto LABEL_29;
  }
  this = (ServantOperationUIDragDropListViewItem_o *)scrollView->fields.verticalScrollBar;
  if ( !this )
LABEL_46:
    sub_B7769C(this, scrollView);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)this, 0LL) <= 0.0 )
    goto LABEL_28;
  if ( !v10->fields.isLimit )
  {
    if ( v8 > (float)-x
      || (v19.fields.x = 1.0,
          v19.fields.y = 0.0,
          v19.fields.z = 0.0,
          UIScrollView__IsLimitOverPosition2_39163776(scrollView, v19, 0LL)) )
    {
      if ( v8 < x )
        return;
      v15 = -1.0;
      v14 = 0.0;
      goto LABEL_39;
    }
LABEL_44:
    v17 = -0.5;
    goto LABEL_45;
  }
  if ( IsLimitOverPosition2 )
    goto LABEL_27;
  if ( v8 > (float)-x && v8 < x )
    goto LABEL_29;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationUIDragDropListViewItem__Update(
        ServantOperationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  ServantOperationUIDragDropListViewItem_o *v2; // x19
  UnityEngine_Object_o *mDragScrollView; // x20
  UnityEngine_Camera_o *main; // x0
  __int64 v5; // x1
  struct UIDragScrollView_o *v6; // x8
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Object_c *klass; // x21
  UnityEngine_Camera_o *v9; // x22
  UICamera_c *v10; // x8
  struct UICamera_StaticFields *static_fields; // x8
  float v12; // s0
  float v13; // s1
  float v14; // s2
  float v15; // s8
  float v16; // s9
  float v17; // s10
  float v18; // s0
  float v19; // s1
  float v20; // s2
  UnityEngine_BoxCollider_o *mCollider; // x22
  __int64 v22; // x9
  float v23; // s8
  float v24; // s9
  float v25; // s10
  UnityEngine_Vector2_o ViewSize; // kr00_8
  const MethodInfo *v27; // x2
  __int64 v28; // x0
  __int64 v29; // x1
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s3.4,4:s4.4,8:s5.4

  v2 = this;
  if ( (byte_438D0DD & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_BoxCollider_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (ServantOperationUIDragDropListViewItem_o *)sub_B775C4(&UICamera_TypeInfo);
    byte_438D0DD = 1;
  }
  if ( v2->fields.isDrag )
  {
    ServantOperationUIDragDropListViewItem__SetManagerDragMove(this, method);
    mDragScrollView = (UnityEngine_Object_o *)v2->fields.mDragScrollView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    main = (UnityEngine_Camera_o *)UnityEngine_Object__op_Equality(mDragScrollView, 0LL, 0LL);
    if ( ((unsigned __int8)main & 1) == 0 )
    {
      v6 = v2->fields.mDragScrollView;
      if ( !v6 )
        goto LABEL_29;
      scrollView = (UnityEngine_Object_o *)v6->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      main = (UnityEngine_Camera_o *)UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL);
      if ( ((unsigned __int8)main & 1) == 0 )
      {
        if ( scrollView )
        {
          klass = scrollView[6].klass;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
            return;
          main = UnityEngine_Camera__get_main(0LL);
          v9 = main;
          v10 = UICamera_TypeInfo;
          if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v10 = UICamera_TypeInfo;
          }
          if ( v9 )
          {
            static_fields = v10->static_fields;
            v30.fields.z = 0.0;
            v30.fields.x = static_fields->lastTouchPosition.fields.x;
            v30.fields.y = static_fields->lastTouchPosition.fields.y;
            *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Camera__ScreenToWorldPoint_41408388(v9, v30, 0LL);
            if ( klass )
            {
              v15 = v12;
              v16 = v13;
              v17 = v14;
              main = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)klass, 0LL);
              if ( main )
              {
                v31.fields.x = v15;
                v31.fields.y = v16;
                v31.fields.z = v17;
                *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__InverseTransformPoint(
                                                   (UnityEngine_Transform_o *)main,
                                                   v31,
                                                   0LL);
                mCollider = (UnityEngine_BoxCollider_o *)v2->fields.mCollider;
                if ( mCollider )
                {
                  v22 = *(&UnityEngine_BoxCollider_TypeInfo->_2.bitflags2 + 1);
                  if ( *(&mCollider->klass->_2.bitflags2 + 1) >= (unsigned int)v22
                    && (UnityEngine_BoxCollider_c *)mCollider->klass->_2.typeHierarchy[v22 - 1] == UnityEngine_BoxCollider_TypeInfo )
                  {
                    v23 = v20;
                    v24 = v18 - *((float *)&klass->vtable._1_Finalize.methodPtr + 1);
                    v25 = v19 - *(float *)&klass->vtable._1_Finalize.method;
                    ViewSize = UIPanel__GetViewSize((UIPanel_o *)klass, 0LL);
                    size = UnityEngine_BoxCollider__get_size(mCollider, 0LL);
                    v33.fields.x = (float)(ViewSize.fields.x - size.fields.x) * 0.5;
                    v33.fields.y = (float)(ViewSize.fields.y - size.fields.y) * 0.5;
                    v33.fields.z = (float)(0.0 - size.fields.z) * 0.5;
                    size.fields.x = v24;
                    size.fields.y = v25;
                    size.fields.z = v23;
                    ServantOperationUIDragDropListViewItem__SetScrollView(
                      v2,
                      (UIScrollView_o *)scrollView,
                      size,
                      v33,
                      v27);
                    return;
                  }
                  sub_B77990(v2->fields.mCollider);
                }
                UIPanel__GetViewSize((UIPanel_o *)klass, 0LL);
                sub_B7769C(v28, v29);
              }
            }
          }
        }
LABEL_29:
        sub_B7769C(main, v5);
      }
    }
  }
}