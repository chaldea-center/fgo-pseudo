void ListViewDropObject___ctor(ListViewDropObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C446D4 & 1) == 0 )
  {
    sub_1C37058(&ListViewObject_TypeInfo);
    byte_4C446D4 = 1;
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
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.linkItem, 0, v2, v3);
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
  __int64 transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *dragObjectPrefab; // x19
  UnityEngine_GameObject_o *v7; // x22
  UnityEngine_GameObject_o *v8; // x19
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct ListViewItem_o *linkItem; // x1
  UnityEngine_Component_o *v12; // x20
  UnityEngine_Transform_o *v13; // x23
  UnityEngine_Transform_o *v14; // x23
  UnityEngine_Transform_o *v15; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  float v19; // s8
  float v20; // s9
  UnityEngine_GameObject_o *v21; // x21
  float v22; // s8
  float v23; // s9
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o eulerAngles; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C446D3 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UIDragDropRoot_TypeInfo);
    byte_4C446D3 = 1;
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
  v7 = gameObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  transform = (__int64)NGUITools__AddChild_49349528(v7, dragObjectPrefab, 0);
  if ( !transform )
    goto LABEL_29;
  v8 = (UnityEngine_GameObject_o *)transform;
  transform = (__int64)UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___);
  if ( !transform )
    goto LABEL_29;
  linkItem = this->fields.linkItem;
  v12 = (UnityEngine_Component_o *)transform;
  *(_QWORD *)(transform + 56) = linkItem;
  sub_1C36FFC((CGThumbnailListItem_o *)(transform + 56), (int32_t)linkItem, v9, v10);
  v13 = UnityEngine_Component__get_transform(v12, 0);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_29;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
  if ( !v13 )
    goto LABEL_29;
  UnityEngine_Transform__set_position(v13, position, 0);
  v14 = UnityEngine_Component__get_transform(v12, 0);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_29;
  eulerAngles = UnityEngine_Transform__get_eulerAngles((UnityEngine_Transform_o *)transform, 0);
  if ( !v14 )
    goto LABEL_29;
  UnityEngine_Transform__set_eulerAngles(v14, eulerAngles, 0);
  transform = (__int64)UnityEngine_Component__get_transform(v12, 0);
  v15 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4C3C926 )
  {
    transform = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v15 )
    goto LABEL_29;
  UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_29;
  v27 = UnityEngine_Transform__TransformPoint_71293352((UnityEngine_Transform_o *)transform, 1.0, 1.0, 0.0, 0);
  x = v27.fields.x;
  y = v27.fields.y;
  z = v27.fields.z;
  transform = (__int64)UnityEngine_Component__get_transform(v12, 0);
  if ( !transform )
    goto LABEL_29;
  v28.fields.x = x;
  v28.fields.y = y;
  v28.fields.z = z;
  v29 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)transform, v28, 0);
  v19 = v29.fields.x;
  v20 = v29.fields.y;
  transform = (__int64)UnityEngine_Component__get_transform(v12, 0);
  if ( !transform )
    goto LABEL_29;
  v30.fields.z = 1.0;
  v30.fields.x = v19;
  v30.fields.y = v20;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v30, 0);
  transform = (__int64)UnityEngine_Component__get_gameObject(v12, 0);
  if ( !v7 )
    goto LABEL_29;
  v21 = (UnityEngine_GameObject_o *)transform;
  transform = UnityEngine_GameObject__get_layer(v7, 0);
  if ( !v21
    || (UnityEngine_GameObject__set_layer(v21, transform, 0),
        (transform = (__int64)UnityEngine_Component__get_transform(v12, 0)) == 0)
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0),
        v22 = localPosition.fields.x,
        v23 = localPosition.fields.y,
        (transform = (__int64)UnityEngine_Component__get_transform(v12, 0)) == 0) )
  {
LABEL_29:
    sub_1C372B4(transform);
  }
  v32.fields.z = 0.0;
  v32.fields.x = v22;
  v32.fields.y = v23;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v32, 0);
  ListViewObject__SetBaseTransform((ListViewObject_o *)v12, 0);
  ListViewObject__SetVisible((ListViewObject_o *)v12, 1, 0);
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, Il2CppClass *))v12->klass[1]._1.declaringType)(
    v12,
    0,
    v12->klass[1]._1.parent);
  return v8;
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
    sub_1C36FFC((CGThumbnailListItem_o *)p_linkItem, 0, v2, v3);
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


void ListViewDropObject__SetItem_43803460(
        ListViewDropObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C446D2 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_12786/*"SetBaseTransform"*/);
    byte_4C446D2 = 1;
  }
  this->fields.linkItem = item;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.linkItem, (int32_t)item, (int32_t)seed, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  ((void (__fastcall *)(ListViewDropObject_o *, _QWORD, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    0,
    this->klass->vtable._9_SetInput.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SendMessage_71248628(gameObject, (System_String_o *)StringLiteral_12786/*"SetBaseTransform"*/, 0);
}