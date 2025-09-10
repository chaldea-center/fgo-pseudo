void CombineServantUIDragDropListViewItem___ctor(
        CombineServantUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewItem___ctor((UIDragDropListViewItem_o *)this, 0);
}


void CombineServantUIDragDropListViewItem__DragEnd(
        CombineServantUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x21
  CombineServantUIDragDropListViewItem_o *v3; // x19
  CombineServantListViewObject_o *mListViewObject; // x20
  __int64 naturalAligment; // x9
  __int64 v6; // x9
  const MethodInfo *v7; // x2
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v9; // x8
  UnityEngine_Object_o *scrollView; // x19
  const MethodInfo *v11; // x2

  v3 = this;
  if ( (byte_4C2B4E8 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewManager_TypeInfo);
    sub_1C2D490(&CombineServantListViewObject_TypeInfo);
    this = (CombineServantUIDragDropListViewItem_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B4E8 = 1;
  }
  mListViewObject = (CombineServantListViewObject_o *)v3->fields.mListViewObject;
  if ( !mListViewObject )
    goto LABEL_22;
  naturalAligment = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_1C2D9AC(v3->fields.mListViewObject);
    goto LABEL_20;
  }
  manager = mListViewObject->fields.manager;
  if ( !manager )
  {
LABEL_21:
    UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0, 0);
    CombineServantListViewObject__Init_48645152(mListViewObject, 3, v11);
    goto LABEL_22;
  }
  v6 = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)v6
    || (CombineServantListViewManager_c *)manager->klass->_2.typeHierarchy[v6 - 1] != CombineServantListViewManager_TypeInfo )
  {
LABEL_20:
    sub_1C2D9AC(manager);
    goto LABEL_21;
  }
  UIDragDropListViewItem__OnDragDropRelease((UIDragDropListViewItem_o *)v3, 0, 0);
  CombineServantListViewObject__Init_48645152(mListViewObject, 3, v7);
  ((void (__fastcall *)(struct ListViewManager_o *, const MethodInfo *))manager->klass->vtable._9_ItemDragEnd.methodPtr)(
    manager,
    manager->klass->vtable._9_ItemDragEnd.method);
  v3->fields.isDrag = 0;
  mDragScrollView = (UnityEngine_Object_o *)v3->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CombineServantUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v3->fields.mDragScrollView;
    if ( !v9 )
      goto LABEL_22;
    scrollView = (UnityEngine_Object_o *)v9->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (CombineServantUIDragDropListViewItem_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( scrollView )
      {
        UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0);
        return;
      }
LABEL_22:
      sub_1C2D6EC(this, method);
    }
  }
}


void CombineServantUIDragDropListViewItem__OnDragDropMove(
        CombineServantUIDragDropListViewItem_o *this,
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
  if ( (byte_4C2B4E5 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B4E5 = 1;
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
      sub_1C2D6EC(transform, v8);
    }
    v10 = (UnityEngine_Transform_o *)transform;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    localPosition.fields.y = y + localPosition.fields.y;
    localPosition.fields.z = z + localPosition.fields.z;
    localPosition.fields.x = x + localPosition.fields.x;
    UnityEngine_Transform__set_localPosition(v10, localPosition, 0);
  }
}


void CombineServantUIDragDropListViewItem__OnDragDropRelease(
        CombineServantUIDragDropListViewItem_o *this,
        UnityEngine_GameObject_o *surface,
        const MethodInfo *method)
{
  struct ListViewObject_o *mListViewObject; // x0
  __int64 naturalAligment; // x9
  __int64 v6; // x9
  const MethodInfo *v7; // x1

  if ( (byte_4C2B4E7 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewManager_TypeInfo);
    sub_1C2D490(&CombineServantListViewObject_TypeInfo);
    byte_4C2B4E7 = 1;
  }
  mListViewObject = this->fields.mListViewObject;
  if ( !mListViewObject )
LABEL_11:
    sub_1C2D6EC(mListViewObject, surface);
  surface = (UnityEngine_GameObject_o *)CombineServantListViewObject_TypeInfo;
  naturalAligment = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewObject_TypeInfo )
  {
    goto LABEL_10;
  }
  mListViewObject = (struct ListViewObject_o *)mListViewObject->fields.manager;
  if ( !mListViewObject )
    goto LABEL_11;
  v6 = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment < (unsigned int)v6
    || (CombineServantListViewManager_c *)mListViewObject->klass->_2.typeHierarchy[v6 - 1] != CombineServantListViewManager_TypeInfo )
  {
LABEL_10:
    sub_1C2D9AC(mListViewObject);
    goto LABEL_11;
  }
  CombineServantListViewManager__SetDragEnd((CombineServantListViewManager_o *)mListViewObject, 0);
  CombineServantUIDragDropListViewItem__DragEnd(this, v7);
}


// local variable allocation has failed, the output may be wrong!
void CombineServantUIDragDropListViewItem__OnDragDropStart(
        CombineServantUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mDragScrollView; // x20
  UnityEngine_Collider_o *mCollider; // x0
  __int64 v5; // x1
  struct UIDragScrollView_o *v6; // x8
  CombineServantListViewObject_o *mListViewObject; // x21
  const MethodInfo *v8; // x1
  __int64 naturalAligment; // x9
  __int64 v10; // x9
  ListViewItem_o *Item; // x22
  const MethodInfo *v12; // x1
  int32_t sortIndex; // w21
  CombineServantUIDragDropListViewItem_o *v14; // x0
  const MethodInfo *v15; // x1
  long double v16; // q0 OVERLAPPED

  if ( (byte_4C2B4E4 & 1) == 0 )
  {
    sub_1C2D490(&CombineServantListViewManager_TypeInfo);
    sub_1C2D490(&CombineServantListViewObject_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B4E4 = 1;
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
        (mListViewObject = (CombineServantListViewObject_o *)this->fields.mListViewObject) == 0) )
  {
LABEL_22:
    sub_1C2D6EC(mCollider, v5);
  }
  v8 = (const MethodInfo *)CombineServantListViewObject_TypeInfo;
  naturalAligment = CombineServantListViewObject_TypeInfo->_2.naturalAligment;
  if ( mListViewObject->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (CombineServantListViewObject_c *)mListViewObject->klass->_2.typeHierarchy[naturalAligment - 1] == CombineServantListViewObject_TypeInfo )
  {
    mDragScrollView = (UnityEngine_Object_o *)mListViewObject->fields.manager;
    if ( !mDragScrollView
      || (v8 = (const MethodInfo *)CombineServantListViewManager_TypeInfo,
          v10 = CombineServantListViewManager_TypeInfo->_2.naturalAligment,
          mDragScrollView->klass->_2.naturalAligment >= (unsigned int)v10)
      && (CombineServantListViewManager_c *)mDragScrollView->klass->_2.typeHierarchy[v10 - 1] == CombineServantListViewManager_TypeInfo )
    {
      Item = (ListViewItem_o *)CombineServantListViewObject__GetItem(
                                 (CombineServantListViewObject_o *)this->fields.mListViewObject,
                                 v8);
      CombineServantListViewObject__OnDragDropStart(mListViewObject, v12);
      if ( Item )
      {
        sortIndex = Item->fields.sortIndex;
        mCollider = (UnityEngine_Collider_o *)ListViewItem__get_IsSelect(Item, 0);
        if ( mDragScrollView )
        {
          CombineServantListViewManager__SetDragStart(
            (CombineServantListViewManager_o *)mDragScrollView,
            sortIndex,
            ((unsigned __int8)mCollider & 1) == 0,
            0);
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
    sub_1C2D9AC(this->fields.mListViewObject);
  }
  v16 = sub_1C2D9AC(mDragScrollView);
  CombineServantUIDragDropListViewItem__OnDragDropMove(v14, *(UnityEngine_Vector3_o *)&v16, v15);
}


// local variable allocation has failed, the output may be wrong!
void CombineServantUIDragDropListViewItem__Update(
        CombineServantUIDragDropListViewItem_o *this,
        const MethodInfo *method)
{
  intptr_t main; // x0
  const MethodInfo *v4; // x1
  UICamera_c *v5; // x8
  UnityEngine_Camera_o *v6; // x20
  struct UICamera_StaticFields *static_fields; // x8
  UnityEngine_Object_o *Component_object; // x20
  CombineServantListViewManager_o *m_CachedPtr; // x21
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *mDragScrollView; // x20
  struct UIDragScrollView_o *v12; // x8
  UnityEngine_Object_o *scrollView; // x20
  void *monitor; // x21
  UICamera_c *v15; // x8
  UnityEngine_Camera_o *v16; // x22
  struct UICamera_StaticFields *v17; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  float v21; // s14
  float v22; // s15
  float v23; // s8
  float v24; // s11
  UnityEngine_Vector2_o ViewSize; // kr00_8
  __int64 v26; // x9
  float v27; // s10
  float v28; // s13
  bool IsLimitOverPosition2; // w21
  UnityEngine_Object_o *v30; // x22
  float v31; // s0
  float v32; // s1
  float v33; // s0 OVERLAPPED
  float v34; // s1
  UnityEngine_Object_o *v35; // x22
  int v36; // s2
  float v37; // s0
  float v38; // s0 OVERLAPPED
  float v39; // s1
  int v40; // s2
  CombineServantUIDragDropListViewItem_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x1
  const MethodInfo *v43; // x2
  UnityEngine_Ray_o v44; // [xsp+0h] [xbp-100h] BYREF
  UnityEngine_Ray_o v45; // [xsp+18h] [xbp-E8h] BYREF
  UnityEngine_Ray_o v46; // [xsp+30h] [xbp-D0h]
  UnityEngine_RaycastHit_o v47; // [xsp+50h] [xbp-B0h] BYREF
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2B4E6 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_BoxCollider_TypeInfo);
    sub_1C2D490(&CombineServantListViewManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_CombineServantListViewObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UnityEngine_Physics_TypeInfo);
    sub_1C2D490(&UICamera_TypeInfo);
    byte_4C2B4E6 = 1;
  }
  memset(&v47, 0, sizeof(v47));
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
  v48.fields.z = 0.0;
  v48.fields.x = static_fields->lastTouchPosition.fields.x;
  v48.fields.y = static_fields->lastTouchPosition.fields.y;
  UnityEngine_Camera__ScreenPointToRay_70970460(&v45, v6, v48, 0);
  v46 = v45;
  if ( !UnityEngine_Physics_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Physics_TypeInfo);
  v44 = v46;
  if ( !UnityEngine_Physics__Raycast_71480028(&v44, &v47, 0) )
    goto LABEL_20;
  main = (intptr_t)UnityEngine_RaycastHit__get_collider(&v47, 0);
  if ( !main )
    goto LABEL_78;
  Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)main,
                                               (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_CombineServantListViewObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  main = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( (main & 1) == 0 )
    goto LABEL_20;
  if ( !Component_object )
    goto LABEL_78;
  m_CachedPtr = (CombineServantListViewManager_o *)Component_object[1].fields.m_CachedPtr;
  if ( !m_CachedPtr )
  {
LABEL_77:
    main = (intptr_t)CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)Component_object, v4);
    goto LABEL_78;
  }
  naturalAligment = CombineServantListViewManager_TypeInfo->_2.naturalAligment;
  if ( m_CachedPtr->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineServantListViewManager_c *)m_CachedPtr->klass->_2.typeHierarchy[naturalAligment - 1] != CombineServantListViewManager_TypeInfo )
  {
    sub_1C2D9AC(Component_object[1].fields.m_CachedPtr);
    goto LABEL_77;
  }
  main = (intptr_t)CombineServantListViewObject__GetItem(
                     (CombineServantListViewObject_o *)Component_object,
                     (const MethodInfo *)CombineServantListViewManager_TypeInfo);
  if ( !main )
    goto LABEL_78;
  CombineServantListViewManager__SetDragMove(m_CachedPtr, *(_DWORD *)(main + 24), 0);
LABEL_20:
  mDragScrollView = (UnityEngine_Object_o *)this->fields.mDragScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  main = UnityEngine_Object__op_Inequality(mDragScrollView, 0, 0);
  if ( (main & 1) == 0 )
    return;
  v12 = this->fields.mDragScrollView;
  if ( !v12 )
    goto LABEL_78;
  scrollView = (UnityEngine_Object_o *)v12->fields.scrollView;
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
  v15 = UICamera_TypeInfo;
  v16 = (UnityEngine_Camera_o *)main;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v15 = UICamera_TypeInfo;
  }
  if ( !v16 )
    goto LABEL_78;
  v17 = v15->static_fields;
  v49.fields.z = 0.0;
  v49.fields.x = v17->lastTouchPosition.fields.x;
  v49.fields.y = v17->lastTouchPosition.fields.y;
  v50 = UnityEngine_Camera__ScreenToWorldPoint_70969996(v16, v49, 0);
  if ( !monitor )
    goto LABEL_78;
  x = v50.fields.x;
  y = v50.fields.y;
  z = v50.fields.z;
  main = (intptr_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)monitor, 0);
  if ( !main )
    goto LABEL_78;
  v51.fields.x = x;
  v51.fields.y = y;
  v51.fields.z = z;
  v52 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)main, v51, 0);
  v21 = *((float *)monitor + 83);
  v22 = *((float *)monitor + 84);
  v23 = v52.fields.x;
  v24 = v52.fields.y;
  ViewSize = UIPanel__GetViewSize((UIPanel_o *)monitor, 0);
  main = (intptr_t)this->fields.mCollider;
  if ( !main )
    goto LABEL_78;
  v26 = UnityEngine_BoxCollider_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*(_QWORD *)main + 304LL) < (unsigned int)v26
    || *(UnityEngine_BoxCollider_c **)(*(_QWORD *)(*(_QWORD *)main + 200LL) + 8 * v26 - 8) != UnityEngine_BoxCollider_TypeInfo )
  {
    sub_1C2D9AC(main);
    CombineServantUIDragDropListViewItem__OnDragDropRelease(v41, v42, v43);
    return;
  }
  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)main, 0);
  v27 = size.fields.x;
  v28 = size.fields.y;
  IsLimitOverPosition2 = UIScrollView__IsLimitOverPosition2((UIScrollView_o *)scrollView, 0);
  if ( IsLimitOverPosition2 )
    this->fields.isLimit = 1;
  if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)scrollView, 0) )
  {
    v30 = (UnityEngine_Object_o *)scrollView[2].fields.m_CachedPtr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v30, 0, 0) )
    {
      main = scrollView[2].fields.m_CachedPtr;
      if ( !main )
        goto LABEL_78;
      if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0) > 0.0 )
      {
        v31 = v24 - v22;
        v32 = (float)(ViewSize.fields.y - v28) * 0.5;
        if ( !this->fields.isLimit )
        {
          if ( v31 > (float)-v32 )
          {
            if ( v31 < v32 )
              return;
            v33 = 0.0;
            v34 = -1.0;
LABEL_69:
            v36 = 0;
            if ( !UIScrollView__IsLimitOverPosition2_49133624(
                    (UIScrollView_o *)scrollView,
                    *(UnityEngine_Vector3_o *)&v33,
                    0) )
            {
              v37 = 0.5;
LABEL_75:
              UIScrollView__Scroll((UIScrollView_o *)scrollView, v37, 0);
              return;
            }
            return;
          }
          v38 = 0.0;
          v39 = 1.0;
          goto LABEL_73;
        }
        goto LABEL_58;
      }
    }
  }
  if ( !UIScrollView__get_canMoveHorizontally((UIScrollView_o *)scrollView, 0) )
    goto LABEL_60;
  v35 = (UnityEngine_Object_o *)scrollView[2].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v35, 0, 0) )
  {
LABEL_60:
    if ( IsLimitOverPosition2 )
      return;
    goto LABEL_61;
  }
  main = (intptr_t)scrollView[2].monitor;
  if ( !main )
LABEL_78:
    sub_1C2D6EC(main, v4);
  if ( UIProgressBar__get_alpha((UIProgressBar_o *)main, 0) <= 0.0 )
    goto LABEL_60;
  v31 = v23 - v21;
  v32 = (float)(ViewSize.fields.x - v27) * 0.5;
  if ( this->fields.isLimit )
  {
LABEL_58:
    if ( IsLimitOverPosition2 )
    {
      UIScrollView__Press((UIScrollView_o *)scrollView, 0, 0);
      return;
    }
    if ( v31 <= (float)-v32 || v31 >= v32 )
      return;
LABEL_61:
    this->fields.isLimit = 0;
    return;
  }
  if ( v31 > (float)-v32 )
  {
    if ( v31 < v32 )
      return;
    v33 = -1.0;
    v34 = 0.0;
    goto LABEL_69;
  }
  v38 = 1.0;
  v39 = 0.0;
LABEL_73:
  v40 = 0;
  if ( !UIScrollView__IsLimitOverPosition2_49133624((UIScrollView_o *)scrollView, *(UnityEngine_Vector3_o *)&v38, 0) )
  {
    v37 = -0.5;
    goto LABEL_75;
  }
}