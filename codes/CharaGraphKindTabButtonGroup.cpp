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
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  if ( (byte_4B15548 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B15548 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return 0;
  if ( !c || (gameObject = UnityEngine_Component__get_gameObject(c, 0LL)) == 0LL )
    sub_1BCAA3C(gameObject, v5);
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x1
  _BOOL8 v21; // x0
  __int64 v22; // x1
  _BOOL4 v23; // w25
  bool enabled; // w0
  System_String_o *v25; // x1
  __int64 *v26; // x8

  if ( (byte_4B15547 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, titleSprite, tabSprite);
    sub_1BCA7E0(&StringLiteral_17649/*"btn_bg_12"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_17651/*"btn_bg_19"*/, v17, v18);
    byte_4B15547 = 1;
  }
  if ( CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)button, (const MethodInfo *)titleSprite) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)titleSprite, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
      v21 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)tabSprite, 0LL, 0LL);
      if ( !v21 )
      {
        if ( !button )
          goto LABEL_20;
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
          goto LABEL_20;
        v25 = isSelectedTab ? onName : offName;
        UISprite__set_spriteName(titleSprite, v25, 0LL);
        if ( !tabSprite )
LABEL_20:
          sub_1BCAA3C(v21, v22);
        v26 = &StringLiteral_17651/*"btn_bg_19"*/;
        if ( !isSelectedTab )
          v26 = &StringLiteral_17649/*"btn_bg_12"*/;
        UISprite__set_spriteName(tabSprite, (System_String_o *)*v26, 0LL);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  bool v18; // w21
  const MethodInfo *v19; // x7
  const MethodInfo *v20; // x7

  if ( (byte_4B15546 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17747/*"btn_txt_craftessence_off"*/, *(_QWORD *)&iTabKind, isInit);
    sub_1BCA7E0(&StringLiteral_17787/*"btn_txt_servant_off"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_17743/*"btn_txt_cc_off"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17744/*"btn_txt_cc_on"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_17788/*"btn_txt_servant_on"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_17748/*"btn_txt_craftessence_on"*/, v16, v17);
    byte_4B15546 = 1;
  }
  v18 = isInit;
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.servantTabButton,
    this->fields.servantTabTitleSprite,
    this->fields.servantTabSprite,
    iTabKind == 0,
    (System_String_o *)StringLiteral_17788/*"btn_txt_servant_on"*/,
    (System_String_o *)StringLiteral_17787/*"btn_txt_servant_off"*/,
    v18,
    v4);
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.servantEquipTabButton,
    this->fields.servantEquipTabTitleSprite,
    this->fields.servantEquipTabSprite,
    iTabKind == 1,
    (System_String_o *)StringLiteral_17748/*"btn_txt_craftessence_on"*/,
    (System_String_o *)StringLiteral_17747/*"btn_txt_craftessence_off"*/,
    v18,
    v19);
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.commandCodeTabButton,
    this->fields.commandCodeTabTitleSprite,
    this->fields.commandCodeTabSprite,
    iTabKind == 2,
    (System_String_o *)StringLiteral_17744/*"btn_txt_cc_on"*/,
    (System_String_o *)StringLiteral_17743/*"btn_txt_cc_off"*/,
    v18,
    v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphKindTabButtonGroup__SetupTabLabel(
        CharaGraphKindTabButtonGroup_o *this,
        int32_t iTabKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  LocalizationManager_c *v19; // x0
  float *static_fields; // x8
  float v21; // s10
  float v22; // s11
  float v23; // s8
  float v24; // s9
  struct LocalizationManager_StaticFields *v25; // x8
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  __int64 v30; // x1
  UserGameEntity_o *SelfUserGame; // x22
  UserServantMaster_o *Master_object; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  UILabel_o *servantTabLabel; // x23
  System_String_o *v37; // x24
  Il2CppObject *v38; // x25
  Il2CppObject *v39; // x0
  float v40; // s3
  float v41; // s2
  float v42; // s1
  float v43; // s0
  const MethodInfo *v44; // x1
  UILabel_o *servantEquipTabLabel; // x23
  System_String_o *v46; // x24
  Il2CppObject *v47; // x25
  Il2CppObject *v48; // x0
  float v49; // s3
  float v50; // s2
  float v51; // s1
  float v52; // s0
  __int64 v53; // x1
  int32_t Count; // w0
  __int64 v55; // x1
  UILabel_o *commandCodeTabLabel; // x21
  int32_t v57; // w24
  System_String_o *v58; // x23
  __int64 v59; // x2
  Il2CppObject *v60; // x24
  BalanceConfig_c *v61; // x0
  Il2CppObject *v62; // x0
  int32_t svtKeep; // [xsp+0h] [xbp-A0h] BYREF
  int32_t v64; // [xsp+4h] [xbp-9Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B15545 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserCommandCodeMaster___, *(_QWORD *)&iTabKind, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_3478/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_3479/*"CHARA_GRAPH_TAB_SERVANT"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_3480/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, v17, v18);
    byte_4B15545 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&iTabKind);
  if ( !byte_4B11133 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&iTabKind, method);
    byte_4B11133 = 1;
  }
  v19 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&iTabKind);
    v19 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v19->static_fields;
  v22 = static_fields[20];
  v21 = static_fields[21];
  v24 = static_fields[22];
  v23 = static_fields[23];
  if ( !byte_4B11134 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&iTabKind, method);
    v19 = LocalizationManager_TypeInfo;
    byte_4B11134 = 1;
  }
  if ( !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19, *(_QWORD *)&iTabKind);
    v19 = LocalizationManager_TypeInfo;
  }
  v25 = v19->static_fields;
  r = v25->selectEffectColor.fields.r;
  g = v25->selectEffectColor.fields.g;
  b = v25->selectEffectColor.fields.b;
  a = v25->selectEffectColor.fields.a;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v30);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_51;
  UserServantMaster__getCount(Master_object, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.servantTabButton, v34) )
  {
    servantTabLabel = this->fields.servantTabLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3479/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
    v64 = servantEquipSum[1];
    Master_object = (UserServantMaster_o *)j_il2cpp_value_box_0(int_TypeInfo, &v64);
    if ( !SelfUserGame )
      goto LABEL_51;
    v38 = (Il2CppObject *)Master_object;
    svtKeep = SelfUserGame->fields.svtKeep;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
    Master_object = (UserServantMaster_o *)System_String__Format_62415592(v37, v38, v39, 0LL);
    if ( !servantTabLabel )
      goto LABEL_51;
    UILabel__set_text(servantTabLabel, (System_String_o *)Master_object, 0LL);
    Master_object = (UserServantMaster_o *)this->fields.servantTabLabel;
    v40 = v23;
    v41 = v24;
    v42 = v21;
    v43 = v22;
    if ( !iTabKind )
    {
      v40 = a;
      v41 = b;
      v42 = g;
      v43 = r;
    }
    if ( !Master_object )
      goto LABEL_51;
    UILabel__set_effectColor((UILabel_o *)Master_object, *(UnityEngine_Color_o *)&v43, 0LL);
  }
  if ( CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.servantEquipTabButton, v35) )
  {
    servantEquipTabLabel = this->fields.servantEquipTabLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_3480/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
    v64 = servantEquipSum[0];
    Master_object = (UserServantMaster_o *)j_il2cpp_value_box_0(int_TypeInfo, &v64);
    if ( !SelfUserGame )
      goto LABEL_51;
    v47 = (Il2CppObject *)Master_object;
    svtKeep = SelfUserGame->fields.svtEquipKeep;
    v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
    Master_object = (UserServantMaster_o *)System_String__Format_62415592(v46, v47, v48, 0LL);
    if ( !servantEquipTabLabel )
      goto LABEL_51;
    UILabel__set_text(servantEquipTabLabel, (System_String_o *)Master_object, 0LL);
    Master_object = (UserServantMaster_o *)this->fields.servantEquipTabLabel;
    v49 = v23;
    v50 = v24;
    v51 = v21;
    v52 = v22;
    if ( iTabKind == 1 )
    {
      v49 = a;
      v50 = b;
      v51 = g;
      v52 = r;
    }
    if ( !Master_object )
      goto LABEL_51;
    UILabel__set_effectColor((UILabel_o *)Master_object, *(UnityEngine_Color_o *)&v52, 0LL);
  }
  if ( !CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.commandCodeTabButton, v44) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v53);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_51;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Master_object, 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  v57 = Count;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
  v58 = LocalizationManager__Get((System_String_o *)StringLiteral_3478/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v64 = v57;
  Master_object = (UserServantMaster_o *)j_il2cpp_value_box_0(int_TypeInfo, &v64);
  if ( !SelfUserGame )
    goto LABEL_51;
  v60 = (Il2CppObject *)Master_object;
  if ( !byte_4B112D7 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v33, v59);
    byte_4B112D7 = 1;
  }
  v61 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v33);
    v61 = BalanceConfig_TypeInfo;
  }
  svtKeep = v61->static_fields->CommandCodeFrameMax;
  v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Master_object = (UserServantMaster_o *)System_String__Format_62415592(v58, v60, v62, 0LL);
  if ( !commandCodeTabLabel )
    goto LABEL_51;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Master_object, 0LL);
  Master_object = (UserServantMaster_o *)this->fields.commandCodeTabLabel;
  if ( iTabKind == 2 )
  {
    v23 = a;
    v24 = b;
    v21 = g;
    v22 = r;
  }
  if ( !Master_object )
LABEL_51:
    sub_1BCAA3C(Master_object, v33);
  v66.fields.r = v22;
  v66.fields.g = v21;
  v66.fields.b = v24;
  v66.fields.a = v23;
  UILabel__set_effectColor((UILabel_o *)Master_object, v66, 0LL);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._OnClickTabCommandCode_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._OnClickTabCommandCode_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._OnClickTabServant_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._OnClickTabServant_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._OnClickTabServantEquip_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._OnClickTabServantEquip_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}