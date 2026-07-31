void ListViewDropObject___ctor(ListViewDropObject_o *this, const MethodInfo *method)
{
  if ( (byte_5939E04 & 1) == 0 )
  {
    sub_21FFC50(&ListViewObject_TypeInfo);
    byte_5939E04 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool ListViewDropObject__ClearItem(ListViewDropObject_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  _BOOL4 isBusy; // w20
  const MethodInfo *v10; // x2

  isBusy = this->fields.isBusy;
  if ( !this->fields.isBusy )
  {
    this->fields.linkItem = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.linkItem, 0, v2, v3, v4, v5, v6, v7);
    ListViewObject__SetVisible((ListViewObject_o *)this, 0, v10);
    ((void (__fastcall *)(ListViewDropObject_o *, _QWORD, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
      this,
      0,
      this->klass->vtable._9_SetInput.method);
  }
  return !isBusy;
}


UnityEngine_GameObject_o *ListViewDropObject__CreateDragObject(ListViewDropObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *root; // x19
  __int64 v4; // x1
  __int64 transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *dragObjectPrefab; // x19
  UnityEngine_GameObject_o *v9; // x22
  UnityEngine_GameObject_o *v10; // x19
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct ListViewItem_o *linkItem; // x1
  UnityEngine_Component_o *v18; // x20
  UnityEngine_Transform_o *v19; // x23
  UnityEngine_Transform_o *v20; // x23
  UnityEngine_Transform_o *v21; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  float v25; // s8
  float v26; // s9
  UnityEngine_GameObject_o *v27; // x21
  float v28; // s8
  float v29; // s9
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x2
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o eulerAngles; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5939E03 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIDragDropRoot_TypeInfo);
    byte_5939E03 = 1;
  }
  root = (UnityEngine_Object_o *)UIDragDropRoot_TypeInfo->static_fields->root;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(root, 0, 0) )
  {
    transform = (__int64)UIDragDropRoot_TypeInfo->static_fields->root;
    if ( !transform )
      goto LABEL_29;
  }
  else
  {
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_29;
    transform = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !transform )
      goto LABEL_29;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
  dragObjectPrefab = this->fields.dragObjectPrefab;
  v9 = gameObject;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7);
  transform = (__int64)NGUITools__AddChild_56210768(v9, dragObjectPrefab, 0);
  if ( !transform )
    goto LABEL_29;
  v10 = (UnityEngine_GameObject_o *)transform;
  transform = (__int64)UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___);
  if ( !transform )
    goto LABEL_29;
  linkItem = this->fields.linkItem;
  v18 = (UnityEngine_Component_o *)transform;
  *(_QWORD *)(transform + 56) = linkItem;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(transform + 56), (int32_t)linkItem, v11, v12, v13, v14, v15, v16);
  v19 = UnityEngine_Component__get_transform(v18, 0);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_29;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
  if ( !v19 )
    goto LABEL_29;
  UnityEngine_Transform__set_position(v19, position, 0);
  v20 = UnityEngine_Component__get_transform(v18, 0);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_29;
  eulerAngles = UnityEngine_Transform__get_eulerAngles((UnityEngine_Transform_o *)transform, 0);
  if ( !v20 )
    goto LABEL_29;
  UnityEngine_Transform__set_eulerAngles(v20, eulerAngles, 0);
  transform = (__int64)UnityEngine_Component__get_transform(v18, 0);
  v21 = (UnityEngine_Transform_o *)transform;
  if ( !byte_5931945 )
  {
    transform = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v21 )
    goto LABEL_29;
  UnityEngine_Transform__set_localScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_29;
  v35 = UnityEngine_Transform__TransformPoint_83283144((UnityEngine_Transform_o *)transform, 1.0, 1.0, 0.0, 0);
  x = v35.fields.x;
  y = v35.fields.y;
  z = v35.fields.z;
  transform = (__int64)UnityEngine_Component__get_transform(v18, 0);
  if ( !transform )
    goto LABEL_29;
  v36.fields.x = x;
  v36.fields.y = y;
  v36.fields.z = z;
  v37 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)transform, v36, 0);
  v25 = v37.fields.x;
  v26 = v37.fields.y;
  transform = (__int64)UnityEngine_Component__get_transform(v18, 0);
  if ( !transform )
    goto LABEL_29;
  v38.fields.x = v25;
  v38.fields.y = v26;
  v38.fields.z = 1.0;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v38, 0);
  transform = (__int64)UnityEngine_Component__get_gameObject(v18, 0);
  if ( !v9 )
    goto LABEL_29;
  v27 = (UnityEngine_GameObject_o *)transform;
  transform = UnityEngine_GameObject__get_layer(v9, 0);
  if ( !v27
    || (UnityEngine_GameObject__set_layer(v27, transform, 0),
        (transform = (__int64)UnityEngine_Component__get_transform(v18, 0)) == 0)
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0),
        v28 = localPosition.fields.x,
        v29 = localPosition.fields.y,
        (transform = (__int64)UnityEngine_Component__get_transform(v18, 0)) == 0) )
  {
LABEL_29:
    sub_21FFECC(transform, v4);
  }
  v40.fields.z = 0.0;
  v40.fields.x = v28;
  v40.fields.y = v29;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v40, 0);
  ListViewObject__SetBaseTransform((ListViewObject_o *)v18, v30);
  ListViewObject__SetVisible((ListViewObject_o *)v18, 1, v31);
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, Il2CppClass *))v18->klass[1]._1.declaringType)(
    v18,
    0,
    v18->klass[1]._1.parent);
  return v10;
}


void ListViewDropObject__ReleaseItem(ListViewDropObject_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ListViewItem_o **p_linkItem; // x0
  struct ListViewItem_o *linkItem; // t1
  const MethodInfo *v11; // x2

  linkItem = this->fields.linkItem;
  p_linkItem = &this->fields.linkItem;
  if ( linkItem )
  {
    this->fields.linkItem = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_linkItem, 0, v2, v3, v4, v5, v6, v7);
    ListViewObject__SetVisible((ListViewObject_o *)this, 0, v11);
    ((void (__fastcall *)(ListViewDropObject_o *, _QWORD, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
      this,
      0,
      this->klass->vtable._9_SetInput.method);
  }
}


void ListViewDropObject__SetItem(ListViewDropObject_o *this, ListViewItem_o *item, const MethodInfo *method)
{
  ((void (__fastcall *)(ListViewDropObject_o *, ListViewItem_o *, _QWORD, const MethodInfo *))this->klass->vtable._6_SetItem.methodPtr)(
    this,
    item,
    0,
    this->klass->vtable._6_SetItem.method);
}


void ListViewDropObject__SetItem_50747952(
        ListViewDropObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1

  if ( (byte_5939E02 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13297/*"SetBaseTransform"*/);
    byte_5939E02 = 1;
  }
  this->fields.linkItem = item;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.linkItem,
    (int32_t)item,
    (System_String_o *)seed,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, v10);
  ((void (__fastcall *)(ListViewDropObject_o *, _QWORD, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    0,
    this->klass->vtable._9_SetInput.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v12);
  UnityEngine_GameObject__SendMessage_83224792(gameObject, (System_String_o *)StringLiteral_13297/*"SetBaseTransform"*/, 0);
}