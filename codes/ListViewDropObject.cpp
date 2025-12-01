void ListViewDropObject___ctor(ListViewDropObject_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8B38 & 1) == 0 )
  {
    sub_1C713B0(&ListViewObject_TypeInfo);
    byte_4CC8B38 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


bool ListViewDropObject__ClearItem(ListViewDropObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  _BOOL4 isBusy; // w20

  isBusy = this->fields.isBusy;
  if ( !this->fields.isBusy )
  {
    this->fields.linkItem = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.linkItem, 0, v2, v3, v4, v5, v6, v7);
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
  __int64 v4; // x1
  __int64 transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *dragObjectPrefab; // x19
  UnityEngine_GameObject_o *v8; // x22
  UnityEngine_GameObject_o *v9; // x19
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct ListViewItem_o *linkItem; // x1
  UnityEngine_Component_o *v17; // x20
  UnityEngine_Transform_o *v18; // x23
  UnityEngine_Transform_o *v19; // x23
  UnityEngine_Transform_o *v20; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  float v24; // s8
  float v25; // s9
  UnityEngine_GameObject_o *v26; // x21
  float v27; // s8
  float v28; // s9
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o eulerAngles; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC8B37 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___);
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UIDragDropRoot_TypeInfo);
    byte_4CC8B37 = 1;
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
  v8 = gameObject;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  transform = (__int64)NGUITools__AddChild_49716584(v8, dragObjectPrefab, 0);
  if ( !transform )
    goto LABEL_29;
  v9 = (UnityEngine_GameObject_o *)transform;
  transform = (__int64)UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ListViewDropObject___);
  if ( !transform )
    goto LABEL_29;
  linkItem = this->fields.linkItem;
  v17 = (UnityEngine_Component_o *)transform;
  *(_QWORD *)(transform + 56) = linkItem;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(transform + 56), (int32_t)linkItem, v10, v11, v12, v13, v14, v15);
  v18 = UnityEngine_Component__get_transform(v17, 0);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_29;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
  if ( !v18 )
    goto LABEL_29;
  UnityEngine_Transform__set_position(v18, position, 0);
  v19 = UnityEngine_Component__get_transform(v17, 0);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_29;
  eulerAngles = UnityEngine_Transform__get_eulerAngles((UnityEngine_Transform_o *)transform, 0);
  if ( !v19 )
    goto LABEL_29;
  UnityEngine_Transform__set_eulerAngles(v19, eulerAngles, 0);
  transform = (__int64)UnityEngine_Component__get_transform(v17, 0);
  v20 = (UnityEngine_Transform_o *)transform;
  if ( !byte_4CC0D0E )
  {
    transform = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D0E = 1;
  }
  if ( !v20 )
    goto LABEL_29;
  UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_29;
  v32 = UnityEngine_Transform__TransformPoint_71751388((UnityEngine_Transform_o *)transform, 1.0, 1.0, 0.0, 0);
  x = v32.fields.x;
  y = v32.fields.y;
  z = v32.fields.z;
  transform = (__int64)UnityEngine_Component__get_transform(v17, 0);
  if ( !transform )
    goto LABEL_29;
  v33.fields.x = x;
  v33.fields.y = y;
  v33.fields.z = z;
  v34 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)transform, v33, 0);
  v24 = v34.fields.x;
  v25 = v34.fields.y;
  transform = (__int64)UnityEngine_Component__get_transform(v17, 0);
  if ( !transform )
    goto LABEL_29;
  v35.fields.z = 1.0;
  v35.fields.x = v24;
  v35.fields.y = v25;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v35, 0);
  transform = (__int64)UnityEngine_Component__get_gameObject(v17, 0);
  if ( !v8 )
    goto LABEL_29;
  v26 = (UnityEngine_GameObject_o *)transform;
  transform = UnityEngine_GameObject__get_layer(v8, 0);
  if ( !v26
    || (UnityEngine_GameObject__set_layer(v26, transform, 0),
        (transform = (__int64)UnityEngine_Component__get_transform(v17, 0)) == 0)
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0),
        v27 = localPosition.fields.x,
        v28 = localPosition.fields.y,
        (transform = (__int64)UnityEngine_Component__get_transform(v17, 0)) == 0) )
  {
LABEL_29:
    sub_1C71608(transform, v4);
  }
  v37.fields.z = 0.0;
  v37.fields.x = v27;
  v37.fields.y = v28;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v37, 0);
  ListViewObject__SetBaseTransform((ListViewObject_o *)v17, 0);
  ListViewObject__SetVisible((ListViewObject_o *)v17, 1, 0);
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, Il2CppClass *))v17->klass[1]._1.declaringType)(
    v17,
    0,
    v17->klass[1]._1.parent);
  return v9;
}


void ListViewDropObject__ReleaseItem(ListViewDropObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ListViewItem_o **p_linkItem; // x0
  struct ListViewItem_o *linkItem; // t1

  linkItem = this->fields.linkItem;
  p_linkItem = &this->fields.linkItem;
  if ( linkItem )
  {
    this->fields.linkItem = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)p_linkItem, 0, v2, v3, v4, v5, v6, v7);
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


void ListViewDropObject__SetItem_44095888(
        ListViewDropObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1

  if ( (byte_4CC8B36 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_12796/*"SetBaseTransform"*/);
    byte_4CC8B36 = 1;
  }
  this->fields.linkItem = item;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.linkItem,
    (int32_t)item,
    (int32_t)seed,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  ((void (__fastcall *)(ListViewDropObject_o *, _QWORD, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    0,
    this->klass->vtable._9_SetInput.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v11);
  UnityEngine_GameObject__SendMessage_71705976(gameObject, (System_String_o *)StringLiteral_12796/*"SetBaseTransform"*/, 0);
}