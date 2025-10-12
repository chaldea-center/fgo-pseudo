void ServantOperationUIDragDropListViewItem___ctor(
        ServantOperationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewItem___ctor((UIDragDropListViewItem_o *)this, 0);
}


void ServantOperationUIDragDropListViewItem__OnDragDropMove(
        ServantOperationUIDragDropListViewItem_o *this,
        UnityEngine_Vector3_o delta,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *dragObject; // x20
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Transform_o *v9; // x19
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = delta.fields.z;
  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_4C33B06 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33B06 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(dragObject, 0, 0) )
  {
    transform = this->fields.dragObject;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0)) == 0 )
    {
      sub_1C32E7C(transform);
    }
    v9 = (UnityEngine_Transform_o *)transform;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    localPosition.fields.y = y + localPosition.fields.y;
    localPosition.fields.z = z + localPosition.fields.z;
    localPosition.fields.x = x + localPosition.fields.x;
    UnityEngine_Transform__set_localPosition(v9, localPosition, 0);
  }
}


void ServantOperationUIDragDropListViewItem__OnDragDropRelease(
        ServantOperationUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  ServantOperationUIDragDropListViewItem_o *v3; // x19
  ServantOperationListViewManager_o **mListViewObject; // x20
  __int64 naturalAligment; // x9
  ServantOperationListViewManager_o *v6; // x21
  __int64 v7; // x9
  const MethodInfo *v8; // x2
  ServantOperationUIDragDropListViewItem_o *v9; // x0
  const MethodInfo *v10; // x1

  v3 = this;
  if ( (byte_4C33B0A & 1) == 0 )
  {
    sub_1C32C20(&ServantOperationListViewManager_TypeInfo);
    this = (ServantOperationUIDragDropListViewItem_o *)sub_1C32C20(&ServantOperationListViewObject_TypeInfo);
    byte_4C33B0A = 1;
  }
  mListViewObject = (ServantOperationListViewManager_o **)v3->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_1C32E7C(this);
  naturalAligment = ServantOperationListViewObject_TypeInfo->_2.naturalAligment;
  if ( LOBYTE((*mListViewObject)->fields.oldScrollPosition.fields.x) < (unsigned int)naturalAligment
    || *((ServantOperationListViewObject_c **)(*mListViewObject)->fields.itemSortList + naturalAligment - 1) != ServantOperationListViewObject_TypeInfo )
  {
    sub_1C3313C(v3->fields.mListViewObject);
    goto LABEL_11;
  }
  v6 = mListViewObject[5];
  if ( !v6 )
    goto LABEL_11;
  v7 = ServantOperationListViewManager_TypeInfo->_2.naturalAligment;
  if ( v6->klass->_2.naturalAligment >= (unsigned int)v7
    && (ServantOperationListViewManager_c *)v6->klass->_2.typeHierarchy[v7 - 1] == ServantOperationListViewManager_TypeInfo )
  {
    ServantOperationListViewManager__SetDragEnd(mListViewObject[5], 0);
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0, 0);
    ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)mListViewObject, 3, 0, 0);
    ((void (__fastcall *)(ServantOperationListViewManager_o *, const MethodInfo *))v6->klass->vtable._9_ItemDragEnd.methodPtr)(
      v6,
      v6->klass->vtable._9_ItemDragEnd.method);
    v3->fields.isDrag = 0;
    ServantOperationUIDragDropListViewItem__SetDragScrollViewPress(v3, 0, v8);
  }
  else
  {
    sub_1C3313C(mListViewObject[5]);
    ServantOperationUIDragDropListViewItem___ctor(v9, v10);
  }
}


void ServantOperationUIDragDropListViewItem__OnDragDropStart(
        ServantOperationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantOperationListViewManager_o *manager; // x20
  UnityEngine_Collider_o *mCollider; // x0
  ServantOperationListViewObject_o *mListViewObject; // x21
  __int64 naturalAligment; // x9
  __int64 v8; // x9
  ListViewItem_o *Item; // x22
  int32_t sortIndex; // w21
  ServantOperationUIDragDropListViewItem_o *v11; // x0
  bool v12; // w1
  const MethodInfo *v13; // x2

  manager = (ServantOperationListViewManager_o *)&byte_4C33000;
  if ( (byte_4C33B04 & 1) == 0 )
  {
    sub_1C32C20(&ServantOperationListViewManager_TypeInfo);
    sub_1C32C20(&ServantOperationListViewObject_TypeInfo);
    byte_4C33B04 = 1;
  }
  ServantOperationUIDragDropListViewItem__SetDragScrollViewPress(this, 0, v2);
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0);
  mCollider = this->fields.mCollider;
  if ( !mCollider )
    goto LABEL_13;
  UnityEngine_Collider__set_enabled(mCollider, 1, 0);
  mListViewObject = (ServantOperationListViewObject_o *)this->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_13;
  naturalAligment = ServantOperationListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (ServantOperationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] == ServantOperationListViewObject_TypeInfo )
  {
    manager = (ServantOperationListViewManager_o *)mListViewObject->fields.manager;
    if ( !manager
      || (v8 = ServantOperationListViewManager_TypeInfo->_2.naturalAligment,
          manager->klass->_2.naturalAligment >= (unsigned int)v8)
      && (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[v8 - 1] == ServantOperationListViewManager_TypeInfo )
    {
      Item = (ListViewItem_o *)ServantOperationListViewObject__GetItem(
                                 (ServantOperationListViewObject_o *)this->fields.mListViewObject,
                                 0);
      ServantOperationListViewObject__OnDragDropStart(mListViewObject, 0);
      if ( Item )
      {
        sortIndex = Item->fields.sortIndex;
        mCollider = (UnityEngine_Collider_o *)ListViewItem__get_IsSelect(Item, 0);
        if ( manager )
        {
          ServantOperationListViewManager__SetDragStart(manager, sortIndex, ((unsigned __int8)mCollider & 1) == 0, 0);
          ((void (__fastcall *)(ServantOperationListViewManager_o *, const MethodInfo *))manager->klass->vtable._8_ItemDragStart.methodPtr)(
            manager,
            manager->klass->vtable._8_ItemDragStart.method);
          *(_WORD *)&this->fields.isDrag = 1;
          return;
        }
      }
LABEL_13:
      sub_1C32E7C(mCollider);
    }
  }
  else
  {
    sub_1C3313C(this->fields.mListViewObject);
  }
  v11 = (ServantOperationUIDragDropListViewItem_o *)sub_1C3313C(manager);
  ServantOperationUIDragDropListViewItem__SetDragScrollViewPress(v11, v12, v13);
}


void ServantOperationUIDragDropListViewItem__SetDragScrollViewPress(
        ServantOperationUIDragDropListViewItem_o *this,
        bool isPressed,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mDragScrollView; // x21
  UIScrollView_o *v6; // x0
  struct UIDragScrollView_o *v7; // x8
  UnityEngine_Object_o *scrollView; // x21
  struct UIDragScrollView_o *v9; // x8

  if ( (byte_4C33B05 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33B05 = 1;
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (UIScrollView_o *)UnityEngine_Object__op_Equality(mDragScrollView, 0, 0);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    v7 = this->fields.mDragScrollView;
    if ( v7 )
    {
      scrollView = (UnityEngine_Object_o *)v7->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v6 = (UIScrollView_o *)UnityEngine_Object__op_Equality(scrollView, 0, 0);
      if ( ((unsigned __int8)v6 & 1) != 0 )
        return;
      v9 = this->fields.mDragScrollView;
      if ( v9 )
      {
        v6 = v9->fields.scrollView;
        if ( v6 )
        {
          UIScrollView__Press(v6, isPressed, 0);
          return;
        }
      }
    }
    sub_1C32E7C(v6);
  }
}


void ServantOperationUIDragDropListViewItem__SetManagerDragMove(
        ServantOperationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  void *main; // x0
  UICamera_c *v3; // x8
  UnityEngine_Camera_o *v4; // x19
  struct UICamera_StaticFields *static_fields; // x8
  UnityEngine_Object_o *Component_object; // x19
  ServantOperationListViewManager_o *m_CachedPtr; // x20
  __int64 naturalAligment; // x9
  UnityEngine_Ray_o v9; // [xsp+0h] [xbp-A0h] BYREF
  UnityEngine_Ray_o v10; // [xsp+18h] [xbp-88h] BYREF
  UnityEngine_Ray_o v11; // [xsp+30h] [xbp-70h]
  UnityEngine_RaycastHit_o v12; // [xsp+50h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C33B08 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_ServantOperationListViewObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UnityEngine_Physics_TypeInfo);
    sub_1C32C20(&ServantOperationListViewManager_TypeInfo);
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C33B08 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  main = UnityEngine_Camera__get_main(0);
  v3 = UICamera_TypeInfo;
  v4 = (UnityEngine_Camera_o *)main;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
  }
  if ( !v4 )
    goto LABEL_22;
  static_fields = v3->static_fields;
  v13.fields.z = 0.0;
  v13.fields.x = static_fields->lastTouchPosition.fields.x;
  v13.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_71030396(&v10, v4, v13, 0);
  v11 = v10;
  if ( !UnityEngine_Physics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo);
  v9 = v11;
  if ( UnityEngine_Physics__Raycast_71539964(&v9, &v12, 0) )
  {
    main = UnityEngine_RaycastHit__get_collider(&v12, 0);
    if ( !main )
      goto LABEL_22;
    Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)main,
                                                 (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_ServantOperationListViewObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    main = (void *)UnityEngine_Object__op_Equality(Component_object, 0, 0);
    if ( ((unsigned __int8)main & 1) == 0 )
    {
      if ( !Component_object )
        goto LABEL_22;
      m_CachedPtr = (ServantOperationListViewManager_o *)Component_object[1].fields.m_CachedPtr;
      if ( m_CachedPtr )
      {
        naturalAligment = ServantOperationListViewManager_TypeInfo->_2.naturalAligment;
        if ( m_CachedPtr->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (ServantOperationListViewManager_c *)m_CachedPtr->klass->_2.typeHierarchy[naturalAligment - 1] == ServantOperationListViewManager_TypeInfo )
        {
          main = ServantOperationListViewObject__GetItem((ServantOperationListViewObject_o *)Component_object, 0);
          if ( main )
          {
            ServantOperationListViewManager__SetDragMove(m_CachedPtr, *((_DWORD *)main + 6), 0);
            return;
          }
LABEL_22:
          sub_1C32E7C(main);
        }
        sub_1C3313C(Component_object[1].fields.m_CachedPtr);
      }
      main = ServantOperationListViewObject__GetItem((ServantOperationListViewObject_o *)Component_object, 0);
      goto LABEL_22;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationUIDragDropListViewItem__SetScrollView(
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
  UnityEngine_Object_o *verticalScrollBar; // x22
  UnityEngine_Object_o *horizontalScrollBar; // x22
  float v14; // s0 OVERLAPPED
  float v15; // s1
  int v16; // s2
  float v17; // s0
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  y = range.fields.y;
  x = range.fields.x;
  v7 = localPos.fields.y;
  v8 = localPos.fields.x;
  v10 = this;
  if ( (byte_4C33B09 & 1) == 0 )
  {
    this = (ServantOperationUIDragDropListViewItem_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33B09 = 1;
  }
  if ( !scrollView )
    goto LABEL_44;
  IsLimitOverPosition2 = UIScrollView__IsLimitOverPosition2(scrollView, 0);
  if ( IsLimitOverPosition2 )
    v10->fields.isLimit = 1;
  if ( UIScrollView__get_canMoveVertically(scrollView, 0) )
  {
    verticalScrollBar = (UnityEngine_Object_o *)scrollView->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0) )
    {
      this = (ServantOperationUIDragDropListViewItem_o *)scrollView->fields.verticalScrollBar;
      if ( !this )
        goto LABEL_44;
      if ( UIProgressBar__get_alpha((UIProgressBar_o *)this, 0) > 0.0 )
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
          UIScrollView__Press(scrollView, 0, 0);
          return;
        }
        if ( v7 > (float)-y
          || (v18.fields.x = 0.0,
              v18.fields.y = 1.0,
              v18.fields.z = 0.0,
              UIScrollView__IsLimitOverPosition2_49193688(scrollView, v18, 0)) )
        {
          if ( v7 < y )
            return;
          v14 = 0.0;
          v15 = -1.0;
LABEL_37:
          v16 = 0;
          if ( UIScrollView__IsLimitOverPosition2_49193688(scrollView, *(UnityEngine_Vector3_o *)&v14, 0) )
            return;
          v17 = 0.5;
LABEL_43:
          UIScrollView__Scroll(scrollView, v17, 0);
          return;
        }
        goto LABEL_42;
      }
    }
  }
  if ( !UIScrollView__get_canMoveHorizontally(scrollView, 0) )
    goto LABEL_26;
  horizontalScrollBar = (UnityEngine_Object_o *)scrollView->fields.horizontalScrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(horizontalScrollBar, 0, 0) )
  {
LABEL_26:
    if ( IsLimitOverPosition2 )
      return;
    goto LABEL_27;
  }
  this = (ServantOperationUIDragDropListViewItem_o *)scrollView->fields.horizontalScrollBar;
  if ( !this )
LABEL_44:
    sub_1C32E7C(this);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)this, 0) <= 0.0 )
    goto LABEL_26;
  if ( !v10->fields.isLimit )
  {
    if ( v8 > (float)-x
      || (v19.fields.x = 1.0,
          v19.fields.y = 0.0,
          v19.fields.z = 0.0,
          UIScrollView__IsLimitOverPosition2_49193688(scrollView, v19, 0)) )
    {
      if ( v8 < x )
        return;
      v14 = -1.0;
      v15 = 0.0;
      goto LABEL_37;
    }
LABEL_42:
    v17 = -0.5;
    goto LABEL_43;
  }
  if ( IsLimitOverPosition2 )
    goto LABEL_25;
  if ( v8 > (float)-x && v8 < x )
    goto LABEL_27;
}


void ServantOperationUIDragDropListViewItem__Update(
        ServantOperationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  ServantOperationUIDragDropListViewItem_o *v2; // x19
  UnityEngine_Object_o *mDragScrollView; // x20
  UnityEngine_Camera_o *main; // x0
  struct UIDragScrollView_o *v5; // x8
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Object_o *monitor; // x21
  UnityEngine_Camera_o *v8; // x22
  UICamera_c *v9; // x8
  struct UICamera_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_BoxCollider_o *mCollider; // x22
  __int64 naturalAligment; // x9
  float v16; // s8
  float v17; // s9
  float v18; // s10
  UnityEngine_Vector2_o ViewSize; // kr00_8
  const MethodInfo *v20; // x2
  __int64 v21; // x0
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s3.4,4:s4.4,8:s5.4

  v2 = this;
  if ( (byte_4C33B07 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_BoxCollider_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    this = (ServantOperationUIDragDropListViewItem_o *)sub_1C32C20(&UICamera_TypeInfo);
    byte_4C33B07 = 1;
  }
  if ( v2->fields.isDrag )
  {
    ServantOperationUIDragDropListViewItem__SetManagerDragMove(this, method);
    mDragScrollView = (UnityEngine_Object_o *)v2->fields.mDragScrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    main = (UnityEngine_Camera_o *)UnityEngine_Object__op_Equality(mDragScrollView, 0, 0);
    if ( ((unsigned __int8)main & 1) == 0 )
    {
      v5 = v2->fields.mDragScrollView;
      if ( !v5 )
        goto LABEL_25;
      scrollView = (UnityEngine_Object_o *)v5->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      main = (UnityEngine_Camera_o *)UnityEngine_Object__op_Equality(scrollView, 0, 0);
      if ( ((unsigned __int8)main & 1) == 0 )
      {
        if ( scrollView )
        {
          monitor = (UnityEngine_Object_o *)scrollView[6].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(monitor, 0, 0) )
            return;
          main = UnityEngine_Camera__get_main(0);
          v8 = main;
          v9 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v9 = UICamera_TypeInfo;
          }
          if ( v8 )
          {
            static_fields = v9->static_fields;
            v22.fields.z = 0.0;
            v22.fields.x = static_fields->lastTouchPosition.fields.x;
            v22.fields.y = static_fields->lastTouchPosition.fields.y;
            v23 = UnityEngine_Camera__ScreenToWorldPoint_71029932(v8, v22, 0);
            if ( monitor )
            {
              x = v23.fields.x;
              y = v23.fields.y;
              z = v23.fields.z;
              main = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)monitor, 0);
              if ( main )
              {
                v24.fields.x = x;
                v24.fields.y = y;
                v24.fields.z = z;
                v25 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)main, v24, 0);
                mCollider = (UnityEngine_BoxCollider_o *)v2->fields.mCollider;
                if ( mCollider )
                {
                  naturalAligment = UnityEngine_BoxCollider_TypeInfo->_2.naturalAligment;
                  if ( mCollider->klass->_2.naturalAligment >= (unsigned int)naturalAligment
                    && (UnityEngine_BoxCollider_c *)mCollider->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_BoxCollider_TypeInfo )
                  {
                    v16 = v25.fields.z;
                    v17 = v25.fields.x - *((float *)&monitor[13].fields.m_CachedPtr + 1);
                    v18 = v25.fields.y - *(float *)&monitor[14].klass;
                    ViewSize = UIPanel__GetViewSize((UIPanel_o *)monitor, 0);
                    size = UnityEngine_BoxCollider__get_size(mCollider, 0);
                    v27.fields.x = (float)(ViewSize.fields.x - size.fields.x) * 0.5;
                    v27.fields.y = (float)(ViewSize.fields.y - size.fields.y) * 0.5;
                    v27.fields.z = (float)(0.0 - size.fields.z) * 0.5;
                    size.fields.x = v17;
                    size.fields.y = v18;
                    size.fields.z = v16;
                    ServantOperationUIDragDropListViewItem__SetScrollView(
                      v2,
                      (UIScrollView_o *)scrollView,
                      size,
                      v27,
                      v20);
                    return;
                  }
                  sub_1C3313C(v2->fields.mCollider);
                }
                UIPanel__GetViewSize((UIPanel_o *)monitor, 0);
                sub_1C32E7C(v21);
              }
            }
          }
        }
LABEL_25:
        sub_1C32E7C(main);
      }
    }
  }
}