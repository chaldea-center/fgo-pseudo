void SvtEqCombineUIDragDropListViewItem___ctor(SvtEqCombineUIDragDropListViewItem_o *this, const MethodInfo *method)
{
  UIDragDropListViewItem___ctor((UIDragDropListViewItem_o *)this, 0);
}


void SvtEqCombineUIDragDropListViewItem__DragEnd(SvtEqCombineUIDragDropListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  struct ListViewManager_o *manager; // x21
  SvtEqCombineUIDragDropListViewItem_o *v5; // x19
  SvtEqCombineListViewObject_o *mListViewObject; // x20
  __int64 naturalAligment; // x9
  SvtEqCombineListViewManager_c *v8; // x1
  __int64 v9; // x9
  const MethodInfo *v10; // x2
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Object_o *mDragScrollView; // x20
  __int64 v20; // x2
  struct UIDragScrollView_o *v21; // x8
  UnityEngine_Object_o *scrollView; // x19
  const MethodInfo *v23; // x2

  v5 = this;
  if ( (byte_5932323 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewManager_TypeInfo);
    this = (SvtEqCombineUIDragDropListViewItem_o *)sub_21FFC50(&SvtEqCombineListViewObject_TypeInfo);
    byte_5932323 = 1;
  }
  mListViewObject = (SvtEqCombineListViewObject_o *)v5->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_22;
  naturalAligment = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_220024C(v5->fields.mListViewObject, SvtEqCombineListViewObject_TypeInfo, v2, v3);
    goto LABEL_20;
  }
  manager = mListViewObject->fields.manager;
  if ( !manager )
  {
LABEL_21:
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v5, 0, 0);
    SvtEqCombineListViewObject__Init_37969588(mListViewObject, 4, v23);
    goto LABEL_22;
  }
  v8 = SvtEqCombineListViewManager_TypeInfo;
  v9 = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)v9
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v9 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
LABEL_20:
    sub_220024C(manager, v8, v2, v3);
    goto LABEL_21;
  }
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v5, 0, 0);
  SvtEqCombineListViewObject__Init_37969588(mListViewObject, 4, v10);
  ((void (__fastcall *)(struct ListViewManager_o *, const MethodInfo *))manager->klass->vtable._9_ItemDragEnd.methodPtr)(
    manager,
    manager->klass->vtable._9_ItemDragEnd.method);
  v5->fields.dragSurface = 0;
  v5->fields.isDrag = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v5->fields.dragSurface, 0, v11, v12, v13, v14, v15, v16);
  mDragScrollView = (UnityEngine_Object_o *)v5->fields.mDragScrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
  this = (SvtEqCombineUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v21 = v5->fields.mDragScrollView;
    if ( !v21 )
      goto LABEL_22;
    scrollView = (UnityEngine_Object_o *)v21->fields.scrollView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v20);
    this = (SvtEqCombineUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( scrollView )
      {
        UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0);
        return;
      }
LABEL_22:
      sub_21FFECC(this, method);
    }
  }
}


void SvtEqCombineUIDragDropListViewItem__OnDragDropMove(
        SvtEqCombineUIDragDropListViewItem_o *this,
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
  if ( (byte_5932320 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932320 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
  if ( UnityEngine_Object__op_Inequality(dragObject, 0, 0) )
  {
    transform = this->fields.dragObject;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0)) == 0 )
    {
      sub_21FFECC(transform, v9);
    }
    v11 = (UnityEngine_Transform_o *)transform;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    localPosition.fields.y = y + localPosition.fields.y;
    localPosition.fields.z = z + localPosition.fields.z;
    localPosition.fields.x = x + localPosition.fields.x;
    UnityEngine_Transform__set_localPosition(v11, localPosition, 0);
  }
}


void SvtEqCombineUIDragDropListViewItem__OnDragDropRelease(
        SvtEqCombineUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct ListViewObject_o *mListViewObject; // x0
  __int64 naturalAligment; // x9
  __int64 v7; // x9
  const MethodInfo *v8; // x1

  if ( (byte_5932322 & 1) == 0 )
  {
    sub_21FFC50(&SvtEqCombineListViewManager_TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewObject_TypeInfo);
    byte_5932322 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_21FFECC(mListViewObject, surface);
  surface = (UnityEngine_GameObject_o *)SvtEqCombineListViewObject_TypeInfo;
  naturalAligment = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    goto LABEL_10;
  }
  mListViewObject = (struct ListViewObject_o *)mListViewObject->fields.manager;
  if ( !mListViewObject )
    goto LABEL_11;
  surface = (UnityEngine_GameObject_o *)SvtEqCombineListViewManager_TypeInfo;
  v7 = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)v7
    || (SvtEqCombineListViewManager_c *)mListViewObject->klass->_2.typeHierarchy[v7 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
LABEL_10:
    mListViewObject = (struct ListViewObject_o *)sub_220024C(mListViewObject, surface, method, v3);
    goto LABEL_11;
  }
  SvtEqCombineListViewManager__SetDragEnd(
    (SvtEqCombineListViewManager_o *)mListViewObject,
    (const MethodInfo *)SvtEqCombineListViewManager_TypeInfo);
  SvtEqCombineUIDragDropListViewItem__DragEnd(this, v8);
}


void SvtEqCombineUIDragDropListViewItem__OnDragDropStart(
        SvtEqCombineUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mDragScrollView; // x20
  UnityEngine_Collider_o *mCollider; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct UIDragScrollView_o *v8; // x8
  __int64 v9; // x2
  __int64 v10; // x3
  struct ListViewObject_o *mListViewObject; // x21
  const MethodInfo *v12; // x1
  __int64 naturalAligment; // x9
  __int64 v14; // x9
  ListViewItem_o *Item; // x22
  const MethodInfo *v16; // x1
  int32_t sortIndex; // w21
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  UICamera_c *v26; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  struct UnityEngine_GameObject_o *dragged; // x1
  SvtEqCombineUIDragDropListViewItem_o *v29; // x0
  const MethodInfo *v30; // x1
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593231F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewManager_TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewObject_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    byte_593231F = 1;
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  mCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0);
  if ( ((unsigned __int8)mCollider & 1) != 0 )
  {
    v8 = this->fields.mDragScrollView;
    if ( !v8 )
      goto LABEL_27;
    mDragScrollView = (UnityEngine_Object_o *)v8->fields.scrollView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    mCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0);
    if ( ((unsigned __int8)mCollider & 1) != 0 )
    {
      if ( !mDragScrollView )
        goto LABEL_27;
      UIScrollView__Press((UIScrollView_o *)mDragScrollView, 0, 0);
    }
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0);
  mCollider = this->fields.mCollider;
  if ( !mCollider
    || (UnityEngine_Collider__set_enabled(mCollider, 1, 0), (mListViewObject = this->fields.mListViewObject) == 0) )
  {
LABEL_27:
    sub_21FFECC(mCollider, v6);
  }
  v12 = (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo;
  naturalAligment = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_220024C(this->fields.mListViewObject, SvtEqCombineListViewObject_TypeInfo, v9, v10);
LABEL_29:
    v29 = (SvtEqCombineUIDragDropListViewItem_o *)sub_220024C(mDragScrollView, v12, v9, v10);
    SvtEqCombineUIDragDropListViewItem__OnDragDropMove(v29, v31, v30);
    return;
  }
  mDragScrollView = (UnityEngine_Object_o *)mListViewObject->fields.manager;
  if ( mDragScrollView )
  {
    v12 = (const MethodInfo *)SvtEqCombineListViewManager_TypeInfo;
    v14 = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
    if ( mDragScrollView->klass->_2.naturalAligment < (unsigned int)v14
      || (SvtEqCombineListViewManager_c *)mDragScrollView->klass->_2.typeHierarchy[v14 - 1] != SvtEqCombineListViewManager_TypeInfo )
    {
      goto LABEL_29;
    }
  }
  Item = (ListViewItem_o *)SvtEqCombineListViewObject__GetItem(
                             (SvtEqCombineListViewObject_o *)this->fields.mListViewObject,
                             v12);
  SvtEqCombineListViewObject__OnDragDropStart((SvtEqCombineListViewObject_o *)mListViewObject, v16);
  if ( !Item )
    goto LABEL_27;
  sortIndex = Item->fields.sortIndex;
  mCollider = (UnityEngine_Collider_o *)ListViewItem__get_IsSelect(Item, 0);
  if ( !mDragScrollView )
    goto LABEL_27;
  SvtEqCombineListViewManager__SetDragStart(
    (SvtEqCombineListViewManager_o *)mDragScrollView,
    sortIndex,
    ((unsigned __int8)mCollider & 1) == 0,
    v18);
  ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *))mDragScrollView->klass[1]._1.element_class)(
    mDragScrollView,
    mDragScrollView->klass[1]._1.castClass);
  v26 = UICamera_TypeInfo;
  *(_WORD *)&this->fields.isDrag = 1;
  if ( !*(&v26->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v26, v19, v20);
    v26 = UICamera_TypeInfo;
  }
  currentTouch = v26->static_fields->currentTouch;
  if ( currentTouch )
    dragged = currentTouch->fields.dragged;
  else
    dragged = 0;
  this->fields.dragSurface = dragged;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dragSurface,
    (int32_t)dragged,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineUIDragDropListViewItem__Update(SvtEqCombineUIDragDropListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isDrag; // w8
  UnityEngine_Object_o *dragSurface; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *v8; // x20
  __int64 main; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x2
  UnityEngine_Camera_o *v12; // x20
  struct UICamera_StaticFields *static_fields; // x8
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Object_o *Component_object; // x20
  __int64 v20; // x3
  SvtEqCombineListViewManager_o *m_CachedPtr; // x21
  __int64 naturalAligment; // x9
  const MethodInfo *v23; // x3
  UnityEngine_Object_o *mDragScrollView; // x20
  __int64 v25; // x2
  struct UIDragScrollView_o *v26; // x8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v28; // x2
  void *monitor; // x21
  __int64 v30; // x2
  UnityEngine_Camera_o *v31; // x22
  struct UICamera_StaticFields *v32; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  float v36; // s14
  float v37; // s15
  float v38; // s8
  float v39; // s11
  UnityEngine_Vector2_o ViewSize; // kr00_8
  float v41; // s10
  float v42; // s13
  bool IsLimitOverPosition2; // w21
  __int64 v44; // x1
  __int64 v45; // x2
  UnityEngine_Object_o *v46; // x22
  float v47; // s0
  float v48; // s1
  float v49; // s0 OVERLAPPED
  int v50; // s2
  float v51; // s1
  __int64 v52; // x1
  __int64 v53; // x2
  UnityEngine_Object_o *v54; // x22
  float v55; // s0
  float v56; // s0 OVERLAPPED
  int v57; // s2
  float v58; // s1
  UnityEngine_Ray_o v59; // [xsp+0h] [xbp-E0h] BYREF
  UnityEngine_Ray_o v60; // [xsp+18h] [xbp-C8h] BYREF
  UnityEngine_RaycastHit_o v61; // [xsp+30h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5932321 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_BoxCollider_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_SvtEqCombineListViewObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UnityEngine_Physics_TypeInfo);
    sub_21FFC50(&SvtEqCombineListViewManager_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    byte_5932321 = 1;
  }
  isDrag = this->fields.isDrag;
  memset(&v61, 0, sizeof(v61));
  if ( !isDrag )
    return;
  dragSurface = (UnityEngine_Object_o *)this->fields.dragSurface;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(dragSurface, 0, 0) )
  {
    v8 = this->fields.dragSurface;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v6, v7);
    if ( !UICamera__IsPressed(v8, 0) )
    {
      ((void (__fastcall *)(SvtEqCombineUIDragDropListViewItem_o *, struct UnityEngine_GameObject_o *, const MethodInfo *))this->klass->vtable._8_OnDragDropRelease.methodPtr)(
        this,
        this->fields.dragSurface,
        this->klass->vtable._8_OnDragDropRelease.method);
      return;
    }
  }
  main = (__int64)UnityEngine_Camera__get_main(0);
  v12 = (UnityEngine_Camera_o *)main;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v10, v11);
  if ( !v12 )
    goto LABEL_84;
  v62.fields.z = 0.0;
  static_fields = UICamera_TypeInfo->static_fields;
  v62.fields.x = static_fields->lastTouchPosition.fields.x;
  v62.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_82985504(&v60, v12, v62, 0);
  if ( !*(&UnityEngine_Physics_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo, v14, v15);
  v59 = v60;
  if ( !UnityEngine_Physics__Raycast_83673664(&v59, &v61, 0) )
    goto LABEL_27;
  main = (__int64)UnityEngine_RaycastHit__get_collider(&v61, 0);
  if ( !main )
    goto LABEL_84;
  Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)main,
                                               (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_SvtEqCombineListViewObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
  main = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( (main & 1) == 0 )
    goto LABEL_27;
  if ( !Component_object )
    goto LABEL_84;
  m_CachedPtr = (SvtEqCombineListViewManager_o *)Component_object[1].fields.m_CachedPtr;
  if ( !m_CachedPtr )
  {
LABEL_83:
    main = (__int64)SvtEqCombineListViewObject__GetItem((SvtEqCombineListViewObject_o *)Component_object, v10);
    goto LABEL_84;
  }
  naturalAligment = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
  if ( m_CachedPtr->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewManager_c *)m_CachedPtr->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
    sub_220024C(Component_object[1].fields.m_CachedPtr, SvtEqCombineListViewManager_TypeInfo, v16, v20);
    goto LABEL_83;
  }
  main = (__int64)SvtEqCombineListViewObject__GetItem(
                    (SvtEqCombineListViewObject_o *)Component_object,
                    (const MethodInfo *)SvtEqCombineListViewManager_TypeInfo);
  if ( !main )
    goto LABEL_84;
  v16 = *(unsigned int *)(main + 24);
  if ( m_CachedPtr->fields.dragEndIndex != (_DWORD)v16 )
    SvtEqCombineListViewManager__SetDragSelectItem(m_CachedPtr, m_CachedPtr->fields.dragStartIndex, v16, v23);
LABEL_27:
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v16);
  main = UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0);
  if ( (main & 1) == 0 )
    return;
  v26 = this->fields.mDragScrollView;
  if ( !v26 )
    goto LABEL_84;
  scrollView = (UnityEngine_Object_o *)v26->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v25);
  main = UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( (main & 1) == 0 )
    return;
  if ( !scrollView )
    goto LABEL_84;
  monitor = scrollView[6].monitor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v28);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)monitor, 0, 0) )
    return;
  main = (__int64)UnityEngine_Camera__get_main(0);
  v31 = (UnityEngine_Camera_o *)main;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v10, v30);
  if ( !v31 )
    goto LABEL_84;
  v63.fields.z = 0.0;
  v32 = UICamera_TypeInfo->static_fields;
  v63.fields.x = v32->lastTouchPosition.fields.x;
  v63.fields.y = v32->lastTouchPosition.fields.y;
  v64 = UnityEngine_Camera__ScreenToWorldPoint_82984924(v31, v63, 0);
  if ( !monitor )
    goto LABEL_84;
  x = v64.fields.x;
  y = v64.fields.y;
  z = v64.fields.z;
  main = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)monitor, 0);
  if ( !main )
    goto LABEL_84;
  v65.fields.x = x;
  v65.fields.y = y;
  v65.fields.z = z;
  v66 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)main, v65, 0);
  v36 = *((float *)monitor + 83);
  v37 = *((float *)monitor + 84);
  v38 = v66.fields.x;
  v39 = v66.fields.y;
  ViewSize = UIPanel__GetViewSize((UIPanel_o *)monitor, 0);
  main = sub_1FEB9C0(this->fields.mCollider, UnityEngine_BoxCollider_TypeInfo);
  if ( !main )
    goto LABEL_84;
  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)main, 0);
  v41 = size.fields.x;
  v42 = size.fields.y;
  IsLimitOverPosition2 = UIScrollView__IsLimitOverPosition2((UIScrollView_o *)scrollView, 0);
  if ( IsLimitOverPosition2 )
    this->fields.isLimit = 1;
  if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)scrollView, 0) )
  {
    v46 = (UnityEngine_Object_o *)scrollView[2].fields.m_CachedPtr;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44, v45);
    if ( UnityEngine_Object__op_Inequality(v46, 0, 0) )
    {
      main = scrollView[2].fields.m_CachedPtr;
      if ( !main )
        goto LABEL_84;
      if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0) > 0.0 )
      {
        v47 = v39 - v37;
        v48 = (float)(ViewSize.fields.y - v42) * 0.5;
        if ( !this->fields.isLimit )
        {
          if ( v47 > (float)-v48 )
          {
            if ( v47 < v48 )
              return;
            v49 = 0.0;
            v50 = 0;
            v51 = -1.0;
LABEL_75:
            if ( !UIScrollView__IsLimitOverPosition2_56096108(
                    (UIScrollView_o *)scrollView,
                    *(UnityEngine_Vector3_o *)&v49,
                    0) )
            {
              v55 = 0.5;
LABEL_81:
              UIScrollView__Scroll((UIScrollView_o *)scrollView, v55, 0);
              return;
            }
            return;
          }
          v56 = 0.0;
          v57 = 0;
          v58 = 1.0;
          goto LABEL_79;
        }
        goto LABEL_64;
      }
    }
  }
  if ( !UIScrollView__get_canMoveHorizontally((UIScrollView_o *)scrollView, 0) )
    goto LABEL_66;
  v54 = (UnityEngine_Object_o *)scrollView[2].monitor;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52, v53);
  if ( !UnityEngine_Object__op_Inequality(v54, 0, 0) )
  {
LABEL_66:
    if ( IsLimitOverPosition2 )
      return;
    goto LABEL_67;
  }
  main = (__int64)scrollView[2].monitor;
  if ( !main )
LABEL_84:
    sub_21FFECC(main, v10);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0) <= 0.0 )
    goto LABEL_66;
  v47 = v38 - v36;
  v48 = (float)(ViewSize.fields.x - v41) * 0.5;
  if ( this->fields.isLimit )
  {
LABEL_64:
    if ( IsLimitOverPosition2 )
    {
      UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0);
      return;
    }
    if ( v47 <= (float)-v48 || v47 >= v48 )
      return;
LABEL_67:
    this->fields.isLimit = 0;
    return;
  }
  if ( v47 > (float)-v48 )
  {
    if ( v47 < v48 )
      return;
    v51 = 0.0;
    v50 = 0;
    v49 = -1.0;
    goto LABEL_75;
  }
  v58 = 0.0;
  v57 = 0;
  v56 = 1.0;
LABEL_79:
  if ( !UIScrollView__IsLimitOverPosition2_56096108((UIScrollView_o *)scrollView, *(UnityEngine_Vector3_o *)&v56, 0) )
  {
    v55 = -0.5;
    goto LABEL_81;
  }
}