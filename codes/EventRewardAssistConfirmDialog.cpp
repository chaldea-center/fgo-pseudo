void __fastcall EventRewardAssistConfirmDialog___cctor(const MethodInfo *method)
{
  struct EventRewardAssistConfirmDialog_StaticFields *static_fields; // x0
  EventRewardAssistConfirmDialog_c *v2; // x8

  if ( (byte_42ACB02 & 1) == 0 )
  {
    sub_B52984(&EventRewardAssistConfirmDialog_TypeInfo);
    sub_B52984(&StringLiteral_18722/*"event_skill_icon_{0}{1:D2}"*/);
    byte_42ACB02 = 1;
  }
  static_fields = EventRewardAssistConfirmDialog_TypeInfo->static_fields;
  static_fields->ASSIST_SKILL_ICON = (struct System_String_o *)StringLiteral_18722/*"event_skill_icon_{0}{1:D2}"*/;
  sub_B52920(static_fields);
  v2 = EventRewardAssistConfirmDialog_TypeInfo;
  EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH = 270;
  v2->static_fields->TITLE_NAME_LABEL_MAX_WIDTH = 620;
}


void __fastcall EventRewardAssistConfirmDialog___ctor(EventRewardAssistConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_42ACB01 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42ACB01 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRewardAssistConfirmDialog__Close(EventRewardAssistConfirmDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Close((BaseDialog_o *)this, 0LL, 0LL);
}


void __fastcall EventRewardAssistConfirmDialog__EndOpen(
        EventRewardAssistConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 1;
}


void __fastcall EventRewardAssistConfirmDialog__Init(EventRewardAssistConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.onDecide = 0LL;
  sub_B52920(&this->fields.onDecide);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRewardAssistConfirmDialog__OnClickCancel(
        EventRewardAssistConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_int__o *onDecide; // x0

  if ( (byte_42ACAFF & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int__Invoke__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42ACAFF = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_B52A5C(0LL, v3);
    System_Action_int___Invoke(onDecide, 0, (const MethodInfo_2626204 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall EventRewardAssistConfirmDialog__OnClickDecide(
        EventRewardAssistConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_int__o *onDecide; // x0

  if ( (byte_42ACAFE & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int__Invoke__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42ACAFE = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_B52A5C(0LL, v3);
    System_Action_int___Invoke(onDecide, 1, (const MethodInfo_2626204 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall EventRewardAssistConfirmDialog__Open(
        EventRewardAssistConfirmDialog_o *this,
        ShopEntity_o *shopEnt,
        System_Action_int__o *onDecide,
        const MethodInfo *method)
{
  EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *v7; // x23
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  struct ShopEntity_o *v10; // x8
  struct System_Int32_array *targetIds; // x9
  Il2CppObject *name; // x27
  int32_t v13; // w21
  AssistMaster_o *v14; // x25
  DataManager_o **p_beforeAssistEnt; // x22
  DataManager_o **p_afterAssistEnt; // x21
  struct System_Action_int__o **p_onDecide; // x25
  struct AssistEntity_o *beforeAssistEnt; // x8
  int32_t skillId; // w24
  int skillLv; // w28
  DataManager_o *v21; // x8
  SkillEntity_o *v22; // x24
  int32_t masterDataBytes; // w25
  UILabel_o *skillNameLabel; // x26
  SkillEntity_o *v25; // x25
  UILabel_o *combineSkillNameLabel; // x24
  UILabel_o *v27; // x24
  System_Action_o *v28; // x24
  UILabel_o *skillLvLabel; // x23
  System_String_o *v30; // x24
  Il2CppObject *v31; // x0
  UILabel_o *combineSkillLvLabel; // x23
  System_String_o *v33; // x24
  Il2CppObject *v34; // x0
  UILabel_o *skillInfoLabel; // x22
  struct UILabel_o *v36; // x8
  UILabel_o *combineSkillInfoLabel; // x21
  struct UILabel_o *v38; // x8
  UILabel_o *titleLabel; // x21
  System_String_o *v40; // x0
  UILabel_o *detailMsgLabel; // x20
  struct UICrossNarrowLabel_o *v42; // x8
  UILabel_o *confirmMsgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v46; // x20
  __int64 v47; // x0
  int masterDataBytes_high; // [xsp+Ch] [xbp-64h]
  int v49; // [xsp+18h] [xbp-58h] BYREF
  int v50; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_42ACAFD & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int__Invoke__);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_AssistMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B52984(&Method_EventRewardAssistConfirmDialog_EndOpen__);
    sub_B52984(&EventRewardAssistConfirmDialog_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_EventRewardAssistConfirmDialog___c__DisplayClass22_0__Open_b__0__);
    sub_B52984(&EventRewardAssistConfirmDialog___c__DisplayClass22_0_TypeInfo);
    sub_B52984(&StringLiteral_8424/*"LEVEL_INFO"*/);
    sub_B52984(&StringLiteral_5738/*"EVENT_REWARD_ASSIST_SKILL_MSG"*/);
    sub_B52984(&StringLiteral_5737/*"EVENT_REWARD_ASSIST_SKILL_LV"*/);
    sub_B52984(&StringLiteral_5740/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/);
    sub_B52984(&StringLiteral_3297/*"COMMON_CONFIRM_NO"*/);
    sub_B52984(&StringLiteral_3300/*"COMMON_CONFIRM_YES"*/);
    sub_B52984(&StringLiteral_5736/*"EVENT_REWARD_ASSIST_SKILL_CONFIRM"*/);
    byte_42ACAFD = 1;
  }
  v7 = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)sub_B52A54(EventRewardAssistConfirmDialog___c__DisplayClass22_0_TypeInfo);
  EventRewardAssistConfirmDialog___c__DisplayClass22_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_49;
  v7->fields.__4__this = this;
  sub_B52920(&v7->fields);
  v7->fields.shopEnt = shopEnt;
  sub_B52920(&v7->fields.shopEnt);
  v10 = v7->fields.shopEnt;
  if ( !v10 )
    goto LABEL_49;
  targetIds = v10->fields.targetIds;
  if ( !targetIds )
    goto LABEL_49;
  if ( !targetIds->max_length )
  {
    v47 = sub_B52A88(Instance);
    sub_B52A28(v47, 0LL);
  }
  name = (Il2CppObject *)v10->fields.name;
  v13 = targetIds->m_Items[1];
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_AssistMaster___);
  if ( !Instance )
    goto LABEL_49;
  v14 = (AssistMaster_o *)Instance;
  v7->fields.beforeAssistEnt = AssistMaster__GetCurrentLevelEntity((AssistMaster_o *)Instance, v13, 0LL);
  p_beforeAssistEnt = (DataManager_o **)&v7->fields.beforeAssistEnt;
  sub_B52920(&v7->fields.beforeAssistEnt);
  if ( !v7->fields.beforeAssistEnt )
    goto LABEL_49;
  v7->fields.afterAssistEnt = AssistMaster__GetAssistEntity(v14, v13, v7->fields.beforeAssistEnt->fields.lv + 1, 0LL);
  p_afterAssistEnt = (DataManager_o **)&v7->fields.afterAssistEnt;
  sub_B52920(&v7->fields.afterAssistEnt);
  this->fields.onDecide = onDecide;
  p_onDecide = &this->fields.onDecide;
  sub_B52920(&this->fields.onDecide);
  beforeAssistEnt = v7->fields.beforeAssistEnt;
  if ( beforeAssistEnt && *p_afterAssistEnt )
  {
    skillId = beforeAssistEnt->fields.skillId;
    skillLv = beforeAssistEnt->fields.skillLv;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      skillId,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v21 = *p_afterAssistEnt;
        if ( *p_afterAssistEnt )
        {
          v22 = (SkillEntity_o *)Instance;
          masterDataBytes = (int32_t)v21->fields.masterDataBytes;
          masterDataBytes_high = HIDWORD(v21->fields.masterDataBytes);
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
            if ( Instance )
            {
              Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                            masterDataBytes,
                                            (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              if ( v22 )
              {
                skillNameLabel = (UILabel_o *)this->fields.skillNameLabel;
                v25 = (SkillEntity_o *)Instance;
                Instance = (DataManager_o *)SkillEntity__getName(v22, 0LL);
                if ( skillNameLabel )
                {
                  UILabel__set_text(skillNameLabel, (System_String_o *)Instance, 0LL);
                  if ( v25 )
                  {
                    combineSkillNameLabel = (UILabel_o *)this->fields.combineSkillNameLabel;
                    Instance = (DataManager_o *)SkillEntity__getName(v25, 0LL);
                    if ( combineSkillNameLabel )
                    {
                      UILabel__set_text(combineSkillNameLabel, (System_String_o *)Instance, 0LL);
                      v27 = (UILabel_o *)this->fields.skillNameLabel;
                      Instance = (DataManager_o *)EventRewardAssistConfirmDialog_TypeInfo;
                      if ( (BYTE3(EventRewardAssistConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !EventRewardAssistConfirmDialog_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(EventRewardAssistConfirmDialog_TypeInfo);
                      }
                      if ( v27 )
                      {
                        UILabel__SetCondensedScale(
                          v27,
                          EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH,
                          0LL);
                        Instance = (DataManager_o *)this->fields.combineSkillNameLabel;
                        if ( Instance )
                        {
                          UILabel__SetCondensedScale(
                            (UILabel_o *)Instance,
                            EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH,
                            0LL);
                          v28 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                          System_Action___ctor(
                            v28,
                            (Il2CppObject *)v7,
                            Method_EventRewardAssistConfirmDialog___c__DisplayClass22_0__Open_b__0__,
                            0LL);
                          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !AtlasManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                          }
                          AtlasManager__LoadEventUI(v28, 1, 0LL);
                          skillLvLabel = this->fields.skillLvLabel;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v30 = LocalizationManager__Get((System_String_o *)StringLiteral_8424/*"LEVEL_INFO"*/, 0LL);
                          v50 = skillLv;
                          v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
                          Instance = (DataManager_o *)System_String__Format(v30, v31, 0LL);
                          if ( skillLvLabel )
                          {
                            UILabel__set_text(skillLvLabel, (System_String_o *)Instance, 0LL);
                            combineSkillLvLabel = this->fields.combineSkillLvLabel;
                            v33 = LocalizationManager__Get((System_String_o *)StringLiteral_5737/*"EVENT_REWARD_ASSIST_SKILL_LV"*/, 0LL);
                            v49 = masterDataBytes_high;
                            v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
                            Instance = (DataManager_o *)System_String__Format(v33, v34, 0LL);
                            if ( combineSkillLvLabel )
                            {
                              UILabel__set_text(combineSkillLvLabel, (System_String_o *)Instance, 0LL);
                              Instance = *p_beforeAssistEnt;
                              if ( *p_beforeAssistEnt )
                              {
                                skillInfoLabel = this->fields.skillInfoLabel;
                                Instance = (DataManager_o *)AssistEntity__GetDetail((AssistEntity_o *)Instance, 0, 0LL);
                                v36 = this->fields.skillInfoLabel;
                                if ( v36 )
                                {
                                  WrapControlText__textAdjust(
                                    skillInfoLabel,
                                    (System_String_o *)Instance,
                                    v36->fields.mFontSize,
                                    0,
                                    0,
                                    0LL);
                                  Instance = *p_afterAssistEnt;
                                  if ( *p_afterAssistEnt )
                                  {
                                    combineSkillInfoLabel = this->fields.combineSkillInfoLabel;
                                    Instance = (DataManager_o *)AssistEntity__GetDetail(
                                                                  (AssistEntity_o *)Instance,
                                                                  0,
                                                                  0LL);
                                    v38 = this->fields.combineSkillInfoLabel;
                                    if ( v38 )
                                    {
                                      WrapControlText__textAdjust(
                                        combineSkillInfoLabel,
                                        (System_String_o *)Instance,
                                        v38->fields.mFontSize,
                                        0,
                                        0,
                                        0LL);
                                      titleLabel = this->fields.titleLabel;
                                      v40 = LocalizationManager__Get((System_String_o *)StringLiteral_5740/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/, 0LL);
                                      Instance = (DataManager_o *)System_String__Format(v40, name, 0LL);
                                      if ( titleLabel )
                                      {
                                        UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
                                        Instance = (DataManager_o *)this->fields.titleLabel;
                                        if ( Instance )
                                        {
                                          UILabel__SetCondensedScale(
                                            (UILabel_o *)Instance,
                                            EventRewardAssistConfirmDialog_TypeInfo->static_fields->TITLE_NAME_LABEL_MAX_WIDTH,
                                            0LL);
                                          detailMsgLabel = this->fields.detailMsgLabel;
                                          Instance = (DataManager_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_5738/*"EVENT_REWARD_ASSIST_SKILL_MSG"*/,
                                                                        0LL);
                                          v42 = this->fields.skillNameLabel;
                                          if ( v42 )
                                          {
                                            Instance = (DataManager_o *)System_String__Format(
                                                                          (System_String_o *)Instance,
                                                                          (Il2CppObject *)v42->fields.mText,
                                                                          0LL);
                                            if ( detailMsgLabel )
                                            {
                                              UILabel__set_text(detailMsgLabel, (System_String_o *)Instance, 0LL);
                                              confirmMsgLabel = this->fields.confirmMsgLabel;
                                              Instance = (DataManager_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_5736/*"EVENT_REWARD_ASSIST_SKILL_CONFIRM"*/,
                                                                            0LL);
                                              if ( confirmMsgLabel )
                                              {
                                                UILabel__set_text(confirmMsgLabel, (System_String_o *)Instance, 0LL);
                                                decideLabel = this->fields.decideLabel;
                                                Instance = (DataManager_o *)LocalizationManager__Get(
                                                                              (System_String_o *)StringLiteral_3300/*"COMMON_CONFIRM_YES"*/,
                                                                              0LL);
                                                if ( decideLabel )
                                                {
                                                  UILabel__set_text(decideLabel, (System_String_o *)Instance, 0LL);
                                                  cancelLabel = this->fields.cancelLabel;
                                                  Instance = (DataManager_o *)LocalizationManager__Get(
                                                                                (System_String_o *)StringLiteral_3297/*"COMMON_CONFIRM_NO"*/,
                                                                                0LL);
                                                  if ( cancelLabel )
                                                  {
                                                    UILabel__set_text(cancelLabel, (System_String_o *)Instance, 0LL);
                                                    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                                                                  (UnityEngine_Component_o *)this,
                                                                                  0LL);
                                                    if ( Instance )
                                                    {
                                                      UnityEngine_GameObject__SetActive(
                                                        (UnityEngine_GameObject_o *)Instance,
                                                        1,
                                                        0LL);
                                                      this->fields.state = 2;
                                                      v46 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                                                      System_Action___ctor(
                                                        v46,
                                                        (Il2CppObject *)this,
                                                        Method_EventRewardAssistConfirmDialog_EndOpen__,
                                                        0LL);
                                                      BaseDialog__Open((BaseDialog_o *)this, v46, 0, 0LL);
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
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_49:
    sub_B52A5C(Instance, v9);
  }
  Instance = (DataManager_o *)*p_onDecide;
  if ( !*p_onDecide )
    goto LABEL_49;
  System_Action_int___Invoke(
    (System_Action_int__o *)Instance,
    0,
    (const MethodInfo_2626204 *)Method_System_Action_int__Invoke__);
}


System_String_o *__fastcall EventRewardAssistConfirmDialog__get_closeBtnPath(
        EventRewardAssistConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_42ACB00 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15582/*"Window/CancelButton"*/);
    byte_42ACB00 = 1;
  }
  return (System_String_o *)StringLiteral_15582/*"Window/CancelButton"*/;
}


void __fastcall EventRewardAssistConfirmDialog___c__DisplayClass22_0___ctor(
        EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventRewardAssistConfirmDialog___c__DisplayClass22_0___Open_b__0(
        EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *v2; // x19
  struct EventRewardAssistConfirmDialog_o *_4__this; // x8
  UISprite_o *skillIcon; // x20
  struct ShopEntity_o *shopEnt; // x8
  System_String_o *klass; // x21
  struct AssistEntity_o *beforeAssistEnt; // x8
  Il2CppObject *v8; // x22
  Il2CppObject *v9; // x0
  System_String_o *v10; // x21
  struct EventRewardAssistConfirmDialog_o *v11; // x8
  struct ShopEntity_o *v12; // x9
  UISprite_o *combineSkillIcon; // x20
  System_String_o *ASSIST_SKILL_ICON; // x21
  struct AssistEntity_o *afterAssistEnt; // x8
  Il2CppObject *v16; // x19
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  int32_t v19; // [xsp+0h] [xbp-40h] BYREF
  int32_t v20; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t imageId; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_42ACD9F & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&EventRewardAssistConfirmDialog_TypeInfo);
    this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)sub_B52984(&int_TypeInfo);
    byte_42ACD9F = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  skillIcon = _4__this->fields.skillIcon;
  this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)EventRewardAssistConfirmDialog_TypeInfo;
  if ( (BYTE3(EventRewardAssistConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardAssistConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAssistConfirmDialog_TypeInfo);
    this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)EventRewardAssistConfirmDialog_TypeInfo;
  }
  shopEnt = v2->fields.shopEnt;
  if ( !shopEnt )
    goto LABEL_16;
  klass = (System_String_o *)this[3].fields.afterAssistEnt->klass;
  eventId = shopEnt->fields.eventId;
  this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  beforeAssistEnt = v2->fields.beforeAssistEnt;
  if ( !beforeAssistEnt )
    goto LABEL_16;
  v8 = (Il2CppObject *)this;
  imageId = beforeAssistEnt->fields.imageId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId);
  v10 = System_String__Format_44563852(klass, v8, v9, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)AtlasManager__SetEventUI(skillIcon, v10, 0LL);
  v11 = v2->fields.__4__this;
  if ( !v11
    || (v12 = v2->fields.shopEnt) == 0LL
    || (combineSkillIcon = v11->fields.combineSkillIcon,
        ASSIST_SKILL_ICON = EventRewardAssistConfirmDialog_TypeInfo->static_fields->ASSIST_SKILL_ICON,
        v20 = v12->fields.eventId,
        this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)j_il2cpp_value_box_0(int_TypeInfo, &v20),
        (afterAssistEnt = v2->fields.afterAssistEnt) == 0LL) )
  {
LABEL_16:
    sub_B52A5C(this, method);
  }
  v16 = (Il2CppObject *)this;
  v19 = afterAssistEnt->fields.imageId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v18 = System_String__Format_44563852(ASSIST_SKILL_ICON, v16, v17, 0LL);
  AtlasManager__SetEventUI(combineSkillIcon, v18, 0LL);
}