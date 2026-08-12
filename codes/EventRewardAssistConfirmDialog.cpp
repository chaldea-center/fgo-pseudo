void EventRewardAssistConfirmDialog___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596ABF2 & 1) == 0 )
  {
    sub_2213A60(&EventRewardAssistConfirmDialog_TypeInfo);
    sub_2213A60(&StringLiteral_20167/*"event_skill_icon_{0}{1:D2}"*/);
    byte_596ABF2 = 1;
  }
  v7 = StringLiteral_20167/*"event_skill_icon_{0}{1:D2}"*/;
  EventRewardAssistConfirmDialog_TypeInfo->static_fields->ASSIST_SKILL_ICON = (struct System_String_o *)StringLiteral_20167/*"event_skill_icon_{0}{1:D2}"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventRewardAssistConfirmDialog_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  *(_QWORD *)&EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH = 0x26C0000010ELL;
}


void EventRewardAssistConfirmDialog___ctor(EventRewardAssistConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596ABF1 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596ABF1 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventRewardAssistConfirmDialog__Close(EventRewardAssistConfirmDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Close((BaseDialog_o *)this, 0, 0);
}


void EventRewardAssistConfirmDialog__EndOpen(EventRewardAssistConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 1;
}


void EventRewardAssistConfirmDialog__Init(EventRewardAssistConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.onDecide = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onDecide, 0, v5, v6, v7, v8, v9, v10);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventRewardAssistConfirmDialog__OnClickCancel(EventRewardAssistConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_int__o *onDecide; // x8

  if ( (byte_596ABEF & 1) == 0 )
  {
    sub_2213A60(&Method_EventRewardAssistConfirmDialog_OnClickCancel__);
    byte_596ABEF = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAssistConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRewardAssistConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventRewardAssistConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_2213CDC(v5, v6);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onDecide->fields.invoke_impl)(
      onDecide->fields.method_code,
      0,
      onDecide->fields.method);
  }
}


void EventRewardAssistConfirmDialog__OnClickDecide(EventRewardAssistConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_int__o *onDecide; // x8

  if ( (byte_596ABEE & 1) == 0 )
  {
    sub_2213A60(&Method_EventRewardAssistConfirmDialog_OnClickDecide__);
    byte_596ABEE = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAssistConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRewardAssistConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventRewardAssistConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_2213CDC(v5, v6);
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))onDecide->fields.invoke_impl)(
      onDecide->fields.method_code,
      1,
      onDecide->fields.method);
  }
}


void EventRewardAssistConfirmDialog__Open(
        EventRewardAssistConfirmDialog_o *this,
        ShopEntity_o *shopEnt,
        System_Action_int__o *onDecide,
        const MethodInfo *method)
{
  __int64 v7; // x23
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x8
  __int64 v23; // x9
  Il2CppObject *v24; // x20
  int32_t v25; // w21
  AssistMaster_o *v26; // x25
  AssistEntity_o *CurrentLevelEntity; // x0
  DataManager_o **v28; // x22
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  AssistEntity_o *AssistEntity; // x0
  DataManager_o **v36; // x21
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct System_Action_int__o **p_onDecide; // x25
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  __int64 v50; // x8
  int32_t v51; // w24
  int v52; // w27
  DataManager_o *v53; // x8
  SkillEntity_o *v54; // x24
  int32_t datalist; // w25
  int datalist_high; // w28
  SkillEntity_o *v57; // x25
  UILabel_o *skillNameLabel; // x26
  UILabel_o *combineSkillNameLabel; // x24
  __int64 v60; // x2
  UILabel_o *v61; // x24
  System_Action_o *v62; // x24
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  UILabel_o *skillLvLabel; // x23
  System_String_o *v68; // x24
  Il2CppObject *v69; // x0
  UILabel_o *combineSkillLvLabel; // x23
  System_String_o *v71; // x24
  Il2CppObject *v72; // x0
  UILabel_o *skillInfoLabel; // x22
  struct UILabel_o *v74; // x8
  UILabel_o *combineSkillInfoLabel; // x21
  struct UILabel_o *v76; // x8
  UILabel_o *titleLabel; // x21
  System_String_o *v78; // x0
  UILabel_o *detailMsgLabel; // x20
  struct UICrossNarrowLabel_o *v80; // x8
  UILabel_o *confirmMsgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_c *v84; // x0
  System_Action_o *v85; // x20
  int v86; // [xsp+8h] [xbp-68h] BYREF
  int v87; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_596ABED & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_AssistMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_2213A60(&Method_EventRewardAssistConfirmDialog_EndOpen__);
    sub_2213A60(&EventRewardAssistConfirmDialog_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_EventRewardAssistConfirmDialog___c__DisplayClass22_0__Open_b__0__);
    sub_2213A60(&EventRewardAssistConfirmDialog___c__DisplayClass22_0_TypeInfo);
    sub_2213A60(&StringLiteral_8611/*"LEVEL_INFO"*/);
    sub_2213A60(&StringLiteral_5915/*"EVENT_REWARD_ASSIST_SKILL_MSG"*/);
    sub_2213A60(&StringLiteral_5914/*"EVENT_REWARD_ASSIST_SKILL_LV"*/);
    sub_2213A60(&StringLiteral_5917/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/);
    sub_2213A60(&StringLiteral_3831/*"COMMON_CONFIRM_NO"*/);
    sub_2213A60(&StringLiteral_3836/*"COMMON_CONFIRM_YES"*/);
    sub_2213A60(&StringLiteral_5913/*"EVENT_REWARD_ASSIST_SKILL_CONFIRM"*/);
    byte_596ABED = 1;
  }
  v7 = sub_2213CCC(EventRewardAssistConfirmDialog___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_46;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = shopEnt;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)shopEnt, v16, v17, v18, v19, v20, v21);
  v22 = *(_QWORD *)(v7 + 24);
  if ( !v22 )
    goto LABEL_46;
  v23 = *(_QWORD *)(v22 + 56);
  if ( !v23 )
    goto LABEL_46;
  if ( !*(_DWORD *)(v23 + 24) )
    sub_2213CE4(Instance);
  v24 = *(Il2CppObject **)(v22 + 104);
  v25 = *(_DWORD *)(v23 + 32);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_AssistMaster___);
  if ( !Instance )
    goto LABEL_46;
  v26 = (AssistMaster_o *)Instance;
  CurrentLevelEntity = AssistMaster__GetCurrentLevelEntity((AssistMaster_o *)Instance, v25, 0);
  *(_QWORD *)(v7 + 32) = CurrentLevelEntity;
  v28 = (DataManager_o **)(v7 + 32);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)CurrentLevelEntity, v29, v30, v31, v32, v33, v34);
  if ( !*(_QWORD *)(v7 + 32) )
    goto LABEL_46;
  AssistEntity = AssistMaster__GetAssistEntity(v26, v25, *(_DWORD *)(*(_QWORD *)(v7 + 32) + 32LL) + 1, 0);
  *(_QWORD *)(v7 + 40) = AssistEntity;
  v36 = (DataManager_o **)(v7 + 40);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)AssistEntity, v37, v38, v39, v40, v41, v42);
  this->fields.onDecide = onDecide;
  p_onDecide = &this->fields.onDecide;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide,
    (int32_t)onDecide,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = *(_QWORD *)(v7 + 32);
  if ( v50 && *v36 )
  {
    v51 = *(_DWORD *)(v50 + 40);
    v52 = *(_DWORD *)(v50 + 44);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      v51,
                                      (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v53 = *v36;
        if ( *v36 )
        {
          v54 = (SkillEntity_o *)Instance;
          datalist = (int32_t)v53->fields.datalist;
          datalist_high = HIDWORD(v53->fields.datalist);
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillMaster___);
            if ( Instance )
            {
              Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                            datalist,
                                            (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              if ( v54 )
              {
                v57 = (SkillEntity_o *)Instance;
                skillNameLabel = (UILabel_o *)this->fields.skillNameLabel;
                Instance = (DataManager_o *)SkillEntity__getName(v54, 0);
                if ( skillNameLabel )
                {
                  UILabel__set_text(skillNameLabel, (System_String_o *)Instance, 0);
                  if ( v57 )
                  {
                    combineSkillNameLabel = (UILabel_o *)this->fields.combineSkillNameLabel;
                    Instance = (DataManager_o *)SkillEntity__getName(v57, 0);
                    if ( combineSkillNameLabel )
                    {
                      UILabel__set_text(combineSkillNameLabel, (System_String_o *)Instance, 0);
                      v61 = (UILabel_o *)this->fields.skillNameLabel;
                      Instance = (DataManager_o *)EventRewardAssistConfirmDialog_TypeInfo;
                      if ( !*(&EventRewardAssistConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(EventRewardAssistConfirmDialog_TypeInfo, v9, v60);
                      if ( v61 )
                      {
                        UILabel__SetCondensedScale(
                          v61,
                          EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH,
                          0,
                          0);
                        Instance = (DataManager_o *)this->fields.combineSkillNameLabel;
                        if ( Instance )
                        {
                          UILabel__SetCondensedScale(
                            (UILabel_o *)Instance,
                            EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH,
                            0,
                            0);
                          v62 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                          System_Action___ctor(
                            v62,
                            (Il2CppObject *)v7,
                            Method_EventRewardAssistConfirmDialog___c__DisplayClass22_0__Open_b__0__,
                            0);
                          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v63, v64);
                          AtlasManager__LoadEventUI(v62, 1, 0);
                          skillLvLabel = this->fields.skillLvLabel;
                          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v65, v66);
                          v68 = LocalizationManager__Get((System_String_o *)StringLiteral_8611/*"LEVEL_INFO"*/, 0);
                          v87 = v52;
                          v69 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v87);
                          Instance = (DataManager_o *)System_String__Format(v68, v69, 0);
                          if ( skillLvLabel )
                          {
                            UILabel__set_text(skillLvLabel, (System_String_o *)Instance, 0);
                            combineSkillLvLabel = this->fields.combineSkillLvLabel;
                            v71 = LocalizationManager__Get((System_String_o *)StringLiteral_5914/*"EVENT_REWARD_ASSIST_SKILL_LV"*/, 0);
                            v86 = datalist_high;
                            v72 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v86);
                            Instance = (DataManager_o *)System_String__Format(v71, v72, 0);
                            if ( combineSkillLvLabel )
                            {
                              UILabel__set_text(combineSkillLvLabel, (System_String_o *)Instance, 0);
                              Instance = *v28;
                              if ( *v28 )
                              {
                                skillInfoLabel = this->fields.skillInfoLabel;
                                Instance = (DataManager_o *)AssistEntity__GetDetail((AssistEntity_o *)Instance, 0, 0);
                                v74 = this->fields.skillInfoLabel;
                                if ( v74 )
                                {
                                  WrapControlText__textAdjust(
                                    skillInfoLabel,
                                    (System_String_o *)Instance,
                                    v74->fields.mFontSize,
                                    0,
                                    0);
                                  Instance = *v36;
                                  if ( *v36 )
                                  {
                                    combineSkillInfoLabel = this->fields.combineSkillInfoLabel;
                                    Instance = (DataManager_o *)AssistEntity__GetDetail(
                                                                  (AssistEntity_o *)Instance,
                                                                  0,
                                                                  0);
                                    v76 = this->fields.combineSkillInfoLabel;
                                    if ( v76 )
                                    {
                                      WrapControlText__textAdjust(
                                        combineSkillInfoLabel,
                                        (System_String_o *)Instance,
                                        v76->fields.mFontSize,
                                        0,
                                        0);
                                      titleLabel = this->fields.titleLabel;
                                      v78 = LocalizationManager__Get((System_String_o *)StringLiteral_5917/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/, 0);
                                      Instance = (DataManager_o *)System_String__Format(v78, v24, 0);
                                      if ( titleLabel )
                                      {
                                        UILabel__set_text(titleLabel, (System_String_o *)Instance, 0);
                                        Instance = (DataManager_o *)this->fields.titleLabel;
                                        if ( Instance )
                                        {
                                          UILabel__SetCondensedScale(
                                            (UILabel_o *)Instance,
                                            EventRewardAssistConfirmDialog_TypeInfo->static_fields->TITLE_NAME_LABEL_MAX_WIDTH,
                                            0,
                                            0);
                                          detailMsgLabel = this->fields.detailMsgLabel;
                                          Instance = (DataManager_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_5915/*"EVENT_REWARD_ASSIST_SKILL_MSG"*/,
                                                                        0);
                                          v80 = this->fields.skillNameLabel;
                                          if ( v80 )
                                          {
                                            Instance = (DataManager_o *)System_String__Format(
                                                                          (System_String_o *)Instance,
                                                                          (Il2CppObject *)v80->fields.mText,
                                                                          0);
                                            if ( detailMsgLabel )
                                            {
                                              UILabel__set_text(detailMsgLabel, (System_String_o *)Instance, 0);
                                              confirmMsgLabel = this->fields.confirmMsgLabel;
                                              Instance = (DataManager_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_5913/*"EVENT_REWARD_ASSIST_SKILL_CONFIRM"*/,
                                                                            0);
                                              if ( confirmMsgLabel )
                                              {
                                                UILabel__set_text(confirmMsgLabel, (System_String_o *)Instance, 0);
                                                decideLabel = this->fields.decideLabel;
                                                Instance = (DataManager_o *)LocalizationManager__Get(
                                                                              (System_String_o *)StringLiteral_3836/*"COMMON_CONFIRM_YES"*/,
                                                                              0);
                                                if ( decideLabel )
                                                {
                                                  UILabel__set_text(decideLabel, (System_String_o *)Instance, 0);
                                                  cancelLabel = this->fields.cancelLabel;
                                                  Instance = (DataManager_o *)LocalizationManager__Get(
                                                                                (System_String_o *)StringLiteral_3831/*"COMMON_CONFIRM_NO"*/,
                                                                                0);
                                                  if ( cancelLabel )
                                                  {
                                                    UILabel__set_text(cancelLabel, (System_String_o *)Instance, 0);
                                                    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                                                                  (UnityEngine_Component_o *)this,
                                                                                  0);
                                                    if ( Instance )
                                                    {
                                                      UnityEngine_GameObject__SetActive(
                                                        (UnityEngine_GameObject_o *)Instance,
                                                        1,
                                                        0);
                                                      v84 = System_Action_TypeInfo;
                                                      this->fields.state = 2;
                                                      v85 = (System_Action_o *)sub_2213CCC(v84);
                                                      System_Action___ctor(
                                                        v85,
                                                        (Il2CppObject *)this,
                                                        Method_EventRewardAssistConfirmDialog_EndOpen__,
                                                        0);
                                                      BaseDialog__Open((BaseDialog_o *)this, v85, 0, 0, 0);
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
LABEL_46:
    sub_2213CDC(Instance, v9);
  }
  if ( !*p_onDecide )
    goto LABEL_46;
  ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))(*p_onDecide)->fields.invoke_impl)(
    (*p_onDecide)->fields.method_code,
    0,
    (*p_onDecide)->fields.method);
}


System_String_o *EventRewardAssistConfirmDialog__get_closeBtnPath(
        EventRewardAssistConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_596ABF0 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16259/*"Window/CancelButton"*/);
    byte_596ABF0 = 1;
  }
  return (System_String_o *)StringLiteral_16259/*"Window/CancelButton"*/;
}


void EventRewardAssistConfirmDialog___c__DisplayClass22_0___ctor(
        EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventRewardAssistConfirmDialog___c__DisplayClass22_0___Open_b__0(
        EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *v3; // x19
  struct EventRewardAssistConfirmDialog_o *_4__this; // x8
  UISprite_o *skillIcon; // x20
  struct ShopEntity_o *shopEnt; // x8
  System_String_o *v7; // x21
  struct AssistEntity_o *beforeAssistEnt; // x8
  Il2CppObject *v9; // x22
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *v13; // x21
  struct EventRewardAssistConfirmDialog_o *v14; // x8
  struct ShopEntity_o *v15; // x9
  UISprite_o *combineSkillIcon; // x20
  struct EventRewardAssistConfirmDialog_StaticFields *static_fields; // x10
  System_String_o *ASSIST_SKILL_ICON; // x21
  struct AssistEntity_o *afterAssistEnt; // x8
  Il2CppObject *v20; // x19
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  int32_t v23; // [xsp+0h] [xbp-50h] BYREF
  int32_t v24; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t imageId; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-44h] BYREF

  v3 = this;
  if ( (byte_596ABF3 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)sub_2213A60(&EventRewardAssistConfirmDialog_TypeInfo);
    byte_596ABF3 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  skillIcon = _4__this->fields.skillIcon;
  this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)EventRewardAssistConfirmDialog_TypeInfo;
  if ( !*(&EventRewardAssistConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAssistConfirmDialog_TypeInfo, method, v2);
    this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)EventRewardAssistConfirmDialog_TypeInfo;
  }
  shopEnt = v3->fields.shopEnt;
  if ( !shopEnt )
    goto LABEL_14;
  v7 = (System_String_o *)**((_QWORD **)this + 23);
  eventId = shopEnt->fields.eventId;
  this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)j_il2cpp_value_box_0(qword_5984348, &eventId);
  beforeAssistEnt = v3->fields.beforeAssistEnt;
  if ( !beforeAssistEnt )
    goto LABEL_14;
  v9 = (Il2CppObject *)this;
  imageId = beforeAssistEnt->fields.imageId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &imageId);
  v13 = System_String__Format_75697880(v7, v9, v10, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11, v12);
  this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)AtlasManager__SetEventUI(skillIcon, v13, 0);
  v14 = v3->fields.__4__this;
  if ( !v14
    || (v15 = v3->fields.shopEnt) == 0
    || (combineSkillIcon = v14->fields.combineSkillIcon,
        static_fields = EventRewardAssistConfirmDialog_TypeInfo->static_fields,
        v24 = v15->fields.eventId,
        ASSIST_SKILL_ICON = static_fields->ASSIST_SKILL_ICON,
        this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)j_il2cpp_value_box_0(qword_5984348, &v24),
        (afterAssistEnt = v3->fields.afterAssistEnt) == 0) )
  {
LABEL_14:
    sub_2213CDC(this, method);
  }
  v20 = (Il2CppObject *)this;
  v23 = afterAssistEnt->fields.imageId;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v23);
  v22 = System_String__Format_75697880(ASSIST_SKILL_ICON, v20, v21, 0);
  AtlasManager__SetEventUI(combineSkillIcon, v22, 0);
}