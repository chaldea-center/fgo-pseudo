void __fastcall ScriptSelectListViewObject___ctor(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE311 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE311 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ScriptSelectListViewObject__Awake(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct ScriptSelectListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct UIMessageButton_o *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42EE306 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewItemDraw___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIMessageButton___, v5, v6, v7);
    byte_42EE306 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_srcLineSprite = (struct ScriptSelectListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             dispObject,
                                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewItemDraw___),
        this->fields.itemDraw = Component_srcLineSprite,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.itemDraw,
          (System_Int32_array **)Component_srcLineSprite,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        (dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B5D69C(dispObject, v8);
  }
  v17 = (struct UIMessageButton_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      dispObject,
                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIMessageButton___);
  this->fields.messageButton = v17;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.messageButton,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ScriptSelectListViewObject__CreateDragObject(
        ScriptSelectListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x19
  ScriptSelectListViewObject_o *v8; // x20
  const MethodInfo *v9; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EE309 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewObject___, (_DWORD)method, v2, v3);
    byte_42EE309 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v7 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewObject___)) == 0LL) )
  {
    sub_B5D69C(DragObject, v6);
  }
  v8 = (ScriptSelectListViewObject_o *)DragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  ScriptSelectListViewObject__Init(v8, 2, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v9);
  return v7;
}


void __fastcall ScriptSelectListViewObject__EventMoveEnd(ScriptSelectListViewObject_o *this, const MethodInfo *method)
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
  p_callbackFunc[-1].fields.adjustHeight = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B5D560(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


ScriptSelectListViewItem_o *__fastcall ScriptSelectListViewObject__GetItem(
        ScriptSelectListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42EE308 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptSelectListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE308 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&ScriptSelectListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (ScriptSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == ScriptSelectListViewItem_TypeInfo )
    return (ScriptSelectListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall ScriptSelectListViewObject__Init(
        ScriptSelectListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  int32_t dispMode; // w22
  int32_t state; // w23
  __int64 v12; // x10
  int32_t v13; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  BattleServantConfConponent_o *p_callbackFunc; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t v30; // w8
  System_Action_o *klass; // x19

  if ( (byte_42EE30A & 1) == 0 )
  {
    sub_B5D5C4(&ScriptSelectListViewItem_TypeInfo, initMode, (_DWORD)callbackFunc, method);
    byte_42EE30A = 1;
  }
  linkItem = this->fields.linkItem;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  if ( linkItem
    && (v12 = *(&ScriptSelectListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
  {
    if ( (ScriptSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[v12 - 1] == ScriptSelectListViewItem_TypeInfo )
      v13 = initMode;
    else
      v13 = 0;
  }
  else
  {
    v13 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0LL);
  ((void (__fastcall *)(ScriptSelectListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v13 == 4,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B5D69C(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callbackFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v30 = 1;
  switch ( v13 )
  {
    case 0:
    case 1:
    case 2:
      goto LABEL_14;
    case 3:
      this->fields.dispMode = 0;
      this->fields.state = 2;
      ScriptSelectListViewObject__EventMoveEnd(this, v23);
      return;
    case 4:
      v30 = 3;
      v13 = 2;
LABEL_14:
      this->fields.dispMode = v13;
      this->fields.state = v30;
      goto LABEL_15;
    case 5:
      this->fields.dispMode = 0;
      this->fields.state = 2;
      ScriptSelectListViewObject__NoSelectStart(this, v23);
      return;
    case 6:
      this->fields.dispMode = 0;
      this->fields.state = 2;
      ScriptSelectListViewObject__SelectStart(this, v23);
      return;
    default:
LABEL_15:
      if ( !state || dispMode != this->fields.dispMode )
        ScriptSelectListViewObject__SetupDisp(this, v23);
      klass = (System_Action_o *)p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0LL;
        sub_B5D560(p_callbackFunc, 0LL, v24, v25, v26, v27, v28, v29);
        System_Action__Invoke(klass, 0LL);
      }
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSelectListViewObject__Init_34801340(
        ScriptSelectListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  ScriptSelectListViewObject__Init(this, initMode, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSelectListViewObject__Init_34801392(
        ScriptSelectListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  ScriptSelectListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSelectListViewObject__Init_34802552(
        ScriptSelectListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  zero = UnityEngine_Vector3__get_zero(0LL);
  ScriptSelectListViewObject__Init(
    this,
    initMode,
    callbackFunc,
    zero.fields.x,
    *(UnityEngine_Vector3_o *)&zero.fields.y,
    v7);
}


void __fastcall ScriptSelectListViewObject__NoSelectMove(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v12; // x1
  ScriptSelectListViewItemDraw_o *v13; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2

  if ( (byte_42EE30D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ScriptSelectListViewObject_NoSelectMove2__, v8, v9, v10);
    byte_42EE30D = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v13 = this->fields.itemDraw;
    v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_ScriptSelectListViewObject_NoSelectMove2__, 0LL);
    if ( !v13 )
      sub_B5D69C(v15, v16);
    ScriptSelectListViewItemDraw__NoSelectDecide(v13, v14, v17);
  }
  else
  {
    ScriptSelectListViewObject__NoSelectMove2(this, v12);
  }
}


void __fastcall ScriptSelectListViewObject__NoSelectMove2(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  this->fields.dispMode = 0;
  ScriptSelectListViewObject__SetupDisp(this, v3);
  ScriptSelectListViewObject__EventMoveEnd(this, v4);
}


void __fastcall ScriptSelectListViewObject__NoSelectStart(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE30C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9689/*"NoSelectMove"*/, (_DWORD)method, v2, v3);
    byte_42EE30C = 1;
  }
  this->fields.isBusy = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9689/*"NoSelectMove"*/,
    0.1,
    0LL);
}


void __fastcall ScriptSelectListViewObject__OnDestroy(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EE307 & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42EE307 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v9 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B5D560(p_dragObject, 0LL, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall ScriptSelectListViewObject__SelectMove(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v12; // x1
  ScriptSelectListViewItemDraw_o *v13; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2

  if ( (byte_42EE30F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ScriptSelectListViewObject_SelectMove2__, v8, v9, v10);
    byte_42EE30F = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v13 = this->fields.itemDraw;
    v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_ScriptSelectListViewObject_SelectMove2__, 0LL);
    if ( !v13 )
      sub_B5D69C(v15, v16);
    ScriptSelectListViewItemDraw__SelectDecide(v13, v14, v17);
  }
  else
  {
    ScriptSelectListViewObject__SelectMove2(this, v12);
  }
}


void __fastcall ScriptSelectListViewObject__SelectMove2(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  this->fields.dispMode = 0;
  ScriptSelectListViewObject__SetupDisp(this, v3);
  ScriptSelectListViewObject__EventMoveEnd(this, v4);
}


void __fastcall ScriptSelectListViewObject__SelectStart(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE30E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12809/*"SelectMove"*/, (_DWORD)method, v2, v3);
    byte_42EE30E = 1;
  }
  this->fields.isBusy = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12809/*"SelectMove"*/,
    0.1,
    0LL);
}


void __fastcall ScriptSelectListViewObject__SetInput(
        ScriptSelectListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Behaviour_o *messageButton; // x0

  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  messageButton = (UnityEngine_Behaviour_o *)this->fields.messageButton;
  if ( !messageButton )
    sub_B5D69C(0LL, v4);
  UnityEngine_Behaviour__set_enabled(messageButton, 1, 0LL);
}


void __fastcall ScriptSelectListViewObject__SetItem(
        ScriptSelectListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_34021840((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall ScriptSelectListViewObject__SetupDisp(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct ListViewItem_o *linkItem; // x20
  __int64 v9; // x10
  bool v10; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  ScriptSelectListViewItemDraw_o *v14; // x0

  if ( (byte_42EE30B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ScriptSelectListViewItem_TypeInfo, v5, v6, v7);
    byte_42EE30B = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v9 = *(&ScriptSelectListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v9
      && (ScriptSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[v9 - 1] == ScriptSelectListViewItem_TypeInfo )
    {
      v10 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v10 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v10, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v14 = this->fields.itemDraw;
    if ( !v14 )
      sub_B5D69C(0LL, v12);
    ScriptSelectListViewItemDraw__SetItem(v14, (ScriptSelectListViewItem_o *)linkItem, this->fields.dispMode, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSelectListViewObject__Start(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( !this->fields.state )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    ScriptSelectListViewObject__Init(this, 2, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v3);
  }
}


System_String_o *__fastcall ScriptSelectListViewObject__ToString(
        ScriptSelectListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x20
  System_String_o *v11; // x21
  int32_t *v12; // x0
  __int64 v13; // x9
  float z; // w10
  System_String_o *v15; // x0
  __int64 v17; // [xsp+0h] [xbp-30h] BYREF
  float v18; // [xsp+8h] [xbp-28h]
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EE310 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptSelectListViewItemDraw_DispMode_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v5, v6, v7);
    byte_42EE310 = 1;
  }
  v18 = 0.0;
  v17 = 0LL;
  v8 = j_il2cpp_value_box_0(ScriptSelectListViewItemDraw_DispMode_TypeInfo, &this->fields.dispMode);
  if ( !v8 )
    sub_B5D69C(0LL, v9);
  v10 = v8;
  v11 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 360LL))(
                             v8,
                             *(_QWORD *)(*(_QWORD *)v8 + 368LL));
  v12 = (int32_t *)j_il2cpp_object_unbox_0(v10);
  v13 = *(_QWORD *)&this->fields.basePosition.fields.x;
  z = this->fields.basePosition.fields.z;
  this->fields.dispMode = *v12;
  v17 = v13;
  v18 = z;
  v15 = UnityEngine_Vector3__ToString(v19, (const MethodInfo *)&v17);
  return System_String__Concat_44580072(v11, (System_String_o *)StringLiteral_81/*" "*/, v15, 0LL);
}


void __fastcall ScriptSelectListViewObject__add_callbackFunc(
        ScriptSelectListViewObject_o *this,
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
  ScriptSelectListViewObject_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EE304 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EE304 = 1;
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
  sub_B5D990(v9);
  ScriptSelectListViewObject__remove_callbackFunc(v12, v13, v14);
}


void __fastcall ScriptSelectListViewObject__remove_callbackFunc(
        ScriptSelectListViewObject_o *this,
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
  ScriptSelectListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EE305 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EE305 = 1;
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
  sub_B5D990(v9);
  ScriptSelectListViewObject__Awake(v12, v13);
}