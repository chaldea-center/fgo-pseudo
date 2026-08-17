void ServantStatusListViewObject___ctor(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewObject__Awake(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x1

  if ( (byte_596DF7F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewItemDraw___);
    byte_596DF7F = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewItemDraw___);
  this->fields.itemDraw = (struct ServantStatusListViewItemDraw_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  ServantStatusListViewObject__SetBaseTransform(this, v11);
}


void ServantStatusListViewObject__EventCommandStart(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct ServantStatusListViewItemDraw_o *v12; // x0
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x19
  struct System_Action_o *v14; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_596DF85 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DF85 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_2213CDC(0, v5);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, const MethodInfo *))v12->klass->vtable._6_ModifyCommandCard.methodPtr)(
      v12,
      this->fields.mainInfo,
      v12->klass->vtable._6_ModifyCommandCard.method);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v14 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v6, v7, v8, v9, v10, v11);
    ((void (__fastcall *)(intptr_t, intptr_t))v14->fields.invoke_impl)(v14->fields.method_code, v14->fields.method);
  }
}


void ServantStatusListViewObject__EventFaceStart(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct ServantStatusListViewItemDraw_o *v12; // x0
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x19
  struct System_Action_o *v14; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_596DF86 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DF86 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_2213CDC(0, v5);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, const MethodInfo *))v12->klass->vtable._7_ModifyFace.methodPtr)(
      v12,
      this->fields.mainInfo,
      v12->klass->vtable._7_ModifyFace.method);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v14 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v6, v7, v8, v9, v10, v11);
    ((void (__fastcall *)(intptr_t, intptr_t))v14->fields.invoke_impl)(v14->fields.method_code, v14->fields.method);
  }
}


void ServantStatusListViewObject__EventMoveEnd(ServantStatusListViewObject_o *this, const MethodInfo *method)
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
  LOBYTE(p_callbackFunc[-1].fields._NaviAction_k__BackingField) = 0;
  p_callbackFunc[-1].fields._BoardType_k__BackingField = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void ServantStatusListViewObject__EventPortraitStart(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct ServantStatusListViewItemDraw_o *v12; // x0
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x19
  struct System_Action_o *v14; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_596DF88 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DF88 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_2213CDC(0, v5);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, const MethodInfo *))v12->klass->vtable._9_ModifyPortrait.methodPtr)(
      v12,
      this->fields.mainInfo,
      v12->klass->vtable._9_ModifyPortrait.method);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v14 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v6, v7, v8, v9, v10, v11);
    ((void (__fastcall *)(intptr_t, intptr_t))v14->fields.invoke_impl)(v14->fields.method_code, v14->fields.method);
  }
}


void ServantStatusListViewObject__EventRandomLimitCountSettingStart(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct ServantStatusListViewItemDraw_o *v12; // x0
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x19
  struct System_Action_o *v14; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_596DF8A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DF8A = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_2213CDC(0, v5);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, const MethodInfo *))v12->klass->vtable._12_ModifyRandomLimitCountSetting.methodPtr)(
      v12,
      this->fields.mainInfo,
      v12->klass->vtable._12_ModifyRandomLimitCountSetting.method);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v14 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v6, v7, v8, v9, v10, v11);
    ((void (__fastcall *)(intptr_t, intptr_t))v14->fields.invoke_impl)(v14->fields.method_code, v14->fields.method);
  }
}


void ServantStatusListViewObject__EventRandomLimitCountSupportStart(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct ServantStatusListViewItemDraw_o *v12; // x0
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x19
  struct System_Action_o *v14; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_596DF89 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DF89 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_2213CDC(0, v5);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, const MethodInfo *))v12->klass->vtable._11_ModifyRandomLimitCountSupport.methodPtr)(
      v12,
      this->fields.mainInfo,
      v12->klass->vtable._11_ModifyRandomLimitCountSupport.method);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v14 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v6, v7, v8, v9, v10, v11);
    ((void (__fastcall *)(intptr_t, intptr_t))v14->fields.invoke_impl)(v14->fields.method_code, v14->fields.method);
  }
}


void ServantStatusListViewObject__EventStatusStart(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct ServantStatusListViewItemDraw_o *v12; // x0
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x19
  struct System_Action_o *v14; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_596DF87 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DF87 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_2213CDC(0, v5);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, const MethodInfo *))v12->klass->vtable._8_ModifyStatus.methodPtr)(
      v12,
      this->fields.mainInfo,
      v12->klass->vtable._8_ModifyStatus.method);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v14 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, v6, v7, v8, v9, v10, v11);
    ((void (__fastcall *)(intptr_t, intptr_t))v14->fields.invoke_impl)(v14->fields.method_code, v14->fields.method);
  }
}


int32_t ServantStatusListViewObject__GetKind(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v5; // x1
  struct ServantStatusListViewItemDraw_o *v6; // x0

  if ( (byte_596DF80 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DF80 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
    return 0;
  v6 = this->fields.itemDraw;
  if ( !v6 )
    sub_2213CDC(0, v5);
  return ((__int64 (__fastcall *)(struct ServantStatusListViewItemDraw_o *, const MethodInfo *))v6->klass->vtable._4_GetKind.methodPtr)(
           v6,
           v6->klass->vtable._4_GetKind.method);
}


int32_t ServantStatusListViewObject__GetSize(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *v7; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596DF81 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_BoxCollider_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DF81 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( Component_object
    && (naturalAligment = UnityEngine_BoxCollider_TypeInfo->_2.naturalAligment,
        Component_object->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_BoxCollider_TypeInfo )
      v7 = (UnityEngine_Object_o *)Component_object;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  v8 = UnityEngine_Object__op_Inequality(v7, 0, 0);
  if ( !v8 )
    return 0;
  if ( !v7 )
    sub_2213CDC(v8, v9);
  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v7, 0);
  if ( size.fields.y == INFINITY )
    return 0x80000000;
  else
    return (int)size.fields.y;
}


void ServantStatusListViewObject__Init(
        ServantStatusListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  int32_t dispMode; // w23
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v12; // x1
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x1
  MethodInfo *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  int32_t v27; // w8
  MissionNaviTransitionBoardItem_c *klass; // x19

  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ServantStatusListViewObject__SetVisible(this, initMode != 0, (const MethodInfo *)callbackFunc);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v12);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( initMode <= 4 )
  {
    if ( (unsigned int)initMode < 3 )
    {
      ServantStatusListViewObject__SetInput(this, 0, v21);
      this->fields.dispMode = initMode;
      this->fields.state = 1;
      goto LABEL_10;
    }
    if ( initMode != 3 )
    {
      if ( initMode == 4 )
      {
        ServantStatusListViewObject__EventCommandStart(this, v20);
        return;
      }
      goto LABEL_10;
    }
    ServantStatusListViewObject__SetInput(this, 1, v21);
    v27 = 3;
LABEL_25:
    this->fields.state = v27;
    this->fields.dispMode = 2;
LABEL_26:
    ServantStatusListViewObject__SetupDisp(this, v20);
    goto LABEL_27;
  }
  if ( initMode <= 7 )
  {
    if ( initMode == 5 )
    {
      ServantStatusListViewObject__EventFaceStart(this, v20);
    }
    else if ( initMode == 6 )
    {
      ServantStatusListViewObject__EventStatusStart(this, v20);
    }
    else
    {
      ServantStatusListViewObject__EventPortraitStart(this, v20);
    }
    return;
  }
  switch ( initMode )
  {
    case 8:
      v27 = 1;
      goto LABEL_25;
    case 9:
      ServantStatusListViewObject__EventRandomLimitCountSupportStart(this, v20);
      return;
    case 10:
      ServantStatusListViewObject__EventRandomLimitCountSettingStart(this, v20);
      return;
  }
LABEL_10:
  if ( !state || dispMode != this->fields.dispMode )
    goto LABEL_26;
LABEL_27:
  klass = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)v21, v22, v23, v24, v25, v26);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewObject__Init_44599120(
        ServantStatusListViewObject_o *this,
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
  ServantStatusListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewObject__Init_44600556(
        ServantStatusListViewObject_o *this,
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
  ServantStatusListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewObject__Init_44609492(
        ServantStatusListViewObject_o *this,
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
  ServantStatusListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


void ServantStatusListViewObject__OnClick(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, this);
  ServantStatusListViewManager__OnClickListView(manager, this, v2);
}


void ServantStatusListViewObject__OnClickBondLimitUp(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickCombine(manager, 17, 0, v2);
}


void ServantStatusListViewObject__OnClickButton(
        ServantStatusListViewObject_o *this,
        UICommonButton_o *tappedButton,
        ServantStatusListViewItemDrawButton_o *ownerObject,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, tappedButton);
  ServantStatusListViewManager__OnClickButton(manager, tappedButton, ownerObject, method);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewObject__OnClickCommandCharaLevel(
        ServantStatusListViewObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, *(_QWORD *)&index);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, index, method);
}


void ServantStatusListViewObject__OnClickEquip1(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickListViewEquip1(manager, method);
}


void ServantStatusListViewObject__OnClickEquip2(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickListViewEquip(manager, 1, v2);
}


void ServantStatusListViewObject__OnClickEquip3(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickListViewEquip(manager, 2, v2);
}


void ServantStatusListViewObject__OnClickEquipExp(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickListViewEquipExp(manager, method);
}


void ServantStatusListViewObject__OnClickEquipExp2(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickListViewEquipExp_44601736(manager, 1, v2);
}


void ServantStatusListViewObject__OnClickEquipExp3(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickListViewEquipExp_44601736(manager, 2, v2);
}


void ServantStatusListViewObject__OnClickExchangeAppendSkill(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickCombine(manager, 21, 0, v2);
}


void ServantStatusListViewObject__OnClickExp(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickListViewExp(manager, method);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewObject__OnClickFaceCharaLevel(
        ServantStatusListViewObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, *(_QWORD *)&index);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, index, method);
}


void ServantStatusListViewObject__OnClickFriendship(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickListViewFriendship(manager, method);
}


void ServantStatusListViewObject__OnClickLevelExceedServant(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickCombine(manager, 23, 0, v2);
}


void ServantStatusListViewObject__OnClickLimitCountUpServant(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickCombine(manager, 16, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewObject__OnClickPortraitCharaLevel(
        ServantStatusListViewObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, *(_QWORD *)&index);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, index, method);
}


void ServantStatusListViewObject__OnClickRandomLimitCountOtherSettingMask(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickRandomLimitCountMask(manager, 3, v2);
}


void ServantStatusListViewObject__OnClickRandomLimitCountSelectSupportMask(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickRandomLimitCountMask(manager, 2, v2);
}


void ServantStatusListViewObject__OnClickRandomLimitCountSettingMask(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickRandomLimitCountMask(manager, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewObject__OnClickRandomLimitCountSupportButton(
        ServantStatusListViewObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, *(_QWORD *)&index);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, index, method);
}


void ServantStatusListViewObject__OnClickReflectOwnSetting(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, -1, v2);
}


void ServantStatusListViewObject__OnClickReinforceAppendSkill(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickCombine(manager, 20, 0, v2);
}


void ServantStatusListViewObject__OnClickReinforceCommandCard(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickCombine(manager, 19, 0, v2);
}


void ServantStatusListViewObject__OnClickReinforceEquip(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickCombine(manager, 14, 0, v2);
}


void ServantStatusListViewObject__OnClickReinforceEquip2(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickCombine(manager, 14, 1, v2);
}


void ServantStatusListViewObject__OnClickReinforceEquip3(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickCombine(manager, 14, 2, v2);
}


void ServantStatusListViewObject__OnClickReinforceNp(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickCombine(manager, 22, 0, v2);
}


void ServantStatusListViewObject__OnClickReinforceServant(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickCombine(manager, 13, 0, v2);
}


void ServantStatusListViewObject__OnClickReinforceSkill(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickCombine(manager, 15, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewObject__OnClickServantQuest(
        ServantStatusListViewObject_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, *(_QWORD *)&questId);
  ServantStatusListViewManager__OnClickServantQuest(manager, questId, method);
}


void ServantStatusListViewObject__OnClickServantTdSpeedActual(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickServantTdSpeed(manager, 1, v2);
}


void ServantStatusListViewObject__OnClickServantTdSpeedFree(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickServantTdSpeed(manager, 0, v2);
}


void ServantStatusListViewObject__OnClickServantTdSpeedTwice(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickServantTdSpeed(manager, 2, v2);
}


void ServantStatusListViewObject__OnClickSetCodeCommandCard(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickCombine(manager, 18, 0, v2);
}


void ServantStatusListViewObject__OnClickSwitchRandomLimitCountOwnRandomOff(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickSwitchRandomLimitCountOwn(manager, 2, v2);
}


void ServantStatusListViewObject__OnClickSwitchRandomLimitCountOwnRandomOn(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickSwitchRandomLimitCountOwn(manager, 1, v2);
}


void ServantStatusListViewObject__OnClickSwitchRandomLimitCountOwnSettingAll(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickSwitchRandomLimitCountOwn(manager, 0, v2);
}


void ServantStatusListViewObject__OnClickSwitchRandomLimitCountSupportRandomOff(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickSwitchRandomLimitCountSupport(manager, 5, v2);
}


void ServantStatusListViewObject__OnClickSwitchRandomLimitCountSupportRandomOn(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickSwitchRandomLimitCountSupport(manager, 4, v2);
}


void ServantStatusListViewObject__OnClickSwitchRandomLimitCountSupportSettingAll(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnClickSwitchRandomLimitCountSupport(manager, 3, v2);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewObject__OnClickUnSealedQuestTransition(
        ServantStatusListViewObject_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, *(_QWORD *)&questId);
  ServantStatusListViewManager__OnClickUnSealedQuestTransition(manager, questId, method);
}


void ServantStatusListViewObject__OnDestroy(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  ;
}


void ServantStatusListViewObject__OnLongPushEquip1(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnLongPushListViewEquip1(manager, method);
}


void ServantStatusListViewObject__OnLongPushEquip2(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnLongPushListViewEquip(manager, 1, v2);
}


void ServantStatusListViewObject__OnLongPushEquip3(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, method);
  ServantStatusListViewManager__OnLongPushListViewEquip(manager, 2, v2);
}


void ServantStatusListViewObject__SetBaseTransform(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  struct UnityEngine_Transform_o *parent; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (parent = UnityEngine_Transform__get_parent(transform, 0),
        this->fields.baseParent = parent,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.baseParent,
          (int32_t)parent,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
    || (this->fields.basePosition = UnityEngine_Transform__get_localPosition(transform, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v4);
  }
  this->fields.baseScale = UnityEngine_Transform__get_localScale(transform, 0);
}


void ServantStatusListViewObject__SetInput(ServantStatusListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Component_object; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_596DF83 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DF83 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v8 )
  {
    if ( !Component_object )
      sub_2213CDC(v8, v9);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0);
  }
}


void ServantStatusListViewObject__SetItem(
        ServantStatusListViewObject_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x2

  this->fields.mainInfo = item;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mainInfo,
    (int32_t)item,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ServantStatusListViewObject__Init_44599120(this, 2, v9);
}


void ServantStatusListViewObject__SetManager(
        ServantStatusListViewObject_o *this,
        ServantStatusListViewManager_o *manager,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ServantStatusListViewManager_o **p_manager; // x20
  const MethodInfo *v10; // x2

  this->fields.manager = manager;
  p_manager = &this->fields.manager;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.manager,
    (int32_t)manager,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*((_DWORD *)p_manager + 12) )
    ServantStatusListViewObject__Init_44599120(this, 2, v10);
}


void ServantStatusListViewObject__SetTransform(
        ServantStatusListViewObject_o *this,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_2213CDC(0, v8);
  v9.fields.x = x;
  v9.fields.y = y;
  v9.fields.z = z;
  UnityEngine_Transform__set_position(transform, v9, 0);
  this->fields.basePosition.fields.x = x;
  this->fields.basePosition.fields.y = y;
  this->fields.basePosition.fields.z = z;
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewObject__SetVisible(
        ServantStatusListViewObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_596DF82 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DF82 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isVisible, method);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0, 0) )
  {
    v7 = this->fields.dispObject;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UnityEngine_GameObject__SetActive(v7, isVisible, 0);
  }
}


void ServantStatusListViewObject__SetupDisp(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v7; // x1
  struct ServantStatusListViewItemDraw_o *v8; // x0

  if ( (byte_596DF84 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DF84 = 1;
  }
  ServantStatusListViewObject__SetVisible(this, this->fields.dispMode != 0, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v8 = this->fields.itemDraw;
    if ( !v8 )
      sub_2213CDC(0, v7);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, _QWORD, const MethodInfo *))v8->klass->vtable._5_SetItem.methodPtr)(
      v8,
      this->fields.mainInfo,
      (unsigned int)this->fields.dispMode,
      v8->klass->vtable._5_SetItem.method);
  }
}


void ServantStatusListViewObject__add_callbackFunc(
        ServantStatusListViewObject_o *this,
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
  ServantStatusListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596DF7D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596DF7D = 1;
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
  ServantStatusListViewObject__remove_callbackFunc(v13, v14, v15);
}


int32_t ServantStatusListViewObject__get_Index(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  return this->fields.index;
}


bool ServantStatusListViewObject__get_IsBusy(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  return this->fields.isBusy;
}


void ServantStatusListViewObject__remove_callbackFunc(
        ServantStatusListViewObject_o *this,
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
  ServantStatusListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596DF7E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596DF7E = 1;
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
  ServantStatusListViewObject__Awake(v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewObject__touchCommandCard(
        ServantStatusListViewObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_2213CDC(0, *(_QWORD *)&index);
  ServantStatusListViewManager__OnClickCommandCode(manager, index - 1, method);
}