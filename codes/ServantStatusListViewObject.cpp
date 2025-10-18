void ServantStatusListViewObject___ctor(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewObject__Awake(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  if ( (byte_4C40657 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewItemDraw___);
    byte_4C40657 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C372B4(0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusListViewItemDraw___);
  this->fields.itemDraw = (struct ServantStatusListViewItemDraw_o *)Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6);
  ServantStatusListViewObject__SetBaseTransform(this, v7);
}


void ServantStatusListViewObject__EventBattleStart(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct ServantStatusListViewItemDraw_o *v6; // x0
  CGThumbnailListItem_o *p_callbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4C4065D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4065D = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v6 = this->fields.itemDraw;
    if ( !v6 )
      sub_1C372B4(0);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, const MethodInfo *))v6->klass->vtable._6_PlayBattle.methodPtr)(
      v6,
      this->fields.mainInfo,
      v6->klass->vtable._6_PlayBattle.method);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v8 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C36FFC(p_callbackFunc, 0, v4, v5);
    ((void (__fastcall *)(intptr_t, intptr_t))v8->fields.invoke_impl)(v8->fields.method_code, v8->fields.method);
  }
}


void ServantStatusListViewObject__EventCommandStart(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct ServantStatusListViewItemDraw_o *v6; // x0
  CGThumbnailListItem_o *p_callbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4C4065E & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4065E = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v6 = this->fields.itemDraw;
    if ( !v6 )
      sub_1C372B4(0);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, const MethodInfo *))v6->klass->vtable._7_ModifyCommandCard.methodPtr)(
      v6,
      this->fields.mainInfo,
      v6->klass->vtable._7_ModifyCommandCard.method);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v8 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C36FFC(p_callbackFunc, 0, v4, v5);
    ((void (__fastcall *)(intptr_t, intptr_t))v8->fields.invoke_impl)(v8->fields.method_code, v8->fields.method);
  }
}


void ServantStatusListViewObject__EventFaceStart(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct ServantStatusListViewItemDraw_o *v6; // x0
  CGThumbnailListItem_o *p_callbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4C4065F & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4065F = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v6 = this->fields.itemDraw;
    if ( !v6 )
      sub_1C372B4(0);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, const MethodInfo *))v6->klass->vtable._8_ModifyFace.methodPtr)(
      v6,
      this->fields.mainInfo,
      v6->klass->vtable._8_ModifyFace.method);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v8 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C36FFC(p_callbackFunc, 0, v4, v5);
    ((void (__fastcall *)(intptr_t, intptr_t))v8->fields.invoke_impl)(v8->fields.method_code, v8->fields.method);
  }
}


void ServantStatusListViewObject__EventMoveEnd(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  LOBYTE(p_callbackFunc[-1].fields._Type_k__BackingField) = 0;
  LODWORD(p_callbackFunc[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C36FFC(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


void ServantStatusListViewObject__EventPortraitStart(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct ServantStatusListViewItemDraw_o *v6; // x0
  CGThumbnailListItem_o *p_callbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4C40661 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40661 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v6 = this->fields.itemDraw;
    if ( !v6 )
      sub_1C372B4(0);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, const MethodInfo *))v6->klass->vtable._10_ModifyPortrait.methodPtr)(
      v6,
      this->fields.mainInfo,
      v6->klass->vtable._10_ModifyPortrait.method);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v8 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C36FFC(p_callbackFunc, 0, v4, v5);
    ((void (__fastcall *)(intptr_t, intptr_t))v8->fields.invoke_impl)(v8->fields.method_code, v8->fields.method);
  }
}


void ServantStatusListViewObject__EventRandomLimitCountSettingStart(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct ServantStatusListViewItemDraw_o *v6; // x0
  CGThumbnailListItem_o *p_callbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4C40663 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40663 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v6 = this->fields.itemDraw;
    if ( !v6 )
      sub_1C372B4(0);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, const MethodInfo *))v6->klass->vtable._13_ModifyRandomLimitCountSetting.methodPtr)(
      v6,
      this->fields.mainInfo,
      v6->klass->vtable._13_ModifyRandomLimitCountSetting.method);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v8 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C36FFC(p_callbackFunc, 0, v4, v5);
    ((void (__fastcall *)(intptr_t, intptr_t))v8->fields.invoke_impl)(v8->fields.method_code, v8->fields.method);
  }
}


void ServantStatusListViewObject__EventRandomLimitCountSupportStart(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct ServantStatusListViewItemDraw_o *v6; // x0
  CGThumbnailListItem_o *p_callbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4C40662 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40662 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v6 = this->fields.itemDraw;
    if ( !v6 )
      sub_1C372B4(0);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, const MethodInfo *))v6->klass->vtable._12_ModifyRandomLimitCountSupport.methodPtr)(
      v6,
      this->fields.mainInfo,
      v6->klass->vtable._12_ModifyRandomLimitCountSupport.method);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v8 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C36FFC(p_callbackFunc, 0, v4, v5);
    ((void (__fastcall *)(intptr_t, intptr_t))v8->fields.invoke_impl)(v8->fields.method_code, v8->fields.method);
  }
}


void ServantStatusListViewObject__EventStatusStart(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct ServantStatusListViewItemDraw_o *v6; // x0
  CGThumbnailListItem_o *p_callbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4C40660 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40660 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v6 = this->fields.itemDraw;
    if ( !v6 )
      sub_1C372B4(0);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, const MethodInfo *))v6->klass->vtable._9_ModifyStatus.methodPtr)(
      v6,
      this->fields.mainInfo,
      v6->klass->vtable._9_ModifyStatus.method);
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v8 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C36FFC(p_callbackFunc, 0, v4, v5);
    ((void (__fastcall *)(intptr_t, intptr_t))v8->fields.invoke_impl)(v8->fields.method_code, v8->fields.method);
  }
}


int32_t ServantStatusListViewObject__GetKind(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  struct ServantStatusListViewItemDraw_o *v4; // x0

  if ( (byte_4C40658 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40658 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
    return 0;
  v4 = this->fields.itemDraw;
  if ( !v4 )
    sub_1C372B4(0);
  return ((__int64 (__fastcall *)(struct ServantStatusListViewItemDraw_o *, const MethodInfo *))v4->klass->vtable._4_GetKind.methodPtr)(
           v4,
           v4->klass->vtable._4_GetKind.method);
}


int32_t ServantStatusListViewObject__GetSize(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *v5; // x19
  _BOOL8 v6; // x0
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C40659 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_BoxCollider_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C40659 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( Component_object
    && (naturalAligment = UnityEngine_BoxCollider_TypeInfo->_2.naturalAligment,
        Component_object->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (UnityEngine_BoxCollider_c *)Component_object->klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_BoxCollider_TypeInfo )
      v5 = (UnityEngine_Object_o *)Component_object;
    else
      v5 = 0;
  }
  else
  {
    v5 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(v5, 0, 0);
  if ( !v6 )
    return 0;
  if ( !v5 )
    sub_1C372B4(v6);
  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v5, 0);
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
  CGThumbnailListItem_o *p_callbackFunc; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x3
  int32_t v18; // w9
  CGThumbnailListItem_c *klass; // x19

  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ServantStatusListViewObject__SetVisible(this, initMode != 0, (const MethodInfo *)callbackFunc);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C372B4(transform);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v13, v14);
  switch ( initMode )
  {
    case 0:
    case 1:
    case 2:
      ServantStatusListViewObject__SetInput(this, 0, v16);
      this->fields.dispMode = initMode;
      this->fields.state = 1;
      goto LABEL_5;
    case 3:
      ServantStatusListViewObject__SetInput(this, 1, v16);
      v18 = 3;
      goto LABEL_15;
    case 4:
      ServantStatusListViewObject__EventBattleStart(this, v15);
      return;
    case 5:
      ServantStatusListViewObject__EventCommandStart(this, v15);
      return;
    case 6:
      ServantStatusListViewObject__EventFaceStart(this, v15);
      return;
    case 7:
      ServantStatusListViewObject__EventStatusStart(this, v15);
      return;
    case 8:
      ServantStatusListViewObject__EventPortraitStart(this, v15);
      return;
    case 9:
      v18 = 1;
LABEL_15:
      this->fields.dispMode = 2;
      this->fields.state = v18;
      goto LABEL_16;
    case 10:
      ServantStatusListViewObject__EventRandomLimitCountSupportStart(this, v15);
      return;
    case 11:
      ServantStatusListViewObject__EventRandomLimitCountSettingStart(this, v15);
      return;
    default:
LABEL_5:
      if ( state && dispMode == this->fields.dispMode )
        goto LABEL_17;
LABEL_16:
      ServantStatusListViewObject__SetupDisp(this, v15);
LABEL_17:
      klass = p_callbackFunc->klass;
      if ( p_callbackFunc->klass )
      {
        p_callbackFunc->klass = 0;
        sub_1C36FFC(p_callbackFunc, 0, (int32_t)v16, v17);
        ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
          klass->_1.element_class,
          *(_QWORD *)&klass->_1.byval_arg.bits);
      }
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewObject__Init_37503740(
        ServantStatusListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  ServantStatusListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewObject__Init_37505664(
        ServantStatusListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  ServantStatusListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewObject__Init_37505748(
        ServantStatusListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  ServantStatusListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void ServantStatusListViewObject__OnClick(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickListView(manager, this, v2);
}


void ServantStatusListViewObject__OnClickBondLimitUp(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
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
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickButton(manager, tappedButton, ownerObject, method);
}


void ServantStatusListViewObject__OnClickCommandCharaLevel1(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 0, v2);
}


void ServantStatusListViewObject__OnClickCommandCharaLevel2(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 1, v2);
}


void ServantStatusListViewObject__OnClickCommandCharaLevel3(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 2, v2);
}


void ServantStatusListViewObject__OnClickCommandCharaLevel4(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 3, v2);
}


void ServantStatusListViewObject__OnClickCommandCharaLevel5(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 4, v2);
}


void ServantStatusListViewObject__OnClickCommandCharaLevel6(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 5, v2);
}


void ServantStatusListViewObject__OnClickCommandCharaLevel7(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 6, v2);
}


void ServantStatusListViewObject__OnClickCommandCharaLevel8(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 7, v2);
}


void ServantStatusListViewObject__OnClickCommandCharaLevel9(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickCommandCharaLevel(manager, 8, v2);
}


void ServantStatusListViewObject__OnClickEquip1(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickListViewEquip1(manager, method);
}


void ServantStatusListViewObject__OnClickEquip2(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickListViewEquip(manager, 1, v2);
}


void ServantStatusListViewObject__OnClickEquip3(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickListViewEquip(manager, 2, v2);
}


void ServantStatusListViewObject__OnClickEquipExp(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickListViewEquipExp(manager, method);
}


void ServantStatusListViewObject__OnClickEquipExp2(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickListViewEquipExp_37506928(manager, 1, v2);
}


void ServantStatusListViewObject__OnClickEquipExp3(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickListViewEquipExp_37506928(manager, 2, v2);
}


void ServantStatusListViewObject__OnClickExchangeAppendSkill(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickCombine(manager, 21, 0, v2);
}


void ServantStatusListViewObject__OnClickExp(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickListViewExp(manager, method);
}


void ServantStatusListViewObject__OnClickFaceCharaLevel1(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 0, v2);
}


void ServantStatusListViewObject__OnClickFaceCharaLevel10(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 9, v2);
}


void ServantStatusListViewObject__OnClickFaceCharaLevel11(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 10, v2);
}


void ServantStatusListViewObject__OnClickFaceCharaLevel12(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 11, v2);
}


void ServantStatusListViewObject__OnClickFaceCharaLevel2(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 1, v2);
}


void ServantStatusListViewObject__OnClickFaceCharaLevel3(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 2, v2);
}


void ServantStatusListViewObject__OnClickFaceCharaLevel4(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 3, v2);
}


void ServantStatusListViewObject__OnClickFaceCharaLevel5(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 4, v2);
}


void ServantStatusListViewObject__OnClickFaceCharaLevel6(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 5, v2);
}


void ServantStatusListViewObject__OnClickFaceCharaLevel7(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 6, v2);
}


void ServantStatusListViewObject__OnClickFaceCharaLevel8(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 7, v2);
}


void ServantStatusListViewObject__OnClickFaceCharaLevel9(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickFaceCharaLevel(manager, 8, v2);
}


void ServantStatusListViewObject__OnClickFriendship(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
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
    sub_1C372B4(0);
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
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickCombine(manager, 16, 0, v2);
}


void ServantStatusListViewObject__OnClickPortraitCharaLevel1(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 0, v2);
}


void ServantStatusListViewObject__OnClickPortraitCharaLevel2(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 1, v2);
}


void ServantStatusListViewObject__OnClickPortraitCharaLevel3(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 2, v2);
}


void ServantStatusListViewObject__OnClickPortraitCharaLevel4(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 3, v2);
}


void ServantStatusListViewObject__OnClickPortraitCharaLevel5(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 4, v2);
}


void ServantStatusListViewObject__OnClickPortraitCharaLevel6(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 5, v2);
}


void ServantStatusListViewObject__OnClickPortraitCharaLevel7(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 6, v2);
}


void ServantStatusListViewObject__OnClickPortraitCharaLevel8(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 7, v2);
}


void ServantStatusListViewObject__OnClickPortraitCharaLevel9(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickPortraitCharaLevel(manager, 8, v2);
}


void ServantStatusListViewObject__OnClickRandomCostume1(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 4, v2);
}


void ServantStatusListViewObject__OnClickRandomCostume2(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 5, v2);
}


void ServantStatusListViewObject__OnClickRandomCostume3(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 6, v2);
}


void ServantStatusListViewObject__OnClickRandomCostume4(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 7, v2);
}


void ServantStatusListViewObject__OnClickRandomCostume5(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 8, v2);
}


void ServantStatusListViewObject__OnClickRandomCostume6(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 9, v2);
}


void ServantStatusListViewObject__OnClickRandomCostume7(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 10, v2);
}


void ServantStatusListViewObject__OnClickRandomCostume8(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 11, v2);
}


void ServantStatusListViewObject__OnClickRandomLimitCount1(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 0, v2);
}


void ServantStatusListViewObject__OnClickRandomLimitCount2(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 1, v2);
}


void ServantStatusListViewObject__OnClickRandomLimitCount3(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 2, v2);
}


void ServantStatusListViewObject__OnClickRandomLimitCount4(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickRandomLimitCountSupport(manager, 3, v2);
}


void ServantStatusListViewObject__OnClickRandomLimitCountOtherSettingMask(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
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
    sub_1C372B4(0);
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
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickRandomLimitCountMask(manager, 1, v2);
}


void ServantStatusListViewObject__OnClickReflectOwnSetting(
        ServantStatusListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
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
    sub_1C372B4(0);
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
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickCombine(manager, 19, 0, v2);
}


void ServantStatusListViewObject__OnClickReinforceEquip(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickCombine(manager, 14, 0, v2);
}


void ServantStatusListViewObject__OnClickReinforceEquip2(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickCombine(manager, 14, 1, v2);
}


void ServantStatusListViewObject__OnClickReinforceEquip3(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickCombine(manager, 14, 2, v2);
}


void ServantStatusListViewObject__OnClickReinforceNp(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
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
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickCombine(manager, 13, 0, v2);
}


void ServantStatusListViewObject__OnClickReinforceSkill(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickCombine(manager, 15, 0, v2);
}


void ServantStatusListViewObject__OnClickServantQuest(
        ServantStatusListViewObject_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
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
    sub_1C372B4(0);
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
    sub_1C372B4(0);
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
    sub_1C372B4(0);
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
    sub_1C372B4(0);
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
    sub_1C372B4(0);
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
    sub_1C372B4(0);
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
    sub_1C372B4(0);
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
    sub_1C372B4(0);
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
    sub_1C372B4(0);
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
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickSwitchRandomLimitCountSupport(manager, 3, v2);
}


void ServantStatusListViewObject__OnClickUnSealedQuestTransition(
        ServantStatusListViewObject_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
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
    sub_1C372B4(0);
  ServantStatusListViewManager__OnLongPushListViewEquip1(manager, method);
}


void ServantStatusListViewObject__OnLongPushEquip2(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnLongPushListViewEquip(manager, 1, v2);
}


void ServantStatusListViewObject__OnLongPushEquip3(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnLongPushListViewEquip(manager, 2, v2);
}


void ServantStatusListViewObject__SetBaseTransform(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_Transform_o *parent; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (parent = UnityEngine_Transform__get_parent(transform, 0),
        this->fields.baseParent = parent,
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.baseParent, (int32_t)parent, v5, v6),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0)
    || (this->fields.basePosition = UnityEngine_Transform__get_localPosition(transform, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C372B4(transform);
  }
  this->fields.baseScale = UnityEngine_Transform__get_localScale(transform, 0);
}


void ServantStatusListViewObject__SetInput(ServantStatusListViewObject_o *this, bool isInput, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  _BOOL8 v6; // x0

  if ( (byte_4C4065B & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4065B = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v6 )
  {
    if ( !Component_object )
      sub_1C372B4(v6);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0);
  }
}


void ServantStatusListViewObject__SetItem(
        ServantStatusListViewObject_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x2

  this->fields.mainInfo = item;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mainInfo, (int32_t)item, (int32_t)method, v3);
  ServantStatusListViewObject__Init_37503740(this, 2, v5);
}


void ServantStatusListViewObject__SetManager(
        ServantStatusListViewObject_o *this,
        ServantStatusListViewManager_o *manager,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ServantStatusListViewManager_o **p_manager; // x20
  const MethodInfo *v6; // x2

  this->fields.manager = manager;
  p_manager = &this->fields.manager;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.manager, (int32_t)manager, (int32_t)method, v3);
  if ( !*((_DWORD *)p_manager + 12) )
    ServantStatusListViewObject__Init_37503740(this, 2, v6);
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
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  z = position.fields.z;
  y = position.fields.y;
  x = position.fields.x;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C372B4(0);
  v8.fields.x = x;
  v8.fields.y = y;
  v8.fields.z = z;
  UnityEngine_Transform__set_position(transform, v8, 0);
  this->fields.basePosition.fields.x = x;
  this->fields.basePosition.fields.y = y;
  this->fields.basePosition.fields.z = z;
}


void ServantStatusListViewObject__SetVisible(
        ServantStatusListViewObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4C4065A & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4065A = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0, 0) )
  {
    v6 = this->fields.dispObject;
    if ( !v6 )
      sub_1C372B4(0);
    UnityEngine_GameObject__SetActive(v6, isVisible, 0);
  }
}


void ServantStatusListViewObject__SetupDisp(ServantStatusListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  struct ServantStatusListViewItemDraw_o *v5; // x0

  if ( (byte_4C4065C & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4065C = 1;
  }
  ServantStatusListViewObject__SetVisible(this, this->fields.dispMode != 0, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v5 = this->fields.itemDraw;
    if ( !v5 )
      sub_1C372B4(0);
    ((void (__fastcall *)(struct ServantStatusListViewItemDraw_o *, struct ServantStatusListViewItem_o *, _QWORD, const MethodInfo *))v5->klass->vtable._5_SetItem.methodPtr)(
      v5,
      this->fields.mainInfo,
      (unsigned int)this->fields.dispMode,
      v5->klass->vtable._5_SetItem.method);
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
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C40655 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C40655 = 1;
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
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C37574(v8);
  ServantStatusListViewObject__remove_callbackFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C40656 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C40656 = 1;
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
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C37574(v8);
  ServantStatusListViewObject__Awake(v11, v12);
}


void ServantStatusListViewObject__touchCommandCard(
        ServantStatusListViewObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusListViewManager_o *manager; // x0

  manager = this->fields.manager;
  if ( !manager )
    sub_1C372B4(0);
  ServantStatusListViewManager__OnClickCommandCode(manager, index - 1, method);
}