void __fastcall CharaGraphKindTabButtonGroup___ctor(CharaGraphKindTabButtonGroup_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CharaGraphKindTabButtonGroup__AssertionForSerializeField(
        CharaGraphKindTabButtonGroup_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CharaGraphKindTabButtonGroup__Awake(CharaGraphKindTabButtonGroup_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(CharaGraphKindTabButtonGroup_o *, void *))this->klass->vtable._4_AssertionForSerializeField.method)(
    this,
    this->klass[1]._1.image);
}


void __fastcall CharaGraphKindTabButtonGroup__ClickTabServant(
        CharaGraphKindTabButtonGroup_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickTabServant_k__BackingField, 0LL);
}


void __fastcall CharaGraphKindTabButtonGroup__ClickTabServantCommandCode(
        CharaGraphKindTabButtonGroup_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickTabCommandCode_k__BackingField, 0LL);
}


void __fastcall CharaGraphKindTabButtonGroup__ClickTabServantEquip(
        CharaGraphKindTabButtonGroup_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickTabServantEquip_k__BackingField, 0LL);
}


bool __fastcall CharaGraphKindTabButtonGroup__IsActive(UnityEngine_Component_o *c, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_49FD89F & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_49FD89F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return 0;
  if ( !c || (gameObject = UnityEngine_Component__get_gameObject(c, 0LL)) == 0LL )
    sub_1B64ACC(gameObject, v4);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}


void __fastcall CharaGraphKindTabButtonGroup__SetupTabButton(
        UICommonButton_o *button,
        UISprite_o *titleSprite,
        UISprite_o *tabSprite,
        bool isSelectedTab,
        System_String_o *onName,
        System_String_o *offName,
        bool isInit,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  _BOOL8 v17; // x0
  __int64 v18; // x1
  _BOOL4 v19; // w25
  bool enabled; // w0
  System_String_o *v21; // x1
  __int64 *v22; // x8

  if ( (byte_49FD89E & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, titleSprite);
    sub_1B64870(&StringLiteral_17408/*"btn_bg_12"*/, v15);
    sub_1B64870(&StringLiteral_17410/*"btn_bg_19"*/, v16);
    byte_49FD89E = 1;
  }
  if ( CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)button, (const MethodInfo *)titleSprite) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)titleSprite, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v17 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)tabSprite, 0LL, 0LL);
      if ( !v17 )
      {
        if ( !button )
          goto LABEL_20;
        ((void (__fastcall *)(UICommonButton_o *, __int64, Il2CppMethodPointer))button->klass->vtable._5_set_isEnabled.method)(
          button,
          1LL,
          button->klass->vtable._6_OnInit.methodPtr);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)button, !isSelectedTab, 0LL);
        v19 = !isInit;
        ((void (__fastcall *)(UICommonButton_o *, _QWORD, _BOOL4, Il2CppMethodPointer))button->klass->vtable._14_SetState.method)(
          button,
          0LL,
          v19,
          button->klass->vtable._15_OnPress.methodPtr);
        enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)button, 0LL);
        UICommonButton__SetColliderEnable(button, enabled, v19, 0LL);
        if ( !titleSprite )
          goto LABEL_20;
        v21 = isSelectedTab ? onName : offName;
        UISprite__set_spriteName(titleSprite, v21, 0LL);
        if ( !tabSprite )
LABEL_20:
          sub_1B64ACC(v17, v18);
        v22 = &StringLiteral_17410/*"btn_bg_19"*/;
        if ( !isSelectedTab )
          v22 = &StringLiteral_17408/*"btn_bg_12"*/;
        UISprite__set_spriteName(tabSprite, (System_String_o *)*v22, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphKindTabButtonGroup__SetupTabButtons(
        CharaGraphKindTabButtonGroup_o *this,
        int32_t iTabKind,
        bool isInit,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  bool v13; // w21
  const MethodInfo *v14; // x7
  const MethodInfo *v15; // x7

  if ( (byte_49FD89D & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_17502/*"btn_txt_craftessence_off"*/, *(_QWORD *)&iTabKind);
    sub_1B64870(&StringLiteral_17542/*"btn_txt_servant_off"*/, v8);
    sub_1B64870(&StringLiteral_17498/*"btn_txt_cc_off"*/, v9);
    sub_1B64870(&StringLiteral_17499/*"btn_txt_cc_on"*/, v10);
    sub_1B64870(&StringLiteral_17543/*"btn_txt_servant_on"*/, v11);
    sub_1B64870(&StringLiteral_17503/*"btn_txt_craftessence_on"*/, v12);
    byte_49FD89D = 1;
  }
  v13 = isInit;
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.servantTabButton,
    this->fields.servantTabTitleSprite,
    this->fields.servantTabSprite,
    iTabKind == 0,
    (System_String_o *)StringLiteral_17543/*"btn_txt_servant_on"*/,
    (System_String_o *)StringLiteral_17542/*"btn_txt_servant_off"*/,
    v13,
    v4);
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.servantEquipTabButton,
    this->fields.servantEquipTabTitleSprite,
    this->fields.servantEquipTabSprite,
    iTabKind == 1,
    (System_String_o *)StringLiteral_17503/*"btn_txt_craftessence_on"*/,
    (System_String_o *)StringLiteral_17502/*"btn_txt_craftessence_off"*/,
    v13,
    v14);
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.commandCodeTabButton,
    this->fields.commandCodeTabTitleSprite,
    this->fields.commandCodeTabSprite,
    iTabKind == 2,
    (System_String_o *)StringLiteral_17499/*"btn_txt_cc_on"*/,
    (System_String_o *)StringLiteral_17498/*"btn_txt_cc_off"*/,
    v13,
    v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphKindTabButtonGroup__SetupTabLabel(
        CharaGraphKindTabButtonGroup_o *this,
        int32_t iTabKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  LocalizationManager_c *v12; // x0
  float *static_fields; // x8
  float v14; // s10
  float v15; // s11
  float v16; // s8
  float v17; // s9
  struct LocalizationManager_StaticFields *v18; // x8
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  UserGameEntity_o *SelfUserGame; // x22
  UserServantMaster_o *Master_object; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  UILabel_o *servantTabLabel; // x23
  System_String_o *v29; // x24
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x25
  Il2CppObject *v37; // x0
  float v38; // s3
  float v39; // s2
  float v40; // s1
  float v41; // s0
  const MethodInfo *v42; // x1
  UILabel_o *servantEquipTabLabel; // x23
  System_String_o *v44; // x24
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  Il2CppObject *v51; // x25
  Il2CppObject *v52; // x0
  float v53; // s3
  float v54; // s2
  float v55; // s1
  float v56; // s0
  int32_t Count; // w0
  UILabel_o *commandCodeTabLabel; // x21
  int32_t v59; // w24
  System_String_o *v60; // x23
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  Il2CppObject *v67; // x24
  BalanceConfig_c *v68; // x0
  Il2CppObject *v69; // x0
  int32_t svtKeep; // [xsp+0h] [xbp-A0h] BYREF
  int32_t v71; // [xsp+4h] [xbp-9Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FD89C & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_UserCommandCodeMaster___, *(_QWORD *)&iTabKind);
    sub_1B64870(&Method_DataManager_GetMaster_UserServantMaster___, v5);
    sub_1B64870(&DataManager_TypeInfo, v6);
    sub_1B64870(&int_TypeInfo, v7);
    sub_1B64870(&LocalizationManager_TypeInfo, v8);
    sub_1B64870(&StringLiteral_3429/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, v9);
    sub_1B64870(&StringLiteral_3430/*"CHARA_GRAPH_TAB_SERVANT"*/, v10);
    sub_1B64870(&StringLiteral_3431/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, v11);
    byte_49FD89C = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_49F988B )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, *(_QWORD *)&iTabKind);
    byte_49F988B = 1;
  }
  v12 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v12->static_fields;
  v15 = static_fields[20];
  v14 = static_fields[21];
  v17 = static_fields[22];
  v16 = static_fields[23];
  if ( !byte_49F988C )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, *(_QWORD *)&iTabKind);
    v12 = LocalizationManager_TypeInfo;
    byte_49F988C = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = LocalizationManager_TypeInfo;
  }
  v18 = v12->static_fields;
  r = v18->selectEffectColor.fields.r;
  g = v18->selectEffectColor.fields.g;
  b = v18->selectEffectColor.fields.b;
  a = v18->selectEffectColor.fields.a;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_51;
  UserServantMaster__getCount(Master_object, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.servantTabButton, v26) )
  {
    servantTabLabel = this->fields.servantTabLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3430/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
    v71 = servantEquipSum[1];
    Master_object = (UserServantMaster_o *)j_il2cpp_value_box_0(int_TypeInfo, &v71, v30, v31, v32);
    if ( !SelfUserGame )
      goto LABEL_51;
    v36 = (Il2CppObject *)Master_object;
    svtKeep = SelfUserGame->fields.svtKeep;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v33, v34, v35);
    Master_object = (UserServantMaster_o *)System_String__Format_61397948(v29, v36, v37, 0LL);
    if ( !servantTabLabel )
      goto LABEL_51;
    UILabel__set_text(servantTabLabel, (System_String_o *)Master_object, 0LL);
    Master_object = (UserServantMaster_o *)this->fields.servantTabLabel;
    v38 = v16;
    v39 = v17;
    v40 = v14;
    v41 = v15;
    if ( !iTabKind )
    {
      v38 = a;
      v39 = b;
      v40 = g;
      v41 = r;
    }
    if ( !Master_object )
      goto LABEL_51;
    UILabel__set_effectColor((UILabel_o *)Master_object, *(UnityEngine_Color_o *)&v41, 0LL);
  }
  if ( CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.servantEquipTabButton, v27) )
  {
    servantEquipTabLabel = this->fields.servantEquipTabLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_3431/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
    v71 = servantEquipSum[0];
    Master_object = (UserServantMaster_o *)j_il2cpp_value_box_0(int_TypeInfo, &v71, v45, v46, v47);
    if ( !SelfUserGame )
      goto LABEL_51;
    v51 = (Il2CppObject *)Master_object;
    svtKeep = SelfUserGame->fields.svtEquipKeep;
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v48, v49, v50);
    Master_object = (UserServantMaster_o *)System_String__Format_61397948(v44, v51, v52, 0LL);
    if ( !servantEquipTabLabel )
      goto LABEL_51;
    UILabel__set_text(servantEquipTabLabel, (System_String_o *)Master_object, 0LL);
    Master_object = (UserServantMaster_o *)this->fields.servantEquipTabLabel;
    v53 = v16;
    v54 = v17;
    v55 = v14;
    v56 = v15;
    if ( iTabKind == 1 )
    {
      v53 = a;
      v54 = b;
      v55 = g;
      v56 = r;
    }
    if ( !Master_object )
      goto LABEL_51;
    UILabel__set_effectColor((UILabel_o *)Master_object, *(UnityEngine_Color_o *)&v56, 0LL);
  }
  if ( !CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.commandCodeTabButton, v42) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_51;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Master_object, 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  v59 = Count;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_3429/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v71 = v59;
  Master_object = (UserServantMaster_o *)j_il2cpp_value_box_0(int_TypeInfo, &v71, v61, v62, v63);
  if ( !SelfUserGame )
    goto LABEL_51;
  v67 = (Il2CppObject *)Master_object;
  if ( !byte_49F9C6B )
  {
    sub_1B64870(&BalanceConfig_TypeInfo, v25);
    byte_49F9C6B = 1;
  }
  v68 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v68 = BalanceConfig_TypeInfo;
  }
  svtKeep = v68->static_fields->CommandCodeFrameMax;
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v64, v65, v66);
  Master_object = (UserServantMaster_o *)System_String__Format_61397948(v60, v67, v69, 0LL);
  if ( !commandCodeTabLabel )
    goto LABEL_51;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Master_object, 0LL);
  Master_object = (UserServantMaster_o *)this->fields.commandCodeTabLabel;
  if ( iTabKind == 2 )
  {
    v16 = a;
    v17 = b;
    v14 = g;
    v15 = r;
  }
  if ( !Master_object )
LABEL_51:
    sub_1B64ACC(Master_object, v25);
  v73.fields.r = v15;
  v73.fields.g = v14;
  v73.fields.b = v17;
  v73.fields.a = v16;
  UILabel__set_effectColor((UILabel_o *)Master_object, v73, 0LL);
}


System_Action_o *__fastcall CharaGraphKindTabButtonGroup__get_OnClickTabCommandCode(
        CharaGraphKindTabButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickTabCommandCode_k__BackingField;
}


System_Action_o *__fastcall CharaGraphKindTabButtonGroup__get_OnClickTabServant(
        CharaGraphKindTabButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickTabServant_k__BackingField;
}


System_Action_o *__fastcall CharaGraphKindTabButtonGroup__get_OnClickTabServantEquip(
        CharaGraphKindTabButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickTabServantEquip_k__BackingField;
}


void __fastcall CharaGraphKindTabButtonGroup__set_OnClickTabCommandCode(
        CharaGraphKindTabButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._OnClickTabCommandCode_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._OnClickTabCommandCode_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphKindTabButtonGroup__set_OnClickTabServant(
        CharaGraphKindTabButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._OnClickTabServant_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._OnClickTabServant_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphKindTabButtonGroup__set_OnClickTabServantEquip(
        CharaGraphKindTabButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._OnClickTabServantEquip_k__BackingField = value;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields._OnClickTabServantEquip_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}