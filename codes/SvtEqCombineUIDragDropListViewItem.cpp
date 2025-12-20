void SvtEqCombineUIDragDropListViewItem___ctor(SvtEqCombineUIDragDropListViewItem_o *this, const MethodInfo *method)
{
  UIDragDropListViewItem___ctor((UIDragDropListViewItem_o *)this, 0);
}


void SvtEqCombineUIDragDropListViewItem__DragEnd(SvtEqCombineUIDragDropListViewItem_o *this, const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x21
  SvtEqCombineUIDragDropListViewItem_o *v3; // x19
  SvtEqCombineListViewObject_o *mListViewObject; // x20
  __int64 naturalAligment; // x9
  __int64 v6; // x9
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v9; // x8
  UnityEngine_Object_o *scrollView; // x19
  const MethodInfo *v11; // x2

  v3 = this;
  if ( (byte_4D26803 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SvtEqCombineListViewManager_TypeInfo);
    this = (SvtEqCombineUIDragDropListViewItem_o *)sub_1C94098(&SvtEqCombineListViewObject_TypeInfo);
    byte_4D26803 = 1;
  }
  mListViewObject = (SvtEqCombineListViewObject_o *)v3->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_22;
  naturalAligment = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewObject_TypeInfo )
  {
    sub_1C9468C(v3->fields.mListViewObject);
    goto LABEL_20;
  }
  manager = mListViewObject->fields.manager;
  if ( !manager )
  {
LABEL_21:
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0, 0);
    SvtEqCombineListViewObject__Init_32121180(mListViewObject, 4, v11);
    goto LABEL_22;
  }
  v6 = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)v6
    || (SvtEqCombineListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
LABEL_20:
    sub_1C9468C(manager);
    goto LABEL_21;
  }
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0, 0);
  SvtEqCombineListViewObject__Init_32121180(mListViewObject, 4, v7);
  ((void (__fastcall *)(struct ListViewManager_o *, const MethodInfo *))manager->klass->vtable._9_ItemDragEnd.methodPtr)(
    manager,
    manager->klass->vtable._9_ItemDragEnd.method);
  v3->fields.isDrag = 0;
  mDragScrollView = (UnityEngine_Object_o *)v3->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SvtEqCombineUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v3->fields.mDragScrollView;
    if ( !v9 )
      goto LABEL_22;
    scrollView = (UnityEngine_Object_o *)v9->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (SvtEqCombineUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( scrollView )
      {
        UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0);
        return;
      }
LABEL_22:
      sub_1C942F0(this, method);
    }
  }
}


void SvtEqCombineUIDragDropListViewItem__OnDragDropMove(
        SvtEqCombineUIDragDropListViewItem_o *this,
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
  if ( (byte_4D26800 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26800 = 1;
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
      sub_1C942F0(transform, v8);
    }
    v10 = (UnityEngine_Transform_o *)transform;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    localPosition.fields.y = y + localPosition.fields.y;
    localPosition.fields.z = z + localPosition.fields.z;
    localPosition.fields.x = x + localPosition.fields.x;
    UnityEngine_Transform__set_localPosition(v10, localPosition, 0);
  }
}


void SvtEqCombineUIDragDropListViewItem__OnDragDropRelease(
        SvtEqCombineUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x0
  __int64 naturalAligment; // x9
  __int64 v6; // x9
  const MethodInfo *v7; // x1

  if ( (byte_4D26802 & 1) == 0 )
  {
    sub_1C94098(&SvtEqCombineListViewManager_TypeInfo);
    sub_1C94098(&SvtEqCombineListViewObject_TypeInfo);
    byte_4D26802 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_1C942F0(mListViewObject, surface);
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
  v6 = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)v6
    || (SvtEqCombineListViewManager_c *)mListViewObject->klass->_2.typeHierarchy[v6 - 1] != SvtEqCombineListViewManager_TypeInfo )
  {
LABEL_10:
    mListViewObject = (struct ListViewObject_o *)sub_1C9468C(mListViewObject);
    goto LABEL_11;
  }
  SvtEqCombineListViewManager__SetDragEnd(
    (SvtEqCombineListViewManager_o *)mListViewObject,
    (const MethodInfo *)SvtEqCombineListViewManager_TypeInfo);
  SvtEqCombineUIDragDropListViewItem__DragEnd(this, v7);
}


void SvtEqCombineUIDragDropListViewItem__OnDragDropStart(
        SvtEqCombineUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mDragScrollView; // x20
  UnityEngine_Collider_o *mCollider; // x0
  __int64 v5; // x1
  struct UIDragScrollView_o *v6; // x8
  SvtEqCombineListViewObject_o *mListViewObject; // x21
  const MethodInfo *v8; // x1
  __int64 naturalAligment; // x9
  __int64 v10; // x9
  ListViewItem_o *Item; // x22
  const MethodInfo *v12; // x1
  int32_t sortIndex; // w21
  const MethodInfo *v14; // x3
  SvtEqCombineUIDragDropListViewItem_o *v15; // x0
  const MethodInfo *v16; // x1
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D267FF & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SvtEqCombineListViewManager_TypeInfo);
    sub_1C94098(&SvtEqCombineListViewObject_TypeInfo);
    byte_4D267FF = 1;
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0);
  if ( ((unsigned __int8)mCollider & 1) != 0 )
  {
    v6 = this->fields.mDragScrollView;
    if ( !v6 )
      goto LABEL_22;
    mDragScrollView = (UnityEngine_Object_o *)v6->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mCollider = (UnityEngine_Collider_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0);
    if ( ((unsigned __int8)mCollider & 1) != 0 )
    {
      if ( !mDragScrollView )
        goto LABEL_22;
      UIScrollView__Press((UIScrollView_o *)mDragScrollView, 0, 0);
    }
  }
  UIDragDropListViewItem__OnDragDropStart((UIDragDropListViewItem_o *)this, 0);
  mCollider = this->fields.mCollider;
  if ( !mCollider
    || (UnityEngine_Collider__set_enabled(mCollider, 1, 0),
        (mListViewObject = (SvtEqCombineListViewObject_o *)this->fields.mListViewObject) == 0) )
  {
LABEL_22:
    sub_1C942F0(mCollider, v5);
  }
  v8 = (const MethodInfo *)SvtEqCombineListViewObject_TypeInfo;
  naturalAligment = SvtEqCombineListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (SvtEqCombineListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] == SvtEqCombineListViewObject_TypeInfo )
  {
    mDragScrollView = (UnityEngine_Object_o *)mListViewObject->fields.manager;
    if ( !mDragScrollView
      || (v8 = (const MethodInfo *)SvtEqCombineListViewManager_TypeInfo,
          v10 = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment,
          mDragScrollView->klass->_2.naturalAligment >= (unsigned int)v10)
      && (SvtEqCombineListViewManager_c *)mDragScrollView->klass->_2.typeHierarchy[v10 - 1] == SvtEqCombineListViewManager_TypeInfo )
    {
      Item = (ListViewItem_o *)SvtEqCombineListViewObject__GetItem(
                                 (SvtEqCombineListViewObject_o *)this->fields.mListViewObject,
                                 v8);
      SvtEqCombineListViewObject__OnDragDropStart(mListViewObject, v12);
      if ( Item )
      {
        sortIndex = Item->fields.sortIndex;
        mCollider = (UnityEngine_Collider_o *)ListViewItem__get_IsSelect(Item, 0);
        if ( mDragScrollView )
        {
          SvtEqCombineListViewManager__SetDragStart(
            (SvtEqCombineListViewManager_o *)mDragScrollView,
            sortIndex,
            ((unsigned __int8)mCollider & 1) == 0,
            v14);
          ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *))mDragScrollView->klass[1]._1.element_class)(
            mDragScrollView,
            mDragScrollView->klass[1]._1.castClass);
          *(_WORD *)&this->fields.isDrag = 1;
          return;
        }
      }
      goto LABEL_22;
    }
  }
  else
  {
    sub_1C9468C(this->fields.mListViewObject);
  }
  v15 = (SvtEqCombineUIDragDropListViewItem_o *)sub_1C9468C(mDragScrollView);
  SvtEqCombineUIDragDropListViewItem__OnDragDropMove(v15, v17, v16);
}


// local variable allocation has failed, the output may be wrong!
void SvtEqCombineUIDragDropListViewItem__Update(SvtEqCombineUIDragDropListViewItem_o *this, const MethodInfo *method)
{
  intptr_t main; // x0
  SvtEqCombineListViewManager_c *v4; // x1
  UICamera_c *v5; // x8
  UnityEngine_Camera_o *v6; // x20
  struct UICamera_StaticFields *static_fields; // x8
  UnityEngine_Object_o *Component_object; // x20
  SvtEqCombineListViewManager_o *m_CachedPtr; // x21
  __int64 naturalAligment; // x9
  const MethodInfo *v11; // x3
  int32_t v12; // w2
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
  SvtEqCombineUIDragDropListViewItem_o *v43; // x0
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

  if ( (byte_4D26801 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_BoxCollider_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_SvtEqCombineListViewObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&UnityEngine_Physics_TypeInfo);
    sub_1C94098(&SvtEqCombineListViewManager_TypeInfo);
    sub_1C94098(&UICamera_TypeInfo);
    byte_4D26801 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  if ( !this->fields.isDrag )
    return;
  main = (intptr_t)UnityEngine_Camera__get_main(0);
  v5 = UICamera_TypeInfo;
  v6 = (UnityEngine_Camera_o *)main;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v5 = UICamera_TypeInfo;
  }
  if ( !v6 )
    goto LABEL_78;
  static_fields = v5->static_fields;
  v50.fields.z = 0.0;
  v50.fields.x = static_fields->lastTouchPosition.fields.x;
  v50.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_71916032(&v47, v6, v50, 0);
  v48 = v47;
  if ( !UnityEngine_Physics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo);
  v46 = v48;
  if ( UnityEngine_Physics__Raycast_72429624(&v46, &v49, 0) )
  {
    main = (intptr_t)UnityEngine_RaycastHit__get_collider(&v49, 0);
    if ( !main )
      goto LABEL_78;
    Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)main,
                                                 (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_SvtEqCombineListViewObject___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    main = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
    if ( (main & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_78;
      m_CachedPtr = (SvtEqCombineListViewManager_o *)Component_object[1].fields.m_CachedPtr;
      if ( m_CachedPtr )
      {
        v4 = SvtEqCombineListViewManager_TypeInfo;
        naturalAligment = SvtEqCombineListViewManager_TypeInfo->_2.naturalAligment;
        if ( m_CachedPtr->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (SvtEqCombineListViewManager_c *)m_CachedPtr->klass->_2.typeHierarchy[naturalAligment - 1] != SvtEqCombineListViewManager_TypeInfo )
        {
          main = Component_object[1].fields.m_CachedPtr;
          goto LABEL_80;
        }
      }
      main = (intptr_t)SvtEqCombineListViewObject__GetItem(
                         (SvtEqCombineListViewObject_o *)Component_object,
                         (const MethodInfo *)v4);
      if ( !main || !m_CachedPtr )
        goto LABEL_78;
      v12 = *(_DWORD *)(main + 24);
      if ( m_CachedPtr->fields.dragEndIndex != v12 )
        SvtEqCombineListViewManager__SetDragSelectItem(m_CachedPtr, m_CachedPtr->fields.dragStartIndex, v12, v11);
    }
  }
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  main = UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0);
  if ( (main & 1) == 0 )
    return;
  v14 = this->fields.mDragScrollView;
  if ( !v14 )
    goto LABEL_78;
  scrollView = (UnityEngine_Object_o *)v14->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  main = UnityEngine_Object__op_Inequality(scrollView, 0, 0);
  if ( (main & 1) == 0 )
    return;
  if ( !scrollView )
    goto LABEL_78;
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
    goto LABEL_78;
  v19 = v17->static_fields;
  v51.fields.z = 0.0;
  v51.fields.x = v19->lastTouchPosition.fields.x;
  v51.fields.y = v19->lastTouchPosition.fields.y;
  v52 = UnityEngine_Camera__ScreenToWorldPoint_71915568(v18, v51, 0);
  if ( !monitor )
    goto LABEL_78;
  x = v52.fields.x;
  y = v52.fields.y;
  z = v52.fields.z;
  main = (intptr_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)monitor, 0);
  if ( !main )
    goto LABEL_78;
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
    goto LABEL_78;
  v28 = UnityEngine_BoxCollider_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)main + 304LL) < (unsigned int)v28
    || *(UnityEngine_BoxCollider_c **)(*(_QWORD *)(*(_QWORD *)main + 200LL) + 8 * v28 - 8) != UnityEngine_BoxCollider_TypeInfo )
  {
LABEL_80:
    v43 = (SvtEqCombineUIDragDropListViewItem_o *)sub_1C9468C(main);
    SvtEqCombineUIDragDropListViewItem__OnDragDropRelease(v43, v44, v45);
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
        goto LABEL_78;
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
LABEL_71:
            v38 = 0;
            if ( !UIScrollView__IsLimitOverPosition2_49927448(
                    (UIScrollView_o *)scrollView,
                    *(UnityEngine_Vector3_o *)&v35,
                    0) )
            {
              v39 = 0.5;
LABEL_77:
              UIScrollView__Scroll((UIScrollView_o *)scrollView, v39, 0);
              return;
            }
            return;
          }
          v40 = 0.0;
          v41 = 1.0;
          goto LABEL_75;
        }
        goto LABEL_60;
      }
    }
  }
  if ( !UIScrollView__get_canMoveHorizontally((UIScrollView_o *)scrollView, 0) )
    goto LABEL_62;
  v37 = (UnityEngine_Object_o *)scrollView[2].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v37, 0, 0) )
  {
LABEL_62:
    if ( IsLimitOverPosition2 )
      return;
    goto LABEL_63;
  }
  main = (intptr_t)scrollView[2].monitor;
  if ( !main )
LABEL_78:
    sub_1C942F0(main, v4);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0) <= 0.0 )
    goto LABEL_62;
  v33 = v25 - v23;
  v34 = (float)(ViewSize.fields.x - v29) * 0.5;
  if ( this->fields.isLimit )
  {
LABEL_60:
    if ( IsLimitOverPosition2 )
    {
      UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0);
      return;
    }
    if ( v33 <= (float)-v34 || v33 >= v34 )
      return;
LABEL_63:
    this->fields.isLimit = 0;
    return;
  }
  if ( v33 > (float)-v34 )
  {
    if ( v33 < v34 )
      return;
    v35 = -1.0;
    v36 = 0.0;
    goto LABEL_71;
  }
  v40 = 1.0;
  v41 = 0.0;
LABEL_75:
  v42 = 0;
  if ( !UIScrollView__IsLimitOverPosition2_49927448((UIScrollView_o *)scrollView, *(UnityEngine_Vector3_o *)&v40, 0) )
  {
    v39 = -0.5;
    goto LABEL_77;
  }
}