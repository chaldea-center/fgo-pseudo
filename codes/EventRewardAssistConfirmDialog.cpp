void __fastcall EventRewardAssistConfirmDialog___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A5F366 & 1) == 0 )
  {
    sub_1B885B0(&EventRewardAssistConfirmDialog_TypeInfo);
    sub_1B885B0(&StringLiteral_19254/*"event_skill_icon_{0}{1:D2}"*/);
    byte_4A5F366 = 1;
  }
  EventRewardAssistConfirmDialog_TypeInfo->static_fields->ASSIST_SKILL_ICON = (struct System_String_o *)StringLiteral_19254/*"event_skill_icon_{0}{1:D2}"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventRewardAssistConfirmDialog_TypeInfo->static_fields,
    StringLiteral_19254/*"event_skill_icon_{0}{1:D2}"*/,
    v1,
    v2);
  *(_QWORD *)&EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH = 0x26C0000010ELL;
}


void __fastcall EventRewardAssistConfirmDialog___ctor(EventRewardAssistConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A5F365 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5F365 = 1;
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
  int32_t v5; // w2
  int32_t v6; // w3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.onDecide = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onDecide, 0, v5, v6);
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

  if ( (byte_4A5F363 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventRewardAssistConfirmDialog_OnClickCancel__);
    byte_4A5F363 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAssistConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRewardAssistConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventRewardAssistConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_1B8880C(v5, v6);
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

  if ( (byte_4A5F362 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventRewardAssistConfirmDialog_OnClickDecide__);
    byte_4A5F362 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAssistConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRewardAssistConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventRewardAssistConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_1B8880C(v5, v6);
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
  __int64 v7; // x23
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x8
  __int64 v15; // x9
  Il2CppObject *v16; // x20
  int32_t v17; // w21
  AssistMaster_o *v18; // x25
  AssistEntity_o *CurrentLevelEntity; // x0
  DataManager_o **v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  AssistEntity_o *AssistEntity; // x0
  DataManager_o **v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Action_int__o **p_onDecide; // x25
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x8
  int32_t v31; // w24
  int v32; // w27
  DataManager_o *v33; // x8
  SkillEntity_o *v34; // x24
  int32_t datalist; // w25
  int datalist_high; // w28
  UILabel_o *skillNameLabel; // x26
  SkillEntity_o *v38; // x25
  UILabel_o *combineSkillNameLabel; // x24
  UILabel_o *v40; // x24
  System_Action_o *v41; // x24
  UILabel_o *skillLvLabel; // x23
  System_String_o *v43; // x24
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  Il2CppObject *v47; // x0
  UILabel_o *combineSkillLvLabel; // x23
  System_String_o *v49; // x24
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  Il2CppObject *v53; // x0
  UILabel_o *skillInfoLabel; // x22
  struct UILabel_o *v55; // x8
  UILabel_o *combineSkillInfoLabel; // x21
  struct UILabel_o *v57; // x8
  UILabel_o *titleLabel; // x21
  System_String_o *v59; // x0
  UILabel_o *detailMsgLabel; // x20
  struct UICrossNarrowLabel_o *v61; // x8
  UILabel_o *confirmMsgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v65; // x20
  int v66; // [xsp+8h] [xbp-68h] BYREF
  int v67; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A5F361 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_AssistMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&Method_EventRewardAssistConfirmDialog_EndOpen__);
    sub_1B885B0(&EventRewardAssistConfirmDialog_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventRewardAssistConfirmDialog___c__DisplayClass22_0__Open_b__0__);
    sub_1B885B0(&EventRewardAssistConfirmDialog___c__DisplayClass22_0_TypeInfo);
    sub_1B885B0(&StringLiteral_8236/*"LEVEL_INFO"*/);
    sub_1B885B0(&StringLiteral_5689/*"EVENT_REWARD_ASSIST_SKILL_MSG"*/);
    sub_1B885B0(&StringLiteral_5688/*"EVENT_REWARD_ASSIST_SKILL_LV"*/);
    sub_1B885B0(&StringLiteral_5691/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/);
    sub_1B885B0(&StringLiteral_3759/*"COMMON_CONFIRM_NO"*/);
    sub_1B885B0(&StringLiteral_3763/*"COMMON_CONFIRM_YES"*/);
    sub_1B885B0(&StringLiteral_5687/*"EVENT_REWARD_ASSIST_SKILL_CONFIRM"*/);
    byte_4A5F361 = 1;
  }
  v7 = sub_1B887FC(EventRewardAssistConfirmDialog___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_46;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = shopEnt;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)shopEnt, v12, v13);
  v14 = *(_QWORD *)(v7 + 24);
  if ( !v14 )
    goto LABEL_46;
  v15 = *(_QWORD *)(v14 + 56);
  if ( !v15 )
    goto LABEL_46;
  if ( !*(_DWORD *)(v15 + 24) )
    sub_1B88814(Instance, v9);
  v16 = *(Il2CppObject **)(v14 + 104);
  v17 = *(_DWORD *)(v15 + 32);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_AssistMaster___);
  if ( !Instance )
    goto LABEL_46;
  v18 = (AssistMaster_o *)Instance;
  CurrentLevelEntity = AssistMaster__GetCurrentLevelEntity((AssistMaster_o *)Instance, v17, 0LL);
  *(_QWORD *)(v7 + 32) = CurrentLevelEntity;
  v20 = (DataManager_o **)(v7 + 32);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)CurrentLevelEntity, v21, v22);
  if ( !*(_QWORD *)(v7 + 32) )
    goto LABEL_46;
  AssistEntity = AssistMaster__GetAssistEntity(v18, v17, *(_DWORD *)(*(_QWORD *)(v7 + 32) + 32LL) + 1, 0LL);
  *(_QWORD *)(v7 + 40) = AssistEntity;
  v24 = (DataManager_o **)(v7 + 40);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)AssistEntity, v25, v26);
  this->fields.onDecide = onDecide;
  p_onDecide = &this->fields.onDecide;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onDecide, (int32_t)onDecide, v28, v29);
  v30 = *(_QWORD *)(v7 + 32);
  if ( v30 && *v24 )
  {
    v31 = *(_DWORD *)(v30 + 40);
    v32 = *(_DWORD *)(v30 + 44);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      v31,
                                      (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v33 = *v24;
        if ( *v24 )
        {
          v34 = (SkillEntity_o *)Instance;
          datalist = (int32_t)v33->fields.datalist;
          datalist_high = HIDWORD(v33->fields.datalist);
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
            if ( Instance )
            {
              Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                            datalist,
                                            (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              if ( v34 )
              {
                skillNameLabel = (UILabel_o *)this->fields.skillNameLabel;
                v38 = (SkillEntity_o *)Instance;
                Instance = (DataManager_o *)SkillEntity__getName(v34, 0LL);
                if ( skillNameLabel )
                {
                  UILabel__set_text(skillNameLabel, (System_String_o *)Instance, 0LL);
                  if ( v38 )
                  {
                    combineSkillNameLabel = (UILabel_o *)this->fields.combineSkillNameLabel;
                    Instance = (DataManager_o *)SkillEntity__getName(v38, 0LL);
                    if ( combineSkillNameLabel )
                    {
                      UILabel__set_text(combineSkillNameLabel, (System_String_o *)Instance, 0LL);
                      v40 = (UILabel_o *)this->fields.skillNameLabel;
                      Instance = (DataManager_o *)EventRewardAssistConfirmDialog_TypeInfo;
                      if ( !EventRewardAssistConfirmDialog_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(EventRewardAssistConfirmDialog_TypeInfo);
                      if ( v40 )
                      {
                        UILabel__SetCondensedScale(
                          v40,
                          EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH,
                          0LL);
                        Instance = (DataManager_o *)this->fields.combineSkillNameLabel;
                        if ( Instance )
                        {
                          UILabel__SetCondensedScale(
                            (UILabel_o *)Instance,
                            EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH,
                            0LL);
                          v41 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                          System_Action___ctor(
                            v41,
                            (Il2CppObject *)v7,
                            Method_EventRewardAssistConfirmDialog___c__DisplayClass22_0__Open_b__0__,
                            0LL);
                          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                          AtlasManager__LoadEventUI(v41, 1, 0LL);
                          skillLvLabel = this->fields.skillLvLabel;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v43 = LocalizationManager__Get((System_String_o *)StringLiteral_8236/*"LEVEL_INFO"*/, 0LL);
                          v67 = v32;
                          v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67, v44, v45, v46);
                          Instance = (DataManager_o *)System_String__Format(v43, v47, 0LL);
                          if ( skillLvLabel )
                          {
                            UILabel__set_text(skillLvLabel, (System_String_o *)Instance, 0LL);
                            combineSkillLvLabel = this->fields.combineSkillLvLabel;
                            v49 = LocalizationManager__Get((System_String_o *)StringLiteral_5688/*"EVENT_REWARD_ASSIST_SKILL_LV"*/, 0LL);
                            v66 = datalist_high;
                            v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66, v50, v51, v52);
                            Instance = (DataManager_o *)System_String__Format(v49, v53, 0LL);
                            if ( combineSkillLvLabel )
                            {
                              UILabel__set_text(combineSkillLvLabel, (System_String_o *)Instance, 0LL);
                              Instance = *v20;
                              if ( *v20 )
                              {
                                skillInfoLabel = this->fields.skillInfoLabel;
                                Instance = (DataManager_o *)AssistEntity__GetDetail((AssistEntity_o *)Instance, 0, 0LL);
                                v55 = this->fields.skillInfoLabel;
                                if ( v55 )
                                {
                                  WrapControlText__textAdjust(
                                    skillInfoLabel,
                                    (System_String_o *)Instance,
                                    v55->fields.mFontSize,
                                    0,
                                    0,
                                    0LL);
                                  Instance = *v24;
                                  if ( *v24 )
                                  {
                                    combineSkillInfoLabel = this->fields.combineSkillInfoLabel;
                                    Instance = (DataManager_o *)AssistEntity__GetDetail(
                                                                  (AssistEntity_o *)Instance,
                                                                  0,
                                                                  0LL);
                                    v57 = this->fields.combineSkillInfoLabel;
                                    if ( v57 )
                                    {
                                      WrapControlText__textAdjust(
                                        combineSkillInfoLabel,
                                        (System_String_o *)Instance,
                                        v57->fields.mFontSize,
                                        0,
                                        0,
                                        0LL);
                                      titleLabel = this->fields.titleLabel;
                                      v59 = LocalizationManager__Get((System_String_o *)StringLiteral_5691/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/, 0LL);
                                      Instance = (DataManager_o *)System_String__Format(v59, v16, 0LL);
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
                                                                        (System_String_o *)StringLiteral_5689/*"EVENT_REWARD_ASSIST_SKILL_MSG"*/,
                                                                        0LL);
                                          v61 = this->fields.skillNameLabel;
                                          if ( v61 )
                                          {
                                            Instance = (DataManager_o *)System_String__Format(
                                                                          (System_String_o *)Instance,
                                                                          (Il2CppObject *)v61->fields.mText,
                                                                          0LL);
                                            if ( detailMsgLabel )
                                            {
                                              UILabel__set_text(detailMsgLabel, (System_String_o *)Instance, 0LL);
                                              confirmMsgLabel = this->fields.confirmMsgLabel;
                                              Instance = (DataManager_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_5687/*"EVENT_REWARD_ASSIST_SKILL_CONFIRM"*/,
                                                                            0LL);
                                              if ( confirmMsgLabel )
                                              {
                                                UILabel__set_text(confirmMsgLabel, (System_String_o *)Instance, 0LL);
                                                decideLabel = this->fields.decideLabel;
                                                Instance = (DataManager_o *)LocalizationManager__Get(
                                                                              (System_String_o *)StringLiteral_3763/*"COMMON_CONFIRM_YES"*/,
                                                                              0LL);
                                                if ( decideLabel )
                                                {
                                                  UILabel__set_text(decideLabel, (System_String_o *)Instance, 0LL);
                                                  cancelLabel = this->fields.cancelLabel;
                                                  Instance = (DataManager_o *)LocalizationManager__Get(
                                                                                (System_String_o *)StringLiteral_3759/*"COMMON_CONFIRM_NO"*/,
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
                                                      v65 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                                                      System_Action___ctor(
                                                        v65,
                                                        (Il2CppObject *)this,
                                                        Method_EventRewardAssistConfirmDialog_EndOpen__,
                                                        0LL);
                                                      BaseDialog__Open((BaseDialog_o *)this, v65, 0, 0LL);
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
    sub_1B8880C(Instance, v9);
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
  if ( (byte_4A5F364 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15641/*"Window/CancelButton"*/);
    byte_4A5F364 = 1;
  }
  return (System_String_o *)StringLiteral_15641/*"Window/CancelButton"*/;
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
  struct EventRewardAssistConfirmDialog_o *_4__this; // x8
  UISprite_o *skillIcon; // x20
  struct ShopEntity_o *shopEnt; // x8
  AssistEntity_c *klass; // x21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  struct AssistEntity_o *beforeAssistEnt; // x8
  Il2CppObject *v14; // x22
  Il2CppObject *v15; // x0
  System_String_o *v16; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  struct EventRewardAssistConfirmDialog_o *v20; // x8
  struct ShopEntity_o *v21; // x9
  UISprite_o *combineSkillIcon; // x20
  System_String_o *ASSIST_SKILL_ICON; // x21
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  struct AssistEntity_o *afterAssistEnt; // x8
  Il2CppObject *v28; // x19
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  int32_t v31; // [xsp+0h] [xbp-50h] BYREF
  int32_t v32; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t imageId; // [xsp+8h] [xbp-48h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-44h] BYREF

  v5 = this;
  if ( (byte_4A5F367 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&EventRewardAssistConfirmDialog_TypeInfo);
    this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)sub_1B885B0(&int_TypeInfo);
    byte_4A5F367 = 1;
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
  v14 = (Il2CppObject *)this;
  imageId = beforeAssistEnt->fields.imageId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &imageId, v10, v11, v12);
  v16 = System_String__Format_61721404((System_String_o *)klass, v14, v15, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)AtlasManager__SetEventUI(skillIcon, v16, 0LL);
  v20 = v5->fields.__4__this;
  if ( !v20
    || (v21 = v5->fields.shopEnt) == 0LL
    || (combineSkillIcon = v20->fields.combineSkillIcon,
        ASSIST_SKILL_ICON = EventRewardAssistConfirmDialog_TypeInfo->static_fields->ASSIST_SKILL_ICON,
        v32 = v21->fields.eventId,
        this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)j_il2cpp_value_box_0(
                                                                           int_TypeInfo,
                                                                           &v32,
                                                                           v17,
                                                                           v18,
                                                                           v19),
        (afterAssistEnt = v5->fields.afterAssistEnt) == 0LL) )
  {
LABEL_14:
    sub_1B8880C(this, method);
  }
  v28 = (Il2CppObject *)this;
  v31 = afterAssistEnt->fields.imageId;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v24, v25, v26);
  v30 = System_String__Format_61721404(ASSIST_SKILL_ICON, v28, v29, 0LL);
  AtlasManager__SetEventUI(combineSkillIcon, v30, 0LL);
}