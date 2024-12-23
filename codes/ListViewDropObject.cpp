void __fastcall ListViewDropObject___ctor(ListViewDropObject_o *this, const MethodInfo *method)
{
  if ( (byte_4B68038 & 1) == 0 )
  {
    sub_1BE4ACC(&ListViewObject_TypeInfo, method);
    byte_4B68038 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
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
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.linkItem, 0LL, v2, v3, v4, v5, v6, v7);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct ListViewItem_o *linkItem; // x1
  UnityEngine_Component_o *v20; // x20
  UnityEngine_Transform_o *v21; // x23
  int v22; // s0
  UnityEngine_Transform_o *v25; // x23
  int v26; // s0
  UnityEngine_Transform_o *v29; // x23
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

  if ( (byte_4B68037 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___, method);
    sub_1BE4ACC(&NGUITools_TypeInfo, v3);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v4);
    sub_1BE4ACC(&UIDragDropRoot_TypeInfo, v5);
    byte_4B68037 = 1;
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
  transform = (__int64)NGUITools__AddChild_47712092(v11, dragObjectPrefab, 0LL);
  if ( !transform )
    goto LABEL_29;
  v12 = (UnityEngine_GameObject_o *)transform;
  transform = (__int64)UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___);
  if ( !transform )
    goto LABEL_29;
  linkItem = this->fields.linkItem;
  v20 = (UnityEngine_Component_o *)transform;
  *(_QWORD *)(transform + 56) = linkItem;
  sub_1BE4A70((PartyOrganizationUtility_o *)(transform + 56), (int64_t)linkItem, v13, v14, v15, v16, v17, v18);
  v21 = UnityEngine_Component__get_transform(v20, 0LL);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0LL);
  if ( !v21 )
    goto LABEL_29;
  UnityEngine_Transform__set_position(v21, *(UnityEngine_Vector3_o *)&v22, 0LL);
  v25 = UnityEngine_Component__get_transform(v20, 0LL);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Transform__get_eulerAngles((UnityEngine_Transform_o *)transform, 0LL);
  if ( !v25 )
    goto LABEL_29;
  UnityEngine_Transform__set_eulerAngles(v25, *(UnityEngine_Vector3_o *)&v26, 0LL);
  transform = (__int64)UnityEngine_Component__get_transform(v20, 0LL);
  v29 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4B612E6 )
  {
    transform = sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v7);
    byte_4B612E6 = 1;
  }
  if ( !v29 )
    goto LABEL_29;
  UnityEngine_Transform__set_localScale(v29, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_29;
  v39 = UnityEngine_Transform__TransformPoint_70476588((UnityEngine_Transform_o *)transform, 1.0, 1.0, 0.0, 0LL);
  x = v39.fields.x;
  y = v39.fields.y;
  z = v39.fields.z;
  transform = (__int64)UnityEngine_Component__get_transform(v20, 0LL);
  if ( !transform )
    goto LABEL_29;
  v40.fields.x = x;
  v40.fields.y = y;
  v40.fields.z = z;
  v41 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)transform, v40, 0LL);
  v33 = v41.fields.x;
  v34 = v41.fields.y;
  transform = (__int64)UnityEngine_Component__get_transform(v20, 0LL);
  if ( !transform )
    goto LABEL_29;
  v42.fields.z = 1.0;
  v42.fields.x = v33;
  v42.fields.y = v34;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v42, 0LL);
  transform = (__int64)UnityEngine_Component__get_gameObject(v20, 0LL);
  if ( !v11 )
    goto LABEL_29;
  v35 = (UnityEngine_GameObject_o *)transform;
  transform = UnityEngine_GameObject__get_layer(v11, 0LL);
  if ( !v35
    || (UnityEngine_GameObject__set_layer(v35, transform, 0LL),
        (transform = (__int64)UnityEngine_Component__get_transform(v20, 0LL)) == 0)
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL),
        v36 = localPosition.fields.x,
        v37 = localPosition.fields.y,
        (transform = (__int64)UnityEngine_Component__get_transform(v20, 0LL)) == 0) )
  {
LABEL_29:
    sub_1BE4D28(transform, v7);
  }
  v44.fields.z = 0.0;
  v44.fields.x = v36;
  v44.fields.y = v37;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v44, 0LL);
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
    sub_1BE4A70((PartyOrganizationUtility_o *)p_linkItem, 0LL, v2, v3, v4, v5, v6, v7);
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


void __fastcall ListViewDropObject__SetItem_41685488(
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

  if ( (byte_4B68036 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_12883/*"SetBaseTransform"*/, item);
    byte_4B68036 = 1;
  }
  this->fields.linkItem = item;
  sub_1BE4A70(
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
    sub_1BE4D28(0LL, v11);
  UnityEngine_GameObject__SendMessage_70433460(gameObject, (System_String_o *)StringLiteral_12883/*"SetBaseTransform"*/, 0LL);
}