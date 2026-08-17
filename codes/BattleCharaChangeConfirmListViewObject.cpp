void BattleCharaChangeConfirmListViewObject___ctor(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleCharaChangeConfirmListViewObject__Awake(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  ;
}


float BattleCharaChangeConfirmListViewObject__GetArrowOffsetY(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v5; // x1
  struct BattleCharaChangeConfirmListViewItemDraw_o *v6; // x0
  float result; // s0

  if ( (byte_596BAFB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BAFB = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
    return 0.0;
  v6 = this->fields.itemDraw;
  if ( !v6 )
    sub_2213CDC(0, v5);
  ((void (__fastcall *)(struct BattleCharaChangeConfirmListViewItemDraw_o *, const MethodInfo *))v6->klass->vtable._8_GetArrowOffsetY.methodPtr)(
    v6,
    v6->klass->vtable._8_GetArrowOffsetY.method);
  return result;
}


int32_t BattleCharaChangeConfirmListViewObject__GetKind(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct BattleCharaChangeConfirmListViewItemDraw_o *v8; // x8

  if ( (byte_596BAF6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BAF6 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Equality(itemDraw, 0, 0);
  if ( v5 )
    return 0;
  v8 = this->fields.itemDraw;
  if ( !v8 )
    sub_2213CDC(v5, v6);
  return v8->fields.drawKind;
}


float BattleCharaChangeConfirmListViewObject__GetObjectLocalPositionY(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v3; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_2213CDC(0, v3);
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  return localPosition.fields.y;
}


float BattleCharaChangeConfirmListViewObject__GetObjectOffsetY(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  float result; // s0
  struct BattleCharaChangeConfirmListViewItemDraw_o *v8; // x9
  struct UISprite_o *nowFrameSprite; // x8
  struct UISprite_o *nextFrameSprite; // x9
  int mHeight; // w8
  int v12; // w9

  if ( (byte_596BAFA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BAFA = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Equality(itemDraw, 0, 0);
  result = 0.0;
  if ( !v5 )
  {
    v8 = this->fields.itemDraw;
    if ( !v8 || (nowFrameSprite = v8->fields.nowFrameSprite) == 0 || (nextFrameSprite = v8->fields.nextFrameSprite) == 0 )
      sub_2213CDC(v5, v6);
    mHeight = nowFrameSprite->fields.mHeight;
    v12 = nextFrameSprite->fields.mHeight;
    if ( mHeight <= v12 )
      return (float)v12;
    return (float)mHeight;
  }
  return result;
}


void BattleCharaChangeConfirmListViewObject__Init(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_596BAF5 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleCharaChangeConfirmListViewItemDraw___);
    byte_596BAF5 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             dispObject,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleCharaChangeConfirmListViewItemDraw___),
        this->fields.itemDraw = (struct BattleCharaChangeConfirmListViewItemDraw_o *)Component_object,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
          (int32_t)Component_object,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10),
        (dispObject = (UnityEngine_GameObject_o *)this->fields.itemDraw) == 0) )
  {
    sub_2213CDC(dispObject, method);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))dispObject->klass[1]._1.image)(
    dispObject,
    (unsigned int)this->fields.drawKind,
    dispObject->klass[1]._1.gc_desc);
  this->fields.state = 0;
}


bool BattleCharaChangeConfirmListViewObject__IsActive(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *dispObject; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_596BAF8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BAF8 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Inequality(dispObject, 0, 0) )
    return 0;
  v6 = this->fields.dispObject;
  if ( !v6 )
    sub_2213CDC(0, v5);
  return UnityEngine_GameObject__get_activeSelf(v6, 0);
}


void BattleCharaChangeConfirmListViewObject__SetItem(
        BattleCharaChangeConfirmListViewObject_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x3

  this->fields.itemInfo = item;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemInfo,
    (int32_t)item,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  BattleCharaChangeConfirmListViewObject__SetMode(this, 2, 0, v9);
}


void BattleCharaChangeConfirmListViewObject__SetMode(
        BattleCharaChangeConfirmListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  unsigned int v4; // w21
  int32_t dispMode; // w23
  int32_t state; // w24
  MissionNaviTransitionBoardItem_o *p_CallbackFunc; // x19
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  MissionNaviTransitionBoardItem_c *klass; // x20

  v4 = initMode;
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  BattleCharaChangeConfirmListViewObject__SetVisible(this, initMode != 0, (const MethodInfo *)callbackFunc);
  this->fields.CallbackFunc = callbackFunc;
  p_CallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.CallbackFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.CallbackFunc,
    (int32_t)callbackFunc,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( v4 < 3 )
  {
    this->fields.dispMode = v4;
    this->fields.state = 1;
LABEL_7:
    if ( state && dispMode == this->fields.dispMode )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( v4 != 3 )
  {
    if ( v4 != 4 )
      goto LABEL_7;
    v4 = 1;
  }
  this->fields.state = v4;
  this->fields.dispMode = 2;
LABEL_9:
  BattleCharaChangeConfirmListViewObject__SetupDisplay(this, v16);
LABEL_10:
  klass = p_CallbackFunc->klass;
  if ( p_CallbackFunc->klass )
  {
    p_CallbackFunc->klass = 0;
    sub_2213A04(p_CallbackFunc, 0, v17, v18, v19, v20, v21, v22);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCharaChangeConfirmListViewObject__SetVisible(
        BattleCharaChangeConfirmListViewObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_596BAF7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BAF7 = 1;
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


void BattleCharaChangeConfirmListViewObject__SetupDisplay(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v7; // x1
  struct BattleCharaChangeConfirmListViewItemDraw_o *v8; // x0
  struct BattleCharaChangeConfirmListViewItemDraw_o *v9; // x20
  const MethodInfo *v10; // x1
  float v11; // s8
  const MethodInfo *v12; // x1
  float v13; // s0

  if ( (byte_596BAF9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BAF9 = 1;
  }
  BattleCharaChangeConfirmListViewObject__SetVisible(this, this->fields.dispMode != 0, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
  {
    v8 = this->fields.itemDraw;
    if ( !v8
      || (((void (__fastcall *)(struct BattleCharaChangeConfirmListViewItemDraw_o *, struct BattleCharaChangeConfirmListViewItem_o *, _QWORD, const MethodInfo *))v8->klass->vtable._5_SetItem.methodPtr)(
            v8,
            this->fields.itemInfo,
            (unsigned int)this->fields.dispMode,
            v8->klass->vtable._5_SetItem.method),
          v9 = this->fields.itemDraw,
          v11 = BattleCharaChangeConfirmListViewObject__GetObjectOffsetY(this, v10),
          v13 = BattleCharaChangeConfirmListViewObject__GetArrowOffsetY(this, v12),
          !v9) )
    {
      sub_2213CDC(v8, v7);
    }
    ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v9->fields.arrowSprite, v13 - ceilf(v11 * 0.5), 0);
  }
}


void BattleCharaChangeConfirmListViewObject__add_CallbackFunc(
        BattleCharaChangeConfirmListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_CallbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *CallbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  BattleCharaChangeConfirmListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596BAF3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596BAF3 = 1;
  }
  CallbackFunc = this->fields.CallbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  v6 = (System_Delegate_o *)CallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_CallbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (BattleCharaChangeConfirmListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  BattleCharaChangeConfirmListViewObject__remove_CallbackFunc(v13, v14, v15);
}


void BattleCharaChangeConfirmListViewObject__remove_CallbackFunc(
        BattleCharaChangeConfirmListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_CallbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *CallbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  BattleCharaChangeConfirmListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596BAF4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596BAF4 = 1;
  }
  CallbackFunc = this->fields.CallbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  v6 = (System_Delegate_o *)CallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_CallbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (BattleCharaChangeConfirmListViewObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  BattleCharaChangeConfirmListViewObject__Awake(v13, v14);
}