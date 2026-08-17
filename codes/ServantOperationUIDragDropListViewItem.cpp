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
  if ( (byte_596C711 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C711 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
  if ( !UnityEngine_Object__op_Equality(dragObject, 0, 0) )
  {
    transform = this->fields.dragObject;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0)) == 0 )
    {
      sub_2213CDC(transform, v9);
    }
    v11 = (UnityEngine_Transform_o *)transform;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    localPosition.fields.y = y + localPosition.fields.y;
    localPosition.fields.z = z + localPosition.fields.z;
    localPosition.fields.x = x + localPosition.fields.x;
    UnityEngine_Transform__set_localPosition(v11, localPosition, 0);
  }
}


void ServantOperationUIDragDropListViewItem__OnDragDropRelease(
        ServantOperationUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantOperationUIDragDropListViewItem_o *v4; // x19
  ServantOperationListViewManager_o **mListViewObject; // x20
  __int64 naturalAligment; // x9
  ServantOperationListViewManager_o *v7; // x21
  __int64 v8; // x9
  const MethodInfo *v9; // x3
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x2
  ServantOperationUIDragDropListViewItem_o *v17; // x0
  const MethodInfo *v18; // x1

  v4 = this;
  if ( (byte_596C715 & 1) == 0 )
  {
    sub_2213A60(&ServantOperationListViewManager_TypeInfo);
    this = (ServantOperationUIDragDropListViewItem_o *)sub_2213A60(&ServantOperationListViewObject_TypeInfo);
    byte_596C715 = 1;
  }
  mListViewObject = (ServantOperationListViewManager_o **)v4->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_2213CDC(this, surface);
  surface = (UnityEngine_GameObject_o *)ServantOperationListViewObject_TypeInfo;
  naturalAligment = ServantOperationListViewObject_TypeInfo->_2.naturalAligment;
  if ( LOBYTE((*mListViewObject)->fields.oldScrollPosition.fields.x) < (unsigned int)naturalAligment
    || *((ServantOperationListViewObject_c **)(*mListViewObject)->fields.itemSortList + naturalAligment - 1) != ServantOperationListViewObject_TypeInfo )
  {
    sub_221405C(v4->fields.mListViewObject, ServantOperationListViewObject_TypeInfo, method, v3);
    goto LABEL_11;
  }
  v7 = mListViewObject[5];
  if ( !v7 )
    goto LABEL_11;
  v8 = ServantOperationListViewManager_TypeInfo->_2.naturalAligment;
  if ( v7->klass->_2.naturalAligment >= (unsigned int)v8
    && (ServantOperationListViewManager_c *)v7->klass->_2.typeHierarchy[v8 - 1] == ServantOperationListViewManager_TypeInfo )
  {
    ServantOperationListViewManager__SetDragEnd(mListViewObject[5], 0);
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v4, 0, 0);
    ServantOperationListViewObject__Init((ServantOperationListViewObject_o *)mListViewObject, 3, 0, v9);
    ((void (__fastcall *)(ServantOperationListViewManager_o *, const MethodInfo *))v7->klass->vtable._9_ItemDragEnd.methodPtr)(
      v7,
      v7->klass->vtable._9_ItemDragEnd.method);
    v4->fields.isDrag = 0;
    v4->fields.dragSurface = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.dragSurface, 0, v10, v11, v12, v13, v14, v15);
    ServantOperationUIDragDropListViewItem__SetDragScrollViewPress(v4, 0, v16);
  }
  else
  {
    sub_221405C(mListViewObject[5], ServantOperationListViewManager_TypeInfo, method, v3);
    ServantOperationUIDragDropListViewItem___ctor(v17, v18);
  }
}


void ServantOperationUIDragDropListViewItem__OnDragDropStart(
        ServantOperationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantOperationListViewManager_o *manager; // x20
  __int64 v5; // x1
  UnityEngine_Collider_o *mCollider; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  struct ListViewObject_o *mListViewObject; // x21
  const MethodInfo *v10; // x1
  __int64 naturalAligment; // x9
  __int64 v12; // x9
  ListViewItem_o *Item; // x22
  const MethodInfo *v14; // x1
  int32_t sortIndex; // w21
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  UICamera_c *v23; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  struct UnityEngine_GameObject_o *dragged; // x1
  ServantOperationUIDragDropListViewItem_o *v26; // x0
  bool v27; // w1
  const MethodInfo *v28; // x2

  manager = (ServantOperationListViewManager_o *)&byte_596C000;
  if ( (byte_596C70F & 1) == 0 )
  {
    sub_2213A60(&ServantOperationListViewManager_TypeInfo);
    sub_2213A60(&ServantOperationListViewObject_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_596C70F = 1;
  }
  ServantOperationUIDragDropListViewItem__SetDragScrollViewPress(this, 0, v2);
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0);
  mCollider = this->fields.mCollider;
  if ( !mCollider
    || (UnityEngine_Collider__set_enabled(mCollider, 1, 0), (mListViewObject = this->fields.mListViewObject) == 0) )
  {
LABEL_18:
    sub_2213CDC(mCollider, v5);
  }
  v10 = (const MethodInfo *)ServantOperationListViewObject_TypeInfo;
  naturalAligment = ServantOperationListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ServantOperationListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != ServantOperationListViewObject_TypeInfo )
  {
    sub_221405C(this->fields.mListViewObject, ServantOperationListViewObject_TypeInfo, v7, v8);
LABEL_20:
    v26 = (ServantOperationUIDragDropListViewItem_o *)sub_221405C(manager, v10, v7, v8);
    ServantOperationUIDragDropListViewItem__SetDragScrollViewPress(v26, v27, v28);
    return;
  }
  manager = (ServantOperationListViewManager_o *)mListViewObject->fields.manager;
  if ( manager )
  {
    v10 = (const MethodInfo *)ServantOperationListViewManager_TypeInfo;
    v12 = ServantOperationListViewManager_TypeInfo->_2.naturalAligment;
    if ( manager->klass->_2.naturalAligment < (unsigned int)v12
      || (ServantOperationListViewManager_c *)manager->klass->_2.typeHierarchy[v12 - 1] != ServantOperationListViewManager_TypeInfo )
    {
      goto LABEL_20;
    }
  }
  Item = (ListViewItem_o *)ServantOperationListViewObject__GetItem(
                             (ServantOperationListViewObject_o *)this->fields.mListViewObject,
                             v10);
  ServantOperationListViewObject__OnDragDropStart((ServantOperationListViewObject_o *)mListViewObject, v14);
  if ( !Item )
    goto LABEL_18;
  sortIndex = Item->fields.sortIndex;
  mCollider = (UnityEngine_Collider_o *)ListViewItem__get_IsSelect(Item, 0);
  if ( !manager )
    goto LABEL_18;
  ServantOperationListViewManager__SetDragStart(manager, sortIndex, ((unsigned __int8)mCollider & 1) == 0, 0);
  ((void (__fastcall *)(ServantOperationListViewManager_o *, const MethodInfo *))manager->klass->vtable._8_ItemDragStart.methodPtr)(
    manager,
    manager->klass->vtable._8_ItemDragStart.method);
  v23 = UICamera_TypeInfo;
  *(_WORD *)&this->fields.isDrag = 1;
  if ( !*(&v23->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v23, v16, v17);
    v23 = UICamera_TypeInfo;
  }
  currentTouch = v23->static_fields->currentTouch;
  if ( currentTouch )
    dragged = currentTouch->fields.dragged;
  else
    dragged = 0;
  this->fields.dragSurface = dragged;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dragSurface,
    (int32_t)dragged,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


// local variable allocation has failed, the output may be wrong!
void ServantOperationUIDragDropListViewItem__SetDragScrollViewPress(
        ServantOperationUIDragDropListViewItem_o *this,
        bool isPressed,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mDragScrollView; // x21
  UIScrollView_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct UIDragScrollView_o *v9; // x8
  UnityEngine_Object_o *scrollView; // x21
  struct UIDragScrollView_o *v11; // x8

  if ( (byte_596C710 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C710 = 1;
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isPressed, method);
  v6 = (UIScrollView_o *)UnityEngine_Object__op_Equality(mDragScrollView, 0, 0);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    v9 = this->fields.mDragScrollView;
    if ( v9 )
    {
      scrollView = (UnityEngine_Object_o *)v9->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      v6 = (UIScrollView_o *)UnityEngine_Object__op_Equality(scrollView, 0, 0);
      if ( ((unsigned __int8)v6 & 1) != 0 )
        return;
      v11 = this->fields.mDragScrollView;
      if ( v11 )
      {
        v6 = v11->fields.scrollView;
        if ( v6 )
        {
          UIScrollView__Press(v6, isPressed, 0);
          return;
        }
      }
    }
    sub_2213CDC(v6, v7);
  }
}


void ServantOperationUIDragDropListViewItem__SetManagerDragMove(
        ServantOperationUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  UnityEngine_Camera_o *main; // x0
  const MethodInfo *v3; // x1
  __int64 v4; // x2
  UnityEngine_Camera_o *v5; // x19
  struct UICamera_StaticFields *static_fields; // x8
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *Component_object; // x19
  __int64 v12; // x2
  __int64 v13; // x3
  ServantOperationListViewManager_o *m_CachedPtr; // x20
  __int64 naturalAligment; // x9
  UnityEngine_Ray_o v16; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Ray_o v17; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_RaycastHit_o v18; // [xsp+30h] [xbp-50h] BYREF
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596C713 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_ServantOperationListViewObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Physics_TypeInfo);
    sub_2213A60(&ServantOperationListViewManager_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_596C713 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  main = UnityEngine_Camera__get_main(0);
  v5 = main;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v3, v4);
  if ( !v5 )
    goto LABEL_22;
  v19.fields.z = 0.0;
  static_fields = UICamera_TypeInfo->static_fields;
  v19.fields.x = static_fields->lastTouchPosition.fields.x;
  v19.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_83198808(&v17, v5, v19, 0);
  if ( !*(&UnityEngine_Physics_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo, v7, v8);
  v16 = v17;
  if ( UnityEngine_Physics__Raycast_83886968(&v16, &v18, 0) )
  {
    main = (UnityEngine_Camera_o *)UnityEngine_RaycastHit__get_collider(&v18, 0);
    if ( !main )
      goto LABEL_22;
    Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)main,
                                                 (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_ServantOperationListViewObject___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    main = (UnityEngine_Camera_o *)UnityEngine_Object__op_Equality(Component_object, 0, 0);
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
          main = (UnityEngine_Camera_o *)ServantOperationListViewObject__GetItem(
                                           (ServantOperationListViewObject_o *)Component_object,
                                           (const MethodInfo *)ServantOperationListViewManager_TypeInfo);
          if ( main )
          {
            ServantOperationListViewManager__SetDragMove(m_CachedPtr, main->fields.m_NonSerializedVersion, 0);
            return;
          }
LABEL_22:
          sub_2213CDC(main, v3);
        }
        sub_221405C(Component_object[1].fields.m_CachedPtr, ServantOperationListViewManager_TypeInfo, v12, v13);
      }
      main = (UnityEngine_Camera_o *)ServantOperationListViewObject__GetItem(
                                       (ServantOperationListViewObject_o *)Component_object,
                                       v3);
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
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *verticalScrollBar; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *horizontalScrollBar; // x22
  float v18; // s0 OVERLAPPED
  int v19; // s2
  float v20; // s1
  float v21; // s0
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  y = range.fields.y;
  x = range.fields.x;
  v7 = localPos.fields.y;
  v8 = localPos.fields.x;
  v10 = this;
  if ( (byte_596C714 & 1) == 0 )
  {
    this = (ServantOperationUIDragDropListViewItem_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C714 = 1;
  }
  if ( !scrollView )
    goto LABEL_44;
  IsLimitOverPosition2 = UIScrollView__IsLimitOverPosition2(scrollView, 0);
  if ( IsLimitOverPosition2 )
    v10->fields.isLimit = 1;
  if ( UIScrollView__get_canMoveVertically(scrollView, 0) )
  {
    verticalScrollBar = (UnityEngine_Object_o *)scrollView->fields.verticalScrollBar;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
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
          || (v22.fields.x = 0.0,
              v22.fields.z = 0.0,
              v22.fields.y = 1.0,
              UIScrollView__IsLimitOverPosition2_56300764(scrollView, v22, 0)) )
        {
          if ( v7 < y )
            return;
          v18 = 0.0;
          v19 = 0;
          v20 = -1.0;
LABEL_37:
          if ( UIScrollView__IsLimitOverPosition2_56300764(scrollView, *(UnityEngine_Vector3_o *)&v18, 0) )
            return;
          v21 = 0.5;
LABEL_43:
          UIScrollView__Scroll(scrollView, v21, 0);
          return;
        }
        goto LABEL_42;
      }
    }
  }
  if ( !UIScrollView__get_canMoveHorizontally(scrollView, 0) )
    goto LABEL_26;
  horizontalScrollBar = (UnityEngine_Object_o *)scrollView->fields.horizontalScrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
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
    sub_2213CDC(this, scrollView);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)this, 0) <= 0.0 )
    goto LABEL_26;
  if ( !v10->fields.isLimit )
  {
    if ( v8 > (float)-x
      || (v23.fields.y = 0.0,
          v23.fields.z = 0.0,
          v23.fields.x = 1.0,
          UIScrollView__IsLimitOverPosition2_56300764(scrollView, v23, 0)) )
    {
      if ( v8 < x )
        return;
      v20 = 0.0;
      v19 = 0;
      v18 = -1.0;
      goto LABEL_37;
    }
LABEL_42:
    v21 = -0.5;
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
  __int64 v2; // x2
  UnityEngine_Object_o *dragSurface; // x20
  _BOOL8 IsPressed; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *mDragScrollView; // x20
  UnityEngine_Camera_o *main; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct UIDragScrollView_o *v15; // x8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v17; // x2
  UnityEngine_Object_o *monitor; // x21
  __int64 v19; // x2
  UnityEngine_Camera_o *v20; // x22
  struct UICamera_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v25; // x2
  __int64 v26; // x3
  struct UnityEngine_Collider_o *mCollider; // x22
  __int64 naturalAligment; // x9
  float v29; // s8
  float v30; // s9
  float v31; // s10
  UnityEngine_Vector2_o ViewSize; // kr00_8
  const MethodInfo *v33; // x2
  __int64 v34; // x0
  __int64 v35; // x1
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_596C712 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_BoxCollider_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_596C712 = 1;
  }
  if ( this->fields.isDrag )
  {
    dragSurface = (UnityEngine_Object_o *)this->fields.dragSurface;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    IsPressed = UnityEngine_Object__op_Inequality(dragSurface, 0, 0);
    if ( IsPressed )
    {
      v8 = this->fields.dragSurface;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v6, v7);
      IsPressed = UICamera__IsPressed(v8, 0);
      if ( !IsPressed )
      {
        ((void (__fastcall *)(ServantOperationUIDragDropListViewItem_o *, struct UnityEngine_GameObject_o *, const MethodInfo *))this->klass->vtable._8_OnDragDropRelease.methodPtr)(
          this,
          this->fields.dragSurface,
          this->klass->vtable._8_OnDragDropRelease.method);
        return;
      }
    }
    ServantOperationUIDragDropListViewItem__SetManagerDragMove(
      (ServantOperationUIDragDropListViewItem_o *)IsPressed,
      v6);
    mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    main = (UnityEngine_Camera_o *)UnityEngine_Object__op_Equality(mDragScrollView, 0, 0);
    if ( ((unsigned __int8)main & 1) == 0 )
    {
      v15 = this->fields.mDragScrollView;
      if ( !v15 )
        goto LABEL_32;
      scrollView = (UnityEngine_Object_o *)v15->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
      main = (UnityEngine_Camera_o *)UnityEngine_Object__op_Equality(scrollView, 0, 0);
      if ( ((unsigned __int8)main & 1) == 0 )
      {
        if ( scrollView )
        {
          monitor = (UnityEngine_Object_o *)scrollView[6].monitor;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v17);
          if ( UnityEngine_Object__op_Equality(monitor, 0, 0) )
            return;
          main = UnityEngine_Camera__get_main(0);
          v20 = main;
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v13, v19);
          if ( v20 )
          {
            v36.fields.z = 0.0;
            static_fields = UICamera_TypeInfo->static_fields;
            v36.fields.x = static_fields->lastTouchPosition.fields.x;
            v36.fields.y = static_fields->lastTouchPosition.fields.y;
            v37 = UnityEngine_Camera__ScreenToWorldPoint_83198228(v20, v36, 0);
            if ( monitor )
            {
              x = v37.fields.x;
              y = v37.fields.y;
              z = v37.fields.z;
              main = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)monitor, 0);
              if ( main )
              {
                v38.fields.x = x;
                v38.fields.y = y;
                v38.fields.z = z;
                v39 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)main, v38, 0);
                mCollider = this->fields.mCollider;
                if ( mCollider )
                {
                  naturalAligment = UnityEngine_BoxCollider_TypeInfo->_2.naturalAligment;
                  if ( mCollider->klass->_2.naturalAligment >= (unsigned int)naturalAligment
                    && (UnityEngine_BoxCollider_c *)mCollider->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_BoxCollider_TypeInfo )
                  {
                    v29 = v39.fields.z;
                    v30 = v39.fields.x - *((float *)&monitor[13].fields.m_CachedPtr + 1);
                    v31 = v39.fields.y - *(float *)&monitor[14].klass;
                    ViewSize = UIPanel__GetViewSize((UIPanel_o *)monitor, 0);
                    size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)mCollider, 0);
                    v41.fields.x = (float)(ViewSize.fields.x - size.fields.x) * 0.5;
                    size.fields.x = v30;
                    v41.fields.y = (float)(ViewSize.fields.y - size.fields.y) * 0.5;
                    size.fields.y = v31;
                    v41.fields.z = (float)(0.0 - size.fields.z) * 0.5;
                    size.fields.z = v29;
                    ServantOperationUIDragDropListViewItem__SetScrollView(
                      this,
                      (UIScrollView_o *)scrollView,
                      size,
                      v41,
                      v33);
                    return;
                  }
                  sub_221405C(this->fields.mCollider, UnityEngine_BoxCollider_TypeInfo, v25, v26);
                }
                UIPanel__GetViewSize((UIPanel_o *)monitor, 0);
                sub_2213CDC(v34, v35);
              }
            }
          }
        }
LABEL_32:
        sub_2213CDC(main, v13);
      }
    }
  }
}