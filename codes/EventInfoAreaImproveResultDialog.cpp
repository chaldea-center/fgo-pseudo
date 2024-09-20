void __fastcall EventInfoAreaImproveResultDialog___ctor(
        EventInfoAreaImproveResultDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5BA80 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5BA80 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5BA7B & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BA7B = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  this->fields.isClose = 0;
  if ( !titleLabel )
    goto LABEL_8;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_8:
    sub_1B8880C(titleLabel, v3);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  this->fields.closeAction = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeAction, 0, v6, v7);
}


void __fastcall EventInfoAreaImproveResultDialog__OnClickCloseButton(
        EventInfoAreaImproveResultDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4A5BA7E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventInfoAreaImproveResultDialog_OnClickCloseButton__);
    sub_1B885B0(&Method_EventInfoAreaImproveResultDialog__OnClickCloseButton_b__12_0__);
    byte_4A5BA7E = 1;
  }
  if ( !this->fields.isClose )
  {
    v3 = Method_EventInfoAreaImproveResultDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoAreaImproveResultDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventInfoAreaImproveResultDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventInfoAreaImproveResultDialog__OnClickCloseButton_b__12_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
    this->fields.isClose = 1;
  }
}


void __fastcall EventInfoAreaImproveResultDialog__Open(
        EventInfoAreaImproveResultDialog_o *this,
        EventAreaImproveResultInfo_o *areaImproveResultInfo,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  EventCooltimeRewardMaster_o *SelfUserGame; // x0
  __int64 v8; // x1
  int32_t spotId; // w22
  int32_t eventId; // w24
  int32_t beforeLevel; // w21
  int32_t v12; // w23
  int32_t *p_beforeLevel; // t2
  EventCooltimeRewardMaster_o *v14; // x25
  EventCooltimeRewardEntity_o *Entity; // x21
  EventCooltimeRewardEntity_o *v16; // x0
  const MethodInfo *v17; // x2
  EventCooltimeRewardEntity_o *v18; // x22
  const MethodInfo *v19; // x3
  System_Action_o *v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A5BA7C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_EventInfoAreaImproveResultDialog__Open_b__9_0__);
    byte_4A5BA7C = 1;
  }
  EventInfoAreaImproveResultDialog__Init(this, (const MethodInfo *)areaImproveResultInfo);
  SelfUserGame = (EventCooltimeRewardMaster_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || !areaImproveResultInfo )
    goto LABEL_12;
  eventId = areaImproveResultInfo->fields.eventId;
  spotId = areaImproveResultInfo->fields.spotId;
  p_beforeLevel = &areaImproveResultInfo->fields.beforeLevel;
  beforeLevel = areaImproveResultInfo->fields.beforeLevel;
  v12 = p_beforeLevel[1];
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  SelfUserGame = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !SelfUserGame )
LABEL_12:
    sub_1B8880C(SelfUserGame, v8);
  v14 = SelfUserGame;
  Entity = EventCooltimeRewardMaster__GetEntity(SelfUserGame, eventId, spotId, beforeLevel, 0LL);
  v16 = EventCooltimeRewardMaster__GetEntity(v14, eventId, spotId, v12, 0LL);
  if ( Entity && (v18 = v16) != 0LL )
  {
    EventInfoAreaImproveResultDialog__SetupTitle(this, v16->fields.name, v17);
    EventInfoAreaImproveResultDialog__SetupRewardInfo(this, Entity, v18, v19);
    v20 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_EventInfoAreaImproveResultDialog__Open_b__9_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v20, 0, 0LL);
    this->fields.closeAction = closeAction;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeAction, (int32_t)closeAction, v21, v22);
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
      sub_1B8880C(this, beforeRewardEnt);
    }
  }
}


void __fastcall EventInfoAreaImproveResultDialog__SetupTitle(
        EventInfoAreaImproveResultDialog_o *this,
        System_String_o *areaName,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x20
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_4A5BA7D & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5541/*"EVENT_AREA_IMPROVE_RESULT_DIALOG_TITLE"*/);
    byte_4A5BA7D = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5541/*"EVENT_AREA_IMPROVE_RESULT_DIALOG_TITLE"*/, 0LL);
  v7 = System_String__Format(v6, (Il2CppObject *)areaName, 0LL);
  if ( !titleLabel )
    sub_1B8880C(v7, v8);
  UILabel__set_text(titleLabel, v7, 0LL);
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
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A5BA7F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5BA7F = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}