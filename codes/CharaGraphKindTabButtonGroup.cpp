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

  if ( (byte_4215E5E & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4215E5E = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return 0;
  if ( !c || (gameObject = UnityEngine_Component__get_gameObject(c, 0LL)) == 0LL )
    sub_B0D97C(gameObject);
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
  _BOOL4 v18; // w25
  bool enabled; // w0
  System_String_o *v20; // x1
  __int64 *v21; // x8

  if ( (byte_4215E5D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, titleSprite);
    sub_B0D8A4(&StringLiteral_17013/*"btn_bg_12"*/, v15);
    sub_B0D8A4(&StringLiteral_17015/*"btn_bg_19"*/, v16);
    byte_4215E5D = 1;
  }
  if ( CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)button, (const MethodInfo *)titleSprite) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)titleSprite, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v17 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)tabSprite, 0LL, 0LL);
      if ( !v17 )
      {
        if ( !button )
          goto LABEL_22;
        ((void (__fastcall *)(UICommonButton_o *, __int64, Il2CppMethodPointer))button->klass->vtable._5_set_isEnabled.method)(
          button,
          1LL,
          button->klass->vtable._6_OnInit.methodPtr);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)button, !isSelectedTab, 0LL);
        v18 = !isInit;
        ((void (__fastcall *)(UICommonButton_o *, _QWORD, _BOOL4, Il2CppMethodPointer))button->klass->vtable._14_SetState.method)(
          button,
          0LL,
          v18,
          button->klass->vtable._15_OnPress.methodPtr);
        enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)button, 0LL);
        UICommonButton__SetColliderEnable(button, enabled, v18, 0LL);
        if ( !titleSprite )
          goto LABEL_22;
        v20 = isSelectedTab ? onName : offName;
        UISprite__set_spriteName(titleSprite, v20, 0LL);
        if ( !tabSprite )
LABEL_22:
          sub_B0D97C(v17);
        v21 = &StringLiteral_17015/*"btn_bg_19"*/;
        if ( !isSelectedTab )
          v21 = &StringLiteral_17013/*"btn_bg_12"*/;
        UISprite__set_spriteName(tabSprite, (System_String_o *)*v21, 0LL);
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

  if ( (byte_4215E5C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17098/*"btn_txt_craftessence_off"*/, *(_QWORD *)&iTabKind);
    sub_B0D8A4(&StringLiteral_17138/*"btn_txt_servant_off"*/, v8);
    sub_B0D8A4(&StringLiteral_17095/*"btn_txt_cc_off"*/, v9);
    sub_B0D8A4(&StringLiteral_17096/*"btn_txt_cc_on"*/, v10);
    sub_B0D8A4(&StringLiteral_17139/*"btn_txt_servant_on"*/, v11);
    sub_B0D8A4(&StringLiteral_17099/*"btn_txt_craftessence_on"*/, v12);
    byte_4215E5C = 1;
  }
  v13 = isInit;
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.servantTabButton,
    this->fields.servantTabTitleSprite,
    this->fields.servantTabSprite,
    iTabKind == 0,
    (System_String_o *)StringLiteral_17139/*"btn_txt_servant_on"*/,
    (System_String_o *)StringLiteral_17138/*"btn_txt_servant_off"*/,
    v13,
    v4);
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.servantEquipTabButton,
    this->fields.servantEquipTabTitleSprite,
    this->fields.servantEquipTabSprite,
    iTabKind == 1,
    (System_String_o *)StringLiteral_17099/*"btn_txt_craftessence_on"*/,
    (System_String_o *)StringLiteral_17098/*"btn_txt_craftessence_off"*/,
    v13,
    v14);
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.commandCodeTabButton,
    this->fields.commandCodeTabTitleSprite,
    this->fields.commandCodeTabSprite,
    iTabKind == 2,
    (System_String_o *)StringLiteral_17096/*"btn_txt_cc_on"*/,
    (System_String_o *)StringLiteral_17095/*"btn_txt_cc_off"*/,
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
  float v14; // s8
  float v15; // s9
  float v16; // s10
  float v17; // s11
  float *v18; // x8
  float v19; // s12
  float v20; // s13
  float v21; // s14
  float v22; // s15
  UserGameEntity_o *SelfUserGame; // x22
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  UILabel_o *servantTabLabel; // x23
  System_String_o *v28; // x24
  Il2CppObject *v29; // x25
  Il2CppObject *v30; // x0
  float v31; // s3
  float v32; // s2
  float v33; // s1
  float v34; // s0
  const MethodInfo *v35; // x1
  UILabel_o *servantEquipTabLabel; // x23
  System_String_o *v37; // x24
  Il2CppObject *v38; // x25
  Il2CppObject *v39; // x0
  float v40; // s3
  float v41; // s2
  float v42; // s1
  float v43; // s0
  int32_t Count; // w0
  UILabel_o *commandCodeTabLabel; // x21
  int32_t v46; // w24
  System_String_o *v47; // x23
  __int64 v48; // x1
  Il2CppObject *v49; // x24
  BalanceConfig_c *v50; // x0
  Il2CppObject *v51; // x0
  float v52; // s3
  float v53; // s2
  float v54; // s1
  float v55; // s0
  int32_t svtKeep; // [xsp+8h] [xbp-98h] BYREF
  int32_t v57; // [xsp+Ch] [xbp-94h] BYREF
  int32_t servantEquipSum[2]; // [xsp+58h] [xbp-48h] BYREF

  if ( (byte_4215E5B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_UserCommandCodeMaster___, *(_QWORD *)&iTabKind);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserServantMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&int_TypeInfo, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_2981/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, v9);
    sub_B0D8A4(&StringLiteral_2982/*"CHARA_GRAPH_TAB_SERVANT"*/, v10);
    sub_B0D8A4(&StringLiteral_2983/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, v11);
    byte_4215E5B = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4211435 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&iTabKind);
    byte_4211435 = 1;
  }
  v12 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v12->static_fields;
  v14 = static_fields[20];
  v15 = static_fields[21];
  v16 = static_fields[22];
  v17 = static_fields[23];
  if ( !byte_4211436 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&iTabKind);
    v12 = LocalizationManager_TypeInfo;
    byte_4211436 = 1;
  }
  if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = LocalizationManager_TypeInfo;
  }
  v18 = (float *)v12->static_fields;
  v19 = v18[24];
  v20 = v18[25];
  v21 = v18[26];
  v22 = v18[27];
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_90;
  UserServantMaster__getCount(Master_WarQuestSelectionMaster, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.servantTabButton, v25) )
  {
    servantTabLabel = this->fields.servantTabLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_2982/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
    v57 = servantEquipSum[1];
    Master_WarQuestSelectionMaster = (UserServantMaster_o *)j_il2cpp_value_box_0(int_TypeInfo, &v57);
    if ( !SelfUserGame )
      goto LABEL_90;
    v29 = (Il2CppObject *)Master_WarQuestSelectionMaster;
    svtKeep = SelfUserGame->fields.svtKeep;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
    Master_WarQuestSelectionMaster = (UserServantMaster_o *)System_String__Format_43845440(v28, v29, v30, 0LL);
    if ( !servantTabLabel )
      goto LABEL_90;
    UILabel__set_text(servantTabLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
    Master_WarQuestSelectionMaster = (UserServantMaster_o *)this->fields.servantTabLabel;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_90;
    if ( iTabKind )
      v31 = v17;
    else
      v31 = v22;
    if ( iTabKind )
      v32 = v16;
    else
      v32 = v21;
    if ( iTabKind )
      v33 = v15;
    else
      v33 = v20;
    if ( iTabKind )
      v34 = v14;
    else
      v34 = v19;
    UILabel__set_effectColor((UILabel_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(&v31 - 3), 0LL);
  }
  if ( CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.servantEquipTabButton, v26) )
  {
    servantEquipTabLabel = this->fields.servantEquipTabLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_2983/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
    v57 = servantEquipSum[0];
    Master_WarQuestSelectionMaster = (UserServantMaster_o *)j_il2cpp_value_box_0(int_TypeInfo, &v57);
    if ( !SelfUserGame )
      goto LABEL_90;
    v38 = (Il2CppObject *)Master_WarQuestSelectionMaster;
    svtKeep = SelfUserGame->fields.svtEquipKeep;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
    Master_WarQuestSelectionMaster = (UserServantMaster_o *)System_String__Format_43845440(v37, v38, v39, 0LL);
    if ( !servantEquipTabLabel )
      goto LABEL_90;
    UILabel__set_text(servantEquipTabLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
    Master_WarQuestSelectionMaster = (UserServantMaster_o *)this->fields.servantEquipTabLabel;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_90;
    if ( iTabKind == 1 )
      v40 = v22;
    else
      v40 = v17;
    if ( iTabKind == 1 )
      v41 = v21;
    else
      v41 = v16;
    if ( iTabKind == 1 )
      v42 = v20;
    else
      v42 = v15;
    if ( iTabKind == 1 )
      v43 = v19;
    else
      v43 = v14;
    UILabel__set_effectColor((UILabel_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(&v40 - 3), 0LL);
  }
  if ( !CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.commandCodeTabButton, v35) )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_90;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Master_WarQuestSelectionMaster, 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  v46 = Count;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_2981/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v57 = v46;
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)j_il2cpp_value_box_0(int_TypeInfo, &v57);
  if ( !SelfUserGame )
    goto LABEL_90;
  v49 = (Il2CppObject *)Master_WarQuestSelectionMaster;
  if ( !byte_421088F )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, v48);
    byte_421088F = 1;
  }
  v50 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v50 = BalanceConfig_TypeInfo;
  }
  svtKeep = v50->static_fields->CommandCodeFrameMax;
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)System_String__Format_43845440(v47, v49, v51, 0LL);
  if ( !commandCodeTabLabel
    || (UILabel__set_text(commandCodeTabLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL),
        (Master_WarQuestSelectionMaster = (UserServantMaster_o *)this->fields.commandCodeTabLabel) == 0LL) )
  {
LABEL_90:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  if ( iTabKind == 2 )
    v52 = v22;
  else
    v52 = v17;
  if ( iTabKind == 2 )
    v53 = v21;
  else
    v53 = v16;
  if ( iTabKind == 2 )
    v54 = v20;
  else
    v54 = v15;
  if ( iTabKind == 2 )
    v55 = v19;
  else
    v55 = v14;
  UILabel__set_effectColor((UILabel_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(&v52 - 3), 0LL);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._OnClickTabCommandCode_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._OnClickTabCommandCode_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphKindTabButtonGroup__set_OnClickTabServant(
        CharaGraphKindTabButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._OnClickTabServant_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._OnClickTabServant_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphKindTabButtonGroup__set_OnClickTabServantEquip(
        CharaGraphKindTabButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._OnClickTabServantEquip_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._OnClickTabServantEquip_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}