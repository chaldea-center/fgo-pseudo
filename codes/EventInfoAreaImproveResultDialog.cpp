void __fastcall EventInfoAreaImproveResultDialog___ctor(
        EventInfoAreaImproveResultDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB6BE & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FB6BE = 1;
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
  __int64 v4; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  System_String_o *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FB6B9 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v3);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40FB6B9 = 1;
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
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
LABEL_9:
    sub_B170D4();
  UILabel__set_text(closeLabel, v7, 0LL);
  this->fields.closeAction = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v8, v9, v10, v11, v12, v13);
}


void __fastcall EventInfoAreaImproveResultDialog__OnClickCloseButton(
        EventInfoAreaImproveResultDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x20

  if ( (byte_40FB6BC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventInfoAreaImproveResultDialog__OnClickCloseButton_b__12_0__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FB6BC = 1;
  }
  if ( !this->fields.isClose )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_EventInfoAreaImproveResultDialog__OnClickCloseButton_b__12_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t spotId; // w22
  int32_t eventId; // w23
  int32_t afterLevel; // w21
  int32_t beforeLevel; // w24
  EventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x0
  EventCooltimeRewardMaster_o *v15; // x25
  EventCooltimeRewardEntity_o *Entity; // x24
  EventCooltimeRewardEntity_o *v17; // x0
  const MethodInfo *v18; // x2
  EventCooltimeRewardEntity_o *v19; // x21
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Action_o *v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_40FB6BA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, areaImproveResultInfo);
    sub_B16FFC(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_EventInfoAreaImproveResultDialog__Open_b__9_0__, v9);
    byte_40FB6BA = 1;
  }
  EventInfoAreaImproveResultDialog__Init(this, (const MethodInfo *)areaImproveResultInfo);
  if ( !UserGameMaster__getSelfUserGame(0LL) || !areaImproveResultInfo )
    goto LABEL_13;
  eventId = areaImproveResultInfo->fields.eventId;
  spotId = areaImproveResultInfo->fields.spotId;
  beforeLevel = areaImproveResultInfo->fields.beforeLevel;
  afterLevel = areaImproveResultInfo->fields.afterLevel;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_13:
    sub_B170D4();
  v15 = Master_WarQuestSelectionMaster;
  Entity = EventCooltimeRewardMaster__GetEntity(Master_WarQuestSelectionMaster, eventId, spotId, beforeLevel, 0LL);
  v17 = EventCooltimeRewardMaster__GetEntity(v15, eventId, spotId, afterLevel, 0LL);
  if ( Entity && (v19 = v17) != 0LL )
  {
    EventInfoAreaImproveResultDialog__SetupTitle(this, v17->fields.name, v18);
    EventInfoAreaImproveResultDialog__SetupRewardInfo(this, Entity, v19, v20);
    v25 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v21, v22, v23, v24);
    System_Action___ctor(v25, (Il2CppObject *)this, Method_EventInfoAreaImproveResultDialog__Open_b__9_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v25, 0, 0LL);
    this->fields.closeAction = closeAction;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.closeAction,
      (System_Int32_array **)closeAction,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
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
  GiftEntity_o *GiftEntity; // x0
  GiftEntity_o *v8; // x22
  GiftEntity_o *v9; // x0
  GiftEntity_o *v10; // x23
  bool isQp; // w28
  bool v12; // w0
  const MethodInfo *v13; // x3
  bool v14; // w25
  const MethodInfo *v15; // x3
  EventInfoAreaImproveResultInfoComponent_o *afterQuestInfo; // x0
  const MethodInfo *v17; // x3
  EventInfoAreaImproveResultInfoComponent_o *beforeQuestInfo; // x0
  const MethodInfo *v19; // x3
  EventInfoAreaImproveResultInfoComponent_o *v20; // x0
  const MethodInfo *v21; // x2
  EventInfoAreaImproveResultInfoComponent_o *v22; // x0
  const MethodInfo *v23; // x2
  EventInfoAreaImproveResultInfoComponent_o *v24; // x0
  int32_t v25; // w27
  int v26; // w26
  EventCooltimeRewardEntity_GiftMakingVelocityInfo_o *GiftMakingVelocityInfo; // x24
  EventCooltimeRewardEntity_GiftMakingVelocityInfo_o *v28; // x0
  const MethodInfo *v29; // x4
  bool v30; // w9
  int32_t GiftNum_k__BackingField; // w26
  int32_t UnitTime_k__BackingField; // w28
  int32_t num; // w27
  int32_t v34; // w23
  int32_t v35; // w22
  int32_t v36; // w24
  const MethodInfo *v37; // x4
  EventInfoAreaImproveResultInfoComponent_o *v38; // x0
  const MethodInfo *v39; // x5
  EventInfoAreaImproveResultInfoComponent_o *v40; // x0
  const MethodInfo *v41; // x5
  EventInfoAreaImproveResultInfoComponent_o *v42; // x0
  int32_t v43; // w3
  int32_t v44; // w1
  bool v45; // w2
  bool v46; // zf
  bool v47; // w25
  int32_t RewardUnitTime; // w28
  int32_t v49; // w0
  const MethodInfo *v50; // x4
  int32_t v51; // w24
  const MethodInfo *v52; // x4
  EventInfoAreaImproveResultInfoComponent_o *v53; // x0
  const MethodInfo *v54; // x5
  EventInfoAreaImproveResultInfoComponent_o *v55; // x0
  bool v56; // w4
  const MethodInfo *v57; // x3
  EventInfoAreaImproveResultInfoComponent_o *v58; // x0
  const MethodInfo *v59; // x3
  EventInfoAreaImproveResultInfoComponent_o *v60; // x0
  int32_t maxNum; // [xsp+8h] [xbp-58h]
  int v62; // [xsp+Ch] [xbp-54h]
  bool v63; // [xsp+Ch] [xbp-54h]

  if ( !beforeRewardEnt )
    goto LABEL_33;
  GiftEntity = EventCooltimeRewardEntity__GetGiftEntity(beforeRewardEnt, 0LL);
  if ( !afterRewardEnt )
    goto LABEL_33;
  v8 = GiftEntity;
  v9 = EventCooltimeRewardEntity__GetGiftEntity(afterRewardEnt, 0LL);
  if ( v8 )
  {
    v10 = v9;
    if ( v9 )
    {
      isQp = GiftEntity__isQp(v8, 0LL);
      v12 = GiftEntity__isQp(v10, 0LL);
      if ( this->fields.beforeQuestInfo )
      {
        if ( this->fields.afterQuestInfo )
        {
          v14 = v12;
          EventInfoAreaImproveResultInfoComponent__SetLevelLabel(
            this->fields.beforeQuestInfo,
            beforeRewardEnt->fields.lv,
            0,
            v13);
          afterQuestInfo = this->fields.afterQuestInfo;
          if ( afterQuestInfo )
          {
            EventInfoAreaImproveResultInfoComponent__SetLevelLabel(
              afterQuestInfo,
              afterRewardEnt->fields.lv,
              beforeRewardEnt->fields.lv != afterRewardEnt->fields.lv,
              v15);
            beforeQuestInfo = this->fields.beforeQuestInfo;
            if ( beforeQuestInfo )
            {
              EventInfoAreaImproveResultInfoComponent__SetAddEventPointRateLabel(
                beforeQuestInfo,
                beforeRewardEnt->fields.addEventPointRate,
                0,
                v17);
              v20 = this->fields.afterQuestInfo;
              if ( v20 )
              {
                EventInfoAreaImproveResultInfoComponent__SetAddEventPointRateLabel(
                  v20,
                  afterRewardEnt->fields.addEventPointRate,
                  beforeRewardEnt->fields.addEventPointRate != afterRewardEnt->fields.addEventPointRate,
                  v19);
                v22 = this->fields.beforeQuestInfo;
                if ( v22 )
                {
                  EventInfoAreaImproveResultInfoComponent__SetIcon(v22, v8, v21);
                  v24 = this->fields.afterQuestInfo;
                  if ( v24 )
                  {
                    EventInfoAreaImproveResultInfoComponent__SetIcon(v24, v10, v23);
                    v25 = beforeRewardEnt->fields.upperLimitGiftNum * v8->fields.num;
                    v26 = afterRewardEnt->fields.upperLimitGiftNum * v10->fields.num;
                    if ( EventCooltimeRewardEntity__DoesMakeGiftsEverySecond(beforeRewardEnt, 0LL)
                      || EventCooltimeRewardEntity__DoesMakeGiftsEverySecond(afterRewardEnt, 0LL) )
                    {
                      GiftMakingVelocityInfo = EventCooltimeRewardEntity__GetGiftMakingVelocityInfo(
                                                 beforeRewardEnt,
                                                 0LL);
                      v28 = EventCooltimeRewardEntity__GetGiftMakingVelocityInfo(afterRewardEnt, 0LL);
                      if ( !GiftMakingVelocityInfo )
                        goto LABEL_33;
                      if ( !v28 )
                        goto LABEL_33;
                      maxNum = v25;
                      v62 = v26;
                      if ( !this->fields.beforeQuestInfo )
                        goto LABEL_33;
                      v30 = isQp;
                      UnitTime_k__BackingField = GiftMakingVelocityInfo->fields._UnitTime_k__BackingField;
                      GiftNum_k__BackingField = GiftMakingVelocityInfo->fields._GiftNum_k__BackingField;
                      num = v8->fields.num;
                      v34 = v10->fields.num;
                      v35 = v28->fields._UnitTime_k__BackingField;
                      v36 = v28->fields._GiftNum_k__BackingField;
                      EventInfoAreaImproveResultInfoComponent__SetRewardUnitTimeLabel(
                        this->fields.beforeQuestInfo,
                        UnitTime_k__BackingField,
                        v30,
                        0,
                        v29);
                      v38 = this->fields.afterQuestInfo;
                      if ( !v38 )
                        goto LABEL_33;
                      EventInfoAreaImproveResultInfoComponent__SetRewardUnitTimeLabel(
                        v38,
                        v35,
                        v14,
                        UnitTime_k__BackingField != v35,
                        v37);
                      v40 = this->fields.beforeQuestInfo;
                      if ( !v40 )
                        goto LABEL_33;
                      EventInfoAreaImproveResultInfoComponent__SetRewardNumLabel(
                        v40,
                        GiftNum_k__BackingField * num,
                        0,
                        maxNum,
                        0,
                        v39);
                      v42 = this->fields.afterQuestInfo;
                      if ( !v42 )
                        goto LABEL_33;
                      v43 = v62;
                      v44 = v36 * v34;
                      v45 = GiftNum_k__BackingField * num != v36 * v34;
                      v46 = maxNum == v62;
                    }
                    else
                    {
                      v63 = v14;
                      v47 = isQp;
                      RewardUnitTime = EventCooltimeRewardEntity__GetRewardUnitTime(beforeRewardEnt, 0LL);
                      v49 = EventCooltimeRewardEntity__GetRewardUnitTime(afterRewardEnt, 0LL);
                      if ( !this->fields.beforeQuestInfo )
                        goto LABEL_33;
                      v51 = v49;
                      EventInfoAreaImproveResultInfoComponent__SetRewardUnitTimeLabel(
                        this->fields.beforeQuestInfo,
                        RewardUnitTime,
                        v47,
                        0,
                        v50);
                      v53 = this->fields.afterQuestInfo;
                      if ( !v53 )
                        goto LABEL_33;
                      EventInfoAreaImproveResultInfoComponent__SetRewardUnitTimeLabel(
                        v53,
                        v51,
                        v63,
                        RewardUnitTime != v51,
                        v52);
                      v55 = this->fields.beforeQuestInfo;
                      if ( !v55 )
                        goto LABEL_33;
                      EventInfoAreaImproveResultInfoComponent__SetRewardNumLabel(v55, v8->fields.num, 0, v25, 0, v54);
                      v42 = this->fields.afterQuestInfo;
                      if ( !v42 )
                        goto LABEL_33;
                      v44 = v10->fields.num;
                      v43 = v26;
                      v45 = v8->fields.num != v44;
                      v46 = v25 == v26;
                    }
                    v56 = !v46;
                    EventInfoAreaImproveResultInfoComponent__SetRewardNumLabel(v42, v44, v45, v43, v56, v41);
                    v58 = this->fields.beforeQuestInfo;
                    if ( v58 )
                    {
                      EventInfoAreaImproveResultInfoComponent__SetMaxRewardTimeLabel(
                        v58,
                        beforeRewardEnt->fields.cooltime,
                        0,
                        v57);
                      v60 = this->fields.afterQuestInfo;
                      if ( v60 )
                      {
                        EventInfoAreaImproveResultInfoComponent__SetMaxRewardTimeLabel(
                          v60,
                          afterRewardEnt->fields.cooltime,
                          beforeRewardEnt->fields.cooltime != afterRewardEnt->fields.cooltime,
                          v59);
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
      sub_B170D4();
    }
  }
}


void __fastcall EventInfoAreaImproveResultDialog__SetupTitle(
        EventInfoAreaImproveResultDialog_o *this,
        System_String_o *areaName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UILabel_o *titleLabel; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x0

  if ( (byte_40FB6BB & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, areaName);
    sub_B16FFC(&StringLiteral_5534/*"EVENT_AREA_IMPROVE_RESULT_DIALOG_TITLE"*/, v5);
    byte_40FB6BB = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5534/*"EVENT_AREA_IMPROVE_RESULT_DIALOG_TITLE"*/, 0LL);
  v8 = System_String__Format(v7, (Il2CppObject *)areaName, 0LL);
  if ( !titleLabel )
    sub_B170D4();
  UILabel__set_text(titleLabel, v8, 0LL);
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

  if ( (byte_40FB6BF & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    byte_40FB6BF = 1;
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
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40FB6BD & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB6BD = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}