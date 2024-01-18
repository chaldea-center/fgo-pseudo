void __fastcall ServantCoinConfirmListViewObject___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4189E92 & 1) == 0 )
  {
    sub_B2C35C(&ServantCoinConfirmListViewObject_TypeInfo, v1);
    byte_4189E92 = 1;
  }
  LODWORD(ServantCoinConfirmListViewObject_TypeInfo->static_fields->ICON_SCALE) = (struct ServantCoinConfirmListViewObject_StaticFields)1061075026;
}


void __fastcall ServantCoinConfirmListViewObject___ctor(
        ServantCoinConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189E91 & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    byte_4189E91 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ServantCoinConfirmListViewObject__Awake(
        ServantCoinConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct ServantCoinConfirmListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4189E8E & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantCoinConfirmListViewItemDraw___, method);
    byte_4189E8E = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B2C434(0LL, v3);
  Component_srcLineSprite = (struct ServantCoinConfirmListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             dispObject,
                                                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantCoinConfirmListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCoinConfirmListViewObject__SetItem(
        ServantCoinConfirmListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ServantCoinConfirmListViewObject_o *v10; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Transform_o *v17; // x22
  UnityEngine_Transform_o *transform; // x21
  int v19; // s0
  UnityEngine_Transform_o *v23; // x21
  ServantCoinConfirmListViewObject_c *v24; // x8
  UnityEngine_GameObject_o *parent; // x8
  UnityEngine_GameObject_o *v26; // x20
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  v10 = this;
  if ( (byte_4189E8F & 1) == 0 )
  {
    this = (ServantCoinConfirmListViewObject_o *)sub_B2C35C(&ServantCoinConfirmListViewObject_TypeInfo, item);
    byte_4189E8F = 1;
  }
  if ( !item )
    goto LABEL_17;
  item->fields.viewObject = (struct ListViewObject_o *)v10;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&item->fields.viewObject,
    (System_Int32_array **)v10,
    (System_String_array **)seed,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v10->fields.linkItem = item;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v10->fields.linkItem,
    (System_Int32_array **)item,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this = (ServantCoinConfirmListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v10, 0LL);
  if ( !seed )
    goto LABEL_17;
  v17 = (UnityEngine_Transform_o *)this;
  this = (ServantCoinConfirmListViewObject_o *)seed->fields.parent;
  if ( !this )
    goto LABEL_17;
  this = (ServantCoinConfirmListViewObject_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL);
  if ( !v17 )
    goto LABEL_17;
  UnityEngine_Transform__set_parent(v17, (UnityEngine_Transform_o *)this, 0LL);
  this = (ServantCoinConfirmListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v10, 0LL);
  if ( !this )
    goto LABEL_17;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, item->fields.basePosition, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v10, 0LL);
  this = (ServantCoinConfirmListViewObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)seed,
                                                 0LL);
  if ( !this )
    goto LABEL_17;
  *(UnityEngine_Quaternion_o *)&v19 = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)this, 0LL);
  if ( !transform )
    goto LABEL_17;
  UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v19, 0LL);
  this = (ServantCoinConfirmListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v10, 0LL);
  v23 = (UnityEngine_Transform_o *)this;
  v24 = ServantCoinConfirmListViewObject_TypeInfo;
  if ( (BYTE3(ServantCoinConfirmListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCoinConfirmListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCoinConfirmListViewObject_TypeInfo);
    v24 = ServantCoinConfirmListViewObject_TypeInfo;
  }
  if ( !v23 )
    goto LABEL_17;
  LODWORD(v27.fields.x) = LODWORD(v24->static_fields->ICON_SCALE);
  v27.fields.y = v27.fields.x;
  v27.fields.z = v27.fields.x;
  UnityEngine_Transform__set_localScale(v23, v27, 0LL);
  this = (ServantCoinConfirmListViewObject_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v10,
                                                 0LL);
  parent = seed->fields.parent;
  if ( !parent
    || (v26 = (UnityEngine_GameObject_o *)this,
        this = (ServantCoinConfirmListViewObject_o *)UnityEngine_GameObject__get_layer(parent, 0LL),
        !v26) )
  {
LABEL_17:
    sub_B2C434(this, item);
  }
  UnityEngine_GameObject__set_layer(v26, (int32_t)this, 0LL);
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
  __int64 v5; // x11
  struct ListViewItem_o *v6; // x20
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  ServantCoinConfirmListViewItemDraw_o *v10; // x0

  if ( (byte_4189E90 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&ServantCoinConfirmListViewItem_TypeInfo, v3);
    byte_4189E90 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (v5 = *(&ServantCoinConfirmListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5) )
  {
    if ( (ServantCoinConfirmListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] == ServantCoinConfirmListViewItem_TypeInfo )
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
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_B2C434(0LL, v8);
    ServantCoinConfirmListViewItemDraw__SetItem(v10, (ServantCoinConfirmListViewItem_o *)v6, v9);
  }
}