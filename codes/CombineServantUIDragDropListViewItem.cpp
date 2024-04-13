void __fastcall CombineServantUIDragDropListViewItem___ctor(
        CombineServantUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewItem___ctor((UIDragDropListViewItem_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantUIDragDropListViewItem__DragEnd(
        CombineServantUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewManager_o *manager; // x21
  CombineServantUIDragDropListViewItem_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CombineServantListViewObject_o *mListViewObject; // x20
  __int64 v13; // x9
  __int64 v14; // x9
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v17; // x8
  UnityEngine_Object_o *scrollView; // x19
  const MethodInfo *v19; // x3
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  v5 = this;
  if ( (byte_42E8B4D & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CombineServantListViewObject_TypeInfo, v6, v7, v8);
    this = (CombineServantUIDragDropListViewItem_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E8B4D = 1;
  }
  mListViewObject = (CombineServantListViewObject_o *)v5->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_24;
  v13 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v13
    || (CombineServantListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v13 - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_B5D990(v5->fields.mListViewObject);
    goto LABEL_22;
  }
  manager = mListViewObject->fields.manager;
  if ( !manager )
  {
LABEL_23:
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v5, 0LL, 0LL);
    zero = UnityEngine_Vector3__get_zero(0LL);
    CombineServantListViewObject__Init(
      mListViewObject,
      3,
      0LL,
      zero.fields.x,
      *(UnityEngine_Vector3_o *)&zero.fields.y,
      v19);
    goto LABEL_24;
  }
  v14 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v14
    || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v14 - 1] != CombineServantListViewManager_TypeInfo )
  {
LABEL_22:
    sub_B5D990(manager);
    goto LABEL_23;
  }
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v5, 0LL, 0LL);
  v20 = UnityEngine_Vector3__get_zero(0LL);
  CombineServantListViewObject__Init(
    mListViewObject,
    3,
    0LL,
    v20.fields.x,
    *(UnityEngine_Vector3_o *)&v20.fields.y,
    v15);
  ((void (__fastcall *)(struct ListViewManager_o *, Il2CppMethodPointer))manager->klass->vtable._8_ItemDragEnd.method)(
    manager,
    manager->klass->vtable._9_SetSortKind.methodPtr);
  v5->fields.isDrag = 0;
  mDragScrollView = (UnityEngine_Object_o *)v5->fields.mDragScrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (CombineServantUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v17 = v5->fields.mDragScrollView;
    if ( !v17 )
      goto LABEL_24;
    scrollView = (UnityEngine_Object_o *)v17->fields.scrollView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (CombineServantUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( scrollView )
      {
        UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0LL);
        return;
      }
LABEL_24:
      sub_B5D69C(this, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantUIDragDropListViewItem__OnDragDropMove(
        CombineServantUIDragDropListViewItem_o *this,
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
  if ( (byte_42E8B4A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E8B4A = 1;
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


void __fastcall CombineServantUIDragDropListViewItem__OnDragDropRelease(
        CombineServantUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewObject_o *mListViewObject; // x0
  __int64 v9; // x9
  __int64 v10; // x9
  const MethodInfo *v11; // x1

  if ( (byte_42E8B4C & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewManager_TypeInfo, (_DWORD)surface, (_DWORD)method, v3);
    sub_B5D5C4(&CombineServantListViewObject_TypeInfo, v5, v6, v7);
    byte_42E8B4C = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_B5D69C(mListViewObject, surface);
  surface = (UnityEngine_GameObject_o *)CombineServantListViewObject_TypeInfo;
  v9 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v9
    || (CombineServantListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v9 - 1] != CombineServantListViewObject_TypeInfo )
  {
    goto LABEL_10;
  }
  mListViewObject = (struct ListViewObject_o *)mListViewObject->fields.manager;
  if ( !mListViewObject )
    goto LABEL_11;
  v10 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) < (unsigned int)v10
    || (CombineServantListViewManager_c *)mListViewObject->klass->_2.typeHierarchy[v10 - 1] != CombineServantListViewManager_TypeInfo )
  {
LABEL_10:
    mListViewObject = (struct ListViewObject_o *)sub_B5D990(mListViewObject);
    goto LABEL_11;
  }
  CombineServantListViewManager__SetDragEnd((CombineServantListViewManager_o *)mListViewObject, 0LL);
  CombineServantUIDragDropListViewItem__DragEnd(this, v11);
}


void __fastcall CombineServantUIDragDropListViewItem__OnDragDropStart(
        CombineServantUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *mDragScrollView; // x20
  UnityEngine_Collider_o *mCollider; // x0
  __int64 v13; // x1
  struct UIDragScrollView_o *v14; // x8
  CombineServantListViewObject_o *mListViewObject; // x21
  const MethodInfo *v16; // x1
  __int64 v17; // x9
  __int64 v18; // x9
  ListViewItem_o *Item; // x22
  const MethodInfo *v20; // x1
  int32_t sortIndex; // w21
  CombineServantUIDragDropListViewItem_o *v22; // x0
  const MethodInfo *v23; // x1
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E8B49 & 1) == 0 )
  {
    sub_B5D5C4(&CombineServantListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CombineServantListViewObject_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E8B49 = 1;
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
    v14 = this->fields.mDragScrollView;
    if ( !v14 )
      goto LABEL_24;
    mDragScrollView = (UnityEngine_Object_o *)v14->fields.scrollView;
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
        (mListViewObject = (CombineServantListViewObject_o *)this->fields.mListViewObject) == 0LL) )
  {
LABEL_24:
    sub_B5D69C(mCollider, v13);
  }
  v16 = (const MethodInfo *)CombineServantListViewObject_TypeInfo;
  v17 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&mListViewObject->klass->_2.bitflags2 + 1) >= (unsigned int)v17
    && (CombineServantListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[v17 - 1] == CombineServantListViewObject_TypeInfo )
  {
    mDragScrollView = (UnityEngine_Object_o *)mListViewObject->fields.manager;
    if ( !mDragScrollView
      || (v16 = (const MethodInfo *)CombineServantListViewManager_TypeInfo,
          v18 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1),
          *(&mDragScrollView->klass->_2.bitflags2 + 1) >= (unsigned int)v18)
      && (CombineServantListViewManager_c *)mDragScrollView->klass->_2.typeHierarchy[v18 - 1] == CombineServantListViewManager_TypeInfo )
    {
      Item = (ListViewItem_o *)CombineServantListViewObject__GetItem(
                                 (CombineServantListViewObject_o *)this->fields.mListViewObject,
                                 v16);
      CombineServantListViewObject__OnDragDropStart(mListViewObject, v20);
      if ( Item )
      {
        sortIndex = Item->fields.sortIndex;
        mCollider = (UnityEngine_Collider_o *)ListViewItem__get_IsSelect(Item, 0LL);
        if ( mDragScrollView )
        {
          CombineServantListViewManager__SetDragStart(
            (CombineServantListViewManager_o *)mDragScrollView,
            sortIndex,
            ((unsigned __int8)mCollider & 1) == 0,
            0LL);
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
    sub_B5D990(this->fields.mListViewObject);
  }
  v22 = (CombineServantUIDragDropListViewItem_o *)sub_B5D990(mDragScrollView);
  CombineServantUIDragDropListViewItem__OnDragDropMove(v22, v24, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantUIDragDropListViewItem__Update(
        CombineServantUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  void *main; // x0
  CombineServantListViewManager_c *v18; // x1
  UnityEngine_Camera_o *v19; // x20
  UICamera_c *v20; // x8
  struct UICamera_StaticFields *static_fields; // x8
  UnityEngine_Object_o *Component_WebViewObject; // x20
  CombineServantListViewManager_o *monitor; // x21
  __int64 v24; // x9
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v26; // x8
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Object_c *klass; // x21
  UICamera_c *v29; // x8
  UnityEngine_Camera_o *v30; // x22
  struct UICamera_StaticFields *v31; // x8
  float v32; // s0
  float v33; // s1
  float v34; // s2
  float v35; // s8
  float v36; // s9
  float v37; // s10
  float v38; // s14
  float v39; // s15
  float x; // s8
  float y; // s11
  UnityEngine_Vector2_o ViewSize; // kr00_8
  __int64 v43; // x9
  float v44; // s10
  float v45; // s13
  bool IsLimitOverPosition2; // w21
  UnityEngine_Object_o *v47; // x22
  float v48; // s0
  float v49; // s1
  float v50; // s1
  float v51; // s0
  UnityEngine_Object_o *v52; // x22
  int v53; // s2
  float v54; // s0
  float v55; // s1
  float v56; // s0
  int v57; // s2
  CombineServantUIDragDropListViewItem_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x1
  const MethodInfo *v60; // x2
  UnityEngine_Ray_o v61; // [xsp+0h] [xbp-D0h] BYREF
  UnityEngine_Ray_o v62; // [xsp+18h] [xbp-B8h] BYREF
  UnityEngine_RaycastHit_o v63; // [xsp+30h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E8B4B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_BoxCollider_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CombineServantListViewManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CombineServantListViewObject___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UICamera_TypeInfo, v14, v15, v16);
    byte_42E8B4B = 1;
  }
  memset(&v63, 0, sizeof(v63));
  if ( !this->fields.isDrag )
    return;
  main = UnityEngine_Camera__get_main(0LL);
  v19 = (UnityEngine_Camera_o *)main;
  v20 = UICamera_TypeInfo;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v20 = UICamera_TypeInfo;
  }
  if ( !v19 )
    goto LABEL_83;
  static_fields = v20->static_fields;
  v64.fields.z = 0.0;
  v64.fields.x = static_fields->lastTouchPosition.fields.x;
  v64.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_41565876(&v62, v19, v64, 0LL);
  v61 = v62;
  if ( UnityEngine_Physics__Raycast_16828644(&v61, &v63, 0LL) )
  {
    main = UnityEngine_RaycastHit__get_collider(&v63, 0LL);
    if ( !main )
      goto LABEL_83;
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)main,
                                                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CombineServantListViewObject___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    main = (void *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
    if ( ((unsigned __int8)main & 1) != 0 )
    {
      if ( !Component_WebViewObject )
        goto LABEL_83;
      monitor = (CombineServantListViewManager_o *)Component_WebViewObject[1].monitor;
      if ( monitor )
      {
        v18 = CombineServantListViewManager_TypeInfo;
        v24 = *(&CombineServantListViewManager_TypeInfo->_2.bitflags2 + 1);
        if ( *(&monitor->klass->_2.bitflags2 + 1) < (unsigned int)v24
          || (CombineServantListViewManager_c *)monitor->klass->_2.typeHierarchy[v24 - 1] != CombineServantListViewManager_TypeInfo )
        {
          main = Component_WebViewObject[1].monitor;
          goto LABEL_85;
        }
      }
      main = CombineServantListViewObject__GetItem(
               (CombineServantListViewObject_o *)Component_WebViewObject,
               (const MethodInfo *)v18);
      if ( !main || !monitor )
        goto LABEL_83;
      CombineServantListViewManager__SetDragMove(monitor, *((_DWORD *)main + 6), 0LL);
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
  v26 = this->fields.mDragScrollView;
  if ( !v26 )
    goto LABEL_83;
  scrollView = (UnityEngine_Object_o *)v26->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  main = (void *)UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL);
  if ( ((unsigned __int8)main & 1) == 0 )
    return;
  if ( !scrollView )
    goto LABEL_83;
  klass = scrollView[6].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0LL, 0LL) )
    return;
  main = UnityEngine_Camera__get_main(0LL);
  v29 = UICamera_TypeInfo;
  v30 = (UnityEngine_Camera_o *)main;
  if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v29 = UICamera_TypeInfo;
  }
  if ( !v30 )
    goto LABEL_83;
  v31 = v29->static_fields;
  v65.fields.z = 0.0;
  v65.fields.x = v31->lastTouchPosition.fields.x;
  v65.fields.y = v31->lastTouchPosition.fields.y;
  *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Camera__ScreenToWorldPoint_41565372(v30, v65, 0LL);
  if ( !klass )
    goto LABEL_83;
  v35 = v32;
  v36 = v33;
  v37 = v34;
  main = UnityEngine_Component__get_transform((UnityEngine_Component_o *)klass, 0LL);
  if ( !main )
    goto LABEL_83;
  v66.fields.x = v35;
  v66.fields.y = v36;
  v66.fields.z = v37;
  v67 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)main, v66, 0LL);
  v38 = *((float *)&klass->vtable._1_Finalize.methodPtr + 1);
  v39 = *(float *)&klass->vtable._1_Finalize.method;
  x = v67.fields.x;
  y = v67.fields.y;
  ViewSize = UIPanel__GetViewSize((UIPanel_o *)klass, 0LL);
  main = this->fields.mCollider;
  if ( !main )
    goto LABEL_83;
  v43 = *(&UnityEngine_BoxCollider_TypeInfo->_2.bitflags2 + 1);
  if ( *(unsigned __int8 *)(*(_QWORD *)main + 300LL) < (unsigned int)v43
    || *(UnityEngine_BoxCollider_c **)(*(_QWORD *)(*(_QWORD *)main + 200LL) + 8 * v43 - 8) != UnityEngine_BoxCollider_TypeInfo )
  {
LABEL_85:
    v58 = (CombineServantUIDragDropListViewItem_o *)sub_B5D990(main);
    CombineServantUIDragDropListViewItem__OnDragDropRelease(v58, v59, v60);
    return;
  }
  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)main, 0LL);
  v44 = size.fields.x;
  v45 = size.fields.y;
  IsLimitOverPosition2 = UIScrollView__IsLimitOverPosition2((UIScrollView_o *)scrollView, 0LL);
  if ( IsLimitOverPosition2 )
    this->fields.isLimit = 1;
  if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)scrollView, 0LL) )
  {
    v47 = (UnityEngine_Object_o *)scrollView[2].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v47, 0LL, 0LL) )
    {
      main = scrollView[2].monitor;
      if ( !main )
        goto LABEL_83;
      if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0LL) > 0.0 )
      {
        v48 = y - v39;
        v49 = (float)(ViewSize.fields.y - v45) * 0.5;
        if ( !this->fields.isLimit )
        {
          if ( v48 > (float)-v49 )
          {
            if ( v48 < v49 )
              return;
            v50 = -1.0;
            v51 = 0.0;
LABEL_76:
            v53 = 0;
            if ( !UIScrollView__IsLimitOverPosition2_39202856(
                    (UIScrollView_o *)scrollView,
                    *(UnityEngine_Vector3_o *)&v51,
                    0LL) )
            {
              v54 = 0.5;
LABEL_82:
              UIScrollView__Scroll((UIScrollView_o *)scrollView, v54, 0LL);
              return;
            }
            return;
          }
          v55 = 1.0;
          v56 = 0.0;
          goto LABEL_80;
        }
        goto LABEL_65;
      }
    }
  }
  if ( !UIScrollView__get_canMoveHorizontally((UIScrollView_o *)scrollView, 0LL) )
    goto LABEL_67;
  v52 = (UnityEngine_Object_o *)scrollView[2].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v52, 0LL, 0LL) )
  {
LABEL_67:
    if ( IsLimitOverPosition2 )
      return;
    goto LABEL_68;
  }
  main = scrollView[2].klass;
  if ( !main )
LABEL_83:
    sub_B5D69C(main, v18);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0LL) <= 0.0 )
    goto LABEL_67;
  v48 = x - v38;
  v49 = (float)(ViewSize.fields.x - v44) * 0.5;
  if ( this->fields.isLimit )
  {
LABEL_65:
    if ( IsLimitOverPosition2 )
    {
      UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0LL);
      return;
    }
    if ( v48 <= (float)-v49 || v48 >= v49 )
      return;
LABEL_68:
    this->fields.isLimit = 0;
    return;
  }
  if ( v48 > (float)-v49 )
  {
    if ( v48 < v49 )
      return;
    v51 = -1.0;
    v50 = 0.0;
    goto LABEL_76;
  }
  v56 = 1.0;
  v55 = 0.0;
LABEL_80:
  v57 = 0;
  if ( !UIScrollView__IsLimitOverPosition2_39202856((UIScrollView_o *)scrollView, *(UnityEngine_Vector3_o *)&v56, 0LL) )
  {
    v54 = -0.5;
    goto LABEL_82;
  }
}