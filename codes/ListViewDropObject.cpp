void __fastcall ListViewDropObject___ctor(ListViewDropObject_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C559 & 1) == 0 )
  {
    sub_1B885B0(&ListViewObject_TypeInfo);
    byte_4A5C559 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


bool __fastcall ListViewDropObject__ClearItem(ListViewDropObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  _BOOL4 isBusy; // w20

  isBusy = this->fields.isBusy;
  if ( !this->fields.isBusy )
  {
    this->fields.linkItem = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.linkItem, 0, v2, v3);
    ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
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
  UnityEngine_Object_o *root; // x19
  __int64 v4; // x1
  __int64 transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *dragObjectPrefab; // x19
  UnityEngine_GameObject_o *v8; // x22
  UnityEngine_GameObject_o *v9; // x19
  int32_t v10; // w2
  int32_t v11; // w3
  struct ListViewItem_o *linkItem; // x1
  UnityEngine_Component_o *v13; // x20
  UnityEngine_Transform_o *v14; // x23
  int v15; // s0
  UnityEngine_Transform_o *v18; // x23
  int v19; // s0
  UnityEngine_Transform_o *v22; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  float v26; // s8
  float v27; // s9
  UnityEngine_GameObject_o *v28; // x21
  float v29; // s8
  float v30; // s9
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5C558 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___);
    sub_1B885B0(&NGUITools_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UIDragDropRoot_TypeInfo);
    byte_4A5C558 = 1;
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
  v8 = gameObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  transform = (__int64)NGUITools__AddChild_46862524(v8, dragObjectPrefab, 0LL);
  if ( !transform )
    goto LABEL_29;
  v9 = (UnityEngine_GameObject_o *)transform;
  transform = (__int64)UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___);
  if ( !transform )
    goto LABEL_29;
  linkItem = this->fields.linkItem;
  v13 = (UnityEngine_Component_o *)transform;
  *(_QWORD *)(transform + 56) = linkItem;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(transform + 56), (int32_t)linkItem, v10, v11);
  v14 = UnityEngine_Component__get_transform(v13, 0LL);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
  if ( !v14 )
    goto LABEL_29;
  UnityEngine_Transform__set_position(v14, *(UnityEngine_Vector3_o *)&v15, 0LL);
  v18 = UnityEngine_Component__get_transform(v13, 0LL);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_eulerAngles((UnityEngine_Transform_o *)transform, 0LL);
  if ( !v18 )
    goto LABEL_29;
  UnityEngine_Transform__set_eulerAngles(v18, *(UnityEngine_Vector3_o *)&v19, 0LL);
  transform = (__int64)UnityEngine_Component__get_transform(v13, 0LL);
  v22 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4A55CE6 )
  {
    transform = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v22 )
    goto LABEL_29;
  UnityEngine_Transform__set_localScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  v32 = UnityEngine_Transform__TransformPoint_69483968((UnityEngine_Transform_o *)transform, 1.0, 1.0, 0.0, 0LL);
  x = v32.fields.x;
  y = v32.fields.y;
  z = v32.fields.z;
  transform = (__int64)UnityEngine_Component__get_transform(v13, 0LL);
  if ( !transform )
    goto LABEL_29;
  v33.fields.x = x;
  v33.fields.y = y;
  v33.fields.z = z;
  v34 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)transform, v33, 0LL);
  v26 = v34.fields.x;
  v27 = v34.fields.y;
  transform = (__int64)UnityEngine_Component__get_transform(v13, 0LL);
  if ( !transform )
    goto LABEL_29;
  v35.fields.z = 1.0;
  v35.fields.x = v26;
  v35.fields.y = v27;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v35, 0LL);
  transform = (__int64)UnityEngine_Component__get_gameObject(v13, 0LL);
  if ( !v8 )
    goto LABEL_29;
  v28 = (UnityEngine_GameObject_o *)transform;
  transform = UnityEngine_GameObject__get_layer(v8, 0LL);
  if ( !v28
    || (UnityEngine_GameObject__set_layer(v28, transform, 0LL),
        (transform = (__int64)UnityEngine_Component__get_transform(v13, 0LL)) == 0)
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL),
        v29 = localPosition.fields.x,
        v30 = localPosition.fields.y,
        (transform = (__int64)UnityEngine_Component__get_transform(v13, 0LL)) == 0) )
  {
LABEL_29:
    sub_1B8880C(transform, v4);
  }
  v37.fields.z = 0.0;
  v37.fields.x = v29;
  v37.fields.y = v30;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v37, 0LL);
  ListViewObject__SetBaseTransform((ListViewObject_o *)v13, 0LL);
  ListViewObject__SetVisible((ListViewObject_o *)v13, 1, 0LL);
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))v13->klass[1]._1.parent)(
    v13,
    0LL,
    v13->klass[1]._1.generic_class);
  return v9;
}


void __fastcall ListViewDropObject__ReleaseItem(ListViewDropObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct ListViewItem_o **p_linkItem; // x0
  struct ListViewItem_o *linkItem; // t1

  linkItem = this->fields.linkItem;
  p_linkItem = &this->fields.linkItem;
  if ( linkItem )
  {
    this->fields.linkItem = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_linkItem, 0, v2, v3);
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


void __fastcall ListViewDropObject__SetItem_40705264(
        ListViewDropObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4A5C557 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12688/*"SetBaseTransform"*/);
    byte_4A5C557 = 1;
  }
  this->fields.linkItem = item;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.linkItem,
    (int32_t)item,
    (int32_t)seed,
    (int32_t)method);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  ((void (__fastcall *)(ListViewDropObject_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    0LL,
    this->klass->vtable._10_Invalidation.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v7);
  UnityEngine_GameObject__SendMessage_69440840(gameObject, (System_String_o *)StringLiteral_12688/*"SetBaseTransform"*/, 0LL);
}