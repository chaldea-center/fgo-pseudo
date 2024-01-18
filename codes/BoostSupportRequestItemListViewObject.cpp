void __fastcall BoostSupportRequestItemListViewObject___ctor(
        BoostSupportRequestItemListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4187E4D & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    byte_4187E4D = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall BoostSupportRequestItemListViewObject__Awake(
        BoostSupportRequestItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct BoostSupportRequestItemListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4187E48 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewItemDraw___, method);
    byte_4187E48 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B2C434(0LL, v3);
  Component_srcLineSprite = (struct BoostSupportRequestItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                  dispObject,
                                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewItemDraw___);
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


UnityEngine_GameObject_o *__fastcall BoostSupportRequestItemListViewObject__CreateDragObject(
        BoostSupportRequestItemListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19

  if ( (byte_4187E49 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewObject___, method);
    byte_4187E49 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject )
    sub_B2C434(0LL, v4);
  v5 = DragObject;
  UnityEngine_GameObject__GetComponent_srcLineSprite_(
    DragObject,
    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewObject___);
  return v5;
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  p_callbackFunc[-1].fields.isOpenAfter = 0;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall BoostSupportRequestItemListViewObject__Init(
        BoostSupportRequestItemListViewObject_o *this,
        System_Action_o *callbackFunc,
        bool displayOnly,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v8; // x11
  BoostSupportRequsetItemListViewItem_o *v9; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x21
  CommonConsumeEntity_array *ConsumeList; // x20
  BoostSupportRequestItemListViewObject_o *UserItemEntityList; // x0
  const MethodInfo *v22; // x3
  BoostSupportRequestItemListViewObject_c *klass; // x8
  int32_t v24; // w9
  BoostSupportRequestItemListViewObject_c *v25; // x8
  const MethodInfo *v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Action_o *v33; // x19

  if ( (byte_4187E4A & 1) == 0 )
  {
    sub_B2C35C(&BoostSupportRequsetItemListViewItem_TypeInfo, callbackFunc);
    byte_4187E4A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (v8 = *(&BoostSupportRequsetItemListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v8) )
  {
    if ( (BoostSupportRequsetItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] == BoostSupportRequsetItemListViewItem_TypeInfo )
      v9 = (BoostSupportRequsetItemListViewItem_o *)this->fields.linkItem;
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
    sub_B2C434(transform, v11);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  if ( displayOnly )
  {
    this->fields.dispMode = 4;
    BoostSupportRequestItemListViewObject__SetupDisp(this, v12);
  }
  else
  {
    this->fields.callbackFunc = callbackFunc;
    p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callbackFunc,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    if ( v9 )
    {
      if ( v9->fields.isRelease )
      {
        ConsumeList = BoostSupportRequsetItemListViewItem__get_ConsumeList(v9, 0LL);
        UserItemEntityList = (BoostSupportRequestItemListViewObject_o *)BoostSupportRequsetItemListViewItem__get_UserItemEntityList(
                                                                          v9,
                                                                          0LL);
        if ( BoostSupportRequestItemListViewObject__IsAllUserItemEnough(
               UserItemEntityList,
               ConsumeList,
               (UserItemEntity_array *)UserItemEntityList,
               v22) )
        {
          klass = this->klass;
          v24 = 2;
        }
        else
        {
          klass = this->klass;
          v24 = 3;
        }
      }
      else
      {
        klass = this->klass;
        v24 = 1;
      }
      this->fields.dispMode = v24;
      ((void (__fastcall *)(BoostSupportRequestItemListViewObject_o *, __int64, Il2CppMethodPointer))klass->vtable._9_SetInput.method)(
        this,
        1LL,
        klass->vtable._10_Invalidation.methodPtr);
    }
    else
    {
      v25 = this->klass;
      this->fields.dispMode = 0;
      ((void (__fastcall *)(BoostSupportRequestItemListViewObject_o *, _QWORD, Il2CppMethodPointer))v25->vtable._9_SetInput.method)(
        this,
        0LL,
        v25->vtable._10_Invalidation.methodPtr);
    }
    BoostSupportRequestItemListViewObject__SetupDisp(this, v26);
    v33 = this->fields.callbackFunc;
    if ( v33 )
    {
      p_callbackFunc->klass = 0LL;
      sub_B2C2F8(p_callbackFunc, 0LL, v27, v28, v29, v30, v31, v32);
      System_Action__Invoke(v33, 0LL);
    }
  }
}


void __fastcall BoostSupportRequestItemListViewObject__Init_25595388(
        BoostSupportRequestItemListViewObject_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BoostSupportRequestItemListViewObject__Init(this, callbackFunc, 0, v3);
}


void __fastcall BoostSupportRequestItemListViewObject__Init_25597412(
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
  __int64 v6; // x1
  __int64 v7; // x8
  unsigned __int64 v8; // x22
  CommonConsumeEntity_o *v9; // x21
  const MethodInfo *v10; // x3
  __int64 v12; // x0

  if ( (byte_4187E4B & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, consumeList);
    this = (BoostSupportRequestItemListViewObject_o *)sub_B2C35C(&SingletonTemplate_BoostFunctionUtility__TypeInfo, v6);
    byte_4187E4B = 1;
  }
  if ( !consumeList )
LABEL_16:
    sub_B2C434(this, consumeList);
  v7 = *(_QWORD *)&consumeList->max_length;
  if ( (int)v7 < 1 )
    return 1;
  v8 = 0LL;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)v7 )
    {
      v12 = sub_B2C460(this);
      sub_B2C400(v12, 0LL);
    }
    v9 = consumeList->m_Items[v8];
    if ( (BYTE3(SingletonTemplate_BoostFunctionUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_BoostFunctionUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_BoostFunctionUtility__TypeInfo);
    }
    this = (BoostSupportRequestItemListViewObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    if ( !this )
      goto LABEL_16;
    this = (BoostSupportRequestItemListViewObject_o *)BoostFunctionUtility__IsEnoughUserItem(
                                                        (BoostFunctionUtility_o *)this,
                                                        v9,
                                                        userItemEntityList,
                                                        v10);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    LODWORD(v7) = consumeList->max_length;
    if ( (__int64)++v8 >= (int)v7 )
      return 1;
  }
}


void __fastcall BoostSupportRequestItemListViewObject__SetDirectItem(
        BoostSupportRequestItemListViewObject_o *this,
        BoostSupportRequsetItemListViewItem_o *item,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.linkItem = (struct ListViewItem_o *)item;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.linkItem,
    (System_Int32_array **)item,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BoostSupportRequestItemListViewObject__SetItem(
        BoostSupportRequestItemListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_33907092((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall BoostSupportRequestItemListViewObject__SetupDisp(
        BoostSupportRequestItemListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 v5; // x11
  struct ListViewItem_o *v6; // x20
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  BoostSupportRequestItemListViewItemDraw_o *v10; // x0

  if ( (byte_4187E4C & 1) == 0 )
  {
    sub_B2C35C(&BoostSupportRequsetItemListViewItem_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4187E4C = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (v5 = *(&BoostSupportRequsetItemListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5) )
  {
    if ( (BoostSupportRequsetItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] == BoostSupportRequsetItemListViewItem_TypeInfo )
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
    BoostSupportRequestItemListViewItemDraw__SetItem(
      v10,
      (BoostSupportRequsetItemListViewItem_o *)v6,
      this->fields.dispMode,
      v9);
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

  if ( (byte_4187E46 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4187E46 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestItemListViewObject_o *)sub_B2C728(v8);
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

  if ( (byte_4187E47 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4187E47 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestItemListViewObject_o *)sub_B2C728(v8);
  BoostSupportRequestItemListViewObject__Awake(v11, v12);
}