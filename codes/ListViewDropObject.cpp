void __fastcall ListViewDropObject___ctor(ListViewDropObject_o *this, const MethodInfo *method)
{
  if ( (byte_42AF1FD & 1) == 0 )
  {
    sub_B52984(&ListViewObject_TypeInfo);
    byte_42AF1FD = 1;
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields.linkItem, 0LL, v2, v3, v4, v5, v6, v7);
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
  UnityEngine_Object_o *root; // x19
  __int64 v4; // x1
  void *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *dragObjectPrefab; // x19
  UnityEngine_GameObject_o *v8; // x22
  UnityEngine_GameObject_o *v9; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **linkItem; // x1
  UnityEngine_Component_o *v17; // x20
  UnityEngine_Transform_o *v18; // x23
  int v19; // s0
  UnityEngine_Transform_o *v22; // x23
  int v23; // s0
  UnityEngine_Transform_o *v26; // x23
  int v27; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  float v33; // s8
  float v34; // s9
  UnityEngine_GameObject_o *v35; // x21
  float v36; // s8
  float v37; // s9
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42AF1FC & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___);
    sub_B52984(&NGUITools_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&UIDragDropRoot_TypeInfo);
    byte_42AF1FC = 1;
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
  v8 = gameObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  transform = NGUITools__AddChild_46085584(v8, dragObjectPrefab, 0LL);
  if ( !transform )
    goto LABEL_29;
  v9 = (UnityEngine_GameObject_o *)transform;
  transform = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                (UnityEngine_GameObject_o *)transform,
                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___);
  if ( !transform )
    goto LABEL_29;
  linkItem = (System_Int32_array **)this->fields.linkItem;
  v17 = (UnityEngine_Component_o *)transform;
  *((_QWORD *)transform + 6) = linkItem;
  sub_B52920((BattleServantConfConponent_o *)((char *)transform + 48), linkItem, v10, v11, v12, v13, v14, v15);
  v18 = UnityEngine_Component__get_transform(v17, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
  if ( !v18 )
    goto LABEL_29;
  UnityEngine_Transform__set_position(v18, *(UnityEngine_Vector3_o *)&v19, 0LL);
  v22 = UnityEngine_Component__get_transform(v17, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_eulerAngles((UnityEngine_Transform_o *)transform, 0LL);
  if ( !v22 )
    goto LABEL_29;
  UnityEngine_Transform__set_eulerAngles(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
  v26 = UnityEngine_Component__get_transform(v17, 0LL);
  *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_one(0LL);
  if ( !v26 )
    goto LABEL_29;
  UnityEngine_Transform__set_localScale(v26, *(UnityEngine_Vector3_o *)&v27, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  v39 = UnityEngine_Transform__TransformPoint_35740824((UnityEngine_Transform_o *)transform, 1.0, 1.0, 0.0, 0LL);
  x = v39.fields.x;
  y = v39.fields.y;
  z = v39.fields.z;
  transform = UnityEngine_Component__get_transform(v17, 0LL);
  if ( !transform )
    goto LABEL_29;
  v40.fields.x = x;
  v40.fields.y = y;
  v40.fields.z = z;
  v41 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)transform, v40, 0LL);
  v33 = v41.fields.x;
  v34 = v41.fields.y;
  transform = UnityEngine_Component__get_transform(v17, 0LL);
  if ( !transform )
    goto LABEL_29;
  v42.fields.z = 1.0;
  v42.fields.x = v33;
  v42.fields.y = v34;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v42, 0LL);
  transform = UnityEngine_Component__get_gameObject(v17, 0LL);
  if ( !v8 )
    goto LABEL_29;
  v35 = (UnityEngine_GameObject_o *)transform;
  transform = (void *)UnityEngine_GameObject__get_layer(v8, 0LL);
  if ( !v35
    || (UnityEngine_GameObject__set_layer(v35, (int32_t)transform, 0LL),
        (transform = UnityEngine_Component__get_transform(v17, 0LL)) == 0LL)
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL),
        v36 = localPosition.fields.x,
        v37 = localPosition.fields.y,
        (transform = UnityEngine_Component__get_transform(v17, 0LL)) == 0LL) )
  {
LABEL_29:
    sub_B52A5C(transform, v4);
  }
  v44.fields.z = 0.0;
  v44.fields.x = v36;
  v44.fields.y = v37;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v44, 0LL);
  ListViewObject__SetBaseTransform((ListViewObject_o *)v17, 0LL);
  ListViewObject__SetVisible((ListViewObject_o *)v17, 1, 0LL);
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))v17->klass[1]._1.parent)(
    v17,
    0LL,
    v17->klass[1]._1.generic_class);
  return v9;
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
    sub_B52920((BattleServantConfConponent_o *)p_linkItem, 0LL, v2, v3, v4, v5, v6, v7);
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


void __fastcall ListViewDropObject__SetItem_23531492(
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
  __int64 v11; // x1

  if ( (byte_42AF1FB & 1) == 0 )
  {
    sub_B52984(&StringLiteral_12891/*"SetBaseTransform"*/);
    byte_42AF1FB = 1;
  }
  this->fields.linkItem = item;
  sub_B52920(
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
    sub_B52A5C(0LL, v11);
  UnityEngine_GameObject__SendMessage_41491048(gameObject, (System_String_o *)StringLiteral_12891/*"SetBaseTransform"*/, 0LL);
}