void __fastcall EventInfoAreaImproveResultDialog___ctor(
        EventInfoAreaImproveResultDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B1E07 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B1E07 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42B1E02 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1E02 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  this->fields.isClose = 0;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_9:
    sub_B52A5C(titleLabel, v3);
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  this->fields.closeAction = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v6, v7, v8, v9, v10, v11);
}


void __fastcall EventInfoAreaImproveResultDialog__OnClickCloseButton(
        EventInfoAreaImproveResultDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_42B1E05 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EventInfoAreaImproveResultDialog__OnClickCloseButton_b__12_0__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B1E05 = 1;
  }
  if ( !this->fields.isClose )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v3,
      (Il2CppObject *)this,
      Method_EventInfoAreaImproveResultDialog__OnClickCloseButton_b__12_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
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
  int32_t eventId; // w23
  int32_t afterLevel; // w21
  int32_t beforeLevel; // w24
  EventCooltimeRewardMaster_o *v13; // x25
  EventCooltimeRewardEntity_o *Entity; // x24
  EventCooltimeRewardEntity_o *v15; // x0
  const MethodInfo *v16; // x2
  EventCooltimeRewardEntity_o *v17; // x21
  const MethodInfo *v18; // x3
  System_Action_o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42B1E03 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_EventInfoAreaImproveResultDialog__Open_b__9_0__);
    byte_42B1E03 = 1;
  }
  EventInfoAreaImproveResultDialog__Init(this, (const MethodInfo *)areaImproveResultInfo);
  SelfUserGame = (EventCooltimeRewardMaster_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || !areaImproveResultInfo )
    goto LABEL_13;
  eventId = areaImproveResultInfo->fields.eventId;
  spotId = areaImproveResultInfo->fields.spotId;
  beforeLevel = areaImproveResultInfo->fields.beforeLevel;
  afterLevel = areaImproveResultInfo->fields.afterLevel;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  SelfUserGame = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !SelfUserGame )
LABEL_13:
    sub_B52A5C(SelfUserGame, v8);
  v13 = SelfUserGame;
  Entity = EventCooltimeRewardMaster__GetEntity(SelfUserGame, eventId, spotId, beforeLevel, 0LL);
  v15 = EventCooltimeRewardMaster__GetEntity(v13, eventId, spotId, afterLevel, 0LL);
  if ( Entity && (v17 = v15) != 0LL )
  {
    EventInfoAreaImproveResultDialog__SetupTitle(this, v15->fields.name, v16);
    EventInfoAreaImproveResultDialog__SetupRewardInfo(this, Entity, v17, v18);
    v19 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_EventInfoAreaImproveResultDialog__Open_b__9_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v19, 0, 0LL);
    this->fields.closeAction = closeAction;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.closeAction,
      (System_Int32_array **)closeAction,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
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
  bool isQp; // w28
  const MethodInfo *v11; // x3
  char v12; // w25
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  int32_t v18; // w27
  int v19; // w26
  EventCooltimeRewardEntity_GiftMakingVelocityInfo_o *GiftMakingVelocityInfo; // x24
  const MethodInfo *v21; // x4
  bool v22; // w9
  int32_t GiftNum_k__BackingField; // w26
  int32_t UnitTime_k__BackingField; // w28
  int32_t num; // w27
  int32_t v26; // w23
  int32_t m_CachedPtr; // w22
  int v28; // w24
  const MethodInfo *v29; // x4
  const MethodInfo *v30; // x5
  const MethodInfo *v31; // x5
  int32_t v32; // w3
  int32_t v33; // w1
  bool v34; // w2
  bool v35; // zf
  bool v36; // w25
  int32_t RewardUnitTime; // w28
  const MethodInfo *v38; // x4
  int32_t v39; // w24
  const MethodInfo *v40; // x4
  const MethodInfo *v41; // x5
  bool v42; // w4
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x3
  int32_t maxNum; // [xsp+8h] [xbp-58h]
  int v46; // [xsp+Ch] [xbp-54h]
  char v47; // [xsp+Ch] [xbp-54h]

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
                      maxNum = v18;
                      v46 = v19;
                      if ( !v5->fields.beforeQuestInfo )
                        goto LABEL_33;
                      v22 = isQp;
                      UnitTime_k__BackingField = GiftMakingVelocityInfo->fields._UnitTime_k__BackingField;
                      GiftNum_k__BackingField = GiftMakingVelocityInfo->fields._GiftNum_k__BackingField;
                      num = v7->fields.num;
                      v26 = v9->fields.num;
                      m_CachedPtr = this->fields.m_CachedPtr;
                      v28 = *((_DWORD *)&this->fields.BaseMonoBehaviour_Fields + 1);
                      EventInfoAreaImproveResultInfoComponent__SetRewardUnitTimeLabel(
                        v5->fields.beforeQuestInfo,
                        UnitTime_k__BackingField,
                        v22,
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
                        v29);
                      this = (EventInfoAreaImproveResultDialog_o *)v5->fields.beforeQuestInfo;
                      if ( !this )
                        goto LABEL_33;
                      EventInfoAreaImproveResultInfoComponent__SetRewardNumLabel(
                        (EventInfoAreaImproveResultInfoComponent_o *)this,
                        GiftNum_k__BackingField * num,
                        0,
                        maxNum,
                        0,
                        v30);
                      this = (EventInfoAreaImproveResultDialog_o *)v5->fields.afterQuestInfo;
                      if ( !this )
                        goto LABEL_33;
                      v32 = v46;
                      v33 = v28 * v26;
                      v34 = GiftNum_k__BackingField * num != v28 * v26;
                      v35 = maxNum == v46;
                    }
                    else
                    {
                      v47 = v12;
                      v36 = isQp;
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
                        v36,
                        0,
                        v38);
                      this = (EventInfoAreaImproveResultDialog_o *)v5->fields.afterQuestInfo;
                      if ( !this )
                        goto LABEL_33;
                      EventInfoAreaImproveResultInfoComponent__SetRewardUnitTimeLabel(
                        (EventInfoAreaImproveResultInfoComponent_o *)this,
                        v39,
                        v47 & 1,
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
                      v33 = v9->fields.num;
                      v32 = v19;
                      v34 = v7->fields.num != v33;
                      v35 = v18 == v19;
                    }
                    v42 = !v35;
                    EventInfoAreaImproveResultInfoComponent__SetRewardNumLabel(
                      (EventInfoAreaImproveResultInfoComponent_o *)this,
                      v33,
                      v34,
                      v32,
                      v42,
                      v31);
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
      sub_B52A5C(this, beforeRewardEnt);
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

  if ( (byte_42B1E04 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_5591/*"EVENT_AREA_IMPROVE_RESULT_DIALOG_TITLE"*/);
    byte_42B1E04 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5591/*"EVENT_AREA_IMPROVE_RESULT_DIALOG_TITLE"*/, 0LL);
  v7 = System_String__Format(v6, (Il2CppObject *)areaName, 0LL);
  if ( !titleLabel )
    sub_B52A5C(v7, v8);
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
  UnityEngine_GameObject_o *v3; // x19

  if ( (byte_42B1E08 & 1) == 0 )
  {
    sub_B52984(&AndroidBackKeyManager_TypeInfo);
    byte_42B1E08 = 1;
  }
  v3 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(EventInfoAreaImproveResultDialog_o *, Il2CppMethodPointer))this->klass->vtable._4_get_closeBtnObject.method)(
                                     this,
                                     this->klass->vtable._5_set_closeBtnObject.methodPtr);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn(v3, 0LL);
}


UnityEngine_GameObject_o *__fastcall EventInfoAreaImproveResultDialog__get_closeBtnObject(
        EventInfoAreaImproveResultDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_42B1E06 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1E06 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_B52A5C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}