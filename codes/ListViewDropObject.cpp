void __fastcall ListViewDropObject___ctor(ListViewDropObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17625 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewObject_TypeInfo, method, v2);
    byte_4B17625 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
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

  isBusy = this->fields.isBusy;
  if ( !this->fields.isBusy )
  {
    this->fields.linkItem = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.linkItem, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *root; // x19
  __int64 v11; // x1
  __int64 transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  UnityEngine_GameObject_o *dragObjectPrefab; // x19
  UnityEngine_GameObject_o *v16; // x22
  UnityEngine_GameObject_o *v17; // x19
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct ListViewItem_o *linkItem; // x1
  UnityEngine_Component_o *v25; // x20
  UnityEngine_Transform_o *v26; // x23
  int v27; // s0
  UnityEngine_Transform_o *v30; // x23
  int v31; // s0
  __int64 v34; // x2
  UnityEngine_Transform_o *v35; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  float v39; // s8
  float v40; // s9
  UnityEngine_GameObject_o *v41; // x21
  float v42; // s8
  float v43; // s9
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B17624 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___, method, v2);
    sub_1BCA7E0(&NGUITools_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&UIDragDropRoot_TypeInfo, v8, v9);
    byte_4B17624 = 1;
  }
  root = (UnityEngine_Object_o *)UIDragDropRoot_TypeInfo->static_fields->root;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
  v16 = gameObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v14);
  transform = (__int64)NGUITools__AddChild_47424456(v16, dragObjectPrefab, 0LL);
  if ( !transform )
    goto LABEL_29;
  v17 = (UnityEngine_GameObject_o *)transform;
  transform = (__int64)UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___);
  if ( !transform )
    goto LABEL_29;
  linkItem = this->fields.linkItem;
  v25 = (UnityEngine_Component_o *)transform;
  *(_QWORD *)(transform + 56) = linkItem;
  sub_1BCA784((PartyOrganizationUtility_o *)(transform + 56), (int64_t)linkItem, v18, v19, v20, v21, v22, v23);
  v26 = UnityEngine_Component__get_transform(v25, 0LL);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
  if ( !v26 )
    goto LABEL_29;
  UnityEngine_Transform__set_position(v26, *(UnityEngine_Vector3_o *)&v27, 0LL);
  v30 = UnityEngine_Component__get_transform(v25, 0LL);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Transform__get_eulerAngles((UnityEngine_Transform_o *)transform, 0LL);
  if ( !v30 )
    goto LABEL_29;
  UnityEngine_Transform__set_eulerAngles(v30, *(UnityEngine_Vector3_o *)&v31, 0LL);
  transform = (__int64)UnityEngine_Component__get_transform(v25, 0LL);
  v35 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4B109C6 )
  {
    transform = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v11, v34);
    byte_4B109C6 = 1;
  }
  if ( !v35 )
    goto LABEL_29;
  UnityEngine_Transform__set_localScale(v35, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  v45 = UnityEngine_Transform__TransformPoint_70178832((UnityEngine_Transform_o *)transform, 1.0, 1.0, 0.0, 0LL);
  x = v45.fields.x;
  y = v45.fields.y;
  z = v45.fields.z;
  transform = (__int64)UnityEngine_Component__get_transform(v25, 0LL);
  if ( !transform )
    goto LABEL_29;
  v46.fields.x = x;
  v46.fields.y = y;
  v46.fields.z = z;
  v47 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)transform, v46, 0LL);
  v39 = v47.fields.x;
  v40 = v47.fields.y;
  transform = (__int64)UnityEngine_Component__get_transform(v25, 0LL);
  if ( !transform )
    goto LABEL_29;
  v48.fields.z = 1.0;
  v48.fields.x = v39;
  v48.fields.y = v40;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v48, 0LL);
  transform = (__int64)UnityEngine_Component__get_gameObject(v25, 0LL);
  if ( !v16 )
    goto LABEL_29;
  v41 = (UnityEngine_GameObject_o *)transform;
  transform = UnityEngine_GameObject__get_layer(v16, 0LL);
  if ( !v41
    || (UnityEngine_GameObject__set_layer(v41, transform, 0LL),
        (transform = (__int64)UnityEngine_Component__get_transform(v25, 0LL)) == 0)
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL),
        v42 = localPosition.fields.x,
        v43 = localPosition.fields.y,
        (transform = (__int64)UnityEngine_Component__get_transform(v25, 0LL)) == 0) )
  {
LABEL_29:
    sub_1BCAA3C(transform, v11);
  }
  v50.fields.z = 0.0;
  v50.fields.x = v42;
  v50.fields.y = v43;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v50, 0LL);
  ListViewObject__SetBaseTransform((ListViewObject_o *)v25, 0LL);
  ListViewObject__SetVisible((ListViewObject_o *)v25, 1, 0LL);
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))v25->klass[1]._1.parent)(
    v25,
    0LL,
    v25->klass[1]._1.generic_class);
  return v17;
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

  linkItem = this->fields.linkItem;
  p_linkItem = &this->fields.linkItem;
  if ( linkItem )
  {
    this->fields.linkItem = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_linkItem, 0LL, v2, v3, v4, v5, v6, v7);
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


void __fastcall ListViewDropObject__SetItem_41445956(
        ListViewDropObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1

  if ( (byte_4B17623 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12846/*"SetBaseTransform"*/, item, seed);
    byte_4B17623 = 1;
  }
  this->fields.linkItem = item;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.linkItem,
    (int64_t)item,
    (int64_t)seed,
    (int32_t)method,
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
    sub_1BCAA3C(0LL, v11);
  UnityEngine_GameObject__SendMessage_70135704(gameObject, (System_String_o *)StringLiteral_12846/*"SetBaseTransform"*/, 0LL);
}