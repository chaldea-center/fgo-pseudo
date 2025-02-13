void __fastcall ListViewDropObject___ctor(ListViewDropObject_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD9F5 & 1) == 0 )
  {
    sub_1C21E38(&ListViewObject_TypeInfo);
    byte_4BDD9F5 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall ListViewDropObject__ClearItem(ListViewDropObject_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  _BOOL4 isBusy; // w20
  const MethodInfo *v10; // x2

  isBusy = this->fields.isBusy;
  if ( !this->fields.isBusy )
  {
    this->fields.linkItem = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.linkItem, 0LL, v2, v3, v4, v5, v6, v7);
    ListViewObject__SetVisible((ListViewObject_o *)this, 0, v10);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct ListViewItem_o *linkItem; // x1
  UnityEngine_Component_o *v17; // x20
  UnityEngine_Transform_o *v18; // x23
  int v19; // s0
  UnityEngine_Transform_o *v22; // x23
  int v23; // s0
  UnityEngine_Transform_o *v26; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  float v30; // s8
  float v31; // s9
  UnityEngine_GameObject_o *v32; // x21
  float v33; // s8
  float v34; // s9
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x2
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDD9F4 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___);
    sub_1C21E38(&NGUITools_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UIDragDropRoot_TypeInfo);
    byte_4BDD9F4 = 1;
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
  transform = (__int64)NGUITools__AddChild_48037168(v8, dragObjectPrefab, 0LL);
  if ( !transform )
    goto LABEL_29;
  v9 = (UnityEngine_GameObject_o *)transform;
  transform = (__int64)UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___);
  if ( !transform )
    goto LABEL_29;
  linkItem = this->fields.linkItem;
  v17 = (UnityEngine_Component_o *)transform;
  *(_QWORD *)(transform + 56) = linkItem;
  sub_1C21DDC((PartyOrganizationUtility_o *)(transform + 56), (int64_t)linkItem, v10, v11, v12, v13, v14, v15);
  v18 = UnityEngine_Component__get_transform(v17, 0LL);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
  if ( !v18 )
    goto LABEL_29;
  UnityEngine_Transform__set_position(v18, *(UnityEngine_Vector3_o *)&v19, 0LL);
  v22 = UnityEngine_Component__get_transform(v17, 0LL);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_eulerAngles((UnityEngine_Transform_o *)transform, 0LL);
  if ( !v22 )
    goto LABEL_29;
  UnityEngine_Transform__set_eulerAngles(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
  transform = (__int64)UnityEngine_Component__get_transform(v17, 0LL);
  v26 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4BD6BB6 )
  {
    transform = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  if ( !v26 )
    goto LABEL_29;
  UnityEngine_Transform__set_localScale(v26, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  v38 = UnityEngine_Transform__TransformPoint_70894360((UnityEngine_Transform_o *)transform, 1.0, 1.0, 0.0, 0LL);
  x = v38.fields.x;
  y = v38.fields.y;
  z = v38.fields.z;
  transform = (__int64)UnityEngine_Component__get_transform(v17, 0LL);
  if ( !transform )
    goto LABEL_29;
  v39.fields.x = x;
  v39.fields.y = y;
  v39.fields.z = z;
  v40 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)transform, v39, 0LL);
  v30 = v40.fields.x;
  v31 = v40.fields.y;
  transform = (__int64)UnityEngine_Component__get_transform(v17, 0LL);
  if ( !transform )
    goto LABEL_29;
  v41.fields.z = 1.0;
  v41.fields.x = v30;
  v41.fields.y = v31;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v41, 0LL);
  transform = (__int64)UnityEngine_Component__get_gameObject(v17, 0LL);
  if ( !v8 )
    goto LABEL_29;
  v32 = (UnityEngine_GameObject_o *)transform;
  transform = UnityEngine_GameObject__get_layer(v8, 0LL);
  if ( !v32
    || (UnityEngine_GameObject__set_layer(v32, transform, 0LL),
        (transform = (__int64)UnityEngine_Component__get_transform(v17, 0LL)) == 0)
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL),
        v33 = localPosition.fields.x,
        v34 = localPosition.fields.y,
        (transform = (__int64)UnityEngine_Component__get_transform(v17, 0LL)) == 0) )
  {
LABEL_29:
    sub_1C22094(transform, v4);
  }
  v43.fields.z = 0.0;
  v43.fields.x = v33;
  v43.fields.y = v34;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v43, 0LL);
  ListViewObject__SetBaseTransform((ListViewObject_o *)v17, v35);
  ListViewObject__SetVisible((ListViewObject_o *)v17, 1, v36);
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))v17->klass[1]._1.parent)(
    v17,
    0LL,
    v17->klass[1]._1.generic_class);
  return v9;
}


void __fastcall ListViewDropObject__ReleaseItem(ListViewDropObject_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct ListViewItem_o **p_linkItem; // x0
  struct ListViewItem_o *linkItem; // t1
  const MethodInfo *v11; // x2

  linkItem = this->fields.linkItem;
  p_linkItem = &this->fields.linkItem;
  if ( linkItem )
  {
    this->fields.linkItem = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)p_linkItem, 0LL, v2, v3, v4, v5, v6, v7);
    ListViewObject__SetVisible((ListViewObject_o *)this, 0, v11);
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


void __fastcall ListViewDropObject__SetItem_41995288(
        ListViewDropObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1

  if ( (byte_4BDD9F3 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_12935/*"SetBaseTransform"*/);
    byte_4BDD9F3 = 1;
  }
  this->fields.linkItem = item;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.linkItem,
    (int64_t)item,
    (int64_t)seed,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, v10);
  ((void (__fastcall *)(ListViewDropObject_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    0LL,
    this->klass->vtable._10_Invalidation.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C22094(0LL, v12);
  UnityEngine_GameObject__SendMessage_70851072(gameObject, (System_String_o *)StringLiteral_12935/*"SetBaseTransform"*/, 0LL);
}