void __fastcall ListViewDropObject___ctor(ListViewDropObject_o *this, const MethodInfo *method)
{
  if ( (byte_4187147 & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    byte_4187147 = 1;
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.linkItem, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v7; // x1
  void *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *dragObjectPrefab; // x19
  UnityEngine_GameObject_o *v11; // x22
  UnityEngine_GameObject_o *v12; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **linkItem; // x1
  UnityEngine_Component_o *v20; // x20
  UnityEngine_Transform_o *v21; // x23
  int v22; // s0
  UnityEngine_Transform_o *v25; // x23
  int v26; // s0
  UnityEngine_Transform_o *v29; // x23
  int v30; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  float v36; // s8
  float v37; // s9
  UnityEngine_GameObject_o *v38; // x21
  float v39; // s8
  float v40; // s9
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4187146 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___, method);
    sub_B2C35C(&NGUITools_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&UIDragDropRoot_TypeInfo, v5);
    byte_4187146 = 1;
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
  v11 = gameObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  transform = NGUITools__AddChild_45768520(v11, dragObjectPrefab, 0LL);
  if ( !transform )
    goto LABEL_29;
  v12 = (UnityEngine_GameObject_o *)transform;
  transform = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                (UnityEngine_GameObject_o *)transform,
                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___);
  if ( !transform )
    goto LABEL_29;
  linkItem = (System_Int32_array **)this->fields.linkItem;
  v20 = (UnityEngine_Component_o *)transform;
  *((_QWORD *)transform + 6) = linkItem;
  sub_B2C2F8((BattleServantConfConponent_o *)((char *)transform + 48), linkItem, v13, v14, v15, v16, v17, v18);
  v21 = UnityEngine_Component__get_transform(v20, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
  if ( !v21 )
    goto LABEL_29;
  UnityEngine_Transform__set_position(v21, *(UnityEngine_Vector3_o *)&v22, 0LL);
  v25 = UnityEngine_Component__get_transform(v20, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Transform__get_eulerAngles((UnityEngine_Transform_o *)transform, 0LL);
  if ( !v25 )
    goto LABEL_29;
  UnityEngine_Transform__set_eulerAngles(v25, *(UnityEngine_Vector3_o *)&v26, 0LL);
  v29 = UnityEngine_Component__get_transform(v20, 0LL);
  *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_one(0LL);
  if ( !v29 )
    goto LABEL_29;
  UnityEngine_Transform__set_localScale(v29, *(UnityEngine_Vector3_o *)&v30, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  v42 = UnityEngine_Transform__TransformPoint_35438660((UnityEngine_Transform_o *)transform, 1.0, 1.0, 0.0, 0LL);
  x = v42.fields.x;
  y = v42.fields.y;
  z = v42.fields.z;
  transform = UnityEngine_Component__get_transform(v20, 0LL);
  if ( !transform )
    goto LABEL_29;
  v43.fields.x = x;
  v43.fields.y = y;
  v43.fields.z = z;
  v44 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)transform, v43, 0LL);
  v36 = v44.fields.x;
  v37 = v44.fields.y;
  transform = UnityEngine_Component__get_transform(v20, 0LL);
  if ( !transform )
    goto LABEL_29;
  v45.fields.z = 1.0;
  v45.fields.x = v36;
  v45.fields.y = v37;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v45, 0LL);
  transform = UnityEngine_Component__get_gameObject(v20, 0LL);
  if ( !v11 )
    goto LABEL_29;
  v38 = (UnityEngine_GameObject_o *)transform;
  transform = (void *)UnityEngine_GameObject__get_layer(v11, 0LL);
  if ( !v38
    || (UnityEngine_GameObject__set_layer(v38, (int32_t)transform, 0LL),
        (transform = UnityEngine_Component__get_transform(v20, 0LL)) == 0LL)
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL),
        v39 = localPosition.fields.x,
        v40 = localPosition.fields.y,
        (transform = UnityEngine_Component__get_transform(v20, 0LL)) == 0LL) )
  {
LABEL_29:
    sub_B2C434(transform, v7);
  }
  v47.fields.z = 0.0;
  v47.fields.x = v39;
  v47.fields.y = v40;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v47, 0LL);
  ListViewObject__SetBaseTransform((ListViewObject_o *)v20, 0LL);
  ListViewObject__SetVisible((ListViewObject_o *)v20, 1, 0LL);
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))v20->klass[1]._1.parent)(
    v20,
    0LL,
    v20->klass[1]._1.generic_class);
  return v12;
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
    sub_B2C2F8((BattleServantConfConponent_o *)p_linkItem, 0LL, v2, v3, v4, v5, v6, v7);
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


void __fastcall ListViewDropObject__SetItem_24127420(
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

  if ( (byte_4187145 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12794/*"SetBaseTransform"*/, item);
    byte_4187145 = 1;
  }
  this->fields.linkItem = item;
  sub_B2C2F8(
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
    sub_B2C434(0LL, v11);
  UnityEngine_GameObject__SendMessage_40660564(gameObject, (System_String_o *)StringLiteral_12794/*"SetBaseTransform"*/, 0LL);
}