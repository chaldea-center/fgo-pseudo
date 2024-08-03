void __fastcall EventRewardAssistConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_4A0057A & 1) == 0 )
  {
    sub_1B640C8(&EventRewardAssistConfirmDialog_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_19177/*"event_skill_icon_{0}{1:D2}"*/, v4);
    byte_4A0057A = 1;
  }
  EventRewardAssistConfirmDialog_TypeInfo->static_fields->ASSIST_SKILL_ICON = (struct System_String_o *)StringLiteral_19177/*"event_skill_icon_{0}{1:D2}"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventRewardAssistConfirmDialog_TypeInfo->static_fields,
    StringLiteral_19177/*"event_skill_icon_{0}{1:D2}"*/,
    v2,
    v3);
  *(_QWORD *)&EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH = 0x26C0000010ELL;
}


void __fastcall EventRewardAssistConfirmDialog___ctor(EventRewardAssistConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A00579 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_4A00579 = 1;
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
  int32_t v4; // w2
  int32_t v5; // w3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.onDecide = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onDecide, 0, v4, v5);
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
  struct System_Action_int__o *onDecide; // x8

  if ( (byte_4A00577 & 1) == 0 )
  {
    sub_1B640C8(&Method_EventRewardAssistConfirmDialog_OnClickCancel__, method);
    byte_4A00577 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAssistConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRewardAssistConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_EventRewardAssistConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_1B64324(v5);
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
  struct System_Action_int__o *onDecide; // x8

  if ( (byte_4A00576 & 1) == 0 )
  {
    sub_1B640C8(&Method_EventRewardAssistConfirmDialog_OnClickDecide__, method);
    byte_4A00576 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAssistConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRewardAssistConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_EventRewardAssistConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_1B64324(v5);
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
  __int64 v25; // x23
  DataManager_o *Instance; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x1
  __int64 v32; // x8
  __int64 v33; // x9
  Il2CppObject *v34; // x20
  int32_t v35; // w21
  AssistMaster_o *v36; // x25
  AssistEntity_o *CurrentLevelEntity; // x0
  DataManager_o **v38; // x22
  int32_t v39; // w2
  int32_t v40; // w3
  AssistEntity_o *AssistEntity; // x0
  DataManager_o **v42; // x21
  int32_t v43; // w2
  int32_t v44; // w3
  struct System_Action_int__o **p_onDecide; // x25
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x8
  int32_t v49; // w24
  int v50; // w27
  DataManager_o *v51; // x8
  SkillEntity_o *v52; // x24
  int32_t datalist; // w25
  int datalist_high; // w28
  UILabel_o *skillNameLabel; // x26
  SkillEntity_o *v56; // x25
  UILabel_o *combineSkillNameLabel; // x24
  UILabel_o *v58; // x24
  __int64 v59; // x1
  __int64 v60; // x2
  System_Action_o *v61; // x24
  UILabel_o *skillLvLabel; // x23
  System_String_o *v63; // x24
  Il2CppObject *v64; // x0
  UILabel_o *combineSkillLvLabel; // x23
  System_String_o *v66; // x24
  Il2CppObject *v67; // x0
  UILabel_o *skillInfoLabel; // x22
  struct UILabel_o *v69; // x8
  UILabel_o *combineSkillInfoLabel; // x21
  struct UILabel_o *v71; // x8
  UILabel_o *titleLabel; // x21
  System_String_o *v73; // x0
  UILabel_o *detailMsgLabel; // x20
  struct UICrossNarrowLabel_o *v75; // x8
  UILabel_o *confirmMsgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  __int64 v79; // x1
  __int64 v80; // x2
  System_Action_o *v81; // x20
  int v82; // [xsp+8h] [xbp-68h] BYREF
  int v83; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A00575 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, shopEnt);
    sub_1B640C8(&AtlasManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_AssistMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, v9);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10);
    sub_1B640C8(&Method_EventRewardAssistConfirmDialog_EndOpen__, v11);
    sub_1B640C8(&EventRewardAssistConfirmDialog_TypeInfo, v12);
    sub_1B640C8(&int_TypeInfo, v13);
    sub_1B640C8(&LocalizationManager_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&Method_EventRewardAssistConfirmDialog___c__DisplayClass22_0__Open_b__0__, v16);
    sub_1B640C8(&EventRewardAssistConfirmDialog___c__DisplayClass22_0_TypeInfo, v17);
    sub_1B640C8(&StringLiteral_8198/*"LEVEL_INFO"*/, v18);
    sub_1B640C8(&StringLiteral_5663/*"EVENT_REWARD_ASSIST_SKILL_MSG"*/, v19);
    sub_1B640C8(&StringLiteral_5662/*"EVENT_REWARD_ASSIST_SKILL_LV"*/, v20);
    sub_1B640C8(&StringLiteral_5665/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/, v21);
    sub_1B640C8(&StringLiteral_3737/*"COMMON_CONFIRM_NO"*/, v22);
    sub_1B640C8(&StringLiteral_3740/*"COMMON_CONFIRM_YES"*/, v23);
    sub_1B640C8(&StringLiteral_5661/*"EVENT_REWARD_ASSIST_SKILL_CONFIRM"*/, v24);
    byte_4A00575 = 1;
  }
  v25 = sub_1B64314(EventRewardAssistConfirmDialog___c__DisplayClass22_0_TypeInfo, shopEnt, onDecide);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_46;
  *(_QWORD *)(v25 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 16), (int32_t)this, v27, v28);
  *(_QWORD *)(v25 + 24) = shopEnt;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 24), (int32_t)shopEnt, v29, v30);
  v32 = *(_QWORD *)(v25 + 24);
  if ( !v32 )
    goto LABEL_46;
  v33 = *(_QWORD *)(v32 + 56);
  if ( !v33 )
    goto LABEL_46;
  if ( !*(_DWORD *)(v33 + 24) )
    sub_1B6432C(Instance, v31);
  v34 = *(Il2CppObject **)(v32 + 104);
  v35 = *(_DWORD *)(v33 + 32);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_AssistMaster___);
  if ( !Instance )
    goto LABEL_46;
  v36 = (AssistMaster_o *)Instance;
  CurrentLevelEntity = AssistMaster__GetCurrentLevelEntity((AssistMaster_o *)Instance, v35, 0LL);
  *(_QWORD *)(v25 + 32) = CurrentLevelEntity;
  v38 = (DataManager_o **)(v25 + 32);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 32), (int32_t)CurrentLevelEntity, v39, v40);
  if ( !*(_QWORD *)(v25 + 32) )
    goto LABEL_46;
  AssistEntity = AssistMaster__GetAssistEntity(v36, v35, *(_DWORD *)(*(_QWORD *)(v25 + 32) + 32LL) + 1, 0LL);
  *(_QWORD *)(v25 + 40) = AssistEntity;
  v42 = (DataManager_o **)(v25 + 40);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 40), (int32_t)AssistEntity, v43, v44);
  this->fields.onDecide = onDecide;
  p_onDecide = &this->fields.onDecide;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onDecide, (int32_t)onDecide, v46, v47);
  v48 = *(_QWORD *)(v25 + 32);
  if ( v48 && *v42 )
  {
    v49 = *(_DWORD *)(v48 + 40);
    v50 = *(_DWORD *)(v48 + 44);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      v49,
                                      (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v51 = *v42;
        if ( *v42 )
        {
          v52 = (SkillEntity_o *)Instance;
          datalist = (int32_t)v51->fields.datalist;
          datalist_high = HIDWORD(v51->fields.datalist);
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
            if ( Instance )
            {
              Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                            datalist,
                                            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              if ( v52 )
              {
                skillNameLabel = (UILabel_o *)this->fields.skillNameLabel;
                v56 = (SkillEntity_o *)Instance;
                Instance = (DataManager_o *)SkillEntity__getName(v52, 0LL);
                if ( skillNameLabel )
                {
                  UILabel__set_text(skillNameLabel, (System_String_o *)Instance, 0LL);
                  if ( v56 )
                  {
                    combineSkillNameLabel = (UILabel_o *)this->fields.combineSkillNameLabel;
                    Instance = (DataManager_o *)SkillEntity__getName(v56, 0LL);
                    if ( combineSkillNameLabel )
                    {
                      UILabel__set_text(combineSkillNameLabel, (System_String_o *)Instance, 0LL);
                      v58 = (UILabel_o *)this->fields.skillNameLabel;
                      Instance = (DataManager_o *)EventRewardAssistConfirmDialog_TypeInfo;
                      if ( !EventRewardAssistConfirmDialog_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(EventRewardAssistConfirmDialog_TypeInfo);
                      if ( v58 )
                      {
                        UILabel__SetCondensedScale(
                          v58,
                          EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH,
                          0LL);
                        Instance = (DataManager_o *)this->fields.combineSkillNameLabel;
                        if ( Instance )
                        {
                          UILabel__SetCondensedScale(
                            (UILabel_o *)Instance,
                            EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH,
                            0LL);
                          v61 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v59, v60);
                          System_Action___ctor(
                            v61,
                            (Il2CppObject *)v25,
                            Method_EventRewardAssistConfirmDialog___c__DisplayClass22_0__Open_b__0__,
                            0LL);
                          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                          AtlasManager__LoadEventUI(v61, 1, 0LL);
                          skillLvLabel = this->fields.skillLvLabel;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v63 = LocalizationManager__Get((System_String_o *)StringLiteral_8198/*"LEVEL_INFO"*/, 0LL);
                          v83 = v50;
                          v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83);
                          Instance = (DataManager_o *)System_String__Format(v63, v64, 0LL);
                          if ( skillLvLabel )
                          {
                            UILabel__set_text(skillLvLabel, (System_String_o *)Instance, 0LL);
                            combineSkillLvLabel = this->fields.combineSkillLvLabel;
                            v66 = LocalizationManager__Get((System_String_o *)StringLiteral_5662/*"EVENT_REWARD_ASSIST_SKILL_LV"*/, 0LL);
                            v82 = datalist_high;
                            v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82);
                            Instance = (DataManager_o *)System_String__Format(v66, v67, 0LL);
                            if ( combineSkillLvLabel )
                            {
                              UILabel__set_text(combineSkillLvLabel, (System_String_o *)Instance, 0LL);
                              Instance = *v38;
                              if ( *v38 )
                              {
                                skillInfoLabel = this->fields.skillInfoLabel;
                                Instance = (DataManager_o *)AssistEntity__GetDetail((AssistEntity_o *)Instance, 0, 0LL);
                                v69 = this->fields.skillInfoLabel;
                                if ( v69 )
                                {
                                  WrapControlText__textAdjust(
                                    skillInfoLabel,
                                    (System_String_o *)Instance,
                                    v69->fields.mFontSize,
                                    0,
                                    0,
                                    0LL);
                                  Instance = *v42;
                                  if ( *v42 )
                                  {
                                    combineSkillInfoLabel = this->fields.combineSkillInfoLabel;
                                    Instance = (DataManager_o *)AssistEntity__GetDetail(
                                                                  (AssistEntity_o *)Instance,
                                                                  0,
                                                                  0LL);
                                    v71 = this->fields.combineSkillInfoLabel;
                                    if ( v71 )
                                    {
                                      WrapControlText__textAdjust(
                                        combineSkillInfoLabel,
                                        (System_String_o *)Instance,
                                        v71->fields.mFontSize,
                                        0,
                                        0,
                                        0LL);
                                      titleLabel = this->fields.titleLabel;
                                      v73 = LocalizationManager__Get((System_String_o *)StringLiteral_5665/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/, 0LL);
                                      Instance = (DataManager_o *)System_String__Format(v73, v34, 0LL);
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
                                                                        (System_String_o *)StringLiteral_5663/*"EVENT_REWARD_ASSIST_SKILL_MSG"*/,
                                                                        0LL);
                                          v75 = this->fields.skillNameLabel;
                                          if ( v75 )
                                          {
                                            Instance = (DataManager_o *)System_String__Format(
                                                                          (System_String_o *)Instance,
                                                                          (Il2CppObject *)v75->fields.mText,
                                                                          0LL);
                                            if ( detailMsgLabel )
                                            {
                                              UILabel__set_text(detailMsgLabel, (System_String_o *)Instance, 0LL);
                                              confirmMsgLabel = this->fields.confirmMsgLabel;
                                              Instance = (DataManager_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_5661/*"EVENT_REWARD_ASSIST_SKILL_CONFIRM"*/,
                                                                            0LL);
                                              if ( confirmMsgLabel )
                                              {
                                                UILabel__set_text(confirmMsgLabel, (System_String_o *)Instance, 0LL);
                                                decideLabel = this->fields.decideLabel;
                                                Instance = (DataManager_o *)LocalizationManager__Get(
                                                                              (System_String_o *)StringLiteral_3740/*"COMMON_CONFIRM_YES"*/,
                                                                              0LL);
                                                if ( decideLabel )
                                                {
                                                  UILabel__set_text(decideLabel, (System_String_o *)Instance, 0LL);
                                                  cancelLabel = this->fields.cancelLabel;
                                                  Instance = (DataManager_o *)LocalizationManager__Get(
                                                                                (System_String_o *)StringLiteral_3737/*"COMMON_CONFIRM_NO"*/,
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
                                                      v81 = (System_Action_o *)sub_1B64314(
                                                                                 System_Action_TypeInfo,
                                                                                 v79,
                                                                                 v80);
                                                      System_Action___ctor(
                                                        v81,
                                                        (Il2CppObject *)this,
                                                        Method_EventRewardAssistConfirmDialog_EndOpen__,
                                                        0LL);
                                                      BaseDialog__Open((BaseDialog_o *)this, v81, 0, 0LL);
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
    sub_1B64324(Instance);
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
  if ( (byte_4A00578 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15573/*"Window/CancelButton"*/, method);
    byte_4A00578 = 1;
  }
  return (System_String_o *)StringLiteral_15573/*"Window/CancelButton"*/;
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
  AssistEntity_c *klass; // x21
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
  int32_t v21; // [xsp+0h] [xbp-50h] BYREF
  int32_t v22; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t imageId; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-44h] BYREF

  v2 = this;
  if ( (byte_4A0057B & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&EventRewardAssistConfirmDialog_TypeInfo, v3);
    this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)sub_1B640C8(&int_TypeInfo, v4);
    byte_4A0057B = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  skillIcon = _4__this->fields.skillIcon;
  this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)EventRewardAssistConfirmDialog_TypeInfo;
  if ( !EventRewardAssistConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardAssistConfirmDialog_TypeInfo);
    this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)EventRewardAssistConfirmDialog_TypeInfo;
  }
  shopEnt = v2->fields.shopEnt;
  if ( !shopEnt )
    goto LABEL_14;
  klass = this[3].fields.afterAssistEnt->klass;
  eventId = shopEnt->fields.eventId;
  this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  beforeAssistEnt = v2->fields.beforeAssistEnt;
  if ( !beforeAssistEnt )
    goto LABEL_14;
  v10 = (Il2CppObject *)this;
  imageId = beforeAssistEnt->fields.imageId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId);
  v12 = System_String__Format_61389768((System_String_o *)klass, v10, v11, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
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
LABEL_14:
    sub_1B64324(this);
  }
  v18 = (Il2CppObject *)this;
  v21 = afterAssistEnt->fields.imageId;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v20 = System_String__Format_61389768(ASSIST_SKILL_ICON, v18, v19, 0LL);
  AtlasManager__SetEventUI(combineSkillIcon, v20, 0LL);
}