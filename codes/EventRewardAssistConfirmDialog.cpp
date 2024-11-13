void __fastcall EventRewardAssistConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B11162 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardAssistConfirmDialog_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_19455/*"event_skill_icon_{0}{1:D2}"*/, v3, v4);
    byte_4B11162 = 1;
  }
  EventRewardAssistConfirmDialog_TypeInfo->static_fields->ASSIST_SKILL_ICON = (struct System_String_o *)StringLiteral_19455/*"event_skill_icon_{0}{1:D2}"*/;
  sub_1BCA784(EventRewardAssistConfirmDialog_TypeInfo->static_fields, StringLiteral_19455/*"event_skill_icon_{0}{1:D2}"*/);
  *(_QWORD *)&EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH = 0x26C0000010ELL;
}


void __fastcall EventRewardAssistConfirmDialog___ctor(EventRewardAssistConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11161 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B11161 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.onDecide = 0LL;
  sub_1BCA784(&this->fields.onDecide, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRewardAssistConfirmDialog__OnClickCancel(
        EventRewardAssistConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Action_int__o *onDecide; // x8

  if ( (byte_4B1115F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventRewardAssistConfirmDialog_OnClickCancel__, method, v2);
    byte_4B1115F = 1;
  }
  if ( this->fields.state == 1 )
  {
    v4 = Method_EventRewardAssistConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRewardAssistConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventRewardAssistConfirmDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_1BCAA3C(v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      0LL,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall EventRewardAssistConfirmDialog__OnClickDecide(
        EventRewardAssistConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Action_int__o *onDecide; // x8

  if ( (byte_4B1115E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventRewardAssistConfirmDialog_OnClickDecide__, method, v2);
    byte_4B1115E = 1;
  }
  if ( this->fields.state == 1 )
  {
    v4 = Method_EventRewardAssistConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRewardAssistConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EventRewardAssistConfirmDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_1BCAA3C(v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      1LL,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall EventRewardAssistConfirmDialog__Open(
        EventRewardAssistConfirmDialog_o *this,
        ShopEntity_o *shopEnt,
        System_Action_int__o *onDecide,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  Il2CppObject *v43; // x23
  DataManager_o *Instance; // x0
  __int64 v45; // x1
  void *monitor; // x8
  __int64 v47; // x9
  Il2CppObject *v48; // x20
  int32_t v49; // w21
  AssistMaster_o *v50; // x25
  AssistEntity_o *CurrentLevelEntity; // x0
  DataManager_o **v52; // x22
  AssistEntity_o *AssistEntity; // x0
  DataManager_o **p_monitor; // x21
  struct System_Action_int__o **p_onDecide; // x25
  Il2CppClass *klass; // x8
  int32_t bits; // w24
  int v58; // w27
  DataManager_o *v59; // x8
  SkillEntity_o *v60; // x24
  int32_t datalist; // w25
  int datalist_high; // w28
  UILabel_o *skillNameLabel; // x26
  SkillEntity_o *v64; // x25
  UILabel_o *combineSkillNameLabel; // x24
  UILabel_o *v66; // x24
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  System_Action_o *v70; // x24
  __int64 v71; // x1
  __int64 v72; // x1
  UILabel_o *skillLvLabel; // x23
  System_String_o *v74; // x24
  Il2CppObject *v75; // x0
  UILabel_o *combineSkillLvLabel; // x23
  System_String_o *v77; // x24
  Il2CppObject *v78; // x0
  UILabel_o *skillInfoLabel; // x22
  struct UILabel_o *v80; // x8
  UILabel_o *combineSkillInfoLabel; // x21
  struct UILabel_o *v82; // x8
  UILabel_o *titleLabel; // x21
  System_String_o *v84; // x0
  UILabel_o *detailMsgLabel; // x20
  struct UICrossNarrowLabel_o *v86; // x8
  UILabel_o *confirmMsgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  System_Action_o *v93; // x20
  int v94; // [xsp+8h] [xbp-68h] BYREF
  int v95; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B1115D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, shopEnt, onDecide);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_AssistMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_EventRewardAssistConfirmDialog_EndOpen__, v15, v16);
    sub_1BCA7E0(&EventRewardAssistConfirmDialog_TypeInfo, v17, v18);
    sub_1BCA7E0(&int_TypeInfo, v19, v20);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&Method_EventRewardAssistConfirmDialog___c__DisplayClass22_0__Open_b__0__, v25, v26);
    sub_1BCA7E0(&EventRewardAssistConfirmDialog___c__DisplayClass22_0_TypeInfo, v27, v28);
    sub_1BCA7E0(&StringLiteral_8362/*"LEVEL_INFO"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_5773/*"EVENT_REWARD_ASSIST_SKILL_MSG"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_5772/*"EVENT_REWARD_ASSIST_SKILL_LV"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_5775/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_5771/*"EVENT_REWARD_ASSIST_SKILL_CONFIRM"*/, v41, v42);
    byte_4B1115D = 1;
  }
  v43 = (Il2CppObject *)sub_1BCAA2C(
                          EventRewardAssistConfirmDialog___c__DisplayClass22_0_TypeInfo,
                          shopEnt,
                          onDecide,
                          method);
  System_Object___ctor(v43, 0LL);
  if ( !v43 )
    goto LABEL_46;
  v43[1].klass = (Il2CppClass *)this;
  sub_1BCA784(&v43[1], this);
  v43[1].monitor = shopEnt;
  Instance = (DataManager_o *)sub_1BCA784(&v43[1].monitor, shopEnt);
  monitor = v43[1].monitor;
  if ( !monitor )
    goto LABEL_46;
  v47 = *((_QWORD *)monitor + 7);
  if ( !v47 )
    goto LABEL_46;
  if ( !*(_DWORD *)(v47 + 24) )
    sub_1BCAA44(Instance, v45);
  v48 = (Il2CppObject *)*((_QWORD *)monitor + 13);
  v49 = *(_DWORD *)(v47 + 32);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_AssistMaster___);
  if ( !Instance )
    goto LABEL_46;
  v50 = (AssistMaster_o *)Instance;
  CurrentLevelEntity = AssistMaster__GetCurrentLevelEntity((AssistMaster_o *)Instance, v49, 0LL);
  v43[2].klass = (Il2CppClass *)CurrentLevelEntity;
  v52 = (DataManager_o **)&v43[2];
  Instance = (DataManager_o *)sub_1BCA784(&v43[2], CurrentLevelEntity);
  if ( !v43[2].klass )
    goto LABEL_46;
  AssistEntity = AssistMaster__GetAssistEntity(v50, v49, LODWORD(v43[2].klass->_1.byval_arg.data) + 1, 0LL);
  v43[2].monitor = AssistEntity;
  p_monitor = (DataManager_o **)&v43[2].monitor;
  sub_1BCA784(&v43[2].monitor, AssistEntity);
  this->fields.onDecide = onDecide;
  p_onDecide = &this->fields.onDecide;
  Instance = (DataManager_o *)sub_1BCA784(&this->fields.onDecide, onDecide);
  klass = v43[2].klass;
  if ( klass && *p_monitor )
  {
    bits = klass->_1.byval_arg.bits;
    v58 = *(&klass->_1.byval_arg.bits + 1);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      bits,
                                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v59 = *p_monitor;
        if ( *p_monitor )
        {
          v60 = (SkillEntity_o *)Instance;
          datalist = (int32_t)v59->fields.datalist;
          datalist_high = HIDWORD(v59->fields.datalist);
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
            if ( Instance )
            {
              Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                            datalist,
                                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              if ( v60 )
              {
                skillNameLabel = (UILabel_o *)this->fields.skillNameLabel;
                v64 = (SkillEntity_o *)Instance;
                Instance = (DataManager_o *)SkillEntity__getName(v60, 0LL);
                if ( skillNameLabel )
                {
                  UILabel__set_text(skillNameLabel, (System_String_o *)Instance, 0LL);
                  if ( v64 )
                  {
                    combineSkillNameLabel = (UILabel_o *)this->fields.combineSkillNameLabel;
                    Instance = (DataManager_o *)SkillEntity__getName(v64, 0LL);
                    if ( combineSkillNameLabel )
                    {
                      UILabel__set_text(combineSkillNameLabel, (System_String_o *)Instance, 0LL);
                      v66 = (UILabel_o *)this->fields.skillNameLabel;
                      Instance = (DataManager_o *)EventRewardAssistConfirmDialog_TypeInfo;
                      if ( !EventRewardAssistConfirmDialog_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(EventRewardAssistConfirmDialog_TypeInfo, v45);
                      if ( v66 )
                      {
                        UILabel__SetCondensedScale(
                          v66,
                          EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH,
                          0LL);
                        Instance = (DataManager_o *)this->fields.combineSkillNameLabel;
                        if ( Instance )
                        {
                          UILabel__SetCondensedScale(
                            (UILabel_o *)Instance,
                            EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH,
                            0LL);
                          v70 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v67, v68, v69);
                          System_Action___ctor(
                            v70,
                            v43,
                            Method_EventRewardAssistConfirmDialog___c__DisplayClass22_0__Open_b__0__,
                            0LL);
                          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v71);
                          AtlasManager__LoadEventUI(v70, 1, 0LL);
                          skillLvLabel = this->fields.skillLvLabel;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
                          v74 = LocalizationManager__Get((System_String_o *)StringLiteral_8362/*"LEVEL_INFO"*/, 0LL);
                          v95 = v58;
                          v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v95);
                          Instance = (DataManager_o *)System_String__Format(v74, v75, 0LL);
                          if ( skillLvLabel )
                          {
                            UILabel__set_text(skillLvLabel, (System_String_o *)Instance, 0LL);
                            combineSkillLvLabel = this->fields.combineSkillLvLabel;
                            v77 = LocalizationManager__Get((System_String_o *)StringLiteral_5772/*"EVENT_REWARD_ASSIST_SKILL_LV"*/, 0LL);
                            v94 = datalist_high;
                            v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v94);
                            Instance = (DataManager_o *)System_String__Format(v77, v78, 0LL);
                            if ( combineSkillLvLabel )
                            {
                              UILabel__set_text(combineSkillLvLabel, (System_String_o *)Instance, 0LL);
                              Instance = *v52;
                              if ( *v52 )
                              {
                                skillInfoLabel = this->fields.skillInfoLabel;
                                Instance = (DataManager_o *)AssistEntity__GetDetail((AssistEntity_o *)Instance, 0, 0LL);
                                v80 = this->fields.skillInfoLabel;
                                if ( v80 )
                                {
                                  WrapControlText__textAdjust(
                                    skillInfoLabel,
                                    (System_String_o *)Instance,
                                    v80->fields.mFontSize,
                                    0,
                                    0,
                                    0LL);
                                  Instance = *p_monitor;
                                  if ( *p_monitor )
                                  {
                                    combineSkillInfoLabel = this->fields.combineSkillInfoLabel;
                                    Instance = (DataManager_o *)AssistEntity__GetDetail(
                                                                  (AssistEntity_o *)Instance,
                                                                  0,
                                                                  0LL);
                                    v82 = this->fields.combineSkillInfoLabel;
                                    if ( v82 )
                                    {
                                      WrapControlText__textAdjust(
                                        combineSkillInfoLabel,
                                        (System_String_o *)Instance,
                                        v82->fields.mFontSize,
                                        0,
                                        0,
                                        0LL);
                                      titleLabel = this->fields.titleLabel;
                                      v84 = LocalizationManager__Get((System_String_o *)StringLiteral_5775/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/, 0LL);
                                      Instance = (DataManager_o *)System_String__Format(v84, v48, 0LL);
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
                                          v86 = this->fields.skillNameLabel;
                                          if ( v86 )
                                          {
                                            Instance = (DataManager_o *)System_String__Format(
                                                                          (System_String_o *)Instance,
                                                                          (Il2CppObject *)v86->fields.mText,
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
                                                                              (System_String_o *)StringLiteral_3795/*"COMMON_CONFIRM_YES"*/,
                                                                              0LL);
                                                if ( decideLabel )
                                                {
                                                  UILabel__set_text(decideLabel, (System_String_o *)Instance, 0LL);
                                                  cancelLabel = this->fields.cancelLabel;
                                                  Instance = (DataManager_o *)LocalizationManager__Get(
                                                                                (System_String_o *)StringLiteral_3790/*"COMMON_CONFIRM_NO"*/,
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
                                                      v93 = (System_Action_o *)sub_1BCAA2C(
                                                                                 System_Action_TypeInfo,
                                                                                 v90,
                                                                                 v91,
                                                                                 v92);
                                                      System_Action___ctor(
                                                        v93,
                                                        (Il2CppObject *)this,
                                                        Method_EventRewardAssistConfirmDialog_EndOpen__,
                                                        0LL);
                                                      BaseDialog__Open((BaseDialog_o *)this, v93, 0, 0LL);
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
    sub_1BCAA3C(Instance, v45);
  }
  if ( !*p_onDecide )
    goto LABEL_46;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))(*p_onDecide)->fields.m_target)(
    (*p_onDecide)->fields.original_method_info,
    0LL,
    *(_QWORD *)&(*p_onDecide)->fields.extra_arg);
}


System_String_o *__fastcall EventRewardAssistConfirmDialog__get_closeBtnPath(
        EventRewardAssistConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11160 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15808/*"Window/CancelButton"*/, method, v2);
    byte_4B11160 = 1;
  }
  return (System_String_o *)StringLiteral_15808/*"Window/CancelButton"*/;
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
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct EventRewardAssistConfirmDialog_o *_4__this; // x8
  UISprite_o *skillIcon; // x20
  struct ShopEntity_o *shopEnt; // x8
  AssistEntity_c *klass; // x21
  struct AssistEntity_o *beforeAssistEnt; // x8
  Il2CppObject *v13; // x22
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x21
  struct EventRewardAssistConfirmDialog_o *v17; // x8
  struct ShopEntity_o *v18; // x9
  UISprite_o *combineSkillIcon; // x20
  System_String_o *ASSIST_SKILL_ICON; // x21
  struct AssistEntity_o *afterAssistEnt; // x8
  Il2CppObject *v22; // x19
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  int32_t v25; // [xsp+0h] [xbp-50h] BYREF
  int32_t v26; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t imageId; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-44h] BYREF

  v3 = this;
  if ( (byte_4B11163 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&EventRewardAssistConfirmDialog_TypeInfo, v4, v5);
    this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)sub_1BCA7E0(&int_TypeInfo, v6, v7);
    byte_4B11163 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  skillIcon = _4__this->fields.skillIcon;
  this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)EventRewardAssistConfirmDialog_TypeInfo;
  if ( !EventRewardAssistConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAssistConfirmDialog_TypeInfo, method);
    this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)EventRewardAssistConfirmDialog_TypeInfo;
  }
  shopEnt = v3->fields.shopEnt;
  if ( !shopEnt )
    goto LABEL_14;
  klass = this[3].fields.afterAssistEnt->klass;
  eventId = shopEnt->fields.eventId;
  this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  beforeAssistEnt = v3->fields.beforeAssistEnt;
  if ( !beforeAssistEnt )
    goto LABEL_14;
  v13 = (Il2CppObject *)this;
  imageId = beforeAssistEnt->fields.imageId;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId);
  v16 = System_String__Format_62415592((System_String_o *)klass, v13, v14, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15);
  this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)AtlasManager__SetEventUI(skillIcon, v16, 0LL);
  v17 = v3->fields.__4__this;
  if ( !v17
    || (v18 = v3->fields.shopEnt) == 0LL
    || (combineSkillIcon = v17->fields.combineSkillIcon,
        ASSIST_SKILL_ICON = EventRewardAssistConfirmDialog_TypeInfo->static_fields->ASSIST_SKILL_ICON,
        v26 = v18->fields.eventId,
        this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)j_il2cpp_value_box_0(int_TypeInfo, &v26),
        (afterAssistEnt = v3->fields.afterAssistEnt) == 0LL) )
  {
LABEL_14:
    sub_1BCAA3C(this, method);
  }
  v22 = (Il2CppObject *)this;
  v25 = afterAssistEnt->fields.imageId;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v24 = System_String__Format_62415592(ASSIST_SKILL_ICON, v22, v23, 0LL);
  AtlasManager__SetEventUI(combineSkillIcon, v24, 0LL);
}