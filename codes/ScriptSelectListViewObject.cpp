void __fastcall ScriptSelectListViewObject___ctor(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_418D030 & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    byte_418D030 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct ScriptSelectListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UIMessageButton_o *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_418D025 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewItemDraw___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIMessageButton___, v3);
    byte_418D025 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_srcLineSprite = (struct ScriptSelectListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                             dispObject,
                                                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewItemDraw___),
        this->fields.itemDraw = Component_srcLineSprite,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.itemDraw,
          (System_Int32_array **)Component_srcLineSprite,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        (dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B2C434(dispObject, v4);
  }
  v13 = (struct UIMessageButton_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      dispObject,
                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIMessageButton___);
  this->fields.messageButton = v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.messageButton,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall ScriptSelectListViewObject__CreateDragObject(
        ScriptSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  ScriptSelectListViewObject_o *v6; // x20
  const MethodInfo *v7; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_418D028 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewObject___, method);
    byte_418D028 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    DragObject,
                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewObject___)) == 0LL) )
  {
    sub_B2C434(DragObject, v4);
  }
  v6 = (ScriptSelectListViewObject_o *)DragObject;
  zero = UnityEngine_Vector3__get_zero(0LL);
  ScriptSelectListViewObject__Init(v6, 2, 0LL, zero.fields.x, *(UnityEngine_Vector3_o *)&zero.fields.y, v7);
  return v5;
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
    sub_B2C2F8(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


ScriptSelectListViewItem_o *__fastcall ScriptSelectListViewObject__GetItem(
        ScriptSelectListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_418D027 & 1) == 0 )
  {
    sub_B2C35C(&ScriptSelectListViewItem_TypeInfo, method);
    byte_418D027 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&ScriptSelectListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (ScriptSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == ScriptSelectListViewItem_TypeInfo )
    return (ScriptSelectListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_418D029 & 1) == 0 )
  {
    sub_B2C35C(&ScriptSelectListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_418D029 = 1;
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
    sub_B2C434(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  sub_B2C2F8(
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
        sub_B2C2F8(p_callbackFunc, 0LL, v24, v25, v26, v27, v28, v29);
        System_Action__Invoke(klass, 0LL);
      }
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSelectListViewObject__Init_33998908(
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
void __fastcall ScriptSelectListViewObject__Init_33999820(
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
void __fastcall ScriptSelectListViewObject__Init_34000980(
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
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v6; // x1
  ScriptSelectListViewItemDraw_o *v7; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_418D02C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&Method_ScriptSelectListViewObject_NoSelectMove2__, v4);
    byte_418D02C = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v7 = this->fields.itemDraw;
    v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_ScriptSelectListViewObject_NoSelectMove2__, 0LL);
    if ( !v7 )
      sub_B2C434(v9, v10);
    ScriptSelectListViewItemDraw__NoSelectDecide(v7, v8, 0LL);
  }
  else
  {
    ScriptSelectListViewObject__NoSelectMove2(this, v6);
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
  if ( (byte_418D02B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_9591/*"NoSelectMove"*/, method);
    byte_418D02B = 1;
  }
  this->fields.isBusy = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9591/*"NoSelectMove"*/,
    0.1,
    0LL);
}


void __fastcall ScriptSelectListViewObject__OnDestroy(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantConfConponent_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_418D026 & 1) == 0 )
  {
    sub_B2C35C(&NGUITools_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_418D026 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (BattleServantConfConponent_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_B2C2F8(p_dragObject, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall ScriptSelectListViewObject__SelectMove(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v6; // x1
  ScriptSelectListViewItemDraw_o *v7; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_418D02E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&Method_ScriptSelectListViewObject_SelectMove2__, v4);
    byte_418D02E = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v7 = this->fields.itemDraw;
    v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_ScriptSelectListViewObject_SelectMove2__, 0LL);
    if ( !v7 )
      sub_B2C434(v9, v10);
    ScriptSelectListViewItemDraw__SelectDecide(v7, v8, 0LL);
  }
  else
  {
    ScriptSelectListViewObject__SelectMove2(this, v6);
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
  if ( (byte_418D02D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12659/*"SelectMove"*/, method);
    byte_418D02D = 1;
  }
  this->fields.isBusy = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12659/*"SelectMove"*/,
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
    sub_B2C434(0LL, v4);
  UnityEngine_Behaviour__set_enabled(messageButton, 1, 0LL);
}


void __fastcall ScriptSelectListViewObject__SetItem(
        ScriptSelectListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_33907092((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall ScriptSelectListViewObject__SetupDisp(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 v5; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  ScriptSelectListViewItemDraw_o *v9; // x0

  if ( (byte_418D02A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&ScriptSelectListViewItem_TypeInfo, v3);
    byte_418D02A = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v5 = *(&ScriptSelectListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5
      && (ScriptSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[v5 - 1] == ScriptSelectListViewItem_TypeInfo )
    {
      v6 = this->fields.dispMode != 0;
      goto LABEL_8;
    }
    linkItem = 0LL;
  }
  v6 = 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v6, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_B2C434(0LL, v8);
    ScriptSelectListViewItemDraw__SetItem(v9, (ScriptSelectListViewItem_o *)linkItem, this->fields.dispMode, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x20
  System_String_o *v7; // x21
  int32_t *v8; // x0
  __int64 v9; // x9
  float z; // w10
  System_String_o *v11; // x0
  __int64 v13; // [xsp+0h] [xbp-30h] BYREF
  float v14; // [xsp+8h] [xbp-28h]
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418D02F & 1) == 0 )
  {
    sub_B2C35C(&ScriptSelectListViewItemDraw_DispMode_TypeInfo, method);
    sub_B2C35C(&StringLiteral_80/*" "*/, v3);
    byte_418D02F = 1;
  }
  v14 = 0.0;
  v13 = 0LL;
  v4 = j_il2cpp_value_box_0(ScriptSelectListViewItemDraw_DispMode_TypeInfo, &this->fields.dispMode);
  if ( !v4 )
    sub_B2C434(0LL, v5);
  v6 = v4;
  v7 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 360LL))(
                            v4,
                            *(_QWORD *)(*(_QWORD *)v4 + 368LL));
  v8 = (int32_t *)j_il2cpp_object_unbox_0(v6);
  v9 = *(_QWORD *)&this->fields.basePosition.fields.x;
  z = this->fields.basePosition.fields.z;
  this->fields.dispMode = *v8;
  v13 = v9;
  v14 = z;
  v11 = UnityEngine_Vector3__ToString(v15, (const MethodInfo *)&v13);
  return System_String__Concat_44307816(v7, (System_String_o *)StringLiteral_80/*" "*/, v11, 0LL);
}


void __fastcall ScriptSelectListViewObject__add_callbackFunc(
        ScriptSelectListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptSelectListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_418D023 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418D023 = 1;
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
  sub_B2C728(v8);
  ScriptSelectListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ScriptSelectListViewObject__remove_callbackFunc(
        ScriptSelectListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptSelectListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_418D024 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418D024 = 1;
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
  sub_B2C728(v8);
  ScriptSelectListViewObject__Awake(v11, v12);
}