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

  if ( (byte_49FB7A7 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FB7A7 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return 0;
  if ( !c || (gameObject = UnityEngine_Component__get_gameObject(c, 0LL)) == 0LL )
    sub_1B64324(gameObject);
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

  if ( (byte_49FB7A6 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, titleSprite);
    sub_1B640C8(&StringLiteral_17406/*"btn_bg_12"*/, v15);
    sub_1B640C8(&StringLiteral_17408/*"btn_bg_19"*/, v16);
    byte_49FB7A6 = 1;
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
        v18 = !isInit;
        ((void (__fastcall *)(UICommonButton_o *, _QWORD, _BOOL4, Il2CppMethodPointer))button->klass->vtable._14_SetState.method)(
          button,
          0LL,
          v18,
          button->klass->vtable._15_OnPress.methodPtr);
        enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)button, 0LL);
        UICommonButton__SetColliderEnable(button, enabled, v18, 0LL);
        if ( !titleSprite )
          goto LABEL_20;
        v20 = isSelectedTab ? onName : offName;
        UISprite__set_spriteName(titleSprite, v20, 0LL);
        if ( !tabSprite )
LABEL_20:
          sub_1B64324(v17);
        v21 = &StringLiteral_17408/*"btn_bg_19"*/;
        if ( !isSelectedTab )
          v21 = &StringLiteral_17406/*"btn_bg_12"*/;
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

  if ( (byte_49FB7A5 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17500/*"btn_txt_craftessence_off"*/, *(_QWORD *)&iTabKind);
    sub_1B640C8(&StringLiteral_17540/*"btn_txt_servant_off"*/, v8);
    sub_1B640C8(&StringLiteral_17496/*"btn_txt_cc_off"*/, v9);
    sub_1B640C8(&StringLiteral_17497/*"btn_txt_cc_on"*/, v10);
    sub_1B640C8(&StringLiteral_17541/*"btn_txt_servant_on"*/, v11);
    sub_1B640C8(&StringLiteral_17501/*"btn_txt_craftessence_on"*/, v12);
    byte_49FB7A5 = 1;
  }
  v13 = isInit;
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.servantTabButton,
    this->fields.servantTabTitleSprite,
    this->fields.servantTabSprite,
    iTabKind == 0,
    (System_String_o *)StringLiteral_17541/*"btn_txt_servant_on"*/,
    (System_String_o *)StringLiteral_17540/*"btn_txt_servant_off"*/,
    v13,
    v4);
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.servantEquipTabButton,
    this->fields.servantEquipTabTitleSprite,
    this->fields.servantEquipTabSprite,
    iTabKind == 1,
    (System_String_o *)StringLiteral_17501/*"btn_txt_craftessence_on"*/,
    (System_String_o *)StringLiteral_17500/*"btn_txt_craftessence_off"*/,
    v13,
    v14);
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.commandCodeTabButton,
    this->fields.commandCodeTabTitleSprite,
    this->fields.commandCodeTabSprite,
    iTabKind == 2,
    (System_String_o *)StringLiteral_17497/*"btn_txt_cc_on"*/,
    (System_String_o *)StringLiteral_17496/*"btn_txt_cc_off"*/,
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
  int32_t svtKeep; // [xsp+0h] [xbp-A0h] BYREF
  int32_t v53; // [xsp+4h] [xbp-9Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Color_o v55; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FB7A4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserCommandCodeMaster___, *(_QWORD *)&iTabKind);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_3430/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, v9);
    sub_1B640C8(&StringLiteral_3431/*"CHARA_GRAPH_TAB_SERVANT"*/, v10);
    sub_1B640C8(&StringLiteral_3432/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, v11);
    byte_49FB7A4 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_49F779B )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&iTabKind);
    byte_49F779B = 1;
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
  if ( !byte_49F779C )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&iTabKind);
    v12 = LocalizationManager_TypeInfo;
    byte_49F779C = 1;
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
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_51;
  UserServantMaster__getCount(Master_object, &servantEquipSum[1], servantEquipSum, 1, 0LL);
  if ( CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.servantTabButton, v25) )
  {
    servantTabLabel = this->fields.servantTabLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3431/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
    v53 = servantEquipSum[1];
    Master_object = (UserServantMaster_o *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
    if ( !SelfUserGame )
      goto LABEL_51;
    v29 = (Il2CppObject *)Master_object;
    svtKeep = SelfUserGame->fields.svtKeep;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
    Master_object = (UserServantMaster_o *)System_String__Format_61389768(v28, v29, v30, 0LL);
    if ( !servantTabLabel )
      goto LABEL_51;
    UILabel__set_text(servantTabLabel, (System_String_o *)Master_object, 0LL);
    Master_object = (UserServantMaster_o *)this->fields.servantTabLabel;
    v31 = v16;
    v32 = v17;
    v33 = v14;
    v34 = v15;
    if ( !iTabKind )
    {
      v31 = a;
      v32 = b;
      v33 = g;
      v34 = r;
    }
    if ( !Master_object )
      goto LABEL_51;
    UILabel__set_effectColor((UILabel_o *)Master_object, *(UnityEngine_Color_o *)&v34, 0LL);
  }
  if ( CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.servantEquipTabButton, v26) )
  {
    servantEquipTabLabel = this->fields.servantEquipTabLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3432/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
    v53 = servantEquipSum[0];
    Master_object = (UserServantMaster_o *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
    if ( !SelfUserGame )
      goto LABEL_51;
    v38 = (Il2CppObject *)Master_object;
    svtKeep = SelfUserGame->fields.svtEquipKeep;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
    Master_object = (UserServantMaster_o *)System_String__Format_61389768(v37, v38, v39, 0LL);
    if ( !servantEquipTabLabel )
      goto LABEL_51;
    UILabel__set_text(servantEquipTabLabel, (System_String_o *)Master_object, 0LL);
    Master_object = (UserServantMaster_o *)this->fields.servantEquipTabLabel;
    v40 = v16;
    v41 = v17;
    v42 = v14;
    v43 = v15;
    if ( iTabKind == 1 )
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
  if ( !CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.commandCodeTabButton, v35) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_51;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Master_object, 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  v46 = Count;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_3430/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v53 = v46;
  Master_object = (UserServantMaster_o *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
  if ( !SelfUserGame )
    goto LABEL_51;
  v49 = (Il2CppObject *)Master_object;
  if ( !byte_49F7B7B )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, v48);
    byte_49F7B7B = 1;
  }
  v50 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v50 = BalanceConfig_TypeInfo;
  }
  svtKeep = v50->static_fields->CommandCodeFrameMax;
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep);
  Master_object = (UserServantMaster_o *)System_String__Format_61389768(v47, v49, v51, 0LL);
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
    sub_1B64324(Master_object);
  v55.fields.r = v15;
  v55.fields.g = v14;
  v55.fields.b = v17;
  v55.fields.a = v16;
  UILabel__set_effectColor((UILabel_o *)Master_object, v55, 0LL);
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
  sub_1B6406C(
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
  sub_1B6406C(
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._OnClickTabServantEquip_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}