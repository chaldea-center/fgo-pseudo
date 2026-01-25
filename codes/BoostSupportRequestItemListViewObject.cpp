void BoostSupportRequestItemListViewObject___ctor(
        BoostSupportRequestItemListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CE8207 & 1) == 0 )
  {
    sub_1C7BAE8(&ListViewObject_TypeInfo);
    byte_4CE8207 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void BoostSupportRequestItemListViewObject__Awake(
        BoostSupportRequestItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_4CE8202 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewItemDraw___);
    byte_4CE8202 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C7BD40(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewItemDraw___);
  this->fields.itemDraw = (struct BoostSupportRequestItemListViewItemDraw_o *)Component_object;
  sub_1C7BA8C(&this->fields.itemDraw, Component_object);
}


UnityEngine_GameObject_o *BoostSupportRequestItemListViewObject__CreateDragObject(
        BoostSupportRequestItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19

  if ( (byte_4CE8203 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewObject___);
    byte_4CE8203 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject )
    sub_1C7BD40(0, v4);
  v5 = DragObject;
  UnityEngine_GameObject__GetComponent_object_(
    DragObject,
    (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewObject___);
  return v5;
}


void BoostSupportRequestItemListViewObject__DisplayOnlyInit(
        BoostSupportRequestItemListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  BoostSupportRequestItemListViewObject__Init(this, 0, 1, v2);
}


void BoostSupportRequestItemListViewObject__EventMoveEnd(
        BoostSupportRequestItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x0
  struct System_Action_o *v3; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v3 = callbackFunc;
  *((_BYTE *)p_callbackFunc - 8) = 0;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0;
    sub_1C7BA8C(p_callbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v3->fields.invoke_impl)(v3->fields.method_code, v3->fields.method);
  }
}


void BoostSupportRequestItemListViewObject__Init(
        BoostSupportRequestItemListViewObject_o *this,
        System_Action_o *callbackFunc,
        bool displayOnly,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v9; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  struct System_Action_o **p_callbackFunc; // x21
  BoostSupportRequestItemListViewObject_o *v14; // x0
  const MethodInfo *v15; // x3
  BoostSupportRequestItemListViewObject_c *klass; // x8
  int32_t v17; // w9
  BoostSupportRequestItemListViewObject_c *v18; // x8
  const MethodInfo *v19; // x1
  struct System_Action_o *v20; // x19

  if ( (byte_4CE8204 & 1) == 0 )
  {
    sub_1C7BAE8(&BoostSupportRequsetItemListViewItem_TypeInfo);
    byte_4CE8204 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = BoostSupportRequsetItemListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (BoostSupportRequsetItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == BoostSupportRequsetItemListViewItem_TypeInfo )
      v9 = this->fields.linkItem;
    else
      v9 = 0;
  }
  else
  {
    v9 = 0;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C7BD40(transform, v11);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  if ( displayOnly )
  {
    this->fields.dispMode = 4;
    BoostSupportRequestItemListViewObject__SetupDisp(this, v12);
  }
  else
  {
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = &this->fields.callbackFunc;
    v14 = (BoostSupportRequestItemListViewObject_o *)sub_1C7BA8C(&this->fields.callbackFunc, callbackFunc);
    if ( v9 )
    {
      if ( LOBYTE(v9[1].fields.sortIndex) )
      {
        if ( BoostSupportRequestItemListViewObject__IsAllUserItemEnough(
               v14,
               *(CommonConsumeEntity_array **)&v9[1].fields.selectNum,
               (UserItemEntity_array *)v9[1].monitor,
               v15) )
        {
          klass = this->klass;
          v17 = 2;
        }
        else
        {
          klass = this->klass;
          v17 = 3;
        }
      }
      else
      {
        klass = this->klass;
        v17 = 1;
      }
      this->fields.dispMode = v17;
      ((void (__fastcall *)(BoostSupportRequestItemListViewObject_o *, __int64, const MethodInfo *))klass->vtable._9_SetInput.methodPtr)(
        this,
        1,
        klass->vtable._9_SetInput.method);
    }
    else
    {
      v18 = this->klass;
      this->fields.dispMode = 0;
      ((void (__fastcall *)(BoostSupportRequestItemListViewObject_o *, _QWORD, const MethodInfo *))v18->vtable._9_SetInput.methodPtr)(
        this,
        0,
        v18->vtable._9_SetInput.method);
    }
    BoostSupportRequestItemListViewObject__SetupDisp(this, v19);
    v20 = this->fields.callbackFunc;
    if ( v20 )
    {
      *p_callbackFunc = 0;
      sub_1C7BA8C(p_callbackFunc, 0);
      ((void (__fastcall *)(intptr_t, intptr_t))v20->fields.invoke_impl)(v20->fields.method_code, v20->fields.method);
    }
  }
}


void BoostSupportRequestItemListViewObject__Init_31421816(
        BoostSupportRequestItemListViewObject_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BoostSupportRequestItemListViewObject__Init(this, callbackFunc, 0, v3);
}


void BoostSupportRequestItemListViewObject__Init_31424084(
        BoostSupportRequestItemListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  BoostSupportRequestItemListViewObject__Init(this, 0, 0, v2);
}


bool BoostSupportRequestItemListViewObject__IsAllUserItemEnough(
        BoostSupportRequestItemListViewObject_o *this,
        CommonConsumeEntity_array *consumeList,
        UserItemEntity_array *userItemEntityList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  bool v7; // w22
  unsigned __int64 v8; // x23
  CommonConsumeEntity_o *v9; // x21

  if ( (byte_4CE8205 & 1) == 0 )
  {
    this = (BoostSupportRequestItemListViewObject_o *)sub_1C7BAE8(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    byte_4CE8205 = 1;
  }
  if ( !consumeList )
    goto LABEL_12;
  max_length = consumeList->max_length;
  v7 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C7BD48(this);
      v9 = consumeList->m_Items[v8];
      this = (BoostSupportRequestItemListViewObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
      if ( !this )
        break;
      this = (BoostSupportRequestItemListViewObject_o *)BoostFunctionUtility__IsEnoughUserItem(
                                                          (BoostFunctionUtility_o *)this,
                                                          v9,
                                                          userItemEntityList,
                                                          0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        LODWORD(max_length) = consumeList->max_length;
        v7 = (__int64)++v8 < (int)max_length;
        if ( (__int64)v8 < (int)max_length )
          continue;
      }
      return !v7;
    }
LABEL_12:
    sub_1C7BD40(this, consumeList);
  }
  return !v7;
}


void BoostSupportRequestItemListViewObject__SetDirectItem(
        BoostSupportRequestItemListViewObject_o *this,
        BoostSupportRequsetItemListViewItem_o *item,
        const MethodInfo *method)
{
  this->fields.linkItem = (struct ListViewItem_o *)item;
  sub_1C7BA8C(&this->fields.linkItem, item);
}


void BoostSupportRequestItemListViewObject__SetItem(
        BoostSupportRequestItemListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_44356304((ListViewObject_o *)this, item, seed, 0);
}


void BoostSupportRequestItemListViewObject__SetupDisp(
        BoostSupportRequestItemListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v5; // x20
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  BoostSupportRequestItemListViewItemDraw_o *v9; // x0

  if ( (byte_4CE8206 & 1) == 0 )
  {
    sub_1C7BAE8(&BoostSupportRequsetItemListViewItem_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE8206 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = BoostSupportRequsetItemListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (BoostSupportRequsetItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == BoostSupportRequsetItemListViewItem_TypeInfo )
      v5 = this->fields.linkItem;
    else
      v5 = 0;
  }
  else
  {
    v5 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C7BD40(0, v7);
    BoostSupportRequestItemListViewItemDraw__SetItem(
      v9,
      (BoostSupportRequsetItemListViewItem_o *)v5,
      this->fields.dispMode,
      v8);
  }
}


void BoostSupportRequestItemListViewObject__add_callbackFunc(
        BoostSupportRequestItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  BoostSupportRequestItemListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CE8200 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CE8200 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestItemListViewObject_o *)sub_1C7C0DC(v8);
  BoostSupportRequestItemListViewObject__remove_callbackFunc(v11, v12, v13);
}


void BoostSupportRequestItemListViewObject__remove_callbackFunc(
        BoostSupportRequestItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  BoostSupportRequestItemListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CE8201 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CE8201 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestItemListViewObject_o *)sub_1C7C0DC(v8);
  BoostSupportRequestItemListViewObject__Awake(v11, v12);
}