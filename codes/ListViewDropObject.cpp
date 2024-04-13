void __fastcall ListViewDropObject___ctor(ListViewDropObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7D84 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7D84 = 1;
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.linkItem, 0LL, v2, v3, v4, v5, v6, v7);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Object_o *root; // x19
  __int64 v15; // x1
  void *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *dragObjectPrefab; // x19
  UnityEngine_GameObject_o *v19; // x22
  UnityEngine_GameObject_o *v20; // x19
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **linkItem; // x1
  UnityEngine_Component_o *v28; // x20
  UnityEngine_Transform_o *v29; // x23
  int v30; // s0
  UnityEngine_Transform_o *v33; // x23
  int v34; // s0
  UnityEngine_Transform_o *v37; // x23
  int v38; // s0
  float x; // s8
  float y; // s9
  float z; // s10
  float v44; // s8
  float v45; // s9
  UnityEngine_GameObject_o *v46; // x21
  float v47; // s8
  float v48; // s9
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E7D83 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NGUITools_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UIDragDropRoot_TypeInfo, v11, v12, v13);
    byte_42E7D83 = 1;
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
  v19 = gameObject;
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  transform = NGUITools__AddChild_46200776(v19, dragObjectPrefab, 0LL);
  if ( !transform )
    goto LABEL_29;
  v20 = (UnityEngine_GameObject_o *)transform;
  transform = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                (UnityEngine_GameObject_o *)transform,
                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___);
  if ( !transform )
    goto LABEL_29;
  linkItem = (System_Int32_array **)this->fields.linkItem;
  v28 = (UnityEngine_Component_o *)transform;
  *((_QWORD *)transform + 6) = linkItem;
  sub_B5D560((BattleServantConfConponent_o *)((char *)transform + 48), linkItem, v21, v22, v23, v24, v25, v26);
  v29 = UnityEngine_Component__get_transform(v28, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
  if ( !v29 )
    goto LABEL_29;
  UnityEngine_Transform__set_position(v29, *(UnityEngine_Vector3_o *)&v30, 0LL);
  v33 = UnityEngine_Component__get_transform(v28, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Transform__get_eulerAngles((UnityEngine_Transform_o *)transform, 0LL);
  if ( !v33 )
    goto LABEL_29;
  UnityEngine_Transform__set_eulerAngles(v33, *(UnityEngine_Vector3_o *)&v34, 0LL);
  v37 = UnityEngine_Component__get_transform(v28, 0LL);
  *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_one(0LL);
  if ( !v37 )
    goto LABEL_29;
  UnityEngine_Transform__set_localScale(v37, *(UnityEngine_Vector3_o *)&v38, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  v50 = UnityEngine_Transform__TransformPoint_35744104((UnityEngine_Transform_o *)transform, 1.0, 1.0, 0.0, 0LL);
  x = v50.fields.x;
  y = v50.fields.y;
  z = v50.fields.z;
  transform = UnityEngine_Component__get_transform(v28, 0LL);
  if ( !transform )
    goto LABEL_29;
  v51.fields.x = x;
  v51.fields.y = y;
  v51.fields.z = z;
  v52 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)transform, v51, 0LL);
  v44 = v52.fields.x;
  v45 = v52.fields.y;
  transform = UnityEngine_Component__get_transform(v28, 0LL);
  if ( !transform )
    goto LABEL_29;
  v53.fields.z = 1.0;
  v53.fields.x = v44;
  v53.fields.y = v45;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v53, 0LL);
  transform = UnityEngine_Component__get_gameObject(v28, 0LL);
  if ( !v19 )
    goto LABEL_29;
  v46 = (UnityEngine_GameObject_o *)transform;
  transform = (void *)UnityEngine_GameObject__get_layer(v19, 0LL);
  if ( !v46
    || (UnityEngine_GameObject__set_layer(v46, (int32_t)transform, 0LL),
        (transform = UnityEngine_Component__get_transform(v28, 0LL)) == 0LL)
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL),
        v47 = localPosition.fields.x,
        v48 = localPosition.fields.y,
        (transform = UnityEngine_Component__get_transform(v28, 0LL)) == 0LL) )
  {
LABEL_29:
    sub_B5D69C(transform, v15);
  }
  v55.fields.z = 0.0;
  v55.fields.x = v47;
  v55.fields.y = v48;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v55, 0LL);
  ListViewObject__SetBaseTransform((ListViewObject_o *)v28, 0LL);
  ListViewObject__SetVisible((ListViewObject_o *)v28, 1, 0LL);
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))v28->klass[1]._1.parent)(
    v28,
    0LL,
    v28->klass[1]._1.generic_class);
  return v20;
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
    sub_B5D560((BattleServantConfConponent_o *)p_linkItem, 0LL, v2, v3, v4, v5, v6, v7);
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


void __fastcall ListViewDropObject__SetItem_23900620(
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

  if ( (byte_42E7D82 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12950/*"SetBaseTransform"*/, (_DWORD)item, (_DWORD)seed, method);
    byte_42E7D82 = 1;
  }
  this->fields.linkItem = item;
  sub_B5D560(
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
    sub_B5D69C(0LL, v11);
  UnityEngine_GameObject__SendMessage_41595196(gameObject, (System_String_o *)StringLiteral_12950/*"SetBaseTransform"*/, 0LL);
}