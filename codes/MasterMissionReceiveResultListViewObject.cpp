void __fastcall MasterMissionReceiveResultListViewObject___ctor(
        MasterMissionReceiveResultListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189CD4 & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    byte_4189CD4 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall MasterMissionReceiveResultListViewObject__Awake(
        MasterMissionReceiveResultListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct MasterMissionReceiveResultListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4189CD2 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveResultListViewItemDraw___, method);
    byte_4189CD2 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B2C434(0LL, v3);
  Component_srcLineSprite = (struct MasterMissionReceiveResultListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                     dispObject,
                                                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveResultListViewItemDraw___);
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
void __fastcall MasterMissionReceiveResultListViewObject__SetItem(
        MasterMissionReceiveResultListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  MasterMissionReceiveResultListViewObject_o *v8; // x19
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
  int v24; // s0
  UnityEngine_GameObject_o *parent; // x8
  UnityEngine_GameObject_o *v28; // x20

  if ( !item )
    goto LABEL_13;
  v8 = this;
  item->fields.viewObject = (struct ListViewObject_o *)this;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&item->fields.viewObject,
    (System_Int32_array **)this,
    (System_String_array **)seed,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v8->fields.linkItem = item;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v8->fields.linkItem,
    (System_Int32_array **)item,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)v8,
                                                         0LL);
  if ( !seed )
    goto LABEL_13;
  v17 = (UnityEngine_Transform_o *)this;
  this = (MasterMissionReceiveResultListViewObject_o *)seed->fields.parent;
  if ( !this )
    goto LABEL_13;
  this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)this,
                                                         0LL);
  if ( !v17 )
    goto LABEL_13;
  UnityEngine_Transform__set_parent(v17, (UnityEngine_Transform_o *)this, 0LL);
  this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)v8,
                                                         0LL);
  if ( !this )
    goto LABEL_13;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, item->fields.basePosition, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0LL);
  this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)seed,
                                                         0LL);
  if ( !this )
    goto LABEL_13;
  *(UnityEngine_Quaternion_o *)&v19 = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)this, 0LL);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v19, 0LL);
  v23 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0LL);
  this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)seed,
                                                         0LL);
  if ( !this
    || (*(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL),
        !v23)
    || (UnityEngine_Transform__set_localScale(v23, *(UnityEngine_Vector3_o *)&v24, 0LL),
        this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)v8,
                                                               0LL),
        (parent = seed->fields.parent) == 0LL)
    || (v28 = (UnityEngine_GameObject_o *)this,
        this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_GameObject__get_layer(parent, 0LL),
        !v28) )
  {
LABEL_13:
    sub_B2C434(this, item);
  }
  UnityEngine_GameObject__set_layer(v28, (int32_t)this, 0LL);
  ListViewObject__SetVisible((ListViewObject_o *)v8, 1, 0LL);
  ((void (__fastcall *)(MasterMissionReceiveResultListViewObject_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._9_SetInput.method)(
    v8,
    0LL,
    v8->klass->vtable._10_Invalidation.methodPtr);
}


void __fastcall MasterMissionReceiveResultListViewObject__SetupDisp(
        MasterMissionReceiveResultListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 v5; // x11
  struct ListViewItem_o *v6; // x21
  UnityEngine_Object_o *itemDraw; // x20
  MasterMissionReceiveResultListViewItemDraw_o *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4189CD3 & 1) == 0 )
  {
    sub_B2C35C(&MasterMissionReceiveResultListViewItem_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4189CD3 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (v5 = *(&MasterMissionReceiveResultListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5) )
  {
    if ( (MasterMissionReceiveResultListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] == MasterMissionReceiveResultListViewItem_TypeInfo )
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
  v8 = (MasterMissionReceiveResultListViewItemDraw_o *)UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    if ( !v6 || (v8 = this->fields.itemDraw) == 0LL )
      sub_B2C434(v8, v9);
    MasterMissionReceiveResultListViewItemDraw__SetItem(v8, (System_String_o *)v6[1].klass, v10);
  }
}