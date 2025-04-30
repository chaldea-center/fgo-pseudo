void __fastcall BattleCharaChangeConfirmListViewObject___ctor(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewObject__Awake(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  ;
}


float __fastcall BattleCharaChangeConfirmListViewObject__GetArrowOffsetY(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v4; // x1
  struct BattleCharaChangeConfirmListViewItemDraw_o *v5; // x0
  float result; // s0

  if ( (byte_4A4A173 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4A173 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
    return 0.0;
  v5 = this->fields.itemDraw;
  if ( !v5 )
    sub_1B86614(0LL, v4);
  ((void (__fastcall *)(struct BattleCharaChangeConfirmListViewItemDraw_o *, void *))v5->klass->vtable._8_GetArrowOffsetY.method)(
    v5,
    v5->klass[1]._1.image);
  return result;
}


int32_t __fastcall BattleCharaChangeConfirmListViewObject__GetKind(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattleCharaChangeConfirmListViewItemDraw_o *v7; // x8

  if ( (byte_4A4A16E & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4A16E = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL);
  if ( v4 )
    return 0;
  v7 = this->fields.itemDraw;
  if ( !v7 )
    sub_1B86614(v4, v5);
  return v7->fields.drawKind;
}


float __fastcall BattleCharaChangeConfirmListViewObject__GetObjectLocalPositionY(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v3; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B86614(0LL, v3);
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  return localPosition.fields.y;
}


float __fastcall BattleCharaChangeConfirmListViewObject__GetObjectOffsetY(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  float result; // s0
  struct BattleCharaChangeConfirmListViewItemDraw_o *v7; // x8
  struct UISprite_o *nowFrameSprite; // x9
  struct UISprite_o *nextFrameSprite; // x8
  int mHeight; // w9
  int v11; // w8

  if ( (byte_4A4A172 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4A172 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL);
  result = 0.0;
  if ( !v4 )
  {
    v7 = this->fields.itemDraw;
    if ( !v7
      || (nowFrameSprite = v7->fields.nowFrameSprite) == 0LL
      || (nextFrameSprite = v7->fields.nextFrameSprite) == 0LL )
    {
      sub_1B86614(v4, v5);
    }
    mHeight = nowFrameSprite->fields.mHeight;
    v11 = nextFrameSprite->fields.mHeight;
    if ( mHeight > v11 )
      return (float)mHeight;
    return (float)v11;
  }
  return result;
}


void __fastcall BattleCharaChangeConfirmListViewObject__Init(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4A4A16D & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BattleCharaChangeConfirmListViewItemDraw___, method);
    byte_4A4A16D = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             dispObject,
                             (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleCharaChangeConfirmListViewItemDraw___),
        this->fields.itemDraw = (struct BattleCharaChangeConfirmListViewItemDraw_o *)Component_object,
        sub_1B8635C((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6),
        (dispObject = (UnityEngine_GameObject_o *)this->fields.itemDraw) == 0LL) )
  {
    sub_1B86614(dispObject, method);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, const char *))dispObject->klass[1]._1.gc_desc)(
    dispObject,
    (unsigned int)this->fields.drawKind,
    dispObject->klass[1]._1.name);
  this->fields.state = 0;
}


bool __fastcall BattleCharaChangeConfirmListViewObject__IsActive(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4A4A170 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4A170 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL) )
    return 0;
  v5 = this->fields.dispObject;
  if ( !v5 )
    sub_1B86614(0LL, v4);
  return UnityEngine_GameObject__get_activeSelf(v5, 0LL);
}


void __fastcall BattleCharaChangeConfirmListViewObject__SetItem(
        BattleCharaChangeConfirmListViewObject_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x3

  this->fields.itemInfo = item;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.itemInfo, (int32_t)item, (int32_t)method, v3);
  BattleCharaChangeConfirmListViewObject__SetMode(this, 2, 0LL, v5);
}


void __fastcall BattleCharaChangeConfirmListViewObject__SetMode(
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.CallbackFunc, (int32_t)callbackFunc, v10, v11);
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
    p_CallbackFunc->klass = 0LL;
    sub_1B8635C(p_CallbackFunc, 0, v13, v14);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))klass->_1.namespaze)(
      klass->_1.element_class,
      *(_QWORD *)&klass->_1.byval_arg.bits);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCharaChangeConfirmListViewObject__SetVisible(
        BattleCharaChangeConfirmListViewObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4A4A16F & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, isVisible);
    byte_4A4A16F = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL) )
  {
    v7 = this->fields.dispObject;
    if ( !v7 )
      sub_1B86614(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isVisible, 0LL);
  }
}


void __fastcall BattleCharaChangeConfirmListViewObject__SetupDisplay(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v5; // x1
  struct BattleCharaChangeConfirmListViewItemDraw_o *v6; // x0
  struct BattleCharaChangeConfirmListViewItemDraw_o *v7; // x20
  const MethodInfo *v8; // x1
  float v9; // s8
  const MethodInfo *v10; // x1
  float v11; // s0

  if ( (byte_4A4A171 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4A171 = 1;
  }
  BattleCharaChangeConfirmListViewObject__SetVisible(this, this->fields.dispMode != 0, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) )
  {
    v6 = this->fields.itemDraw;
    if ( !v6
      || (((void (__fastcall *)(struct BattleCharaChangeConfirmListViewItemDraw_o *, struct BattleCharaChangeConfirmListViewItem_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._5_SetItem.method)(
            v6,
            this->fields.itemInfo,
            (unsigned int)this->fields.dispMode,
            v6->klass->vtable._6_ReSize.methodPtr),
          v7 = this->fields.itemDraw,
          v9 = BattleCharaChangeConfirmListViewObject__GetObjectOffsetY(this, v8),
          v11 = BattleCharaChangeConfirmListViewObject__GetArrowOffsetY(this, v10),
          !v7) )
    {
      sub_1B86614(v6, v5);
    }
    ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v7->fields.arrowSprite, v11 - ceilf(v9 * 0.5), 0LL);
  }
}


void __fastcall BattleCharaChangeConfirmListViewObject__add_CallbackFunc(
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

  if ( (byte_4A4A16B & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, value);
    byte_4A4A16B = 1;
  }
  CallbackFunc = this->fields.CallbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  v6 = (System_Delegate_o *)CallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1BC0674(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BattleCharaChangeConfirmListViewObject_o *)sub_1B868D4(v8);
  BattleCharaChangeConfirmListViewObject__remove_CallbackFunc(v11, v12, v13);
}


void __fastcall BattleCharaChangeConfirmListViewObject__remove_CallbackFunc(
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

  if ( (byte_4A4A16C & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, value);
    byte_4A4A16C = 1;
  }
  CallbackFunc = this->fields.CallbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  v6 = (System_Delegate_o *)CallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1BC0674(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BattleCharaChangeConfirmListViewObject_o *)sub_1B868D4(v8);
  BattleCharaChangeConfirmListViewObject__Awake(v11, v12);
}