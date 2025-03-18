void __fastcall ServantCoinConfirmListViewObject___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4C24A1C & 1) == 0 )
  {
    sub_1C3B764(&ServantCoinConfirmListViewObject_TypeInfo, v1);
    byte_4C24A1C = 1;
  }
  LODWORD(ServantCoinConfirmListViewObject_TypeInfo->static_fields->ICON_SCALE) = (struct ServantCoinConfirmListViewObject_StaticFields)1061075026;
}


void __fastcall ServantCoinConfirmListViewObject___ctor(
        ServantCoinConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C24A1B & 1) == 0 )
  {
    sub_1C3B764(&ListViewObject_TypeInfo, method);
    byte_4C24A1B = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ServantCoinConfirmListViewObject__Awake(
        ServantCoinConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4C24A18 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_ServantCoinConfirmListViewItemDraw___, method);
    byte_4C24A18 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C3B9C0(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_ServantCoinConfirmListViewItemDraw___);
  this->fields.itemDraw = (struct ServantCoinConfirmListViewItemDraw_o *)Component_object;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.itemDraw, (int64_t)Component_object, v6, v7, v8, v9, v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCoinConfirmListViewObject__SetItem(
        ServantCoinConfirmListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ServantCoinConfirmListViewObject_o *v10; // x19
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  ServantCoinConfirmListViewObject_o *v17; // x22
  UnityEngine_Transform_o *transform; // x21
  int v19; // s0
  ServantCoinConfirmListViewObject_c *v23; // x8
  ServantCoinConfirmListViewObject_o *v24; // x21
  UnityEngine_GameObject_o *parent; // x8
  ServantCoinConfirmListViewObject_o *v26; // x20
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  v10 = this;
  if ( (byte_4C24A19 & 1) == 0 )
  {
    this = (ServantCoinConfirmListViewObject_o *)sub_1C3B764(&ServantCoinConfirmListViewObject_TypeInfo, item);
    byte_4C24A19 = 1;
  }
  if ( !item )
    goto LABEL_16;
  item->fields.viewObject = (struct ListViewObject_o *)v10;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&item->fields.viewObject,
    (int64_t)v10,
    (int64_t)seed,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v10->fields.linkItem = item;
  sub_1C3B708((PartyOrganizationUtility_o *)&v10->fields.linkItem, (int64_t)item, v11, v12, v13, v14, v15, v16);
  this = (ServantCoinConfirmListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v10, 0LL);
  if ( !seed )
    goto LABEL_16;
  v17 = this;
  this = (ServantCoinConfirmListViewObject_o *)seed->fields.parent;
  if ( !this )
    goto LABEL_16;
  this = (ServantCoinConfirmListViewObject_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL);
  if ( !v17 )
    goto LABEL_16;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v17, (UnityEngine_Transform_o *)this, 0LL);
  this = (ServantCoinConfirmListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v10, 0LL);
  if ( !this )
    goto LABEL_16;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, item->fields.basePosition, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v10, 0LL);
  this = (ServantCoinConfirmListViewObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)seed,
                                                 0LL);
  if ( !this )
    goto LABEL_16;
  *(UnityEngine_Quaternion_o *)&v19 = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)this, 0LL);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v19, 0LL);
  this = (ServantCoinConfirmListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v10, 0LL);
  v23 = ServantCoinConfirmListViewObject_TypeInfo;
  v24 = this;
  if ( !ServantCoinConfirmListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCoinConfirmListViewObject_TypeInfo);
    v23 = ServantCoinConfirmListViewObject_TypeInfo;
  }
  if ( !v24 )
    goto LABEL_16;
  LODWORD(v27.fields.x) = LODWORD(v23->static_fields->ICON_SCALE);
  v27.fields.y = v27.fields.x;
  v27.fields.z = v27.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v24, v27, 0LL);
  this = (ServantCoinConfirmListViewObject_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v10,
                                                 0LL);
  parent = seed->fields.parent;
  if ( !parent
    || (v26 = this, this = (ServantCoinConfirmListViewObject_o *)UnityEngine_GameObject__get_layer(parent, 0LL), !v26) )
  {
LABEL_16:
    sub_1C3B9C0(this, item);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v26, (int32_t)this, 0LL);
  ListViewObject__SetVisible((ListViewObject_o *)v10, 1, 0LL);
  ((void (__fastcall *)(ServantCoinConfirmListViewObject_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._9_SetInput.method)(
    v10,
    1LL,
    v10->klass->vtable._10_Invalidation.methodPtr);
}


void __fastcall ServantCoinConfirmListViewObject__SetupDisp(
        ServantCoinConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v6; // x20
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  ServantCoinConfirmListViewItemDraw_o *v10; // x0

  if ( (byte_4C24A1A & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    sub_1C3B764(&ServantCoinConfirmListViewItem_TypeInfo, v3);
    byte_4C24A1A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(ServantCoinConfirmListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (ServantCoinConfirmListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantCoinConfirmListViewItem_TypeInfo )
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
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1C3B9C0(0LL, v8);
    ServantCoinConfirmListViewItemDraw__SetItem(v10, (ServantCoinConfirmListViewItem_o *)v6, v9);
  }
}