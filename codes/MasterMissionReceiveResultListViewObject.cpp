void MasterMissionReceiveResultListViewObject___ctor(
        MasterMissionReceiveResultListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3ABFB & 1) == 0 )
  {
    sub_1C32C20(&ListViewObject_TypeInfo);
    byte_4C3ABFB = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void MasterMissionReceiveResultListViewObject__Awake(
        MasterMissionReceiveResultListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3ABF9 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveResultListViewItemDraw___);
    byte_4C3ABF9 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C32E7C(0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveResultListViewItemDraw___);
  this->fields.itemDraw = (struct MasterMissionReceiveResultListViewItemDraw_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6);
}


void MasterMissionReceiveResultListViewObject__SetItem(
        MasterMissionReceiveResultListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  MasterMissionReceiveResultListViewObject_o *v4; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  MasterMissionReceiveResultListViewObject_o *v9; // x22
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Transform_o *v11; // x21
  UnityEngine_GameObject_o *parent; // x8
  MasterMissionReceiveResultListViewObject_o *v13; // x20
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !item )
    goto LABEL_13;
  v4 = this;
  item->fields.viewObject = (struct ListViewObject_o *)this;
  sub_1C32BC4((CGThumbnailListItem_o *)&item->fields.viewObject, (int32_t)this, (int32_t)seed, method);
  v4->fields.linkItem = item;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.linkItem, (int32_t)item, v7, v8);
  this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)v4,
                                                         0);
  if ( !seed )
    goto LABEL_13;
  v9 = this;
  this = (MasterMissionReceiveResultListViewObject_o *)seed->fields.parent;
  if ( !this )
    goto LABEL_13;
  this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)this,
                                                         0);
  if ( !v9 )
    goto LABEL_13;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v9, (UnityEngine_Transform_o *)this, 0);
  this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)v4,
                                                         0);
  if ( !this )
    goto LABEL_13;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, item->fields.basePosition, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
  this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)seed,
                                                         0);
  if ( !this )
    goto LABEL_13;
  localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)this, 0);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_Transform__set_localRotation(transform, localRotation, 0);
  v11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
  this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)seed,
                                                         0);
  if ( !this
    || (localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0), !v11)
    || (UnityEngine_Transform__set_localScale(v11, localScale, 0),
        this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)v4,
                                                               0),
        (parent = seed->fields.parent) == 0)
    || (v13 = this,
        this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_GameObject__get_layer(parent, 0),
        !v13) )
  {
LABEL_13:
    sub_1C32E7C(this);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v13, (int32_t)this, 0);
  ListViewObject__SetVisible((ListViewObject_o *)v4, 1, 0);
  ((void (__fastcall *)(MasterMissionReceiveResultListViewObject_o *, _QWORD, const MethodInfo *))v4->klass->vtable._9_SetInput.methodPtr)(
    v4,
    0,
    v4->klass->vtable._9_SetInput.method);
}


void MasterMissionReceiveResultListViewObject__SetupDisp(
        MasterMissionReceiveResultListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v5; // x21
  UnityEngine_Object_o *itemDraw; // x20
  MasterMissionReceiveResultListViewItemDraw_o *v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4C3ABFA & 1) == 0 )
  {
    sub_1C32C20(&MasterMissionReceiveResultListViewItem_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3ABFA = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = MasterMissionReceiveResultListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (MasterMissionReceiveResultListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionReceiveResultListViewItem_TypeInfo )
      v5 = this->fields.linkItem;
    else
      v5 = 0;
  }
  else
  {
    v5 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v5 != 0, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = (MasterMissionReceiveResultListViewItemDraw_o *)UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    if ( !v5 || (v7 = this->fields.itemDraw) == 0 )
      sub_1C32E7C(v7);
    MasterMissionReceiveResultListViewItemDraw__SetItem(v7, (System_String_o *)v5[1].klass, v8);
  }
}