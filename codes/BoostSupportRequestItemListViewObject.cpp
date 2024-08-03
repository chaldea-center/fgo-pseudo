void __fastcall BoostSupportRequestItemListViewObject___ctor(
        BoostSupportRequestItemListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_49F74D5 & 1) == 0 )
  {
    sub_1B640C8(&ListViewObject_TypeInfo, method);
    byte_49F74D5 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall BoostSupportRequestItemListViewObject__Awake(
        BoostSupportRequestItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_49F74D0 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewItemDraw___, method);
    byte_49F74D0 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B64324(0LL);
  this->fields.itemDraw = (struct BoostSupportRequestItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                dispObject,
                                                                                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewItemDraw___);
  sub_1B6406C(&this->fields.itemDraw);
}


UnityEngine_GameObject_o *__fastcall BoostSupportRequestItemListViewObject__CreateDragObject(
        BoostSupportRequestItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  UnityEngine_GameObject_o *v4; // x19

  if ( (byte_49F74D1 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewObject___, method);
    byte_49F74D1 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject )
    sub_1B64324(0LL);
  v4 = DragObject;
  UnityEngine_GameObject__GetComponent_object_(
    DragObject,
    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewObject___);
  return v4;
}


void __fastcall BoostSupportRequestItemListViewObject__DisplayOnlyInit(
        BoostSupportRequestItemListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  BoostSupportRequestItemListViewObject__Init(this, 0LL, 1, v2);
}


void __fastcall BoostSupportRequestItemListViewObject__EventMoveEnd(
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
    *p_callbackFunc = 0LL;
    sub_1B6406C(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v3->fields.m_target)(
      v3->fields.original_method_info,
      *(_QWORD *)&v3->fields.extra_arg);
  }
}


void __fastcall BoostSupportRequestItemListViewObject__Init(
        BoostSupportRequestItemListViewObject_o *this,
        System_Action_o *callbackFunc,
        bool displayOnly,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v9; // x22
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v11; // x1
  struct System_Action_o **p_callbackFunc; // x21
  BoostSupportRequestItemListViewObject_o *v13; // x0
  const MethodInfo *v14; // x3
  BoostSupportRequestItemListViewObject_c *klass; // x8
  int32_t v16; // w9
  BoostSupportRequestItemListViewObject_c *v17; // x8
  const MethodInfo *v18; // x1
  struct System_Action_o *v19; // x19

  if ( (byte_49F74D2 & 1) == 0 )
  {
    sub_1B640C8(&BoostSupportRequsetItemListViewItem_TypeInfo, callbackFunc);
    byte_49F74D2 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(BoostSupportRequsetItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (BoostSupportRequsetItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == BoostSupportRequsetItemListViewItem_TypeInfo )
      v9 = this->fields.linkItem;
    else
      v9 = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B64324(transform);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  if ( displayOnly )
  {
    this->fields.dispMode = 4;
    BoostSupportRequestItemListViewObject__SetupDisp(this, v11);
  }
  else
  {
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = &this->fields.callbackFunc;
    v13 = (BoostSupportRequestItemListViewObject_o *)sub_1B6406C(&this->fields.callbackFunc);
    if ( v9 )
    {
      if ( LOBYTE(v9[1].fields.sortIndex) )
      {
        if ( BoostSupportRequestItemListViewObject__IsAllUserItemEnough(
               v13,
               *(CommonConsumeEntity_array **)&v9[1].fields.selectNum,
               (UserItemEntity_array *)v9[1].monitor,
               v14) )
        {
          klass = this->klass;
          v16 = 2;
        }
        else
        {
          klass = this->klass;
          v16 = 3;
        }
      }
      else
      {
        klass = this->klass;
        v16 = 1;
      }
      this->fields.dispMode = v16;
      ((void (__fastcall *)(BoostSupportRequestItemListViewObject_o *, __int64, Il2CppMethodPointer))klass->vtable._9_SetInput.method)(
        this,
        1LL,
        klass->vtable._10_Invalidation.methodPtr);
    }
    else
    {
      v17 = this->klass;
      this->fields.dispMode = 0;
      ((void (__fastcall *)(BoostSupportRequestItemListViewObject_o *, _QWORD, Il2CppMethodPointer))v17->vtable._9_SetInput.method)(
        this,
        0LL,
        v17->vtable._10_Invalidation.methodPtr);
    }
    BoostSupportRequestItemListViewObject__SetupDisp(this, v18);
    v19 = this->fields.callbackFunc;
    if ( v19 )
    {
      *p_callbackFunc = 0LL;
      sub_1B6406C(p_callbackFunc);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v19->fields.m_target)(
        v19->fields.original_method_info,
        *(_QWORD *)&v19->fields.extra_arg);
    }
  }
}


void __fastcall BoostSupportRequestItemListViewObject__Init_30286164(
        BoostSupportRequestItemListViewObject_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BoostSupportRequestItemListViewObject__Init(this, callbackFunc, 0, v3);
}


void __fastcall BoostSupportRequestItemListViewObject__Init_30288428(
        BoostSupportRequestItemListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  BoostSupportRequestItemListViewObject__Init(this, 0LL, 0, v2);
}


bool __fastcall BoostSupportRequestItemListViewObject__IsAllUserItemEnough(
        BoostSupportRequestItemListViewObject_o *this,
        CommonConsumeEntity_array *consumeList,
        UserItemEntity_array *userItemEntityList,
        const MethodInfo *method)
{
  __int64 v6; // x8
  bool v7; // w22
  unsigned __int64 v8; // x23
  CommonConsumeEntity_o *v9; // x21

  if ( (byte_49F74D3 & 1) == 0 )
  {
    this = (BoostSupportRequestItemListViewObject_o *)sub_1B640C8(
                                                        &Method_SingletonTemplate_BoostFunctionUtility__get_Instance__,
                                                        consumeList);
    byte_49F74D3 = 1;
  }
  if ( !consumeList )
    goto LABEL_12;
  v6 = *(_QWORD *)&consumeList->max_length;
  v7 = (int)v6 > 0;
  if ( (int)v6 >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v6 )
        sub_1B6432C(this, consumeList, userItemEntityList, method);
      v9 = consumeList->m_Items[v8];
      this = (BoostSupportRequestItemListViewObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
      if ( !this )
        break;
      this = (BoostSupportRequestItemListViewObject_o *)BoostFunctionUtility__IsEnoughUserItem(
                                                          (BoostFunctionUtility_o *)this,
                                                          v9,
                                                          userItemEntityList,
                                                          0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        LODWORD(v6) = consumeList->max_length;
        v7 = (__int64)++v8 < (int)v6;
        if ( (__int64)v8 < (int)v6 )
          continue;
      }
      return !v7;
    }
LABEL_12:
    sub_1B64324(this);
  }
  return !v7;
}


void __fastcall BoostSupportRequestItemListViewObject__SetDirectItem(
        BoostSupportRequestItemListViewObject_o *this,
        BoostSupportRequsetItemListViewItem_o *item,
        const MethodInfo *method)
{
  this->fields.linkItem = (struct ListViewItem_o *)item;
  sub_1B6406C(&this->fields.linkItem);
}


void __fastcall BoostSupportRequestItemListViewObject__SetItem(
        BoostSupportRequestItemListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_40419096((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall BoostSupportRequestItemListViewObject__SetupDisp(
        BoostSupportRequestItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v6; // x20
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v8; // x3
  BoostSupportRequestItemListViewItemDraw_o *v9; // x0

  if ( (byte_49F74D4 & 1) == 0 )
  {
    sub_1B640C8(&BoostSupportRequsetItemListViewItem_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F74D4 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(BoostSupportRequsetItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (BoostSupportRequsetItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == BoostSupportRequsetItemListViewItem_TypeInfo )
      v6 = this->fields.linkItem;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, 1, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1B64324(0LL);
    BoostSupportRequestItemListViewItemDraw__SetItem(
      v9,
      (BoostSupportRequsetItemListViewItem_o *)v6,
      this->fields.dispMode,
      v8);
  }
}


void __fastcall BoostSupportRequestItemListViewObject__add_callbackFunc(
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

  if ( (byte_49F74CE & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F74CE = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestItemListViewObject_o *)sub_1B645E4(v8);
  BoostSupportRequestItemListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall BoostSupportRequestItemListViewObject__remove_callbackFunc(
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

  if ( (byte_49F74CF & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F74CF = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestItemListViewObject_o *)sub_1B645E4(v8);
  BoostSupportRequestItemListViewObject__Awake(v11, v12);
}