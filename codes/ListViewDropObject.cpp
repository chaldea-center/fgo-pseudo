void __fastcall ListViewDropObject___ctor(ListViewDropObject_o *this, const MethodInfo *method)
{
  if ( (byte_4213EFF & 1) == 0 )
  {
    sub_B0D8A4(&ListViewObject_TypeInfo, method);
    byte_4213EFF = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


bool __fastcall ListViewDropObject__ClearItem(ListViewDropObject_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  if ( this->fields.isBusy )
    return 0;
  this->fields.linkItem = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.linkItem, 0LL, v2, v3, v4, v5, v6, v7);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  ((void (__fastcall *)(ListViewDropObject_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    0LL,
    this->klass->vtable._10_Invalidation.methodPtr);
  return 1;
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
  void *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *dragObjectPrefab; // x19
  UnityEngine_GameObject_o *v10; // x22
  UnityEngine_GameObject_o *v11; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **linkItem; // x1
  UnityEngine_Component_o *v19; // x20
  UnityEngine_Transform_o *v20; // x23
  int v21; // s0
  UnityEngine_Transform_o *v24; // x23
  int v25; // s0
  UnityEngine_Transform_o *v28; // x23
  int v29; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  float v35; // s8
  float v36; // s9
  UnityEngine_GameObject_o *v37; // x21
  float v38; // s8
  float v39; // s9
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4213EFE & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___, method);
    sub_B0D8A4(&NGUITools_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&UIDragDropRoot_TypeInfo, v5);
    byte_4213EFE = 1;
  }
  root = (UnityEngine_Object_o *)UIDragDropRoot_TypeInfo->static_fields->root;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(root, 0LL, 0LL) )
  {
    transform = UIDragDropRoot_TypeInfo->static_fields->root;
    if ( !transform )
      goto LABEL_29;
  }
  else
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_29;
    transform = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_29;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
  dragObjectPrefab = this->fields.dragObjectPrefab;
  v10 = gameObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  transform = NGUITools__AddChild_45603180(v10, dragObjectPrefab, 0LL);
  if ( !transform )
    goto LABEL_29;
  v11 = (UnityEngine_GameObject_o *)transform;
  transform = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                (UnityEngine_GameObject_o *)transform,
                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___);
  if ( !transform )
    goto LABEL_29;
  linkItem = (System_Int32_array **)this->fields.linkItem;
  v19 = (UnityEngine_Component_o *)transform;
  *((_QWORD *)transform + 6) = linkItem;
  sub_B0D840((BattleServantConfConponent_o *)((char *)transform + 48), linkItem, v12, v13, v14, v15, v16, v17);
  v20 = UnityEngine_Component__get_transform(v19, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
  if ( !v20 )
    goto LABEL_29;
  UnityEngine_Transform__set_position(v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
  v24 = UnityEngine_Component__get_transform(v19, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Transform__get_eulerAngles((UnityEngine_Transform_o *)transform, 0LL);
  if ( !v24 )
    goto LABEL_29;
  UnityEngine_Transform__set_eulerAngles(v24, *(UnityEngine_Vector3_o *)&v25, 0LL);
  v28 = UnityEngine_Component__get_transform(v19, 0LL);
  *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Vector3__get_one(0LL);
  if ( !v28 )
    goto LABEL_29;
  UnityEngine_Transform__set_localScale(v28, *(UnityEngine_Vector3_o *)&v29, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  v41 = UnityEngine_Transform__TransformPoint_35059040((UnityEngine_Transform_o *)transform, 1.0, 1.0, 0.0, 0LL);
  x = v41.fields.x;
  y = v41.fields.y;
  z = v41.fields.z;
  transform = UnityEngine_Component__get_transform(v19, 0LL);
  if ( !transform )
    goto LABEL_29;
  v42.fields.x = x;
  v42.fields.y = y;
  v42.fields.z = z;
  v43 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)transform, v42, 0LL);
  v35 = v43.fields.x;
  v36 = v43.fields.y;
  transform = UnityEngine_Component__get_transform(v19, 0LL);
  if ( !transform )
    goto LABEL_29;
  v44.fields.z = 1.0;
  v44.fields.x = v35;
  v44.fields.y = v36;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v44, 0LL);
  transform = UnityEngine_Component__get_gameObject(v19, 0LL);
  if ( !v10 )
    goto LABEL_29;
  v37 = (UnityEngine_GameObject_o *)transform;
  transform = (void *)UnityEngine_GameObject__get_layer(v10, 0LL);
  if ( !v37
    || (UnityEngine_GameObject__set_layer(v37, (int32_t)transform, 0LL),
        (transform = UnityEngine_Component__get_transform(v19, 0LL)) == 0LL)
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL),
        v38 = localPosition.fields.x,
        v39 = localPosition.fields.y,
        (transform = UnityEngine_Component__get_transform(v19, 0LL)) == 0LL) )
  {
LABEL_29:
    sub_B0D97C(transform);
  }
  v46.fields.z = 0.0;
  v46.fields.x = v38;
  v46.fields.y = v39;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v46, 0LL);
  ListViewObject__SetBaseTransform((ListViewObject_o *)v19, 0LL);
  ListViewObject__SetVisible((ListViewObject_o *)v19, 1, 0LL);
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))v19->klass[1]._1.parent)(
    v19,
    0LL,
    v19->klass[1]._1.generic_class);
  return v11;
}


void __fastcall ListViewDropObject__ReleaseItem(ListViewDropObject_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct ListViewItem_o **p_linkItem; // x0
  struct ListViewItem_o *linkItem; // t1

  linkItem = this->fields.linkItem;
  p_linkItem = &this->fields.linkItem;
  if ( linkItem )
  {
    this->fields.linkItem = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)p_linkItem, 0LL, v2, v3, v4, v5, v6, v7);
    ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
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


void __fastcall ListViewDropObject__SetItem_23699536(
        ListViewDropObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4213EFD & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12838/*"SetBaseTransform"*/, item);
    byte_4213EFD = 1;
  }
  this->fields.linkItem = item;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.linkItem,
    (System_Int32_array **)item,
    (System_String_array **)seed,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  ((void (__fastcall *)(ListViewDropObject_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    0LL,
    this->klass->vtable._10_Invalidation.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SendMessage_40784904(gameObject, (System_String_o *)StringLiteral_12838/*"SetBaseTransform"*/, 0LL);
}