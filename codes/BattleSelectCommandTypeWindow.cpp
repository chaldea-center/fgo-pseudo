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
    sub_1C6BC60(0, call);
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

  if ( (byte_4CB8ED1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleSelectCommandTypeWindow_onCloseButton__);
    sub_1C6BA08(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
    byte_4CB8ED1 = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_1C6BC60(0, call);
  UnityEngine_GameObject__SetActive(parentPanel, 1, 0);
  this->fields.isSelected = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0);
  v6 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1C6BC54(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
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
  __int64 v13; // x1
  struct BattleSelectCommandTypeWindow_SelectServantCallBack_o *selectCallBack; // x8
  struct BattleServantData_o *battleServantData; // x9
  __int64 klass_low; // x2

  if ( (byte_4CB8ED4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_IndexValue_SelectTreasureDeviceInfo_TdChangeParam___);
    sub_1C6BA08(&Method_BattleSelectCommandTypeWindow_SelectServant__);
    byte_4CB8ED4 = 1;
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
             (const MethodInfo_3129630 *)Method_BasicHelper_IndexValue_SelectTreasureDeviceInfo_TdChangeParam___);
    }
    else
    {
      v8 = 0;
    }
    v9 = Method_BattleSelectCommandTypeWindow_SelectServant__;
    if ( (*((_BYTE *)Method_BattleSelectCommandTypeWindow_SelectServant__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C6BA20(Method_BattleSelectCommandTypeWindow_SelectServant__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v9, v9[4]);
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
        sub_1C6BC60(v12, v13);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.selectCallBack, (int32_t)callback, (int32_t)method, v3);
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
  __int64 v10; // x1
  __int64 controller; // x0
  UILabel_o *title_label; // x21
  UILabel_o *nowTypeLabel; // x21
  int32_t v14; // w0
  Il2CppObject *v15; // x0
  UnityEngine_GameObject_o *nowTypeFrameObj; // x21
  UnityEngine_Object_o *v17; // x23
  UnityEngine_Transform_o *v18; // x24
  UnityEngine_Transform_o *v19; // x23
  int v20; // s0 OVERLAPPED
  UnityEngine_Transform_o *v23; // x23
  struct SelecCommandWindowCommandCard_array *commandCardObjArray; // x8
  struct SelectTreasureDeviceInfo_o *SelectTreasureDeviceInfo_k__BackingField; // x24
  __int64 v26; // x28
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v28; // x29
  UnityEngine_Object_o *v29; // x22
  struct SelecCommandWindowCommandCard_array *v30; // x8
  SelectTreasureDeviceInfo_TdChangeParam_o *v31; // x22
  UnityEngine_Transform_o *v32; // x23
  struct SelecCommandWindowCommandCard_array *v33; // x8
  struct SelecCommandWindowCommandCard_array *v34; // x8
  struct SelecCommandWindowCommandCard_array *v35; // x8
  UnityEngine_Transform_o *v36; // x22

  if ( (byte_4CB8ED2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_IndexValue_SelecCommandWindowCommandCard___);
    sub_1C6BA08(&Method_BasicHelper_IndexValue_SelectTreasureDeviceInfo_TdChangeParam___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8ED2 = 1;
  }
  this->fields.battleServantData = bsData;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.battleServantData,
    (int32_t)bsData,
    (int32_t)inputController,
    method);
  this->fields.controller = inputController;
  p_controller = &this->fields.controller;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.controller, (int32_t)inputController, v8, v9);
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
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)controller + 376LL))(
          controller,
          *(_QWORD *)(*(_QWORD *)controller + 384LL));
  v15 = BasicHelper__IndexValue_object_(
          (System_Object_array *)this->fields.commandCardObjArray,
          v14,
          0,
          (const MethodInfo_3129630 *)Method_BasicHelper_IndexValue_SelecCommandWindowCommandCard___);
  nowTypeFrameObj = this->fields.nowTypeFrameObj;
  v17 = (UnityEngine_Object_o *)v15;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  controller = UnityEngine_Object__op_Inequality(v17, 0, 0);
  if ( !nowTypeFrameObj )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(nowTypeFrameObj, controller & 1, 0);
  controller = UnityEngine_Object__op_Inequality(v17, 0, 0);
  if ( (controller & 1) != 0 )
  {
    controller = (__int64)this->fields.nowTypeFrameObj;
    if ( !controller )
      goto LABEL_58;
    controller = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)controller, 0);
    if ( !v17 )
      goto LABEL_58;
    v18 = (UnityEngine_Transform_o *)controller;
    controller = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v17, 0);
    if ( !v18 )
      goto LABEL_58;
    UnityEngine_Transform__SetParent(v18, (UnityEngine_Transform_o *)controller, 0);
    controller = (__int64)this->fields.nowTypeFrameObj;
    if ( !controller )
      goto LABEL_58;
    controller = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)controller, 0);
    if ( !*p_controller )
      goto LABEL_58;
    v19 = (UnityEngine_Transform_o *)controller;
    controller = (__int64)((__int64 (__fastcall *)(struct SelectTdCommandController_o *__return_ptr, struct SelectTdCommandController_o *, const MethodInfo *))(*p_controller)->klass->vtable._5_GetNowTypeFrameOffset.methodPtr)(
                            *p_controller,
                            *p_controller,
                            (*p_controller)->klass->vtable._5_GetNowTypeFrameOffset.method);
    if ( !v19 )
      goto LABEL_58;
    UnityEngine_Transform__set_localPosition(v19, *(UnityEngine_Vector3_o *)&v20, 0);
    controller = (__int64)this->fields.nowTypeFrameObj;
    if ( !controller )
      goto LABEL_58;
    controller = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)controller, 0);
    v23 = (UnityEngine_Transform_o *)controller;
    if ( !byte_4CAFC0E )
    {
      controller = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
      byte_4CAFC0E = 1;
    }
    if ( !v23 )
      goto LABEL_58;
    UnityEngine_Transform__set_localScale(v23, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  }
  if ( !*p_controller )
    goto LABEL_58;
  commandCardObjArray = this->fields.commandCardObjArray;
  if ( !commandCardObjArray )
    goto LABEL_58;
  SelectTreasureDeviceInfo_k__BackingField = (*p_controller)->fields._SelectTreasureDeviceInfo_k__BackingField;
  v26 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(commandCardObjArray->max_length);
    v28 = v26 - 4;
    if ( v26 - 4 >= (int)max_length_low )
      break;
    if ( v28 >= max_length_low )
      goto LABEL_59;
    v29 = (UnityEngine_Object_o *)*((_QWORD *)&commandCardObjArray->obj.klass + v26);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    controller = UnityEngine_Object__op_Equality(v29, 0, 0);
    if ( (controller & 1) == 0 )
    {
      if ( !SelectTreasureDeviceInfo_k__BackingField )
        goto LABEL_58;
      controller = (__int64)BasicHelper__IndexValue_object_(
                              (System_Object_array *)SelectTreasureDeviceInfo_k__BackingField->fields.treasureDevices,
                              (int)v26 - 4,
                              0,
                              (const MethodInfo_3129630 *)Method_BasicHelper_IndexValue_SelectTreasureDeviceInfo_TdChangeParam___);
      v30 = this->fields.commandCardObjArray;
      if ( !v30 )
        goto LABEL_58;
      if ( v28 >= LODWORD(v30->max_length) )
        goto LABEL_59;
      v31 = (SelectTreasureDeviceInfo_TdChangeParam_o *)controller;
      controller = *((_QWORD *)&v30->obj.klass + v26);
      if ( !controller )
        goto LABEL_58;
      controller = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)controller, 0);
      if ( !this->fields.svtRoot )
        goto LABEL_58;
      v32 = (UnityEngine_Transform_o *)controller;
      controller = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.svtRoot, 0);
      if ( !controller )
        goto LABEL_58;
      controller = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)controller, 0);
      if ( !v32 )
        goto LABEL_58;
      UnityEngine_Transform__set_parent(v32, (UnityEngine_Transform_o *)controller, 0);
      v33 = this->fields.commandCardObjArray;
      if ( !v33 )
        goto LABEL_58;
      if ( v28 >= LODWORD(v33->max_length) )
        goto LABEL_59;
      controller = *((_QWORD *)&v33->obj.klass + v26);
      if ( !controller )
        goto LABEL_58;
      controller = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)controller, 0);
      if ( !controller )
        goto LABEL_58;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)controller, v31 != 0, 0);
      if ( v31 )
      {
        v34 = this->fields.commandCardObjArray;
        if ( !v34 )
          goto LABEL_58;
        if ( v28 >= LODWORD(v34->max_length) )
LABEL_59:
          sub_1C6BC68(controller);
        controller = *((_QWORD *)&v34->obj.klass + v26);
        if ( !controller )
          goto LABEL_58;
        SelecCommandWindowCommandCard__Setup((SelecCommandWindowCommandCard_o *)controller, v31, bsData, 0);
        v35 = this->fields.commandCardObjArray;
        if ( !v35 )
          goto LABEL_58;
        if ( v28 >= LODWORD(v35->max_length) )
          goto LABEL_59;
        controller = *((_QWORD *)&v35->obj.klass + v26);
        if ( !controller )
          goto LABEL_58;
        controller = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)controller, 0);
        v36 = (UnityEngine_Transform_o *)controller;
        if ( !byte_4CAFC0E )
        {
          controller = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
          byte_4CAFC0E = 1;
        }
        if ( !v36 )
          goto LABEL_58;
        UnityEngine_Transform__set_localScale(v36, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      }
    }
    commandCardObjArray = this->fields.commandCardObjArray;
    ++v26;
    if ( !commandCardObjArray )
      goto LABEL_58;
  }
  controller = (__int64)this->fields.parentPanel;
  if ( !controller
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)controller, 1, 0),
        (controller = (__int64)this->fields.svtRoot) == 0) )
  {
LABEL_58:
    sub_1C6BC60(controller, v10);
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

  if ( (byte_4CB8ED5 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8ED5 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C6BC60(0, v4);
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
  if ( !byte_4CAFC09 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  if ( !v5 )
LABEL_6:
    sub_1C6BC60(gameObject, v4);
  UnityEngine_Transform__set_localPosition(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0);
}


void BattleSelectCommandTypeWindow__setUseClose(
        BattleSelectCommandTypeWindow_o *this,
        bool flg,
        const MethodInfo *method)
{
  bool v5; // w22
  UnityEngine_Object_o *cancelButton; // x21
  __int64 v7; // x1
  UnityEngine_Collider_o *v8; // x0

  v5 = flg;
  if ( (byte_4CB8ED3 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8ED3 = 1;
  }
  this->fields.useClose = v5;
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cancelButton, 0, 0) )
  {
    v8 = this->fields.cancelButton;
    if ( !v8 )
      sub_1C6BC60(0, v7);
    UnityEngine_Collider__set_enabled(v8, flg, 0);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA48B8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA4860;
}


System_IAsyncResult_o *BattleSelectCommandTypeWindow_SelectServantCallBack__BeginInvoke(
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *this,
        int32_t uniqueId,
        int32_t cmdType,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v11 = cmdType;
  v12 = uniqueId;
  if ( (byte_4CB8ED6 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    byte_4CB8ED6 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v10, callback, object);
}


void BattleSelectCommandTypeWindow_SelectServantCallBack__EndInvoke(
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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