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
  if ( (byte_4189B8E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189B8E = 1;
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


void __fastcall ServantOperationUIDragDropListViewItem__OnDragDropRelease(
        ServantOperationUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  ServantOperationUIDragDropListViewItem_o *v3; // x19
  __int64 v4; // x1
  ServantOperationListViewManager_o **mListViewObject; // x20
  __int64 v6; // x9
  ServantOperationListViewManager_o *v7; // x21
  __int64 v8; // x9
  const MethodInfo *v9; // x2
  ServantOperationUIDragDropListViewItem_o *v10; // x0
  const MethodInfo *v11; // x1

  v3 = this;
  if ( (byte_4189B92 & 1) == 0 )
  {
    sub_B2C35C(&ServantOperationListViewManager_TypeInfo, surface);
    this = (ServantOperationUIDragDropListViewItem_o *)sub_B2C35C(&ServantOperationListViewObject_TypeInfo, v4);
    byte_4189B92 = 1;
  }
  mListViewObject = (ServantOperationListViewManager_o **)v3->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_B2C434(this, surface);
  surface = (UnityEngine_GameObject_o *)ServantOperationListViewObject_TypeInfo;
  v6 = *(&ServantOperationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( LOBYTE((*mListViewObject)->fields.oldScrollPosition.fields.y) < (unsigned int)v6
    || *((ServantOperationListViewObject_c **)(*mListViewObject)->fields.objectList + v6 - 1) != ServantOperationListViewObject_TypeInfo )
  {
    sub_B2C728(v3->fields.mListViewObject);
    goto LABEL_11;
  }
  v7 = mListViewObject[4];
  if ( !v7 )
    goto LABEL_11;
  v8 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) >= (unsigned int)v8
    && (ServantOperationListViewManager_c *)v7->klass->_2.typeHierarchy[v8 - 1] == ServantOperationListViewManager_TypeInfo )
  {
    ServantOperationListViewManager__SetDragEnd(mListViewObject[4], 0LL);
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0LL, 0LL);
    ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)mListViewObject, 3, 0LL, 0LL);
    ((void (__fastcall *)(ServantOperationListViewManager_o *, Il2CppMethodPointer))v7->klass->vtable._8_ItemDragEnd.method)(
      v7,
      v7->klass->vtable._9_SetSortKind.methodPtr);
    v3->fields.isDrag = 0;
    ServantOperationUIDragDropListViewItem__SetDragScrollViewPress(v3, 0, v9);
  }
  else
  {
    sub_B2C728(mListViewObject[4]);
    ServantOperationUIDragDropListViewItem___ctor(v10, v11);
  }
}


void __fastcall ServantOperationUIDragDropListViewItem__OnDragDropStart(
        ServantOperationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantOperationListViewManager_o *manager; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Collider_o *mCollider; // x0
  ServantOperationListViewObject_o *mListViewObject; // x21
  __int64 v9; // x9
  __int64 v10; // x9
  ListViewItem_o *Item; // x22
  int32_t sortIndex; // w21
  ServantOperationUIDragDropListViewItem_o *v13; // x0
  bool v14; // w1
  const MethodInfo *v15; // x2

  manager = (ServantOperationListViewManager_o *)&byte_4189000;
  if ( (byte_4189B8C & 1) == 0 )
  {
    sub_B2C35C(&ServantOperationListViewManager_TypeInfo, method);
    sub_B2C35C(&ServantOperationListViewObject_TypeInfo, v5);
    byte_4189B8C = 1;
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
  v9 = *(&ServantOperationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v9
    && (ServantOperationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v9 - 1] == ServantOperationListViewObject_TypeInfo )
  {
    manager = (ServantOperationListViewManager_o *)mListViewObject->fields.manager;
    if ( !manager
      || (v10 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v10)
      && (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[v10 - 1] == ServantOperationListViewManager_TypeInfo )
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
      sub_B2C434(mCollider, v6);
    }
  }
  else
  {
    sub_B2C728(this->fields.mListViewObject);
  }
  v13 = (ServantOperationUIDragDropListViewItem_o *)sub_B2C728(manager);
  ServantOperationUIDragDropListViewItem__SetDragScrollViewPress(v13, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4189B8D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isPressed);
    byte_4189B8D = 1;
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
    sub_B2C434(v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationUIDragDropListViewItem__SetManagerDragMove(
        ServantOperationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  void *main; // x0
  __int64 v6; // x1
  UnityEngine_Camera_o *v7; // x19
  UICamera_c *v8; // x8
  struct UICamera_StaticFields *static_fields; // x8
  UnityEngine_Object_o *Component_WebViewObject; // x19
  ServantOperationListViewManager_o *monitor; // x20
  __int64 v12; // x9
  ServantOperationUIDragDropListViewItem_o *v13; // x0
  UIScrollView_o *v14; // x1
  const MethodInfo *v15; // x2
  long double v16; // q0 OVERLAPPED
  UnityEngine_Ray_o v17; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Ray_o v18; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_RaycastHit_o v19; // [xsp+30h] [xbp-40h] BYREF
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4189B90 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_ServantOperationListViewObject___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v2);
    sub_B2C35C(&ServantOperationListViewManager_TypeInfo, v3);
    sub_B2C35C(&UICamera_TypeInfo, v4);
    byte_4189B90 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  main = UnityEngine_Camera__get_main(0LL);
  v7 = (UnityEngine_Camera_o *)main;
  v8 = UICamera_TypeInfo;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v8 = UICamera_TypeInfo;
  }
  if ( !v7 )
    goto LABEL_21;
  static_fields = v8->static_fields;
  v20.fields.z = 0.0;
  v20.fields.x = static_fields->lastTouchPosition.fields.x;
  v20.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_40631244(&v18, v7, v20, 0LL);
  v17 = v18;
  if ( !UnityEngine_Physics__Raycast_16635124(&v17, &v19, 0LL) )
    return;
  main = UnityEngine_RaycastHit__get_collider(&v19, 0LL);
  if ( !main )
    goto LABEL_21;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)main,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_ServantOperationListViewObject___);
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
        v12 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1);
        if ( *(&monitor->klass->_2.bitflags2 + 1) < (unsigned int)v12
          || (ServantOperationListViewManager_c *)monitor->klass->_2.typeHierarchy[v12 - 1] != ServantOperationListViewManager_TypeInfo )
        {
          v16 = sub_B2C728(Component_WebViewObject[1].monitor);
          ServantOperationUIDragDropListViewItem__SetScrollView(v13, v14, *(UnityEngine_Vector3_o *)&v16, v21, v15);
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
    sub_B2C434(main, v6);
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
  if ( (byte_4189B91 & 1) == 0 )
  {
    this = (ServantOperationUIDragDropListViewItem_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, scrollView);
    byte_4189B91 = 1;
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
              UIScrollView__IsLimitOverPosition2_37886296(scrollView, v18, 0LL)) )
        {
          if ( v7 < y )
            return;
          v14 = -1.0;
          v15 = 0.0;
LABEL_39:
          v16 = 0;
          if ( UIScrollView__IsLimitOverPosition2_37886296(scrollView, *(UnityEngine_Vector3_o *)&v15, 0LL) )
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
    sub_B2C434(this, scrollView);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)this, 0LL) <= 0.0 )
    goto LABEL_28;
  if ( !v10->fields.isLimit )
  {
    if ( v8 > (float)-x
      || (v19.fields.x = 1.0,
          v19.fields.y = 0.0,
          v19.fields.z = 0.0,
          UIScrollView__IsLimitOverPosition2_37886296(scrollView, v19, 0LL)) )
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
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *mDragScrollView; // x20
  UnityEngine_Camera_o *main; // x0
  __int64 v7; // x1
  struct UIDragScrollView_o *v8; // x8
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Object_c *klass; // x21
  UnityEngine_Camera_o *v11; // x22
  UICamera_c *v12; // x8
  struct UICamera_StaticFields *static_fields; // x8
  float v14; // s0
  float v15; // s1
  float v16; // s2
  float v17; // s8
  float v18; // s9
  float v19; // s10
  float v20; // s0
  float v21; // s1
  float v22; // s2
  UnityEngine_BoxCollider_o *mCollider; // x22
  __int64 v24; // x9
  float v25; // s8
  float v26; // s9
  float v27; // s10
  UnityEngine_Vector2_o ViewSize; // kr00_8
  const MethodInfo *v29; // x2
  __int64 v30; // x0
  __int64 v31; // x1
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s3.4,4:s4.4,8:s5.4

  v2 = this;
  if ( (byte_4189B8F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_BoxCollider_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    this = (ServantOperationUIDragDropListViewItem_o *)sub_B2C35C(&UICamera_TypeInfo, v4);
    byte_4189B8F = 1;
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
      v8 = v2->fields.mDragScrollView;
      if ( !v8 )
        goto LABEL_29;
      scrollView = (UnityEngine_Object_o *)v8->fields.scrollView;
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
          v11 = main;
          v12 = UICamera_TypeInfo;
          if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v12 = UICamera_TypeInfo;
          }
          if ( v11 )
          {
            static_fields = v12->static_fields;
            v32.fields.z = 0.0;
            v32.fields.x = static_fields->lastTouchPosition.fields.x;
            v32.fields.y = static_fields->lastTouchPosition.fields.y;
            *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Camera__ScreenToWorldPoint_40630740(v11, v32, 0LL);
            if ( klass )
            {
              v17 = v14;
              v18 = v15;
              v19 = v16;
              main = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)klass, 0LL);
              if ( main )
              {
                v33.fields.x = v17;
                v33.fields.y = v18;
                v33.fields.z = v19;
                *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__InverseTransformPoint(
                                                   (UnityEngine_Transform_o *)main,
                                                   v33,
                                                   0LL);
                mCollider = (UnityEngine_BoxCollider_o *)v2->fields.mCollider;
                if ( mCollider )
                {
                  v24 = *(&UnityEngine_BoxCollider_TypeInfo->_2.bitflags2 + 1);
                  if ( *(&mCollider->klass->_2.bitflags2 + 1) >= (unsigned int)v24
                    && (UnityEngine_BoxCollider_c *)mCollider->klass->_2.typeHierarchy[v24 - 1] == UnityEngine_BoxCollider_TypeInfo )
                  {
                    v25 = v22;
                    v26 = v20 - *((float *)&klass->vtable._1_Finalize.methodPtr + 1);
                    v27 = v21 - *(float *)&klass->vtable._1_Finalize.method;
                    ViewSize = UIPanel__GetViewSize((UIPanel_o *)klass, 0LL);
                    size = UnityEngine_BoxCollider__get_size(mCollider, 0LL);
                    v35.fields.x = (float)(ViewSize.fields.x - size.fields.x) * 0.5;
                    v35.fields.y = (float)(ViewSize.fields.y - size.fields.y) * 0.5;
                    v35.fields.z = (float)(0.0 - size.fields.z) * 0.5;
                    size.fields.x = v26;
                    size.fields.y = v27;
                    size.fields.z = v25;
                    ServantOperationUIDragDropListViewItem__SetScrollView(
                      v2,
                      (UIScrollView_o *)scrollView,
                      size,
                      v35,
                      v29);
                    return;
                  }
                  sub_B2C728(v2->fields.mCollider);
                }
                UIPanel__GetViewSize((UIPanel_o *)klass, 0LL);
                sub_B2C434(v30, v31);
              }
            }
          }
        }
LABEL_29:
        sub_B2C434(main, v7);
      }
    }
  }
}