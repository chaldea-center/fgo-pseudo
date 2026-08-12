void EventRewardPartsSkillConfirmDialog___ctor(EventRewardPartsSkillConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596AC0A & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596AC0A = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventRewardPartsSkillConfirmDialog__Close(EventRewardPartsSkillConfirmDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_596AC06 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventRewardPartsSkillConfirmDialog_Init__);
    byte_596AC06 = 1;
  }
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_EventRewardPartsSkillConfirmDialog_Init__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v3, 0);
}


void EventRewardPartsSkillConfirmDialog__Init(EventRewardPartsSkillConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.onDecide = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onDecide, 0, v5, v6, v7, v8, v9, v10);
  EventRewardPartsSkillConfirmDialog__SpriteClear(this, v11);
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

  if ( (byte_596AC08 & 1) == 0 )
  {
    sub_2213A60(&Method_EventRewardPartsSkillConfirmDialog_OnClickCancel__);
    byte_596AC08 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_EventRewardPartsSkillConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRewardPartsSkillConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventRewardPartsSkillConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    onDecide = this->fields.onDecide;
    if ( !onDecide )
      sub_2213CDC(v5, v6);
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

  if ( (byte_596AC07 & 1) == 0 )
  {
    sub_2213A60(&Method_EventRewardPartsSkillConfirmDialog_OnClickDecide__);
    byte_596AC07 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_EventRewardPartsSkillConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRewardPartsSkillConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventRewardPartsSkillConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    onDecide = this->fields.onDecide;
    if ( !onDecide )
      sub_2213CDC(v5, v6);
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
  __int64 v7; // x22
  AssistMaster_o *Master_object; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x2
  struct System_Int32_array *targetIds; // x8
  int32_t v18; // w23
  AssistEntity_o *NextPartsEntity; // x0
  AssistMaster_o **v20; // x23
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x20
  System_Action_o *v34; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  UILabel_o *skillInfoLabel; // x21
  struct UILabel_o *v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  UILabel_o *titleLabel; // x21
  UILabel_o *skillInfoTitleLabel; // x21
  UILabel_o *detailMsgLabel; // x21
  System_String_o *v44; // x0
  UILabel_o *confirmMsgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v48; // x20

  if ( (byte_596AC05 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_BaseDialog_EndOpenBaseDialog__);
    sub_2213A60(&Method_DataManager_GetMaster_AssistMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0__Open_b__0__);
    sub_2213A60(&EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0_TypeInfo);
    sub_2213A60(&StringLiteral_5929/*"EVENT_REWARD_PARTS_SKILL_TITLE"*/);
    sub_2213A60(&StringLiteral_5925/*"EVENT_REWARD_PARTS_SKILL_INFO_TITLE"*/);
    sub_2213A60(&StringLiteral_5926/*"EVENT_REWARD_PARTS_SKILL_MSG"*/);
    sub_2213A60(&StringLiteral_3831/*"COMMON_CONFIRM_NO"*/);
    sub_2213A60(&StringLiteral_3836/*"COMMON_CONFIRM_YES"*/);
    sub_2213A60(&StringLiteral_5924/*"EVENT_REWARD_PARTS_SKILL_CONFIRM"*/);
    byte_596AC05 = 1;
  }
  v7 = sub_2213CCC(EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_27;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  if ( !shopEnt )
    goto LABEL_27;
  targetIds = shopEnt->fields.targetIds;
  if ( !targetIds )
    goto LABEL_27;
  if ( !LODWORD(targetIds->max_length) )
    sub_2213CE4(Master_object);
  v18 = targetIds->m_Items[0];
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v16);
  Master_object = (AssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_AssistMaster___);
  if ( !Master_object )
    goto LABEL_27;
  NextPartsEntity = AssistMaster__GetNextPartsEntity(Master_object, v18, shopEnt->fields.id, 0);
  *(_QWORD *)(v7 + 24) = NextPartsEntity;
  v20 = (AssistMaster_o **)(v7 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)NextPartsEntity, v21, v22, v23, v24, v25, v26);
  if ( !*(_QWORD *)(v7 + 24) )
    goto LABEL_27;
  v33 = *(System_String_o **)(*(_QWORD *)(v7 + 24) + 24LL);
  this->fields.onDecide = onDecideAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide,
    (int32_t)onDecideAction,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  Master_object = (AssistMaster_o *)this->fields.skillNameLabel;
  if ( !Master_object )
    goto LABEL_27;
  UILabel__set_text((UILabel_o *)Master_object, v33, 0);
  Master_object = (AssistMaster_o *)this->fields.skillNameLabel;
  if ( !Master_object )
    goto LABEL_27;
  UILabel__SetCondensedScale((UILabel_o *)Master_object, 270, 0, 0);
  v34 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v7,
    Method_EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0__Open_b__0__,
    0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v35, v36);
  AtlasManager__LoadEventUI(v34, 1, 0);
  Master_object = *v20;
  if ( !*v20 )
    goto LABEL_27;
  skillInfoLabel = this->fields.skillInfoLabel;
  Master_object = (AssistMaster_o *)AssistEntity__GetDetail((AssistEntity_o *)Master_object, 0, 0);
  v38 = this->fields.skillInfoLabel;
  if ( !v38 )
    goto LABEL_27;
  WrapControlText__textAdjust(skillInfoLabel, (System_String_o *)Master_object, v38->fields.mFontSize, 0, 0);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39, v40);
  Master_object = (AssistMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5929/*"EVENT_REWARD_PARTS_SKILL_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_27;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0);
  Master_object = (AssistMaster_o *)this->fields.titleLabel;
  if ( !Master_object )
    goto LABEL_27;
  UILabel__SetCondensedScale((UILabel_o *)Master_object, 620, 0, 0);
  skillInfoTitleLabel = this->fields.skillInfoTitleLabel;
  Master_object = (AssistMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5925/*"EVENT_REWARD_PARTS_SKILL_INFO_TITLE"*/, 0);
  if ( !skillInfoTitleLabel )
    goto LABEL_27;
  UILabel__set_text(skillInfoTitleLabel, (System_String_o *)Master_object, 0);
  detailMsgLabel = this->fields.detailMsgLabel;
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_5926/*"EVENT_REWARD_PARTS_SKILL_MSG"*/, 0);
  Master_object = (AssistMaster_o *)System_String__Format(v44, (Il2CppObject *)v33, 0);
  if ( !detailMsgLabel )
    goto LABEL_27;
  UILabel__set_text(detailMsgLabel, (System_String_o *)Master_object, 0);
  confirmMsgLabel = this->fields.confirmMsgLabel;
  Master_object = (AssistMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5924/*"EVENT_REWARD_PARTS_SKILL_CONFIRM"*/, 0);
  if ( !confirmMsgLabel
    || (UILabel__set_text(confirmMsgLabel, (System_String_o *)Master_object, 0),
        decideLabel = this->fields.decideLabel,
        Master_object = (AssistMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3836/*"COMMON_CONFIRM_YES"*/, 0),
        !decideLabel)
    || (UILabel__set_text(decideLabel, (System_String_o *)Master_object, 0),
        cancelLabel = this->fields.cancelLabel,
        Master_object = (AssistMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"COMMON_CONFIRM_NO"*/, 0),
        !cancelLabel) )
  {
LABEL_27:
    sub_2213CDC(Master_object, v9);
  }
  UILabel__set_text(cancelLabel, (System_String_o *)Master_object, 0);
  v48 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v48, (Il2CppObject *)this, Method_BaseDialog_EndOpenBaseDialog__, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, v48, 0, 0);
}


void EventRewardPartsSkillConfirmDialog__SpriteClear(
        EventRewardPartsSkillConfirmDialog_o *this,
        const MethodInfo *method)
{
  UISprite_o *skillIcon; // x0

  if ( (byte_596AC04 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596AC04 = 1;
  }
  skillIcon = this->fields.skillIcon;
  if ( !skillIcon || (UISprite__set_atlas(skillIcon, 0, 0), (skillIcon = this->fields.skillIcon) == 0) )
    sub_2213CDC(skillIcon, method);
  UISprite__set_spriteName(skillIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *EventRewardPartsSkillConfirmDialog__get_closeBtnPath(
        EventRewardPartsSkillConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_596AC09 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16259/*"Window/CancelButton"*/);
    byte_596AC09 = 1;
  }
  return (System_String_o *)StringLiteral_16259/*"Window/CancelButton"*/;
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
  __int64 v2; // x2
  EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0_o *v3; // x19
  struct EventRewardPartsSkillConfirmDialog_o *_4__this; // x8
  struct AssistEntity_o *assistSkillEntity; // x9
  UISprite_o *skillIcon; // x19
  int32_t skillId; // w20

  v3 = this;
  if ( (byte_596AC0B & 1) == 0 )
  {
    this = (EventRewardPartsSkillConfirmDialog___c__DisplayClass16_0_o *)sub_2213A60(&AtlasManager_TypeInfo);
    byte_596AC0B = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this || (assistSkillEntity = v3->fields.assistSkillEntity) == 0 )
    sub_2213CDC(this, method);
  skillIcon = _4__this->fields.skillIcon;
  skillId = assistSkillEntity->fields.skillId;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v2);
  AtlasManager__SetSkillIcon(skillIcon, skillId, 0);
}