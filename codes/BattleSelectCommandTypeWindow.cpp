void BattleSelectCommandTypeWindow___ctor(BattleSelectCommandTypeWindow_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.useClose = 257;
  BattleWindowOuterClickManagerComponent___ctor((BattleWindowOuterClickManagerComponent_o *)this, 0);
}


void BattleSelectCommandTypeWindow__Close(
        BattleSelectCommandTypeWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *parentPanel; // x0

  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(parentPanel, 0, 0);
  this->fields.isSelected = 1;
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0);
}


void BattleSelectCommandTypeWindow__Open(
        BattleSelectCommandTypeWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *parentPanel; // x0
  BattleWindowOuterClickComponent_OuterClickCall_o *v6; // x20

  if ( (byte_4C45B3C & 1) == 0 )
  {
    sub_1C37058(&Method_BattleSelectCommandTypeWindow_onCloseButton__);
    sub_1C37058(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    byte_4C45B3C = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(parentPanel, 1, 0);
  this->fields.isSelected = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0);
  v6 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1C372A4(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattleSelectCommandTypeWindow_onCloseButton__,
    0);
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack((BattleWindowOuterClickManagerComponent_o *)this, v6, 0);
}


void BattleSelectCommandTypeWindow__SelectA(BattleSelectCommandTypeWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleSelectCommandTypeWindow__SelectServant(this, 1, v2);
}


void BattleSelectCommandTypeWindow__SelectB(BattleSelectCommandTypeWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleSelectCommandTypeWindow__SelectServant(this, 2, v2);
}


void BattleSelectCommandTypeWindow__SelectC(BattleSelectCommandTypeWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleSelectCommandTypeWindow__SelectServant(this, 3, v2);
}


void BattleSelectCommandTypeWindow__SelectServant(
        BattleSelectCommandTypeWindow_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct SelectTdCommandController_o *controller; // x8
  struct SelectTreasureDeviceInfo_o *SelectTreasureDeviceInfo_k__BackingField; // x8
  System_Object_array *treasureDevices; // x0
  Il2CppObject *v8; // x20
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  int32_t v11; // w1
  __int64 v12; // x0
  struct BattleSelectCommandTypeWindow_SelectServantCallBack_o *selectCallBack; // x8
  struct BattleServantData_o *battleServantData; // x9
  __int64 klass_low; // x2

  if ( (byte_4C45B3F & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_IndexValue_SelectTreasureDeviceInfo_TdChangeParam___);
    sub_1C37058(&Method_BattleSelectCommandTypeWindow_SelectServant__);
    byte_4C45B3F = 1;
  }
  if ( !this->fields.isSelected )
  {
    controller = this->fields.controller;
    if ( controller
      && (SelectTreasureDeviceInfo_k__BackingField = controller->fields._SelectTreasureDeviceInfo_k__BackingField) != 0
      && (treasureDevices = (System_Object_array *)SelectTreasureDeviceInfo_k__BackingField->fields.treasureDevices) != 0 )
    {
      v8 = BasicHelper__IndexValue_object_(
             treasureDevices,
             index - 1,
             0,
             (const MethodInfo_30D61F8 *)Method_BasicHelper_IndexValue_SelectTreasureDeviceInfo_TdChangeParam___);
    }
    else
    {
      v8 = 0;
    }
    v9 = Method_BattleSelectCommandTypeWindow_SelectServant__;
    if ( (*((_BYTE *)Method_BattleSelectCommandTypeWindow_SelectServant__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C37070(Method_BattleSelectCommandTypeWindow_SelectServant__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C3703C(v9, v9[4]);
    if ( v8 )
      v11 = 10;
    else
      v11 = 12;
    OverwriteAssetSoundName__PlayCommonSe(v10, v11, 0, 0);
    selectCallBack = this->fields.selectCallBack;
    this->fields.useClose = 1;
    if ( selectCallBack )
    {
      battleServantData = this->fields.battleServantData;
      if ( !battleServantData )
        sub_1C372B4(v12);
      if ( v8 )
        klass_low = LODWORD(v8[2].klass);
      else
        klass_low = 0;
      ((void (__fastcall *)(intptr_t, _QWORD, __int64, intptr_t))selectCallBack->fields.invoke_impl)(
        selectCallBack->fields.method_code,
        (unsigned int)battleServantData->fields.uniqueId,
        klass_low,
        selectCallBack->fields.method);
    }
  }
}


void BattleSelectCommandTypeWindow__SetCallBack(
        BattleSelectCommandTypeWindow_o *this,
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.selectCallBack = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.selectCallBack, (int32_t)callback, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void BattleSelectCommandTypeWindow__Setup(
        BattleSelectCommandTypeWindow_o *this,
        BattleServantData_o *bsData,
        SelectTdCommandController_o *inputController,
        const MethodInfo *method)
{
  struct SelectTdCommandController_o **p_controller; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 controller; // x0
  UILabel_o *title_label; // x21
  UILabel_o *nowTypeLabel; // x21
  int32_t v13; // w0
  Il2CppObject *v14; // x0
  UnityEngine_GameObject_o *nowTypeFrameObj; // x21
  UnityEngine_Object_o *v16; // x23
  UnityEngine_Transform_o *v17; // x24
  UnityEngine_Transform_o *v18; // x23
  int v19; // s0 OVERLAPPED
  UnityEngine_Transform_o *v22; // x23
  struct SelecCommandWindowCommandCard_array *commandCardObjArray; // x8
  struct SelectTreasureDeviceInfo_o *SelectTreasureDeviceInfo_k__BackingField; // x24
  __int64 v25; // x28
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v27; // x29
  UnityEngine_Object_o *v28; // x22
  struct SelecCommandWindowCommandCard_array *v29; // x8
  SelectTreasureDeviceInfo_TdChangeParam_o *v30; // x22
  UnityEngine_Transform_o *v31; // x23
  struct SelecCommandWindowCommandCard_array *v32; // x8
  struct SelecCommandWindowCommandCard_array *v33; // x8
  struct SelecCommandWindowCommandCard_array *v34; // x8
  UnityEngine_Transform_o *v35; // x22

  if ( (byte_4C45B3D & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_IndexValue_SelecCommandWindowCommandCard___);
    sub_1C37058(&Method_BasicHelper_IndexValue_SelectTreasureDeviceInfo_TdChangeParam___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45B3D = 1;
  }
  this->fields.battleServantData = bsData;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.battleServantData,
    (int32_t)bsData,
    (int32_t)inputController,
    method);
  this->fields.controller = inputController;
  p_controller = &this->fields.controller;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.controller, (int32_t)inputController, v8, v9);
  controller = (__int64)this->fields.controller;
  if ( !controller )
    goto LABEL_58;
  title_label = this->fields.title_label;
  controller = (__int64)SelectTdCommandController__GetTitle((SelectTdCommandController_o *)controller, 0);
  if ( !title_label )
    goto LABEL_58;
  UILabel__set_text(title_label, (System_String_o *)controller, 0);
  controller = (__int64)this->fields.controller;
  if ( !controller )
    goto LABEL_58;
  nowTypeLabel = this->fields.nowTypeLabel;
  controller = (__int64)SelectTdCommandController__GetMessageOnSelected((SelectTdCommandController_o *)controller, 0);
  if ( !nowTypeLabel )
    goto LABEL_58;
  UILabel__set_text(nowTypeLabel, (System_String_o *)controller, 0);
  controller = (__int64)*p_controller;
  if ( !*p_controller )
    goto LABEL_58;
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)controller + 376LL))(
          controller,
          *(_QWORD *)(*(_QWORD *)controller + 384LL));
  v14 = BasicHelper__IndexValue_object_(
          (System_Object_array *)this->fields.commandCardObjArray,
          v13,
          0,
          (const MethodInfo_30D61F8 *)Method_BasicHelper_IndexValue_SelecCommandWindowCommandCard___);
  nowTypeFrameObj = this->fields.nowTypeFrameObj;
  v16 = (UnityEngine_Object_o *)v14;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  controller = UnityEngine_Object__op_Inequality(v16, 0, 0);
  if ( !nowTypeFrameObj )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(nowTypeFrameObj, controller & 1, 0);
  controller = UnityEngine_Object__op_Inequality(v16, 0, 0);
  if ( (controller & 1) != 0 )
  {
    controller = (__int64)this->fields.nowTypeFrameObj;
    if ( !controller )
      goto LABEL_58;
    controller = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)controller, 0);
    if ( !v16 )
      goto LABEL_58;
    v17 = (UnityEngine_Transform_o *)controller;
    controller = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0);
    if ( !v17 )
      goto LABEL_58;
    UnityEngine_Transform__SetParent(v17, (UnityEngine_Transform_o *)controller, 0);
    controller = (__int64)this->fields.nowTypeFrameObj;
    if ( !controller )
      goto LABEL_58;
    controller = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)controller, 0);
    if ( !*p_controller )
      goto LABEL_58;
    v18 = (UnityEngine_Transform_o *)controller;
    controller = (__int64)((__int64 (__fastcall *)(struct SelectTdCommandController_o *__return_ptr, struct SelectTdCommandController_o *, const MethodInfo *))(*p_controller)->klass->vtable._5_GetNowTypeFrameOffset.methodPtr)(
                            *p_controller,
                            *p_controller,
                            (*p_controller)->klass->vtable._5_GetNowTypeFrameOffset.method);
    if ( !v18 )
      goto LABEL_58;
    UnityEngine_Transform__set_localPosition(v18, *(UnityEngine_Vector3_o *)&v19, 0);
    controller = (__int64)this->fields.nowTypeFrameObj;
    if ( !controller )
      goto LABEL_58;
    controller = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)controller, 0);
    v22 = (UnityEngine_Transform_o *)controller;
    if ( !byte_4C3C926 )
    {
      controller = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C926 = 1;
    }
    if ( !v22 )
      goto LABEL_58;
    UnityEngine_Transform__set_localScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  }
  if ( !*p_controller )
    goto LABEL_58;
  commandCardObjArray = this->fields.commandCardObjArray;
  if ( !commandCardObjArray )
    goto LABEL_58;
  SelectTreasureDeviceInfo_k__BackingField = (*p_controller)->fields._SelectTreasureDeviceInfo_k__BackingField;
  v25 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(commandCardObjArray->max_length);
    v27 = v25 - 4;
    if ( v25 - 4 >= (int)max_length_low )
      break;
    if ( v27 >= max_length_low )
      goto LABEL_59;
    v28 = (UnityEngine_Object_o *)*((_QWORD *)&commandCardObjArray->obj.klass + v25);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    controller = UnityEngine_Object__op_Equality(v28, 0, 0);
    if ( (controller & 1) == 0 )
    {
      if ( !SelectTreasureDeviceInfo_k__BackingField )
        goto LABEL_58;
      controller = (__int64)BasicHelper__IndexValue_object_(
                              (System_Object_array *)SelectTreasureDeviceInfo_k__BackingField->fields.treasureDevices,
                              (int)v25 - 4,
                              0,
                              (const MethodInfo_30D61F8 *)Method_BasicHelper_IndexValue_SelectTreasureDeviceInfo_TdChangeParam___);
      v29 = this->fields.commandCardObjArray;
      if ( !v29 )
        goto LABEL_58;
      if ( v27 >= LODWORD(v29->max_length) )
        goto LABEL_59;
      v30 = (SelectTreasureDeviceInfo_TdChangeParam_o *)controller;
      controller = *((_QWORD *)&v29->obj.klass + v25);
      if ( !controller )
        goto LABEL_58;
      controller = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)controller, 0);
      if ( !this->fields.svtRoot )
        goto LABEL_58;
      v31 = (UnityEngine_Transform_o *)controller;
      controller = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.svtRoot, 0);
      if ( !controller )
        goto LABEL_58;
      controller = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)controller, 0);
      if ( !v31 )
        goto LABEL_58;
      UnityEngine_Transform__set_parent(v31, (UnityEngine_Transform_o *)controller, 0);
      v32 = this->fields.commandCardObjArray;
      if ( !v32 )
        goto LABEL_58;
      if ( v27 >= LODWORD(v32->max_length) )
        goto LABEL_59;
      controller = *((_QWORD *)&v32->obj.klass + v25);
      if ( !controller )
        goto LABEL_58;
      controller = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)controller, 0);
      if ( !controller )
        goto LABEL_58;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)controller, v30 != 0, 0);
      if ( v30 )
      {
        v33 = this->fields.commandCardObjArray;
        if ( !v33 )
          goto LABEL_58;
        if ( v27 >= LODWORD(v33->max_length) )
LABEL_59:
          sub_1C372BC(controller);
        controller = *((_QWORD *)&v33->obj.klass + v25);
        if ( !controller )
          goto LABEL_58;
        SelecCommandWindowCommandCard__Setup((SelecCommandWindowCommandCard_o *)controller, v30, bsData, 0);
        v34 = this->fields.commandCardObjArray;
        if ( !v34 )
          goto LABEL_58;
        if ( v27 >= LODWORD(v34->max_length) )
          goto LABEL_59;
        controller = *((_QWORD *)&v34->obj.klass + v25);
        if ( !controller )
          goto LABEL_58;
        controller = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)controller, 0);
        v35 = (UnityEngine_Transform_o *)controller;
        if ( !byte_4C3C926 )
        {
          controller = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
          byte_4C3C926 = 1;
        }
        if ( !v35 )
          goto LABEL_58;
        UnityEngine_Transform__set_localScale(v35, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      }
    }
    commandCardObjArray = this->fields.commandCardObjArray;
    ++v25;
    if ( !commandCardObjArray )
      goto LABEL_58;
  }
  controller = (__int64)this->fields.parentPanel;
  if ( !controller
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)controller, 1, 0),
        (controller = (__int64)this->fields.svtRoot) == 0) )
  {
LABEL_58:
    sub_1C372B4(controller);
  }
  *(_BYTE *)(controller + 57) = 1;
  UIGrid__set_repositionNow((UIGrid_o *)controller, 1, 0);
}


UnityEngine_GameObject_o *BattleSelectCommandTypeWindow__get_closeBtnObject(
        BattleSelectCommandTypeWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4C45B40 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45B40 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_1C372B4(0);
  return UnityEngine_Component__get_gameObject(v5, 0);
}


void BattleSelectCommandTypeWindow__onCloseButton(BattleSelectCommandTypeWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.useClose )
    BattleSelectCommandTypeWindow__SelectServant(this, 0, v2);
}


void BattleSelectCommandTypeWindow__setInitialPos(BattleSelectCommandTypeWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v4; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_6;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  v4 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4C3C921 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  if ( !v4 )
LABEL_6:
    sub_1C372B4(gameObject);
  UnityEngine_Transform__set_localPosition(v4, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0);
}


void BattleSelectCommandTypeWindow__setUseClose(
        BattleSelectCommandTypeWindow_o *this,
        bool flg,
        const MethodInfo *method)
{
  bool v5; // w22
  UnityEngine_Object_o *cancelButton; // x21
  UnityEngine_Collider_o *v7; // x0

  v5 = flg;
  if ( (byte_4C45B3E & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45B3E = 1;
  }
  this->fields.useClose = v5;
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cancelButton, 0, 0) )
  {
    v7 = this->fields.cancelButton;
    if ( !v7 )
      sub_1C372B4(0);
    UnityEngine_Collider__set_enabled(v7, flg, 0);
  }
}


void BattleSelectCommandTypeWindow_SelectServantCallBack___ctor(
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7E240;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7E1E8;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *BattleSelectCommandTypeWindow_SelectServantCallBack__BeginInvoke(
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *this,
        int32_t uniqueId,
        int32_t cmdType,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  _QWORD v18[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v19; // [xsp+18h] [xbp-38h] BYREF
  int32_t v20; // [xsp+1Ch] [xbp-34h] BYREF

  v19 = cmdType;
  v20 = uniqueId;
  if ( (byte_4C45B41 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    byte_4C45B41 = 1;
  }
  v18[2] = 0;
  v18[0] = j_il2cpp_value_box_0(int_TypeInfo, &v20, *(_QWORD *)&cmdType, callback, object, method, v6, v7);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v19, v11, v12, v13, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v18, callback, object);
}


void BattleSelectCommandTypeWindow_SelectServantCallBack__EndInvoke(
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void BattleSelectCommandTypeWindow_SelectServantCallBack__Invoke(
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *this,
        int32_t uniqueId,
        int32_t cmdType,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    uniqueId,
    cmdType,
    this->fields.method);
}