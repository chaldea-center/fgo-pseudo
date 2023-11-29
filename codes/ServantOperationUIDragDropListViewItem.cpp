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
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v10; // x19
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = delta.fields.z;
  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_40FBB51 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBB51 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
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


void __fastcall ServantOperationUIDragDropListViewItem__OnDragDropRelease(
        ServantOperationUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ServantOperationListViewManager_o **mListViewObject; // x20
  __int64 v6; // x9
  ServantOperationListViewManager_o *v7; // x21
  __int64 v8; // x9
  const MethodInfo *v9; // x2
  ServantOperationUIDragDropListViewItem_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_40FBB55 & 1) == 0 )
  {
    sub_B16FFC(&ServantOperationListViewManager_TypeInfo, surface);
    sub_B16FFC(&ServantOperationListViewObject_TypeInfo, v4);
    byte_40FBB55 = 1;
  }
  mListViewObject = (ServantOperationListViewManager_o **)this->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_B170D4();
  v6 = *(&ServantOperationListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( LOBYTE((*mListViewObject)->fields.oldScrollPosition.fields.y) < (unsigned int)v6
    || *((ServantOperationListViewObject_c **)(*mListViewObject)->fields.objectList + v6 - 1) != ServantOperationListViewObject_TypeInfo )
  {
    sub_B173C8(this->fields.mListViewObject);
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
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)this, 0LL, 0LL);
    ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)mListViewObject, 3, 0LL, 0LL);
    ((void (__fastcall *)(ServantOperationListViewManager_o *, Il2CppMethodPointer))v7->klass->vtable._8_ItemDragEnd.method)(
      v7,
      v7->klass->vtable._9_SetSortKind.methodPtr);
    this->fields.isDrag = 0;
    ServantOperationUIDragDropListViewItem__SetDragScrollViewPress(this, 0, v9);
  }
  else
  {
    sub_B173C8(mListViewObject[4]);
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
  UnityEngine_Collider_o *mCollider; // x0
  ServantOperationListViewObject_o *mListViewObject; // x21
  __int64 v8; // x9
  __int64 v9; // x9
  ListViewItem_o *Item; // x22
  int32_t sortIndex; // w21
  bool IsSelect; // w0
  ServantOperationUIDragDropListViewItem_o *v13; // x0
  bool v14; // w1
  const MethodInfo *v15; // x2

  manager = (ServantOperationListViewManager_o *)&byte_40FB000;
  if ( (byte_40FBB4F & 1) == 0 )
  {
    sub_B16FFC(&ServantOperationListViewManager_TypeInfo, method);
    sub_B16FFC(&ServantOperationListViewObject_TypeInfo, v5);
    byte_40FBB4F = 1;
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
        IsSelect = ListViewItem__get_IsSelect(Item, 0LL);
        if ( manager )
        {
          ServantOperationListViewManager__SetDragStart(manager, sortIndex, !IsSelect, 0LL);
          ((void (__fastcall *)(ServantOperationListViewManager_o *, Il2CppMethodPointer))manager->klass->vtable._7_ItemDragStart.method)(
            manager,
            manager->klass->vtable._8_ItemDragEnd.methodPtr);
          *(_WORD *)&this->fields.isDrag = 1;
          return;
        }
      }
LABEL_13:
      sub_B170D4();
    }
  }
  else
  {
    sub_B173C8(this->fields.mListViewObject);
  }
  v13 = (ServantOperationUIDragDropListViewItem_o *)sub_B173C8(manager);
  ServantOperationUIDragDropListViewItem__SetDragScrollViewPress(v13, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationUIDragDropListViewItem__SetDragScrollViewPress(
        ServantOperationUIDragDropListViewItem_o *this,
        bool isPressed,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mDragScrollView; // x21
  struct UIDragScrollView_o *v6; // x8
  UnityEngine_Object_o *scrollView; // x21
  struct UIDragScrollView_o *v8; // x8
  UIScrollView_o *v9; // x0

  if ( (byte_40FBB50 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isPressed);
    byte_40FBB50 = 1;
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(mDragScrollView, 0LL, 0LL) )
  {
    v6 = this->fields.mDragScrollView;
    if ( v6 )
    {
      scrollView = (UnityEngine_Object_o *)v6->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
        return;
      v8 = this->fields.mDragScrollView;
      if ( v8 )
      {
        v9 = v8->fields.scrollView;
        if ( v9 )
        {
          UIScrollView__Press(v9, isPressed, 0LL);
          return;
        }
      }
    }
    sub_B170D4();
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
  UnityEngine_Camera_o *main; // x19
  UICamera_c *v6; // x8
  struct UICamera_StaticFields *static_fields; // x8
  UnityEngine_Component_o *collider; // x0
  ServantOperationListViewObject_o *Component_WebViewObject; // x19
  ServantOperationListViewManager_o *manager; // x20
  __int64 v11; // x9
  ServantOperationListViewItem_o *Item; // x0
  ServantOperationUIDragDropListViewItem_o *v13; // x0
  UIScrollView_o *v14; // x1
  const MethodInfo *v15; // x2
  long double v16; // q0 OVERLAPPED
  UnityEngine_Ray_o v17; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Ray_o v18; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_RaycastHit_o v19; // [xsp+30h] [xbp-40h] BYREF
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40FBB53 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_ServantOperationListViewObject___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v2);
    sub_B16FFC(&ServantOperationListViewManager_TypeInfo, v3);
    sub_B16FFC(&UICamera_TypeInfo, v4);
    byte_40FBB53 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  main = UnityEngine_Camera__get_main(0LL);
  v6 = UICamera_TypeInfo;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v6 = UICamera_TypeInfo;
  }
  if ( !main )
    goto LABEL_21;
  static_fields = v6->static_fields;
  v20.fields.z = 0.0;
  v20.fields.x = static_fields->lastTouchPosition.fields.x;
  v20.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_40664072(&v18, main, v20, 0LL);
  v17 = v18;
  if ( !UnityEngine_Physics__Raycast_16528960(&v17, &v19, 0LL) )
    return;
  collider = (UnityEngine_Component_o *)UnityEngine_RaycastHit__get_collider(&v19, 0LL);
  if ( !collider )
    goto LABEL_21;
  Component_WebViewObject = (ServantOperationListViewObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                  collider,
                                                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ServantOperationListViewObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    if ( Component_WebViewObject )
    {
      manager = (ServantOperationListViewManager_o *)Component_WebViewObject->fields.manager;
      if ( manager )
      {
        v11 = *(&ServantOperationListViewManager_TypeInfo->_2.bitflags2 + 1);
        if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v11
          || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[v11 - 1] != ServantOperationListViewManager_TypeInfo )
        {
          v16 = sub_B173C8(Component_WebViewObject->fields.manager);
          ServantOperationUIDragDropListViewItem__SetScrollView(v13, v14, *(UnityEngine_Vector3_o *)&v16, v21, v15);
          return;
        }
      }
      Item = ServantOperationListViewObject__GetItem(Component_WebViewObject, 0LL);
      if ( Item )
      {
        if ( manager )
        {
          ServantOperationListViewManager__SetDragMove(manager, Item->fields.sortIndex, 0LL);
          return;
        }
      }
    }
LABEL_21:
    sub_B170D4();
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
  bool IsLimitOverPosition2; // w21
  UnityEngine_Object_o *v12; // x22
  UIProgressBar_o *v13; // x0
  UnityEngine_Object_o *verticalScrollBar; // x22
  UIProgressBar_o *v15; // x0
  float v16; // s1
  float v17; // s0
  int v18; // s2
  float v19; // s0
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  y = range.fields.y;
  x = range.fields.x;
  v7 = localPos.fields.y;
  v8 = localPos.fields.x;
  if ( (byte_40FBB54 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, scrollView);
    byte_40FBB54 = 1;
  }
  if ( !scrollView )
    goto LABEL_46;
  IsLimitOverPosition2 = UIScrollView__IsLimitOverPosition2(scrollView, 0LL);
  if ( IsLimitOverPosition2 )
    this->fields.isLimit = 1;
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
      v13 = *(UIProgressBar_o **)&scrollView->fields.showScrollBars;
      if ( !v13 )
        goto LABEL_46;
      if ( UIProgressBar__get_alpha(v13, 0LL) > 0.0 )
      {
        if ( this->fields.isLimit )
        {
          if ( !IsLimitOverPosition2 )
          {
            if ( v7 <= (float)-y || v7 >= y )
              return;
LABEL_29:
            this->fields.isLimit = 0;
            return;
          }
LABEL_27:
          UIScrollView__Press(scrollView, 0, 0LL);
          return;
        }
        if ( v7 > (float)-y
          || (v20.fields.y = 1.0,
              v20.fields.x = 0.0,
              v20.fields.z = 0.0,
              UIScrollView__IsLimitOverPosition2_37892472(scrollView, v20, 0LL)) )
        {
          if ( v7 < y )
            return;
          v16 = -1.0;
          v17 = 0.0;
LABEL_39:
          v18 = 0;
          if ( UIScrollView__IsLimitOverPosition2_37892472(scrollView, *(UnityEngine_Vector3_o *)&v17, 0LL) )
            return;
          v19 = 0.5;
LABEL_45:
          UIScrollView__Scroll(scrollView, v19, 0LL);
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
  v15 = scrollView->fields.verticalScrollBar;
  if ( !v15 )
LABEL_46:
    sub_B170D4();
  if ( UIProgressBar__get_alpha(v15, 0LL) <= 0.0 )
    goto LABEL_28;
  if ( !this->fields.isLimit )
  {
    if ( v8 > (float)-x
      || (v21.fields.x = 1.0,
          v21.fields.y = 0.0,
          v21.fields.z = 0.0,
          UIScrollView__IsLimitOverPosition2_37892472(scrollView, v21, 0LL)) )
    {
      if ( v8 < x )
        return;
      v17 = -1.0;
      v16 = 0.0;
      goto LABEL_39;
    }
LABEL_44:
    v19 = -0.5;
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
  struct UIDragScrollView_o *v6; // x8
  struct UIScrollView_o *scrollView; // x20
  __int64 v8; // x21
  UnityEngine_Camera_o *main; // x22
  UICamera_c *v10; // x8
  struct UICamera_StaticFields *static_fields; // x8
  float v12; // s0
  float v13; // s1
  float v14; // s2
  float v15; // s8
  float v16; // s9
  float v17; // s10
  UnityEngine_Transform_o *transform; // x0
  float v19; // s0
  float v20; // s1
  float v21; // s2
  UnityEngine_BoxCollider_o *mCollider; // x22
  __int64 v23; // x9
  float v24; // s8
  float v25; // s9
  float v26; // s10
  UnityEngine_Vector2_o ViewSize; // kr00_8
  const MethodInfo *v28; // x2
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s3.4,4:s4.4,8:s5.4

  v2 = this;
  if ( (byte_40FBB52 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_BoxCollider_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    this = (ServantOperationUIDragDropListViewItem_o *)sub_B16FFC(&UICamera_TypeInfo, v4);
    byte_40FBB52 = 1;
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
    if ( !UnityEngine_Object__op_Equality(mDragScrollView, 0LL, 0LL) )
    {
      v6 = v2->fields.mDragScrollView;
      if ( !v6 )
        goto LABEL_29;
      scrollView = v6->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)scrollView, 0LL, 0LL) )
      {
        if ( scrollView )
        {
          v8 = *(_QWORD *)&scrollView->fields.mPlane.fields.m_Normal.fields.x;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v8, 0LL, 0LL) )
            return;
          main = UnityEngine_Camera__get_main(0LL);
          v10 = UICamera_TypeInfo;
          if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v10 = UICamera_TypeInfo;
          }
          if ( main )
          {
            static_fields = v10->static_fields;
            v29.fields.z = 0.0;
            v29.fields.x = static_fields->lastTouchPosition.fields.x;
            v29.fields.y = static_fields->lastTouchPosition.fields.y;
            *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Camera__ScreenToWorldPoint_40663568(main, v29, 0LL);
            if ( v8 )
            {
              v15 = v12;
              v16 = v13;
              v17 = v14;
              transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0LL);
              if ( transform )
              {
                v30.fields.x = v15;
                v30.fields.y = v16;
                v30.fields.z = v17;
                *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__InverseTransformPoint(transform, v30, 0LL);
                mCollider = (UnityEngine_BoxCollider_o *)v2->fields.mCollider;
                if ( mCollider )
                {
                  v23 = *(&UnityEngine_BoxCollider_TypeInfo->_2.bitflags2 + 1);
                  if ( *(&mCollider->klass->_2.bitflags2 + 1) >= (unsigned int)v23
                    && (UnityEngine_BoxCollider_c *)mCollider->klass->_2.typeHierarchy[v23 - 1] == UnityEngine_BoxCollider_TypeInfo )
                  {
                    v24 = v21;
                    v25 = v19 - *(float *)(v8 + 324);
                    v26 = v20 - *(float *)(v8 + 328);
                    ViewSize = UIPanel__GetViewSize((UIPanel_o *)v8, 0LL);
                    size = UnityEngine_BoxCollider__get_size(mCollider, 0LL);
                    v32.fields.x = (float)(ViewSize.fields.x - size.fields.x) * 0.5;
                    v32.fields.y = (float)(ViewSize.fields.y - size.fields.y) * 0.5;
                    v32.fields.z = (float)(0.0 - size.fields.z) * 0.5;
                    size.fields.x = v25;
                    size.fields.y = v26;
                    size.fields.z = v24;
                    ServantOperationUIDragDropListViewItem__SetScrollView(v2, scrollView, size, v32, v28);
                    return;
                  }
                  sub_B173C8(v2->fields.mCollider);
                }
                UIPanel__GetViewSize((UIPanel_o *)v8, 0LL);
                sub_B170D4();
              }
            }
          }
        }
LABEL_29:
        sub_B170D4();
      }
    }
  }
}