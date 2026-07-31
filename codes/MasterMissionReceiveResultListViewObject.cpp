void MasterMissionReceiveResultListViewObject___ctor(
        MasterMissionReceiveResultListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_593C098 & 1) == 0 )
  {
    sub_21FFC50(&ListViewObject_TypeInfo);
    byte_593C098 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void MasterMissionReceiveResultListViewObject__Awake(
        MasterMissionReceiveResultListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_593C096 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveResultListViewItemDraw___);
    byte_593C096 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_21FFECC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveResultListViewItemDraw___);
  this->fields.itemDraw = (struct MasterMissionReceiveResultListViewItemDraw_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void MasterMissionReceiveResultListViewObject__SetItem(
        MasterMissionReceiveResultListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MasterMissionReceiveResultListViewObject_o *v8; // x19
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  MasterMissionReceiveResultListViewObject_o *v17; // x22
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Transform_o *v19; // x21
  UnityEngine_GameObject_o *parent; // x8
  MasterMissionReceiveResultListViewObject_o *v21; // x20
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !item )
    goto LABEL_13;
  v8 = this;
  item->fields.viewObject = (struct ListViewObject_o *)this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&item->fields.viewObject,
    (int32_t)this,
    (System_String_o *)seed,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v8->fields.linkItem = item;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields.linkItem, (int32_t)item, v11, v12, v13, v14, v15, v16);
  this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)v8,
                                                         0);
  if ( !seed )
    goto LABEL_13;
  v17 = this;
  this = (MasterMissionReceiveResultListViewObject_o *)seed->fields.parent;
  if ( !this )
    goto LABEL_13;
  this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)this,
                                                         0);
  if ( !v17 )
    goto LABEL_13;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v17, (UnityEngine_Transform_o *)this, 0);
  this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)v8,
                                                         0);
  if ( !this )
    goto LABEL_13;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, item->fields.basePosition, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0);
  this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)seed,
                                                         0);
  if ( !this )
    goto LABEL_13;
  localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)this, 0);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_Transform__set_localRotation(transform, localRotation, 0);
  v19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0);
  this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)seed,
                                                         0);
  if ( !this
    || (localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0), !v19)
    || (UnityEngine_Transform__set_localScale(v19, localScale, 0),
        this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)v8,
                                                               0),
        (parent = seed->fields.parent) == 0)
    || (v21 = this,
        this = (MasterMissionReceiveResultListViewObject_o *)UnityEngine_GameObject__get_layer(parent, 0),
        !v21) )
  {
LABEL_13:
    sub_21FFECC(this, item);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v21, (int32_t)this, 0);
  ListViewObject__SetVisible((ListViewObject_o *)v8, 1, 0);
  ((void (__fastcall *)(MasterMissionReceiveResultListViewObject_o *, _QWORD, const MethodInfo *))v8->klass->vtable._9_SetInput.methodPtr)(
    v8,
    0,
    v8->klass->vtable._9_SetInput.method);
}


void MasterMissionReceiveResultListViewObject__SetupDisp(
        MasterMissionReceiveResultListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v5; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *itemDraw; // x20
  MasterMissionReceiveResultListViewItemDraw_o *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_593C097 & 1) == 0 )
  {
    sub_21FFC50(&MasterMissionReceiveResultListViewItem_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C097 = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = (MasterMissionReceiveResultListViewItemDraw_o *)UnityEngine_Object__op_Inequality(itemDraw, 0, 0);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    if ( !v5 || (v8 = this->fields.itemDraw) == 0 )
      sub_21FFECC(v8, v9);
    MasterMissionReceiveResultListViewItemDraw__SetItem(v8, (System_String_o *)v5[1].klass, v10);
  }
}