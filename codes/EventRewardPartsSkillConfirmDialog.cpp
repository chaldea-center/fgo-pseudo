void __fastcall EventRewardPartsSkillConfirmDialog___ctor(
        EventRewardPartsSkillConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B16E3D & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    byte_4B16E3D = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRewardPartsSkillConfirmDialog__Close(
        EventRewardPartsSkillConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B16E39 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_EventRewardPartsSkillConfirmDialog_Init__, v3);
    byte_4B16E39 = 1;
  }
  v4 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_EventRewardPartsSkillConfirmDialog_Init__, 0LL);
  BaseDialog__SafeClose((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall EventRewardPartsSkillConfirmDialog__Init(
        EventRewardPartsSkillConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCB254(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.onDecide = 0LL;
  sub_1BCAF9C(&this->fields.onDecide);
  EventRewardPartsSkillConfirmDialog__SpriteClear(this, v5);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRewardPartsSkillConfirmDialog__OnClickCancel(
        EventRewardPartsSkillConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B16E3B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_EventRewardPartsSkillConfirmDialog_OnClickCancel__, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4B16E3B = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v4 = Method_EventRewardPartsSkillConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRewardPartsSkillConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCB010(Method_EventRewardPartsSkillConfirmDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1BCB254(0LL, v7);
    CommonUI__CloseEventRewardPartsSkillDialog((CommonUI_o *)Instance, 0, 0LL);
  }
}


void __fastcall EventRewardPartsSkillConfirmDialog__OnClickDecide(
        EventRewardPartsSkillConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B16E3A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_EventRewardPartsSkillConfirmDialog_OnClickDecide__, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4B16E3A = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v4 = Method_EventRewardPartsSkillConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRewardPartsSkillConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCB010(Method_EventRewardPartsSkillConfirmDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1BCB254(0LL, v7);
    CommonUI__CloseEventRewardPartsSkillDialog((CommonUI_o *)Instance, 1, 0LL);
  }
}


void __fastcall EventRewardPartsSkillConfirmDialog__Open(
        EventRewardPartsSkillConfirmDialog_o *this,
        ShopEntity_o *shopEnt,
        System_Action_bool__o *onDecideAction,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  Il2CppObject *v20; // x22
  AssistMaster_o *Master_object; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  struct System_Int32_array *targetIds; // x8
  int32_t v25; // w23
  AssistMaster_o **p_monitor; // x23
  System_String_o *v27; // x20
  System_Action_o *v28; // x21
  UILabel_o *skillInfoLabel; // x21
  struct UILabel_o *v30; // x8
  UILabel_o *titleLabel; // x21
  UILabel_o *skillInfoTitleLabel; // x21
  UILabel_o *detailMsgLabel; // x21
  System_String_o *v34; // x0
  UILabel_o *confirmMsgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v38; // x20

  if ( (byte_4B16E38 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, shopEnt);
    sub_1BCAFF8(&AtlasManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_BaseDialog_EndOpenBaseDialog__, v8);
    sub_1BCAFF8(&Method_DataManager_GetMaster_AssistMaster___, v9);
    sub_1BCAFF8(&DataManager_TypeInfo, v10);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v11);
    sub_1BCAFF8(&Method_EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0__Open_b__0__, v12);
    sub_1BCAFF8(&EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0_TypeInfo, v13);
    sub_1BCAFF8(&StringLiteral_5652/*"EVENT_REWARD_PARTS_SKILL_TITLE"*/, v14);
    sub_1BCAFF8(&StringLiteral_5648/*"EVENT_REWARD_PARTS_SKILL_INFO_TITLE"*/, v15);
    sub_1BCAFF8(&StringLiteral_5649/*"EVENT_REWARD_PARTS_SKILL_MSG"*/, v16);
    sub_1BCAFF8(&StringLiteral_3653/*"COMMON_CONFIRM_NO"*/, v17);
    sub_1BCAFF8(&StringLiteral_3658/*"COMMON_CONFIRM_YES"*/, v18);
    sub_1BCAFF8(&StringLiteral_5647/*"EVENT_REWARD_PARTS_SKILL_CONFIRM"*/, v19);
    byte_4B16E38 = 1;
  }
  v20 = (Il2CppObject *)sub_1BCB244(EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_27;
  v20[1].klass = (Il2CppClass *)this;
  Master_object = (AssistMaster_o *)sub_1BCAF9C(&v20[1]);
  if ( !shopEnt )
    goto LABEL_27;
  targetIds = shopEnt->fields.targetIds;
  if ( !targetIds )
    goto LABEL_27;
  if ( !targetIds->max_length )
    sub_1BCB25C(Master_object, v22, v23);
  v25 = targetIds->m_Items[1];
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (AssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_AssistMaster___);
  if ( !Master_object )
    goto LABEL_27;
  v20[1].monitor = AssistMaster__GetNextPartsEntity(Master_object, v25, shopEnt->fields.id, 0LL);
  p_monitor = (AssistMaster_o **)&v20[1].monitor;
  Master_object = (AssistMaster_o *)sub_1BCAF9C(&v20[1].monitor);
  if ( !v20[1].monitor )
    goto LABEL_27;
  v27 = (System_String_o *)*((_QWORD *)v20[1].monitor + 3);
  this->fields.onDecide = onDecideAction;
  sub_1BCAF9C(&this->fields.onDecide);
  Master_object = (AssistMaster_o *)this->fields.skillNameLabel;
  if ( !Master_object )
    goto LABEL_27;
  UILabel__set_text((UILabel_o *)Master_object, v27, 0LL);
  Master_object = (AssistMaster_o *)this->fields.skillNameLabel;
  if ( !Master_object )
    goto LABEL_27;
  UILabel__SetCondensedScale((UILabel_o *)Master_object, 270, 0, 0LL);
  v28 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v28, v20, Method_EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0__Open_b__0__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI(v28, 1, 0LL);
  Master_object = *p_monitor;
  if ( !*p_monitor )
    goto LABEL_27;
  skillInfoLabel = this->fields.skillInfoLabel;
  Master_object = (AssistMaster_o *)AssistEntity__GetDetail((AssistEntity_o *)Master_object, 0, 0LL);
  v30 = this->fields.skillInfoLabel;
  if ( !v30 )
    goto LABEL_27;
  WrapControlText__textAdjust(skillInfoLabel, (System_String_o *)Master_object, v30->fields.mFontSize, 0, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (AssistMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5652/*"EVENT_REWARD_PARTS_SKILL_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_27;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0LL);
  Master_object = (AssistMaster_o *)this->fields.titleLabel;
  if ( !Master_object )
    goto LABEL_27;
  UILabel__SetCondensedScale((UILabel_o *)Master_object, 620, 0, 0LL);
  skillInfoTitleLabel = this->fields.skillInfoTitleLabel;
  Master_object = (AssistMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5648/*"EVENT_REWARD_PARTS_SKILL_INFO_TITLE"*/, 0LL);
  if ( !skillInfoTitleLabel )
    goto LABEL_27;
  UILabel__set_text(skillInfoTitleLabel, (System_String_o *)Master_object, 0LL);
  detailMsgLabel = this->fields.detailMsgLabel;
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_5649/*"EVENT_REWARD_PARTS_SKILL_MSG"*/, 0LL);
  Master_object = (AssistMaster_o *)System_String__Format(v34, (Il2CppObject *)v27, 0LL);
  if ( !detailMsgLabel )
    goto LABEL_27;
  UILabel__set_text(detailMsgLabel, (System_String_o *)Master_object, 0LL);
  confirmMsgLabel = this->fields.confirmMsgLabel;
  Master_object = (AssistMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5647/*"EVENT_REWARD_PARTS_SKILL_CONFIRM"*/, 0LL);
  if ( !confirmMsgLabel
    || (UILabel__set_text(confirmMsgLabel, (System_String_o *)Master_object, 0LL),
        decideLabel = this->fields.decideLabel,
        Master_object = (AssistMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3658/*"COMMON_CONFIRM_YES"*/, 0LL),
        !decideLabel)
    || (UILabel__set_text(decideLabel, (System_String_o *)Master_object, 0LL),
        cancelLabel = this->fields.cancelLabel,
        Master_object = (AssistMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3653/*"COMMON_CONFIRM_NO"*/, 0LL),
        !cancelLabel) )
  {
LABEL_27:
    sub_1BCB254(Master_object, v22);
  }
  UILabel__set_text(cancelLabel, (System_String_o *)Master_object, 0LL);
  v38 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_BaseDialog_EndOpenBaseDialog__, 0LL);
  BaseDialog__SafeOpen((BaseDialog_o *)this, v38, 0, 0LL);
}


void __fastcall EventRewardPartsSkillConfirmDialog__SpriteClear(
        EventRewardPartsSkillConfirmDialog_o *this,
        const MethodInfo *method)
{
  UISprite_o *skillIcon; // x0

  if ( (byte_4B16E37 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, method);
    byte_4B16E37 = 1;
  }
  skillIcon = this->fields.skillIcon;
  if ( !skillIcon || (UISprite__set_atlas(skillIcon, 0LL, 0LL), (skillIcon = this->fields.skillIcon) == 0LL) )
    sub_1BCB254(skillIcon, method);
  UISprite__set_spriteName(skillIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


System_String_o *__fastcall EventRewardPartsSkillConfirmDialog__get_closeBtnPath(
        EventRewardPartsSkillConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B16E3C & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_15507/*"Window/CancelButton"*/, method);
    byte_4B16E3C = 1;
  }
  return (System_String_o *)StringLiteral_15507/*"Window/CancelButton"*/;
}


void __fastcall EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0___ctor(
        EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0___Open_b__0(
        EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0_o *v2; // x19
  struct EventRewardPartsSkillConfirmDialog_o *_4__this; // x8
  struct AssistEntity_o *assistSkillEntity; // x9
  UISprite_o *skillIcon; // x19
  int32_t skillId; // w20

  v2 = this;
  if ( (byte_4B16E3E & 1) == 0 )
  {
    this = (EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0_o *)sub_1BCAFF8(&AtlasManager_TypeInfo, method);
    byte_4B16E3E = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || (assistSkillEntity = v2->fields.assistSkillEntity) == 0LL )
    sub_1BCB254(this, method);
  skillIcon = _4__this->fields.skillIcon;
  skillId = assistSkillEntity->fields.skillId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetSkillIcon(skillIcon, skillId, 0LL);
}