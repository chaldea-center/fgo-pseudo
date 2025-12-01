void ScriptSelectListViewObject___ctor(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4CC947D & 1) == 0 )
  {
    sub_1C713B0(&ListViewObject_TypeInfo);
    byte_4CC947D = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void ScriptSelectListViewObject__Awake(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4CC9472 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewItemDraw___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UIMessageButton___);
    byte_4CC9472 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             dispObject,
                             (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewItemDraw___),
        this->fields.itemDraw = (struct ScriptSelectListViewItemDraw_o *)Component_object,
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields.itemDraw,
          (int32_t)Component_object,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C71608(dispObject, v3);
  }
  v12 = UnityEngine_GameObject__GetComponent_object_(
          dispObject,
          (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIMessageButton___);
  this->fields.messageButton = (struct UIMessageButton_o *)v12;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.messageButton, (int32_t)v12, v13, v14, v15, v16, v17, v18);
}


UnityEngine_GameObject_o *ScriptSelectListViewObject__CreateDragObject(
        ScriptSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4CC9475 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewObject___);
    byte_4CC9475 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewObject___)) == 0) )
  {
    sub_1C71608(DragObject, v4);
  }
  ScriptSelectListViewObject__Init_45186848((ScriptSelectListViewObject_o *)DragObject, 2, v6);
  return v5;
}


void ScriptSelectListViewObject__EventMoveEnd(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields._ClosedMessage_k__BackingField) = 0;
  HIDWORD(p_callbackFunc[-1].fields._ClosedMessage_k__BackingField) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


ScriptSelectListViewItem_o *ScriptSelectListViewObject__GetItem(
        ScriptSelectListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4CC9474 & 1) == 0 )
  {
    sub_1C713B0(&ScriptSelectListViewItem_TypeInfo);
    byte_4CC9474 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = ScriptSelectListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (ScriptSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ScriptSelectListViewItem_TypeInfo )
    return (ScriptSelectListViewItem_o *)this->fields.linkItem;
  return 0;
}


void ScriptSelectListViewObject__Init(
        ScriptSelectListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  int32_t v11; // w23
  int32_t dispMode; // w22
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  const MethodInfo *v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w8
  GrandQuestFolderBoardItem_c *klass; // x19

  if ( (byte_4CC9476 & 1) == 0 )
  {
    sub_1C713B0(&ScriptSelectListViewItem_TypeInfo);
    byte_4CC9476 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = ScriptSelectListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (ScriptSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ScriptSelectListViewItem_TypeInfo )
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
  ListViewObject__SetVisible((ListViewObject_o *)this, v11 != 0, 0);
  ((void (__fastcall *)(ScriptSelectListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v11 == 4,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C71608(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v30 = 1;
  switch ( v11 )
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
      v11 = 2;
LABEL_14:
      this->fields.dispMode = v11;
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
      klass = p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0;
        sub_1C71354(p_callbackFunc, 0, v24, v25, v26, v27, v28, v29);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptSelectListViewObject__Init_45186848(
        ScriptSelectListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  ScriptSelectListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void ScriptSelectListViewObject__Init_45186920(
        ScriptSelectListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  ScriptSelectListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void ScriptSelectListViewObject__Init_45188156(
        ScriptSelectListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  ScriptSelectListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void ScriptSelectListViewObject__NoSelectMove(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v4; // x1
  ScriptSelectListViewItemDraw_o *v5; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4CC9479 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_ScriptSelectListViewObject_NoSelectMove2__);
    byte_4CC9479 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v5 = this->fields.itemDraw;
    v6 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ScriptSelectListViewObject_NoSelectMove2__, 0);
    if ( !v5 )
      sub_1C71608(v7, v8);
    ScriptSelectListViewItemDraw__NoSelectDecide(v5, v6, v9);
  }
  else
  {
    ScriptSelectListViewObject__NoSelectMove2(this, v4);
  }
}


void ScriptSelectListViewObject__NoSelectMove2(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  this->fields.dispMode = 0;
  ScriptSelectListViewObject__SetupDisp(this, v3);
  ScriptSelectListViewObject__EventMoveEnd(this, v4);
}


void ScriptSelectListViewObject__NoSelectStart(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4CC9478 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9512/*"NoSelectMove"*/);
    byte_4CC9478 = 1;
  }
  this->fields.isBusy = 1;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9512/*"NoSelectMove"*/, 0.1, 0);
}


void ScriptSelectListViewObject__OnDestroy(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CC9473 & 1) == 0 )
  {
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC9473 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (GrandQuestFolderBoardItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_1C71354(p_dragObject, 0, v7, v8, v9, v10, v11, v12);
  }
}


void ScriptSelectListViewObject__SelectMove(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v4; // x1
  ScriptSelectListViewItemDraw_o *v5; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4CC947B & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_ScriptSelectListViewObject_SelectMove2__);
    byte_4CC947B = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v5 = this->fields.itemDraw;
    v6 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ScriptSelectListViewObject_SelectMove2__, 0);
    if ( !v5 )
      sub_1C71608(v7, v8);
    ScriptSelectListViewItemDraw__SelectDecide(v5, v6, v9);
  }
  else
  {
    ScriptSelectListViewObject__SelectMove2(this, v4);
  }
}


void ScriptSelectListViewObject__SelectMove2(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  this->fields.dispMode = 0;
  ScriptSelectListViewObject__SetupDisp(this, v3);
  ScriptSelectListViewObject__EventMoveEnd(this, v4);
}


void ScriptSelectListViewObject__SelectStart(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4CC947A & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_12688/*"SelectMove"*/);
    byte_4CC947A = 1;
  }
  this->fields.isBusy = 1;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_12688/*"SelectMove"*/, 0.1, 0);
}


void ScriptSelectListViewObject__SetInput(ScriptSelectListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Behaviour_o *messageButton; // x0

  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  messageButton = (UnityEngine_Behaviour_o *)this->fields.messageButton;
  if ( !messageButton )
    sub_1C71608(0, v4);
  UnityEngine_Behaviour__set_enabled(messageButton, 1, 0);
}


void ScriptSelectListViewObject__SetItem(
        ScriptSelectListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_44123920((ListViewObject_o *)this, item, seed, 0);
}


void ScriptSelectListViewObject__SetupDisp(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  ScriptSelectListViewItemDraw_o *v9; // x0

  if ( (byte_4CC9477 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&ScriptSelectListViewItem_TypeInfo);
    byte_4CC9477 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = ScriptSelectListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ScriptSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ScriptSelectListViewItem_TypeInfo )
  {
    linkItem = 0;
LABEL_7:
    v5 = 0;
    goto LABEL_8;
  }
  v5 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C71608(0, v7);
    ScriptSelectListViewItemDraw__SetItem(v9, (ScriptSelectListViewItem_o *)linkItem, this->fields.dispMode, v8);
  }
}


void ScriptSelectListViewObject__Start(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    ScriptSelectListViewObject__Init_45186848(this, 2, v2);
}


System_String_o *ScriptSelectListViewObject__ToString(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  float z; // w9
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_Enum_o v8; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v10; // [xsp+20h] [xbp-40h] BYREF
  float v11; // [xsp+28h] [xbp-38h]

  if ( (byte_4CC947C & 1) == 0 )
  {
    sub_1C713B0(&ScriptSelectListViewItemDraw_DispMode_TypeInfo);
    sub_1C713B0(&StringLiteral_113/*" "*/);
    byte_4CC947C = 1;
  }
  v11 = 0.0;
  v10 = 0;
  v8.klass = (System_Enum_c *)ScriptSelectListViewItemDraw_DispMode_TypeInfo;
  v8.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v3 = System_Enum__ToString(&v8, 0);
  z = this->fields.basePosition.fields.z;
  v5 = v3;
  v10 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v11 = z;
  v6 = (System_String_o *)sub_1E2ED10(&v10, 0, 0, 0);
  return System_String__Concat_64069988(v5, (System_String_o *)StringLiteral_113/*" "*/, v6, 0);
}


void ScriptSelectListViewObject__add_callbackFunc(
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

  if ( (byte_4CC9470 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC9470 = 1;
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
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C719A4(v8);
  ScriptSelectListViewObject__remove_callbackFunc(v11, v12, v13);
}


void ScriptSelectListViewObject__remove_callbackFunc(
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

  if ( (byte_4CC9471 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC9471 = 1;
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
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C719A4(v8);
  ScriptSelectListViewObject__Awake(v11, v12);
}