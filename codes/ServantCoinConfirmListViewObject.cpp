void __fastcall ServantCoinConfirmListViewObject___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A00F40 & 1) == 0 )
  {
    sub_1B64870(&ServantCoinConfirmListViewObject_TypeInfo, v1);
    byte_4A00F40 = 1;
  }
  LODWORD(ServantCoinConfirmListViewObject_TypeInfo->static_fields->ICON_SCALE) = (struct ServantCoinConfirmListViewObject_StaticFields)1061075026;
}


void __fastcall ServantCoinConfirmListViewObject___ctor(
        ServantCoinConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A00F3F & 1) == 0 )
  {
    sub_1B64870(&ListViewObject_TypeInfo, method);
    byte_4A00F3F = 1;
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
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A00F3C & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_ServantCoinConfirmListViewItemDraw___, method);
    byte_4A00F3C = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B64ACC(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_ServantCoinConfirmListViewItemDraw___);
  this->fields.itemDraw = (struct ServantCoinConfirmListViewItemDraw_o *)Component_object;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCoinConfirmListViewObject__SetItem(
        ServantCoinConfirmListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ServantCoinConfirmListViewObject_o *v6; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  ServantCoinConfirmListViewObject_o *v9; // x22
  UnityEngine_Transform_o *transform; // x21
  int v11; // s0
  ServantCoinConfirmListViewObject_c *v15; // x8
  ServantCoinConfirmListViewObject_o *v16; // x21
  UnityEngine_GameObject_o *parent; // x8
  ServantCoinConfirmListViewObject_o *v18; // x20
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4A00F3D & 1) == 0 )
  {
    this = (ServantCoinConfirmListViewObject_o *)sub_1B64870(&ServantCoinConfirmListViewObject_TypeInfo, item);
    byte_4A00F3D = 1;
  }
  if ( !item )
    goto LABEL_16;
  item->fields.viewObject = (struct ListViewObject_o *)v6;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&item->fields.viewObject,
    (int32_t)v6,
    (int32_t)seed,
    (int32_t)method);
  v6->fields.linkItem = item;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v6->fields.linkItem, (int32_t)item, v7, v8);
  this = (ServantCoinConfirmListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v6, 0LL);
  if ( !seed )
    goto LABEL_16;
  v9 = this;
  this = (ServantCoinConfirmListViewObject_o *)seed->fields.parent;
  if ( !this )
    goto LABEL_16;
  this = (ServantCoinConfirmListViewObject_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL);
  if ( !v9 )
    goto LABEL_16;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v9, (UnityEngine_Transform_o *)this, 0LL);
  this = (ServantCoinConfirmListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v6, 0LL);
  if ( !this )
    goto LABEL_16;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, item->fields.basePosition, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v6, 0LL);
  this = (ServantCoinConfirmListViewObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)seed,
                                                 0LL);
  if ( !this )
    goto LABEL_16;
  *(UnityEngine_Quaternion_o *)&v11 = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)this, 0LL);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v11, 0LL);
  this = (ServantCoinConfirmListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v6, 0LL);
  v15 = ServantCoinConfirmListViewObject_TypeInfo;
  v16 = this;
  if ( !ServantCoinConfirmListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCoinConfirmListViewObject_TypeInfo);
    v15 = ServantCoinConfirmListViewObject_TypeInfo;
  }
  if ( !v16 )
    goto LABEL_16;
  LODWORD(v19.fields.x) = LODWORD(v15->static_fields->ICON_SCALE);
  v19.fields.y = v19.fields.x;
  v19.fields.z = v19.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v16, v19, 0LL);
  this = (ServantCoinConfirmListViewObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  parent = seed->fields.parent;
  if ( !parent
    || (v18 = this, this = (ServantCoinConfirmListViewObject_o *)UnityEngine_GameObject__get_layer(parent, 0LL), !v18) )
  {
LABEL_16:
    sub_1B64ACC(this, item);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v18, (int32_t)this, 0LL);
  ListViewObject__SetVisible((ListViewObject_o *)v6, 1, 0LL);
  ((void (__fastcall *)(ServantCoinConfirmListViewObject_o *, __int64, Il2CppMethodPointer))v6->klass->vtable._9_SetInput.method)(
    v6,
    1LL,
    v6->klass->vtable._10_Invalidation.methodPtr);
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

  if ( (byte_4A00F3E & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    sub_1B64870(&ServantCoinConfirmListViewItem_TypeInfo, v3);
    byte_4A00F3E = 1;
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
      sub_1B64ACC(0LL, v8);
    ServantCoinConfirmListViewItemDraw__SetItem(v10, (ServantCoinConfirmListViewItem_o *)v6, v9);
  }
}