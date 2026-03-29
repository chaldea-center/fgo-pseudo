void ListViewObject___cctor(const MethodInfo *method)
{
  if ( (byte_4D32108 & 1) == 0 )
  {
    sub_1C93AD4(&ListViewObject_TypeInfo);
    byte_4D32108 = 1;
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

  if ( (byte_4D320FB & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
    byte_4D320FB = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Collider___);
  this->fields.mCollider = (struct UnityEngine_Collider_o *)Component_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mCollider, (int32_t)Component_object, v4, v5, v6, v7, v8, v9);
  v10 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIDragDropListViewItem___);
  this->fields.mDragDrop = (struct UIDragDropListViewItem_o *)v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mDragDrop, (int32_t)v10, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_4D32107 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32107 = 1;
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
    sub_1C93D2C(0, v6);
  v14->fields.viewObject = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v14->fields.viewObject, 0, v7, v8, v9, v10, v11, v12);
  this->fields.linkItem = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.linkItem, 0, v15, v16, v17, v18, v19, v20);
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

  if ( (byte_4D320FC & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D320FC = 1;
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
    sub_1C93D2C(0, v6);
  v14->fields.viewObject = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v14->fields.viewObject, 0, v7, v8, v9, v10, v11, v12);
  this->fields.linkItem = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.linkItem, 0, v15, v16, v17, v18, v19, v20);
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

  if ( (byte_4D320FF & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D320FF = 1;
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
    manager = (__int64)NGUITools__AddChild_50075848(v10, v9, 0);
    if ( !manager )
      goto LABEL_27;
    v6 = (UnityEngine_GameObject_o *)manager;
    manager = (__int64)UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)manager,
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ListViewObject___);
    if ( !manager )
      goto LABEL_27;
    linkItem = this->fields.linkItem;
    v18 = manager;
    *(_QWORD *)(manager + 56) = linkItem;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(manager + 56), (int32_t)linkItem, v11, v12, v13, v14, v15, v16);
    v19 = this->fields.manager;
    *(_QWORD *)(v18 + 40) = v19;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v18 + 40), (int32_t)v19, v20, v21, v22, v23, v24, v25);
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
    if ( !byte_4D2A13E )
    {
      manager = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A13E = 1;
    }
    if ( !v28 )
      goto LABEL_27;
    UnityEngine_Transform__set_localScale(v28, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    manager = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !manager )
      goto LABEL_27;
    v35 = UnityEngine_Transform__TransformPoint_72146688((UnityEngine_Transform_o *)manager, 1.0, 1.0, 0.0, 0);
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
    if ( !v10
      || (v29 = (UnityEngine_GameObject_o *)manager, manager = UnityEngine_GameObject__get_layer(v10, 0), !v29)
      || (UnityEngine_GameObject__set_layer(v29, manager, 0),
          (manager = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v18, 0)) == 0)
      || (localPosition = (unsigned __int64)UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)manager,
                                              0),
          (manager = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v18, 0)) == 0) )
    {
LABEL_27:
      sub_1C93D2C(manager, v5);
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
    sub_1C93D2C(0, method);
  ListViewManager__DragMaskEnd(manager, method);
}


void ListViewObject__DragMaskStart(ListViewObject_o *this, const MethodInfo *method)
{
  ListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C93D2C(0, method);
  ListViewManager__DragMaskStart(manager, method);
}


void ListViewObject__EndMoveCenter(ListViewObject_o *this, const MethodInfo *method)
{
  ListViewManager_o *manager; // x0

  manager = this->fields.manager;
  this->fields.isBusy = 0;
  if ( !manager )
    sub_1C93D2C(0, method);
  ListViewManager__EndScrollAnim(manager, method);
}


UnityEngine_GameObject_o *ListViewObject__GetDragRoot(ListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C93D2C(0, method);
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

  if ( (byte_4D32101 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32101 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(dispObject, 0, 0) )
    return 0;
  v5 = this->fields.dispObject;
  if ( !v5 )
    sub_1C93D2C(0, v4);
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
  unsigned __int64 v17; // kr14_8
  float v18; // s1
  float v19; // s8
  float v20; // s13
  float v21; // s14
  bool canMoveHorizontally; // w24
  float v23; // s9
  float v24; // s8
  float v25; // s8
  float v26; // s9
  UnityEngine_Object_o *v27; // x20
  bool v28; // w8
  GrandQuestFolderBoardItem_o *v29; // x20
  System_Delegate_o *klass; // t1
  SpringPanel_OnFinished_o *v31; // x22
  System_Delegate_o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  SpringPanel_OnFinished_c *v39; // x1
  Il2CppObject *v40; // x21
  unsigned __int64 v41; // kr20_8
  unsigned __int64 v42; // kr40_8
  UnityEngine_Vector3_o localPosition; // 0:kr34_12.12
  UnityEngine_Vector2_o v45; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D32105 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
    sub_1C93AD4(&Method_ListViewObject_EndMoveCenter__);
    sub_1C93AD4(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SpringPanel_OnFinished_TypeInfo);
    byte_4D32105 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v8 = NGUITools__FindInParents_object_(
         gameObject,
         (const MethodInfo_322EDC8 *)Method_NGUITools_FindInParents_UIPanel___);
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
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
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
  v17 = (unsigned __int64)UnityEngine_Transform__InverseTransformPoint(v16, position, 0);
  cachedTransform = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v8->klass->vtable[11].methodPtr)(
                      v8,
                      v8->klass->vtable[11].method);
  if ( !cachedTransform )
    goto LABEL_46;
  if ( !*(_DWORD *)(cachedTransform + 24) )
    sub_1C93D34(cachedTransform);
  v41 = (unsigned __int64)UnityEngine_Transform__InverseTransformPoint(
                            v16,
                            *(UnityEngine_Vector3_o *)(cachedTransform + 32),
                            0);
  if ( !Component_object )
    goto LABEL_46;
  v18 = offSet + offSet;
  v19 = x * 0.5;
  v20 = y * 0.5;
  v21 = v18 + -1.0;
  canMoveHorizontally = UIScrollView__get_canMoveHorizontally((UIScrollView_o *)Component_object, 0);
  if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)Component_object, 0) )
    v23 = (float)(*((float *)&v17 + 1) - *((float *)&v41 + 1)) - (float)(v21 * v20);
  else
    v23 = 0.0;
  if ( canMoveHorizontally )
    v24 = (float)(*(float *)&v17 - *(float *)&v41) - (float)(v21 * v19);
  else
    v24 = 0.0;
  localPosition = UnityEngine_Transform__get_localPosition(v16, 0);
  v25 = localPosition.fields.x - v24;
  v26 = localPosition.fields.y - v23;
  cachedTransform = (__int64)UIRect__get_cachedGameObject((UIRect_o *)v8, 0);
  if ( !isAnimation )
  {
    if ( !cachedTransform )
      goto LABEL_46;
    v40 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)cachedTransform,
            (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v40, 0, 0);
    if ( (cachedTransform & 1) != 0 )
    {
      this->fields.isBusy = 0;
      if ( !v40 )
        goto LABEL_46;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v40, 0, 0);
    }
    cachedTransform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
    if ( cachedTransform )
    {
      v42 = (unsigned __int64)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)cachedTransform, 0);
      cachedTransform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      if ( cachedTransform )
      {
        v47.fields.x = v25;
        v47.fields.y = v26;
        v47.fields.z = localPosition.fields.z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)cachedTransform, v47, 0);
        v45.fields.x = *((float *)&v8[20].monitor + 1) - (float)(v25 - *(float *)&v42);
        v45.fields.y = *(float *)&v8[21].klass - (float)(v26 - *((float *)&v42 + 1));
        UIPanel__set_clipOffset((UIPanel_o *)v8, v45, 0);
        ((void (__fastcall *)(Il2CppObject *, _QWORD, const MethodInfo *))Component_object->klass->vtable[8].methodPtr)(
          Component_object,
          0,
          Component_object->klass->vtable[8].method);
        goto LABEL_44;
      }
    }
LABEL_46:
    sub_1C93D2C(cachedTransform, v10);
  }
  v46.fields.x = v25;
  v46.fields.y = v26;
  v46.fields.z = localPosition.fields.z;
  v27 = (UnityEngine_Object_o *)SpringPanel__Begin((UnityEngine_GameObject_o *)cachedTransform, v46, 6.0, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v28 = UnityEngine_Object__op_Inequality(v27, 0, 0);
  cachedTransform = 1;
  if ( v28 )
  {
    this->fields.isBusy = 1;
    if ( v27 )
    {
      klass = (System_Delegate_o *)v27[2].klass;
      v29 = (GrandQuestFolderBoardItem_o *)&v27[2];
      v31 = (SpringPanel_OnFinished_o *)sub_1C93D20(SpringPanel_OnFinished_TypeInfo);
      SpringPanel_OnFinished___ctor(v31, (Il2CppObject *)this, Method_ListViewObject_EndMoveCenter__, 0);
      v32 = System_Delegate__Combine(klass, (System_Delegate_o *)v31, 0);
      if ( v32 )
      {
        v39 = SpringPanel_OnFinished_TypeInfo;
        if ( (SpringPanel_OnFinished_c *)v32->klass != SpringPanel_OnFinished_TypeInfo
          || (v29->klass = (GrandQuestFolderBoardItem_c *)v32, (SpringPanel_OnFinished_c *)v32->klass != v39) )
        {
          sub_1C940C8(v32);
          goto LABEL_32;
        }
      }
      else
      {
        v29->klass = 0;
      }
      sub_1C93A78(v29, (int32_t)v32, v33, v34, v35, v36, v37, v38);
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
  bool canMoveHorizontally; // w25
  bool canMoveVertically; // w0
  float v21; // s0
  float v22; // s9
  float v23; // s8
  float z; // s10
  float v25; // s8
  float v26; // s9
  __int64 v27; // kr80_8
  float v28; // s12
  float v29; // s13
  int klass_high; // w8
  float v31; // s4
  float v32; // s12
  float v33; // s11
  float v34; // s15
  float v35; // s10
  float v36; // s0
  float v37; // s1
  bool v38; // zf
  float v39; // s11
  float v40; // s12
  bool v41; // w0
  float v42; // s0
  float v43; // s1
  float v44; // s2
  UnityEngine_Object_o *v45; // x20
  bool v46; // w8
  System_Delegate_o *klass; // t1
  System_Delegate_o *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  SpringPanel_OnFinished_c *v55; // x1
  Il2CppObject *v56; // x21
  unsigned __int64 v57; // kr20_8
  unsigned __int64 v58; // kr50_8
  unsigned __int64 v59; // kr88_8
  unsigned __int64 v60; // kr90_8
  __int64 v62; // [xsp+18h] [xbp-A8h] BYREF
  float v63; // [xsp+24h] [xbp-9Ch]
  float v64; // [xsp+28h] [xbp-98h]
  float x; // [xsp+78h] [xbp-48h]
  float y; // [xsp+7Ch] [xbp-44h]
  UnityEngine_Vector3_o localPosition; // 0:kr34_12.12
  UnityEngine_Vector3_o v68; // 0:kr70_12.12
  UnityEngine_Vector4_o finalClipRegion; // 0:kr40_16.16
  UnityEngine_Vector2_o v70; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D32103 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
    sub_1C93AD4(&Method_ListViewObject_EndMoveCenter__);
    sub_1C93AD4(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SpringPanel_OnFinished_TypeInfo);
    byte_4D32103 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v10 = NGUITools__FindInParents_object_(
          gameObject,
          (const MethodInfo_322EDC8 *)Method_NGUITools_FindInParents_UIPanel___);
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
                                           (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)v10, 0);
    transform = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v10->klass->vtable[11].methodPtr)(
                  v10,
                  v10->klass->vtable[11].method);
    if ( !transform )
      goto LABEL_72;
    if ( *(_DWORD *)(transform + 24) <= 2u )
      sub_1C93D34(transform);
    v15.n64_u64[0] = *(unsigned __int64 *)(transform + 56);
    v16 = *(float *)(transform + 64);
    v17.n64_u64[0] = *(unsigned __int64 *)(transform + 32);
    v18 = *(float *)(transform + 40);
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_72;
    position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
    if ( !cachedTransform )
      goto LABEL_72;
    v57 = (unsigned __int64)UnityEngine_Transform__InverseTransformPoint(cachedTransform, position, 0);
    *(float32x2_t *)&v68.fields.x = vmul_f32(vadd_f32(v15, v17), (float32x2_t)0x3F0000003F000000LL);
    v68.fields.z = (float)(v16 + v18) * 0.5;
    v58 = (unsigned __int64)UnityEngine_Transform__InverseTransformPoint(cachedTransform, v68, 0);
    if ( !Component_object )
      goto LABEL_72;
    canMoveHorizontally = UIScrollView__get_canMoveHorizontally(Component_object, 0);
    canMoveVertically = UIScrollView__get_canMoveVertically(Component_object, 0);
    v21 = (float)(*((float *)&v57 + 1) - *((float *)&v58 + 1)) + forceShiftPosY;
    if ( forceShiftPosY == 0.0 )
      v21 = *((float *)&v57 + 1) - *((float *)&v58 + 1);
    if ( canMoveVertically )
      v22 = v21;
    else
      v22 = 0.0;
    if ( canMoveHorizontally )
      v23 = *(float *)&v57 - *(float *)&v58;
    else
      v23 = 0.0;
    localPosition = UnityEngine_Transform__get_localPosition(cachedTransform, 0);
    z = localPosition.fields.z;
    v25 = localPosition.fields.x - v23;
    v26 = localPosition.fields.y - v22;
    if ( restrictScrollViewRange && Component_object->fields.restrictWithinPanel )
    {
      ((void (__fastcall *)(__int64 *__return_ptr, UIScrollView_o *, const MethodInfo *))Component_object->klass->vtable._4_get_bounds.methodPtr)(
        &v62,
        Component_object,
        Component_object->klass->vtable._4_get_bounds.method);
      v27 = v62;
      v28 = v63;
      v29 = v64;
      finalClipRegion = UIPanel__get_finalClipRegion((UIPanel_o *)v10, 0);
      klass_high = HIDWORD(v10[18].klass);
      v31 = *(float *)&v27 + v28;
      v32 = (float)(*(float *)&v27 - v28) + (float)(finalClipRegion.fields.z * 0.5);
      v33 = v31 - (float)(finalClipRegion.fields.z * 0.5);
      v34 = (float)(*((float *)&v27 + 1) - v29) + (float)(finalClipRegion.fields.w * 0.5);
      v35 = (float)(*((float *)&v27 + 1) + v29) - (float)(finalClipRegion.fields.w * 0.5);
      x = finalClipRegion.fields.x;
      y = finalClipRegion.fields.y;
      if ( klass_high == 3 )
      {
        v36 = *(float *)&v10[19].monitor;
        v37 = *((float *)&v10[19].monitor + 1);
        v32 = v32 - v36;
        v33 = v33 + v36;
        v34 = v34 - v37;
        v35 = v35 + v37;
      }
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      if ( !transform )
        goto LABEL_72;
      v59 = (unsigned __int64)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
      v38 = !UIScrollView__get_canMoveHorizontally(Component_object, 0);
      if ( v38 )
        v39 = *(float *)&v59;
      else
        v39 = (float)(x - v33) + *(float *)&v59;
      if ( v38 )
        v40 = *(float *)&v59;
      else
        v40 = (float)(x - v32) + *(float *)&v59;
      v41 = UIScrollView__get_canMoveVertically(Component_object, 0);
      v42 = (float)(y - v34) + *((float *)&v59 + 1);
      if ( v41 )
      {
        v43 = (float)(y - v35) + *((float *)&v59 + 1);
      }
      else
      {
        v42 = *((float *)&v59 + 1);
        v43 = *((float *)&v59 + 1);
      }
      if ( v25 <= v39 )
        v44 = v25;
      else
        v44 = v39;
      if ( v25 < v40 )
        v25 = v40;
      else
        v25 = v44;
      if ( v26 < v43 )
      {
        v26 = v43;
      }
      else if ( v26 > v42 )
      {
        v26 = v42;
      }
      z = localPosition.fields.z;
    }
    transform = (__int64)UIRect__get_cachedGameObject((UIRect_o *)v10, 0);
    if ( !isAnimation )
    {
LABEL_59:
      if ( !transform )
        goto LABEL_72;
      v56 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)transform,
              (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v56, 0, 0);
      if ( (transform & 1) != 0 )
      {
        this->fields.isBusy = 0;
        if ( !v56 )
          goto LABEL_72;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v56, 0, 0);
      }
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      if ( transform )
      {
        v60 = (unsigned __int64)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
        transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
        if ( transform )
        {
          v72.fields.x = v25;
          v72.fields.y = v26;
          v72.fields.z = z;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v72, 0);
          v70.fields.x = *((float *)&v10[20].monitor + 1) - (float)(v25 - *(float *)&v60);
          v70.fields.y = *(float *)&v10[21].klass - (float)(v26 - *((float *)&v60 + 1));
          UIPanel__set_clipOffset((UIPanel_o *)v10, v70, 0);
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
      sub_1C93D2C(transform, v12);
    }
    v71.fields.x = v25;
    v71.fields.y = v26;
    v71.fields.z = z;
    v45 = (UnityEngine_Object_o *)SpringPanel__Begin((UnityEngine_GameObject_o *)transform, v71, 6.0, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v46 = UnityEngine_Object__op_Inequality(v45, 0, 0);
    transform = 1;
    if ( v46 )
    {
      this->fields.isBusy = 1;
      if ( !v45 )
        goto LABEL_72;
      klass = (System_Delegate_o *)v45[2].klass;
      v10 = (Il2CppObject *)&v45[2];
      Component_object = (UIScrollView_o *)sub_1C93D20(SpringPanel_OnFinished_TypeInfo);
      SpringPanel_OnFinished___ctor(
        (SpringPanel_OnFinished_o *)Component_object,
        (Il2CppObject *)this,
        Method_ListViewObject_EndMoveCenter__,
        0);
      v48 = System_Delegate__Combine(klass, (System_Delegate_o *)Component_object, 0);
      if ( v48 )
      {
        v55 = SpringPanel_OnFinished_TypeInfo;
        if ( (SpringPanel_OnFinished_c *)v48->klass != SpringPanel_OnFinished_TypeInfo
          || (v10->klass = (Il2CppClass *)v48, (SpringPanel_OnFinished_c *)v48->klass != v55) )
        {
          sub_1C940C8(v48);
          goto LABEL_59;
        }
      }
      else
      {
        v10->klass = 0;
      }
      sub_1C93A78((GrandQuestFolderBoardItem_o *)v10, (int32_t)v48, v49, v50, v51, v52, v53, v54);
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
  unsigned __int64 v17; // kr14_8
  float v18; // s1
  float v19; // s8
  float v20; // s13
  float v21; // s14
  bool canMoveHorizontally; // w24
  float v23; // s9
  float v24; // s8
  float v25; // s8
  float v26; // s9
  UnityEngine_Object_o *v27; // x20
  bool v28; // w8
  GrandQuestFolderBoardItem_o *v29; // x20
  System_Delegate_o *klass; // t1
  SpringPanel_OnFinished_o *v31; // x22
  System_Delegate_o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  SpringPanel_OnFinished_c *v39; // x1
  Il2CppObject *v40; // x21
  unsigned __int64 v41; // kr20_8
  unsigned __int64 v42; // kr40_8
  UnityEngine_Vector3_o localPosition; // 0:kr34_12.12
  UnityEngine_Vector2_o v45; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D32104 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
    sub_1C93AD4(&Method_ListViewObject_EndMoveCenter__);
    sub_1C93AD4(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SpringPanel_OnFinished_TypeInfo);
    byte_4D32104 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v8 = NGUITools__FindInParents_object_(
         gameObject,
         (const MethodInfo_322EDC8 *)Method_NGUITools_FindInParents_UIPanel___);
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
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
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
  v17 = (unsigned __int64)UnityEngine_Transform__InverseTransformPoint(v16, position, 0);
  cachedTransform = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v8->klass->vtable[11].methodPtr)(
                      v8,
                      v8->klass->vtable[11].method);
  if ( !cachedTransform )
    goto LABEL_46;
  if ( *(_DWORD *)(cachedTransform + 24) <= 1u )
    sub_1C93D34(cachedTransform);
  v41 = (unsigned __int64)UnityEngine_Transform__InverseTransformPoint(
                            v16,
                            *(UnityEngine_Vector3_o *)(cachedTransform + 44),
                            0);
  if ( !Component_object )
    goto LABEL_46;
  v18 = offSet + offSet;
  v19 = x * 0.5;
  v20 = y * 0.5;
  v21 = v18 + 1.0;
  canMoveHorizontally = UIScrollView__get_canMoveHorizontally((UIScrollView_o *)Component_object, 0);
  if ( UIScrollView__get_canMoveVertically((UIScrollView_o *)Component_object, 0) )
    v23 = (float)(*((float *)&v17 + 1) - *((float *)&v41 + 1)) - (float)(v21 * v20);
  else
    v23 = 0.0;
  if ( canMoveHorizontally )
    v24 = (float)(*(float *)&v17 - *(float *)&v41) - (float)(v21 * v19);
  else
    v24 = 0.0;
  localPosition = UnityEngine_Transform__get_localPosition(v16, 0);
  v25 = localPosition.fields.x - v24;
  v26 = localPosition.fields.y - v23;
  cachedTransform = (__int64)UIRect__get_cachedGameObject((UIRect_o *)v8, 0);
  if ( !isAnimation )
  {
    if ( !cachedTransform )
      goto LABEL_46;
    v40 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)cachedTransform,
            (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SpringPanel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v40, 0, 0);
    if ( (cachedTransform & 1) != 0 )
    {
      this->fields.isBusy = 0;
      if ( !v40 )
        goto LABEL_46;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v40, 0, 0);
    }
    cachedTransform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
    if ( cachedTransform )
    {
      v42 = (unsigned __int64)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)cachedTransform, 0);
      cachedTransform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
      if ( cachedTransform )
      {
        v47.fields.x = v25;
        v47.fields.y = v26;
        v47.fields.z = localPosition.fields.z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)cachedTransform, v47, 0);
        v45.fields.x = *((float *)&v8[20].monitor + 1) - (float)(v25 - *(float *)&v42);
        v45.fields.y = *(float *)&v8[21].klass - (float)(v26 - *((float *)&v42 + 1));
        UIPanel__set_clipOffset((UIPanel_o *)v8, v45, 0);
        ((void (__fastcall *)(Il2CppObject *, _QWORD, const MethodInfo *))Component_object->klass->vtable[8].methodPtr)(
          Component_object,
          0,
          Component_object->klass->vtable[8].method);
        goto LABEL_44;
      }
    }
LABEL_46:
    sub_1C93D2C(cachedTransform, v10);
  }
  v46.fields.x = v25;
  v46.fields.y = v26;
  v46.fields.z = localPosition.fields.z;
  v27 = (UnityEngine_Object_o *)SpringPanel__Begin((UnityEngine_GameObject_o *)cachedTransform, v46, 6.0, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v28 = UnityEngine_Object__op_Inequality(v27, 0, 0);
  cachedTransform = 1;
  if ( v28 )
  {
    this->fields.isBusy = 1;
    if ( v27 )
    {
      klass = (System_Delegate_o *)v27[2].klass;
      v29 = (GrandQuestFolderBoardItem_o *)&v27[2];
      v31 = (SpringPanel_OnFinished_o *)sub_1C93D20(SpringPanel_OnFinished_TypeInfo);
      SpringPanel_OnFinished___ctor(v31, (Il2CppObject *)this, Method_ListViewObject_EndMoveCenter__, 0);
      v32 = System_Delegate__Combine(klass, (System_Delegate_o *)v31, 0);
      if ( v32 )
      {
        v39 = SpringPanel_OnFinished_TypeInfo;
        if ( (SpringPanel_OnFinished_c *)v32->klass != SpringPanel_OnFinished_TypeInfo
          || (v29->klass = (GrandQuestFolderBoardItem_c *)v32, (SpringPanel_OnFinished_c *)v32->klass != v39) )
        {
          sub_1C940C8(v32);
          goto LABEL_32;
        }
      }
      else
      {
        v29->klass = 0;
      }
      sub_1C93A78(v29, (int32_t)v32, v33, v34, v35, v36, v37, v38);
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

  if ( (byte_4D32106 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_9904/*"OnClickListView"*/);
    byte_4D32106 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C93D2C(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9904/*"OnClickListView"*/, (Il2CppObject *)this, 0);
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
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&linkItem->fields.viewObject, 0, v2, v3, v4, v5, v6, v7);
    this->fields.linkItem = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)p_linkItem, 0, v11, v12, v13, v14, v15, v16);
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
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.baseParent, (int32_t)parent, v6, v7, v8, v9, v10, v11),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
    || (this->fields.basePosition = UnityEngine_Transform__get_localPosition(transform, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C93D2C(transform, v4);
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
  sub_1C93A78(
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
    sub_1C93D2C(0, value);
  ListViewManager__SetEnabledColliderDragMask(manager, value, method);
}


void ListViewObject__SetInput(ListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  UnityEngine_Object_o *mCollider; // x21
  __int64 v6; // x1
  UnityEngine_Collider_o *v7; // x0
  UnityEngine_Object_o *mDragDrop; // x21

  if ( (byte_4D32102 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32102 = 1;
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
    sub_1C93D2C(v7, v6);
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.linkItem, (int32_t)item, (int32_t)method, v3, v4, v5, v6, v7);
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

  if ( (byte_4D320FE & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_12884/*"SetBaseTransform"*/);
    byte_4D320FE = 1;
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
    sub_1C93D2C(transform, v8);
  }
  UnityEngine_GameObject__SendMessage_72101276(
    (UnityEngine_GameObject_o *)transform,
    (System_String_o *)StringLiteral_12884/*"SetBaseTransform"*/,
    0);
}


void ListViewObject__SetItem_44518484(
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
  if ( (byte_4D320FD & 1) == 0 )
  {
    this = (ListViewObject_o *)sub_1C93AD4(&StringLiteral_12884/*"SetBaseTransform"*/);
    byte_4D320FD = 1;
  }
  if ( !item )
    goto LABEL_16;
  item->fields.viewObject = v10;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&item->fields.viewObject,
    (int32_t)v10,
    (int32_t)seed,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v10->fields.linkItem = item;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v10->fields.linkItem, (int32_t)item, v11, v12, v13, v14, v15, v16);
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
    sub_1C93D2C(this, item);
  }
  UnityEngine_GameObject__SendMessage_72101276(
    (UnityEngine_GameObject_o *)this,
    (System_String_o *)StringLiteral_12884/*"SetBaseTransform"*/,
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
  sub_1C93A78(
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
    sub_1C93D2C(0, v8);
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

  if ( (byte_4D32100 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32100 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0, 0) )
  {
    v7 = this->fields.dispObject;
    if ( !v7 )
      sub_1C93D2C(0, v6);
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