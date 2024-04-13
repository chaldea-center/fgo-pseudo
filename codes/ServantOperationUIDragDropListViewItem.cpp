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
  if ( (byte_42EA9FA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42EA9FA = 1;
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


void __fastcall ServantOperationUIDragDropListViewItem__OnDragDropRelease(
        ServantOperationUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantOperationUIDragDropListViewItem_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ServantOperationListViewManager_o **mListViewObject; // x20
  __int64 v9; // x9
  ServantOperationListViewManager_o *v10; // x21
  __int64 v11; // x9
  const MethodInfo *v12; // x2
  ServantOperationUIDragDropListViewItem_o *v13; // x0
  const MethodInfo *v14; // x1

  v4 = this;
  if ( (byte_42EA9FE & 1) == 0 )
  {
    sub_B5D5C4(&ServantOperationListViewManager_TypeInfo, (_DWORD)surface, (_DWORD)method, v3);
    this = (ServantOperationUIDragDropListViewItem_o *)sub_B5D5C4(&ServantOperationListViewObject_TypeInfo, v5, v6, v7);
    byte_42EA9FE = 1;
  }
  mListViewObject = (ServantOperationListViewManager_o **)v4->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_B5D69C(this, surface);
  surface = (UnityEngine_GameObject_o *)ServantOperationListViewObject_TypeInfo;
  v9 = *(&ServantOperationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( LOBYTE((*mListViewObject)->fields.oldScrollPosition.fields.y) < (unsigned int)v9
    || *((ServantOperationListViewObject_c **)(*mListViewObject)->fields.objectList + v9 - 1) != ServantOperationListViewObject_TypeInfo )
  {
    sub_B5D990(v4->fields.mListViewObject);
    goto LABEL_11;
  }
  v10 = mListViewObject[4];
  if ( !v10 )
    goto LABEL_11;
  v11 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v11
    && (ServantOperationListViewManager_c *)v10->klass->_2.typeHierarchy[v11 - 1] == ServantOperationListViewManager_TypeInfo )
  {
    ServantOperationListViewManager__SetDragEnd(mListViewObject[4], 0LL);
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v4, 0LL, 0LL);
    ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)mListViewObject, 3, 0LL, 0LL);
    ((void (__fastcall *)(ServantOperationListViewManager_o *, Il2CppMethodPointer))v10->klass->vtable._8_ItemDragEnd.method)(
      v10,
      v10->klass->vtable._9_SetSortKind.methodPtr);
    v4->fields.isDrag = 0;
    ServantOperationUIDragDropListViewItem__SetDragScrollViewPress(v4, 0, v12);
  }
  else
  {
    sub_B5D990(mListViewObject[4]);
    ServantOperationUIDragDropListViewItem___ctor(v13, v14);
  }
}


void __fastcall ServantOperationUIDragDropListViewItem__OnDragDropStart(
        ServantOperationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  ServantOperationListViewManager_o *manager; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x1
  UnityEngine_Collider_o *mCollider; // x0
  ServantOperationListViewObject_o *mListViewObject; // x21
  __int64 v12; // x9
  __int64 v13; // x9
  ListViewItem_o *Item; // x22
  int32_t sortIndex; // w21
  ServantOperationUIDragDropListViewItem_o *v16; // x0
  bool v17; // w1
  const MethodInfo *v18; // x2

  manager = (ServantOperationListViewManager_o *)&byte_42EA000;
  if ( (byte_42EA9F8 & 1) == 0 )
  {
    sub_B5D5C4(&ServantOperationListViewManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&ServantOperationListViewObject_TypeInfo, v6, v7, v8);
    byte_42EA9F8 = 1;
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
  v12 = *(&ServantOperationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v12
    && (ServantOperationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v12 - 1] == ServantOperationListViewObject_TypeInfo )
  {
    manager = (ServantOperationListViewManager_o *)mListViewObject->fields.manager;
    if ( !manager
      || (v13 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&manager->klass->_2.bitflags2 + 1) >= (unsigned int)v13)
      && (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[v13 - 1] == ServantOperationListViewManager_TypeInfo )
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
      sub_B5D69C(mCollider, v9);
    }
  }
  else
  {
    sub_B5D990(this->fields.mListViewObject);
  }
  v16 = (ServantOperationUIDragDropListViewItem_o *)sub_B5D990(manager);
  ServantOperationUIDragDropListViewItem__SetDragScrollViewPress(v16, v17, v18);
}


void __fastcall ServantOperationUIDragDropListViewItem__SetDragScrollViewPress(
        ServantOperationUIDragDropListViewItem_o *this,
        bool isPressed,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *mDragScrollView; // x21
  UIScrollView_o *v7; // x0
  __int64 v8; // x1
  struct UIDragScrollView_o *v9; // x8
  UnityEngine_Object_o *scrollView; // x21
  struct UIDragScrollView_o *v11; // x8

  if ( (byte_42EA9F9 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isPressed, (_DWORD)method, v3);
    byte_42EA9F9 = 1;
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = (UIScrollView_o *)UnityEngine_Object__op_Equality(mDragScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) == 0 )
  {
    v9 = this->fields.mDragScrollView;
    if ( v9 )
    {
      scrollView = (UnityEngine_Object_o *)v9->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v7 = (UIScrollView_o *)UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL);
      if ( ((unsigned __int8)v7 & 1) != 0 )
        return;
      v11 = this->fields.mDragScrollView;
      if ( v11 )
      {
        v7 = v11->fields.scrollView;
        if ( v7 )
        {
          UIScrollView__Press(v7, isPressed, 0LL);
          return;
        }
      }
    }
    sub_B5D69C(v7, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationUIDragDropListViewItem__SetManagerDragMove(
        ServantOperationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  void *main; // x0
  __int64 v14; // x1
  UnityEngine_Camera_o *v15; // x19
  UICamera_c *v16; // x8
  struct UICamera_StaticFields *static_fields; // x8
  UnityEngine_Object_o *Component_WebViewObject; // x19
  ServantOperationListViewManager_o *monitor; // x20
  __int64 v20; // x9
  ServantOperationUIDragDropListViewItem_o *v21; // x0
  UIScrollView_o *v22; // x1
  const MethodInfo *v23; // x2
  long double v24; // q0 OVERLAPPED
  UnityEngine_Ray_o v25; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Ray_o v26; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_RaycastHit_o v27; // [xsp+30h] [xbp-40h] BYREF
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42EA9FC & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_ServantOperationListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&ServantOperationListViewManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UICamera_TypeInfo, v10, v11, v12);
    byte_42EA9FC = 1;
  }
  memset(&v27, 0, sizeof(v27));
  main = UnityEngine_Camera__get_main(0LL);
  v15 = (UnityEngine_Camera_o *)main;
  v16 = UICamera_TypeInfo;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v16 = UICamera_TypeInfo;
  }
  if ( !v15 )
    goto LABEL_21;
  static_fields = v16->static_fields;
  v28.fields.z = 0.0;
  v28.fields.x = static_fields->lastTouchPosition.fields.x;
  v28.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_41565876(&v26, v15, v28, 0LL);
  v25 = v26;
  if ( !UnityEngine_Physics__Raycast_16828644(&v25, &v27, 0LL) )
    return;
  main = UnityEngine_RaycastHit__get_collider(&v27, 0LL);
  if ( !main )
    goto LABEL_21;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)main,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ServantOperationListViewObject___);
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
        v20 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1);
        if ( *(&monitor->klass->_2.bitflags2 + 1) < (unsigned int)v20
          || (ServantOperationListViewManager_c *)monitor->klass->_2.typeHierarchy[v20 - 1] != ServantOperationListViewManager_TypeInfo )
        {
          v24 = sub_B5D990(Component_WebViewObject[1].monitor);
          ServantOperationUIDragDropListViewItem__SetScrollView(v21, v22, *(UnityEngine_Vector3_o *)&v24, v29, v23);
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
    sub_B5D69C(main, v14);
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
  __int64 v5; // x3
  float y; // s10
  float x; // s8
  float v8; // s11
  float v9; // s9
  ServantOperationUIDragDropListViewItem_o *v11; // x20
  bool IsLimitOverPosition2; // w21
  UnityEngine_Object_o *v13; // x22
  UnityEngine_Object_o *verticalScrollBar; // x22
  float v15; // s1
  float v16; // s0
  int v17; // s2
  float v18; // s0
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  y = range.fields.y;
  x = range.fields.x;
  v8 = localPos.fields.y;
  v9 = localPos.fields.x;
  v11 = this;
  if ( (byte_42EA9FD & 1) == 0 )
  {
    this = (ServantOperationUIDragDropListViewItem_o *)sub_B5D5C4(
                                                         &UnityEngine_Object_TypeInfo,
                                                         (_DWORD)scrollView,
                                                         (_DWORD)method,
                                                         v5);
    byte_42EA9FD = 1;
  }
  if ( !scrollView )
    goto LABEL_46;
  IsLimitOverPosition2 = UIScrollView__IsLimitOverPosition2(scrollView, 0LL);
  if ( IsLimitOverPosition2 )
    v11->fields.isLimit = 1;
  if ( UIScrollView__get_canMoveVertically(scrollView, 0LL) )
  {
    v13 = *(UnityEngine_Object_o **)&scrollView->fields.showScrollBars;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
    {
      this = *(ServantOperationUIDragDropListViewItem_o **)&scrollView->fields.showScrollBars;
      if ( !this )
        goto LABEL_46;
      if ( UIProgressBar__get_alpha((UIProgressBar_o *)this, 0LL) > 0.0 )
      {
        if ( v11->fields.isLimit )
        {
          if ( !IsLimitOverPosition2 )
          {
            if ( v8 <= (float)-y || v8 >= y )
              return;
LABEL_29:
            v11->fields.isLimit = 0;
            return;
          }
LABEL_27:
          UIScrollView__Press(scrollView, 0, 0LL);
          return;
        }
        if ( v8 > (float)-y
          || (v19.fields.y = 1.0,
              v19.fields.x = 0.0,
              v19.fields.z = 0.0,
              UIScrollView__IsLimitOverPosition2_39202856(scrollView, v19, 0LL)) )
        {
          if ( v8 < y )
            return;
          v15 = -1.0;
          v16 = 0.0;
LABEL_39:
          v17 = 0;
          if ( UIScrollView__IsLimitOverPosition2_39202856(scrollView, *(UnityEngine_Vector3_o *)&v16, 0LL) )
            return;
          v18 = 0.5;
LABEL_45:
          UIScrollView__Scroll(scrollView, v18, 0LL);
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
    sub_B5D69C(this, scrollView);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)this, 0LL) <= 0.0 )
    goto LABEL_28;
  if ( !v11->fields.isLimit )
  {
    if ( v9 > (float)-x
      || (v20.fields.x = 1.0,
          v20.fields.y = 0.0,
          v20.fields.z = 0.0,
          UIScrollView__IsLimitOverPosition2_39202856(scrollView, v20, 0LL)) )
    {
      if ( v9 < x )
        return;
      v16 = -1.0;
      v15 = 0.0;
      goto LABEL_39;
    }
LABEL_44:
    v18 = -0.5;
    goto LABEL_45;
  }
  if ( IsLimitOverPosition2 )
    goto LABEL_27;
  if ( v9 > (float)-x && v9 < x )
    goto LABEL_29;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationUIDragDropListViewItem__Update(
        ServantOperationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantOperationUIDragDropListViewItem_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *mDragScrollView; // x20
  UnityEngine_Camera_o *main; // x0
  __int64 v13; // x1
  struct UIDragScrollView_o *v14; // x8
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Object_c *klass; // x21
  UnityEngine_Camera_o *v17; // x22
  UICamera_c *v18; // x8
  struct UICamera_StaticFields *static_fields; // x8
  float v20; // s0
  float v21; // s1
  float v22; // s2
  float v23; // s8
  float v24; // s9
  float v25; // s10
  float v26; // s0
  float v27; // s1
  float v28; // s2
  UnityEngine_BoxCollider_o *mCollider; // x22
  __int64 v30; // x9
  float v31; // s8
  float v32; // s9
  float v33; // s10
  UnityEngine_Vector2_o ViewSize; // kr00_8
  const MethodInfo *v35; // x2
  __int64 v36; // x0
  __int64 v37; // x1
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s3.4,4:s4.4,8:s5.4

  v4 = this;
  if ( (byte_42EA9FB & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_BoxCollider_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    this = (ServantOperationUIDragDropListViewItem_o *)sub_B5D5C4(&UICamera_TypeInfo, v8, v9, v10);
    byte_42EA9FB = 1;
  }
  if ( v4->fields.isDrag )
  {
    ServantOperationUIDragDropListViewItem__SetManagerDragMove(this, method);
    mDragScrollView = (UnityEngine_Object_o *)v4->fields.mDragScrollView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    main = (UnityEngine_Camera_o *)UnityEngine_Object__op_Equality(mDragScrollView, 0LL, 0LL);
    if ( ((unsigned __int8)main & 1) == 0 )
    {
      v14 = v4->fields.mDragScrollView;
      if ( !v14 )
        goto LABEL_29;
      scrollView = (UnityEngine_Object_o *)v14->fields.scrollView;
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
          v17 = main;
          v18 = UICamera_TypeInfo;
          if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v18 = UICamera_TypeInfo;
          }
          if ( v17 )
          {
            static_fields = v18->static_fields;
            v38.fields.z = 0.0;
            v38.fields.x = static_fields->lastTouchPosition.fields.x;
            v38.fields.y = static_fields->lastTouchPosition.fields.y;
            *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Camera__ScreenToWorldPoint_41565372(v17, v38, 0LL);
            if ( klass )
            {
              v23 = v20;
              v24 = v21;
              v25 = v22;
              main = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)klass, 0LL);
              if ( main )
              {
                v39.fields.x = v23;
                v39.fields.y = v24;
                v39.fields.z = v25;
                *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Transform__InverseTransformPoint(
                                                   (UnityEngine_Transform_o *)main,
                                                   v39,
                                                   0LL);
                mCollider = (UnityEngine_BoxCollider_o *)v4->fields.mCollider;
                if ( mCollider )
                {
                  v30 = *(&UnityEngine_BoxCollider_TypeInfo->_2.bitflags2 + 1);
                  if ( *(&mCollider->klass->_2.bitflags2 + 1) >= (unsigned int)v30
                    && (UnityEngine_BoxCollider_c *)mCollider->klass->_2.typeHierarchy[v30 - 1] == UnityEngine_BoxCollider_TypeInfo )
                  {
                    v31 = v28;
                    v32 = v26 - *((float *)&klass->vtable._1_Finalize.methodPtr + 1);
                    v33 = v27 - *(float *)&klass->vtable._1_Finalize.method;
                    ViewSize = UIPanel__GetViewSize((UIPanel_o *)klass, 0LL);
                    size = UnityEngine_BoxCollider__get_size(mCollider, 0LL);
                    v41.fields.x = (float)(ViewSize.fields.x - size.fields.x) * 0.5;
                    v41.fields.y = (float)(ViewSize.fields.y - size.fields.y) * 0.5;
                    v41.fields.z = (float)(0.0 - size.fields.z) * 0.5;
                    size.fields.x = v32;
                    size.fields.y = v33;
                    size.fields.z = v31;
                    ServantOperationUIDragDropListViewItem__SetScrollView(
                      v4,
                      (UIScrollView_o *)scrollView,
                      size,
                      v41,
                      v35);
                    return;
                  }
                  sub_B5D990(v4->fields.mCollider);
                }
                UIPanel__GetViewSize((UIPanel_o *)klass, 0LL);
                sub_B5D69C(v36, v37);
              }
            }
          }
        }
LABEL_29:
        sub_B5D69C(main, v13);
      }
    }
  }
}