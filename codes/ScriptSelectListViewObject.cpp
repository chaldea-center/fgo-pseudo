void __fastcall ScriptSelectListViewObject___ctor(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4AB79E6 & 1) == 0 )
  {
    sub_1BAB41C(&ListViewObject_TypeInfo, method);
    byte_4AB79E6 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall ScriptSelectListViewObject__Awake(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4AB79DB & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewItemDraw___, method);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_UIMessageButton___, v3);
    byte_4AB79DB = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             dispObject,
                             (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewItemDraw___),
        this->fields.itemDraw = (struct ScriptSelectListViewItemDraw_o *)Component_object,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v7, v8),
        (dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BAB678(dispObject, v4);
  }
  v9 = UnityEngine_GameObject__GetComponent_object_(
         dispObject,
         (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_UIMessageButton___);
  this->fields.messageButton = (struct UIMessageButton_o *)v9;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.messageButton, (int32_t)v9, v10, v11);
}


UnityEngine_GameObject_o *__fastcall ScriptSelectListViewObject__CreateDragObject(
        ScriptSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4AB79DE & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewObject___, method);
    byte_4AB79DE = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewObject___)) == 0LL) )
  {
    sub_1BAB678(DragObject, v4);
  }
  ScriptSelectListViewObject__Init_42117224((ScriptSelectListViewObject_o *)DragObject, 2, v6);
  return v5;
}


void __fastcall ScriptSelectListViewObject__EventMoveEnd(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  p_callbackFunc[-1].fields.isMine = 0;
  *((_DWORD *)&p_callbackFunc[-1].fields.isMine + 1) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BAB3C0(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


ScriptSelectListViewItem_o *__fastcall ScriptSelectListViewObject__GetItem(
        ScriptSelectListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4AB79DD & 1) == 0 )
  {
    sub_1BAB41C(&ScriptSelectListViewItem_TypeInfo, method);
    byte_4AB79DD = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(ScriptSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (ScriptSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ScriptSelectListViewItem_TypeInfo )
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
  __int64 methodPtr_low; // x10
  int32_t v11; // w23
  int32_t dispMode; // w22
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w8
  ServantStatusBattleListViewItem_c *klass; // x19

  if ( (byte_4AB79DF & 1) == 0 )
  {
    sub_1BAB41C(&ScriptSelectListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4AB79DF = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(ScriptSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (ScriptSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == ScriptSelectListViewItem_TypeInfo )
      v11 = initMode;
    else
      v11 = 0;
  }
  else
  {
    v11 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v11 != 0, 0LL);
  ((void (__fastcall *)(ScriptSelectListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v11 == 4,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BAB678(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v17, v18);
  v22 = 1;
  switch ( v11 )
  {
    case 0:
    case 1:
    case 2:
      goto LABEL_14;
    case 3:
      this->fields.dispMode = 0;
      this->fields.state = 2;
      ScriptSelectListViewObject__EventMoveEnd(this, v19);
      return;
    case 4:
      v22 = 3;
      v11 = 2;
LABEL_14:
      this->fields.dispMode = v11;
      this->fields.state = v22;
      goto LABEL_15;
    case 5:
      this->fields.dispMode = 0;
      this->fields.state = 2;
      ScriptSelectListViewObject__NoSelectStart(this, v19);
      return;
    case 6:
      this->fields.dispMode = 0;
      this->fields.state = 2;
      ScriptSelectListViewObject__SelectStart(this, v19);
      return;
    default:
LABEL_15:
      if ( !state || dispMode != this->fields.dispMode )
        ScriptSelectListViewObject__SetupDisp(this, v19);
      klass = p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0LL;
        sub_1BAB3C0(p_callbackFunc, 0, v20, v21);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSelectListViewObject__Init_42117224(
        ScriptSelectListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_4AB0691 )
  {
    sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4AB0691 = 1;
  }
  ScriptSelectListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSelectListViewObject__Init_42117296(
        ScriptSelectListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4AB0691 )
  {
    sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4AB0691 = 1;
  }
  ScriptSelectListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptSelectListViewObject__Init_42118532(
        ScriptSelectListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_4AB0691 )
  {
    sub_1BAB41C(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4AB0691 = 1;
  }
  ScriptSelectListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
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
  const MethodInfo *v11; // x2

  if ( (byte_4AB79E2 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    sub_1BAB41C(&Method_ScriptSelectListViewObject_NoSelectMove2__, v4);
    byte_4AB79E2 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v7 = this->fields.itemDraw;
    v8 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_ScriptSelectListViewObject_NoSelectMove2__, 0LL);
    if ( !v7 )
      sub_1BAB678(v9, v10);
    ScriptSelectListViewItemDraw__NoSelectDecide(v7, v8, v11);
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
  if ( (byte_4AB79E1 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_9502/*"NoSelectMove"*/, method);
    byte_4AB79E1 = 1;
  }
  this->fields.isBusy = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9502/*"NoSelectMove"*/,
    0.1,
    0LL);
}


void __fastcall ScriptSelectListViewObject__OnDestroy(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusBattleListViewItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4AB79DC & 1) == 0 )
  {
    sub_1BAB41C(&NGUITools_TypeInfo, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    byte_4AB79DC = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (ServantStatusBattleListViewItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1BAB3C0(p_dragObject, 0, v8, v9);
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
  const MethodInfo *v11; // x2

  if ( (byte_4AB79E4 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v3);
    sub_1BAB41C(&Method_ScriptSelectListViewObject_SelectMove2__, v4);
    byte_4AB79E4 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v7 = this->fields.itemDraw;
    v8 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_ScriptSelectListViewObject_SelectMove2__, 0LL);
    if ( !v7 )
      sub_1BAB678(v9, v10);
    ScriptSelectListViewItemDraw__SelectDecide(v7, v8, v11);
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
  if ( (byte_4AB79E3 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_12604/*"SelectMove"*/, method);
    byte_4AB79E3 = 1;
  }
  this->fields.isBusy = 1;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12604/*"SelectMove"*/,
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
    sub_1BAB678(0LL, v4);
  UnityEngine_Behaviour__set_enabled(messageButton, 1, 0LL);
}


void __fastcall ScriptSelectListViewObject__SetItem(
        ScriptSelectListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_41133552((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall ScriptSelectListViewObject__SetupDisp(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  ScriptSelectListViewItemDraw_o *v10; // x0

  if ( (byte_4AB79E0 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    sub_1BAB41C(&ScriptSelectListViewItem_TypeInfo, v3);
    byte_4AB79E0 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(ScriptSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (ScriptSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ScriptSelectListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  v6 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v6, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1BAB678(0LL, v8);
    ScriptSelectListViewItemDraw__SetItem(v10, (ScriptSelectListViewItem_o *)linkItem, this->fields.dispMode, v9);
  }
}


void __fastcall ScriptSelectListViewObject__Start(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    ScriptSelectListViewObject__Init_42117224(this, 2, v2);
}


System_String_o *__fastcall ScriptSelectListViewObject__ToString(
        ScriptSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0
  float z; // w9
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  System_Enum_o v9; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v11; // [xsp+20h] [xbp-40h] BYREF
  float v12; // [xsp+28h] [xbp-38h]

  if ( (byte_4AB79E5 & 1) == 0 )
  {
    sub_1BAB41C(&ScriptSelectListViewItemDraw_DispMode_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_116/*" "*/, v3);
    byte_4AB79E5 = 1;
  }
  v12 = 0.0;
  v11 = 0LL;
  v9.klass = (System_Enum_c *)ScriptSelectListViewItemDraw_DispMode_TypeInfo;
  v9.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v4 = System_Enum__ToString(&v9, 0LL);
  z = this->fields.basePosition.fields.z;
  v6 = v4;
  v11 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v12 = z;
  v7 = (System_String_o *)sub_1D976D4(&v11, 0LL, 0LL, 0LL);
  return System_String__Concat_62059388(v6, (System_String_o *)StringLiteral_116/*" "*/, v7, 0LL);
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

  if ( (byte_4AB79D9 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, value);
    byte_4AB79D9 = 1;
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
    v9 = sub_1BE690C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BAB938(v8);
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

  if ( (byte_4AB79DA & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, value);
    byte_4AB79DA = 1;
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
    v9 = sub_1BE690C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BAB938(v8);
  ScriptSelectListViewObject__Awake(v11, v12);
}