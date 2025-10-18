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
  UnityEngine_Object_o *itemDraw; // x20
  struct BattleCharaChangeConfirmListViewItemDraw_o *v4; // x0
  float result; // s0

  if ( (byte_4C3E27B & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E27B = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
    return 0.0;
  v4 = this->fields.itemDraw;
  if ( !v4 )
    sub_1C372B4(0);
  ((void (__fastcall *)(struct BattleCharaChangeConfirmListViewItemDraw_o *, const MethodInfo *))v4->klass->vtable._8_GetArrowOffsetY.methodPtr)(
    v4,
    v4->klass->vtable._8_GetArrowOffsetY.method);
  return result;
}


int32_t BattleCharaChangeConfirmListViewObject__GetKind(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v4; // x0
  struct BattleCharaChangeConfirmListViewItemDraw_o *v6; // x8

  if ( (byte_4C3E276 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E276 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(itemDraw, 0, 0);
  if ( v4 )
    return 0;
  v6 = this->fields.itemDraw;
  if ( !v6 )
    sub_1C372B4(v4);
  return v6->fields.drawKind;
}


float BattleCharaChangeConfirmListViewObject__GetObjectLocalPositionY(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C372B4(0);
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  return localPosition.fields.y;
}


float BattleCharaChangeConfirmListViewObject__GetObjectOffsetY(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v4; // x0
  float result; // s0
  struct BattleCharaChangeConfirmListViewItemDraw_o *v6; // x8
  struct UISprite_o *nowFrameSprite; // x9
  struct UISprite_o *nextFrameSprite; // x8
  int mHeight; // w9
  int v10; // w8

  if ( (byte_4C3E27A & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E27A = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(itemDraw, 0, 0);
  result = 0.0;
  if ( !v4 )
  {
    v6 = this->fields.itemDraw;
    if ( !v6 || (nowFrameSprite = v6->fields.nowFrameSprite) == 0 || (nextFrameSprite = v6->fields.nextFrameSprite) == 0 )
      sub_1C372B4(v4);
    mHeight = nowFrameSprite->fields.mHeight;
    v10 = nextFrameSprite->fields.mHeight;
    if ( mHeight > v10 )
      return (float)mHeight;
    return (float)v10;
  }
  return result;
}


void BattleCharaChangeConfirmListViewObject__Init(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3E275 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BattleCharaChangeConfirmListViewItemDraw___);
    byte_4C3E275 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             dispObject,
                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BattleCharaChangeConfirmListViewItemDraw___),
        this->fields.itemDraw = (struct BattleCharaChangeConfirmListViewItemDraw_o *)Component_object,
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6),
        (dispObject = (UnityEngine_GameObject_o *)this->fields.itemDraw) == 0) )
  {
    sub_1C372B4(dispObject);
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
  UnityEngine_Object_o *dispObject; // x20
  UnityEngine_GameObject_o *v4; // x0

  if ( (byte_4C3E278 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E278 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(dispObject, 0, 0) )
    return 0;
  v4 = this->fields.dispObject;
  if ( !v4 )
    sub_1C372B4(0);
  return UnityEngine_GameObject__get_activeSelf(v4, 0);
}


void BattleCharaChangeConfirmListViewObject__SetItem(
        BattleCharaChangeConfirmListViewObject_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x3

  this->fields.itemInfo = item;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.itemInfo, (int32_t)item, (int32_t)method, v3);
  BattleCharaChangeConfirmListViewObject__SetMode(this, 2, 0, v5);
}


void BattleCharaChangeConfirmListViewObject__SetMode(
        BattleCharaChangeConfirmListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int32_t dispMode; // w23
  int32_t state; // w24
  CGThumbnailListItem_o *p_CallbackFunc; // x19
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w9
  CGThumbnailListItem_c *klass; // x20

  dispMode = this->fields.dispMode;
  state = this->fields.state;
  BattleCharaChangeConfirmListViewObject__SetVisible(this, initMode != 0, (const MethodInfo *)callbackFunc);
  this->fields.CallbackFunc = callbackFunc;
  p_CallbackFunc = (CGThumbnailListItem_o *)&this->fields.CallbackFunc;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.CallbackFunc, (int32_t)callbackFunc, v10, v11);
  if ( (unsigned int)initMode < 3 )
  {
    this->fields.dispMode = initMode;
    this->fields.state = 1;
LABEL_6:
    if ( state && dispMode == this->fields.dispMode )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( initMode == 4 )
  {
    v15 = 1;
  }
  else
  {
    if ( initMode != 3 )
      goto LABEL_6;
    v15 = 3;
  }
  this->fields.dispMode = 2;
  this->fields.state = v15;
LABEL_11:
  BattleCharaChangeConfirmListViewObject__SetupDisplay(this, v12);
LABEL_12:
  klass = p_CallbackFunc->klass;
  if ( p_CallbackFunc->klass )
  {
    p_CallbackFunc->klass = 0;
    sub_1C36FFC(p_CallbackFunc, 0, v13, v14);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


void BattleCharaChangeConfirmListViewObject__SetVisible(
        BattleCharaChangeConfirmListViewObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4C3E277 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E277 = 1;
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


void BattleCharaChangeConfirmListViewObject__SetupDisplay(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  struct BattleCharaChangeConfirmListViewItemDraw_o *v5; // x0
  struct BattleCharaChangeConfirmListViewItemDraw_o *v6; // x20
  const MethodInfo *v7; // x1
  float v8; // s8
  const MethodInfo *v9; // x1
  float v10; // s0

  if ( (byte_4C3E279 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E279 = 1;
  }
  BattleCharaChangeConfirmListViewObject__SetVisible(this, this->fields.dispMode != 0, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
  {
    v5 = this->fields.itemDraw;
    if ( !v5
      || (((void (__fastcall *)(struct BattleCharaChangeConfirmListViewItemDraw_o *, struct BattleCharaChangeConfirmListViewItem_o *, _QWORD, const MethodInfo *))v5->klass->vtable._5_SetItem.methodPtr)(
            v5,
            this->fields.itemInfo,
            (unsigned int)this->fields.dispMode,
            v5->klass->vtable._5_SetItem.method),
          v6 = this->fields.itemDraw,
          v8 = BattleCharaChangeConfirmListViewObject__GetObjectOffsetY(this, v7),
          v10 = BattleCharaChangeConfirmListViewObject__GetArrowOffsetY(this, v9),
          !v6) )
    {
      sub_1C372B4(v5);
    }
    ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v6->fields.arrowSprite, v10 - ceilf(v8 * 0.5), 0);
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
  __int64 v9; // x0
  bool v10; // zf
  BattleCharaChangeConfirmListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C3E273 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C3E273 = 1;
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
    v9 = sub_1C712B0(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BattleCharaChangeConfirmListViewObject_o *)sub_1C37574(v8);
  BattleCharaChangeConfirmListViewObject__remove_CallbackFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  BattleCharaChangeConfirmListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C3E274 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C3E274 = 1;
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
    v9 = sub_1C712B0(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BattleCharaChangeConfirmListViewObject_o *)sub_1C37574(v8);
  BattleCharaChangeConfirmListViewObject__Awake(v11, v12);
}