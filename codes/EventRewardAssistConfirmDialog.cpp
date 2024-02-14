void __fastcall EventRewardAssistConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct EventRewardAssistConfirmDialog_StaticFields *static_fields; // x0
  __int64 v4; // x1
  EventRewardAssistConfirmDialog_c *v5; // x8

  if ( (byte_4211315 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardAssistConfirmDialog_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_18644/*"event_skill_icon_{0}{1:D2}"*/, v2);
    byte_4211315 = 1;
  }
  static_fields = EventRewardAssistConfirmDialog_TypeInfo->static_fields;
  v4 = StringLiteral_18644/*"event_skill_icon_{0}{1:D2}"*/;
  static_fields->ASSIST_SKILL_ICON = (struct System_String_o *)StringLiteral_18644/*"event_skill_icon_{0}{1:D2}"*/;
  sub_B0D840(static_fields, v4);
  v5 = EventRewardAssistConfirmDialog_TypeInfo;
  EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH = 270;
  v5->static_fields->TITLE_NAME_LABEL_MAX_WIDTH = 620;
}


void __fastcall EventRewardAssistConfirmDialog___ctor(EventRewardAssistConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4211314 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_4211314 = 1;
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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.onDecide = 0LL;
  sub_B0D840(&this->fields.onDecide, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRewardAssistConfirmDialog__OnClickCancel(
        EventRewardAssistConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_int__o *onDecide; // x0

  if ( (byte_4211312 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int__Invoke__, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_4211312 = 1;
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
      sub_B0D97C(0LL);
    System_Action_int___Invoke(onDecide, 0, (const MethodInfo_246D4C0 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall EventRewardAssistConfirmDialog__OnClickDecide(
        EventRewardAssistConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_int__o *onDecide; // x0

  if ( (byte_4211311 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int__Invoke__, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_4211311 = 1;
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
      sub_B0D97C(0LL);
    System_Action_int___Invoke(onDecide, 1, (const MethodInfo_246D4C0 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall EventRewardAssistConfirmDialog__Open(
        EventRewardAssistConfirmDialog_o *this,
        ShopEntity_o *shopEnt,
        System_Action_int__o *onDecide,
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *v26; // x23
  DataManager_o *Instance; // x0
  struct ShopEntity_o *v28; // x8
  struct System_Int32_array *targetIds; // x9
  Il2CppObject *name; // x27
  int32_t v31; // w21
  AssistMaster_o *v32; // x25
  AssistEntity_o *CurrentLevelEntity; // x0
  DataManager_o **p_beforeAssistEnt; // x22
  AssistEntity_o *AssistEntity; // x0
  DataManager_o **p_afterAssistEnt; // x21
  struct System_Action_int__o **p_onDecide; // x25
  struct AssistEntity_o *beforeAssistEnt; // x8
  int32_t skillId; // w24
  int skillLv; // w28
  DataManager_o *v41; // x8
  SkillEntity_o *v42; // x24
  int32_t masterDataBytes; // w25
  UILabel_o *skillNameLabel; // x26
  SkillEntity_o *v45; // x25
  UILabel_o *combineSkillNameLabel; // x24
  UILabel_o *v47; // x24
  __int64 v48; // x1
  __int64 v49; // x2
  System_Action_o *v50; // x24
  UILabel_o *skillLvLabel; // x23
  System_String_o *v52; // x24
  Il2CppObject *v53; // x0
  UILabel_o *combineSkillLvLabel; // x23
  System_String_o *v55; // x24
  Il2CppObject *v56; // x0
  UILabel_o *skillInfoLabel; // x22
  struct UILabel_o *v58; // x8
  UILabel_o *combineSkillInfoLabel; // x21
  struct UILabel_o *v60; // x8
  UILabel_o *titleLabel; // x21
  System_String_o *v62; // x0
  UILabel_o *detailMsgLabel; // x20
  struct UICrossNarrowLabel_o *v64; // x8
  UILabel_o *confirmMsgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  __int64 v68; // x1
  __int64 v69; // x2
  System_Action_o *v70; // x20
  __int64 v71; // x0
  int masterDataBytes_high; // [xsp+Ch] [xbp-64h]
  int v73; // [xsp+18h] [xbp-58h] BYREF
  int v74; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4211310 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int__Invoke__, shopEnt);
    sub_B0D8A4(&System_Action_TypeInfo, v7);
    sub_B0D8A4(&AtlasManager_TypeInfo, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_AssistMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, v10);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v11);
    sub_B0D8A4(&Method_EventRewardAssistConfirmDialog_EndOpen__, v12);
    sub_B0D8A4(&EventRewardAssistConfirmDialog_TypeInfo, v13);
    sub_B0D8A4(&int_TypeInfo, v14);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&Method_EventRewardAssistConfirmDialog___c__DisplayClass22_0__Open_b__0__, v17);
    sub_B0D8A4(&EventRewardAssistConfirmDialog___c__DisplayClass22_0_TypeInfo, v18);
    sub_B0D8A4(&StringLiteral_8398/*"LEVEL_INFO"*/, v19);
    sub_B0D8A4(&StringLiteral_5712/*"EVENT_REWARD_ASSIST_SKILL_MSG"*/, v20);
    sub_B0D8A4(&StringLiteral_5711/*"EVENT_REWARD_ASSIST_SKILL_LV"*/, v21);
    sub_B0D8A4(&StringLiteral_5714/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/, v22);
    sub_B0D8A4(&StringLiteral_3277/*"COMMON_CONFIRM_NO"*/, v23);
    sub_B0D8A4(&StringLiteral_3280/*"COMMON_CONFIRM_YES"*/, v24);
    sub_B0D8A4(&StringLiteral_5710/*"EVENT_REWARD_ASSIST_SKILL_CONFIRM"*/, v25);
    byte_4211310 = 1;
  }
  v26 = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)sub_B0D974(
                                                                    EventRewardAssistConfirmDialog___c__DisplayClass22_0_TypeInfo,
                                                                    shopEnt,
                                                                    onDecide);
  EventRewardAssistConfirmDialog___c__DisplayClass22_0___ctor(v26, 0LL);
  if ( !v26 )
    goto LABEL_49;
  v26->fields.__4__this = this;
  sub_B0D840(&v26->fields, this);
  v26->fields.shopEnt = shopEnt;
  sub_B0D840(&v26->fields.shopEnt, shopEnt);
  v28 = v26->fields.shopEnt;
  if ( !v28 )
    goto LABEL_49;
  targetIds = v28->fields.targetIds;
  if ( !targetIds )
    goto LABEL_49;
  if ( !targetIds->max_length )
  {
    v71 = sub_B0D9A8(Instance);
    sub_B0D948(v71, 0LL);
  }
  name = (Il2CppObject *)v28->fields.name;
  v31 = targetIds->m_Items[1];
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_AssistMaster___);
  if ( !Instance )
    goto LABEL_49;
  v32 = (AssistMaster_o *)Instance;
  CurrentLevelEntity = AssistMaster__GetCurrentLevelEntity((AssistMaster_o *)Instance, v31, 0LL);
  v26->fields.beforeAssistEnt = CurrentLevelEntity;
  p_beforeAssistEnt = (DataManager_o **)&v26->fields.beforeAssistEnt;
  sub_B0D840(&v26->fields.beforeAssistEnt, CurrentLevelEntity);
  if ( !v26->fields.beforeAssistEnt )
    goto LABEL_49;
  AssistEntity = AssistMaster__GetAssistEntity(v32, v31, v26->fields.beforeAssistEnt->fields.lv + 1, 0LL);
  v26->fields.afterAssistEnt = AssistEntity;
  p_afterAssistEnt = (DataManager_o **)&v26->fields.afterAssistEnt;
  sub_B0D840(&v26->fields.afterAssistEnt, AssistEntity);
  this->fields.onDecide = onDecide;
  p_onDecide = &this->fields.onDecide;
  sub_B0D840(&this->fields.onDecide, onDecide);
  beforeAssistEnt = v26->fields.beforeAssistEnt;
  if ( beforeAssistEnt && *p_afterAssistEnt )
  {
    skillId = beforeAssistEnt->fields.skillId;
    skillLv = beforeAssistEnt->fields.skillLv;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      skillId,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v41 = *p_afterAssistEnt;
        if ( *p_afterAssistEnt )
        {
          v42 = (SkillEntity_o *)Instance;
          masterDataBytes = (int32_t)v41->fields.masterDataBytes;
          masterDataBytes_high = HIDWORD(v41->fields.masterDataBytes);
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
            if ( Instance )
            {
              Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                            masterDataBytes,
                                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              if ( v42 )
              {
                skillNameLabel = (UILabel_o *)this->fields.skillNameLabel;
                v45 = (SkillEntity_o *)Instance;
                Instance = (DataManager_o *)SkillEntity__getName(v42, 0LL);
                if ( skillNameLabel )
                {
                  UILabel__set_text(skillNameLabel, (System_String_o *)Instance, 0LL);
                  if ( v45 )
                  {
                    combineSkillNameLabel = (UILabel_o *)this->fields.combineSkillNameLabel;
                    Instance = (DataManager_o *)SkillEntity__getName(v45, 0LL);
                    if ( combineSkillNameLabel )
                    {
                      UILabel__set_text(combineSkillNameLabel, (System_String_o *)Instance, 0LL);
                      v47 = (UILabel_o *)this->fields.skillNameLabel;
                      Instance = (DataManager_o *)EventRewardAssistConfirmDialog_TypeInfo;
                      if ( (BYTE3(EventRewardAssistConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !EventRewardAssistConfirmDialog_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(EventRewardAssistConfirmDialog_TypeInfo);
                      }
                      if ( v47 )
                      {
                        UILabel__SetCondensedScale(
                          v47,
                          EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH,
                          0LL);
                        Instance = (DataManager_o *)this->fields.combineSkillNameLabel;
                        if ( Instance )
                        {
                          UILabel__SetCondensedScale(
                            (UILabel_o *)Instance,
                            EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH,
                            0LL);
                          v50 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v48, v49);
                          System_Action___ctor(
                            v50,
                            (Il2CppObject *)v26,
                            Method_EventRewardAssistConfirmDialog___c__DisplayClass22_0__Open_b__0__,
                            0LL);
                          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !AtlasManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                          }
                          AtlasManager__LoadEventUI(v50, 1, 0LL);
                          skillLvLabel = this->fields.skillLvLabel;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v52 = LocalizationManager__Get((System_String_o *)StringLiteral_8398/*"LEVEL_INFO"*/, 0LL);
                          v74 = skillLv;
                          v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
                          Instance = (DataManager_o *)System_String__Format(v52, v53, 0LL);
                          if ( skillLvLabel )
                          {
                            UILabel__set_text(skillLvLabel, (System_String_o *)Instance, 0LL);
                            combineSkillLvLabel = this->fields.combineSkillLvLabel;
                            v55 = LocalizationManager__Get((System_String_o *)StringLiteral_5711/*"EVENT_REWARD_ASSIST_SKILL_LV"*/, 0LL);
                            v73 = masterDataBytes_high;
                            v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73);
                            Instance = (DataManager_o *)System_String__Format(v55, v56, 0LL);
                            if ( combineSkillLvLabel )
                            {
                              UILabel__set_text(combineSkillLvLabel, (System_String_o *)Instance, 0LL);
                              Instance = *p_beforeAssistEnt;
                              if ( *p_beforeAssistEnt )
                              {
                                skillInfoLabel = this->fields.skillInfoLabel;
                                Instance = (DataManager_o *)AssistEntity__GetDetail((AssistEntity_o *)Instance, 0, 0LL);
                                v58 = this->fields.skillInfoLabel;
                                if ( v58 )
                                {
                                  WrapControlText__textAdjust(
                                    skillInfoLabel,
                                    (System_String_o *)Instance,
                                    v58->fields.mFontSize,
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
                                    v60 = this->fields.combineSkillInfoLabel;
                                    if ( v60 )
                                    {
                                      WrapControlText__textAdjust(
                                        combineSkillInfoLabel,
                                        (System_String_o *)Instance,
                                        v60->fields.mFontSize,
                                        0,
                                        0,
                                        0LL);
                                      titleLabel = this->fields.titleLabel;
                                      v62 = LocalizationManager__Get((System_String_o *)StringLiteral_5714/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/, 0LL);
                                      Instance = (DataManager_o *)System_String__Format(v62, name, 0LL);
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
                                                                        (System_String_o *)StringLiteral_5712/*"EVENT_REWARD_ASSIST_SKILL_MSG"*/,
                                                                        0LL);
                                          v64 = this->fields.skillNameLabel;
                                          if ( v64 )
                                          {
                                            Instance = (DataManager_o *)System_String__Format(
                                                                          (System_String_o *)Instance,
                                                                          (Il2CppObject *)v64->fields.mText,
                                                                          0LL);
                                            if ( detailMsgLabel )
                                            {
                                              UILabel__set_text(detailMsgLabel, (System_String_o *)Instance, 0LL);
                                              confirmMsgLabel = this->fields.confirmMsgLabel;
                                              Instance = (DataManager_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_5710/*"EVENT_REWARD_ASSIST_SKILL_CONFIRM"*/,
                                                                            0LL);
                                              if ( confirmMsgLabel )
                                              {
                                                UILabel__set_text(confirmMsgLabel, (System_String_o *)Instance, 0LL);
                                                decideLabel = this->fields.decideLabel;
                                                Instance = (DataManager_o *)LocalizationManager__Get(
                                                                              (System_String_o *)StringLiteral_3280/*"COMMON_CONFIRM_YES"*/,
                                                                              0LL);
                                                if ( decideLabel )
                                                {
                                                  UILabel__set_text(decideLabel, (System_String_o *)Instance, 0LL);
                                                  cancelLabel = this->fields.cancelLabel;
                                                  Instance = (DataManager_o *)LocalizationManager__Get(
                                                                                (System_String_o *)StringLiteral_3277/*"COMMON_CONFIRM_NO"*/,
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
                                                      v70 = (System_Action_o *)sub_B0D974(
                                                                                 System_Action_TypeInfo,
                                                                                 v68,
                                                                                 v69);
                                                      System_Action___ctor(
                                                        v70,
                                                        (Il2CppObject *)this,
                                                        Method_EventRewardAssistConfirmDialog_EndOpen__,
                                                        0LL);
                                                      BaseDialog__Open((BaseDialog_o *)this, v70, 0, 0LL);
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
    sub_B0D97C(Instance);
  }
  Instance = (DataManager_o *)*p_onDecide;
  if ( !*p_onDecide )
    goto LABEL_49;
  System_Action_int___Invoke(
    (System_Action_int__o *)Instance,
    0,
    (const MethodInfo_246D4C0 *)Method_System_Action_int__Invoke__);
}


System_String_o *__fastcall EventRewardAssistConfirmDialog__get_closeBtnPath(
        EventRewardAssistConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4211313 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15524/*"Window/CancelButton"*/, method);
    byte_4211313 = 1;
  }
  return (System_String_o *)StringLiteral_15524/*"Window/CancelButton"*/;
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct EventRewardAssistConfirmDialog_o *_4__this; // x8
  UISprite_o *skillIcon; // x20
  struct ShopEntity_o *shopEnt; // x8
  System_String_o *klass; // x21
  struct AssistEntity_o *beforeAssistEnt; // x8
  Il2CppObject *v10; // x22
  Il2CppObject *v11; // x0
  System_String_o *v12; // x21
  struct EventRewardAssistConfirmDialog_o *v13; // x8
  struct ShopEntity_o *v14; // x9
  UISprite_o *combineSkillIcon; // x20
  System_String_o *ASSIST_SKILL_ICON; // x21
  struct AssistEntity_o *afterAssistEnt; // x8
  Il2CppObject *v18; // x19
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  int32_t v21; // [xsp+0h] [xbp-40h] BYREF
  int32_t v22; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t imageId; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4211BCC & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&EventRewardAssistConfirmDialog_TypeInfo, v3);
    this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)sub_B0D8A4(&int_TypeInfo, v4);
    byte_4211BCC = 1;
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
  v10 = (Il2CppObject *)this;
  imageId = beforeAssistEnt->fields.imageId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId);
  v12 = System_String__Format_43845440(klass, v10, v11, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)AtlasManager__SetEventUI(skillIcon, v12, 0LL);
  v13 = v2->fields.__4__this;
  if ( !v13
    || (v14 = v2->fields.shopEnt) == 0LL
    || (combineSkillIcon = v13->fields.combineSkillIcon,
        ASSIST_SKILL_ICON = EventRewardAssistConfirmDialog_TypeInfo->static_fields->ASSIST_SKILL_ICON,
        v22 = v14->fields.eventId,
        this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)j_il2cpp_value_box_0(int_TypeInfo, &v22),
        (afterAssistEnt = v2->fields.afterAssistEnt) == 0LL) )
  {
LABEL_16:
    sub_B0D97C(this);
  }
  v18 = (Il2CppObject *)this;
  v21 = afterAssistEnt->fields.imageId;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v20 = System_String__Format_43845440(ASSIST_SKILL_ICON, v18, v19, 0LL);
  AtlasManager__SetEventUI(combineSkillIcon, v20, 0LL);
}