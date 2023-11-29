void __fastcall MasterMissionReceiveResultListViewObject___ctor(
        MasterMissionReceiveResultListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB27B & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    byte_40FB27B = 1;
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
  UnityEngine_GameObject_o *dispObject; // x0
  struct MasterMissionReceiveResultListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40FB279 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveResultListViewItemDraw___, method);
    byte_40FB279 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B170D4();
  Component_srcLineSprite = (struct MasterMissionReceiveResultListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                     dispObject,
                                                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveResultListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v18; // x22
  UnityEngine_GameObject_o *parent; // x0
  UnityEngine_Transform_o *v20; // x0
  UnityEngine_Transform_o *v21; // x0
  UnityEngine_Transform_o *v22; // x21
  UnityEngine_Transform_o *v23; // x0
  int v24; // s0
  UnityEngine_Transform_o *v28; // x21
  UnityEngine_Transform_o *v29; // x0
  int v30; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v34; // x8
  UnityEngine_GameObject_o *v35; // x20
  int32_t layer; // w0

  if ( !item )
    goto LABEL_13;
  item->fields.viewObject = (struct ListViewObject_o *)this;
  sub_B16F98(
    (BattleServantConfConponent_o *)&item->fields.viewObject,
    (System_Int32_array **)this,
    (System_String_array **)seed,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.linkItem = item;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.linkItem,
    (System_Int32_array **)item,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !seed )
    goto LABEL_13;
  v18 = transform;
  parent = seed->fields.parent;
  if ( !parent )
    goto LABEL_13;
  v20 = UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !v18 )
    goto LABEL_13;
  UnityEngine_Transform__set_parent(v18, v20, 0LL);
  v21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v21 )
    goto LABEL_13;
  UnityEngine_Transform__set_localPosition(v21, item->fields.basePosition, 0LL);
  v22 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v23 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)seed, 0LL);
  if ( !v23 )
    goto LABEL_13;
  *(UnityEngine_Quaternion_o *)&v24 = UnityEngine_Transform__get_localRotation(v23, 0LL);
  if ( !v22 )
    goto LABEL_13;
  UnityEngine_Transform__set_localRotation(v22, *(UnityEngine_Quaternion_o *)&v24, 0LL);
  v28 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v29 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)seed, 0LL);
  if ( !v29
    || (*(UnityEngine_Vector3_o *)&v30 = UnityEngine_Transform__get_localScale(v29, 0LL), !v28)
    || (UnityEngine_Transform__set_localScale(v28, *(UnityEngine_Vector3_o *)&v30, 0LL),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (v34 = seed->fields.parent) == 0LL)
    || (v35 = gameObject, layer = UnityEngine_GameObject__get_layer(v34, 0LL), !v35) )
  {
LABEL_13:
    sub_B170D4();
  }
  UnityEngine_GameObject__set_layer(v35, layer, 0LL);
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  ((void (__fastcall *)(MasterMissionReceiveResultListViewObject_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    0LL,
    this->klass->vtable._10_Invalidation.methodPtr);
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
  const MethodInfo *v8; // x2
  MasterMissionReceiveResultListViewItemDraw_o *v9; // x0

  if ( (byte_40FB27A & 1) == 0 )
  {
    sub_B16FFC(&MasterMissionReceiveResultListViewItem_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FB27A = 1;
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
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    if ( !v6 || (v9 = this->fields.itemDraw) == 0LL )
      sub_B170D4();
    MasterMissionReceiveResultListViewItemDraw__SetItem(v9, (System_String_o *)v6[1].klass, v8);
  }
}