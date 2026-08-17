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
    sub_2213CDC(0, call);
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

  if ( (byte_59735AA & 1) == 0 )
  {
    sub_2213A60(&Method_BattleSelectCommandTypeWindow_onCloseButton__);
    sub_2213A60(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    byte_59735AA = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_2213CDC(0, call);
  UnityEngine_GameObject__SetActive(parentPanel, 1, 0);
  this->fields.isSelected = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0);
  v6 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_2213CCC(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
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
  Il2CppObject *v8; // x0
  Il2CppObject *v9; // x20
  char v10; // w22
  int32_t v11; // w21
  Il2CppObject *v12; // x23
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  struct BattleSelectCommandTypeWindow_SelectServantCallBack_o *selectCallBack; // x8
  struct BattleServantData_o *battleServantData; // x9
  __int64 klass_low; // x2

  if ( (byte_59735AD & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_SelectTreasureDeviceInfo_TdChangeParam___);
    sub_2213A60(&Method_BattleSelectCommandTypeWindow_SelectServant__);
    byte_59735AD = 1;
  }
  if ( !this->fields.isSelected )
  {
    controller = this->fields.controller;
    if ( controller
      && (SelectTreasureDeviceInfo_k__BackingField = controller->fields._SelectTreasureDeviceInfo_k__BackingField) != 0
      && (treasureDevices = (System_Object_array *)SelectTreasureDeviceInfo_k__BackingField->fields.treasureDevices) != 0
      && (v8 = BasicHelper__IndexValue_object_(
                 treasureDevices,
                 index - 1,
                 0,
                 (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_SelectTreasureDeviceInfo_TdChangeParam___)) != 0 )
    {
      v9 = v8;
      v10 = 0;
      v11 = 10;
      v12 = v8;
    }
    else
    {
      v9 = 0;
      v12 = 0;
      v10 = 1;
      v11 = 12;
    }
    v13 = Method_BattleSelectCommandTypeWindow_SelectServant__;
    if ( (*((_BYTE *)Method_BattleSelectCommandTypeWindow_SelectServant__ + 83) & 2) != 0 )
    {
      v13 = (_QWORD *)sub_2213A78(Method_BattleSelectCommandTypeWindow_SelectServant__);
      v12 = v9;
    }
    v14 = (System_Reflection_MethodBase_o *)sub_2213A44(v13, v13[4]);
    OverwriteAssetSoundName__PlayCommonSe(v14, v11, 0, 0);
    selectCallBack = this->fields.selectCallBack;
    this->fields.useClose = 1;
    if ( selectCallBack )
    {
      battleServantData = this->fields.battleServantData;
      if ( !battleServantData )
        sub_2213CDC(v15, v16);
      if ( (v10 & 1) != 0 )
        klass_low = 0;
      else
        klass_low = LODWORD(v12[2].klass);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.selectCallBack = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectCallBack,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void BattleSelectCommandTypeWindow__Setup(
        BattleSelectCommandTypeWindow_o *this,
        BattleServantData_o *bsData,
        SelectTdCommandController_o *inputController,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct SelectTdCommandController_o **p_controller; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  __int64 controller; // x0
  UILabel_o *title_label; // x21
  UILabel_o *nowTypeLabel; // x21
  int32_t v22; // w0
  Il2CppObject *v23; // x0
  __int64 v24; // x1
  UnityEngine_GameObject_o *nowTypeFrameObj; // x21
  UnityEngine_Object_o *v26; // x23
  UnityEngine_Transform_o *v27; // x24
  UnityEngine_Transform_o *v28; // x23
  int v29; // s0 OVERLAPPED
  UnityEngine_Transform_o *v32; // x23
  struct SelecCommandWindowCommandCard_array *commandCardObjArray; // x8
  __int64 v34; // x28
  struct SelectTreasureDeviceInfo_o *SelectTreasureDeviceInfo_k__BackingField; // x27
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v37; // x29
  UnityEngine_Object_o *v38; // x22
  struct SelecCommandWindowCommandCard_array *v39; // x8
  SelectTreasureDeviceInfo_TdChangeParam_o *v40; // x22
  UnityEngine_Transform_o *v41; // x23
  struct SelecCommandWindowCommandCard_array *v42; // x8
  struct SelecCommandWindowCommandCard_array *v43; // x8
  struct SelecCommandWindowCommandCard_array *v44; // x8
  UnityEngine_Transform_o *v45; // x22

  if ( (byte_59735AB & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_SelecCommandWindowCommandCard___);
    sub_2213A60(&Method_BasicHelper_IndexValue_SelectTreasureDeviceInfo_TdChangeParam___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59735AB = 1;
  }
  this->fields.battleServantData = bsData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.battleServantData,
    (int32_t)bsData,
    (System_String_o *)inputController,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.controller = inputController;
  p_controller = &this->fields.controller;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.controller,
    (int32_t)inputController,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  controller = (__int64)this->fields.controller;
  if ( !controller )
    goto LABEL_54;
  title_label = this->fields.title_label;
  controller = (__int64)SelectTdCommandController__GetTitle((SelectTdCommandController_o *)controller, 0);
  if ( !title_label )
    goto LABEL_54;
  UILabel__set_text(title_label, (System_String_o *)controller, 0);
  controller = (__int64)this->fields.controller;
  if ( !controller )
    goto LABEL_54;
  nowTypeLabel = this->fields.nowTypeLabel;
  controller = (__int64)SelectTdCommandController__GetMessageOnSelected((SelectTdCommandController_o *)controller, 0);
  if ( !nowTypeLabel )
    goto LABEL_54;
  UILabel__set_text(nowTypeLabel, (System_String_o *)controller, 0);
  controller = (__int64)*p_controller;
  if ( !*p_controller )
    goto LABEL_54;
  v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)controller + 376LL))(
          controller,
          *(_QWORD *)(*(_QWORD *)controller + 384LL));
  v23 = BasicHelper__IndexValue_object_(
          (System_Object_array *)this->fields.commandCardObjArray,
          v22,
          0,
          (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_SelecCommandWindowCommandCard___);
  nowTypeFrameObj = this->fields.nowTypeFrameObj;
  v26 = (UnityEngine_Object_o *)v23;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  controller = UnityEngine_Object__op_Inequality(v26, 0, 0);
  if ( !nowTypeFrameObj )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(nowTypeFrameObj, controller & 1, 0);
  controller = UnityEngine_Object__op_Inequality(v26, 0, 0);
  if ( (controller & 1) != 0 )
  {
    controller = (__int64)this->fields.nowTypeFrameObj;
    if ( !controller )
      goto LABEL_54;
    controller = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)controller, 0);
    if ( !v26 )
      goto LABEL_54;
    v27 = (UnityEngine_Transform_o *)controller;
    controller = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v26, 0);
    if ( !v27 )
      goto LABEL_54;
    UnityEngine_Transform__SetParent(v27, (UnityEngine_Transform_o *)controller, 0);
    controller = (__int64)this->fields.nowTypeFrameObj;
    if ( !controller )
      goto LABEL_54;
    controller = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)controller, 0);
    if ( !*p_controller )
      goto LABEL_54;
    v28 = (UnityEngine_Transform_o *)controller;
    controller = (__int64)((__int64 (__fastcall *)(struct SelectTdCommandController_o *__return_ptr, struct SelectTdCommandController_o *, const MethodInfo *))(*p_controller)->klass->vtable._5_GetNowTypeFrameOffset.methodPtr)(
                            *p_controller,
                            *p_controller,
                            (*p_controller)->klass->vtable._5_GetNowTypeFrameOffset.method);
    if ( !v28 )
      goto LABEL_54;
    UnityEngine_Transform__set_localPosition(v28, *(UnityEngine_Vector3_o *)&v29, 0);
    controller = (__int64)this->fields.nowTypeFrameObj;
    if ( !controller )
      goto LABEL_54;
    controller = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)controller, 0);
    v32 = (UnityEngine_Transform_o *)controller;
    if ( !byte_5969AE5 )
    {
      controller = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    if ( !v32 )
      goto LABEL_54;
    UnityEngine_Transform__set_localScale(v32, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  }
  if ( !*p_controller )
    goto LABEL_54;
  commandCardObjArray = this->fields.commandCardObjArray;
  if ( !commandCardObjArray )
    goto LABEL_54;
  v34 = 4;
  SelectTreasureDeviceInfo_k__BackingField = (*p_controller)->fields._SelectTreasureDeviceInfo_k__BackingField;
  while ( 1 )
  {
    max_length_low = LODWORD(commandCardObjArray->max_length);
    v37 = v34 - 4;
    if ( v34 - 4 >= (int)max_length_low )
      break;
    if ( v37 >= max_length_low )
      goto LABEL_58;
    v38 = (UnityEngine_Object_o *)*((_QWORD *)&commandCardObjArray->obj.klass + v34);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    controller = UnityEngine_Object__op_Equality(v38, 0, 0);
    if ( (controller & 1) == 0 )
    {
      if ( !SelectTreasureDeviceInfo_k__BackingField )
        goto LABEL_54;
      controller = (__int64)BasicHelper__IndexValue_object_(
                              (System_Object_array *)SelectTreasureDeviceInfo_k__BackingField->fields.treasureDevices,
                              (int)v34 - 4,
                              0,
                              (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_SelectTreasureDeviceInfo_TdChangeParam___);
      v39 = this->fields.commandCardObjArray;
      if ( !v39 )
        goto LABEL_54;
      if ( v37 >= LODWORD(v39->max_length) )
        goto LABEL_58;
      v40 = (SelectTreasureDeviceInfo_TdChangeParam_o *)controller;
      controller = *((_QWORD *)&v39->obj.klass + v34);
      if ( !controller )
        goto LABEL_54;
      controller = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)controller, 0);
      if ( !this->fields.svtRoot )
        goto LABEL_54;
      v41 = (UnityEngine_Transform_o *)controller;
      controller = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.svtRoot, 0);
      if ( !controller )
        goto LABEL_54;
      controller = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)controller, 0);
      if ( !v41 )
        goto LABEL_54;
      UnityEngine_Transform__set_parent(v41, (UnityEngine_Transform_o *)controller, 0);
      v42 = this->fields.commandCardObjArray;
      if ( !v42 )
        goto LABEL_54;
      if ( v37 >= LODWORD(v42->max_length) )
        goto LABEL_58;
      controller = *((_QWORD *)&v42->obj.klass + v34);
      if ( !controller )
        goto LABEL_54;
      controller = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)controller, 0);
      if ( !controller )
        goto LABEL_54;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)controller, v40 != 0, 0);
      if ( v40 )
      {
        v43 = this->fields.commandCardObjArray;
        if ( !v43 )
          goto LABEL_54;
        if ( v37 >= LODWORD(v43->max_length) )
LABEL_58:
          sub_2213CE4(controller);
        controller = *((_QWORD *)&v43->obj.klass + v34);
        if ( !controller )
          goto LABEL_54;
        SelecCommandWindowCommandCard__Setup((SelecCommandWindowCommandCard_o *)controller, v40, bsData, 0);
        v44 = this->fields.commandCardObjArray;
        if ( !v44 )
          goto LABEL_54;
        if ( v37 >= LODWORD(v44->max_length) )
          goto LABEL_58;
        controller = *((_QWORD *)&v44->obj.klass + v34);
        if ( !controller )
          goto LABEL_54;
        controller = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)controller, 0);
        v45 = (UnityEngine_Transform_o *)controller;
        if ( !byte_5969AE5 )
        {
          controller = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE5 = 1;
        }
        if ( !v45 )
          goto LABEL_54;
        UnityEngine_Transform__set_localScale(v45, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      }
    }
    commandCardObjArray = this->fields.commandCardObjArray;
    ++v34;
    if ( !commandCardObjArray )
      goto LABEL_54;
  }
  controller = (__int64)this->fields.parentPanel;
  if ( !controller
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)controller, 1, 0),
        (controller = (__int64)this->fields.svtRoot) == 0) )
  {
LABEL_54:
    sub_2213CDC(controller, v18);
  }
  *(_BYTE *)(controller + 57) = 1;
  UIGrid__set_repositionNow((UIGrid_o *)controller, 1, 0);
}


UnityEngine_GameObject_o *BattleSelectCommandTypeWindow__get_closeBtnObject(
        BattleSelectCommandTypeWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_59735AE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59735AE = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_2213CDC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
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
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_6;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  v5 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_5969AE0 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v5 )
LABEL_6:
    sub_2213CDC(gameObject, v4);
  UnityEngine_Transform__set_localPosition(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleSelectCommandTypeWindow__setUseClose(
        BattleSelectCommandTypeWindow_o *this,
        bool flg,
        const MethodInfo *method)
{
  bool v5; // w22
  UnityEngine_Object_c *v6; // x0
  UnityEngine_Object_o *cancelButton; // x21
  __int64 v8; // x1
  UnityEngine_Collider_o *v9; // x0

  v5 = flg;
  if ( (byte_59735AC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59735AC = 1;
  }
  v6 = UnityEngine_Object_TypeInfo;
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  this->fields.useClose = v5;
  if ( !*(&v6->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v6, flg);
  if ( UnityEngine_Object__op_Inequality(cancelButton, 0, 0) )
  {
    v9 = this->fields.cancelButton;
    if ( !v9 )
      sub_2213CDC(0, v8);
    UnityEngine_Collider__set_enabled(v9, flg, 0);
  }
}


void BattleSelectCommandTypeWindow_SelectServantCallBack___ctor(
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2011B00;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2011AA8;
}


System_IAsyncResult_o *BattleSelectCommandTypeWindow_SelectServantCallBack__BeginInvoke(
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *this,
        int32_t uniqueId,
        int32_t cmdType,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v11; // [xsp+28h] [xbp-28h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-24h] BYREF

  v11 = cmdType;
  v12 = uniqueId;
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(qword_5984348, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return (System_IAsyncResult_o *)sub_2213A14(this, v10, callback, object);
}


void BattleSelectCommandTypeWindow_SelectServantCallBack__EndInvoke(
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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