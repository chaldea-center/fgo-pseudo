void ListViewObject___cctor(const MethodInfo *method)
{
  if ( (byte_4CEFD83 & 1) == 0 )
  {
    sub_1C7BAE8(&ListViewObject_TypeInfo);
    byte_4CEFD83 = 1;
  }
  LODWORD(ListViewObject_TypeInfo->static_fields->BASE_MOVE_TIME) = (struct ListViewObject_StaticFields)1045220557;
}


void ListViewObject___ctor(ListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ListViewObject__Awake(ListViewObject_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  const MethodInfo *v17; // x1

  if ( (byte_4CEFD76 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
    byte_4CEFD76 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = (struct UnityEngine_Collider_o *)Component_object;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mCollider, (int32_t)Component_object, v4, v5, v6, v7, v8, v9);
  v10 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.mDragDrop = (struct UIDragDropListViewItem_o *)v10;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mDragDrop, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  ListViewObject__SetBaseTransform(this, v17);
}


bool ListViewObject__CleanItemExtra(ListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  struct ListViewItem_o **p_linkItem; // x20
  UnityEngine_Object_o *viewObject; // x21
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct ListViewItem_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4CEFD82 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEFD82 = 1;
  }
  p_linkItem = &this->fields.linkItem;
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  viewObject = (UnityEngine_Object_o *)linkItem->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(viewObject, (UnityEngine_Object_o *)this, 0) || this->fields.isBusy )
    return 0;
  v14 = *p_linkItem;
  if ( !*p_linkItem )
    sub_1C7BD40(0, v6);
  v14->fields.viewObject = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v14->fields.viewObject, 0, v7, v8, v9, v10, v11, v12);
  this->fields.linkItem = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.linkItem, 0, v15, v16, v17, v18, v19, v20);
  ((void (__fastcall *)(ListViewObject_o *, _QWORD, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    0,
    this->klass->vtable._9_SetInput.method);
  return 1;
}


bool ListViewObject__ClearItem(ListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  struct ListViewItem_o **p_linkItem; // x20
  UnityEngine_Object_o *viewObject; // x21
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct ListViewItem_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4CEFD77 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEFD77 = 1;
  }
  p_linkItem = &this->fields.linkItem;
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  viewObject = (UnityEngine_Object_o *)linkItem->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(viewObject, (UnityEngine_Object_o *)this, 0) || this->fields.isBusy )
    return 0;
  v14 = *p_linkItem;
  if ( !*p_linkItem )
    sub_1C7BD40(0, v6);
  v14->fields.viewObject = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v14->fields.viewObject, 0, v7, v8, v9, v10, v11, v12);
  this->fields.linkItem = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.linkItem, 0, v15, v16, v17, v18, v19, v20);
  ((void (__fastcall *)(ListViewObject_o *, const MethodInfo *))this->klass->vtable._10_Invalidation.methodPtr)(
    this,
    this->klass->vtable._10_Invalidation.method);
  return 1;
}


UnityEngine_GameObject_o *ListViewObject__CreateDragObject(ListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dragObjectPrefab; // x19
  bool v4; // w0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x19
  __int64 manager; // x0
  __int64 v8; // x0
  UnityEngine_GameObject_o *v9; // x19
  UnityEngine_GameObject_o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct ListViewItem_o *linkItem; // x1
  __int64 v18; // x20
  struct ListViewManager_o *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Transform_o *v27; // x23
  UnityEngine_Transform_o *v28; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  float v32; // s8
  float v33; // s9
  UnityEngine_GameObject_o *v34; // x22
  float v35; // s8
  float v36; // s9
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x2
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o eulerAngles; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEFD7A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEFD7A = 1;
  }
  dragObjectPrefab = (UnityEngine_Object_o *)this->fields.dragObjectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(dragObjectPrefab, 0, 0);
  v6 = 0;
  if ( !v4 )
  {
    manager = (__int64)this->fields.manager;
    if ( !manager )
      goto LABEL_27;
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)manager + 424LL))(
           manager,
           *(_QWORD *)(*(_QWORD *)manager + 432LL));
    v9 = this->fields.dragObjectPrefab;
    v10 = (UnityEngine_GameObject_o *)v8;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    manager = (__int64)NGUITools__AddChild_49871496(v10, v9, 0);
    if ( !manager )
      goto LABEL_27;
    v6 = (UnityEngine_GameObject_o *)manager;
    manager = (__int64)UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)manager,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    if ( !manager )
      goto LABEL_27;
    linkItem = this->fields.linkItem;
    v18 = manager;
    *(_QWORD *)(manager + 56) = linkItem;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(manager + 56), (int32_t)linkItem, v11, v12, v13, v14, v15, v16);
    v19 = this->fields.manager;
    *(_QWORD *)(v18 + 40) = v19;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v18 + 40), (int32_t)v19, v20, v21, v22, v23, v24, v25);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v18, 0);
    manager = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !manager )
      goto LABEL_27;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)manager, 0);
    if ( !transform )
      goto LABEL_27;
    UnityEngine_Transform__set_position(transform, position, 0);
    v27 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v18, 0);
    manager = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !manager )
      goto LABEL_27;
    eulerAngles = UnityEngine_Transform__get_eulerAngles((UnityEngine_Transform_o *)manager, 0);
    if ( !v27 )
      goto LABEL_27;
    UnityEngine_Transform__set_eulerAngles(v27, eulerAngles, 0);
    manager = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v18, 0);
    v28 = (UnityEngine_Transform_o *)manager;
    if ( !byte_4CE7E5E )
    {
      manager = sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CE7E5E = 1;
    }
    if ( !v28 )
      goto LABEL_27;
    UnityEngine_Transform__set_localScale(v28, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    manager = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !manager )
      goto LABEL_27;
    v42 = UnityEngine_Transform__TransformPoint_71896928((UnityEngine_Transform_o *)manager, 1.0, 1.0, 0.0, 0);
    x = v42.fields.x;
    y = v42.fields.y;
    z = v42.fields.z;
    manager = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v18, 0);
    if ( !manager )
      goto LABEL_27;
    v43.fields.x = x;
    v43.fields.y = y;
    v43.fields.z = z;
    v44 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)manager, v43, 0);
    v32 = v44.fields.x;
    v33 = v44.fields.y;
    manager = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v18, 0);
    if ( !manager )
      goto LABEL_27;
    v45.fields.z = 1.0;
    v45.fields.x = v32;
    v45.fields.y = v33;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)manager, v45, 0);
    manager = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0);
    if ( !v10 )
      goto LABEL_27;
    v34 = (UnityEngine_GameObject_o *)manager;
    manager = UnityEngine_GameObject__get_layer(v10, 0);
    if ( !v34
      || (UnityEngine_GameObject__set_layer(v34, manager, 0),
          (manager = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v18, 0)) == 0)
      || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)manager, 0),
          v35 = localPosition.fields.x,
          v36 = localPosition.fields.y,
          (manager = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v18, 0)) == 0) )
    {
LABEL_27:
      sub_1C7BD40(manager, v5);
    }
    v47.fields.z = 0.0;
    v47.fields.x = v35;
    v47.fields.y = v36;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)manager, v47, 0);
    ListViewObject__SetBaseTransform((ListViewObject_o *)v18, v37);
    ListViewObject__SetVisible((ListViewObject_o *)v18, 1, v38);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v18 + 456LL))(
      v18,
      0,
      *(_QWORD *)(*(_QWORD *)v18 + 464LL));
  }
  return v6;
}


void ListViewObject__DragMaskEnd(ListViewObject_o *this, const MethodInfo *method)
{
  ListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C7BD40(0, method);
  ListViewManager__DragMaskEnd(manager, method);
}


void ListViewObject__DragMaskStart(ListViewObject_o *this, const MethodInfo *method)
{
  ListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C7BD40(0, method);
  ListViewManager__DragMaskStart(manager, method);
}


void ListViewObject__EndMoveCenter(ListViewObject_o *this, const MethodInfo *method)
{
  ListViewManager_o *manager; // x0

  manager = this->fields.manager;
  this->fields.isBusy = 0;
  if ( !manager )
    sub_1C7BD40(0, method);
  ListViewManager__EndScrollAnim(manager, method);
}


UnityEngine_GameObject_o *ListViewObject__GetDragRoot(ListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C7BD40(0, method);
  return (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(struct ListViewManager_o *, const MethodInfo *))manager->klass->vtable._7_GetDragRoot.methodPtr)(
                                       manager,
                                       manager->klass->vtable._7_GetDragRoot.method);
}


ListViewItem_o *ListViewObject__GetItem(ListViewObject_o *this, const MethodInfo *method)
{
  return this->fields.linkItem;
}


bool ListViewObject__GetVisible(ListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4CEFD7C & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEFD7C = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(dispObject, 0, 0) )
    return 0;
  v5 = this->fields.dispObject;
  if ( !v5 )
    sub_1C7BD40(0, v4);
  return UnityEngine_GameObject__get_activeSelf(v5, 0);
}


void ListViewObject__Invalidation(ListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ListViewObject__SetVisible(this, 0, v2);
  ((void (__fastcall *)(ListViewObject_o *, _QWORD, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    0,
    this->klass->vtable._9_SetInput.method);
}


bool ListViewObject__IsCanDrag(ListViewObject_o *this, const MethodInfo *method)
{
  return 0;
}


bool ListViewObject__MoveBottom(ListViewObject_o *this, bool isAnimation, float offSet, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppObject *v8; // x20
  __int64 cachedTransform; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x22
  struct ListViewManager_o *manager; // x8
  struct ListViewItemSeed_o *seed; // x8
  float x; // s13
  float y; // s14
  UnityEngine_Transform_o *v16; // x23
  float v17; // s9
  float v18; // s10
  float v19; // s11
  float v20; // s12
  float v21; // s1
  float v22; // s8
  float v23; // s13
  float v24; // s14
  bool canMoveHorizontally; // w24
  bool canMoveVertically; // w0
  float v27; // s1
  float v28; // s9
  float v29; // s8
  float z; // s10
  float v31; // s8
  float v32; // s9
  UnityEngine_Object_o *v33; // x20
  bool v34; // w8
  GrandQuestFolderBoardItem_o *v35; // x20
  System_Delegate_o *klass; // t1
  SpringPanel_OnFinished_o *v37; // x22
  System_Delegate_o *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  SpringPanel_OnFinished_c *v45; // x1
  Il2CppObject *v46; // x21
  float v47; // s11
  float v48; // s12
  UnityEngine_Vector2_o v50; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEFD80 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
    sub_1C7BAE8(&Method_ListViewObject_EndMoveCenter__);
    sub_1C7BAE8(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SpringPanel_OnFinished_TypeInfo);
    byte_4CEFD80 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v8 = NGUITools__FindInParents_object_(
         gameObject,
         (const MethodInfo_31F9E0C *)Method_NGUITools_FindInParents_UIPanel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  cachedTransform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
  if ( (cachedTransform & 1) == 0 )
    goto LABEL_32;
  if ( !v8 )
    goto LABEL_46;
  if ( !HIDWORD(v8[18].klass) )
  {
LABEL_32:
    LOBYTE(cachedTransform) = 0;
    return cachedTransform;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)v8,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  cachedTransform = (__int64)UIRect__get_cachedTransform((UIRect_o *)v8, 0);
  manager = this->fields.manager;
  if ( !manager )
    goto LABEL_46;
  seed = manager->fields.seed;
  if ( !seed )
    goto LABEL_46;
  x = seed->fields.arrangementPich.fields.x;
  y = seed->fields.arrangementPich.fields.y;
  v16 = (UnityEngine_Transform_o *)cachedTransform;
  cachedTransform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !cachedTransform )
    goto LABEL_46;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)cachedTransform, 0);
  if ( !v16 )
    goto LABEL_46;
  v52 = UnityEngine_Transform__InverseTransformPoint(v16, position, 0);
  v17 = v52.fields.x;
  v18 = v52.fields.y;
  cachedTransform = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v8->klass->vtable[11].methodPtr)(
                      v8,
                      v8->klass->vtable[11].method);
  if ( !cachedTransform )
    goto LABEL_46;
  if ( !*(_DWORD *)(cachedTransform + 24) )
    sub_1C7BD48(cachedTransform);
  v53 = UnityEngine_Transform__InverseTransformPoint(v16, *(UnityEngine_Vector3_o *)(cachedTransform + 32), 0);
  if ( !Component_object )
    goto LABEL_46;
  v19 = v53.fields.x;
  v20 = v53.fields.y;
  v21 = offSet + offSet;
  v22 = x * 0.5;
  v23 = y * 0.5;
  v24 = v21 + -1.0;
  canMoveHorizontally = UIScrollView__get_canMoveHorizontally((UIScrollView_o *)Component_object, 0);
  canMoveVertically = UIScrollView__get_canMoveVertically((UIScrollView_o *)Component_object, 0);
  v27 = (float)(v17 - v19) - (float)(v24 * v22);
  if ( canMoveVertically )
    v28 = (float)(v18 - v20) - (float)(v24 * v23);
  else
    v28 = 0.0;
  if ( canMoveHorizontally )
    v29 = v27;
  else
    v29 = 0.0;
  localPosition = UnityEngine_Transform__get_localPosition(v16, 0);
  z = localPosition.fields.z;
  v31 = localPosition.fields.x - v29;
  v32 = localPosition.fields.y - v28;
  cachedTransform = (__int64)UIRect__get_cachedGameObject((UIRect_o *)v8, 0);
  if ( !isAnimation )
  {
    if ( !cachedTransform )
      goto LABEL_46;
    v46 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)cachedTransform,
            (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v46, 0, 0);
    if ( (cachedTransform & 1) != 0 )
    {
      this->fields.isBusy = 0;
      if ( !v46 )
        goto LABEL_46;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v46, 0, 0);
    }
    cachedTransform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
    if ( cachedTransform )
    {
      v56 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)cachedTransform, 0);
      v47 = v56.fields.x;
      v48 = v56.fields.y;
      cachedTransform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      if ( cachedTransform )
      {
        v57.fields.x = v31;
        v57.fields.y = v32;
        v57.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)cachedTransform, v57, 0);
        v50.fields.x = *((float *)&v8[20].monitor + 1) - (float)(v31 - v47);
        v50.fields.y = *(float *)&v8[21].klass - (float)(v32 - v48);
        UIPanel__set_clipOffset((UIPanel_o *)v8, v50, 0);
        ((void (__fastcall *)(Il2CppObject *, _QWORD, const MethodInfo *))Component_object->klass->vtable[8].methodPtr)(
          Component_object,
          0,
          Component_object->klass->vtable[8].method);
        goto LABEL_44;
      }
    }
LABEL_46:
    sub_1C7BD40(cachedTransform, v10);
  }
  v55.fields.x = v31;
  v55.fields.y = v32;
  v55.fields.z = z;
  v33 = (UnityEngine_Object_o *)SpringPanel__Begin((UnityEngine_GameObject_o *)cachedTransform, v55, 6.0, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v34 = UnityEngine_Object__op_Inequality(v33, 0, 0);
  cachedTransform = 1;
  if ( v34 )
  {
    this->fields.isBusy = 1;
    if ( v33 )
    {
      klass = (System_Delegate_o *)v33[2].klass;
      v35 = (GrandQuestFolderBoardItem_o *)&v33[2];
      v37 = (SpringPanel_OnFinished_o *)sub_1C7BD34(SpringPanel_OnFinished_TypeInfo);
      SpringPanel_OnFinished___ctor(v37, (Il2CppObject *)this, Method_ListViewObject_EndMoveCenter__, 0);
      v38 = System_Delegate__Combine(klass, (System_Delegate_o *)v37, 0);
      if ( v38 )
      {
        v45 = SpringPanel_OnFinished_TypeInfo;
        if ( (SpringPanel_OnFinished_c *)v38->klass != SpringPanel_OnFinished_TypeInfo
          || (v35->klass = (GrandQuestFolderBoardItem_c *)v38, (SpringPanel_OnFinished_c *)v38->klass != v45) )
        {
          sub_1C7C0DC(v38);
          goto LABEL_32;
        }
      }
      else
      {
        v35->klass = 0;
      }
      sub_1C7BA8C(v35, (int32_t)v38, v39, v40, v41, v42, v43, v44);
LABEL_44:
      LOBYTE(cachedTransform) = 1;
      return cachedTransform;
    }
    goto LABEL_46;
  }
  return cachedTransform;
}


bool ListViewObject__MoveCenter(
        ListViewObject_o *this,
        bool isAnimation,
        bool restrictScrollViewRange,
        float forceShiftPosY,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppObject *v10; // x20
  __int64 transform; // x0
  __int64 v12; // x1
  UIScrollView_o *Component_object; // x22
  UnityEngine_Transform_o *cachedTransform; // x24
  float32x2_t v15; // d9
  float v16; // s10
  float32x2_t v17; // d11
  float v18; // s12
  float x; // s9
  float y; // s11
  float v21; // s10
  float v22; // s11
  bool canMoveHorizontally; // w25
  bool canMoveVertically; // w0
  float v25; // s0
  float v26; // s2
  float v27; // s9
  float v28; // s8
  float z; // s10
  float v30; // s8
  float v31; // s9
  __int64 v32; // kr00_8
  float v33; // s12
  float v34; // s13
  int klass_high; // w8
  float v36; // s4
  float v37; // s12
  float v38; // s11
  float v39; // s15
  float v40; // s10
  float v41; // s0
  float v42; // s1
  float v43; // s13
  float v44; // s14
  bool v45; // zf
  float v46; // s11
  float v47; // s12
  bool v48; // w0
  float v49; // s0
  float v50; // s1
  float v51; // s2
  UnityEngine_Object_o *v52; // x20
  bool v53; // w8
  System_Delegate_o *klass; // t1
  System_Delegate_o *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  SpringPanel_OnFinished_c *v62; // x1
  Il2CppObject *v63; // x21
  float v64; // s11
  float v65; // s12
  unsigned __int64 positiona; // [xsp+0h] [xbp-C0h]
  float position; // [xsp+0h] [xbp-C0h]
  __int64 v69; // [xsp+18h] [xbp-A8h] BYREF
  float v70; // [xsp+24h] [xbp-9Ch]
  float v71; // [xsp+28h] [xbp-98h]
  float v72; // [xsp+78h] [xbp-48h]
  float v73; // [xsp+7Ch] [xbp-44h]
  UnityEngine_Vector2_o v74; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o finalClipRegion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CEFD7E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
    sub_1C7BAE8(&Method_ListViewObject_EndMoveCenter__);
    sub_1C7BAE8(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SpringPanel_OnFinished_TypeInfo);
    byte_4CEFD7E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v10 = NGUITools__FindInParents_object_(
          gameObject,
          (const MethodInfo_31F9E0C *)Method_NGUITools_FindInParents_UIPanel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0);
  if ( (transform & 1) == 0 )
    goto LABEL_47;
  if ( !v10 )
    goto LABEL_72;
  if ( HIDWORD(v10[18].klass) )
  {
    Component_object = (UIScrollView_o *)UnityEngine_Component__GetComponent_object_(
                                           (UnityEngine_Component_o *)v10,
                                           (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)v10, 0);
    transform = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v10->klass->vtable[11].methodPtr)(
                  v10,
                  v10->klass->vtable[11].method);
    if ( !transform )
      goto LABEL_72;
    if ( *(_DWORD *)(transform + 24) <= 2u )
      sub_1C7BD48(transform);
    v15.n64_u64[0] = *(unsigned __int64 *)(transform + 56);
    v16 = *(float *)(transform + 64);
    v17.n64_u64[0] = *(unsigned __int64 *)(transform + 32);
    v18 = *(float *)(transform + 40);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_72;
    v75 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
    if ( !cachedTransform )
      goto LABEL_72;
    positiona = vmul_f32(vadd_f32(v15, v17), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    v76 = UnityEngine_Transform__InverseTransformPoint(cachedTransform, v75, 0);
    x = v76.fields.x;
    LODWORD(v76.fields.x) = positiona;
    y = v76.fields.y;
    v76.fields.z = (float)(v16 + v18) * 0.5;
    v76.fields.y = *((float *)&positiona + 1);
    v77 = UnityEngine_Transform__InverseTransformPoint(cachedTransform, v76, 0);
    if ( !Component_object )
      goto LABEL_72;
    v21 = v77.fields.x;
    v22 = y - v77.fields.y;
    canMoveHorizontally = UIScrollView__get_canMoveHorizontally(Component_object, 0);
    canMoveVertically = UIScrollView__get_canMoveVertically(Component_object, 0);
    v25 = v22 + forceShiftPosY;
    if ( forceShiftPosY == 0.0 )
      v25 = v22;
    v26 = x - v21;
    if ( canMoveVertically )
      v27 = v25;
    else
      v27 = 0.0;
    if ( canMoveHorizontally )
      v28 = v26;
    else
      v28 = 0.0;
    localPosition = UnityEngine_Transform__get_localPosition(cachedTransform, 0);
    z = localPosition.fields.z;
    v30 = localPosition.fields.x - v28;
    v31 = localPosition.fields.y - v27;
    if ( restrictScrollViewRange && Component_object->fields.restrictWithinPanel )
    {
      position = localPosition.fields.z;
      ((void (__fastcall *)(__int64 *__return_ptr, UIScrollView_o *, const MethodInfo *))Component_object->klass->vtable._4_get_bounds.methodPtr)(
        &v69,
        Component_object,
        Component_object->klass->vtable._4_get_bounds.method);
      v32 = v69;
      v33 = v70;
      v34 = v71;
      finalClipRegion = UIPanel__get_finalClipRegion((UIPanel_o *)v10, 0);
      klass_high = HIDWORD(v10[18].klass);
      v36 = *(float *)&v32 + v33;
      finalClipRegion.fields.z = finalClipRegion.fields.z * 0.5;
      finalClipRegion.fields.w = finalClipRegion.fields.w * 0.5;
      v37 = (float)(*(float *)&v32 - v33) + finalClipRegion.fields.z;
      v38 = v36 - finalClipRegion.fields.z;
      v39 = (float)(*((float *)&v32 + 1) - v34) + finalClipRegion.fields.w;
      v40 = (float)(*((float *)&v32 + 1) + v34) - finalClipRegion.fields.w;
      v72 = finalClipRegion.fields.x;
      v73 = finalClipRegion.fields.y;
      if ( klass_high == 3 )
      {
        v41 = *(float *)&v10[19].monitor;
        v42 = *((float *)&v10[19].monitor + 1);
        v37 = v37 - v41;
        v38 = v38 + v41;
        v39 = v39 - v42;
        v40 = v40 + v42;
      }
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      if ( !transform )
        goto LABEL_72;
      v79 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
      v43 = v79.fields.x;
      v44 = v79.fields.y;
      v45 = !UIScrollView__get_canMoveHorizontally(Component_object, 0);
      if ( v45 )
        v46 = v43;
      else
        v46 = (float)(v72 - v38) + v43;
      if ( v45 )
        v47 = v43;
      else
        v47 = (float)(v72 - v37) + v43;
      v48 = UIScrollView__get_canMoveVertically(Component_object, 0);
      v49 = (float)(v73 - v39) + v44;
      if ( v48 )
      {
        v50 = (float)(v73 - v40) + v44;
      }
      else
      {
        v49 = v44;
        v50 = v44;
      }
      if ( v30 <= v46 )
        v51 = v30;
      else
        v51 = v46;
      if ( v30 < v47 )
        v30 = v47;
      else
        v30 = v51;
      if ( v31 < v50 )
      {
        v31 = v50;
      }
      else if ( v31 > v49 )
      {
        v31 = v49;
      }
      z = position;
    }
    transform = (__int64)UIRect__get_cachedGameObject((UIRect_o *)v10, 0);
    if ( !isAnimation )
    {
LABEL_59:
      if ( !transform )
        goto LABEL_72;
      v63 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)transform,
              (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v63, 0, 0);
      if ( (transform & 1) != 0 )
      {
        this->fields.isBusy = 0;
        if ( !v63 )
          goto LABEL_72;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v63, 0, 0);
      }
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      if ( transform )
      {
        v81 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
        v64 = v81.fields.x;
        v65 = v81.fields.y;
        transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
        if ( transform )
        {
          v82.fields.x = v30;
          v82.fields.y = v31;
          v82.fields.z = z;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v82, 0);
          v74.fields.x = *((float *)&v10[20].monitor + 1) - (float)(v30 - v64);
          v74.fields.y = *(float *)&v10[21].klass - (float)(v31 - v65);
          UIPanel__set_clipOffset((UIPanel_o *)v10, v74, 0);
          ((void (__fastcall *)(UIScrollView_o *, _QWORD, const MethodInfo *))Component_object->klass->vtable._8_UpdateScrollbars.methodPtr)(
            Component_object,
            0,
            Component_object->klass->vtable._8_UpdateScrollbars.method);
LABEL_70:
          LOBYTE(transform) = 1;
          return transform;
        }
      }
LABEL_72:
      sub_1C7BD40(transform, v12);
    }
    v80.fields.x = v30;
    v80.fields.y = v31;
    v80.fields.z = z;
    v52 = (UnityEngine_Object_o *)SpringPanel__Begin((UnityEngine_GameObject_o *)transform, v80, 6.0, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v53 = UnityEngine_Object__op_Inequality(v52, 0, 0);
    transform = 1;
    if ( v53 )
    {
      this->fields.isBusy = 1;
      if ( !v52 )
        goto LABEL_72;
      klass = (System_Delegate_o *)v52[2].klass;
      v10 = (Il2CppObject *)&v52[2];
      Component_object = (UIScrollView_o *)sub_1C7BD34(SpringPanel_OnFinished_TypeInfo);
      SpringPanel_OnFinished___ctor(
        (SpringPanel_OnFinished_o *)Component_object,
        (Il2CppObject *)this,
        Method_ListViewObject_EndMoveCenter__,
        0);
      v55 = System_Delegate__Combine(klass, (System_Delegate_o *)Component_object, 0);
      if ( v55 )
      {
        v62 = SpringPanel_OnFinished_TypeInfo;
        if ( (SpringPanel_OnFinished_c *)v55->klass != SpringPanel_OnFinished_TypeInfo
          || (v10->klass = (Il2CppClass *)v55, (SpringPanel_OnFinished_c *)v55->klass != v62) )
        {
          sub_1C7C0DC(v55);
          goto LABEL_59;
        }
      }
      else
      {
        v10->klass = 0;
      }
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v10, (int32_t)v55, v56, v57, v58, v59, v60, v61);
      goto LABEL_70;
    }
  }
  else
  {
LABEL_47:
    LOBYTE(transform) = 0;
  }
  return transform;
}


bool ListViewObject__MoveTop(ListViewObject_o *this, bool isAnimation, float offSet, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  Il2CppObject *v8; // x20
  __int64 cachedTransform; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x22
  struct ListViewManager_o *manager; // x8
  struct ListViewItemSeed_o *seed; // x8
  float x; // s13
  float y; // s14
  UnityEngine_Transform_o *v16; // x23
  float v17; // s9
  float v18; // s10
  float v19; // s11
  float v20; // s12
  float v21; // s1
  float v22; // s8
  float v23; // s13
  float v24; // s14
  bool canMoveHorizontally; // w24
  bool canMoveVertically; // w0
  float v27; // s1
  float v28; // s9
  float v29; // s8
  float z; // s10
  float v31; // s8
  float v32; // s9
  UnityEngine_Object_o *v33; // x20
  bool v34; // w8
  GrandQuestFolderBoardItem_o *v35; // x20
  System_Delegate_o *klass; // t1
  SpringPanel_OnFinished_o *v37; // x22
  System_Delegate_o *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  SpringPanel_OnFinished_c *v45; // x1
  Il2CppObject *v46; // x21
  float v47; // s11
  float v48; // s12
  UnityEngine_Vector2_o v50; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEFD7F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
    sub_1C7BAE8(&Method_ListViewObject_EndMoveCenter__);
    sub_1C7BAE8(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SpringPanel_OnFinished_TypeInfo);
    byte_4CEFD7F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v8 = NGUITools__FindInParents_object_(
         gameObject,
         (const MethodInfo_31F9E0C *)Method_NGUITools_FindInParents_UIPanel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  cachedTransform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
  if ( (cachedTransform & 1) == 0 )
    goto LABEL_32;
  if ( !v8 )
    goto LABEL_46;
  if ( !HIDWORD(v8[18].klass) )
  {
LABEL_32:
    LOBYTE(cachedTransform) = 0;
    return cachedTransform;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)v8,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  cachedTransform = (__int64)UIRect__get_cachedTransform((UIRect_o *)v8, 0);
  manager = this->fields.manager;
  if ( !manager )
    goto LABEL_46;
  seed = manager->fields.seed;
  if ( !seed )
    goto LABEL_46;
  x = seed->fields.arrangementPich.fields.x;
  y = seed->fields.arrangementPich.fields.y;
  v16 = (UnityEngine_Transform_o *)cachedTransform;
  cachedTransform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !cachedTransform )
    goto LABEL_46;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)cachedTransform, 0);
  if ( !v16 )
    goto LABEL_46;
  v52 = UnityEngine_Transform__InverseTransformPoint(v16, position, 0);
  v17 = v52.fields.x;
  v18 = v52.fields.y;
  cachedTransform = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v8->klass->vtable[11].methodPtr)(
                      v8,
                      v8->klass->vtable[11].method);
  if ( !cachedTransform )
    goto LABEL_46;
  if ( *(_DWORD *)(cachedTransform + 24) <= 1u )
    sub_1C7BD48(cachedTransform);
  v53 = UnityEngine_Transform__InverseTransformPoint(v16, *(UnityEngine_Vector3_o *)(cachedTransform + 44), 0);
  if ( !Component_object )
    goto LABEL_46;
  v19 = v53.fields.x;
  v20 = v53.fields.y;
  v21 = offSet + offSet;
  v22 = x * 0.5;
  v23 = y * 0.5;
  v24 = v21 + 1.0;
  canMoveHorizontally = UIScrollView__get_canMoveHorizontally((UIScrollView_o *)Component_object, 0);
  canMoveVertically = UIScrollView__get_canMoveVertically((UIScrollView_o *)Component_object, 0);
  v27 = (float)(v17 - v19) - (float)(v24 * v22);
  if ( canMoveVertically )
    v28 = (float)(v18 - v20) - (float)(v24 * v23);
  else
    v28 = 0.0;
  if ( canMoveHorizontally )
    v29 = v27;
  else
    v29 = 0.0;
  localPosition = UnityEngine_Transform__get_localPosition(v16, 0);
  z = localPosition.fields.z;
  v31 = localPosition.fields.x - v29;
  v32 = localPosition.fields.y - v28;
  cachedTransform = (__int64)UIRect__get_cachedGameObject((UIRect_o *)v8, 0);
  if ( !isAnimation )
  {
    if ( !cachedTransform )
      goto LABEL_46;
    v46 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)cachedTransform,
            (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v46, 0, 0);
    if ( (cachedTransform & 1) != 0 )
    {
      this->fields.isBusy = 0;
      if ( !v46 )
        goto LABEL_46;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v46, 0, 0);
    }
    cachedTransform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
    if ( cachedTransform )
    {
      v56 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)cachedTransform, 0);
      v47 = v56.fields.x;
      v48 = v56.fields.y;
      cachedTransform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      if ( cachedTransform )
      {
        v57.fields.x = v31;
        v57.fields.y = v32;
        v57.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)cachedTransform, v57, 0);
        v50.fields.x = *((float *)&v8[20].monitor + 1) - (float)(v31 - v47);
        v50.fields.y = *(float *)&v8[21].klass - (float)(v32 - v48);
        UIPanel__set_clipOffset((UIPanel_o *)v8, v50, 0);
        ((void (__fastcall *)(Il2CppObject *, _QWORD, const MethodInfo *))Component_object->klass->vtable[8].methodPtr)(
          Component_object,
          0,
          Component_object->klass->vtable[8].method);
        goto LABEL_44;
      }
    }
LABEL_46:
    sub_1C7BD40(cachedTransform, v10);
  }
  v55.fields.x = v31;
  v55.fields.y = v32;
  v55.fields.z = z;
  v33 = (UnityEngine_Object_o *)SpringPanel__Begin((UnityEngine_GameObject_o *)cachedTransform, v55, 6.0, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v34 = UnityEngine_Object__op_Inequality(v33, 0, 0);
  cachedTransform = 1;
  if ( v34 )
  {
    this->fields.isBusy = 1;
    if ( v33 )
    {
      klass = (System_Delegate_o *)v33[2].klass;
      v35 = (GrandQuestFolderBoardItem_o *)&v33[2];
      v37 = (SpringPanel_OnFinished_o *)sub_1C7BD34(SpringPanel_OnFinished_TypeInfo);
      SpringPanel_OnFinished___ctor(v37, (Il2CppObject *)this, Method_ListViewObject_EndMoveCenter__, 0);
      v38 = System_Delegate__Combine(klass, (System_Delegate_o *)v37, 0);
      if ( v38 )
      {
        v45 = SpringPanel_OnFinished_TypeInfo;
        if ( (SpringPanel_OnFinished_c *)v38->klass != SpringPanel_OnFinished_TypeInfo
          || (v35->klass = (GrandQuestFolderBoardItem_c *)v38, (SpringPanel_OnFinished_c *)v38->klass != v45) )
        {
          sub_1C7C0DC(v38);
          goto LABEL_32;
        }
      }
      else
      {
        v35->klass = 0;
      }
      sub_1C7BA8C(v35, (int32_t)v38, v39, v40, v41, v42, v43, v44);
LABEL_44:
      LOBYTE(cachedTransform) = 1;
      return cachedTransform;
    }
    goto LABEL_46;
  }
  return cachedTransform;
}


void ListViewObject__OnClick(ListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4CEFD81 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_9874/*"OnClickListView"*/);
    byte_4CEFD81 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C7BD40(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9874/*"OnClickListView"*/, (Il2CppObject *)this, 0);
  }
}


void ListViewObject__OnDragEnd(ListViewObject_o *this, const MethodInfo *method)
{
  this->fields.isBusy = 0;
}


void ListViewObject__OnDragStart(ListViewObject_o *this, const MethodInfo *method)
{
  this->fields.isBusy = 1;
}


void ListViewObject__ReleaseItem(ListViewObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ListViewItem_o *linkItem; // x0
  struct ListViewItem_o **p_linkItem; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  p_linkItem = &this->fields.linkItem;
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    linkItem->fields.viewObject = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&linkItem->fields.viewObject, 0, v2, v3, v4, v5, v6, v7);
    this->fields.linkItem = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_linkItem, 0, v11, v12, v13, v14, v15, v16);
    ((void (__fastcall *)(ListViewObject_o *, const MethodInfo *))this->klass->vtable._10_Invalidation.methodPtr)(
      this,
      this->klass->vtable._10_Invalidation.method);
  }
}


void ListViewObject__SetBaseTransform(ListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  struct UnityEngine_Transform_o *parent; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (parent = UnityEngine_Transform__get_parent(transform, 0),
        this->fields.baseParent = parent,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.baseParent, (int32_t)parent, v6, v7, v8, v9, v10, v11),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
    || (this->fields.basePosition = UnityEngine_Transform__get_localPosition(transform, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C7BD40(transform, v4);
  }
  this->fields.baseScale = UnityEngine_Transform__get_localScale(transform, 0);
}


void ListViewObject__SetDragPrefab(ListViewObject_o *this, UnityEngine_GameObject_o *prefab, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.dragObjectPrefab = prefab;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.dragObjectPrefab,
    (int32_t)prefab,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ListViewObject__SetEnabledColliderDragMask(ListViewObject_o *this, bool value, const MethodInfo *method)
{
  ListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C7BD40(0, value);
  ListViewManager__SetEnabledColliderDragMask(manager, value, method);
}


void ListViewObject__SetInput(ListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Object_o *mCollider; // x21
  __int64 v6; // x1
  UnityEngine_Collider_o *v7; // x0
  UnityEngine_Object_o *mDragDrop; // x21

  if ( (byte_4CEFD7D & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEFD7D = 1;
  }
  mCollider = (UnityEngine_Object_o *)this->fields.mCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mCollider, 0, 0) )
  {
    v7 = this->fields.mCollider;
    if ( !v7 )
      goto LABEL_14;
    UnityEngine_Collider__set_enabled(v7, isInput, 0);
  }
  mDragDrop = (UnityEngine_Object_o *)this->fields.mDragDrop;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mDragDrop, 0, 0) )
  {
    v7 = (UnityEngine_Collider_o *)this->fields.mDragDrop;
    if ( v7 )
    {
      UIDragDropListViewItem__SetEnable((UIDragDropListViewItem_o *)v7, isInput, 0);
      return;
    }
LABEL_14:
    sub_1C7BD40(v7, v6);
  }
}


void ListViewObject__SetItem(ListViewObject_o *this, ListViewItem_o *item, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v9; // x2

  this->fields.linkItem = item;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.linkItem, (int32_t)item, (int32_t)method, v3, v4, v5, v6, v7);
  ListViewObject__SetVisible(this, 0, v9);
  ((void (__fastcall *)(ListViewObject_o *, _QWORD, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    0,
    this->klass->vtable._9_SetInput.method);
}


void ListViewObject__SetItemSeed(
        ListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  UnityEngine_Transform_o *v9; // x22
  UnityEngine_Transform_o *v10; // x21
  UnityEngine_Transform_o *v11; // x21
  UnityEngine_GameObject_o *parent; // x8
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CEFD79 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_12843/*"SetBaseTransform"*/);
    byte_4CEFD79 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !seed )
    goto LABEL_16;
  v9 = transform;
  transform = (UnityEngine_Transform_o *)seed->fields.parent;
  if ( !transform )
    goto LABEL_16;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  if ( !v9 )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(v9, transform, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !item )
    goto LABEL_16;
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_localPosition(transform, item->fields.basePosition, 0);
  v10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)seed, 0);
  if ( !transform )
    goto LABEL_16;
  localRotation = UnityEngine_Transform__get_localRotation(transform, 0);
  if ( !v10 )
    goto LABEL_16;
  UnityEngine_Transform__set_localRotation(v10, localRotation, 0);
  v11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)seed, 0);
  if ( !transform )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale(transform, 0);
  if ( !v11
    || (UnityEngine_Transform__set_localScale(v11, localScale, 0),
        transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        (parent = seed->fields.parent) == 0)
    || (v13 = (UnityEngine_GameObject_o *)transform,
        transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__get_layer(parent, 0),
        !v13)
    || (UnityEngine_GameObject__set_layer(v13, (int32_t)transform, 0),
        (transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0)) == 0) )
  {
LABEL_16:
    sub_1C7BD40(transform, v8);
  }
  UnityEngine_GameObject__SendMessage_71851516(
    (UnityEngine_GameObject_o *)transform,
    (System_String_o *)StringLiteral_12843/*"SetBaseTransform"*/,
    0);
}


void ListViewObject__SetItem_44356304(
        ListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ListViewObject_o *v10; // x19
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  ListViewObject_o *v17; // x22
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Transform_o *v19; // x21
  UnityEngine_GameObject_o *parent; // x8
  ListViewObject_o *v21; // x20
  const MethodInfo *v22; // x2
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v10 = this;
  if ( (byte_4CEFD78 & 1) == 0 )
  {
    this = (ListViewObject_o *)sub_1C7BAE8(&StringLiteral_12843/*"SetBaseTransform"*/);
    byte_4CEFD78 = 1;
  }
  if ( !item )
    goto LABEL_16;
  item->fields.viewObject = v10;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&item->fields.viewObject,
    (int32_t)v10,
    (int32_t)seed,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v10->fields.linkItem = item;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v10->fields.linkItem, (int32_t)item, v11, v12, v13, v14, v15, v16);
  this = (ListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v10, 0);
  if ( !seed )
    goto LABEL_16;
  v17 = this;
  this = (ListViewObject_o *)seed->fields.parent;
  if ( !this )
    goto LABEL_16;
  this = (ListViewObject_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !v17 )
    goto LABEL_16;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v17, (UnityEngine_Transform_o *)this, 0);
  this = (ListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v10, 0);
  if ( !this )
    goto LABEL_16;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, item->fields.basePosition, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v10, 0);
  this = (ListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seed, 0);
  if ( !this )
    goto LABEL_16;
  localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)this, 0);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_localRotation(transform, localRotation, 0);
  v19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v10, 0);
  this = (ListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seed, 0);
  if ( !this )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
  if ( !v19 )
    goto LABEL_16;
  UnityEngine_Transform__set_localScale(v19, localScale, 0);
  this = (ListViewObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0);
  parent = seed->fields.parent;
  if ( !parent
    || (v21 = this, this = (ListViewObject_o *)UnityEngine_GameObject__get_layer(parent, 0), !v21)
    || (UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v21, (int32_t)this, 0),
        ListViewObject__SetVisible(v10, 1, v22),
        ((void (__fastcall *)(ListViewObject_o *, _QWORD, const MethodInfo *))v10->klass->vtable._9_SetInput.methodPtr)(
          v10,
          0,
          v10->klass->vtable._9_SetInput.method),
        (this = (ListViewObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0)) == 0) )
  {
LABEL_16:
    sub_1C7BD40(this, item);
  }
  UnityEngine_GameObject__SendMessage_71851516(
    (UnityEngine_GameObject_o *)this,
    (System_String_o *)StringLiteral_12843/*"SetBaseTransform"*/,
    0);
}


void ListViewObject__SetManager(ListViewObject_o *this, ListViewManager_o *manager, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.manager = manager;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.manager,
    (int32_t)manager,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ListViewObject__SetTransform(ListViewObject_o *this, UnityEngine_Vector3_o position, const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C7BD40(0, v8);
  v9.fields.x = x;
  v9.fields.y = y;
  v9.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v9, 0);
  this->fields.basePosition.fields.x = x;
  this->fields.basePosition.fields.y = y;
  this->fields.basePosition.fields.z = z;
}


void ListViewObject__SetVisible(ListViewObject_o *this, bool isVisible, const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4CEFD7B & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEFD7B = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0, 0) )
  {
    v7 = this->fields.dispObject;
    if ( !v7 )
      sub_1C7BD40(0, v6);
    UnityEngine_GameObject__SetActive(v7, isVisible, 0);
  }
}


int32_t ListViewObject__get_Index(ListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8

  linkItem = this->fields.linkItem;
  if ( linkItem )
    return linkItem->fields.index;
  else
    return -1;
}


bool ListViewObject__get_IsBusy(ListViewObject_o *this, const MethodInfo *method)
{
  return this->fields.isBusy;
}


ListViewManager_o *ListViewObject__get_Manager(ListViewObject_o *this, const MethodInfo *method)
{
  return this->fields.manager;
}