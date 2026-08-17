void ScriptPlayListViewObject___ctor(ScriptPlayListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596DD65 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596DD65 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void ScriptPlayListViewObject__Awake(ScriptPlayListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_596DD5D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ScriptPlayListViewItemDraw___);
    byte_596DD5D = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ScriptPlayListViewItemDraw___);
  this->fields.itemDraw = (struct ScriptPlayListViewItemDraw_o *)Component_object;
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


UnityEngine_GameObject_o *ScriptPlayListViewObject__CreateDragObject(
        ScriptPlayListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_596DD60 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ScriptPlayListViewObject___);
    byte_596DD60 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ScriptPlayListViewObject___)) == 0) )
  {
    sub_2213CDC(DragObject, v4);
  }
  ScriptPlayListViewObject__Init_44373892((ScriptPlayListViewObject_o *)DragObject, 2, v6);
  return v5;
}


void ScriptPlayListViewObject__EventMoveEnd(ScriptPlayListViewObject_o *this, const MethodInfo *method)
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


ScriptPlayListViewItem_o *ScriptPlayListViewObject__GetItem(ScriptPlayListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596DD5F & 1) == 0 )
  {
    sub_2213A60(&ScriptPlayListViewItem_TypeInfo);
    byte_596DD5F = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = ScriptPlayListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (ScriptPlayListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == ScriptPlayListViewItem_TypeInfo )
    return (ScriptPlayListViewItem_o *)this->fields.linkItem;
  return 0;
}


void ScriptPlayListViewObject__Init(
        ScriptPlayListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x9
  ListViewItem_c *klass; // x9
  __int64 naturalAligment; // x10
  unsigned int v12; // w23
  int32_t dispMode; // w22
  int32_t state; // w24
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
  int32_t v31; // w9
  MissionNaviTransitionBoardItem_c *v32; // x19

  if ( (byte_596DD61 & 1) == 0 )
  {
    sub_2213A60(&ScriptPlayListViewItem_TypeInfo);
    byte_596DD61 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (klass = linkItem->klass,
        naturalAligment = ScriptPlayListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (ScriptPlayListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] == ScriptPlayListViewItem_TypeInfo )
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
  ((void (__fastcall *)(ScriptPlayListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v12 == 3,
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
  if ( v12 <= 3 )
  {
    v31 = dword_E9C0E0[v12];
    this->fields.dispMode = *((_DWORD *)&xmmword_E9C5F0 + v12);
    this->fields.state = v31;
  }
  if ( !state || dispMode != this->fields.dispMode )
    ScriptPlayListViewObject__SetupDisp(this, v24);
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


// local variable allocation has failed, the output may be wrong!
void ScriptPlayListViewObject__Init_44373892(
        ScriptPlayListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  ScriptPlayListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void ScriptPlayListViewObject__Init_44375088(
        ScriptPlayListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  ScriptPlayListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void ScriptPlayListViewObject__Init_44375172(
        ScriptPlayListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  ScriptPlayListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void ScriptPlayListViewObject__OnClickSingle(ScriptPlayListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596DD63 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10272/*"OnClickSingleListView"*/);
    byte_596DD63 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_2213CDC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10272/*"OnClickSingleListView"*/, (Il2CppObject *)this, 0);
  }
}


void ScriptPlayListViewObject__OnDestroy(ScriptPlayListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596DD5E & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DD5E = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7, v8);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_2213A04(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
  }
}


void ScriptPlayListViewObject__OnLongPush(ScriptPlayListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_596DD64 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10330/*"OnLongPushListView"*/);
    byte_596DD64 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_2213CDC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10330/*"OnLongPushListView"*/, (Il2CppObject *)this, 0);
  }
}


void ScriptPlayListViewObject__SetItem(
        ScriptPlayListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.state = 0;
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
}


void ScriptPlayListViewObject__SetupDisp(ScriptPlayListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  ScriptPlayListViewItemDraw_o *v11; // x0

  if ( (byte_596DD62 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ScriptPlayListViewItem_TypeInfo);
    byte_596DD62 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = ScriptPlayListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (ScriptPlayListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ScriptPlayListViewItem_TypeInfo )
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_2213CDC(0, v9);
    ScriptPlayListViewItemDraw__SetItem(v11, (ScriptPlayListViewItem_o *)linkItem, this->fields.dispMode, v10);
  }
}


void ScriptPlayListViewObject__Start(ScriptPlayListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    ScriptPlayListViewObject__Init_44373892(this, 2, v2);
}


void ScriptPlayListViewObject__add_callbackFunc(
        ScriptPlayListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ScriptPlayListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596DD5B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596DD5B = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  ScriptPlayListViewObject__remove_callbackFunc(v13, v14, v15);
}


void ScriptPlayListViewObject__remove_callbackFunc(
        ScriptPlayListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ScriptPlayListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596DD5C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596DD5C = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  ScriptPlayListViewObject__Awake(v13, v14);
}