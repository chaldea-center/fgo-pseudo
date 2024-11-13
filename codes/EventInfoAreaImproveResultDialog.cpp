void __fastcall EventInfoAreaImproveResultDialog___ctor(
        EventInfoAreaImproveResultDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B169AD & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B169AD = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoAreaImproveResultDialog__CheckSerializeFieldSetting(
        EventInfoAreaImproveResultDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoAreaImproveResultDialog__Init(
        EventInfoAreaImproveResultDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  UILabel_o *titleLabel; // x0
  __int64 v10; // x1
  UILabel_o *closeLabel; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B169A8 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B169A8 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  this->fields.isClose = 0;
  if ( !titleLabel )
    goto LABEL_8;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_8:
    sub_1BCAA3C(titleLabel, v8);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  this->fields.closeAction = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeAction, 0LL, v12, v13, v14, v15, v16, v17);
}


void __fastcall EventInfoAreaImproveResultDialog__OnClickCloseButton(
        EventInfoAreaImproveResultDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B169AB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventInfoAreaImproveResultDialog_OnClickCloseButton__, v4, v5);
    sub_1BCA7E0(&Method_EventInfoAreaImproveResultDialog__OnClickCloseButton_b__12_0__, v6, v7);
    byte_4B169AB = 1;
  }
  if ( !this->fields.isClose )
  {
    v8 = Method_EventInfoAreaImproveResultDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoAreaImproveResultDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_EventInfoAreaImproveResultDialog_OnClickCloseButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EventInfoAreaImproveResultDialog__OnClickCloseButton_b__12_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
    this->fields.isClose = 1;
  }
}


void __fastcall EventInfoAreaImproveResultDialog__Open(
        EventInfoAreaImproveResultDialog_o *this,
        EventAreaImproveResultInfo_o *areaImproveResultInfo,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  EventCooltimeRewardMaster_o *SelfUserGame; // x0
  __int64 v14; // x1
  int32_t spotId; // w22
  int32_t eventId; // w24
  int32_t beforeLevel; // w21
  int32_t v18; // w23
  int32_t *p_beforeLevel; // t2
  EventCooltimeRewardMaster_o *v20; // x25
  EventCooltimeRewardEntity_o *Entity; // x21
  EventCooltimeRewardEntity_o *v22; // x0
  const MethodInfo *v23; // x2
  EventCooltimeRewardEntity_o *v24; // x22
  const MethodInfo *v25; // x3
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Action_o *v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4B169A9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, areaImproveResultInfo, closeAction);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_EventInfoAreaImproveResultDialog__Open_b__9_0__, v11, v12);
    byte_4B169A9 = 1;
  }
  EventInfoAreaImproveResultDialog__Init(this, (const MethodInfo *)areaImproveResultInfo);
  SelfUserGame = (EventCooltimeRewardMaster_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || !areaImproveResultInfo )
    goto LABEL_12;
  eventId = areaImproveResultInfo->fields.eventId;
  spotId = areaImproveResultInfo->fields.spotId;
  p_beforeLevel = &areaImproveResultInfo->fields.beforeLevel;
  beforeLevel = areaImproveResultInfo->fields.beforeLevel;
  v18 = p_beforeLevel[1];
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
  SelfUserGame = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !SelfUserGame )
LABEL_12:
    sub_1BCAA3C(SelfUserGame, v14);
  v20 = SelfUserGame;
  Entity = EventCooltimeRewardMaster__GetEntity(SelfUserGame, eventId, spotId, beforeLevel, 0LL);
  v22 = EventCooltimeRewardMaster__GetEntity(v20, eventId, spotId, v18, 0LL);
  if ( Entity && (v24 = v22) != 0LL )
  {
    EventInfoAreaImproveResultDialog__SetupTitle(this, v22->fields.name, v23);
    EventInfoAreaImproveResultDialog__SetupRewardInfo(this, Entity, v24, v25);
    v29 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v26, v27, v28);
    System_Action___ctor(v29, (Il2CppObject *)this, Method_EventInfoAreaImproveResultDialog__Open_b__9_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v29, 0, 0LL);
    this->fields.closeAction = closeAction;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.closeAction,
      (int64_t)closeAction,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  else
  {
    ActionExtensions__Call(closeAction, 0LL);
  }
}


void __fastcall EventInfoAreaImproveResultDialog__SetupRewardInfo(
        EventInfoAreaImproveResultDialog_o *this,
        EventCooltimeRewardEntity_o *beforeRewardEnt,
        EventCooltimeRewardEntity_o *afterRewardEnt,
        const MethodInfo *method)
{
  EventInfoAreaImproveResultDialog_o *v5; // x21
  GiftEntity_o *v7; // x22
  GiftEntity_o *GiftEntity; // x0
  GiftEntity_o *v9; // x23
  bool isQp; // w27
  const MethodInfo *v11; // x3
  char v12; // w24
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  int32_t v18; // w26
  int v19; // w25
  EventCooltimeRewardEntity_GiftMakingVelocityInfo_o *GiftMakingVelocityInfo; // x28
  const MethodInfo *v21; // x4
  EventInfoAreaImproveResultInfoComponent_o *beforeQuestInfo; // x8
  bool v23; // w9
  int32_t GiftNum_k__BackingField; // w27
  int32_t UnitTime_k__BackingField; // w29
  int32_t num; // w25
  int32_t v27; // w23
  int32_t m_CachedPtr; // w22
  int v29; // w28
  const MethodInfo *v30; // x4
  const MethodInfo *v31; // x5
  const MethodInfo *v32; // x5
  int32_t v33; // w3
  int32_t v34; // w1
  bool v35; // w2
  bool v36; // zf
  int32_t RewardUnitTime; // w28
  const MethodInfo *v38; // x4
  int32_t v39; // w29
  const MethodInfo *v40; // x4
  const MethodInfo *v41; // x5
  bool v42; // w4
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x3
  int v45; // [xsp+Ch] [xbp-64h]

  if ( !beforeRewardEnt )
    goto LABEL_33;
  v5 = this;
  this = (EventInfoAreaImproveResultDialog_o *)EventCooltimeRewardEntity__GetGiftEntity(beforeRewardEnt, 0LL);
  if ( !afterRewardEnt )
    goto LABEL_33;
  v7 = (GiftEntity_o *)this;
  GiftEntity = EventCooltimeRewardEntity__GetGiftEntity(afterRewardEnt, 0LL);
  if ( v7 )
  {
    v9 = GiftEntity;
    if ( GiftEntity )
    {
      isQp = GiftEntity__isQp(v7, 0LL);
      this = (EventInfoAreaImproveResultDialog_o *)GiftEntity__isQp(v9, 0LL);
      if ( v5->fields.beforeQuestInfo )
      {
        if ( v5->fields.afterQuestInfo )
        {
          v12 = (char)this;
          EventInfoAreaImproveResultInfoComponent__SetLevelLabel(
            v5->fields.beforeQuestInfo,
            beforeRewardEnt->fields.lv,
            0,
            v11);
          this = (EventInfoAreaImproveResultDialog_o *)v5->fields.afterQuestInfo;
          if ( this )
          {
            EventInfoAreaImproveResultInfoComponent__SetLevelLabel(
              (EventInfoAreaImproveResultInfoComponent_o *)this,
              afterRewardEnt->fields.lv,
              beforeRewardEnt->fields.lv != afterRewardEnt->fields.lv,
              v13);
            this = (EventInfoAreaImproveResultDialog_o *)v5->fields.beforeQuestInfo;
            if ( this )
            {
              EventInfoAreaImproveResultInfoComponent__SetAddEventPointRateLabel(
                (EventInfoAreaImproveResultInfoComponent_o *)this,
                beforeRewardEnt->fields.addEventPointRate,
                0,
                v14);
              this = (EventInfoAreaImproveResultDialog_o *)v5->fields.afterQuestInfo;
              if ( this )
              {
                EventInfoAreaImproveResultInfoComponent__SetAddEventPointRateLabel(
                  (EventInfoAreaImproveResultInfoComponent_o *)this,
                  afterRewardEnt->fields.addEventPointRate,
                  beforeRewardEnt->fields.addEventPointRate != afterRewardEnt->fields.addEventPointRate,
                  v15);
                this = (EventInfoAreaImproveResultDialog_o *)v5->fields.beforeQuestInfo;
                if ( this )
                {
                  EventInfoAreaImproveResultInfoComponent__SetIcon(
                    (EventInfoAreaImproveResultInfoComponent_o *)this,
                    v7,
                    v16);
                  this = (EventInfoAreaImproveResultDialog_o *)v5->fields.afterQuestInfo;
                  if ( this )
                  {
                    EventInfoAreaImproveResultInfoComponent__SetIcon(
                      (EventInfoAreaImproveResultInfoComponent_o *)this,
                      v9,
                      v17);
                    v18 = beforeRewardEnt->fields.upperLimitGiftNum * v7->fields.num;
                    v19 = afterRewardEnt->fields.upperLimitGiftNum * v9->fields.num;
                    if ( EventCooltimeRewardEntity__DoesMakeGiftsEverySecond(beforeRewardEnt, 0LL)
                      || EventCooltimeRewardEntity__DoesMakeGiftsEverySecond(afterRewardEnt, 0LL) )
                    {
                      GiftMakingVelocityInfo = EventCooltimeRewardEntity__GetGiftMakingVelocityInfo(
                                                 beforeRewardEnt,
                                                 0LL);
                      this = (EventInfoAreaImproveResultDialog_o *)EventCooltimeRewardEntity__GetGiftMakingVelocityInfo(
                                                                     afterRewardEnt,
                                                                     0LL);
                      if ( !GiftMakingVelocityInfo )
                        goto LABEL_33;
                      if ( !this )
                        goto LABEL_33;
                      beforeQuestInfo = v5->fields.beforeQuestInfo;
                      v45 = v19;
                      if ( !beforeQuestInfo )
                        goto LABEL_33;
                      v23 = isQp;
                      UnitTime_k__BackingField = GiftMakingVelocityInfo->fields._UnitTime_k__BackingField;
                      GiftNum_k__BackingField = GiftMakingVelocityInfo->fields._GiftNum_k__BackingField;
                      num = v7->fields.num;
                      v27 = v9->fields.num;
                      m_CachedPtr = this->fields.m_CachedPtr;
                      v29 = *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1);
                      EventInfoAreaImproveResultInfoComponent__SetRewardUnitTimeLabel(
                        beforeQuestInfo,
                        UnitTime_k__BackingField,
                        v23,
                        0,
                        v21);
                      this = (EventInfoAreaImproveResultDialog_o *)v5->fields.afterQuestInfo;
                      if ( !this )
                        goto LABEL_33;
                      EventInfoAreaImproveResultInfoComponent__SetRewardUnitTimeLabel(
                        (EventInfoAreaImproveResultInfoComponent_o *)this,
                        m_CachedPtr,
                        v12 & 1,
                        UnitTime_k__BackingField != m_CachedPtr,
                        v30);
                      this = (EventInfoAreaImproveResultDialog_o *)v5->fields.beforeQuestInfo;
                      if ( !this )
                        goto LABEL_33;
                      EventInfoAreaImproveResultInfoComponent__SetRewardNumLabel(
                        (EventInfoAreaImproveResultInfoComponent_o *)this,
                        GiftNum_k__BackingField * num,
                        0,
                        v18,
                        0,
                        v31);
                      this = (EventInfoAreaImproveResultDialog_o *)v5->fields.afterQuestInfo;
                      if ( !this )
                        goto LABEL_33;
                      v33 = v45;
                      v34 = v29 * v27;
                      v35 = GiftNum_k__BackingField * num != v29 * v27;
                      v36 = v18 == v45;
                    }
                    else
                    {
                      RewardUnitTime = EventCooltimeRewardEntity__GetRewardUnitTime(beforeRewardEnt, 0LL);
                      this = (EventInfoAreaImproveResultDialog_o *)EventCooltimeRewardEntity__GetRewardUnitTime(
                                                                     afterRewardEnt,
                                                                     0LL);
                      if ( !v5->fields.beforeQuestInfo )
                        goto LABEL_33;
                      v39 = (int)this;
                      EventInfoAreaImproveResultInfoComponent__SetRewardUnitTimeLabel(
                        v5->fields.beforeQuestInfo,
                        RewardUnitTime,
                        isQp,
                        0,
                        v38);
                      this = (EventInfoAreaImproveResultDialog_o *)v5->fields.afterQuestInfo;
                      if ( !this )
                        goto LABEL_33;
                      EventInfoAreaImproveResultInfoComponent__SetRewardUnitTimeLabel(
                        (EventInfoAreaImproveResultInfoComponent_o *)this,
                        v39,
                        v12 & 1,
                        RewardUnitTime != v39,
                        v40);
                      this = (EventInfoAreaImproveResultDialog_o *)v5->fields.beforeQuestInfo;
                      if ( !this )
                        goto LABEL_33;
                      EventInfoAreaImproveResultInfoComponent__SetRewardNumLabel(
                        (EventInfoAreaImproveResultInfoComponent_o *)this,
                        v7->fields.num,
                        0,
                        v18,
                        0,
                        v41);
                      this = (EventInfoAreaImproveResultDialog_o *)v5->fields.afterQuestInfo;
                      if ( !this )
                        goto LABEL_33;
                      v34 = v9->fields.num;
                      v33 = v19;
                      v35 = v7->fields.num != v34;
                      v36 = v18 == v19;
                    }
                    v42 = !v36;
                    EventInfoAreaImproveResultInfoComponent__SetRewardNumLabel(
                      (EventInfoAreaImproveResultInfoComponent_o *)this,
                      v34,
                      v35,
                      v33,
                      v42,
                      v32);
                    this = (EventInfoAreaImproveResultDialog_o *)v5->fields.beforeQuestInfo;
                    if ( this )
                    {
                      EventInfoAreaImproveResultInfoComponent__SetMaxRewardTimeLabel(
                        (EventInfoAreaImproveResultInfoComponent_o *)this,
                        beforeRewardEnt->fields.cooltime,
                        0,
                        v43);
                      this = (EventInfoAreaImproveResultDialog_o *)v5->fields.afterQuestInfo;
                      if ( this )
                      {
                        EventInfoAreaImproveResultInfoComponent__SetMaxRewardTimeLabel(
                          (EventInfoAreaImproveResultInfoComponent_o *)this,
                          afterRewardEnt->fields.cooltime,
                          beforeRewardEnt->fields.cooltime != afterRewardEnt->fields.cooltime,
                          v44);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_33:
      sub_1BCAA3C(this, beforeRewardEnt);
    }
  }
}


void __fastcall EventInfoAreaImproveResultDialog__SetupTitle(
        EventInfoAreaImproveResultDialog_o *this,
        System_String_o *areaName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *titleLabel; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1

  if ( (byte_4B169AA & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, areaName, method);
    sub_1BCA7E0(&StringLiteral_5618/*"EVENT_AREA_IMPROVE_RESULT_DIALOG_TITLE"*/, v5, v6);
    byte_4B169AA = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, areaName);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5618/*"EVENT_AREA_IMPROVE_RESULT_DIALOG_TITLE"*/, 0LL);
  v9 = System_String__Format(v8, (Il2CppObject *)areaName, 0LL);
  if ( !titleLabel )
    sub_1BCAA3C(v9, v10);
  UILabel__set_text(titleLabel, v9, 0LL);
}


void __fastcall EventInfoAreaImproveResultDialog___OnClickCloseButton_b__12_0(
        EventInfoAreaImproveResultDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ActionExtensions__Call(this->fields.closeAction, 0LL);
  EventInfoAreaImproveResultDialog__Init(this, v3);
}


void __fastcall EventInfoAreaImproveResultDialog___Open_b__9_0(
        EventInfoAreaImproveResultDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v2; // x0

  v2 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventInfoAreaImproveResultDialog_o *, Il2CppMethodPointer))this->klass->vtable._4_get_closeBtnObject.method)(
                                     this,
                                     this->klass->vtable._5_set_closeBtnObject.methodPtr);
  AndroidBackKeyManager__AddBackBtn(v2, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventInfoAreaImproveResultDialog__get_closeBtnObject(
        EventInfoAreaImproveResultDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B169AC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B169AC = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}