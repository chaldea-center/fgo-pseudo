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

  if ( (byte_42B1757 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1757 = 1;
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
    sub_B52A5C(gameObject, v4);
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
  _BOOL8 v15; // x0
  __int64 v16; // x1
  _BOOL4 v17; // w25
  bool enabled; // w0
  System_String_o *v19; // x1
  __int64 *v20; // x8

  if ( (byte_42B1756 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_17080/*"btn_bg_12"*/);
    sub_B52984(&StringLiteral_17082/*"btn_bg_19"*/);
    byte_42B1756 = 1;
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
      v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)tabSprite, 0LL, 0LL);
      if ( !v15 )
      {
        if ( !button )
          goto LABEL_22;
        ((void (__fastcall *)(UICommonButton_o *, __int64, Il2CppMethodPointer))button->klass->vtable._5_set_isEnabled.method)(
          button,
          1LL,
          button->klass->vtable._6_OnInit.methodPtr);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)button, !isSelectedTab, 0LL);
        v17 = !isInit;
        ((void (__fastcall *)(UICommonButton_o *, _QWORD, _BOOL4, Il2CppMethodPointer))button->klass->vtable._14_SetState.method)(
          button,
          0LL,
          v17,
          button->klass->vtable._15_OnPress.methodPtr);
        enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)button, 0LL);
        UICommonButton__SetColliderEnable(button, enabled, v17, 0LL);
        if ( !titleSprite )
          goto LABEL_22;
        v19 = isSelectedTab ? onName : offName;
        UISprite__set_spriteName(titleSprite, v19, 0LL);
        if ( !tabSprite )
LABEL_22:
          sub_B52A5C(v15, v16);
        v20 = &StringLiteral_17082/*"btn_bg_19"*/;
        if ( !isSelectedTab )
          v20 = &StringLiteral_17080/*"btn_bg_12"*/;
        UISprite__set_spriteName(tabSprite, (System_String_o *)*v20, 0LL);
      }
    }
  }
}


void __fastcall CharaGraphKindTabButtonGroup__SetupTabButtons(
        CharaGraphKindTabButtonGroup_o *this,
        int32_t iTabKind,
        bool isInit,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x7
  bool v8; // w21
  const MethodInfo *v9; // x7
  const MethodInfo *v10; // x7

  if ( (byte_42B1755 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17165/*"btn_txt_craftessence_off"*/);
    sub_B52984(&StringLiteral_17205/*"btn_txt_servant_off"*/);
    sub_B52984(&StringLiteral_17162/*"btn_txt_cc_off"*/);
    sub_B52984(&StringLiteral_17163/*"btn_txt_cc_on"*/);
    sub_B52984(&StringLiteral_17206/*"btn_txt_servant_on"*/);
    sub_B52984(&StringLiteral_17166/*"btn_txt_craftessence_on"*/);
    byte_42B1755 = 1;
  }
  v8 = isInit;
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.servantTabButton,
    this->fields.servantTabTitleSprite,
    this->fields.servantTabSprite,
    iTabKind == 0,
    (System_String_o *)StringLiteral_17206/*"btn_txt_servant_on"*/,
    (System_String_o *)StringLiteral_17205/*"btn_txt_servant_off"*/,
    v8,
    v4);
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.servantEquipTabButton,
    this->fields.servantEquipTabTitleSprite,
    this->fields.servantEquipTabSprite,
    iTabKind == 1,
    (System_String_o *)StringLiteral_17166/*"btn_txt_craftessence_on"*/,
    (System_String_o *)StringLiteral_17165/*"btn_txt_craftessence_off"*/,
    v8,
    v9);
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.commandCodeTabButton,
    this->fields.commandCodeTabTitleSprite,
    this->fields.commandCodeTabSprite,
    iTabKind == 2,
    (System_String_o *)StringLiteral_17163/*"btn_txt_cc_on"*/,
    (System_String_o *)StringLiteral_17162/*"btn_txt_cc_off"*/,
    v8,
    v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphKindTabButtonGroup__SetupTabLabel(
        CharaGraphKindTabButtonGroup_o *this,
        int32_t iTabKind,
        const MethodInfo *method)
{
  LocalizationManager_c *v5; // x0
  float *static_fields; // x8
  float v7; // s8
  float v8; // s9
  float v9; // s10
  float v10; // s11
  float *v11; // x8
  float v12; // s12
  float v13; // s13
  float v14; // s14
  float v15; // s15
  UserGameEntity_o *SelfUserGame; // x22
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  UILabel_o *servantTabLabel; // x23
  System_String_o *v22; // x24
  Il2CppObject *v23; // x25
  Il2CppObject *v24; // x0
  float v25; // s3
  float v26; // s2
  float v27; // s1
  float v28; // s0
  const MethodInfo *v29; // x1
  UILabel_o *servantEquipTabLabel; // x23
  System_String_o *v31; // x24
  Il2CppObject *v32; // x25
  Il2CppObject *v33; // x0
  float v34; // s3
  float v35; // s2
  float v36; // s1
  float v37; // s0
  int32_t Count; // w0
  UILabel_o *commandCodeTabLabel; // x21
  int32_t v40; // w24
  System_String_o *v41; // x23
  Il2CppObject *v42; // x24
  BalanceConfig_c *v43; // x0
  Il2CppObject *v44; // x0
  float v45; // s3
  float v46; // s2
  float v47; // s1
  float v48; // s0
  int32_t svtKeep; // [xsp+8h] [xbp-98h] BYREF
  int32_t v50; // [xsp+Ch] [xbp-94h] BYREF
  int32_t servantEquipSum[2]; // [xsp+58h] [xbp-48h] BYREF

  if ( (byte_42B1754 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_UserCommandCodeMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_3001/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/);
    sub_B52984(&StringLiteral_3002/*"CHARA_GRAPH_TAB_SERVANT"*/);
    sub_B52984(&StringLiteral_3003/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/);
    byte_42B1754 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42ACC22 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42ACC22 = 1;
  }
  v5 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v5->static_fields;
  v7 = static_fields[20];
  v8 = static_fields[21];
  v9 = static_fields[22];
  v10 = static_fields[23];
  if ( !byte_42ACC23 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    v5 = LocalizationManager_TypeInfo;
    byte_42ACC23 = 1;
  }
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = LocalizationManager_TypeInfo;
  }
  v11 = (float *)v5->static_fields;
  v12 = v11[24];
  v13 = v11[25];
  v14 = v11[26];
  v15 = v11[27];
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_90;
  UserServantMaster__getCount(Master_WarQuestSelectionMaster, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.servantTabButton, v19) )
  {
    servantTabLabel = this->fields.servantTabLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3002/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
    v50 = servantEquipSum[1];
    Master_WarQuestSelectionMaster = (UserServantMaster_o *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
    if ( !SelfUserGame )
      goto LABEL_90;
    v23 = (Il2CppObject *)Master_WarQuestSelectionMaster;
    svtKeep = SelfUserGame->fields.svtKeep;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
    Master_WarQuestSelectionMaster = (UserServantMaster_o *)System_String__Format_44563852(v22, v23, v24, 0LL);
    if ( !servantTabLabel )
      goto LABEL_90;
    UILabel__set_text(servantTabLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
    Master_WarQuestSelectionMaster = (UserServantMaster_o *)this->fields.servantTabLabel;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_90;
    if ( iTabKind )
      v25 = v10;
    else
      v25 = v15;
    if ( iTabKind )
      v26 = v9;
    else
      v26 = v14;
    if ( iTabKind )
      v27 = v8;
    else
      v27 = v13;
    if ( iTabKind )
      v28 = v7;
    else
      v28 = v12;
    UILabel__set_effectColor((UILabel_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(&v25 - 3), 0LL);
  }
  if ( CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.servantEquipTabButton, v20) )
  {
    servantEquipTabLabel = this->fields.servantEquipTabLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3003/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
    v50 = servantEquipSum[0];
    Master_WarQuestSelectionMaster = (UserServantMaster_o *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
    if ( !SelfUserGame )
      goto LABEL_90;
    v32 = (Il2CppObject *)Master_WarQuestSelectionMaster;
    svtKeep = SelfUserGame->fields.svtEquipKeep;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
    Master_WarQuestSelectionMaster = (UserServantMaster_o *)System_String__Format_44563852(v31, v32, v33, 0LL);
    if ( !servantEquipTabLabel )
      goto LABEL_90;
    UILabel__set_text(servantEquipTabLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
    Master_WarQuestSelectionMaster = (UserServantMaster_o *)this->fields.servantEquipTabLabel;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_90;
    if ( iTabKind == 1 )
      v34 = v15;
    else
      v34 = v10;
    if ( iTabKind == 1 )
      v35 = v14;
    else
      v35 = v9;
    if ( iTabKind == 1 )
      v36 = v13;
    else
      v36 = v8;
    if ( iTabKind == 1 )
      v37 = v12;
    else
      v37 = v7;
    UILabel__set_effectColor((UILabel_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(&v34 - 3), 0LL);
  }
  if ( !CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.commandCodeTabButton, v29) )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_90;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Master_WarQuestSelectionMaster, 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  v40 = Count;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_3001/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v50 = v40;
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
  if ( !SelfUserGame )
    goto LABEL_90;
  v42 = (Il2CppObject *)Master_WarQuestSelectionMaster;
  if ( !byte_42AC2F5 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42AC2F5 = 1;
  }
  v43 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v43 = BalanceConfig_TypeInfo;
  }
  svtKeep = v43->static_fields->CommandCodeFrameMax;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)System_String__Format_44563852(v41, v42, v44, 0LL);
  if ( !commandCodeTabLabel
    || (UILabel__set_text(commandCodeTabLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL),
        (Master_WarQuestSelectionMaster = (UserServantMaster_o *)this->fields.commandCodeTabLabel) == 0LL) )
  {
LABEL_90:
    sub_B52A5C(Master_WarQuestSelectionMaster, v18);
  }
  if ( iTabKind == 2 )
    v45 = v15;
  else
    v45 = v10;
  if ( iTabKind == 2 )
    v46 = v14;
  else
    v46 = v9;
  if ( iTabKind == 2 )
    v47 = v13;
  else
    v47 = v8;
  if ( iTabKind == 2 )
    v48 = v12;
  else
    v48 = v7;
  UILabel__set_effectColor((UILabel_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(&v45 - 3), 0LL);
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._OnClickTabServantEquip_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}