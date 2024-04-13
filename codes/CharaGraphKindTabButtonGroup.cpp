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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_42E9651 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9651 = 1;
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
    sub_B5D69C(gameObject, v6);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  _BOOL8 v21; // x0
  __int64 v22; // x1
  _BOOL4 v23; // w25
  bool enabled; // w0
  System_String_o *v25; // x1
  __int64 *v26; // x8

  if ( (byte_42E9650 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)titleSprite, (_DWORD)tabSprite, isSelectedTab);
    sub_B5D5C4(&StringLiteral_17171/*"btn_bg_12"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_17173/*"btn_bg_19"*/, v18, v19, v20);
    byte_42E9650 = 1;
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
      v21 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)tabSprite, 0LL, 0LL);
      if ( !v21 )
      {
        if ( !button )
          goto LABEL_22;
        ((void (__fastcall *)(UICommonButton_o *, __int64, Il2CppMethodPointer))button->klass->vtable._5_set_isEnabled.method)(
          button,
          1LL,
          button->klass->vtable._6_OnInit.methodPtr);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)button, !isSelectedTab, 0LL);
        v23 = !isInit;
        ((void (__fastcall *)(UICommonButton_o *, _QWORD, _BOOL4, Il2CppMethodPointer))button->klass->vtable._14_SetState.method)(
          button,
          0LL,
          v23,
          button->klass->vtable._15_OnPress.methodPtr);
        enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)button, 0LL);
        UICommonButton__SetColliderEnable(button, enabled, v23, 0LL);
        if ( !titleSprite )
          goto LABEL_22;
        v25 = isSelectedTab ? onName : offName;
        UISprite__set_spriteName(titleSprite, v25, 0LL);
        if ( !tabSprite )
LABEL_22:
          sub_B5D69C(v21, v22);
        v26 = &StringLiteral_17173/*"btn_bg_19"*/;
        if ( !isSelectedTab )
          v26 = &StringLiteral_17171/*"btn_bg_12"*/;
        UISprite__set_spriteName(tabSprite, (System_String_o *)*v26, 0LL);
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
  int v8; // w1
  char v9; // w2
  __int64 v10; // x3
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  bool v23; // w21
  const MethodInfo *v24; // x7
  const MethodInfo *v25; // x7

  if ( (byte_42E964F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17256/*"btn_txt_craftessence_off"*/, iTabKind, isInit, method);
    sub_B5D5C4(&StringLiteral_17296/*"btn_txt_servant_off"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17253/*"btn_txt_cc_off"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_17254/*"btn_txt_cc_on"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17297/*"btn_txt_servant_on"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17257/*"btn_txt_craftessence_on"*/, v20, v21, v22);
    byte_42E964F = 1;
  }
  v23 = isInit;
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.servantTabButton,
    this->fields.servantTabTitleSprite,
    this->fields.servantTabSprite,
    iTabKind == 0,
    (System_String_o *)StringLiteral_17297/*"btn_txt_servant_on"*/,
    (System_String_o *)StringLiteral_17296/*"btn_txt_servant_off"*/,
    v23,
    v4);
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.servantEquipTabButton,
    this->fields.servantEquipTabTitleSprite,
    this->fields.servantEquipTabSprite,
    iTabKind == 1,
    (System_String_o *)StringLiteral_17257/*"btn_txt_craftessence_on"*/,
    (System_String_o *)StringLiteral_17256/*"btn_txt_craftessence_off"*/,
    v23,
    v24);
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.commandCodeTabButton,
    this->fields.commandCodeTabTitleSprite,
    this->fields.commandCodeTabSprite,
    iTabKind == 2,
    (System_String_o *)StringLiteral_17254/*"btn_txt_cc_on"*/,
    (System_String_o *)StringLiteral_17253/*"btn_txt_cc_off"*/,
    v23,
    v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphKindTabButtonGroup__SetupTabLabel(
        CharaGraphKindTabButtonGroup_o *this,
        int32_t iTabKind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  LocalizationManager_c *v27; // x0
  float *static_fields; // x8
  float v29; // s8
  float v30; // s9
  float v31; // s10
  float v32; // s11
  float *v33; // x8
  float v34; // s12
  float v35; // s13
  float v36; // s14
  float v37; // s15
  UserGameEntity_o *SelfUserGame; // x22
  UserServantMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x1
  UILabel_o *servantTabLabel; // x23
  System_String_o *v44; // x24
  Il2CppObject *v45; // x25
  Il2CppObject *v46; // x0
  float v47; // s3
  float v48; // s2
  float v49; // s1
  float v50; // s0
  const MethodInfo *v51; // x1
  UILabel_o *servantEquipTabLabel; // x23
  System_String_o *v53; // x24
  Il2CppObject *v54; // x25
  Il2CppObject *v55; // x0
  float v56; // s3
  float v57; // s2
  float v58; // s1
  float v59; // s0
  int32_t Count; // w0
  UILabel_o *commandCodeTabLabel; // x21
  int32_t v62; // w24
  System_String_o *v63; // x23
  int v64; // w2
  __int64 v65; // x3
  Il2CppObject *v66; // x24
  BalanceConfig_c *v67; // x0
  Il2CppObject *v68; // x0
  float v69; // s3
  float v70; // s2
  float v71; // s1
  float v72; // s0
  int32_t svtKeep; // [xsp+8h] [xbp-98h] BYREF
  int32_t v74; // [xsp+Ch] [xbp-94h] BYREF
  int32_t servantEquipSum[2]; // [xsp+58h] [xbp-48h] BYREF

  if ( (byte_42E964E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserCommandCodeMaster___, iTabKind, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&int_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_3028/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_3029/*"CHARA_GRAPH_TAB_SERVANT"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_3030/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, v24, v25, v26);
    byte_42E964E = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E563C )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, iTabKind, (_DWORD)method, v3);
    byte_42E563C = 1;
  }
  v27 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v27->static_fields;
  v29 = static_fields[20];
  v30 = static_fields[21];
  v31 = static_fields[22];
  v32 = static_fields[23];
  if ( !byte_42E563D )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, iTabKind, (_DWORD)method, v3);
    v27 = LocalizationManager_TypeInfo;
    byte_42E563D = 1;
  }
  if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v27);
    v27 = LocalizationManager_TypeInfo;
  }
  v33 = (float *)v27->static_fields;
  v34 = v33[24];
  v35 = v33[25];
  v36 = v33[26];
  v37 = v33[27];
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_90;
  UserServantMaster__getCount(Master_WarQuestSelectionMaster, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.servantTabButton, v41) )
  {
    servantTabLabel = this->fields.servantTabLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_3029/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
    v74 = servantEquipSum[1];
    Master_WarQuestSelectionMaster = (UserServantMaster_o *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
    if ( !SelfUserGame )
      goto LABEL_90;
    v45 = (Il2CppObject *)Master_WarQuestSelectionMaster;
    svtKeep = SelfUserGame->fields.svtKeep;
    v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
    Master_WarQuestSelectionMaster = (UserServantMaster_o *)System_String__Format_44573324(v44, v45, v46, 0LL);
    if ( !servantTabLabel )
      goto LABEL_90;
    UILabel__set_text(servantTabLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
    Master_WarQuestSelectionMaster = (UserServantMaster_o *)this->fields.servantTabLabel;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_90;
    if ( iTabKind )
      v47 = v32;
    else
      v47 = v37;
    if ( iTabKind )
      v48 = v31;
    else
      v48 = v36;
    if ( iTabKind )
      v49 = v30;
    else
      v49 = v35;
    if ( iTabKind )
      v50 = v29;
    else
      v50 = v34;
    UILabel__set_effectColor((UILabel_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(&v47 - 3), 0LL);
  }
  if ( CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.servantEquipTabButton, v42) )
  {
    servantEquipTabLabel = this->fields.servantEquipTabLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v53 = LocalizationManager__Get((System_String_o *)StringLiteral_3030/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
    v74 = servantEquipSum[0];
    Master_WarQuestSelectionMaster = (UserServantMaster_o *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
    if ( !SelfUserGame )
      goto LABEL_90;
    v54 = (Il2CppObject *)Master_WarQuestSelectionMaster;
    svtKeep = SelfUserGame->fields.svtEquipKeep;
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
    Master_WarQuestSelectionMaster = (UserServantMaster_o *)System_String__Format_44573324(v53, v54, v55, 0LL);
    if ( !servantEquipTabLabel )
      goto LABEL_90;
    UILabel__set_text(servantEquipTabLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
    Master_WarQuestSelectionMaster = (UserServantMaster_o *)this->fields.servantEquipTabLabel;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_90;
    if ( iTabKind == 1 )
      v56 = v37;
    else
      v56 = v32;
    if ( iTabKind == 1 )
      v57 = v36;
    else
      v57 = v31;
    if ( iTabKind == 1 )
      v58 = v35;
    else
      v58 = v30;
    if ( iTabKind == 1 )
      v59 = v34;
    else
      v59 = v29;
    UILabel__set_effectColor((UILabel_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(&v56 - 3), 0LL);
  }
  if ( !CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.commandCodeTabButton, v51) )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_90;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Master_WarQuestSelectionMaster, 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  v62 = Count;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_3028/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v74 = v62;
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
  if ( !SelfUserGame )
    goto LABEL_90;
  v66 = (Il2CppObject *)Master_WarQuestSelectionMaster;
  if ( !byte_42E4B73 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, v40, v64, v65);
    byte_42E4B73 = 1;
  }
  v67 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v67 = BalanceConfig_TypeInfo;
  }
  svtKeep = v67->static_fields->CommandCodeFrameMax;
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Master_WarQuestSelectionMaster = (UserServantMaster_o *)System_String__Format_44573324(v63, v66, v68, 0LL);
  if ( !commandCodeTabLabel
    || (UILabel__set_text(commandCodeTabLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL),
        (Master_WarQuestSelectionMaster = (UserServantMaster_o *)this->fields.commandCodeTabLabel) == 0LL) )
  {
LABEL_90:
    sub_B5D69C(Master_WarQuestSelectionMaster, v40);
  }
  if ( iTabKind == 2 )
    v69 = v37;
  else
    v69 = v32;
  if ( iTabKind == 2 )
    v70 = v36;
  else
    v70 = v31;
  if ( iTabKind == 2 )
    v71 = v35;
  else
    v71 = v30;
  if ( iTabKind == 2 )
    v72 = v34;
  else
    v72 = v29;
  UILabel__set_effectColor((UILabel_o *)Master_WarQuestSelectionMaster, *(UnityEngine_Color_o *)(&v69 - 3), 0LL);
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._OnClickTabServantEquip_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}