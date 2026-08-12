void UserPresentHistoryListViewObject___ctor(UserPresentHistoryListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596F4D4 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596F4D4 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void UserPresentHistoryListViewObject__Awake(UserPresentHistoryListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596F4D2 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UserPresentHistoryListViewItemDraw___);
    byte_596F4D2 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UserPresentHistoryListViewItemDraw___);
  this->fields.itemDraw = (struct UserPresentHistoryListViewItemDraw_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void UserPresentHistoryListViewObject__SetItem(
        UserPresentHistoryListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UserPresentHistoryListViewObject_o *v8; // x19
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UserPresentHistoryListViewObject_o *v17; // x22
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Transform_o *v19; // x21
  UnityEngine_GameObject_o *parent; // x8
  UserPresentHistoryListViewObject_o *v21; // x20
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o localRotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !item )
    goto LABEL_13;
  v8 = this;
  item->fields.viewObject = (struct ListViewObject_o *)this;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&item->fields.viewObject,
    (int32_t)this,
    (System_String_o *)seed,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v8->fields.linkItem = item;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.linkItem, (int32_t)item, v11, v12, v13, v14, v15, v16);
  this = (UserPresentHistoryListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0);
  if ( !seed )
    goto LABEL_13;
  v17 = this;
  this = (UserPresentHistoryListViewObject_o *)seed->fields.parent;
  if ( !this )
    goto LABEL_13;
  this = (UserPresentHistoryListViewObject_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0);
  if ( !v17 )
    goto LABEL_13;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v17, (UnityEngine_Transform_o *)this, 0);
  this = (UserPresentHistoryListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0);
  if ( !this )
    goto LABEL_13;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, item->fields.basePosition, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0);
  this = (UserPresentHistoryListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seed, 0);
  if ( !this )
    goto LABEL_13;
  localRotation = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)this, 0);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_Transform__set_localRotation(transform, localRotation, 0);
  v19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v8, 0);
  this = (UserPresentHistoryListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)seed, 0);
  if ( !this
    || (localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0), !v19)
    || (UnityEngine_Transform__set_localScale(v19, localScale, 0),
        this = (UserPresentHistoryListViewObject_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)v8,
                                                       0),
        (parent = seed->fields.parent) == 0)
    || (v21 = this, this = (UserPresentHistoryListViewObject_o *)UnityEngine_GameObject__get_layer(parent, 0), !v21) )
  {
LABEL_13:
    sub_2213CDC(this, item);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v21, (int32_t)this, 0);
  ListViewObject__SetVisible((ListViewObject_o *)v8, 1, 0);
  ((void (__fastcall *)(UserPresentHistoryListViewObject_o *, _QWORD, const MethodInfo *))v8->klass->vtable._9_SetInput.methodPtr)(
    v8,
    0,
    v8->klass->vtable._9_SetInput.method);
}


void UserPresentHistoryListViewObject__SetupDisp(UserPresentHistoryListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  UserPresentHistoryListViewItemDraw_o *v11; // x0

  if ( (byte_596F4D3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UserPresentHistoryListViewItem_TypeInfo);
    byte_596F4D3 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = UserPresentHistoryListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (UserPresentHistoryListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == UserPresentHistoryListViewItem_TypeInfo )
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_2213CDC(0, v9);
    UserPresentHistoryListViewItemDraw__SetItem(v11, (UserPresentHistoryListViewItem_o *)v5, v10);
  }
}