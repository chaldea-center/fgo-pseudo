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
  __int64 v4; // x1
  struct BattleCharaChangeConfirmListViewItemDraw_o *v5; // x0
  float result; // s0

  if ( (byte_4CEA7AC & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA7AC = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
    return 0.0;
  v5 = this->fields.itemDraw;
  if ( !v5 )
    sub_1C7BD40(0, v4);
  ((void (__fastcall *)(struct BattleCharaChangeConfirmListViewItemDraw_o *, const MethodInfo *))v5->klass->vtable._8_GetArrowOffsetY.methodPtr)(
    v5,
    v5->klass->vtable._8_GetArrowOffsetY.method);
  return result;
}


int32_t BattleCharaChangeConfirmListViewObject__GetKind(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattleCharaChangeConfirmListViewItemDraw_o *v7; // x8

  if ( (byte_4CEA7A7 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA7A7 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(itemDraw, 0, 0);
  if ( v4 )
    return 0;
  v7 = this->fields.itemDraw;
  if ( !v7 )
    sub_1C7BD40(v4, v5);
  return v7->fields.drawKind;
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
    sub_1C7BD40(0, v3);
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
  return localPosition.fields.y;
}


float BattleCharaChangeConfirmListViewObject__GetObjectOffsetY(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  bool v4; // w0
  __int64 v5; // x1
  float result; // s0
  BattleCharaChangeConfirmListViewItemDraw_o *v7; // x0
  BattleCharaChangeConfirmListViewItemDraw_o *v8; // x8
  int32_t v9; // w19
  int32_t v10; // w0

  if ( (byte_4CEA7AB & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA7AB = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(itemDraw, 0, 0);
  result = 0.0;
  if ( !v4 )
  {
    v7 = this->fields.itemDraw;
    if ( !v7
      || (v7 = (BattleCharaChangeConfirmListViewItemDraw_o *)BattleCharaChangeConfirmListViewItemDraw__GetNowFrameHeight(
                                                               v7,
                                                               0),
          (v8 = this->fields.itemDraw) == 0) )
    {
      sub_1C7BD40(v7, v5);
    }
    v9 = (int)v7;
    v10 = BattleCharaChangeConfirmListViewItemDraw__GetNextFrameHeight(v8, 0);
    if ( v9 <= v10 )
      return (float)v10;
    else
      return (float)v9;
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CEA7A6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BattleCharaChangeConfirmListViewItemDraw___);
    byte_4CEA7A6 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             dispObject,
                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BattleCharaChangeConfirmListViewItemDraw___),
        this->fields.itemDraw = (struct BattleCharaChangeConfirmListViewItemDraw_o *)Component_object,
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&this->fields.itemDraw,
          (int32_t)Component_object,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10),
        (dispObject = (UnityEngine_GameObject_o *)this->fields.itemDraw) == 0) )
  {
    sub_1C7BD40(dispObject, method);
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
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4CEA7A9 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA7A9 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(dispObject, 0, 0) )
    return 0;
  v5 = this->fields.dispObject;
  if ( !v5 )
    sub_1C7BD40(0, v4);
  return UnityEngine_GameObject__get_activeSelf(v5, 0);
}


void BattleCharaChangeConfirmListViewObject__SetItem(
        BattleCharaChangeConfirmListViewObject_o *this,
        BattleCharaChangeConfirmListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v9; // x3

  this->fields.itemInfo = item;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.itemInfo, (int32_t)item, (int32_t)method, v3, v4, v5, v6, v7);
  BattleCharaChangeConfirmListViewObject__SetMode(this, 2, 0, v9);
}


void BattleCharaChangeConfirmListViewObject__SetMode(
        BattleCharaChangeConfirmListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int32_t dispMode; // w23
  int32_t state; // w24
  GrandQuestFolderBoardItem_o *p_CallbackFunc; // x19
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w9
  GrandQuestFolderBoardItem_c *klass; // x20

  dispMode = this->fields.dispMode;
  state = this->fields.state;
  BattleCharaChangeConfirmListViewObject__SetVisible(this, initMode != 0, (const MethodInfo *)callbackFunc);
  this->fields.CallbackFunc = callbackFunc;
  p_CallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.CallbackFunc;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.CallbackFunc,
    (int32_t)callbackFunc,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
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
    v23 = 1;
  }
  else
  {
    if ( initMode != 3 )
      goto LABEL_6;
    v23 = 3;
  }
  this->fields.dispMode = 2;
  this->fields.state = v23;
LABEL_11:
  BattleCharaChangeConfirmListViewObject__SetupDisplay(this, v16);
LABEL_12:
  klass = p_CallbackFunc->klass;
  if ( p_CallbackFunc->klass )
  {
    p_CallbackFunc->klass = 0;
    sub_1C7BA8C(p_CallbackFunc, 0, v17, v18, v19, v20, v21, v22);
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
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4CEA7A8 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA7A8 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0, 0) )
  {
    v7 = this->fields.dispObject;
    if ( !v7 )
      sub_1C7BD40(0, v6);
    UnityEngine_GameObject__SetActive(v7, isVisible, 0);
  }
}


void BattleCharaChangeConfirmListViewObject__SetupDisplay(
        BattleCharaChangeConfirmListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v5; // x1
  struct BattleCharaChangeConfirmListViewItemDraw_o *v6; // x0
  BattleCharaChangeConfirmListViewItemDraw_o *v7; // x20
  const MethodInfo *v8; // x1
  float v9; // s8
  const MethodInfo *v10; // x1
  float v11; // s0

  if ( (byte_4CEA7AA & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA7AA = 1;
  }
  BattleCharaChangeConfirmListViewObject__SetVisible(this, this->fields.dispMode != 0, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
  {
    v6 = this->fields.itemDraw;
    if ( !v6
      || (((void (__fastcall *)(struct BattleCharaChangeConfirmListViewItemDraw_o *, struct BattleCharaChangeConfirmListViewItem_o *, _QWORD, const MethodInfo *))v6->klass->vtable._5_SetItem.methodPtr)(
            v6,
            this->fields.itemInfo,
            (unsigned int)this->fields.dispMode,
            v6->klass->vtable._5_SetItem.method),
          v7 = this->fields.itemDraw,
          v9 = BattleCharaChangeConfirmListViewObject__GetObjectOffsetY(this, v8),
          v11 = BattleCharaChangeConfirmListViewObject__GetArrowOffsetY(this, v10),
          !v7) )
    {
      sub_1C7BD40(v6, v5);
    }
    BattleCharaChangeConfirmListViewItemDraw__SetArrowPositionY(v7, v11 - ceilf(v9 * 0.5), 0);
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

  if ( (byte_4CEA7A4 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CEA7A4 = 1;
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
    v9 = sub_1CD78BC(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C7C0DC(v8);
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

  if ( (byte_4CEA7A5 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    byte_4CEA7A5 = 1;
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
    v9 = sub_1CD78BC(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C7C0DC(v8);
  BattleCharaChangeConfirmListViewObject__Awake(v11, v12);
}