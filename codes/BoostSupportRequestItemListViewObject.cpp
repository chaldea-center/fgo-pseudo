void __fastcall BoostSupportRequestItemListViewObject___ctor(
        BoostSupportRequestItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA541 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA541 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct BoostSupportRequestItemListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EA53C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewItemDraw___,
      (_DWORD)method,
      v2,
      v3);
    byte_42EA53C = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B5D69C(0LL, v5);
  Component_srcLineSprite = (struct BoostSupportRequestItemListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                  dispObject,
                                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


UnityEngine_GameObject_o *__fastcall BoostSupportRequestItemListViewObject__CreateDragObject(
        BoostSupportRequestItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x19

  if ( (byte_42EA53D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewObject___,
      (_DWORD)method,
      v2,
      v3);
    byte_42EA53D = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject )
    sub_B5D69C(0LL, v6);
  v7 = DragObject;
  UnityEngine_GameObject__GetComponent_srcLineSprite_(
    DragObject,
    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoostSupportRequestItemListViewObject___);
  return v7;
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
    sub_B5D560(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
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
  struct ListViewItem_o *v9; // x22
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
  BoostSupportRequestItemListViewObject_o *v20; // x0
  const MethodInfo *v21; // x3
  BoostSupportRequestItemListViewObject_c *klass; // x8
  int32_t v23; // w9
  BoostSupportRequestItemListViewObject_c *v24; // x8
  const MethodInfo *v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Action_o *v32; // x19

  if ( (byte_42EA53E & 1) == 0 )
  {
    sub_B5D5C4(&BoostSupportRequsetItemListViewItem_TypeInfo, (_DWORD)callbackFunc, displayOnly, method);
    byte_42EA53E = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (v8 = *(&BoostSupportRequsetItemListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v8) )
  {
    if ( (BoostSupportRequsetItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] == BoostSupportRequsetItemListViewItem_TypeInfo )
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
    sub_B5D69C(transform, v11);
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
    sub_B5D560(
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
      if ( LOBYTE(v9[1].fields.sortIndex) )
      {
        if ( BoostSupportRequestItemListViewObject__IsAllUserItemEnough(
               v20,
               *(CommonConsumeEntity_array **)&v9[1].fields.selectNum,
               (UserItemEntity_array *)v9[1].monitor,
               v21) )
        {
          klass = this->klass;
          v23 = 2;
        }
        else
        {
          klass = this->klass;
          v23 = 3;
        }
      }
      else
      {
        klass = this->klass;
        v23 = 1;
      }
      this->fields.dispMode = v23;
      ((void (__fastcall *)(BoostSupportRequestItemListViewObject_o *, __int64, Il2CppMethodPointer))klass->vtable._9_SetInput.method)(
        this,
        1LL,
        klass->vtable._10_Invalidation.methodPtr);
    }
    else
    {
      v24 = this->klass;
      this->fields.dispMode = 0;
      ((void (__fastcall *)(BoostSupportRequestItemListViewObject_o *, _QWORD, Il2CppMethodPointer))v24->vtable._9_SetInput.method)(
        this,
        0LL,
        v24->vtable._10_Invalidation.methodPtr);
    }
    BoostSupportRequestItemListViewObject__SetupDisp(this, v25);
    v32 = this->fields.callbackFunc;
    if ( v32 )
    {
      p_callbackFunc->klass = 0LL;
      sub_B5D560(p_callbackFunc, 0LL, v26, v27, v28, v29, v30, v31);
      System_Action__Invoke(v32, 0LL);
    }
  }
}


void __fastcall BoostSupportRequestItemListViewObject__Init_28511464(
        BoostSupportRequestItemListViewObject_o *this,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BoostSupportRequestItemListViewObject__Init(this, callbackFunc, 0, v3);
}


void __fastcall BoostSupportRequestItemListViewObject__Init_28511484(
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x8
  unsigned __int64 v10; // x22
  CommonConsumeEntity_o *v11; // x21
  __int64 v13; // x0

  if ( (byte_42EA53F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonTemplate_BoostFunctionUtility__get_Instance__,
      (_DWORD)consumeList,
      (_DWORD)userItemEntityList,
      method);
    this = (BoostSupportRequestItemListViewObject_o *)sub_B5D5C4(
                                                        &SingletonTemplate_BoostFunctionUtility__TypeInfo,
                                                        v6,
                                                        v7,
                                                        v8);
    byte_42EA53F = 1;
  }
  if ( !consumeList )
LABEL_16:
    sub_B5D69C(this, consumeList);
  v9 = *(_QWORD *)&consumeList->max_length;
  if ( (int)v9 < 1 )
    return 1;
  v10 = 0LL;
  while ( 1 )
  {
    if ( v10 >= (unsigned int)v9 )
    {
      v13 = sub_B5D6C8(this);
      sub_B5D668(v13, 0LL);
    }
    v11 = consumeList->m_Items[v10];
    if ( (BYTE3(SingletonTemplate_BoostFunctionUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_BoostFunctionUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_BoostFunctionUtility__TypeInfo);
    }
    this = (BoostSupportRequestItemListViewObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    if ( !this )
      goto LABEL_16;
    this = (BoostSupportRequestItemListViewObject_o *)BoostFunctionUtility__IsEnoughUserItem(
                                                        (BoostFunctionUtility_o *)this,
                                                        v11,
                                                        userItemEntityList,
                                                        0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    LODWORD(v9) = consumeList->max_length;
    if ( (__int64)++v10 >= (int)v9 )
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
  sub_B5D560(
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
  ListViewObject__SetItem_34021840((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall BoostSupportRequestItemListViewObject__SetupDisp(
        BoostSupportRequestItemListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v9; // x11
  struct ListViewItem_o *v10; // x20
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v12; // x1
  BoostSupportRequestItemListViewItemDraw_o *v13; // x0

  if ( (byte_42EA540 & 1) == 0 )
  {
    sub_B5D5C4(&BoostSupportRequsetItemListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EA540 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (v9 = *(&BoostSupportRequsetItemListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
  {
    if ( (BoostSupportRequsetItemListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == BoostSupportRequsetItemListViewItem_TypeInfo )
      v10 = this->fields.linkItem;
    else
      v10 = 0LL;
  }
  else
  {
    v10 = 0LL;
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
    v13 = this->fields.itemDraw;
    if ( !v13 )
      sub_B5D69C(0LL, v12);
    BoostSupportRequestItemListViewItemDraw__SetItem(
      v13,
      (BoostSupportRequsetItemListViewItem_o *)v10,
      this->fields.dispMode,
      0LL);
  }
}


void __fastcall BoostSupportRequestItemListViewObject__add_callbackFunc(
        BoostSupportRequestItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  BoostSupportRequestItemListViewObject_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EA53A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA53A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (BoostSupportRequestItemListViewObject_o *)sub_B5D990(v9);
  BoostSupportRequestItemListViewObject__remove_callbackFunc(v12, v13, v14);
}


void __fastcall BoostSupportRequestItemListViewObject__remove_callbackFunc(
        BoostSupportRequestItemListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  BoostSupportRequestItemListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EA53B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA53B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (BoostSupportRequestItemListViewObject_o *)sub_B5D990(v9);
  BoostSupportRequestItemListViewObject__Awake(v12, v13);
}