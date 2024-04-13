void __fastcall EventRewardAssistConfirmDialog___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  struct EventRewardAssistConfirmDialog_StaticFields *static_fields; // x0
  EventRewardAssistConfirmDialog_c *v8; // x8

  if ( (byte_42E551C & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardAssistConfirmDialog_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_18817/*"event_skill_icon_{0}{1:D2}"*/, v4, v5, v6);
    byte_42E551C = 1;
  }
  static_fields = EventRewardAssistConfirmDialog_TypeInfo->static_fields;
  static_fields->ASSIST_SKILL_ICON = (struct System_String_o *)StringLiteral_18817/*"event_skill_icon_{0}{1:D2}"*/;
  sub_B5D560(static_fields);
  v8 = EventRewardAssistConfirmDialog_TypeInfo;
  EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH = 270;
  v8->static_fields->TITLE_NAME_LABEL_MAX_WIDTH = 620;
}


void __fastcall EventRewardAssistConfirmDialog___ctor(EventRewardAssistConfirmDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E551B & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E551B = 1;
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.onDecide = 0LL;
  sub_B5D560(&this->fields.onDecide);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRewardAssistConfirmDialog__OnClickCancel(
        EventRewardAssistConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  System_Action_int__o *onDecide; // x0

  if ( (byte_42E5519 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E5519 = 1;
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
      sub_B5D69C(0LL, v8);
    System_Action_int___Invoke(onDecide, 0, (const MethodInfo_2589DA4 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall EventRewardAssistConfirmDialog__OnClickDecide(
        EventRewardAssistConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  System_Action_int__o *onDecide; // x0

  if ( (byte_42E5518 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__Invoke__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E5518 = 1;
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
      sub_B5D69C(0LL, v8);
    System_Action_int___Invoke(onDecide, 1, (const MethodInfo_2589DA4 *)Method_System_Action_int__Invoke__);
  }
}


void __fastcall EventRewardAssistConfirmDialog__Open(
        EventRewardAssistConfirmDialog_o *this,
        ShopEntity_o *shopEnt,
        System_Action_int__o *onDecide,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *v64; // x23
  DataManager_o *Instance; // x0
  __int64 v66; // x1
  struct ShopEntity_o *v67; // x8
  struct System_Int32_array *targetIds; // x9
  Il2CppObject *name; // x27
  int32_t v70; // w21
  AssistMaster_o *v71; // x25
  DataManager_o **p_beforeAssistEnt; // x22
  DataManager_o **p_afterAssistEnt; // x21
  struct System_Action_int__o **p_onDecide; // x25
  struct AssistEntity_o *beforeAssistEnt; // x8
  int32_t skillId; // w24
  int skillLv; // w28
  DataManager_o *v78; // x8
  SkillEntity_o *v79; // x24
  int32_t masterDataBytes; // w25
  UILabel_o *skillNameLabel; // x26
  SkillEntity_o *v82; // x25
  UILabel_o *combineSkillNameLabel; // x24
  UILabel_o *v84; // x24
  System_Action_o *v85; // x24
  UILabel_o *skillLvLabel; // x23
  System_String_o *v87; // x24
  Il2CppObject *v88; // x0
  UILabel_o *combineSkillLvLabel; // x23
  System_String_o *v90; // x24
  Il2CppObject *v91; // x0
  UILabel_o *skillInfoLabel; // x22
  struct UILabel_o *v93; // x8
  UILabel_o *combineSkillInfoLabel; // x21
  struct UILabel_o *v95; // x8
  UILabel_o *titleLabel; // x21
  System_String_o *v97; // x0
  UILabel_o *detailMsgLabel; // x20
  struct UICrossNarrowLabel_o *v99; // x8
  UILabel_o *confirmMsgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v103; // x20
  __int64 v104; // x0
  int masterDataBytes_high; // [xsp+Ch] [xbp-64h]
  int v106; // [xsp+18h] [xbp-58h] BYREF
  int v107; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_42E5517 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int__Invoke__, (_DWORD)shopEnt, (_DWORD)onDecide, method);
    sub_B5D5C4(&System_Action_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&AtlasManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_AssistMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v19, v20, v21);
    sub_B5D5C4(&Method_EventRewardAssistConfirmDialog_EndOpen__, v22, v23, v24);
    sub_B5D5C4(&EventRewardAssistConfirmDialog_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&int_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35, v36);
    sub_B5D5C4(&Method_EventRewardAssistConfirmDialog___c__DisplayClass22_0__Open_b__0__, v37, v38, v39);
    sub_B5D5C4(&EventRewardAssistConfirmDialog___c__DisplayClass22_0_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_8461/*"LEVEL_INFO"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_5773/*"EVENT_REWARD_ASSIST_SKILL_MSG"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_5772/*"EVENT_REWARD_ASSIST_SKILL_LV"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_5775/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_3330/*"COMMON_CONFIRM_NO"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_3333/*"COMMON_CONFIRM_YES"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_5771/*"EVENT_REWARD_ASSIST_SKILL_CONFIRM"*/, v61, v62, v63);
    byte_42E5517 = 1;
  }
  v64 = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)sub_B5D694(EventRewardAssistConfirmDialog___c__DisplayClass22_0_TypeInfo);
  EventRewardAssistConfirmDialog___c__DisplayClass22_0___ctor(v64, 0LL);
  if ( !v64 )
    goto LABEL_49;
  v64->fields.__4__this = this;
  sub_B5D560(&v64->fields);
  v64->fields.shopEnt = shopEnt;
  sub_B5D560(&v64->fields.shopEnt);
  v67 = v64->fields.shopEnt;
  if ( !v67 )
    goto LABEL_49;
  targetIds = v67->fields.targetIds;
  if ( !targetIds )
    goto LABEL_49;
  if ( !targetIds->max_length )
  {
    v104 = sub_B5D6C8(Instance);
    sub_B5D668(v104, 0LL);
  }
  name = (Il2CppObject *)v67->fields.name;
  v70 = targetIds->m_Items[1];
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_AssistMaster___);
  if ( !Instance )
    goto LABEL_49;
  v71 = (AssistMaster_o *)Instance;
  v64->fields.beforeAssistEnt = AssistMaster__GetCurrentLevelEntity((AssistMaster_o *)Instance, v70, 0LL);
  p_beforeAssistEnt = (DataManager_o **)&v64->fields.beforeAssistEnt;
  sub_B5D560(&v64->fields.beforeAssistEnt);
  if ( !v64->fields.beforeAssistEnt )
    goto LABEL_49;
  v64->fields.afterAssistEnt = AssistMaster__GetAssistEntity(v71, v70, v64->fields.beforeAssistEnt->fields.lv + 1, 0LL);
  p_afterAssistEnt = (DataManager_o **)&v64->fields.afterAssistEnt;
  sub_B5D560(&v64->fields.afterAssistEnt);
  this->fields.onDecide = onDecide;
  p_onDecide = &this->fields.onDecide;
  sub_B5D560(&this->fields.onDecide);
  beforeAssistEnt = v64->fields.beforeAssistEnt;
  if ( beforeAssistEnt && *p_afterAssistEnt )
  {
    skillId = beforeAssistEnt->fields.skillId;
    skillLv = beforeAssistEnt->fields.skillLv;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      skillId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v78 = *p_afterAssistEnt;
        if ( *p_afterAssistEnt )
        {
          v79 = (SkillEntity_o *)Instance;
          masterDataBytes = (int32_t)v78->fields.masterDataBytes;
          masterDataBytes_high = HIDWORD(v78->fields.masterDataBytes);
          Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          Instance,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
            if ( Instance )
            {
              Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                            masterDataBytes,
                                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              if ( v79 )
              {
                skillNameLabel = (UILabel_o *)this->fields.skillNameLabel;
                v82 = (SkillEntity_o *)Instance;
                Instance = (DataManager_o *)SkillEntity__getName(v79, 0LL);
                if ( skillNameLabel )
                {
                  UILabel__set_text(skillNameLabel, (System_String_o *)Instance, 0LL);
                  if ( v82 )
                  {
                    combineSkillNameLabel = (UILabel_o *)this->fields.combineSkillNameLabel;
                    Instance = (DataManager_o *)SkillEntity__getName(v82, 0LL);
                    if ( combineSkillNameLabel )
                    {
                      UILabel__set_text(combineSkillNameLabel, (System_String_o *)Instance, 0LL);
                      v84 = (UILabel_o *)this->fields.skillNameLabel;
                      Instance = (DataManager_o *)EventRewardAssistConfirmDialog_TypeInfo;
                      if ( (BYTE3(EventRewardAssistConfirmDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !EventRewardAssistConfirmDialog_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(EventRewardAssistConfirmDialog_TypeInfo);
                      }
                      if ( v84 )
                      {
                        UILabel__SetCondensedScale(
                          v84,
                          EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH,
                          0LL);
                        Instance = (DataManager_o *)this->fields.combineSkillNameLabel;
                        if ( Instance )
                        {
                          UILabel__SetCondensedScale(
                            (UILabel_o *)Instance,
                            EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH,
                            0LL);
                          v85 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                          System_Action___ctor(
                            v85,
                            (Il2CppObject *)v64,
                            Method_EventRewardAssistConfirmDialog___c__DisplayClass22_0__Open_b__0__,
                            0LL);
                          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !AtlasManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                          }
                          AtlasManager__LoadEventUI(v85, 1, 0LL);
                          skillLvLabel = this->fields.skillLvLabel;
                          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                            && !LocalizationManager_TypeInfo->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          }
                          v87 = LocalizationManager__Get((System_String_o *)StringLiteral_8461/*"LEVEL_INFO"*/, 0LL);
                          v107 = skillLv;
                          v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v107);
                          Instance = (DataManager_o *)System_String__Format(v87, v88, 0LL);
                          if ( skillLvLabel )
                          {
                            UILabel__set_text(skillLvLabel, (System_String_o *)Instance, 0LL);
                            combineSkillLvLabel = this->fields.combineSkillLvLabel;
                            v90 = LocalizationManager__Get((System_String_o *)StringLiteral_5772/*"EVENT_REWARD_ASSIST_SKILL_LV"*/, 0LL);
                            v106 = masterDataBytes_high;
                            v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v106);
                            Instance = (DataManager_o *)System_String__Format(v90, v91, 0LL);
                            if ( combineSkillLvLabel )
                            {
                              UILabel__set_text(combineSkillLvLabel, (System_String_o *)Instance, 0LL);
                              Instance = *p_beforeAssistEnt;
                              if ( *p_beforeAssistEnt )
                              {
                                skillInfoLabel = this->fields.skillInfoLabel;
                                Instance = (DataManager_o *)AssistEntity__GetDetail((AssistEntity_o *)Instance, 0, 0LL);
                                v93 = this->fields.skillInfoLabel;
                                if ( v93 )
                                {
                                  WrapControlText__textAdjust(
                                    skillInfoLabel,
                                    (System_String_o *)Instance,
                                    v93->fields.mFontSize,
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
                                    v95 = this->fields.combineSkillInfoLabel;
                                    if ( v95 )
                                    {
                                      WrapControlText__textAdjust(
                                        combineSkillInfoLabel,
                                        (System_String_o *)Instance,
                                        v95->fields.mFontSize,
                                        0,
                                        0,
                                        0LL);
                                      titleLabel = this->fields.titleLabel;
                                      v97 = LocalizationManager__Get((System_String_o *)StringLiteral_5775/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/, 0LL);
                                      Instance = (DataManager_o *)System_String__Format(v97, name, 0LL);
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
                                                                        (System_String_o *)StringLiteral_5773/*"EVENT_REWARD_ASSIST_SKILL_MSG"*/,
                                                                        0LL);
                                          v99 = this->fields.skillNameLabel;
                                          if ( v99 )
                                          {
                                            Instance = (DataManager_o *)System_String__Format(
                                                                          (System_String_o *)Instance,
                                                                          (Il2CppObject *)v99->fields.mText,
                                                                          0LL);
                                            if ( detailMsgLabel )
                                            {
                                              UILabel__set_text(detailMsgLabel, (System_String_o *)Instance, 0LL);
                                              confirmMsgLabel = this->fields.confirmMsgLabel;
                                              Instance = (DataManager_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_5771/*"EVENT_REWARD_ASSIST_SKILL_CONFIRM"*/,
                                                                            0LL);
                                              if ( confirmMsgLabel )
                                              {
                                                UILabel__set_text(confirmMsgLabel, (System_String_o *)Instance, 0LL);
                                                decideLabel = this->fields.decideLabel;
                                                Instance = (DataManager_o *)LocalizationManager__Get(
                                                                              (System_String_o *)StringLiteral_3333/*"COMMON_CONFIRM_YES"*/,
                                                                              0LL);
                                                if ( decideLabel )
                                                {
                                                  UILabel__set_text(decideLabel, (System_String_o *)Instance, 0LL);
                                                  cancelLabel = this->fields.cancelLabel;
                                                  Instance = (DataManager_o *)LocalizationManager__Get(
                                                                                (System_String_o *)StringLiteral_3330/*"COMMON_CONFIRM_NO"*/,
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
                                                      v103 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                                                      System_Action___ctor(
                                                        v103,
                                                        (Il2CppObject *)this,
                                                        Method_EventRewardAssistConfirmDialog_EndOpen__,
                                                        0LL);
                                                      BaseDialog__Open((BaseDialog_o *)this, v103, 0, 0LL);
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
    sub_B5D69C(Instance, v66);
  }
  Instance = (DataManager_o *)*p_onDecide;
  if ( !*p_onDecide )
    goto LABEL_49;
  System_Action_int___Invoke(
    (System_Action_int__o *)Instance,
    0,
    (const MethodInfo_2589DA4 *)Method_System_Action_int__Invoke__);
}


System_String_o *__fastcall EventRewardAssistConfirmDialog__get_closeBtnPath(
        EventRewardAssistConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E551A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15667/*"Window/CancelButton"*/, (_DWORD)method, v2, v3);
    byte_42E551A = 1;
  }
  return (System_String_o *)StringLiteral_15667/*"Window/CancelButton"*/;
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
  int v2; // w2
  __int64 v3; // x3
  EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct EventRewardAssistConfirmDialog_o *_4__this; // x8
  UISprite_o *skillIcon; // x20
  struct ShopEntity_o *shopEnt; // x8
  System_String_o *klass; // x21
  struct AssistEntity_o *beforeAssistEnt; // x8
  Il2CppObject *v16; // x22
  Il2CppObject *v17; // x0
  System_String_o *v18; // x21
  struct EventRewardAssistConfirmDialog_o *v19; // x8
  struct ShopEntity_o *v20; // x9
  UISprite_o *combineSkillIcon; // x20
  System_String_o *ASSIST_SKILL_ICON; // x21
  struct AssistEntity_o *afterAssistEnt; // x8
  Il2CppObject *v24; // x19
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  int32_t v27; // [xsp+0h] [xbp-40h] BYREF
  int32_t v28; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t imageId; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_42E5655 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventRewardAssistConfirmDialog_TypeInfo, v5, v6, v7);
    this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)sub_B5D5C4(&int_TypeInfo, v8, v9, v10);
    byte_42E5655 = 1;
  }
  _4__this = v4->fields.__4__this;
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
  shopEnt = v4->fields.shopEnt;
  if ( !shopEnt )
    goto LABEL_16;
  klass = (System_String_o *)this[3].fields.afterAssistEnt->klass;
  eventId = shopEnt->fields.eventId;
  this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  beforeAssistEnt = v4->fields.beforeAssistEnt;
  if ( !beforeAssistEnt )
    goto LABEL_16;
  v16 = (Il2CppObject *)this;
  imageId = beforeAssistEnt->fields.imageId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId);
  v18 = System_String__Format_44573324(klass, v16, v17, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)AtlasManager__SetEventUI(skillIcon, v18, 0LL);
  v19 = v4->fields.__4__this;
  if ( !v19
    || (v20 = v4->fields.shopEnt) == 0LL
    || (combineSkillIcon = v19->fields.combineSkillIcon,
        ASSIST_SKILL_ICON = EventRewardAssistConfirmDialog_TypeInfo->static_fields->ASSIST_SKILL_ICON,
        v28 = v20->fields.eventId,
        this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)j_il2cpp_value_box_0(int_TypeInfo, &v28),
        (afterAssistEnt = v4->fields.afterAssistEnt) == 0LL) )
  {
LABEL_16:
    sub_B5D69C(this, method);
  }
  v24 = (Il2CppObject *)this;
  v27 = afterAssistEnt->fields.imageId;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
  v26 = System_String__Format_44573324(ASSIST_SKILL_ICON, v24, v25, 0LL);
  AtlasManager__SetEventUI(combineSkillIcon, v26, 0LL);
}