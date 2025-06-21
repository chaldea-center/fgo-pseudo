void __fastcall EventRewardAssistConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_4B16E25 & 1) == 0 )
  {
    sub_1BCAFF8(&EventRewardAssistConfirmDialog_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_19103/*"event_skill_icon_{0}{1:D2}"*/, v2);
    byte_4B16E25 = 1;
  }
  EventRewardAssistConfirmDialog_TypeInfo->static_fields->ASSIST_SKILL_ICON = (struct System_String_o *)StringLiteral_19103/*"event_skill_icon_{0}{1:D2}"*/;
  sub_1BCAF9C(EventRewardAssistConfirmDialog_TypeInfo->static_fields);
  *(_QWORD *)&EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH = 0x26C0000010ELL;
}


void __fastcall EventRewardAssistConfirmDialog___ctor(EventRewardAssistConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B16E24 & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    byte_4B16E24 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
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
    sub_1BCB254(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.onDecide = 0LL;
  sub_1BCAF9C(&this->fields.onDecide);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall EventRewardAssistConfirmDialog__OnClickCancel(
        EventRewardAssistConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_int__o *onDecide; // x8

  if ( (byte_4B16E22 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_EventRewardAssistConfirmDialog_OnClickCancel__, method);
    byte_4B16E22 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAssistConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRewardAssistConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_EventRewardAssistConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_1BCB254(v5, v6);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Action_int__o *onDecide; // x8

  if ( (byte_4B16E21 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_EventRewardAssistConfirmDialog_OnClickDecide__, method);
    byte_4B16E21 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAssistConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRewardAssistConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_EventRewardAssistConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_1BCB254(v5, v6);
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
  Il2CppObject *v25; // x23
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  void *monitor; // x8
  __int64 v30; // x9
  Il2CppObject *v31; // x20
  int32_t v32; // w21
  AssistMaster_o *v33; // x25
  DataManager_o **v34; // x22
  DataManager_o **p_monitor; // x21
  struct System_Action_int__o **p_onDecide; // x25
  Il2CppClass *klass; // x8
  int32_t bits; // w24
  int v39; // w27
  DataManager_o *v40; // x8
  SkillEntity_o *v41; // x24
  int32_t datalist; // w25
  int datalist_high; // w28
  UILabel_o *skillNameLabel; // x26
  SkillEntity_o *v45; // x25
  UILabel_o *combineSkillNameLabel; // x24
  UILabel_o *v47; // x24
  System_Action_o *v48; // x24
  UILabel_o *skillLvLabel; // x23
  System_String_o *v50; // x24
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x0
  UILabel_o *combineSkillLvLabel; // x23
  System_String_o *v56; // x24
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  Il2CppObject *v60; // x0
  UILabel_o *skillInfoLabel; // x22
  struct UILabel_o *v62; // x8
  UILabel_o *combineSkillInfoLabel; // x21
  struct UILabel_o *v64; // x8
  UILabel_o *titleLabel; // x21
  System_String_o *v66; // x0
  UILabel_o *detailMsgLabel; // x20
  struct UICrossNarrowLabel_o *v68; // x8
  UILabel_o *confirmMsgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v72; // x20
  int v73; // [xsp+8h] [xbp-68h] BYREF
  int v74; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B16E20 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, shopEnt);
    sub_1BCAFF8(&AtlasManager_TypeInfo, v7);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_AssistMaster___, v8);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillMaster___, v9);
    sub_1BCAFF8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10);
    sub_1BCAFF8(&Method_EventRewardAssistConfirmDialog_EndOpen__, v11);
    sub_1BCAFF8(&EventRewardAssistConfirmDialog_TypeInfo, v12);
    sub_1BCAFF8(&int_TypeInfo, v13);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v14);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BCAFF8(&Method_EventRewardAssistConfirmDialog___c__DisplayClass22_0__Open_b__0__, v16);
    sub_1BCAFF8(&EventRewardAssistConfirmDialog___c__DisplayClass22_0_TypeInfo, v17);
    sub_1BCAFF8(&StringLiteral_8193/*"LEVEL_INFO"*/, v18);
    sub_1BCAFF8(&StringLiteral_5638/*"EVENT_REWARD_ASSIST_SKILL_MSG"*/, v19);
    sub_1BCAFF8(&StringLiteral_5637/*"EVENT_REWARD_ASSIST_SKILL_LV"*/, v20);
    sub_1BCAFF8(&StringLiteral_5640/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/, v21);
    sub_1BCAFF8(&StringLiteral_3653/*"COMMON_CONFIRM_NO"*/, v22);
    sub_1BCAFF8(&StringLiteral_3658/*"COMMON_CONFIRM_YES"*/, v23);
    sub_1BCAFF8(&StringLiteral_5636/*"EVENT_REWARD_ASSIST_SKILL_CONFIRM"*/, v24);
    byte_4B16E20 = 1;
  }
  v25 = (Il2CppObject *)sub_1BCB244(EventRewardAssistConfirmDialog___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor(v25, 0LL);
  if ( !v25 )
    goto LABEL_46;
  v25[1].klass = (Il2CppClass *)this;
  sub_1BCAF9C(&v25[1]);
  v25[1].monitor = shopEnt;
  Instance = (DataManager_o *)sub_1BCAF9C(&v25[1].monitor);
  monitor = v25[1].monitor;
  if ( !monitor )
    goto LABEL_46;
  v30 = *((_QWORD *)monitor + 7);
  if ( !v30 )
    goto LABEL_46;
  if ( !*(_DWORD *)(v30 + 24) )
    sub_1BCB25C(Instance, v27, v28);
  v31 = (Il2CppObject *)*((_QWORD *)monitor + 13);
  v32 = *(_DWORD *)(v30 + 32);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_AssistMaster___);
  if ( !Instance )
    goto LABEL_46;
  v33 = (AssistMaster_o *)Instance;
  v25[2].klass = (Il2CppClass *)AssistMaster__GetCurrentLevelEntity((AssistMaster_o *)Instance, v32, 0LL);
  v34 = (DataManager_o **)&v25[2];
  Instance = (DataManager_o *)sub_1BCAF9C(&v25[2]);
  if ( !v25[2].klass )
    goto LABEL_46;
  v25[2].monitor = AssistMaster__GetAssistEntity(v33, v32, LODWORD(v25[2].klass->_1.byval_arg.data) + 1, 0LL);
  p_monitor = (DataManager_o **)&v25[2].monitor;
  sub_1BCAF9C(&v25[2].monitor);
  this->fields.onDecide = onDecide;
  p_onDecide = &this->fields.onDecide;
  Instance = (DataManager_o *)sub_1BCAF9C(&this->fields.onDecide);
  klass = v25[2].klass;
  if ( klass && *p_monitor )
  {
    bits = klass->_1.byval_arg.bits;
    v39 = *(&klass->_1.byval_arg.bits + 1);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      bits,
                                      (const MethodInfo_32C7E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v40 = *p_monitor;
        if ( *p_monitor )
        {
          v41 = (SkillEntity_o *)Instance;
          datalist = (int32_t)v40->fields.datalist;
          datalist_high = HIDWORD(v40->fields.datalist);
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillMaster___);
            if ( Instance )
            {
              Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                            datalist,
                                            (const MethodInfo_32C7E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              if ( v41 )
              {
                skillNameLabel = (UILabel_o *)this->fields.skillNameLabel;
                v45 = (SkillEntity_o *)Instance;
                Instance = (DataManager_o *)SkillEntity__getName(v41, 0LL);
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
                      if ( !EventRewardAssistConfirmDialog_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(EventRewardAssistConfirmDialog_TypeInfo);
                      if ( v47 )
                      {
                        UILabel__SetCondensedScale(
                          v47,
                          EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH,
                          0,
                          0LL);
                        Instance = (DataManager_o *)this->fields.combineSkillNameLabel;
                        if ( Instance )
                        {
                          UILabel__SetCondensedScale(
                            (UILabel_o *)Instance,
                            EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH,
                            0,
                            0LL);
                          v48 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
                          System_Action___ctor(
                            v48,
                            v25,
                            Method_EventRewardAssistConfirmDialog___c__DisplayClass22_0__Open_b__0__,
                            0LL);
                          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                          AtlasManager__LoadEventUI(v48, 1, 0LL);
                          skillLvLabel = this->fields.skillLvLabel;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v50 = LocalizationManager__Get((System_String_o *)StringLiteral_8193/*"LEVEL_INFO"*/, 0LL);
                          v74 = v39;
                          v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74, v51, v52, v53);
                          Instance = (DataManager_o *)System_String__Format(v50, v54, 0LL);
                          if ( skillLvLabel )
                          {
                            UILabel__set_text(skillLvLabel, (System_String_o *)Instance, 0LL);
                            combineSkillLvLabel = this->fields.combineSkillLvLabel;
                            v56 = LocalizationManager__Get((System_String_o *)StringLiteral_5637/*"EVENT_REWARD_ASSIST_SKILL_LV"*/, 0LL);
                            v73 = datalist_high;
                            v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73, v57, v58, v59);
                            Instance = (DataManager_o *)System_String__Format(v56, v60, 0LL);
                            if ( combineSkillLvLabel )
                            {
                              UILabel__set_text(combineSkillLvLabel, (System_String_o *)Instance, 0LL);
                              Instance = *v34;
                              if ( *v34 )
                              {
                                skillInfoLabel = this->fields.skillInfoLabel;
                                Instance = (DataManager_o *)AssistEntity__GetDetail((AssistEntity_o *)Instance, 0, 0LL);
                                v62 = this->fields.skillInfoLabel;
                                if ( v62 )
                                {
                                  WrapControlText__textAdjust(
                                    skillInfoLabel,
                                    (System_String_o *)Instance,
                                    v62->fields.mFontSize,
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
                                    v64 = this->fields.combineSkillInfoLabel;
                                    if ( v64 )
                                    {
                                      WrapControlText__textAdjust(
                                        combineSkillInfoLabel,
                                        (System_String_o *)Instance,
                                        v64->fields.mFontSize,
                                        0,
                                        0LL);
                                      titleLabel = this->fields.titleLabel;
                                      v66 = LocalizationManager__Get((System_String_o *)StringLiteral_5640/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/, 0LL);
                                      Instance = (DataManager_o *)System_String__Format(v66, v31, 0LL);
                                      if ( titleLabel )
                                      {
                                        UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
                                        Instance = (DataManager_o *)this->fields.titleLabel;
                                        if ( Instance )
                                        {
                                          UILabel__SetCondensedScale(
                                            (UILabel_o *)Instance,
                                            EventRewardAssistConfirmDialog_TypeInfo->static_fields->TITLE_NAME_LABEL_MAX_WIDTH,
                                            0,
                                            0LL);
                                          detailMsgLabel = this->fields.detailMsgLabel;
                                          Instance = (DataManager_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_5638/*"EVENT_REWARD_ASSIST_SKILL_MSG"*/,
                                                                        0LL);
                                          v68 = this->fields.skillNameLabel;
                                          if ( v68 )
                                          {
                                            Instance = (DataManager_o *)System_String__Format(
                                                                          (System_String_o *)Instance,
                                                                          (Il2CppObject *)v68->fields.mText,
                                                                          0LL);
                                            if ( detailMsgLabel )
                                            {
                                              UILabel__set_text(detailMsgLabel, (System_String_o *)Instance, 0LL);
                                              confirmMsgLabel = this->fields.confirmMsgLabel;
                                              Instance = (DataManager_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_5636/*"EVENT_REWARD_ASSIST_SKILL_CONFIRM"*/,
                                                                            0LL);
                                              if ( confirmMsgLabel )
                                              {
                                                UILabel__set_text(confirmMsgLabel, (System_String_o *)Instance, 0LL);
                                                decideLabel = this->fields.decideLabel;
                                                Instance = (DataManager_o *)LocalizationManager__Get(
                                                                              (System_String_o *)StringLiteral_3658/*"COMMON_CONFIRM_YES"*/,
                                                                              0LL);
                                                if ( decideLabel )
                                                {
                                                  UILabel__set_text(decideLabel, (System_String_o *)Instance, 0LL);
                                                  cancelLabel = this->fields.cancelLabel;
                                                  Instance = (DataManager_o *)LocalizationManager__Get(
                                                                                (System_String_o *)StringLiteral_3653/*"COMMON_CONFIRM_NO"*/,
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
                                                      v72 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
                                                      System_Action___ctor(
                                                        v72,
                                                        (Il2CppObject *)this,
                                                        Method_EventRewardAssistConfirmDialog_EndOpen__,
                                                        0LL);
                                                      BaseDialog__Open((BaseDialog_o *)this, v72, 0, 0LL);
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
    sub_1BCB254(Instance, v27);
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
  if ( (byte_4B16E23 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_15507/*"Window/CancelButton"*/, method);
    byte_4B16E23 = 1;
  }
  return (System_String_o *)StringLiteral_15507/*"Window/CancelButton"*/;
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
  __int64 v3; // x3
  __int64 v4; // x4
  EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  struct EventRewardAssistConfirmDialog_o *_4__this; // x8
  UISprite_o *skillIcon; // x20
  struct ShopEntity_o *shopEnt; // x8
  AssistEntity_c *klass; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct AssistEntity_o *beforeAssistEnt; // x8
  Il2CppObject *v16; // x22
  Il2CppObject *v17; // x0
  System_String_o *v18; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct EventRewardAssistConfirmDialog_o *v22; // x8
  struct ShopEntity_o *v23; // x9
  UISprite_o *combineSkillIcon; // x20
  System_String_o *ASSIST_SKILL_ICON; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  struct AssistEntity_o *afterAssistEnt; // x8
  Il2CppObject *v30; // x19
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  int32_t v33; // [xsp+0h] [xbp-50h] BYREF
  int32_t v34; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t imageId; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-44h] BYREF

  v5 = this;
  if ( (byte_4B16E26 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, method);
    sub_1BCAFF8(&EventRewardAssistConfirmDialog_TypeInfo, v6);
    this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)sub_1BCAFF8(&int_TypeInfo, v7);
    byte_4B16E26 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  skillIcon = _4__this->fields.skillIcon;
  this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)EventRewardAssistConfirmDialog_TypeInfo;
  if ( !EventRewardAssistConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAssistConfirmDialog_TypeInfo);
    this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)EventRewardAssistConfirmDialog_TypeInfo;
  }
  shopEnt = v5->fields.shopEnt;
  if ( !shopEnt )
    goto LABEL_14;
  klass = this[3].fields.afterAssistEnt->klass;
  eventId = shopEnt->fields.eventId;
  this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)j_il2cpp_value_box_0(
                                                                     int_TypeInfo,
                                                                     &eventId,
                                                                     v2,
                                                                     v3,
                                                                     v4);
  beforeAssistEnt = v5->fields.beforeAssistEnt;
  if ( !beforeAssistEnt )
    goto LABEL_14;
  v16 = (Il2CppObject *)this;
  imageId = beforeAssistEnt->fields.imageId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId, v12, v13, v14);
  v18 = System_String__Format_62491716((System_String_o *)klass, v16, v17, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)AtlasManager__SetEventUI(skillIcon, v18, 0LL);
  v22 = v5->fields.__4__this;
  if ( !v22
    || (v23 = v5->fields.shopEnt) == 0LL
    || (combineSkillIcon = v22->fields.combineSkillIcon,
        ASSIST_SKILL_ICON = EventRewardAssistConfirmDialog_TypeInfo->static_fields->ASSIST_SKILL_ICON,
        v34 = v23->fields.eventId,
        this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)j_il2cpp_value_box_0(
                                                                           int_TypeInfo,
                                                                           &v34,
                                                                           v19,
                                                                           v20,
                                                                           v21),
        (afterAssistEnt = v5->fields.afterAssistEnt) == 0LL) )
  {
LABEL_14:
    sub_1BCB254(this, method);
  }
  v30 = (Il2CppObject *)this;
  v33 = afterAssistEnt->fields.imageId;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v26, v27, v28);
  v32 = System_String__Format_62491716(ASSIST_SKILL_ICON, v30, v31, 0LL);
  AtlasManager__SetEventUI(combineSkillIcon, v32, 0LL);
}