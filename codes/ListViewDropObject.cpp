void __fastcall ListViewDropObject___ctor(ListViewDropObject_o *this, const MethodInfo *method)
{
  if ( (byte_4B1DBC4 & 1) == 0 )
  {
    sub_1BCAFF8(&ListViewObject_TypeInfo, method);
    byte_4B1DBC4 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall ListViewDropObject__ClearItem(ListViewDropObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  _BOOL4 isBusy; // w20
  const MethodInfo *v6; // x2

  isBusy = this->fields.isBusy;
  if ( !this->fields.isBusy )
  {
    this->fields.linkItem = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.linkItem, 0, v2, v3);
    ListViewObject__SetVisible((ListViewObject_o *)this, 0, v6);
    ((void (__fastcall *)(ListViewDropObject_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
      this,
      0LL,
      this->klass->vtable._10_Invalidation.methodPtr);
  }
  return !isBusy;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ListViewDropObject__CreateDragObject(
        ListViewDropObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *root; // x19
  __int64 v7; // x1
  __int64 transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *dragObjectPrefab; // x19
  UnityEngine_GameObject_o *v11; // x22
  UnityEngine_GameObject_o *v12; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct ListViewItem_o *linkItem; // x1
  UnityEngine_Component_o *v16; // x20
  UnityEngine_Transform_o *v17; // x23
  int v18; // s0
  UnityEngine_Transform_o *v21; // x23
  int v22; // s0
  UnityEngine_Transform_o *v25; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  float v29; // s8
  float v30; // s9
  UnityEngine_GameObject_o *v31; // x21
  float v32; // s8
  float v33; // s9
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x2
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1DBC3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___, method);
    sub_1BCAFF8(&NGUITools_TypeInfo, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    sub_1BCAFF8(&UIDragDropRoot_TypeInfo, v5);
    byte_4B1DBC3 = 1;
  }
  root = (UnityEngine_Object_o *)UIDragDropRoot_TypeInfo->static_fields->root;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(root, 0LL, 0LL) )
  {
    transform = (__int64)UIDragDropRoot_TypeInfo->static_fields->root;
    if ( !transform )
      goto LABEL_29;
  }
  else
  {
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_29;
    transform = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_29;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  dragObjectPrefab = this->fields.dragObjectPrefab;
  v11 = gameObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  transform = (__int64)NGUITools__AddChild_48542324(v11, dragObjectPrefab, 0LL);
  if ( !transform )
    goto LABEL_29;
  v12 = (UnityEngine_GameObject_o *)transform;
  transform = (__int64)UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___);
  if ( !transform )
    goto LABEL_29;
  linkItem = this->fields.linkItem;
  v16 = (UnityEngine_Component_o *)transform;
  *(_QWORD *)(transform + 56) = linkItem;
  sub_1BCAF9C((CGThumbnailListItem_o *)(transform + 56), (int32_t)linkItem, v13, v14);
  v17 = UnityEngine_Component__get_transform(v16, 0LL);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
  if ( !v17 )
    goto LABEL_29;
  UnityEngine_Transform__set_position(v17, *(UnityEngine_Vector3_o *)&v18, 0LL);
  v21 = UnityEngine_Component__get_transform(v16, 0LL);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_eulerAngles((UnityEngine_Transform_o *)transform, 0LL);
  if ( !v21 )
    goto LABEL_29;
  UnityEngine_Transform__set_eulerAngles(v21, *(UnityEngine_Vector3_o *)&v22, 0LL);
  transform = (__int64)UnityEngine_Component__get_transform(v16, 0LL);
  v25 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4B16196 )
  {
    transform = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v7);
    byte_4B16196 = 1;
  }
  if ( !v25 )
    goto LABEL_29;
  UnityEngine_Transform__set_localScale(v25, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  v37 = UnityEngine_Transform__TransformPoint_70162676((UnityEngine_Transform_o *)transform, 1.0, 1.0, 0.0, 0LL);
  x = v37.fields.x;
  y = v37.fields.y;
  z = v37.fields.z;
  transform = (__int64)UnityEngine_Component__get_transform(v16, 0LL);
  if ( !transform )
    goto LABEL_29;
  v38.fields.x = x;
  v38.fields.y = y;
  v38.fields.z = z;
  v39 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)transform, v38, 0LL);
  v29 = v39.fields.x;
  v30 = v39.fields.y;
  transform = (__int64)UnityEngine_Component__get_transform(v16, 0LL);
  if ( !transform )
    goto LABEL_29;
  v40.fields.z = 1.0;
  v40.fields.x = v29;
  v40.fields.y = v30;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v40, 0LL);
  transform = (__int64)UnityEngine_Component__get_gameObject(v16, 0LL);
  if ( !v11 )
    goto LABEL_29;
  v31 = (UnityEngine_GameObject_o *)transform;
  transform = UnityEngine_GameObject__get_layer(v11, 0LL);
  if ( !v31
    || (UnityEngine_GameObject__set_layer(v31, transform, 0LL),
        (transform = (__int64)UnityEngine_Component__get_transform(v16, 0LL)) == 0)
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL),
        v32 = localPosition.fields.x,
        v33 = localPosition.fields.y,
        (transform = (__int64)UnityEngine_Component__get_transform(v16, 0LL)) == 0) )
  {
LABEL_29:
    sub_1BCB254(transform, v7);
  }
  v42.fields.z = 0.0;
  v42.fields.x = v32;
  v42.fields.y = v33;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v42, 0LL);
  ListViewObject__SetBaseTransform((ListViewObject_o *)v16, v34);
  ListViewObject__SetVisible((ListViewObject_o *)v16, 1, v35);
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))v16->klass[1]._1.parent)(
    v16,
    0LL,
    v16->klass[1]._1.generic_class);
  return v12;
}


void __fastcall ListViewDropObject__ReleaseItem(ListViewDropObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct ListViewItem_o **p_linkItem; // x0
  struct ListViewItem_o *linkItem; // t1
  const MethodInfo *v7; // x2

  linkItem = this->fields.linkItem;
  p_linkItem = &this->fields.linkItem;
  if ( linkItem )
  {
    this->fields.linkItem = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)p_linkItem, 0, v2, v3);
    ListViewObject__SetVisible((ListViewObject_o *)this, 0, v7);
    ((void (__fastcall *)(ListViewDropObject_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
      this,
      0LL,
      this->klass->vtable._10_Invalidation.methodPtr);
  }
}


void __fastcall ListViewDropObject__SetItem(ListViewDropObject_o *this, ListViewItem_o *item, const MethodInfo *method)
{
  ((void (__fastcall *)(ListViewDropObject_o *, ListViewItem_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._6_SetItem.method)(
    this,
    item,
    0LL,
    this->klass->vtable._7_IsCanDrag.methodPtr);
}


void __fastcall ListViewDropObject__SetItem_42930988(
        ListViewDropObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1

  if ( (byte_4B1DBC2 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_12672/*"SetBaseTransform"*/, item);
    byte_4B1DBC2 = 1;
  }
  this->fields.linkItem = item;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.linkItem, (int32_t)item, (int32_t)seed, method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, v6);
  ((void (__fastcall *)(ListViewDropObject_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    0LL,
    this->klass->vtable._10_Invalidation.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCB254(0LL, v8);
  UnityEngine_GameObject__SendMessage_70117952(gameObject, (System_String_o *)StringLiteral_12672/*"SetBaseTransform"*/, 0LL);
}