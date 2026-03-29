void ServantCoinConfirmListViewObject___cctor(const MethodInfo *method)
{
  if ( (byte_4D332D6 & 1) == 0 )
  {
    sub_1C93AD4(&ServantCoinConfirmListViewObject_TypeInfo);
    byte_4D332D6 = 1;
  }
  LODWORD(ServantCoinConfirmListViewObject_TypeInfo->static_fields->ICON_SCALE) = (struct ServantCoinConfirmListViewObject_StaticFields)1061075026;
}


void ServantCoinConfirmListViewObject___ctor(ServantCoinConfirmListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4D332D5 & 1) == 0 )
  {
    sub_1C93AD4(&ListViewObject_TypeInfo);
    byte_4D332D5 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void ServantCoinConfirmListViewObject__Awake(ServantCoinConfirmListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D332D2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ServantCoinConfirmListViewItemDraw___);
    byte_4D332D2 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C93D2C(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ServantCoinConfirmListViewItemDraw___);
  this->fields.itemDraw = (struct ServantCoinConfirmListViewItemDraw_o *)Component_object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void ServantCoinConfirmListViewObject__SetItem(
        ServantCoinConfirmListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ServantCoinConfirmListViewObject_o *v10; // x19
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  ServantCoinConfirmListViewObject_o *v17; // x22
  UnityEngine_Transform_o *transform; // x21
  ServantCoinConfirmListViewObject_c *v19; // x8
  ServantCoinConfirmListViewObject_o *v20; // x21
  UnityEngine_GameObject_o *parent; // x8
  ServantCoinConfirmListViewObject_o *v22; // x20
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v10 = this;
  if ( (byte_4D332D3 & 1) == 0 )
  {
    this = (ServantCoinConfirmListViewObject_o *)sub_1C93AD4(&ServantCoinConfirmListViewObject_TypeInfo);
    byte_4D332D3 = 1;
  }
  if ( !item )
    goto LABEL_16;
  item->fields.viewObject = (struct ListViewObject_o *)v10;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&item->fields.viewObject,
    (int32_t)v10,
    (int32_t)seed,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v10->fields.linkItem = item;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v10->fields.linkItem, (int32_t)item, v11, v12, v13, v14, v15, v16);
  this = (ServantCoinConfirmListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v10, 0);
  if ( !seed )
    goto LABEL_16;
  v17 = this;
  this = (ServantCoinConfirmListViewObject_o *)seed->fields.parent;
  if ( !this )
    goto LABEL_16;
  this = (ServantCoinConfirmListViewObject_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0);
  if ( !v17 )
    goto LABEL_16;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v17, (UnityEngine_Transform_o *)this, 0);
  this = (ServantCoinConfirmListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v10, 0);
  if ( !this )
    goto LABEL_16;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, item->fields.basePosition, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v10, 0);
  this = (ServantCoinConfirmListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seed, 0);
  if ( !this )
    goto LABEL_16;
  localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)this, 0);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_localRotation(transform, localRotation, 0);
  this = (ServantCoinConfirmListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v10, 0);
  v19 = ServantCoinConfirmListViewObject_TypeInfo;
  v20 = this;
  if ( !ServantCoinConfirmListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCoinConfirmListViewObject_TypeInfo);
    v19 = ServantCoinConfirmListViewObject_TypeInfo;
  }
  if ( !v20 )
    goto LABEL_16;
  LODWORD(v23.fields.x) = LODWORD(v19->static_fields->ICON_SCALE);
  v23.fields.y = v23.fields.x;
  v23.fields.z = v23.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v20, v23, 0);
  this = (ServantCoinConfirmListViewObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0);
  parent = seed->fields.parent;
  if ( !parent
    || (v22 = this, this = (ServantCoinConfirmListViewObject_o *)UnityEngine_GameObject__get_layer(parent, 0), !v22) )
  {
LABEL_16:
    sub_1C93D2C(this, item);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v22, (int32_t)this, 0);
  ListViewObject__SetVisible((ListViewObject_o *)v10, 1, 0);
  ((void (__fastcall *)(ServantCoinConfirmListViewObject_o *, __int64, const MethodInfo *))v10->klass->vtable._9_SetInput.methodPtr)(
    v10,
    1,
    v10->klass->vtable._9_SetInput.method);
}


void ServantCoinConfirmListViewObject__SetupDisp(ServantCoinConfirmListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v5; // x20
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  ServantCoinConfirmListViewItemDraw_o *v9; // x0

  if ( (byte_4D332D4 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ServantCoinConfirmListViewItem_TypeInfo);
    byte_4D332D4 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = ServantCoinConfirmListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (ServantCoinConfirmListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ServantCoinConfirmListViewItem_TypeInfo )
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
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C93D2C(0, v7);
    ServantCoinConfirmListViewItemDraw__SetItem(v9, (ServantCoinConfirmListViewItem_o *)v5, v8);
  }
}