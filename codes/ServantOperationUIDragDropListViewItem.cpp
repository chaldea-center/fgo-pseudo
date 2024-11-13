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
  __int64 v3; // x2
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *dragObject; // x20
  __int64 v9; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *v11; // x19
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = delta.fields.z;
  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_4B125FF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    byte_4B125FF = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(dragObject, 0LL, 0LL) )
  {
    transform = this->fields.dragObject;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL )
    {
      sub_1BCAA3C(transform, v9);
    }
    v11 = (UnityEngine_Transform_o *)transform;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    localPosition.fields.y = y + localPosition.fields.y;
    localPosition.fields.z = z + localPosition.fields.z;
    localPosition.fields.x = x + localPosition.fields.x;
    UnityEngine_Transform__set_localPosition(v11, localPosition, 0LL);
  }
}


void __fastcall ServantOperationUIDragDropListViewItem__OnDragDropRelease(
        ServantOperationUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  ServantOperationUIDragDropListViewItem_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  ServantOperationListViewManager_o **mListViewObject; // x20
  __int64 methodPtr_low; // x9
  ServantOperationListViewManager_o *v8; // x21
  __int64 v9; // x9
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  ServantOperationUIDragDropListViewItem_o *v12; // x0
  const MethodInfo *v13; // x1

  v3 = this;
  if ( (byte_4B12603 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantOperationListViewManager_TypeInfo, surface, method);
    this = (ServantOperationUIDragDropListViewItem_o *)sub_1BCA7E0(&ServantOperationListViewObject_TypeInfo, v4, v5);
    byte_4B12603 = 1;
  }
  mListViewObject = (ServantOperationListViewManager_o **)v3->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_1BCAA3C(this, surface);
  surface = (UnityEngine_GameObject_o *)ServantOperationListViewObject_TypeInfo;
  methodPtr_low = LOBYTE(ServantOperationListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE((*mListViewObject)->fields.oldScrollPosition.fields.x) < (unsigned int)methodPtr_low
    || *((ServantOperationListViewObject_c **)(*mListViewObject)->fields.itemSortList + methodPtr_low - 1) != ServantOperationListViewObject_TypeInfo )
  {
    sub_1BCACFC(v3->fields.mListViewObject);
    goto LABEL_11;
  }
  v8 = mListViewObject[5];
  if ( !v8 )
    goto LABEL_11;
  v9 = LOBYTE(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v8->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v9
    && (ServantOperationListViewManager_c *)v8->klass->_2.typeHierarchy[v9 - 1] == ServantOperationListViewManager_TypeInfo )
  {
    ServantOperationListViewManager__SetDragEnd(mListViewObject[5], 0LL);
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0LL, 0LL);
    ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)mListViewObject, 3, 0LL, v10);
    ((void (__fastcall *)(ServantOperationListViewManager_o *, Il2CppMethodPointer))v8->klass->vtable._9_ItemDragEnd.method)(
      v8,
      v8->klass->vtable._10_SetSortKind.methodPtr);
    v3->fields.isDrag = 0;
    ServantOperationUIDragDropListViewItem__SetDragScrollViewPress(v3, 0, v11);
  }
  else
  {
    sub_1BCACFC(mListViewObject[5]);
    ServantOperationUIDragDropListViewItem___ctor(v12, v13);
  }
}


void __fastcall ServantOperationUIDragDropListViewItem__OnDragDropStart(
        ServantOperationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantOperationListViewManager_o *manager; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  UnityEngine_Collider_o *mCollider; // x0
  ServantOperationListViewObject_o *mListViewObject; // x21
  const MethodInfo *v10; // x1
  __int64 methodPtr_low; // x9
  __int64 v12; // x9
  ListViewItem_o *Item; // x22
  const MethodInfo *v14; // x1
  int32_t sortIndex; // w21
  ServantOperationUIDragDropListViewItem_o *v16; // x0
  bool v17; // w1
  const MethodInfo *v18; // x2

  manager = (ServantOperationListViewManager_o *)&byte_4B12000;
  if ( (byte_4B125FD & 1) == 0 )
  {
    sub_1BCA7E0(&ServantOperationListViewManager_TypeInfo, method, v2);
    sub_1BCA7E0(&ServantOperationListViewObject_TypeInfo, v5, v6);
    byte_4B125FD = 1;
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
  v10 = (const MethodInfo *)ServantOperationListViewObject_TypeInfo;
  methodPtr_low = LOBYTE(ServantOperationListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(mListViewObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (ServantOperationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewObject_TypeInfo )
  {
    manager = (ServantOperationListViewManager_o *)mListViewObject->fields.manager;
    if ( !manager
      || (v10 = (const MethodInfo *)ServantOperationListViewManager_TypeInfo,
          v12 = LOBYTE(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(manager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v12)
      && (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[v12 - 1] == ServantOperationListViewManager_TypeInfo )
    {
      Item = (ListViewItem_o *)ServantOperationListViewObject__GetItem(
                                 (ServantOperationListViewObject_o *)this->fields.mListViewObject,
                                 v10);
      ServantOperationListViewObject__OnDragDropStart(mListViewObject, v14);
      if ( Item )
      {
        sortIndex = Item->fields.sortIndex;
        mCollider = (UnityEngine_Collider_o *)ListViewItem__get_IsSelect(Item, 0LL);
        if ( manager )
        {
          ServantOperationListViewManager__SetDragStart(manager, sortIndex, ((unsigned __int8)mCollider & 1) == 0, 0LL);
          ((void (__fastcall *)(ServantOperationListViewManager_o *, Il2CppMethodPointer))manager->klass->vtable._8_ItemDragStart.method)(
            manager,
            manager->klass->vtable._9_ItemDragEnd.methodPtr);
          *(_WORD *)&this->fields.isDrag = 1;
          return;
        }
      }
LABEL_13:
      sub_1BCAA3C(mCollider, v7);
    }
  }
  else
  {
    sub_1BCACFC(this->fields.mListViewObject);
  }
  v16 = (ServantOperationUIDragDropListViewItem_o *)sub_1BCACFC(manager);
  ServantOperationUIDragDropListViewItem__SetDragScrollViewPress(v16, v17, v18);
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

  if ( (byte_4B125FE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isPressed, method);
    byte_4B125FE = 1;
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isPressed);
  v6 = (UIScrollView_o *)UnityEngine_Object__op_Equality(mDragScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    v8 = this->fields.mDragScrollView;
    if ( v8 )
    {
      scrollView = (UnityEngine_Object_o *)v8->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
    sub_1BCAA3C(v6, v7);
  }
}


void __fastcall ServantOperationUIDragDropListViewItem__SetManagerDragMove(
        ServantOperationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  void *main; // x0
  const MethodInfo *v12; // x1
  UICamera_c *v13; // x8
  UnityEngine_Camera_o *v14; // x19
  struct UICamera_StaticFields *static_fields; // x8
  __int64 v16; // x1
  __int64 v17; // x1
  Il2CppObject *Component_object; // x19
  ServantOperationListViewManager_o *monitor; // x20
  __int64 methodPtr_low; // x9
  UnityEngine_Ray_o v21; // [xsp+0h] [xbp-A0h] BYREF
  UnityEngine_Ray_o v22; // [xsp+18h] [xbp-88h] BYREF
  UnityEngine_Ray_o v23; // [xsp+30h] [xbp-70h]
  UnityEngine_RaycastHit_o v24; // [xsp+50h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12601 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_ServantOperationListViewObject___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v3, v4);
    sub_1BCA7E0(&UnityEngine_Physics_TypeInfo, v5, v6);
    sub_1BCA7E0(&ServantOperationListViewManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&UICamera_TypeInfo, v9, v10);
    byte_4B12601 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  main = UnityEngine_Camera__get_main(0LL);
  v13 = UICamera_TypeInfo;
  v14 = (UnityEngine_Camera_o *)main;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
    v13 = UICamera_TypeInfo;
  }
  if ( !v14 )
    goto LABEL_22;
  static_fields = v13->static_fields;
  v25.fields.z = 0.0;
  v25.fields.x = static_fields->lastTouchPosition.fields.x;
  v25.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_69960936(&v22, v14, v25, 0LL);
  v23 = v22;
  if ( !UnityEngine_Physics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo, v16);
  v21 = v23;
  if ( UnityEngine_Physics__Raycast_70467096(&v21, &v24, 0LL) )
  {
    main = UnityEngine_RaycastHit__get_collider(&v24, 0LL);
    if ( !main )
      goto LABEL_22;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)main,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_ServantOperationListViewObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    main = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)main & 1) == 0 )
    {
      if ( !Component_object )
        goto LABEL_22;
      monitor = (ServantOperationListViewManager_o *)Component_object[2].monitor;
      if ( monitor )
      {
        methodPtr_low = LOBYTE(ServantOperationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(monitor->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ServantOperationListViewManager_c *)monitor->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantOperationListViewManager_TypeInfo )
        {
          main = ServantOperationListViewObject__GetItem(
                   (ServantOperationListViewObject_o *)Component_object,
                   (const MethodInfo *)ServantOperationListViewManager_TypeInfo);
          if ( main )
          {
            ServantOperationListViewManager__SetDragMove(monitor, *((_DWORD *)main + 6), 0LL);
            return;
          }
LABEL_22:
          sub_1BCAA3C(main, v12);
        }
        sub_1BCACFC(Component_object[2].monitor);
      }
      main = ServantOperationListViewObject__GetItem((ServantOperationListViewObject_o *)Component_object, v12);
      goto LABEL_22;
    }
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
  __int64 v12; // x1
  UnityEngine_Object_o *verticalScrollBar; // x22
  __int64 v14; // x1
  UnityEngine_Object_o *horizontalScrollBar; // x22
  float v16; // s0
  float v17; // s1
  int v18; // s2
  float v19; // s0
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  y = range.fields.y;
  x = range.fields.x;
  v7 = localPos.fields.y;
  v8 = localPos.fields.x;
  v10 = this;
  if ( (byte_4B12602 & 1) == 0 )
  {
    this = (ServantOperationUIDragDropListViewItem_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, scrollView, method);
    byte_4B12602 = 1;
  }
  if ( !scrollView )
    goto LABEL_44;
  IsLimitOverPosition2 = UIScrollView__IsLimitOverPosition2(scrollView, 0LL);
  if ( IsLimitOverPosition2 )
    v10->fields.isLimit = 1;
  if ( UIScrollView__get_canMoveVertically(scrollView, 0LL) )
  {
    verticalScrollBar = (UnityEngine_Object_o *)scrollView->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    if ( UnityEngine_Object__op_Inequality(verticalScrollBar, 0LL, 0LL) )
    {
      this = (ServantOperationUIDragDropListViewItem_o *)scrollView->fields.verticalScrollBar;
      if ( !this )
        goto LABEL_44;
      if ( UIProgressBar__get_alpha((UIProgressBar_o *)this, 0LL) > 0.0 )
      {
        if ( v10->fields.isLimit )
        {
          if ( !IsLimitOverPosition2 )
          {
            if ( v7 <= (float)-y || v7 >= y )
              return;
LABEL_27:
            v10->fields.isLimit = 0;
            return;
          }
LABEL_25:
          UIScrollView__Press(scrollView, 0, 0LL);
          return;
        }
        if ( v7 > (float)-y
          || (v20.fields.x = 0.0,
              v20.fields.y = 1.0,
              v20.fields.z = 0.0,
              UIScrollView__IsLimitOverPosition2_47310024(scrollView, v20, 0LL)) )
        {
          if ( v7 < y )
            return;
          v16 = 0.0;
          v17 = -1.0;
LABEL_37:
          v18 = 0;
          if ( UIScrollView__IsLimitOverPosition2_47310024(scrollView, *(UnityEngine_Vector3_o *)&v16, 0LL) )
            return;
          v19 = 0.5;
LABEL_43:
          UIScrollView__Scroll(scrollView, v19, 0LL);
          return;
        }
        goto LABEL_42;
      }
    }
  }
  if ( !UIScrollView__get_canMoveHorizontally(scrollView, 0LL) )
    goto LABEL_26;
  horizontalScrollBar = (UnityEngine_Object_o *)scrollView->fields.horizontalScrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( !UnityEngine_Object__op_Inequality(horizontalScrollBar, 0LL, 0LL) )
  {
LABEL_26:
    if ( IsLimitOverPosition2 )
      return;
    goto LABEL_27;
  }
  this = (ServantOperationUIDragDropListViewItem_o *)scrollView->fields.horizontalScrollBar;
  if ( !this )
LABEL_44:
    sub_1BCAA3C(this, scrollView);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)this, 0LL) <= 0.0 )
    goto LABEL_26;
  if ( !v10->fields.isLimit )
  {
    if ( v8 > (float)-x
      || (v21.fields.x = 1.0,
          v21.fields.y = 0.0,
          v21.fields.z = 0.0,
          UIScrollView__IsLimitOverPosition2_47310024(scrollView, v21, 0LL)) )
    {
      if ( v8 < x )
        return;
      v16 = -1.0;
      v17 = 0.0;
      goto LABEL_37;
    }
LABEL_42:
    v19 = -0.5;
    goto LABEL_43;
  }
  if ( IsLimitOverPosition2 )
    goto LABEL_25;
  if ( v8 > (float)-x && v8 < x )
    goto LABEL_27;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantOperationUIDragDropListViewItem__Update(
        ServantOperationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantOperationUIDragDropListViewItem_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  UnityEngine_Object_o *mDragScrollView; // x20
  UnityEngine_Camera_o *main; // x0
  __int64 v11; // x1
  struct UIDragScrollView_o *v12; // x8
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Object_o *monitor; // x21
  UnityEngine_Camera_o *v15; // x22
  UICamera_c *v16; // x8
  struct UICamera_StaticFields *static_fields; // x8
  float v18; // s0
  float v19; // s1
  float v20; // s2
  float v21; // s8
  float v22; // s9
  float v23; // s10
  float v24; // s0
  float v25; // s1
  float v26; // s2
  UnityEngine_BoxCollider_o *mCollider; // x22
  __int64 methodPtr_low; // x9
  float v29; // s8
  float v30; // s9
  float v31; // s10
  UnityEngine_Vector2_o ViewSize; // kr00_8
  const MethodInfo *v33; // x2
  __int64 v34; // x0
  __int64 v35; // x1
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s3.4,4:s4.4,8:s5.4

  v3 = this;
  if ( (byte_4B12600 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_BoxCollider_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    this = (ServantOperationUIDragDropListViewItem_o *)sub_1BCA7E0(&UICamera_TypeInfo, v6, v7);
    byte_4B12600 = 1;
  }
  if ( v3->fields.isDrag )
  {
    ServantOperationUIDragDropListViewItem__SetManagerDragMove(this, method);
    mDragScrollView = (UnityEngine_Object_o *)v3->fields.mDragScrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    main = (UnityEngine_Camera_o *)UnityEngine_Object__op_Equality(mDragScrollView, 0LL, 0LL);
    if ( ((unsigned __int8)main & 1) == 0 )
    {
      v12 = v3->fields.mDragScrollView;
      if ( !v12 )
        goto LABEL_25;
      scrollView = (UnityEngine_Object_o *)v12->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      main = (UnityEngine_Camera_o *)UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL);
      if ( ((unsigned __int8)main & 1) == 0 )
      {
        if ( scrollView )
        {
          monitor = (UnityEngine_Object_o *)scrollView[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
          if ( UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
            return;
          main = UnityEngine_Camera__get_main(0LL);
          v15 = main;
          v16 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v11);
            v16 = UICamera_TypeInfo;
          }
          if ( v15 )
          {
            static_fields = v16->static_fields;
            v36.fields.z = 0.0;
            v36.fields.x = static_fields->lastTouchPosition.fields.x;
            v36.fields.y = static_fields->lastTouchPosition.fields.y;
            *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Camera__ScreenToWorldPoint_69960472(v15, v36, 0LL);
            if ( monitor )
            {
              v21 = v18;
              v22 = v19;
              v23 = v20;
              main = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)monitor,
                                               0LL);
              if ( main )
              {
                v37.fields.x = v21;
                v37.fields.y = v22;
                v37.fields.z = v23;
                *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__InverseTransformPoint(
                                                   (UnityEngine_Transform_o *)main,
                                                   v37,
                                                   0LL);
                mCollider = (UnityEngine_BoxCollider_o *)v3->fields.mCollider;
                if ( mCollider )
                {
                  methodPtr_low = LOBYTE(UnityEngine_BoxCollider_TypeInfo->vtable._0_Equals.methodPtr);
                  if ( LOBYTE(mCollider->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
                    && (UnityEngine_BoxCollider_c *)mCollider->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_BoxCollider_TypeInfo )
                  {
                    v29 = v26;
                    v30 = v24 - *((float *)&monitor[13].fields + 1);
                    v31 = v25 - *(float *)&monitor[14].klass;
                    ViewSize = UIPanel__GetViewSize((UIPanel_o *)monitor, 0LL);
                    size = UnityEngine_BoxCollider__get_size(mCollider, 0LL);
                    v39.fields.x = (float)(ViewSize.fields.x - size.fields.x) * 0.5;
                    v39.fields.y = (float)(ViewSize.fields.y - size.fields.y) * 0.5;
                    v39.fields.z = (float)(0.0 - size.fields.z) * 0.5;
                    size.fields.x = v30;
                    size.fields.y = v31;
                    size.fields.z = v29;
                    ServantOperationUIDragDropListViewItem__SetScrollView(
                      v3,
                      (UIScrollView_o *)scrollView,
                      size,
                      v39,
                      v33);
                    return;
                  }
                  sub_1BCACFC(v3->fields.mCollider);
                }
                UIPanel__GetViewSize((UIPanel_o *)monitor, 0LL);
                sub_1BCAA3C(v34, v35);
              }
            }
          }
        }
LABEL_25:
        sub_1BCAA3C(main, v11);
      }
    }
  }
}