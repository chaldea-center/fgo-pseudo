void ScriptSelectListViewObject___ctor(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_597291B & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_597291B = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void ScriptSelectListViewObject__Awake(ScriptSelectListViewObject_o *this, const MethodInfo *method)
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
  Il2CppObject *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5972910 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewItemDraw___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIMessageButton___);
    byte_5972910 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             dispObject,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewItemDraw___),
        this->fields.itemDraw = (struct ScriptSelectListViewItemDraw_o *)Component_object,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
          (int32_t)Component_object,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (dispObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(dispObject, v3);
  }
  v12 = UnityEngine_GameObject__GetComponent_object_(
          dispObject,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIMessageButton___);
  this->fields.messageButton = (struct UIMessageButton_o *)v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.messageButton,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


UnityEngine_GameObject_o *ScriptSelectListViewObject__CreateDragObject(
        ScriptSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_5972913 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewObject___);
    byte_5972913 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ScriptSelectListViewObject___)) == 0) )
  {
    sub_2213CDC(DragObject, v4);
  }
  ScriptSelectListViewObject__Init_51909696((ScriptSelectListViewObject_o *)DragObject, 2, v6);
  return v5;
}


void ScriptSelectListViewObject__EventMoveEnd(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields._BoardType_k__BackingField) = 0;
  *(&p_callbackFunc[-1].fields._BoardType_k__BackingField + 1) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


ScriptSelectListViewItem_o *ScriptSelectListViewObject__GetItem(
        ScriptSelectListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_5972912 & 1) == 0 )
  {
    sub_2213A60(&ScriptSelectListViewItem_TypeInfo);
    byte_5972912 = 1;
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
  struct ListViewItem_o *linkItem; // x9
  ListViewItem_c *klass; // x9
  __int64 naturalAligment; // x10
  int v12; // w24
  int32_t dispMode; // w22
  int32_t state; // w23
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w8
  MissionNaviTransitionBoardItem_c *v32; // x19

  if ( (byte_5972914 & 1) == 0 )
  {
    sub_2213A60(&ScriptSelectListViewItem_TypeInfo);
    byte_5972914 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (klass = linkItem->klass,
        naturalAligment = ScriptSelectListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (ScriptSelectListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] == ScriptSelectListViewItem_TypeInfo )
      v12 = initMode;
    else
      v12 = 0;
  }
  else
  {
    v12 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v12 != 0, 0);
  ((void (__fastcall *)(ScriptSelectListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v12 == 4,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( v12 <= 2 )
  {
    if ( (unsigned int)v12 >= 3 )
      goto LABEL_18;
    v31 = 1;
    goto LABEL_17;
  }
  if ( v12 <= 4 )
  {
    if ( v12 == 3 )
    {
      this->fields.dispMode = 0;
      this->fields.state = 2;
      ScriptSelectListViewObject__EventMoveEnd(this, v24);
      return;
    }
    v31 = 3;
    v12 = 2;
LABEL_17:
    this->fields.dispMode = v12;
    this->fields.state = v31;
    goto LABEL_18;
  }
  if ( v12 == 5 )
  {
    this->fields.dispMode = 0;
    this->fields.state = 2;
    ScriptSelectListViewObject__NoSelectStart(this, v24);
    return;
  }
  if ( v12 == 6 )
  {
    this->fields.dispMode = 0;
    this->fields.state = 2;
    ScriptSelectListViewObject__SelectStart(this, v24);
    return;
  }
LABEL_18:
  if ( !state || dispMode != this->fields.dispMode )
    ScriptSelectListViewObject__SetupDisp(this, v24);
  v32 = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v25, v26, v27, v28, v29, v30);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))v32->_1.namespaze)(
      v32->_1.element_class,
      *(_QWORD *)&v32->_1.byval_arg.bits);
  }
}


void ScriptSelectListViewObject__Init_51909696(
        ScriptSelectListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  float v5; // s1
  float v6; // s2
  float v7; // s3
  UnityEngine_Vector3_o v10; // 0:kr00_12.12

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v10.fields.x = v5;
  v10.fields.y = v6;
  v10.fields.z = v7;
  ScriptSelectListViewObject__Init(this, initMode, 0, v4, v10, v3);
}


void ScriptSelectListViewObject__Init_51909768(
        ScriptSelectListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  float v5; // s1
  float v6; // s2
  float v7; // s3
  UnityEngine_Vector3_o v11; // 0:kr00_12.12

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v11.fields.x = v5;
  v11.fields.y = v6;
  v11.fields.z = v7;
  ScriptSelectListViewObject__Init(this, initMode, callbackFunc, delay, v11, method);
}


void ScriptSelectListViewObject__Init_51910980(
        ScriptSelectListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  float v5; // s1
  float v6; // s2
  float v7; // s3
  UnityEngine_Vector3_o v11; // 0:kr00_12.12

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v11.fields.x = v5;
  v11.fields.y = v6;
  v11.fields.z = v7;
  ScriptSelectListViewObject__Init(this, initMode, callbackFunc, v4, v11, method);
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

  if ( (byte_5972917 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ScriptSelectListViewObject_NoSelectMove2__);
    byte_5972917 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v5 = this->fields.itemDraw;
    v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ScriptSelectListViewObject_NoSelectMove2__, 0);
    if ( !v5 )
      sub_2213CDC(v7, v8);
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
  System_String_o *v3; // x1

  if ( (byte_5972916 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9903/*"NoSelectMove"*/);
    byte_5972916 = 1;
  }
  v3 = (System_String_o *)StringLiteral_9903/*"NoSelectMove"*/;
  this->fields.isBusy = 1;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v3, 0.1, 0);
}


void ScriptSelectListViewObject__OnDestroy(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *klass; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5972911 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972911 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v6);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_2213A04(p_dragObject, 0, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_5972919 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ScriptSelectListViewObject_SelectMove2__);
    byte_5972919 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v5 = this->fields.itemDraw;
    v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ScriptSelectListViewObject_SelectMove2__, 0);
    if ( !v5 )
      sub_2213CDC(v7, v8);
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
  System_String_o *v3; // x1

  if ( (byte_5972918 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13214/*"SelectMove"*/);
    byte_5972918 = 1;
  }
  v3 = (System_String_o *)StringLiteral_13214/*"SelectMove"*/;
  this->fields.isBusy = 1;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v3, 0.1, 0);
}


void ScriptSelectListViewObject__SetInput(ScriptSelectListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Behaviour_o *messageButton; // x0

  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  messageButton = (UnityEngine_Behaviour_o *)this->fields.messageButton;
  if ( !messageButton )
    sub_2213CDC(0, v4);
  UnityEngine_Behaviour__set_enabled(messageButton, 1, 0);
}


void ScriptSelectListViewObject__SetItem(
        ScriptSelectListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
}


void ScriptSelectListViewObject__SetupDisp(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  __int64 v6; // x1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  ScriptSelectListViewItemDraw_o *v10; // x0

  if ( (byte_5972915 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ScriptSelectListViewItem_TypeInfo);
    byte_5972915 = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_2213CDC(0, v8);
    ScriptSelectListViewItemDraw__SetItem(v10, (ScriptSelectListViewItem_o *)linkItem, this->fields.dispMode, v9);
  }
}


void ScriptSelectListViewObject__Start(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    ScriptSelectListViewObject__Init_51909696(this, 2, v2);
}


System_String_o *ScriptSelectListViewObject__ToString(ScriptSelectListViewObject_o *this, const MethodInfo *method)
{
  int32_t dispMode; // w10
  System_String_o *v4; // x0
  float z; // w9
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  System_Enum_o v9; // [xsp+8h] [xbp-58h] BYREF
  int32_t v10; // [xsp+18h] [xbp-48h]
  __int64 v11; // [xsp+20h] [xbp-40h] BYREF
  float v12; // [xsp+28h] [xbp-38h]

  if ( (byte_597291A & 1) == 0 )
  {
    sub_2213A60(&ScriptSelectListViewItemDraw_DispMode_TypeInfo);
    sub_2213A60(&StringLiteral_113/*" "*/);
    byte_597291A = 1;
  }
  dispMode = this->fields.dispMode;
  v12 = 0.0;
  v11 = 0;
  v9.klass = (System_Enum_c *)ScriptSelectListViewItemDraw_DispMode_TypeInfo;
  v9.monitor = (void *)-1LL;
  v10 = dispMode;
  v4 = System_Enum__ToString(&v9, 0);
  z = this->fields.basePosition.fields.z;
  v6 = v4;
  v11 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v12 = z;
  v7 = (System_String_o *)sub_2402C74(&v11, 0, 0, 0);
  return System_String__Concat_75694928(v6, (System_String_o *)StringLiteral_113/*" "*/, v7, 0);
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
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  ScriptSelectListViewObject_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_597290E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_597290E = 1;
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
    v10 = sub_224B48C(p_callbackFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_221405C(v8, System_Action_TypeInfo, v9);
  ScriptSelectListViewObject__remove_callbackFunc(v12, v13, v14);
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
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  ScriptSelectListViewObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_597290F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_597290F = 1;
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
    v10 = sub_224B48C(p_callbackFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_221405C(v8, System_Action_TypeInfo, v9);
  ScriptSelectListViewObject__Awake(v12, v13);
}