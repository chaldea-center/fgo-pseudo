void ListViewDropObject___ctor(ListViewDropObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C5849F & 1) == 0 )
  {
    sub_1C3E564(&ListViewObject_TypeInfo);
    byte_4C5849F = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


bool ListViewDropObject__ClearItem(ListViewDropObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  _BOOL4 isBusy; // w20

  isBusy = this->fields.isBusy;
  if ( !this->fields.isBusy )
  {
    this->fields.linkItem = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.linkItem, 0, v2, v3);
    ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
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
  UnityEngine_GameObject_o *dragObjectPrefab; // x19
  UnityEngine_GameObject_o *v8; // x22
  UnityEngine_GameObject_o *v9; // x19
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct ListViewItem_o *linkItem; // x1
  UnityEngine_Component_o *v13; // x20
  UnityEngine_Transform_o *v14; // x23
  UnityEngine_Transform_o *v15; // x23
  UnityEngine_Transform_o *v16; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  float v20; // s8
  float v21; // s9
  UnityEngine_GameObject_o *v22; // x21
  float v23; // s8
  float v24; // s9
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o eulerAngles; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5849E & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___);
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UIDragDropRoot_TypeInfo);
    byte_4C5849E = 1;
  }
  root = (UnityEngine_Object_o *)UIDragDropRoot_TypeInfo->static_fields->root;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  v8 = gameObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  transform = (__int64)NGUITools__AddChild_49422768(v8, dragObjectPrefab, 0);
  if ( !transform )
    goto LABEL_29;
  v9 = (UnityEngine_GameObject_o *)transform;
  transform = (__int64)UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___);
  if ( !transform )
    goto LABEL_29;
  linkItem = this->fields.linkItem;
  v13 = (UnityEngine_Component_o *)transform;
  *(_QWORD *)(transform + 56) = linkItem;
  sub_1C3E508((CGThumbnailListItem_o *)(transform + 56), (int32_t)linkItem, v10, v11);
  v14 = UnityEngine_Component__get_transform(v13, 0);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_29;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
  if ( !v14 )
    goto LABEL_29;
  UnityEngine_Transform__set_position(v14, position, 0);
  v15 = UnityEngine_Component__get_transform(v13, 0);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_29;
  eulerAngles = UnityEngine_Transform__get_eulerAngles((UnityEngine_Transform_o *)transform, 0);
  if ( !v15 )
    goto LABEL_29;
  UnityEngine_Transform__set_eulerAngles(v15, eulerAngles, 0);
  transform = (__int64)UnityEngine_Component__get_transform(v13, 0);
  v16 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4C506A6 )
  {
    transform = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A6 = 1;
  }
  if ( !v16 )
    goto LABEL_29;
  UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_29;
  v28 = UnityEngine_Transform__TransformPoint_71368164((UnityEngine_Transform_o *)transform, 1.0, 1.0, 0.0, 0);
  x = v28.fields.x;
  y = v28.fields.y;
  z = v28.fields.z;
  transform = (__int64)UnityEngine_Component__get_transform(v13, 0);
  if ( !transform )
    goto LABEL_29;
  v29.fields.x = x;
  v29.fields.y = y;
  v29.fields.z = z;
  v30 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)transform, v29, 0);
  v20 = v30.fields.x;
  v21 = v30.fields.y;
  transform = (__int64)UnityEngine_Component__get_transform(v13, 0);
  if ( !transform )
    goto LABEL_29;
  v31.fields.z = 1.0;
  v31.fields.x = v20;
  v31.fields.y = v21;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v31, 0);
  transform = (__int64)UnityEngine_Component__get_gameObject(v13, 0);
  if ( !v8 )
    goto LABEL_29;
  v22 = (UnityEngine_GameObject_o *)transform;
  transform = UnityEngine_GameObject__get_layer(v8, 0);
  if ( !v22
    || (UnityEngine_GameObject__set_layer(v22, transform, 0),
        (transform = (__int64)UnityEngine_Component__get_transform(v13, 0)) == 0)
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0),
        v23 = localPosition.fields.x,
        v24 = localPosition.fields.y,
        (transform = (__int64)UnityEngine_Component__get_transform(v13, 0)) == 0) )
  {
LABEL_29:
    sub_1C3E7C0(transform, v4);
  }
  v33.fields.z = 0.0;
  v33.fields.x = v23;
  v33.fields.y = v24;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v33, 0);
  ListViewObject__SetBaseTransform((ListViewObject_o *)v13, 0);
  ListViewObject__SetVisible((ListViewObject_o *)v13, 1, 0);
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, Il2CppClass *))v13->klass[1]._1.declaringType)(
    v13,
    0,
    v13->klass[1]._1.parent);
  return v9;
}


void ListViewDropObject__ReleaseItem(ListViewDropObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct ListViewItem_o **p_linkItem; // x0
  struct ListViewItem_o *linkItem; // t1

  linkItem = this->fields.linkItem;
  p_linkItem = &this->fields.linkItem;
  if ( linkItem )
  {
    this->fields.linkItem = 0;
    sub_1C3E508((CGThumbnailListItem_o *)p_linkItem, 0, v2, v3);
    ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
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


void ListViewDropObject__SetItem_43858944(
        ListViewDropObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4C5849D & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_12794/*"SetBaseTransform"*/);
    byte_4C5849D = 1;
  }
  this->fields.linkItem = item;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.linkItem, (int32_t)item, (int32_t)seed, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  ((void (__fastcall *)(ListViewDropObject_o *, _QWORD, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    0,
    this->klass->vtable._9_SetInput.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C3E7C0(0, v7);
  UnityEngine_GameObject__SendMessage_71323440(gameObject, (System_String_o *)StringLiteral_12794/*"SetBaseTransform"*/, 0);
}