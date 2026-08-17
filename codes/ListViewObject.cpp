void ListViewObject___cctor(const MethodInfo *method)
{
  if ( (byte_597201A & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_597201A = 1;
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  Il2CppObject *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x1

  if ( (byte_597200D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
    byte_597200D = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = (struct UnityEngine_Collider_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mCollider,
    (int32_t)Component_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.mDragDrop = (struct UIDragDropListViewItem_o *)v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mDragDrop, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  ListViewObject__SetBaseTransform(this, v17);
}


bool ListViewObject__CleanItemExtra(ListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  struct ListViewItem_o **p_linkItem; // x20
  UnityEngine_Object_o *viewObject; // x21
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct ListViewItem_o *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_5972019 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972019 = 1;
  }
  p_linkItem = &this->fields.linkItem;
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  viewObject = (UnityEngine_Object_o *)linkItem->fields.viewObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(viewObject, (UnityEngine_Object_o *)this, 0) || this->fields.isBusy )
    return 0;
  v14 = *p_linkItem;
  if ( !*p_linkItem )
    sub_2213CDC(0, v6);
  v14->fields.viewObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->fields.viewObject, 0, v7, v8, v9, v10, v11, v12);
  this->fields.linkItem = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.linkItem, 0, v15, v16, v17, v18, v19, v20);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct ListViewItem_o *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_597200E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597200E = 1;
  }
  p_linkItem = &this->fields.linkItem;
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  viewObject = (UnityEngine_Object_o *)linkItem->fields.viewObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(viewObject, (UnityEngine_Object_o *)this, 0) || this->fields.isBusy )
    return 0;
  v14 = *p_linkItem;
  if ( !*p_linkItem )
    sub_2213CDC(0, v6);
  v14->fields.viewObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->fields.viewObject, 0, v7, v8, v9, v10, v11, v12);
  this->fields.linkItem = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.linkItem, 0, v15, v16, v17, v18, v19, v20);
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
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x21
  UnityEngine_GameObject_o *v10; // x19
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct ListViewItem_o *linkItem; // x1
  __int64 v18; // x20
  struct ListViewManager_o *v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
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

  if ( (byte_5972011 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972011 = 1;
  }
  dragObjectPrefab = (UnityEngine_Object_o *)this->fields.dragObjectPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Equality(dragObjectPrefab, 0, 0);
  v6 = 0;
  if ( !v4 )
  {
    manager = (__int64)this->fields.manager;
    if ( !manager )
      goto LABEL_27;
    v9 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)manager + 424LL))(
                                       manager,
                                       *(_QWORD *)(*(_QWORD *)manager + 432LL));
    v10 = this->fields.dragObjectPrefab;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v8);
    manager = (__int64)NGUITools__AddChild_56415424(v9, v10, 0);
    if ( !manager )
      goto LABEL_27;
    v6 = (UnityEngine_GameObject_o *)manager;
    manager = (__int64)UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)manager,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    if ( !manager )
      goto LABEL_27;
    linkItem = this->fields.linkItem;
    v18 = manager;
    *(_QWORD *)(manager + 56) = linkItem;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(manager + 56), (int32_t)linkItem, v11, v12, v13, v14, v15, v16);
    v19 = this->fields.manager;
    *(_QWORD *)(v18 + 40) = v19;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 40), (int32_t)v19, v20, v21, v22, v23, v24, v25);
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
    if ( !byte_5969AE5 )
    {
      manager = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    if ( !v28 )
      goto LABEL_27;
    UnityEngine_Transform__set_localScale(v28, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    manager = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !manager )
      goto LABEL_27;
    v42 = UnityEngine_Transform__TransformPoint_83496448((UnityEngine_Transform_o *)manager, 1.0, 1.0, 0.0, 0);
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
    v45.fields.x = v32;
    v45.fields.y = v33;
    v45.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)manager, v45, 0);
    manager = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0);
    if ( !v9 )
      goto LABEL_27;
    v34 = (UnityEngine_GameObject_o *)manager;
    manager = UnityEngine_GameObject__get_layer(v9, 0);
    if ( !v34
      || (UnityEngine_GameObject__set_layer(v34, manager, 0),
          (manager = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v18, 0)) == 0)
      || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)manager, 0),
          v35 = localPosition.fields.x,
          v36 = localPosition.fields.y,
          (manager = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v18, 0)) == 0) )
    {
LABEL_27:
      sub_2213CDC(manager, v5);
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
    sub_2213CDC(0, method);
  ListViewManager__DragMaskEnd(manager, method);
}


void ListViewObject__DragMaskStart(ListViewObject_o *this, const MethodInfo *method)
{
  ListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ListViewManager__DragMaskStart(manager, method);
}


void ListViewObject__EndMoveCenter(ListViewObject_o *this, const MethodInfo *method)
{
  ListViewManager_o *manager; // x0

  manager = this->fields.manager;
  this->fields.isBusy = 0;
  if ( !manager )
    sub_2213CDC(0, method);
  ListViewManager__EndScrollAnim(manager, method);
}


UnityEngine_GameObject_o *ListViewObject__GetDragRoot(ListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
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

  if ( (byte_5972013 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972013 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(dispObject, 0, 0) )
    return 0;
  v5 = this->fields.dispObject;
  if ( !v5 )
    sub_2213CDC(0, v4);
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
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  __int64 cachedTransform; // x0
  __int64 v12; // x1
  Il2CppObject *Component_object; // x22
  struct ListViewManager_o *manager; // x8
  struct ListViewItemSeed_o *seed; // x8
  float x; // s13
  float y; // s14
  UnityEngine_Transform_o *v18; // x23
  float v19; // s9
  float v20; // s10
  float v21; // s11
  float v22; // s12
  bool canMoveHorizontally; // w24
  bool v24; // zf
  float v25; // s0
  float v26; // s1
  float v27; // s0
  float v28; // s8
  float v29; // s9
  float v30; // s9
  float v31; // s8
  float z; // s10
  __int64 v33; // x1
  UnityEngine_Object_o *v34; // x20
  bool v35; // w8
  MissionNaviTransitionBoardItem_o *v36; // x20
  System_Delegate_o *klass; // t1
  SpringPanel_OnFinished_o *v38; // x22
  System_Delegate_o *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  SpringPanel_OnFinished_c *v46; // x1
  __int64 v47; // x1
  Il2CppObject *v48; // x21
  float v49; // s11
  float v50; // s12
  UnityEngine_Vector2_o v52; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5972017 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
    sub_2213A60(&Method_ListViewObject_EndMoveCenter__);
    sub_2213A60(&Method_NGUITools_FindInParents_UIPanel___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SpringPanel_OnFinished_TypeInfo);
    byte_5972017 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7);
  v10 = NGUITools__FindInParents_object_(
          gameObject,
          (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UIPanel___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  cachedTransform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0);
  if ( (cachedTransform & 1) == 0 )
    goto LABEL_32;
  if ( !v10 )
    goto LABEL_46;
  if ( !HIDWORD(v10[18].klass) )
  {
LABEL_32:
    LOBYTE(cachedTransform) = 0;
    return cachedTransform;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)v10,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  cachedTransform = (__int64)UIRect__get_cachedTransform((UIRect_o *)v10, 0);
  manager = this->fields.manager;
  if ( !manager )
    goto LABEL_46;
  seed = manager->fields.seed;
  if ( !seed )
    goto LABEL_46;
  x = seed->fields.arrangementPich.fields.x;
  y = seed->fields.arrangementPich.fields.y;
  v18 = (UnityEngine_Transform_o *)cachedTransform;
  cachedTransform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !cachedTransform )
    goto LABEL_46;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)cachedTransform, 0);
  if ( !v18 )
    goto LABEL_46;
  v54 = UnityEngine_Transform__InverseTransformPoint(v18, position, 0);
  v19 = v54.fields.x;
  v20 = v54.fields.y;
  cachedTransform = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v10->klass->vtable[11].methodPtr)(
                      v10,
                      v10->klass->vtable[11].method);
  if ( !cachedTransform )
    goto LABEL_46;
  if ( !*(_DWORD *)(cachedTransform + 24) )
    sub_2213CE4(cachedTransform);
  v55 = UnityEngine_Transform__InverseTransformPoint(v18, *(UnityEngine_Vector3_o *)(cachedTransform + 32), 0);
  if ( !Component_object )
    goto LABEL_46;
  v21 = v55.fields.x;
  v22 = v55.fields.y;
  canMoveHorizontally = UIScrollView__get_canMoveHorizontally((UIScrollView_o *)Component_object, 0);
  v24 = !UIScrollView__get_canMoveVertically((UIScrollView_o *)Component_object, 0);
  v25 = (float)(offSet + offSet) + -1.0;
  v26 = (float)(v20 - v22) - (float)(v25 * (float)(y * 0.5));
  v27 = (float)(v19 - v21) - (float)(v25 * (float)(x * 0.5));
  if ( v24 )
    v28 = 0.0;
  else
    v28 = v26;
  if ( canMoveHorizontally )
    v29 = v27;
  else
    v29 = 0.0;
  localPosition = UnityEngine_Transform__get_localPosition(v18, 0);
  v30 = localPosition.fields.x - v29;
  v31 = localPosition.fields.y - v28;
  z = localPosition.fields.z;
  cachedTransform = (__int64)UIRect__get_cachedGameObject((UIRect_o *)v10, 0);
  if ( !isAnimation )
  {
    if ( !cachedTransform )
      goto LABEL_46;
    v48 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)cachedTransform,
            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
    cachedTransform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v48, 0, 0);
    if ( (cachedTransform & 1) != 0 )
    {
      this->fields.isBusy = 0;
      if ( !v48 )
        goto LABEL_46;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v48, 0, 0);
    }
    cachedTransform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
    if ( cachedTransform )
    {
      v58 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)cachedTransform, 0);
      v49 = v58.fields.x;
      v50 = v58.fields.y;
      cachedTransform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      if ( cachedTransform )
      {
        v59.fields.x = v30;
        v59.fields.y = v31;
        v59.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)cachedTransform, v59, 0);
        v52.fields.x = *((float *)&v10[20].monitor + 1) - (float)(v30 - v49);
        v52.fields.y = *(float *)&v10[21].klass - (float)(v31 - v50);
        UIPanel__set_clipOffset((UIPanel_o *)v10, v52, 0);
        ((void (__fastcall *)(Il2CppObject *, _QWORD, const MethodInfo *))Component_object->klass->vtable[8].methodPtr)(
          Component_object,
          0,
          Component_object->klass->vtable[8].method);
        goto LABEL_44;
      }
    }
LABEL_46:
    sub_2213CDC(cachedTransform, v12);
  }
  v57.fields.x = v30;
  v57.fields.y = v31;
  v57.fields.z = z;
  v34 = (UnityEngine_Object_o *)SpringPanel__Begin((UnityEngine_GameObject_o *)cachedTransform, v57, 6.0, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
  v35 = UnityEngine_Object__op_Inequality(v34, 0, 0);
  cachedTransform = 1;
  if ( v35 )
  {
    this->fields.isBusy = 1;
    if ( v34 )
    {
      klass = (System_Delegate_o *)v34[2].klass;
      v36 = (MissionNaviTransitionBoardItem_o *)&v34[2];
      v38 = (SpringPanel_OnFinished_o *)sub_2213CCC(SpringPanel_OnFinished_TypeInfo);
      SpringPanel_OnFinished___ctor(v38, (Il2CppObject *)this, Method_ListViewObject_EndMoveCenter__, 0);
      v39 = System_Delegate__Combine(klass, (System_Delegate_o *)v38, 0);
      if ( v39 )
      {
        v46 = SpringPanel_OnFinished_TypeInfo;
        if ( (SpringPanel_OnFinished_c *)v39->klass != SpringPanel_OnFinished_TypeInfo
          || (v36->klass = (MissionNaviTransitionBoardItem_c *)v39, (SpringPanel_OnFinished_c *)v39->klass != v46) )
        {
          sub_221405C(v39, v46, v40);
          goto LABEL_32;
        }
      }
      else
      {
        v36->klass = 0;
      }
      sub_2213A04(v36, (int32_t)v39, v40, v41, v42, v43, v44, v45);
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
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v13; // x1
  Il2CppObject *v14; // x21
  __int64 transform; // x0
  __int64 v16; // x1
  UIScrollView_o *Component_object; // x23
  UnityEngine_Transform_o *cachedTransform; // x25
  float v19; // s9
  float v20; // s10
  float32x2_t v21; // d11
  float32x2_t v22; // d12
  unsigned __int64 v23; // d3
  float v24; // s11
  float x; // s9
  float y; // s10
  float v27; // s11
  float v28; // s12
  bool canMoveHorizontally; // w26
  bool canMoveVertically; // w0
  float v31; // s0
  float v32; // s0
  float v33; // s8
  float v34; // s9
  float v35; // s9
  float v36; // s8
  float z; // s10
  float v38; // s10
  float v39; // s12
  float v40; // s13
  float v41; // s14
  float v42; // s11
  float v43; // s6
  float v44; // s7
  float v45; // s12
  float v46; // s15
  float v47; // s10
  float v48; // s3
  float v49; // s2
  float v50; // s0
  float v51; // s1
  float v52; // s13
  float v53; // s14
  bool v54; // w0
  float v55; // s0
  float v56; // s1
  float v57; // s11
  float v58; // s13
  bool v59; // w0
  float v60; // s0
  float v61; // s1
  float v62; // s2
  float v63; // s0
  float v64; // s1
  __int64 v65; // x1
  SpringPanel_o *v66; // x21
  bool v67; // w8
  _QWORD *p_onFinished; // x22
  System_Delegate_o *onFinished; // x23
  SpringPanel_OnFinished_o *v70; // x24
  System_Delegate_o *v71; // x0
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  System_Delegate_o *v78; // x8
  SpringPanel_OnFinished_c *v79; // x1
  __int64 v80; // x1
  Il2CppObject *v81; // x20
  float v82; // s11
  float v83; // s12
  System_Delegate_o *onCanceled; // t1
  SpringPanel_OnFinished_o *v85; // x22
  System_Delegate_o *v86; // x0
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  float v93; // [xsp+8h] [xbp-C8h]
  float v94; // [xsp+Ch] [xbp-C4h]
  unsigned __int64 positiona; // [xsp+10h] [xbp-C0h]
  float position; // [xsp+10h] [xbp-C0h]
  __int64 v97; // [xsp+28h] [xbp-A8h] BYREF
  float v98; // [xsp+34h] [xbp-9Ch]
  float v99; // [xsp+38h] [xbp-98h]
  UnityEngine_Vector2_o v100; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v108; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o finalClipRegion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5972015 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
    sub_2213A60(&Method_ListViewObject_EndMoveCenter__);
    sub_2213A60(&Method_ListViewObject_OnMoveCancel__);
    sub_2213A60(&Method_NGUITools_FindInParents_UIPanel___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SpringPanel_OnFinished_TypeInfo);
    byte_5972015 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v11);
  v14 = NGUITools__FindInParents_object_(
          gameObject,
          (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UIPanel___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0, 0);
  if ( (transform & 1) == 0 )
    goto LABEL_52;
  if ( !v14 )
    goto LABEL_72;
  if ( HIDWORD(v14[18].klass) )
  {
    Component_object = (UIScrollView_o *)UnityEngine_Component__GetComponent_object_(
                                           (UnityEngine_Component_o *)v14,
                                           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)v14, 0);
    transform = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v14->klass->vtable[11].methodPtr)(
                  v14,
                  v14->klass->vtable[11].method);
    if ( !transform )
      goto LABEL_72;
    if ( *(_DWORD *)(transform + 24) <= 2u )
      sub_2213CE4(transform);
    v19 = *(float *)(transform + 64);
    v20 = *(float *)(transform + 40);
    v21.n64_u64[0] = *(unsigned __int64 *)(transform + 56);
    v22.n64_u64[0] = *(unsigned __int64 *)(transform + 32);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_72;
    v101 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
    if ( !cachedTransform )
      goto LABEL_72;
    v23 = vmul_f32(vadd_f32(v21, v22), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
    v24 = (float)(v19 + v20) * 0.5;
    positiona = v23;
    v102 = UnityEngine_Transform__InverseTransformPoint(cachedTransform, v101, 0);
    x = v102.fields.x;
    LODWORD(v102.fields.x) = positiona;
    y = v102.fields.y;
    v102.fields.y = *((float *)&positiona + 1);
    v102.fields.z = v24;
    v103 = UnityEngine_Transform__InverseTransformPoint(cachedTransform, v102, 0);
    if ( !Component_object )
      goto LABEL_72;
    v27 = v103.fields.x;
    v28 = v103.fields.y;
    canMoveHorizontally = UIScrollView__get_canMoveHorizontally(Component_object, 0);
    canMoveVertically = UIScrollView__get_canMoveVertically(Component_object, 0);
    v31 = -0.0;
    if ( forceShiftPosY != 0.0 )
      v31 = forceShiftPosY;
    v32 = v31 + (float)(y - v28);
    if ( canMoveVertically )
      v33 = v32;
    else
      v33 = 0.0;
    if ( canMoveHorizontally )
      v34 = x - v27;
    else
      v34 = 0.0;
    localPosition = UnityEngine_Transform__get_localPosition(cachedTransform, 0);
    v35 = localPosition.fields.x - v34;
    v36 = localPosition.fields.y - v33;
    z = localPosition.fields.z;
    if ( restrictScrollViewRange && Component_object->fields.restrictWithinPanel )
    {
      position = localPosition.fields.z;
      ((void (__fastcall *)(__int64 *__return_ptr, UIScrollView_o *, const MethodInfo *))Component_object->klass->vtable._4_get_bounds.methodPtr)(
        &v97,
        Component_object,
        Component_object->klass->vtable._4_get_bounds.method);
      v39 = *((float *)&v97 + 1);
      v38 = *(float *)&v97;
      v40 = v98;
      v41 = v99;
      finalClipRegion = UIPanel__get_finalClipRegion((UIPanel_o *)v14, 0);
      v42 = finalClipRegion.fields.x;
      v43 = v39 - v41;
      v44 = v39 + v41;
      v45 = finalClipRegion.fields.y;
      finalClipRegion.fields.z = finalClipRegion.fields.z * 0.5;
      finalClipRegion.fields.x = finalClipRegion.fields.w * 0.5;
      v46 = (float)(v38 - v40) + finalClipRegion.fields.z;
      v47 = (float)(v38 + v40) - finalClipRegion.fields.z;
      v48 = v43 + (float)(finalClipRegion.fields.w * 0.5);
      v49 = v44 - finalClipRegion.fields.x;
      if ( HIDWORD(v14[18].klass) == 3 )
      {
        v50 = *(float *)&v14[19].monitor;
        v51 = *((float *)&v14[19].monitor + 1);
        v46 = v46 - v50;
        v47 = v47 + v50;
        v48 = v48 - v51;
        v49 = v49 + v51;
      }
      v93 = v48;
      v94 = v49;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      if ( !transform )
        goto LABEL_72;
      v105 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
      v52 = v105.fields.x;
      v53 = v105.fields.y;
      v54 = UIScrollView__get_canMoveHorizontally(Component_object, 0);
      v55 = v42 - v46;
      v56 = v42 - v47;
      if ( !v54 )
      {
        v56 = -0.0;
        v55 = -0.0;
      }
      v57 = v52 + v56;
      v58 = v52 + v55;
      v59 = UIScrollView__get_canMoveVertically(Component_object, 0);
      v60 = v45 - v93;
      v61 = v45 - v94;
      if ( !v59 )
      {
        v60 = -0.0;
        v61 = -0.0;
      }
      z = position;
      if ( v35 <= v57 )
        v62 = v35;
      else
        v62 = v57;
      v63 = v53 + v60;
      v64 = v53 + v61;
      if ( v35 >= v58 )
        v35 = v62;
      else
        v35 = v58;
      if ( v36 <= v63 )
        v63 = v36;
      if ( v36 >= v64 )
        v36 = v63;
      else
        v36 = v64;
    }
    transform = (__int64)UIRect__get_cachedGameObject((UIRect_o *)v14, 0);
    if ( !isAnimation )
    {
      if ( !transform )
        goto LABEL_72;
      v81 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)transform,
              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v80);
      transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v81, 0, 0);
      if ( (transform & 1) != 0 )
      {
        this->fields.isBusy = 0;
        if ( !v81 )
          goto LABEL_72;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v81, 0, 0);
      }
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      if ( transform )
      {
        v107 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
        v82 = v107.fields.x;
        v83 = v107.fields.y;
        transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
        if ( transform )
        {
          v108.fields.x = v35;
          v108.fields.y = v36;
          v108.fields.z = z;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v108, 0);
          v100.fields.x = *((float *)&v14[20].monitor + 1) - (float)(v35 - v82);
          v100.fields.y = *(float *)&v14[21].klass - (float)(v36 - v83);
          UIPanel__set_clipOffset((UIPanel_o *)v14, v100, 0);
          ((void (__fastcall *)(UIScrollView_o *, _QWORD, const MethodInfo *))Component_object->klass->vtable._8_UpdateScrollbars.methodPtr)(
            Component_object,
            0,
            Component_object->klass->vtable._8_UpdateScrollbars.method);
          goto LABEL_70;
        }
      }
LABEL_72:
      sub_2213CDC(transform, v16);
    }
    v106.fields.x = v35;
    v106.fields.y = v36;
    v106.fields.z = z;
    v66 = SpringPanel__Begin((UnityEngine_GameObject_o *)transform, v106, 6.0, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v65);
    v67 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v66, 0, 0);
    transform = 1;
    if ( v67 )
    {
      this->fields.isBusy = 1;
      if ( v66 )
      {
        p_onFinished = &v66->fields.onFinished;
        onFinished = (System_Delegate_o *)v66->fields.onFinished;
        v70 = (SpringPanel_OnFinished_o *)sub_2213CCC(SpringPanel_OnFinished_TypeInfo);
        SpringPanel_OnFinished___ctor(v70, (Il2CppObject *)this, Method_ListViewObject_EndMoveCenter__, 0);
        v71 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v70, 0);
        v78 = v71;
        if ( v71 )
        {
          v79 = SpringPanel_OnFinished_TypeInfo;
          if ( (SpringPanel_OnFinished_c *)v71->klass != SpringPanel_OnFinished_TypeInfo )
            goto LABEL_67;
          *p_onFinished = v71;
          if ( (SpringPanel_OnFinished_c *)v71->klass != v79 )
            goto LABEL_67;
        }
        else
        {
          *p_onFinished = 0;
        }
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v66->fields.onFinished,
          (int32_t)v71,
          v72,
          v73,
          v74,
          v75,
          v76,
          v77);
        if ( checkCancel )
        {
          onCanceled = (System_Delegate_o *)v66->fields.onCanceled;
          v66 = (SpringPanel_o *)((char *)v66 + 56);
          v85 = (SpringPanel_OnFinished_o *)sub_2213CCC(SpringPanel_OnFinished_TypeInfo);
          SpringPanel_OnFinished___ctor(v85, (Il2CppObject *)this, Method_ListViewObject_OnMoveCancel__, 0);
          v86 = System_Delegate__Combine(onCanceled, (System_Delegate_o *)v85, 0);
          v78 = v86;
          if ( !v86 )
          {
LABEL_68:
            v66->klass = 0;
LABEL_69:
            sub_2213A04((MissionNaviTransitionBoardItem_o *)v66, (int32_t)v78, v72, v87, v88, v89, v90, v91);
            goto LABEL_70;
          }
          v79 = SpringPanel_OnFinished_TypeInfo;
          if ( (SpringPanel_OnFinished_c *)v86->klass == SpringPanel_OnFinished_TypeInfo )
          {
            v66->klass = (SpringPanel_c *)v86;
            if ( (SpringPanel_OnFinished_c *)v86->klass == v79 )
              goto LABEL_69;
          }
LABEL_67:
          sub_221405C(v78, v79, v72);
          goto LABEL_68;
        }
LABEL_70:
        LOBYTE(transform) = 1;
        return transform;
      }
      goto LABEL_72;
    }
  }
  else
  {
LABEL_52:
    LOBYTE(transform) = 0;
  }
  return transform;
}


bool ListViewObject__MoveTop(ListViewObject_o *this, bool isAnimation, float offSet, const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  __int64 cachedTransform; // x0
  __int64 v12; // x1
  Il2CppObject *Component_object; // x22
  struct ListViewManager_o *manager; // x8
  struct ListViewItemSeed_o *seed; // x8
  float x; // s13
  float y; // s14
  UnityEngine_Transform_o *v18; // x23
  float v19; // s9
  float v20; // s10
  float v21; // s11
  float v22; // s12
  bool canMoveHorizontally; // w24
  bool v24; // zf
  float v25; // s0
  float v26; // s1
  float v27; // s0
  float v28; // s8
  float v29; // s9
  float v30; // s9
  float v31; // s8
  float z; // s10
  __int64 v33; // x1
  UnityEngine_Object_o *v34; // x20
  bool v35; // w8
  MissionNaviTransitionBoardItem_o *v36; // x20
  System_Delegate_o *klass; // t1
  SpringPanel_OnFinished_o *v38; // x22
  System_Delegate_o *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  SpringPanel_OnFinished_c *v46; // x1
  __int64 v47; // x1
  Il2CppObject *v48; // x21
  float v49; // s11
  float v50; // s12
  UnityEngine_Vector2_o v52; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5972016 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
    sub_2213A60(&Method_ListViewObject_EndMoveCenter__);
    sub_2213A60(&Method_NGUITools_FindInParents_UIPanel___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SpringPanel_OnFinished_TypeInfo);
    byte_5972016 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7);
  v10 = NGUITools__FindInParents_object_(
          gameObject,
          (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UIPanel___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  cachedTransform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0);
  if ( (cachedTransform & 1) == 0 )
    goto LABEL_32;
  if ( !v10 )
    goto LABEL_46;
  if ( !HIDWORD(v10[18].klass) )
  {
LABEL_32:
    LOBYTE(cachedTransform) = 0;
    return cachedTransform;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)v10,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
  cachedTransform = (__int64)UIRect__get_cachedTransform((UIRect_o *)v10, 0);
  manager = this->fields.manager;
  if ( !manager )
    goto LABEL_46;
  seed = manager->fields.seed;
  if ( !seed )
    goto LABEL_46;
  x = seed->fields.arrangementPich.fields.x;
  y = seed->fields.arrangementPich.fields.y;
  v18 = (UnityEngine_Transform_o *)cachedTransform;
  cachedTransform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !cachedTransform )
    goto LABEL_46;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)cachedTransform, 0);
  if ( !v18 )
    goto LABEL_46;
  v54 = UnityEngine_Transform__InverseTransformPoint(v18, position, 0);
  v19 = v54.fields.x;
  v20 = v54.fields.y;
  cachedTransform = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v10->klass->vtable[11].methodPtr)(
                      v10,
                      v10->klass->vtable[11].method);
  if ( !cachedTransform )
    goto LABEL_46;
  if ( (*(_DWORD *)(cachedTransform + 24) & 0xFFFFFFFE) == 0 )
    sub_2213CE4(cachedTransform);
  v55 = UnityEngine_Transform__InverseTransformPoint(v18, *(UnityEngine_Vector3_o *)(cachedTransform + 44), 0);
  if ( !Component_object )
    goto LABEL_46;
  v21 = v55.fields.x;
  v22 = v55.fields.y;
  canMoveHorizontally = UIScrollView__get_canMoveHorizontally((UIScrollView_o *)Component_object, 0);
  v24 = !UIScrollView__get_canMoveVertically((UIScrollView_o *)Component_object, 0);
  v25 = (float)(offSet + offSet) + 1.0;
  v26 = (float)(v20 - v22) - (float)(v25 * (float)(y * 0.5));
  v27 = (float)(v19 - v21) - (float)(v25 * (float)(x * 0.5));
  if ( v24 )
    v28 = 0.0;
  else
    v28 = v26;
  if ( canMoveHorizontally )
    v29 = v27;
  else
    v29 = 0.0;
  localPosition = UnityEngine_Transform__get_localPosition(v18, 0);
  v30 = localPosition.fields.x - v29;
  v31 = localPosition.fields.y - v28;
  z = localPosition.fields.z;
  cachedTransform = (__int64)UIRect__get_cachedGameObject((UIRect_o *)v10, 0);
  if ( !isAnimation )
  {
    if ( !cachedTransform )
      goto LABEL_46;
    v48 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)cachedTransform,
            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
    cachedTransform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v48, 0, 0);
    if ( (cachedTransform & 1) != 0 )
    {
      this->fields.isBusy = 0;
      if ( !v48 )
        goto LABEL_46;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v48, 0, 0);
    }
    cachedTransform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
    if ( cachedTransform )
    {
      v58 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)cachedTransform, 0);
      v49 = v58.fields.x;
      v50 = v58.fields.y;
      cachedTransform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      if ( cachedTransform )
      {
        v59.fields.x = v30;
        v59.fields.y = v31;
        v59.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)cachedTransform, v59, 0);
        v52.fields.x = *((float *)&v10[20].monitor + 1) - (float)(v30 - v49);
        v52.fields.y = *(float *)&v10[21].klass - (float)(v31 - v50);
        UIPanel__set_clipOffset((UIPanel_o *)v10, v52, 0);
        ((void (__fastcall *)(Il2CppObject *, _QWORD, const MethodInfo *))Component_object->klass->vtable[8].methodPtr)(
          Component_object,
          0,
          Component_object->klass->vtable[8].method);
        goto LABEL_44;
      }
    }
LABEL_46:
    sub_2213CDC(cachedTransform, v12);
  }
  v57.fields.x = v30;
  v57.fields.y = v31;
  v57.fields.z = z;
  v34 = (UnityEngine_Object_o *)SpringPanel__Begin((UnityEngine_GameObject_o *)cachedTransform, v57, 6.0, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
  v35 = UnityEngine_Object__op_Inequality(v34, 0, 0);
  cachedTransform = 1;
  if ( v35 )
  {
    this->fields.isBusy = 1;
    if ( v34 )
    {
      klass = (System_Delegate_o *)v34[2].klass;
      v36 = (MissionNaviTransitionBoardItem_o *)&v34[2];
      v38 = (SpringPanel_OnFinished_o *)sub_2213CCC(SpringPanel_OnFinished_TypeInfo);
      SpringPanel_OnFinished___ctor(v38, (Il2CppObject *)this, Method_ListViewObject_EndMoveCenter__, 0);
      v39 = System_Delegate__Combine(klass, (System_Delegate_o *)v38, 0);
      if ( v39 )
      {
        v46 = SpringPanel_OnFinished_TypeInfo;
        if ( (SpringPanel_OnFinished_c *)v39->klass != SpringPanel_OnFinished_TypeInfo
          || (v36->klass = (MissionNaviTransitionBoardItem_c *)v39, (SpringPanel_OnFinished_c *)v39->klass != v46) )
        {
          sub_221405C(v39, v46, v40);
          goto LABEL_32;
        }
      }
      else
      {
        v36->klass = 0;
      }
      sub_2213A04(v36, (int32_t)v39, v40, v41, v42, v43, v44, v45);
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

  if ( (byte_5972018 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10248/*"OnClickListView"*/);
    byte_5972018 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_2213CDC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10248/*"OnClickListView"*/, (Il2CppObject *)this, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ListViewItem_o *linkItem; // x0
  struct ListViewItem_o **p_linkItem; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  p_linkItem = &this->fields.linkItem;
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    linkItem->fields.viewObject = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&linkItem->fields.viewObject, 0, v2, v3, v4, v5, v6, v7);
    this->fields.linkItem = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_linkItem, 0, v11, v12, v13, v14, v15, v16);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (parent = UnityEngine_Transform__get_parent(transform, 0),
        this->fields.baseParent = parent,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.baseParent,
          (int32_t)parent,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
    || (this->fields.basePosition = UnityEngine_Transform__get_localPosition(transform, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v4);
  }
  this->fields.baseScale = UnityEngine_Transform__get_localScale(transform, 0);
}


void ListViewObject__SetDragPrefab(ListViewObject_o *this, UnityEngine_GameObject_o *prefab, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.dragObjectPrefab = prefab;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dragObjectPrefab,
    (int32_t)prefab,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void ListViewObject__SetEnabledColliderDragMask(ListViewObject_o *this, bool value, const MethodInfo *method)
{
  ListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, value);
  ListViewManager__SetEnabledColliderDragMask(manager, value, method);
}


// local variable allocation has failed, the output may be wrong!
void ListViewObject__SetInput(ListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Object_o *mCollider; // x21
  __int64 v6; // x1
  UnityEngine_Collider_o *v7; // x0
  UnityEngine_Object_o *mDragDrop; // x21

  if ( (byte_5972014 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972014 = 1;
  }
  mCollider = (UnityEngine_Object_o *)this->fields.mCollider;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isInput);
  if ( UnityEngine_Object__op_Inequality(mCollider, 0, 0) )
  {
    v7 = this->fields.mCollider;
    if ( !v7 )
      goto LABEL_14;
    UnityEngine_Collider__set_enabled(v7, isInput, 0);
  }
  mDragDrop = (UnityEngine_Object_o *)this->fields.mDragDrop;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(mDragDrop, 0, 0) )
  {
    v7 = (UnityEngine_Collider_o *)this->fields.mDragDrop;
    if ( v7 )
    {
      UIDragDropListViewItem__SetEnable((UIDragDropListViewItem_o *)v7, isInput, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(v7, v6);
  }
}


void ListViewObject__SetItem(ListViewObject_o *this, ListViewItem_o *item, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x2

  this->fields.linkItem = item;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.linkItem,
    (int32_t)item,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_5972010 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13324/*"SetBaseTransform"*/);
    byte_5972010 = 1;
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
    sub_2213CDC(transform, v8);
  }
  UnityEngine_GameObject__SendMessage_83438096(
    (UnityEngine_GameObject_o *)transform,
    (System_String_o *)StringLiteral_13324/*"SetBaseTransform"*/,
    0);
}


void ListViewObject__SetItem_50850568(
        ListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ListViewObject_o *v10; // x19
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  ListViewObject_o *v17; // x22
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Transform_o *v19; // x21
  UnityEngine_GameObject_o *parent; // x8
  ListViewObject_o *v21; // x20
  const MethodInfo *v22; // x2
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v10 = this;
  if ( (byte_597200F & 1) == 0 )
  {
    this = (ListViewObject_o *)sub_2213A60(&StringLiteral_13324/*"SetBaseTransform"*/);
    byte_597200F = 1;
  }
  if ( !item )
    goto LABEL_16;
  item->fields.viewObject = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&item->fields.viewObject,
    (int32_t)v10,
    (System_String_o *)seed,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v10->fields.linkItem = item;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->fields.linkItem, (int32_t)item, v11, v12, v13, v14, v15, v16);
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
    sub_2213CDC(this, item);
  }
  UnityEngine_GameObject__SendMessage_83438096(
    (UnityEngine_GameObject_o *)this,
    (System_String_o *)StringLiteral_13324/*"SetBaseTransform"*/,
    0);
}


void ListViewObject__SetManager(ListViewObject_o *this, ListViewManager_o *manager, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.manager = manager;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.manager,
    (int32_t)manager,
    (System_String_o *)method,
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
    sub_2213CDC(0, v8);
  v9.fields.x = x;
  v9.fields.y = y;
  v9.fields.z = z;
  UnityEngine_Transform__set_localPosition(transform, v9, 0);
  this->fields.basePosition.fields.x = x;
  this->fields.basePosition.fields.y = y;
  this->fields.basePosition.fields.z = z;
}


// local variable allocation has failed, the output may be wrong!
void ListViewObject__SetVisible(ListViewObject_o *this, bool isVisible, const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_5972012 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972012 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isVisible);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0, 0) )
  {
    v7 = this->fields.dispObject;
    if ( !v7 )
      sub_2213CDC(0, v6);
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