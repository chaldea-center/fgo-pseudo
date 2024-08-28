void __fastcall ServantStatusListViewObject___ctor(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusListViewObject__Awake(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x1

  if ( (byte_4A1D1BC & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewItemDraw___, method);
    byte_4A1D1BC = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B71828(0LL, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewItemDraw___);
  this->fields.itemDraw = (struct ServantStatusListViewItemDraw_o *)Component_object;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6);
  ServantStatusListViewObject__SetBaseTransform(this, v7);
}


void __fastcall ServantStatusListViewObject__EventBattleStart(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  struct ServantStatusListViewItemDraw_o *v7; // x0
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x19
  struct System_Action_o *v9; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4A1D1C2 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A1D1C2 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v7 = this->fields.itemDraw;
    if ( !v7 )
      sub_1B71828(0LL, v4);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, Il2CppMethodPointer))v7->klass->vtable._6_PlayBattle.method)(
      v7,
      this->fields.mainInfo,
      v7->klass->vtable._7_ModifyCommandCard.methodPtr);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B71570(p_callbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewObject__EventCommandStart(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  struct ServantStatusListViewItemDraw_o *v7; // x0
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x19
  struct System_Action_o *v9; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4A1D1C3 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A1D1C3 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v7 = this->fields.itemDraw;
    if ( !v7 )
      sub_1B71828(0LL, v4);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, Il2CppMethodPointer))v7->klass->vtable._7_ModifyCommandCard.method)(
      v7,
      this->fields.mainInfo,
      v7->klass->vtable._8_ModifyFace.methodPtr);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B71570(p_callbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewObject__EventFaceStart(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  struct ServantStatusListViewItemDraw_o *v7; // x0
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x19
  struct System_Action_o *v9; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4A1D1C4 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A1D1C4 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v7 = this->fields.itemDraw;
    if ( !v7 )
      sub_1B71828(0LL, v4);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, Il2CppMethodPointer))v7->klass->vtable._8_ModifyFace.method)(
      v7,
      this->fields.mainInfo,
      v7->klass->vtable._9_ModifyStatus.methodPtr);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B71570(p_callbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewObject__EventMoveEnd(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields.name) = 0;
  *(_DWORD *)&p_callbackFunc[-1].fields.isMine = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B71570(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewObject__EventPortraitStart(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  struct ServantStatusListViewItemDraw_o *v7; // x0
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x19
  struct System_Action_o *v9; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4A1D1C6 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A1D1C6 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v7 = this->fields.itemDraw;
    if ( !v7 )
      sub_1B71828(0LL, v4);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, Il2CppMethodPointer))v7->klass->vtable._10_ModifyPortrait.method)(
      v7,
      this->fields.mainInfo,
      v7->klass->vtable._11_ModifyServantQuest.methodPtr);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B71570(p_callbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewObject__EventRandomLimitCountSettingStart(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  struct ServantStatusListViewItemDraw_o *v7; // x0
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x19
  struct System_Action_o *v9; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4A1D1C8 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A1D1C8 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v7 = this->fields.itemDraw;
    if ( !v7 )
      sub_1B71828(0LL, v4);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, void *))v7->klass->vtable._13_ModifyRandomLimitCountSetting.method)(
      v7,
      this->fields.mainInfo,
      v7->klass[1]._1.image);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B71570(p_callbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewObject__EventRandomLimitCountSupportStart(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  struct ServantStatusListViewItemDraw_o *v7; // x0
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x19
  struct System_Action_o *v9; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4A1D1C7 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A1D1C7 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v7 = this->fields.itemDraw;
    if ( !v7 )
      sub_1B71828(0LL, v4);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, Il2CppMethodPointer))v7->klass->vtable._12_ModifyRandomLimitCountSupport.method)(
      v7,
      this->fields.mainInfo,
      v7->klass->vtable._13_ModifyRandomLimitCountSetting.methodPtr);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B71570(p_callbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ServantStatusListViewObject__EventStatusStart(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  struct ServantStatusListViewItemDraw_o *v7; // x0
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x19
  struct System_Action_o *v9; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4A1D1C5 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A1D1C5 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v7 = this->fields.itemDraw;
    if ( !v7 )
      sub_1B71828(0LL, v4);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, Il2CppMethodPointer))v7->klass->vtable._9_ModifyStatus.method)(
      v7,
      this->fields.mainInfo,
      v7->klass->vtable._10_ModifyPortrait.methodPtr);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B71570(p_callbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


int32_t __fastcall ServantStatusListViewObject__GetKind(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v4; // x1
  struct ServantStatusListViewItemDraw_o *v5; // x0

  if ( (byte_4A1D1BD & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A1D1BD = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
    return 0;
  v5 = this->fields.itemDraw;
  if ( !v5 )
    sub_1B71828(0LL, v4);
  return ((__int64 (__fastcall *)(struct ServantStatusListViewItemDraw_o *, Il2CppMethodPointer))v5->klass->vtable._4_GetKind.method)(
           v5,
           v5->klass->vtable._5_SetItem.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantStatusListViewObject__GetSize(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *v7; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  float v10; // s1

  if ( (byte_4A1D1BE & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_BoxCollider_TypeInfo, method);
    sub_1B715CC(&Method_UnityEngine_Component_GetComponent_Collider___, v3);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v4);
    byte_4A1D1BE = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E51E8C *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( Component_object
    && (methodPtr_low = LOBYTE(UnityEngine_BoxCollider_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(Component_object->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[methodPtr_low - 1] == UnityEngine_BoxCollider_TypeInfo )
      v7 = (UnityEngine_Object_o *)Component_object;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  if ( !v8 )
    return 0;
  if ( !v7 )
    sub_1B71828(v8, v9);
  *(UnityEngine_Vector3_o *)(&v10 - 1) = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v7, 0LL);
  if ( v10 == INFINITY )
    return 0x80000000;
  else
    return (int)v10;
}


void __fastcall ServantStatusListViewObject__Init(
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
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  int32_t v18; // w3
  int32_t v19; // w9
  ServantStatusBattleListViewItem_c *klass; // x19

  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ServantStatusListViewObject__SetVisible(this, initMode != 0, (const MethodInfo *)callbackFunc);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B71828(transform, v12);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v14, v15);
  switch ( initMode )
  {
    case 0:
    case 1:
    case 2:
      ServantStatusListViewObject__SetInput(this, 0, v17);
      this->fields.dispMode = initMode;
      this->fields.state = 1;
      goto LABEL_5;
    case 3:
      ServantStatusListViewObject__SetInput(this, 1, v17);
      v19 = 3;
      goto LABEL_15;
    case 4:
      ServantStatusListViewObject__EventBattleStart(this, v16);
      return;
    case 5:
      ServantStatusListViewObject__EventCommandStart(this, v16);
      return;
    case 6:
      ServantStatusListViewObject__EventFaceStart(this, v16);
      return;
    case 7:
      ServantStatusListViewObject__EventStatusStart(this, v16);
      return;
    case 8:
      ServantStatusListViewObject__EventPortraitStart(this, v16);
      return;
    case 9:
      v19 = 1;
LABEL_15:
      this->fields.dispMode = 2;
      this->fields.state = v19;
      goto LABEL_16;
    case 10:
      ServantStatusListViewObject__EventRandomLimitCountSupportStart(this, v16);
      return;
    case 11:
      ServantStatusListViewObject__EventRandomLimitCountSettingStart(this, v16);
      return;
    default:
LABEL_5:
      if ( state && dispMode == this->fields.dispMode )
        goto LABEL_17;
LABEL_16:
      ServantStatusListViewObject__SetupDisp(this, v16);
LABEL_17:
      klass = p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0LL;
        sub_1B71570(p_callbackFunc, 0, (int32_t)v17, v18);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewObject__Init_34559724(
        ServantStatusListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_4A1A751 )
  {
    sub_1B715CC(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4A1A751 = 1;
  }
  ServantStatusListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewObject__Init_34562592(
        ServantStatusListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4A1A751 )
  {
    sub_1B715CC(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4A1A751 = 1;
  }
  ServantStatusListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewObject__Init_34562676(
        ServantStatusListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_4A1A751 )
  {
    sub_1B715CC(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4A1A751 = 1;
  }
  ServantStatusListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall ServantStatusListViewObject__OnClick(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, this);
  ServantStatusListViewManager__OnClickListView(manager, this, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickBondLimitUp(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickCombine(manager, 17, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickButton(
        ServantStatusListViewObject_o *this,
        UICommonButton_o *tappedButton,
        ServantStatusListViewItemDrawButton_o *ownerObject,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, tappedButton);
  ServantStatusListViewManager__OnClickButton(manager, tappedButton, ownerObject, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickCommandCharaLevel1(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 0, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickCommandCharaLevel2(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 1, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickCommandCharaLevel3(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 2, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickCommandCharaLevel4(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 3, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickCommandCharaLevel5(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 4, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickCommandCharaLevel6(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 5, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickCommandCharaLevel7(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 6, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickCommandCharaLevel8(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 7, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickCommandCharaLevel9(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 8, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickEquip1(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickListViewEquip1(manager, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickEquipExp(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickListViewEquipExp(manager, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickExp(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickListViewExp(manager, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickFaceCharaLevel1(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 0, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickFaceCharaLevel10(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 9, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickFaceCharaLevel11(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 10, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickFaceCharaLevel12(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 11, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickFaceCharaLevel2(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 1, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickFaceCharaLevel3(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 2, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickFaceCharaLevel4(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 3, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickFaceCharaLevel5(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 4, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickFaceCharaLevel6(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 5, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickFaceCharaLevel7(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 6, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickFaceCharaLevel8(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 7, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickFaceCharaLevel9(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 8, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickFriendship(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickListViewFriendship(manager, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickLevelExceedServant(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickCombine(manager, 22, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickLimitCountUpServant(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickCombine(manager, 16, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickPortraitCharaLevel1(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 0, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickPortraitCharaLevel2(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 1, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickPortraitCharaLevel3(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 2, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickPortraitCharaLevel4(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 3, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickPortraitCharaLevel5(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 4, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickPortraitCharaLevel6(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 5, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickPortraitCharaLevel7(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 6, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickPortraitCharaLevel8(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 7, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickPortraitCharaLevel9(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 8, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickRandomCostume1(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 4, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickRandomCostume2(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 5, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickRandomCostume3(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 6, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickRandomCostume4(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 7, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickRandomCostume5(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 8, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickRandomCostume6(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 9, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickRandomCostume7(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 10, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickRandomCostume8(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 11, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickRandomLimitCount1(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 0, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickRandomLimitCount2(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 1, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickRandomLimitCount3(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 2, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickRandomLimitCount4(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 3, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickRandomLimitCountOtherSettingMask(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickRandomLimitCountMask(manager, 3, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickRandomLimitCountSelectSupportMask(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickRandomLimitCountMask(manager, 2, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickRandomLimitCountSettingMask(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickRandomLimitCountMask(manager, 1, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickReflectOwnSetting(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, -1, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickReinforceAppendSkill(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickCombine(manager, 20, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickReinforceCommandCard(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickCombine(manager, 19, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickReinforceEquip(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickCombine(manager, 14, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickReinforceNp(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickCombine(manager, 21, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickReinforceServant(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickCombine(manager, 13, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickReinforceSkill(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickCombine(manager, 15, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickServantQuest(
        ServantStatusListViewObject_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, questId);
  ServantStatusListViewManager__OnClickServantQuest(manager, questId, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickServantTdSpeedActual(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickServantTdSpeed(manager, 1, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickServantTdSpeedFree(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickServantTdSpeed(manager, 0, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickServantTdSpeedTwice(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickServantTdSpeed(manager, 2, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickSetCodeCommandCard(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickCombine(manager, 18, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickSwitchRandomLimitCountOwnRandomOff(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickSwitchRandomLimitCountOwn(manager, 2, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickSwitchRandomLimitCountOwnRandomOn(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickSwitchRandomLimitCountOwn(manager, 1, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickSwitchRandomLimitCountOwnSettingAll(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickSwitchRandomLimitCountOwn(manager, 0, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickSwitchRandomLimitCountSupportRandomOff(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickSwitchRandomLimitCountSupport(manager, 5, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickSwitchRandomLimitCountSupportRandomOn(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickSwitchRandomLimitCountSupport(manager, 4, 0LL);
}


void __fastcall ServantStatusListViewObject__OnClickSwitchRandomLimitCountSupportSettingAll(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnClickSwitchRandomLimitCountSupport(manager, 3, 0LL);
}


void __fastcall ServantStatusListViewObject__OnDestroy(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusListViewObject__OnLongPushEquip1(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, method);
  ServantStatusListViewManager__OnLongPushListViewEquip1(manager, 0LL);
}


void __fastcall ServantStatusListViewObject__SetBaseTransform(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  struct UnityEngine_Transform_o *parent; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (parent = UnityEngine_Transform__get_parent(transform, 0LL),
        this->fields.baseParent = parent,
        sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.baseParent, (int32_t)parent, v6, v7),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (this->fields.basePosition = UnityEngine_Transform__get_localPosition(transform, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1B71828(transform, v4);
  }
  this->fields.baseScale = UnityEngine_Transform__get_localScale(transform, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewObject__SetInput(
        ServantStatusListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A1D1C0 & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_Component_GetComponent_Collider___, isInput);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v5);
    byte_4A1D1C0 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E51E8C *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v7 )
  {
    if ( !Component_object )
      sub_1B71828(v7, v8);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL);
  }
}


void __fastcall ServantStatusListViewObject__SetItem(
        ServantStatusListViewObject_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v5; // x2

  this->fields.mainInfo = item;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.mainInfo, (int32_t)item, (int32_t)method, v3);
  ServantStatusListViewObject__Init_34559724(this, 2, v5);
}


void __fastcall ServantStatusListViewObject__SetManager(
        ServantStatusListViewObject_o *this,
        ServantStatusListViewManager_o *manager,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct ServantStatusListViewManager_o **p_manager; // x20
  const MethodInfo *v6; // x2

  this->fields.manager = manager;
  p_manager = &this->fields.manager;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.manager, (int32_t)manager, (int32_t)method, v3);
  if ( !*((_DWORD *)p_manager + 12) )
    ServantStatusListViewObject__Init_34559724(this, 2, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewObject__SetTransform(
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
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B71828(0LL, v8);
  v9.fields.x = x;
  v9.fields.y = y;
  v9.fields.z = z;
  UnityEngine_Transform__set_position(transform, v9, 0LL);
  this->fields.basePosition.fields.x = x;
  this->fields.basePosition.fields.y = y;
  this->fields.basePosition.fields.z = z;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewObject__SetVisible(
        ServantStatusListViewObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4A1D1BF & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, isVisible);
    byte_4A1D1BF = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL) )
  {
    v7 = this->fields.dispObject;
    if ( !v7 )
      sub_1B71828(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isVisible, 0LL);
  }
}


void __fastcall ServantStatusListViewObject__SetupDisp(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v5; // x1
  struct ServantStatusListViewItemDraw_o *v6; // x0

  if ( (byte_4A1D1C1 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A1D1C1 = 1;
  }
  ServantStatusListViewObject__SetVisible(this, this->fields.dispMode != 0, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v6 = this->fields.itemDraw;
    if ( !v6 )
      sub_1B71828(0LL, v5);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._5_SetItem.method)(
      v6,
      this->fields.mainInfo,
      (unsigned int)this->fields.dispMode,
      v6->klass->vtable._6_PlayBattle.methodPtr);
  }
}


void __fastcall ServantStatusListViewObject__add_callbackFunc(
        ServantStatusListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4A1D1BA & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, value);
    byte_4A1D1BA = 1;
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
    v9 = sub_1BACABC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B71AE8(v8);
  ServantStatusListViewObject__remove_callbackFunc(v11, v12, v13);
}


int32_t __fastcall ServantStatusListViewObject__get_Index(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  return this->fields.index;
}


bool __fastcall ServantStatusListViewObject__get_IsBusy(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  return this->fields.isBusy;
}


void __fastcall ServantStatusListViewObject__remove_callbackFunc(
        ServantStatusListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4A1D1BB & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, value);
    byte_4A1D1BB = 1;
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
    v9 = sub_1BACABC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B71AE8(v8);
  ServantStatusListViewObject__Awake(v11, v12);
}


void __fastcall ServantStatusListViewObject__touchCommandCard(
        ServantStatusListViewObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1B71828(0LL, index);
  ServantStatusListViewManager__OnClickCommandCode(manager, index - 1, 0LL);
}