void EventRewardPartsSkillConfirmDialog___ctor(EventRewardPartsSkillConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CC1BC2 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC1BC2 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventRewardPartsSkillConfirmDialog__Close(EventRewardPartsSkillConfirmDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4CC1BBE & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_EventRewardPartsSkillConfirmDialog_Init__);
    byte_4CC1BBE = 1;
  }
  v3 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_EventRewardPartsSkillConfirmDialog_Init__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v3, 0);
}


void EventRewardPartsSkillConfirmDialog__Init(EventRewardPartsSkillConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.onDecide = 0;
  sub_1C71354(&this->fields.onDecide, 0);
  EventRewardPartsSkillConfirmDialog__SpriteClear(this, v5);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventRewardPartsSkillConfirmDialog__OnClickCancel(
        EventRewardPartsSkillConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_bool__o *onDecide; // x8

  if ( (byte_4CC1BC0 & 1) == 0 )
  {
    sub_1C713B0(&Method_EventRewardPartsSkillConfirmDialog_OnClickCancel__);
    byte_4CC1BC0 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_EventRewardPartsSkillConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRewardPartsSkillConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_EventRewardPartsSkillConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    onDecide = this->fields.onDecide;
    if ( !onDecide )
      sub_1C71608(v5, v6);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onDecide->fields.invoke_impl)(
      onDecide->fields.method_code,
      0,
      onDecide->fields.method);
  }
}


void EventRewardPartsSkillConfirmDialog__OnClickDecide(
        EventRewardPartsSkillConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_bool__o *onDecide; // x8

  if ( (byte_4CC1BBF & 1) == 0 )
  {
    sub_1C713B0(&Method_EventRewardPartsSkillConfirmDialog_OnClickDecide__);
    byte_4CC1BBF = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_EventRewardPartsSkillConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRewardPartsSkillConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_EventRewardPartsSkillConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    onDecide = this->fields.onDecide;
    if ( !onDecide )
      sub_1C71608(v5, v6);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))onDecide->fields.invoke_impl)(
      onDecide->fields.method_code,
      1,
      onDecide->fields.method);
  }
}


void EventRewardPartsSkillConfirmDialog__Open(
        EventRewardPartsSkillConfirmDialog_o *this,
        ShopEntity_o *shopEnt,
        System_Action_bool__o *onDecideAction,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x22
  AssistMaster_o *Master_object; // x0
  __int64 v9; // x1
  struct System_Int32_array *targetIds; // x8
  int32_t v11; // w23
  AssistEntity_o *NextPartsEntity; // x0
  AssistMaster_o **p_monitor; // x23
  System_String_o *v14; // x20
  System_Action_o *v15; // x21
  UILabel_o *skillInfoLabel; // x21
  struct UILabel_o *v17; // x8
  UILabel_o *titleLabel; // x21
  UILabel_o *skillInfoTitleLabel; // x21
  UILabel_o *detailMsgLabel; // x21
  System_String_o *v21; // x0
  UILabel_o *confirmMsgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v25; // x20

  if ( (byte_4CC1BBD & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_BaseDialog_EndOpenBaseDialog__);
    sub_1C713B0(&Method_DataManager_GetMaster_AssistMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0__Open_b__0__);
    sub_1C713B0(&EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0_TypeInfo);
    sub_1C713B0(&StringLiteral_5691/*"EVENT_REWARD_PARTS_SKILL_TITLE"*/);
    sub_1C713B0(&StringLiteral_5687/*"EVENT_REWARD_PARTS_SKILL_INFO_TITLE"*/);
    sub_1C713B0(&StringLiteral_5688/*"EVENT_REWARD_PARTS_SKILL_MSG"*/);
    sub_1C713B0(&StringLiteral_3683/*"COMMON_CONFIRM_NO"*/);
    sub_1C713B0(&StringLiteral_3688/*"COMMON_CONFIRM_YES"*/);
    sub_1C713B0(&StringLiteral_5686/*"EVENT_REWARD_PARTS_SKILL_CONFIRM"*/);
    byte_4CC1BBD = 1;
  }
  v7 = (Il2CppObject *)sub_1C715FC(EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_27;
  v7[1].klass = (Il2CppClass *)this;
  Master_object = (AssistMaster_o *)sub_1C71354(&v7[1], this);
  if ( !shopEnt )
    goto LABEL_27;
  targetIds = shopEnt->fields.targetIds;
  if ( !targetIds )
    goto LABEL_27;
  if ( !LODWORD(targetIds->max_length) )
    sub_1C71610(Master_object);
  v11 = targetIds->m_Items[0];
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (AssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_AssistMaster___);
  if ( !Master_object )
    goto LABEL_27;
  NextPartsEntity = AssistMaster__GetNextPartsEntity(Master_object, v11, shopEnt->fields.id, 0);
  v7[1].monitor = NextPartsEntity;
  p_monitor = (AssistMaster_o **)&v7[1].monitor;
  Master_object = (AssistMaster_o *)sub_1C71354(&v7[1].monitor, NextPartsEntity);
  if ( !v7[1].monitor )
    goto LABEL_27;
  v14 = (System_String_o *)*((_QWORD *)v7[1].monitor + 3);
  this->fields.onDecide = onDecideAction;
  sub_1C71354(&this->fields.onDecide, onDecideAction);
  Master_object = (AssistMaster_o *)this->fields.skillNameLabel;
  if ( !Master_object )
    goto LABEL_27;
  UILabel__set_text((UILabel_o *)Master_object, v14, 0);
  Master_object = (AssistMaster_o *)this->fields.skillNameLabel;
  if ( !Master_object )
    goto LABEL_27;
  UILabel__SetCondensedScale((UILabel_o *)Master_object, 270, 0, 0);
  v15 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v15, v7, Method_EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0__Open_b__0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI(v15, 1, 0);
  Master_object = *p_monitor;
  if ( !*p_monitor )
    goto LABEL_27;
  skillInfoLabel = this->fields.skillInfoLabel;
  Master_object = (AssistMaster_o *)AssistEntity__GetDetail((AssistEntity_o *)Master_object, 0, 0);
  v17 = this->fields.skillInfoLabel;
  if ( !v17 )
    goto LABEL_27;
  WrapControlText__textAdjust(skillInfoLabel, (System_String_o *)Master_object, v17->fields.mFontSize, 0, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (AssistMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5691/*"EVENT_REWARD_PARTS_SKILL_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_27;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0);
  Master_object = (AssistMaster_o *)this->fields.titleLabel;
  if ( !Master_object )
    goto LABEL_27;
  UILabel__SetCondensedScale((UILabel_o *)Master_object, 620, 0, 0);
  skillInfoTitleLabel = this->fields.skillInfoTitleLabel;
  Master_object = (AssistMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5687/*"EVENT_REWARD_PARTS_SKILL_INFO_TITLE"*/, 0);
  if ( !skillInfoTitleLabel )
    goto LABEL_27;
  UILabel__set_text(skillInfoTitleLabel, (System_String_o *)Master_object, 0);
  detailMsgLabel = this->fields.detailMsgLabel;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5688/*"EVENT_REWARD_PARTS_SKILL_MSG"*/, 0);
  Master_object = (AssistMaster_o *)System_String__Format(v21, (Il2CppObject *)v14, 0);
  if ( !detailMsgLabel )
    goto LABEL_27;
  UILabel__set_text(detailMsgLabel, (System_String_o *)Master_object, 0);
  confirmMsgLabel = this->fields.confirmMsgLabel;
  Master_object = (AssistMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5686/*"EVENT_REWARD_PARTS_SKILL_CONFIRM"*/, 0);
  if ( !confirmMsgLabel
    || (UILabel__set_text(confirmMsgLabel, (System_String_o *)Master_object, 0),
        decideLabel = this->fields.decideLabel,
        Master_object = (AssistMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3688/*"COMMON_CONFIRM_YES"*/, 0),
        !decideLabel)
    || (UILabel__set_text(decideLabel, (System_String_o *)Master_object, 0),
        cancelLabel = this->fields.cancelLabel,
        Master_object = (AssistMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3683/*"COMMON_CONFIRM_NO"*/, 0),
        !cancelLabel) )
  {
LABEL_27:
    sub_1C71608(Master_object, v9);
  }
  UILabel__set_text(cancelLabel, (System_String_o *)Master_object, 0);
  v25 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_BaseDialog_EndOpenBaseDialog__, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, v25, 0, 0);
}


void EventRewardPartsSkillConfirmDialog__SpriteClear(
        EventRewardPartsSkillConfirmDialog_o *this,
        const MethodInfo *method)
{
  UISprite_o *skillIcon; // x0

  if ( (byte_4CC1BBC & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC1BBC = 1;
  }
  skillIcon = this->fields.skillIcon;
  if ( !skillIcon || (UISprite__set_atlas(skillIcon, 0, 0), (skillIcon = this->fields.skillIcon) == 0) )
    sub_1C71608(skillIcon, method);
  UISprite__set_spriteName(skillIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *EventRewardPartsSkillConfirmDialog__get_closeBtnPath(
        EventRewardPartsSkillConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CC1BC1 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_15645/*"Window/CancelButton"*/);
    byte_4CC1BC1 = 1;
  }
  return (System_String_o *)StringLiteral_15645/*"Window/CancelButton"*/;
}


void EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0___ctor(
        EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0___Open_b__0(
        EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0_o *v2; // x19
  struct EventRewardPartsSkillConfirmDialog_o *_4__this; // x8
  struct AssistEntity_o *assistSkillEntity; // x9
  UISprite_o *skillIcon; // x19
  int32_t skillId; // w20

  v2 = this;
  if ( (byte_4CC1BC3 & 1) == 0 )
  {
    this = (EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0_o *)sub_1C713B0(&AtlasManager_TypeInfo);
    byte_4CC1BC3 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this || (assistSkillEntity = v2->fields.assistSkillEntity) == 0 )
    sub_1C71608(this, method);
  skillIcon = _4__this->fields.skillIcon;
  skillId = assistSkillEntity->fields.skillId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetSkillIcon(skillIcon, skillId, 0);
}