void __fastcall EventRewardAssistConfirmDialog___cctor(const MethodInfo *method)
{
  struct EventRewardAssistConfirmDialog_StaticFields *static_fields; // x0
  EventRewardAssistConfirmDialog_c *v2; // x8

  if ( (byte_4387EAD & 1) == 0 )
  {
    sub_B775C4(&EventRewardAssistConfirmDialog_TypeInfo);
    sub_B775C4(&StringLiteral_18955/*"event_skill_icon_{0}{1:D2}"*/);
    byte_4387EAD = 1;
  }
  static_fields = EventRewardAssistConfirmDialog_TypeInfo->static_fields;
  static_fields->ASSIST_SKILL_ICON = (struct System_String_o *)StringLiteral_18955/*"event_skill_icon_{0}{1:D2}"*/;
  sub_B77560(static_fields);
  v2 = EventRewardAssistConfirmDialog_TypeInfo;
  EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH = 270;
  v2->static_fields->TITLE_NAME_LABEL_MAX_WIDTH = 620;
}


void __fastcall EventRewardAssistConfirmDialog___ctor(EventRewardAssistConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4387EAC & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_4387EAC = 1;
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
    sub_B7769C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.onDecide = 0LL;
  sub_B77560(&this->fields.onDecide);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRewardAssistConfirmDialog__OnClickCancel(
        EventRewardAssistConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_int__o *onDecide; // x0

  if ( (byte_4387EAA & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_int__Invoke__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4387EAA = 1;
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
      sub_B7769C(0LL, v3);
    System_Action_int___Invoke(onDecide, 0, (const MethodInfo_269F2EC *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall EventRewardAssistConfirmDialog__OnClickDecide(
        EventRewardAssistConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_int__o *onDecide; // x0

  if ( (byte_4387EA9 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_int__Invoke__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4387EA9 = 1;
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
      sub_B7769C(0LL, v3);
    System_Action_int___Invoke(onDecide, 1, (const MethodInfo_269F2EC *)Method_System_Action_int__Invoke__);
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
  __int64 v31; // x2
  Il2CppObject *v32; // x0
  UILabel_o *combineSkillLvLabel; // x23
  System_String_o *v34; // x24
  __int64 v35; // x2
  Il2CppObject *v36; // x0
  UILabel_o *skillInfoLabel; // x22
  struct UILabel_o *v38; // x8
  UILabel_o *combineSkillInfoLabel; // x21
  struct UILabel_o *v40; // x8
  UILabel_o *titleLabel; // x21
  System_String_o *v42; // x0
  UILabel_o *detailMsgLabel; // x20
  struct UICrossNarrowLabel_o *v44; // x8
  UILabel_o *confirmMsgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v48; // x20
  __int64 v49; // x0
  int masterDataBytes_high; // [xsp+Ch] [xbp-64h]
  int v51; // [xsp+18h] [xbp-58h] BYREF
  int v52; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4387EA8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_int__Invoke__);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_AssistMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B775C4(&Method_EventRewardAssistConfirmDialog_EndOpen__);
    sub_B775C4(&EventRewardAssistConfirmDialog_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_EventRewardAssistConfirmDialog___c__DisplayClass22_0__Open_b__0__);
    sub_B775C4(&EventRewardAssistConfirmDialog___c__DisplayClass22_0_TypeInfo);
    sub_B775C4(&StringLiteral_8532/*"LEVEL_INFO"*/);
    sub_B775C4(&StringLiteral_5840/*"EVENT_REWARD_ASSIST_SKILL_MSG"*/);
    sub_B775C4(&StringLiteral_5839/*"EVENT_REWARD_ASSIST_SKILL_LV"*/);
    sub_B775C4(&StringLiteral_5842/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/);
    sub_B775C4(&StringLiteral_3390/*"COMMON_CONFIRM_NO"*/);
    sub_B775C4(&StringLiteral_3393/*"COMMON_CONFIRM_YES"*/);
    sub_B775C4(&StringLiteral_5838/*"EVENT_REWARD_ASSIST_SKILL_CONFIRM"*/);
    byte_4387EA8 = 1;
  }
  v7 = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)sub_B77694(EventRewardAssistConfirmDialog___c__DisplayClass22_0_TypeInfo);
  EventRewardAssistConfirmDialog___c__DisplayClass22_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_49;
  v7->fields.__4__this = this;
  sub_B77560(&v7->fields);
  v7->fields.shopEnt = shopEnt;
  sub_B77560(&v7->fields.shopEnt);
  v10 = v7->fields.shopEnt;
  if ( !v10 )
    goto LABEL_49;
  targetIds = v10->fields.targetIds;
  if ( !targetIds )
    goto LABEL_49;
  if ( !targetIds->max_length )
  {
    v49 = sub_B776C8(Instance);
    sub_B77668(v49, 0LL);
  }
  name = (Il2CppObject *)v10->fields.name;
  v13 = targetIds->m_Items[1];
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_AssistMaster___);
  if ( !Instance )
    goto LABEL_49;
  v14 = (AssistMaster_o *)Instance;
  v7->fields.beforeAssistEnt = AssistMaster__GetCurrentLevelEntity((AssistMaster_o *)Instance, v13, 0LL);
  p_beforeAssistEnt = (DataManager_o **)&v7->fields.beforeAssistEnt;
  sub_B77560(&v7->fields.beforeAssistEnt);
  if ( !v7->fields.beforeAssistEnt )
    goto LABEL_49;
  v7->fields.afterAssistEnt = AssistMaster__GetAssistEntity(v14, v13, v7->fields.beforeAssistEnt->fields.lv + 1, 0LL);
  p_afterAssistEnt = (DataManager_o **)&v7->fields.afterAssistEnt;
  sub_B77560(&v7->fields.afterAssistEnt);
  this->fields.onDecide = onDecide;
  p_onDecide = &this->fields.onDecide;
  sub_B77560(&this->fields.onDecide);
  beforeAssistEnt = v7->fields.beforeAssistEnt;
  if ( beforeAssistEnt && *p_afterAssistEnt )
  {
    skillId = beforeAssistEnt->fields.skillId;
    skillLv = beforeAssistEnt->fields.skillLv;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      skillId,
                                      (const MethodInfo_21FB894 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v21 = *p_afterAssistEnt;
        if ( *p_afterAssistEnt )
        {
          v22 = (SkillEntity_o *)Instance;
          masterDataBytes = (int32_t)v21->fields.masterDataBytes;
          masterDataBytes_high = HIDWORD(v21->fields.masterDataBytes);
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___);
            if ( Instance )
            {
              Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                            masterDataBytes,
                                            (const MethodInfo_21FB894 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
                          v28 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
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
                          v30 = LocalizationManager__Get((System_String_o *)StringLiteral_8532/*"LEVEL_INFO"*/, 0LL);
                          v52 = skillLv;
                          v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52, v31);
                          Instance = (DataManager_o *)System_String__Format(v30, v32, 0LL);
                          if ( skillLvLabel )
                          {
                            UILabel__set_text(skillLvLabel, (System_String_o *)Instance, 0LL);
                            combineSkillLvLabel = this->fields.combineSkillLvLabel;
                            v34 = LocalizationManager__Get((System_String_o *)StringLiteral_5839/*"EVENT_REWARD_ASSIST_SKILL_LV"*/, 0LL);
                            v51 = masterDataBytes_high;
                            v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v35);
                            Instance = (DataManager_o *)System_String__Format(v34, v36, 0LL);
                            if ( combineSkillLvLabel )
                            {
                              UILabel__set_text(combineSkillLvLabel, (System_String_o *)Instance, 0LL);
                              Instance = *p_beforeAssistEnt;
                              if ( *p_beforeAssistEnt )
                              {
                                skillInfoLabel = this->fields.skillInfoLabel;
                                Instance = (DataManager_o *)AssistEntity__GetDetail((AssistEntity_o *)Instance, 0, 0LL);
                                v38 = this->fields.skillInfoLabel;
                                if ( v38 )
                                {
                                  WrapControlText__textAdjust(
                                    skillInfoLabel,
                                    (System_String_o *)Instance,
                                    v38->fields.mFontSize,
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
                                    v40 = this->fields.combineSkillInfoLabel;
                                    if ( v40 )
                                    {
                                      WrapControlText__textAdjust(
                                        combineSkillInfoLabel,
                                        (System_String_o *)Instance,
                                        v40->fields.mFontSize,
                                        0,
                                        0,
                                        0LL);
                                      titleLabel = this->fields.titleLabel;
                                      v42 = LocalizationManager__Get((System_String_o *)StringLiteral_5842/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/, 0LL);
                                      Instance = (DataManager_o *)System_String__Format(v42, name, 0LL);
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
                                                                        (System_String_o *)StringLiteral_5840/*"EVENT_REWARD_ASSIST_SKILL_MSG"*/,
                                                                        0LL);
                                          v44 = this->fields.skillNameLabel;
                                          if ( v44 )
                                          {
                                            Instance = (DataManager_o *)System_String__Format(
                                                                          (System_String_o *)Instance,
                                                                          (Il2CppObject *)v44->fields.mText,
                                                                          0LL);
                                            if ( detailMsgLabel )
                                            {
                                              UILabel__set_text(detailMsgLabel, (System_String_o *)Instance, 0LL);
                                              confirmMsgLabel = this->fields.confirmMsgLabel;
                                              Instance = (DataManager_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_5838/*"EVENT_REWARD_ASSIST_SKILL_CONFIRM"*/,
                                                                            0LL);
                                              if ( confirmMsgLabel )
                                              {
                                                UILabel__set_text(confirmMsgLabel, (System_String_o *)Instance, 0LL);
                                                decideLabel = this->fields.decideLabel;
                                                Instance = (DataManager_o *)LocalizationManager__Get(
                                                                              (System_String_o *)StringLiteral_3393/*"COMMON_CONFIRM_YES"*/,
                                                                              0LL);
                                                if ( decideLabel )
                                                {
                                                  UILabel__set_text(decideLabel, (System_String_o *)Instance, 0LL);
                                                  cancelLabel = this->fields.cancelLabel;
                                                  Instance = (DataManager_o *)LocalizationManager__Get(
                                                                                (System_String_o *)StringLiteral_3390/*"COMMON_CONFIRM_NO"*/,
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
                                                      v48 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
                                                      System_Action___ctor(
                                                        v48,
                                                        (Il2CppObject *)this,
                                                        Method_EventRewardAssistConfirmDialog_EndOpen__,
                                                        0LL);
                                                      BaseDialog__Open((BaseDialog_o *)this, v48, 0, 0LL);
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
    sub_B7769C(Instance, v9);
  }
  Instance = (DataManager_o *)*p_onDecide;
  if ( !*p_onDecide )
    goto LABEL_49;
  System_Action_int___Invoke(
    (System_Action_int__o *)Instance,
    0,
    (const MethodInfo_269F2EC *)Method_System_Action_int__Invoke__);
}


System_String_o *__fastcall EventRewardAssistConfirmDialog__get_closeBtnPath(
        EventRewardAssistConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4387EAB & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_15768/*"Window/CancelButton"*/);
    byte_4387EAB = 1;
  }
  return (System_String_o *)StringLiteral_15768/*"Window/CancelButton"*/;
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
  __int64 v2; // x2
  EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *v3; // x19
  struct EventRewardAssistConfirmDialog_o *_4__this; // x8
  UISprite_o *skillIcon; // x20
  struct ShopEntity_o *shopEnt; // x8
  System_String_o *klass; // x21
  __int64 v8; // x2
  struct AssistEntity_o *beforeAssistEnt; // x8
  Il2CppObject *v10; // x22
  Il2CppObject *v11; // x0
  System_String_o *v12; // x21
  __int64 v13; // x2
  struct EventRewardAssistConfirmDialog_o *v14; // x8
  struct ShopEntity_o *v15; // x9
  UISprite_o *combineSkillIcon; // x20
  System_String_o *ASSIST_SKILL_ICON; // x21
  __int64 v18; // x2
  struct AssistEntity_o *afterAssistEnt; // x8
  Il2CppObject *v20; // x19
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  int32_t v23; // [xsp+0h] [xbp-40h] BYREF
  int32_t v24; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t imageId; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  v3 = this;
  if ( (byte_438800A & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&EventRewardAssistConfirmDialog_TypeInfo);
    this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)sub_B775C4(&int_TypeInfo);
    byte_438800A = 1;
  }
  _4__this = v3->fields.__4__this;
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
  shopEnt = v3->fields.shopEnt;
  if ( !shopEnt )
    goto LABEL_16;
  klass = (System_String_o *)this[3].fields.afterAssistEnt->klass;
  eventId = shopEnt->fields.eventId;
  this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v2);
  beforeAssistEnt = v3->fields.beforeAssistEnt;
  if ( !beforeAssistEnt )
    goto LABEL_16;
  v10 = (Il2CppObject *)this;
  imageId = beforeAssistEnt->fields.imageId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId, v8);
  v12 = System_String__Format_44897472(klass, v10, v11, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)AtlasManager__SetEventUI(skillIcon, v12, 0LL);
  v14 = v3->fields.__4__this;
  if ( !v14
    || (v15 = v3->fields.shopEnt) == 0LL
    || (combineSkillIcon = v14->fields.combineSkillIcon,
        ASSIST_SKILL_ICON = EventRewardAssistConfirmDialog_TypeInfo->static_fields->ASSIST_SKILL_ICON,
        v24 = v15->fields.eventId,
        this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v13),
        (afterAssistEnt = v3->fields.afterAssistEnt) == 0LL) )
  {
LABEL_16:
    sub_B7769C(this, method);
  }
  v20 = (Il2CppObject *)this;
  v23 = afterAssistEnt->fields.imageId;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v18);
  v22 = System_String__Format_44897472(ASSIST_SKILL_ICON, v20, v21, 0LL);
  AtlasManager__SetEventUI(combineSkillIcon, v22, 0LL);
}