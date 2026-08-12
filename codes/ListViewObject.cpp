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
  UnityEngine_GameObject_o *v29; // x22
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x2
  unsigned __int64 v33; // kr40_8
  unsigned __int64 localPosition; // kr50_8
  UnityEngine_Vector3_o v35; // 0:kr20_12.12
  UnityEngine_Vector3_o v36; // 0:kr60_12.12
  UnityEngine_Vector3_o v37; // 0:kr74_12.12
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o eulerAngles; // 0:s0.4,4:s1.4,8:s2.4

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
    v35 = UnityEngine_Transform__TransformPoint_83496448((UnityEngine_Transform_o *)manager, 1.0, 1.0, 0.0, 0);
    manager = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v18, 0);
    if ( !manager )
      goto LABEL_27;
    v33 = (unsigned __int64)UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)manager, v35, 0);
    manager = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v18, 0);
    if ( !manager )
      goto LABEL_27;
    *(_QWORD *)&v36.fields.x = v33;
    v36.fields.z = 1.0;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)manager, v36, 0);
    manager = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0);
    if ( !v9
      || (v29 = (UnityEngine_GameObject_o *)manager, manager = UnityEngine_GameObject__get_layer(v9, 0), !v29)
      || (UnityEngine_GameObject__set_layer(v29, manager, 0),
          (manager = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v18, 0)) == 0)
      || (localPosition = (unsigned __int64)UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)manager,
                                              0),
          (manager = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v18, 0)) == 0) )
    {
LABEL_27:
      sub_2213CDC(manager, v5);
    }
    *(_QWORD *)&v37.fields.x = localPosition;
    v37.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)manager, v37, 0);
    ListViewObject__SetBaseTransform((ListViewObject_o *)v18, v30);
    ListViewObject__SetVisible((ListViewObject_o *)v18, 1, v31);
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
  return ((UnityEngine_GameObject_o *(__fastcall *)(struct ListViewManager_o *, const MethodInfo *))manager->klass->vtable._7_GetDragRoot.methodPtr)(
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
  unsigned __int64 v19; // kr14_8
  bool canMoveHorizontally; // w24
  bool v21; // zf
  float v22; // s0
  float v23; // s1
  float v24; // s0
  float v25; // s8
  float v26; // s9
  float v27; // s9
  float v28; // s8
  __int64 v29; // x1
  UnityEngine_Object_o *v30; // x20
  bool v31; // w8
  MissionNaviTransitionBoardItem_o *v32; // x20
  System_Delegate_o *klass; // t1
  SpringPanel_OnFinished_o *v34; // x22
  System_Delegate_o *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  SpringPanel_OnFinished_c *v42; // x1
  __int64 v43; // x1
  Il2CppObject *v44; // x21
  unsigned __int64 v45; // kr20_8
  unsigned __int64 v46; // kr40_8
  UnityEngine_Vector3_o localPosition; // 0:kr34_12.12
  UnityEngine_Vector2_o v49; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

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
  v19 = (unsigned __int64)UnityEngine_Transform__InverseTransformPoint(v18, position, 0);
  cachedTransform = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v10->klass->vtable[11].methodPtr)(
                      v10,
                      v10->klass->vtable[11].method);
  if ( !cachedTransform )
    goto LABEL_46;
  if ( !*(_DWORD *)(cachedTransform + 24) )
    sub_2213CE4(cachedTransform);
  v45 = (unsigned __int64)UnityEngine_Transform__InverseTransformPoint(
                            v18,
                            *(UnityEngine_Vector3_o *)(cachedTransform + 32),
                            0);
  if ( !Component_object )
    goto LABEL_46;
  canMoveHorizontally = UIScrollView__get_canMoveHorizontally((UIScrollView_o *)Component_object, 0);
  v21 = !UIScrollView__get_canMoveVertically((UIScrollView_o *)Component_object, 0);
  v22 = (float)(offSet + offSet) + -1.0;
  v23 = (float)(*((float *)&v19 + 1) - *((float *)&v45 + 1)) - (float)(v22 * (float)(y * 0.5));
  v24 = (float)(*(float *)&v19 - *(float *)&v45) - (float)(v22 * (float)(x * 0.5));
  if ( v21 )
    v25 = 0.0;
  else
    v25 = v23;
  if ( canMoveHorizontally )
    v26 = v24;
  else
    v26 = 0.0;
  localPosition = UnityEngine_Transform__get_localPosition(v18, 0);
  v27 = localPosition.fields.x - v26;
  v28 = localPosition.fields.y - v25;
  cachedTransform = (__int64)UIRect__get_cachedGameObject((UIRect_o *)v10, 0);
  if ( !isAnimation )
  {
    if ( !cachedTransform )
      goto LABEL_46;
    v44 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)cachedTransform,
            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
    cachedTransform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v44, 0, 0);
    if ( (cachedTransform & 1) != 0 )
    {
      this->fields.isBusy = 0;
      if ( !v44 )
        goto LABEL_46;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v44, 0, 0);
    }
    cachedTransform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
    if ( cachedTransform )
    {
      v46 = (unsigned __int64)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)cachedTransform, 0);
      cachedTransform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      if ( cachedTransform )
      {
        v51.fields.x = v27;
        v51.fields.y = v28;
        v51.fields.z = localPosition.fields.z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)cachedTransform, v51, 0);
        v49.fields.x = *((float *)&v10[20].monitor + 1) - (float)(v27 - *(float *)&v46);
        v49.fields.y = *(float *)&v10[21].klass - (float)(v28 - *((float *)&v46 + 1));
        UIPanel__set_clipOffset((UIPanel_o *)v10, v49, 0);
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
  v50.fields.x = v27;
  v50.fields.y = v28;
  v50.fields.z = localPosition.fields.z;
  v30 = (UnityEngine_Object_o *)SpringPanel__Begin((UnityEngine_GameObject_o *)cachedTransform, v50, 6.0, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  v31 = UnityEngine_Object__op_Inequality(v30, 0, 0);
  cachedTransform = 1;
  if ( v31 )
  {
    this->fields.isBusy = 1;
    if ( v30 )
    {
      klass = (System_Delegate_o *)v30[2].klass;
      v32 = (MissionNaviTransitionBoardItem_o *)&v30[2];
      v34 = (SpringPanel_OnFinished_o *)sub_2213CCC(SpringPanel_OnFinished_TypeInfo);
      SpringPanel_OnFinished___ctor(v34, (Il2CppObject *)this, Method_ListViewObject_EndMoveCenter__, 0);
      v35 = System_Delegate__Combine(klass, (System_Delegate_o *)v34, 0);
      if ( v35 )
      {
        v42 = SpringPanel_OnFinished_TypeInfo;
        if ( (SpringPanel_OnFinished_c *)v35->klass != SpringPanel_OnFinished_TypeInfo
          || (v32->klass = (MissionNaviTransitionBoardItem_c *)v35, (SpringPanel_OnFinished_c *)v35->klass != v42) )
        {
          sub_221405C(v35, v42, v36);
          goto LABEL_32;
        }
      }
      else
      {
        v32->klass = 0;
      }
      sub_2213A04(v32, (int32_t)v35, v36, v37, v38, v39, v40, v41);
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
  bool canMoveHorizontally; // w26
  bool canMoveVertically; // w0
  float v25; // s0
  float v26; // s0
  float v27; // s8
  float v28; // s9
  float v29; // s9
  float v30; // s8
  float z; // s10
  float v32; // s10
  float v33; // s12
  float v34; // s13
  float v35; // s14
  float v36; // s15
  float v37; // s10
  float v38; // s3
  float v39; // s2
  float v40; // s0
  float v41; // s1
  bool v42; // w0
  float v43; // s0
  float v44; // s1
  float v45; // s11
  float v46; // s13
  bool v47; // w0
  float v48; // s0
  float v49; // s1
  float v50; // s2
  float v51; // s0
  float v52; // s1
  __int64 v53; // x1
  SpringPanel_o *v54; // x21
  bool v55; // w8
  _QWORD *p_onFinished; // x22
  System_Delegate_o *onFinished; // x23
  SpringPanel_OnFinished_o *v58; // x24
  System_Delegate_o *v59; // x0
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  System_Delegate_o *v66; // x8
  SpringPanel_OnFinished_c *v67; // x1
  __int64 v68; // x1
  Il2CppObject *v69; // x20
  System_Delegate_o *onCanceled; // t1
  SpringPanel_OnFinished_o *v71; // x22
  System_Delegate_o *v72; // x0
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  unsigned __int64 v78; // kr20_8
  unsigned __int64 v79; // kr50_8
  unsigned __int64 v80; // kr88_8
  unsigned __int64 v81; // kr90_8
  float v83; // [xsp+8h] [xbp-C8h]
  float v84; // [xsp+Ch] [xbp-C4h]
  float v85[3]; // [xsp+28h] [xbp-A8h] BYREF
  float v86; // [xsp+34h] [xbp-9Ch]
  float v87; // [xsp+38h] [xbp-98h]
  UnityEngine_Vector3_o localPosition; // 0:kr34_12.12
  UnityEngine_Vector3_o v89; // 0:kr70_12.12
  UnityEngine_Vector4_o finalClipRegion; // 0:kr40_16.16
  UnityEngine_Vector2_o v91; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

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
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
    if ( !cachedTransform )
      goto LABEL_72;
    v78 = (unsigned __int64)UnityEngine_Transform__InverseTransformPoint(cachedTransform, position, 0);
    *(float32x2_t *)&v89.fields.x = vmul_f32(vadd_f32(v21, v22), (float32x2_t)0x3F0000003F000000LL);
    v89.fields.z = (float)(v19 + v20) * 0.5;
    v79 = (unsigned __int64)UnityEngine_Transform__InverseTransformPoint(cachedTransform, v89, 0);
    if ( !Component_object )
      goto LABEL_72;
    canMoveHorizontally = UIScrollView__get_canMoveHorizontally(Component_object, 0);
    canMoveVertically = UIScrollView__get_canMoveVertically(Component_object, 0);
    v25 = -0.0;
    if ( forceShiftPosY != 0.0 )
      v25 = forceShiftPosY;
    v26 = v25 + (float)(*((float *)&v78 + 1) - *((float *)&v79 + 1));
    if ( canMoveVertically )
      v27 = v26;
    else
      v27 = 0.0;
    if ( canMoveHorizontally )
      v28 = *(float *)&v78 - *(float *)&v79;
    else
      v28 = 0.0;
    localPosition = UnityEngine_Transform__get_localPosition(cachedTransform, 0);
    v29 = localPosition.fields.x - v28;
    v30 = localPosition.fields.y - v27;
    z = localPosition.fields.z;
    if ( restrictScrollViewRange && Component_object->fields.restrictWithinPanel )
    {
      ((void (__fastcall *)(float *__return_ptr, UIScrollView_o *, const MethodInfo *))Component_object->klass->vtable._4_get_bounds.methodPtr)(
        v85,
        Component_object,
        Component_object->klass->vtable._4_get_bounds.method);
      v33 = v85[1];
      v32 = v85[0];
      v34 = v86;
      v35 = v87;
      finalClipRegion = UIPanel__get_finalClipRegion((UIPanel_o *)v14, 0);
      v36 = (float)(v32 - v34) + (float)(finalClipRegion.fields.z * 0.5);
      v37 = (float)(v32 + v34) - (float)(finalClipRegion.fields.z * 0.5);
      v38 = (float)(v33 - v35) + (float)(finalClipRegion.fields.w * 0.5);
      v39 = (float)(v33 + v35) - (float)(finalClipRegion.fields.w * 0.5);
      if ( HIDWORD(v14[18].klass) == 3 )
      {
        v40 = *(float *)&v14[19].monitor;
        v41 = *((float *)&v14[19].monitor + 1);
        v36 = v36 - v40;
        v37 = v37 + v40;
        v38 = v38 - v41;
        v39 = v39 + v41;
      }
      v83 = v38;
      v84 = v39;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      if ( !transform )
        goto LABEL_72;
      v80 = (unsigned __int64)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
      v42 = UIScrollView__get_canMoveHorizontally(Component_object, 0);
      v43 = finalClipRegion.fields.x - v36;
      v44 = finalClipRegion.fields.x - v37;
      if ( !v42 )
      {
        v44 = -0.0;
        v43 = -0.0;
      }
      v45 = *(float *)&v80 + v44;
      v46 = *(float *)&v80 + v43;
      v47 = UIScrollView__get_canMoveVertically(Component_object, 0);
      v48 = finalClipRegion.fields.y - v83;
      v49 = finalClipRegion.fields.y - v84;
      if ( !v47 )
      {
        v48 = -0.0;
        v49 = -0.0;
      }
      z = localPosition.fields.z;
      if ( v29 <= v45 )
        v50 = v29;
      else
        v50 = v45;
      v51 = *((float *)&v80 + 1) + v48;
      v52 = *((float *)&v80 + 1) + v49;
      if ( v29 >= v46 )
        v29 = v50;
      else
        v29 = v46;
      if ( v30 <= v51 )
        v51 = v30;
      if ( v30 >= v52 )
        v30 = v51;
      else
        v30 = v52;
    }
    transform = (__int64)UIRect__get_cachedGameObject((UIRect_o *)v14, 0);
    if ( !isAnimation )
    {
      if ( !transform )
        goto LABEL_72;
      v69 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)transform,
              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v68);
      transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v69, 0, 0);
      if ( (transform & 1) != 0 )
      {
        this->fields.isBusy = 0;
        if ( !v69 )
          goto LABEL_72;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v69, 0, 0);
      }
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      if ( transform )
      {
        v81 = (unsigned __int64)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
        transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
        if ( transform )
        {
          v93.fields.x = v29;
          v93.fields.y = v30;
          v93.fields.z = z;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v93, 0);
          v91.fields.x = *((float *)&v14[20].monitor + 1) - (float)(v29 - *(float *)&v81);
          v91.fields.y = *(float *)&v14[21].klass - (float)(v30 - *((float *)&v81 + 1));
          UIPanel__set_clipOffset((UIPanel_o *)v14, v91, 0);
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
    v92.fields.x = v29;
    v92.fields.y = v30;
    v92.fields.z = z;
    v54 = SpringPanel__Begin((UnityEngine_GameObject_o *)transform, v92, 6.0, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53);
    v55 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v54, 0, 0);
    transform = 1;
    if ( v55 )
    {
      this->fields.isBusy = 1;
      if ( v54 )
      {
        p_onFinished = &v54->fields.onFinished;
        onFinished = (System_Delegate_o *)v54->fields.onFinished;
        v58 = (SpringPanel_OnFinished_o *)sub_2213CCC(SpringPanel_OnFinished_TypeInfo);
        SpringPanel_OnFinished___ctor(v58, (Il2CppObject *)this, Method_ListViewObject_EndMoveCenter__, 0);
        v59 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v58, 0);
        v66 = v59;
        if ( v59 )
        {
          v67 = SpringPanel_OnFinished_TypeInfo;
          if ( (SpringPanel_OnFinished_c *)v59->klass != SpringPanel_OnFinished_TypeInfo )
            goto LABEL_67;
          *p_onFinished = v59;
          if ( (SpringPanel_OnFinished_c *)v59->klass != v67 )
            goto LABEL_67;
        }
        else
        {
          *p_onFinished = 0;
        }
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v54->fields.onFinished,
          (int32_t)v59,
          v60,
          v61,
          v62,
          v63,
          v64,
          v65);
        if ( checkCancel )
        {
          onCanceled = (System_Delegate_o *)v54->fields.onCanceled;
          v54 = (SpringPanel_o *)((char *)v54 + 56);
          v71 = (SpringPanel_OnFinished_o *)sub_2213CCC(SpringPanel_OnFinished_TypeInfo);
          SpringPanel_OnFinished___ctor(v71, (Il2CppObject *)this, Method_ListViewObject_OnMoveCancel__, 0);
          v72 = System_Delegate__Combine(onCanceled, (System_Delegate_o *)v71, 0);
          v66 = v72;
          if ( !v72 )
          {
LABEL_68:
            v54->klass = 0;
LABEL_69:
            sub_2213A04((MissionNaviTransitionBoardItem_o *)v54, (int32_t)v66, v60, v73, v74, v75, v76, v77);
            goto LABEL_70;
          }
          v67 = SpringPanel_OnFinished_TypeInfo;
          if ( (SpringPanel_OnFinished_c *)v72->klass == SpringPanel_OnFinished_TypeInfo )
          {
            v54->klass = (SpringPanel_c *)v72;
            if ( (SpringPanel_OnFinished_c *)v72->klass == v67 )
              goto LABEL_69;
          }
LABEL_67:
          sub_221405C(v66, v67, v60);
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
  unsigned __int64 v19; // kr14_8
  bool canMoveHorizontally; // w24
  bool v21; // zf
  float v22; // s0
  float v23; // s1
  float v24; // s0
  float v25; // s8
  float v26; // s9
  float v27; // s9
  float v28; // s8
  __int64 v29; // x1
  UnityEngine_Object_o *v30; // x20
  bool v31; // w8
  MissionNaviTransitionBoardItem_o *v32; // x20
  System_Delegate_o *klass; // t1
  SpringPanel_OnFinished_o *v34; // x22
  System_Delegate_o *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  SpringPanel_OnFinished_c *v42; // x1
  __int64 v43; // x1
  Il2CppObject *v44; // x21
  unsigned __int64 v45; // kr20_8
  unsigned __int64 v46; // kr40_8
  UnityEngine_Vector3_o localPosition; // 0:kr34_12.12
  UnityEngine_Vector2_o v49; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

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
  v19 = (unsigned __int64)UnityEngine_Transform__InverseTransformPoint(v18, position, 0);
  cachedTransform = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v10->klass->vtable[11].methodPtr)(
                      v10,
                      v10->klass->vtable[11].method);
  if ( !cachedTransform )
    goto LABEL_46;
  if ( (*(_DWORD *)(cachedTransform + 24) & 0xFFFFFFFE) == 0 )
    sub_2213CE4(cachedTransform);
  v45 = (unsigned __int64)UnityEngine_Transform__InverseTransformPoint(
                            v18,
                            *(UnityEngine_Vector3_o *)(cachedTransform + 44),
                            0);
  if ( !Component_object )
    goto LABEL_46;
  canMoveHorizontally = UIScrollView__get_canMoveHorizontally((UIScrollView_o *)Component_object, 0);
  v21 = !UIScrollView__get_canMoveVertically((UIScrollView_o *)Component_object, 0);
  v22 = (float)(offSet + offSet) + 1.0;
  v23 = (float)(*((float *)&v19 + 1) - *((float *)&v45 + 1)) - (float)(v22 * (float)(y * 0.5));
  v24 = (float)(*(float *)&v19 - *(float *)&v45) - (float)(v22 * (float)(x * 0.5));
  if ( v21 )
    v25 = 0.0;
  else
    v25 = v23;
  if ( canMoveHorizontally )
    v26 = v24;
  else
    v26 = 0.0;
  localPosition = UnityEngine_Transform__get_localPosition(v18, 0);
  v27 = localPosition.fields.x - v26;
  v28 = localPosition.fields.y - v25;
  cachedTransform = (__int64)UIRect__get_cachedGameObject((UIRect_o *)v10, 0);
  if ( !isAnimation )
  {
    if ( !cachedTransform )
      goto LABEL_46;
    v44 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)cachedTransform,
            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
    cachedTransform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v44, 0, 0);
    if ( (cachedTransform & 1) != 0 )
    {
      this->fields.isBusy = 0;
      if ( !v44 )
        goto LABEL_46;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v44, 0, 0);
    }
    cachedTransform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
    if ( cachedTransform )
    {
      v46 = (unsigned __int64)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)cachedTransform, 0);
      cachedTransform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      if ( cachedTransform )
      {
        v51.fields.x = v27;
        v51.fields.y = v28;
        v51.fields.z = localPosition.fields.z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)cachedTransform, v51, 0);
        v49.fields.x = *((float *)&v10[20].monitor + 1) - (float)(v27 - *(float *)&v46);
        v49.fields.y = *(float *)&v10[21].klass - (float)(v28 - *((float *)&v46 + 1));
        UIPanel__set_clipOffset((UIPanel_o *)v10, v49, 0);
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
  v50.fields.x = v27;
  v50.fields.y = v28;
  v50.fields.z = localPosition.fields.z;
  v30 = (UnityEngine_Object_o *)SpringPanel__Begin((UnityEngine_GameObject_o *)cachedTransform, v50, 6.0, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  v31 = UnityEngine_Object__op_Inequality(v30, 0, 0);
  cachedTransform = 1;
  if ( v31 )
  {
    this->fields.isBusy = 1;
    if ( v30 )
    {
      klass = (System_Delegate_o *)v30[2].klass;
      v32 = (MissionNaviTransitionBoardItem_o *)&v30[2];
      v34 = (SpringPanel_OnFinished_o *)sub_2213CCC(SpringPanel_OnFinished_TypeInfo);
      SpringPanel_OnFinished___ctor(v34, (Il2CppObject *)this, Method_ListViewObject_EndMoveCenter__, 0);
      v35 = System_Delegate__Combine(klass, (System_Delegate_o *)v34, 0);
      if ( v35 )
      {
        v42 = SpringPanel_OnFinished_TypeInfo;
        if ( (SpringPanel_OnFinished_c *)v35->klass != SpringPanel_OnFinished_TypeInfo
          || (v32->klass = (MissionNaviTransitionBoardItem_c *)v35, (SpringPanel_OnFinished_c *)v35->klass != v42) )
        {
          sub_221405C(v35, v42, v36);
          goto LABEL_32;
        }
      }
      else
      {
        v32->klass = 0;
      }
      sub_2213A04(v32, (int32_t)v35, v36, v37, v38, v39, v40, v41);
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