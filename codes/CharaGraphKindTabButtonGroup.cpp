void CharaGraphKindTabButtonGroup___ctor(CharaGraphKindTabButtonGroup_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void CharaGraphKindTabButtonGroup__AssertionForSerializeField(
        CharaGraphKindTabButtonGroup_o *this,
        const MethodInfo *method)
{
  ;
}


void CharaGraphKindTabButtonGroup__Awake(CharaGraphKindTabButtonGroup_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(CharaGraphKindTabButtonGroup_o *, const MethodInfo *))this->klass->vtable._4_AssertionForSerializeField.methodPtr)(
    this,
    this->klass->vtable._4_AssertionForSerializeField.method);
}


void CharaGraphKindTabButtonGroup__ClickTabServant(CharaGraphKindTabButtonGroup_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickTabServant_k__BackingField, 0);
}


void CharaGraphKindTabButtonGroup__ClickTabServantCommandCode(
        CharaGraphKindTabButtonGroup_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickTabCommandCode_k__BackingField, 0);
}


void CharaGraphKindTabButtonGroup__ClickTabServantEquip(CharaGraphKindTabButtonGroup_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnClickTabServantEquip_k__BackingField, 0);
}


bool CharaGraphKindTabButtonGroup__IsActive(UnityEngine_Component_o *c, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C42267 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C42267 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return 0;
  if ( !c || (gameObject = UnityEngine_Component__get_gameObject(c, 0)) == 0 )
    sub_1C372B4(gameObject);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0);
}


void CharaGraphKindTabButtonGroup__SetupTabButton(
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
  _BOOL4 v16; // w25
  bool enabled; // w0
  System_String_o *v18; // x1
  __int64 *v19; // x8

  if ( (byte_4C42266 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_17444/*"btn_bg_12"*/);
    sub_1C37058(&StringLiteral_17446/*"btn_bg_19"*/);
    byte_4C42266 = 1;
  }
  if ( CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)button, (const MethodInfo *)titleSprite) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)titleSprite, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)tabSprite, 0, 0);
      if ( !v15 )
      {
        if ( !button )
          goto LABEL_20;
        ((void (__fastcall *)(UICommonButton_o *, __int64, const MethodInfo *))button->klass->vtable._5_set_isEnabled.methodPtr)(
          button,
          1,
          button->klass->vtable._5_set_isEnabled.method);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)button, !isSelectedTab, 0);
        v16 = !isInit;
        ((void (__fastcall *)(UICommonButton_o *, _QWORD, _BOOL4, const MethodInfo *))button->klass->vtable._14_SetState.methodPtr)(
          button,
          0,
          v16,
          button->klass->vtable._14_SetState.method);
        enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)button, 0);
        UICommonButton__SetColliderEnable(button, enabled, v16, 0);
        if ( !titleSprite )
          goto LABEL_20;
        v18 = isSelectedTab ? onName : offName;
        UISprite__set_spriteName(titleSprite, v18, 0);
        if ( !tabSprite )
LABEL_20:
          sub_1C372B4(v15);
        v19 = &StringLiteral_17446/*"btn_bg_19"*/;
        if ( !isSelectedTab )
          v19 = &StringLiteral_17444/*"btn_bg_12"*/;
        UISprite__set_spriteName(tabSprite, (System_String_o *)*v19, 0);
      }
    }
  }
}


void CharaGraphKindTabButtonGroup__SetupTabButtons(
        CharaGraphKindTabButtonGroup_o *this,
        int32_t iTabKind,
        bool isInit,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x7
  bool v8; // w21
  const MethodInfo *v9; // x7
  const MethodInfo *v10; // x7

  if ( (byte_4C42265 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17558/*"btn_txt_craftessence_off"*/);
    sub_1C37058(&StringLiteral_17598/*"btn_txt_servant_off"*/);
    sub_1C37058(&StringLiteral_17554/*"btn_txt_cc_off"*/);
    sub_1C37058(&StringLiteral_17555/*"btn_txt_cc_on"*/);
    sub_1C37058(&StringLiteral_17599/*"btn_txt_servant_on"*/);
    sub_1C37058(&StringLiteral_17559/*"btn_txt_craftessence_on"*/);
    byte_4C42265 = 1;
  }
  v8 = isInit;
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.servantTabButton,
    this->fields.servantTabTitleSprite,
    this->fields.servantTabSprite,
    iTabKind == 0,
    (System_String_o *)StringLiteral_17599/*"btn_txt_servant_on"*/,
    (System_String_o *)StringLiteral_17598/*"btn_txt_servant_off"*/,
    v8,
    v4);
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.servantEquipTabButton,
    this->fields.servantEquipTabTitleSprite,
    this->fields.servantEquipTabSprite,
    iTabKind == 1,
    (System_String_o *)StringLiteral_17559/*"btn_txt_craftessence_on"*/,
    (System_String_o *)StringLiteral_17558/*"btn_txt_craftessence_off"*/,
    v8,
    v9);
  CharaGraphKindTabButtonGroup__SetupTabButton(
    this->fields.commandCodeTabButton,
    this->fields.commandCodeTabTitleSprite,
    this->fields.commandCodeTabSprite,
    iTabKind == 2,
    (System_String_o *)StringLiteral_17555/*"btn_txt_cc_on"*/,
    (System_String_o *)StringLiteral_17554/*"btn_txt_cc_off"*/,
    v8,
    v10);
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphKindTabButtonGroup__SetupTabLabel(
        CharaGraphKindTabButtonGroup_o *this,
        int32_t iTabKind,
        const MethodInfo *method)
{
  LocalizationManager_c *v5; // x0
  float *static_fields; // x8
  float v7; // s10
  float v8; // s11
  float v9; // s8
  float v10; // s9
  struct LocalizationManager_StaticFields *v11; // x8
  float r; // s12
  float g; // s13
  float b; // s14
  float a; // s15
  UserGameEntity_o *SelfUserGame; // x22
  UserServantMaster_o *Master_object; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  UILabel_o *servantTabLabel; // x23
  System_String_o *v21; // x24
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x5
  __int64 v32; // x6
  __int64 v33; // x7
  Il2CppObject *v34; // x25
  Il2CppObject *v35; // x0
  float v36; // s3
  float v37; // s2
  float v38; // s1
  float v39; // s0 OVERLAPPED
  const MethodInfo *v40; // x1
  UILabel_o *servantEquipTabLabel; // x23
  System_String_o *v42; // x24
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  __int64 v46; // x5
  __int64 v47; // x6
  __int64 v48; // x7
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x5
  __int64 v53; // x6
  __int64 v54; // x7
  Il2CppObject *v55; // x25
  Il2CppObject *v56; // x0
  float v57; // s3
  float v58; // s2
  float v59; // s1
  float v60; // s0 OVERLAPPED
  int32_t Count; // w0
  UILabel_o *commandCodeTabLabel; // x21
  int32_t v63; // w24
  System_String_o *v64; // x23
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  __int64 v68; // x5
  __int64 v69; // x6
  __int64 v70; // x7
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  __int64 v74; // x5
  __int64 v75; // x6
  __int64 v76; // x7
  Il2CppObject *v77; // x24
  BalanceConfig_c *v78; // x0
  Il2CppObject *v79; // x0
  int32_t svtKeep; // [xsp+0h] [xbp-A0h] BYREF
  int32_t v81; // [xsp+4h] [xbp-9Ch] BYREF
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Color_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C42264 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_UserCommandCodeMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_3341/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/);
    sub_1C37058(&StringLiteral_3342/*"CHARA_GRAPH_TAB_SERVANT"*/);
    sub_1C37058(&StringLiteral_3343/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/);
    byte_4C42264 = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C3D77E )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    byte_4C3D77E = 1;
  }
  v5 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v5->static_fields;
  v8 = static_fields[20];
  v7 = static_fields[21];
  v10 = static_fields[22];
  v9 = static_fields[23];
  if ( !byte_4C3D77F )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    v5 = LocalizationManager_TypeInfo;
    byte_4C3D77F = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = LocalizationManager_TypeInfo;
  }
  v11 = v5->static_fields;
  r = v11->selectEffectColor.fields.r;
  g = v11->selectEffectColor.fields.g;
  b = v11->selectEffectColor.fields.b;
  a = v11->selectEffectColor.fields.a;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_51;
  UserServantMaster__getCount(Master_object, &servantEquipSum[1], servantEquipSum, 1, 0);
  if ( CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.servantTabButton, v18) )
  {
    servantTabLabel = this->fields.servantTabLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3342/*"CHARA_GRAPH_TAB_SERVANT"*/, 0);
    v81 = servantEquipSum[1];
    Master_object = (UserServantMaster_o *)j_il2cpp_value_box_0(int_TypeInfo, &v81, v22, v23, v24, v25, v26, v27);
    if ( !SelfUserGame )
      goto LABEL_51;
    v34 = (Il2CppObject *)Master_object;
    svtKeep = SelfUserGame->fields.svtKeep;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v28, v29, v30, v31, v32, v33);
    Master_object = (UserServantMaster_o *)System_String__Format_63602948(v21, v34, v35, 0);
    if ( !servantTabLabel )
      goto LABEL_51;
    UILabel__set_text(servantTabLabel, (System_String_o *)Master_object, 0);
    Master_object = (UserServantMaster_o *)this->fields.servantTabLabel;
    v36 = v9;
    v37 = v10;
    v38 = v7;
    v39 = v8;
    if ( !iTabKind )
    {
      v36 = a;
      v37 = b;
      v38 = g;
      v39 = r;
    }
    if ( !Master_object )
      goto LABEL_51;
    UILabel__set_effectColor((UILabel_o *)Master_object, *(UnityEngine_Color_o *)&v39, 0);
  }
  if ( CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.servantEquipTabButton, v19) )
  {
    servantEquipTabLabel = this->fields.servantEquipTabLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_3343/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0);
    v81 = servantEquipSum[0];
    Master_object = (UserServantMaster_o *)j_il2cpp_value_box_0(int_TypeInfo, &v81, v43, v44, v45, v46, v47, v48);
    if ( !SelfUserGame )
      goto LABEL_51;
    v55 = (Il2CppObject *)Master_object;
    svtKeep = SelfUserGame->fields.svtEquipKeep;
    v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v49, v50, v51, v52, v53, v54);
    Master_object = (UserServantMaster_o *)System_String__Format_63602948(v42, v55, v56, 0);
    if ( !servantEquipTabLabel )
      goto LABEL_51;
    UILabel__set_text(servantEquipTabLabel, (System_String_o *)Master_object, 0);
    Master_object = (UserServantMaster_o *)this->fields.servantEquipTabLabel;
    v57 = v9;
    v58 = v10;
    v59 = v7;
    v60 = v8;
    if ( iTabKind == 1 )
    {
      v57 = a;
      v58 = b;
      v59 = g;
      v60 = r;
    }
    if ( !Master_object )
      goto LABEL_51;
    UILabel__set_effectColor((UILabel_o *)Master_object, *(UnityEngine_Color_o *)&v60, 0);
  }
  if ( !CharaGraphKindTabButtonGroup__IsActive((UnityEngine_Component_o *)this->fields.commandCodeTabButton, v40) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserCommandCodeMaster___);
  if ( !Master_object )
    goto LABEL_51;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)Master_object, 0);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  v63 = Count;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_3341/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0);
  v81 = v63;
  Master_object = (UserServantMaster_o *)j_il2cpp_value_box_0(int_TypeInfo, &v81, v65, v66, v67, v68, v69, v70);
  if ( !SelfUserGame )
    goto LABEL_51;
  v77 = (Il2CppObject *)Master_object;
  if ( !byte_4C3D2E4 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    byte_4C3D2E4 = 1;
  }
  v78 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v78 = BalanceConfig_TypeInfo;
  }
  svtKeep = v78->static_fields->CommandCodeFrameMax;
  v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtKeep, v71, v72, v73, v74, v75, v76);
  Master_object = (UserServantMaster_o *)System_String__Format_63602948(v64, v77, v79, 0);
  if ( !commandCodeTabLabel )
    goto LABEL_51;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Master_object, 0);
  Master_object = (UserServantMaster_o *)this->fields.commandCodeTabLabel;
  if ( iTabKind == 2 )
  {
    v9 = a;
    v10 = b;
    v7 = g;
    v8 = r;
  }
  if ( !Master_object )
LABEL_51:
    sub_1C372B4(Master_object);
  v83.fields.r = v8;
  v83.fields.g = v7;
  v83.fields.b = v10;
  v83.fields.a = v9;
  UILabel__set_effectColor((UILabel_o *)Master_object, v83, 0);
}


System_Action_o *CharaGraphKindTabButtonGroup__get_OnClickTabCommandCode(
        CharaGraphKindTabButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickTabCommandCode_k__BackingField;
}


System_Action_o *CharaGraphKindTabButtonGroup__get_OnClickTabServant(
        CharaGraphKindTabButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickTabServant_k__BackingField;
}


System_Action_o *CharaGraphKindTabButtonGroup__get_OnClickTabServantEquip(
        CharaGraphKindTabButtonGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._OnClickTabServantEquip_k__BackingField;
}


void CharaGraphKindTabButtonGroup__set_OnClickTabCommandCode(
        CharaGraphKindTabButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._OnClickTabCommandCode_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._OnClickTabCommandCode_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void CharaGraphKindTabButtonGroup__set_OnClickTabServant(
        CharaGraphKindTabButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._OnClickTabServant_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._OnClickTabServant_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void CharaGraphKindTabButtonGroup__set_OnClickTabServantEquip(
        CharaGraphKindTabButtonGroup_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._OnClickTabServantEquip_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._OnClickTabServantEquip_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}