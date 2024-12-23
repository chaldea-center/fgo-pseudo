void __fastcall BattleSelectCommandTypeWindow___ctor(BattleSelectCommandTypeWindow_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.useClose = 257;
  BattleWindowOuterClickManagerComponent___ctor((BattleWindowOuterClickManagerComponent_o *)this, 0LL);
}


void __fastcall BattleSelectCommandTypeWindow__Close(
        BattleSelectCommandTypeWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *parentPanel; // x0

  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_1BE4D28(0LL, call);
  UnityEngine_GameObject__SetActive(parentPanel, 0, 0LL);
  this->fields.isSelected = 1;
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleSelectCommandTypeWindow__Open(
        BattleSelectCommandTypeWindow_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *parentPanel; // x0
  BattleWindowOuterClickComponent_OuterClickCall_o *v7; // x20

  if ( (byte_4B6930A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BattleSelectCommandTypeWindow_onCloseButton__, call);
    sub_1BE4ACC(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v5);
    byte_4B6930A = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_1BE4D28(0LL, call);
  UnityEngine_GameObject__SetActive(parentPanel, 1, 0LL);
  this->fields.isSelected = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  v7 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1BE4D18(BattleWindowOuterClickComponent_OuterClickCall_TypeInfo);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleSelectCommandTypeWindow_onCloseButton__,
    0LL);
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(
    (BattleWindowOuterClickManagerComponent_o *)this,
    v7,
    0LL);
}


void __fastcall BattleSelectCommandTypeWindow__SelectA(BattleSelectCommandTypeWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleSelectCommandTypeWindow__SelectServant(this, 1, v2);
}


void __fastcall BattleSelectCommandTypeWindow__SelectB(BattleSelectCommandTypeWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleSelectCommandTypeWindow__SelectServant(this, 2, v2);
}


void __fastcall BattleSelectCommandTypeWindow__SelectC(BattleSelectCommandTypeWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleSelectCommandTypeWindow__SelectServant(this, 3, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectCommandTypeWindow__SelectServant(
        BattleSelectCommandTypeWindow_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct SelectTdCommandController_o *controller; // x8
  struct SelectTreasureDeviceInfo_o *SelectTreasureDeviceInfo_k__BackingField; // x8
  System_Object_array *treasureDevices; // x0
  Il2CppObject *v9; // x20
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  int32_t v12; // w1
  __int64 v13; // x0
  __int64 v14; // x1
  struct BattleSelectCommandTypeWindow_SelectServantCallBack_o *selectCallBack; // x8
  struct BattleServantData_o *battleServantData; // x9
  __int64 klass_low; // x2

  if ( (byte_4B6930D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_IndexValue_SelectTreasureDeviceInfo_TdChangeParam___, *(_QWORD *)&index);
    sub_1BE4ACC(&Method_BattleSelectCommandTypeWindow_SelectServant__, v5);
    byte_4B6930D = 1;
  }
  if ( !this->fields.isSelected )
  {
    controller = this->fields.controller;
    if ( controller
      && (SelectTreasureDeviceInfo_k__BackingField = controller->fields._SelectTreasureDeviceInfo_k__BackingField) != 0LL
      && (treasureDevices = (System_Object_array *)SelectTreasureDeviceInfo_k__BackingField->fields.treasureDevices) != 0LL )
    {
      v9 = BasicHelper__IndexValue_object_(
             treasureDevices,
             index - 1,
             0LL,
             (const MethodInfo_2F47CD8 *)Method_BasicHelper_IndexValue_SelectTreasureDeviceInfo_TdChangeParam___);
    }
    else
    {
      v9 = 0LL;
    }
    v10 = Method_BattleSelectCommandTypeWindow_SelectServant__;
    if ( (*((_BYTE *)Method_BattleSelectCommandTypeWindow_SelectServant__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BE4AE4(Method_BattleSelectCommandTypeWindow_SelectServant__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v10, v10[4]);
    if ( v9 )
      v12 = 10;
    else
      v12 = 12;
    OverwriteAssetSoundName__PlayCommonSe(v11, v12, 0LL);
    selectCallBack = this->fields.selectCallBack;
    this->fields.useClose = 1;
    if ( selectCallBack )
    {
      battleServantData = this->fields.battleServantData;
      if ( !battleServantData )
        sub_1BE4D28(v13, v14);
      if ( v9 )
        klass_low = LODWORD(v9[2].klass);
      else
        klass_low = 0LL;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, __int64, _QWORD))selectCallBack->fields.m_target)(
        selectCallBack->fields.original_method_info,
        (unsigned int)battleServantData->fields.uniqueId,
        klass_low,
        *(_QWORD *)&selectCallBack->fields.extra_arg);
    }
  }
}


void __fastcall BattleSelectCommandTypeWindow__SetCallBack(
        BattleSelectCommandTypeWindow_o *this,
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.selectCallBack = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.selectCallBack,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectCommandTypeWindow__Setup(
        BattleSelectCommandTypeWindow_o *this,
        BattleServantData_o *bsData,
        SelectTdCommandController_o *inputController,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  struct SelectTdCommandController_o **p_controller; // x22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  __int64 controller; // x0
  UILabel_o *title_label; // x21
  UILabel_o *nowTypeLabel; // x21
  int32_t v24; // w0
  Il2CppObject *v25; // x0
  UnityEngine_GameObject_o *nowTypeFrameObj; // x21
  UnityEngine_Object_o *v27; // x23
  UnityEngine_Transform_o *v28; // x24
  UnityEngine_Transform_o *v29; // x23
  int v30; // s0
  UnityEngine_Transform_o *v33; // x23
  struct SelecCommandWindowCommandCard_array *commandCardObjArray; // x8
  struct SelectTreasureDeviceInfo_o *SelectTreasureDeviceInfo_k__BackingField; // x24
  __int64 v36; // x28
  unsigned __int64 max_length; // x9
  unsigned __int64 v38; // x29
  UnityEngine_Object_o *v39; // x22
  struct SelecCommandWindowCommandCard_array *v40; // x8
  SelectTreasureDeviceInfo_TdChangeParam_o *v41; // x22
  UnityEngine_Transform_o *v42; // x23
  struct SelecCommandWindowCommandCard_array *v43; // x8
  struct SelecCommandWindowCommandCard_array *v44; // x8
  struct SelecCommandWindowCommandCard_array *v45; // x8
  UnityEngine_Transform_o *v46; // x22

  if ( (byte_4B6930B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_IndexValue_SelecCommandWindowCommandCard___, bsData);
    sub_1BE4ACC(&Method_BasicHelper_IndexValue_SelectTreasureDeviceInfo_TdChangeParam___, v11);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v12);
    byte_4B6930B = 1;
  }
  this->fields.battleServantData = bsData;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.battleServantData,
    (int64_t)bsData,
    (int64_t)inputController,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.controller = inputController;
  p_controller = &this->fields.controller;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.controller,
    (int64_t)inputController,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  controller = (__int64)this->fields.controller;
  if ( !controller )
    goto LABEL_58;
  title_label = this->fields.title_label;
  controller = (__int64)SelectTdCommandController__GetTitle((SelectTdCommandController_o *)controller, 0LL);
  if ( !title_label )
    goto LABEL_58;
  UILabel__set_text(title_label, (System_String_o *)controller, 0LL);
  controller = (__int64)this->fields.controller;
  if ( !controller )
    goto LABEL_58;
  nowTypeLabel = this->fields.nowTypeLabel;
  controller = (__int64)SelectTdCommandController__GetMessageOnSelected((SelectTdCommandController_o *)controller, 0LL);
  if ( !nowTypeLabel )
    goto LABEL_58;
  UILabel__set_text(nowTypeLabel, (System_String_o *)controller, 0LL);
  controller = (__int64)*p_controller;
  if ( !*p_controller )
    goto LABEL_58;
  v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)controller + 376LL))(
          controller,
          *(_QWORD *)(*(_QWORD *)controller + 384LL));
  v25 = BasicHelper__IndexValue_object_(
          (System_Object_array *)this->fields.commandCardObjArray,
          v24,
          0LL,
          (const MethodInfo_2F47CD8 *)Method_BasicHelper_IndexValue_SelecCommandWindowCommandCard___);
  nowTypeFrameObj = this->fields.nowTypeFrameObj;
  v27 = (UnityEngine_Object_o *)v25;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  controller = UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
  if ( !nowTypeFrameObj )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(nowTypeFrameObj, controller & 1, 0LL);
  controller = UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
  if ( (controller & 1) != 0 )
  {
    controller = (__int64)this->fields.nowTypeFrameObj;
    if ( !controller )
      goto LABEL_58;
    controller = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)controller, 0LL);
    if ( !v27 )
      goto LABEL_58;
    v28 = (UnityEngine_Transform_o *)controller;
    controller = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v27, 0LL);
    if ( !v28 )
      goto LABEL_58;
    UnityEngine_Transform__SetParent(v28, (UnityEngine_Transform_o *)controller, 0LL);
    controller = (__int64)this->fields.nowTypeFrameObj;
    if ( !controller )
      goto LABEL_58;
    controller = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)controller, 0LL);
    if ( !*p_controller )
      goto LABEL_58;
    v29 = (UnityEngine_Transform_o *)controller;
    controller = ((__int64 (__fastcall *)(struct SelectTdCommandController_o *, Il2CppMethodPointer))(*p_controller)->klass->vtable._5_GetNowTypeFrameOffset.method)(
                   *p_controller,
                   (*p_controller)->klass->vtable._6_GetDefaultTitle.methodPtr);
    if ( !v29 )
      goto LABEL_58;
    UnityEngine_Transform__set_localPosition(v29, *(UnityEngine_Vector3_o *)&v30, 0LL);
    controller = (__int64)this->fields.nowTypeFrameObj;
    if ( !controller )
      goto LABEL_58;
    controller = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)controller, 0LL);
    v33 = (UnityEngine_Transform_o *)controller;
    if ( !byte_4B612E6 )
    {
      controller = sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v20);
      byte_4B612E6 = 1;
    }
    if ( !v33 )
      goto LABEL_58;
    UnityEngine_Transform__set_localScale(v33, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  }
  if ( !*p_controller )
    goto LABEL_58;
  commandCardObjArray = this->fields.commandCardObjArray;
  if ( !commandCardObjArray )
    goto LABEL_58;
  SelectTreasureDeviceInfo_k__BackingField = (*p_controller)->fields._SelectTreasureDeviceInfo_k__BackingField;
  v36 = 4LL;
  while ( 1 )
  {
    max_length = commandCardObjArray->max_length;
    v38 = v36 - 4;
    if ( v36 - 4 >= (int)max_length )
      break;
    if ( v38 >= max_length )
      goto LABEL_59;
    v39 = (UnityEngine_Object_o *)*((_QWORD *)&commandCardObjArray->obj.klass + v36);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    controller = UnityEngine_Object__op_Equality(v39, 0LL, 0LL);
    if ( (controller & 1) == 0 )
    {
      if ( !SelectTreasureDeviceInfo_k__BackingField )
        goto LABEL_58;
      controller = (__int64)BasicHelper__IndexValue_object_(
                              (System_Object_array *)SelectTreasureDeviceInfo_k__BackingField->fields.treasureDevices,
                              (int)v36 - 4,
                              0LL,
                              (const MethodInfo_2F47CD8 *)Method_BasicHelper_IndexValue_SelectTreasureDeviceInfo_TdChangeParam___);
      v40 = this->fields.commandCardObjArray;
      if ( !v40 )
        goto LABEL_58;
      if ( v38 >= v40->max_length )
        goto LABEL_59;
      v41 = (SelectTreasureDeviceInfo_TdChangeParam_o *)controller;
      controller = *((_QWORD *)&v40->obj.klass + v36);
      if ( !controller )
        goto LABEL_58;
      controller = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)controller, 0LL);
      if ( !this->fields.svtRoot )
        goto LABEL_58;
      v42 = (UnityEngine_Transform_o *)controller;
      controller = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.svtRoot, 0LL);
      if ( !controller )
        goto LABEL_58;
      controller = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)controller, 0LL);
      if ( !v42 )
        goto LABEL_58;
      UnityEngine_Transform__set_parent(v42, (UnityEngine_Transform_o *)controller, 0LL);
      v43 = this->fields.commandCardObjArray;
      if ( !v43 )
        goto LABEL_58;
      if ( v38 >= v43->max_length )
        goto LABEL_59;
      controller = *((_QWORD *)&v43->obj.klass + v36);
      if ( !controller )
        goto LABEL_58;
      controller = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)controller, 0LL);
      if ( !controller )
        goto LABEL_58;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)controller, v41 != 0LL, 0LL);
      if ( v41 )
      {
        v44 = this->fields.commandCardObjArray;
        if ( !v44 )
          goto LABEL_58;
        if ( v38 >= v44->max_length )
LABEL_59:
          sub_1BE4D30(controller, v20);
        controller = *((_QWORD *)&v44->obj.klass + v36);
        if ( !controller )
          goto LABEL_58;
        SelecCommandWindowCommandCard__Setup((SelecCommandWindowCommandCard_o *)controller, v41, bsData, 0LL);
        v45 = this->fields.commandCardObjArray;
        if ( !v45 )
          goto LABEL_58;
        if ( v38 >= v45->max_length )
          goto LABEL_59;
        controller = *((_QWORD *)&v45->obj.klass + v36);
        if ( !controller )
          goto LABEL_58;
        controller = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)controller, 0LL);
        v46 = (UnityEngine_Transform_o *)controller;
        if ( !byte_4B612E6 )
        {
          controller = sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v20);
          byte_4B612E6 = 1;
        }
        if ( !v46 )
          goto LABEL_58;
        UnityEngine_Transform__set_localScale(v46, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      }
    }
    commandCardObjArray = this->fields.commandCardObjArray;
    ++v36;
    if ( !commandCardObjArray )
      goto LABEL_58;
  }
  controller = (__int64)this->fields.parentPanel;
  if ( !controller
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)controller, 1, 0LL),
        (controller = (__int64)this->fields.svtRoot) == 0) )
  {
LABEL_58:
    sub_1BE4D28(controller, v20);
  }
  *(_BYTE *)(controller + 57) = 1;
  UIGrid__set_repositionNow((UIGrid_o *)controller, 1, 0LL);
}


UnityEngine_GameObject_o *__fastcall BattleSelectCommandTypeWindow__get_closeBtnObject(
        BattleSelectCommandTypeWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4B6930E & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6930E = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1BE4D28(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall BattleSelectCommandTypeWindow__onCloseButton(
        BattleSelectCommandTypeWindow_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.useClose )
    BattleSelectCommandTypeWindow__SelectServant(this, 0, v2);
}


void __fastcall BattleSelectCommandTypeWindow__setInitialPos(
        BattleSelectCommandTypeWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_6;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v5 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4B612E1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v4);
    byte_4B612E1 = 1;
  }
  if ( !v5 )
LABEL_6:
    sub_1BE4D28(gameObject, v4);
  UnityEngine_Transform__set_localPosition(v5, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  BattleWindowComponent__setInitialPos((BattleWindowComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectCommandTypeWindow__setUseClose(
        BattleSelectCommandTypeWindow_o *this,
        bool flg,
        const MethodInfo *method)
{
  bool v5; // w22
  UnityEngine_Object_o *cancelButton; // x21
  __int64 v7; // x1
  UnityEngine_Collider_o *v8; // x0

  v5 = flg;
  if ( (byte_4B6930C & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, flg);
    byte_4B6930C = 1;
  }
  this->fields.useClose = v5;
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cancelButton, 0LL, 0LL) )
  {
    v8 = this->fields.cancelButton;
    if ( !v8 )
      sub_1BE4D28(0LL, v7);
    UnityEngine_Collider__set_enabled(v8, flg, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSelectCommandTypeWindow_SelectServantCallBack___ctor(
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A29430;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A293D8;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall BattleSelectCommandTypeWindow_SelectServantCallBack__BeginInvoke(
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *this,
        int32_t uniqueId,
        int32_t cmdType,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v14; // [xsp+18h] [xbp-38h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-34h] BYREF

  v14 = cmdType;
  v15 = uniqueId;
  if ( (byte_4B6930F & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&uniqueId);
    byte_4B6930F = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(int_TypeInfo, &v15, *(_QWORD *)&cmdType, callback, object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v13, callback, object);
}


void __fastcall BattleSelectCommandTypeWindow_SelectServantCallBack__EndInvoke(
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
}


void __fastcall BattleSelectCommandTypeWindow_SelectServantCallBack__Invoke(
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *this,
        int32_t uniqueId,
        int32_t cmdType,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    uniqueId,
    cmdType,
    *(_QWORD *)&this->fields.extra_arg);
}