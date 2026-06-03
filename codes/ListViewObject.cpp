void ListViewObject___cctor(const MethodInfo *method)
{
  if ( (byte_4E78DF8 & 1) == 0 )
  {
    sub_1D0F0B4(&ListViewObject_TypeInfo);
    byte_4E78DF8 = 1;
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

  if ( (byte_4E78DEB & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
    byte_4E78DEB = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = (struct UnityEngine_Collider_o *)Component_object;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.mCollider, (int32_t)Component_object, v4, v5, v6, v7, v8, v9);
  v10 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.mDragDrop = (struct UIDragDropListViewItem_o *)v10;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.mDragDrop, (int32_t)v10, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_4E78DF7 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E78DF7 = 1;
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
    sub_1D0F30C(0, v6);
  v14->fields.viewObject = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v14->fields.viewObject, 0, v7, v8, v9, v10, v11, v12);
  this->fields.linkItem = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.linkItem, 0, v15, v16, v17, v18, v19, v20);
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

  if ( (byte_4E78DEC & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E78DEC = 1;
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
    sub_1D0F30C(0, v6);
  v14->fields.viewObject = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v14->fields.viewObject, 0, v7, v8, v9, v10, v11, v12);
  this->fields.linkItem = 0;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.linkItem, 0, v15, v16, v17, v18, v19, v20);
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

  if ( (byte_4E78DEF & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_1D0F0B4(&NGUITools_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E78DEF = 1;
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
    manager = (__int64)NGUITools__AddChild_50753020(v10, v9, 0);
    if ( !manager )
      goto LABEL_27;
    v6 = (UnityEngine_GameObject_o *)manager;
    manager = (__int64)UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)manager,
                         (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    if ( !manager )
      goto LABEL_27;
    linkItem = this->fields.linkItem;
    v18 = manager;
    *(_QWORD *)(manager + 56) = linkItem;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(manager + 56), (int32_t)linkItem, v11, v12, v13, v14, v15, v16);
    v19 = this->fields.manager;
    *(_QWORD *)(v18 + 40) = v19;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v18 + 40), (int32_t)v19, v20, v21, v22, v23, v24, v25);
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
    if ( !byte_4E70C9E )
    {
      manager = sub_1D0F0B4(&UnityEngine_Vector3_TypeInfo);
      byte_4E70C9E = 1;
    }
    if ( !v28 )
      goto LABEL_27;
    UnityEngine_Transform__set_localScale(v28, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    manager = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !manager )
      goto LABEL_27;
    v42 = UnityEngine_Transform__TransformPoint_73386264((UnityEngine_Transform_o *)manager, 1.0, 1.0, 0.0, 0);
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
      sub_1D0F30C(manager, v5);
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
    sub_1D0F30C(0, method);
  ListViewManager__DragMaskEnd(manager, method);
}


void ListViewObject__DragMaskStart(ListViewObject_o *this, const MethodInfo *method)
{
  ListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1D0F30C(0, method);
  ListViewManager__DragMaskStart(manager, method);
}


void ListViewObject__EndMoveCenter(ListViewObject_o *this, const MethodInfo *method)
{
  ListViewManager_o *manager; // x0

  manager = this->fields.manager;
  this->fields.isBusy = 0;
  if ( !manager )
    sub_1D0F30C(0, method);
  ListViewManager__EndScrollAnim(manager, method);
}


UnityEngine_GameObject_o *ListViewObject__GetDragRoot(ListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1D0F30C(0, method);
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

  if ( (byte_4E78DF1 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E78DF1 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(dispObject, 0, 0) )
    return 0;
  v5 = this->fields.dispObject;
  if ( !v5 )
    sub_1D0F30C(0, v4);
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

  if ( (byte_4E78DF5 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
    sub_1D0F0B4(&Method_ListViewObject_EndMoveCenter__);
    sub_1D0F0B4(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1D0F0B4(&NGUITools_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&SpringPanel_OnFinished_TypeInfo);
    byte_4E78DF5 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v8 = NGUITools__FindInParents_object_(
         gameObject,
         (const MethodInfo_32DB22C *)Method_NGUITools_FindInParents_UIPanel___);
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
                       (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
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
    sub_1D0F314(cachedTransform);
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
            (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
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
    sub_1D0F30C(cachedTransform, v10);
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
      v37 = (SpringPanel_OnFinished_o *)sub_1D0F300(SpringPanel_OnFinished_TypeInfo);
      SpringPanel_OnFinished___ctor(v37, (Il2CppObject *)this, Method_ListViewObject_EndMoveCenter__, 0);
      v38 = System_Delegate__Combine(klass, (System_Delegate_o *)v37, 0);
      if ( v38 )
      {
        v45 = SpringPanel_OnFinished_TypeInfo;
        if ( (SpringPanel_OnFinished_c *)v38->klass != SpringPanel_OnFinished_TypeInfo
          || (v35->klass = (GrandQuestFolderBoardItem_c *)v38, (SpringPanel_OnFinished_c *)v38->klass != v45) )
        {
          sub_1D0F6A8(v38);
          goto LABEL_32;
        }
      }
      else
      {
        v35->klass = 0;
      }
      sub_1D0F058(v35, (int32_t)v38, v39, v40, v41, v42, v43, v44);
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
        bool checkCancel,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x21
  Il2CppObject *v12; // x21
  __int64 transform; // x0
  __int64 v14; // x1
  UIScrollView_o *Component_object; // x23
  UnityEngine_Transform_o *cachedTransform; // x25
  float32x2_t v17; // d9
  float v18; // s10
  float32x2_t v19; // d11
  float v20; // s12
  float x; // s9
  float y; // s11
  float v23; // s10
  float v24; // s11
  bool canMoveHorizontally; // w26
  bool canMoveVertically; // w0
  float v27; // s0
  float v28; // s2
  float v29; // s9
  float v30; // s8
  float z; // s10
  float v32; // s8
  float v33; // s9
  __int64 v34; // kr00_8
  float v35; // s12
  float v36; // s13
  float v37; // s4
  float v38; // s12
  float v39; // s11
  float v40; // s15
  float v41; // s10
  float v42; // s0
  float v43; // s1
  float v44; // s13
  float v45; // s14
  bool v46; // zf
  float v47; // s11
  float v48; // s12
  bool v49; // w0
  float v50; // s0
  float v51; // s1
  float v52; // s2
  SpringPanel_o *v53; // x21
  bool v54; // w8
  _QWORD *p_onFinished; // x22
  System_Delegate_o *onFinished; // x23
  SpringPanel_OnFinished_o *v57; // x24
  System_Delegate_o *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  System_Delegate_o *v65; // x8
  SpringPanel_OnFinished_c *v66; // x1
  Il2CppObject *v67; // x20
  float v68; // s11
  float v69; // s12
  System_Delegate_o *onCanceled; // t1
  SpringPanel_OnFinished_o *v71; // x22
  System_Delegate_o *v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  SpringPanel_OnFinished_c *v79; // x1
  float v81; // [xsp+8h] [xbp-C8h]
  float v82; // [xsp+Ch] [xbp-C4h]
  unsigned __int64 positiona; // [xsp+10h] [xbp-C0h]
  float position; // [xsp+10h] [xbp-C0h]
  __int64 v85; // [xsp+28h] [xbp-A8h] BYREF
  float v86; // [xsp+34h] [xbp-9Ch]
  float v87; // [xsp+38h] [xbp-98h]
  UnityEngine_Vector2_o v88; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o finalClipRegion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E78DF3 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
    sub_1D0F0B4(&Method_ListViewObject_EndMoveCenter__);
    sub_1D0F0B4(&Method_ListViewObject_OnMoveCancel__);
    sub_1D0F0B4(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1D0F0B4(&NGUITools_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&SpringPanel_OnFinished_TypeInfo);
    byte_4E78DF3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v12 = NGUITools__FindInParents_object_(
          gameObject,
          (const MethodInfo_32DB22C *)Method_NGUITools_FindInParents_UIPanel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
  if ( (transform & 1) == 0 )
    goto LABEL_47;
  if ( !v12 )
    goto LABEL_78;
  if ( HIDWORD(v12[18].klass) )
  {
    Component_object = (UIScrollView_o *)UnityEngine_Component__GetComponent_object_(
                                           (UnityEngine_Component_o *)v12,
                                           (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)v12, 0);
    transform = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v12->klass->vtable[11].methodPtr)(
                  v12,
                  v12->klass->vtable[11].method);
    if ( !transform )
      goto LABEL_78;
    if ( *(_DWORD *)(transform + 24) <= 2u )
      sub_1D0F314(transform);
    v17.n64_u64[0] = *(unsigned __int64 *)(transform + 56);
    v18 = *(float *)(transform + 64);
    v19.n64_u64[0] = *(unsigned __int64 *)(transform + 32);
    v20 = *(float *)(transform + 40);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_78;
    v89 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
    if ( !cachedTransform )
      goto LABEL_78;
    positiona = vmul_f32(vadd_f32(v17, v19), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    v90 = UnityEngine_Transform__InverseTransformPoint(cachedTransform, v89, 0);
    x = v90.fields.x;
    LODWORD(v90.fields.x) = positiona;
    y = v90.fields.y;
    v90.fields.z = (float)(v18 + v20) * 0.5;
    v90.fields.y = *((float *)&positiona + 1);
    v91 = UnityEngine_Transform__InverseTransformPoint(cachedTransform, v90, 0);
    if ( !Component_object )
      goto LABEL_78;
    v23 = v91.fields.x;
    v24 = y - v91.fields.y;
    canMoveHorizontally = UIScrollView__get_canMoveHorizontally(Component_object, 0);
    canMoveVertically = UIScrollView__get_canMoveVertically(Component_object, 0);
    v27 = v24 + forceShiftPosY;
    if ( forceShiftPosY == 0.0 )
      v27 = v24;
    v28 = x - v23;
    if ( canMoveVertically )
      v29 = v27;
    else
      v29 = 0.0;
    if ( canMoveHorizontally )
      v30 = v28;
    else
      v30 = 0.0;
    localPosition = UnityEngine_Transform__get_localPosition(cachedTransform, 0);
    z = localPosition.fields.z;
    v32 = localPosition.fields.x - v30;
    v33 = localPosition.fields.y - v29;
    if ( restrictScrollViewRange && Component_object->fields.restrictWithinPanel )
    {
      position = localPosition.fields.z;
      ((void (__fastcall *)(__int64 *__return_ptr, UIScrollView_o *, const MethodInfo *))Component_object->klass->vtable._4_get_bounds.methodPtr)(
        &v85,
        Component_object,
        Component_object->klass->vtable._4_get_bounds.method);
      v34 = v85;
      v35 = v86;
      v36 = v87;
      finalClipRegion = UIPanel__get_finalClipRegion((UIPanel_o *)v12, 0);
      v81 = finalClipRegion.fields.x;
      v82 = finalClipRegion.fields.y;
      v37 = *(float *)&v34 + v35;
      finalClipRegion.fields.z = finalClipRegion.fields.z * 0.5;
      v38 = (float)(*(float *)&v34 - v35) + finalClipRegion.fields.z;
      v39 = v37 - finalClipRegion.fields.z;
      v40 = (float)(*((float *)&v34 + 1) - v36) + (float)(finalClipRegion.fields.w * 0.5);
      v41 = (float)(*((float *)&v34 + 1) + v36) - (float)(finalClipRegion.fields.w * 0.5);
      if ( HIDWORD(v12[18].klass) == 3 )
      {
        v42 = *(float *)&v12[19].monitor;
        v43 = *((float *)&v12[19].monitor + 1);
        v38 = v38 - v42;
        v39 = v39 + v42;
        v40 = v40 - v43;
        v41 = v41 + v43;
      }
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      if ( !transform )
        goto LABEL_78;
      v93 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
      v44 = v93.fields.x;
      v45 = v93.fields.y;
      v46 = !UIScrollView__get_canMoveHorizontally(Component_object, 0);
      if ( v46 )
        v47 = v44;
      else
        v47 = (float)(v81 - v39) + v44;
      if ( v46 )
        v48 = v44;
      else
        v48 = (float)(v81 - v38) + v44;
      v49 = UIScrollView__get_canMoveVertically(Component_object, 0);
      v50 = (float)(v82 - v40) + v45;
      if ( v49 )
      {
        v51 = (float)(v82 - v41) + v45;
      }
      else
      {
        v50 = v45;
        v51 = v45;
      }
      if ( v32 <= v47 )
        v52 = v32;
      else
        v52 = v47;
      if ( v32 < v48 )
        v32 = v48;
      else
        v32 = v52;
      if ( v33 < v51 )
      {
        v33 = v51;
      }
      else if ( v33 > v50 )
      {
        v33 = v50;
      }
      z = position;
    }
    transform = (__int64)UIRect__get_cachedGameObject((UIRect_o *)v12, 0);
    if ( !isAnimation )
    {
      if ( !transform )
        goto LABEL_78;
      v67 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)transform,
              (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v67, 0, 0);
      if ( (transform & 1) != 0 )
      {
        this->fields.isBusy = 0;
        if ( !v67 )
          goto LABEL_78;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v67, 0, 0);
      }
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      if ( transform )
      {
        v95 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
        v68 = v95.fields.x;
        v69 = v95.fields.y;
        transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
        if ( transform )
        {
          v96.fields.x = v32;
          v96.fields.y = v33;
          v96.fields.z = z;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v96, 0);
          v88.fields.x = *((float *)&v12[20].monitor + 1) - (float)(v32 - v68);
          v88.fields.y = *(float *)&v12[21].klass - (float)(v33 - v69);
          UIPanel__set_clipOffset((UIPanel_o *)v12, v88, 0);
          ((void (__fastcall *)(UIScrollView_o *, _QWORD, const MethodInfo *))Component_object->klass->vtable._8_UpdateScrollbars.methodPtr)(
            Component_object,
            0,
            Component_object->klass->vtable._8_UpdateScrollbars.method);
          goto LABEL_76;
        }
      }
LABEL_78:
      sub_1D0F30C(transform, v14);
    }
    v94.fields.x = v32;
    v94.fields.y = v33;
    v94.fields.z = z;
    v53 = SpringPanel__Begin((UnityEngine_GameObject_o *)transform, v94, 6.0, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v54 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v53, 0, 0);
    transform = 1;
    if ( v54 )
    {
      this->fields.isBusy = 1;
      if ( v53 )
      {
        p_onFinished = &v53->fields.onFinished;
        onFinished = (System_Delegate_o *)v53->fields.onFinished;
        v57 = (SpringPanel_OnFinished_o *)sub_1D0F300(SpringPanel_OnFinished_TypeInfo);
        SpringPanel_OnFinished___ctor(v57, (Il2CppObject *)this, Method_ListViewObject_EndMoveCenter__, 0);
        v58 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v57, 0);
        v65 = v58;
        if ( v58 )
        {
          v66 = SpringPanel_OnFinished_TypeInfo;
          if ( (SpringPanel_OnFinished_c *)v58->klass != SpringPanel_OnFinished_TypeInfo )
            goto LABEL_73;
          *p_onFinished = v58;
          if ( (SpringPanel_OnFinished_c *)v58->klass != v66 )
            goto LABEL_73;
        }
        else
        {
          *p_onFinished = 0;
        }
        sub_1D0F058((GrandQuestFolderBoardItem_o *)&v53->fields.onFinished, (int32_t)v58, v59, v60, v61, v62, v63, v64);
        if ( checkCancel )
        {
          onCanceled = (System_Delegate_o *)v53->fields.onCanceled;
          v53 = (SpringPanel_o *)((char *)v53 + 56);
          v71 = (SpringPanel_OnFinished_o *)sub_1D0F300(SpringPanel_OnFinished_TypeInfo);
          SpringPanel_OnFinished___ctor(v71, (Il2CppObject *)this, Method_ListViewObject_OnMoveCancel__, 0);
          v72 = System_Delegate__Combine(onCanceled, (System_Delegate_o *)v71, 0);
          v65 = v72;
          if ( !v72 )
          {
LABEL_74:
            v53->klass = (SpringPanel_c *)v65;
LABEL_75:
            sub_1D0F058((GrandQuestFolderBoardItem_o *)v53, (int32_t)v65, v73, v74, v75, v76, v77, v78);
            goto LABEL_76;
          }
          v79 = SpringPanel_OnFinished_TypeInfo;
          if ( (SpringPanel_OnFinished_c *)v72->klass == SpringPanel_OnFinished_TypeInfo )
          {
            v53->klass = (SpringPanel_c *)v72;
            if ( (SpringPanel_OnFinished_c *)v72->klass == v79 )
              goto LABEL_75;
          }
LABEL_73:
          sub_1D0F6A8(v65);
          goto LABEL_74;
        }
LABEL_76:
        LOBYTE(transform) = 1;
        return transform;
      }
      goto LABEL_78;
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

  if ( (byte_4E78DF4 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1D0F0B4(&Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
    sub_1D0F0B4(&Method_ListViewObject_EndMoveCenter__);
    sub_1D0F0B4(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1D0F0B4(&NGUITools_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    sub_1D0F0B4(&SpringPanel_OnFinished_TypeInfo);
    byte_4E78DF4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v8 = NGUITools__FindInParents_object_(
         gameObject,
         (const MethodInfo_32DB22C *)Method_NGUITools_FindInParents_UIPanel___);
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
                       (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
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
    sub_1D0F314(cachedTransform);
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
            (const MethodInfo_32A8444 *)Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
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
    sub_1D0F30C(cachedTransform, v10);
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
      v37 = (SpringPanel_OnFinished_o *)sub_1D0F300(SpringPanel_OnFinished_TypeInfo);
      SpringPanel_OnFinished___ctor(v37, (Il2CppObject *)this, Method_ListViewObject_EndMoveCenter__, 0);
      v38 = System_Delegate__Combine(klass, (System_Delegate_o *)v37, 0);
      if ( v38 )
      {
        v45 = SpringPanel_OnFinished_TypeInfo;
        if ( (SpringPanel_OnFinished_c *)v38->klass != SpringPanel_OnFinished_TypeInfo
          || (v35->klass = (GrandQuestFolderBoardItem_c *)v38, (SpringPanel_OnFinished_c *)v38->klass != v45) )
        {
          sub_1D0F6A8(v38);
          goto LABEL_32;
        }
      }
      else
      {
        v35->klass = 0;
      }
      sub_1D0F058(v35, (int32_t)v38, v39, v40, v41, v42, v43, v44);
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

  if ( (byte_4E78DF6 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_9966/*"OnClickListView"*/);
    byte_4E78DF6 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1D0F30C(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9966/*"OnClickListView"*/, (Il2CppObject *)this, 0);
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


void ListViewObject__OnMoveCancel(ListViewObject_o *this, const MethodInfo *method)
{
  this->fields.isBusy = 0;
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
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&linkItem->fields.viewObject, 0, v2, v3, v4, v5, v6, v7);
    this->fields.linkItem = 0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)p_linkItem, 0, v11, v12, v13, v14, v15, v16);
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
        sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.baseParent, (int32_t)parent, v6, v7, v8, v9, v10, v11),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
    || (this->fields.basePosition = UnityEngine_Transform__get_localPosition(transform, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1D0F30C(transform, v4);
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
  sub_1D0F058(
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
    sub_1D0F30C(0, value);
  ListViewManager__SetEnabledColliderDragMask(manager, value, method);
}


void ListViewObject__SetInput(ListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Object_o *mCollider; // x21
  __int64 v6; // x1
  UnityEngine_Collider_o *v7; // x0
  UnityEngine_Object_o *mDragDrop; // x21

  if ( (byte_4E78DF2 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E78DF2 = 1;
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
    sub_1D0F30C(v7, v6);
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
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.linkItem, (int32_t)item, (int32_t)method, v3, v4, v5, v6, v7);
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

  if ( (byte_4E78DEE & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_12972/*"SetBaseTransform"*/);
    byte_4E78DEE = 1;
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
    sub_1D0F30C(transform, v8);
  }
  UnityEngine_GameObject__SendMessage_73340852(
    (UnityEngine_GameObject_o *)transform,
    (System_String_o *)StringLiteral_12972/*"SetBaseTransform"*/,
    0);
}


void ListViewObject__SetItem_45188780(
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
  if ( (byte_4E78DED & 1) == 0 )
  {
    this = (ListViewObject_o *)sub_1D0F0B4(&StringLiteral_12972/*"SetBaseTransform"*/);
    byte_4E78DED = 1;
  }
  if ( !item )
    goto LABEL_16;
  item->fields.viewObject = v10;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&item->fields.viewObject,
    (int32_t)v10,
    (int32_t)seed,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v10->fields.linkItem = item;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v10->fields.linkItem, (int32_t)item, v11, v12, v13, v14, v15, v16);
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
    sub_1D0F30C(this, item);
  }
  UnityEngine_GameObject__SendMessage_73340852(
    (UnityEngine_GameObject_o *)this,
    (System_String_o *)StringLiteral_12972/*"SetBaseTransform"*/,
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
  sub_1D0F058(
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
    sub_1D0F30C(0, v8);
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

  if ( (byte_4E78DF0 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E78DF0 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0, 0) )
  {
    v7 = this->fields.dispObject;
    if ( !v7 )
      sub_1D0F30C(0, v6);
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