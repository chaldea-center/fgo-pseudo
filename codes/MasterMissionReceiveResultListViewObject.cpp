void __fastcall MasterMissionReceiveResultListViewObject___ctor(
        MasterMissionReceiveResultListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1F72E & 1) == 0 )
  {
    sub_1BCAFF8(&ListViewObject_TypeInfo, method);
    byte_4B1F72E = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall MasterMissionReceiveResultListViewObject__Awake(
        MasterMissionReceiveResultListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B1F72C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveResultListViewItemDraw___, method);
    byte_4B1F72C = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BCB254(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveResultListViewItemDraw___);
  this->fields.itemDraw = (struct MasterMissionReceiveResultListViewItemDraw_o *)Component_object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveResultListViewObject__SetItem(
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
  int v11; // s0
  UnityEngine_Transform_o *v15; // x21
  int v16; // s0
  UnityEngine_GameObject_o *parent; // x8
  MasterMissionReceiveResultListViewObject_o *v20; // x20

  if ( !item )
    goto LABEL_13;
  v4 = this;
  item->fields.viewObject = (struct ListViewObject_o *)this;
  sub_1BCAF9C((CGThumbnailListItem_o *)&item->fields.viewObject, (int32_t)this, (int32_t)seed, method);
  v4->fields.linkItem = item;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.linkItem, (int32_t)item, v7, v8);
  this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)v4,
                                                         0LL);
  if ( !seed )
    goto LABEL_13;
  v9 = this;
  this = (MasterMissionReceiveResultListViewObject_o *)seed->fields.parent;
  if ( !this )
    goto LABEL_13;
  this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)this,
                                                         0LL);
  if ( !v9 )
    goto LABEL_13;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v9, (UnityEngine_Transform_o *)this, 0LL);
  this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)v4,
                                                         0LL);
  if ( !this )
    goto LABEL_13;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, item->fields.basePosition, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
  this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)seed,
                                                         0LL);
  if ( !this )
    goto LABEL_13;
  *(UnityEngine_Quaternion_o *)&v11 = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)this, 0LL);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v11, 0LL);
  v15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
  this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)seed,
                                                         0LL);
  if ( !this
    || (*(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL),
        !v15)
    || (UnityEngine_Transform__set_localScale(v15, *(UnityEngine_Vector3_o *)&v16, 0LL),
        this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)v4,
                                                               0LL),
        (parent = seed->fields.parent) == 0LL)
    || (v20 = this,
        this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_GameObject__get_layer(parent, 0LL),
        !v20) )
  {
LABEL_13:
    sub_1BCB254(this, item);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v20, (int32_t)this, 0LL);
  ListViewObject__SetVisible((ListViewObject_o *)v4, 1, 0LL);
  ((void (__fastcall *)(MasterMissionReceiveResultListViewObject_o *, _QWORD, Il2CppMethodPointer))v4->klass->vtable._9_SetInput.method)(
    v4,
    0LL,
    v4->klass->vtable._10_Invalidation.methodPtr);
}


void __fastcall MasterMissionReceiveResultListViewObject__SetupDisp(
        MasterMissionReceiveResultListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v6; // x21
  UnityEngine_Object_o *itemDraw; // x20
  MasterMissionReceiveResultListViewItemDraw_o *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B1F72D & 1) == 0 )
  {
    sub_1BCAFF8(&MasterMissionReceiveResultListViewItem_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B1F72D = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(MasterMissionReceiveResultListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (MasterMissionReceiveResultListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionReceiveResultListViewItem_TypeInfo )
      v6 = this->fields.linkItem;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v6 != 0LL, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (MasterMissionReceiveResultListViewItemDraw_o *)UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    if ( !v6 || (v8 = this->fields.itemDraw) == 0LL )
      sub_1BCB254(v8, v9);
    MasterMissionReceiveResultListViewItemDraw__SetItem(v8, (System_String_o *)v6[1].klass, v10);
  }
}