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
    sub_1BCAA3C(0LL, call);
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
  __int64 v6; // x2
  UnityEngine_GameObject_o *parentPanel; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  BattleWindowOuterClickComponent_OuterClickCall_o *v11; // x20

  if ( (byte_4B188C7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleSelectCommandTypeWindow_onCloseButton__, call, method);
    sub_1BCA7E0(&BattleWindowOuterClickComponent_OuterClickCall_TypeInfo, v5, v6);
    byte_4B188C7 = 1;
  }
  parentPanel = this->fields.parentPanel;
  if ( !parentPanel )
    sub_1BCAA3C(0LL, call);
  UnityEngine_GameObject__SetActive(parentPanel, 1, 0LL);
  this->fields.isSelected = 0;
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  v11 = (BattleWindowOuterClickComponent_OuterClickCall_o *)sub_1BCAA2C(
                                                              BattleWindowOuterClickComponent_OuterClickCall_TypeInfo,
                                                              v8,
                                                              v9,
                                                              v10);
  BattleWindowOuterClickComponent_OuterClickCall___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleSelectCommandTypeWindow_onCloseButton__,
    0LL);
  BattleWindowOuterClickManagerComponent__setOuterClickCallBack(
    (BattleWindowOuterClickManagerComponent_o *)this,
    v11,
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
  __int64 v6; // x2
  struct SelectTdCommandController_o *controller; // x8
  struct SelectTreasureDeviceInfo_o *SelectTreasureDeviceInfo_k__BackingField; // x8
  System_Object_array *treasureDevices; // x0
  Il2CppObject *v10; // x20
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  int32_t v13; // w1
  __int64 v14; // x0
  __int64 v15; // x1
  struct BattleSelectCommandTypeWindow_SelectServantCallBack_o *selectCallBack; // x8
  struct BattleServantData_o *battleServantData; // x9
  __int64 klass_low; // x2

  if ( (byte_4B188CA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_SelectTreasureDeviceInfo_TdChangeParam___, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_BattleSelectCommandTypeWindow_SelectServant__, v5, v6);
    byte_4B188CA = 1;
  }
  if ( !this->fields.isSelected )
  {
    controller = this->fields.controller;
    if ( controller
      && (SelectTreasureDeviceInfo_k__BackingField = controller->fields._SelectTreasureDeviceInfo_k__BackingField) != 0LL
      && (treasureDevices = (System_Object_array *)SelectTreasureDeviceInfo_k__BackingField->fields.treasureDevices) != 0LL )
    {
      v10 = BasicHelper__IndexValue_object_(
              treasureDevices,
              index - 1,
              0LL,
              (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_SelectTreasureDeviceInfo_TdChangeParam___);
    }
    else
    {
      v10 = 0LL;
    }
    v11 = Method_BattleSelectCommandTypeWindow_SelectServant__;
    if ( (*((_BYTE *)Method_BattleSelectCommandTypeWindow_SelectServant__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1BCA7F8(Method_BattleSelectCommandTypeWindow_SelectServant__);
    v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
    if ( v10 )
      v13 = 10;
    else
      v13 = 12;
    OverwriteAssetSoundName__PlayCommonSe(v12, v13, 0LL);
    selectCallBack = this->fields.selectCallBack;
    this->fields.useClose = 1;
    if ( selectCallBack )
    {
      battleServantData = this->fields.battleServantData;
      if ( !battleServantData )
        sub_1BCAA3C(v14, v15);
      if ( v10 )
        klass_low = LODWORD(v10[2].klass);
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
  sub_1BCA784(
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct SelectTdCommandController_o **p_controller; // x22
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  __int64 controller; // x0
  UILabel_o *title_label; // x21
  UILabel_o *nowTypeLabel; // x21
  int32_t v26; // w0
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  UnityEngine_GameObject_o *nowTypeFrameObj; // x21
  UnityEngine_Object_o *v30; // x23
  UnityEngine_Transform_o *v31; // x24
  UnityEngine_Transform_o *v32; // x23
  int v33; // s0
  __int64 v36; // x2
  UnityEngine_Transform_o *v37; // x23
  struct SelecCommandWindowCommandCard_array *commandCardObjArray; // x8
  struct SelectTreasureDeviceInfo_o *SelectTreasureDeviceInfo_k__BackingField; // x24
  __int64 v40; // x28
  unsigned __int64 max_length; // x9
  unsigned __int64 v42; // x29
  UnityEngine_Object_o *v43; // x22
  struct SelecCommandWindowCommandCard_array *v44; // x8
  SelectTreasureDeviceInfo_TdChangeParam_o *v45; // x22
  UnityEngine_Transform_o *v46; // x23
  struct SelecCommandWindowCommandCard_array *v47; // x8
  struct SelecCommandWindowCommandCard_array *v48; // x8
  struct SelecCommandWindowCommandCard_array *v49; // x8
  __int64 v50; // x2
  UnityEngine_Transform_o *v51; // x22

  if ( (byte_4B188C8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_SelecCommandWindowCommandCard___, bsData, inputController);
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_SelectTreasureDeviceInfo_TdChangeParam___, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B188C8 = 1;
  }
  this->fields.battleServantData = bsData;
  sub_1BCA784(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.controller,
    (int64_t)inputController,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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
  v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)controller + 376LL))(
          controller,
          *(_QWORD *)(*(_QWORD *)controller + 384LL));
  v27 = BasicHelper__IndexValue_object_(
          (System_Object_array *)this->fields.commandCardObjArray,
          v26,
          0LL,
          (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_SelecCommandWindowCommandCard___);
  nowTypeFrameObj = this->fields.nowTypeFrameObj;
  v30 = (UnityEngine_Object_o *)v27;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  controller = UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
  if ( !nowTypeFrameObj )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(nowTypeFrameObj, controller & 1, 0LL);
  controller = UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
  if ( (controller & 1) != 0 )
  {
    controller = (__int64)this->fields.nowTypeFrameObj;
    if ( !controller )
      goto LABEL_58;
    controller = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)controller, 0LL);
    if ( !v30 )
      goto LABEL_58;
    v31 = (UnityEngine_Transform_o *)controller;
    controller = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v30, 0LL);
    if ( !v31 )
      goto LABEL_58;
    UnityEngine_Transform__SetParent(v31, (UnityEngine_Transform_o *)controller, 0LL);
    controller = (__int64)this->fields.nowTypeFrameObj;
    if ( !controller )
      goto LABEL_58;
    controller = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)controller, 0LL);
    if ( !*p_controller )
      goto LABEL_58;
    v32 = (UnityEngine_Transform_o *)controller;
    controller = ((__int64 (__fastcall *)(struct SelectTdCommandController_o *, Il2CppMethodPointer))(*p_controller)->klass->vtable._5_GetNowTypeFrameOffset.method)(
                   *p_controller,
                   (*p_controller)->klass->vtable._6_GetDefaultTitle.methodPtr);
    if ( !v32 )
      goto LABEL_58;
    UnityEngine_Transform__set_localPosition(v32, *(UnityEngine_Vector3_o *)&v33, 0LL);
    controller = (__int64)this->fields.nowTypeFrameObj;
    if ( !controller )
      goto LABEL_58;
    controller = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)controller, 0LL);
    v37 = (UnityEngine_Transform_o *)controller;
    if ( !byte_4B109C6 )
    {
      controller = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v22, v36);
      byte_4B109C6 = 1;
    }
    if ( !v37 )
      goto LABEL_58;
    UnityEngine_Transform__set_localScale(v37, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  }
  if ( !*p_controller )
    goto LABEL_58;
  commandCardObjArray = this->fields.commandCardObjArray;
  if ( !commandCardObjArray )
    goto LABEL_58;
  SelectTreasureDeviceInfo_k__BackingField = (*p_controller)->fields._SelectTreasureDeviceInfo_k__BackingField;
  v40 = 4LL;
  while ( 1 )
  {
    max_length = commandCardObjArray->max_length;
    v42 = v40 - 4;
    if ( v40 - 4 >= (int)max_length )
      break;
    if ( v42 >= max_length )
      goto LABEL_59;
    v43 = (UnityEngine_Object_o *)*((_QWORD *)&commandCardObjArray->obj.klass + v40);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
    controller = UnityEngine_Object__op_Equality(v43, 0LL, 0LL);
    if ( (controller & 1) == 0 )
    {
      if ( !SelectTreasureDeviceInfo_k__BackingField )
        goto LABEL_58;
      controller = (__int64)BasicHelper__IndexValue_object_(
                              (System_Object_array *)SelectTreasureDeviceInfo_k__BackingField->fields.treasureDevices,
                              (int)v40 - 4,
                              0LL,
                              (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_SelectTreasureDeviceInfo_TdChangeParam___);
      v44 = this->fields.commandCardObjArray;
      if ( !v44 )
        goto LABEL_58;
      if ( v42 >= v44->max_length )
        goto LABEL_59;
      v45 = (SelectTreasureDeviceInfo_TdChangeParam_o *)controller;
      controller = *((_QWORD *)&v44->obj.klass + v40);
      if ( !controller )
        goto LABEL_58;
      controller = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)controller, 0LL);
      if ( !this->fields.svtRoot )
        goto LABEL_58;
      v46 = (UnityEngine_Transform_o *)controller;
      controller = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.svtRoot, 0LL);
      if ( !controller )
        goto LABEL_58;
      controller = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)controller, 0LL);
      if ( !v46 )
        goto LABEL_58;
      UnityEngine_Transform__set_parent(v46, (UnityEngine_Transform_o *)controller, 0LL);
      v47 = this->fields.commandCardObjArray;
      if ( !v47 )
        goto LABEL_58;
      if ( v42 >= v47->max_length )
        goto LABEL_59;
      controller = *((_QWORD *)&v47->obj.klass + v40);
      if ( !controller )
        goto LABEL_58;
      controller = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)controller, 0LL);
      if ( !controller )
        goto LABEL_58;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)controller, v45 != 0LL, 0LL);
      if ( v45 )
      {
        v48 = this->fields.commandCardObjArray;
        if ( !v48 )
          goto LABEL_58;
        if ( v42 >= v48->max_length )
LABEL_59:
          sub_1BCAA44(controller, v22);
        controller = *((_QWORD *)&v48->obj.klass + v40);
        if ( !controller )
          goto LABEL_58;
        SelecCommandWindowCommandCard__Setup((SelecCommandWindowCommandCard_o *)controller, v45, bsData, 0LL);
        v49 = this->fields.commandCardObjArray;
        if ( !v49 )
          goto LABEL_58;
        if ( v42 >= v49->max_length )
          goto LABEL_59;
        controller = *((_QWORD *)&v49->obj.klass + v40);
        if ( !controller )
          goto LABEL_58;
        controller = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)controller, 0LL);
        v51 = (UnityEngine_Transform_o *)controller;
        if ( !byte_4B109C6 )
        {
          controller = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v22, v50);
          byte_4B109C6 = 1;
        }
        if ( !v51 )
          goto LABEL_58;
        UnityEngine_Transform__set_localScale(v51, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      }
    }
    commandCardObjArray = this->fields.commandCardObjArray;
    ++v40;
    if ( !commandCardObjArray )
      goto LABEL_58;
  }
  controller = (__int64)this->fields.parentPanel;
  if ( !controller
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)controller, 1, 0LL),
        (controller = (__int64)this->fields.svtRoot) == 0) )
  {
LABEL_58:
    sub_1BCAA3C(controller, v22);
  }
  *(_BYTE *)(controller + 57) = 1;
  UIGrid__set_repositionNow((UIGrid_o *)controller, 1, 0LL);
}


UnityEngine_GameObject_o *__fastcall BattleSelectCommandTypeWindow__get_closeBtnObject(
        BattleSelectCommandTypeWindow_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B188CB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B188CB = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
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
  __int64 v5; // x2
  UnityEngine_Transform_o *v6; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_6;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v6 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4B109C1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v4, v5);
    byte_4B109C1 = 1;
  }
  if ( !v6 )
LABEL_6:
    sub_1BCAA3C(gameObject, v4);
  UnityEngine_Transform__set_localPosition(v6, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
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
  if ( (byte_4B188C9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, flg, method);
    byte_4B188C9 = 1;
  }
  this->fields.useClose = v5;
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, flg);
  if ( UnityEngine_Object__op_Inequality(cancelButton, 0LL, 0LL) )
  {
    v8 = this->fields.cancelButton;
    if ( !v8 )
      sub_1BCAA3C(0LL, v7);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0F658;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0F600;
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
  __int64 v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v11 = cmdType;
  v12 = uniqueId;
  if ( (byte_4B188CC & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&uniqueId, *(_QWORD *)&cmdType);
    byte_4B188CC = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v10, callback, object);
}


void __fastcall BattleSelectCommandTypeWindow_SelectServantCallBack__EndInvoke(
        BattleSelectCommandTypeWindow_SelectServantCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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