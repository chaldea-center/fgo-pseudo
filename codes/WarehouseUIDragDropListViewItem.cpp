void WarehouseUIDragDropListViewItem___ctor(WarehouseUIDragDropListViewItem_o *this, const MethodInfo *method)
{
  UIDragDropListViewItem___ctor((UIDragDropListViewItem_o *)this, 0);
}


void WarehouseUIDragDropListViewItem__DragEnd(WarehouseUIDragDropListViewItem_o *this, const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x21
  WarehouseUIDragDropListViewItem_o *v3; // x19
  WarehouseListViewObject_o *mListViewObject; // x20
  __int64 naturalAligment; // x9
  __int64 v6; // x9
  const MethodInfo *v7; // x2
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v15; // x8
  UnityEngine_Object_o *scrollView; // x19
  const MethodInfo *v17; // x2

  v3 = this;
  if ( (byte_4E027D6 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&WarehouseListViewManager_TypeInfo);
    this = (WarehouseUIDragDropListViewItem_o *)sub_1CE6700(&WarehouseListViewObject_TypeInfo);
    byte_4E027D6 = 1;
  }
  mListViewObject = (WarehouseListViewObject_o *)v3->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_22;
  naturalAligment = WarehouseListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (WarehouseListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewObject_TypeInfo )
  {
    sub_1CE6CF4(v3->fields.mListViewObject);
    goto LABEL_20;
  }
  manager = mListViewObject->fields.manager;
  if ( !manager )
  {
LABEL_21:
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0, 0);
    WarehouseListViewObject__Init_39526344(mListViewObject, 3, v17);
    goto LABEL_22;
  }
  v6 = WarehouseListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)v6
    || (WarehouseListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] != WarehouseListViewManager_TypeInfo )
  {
LABEL_20:
    sub_1CE6CF4(manager);
    goto LABEL_21;
  }
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0, 0);
  WarehouseListViewObject__Init_39526344(mListViewObject, 3, v7);
  ((void (__fastcall *)(struct ListViewManager_o *, const MethodInfo *))manager->klass->vtable._9_ItemDragEnd.methodPtr)(
    manager,
    manager->klass->vtable._9_ItemDragEnd.method);
  v3->fields.dragSurface = 0;
  v3->fields.isDrag = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v3->fields.dragSurface, 0, v8, v9, v10, v11, v12, v13);
  mDragScrollView = (UnityEngine_Object_o *)v3->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (WarehouseUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v15 = v3->fields.mDragScrollView;
    if ( !v15 )
      goto LABEL_22;
    scrollView = (UnityEngine_Object_o *)v15->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (WarehouseUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( scrollView )
      {
        UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0);
        return;
      }
LABEL_22:
      sub_1CE6958(this, method);
    }
  }
}


void WarehouseUIDragDropListViewItem__OnDragDropMove(
        WarehouseUIDragDropListViewItem_o *this,
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
  if ( (byte_4E027D3 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E027D3 = 1;
  }
  dragObject = (UnityEngine_Object_o *)this->fields.dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragObject, 0, 0) )
  {
    transform = this->fields.dragObject;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0)) == 0 )
    {
      sub_1CE6958(transform, v8);
    }
    v10 = (UnityEngine_Transform_o *)transform;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    localPosition.fields.y = y + localPosition.fields.y;
    localPosition.fields.z = z + localPosition.fields.z;
    localPosition.fields.x = x + localPosition.fields.x;
    UnityEngine_Transform__set_localPosition(v10, localPosition, 0);
  }
}


void WarehouseUIDragDropListViewItem__OnDragDropRelease(
        WarehouseUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x0
  __int64 naturalAligment; // x9
  __int64 v6; // x9
  const MethodInfo *v7; // x1

  if ( (byte_4E027D5 & 1) == 0 )
  {
    sub_1CE6700(&WarehouseListViewManager_TypeInfo);
    sub_1CE6700(&WarehouseListViewObject_TypeInfo);
    byte_4E027D5 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_1CE6958(mListViewObject, surface);
  surface = (UnityEngine_GameObject_o *)WarehouseListViewObject_TypeInfo;
  naturalAligment = WarehouseListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (WarehouseListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewObject_TypeInfo )
  {
    goto LABEL_10;
  }
  mListViewObject = (struct ListViewObject_o *)mListViewObject->fields.manager;
  if ( !mListViewObject )
    goto LABEL_11;
  v6 = WarehouseListViewManager_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)v6
    || (WarehouseListViewManager_c *)mListViewObject->klass->_2.typeHierarchy[v6 - 1] != WarehouseListViewManager_TypeInfo )
  {
LABEL_10:
    sub_1CE6CF4(mListViewObject);
    goto LABEL_11;
  }
  WarehouseListViewManager__SetDragEnd((WarehouseListViewManager_o *)mListViewObject, 0);
  WarehouseUIDragDropListViewItem__DragEnd(this, v7);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseUIDragDropListViewItem__OnDragDropStart(
        WarehouseUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mDragScrollView; // x20
  UnityEngine_Collider_o *mCollider; // x0
  __int64 v5; // x1
  struct UIDragScrollView_o *v6; // x8
  struct ListViewObject_o *mListViewObject; // x21
  const MethodInfo *v8; // x1
  __int64 naturalAligment; // x9
  __int64 v10; // x9
  ListViewItem_o *Item; // x22
  const MethodInfo *v12; // x1
  int32_t sortIndex; // w21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UICamera_c *v20; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  struct UnityEngine_GameObject_o *dragged; // x1
  WarehouseUIDragDropListViewItem_o *v23; // x0
  const MethodInfo *v24; // x1
  long double v25; // q0 OVERLAPPED

  if ( (byte_4E027D2 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&UICamera_TypeInfo);
    sub_1CE6700(&WarehouseListViewManager_TypeInfo);
    sub_1CE6700(&WarehouseListViewObject_TypeInfo);
    byte_4E027D2 = 1;
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0);
  if ( ((unsigned __int8)mCollider & 1) != 0 )
  {
    v6 = this->fields.mDragScrollView;
    if ( !v6 )
      goto LABEL_27;
    mDragScrollView = (UnityEngine_Object_o *)v6->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1CE6958(mCollider, v5);
  }
  v8 = (const MethodInfo *)WarehouseListViewObject_TypeInfo;
  naturalAligment = WarehouseListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (WarehouseListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewObject_TypeInfo )
  {
    sub_1CE6CF4(this->fields.mListViewObject);
LABEL_29:
    v25 = sub_1CE6CF4(mDragScrollView);
    WarehouseUIDragDropListViewItem__OnDragDropMove(v23, *(UnityEngine_Vector3_o *)&v25, v24);
    return;
  }
  mDragScrollView = (UnityEngine_Object_o *)mListViewObject->fields.manager;
  if ( mDragScrollView )
  {
    v8 = (const MethodInfo *)WarehouseListViewManager_TypeInfo;
    v10 = WarehouseListViewManager_TypeInfo->_2.naturalAligment;
    if ( mDragScrollView->klass->_2.naturalAligment < (unsigned int)v10
      || (WarehouseListViewManager_c *)mDragScrollView->klass->_2.typeHierarchy[v10 - 1] != WarehouseListViewManager_TypeInfo )
    {
      goto LABEL_29;
    }
  }
  Item = (ListViewItem_o *)WarehouseListViewObject__GetItem(
                             (WarehouseListViewObject_o *)this->fields.mListViewObject,
                             v8);
  WarehouseListViewObject__OnDragDropStart((WarehouseListViewObject_o *)mListViewObject, v12);
  if ( !Item )
    goto LABEL_27;
  sortIndex = Item->fields.sortIndex;
  mCollider = (UnityEngine_Collider_o *)ListViewItem__get_IsSelect(Item, 0);
  if ( !mDragScrollView )
    goto LABEL_27;
  WarehouseListViewManager__SetDragStart(
    (WarehouseListViewManager_o *)mDragScrollView,
    sortIndex,
    ((unsigned __int8)mCollider & 1) == 0,
    0);
  ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *))mDragScrollView->klass[1]._1.element_class)(
    mDragScrollView,
    mDragScrollView->klass[1]._1.castClass);
  *(_WORD *)&this->fields.isDrag = 1;
  v20 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v20 = UICamera_TypeInfo;
  }
  currentTouch = v20->static_fields->currentTouch;
  if ( currentTouch )
    dragged = currentTouch->fields.dragged;
  else
    dragged = 0;
  this->fields.dragSurface = dragged;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.dragSurface, (int32_t)dragged, v14, v15, v16, v17, v18, v19);
}


// local variable allocation has failed, the output may be wrong!
void WarehouseUIDragDropListViewItem__Update(WarehouseUIDragDropListViewItem_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragSurface; // x20
  UnityEngine_GameObject_o *v4; // x20
  intptr_t main; // x0
  const MethodInfo *v6; // x1
  UnityEngine_Camera_o *v7; // x20
  UICamera_c *v8; // x8
  struct UICamera_StaticFields *static_fields; // x8
  UnityEngine_Object_o *Component_object; // x20
  WarehouseListViewManager_o *m_CachedPtr; // x21
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v14; // x8
  UnityEngine_Object_o *scrollView; // x20
  void *monitor; // x21
  UICamera_c *v17; // x8
  UnityEngine_Camera_o *v18; // x22
  struct UICamera_StaticFields *v19; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  float v23; // s14
  float v24; // s15
  float v25; // s8
  float v26; // s11
  UnityEngine_Vector2_o ViewSize; // kr00_8
  __int64 v28; // x9
  float v29; // s10
  float v30; // s13
  bool IsLimitOverPosition2; // w21
  UnityEngine_Object_o *v32; // x22
  float v33; // s0
  float v34; // s1
  float v35; // s0 OVERLAPPED
  float v36; // s1
  UnityEngine_Object_o *v37; // x22
  int v38; // s2
  float v39; // s0
  float v40; // s0 OVERLAPPED
  float v41; // s1
  int v42; // s2
  WarehouseUIDragDropListViewItem_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x1
  const MethodInfo *v45; // x2
  UnityEngine_Ray_o v46; // [xsp+0h] [xbp-100h] BYREF
  UnityEngine_Ray_o v47; // [xsp+18h] [xbp-E8h] BYREF
  UnityEngine_Ray_o v48; // [xsp+30h] [xbp-D0h]
  UnityEngine_RaycastHit_o v49; // [xsp+50h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E027D4 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_BoxCollider_TypeInfo);
    sub_1CE6700(&Method_UnityEngine_Component_GetComponent_WarehouseListViewObject___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&UnityEngine_Physics_TypeInfo);
    sub_1CE6700(&UICamera_TypeInfo);
    sub_1CE6700(&WarehouseListViewManager_TypeInfo);
    byte_4E027D4 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  if ( !this->fields.isDrag )
    return;
  dragSurface = (UnityEngine_Object_o *)this->fields.dragSurface;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragSurface, 0, 0) )
  {
    v4 = this->fields.dragSurface;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    if ( !UICamera__IsPressed(v4, 0) )
    {
      ((void (__fastcall *)(WarehouseUIDragDropListViewItem_o *, struct UnityEngine_GameObject_o *, const MethodInfo *))this->klass->vtable._8_OnDragDropRelease.methodPtr)(
        this,
        this->fields.dragSurface,
        this->klass->vtable._8_OnDragDropRelease.method);
      return;
    }
  }
  main = (intptr_t)UnityEngine_Camera__get_main(0);
  v7 = (UnityEngine_Camera_o *)main;
  v8 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v8 = UICamera_TypeInfo;
  }
  if ( !v7 )
    goto LABEL_85;
  static_fields = v8->static_fields;
  v50.fields.z = 0.0;
  v50.fields.x = static_fields->lastTouchPosition.fields.x;
  v50.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_72723200(&v47, v7, v50, 0);
  v48 = v47;
  if ( !UnityEngine_Physics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo);
  v46 = v48;
  if ( !UnityEngine_Physics__Raycast_73237192(&v46, &v49, 0) )
    goto LABEL_26;
  main = (intptr_t)UnityEngine_RaycastHit__get_collider(&v49, 0);
  if ( !main )
    goto LABEL_85;
  Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)main,
                                               (const MethodInfo_31FAB78 *)Method_UnityEngine_Component_GetComponent_WarehouseListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  main = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( (main & 1) == 0 )
    goto LABEL_26;
  if ( !Component_object )
    goto LABEL_85;
  m_CachedPtr = (WarehouseListViewManager_o *)Component_object[1].fields.m_CachedPtr;
  if ( !m_CachedPtr )
  {
LABEL_84:
    main = (intptr_t)WarehouseListViewObject__GetItem((WarehouseListViewObject_o *)Component_object, v6);
    goto LABEL_85;
  }
  naturalAligment = WarehouseListViewManager_TypeInfo->_2.naturalAligment;
  if ( m_CachedPtr->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (WarehouseListViewManager_c *)m_CachedPtr->klass->_2.typeHierarchy[naturalAligment - 1] != WarehouseListViewManager_TypeInfo )
  {
    sub_1CE6CF4(Component_object[1].fields.m_CachedPtr);
    goto LABEL_84;
  }
  main = (intptr_t)WarehouseListViewObject__GetItem(
                     (WarehouseListViewObject_o *)Component_object,
                     (const MethodInfo *)WarehouseListViewManager_TypeInfo);
  if ( !main )
    goto LABEL_85;
  WarehouseListViewManager__SetDragMove(m_CachedPtr, *(_DWORD *)(main + 24), 0);
LABEL_26:
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  main = UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0);
  if ( (main & 1) == 0 )
    return;
  v14 = this->fields.mDragScrollView;
  if ( !v14 )
    goto LABEL_85;
  scrollView = (UnityEngine_Object_o *)v14->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  main = UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( (main & 1) == 0 )
    return;
  if ( !scrollView )
    goto LABEL_85;
  monitor = scrollView[6].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)monitor, 0, 0) )
    return;
  main = (intptr_t)UnityEngine_Camera__get_main(0);
  v17 = UICamera_TypeInfo;
  v18 = (UnityEngine_Camera_o *)main;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v17 = UICamera_TypeInfo;
  }
  if ( !v18 )
    goto LABEL_85;
  v19 = v17->static_fields;
  v51.fields.z = 0.0;
  v51.fields.x = v19->lastTouchPosition.fields.x;
  v51.fields.y = v19->lastTouchPosition.fields.y;
  v52 = UnityEngine_Camera__ScreenToWorldPoint_72722736(v18, v51, 0);
  if ( !monitor )
    goto LABEL_85;
  x = v52.fields.x;
  y = v52.fields.y;
  z = v52.fields.z;
  main = (intptr_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)monitor, 0);
  if ( !main )
    goto LABEL_85;
  v53.fields.x = x;
  v53.fields.y = y;
  v53.fields.z = z;
  v54 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)main, v53, 0);
  v23 = *((float *)monitor + 83);
  v24 = *((float *)monitor + 84);
  v25 = v54.fields.x;
  v26 = v54.fields.y;
  ViewSize = UIPanel__GetViewSize((UIPanel_o *)monitor, 0);
  main = (intptr_t)this->fields.mCollider;
  if ( !main )
    goto LABEL_85;
  v28 = UnityEngine_BoxCollider_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)main + 304LL) < (unsigned int)v28
    || *(UnityEngine_BoxCollider_c **)(*(_QWORD *)(*(_QWORD *)main + 200LL) + 8 * v28 - 8) != UnityEngine_BoxCollider_TypeInfo )
  {
    sub_1CE6CF4(main);
    WarehouseUIDragDropListViewItem__OnDragDropRelease(v43, v44, v45);
    return;
  }
  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)main, 0);
  v29 = size.fields.x;
  v30 = size.fields.y;
  IsLimitOverPosition2 = UIScrollView__IsLimitOverPosition2((UIScrollView_o *)scrollView, 0);
  if ( IsLimitOverPosition2 )
    this->fields.isLimit = 1;
  if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)scrollView, 0) )
  {
    v32 = (UnityEngine_Object_o *)scrollView[2].fields.m_CachedPtr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v32, 0, 0) )
    {
      main = scrollView[2].fields.m_CachedPtr;
      if ( !main )
        goto LABEL_85;
      if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0) > 0.0 )
      {
        v33 = v26 - v24;
        v34 = (float)(ViewSize.fields.y - v30) * 0.5;
        if ( !this->fields.isLimit )
        {
          if ( v33 > (float)-v34 )
          {
            if ( v33 < v34 )
              return;
            v35 = 0.0;
            v36 = -1.0;
LABEL_76:
            v38 = 0;
            if ( !UIScrollView__IsLimitOverPosition2_50343912(
                    (UIScrollView_o *)scrollView,
                    *(UnityEngine_Vector3_o *)&v35,
                    0) )
            {
              v39 = 0.5;
LABEL_82:
              UIScrollView__Scroll((UIScrollView_o *)scrollView, v39, 0);
              return;
            }
            return;
          }
          v40 = 0.0;
          v41 = 1.0;
          goto LABEL_80;
        }
        goto LABEL_66;
      }
    }
  }
  if ( !UIScrollView__get_canMoveHorizontally((UIScrollView_o *)scrollView, 0) )
    goto LABEL_68;
  v37 = (UnityEngine_Object_o *)scrollView[2].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v37, 0, 0) )
  {
LABEL_68:
    if ( IsLimitOverPosition2 )
      return;
    goto LABEL_69;
  }
  main = (intptr_t)scrollView[2].monitor;
  if ( !main )
LABEL_85:
    sub_1CE6958(main, v6);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0) <= 0.0 )
    goto LABEL_68;
  v33 = v25 - v23;
  v34 = (float)(ViewSize.fields.x - v29) * 0.5;
  if ( this->fields.isLimit )
  {
LABEL_66:
    if ( IsLimitOverPosition2 )
    {
      UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0);
      return;
    }
    if ( v33 <= (float)-v34 || v33 >= v34 )
      return;
LABEL_69:
    this->fields.isLimit = 0;
    return;
  }
  if ( v33 > (float)-v34 )
  {
    if ( v33 < v34 )
      return;
    v35 = -1.0;
    v36 = 0.0;
    goto LABEL_76;
  }
  v40 = 1.0;
  v41 = 0.0;
LABEL_80:
  v42 = 0;
  if ( !UIScrollView__IsLimitOverPosition2_50343912((UIScrollView_o *)scrollView, *(UnityEngine_Vector3_o *)&v40, 0) )
  {
    v39 = -0.5;
    goto LABEL_82;
  }
}