void __fastcall EventRewardAssistConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_4A3210D & 1) == 0 )
  {
    sub_1B761C0(&EventRewardAssistConfirmDialog_TypeInfo, v1);
    sub_1B761C0(&StringLiteral_19248/*"event_skill_icon_{0}{1:D2}"*/, v4);
    byte_4A3210D = 1;
  }
  EventRewardAssistConfirmDialog_TypeInfo->static_fields->ASSIST_SKILL_ICON = (struct System_String_o *)StringLiteral_19248/*"event_skill_icon_{0}{1:D2}"*/;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)EventRewardAssistConfirmDialog_TypeInfo->static_fields,
    StringLiteral_19248/*"event_skill_icon_{0}{1:D2}"*/,
    v2,
    v3);
  *(_QWORD *)&EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH = 0x26C0000010ELL;
}


void __fastcall EventRewardAssistConfirmDialog___ctor(EventRewardAssistConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A3210C & 1) == 0 )
  {
    sub_1B761C0(&BaseDialog_TypeInfo, method);
    byte_4A3210C = 1;
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
    sub_1B7641C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.onDecide = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.onDecide, 0, v5, v6);
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

  if ( (byte_4A3210A & 1) == 0 )
  {
    sub_1B761C0(&Method_EventRewardAssistConfirmDialog_OnClickCancel__, method);
    byte_4A3210A = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAssistConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRewardAssistConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B761D8(Method_EventRewardAssistConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B761A4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_1B7641C(v5, v6);
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

  if ( (byte_4A32109 & 1) == 0 )
  {
    sub_1B761C0(&Method_EventRewardAssistConfirmDialog_OnClickDecide__, method);
    byte_4A32109 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAssistConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRewardAssistConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B761D8(Method_EventRewardAssistConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B761A4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_1B7641C(v5, v6);
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
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
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
  System_Action_o *v59; // x24
  UILabel_o *skillLvLabel; // x23
  System_String_o *v61; // x24
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  Il2CppObject *v65; // x0
  UILabel_o *combineSkillLvLabel; // x23
  System_String_o *v67; // x24
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  Il2CppObject *v71; // x0
  UILabel_o *skillInfoLabel; // x22
  struct UILabel_o *v73; // x8
  UILabel_o *combineSkillInfoLabel; // x21
  struct UILabel_o *v75; // x8
  UILabel_o *titleLabel; // x21
  System_String_o *v77; // x0
  UILabel_o *detailMsgLabel; // x20
  struct UICrossNarrowLabel_o *v79; // x8
  UILabel_o *confirmMsgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v83; // x20
  int v84; // [xsp+8h] [xbp-68h] BYREF
  int v85; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A32108 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, shopEnt);
    sub_1B761C0(&AtlasManager_TypeInfo, v7);
    sub_1B761C0(&Method_DataManager_GetMasterData_AssistMaster___, v8);
    sub_1B761C0(&Method_DataManager_GetMasterData_SkillMaster___, v9);
    sub_1B761C0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v10);
    sub_1B761C0(&Method_EventRewardAssistConfirmDialog_EndOpen__, v11);
    sub_1B761C0(&EventRewardAssistConfirmDialog_TypeInfo, v12);
    sub_1B761C0(&int_TypeInfo, v13);
    sub_1B761C0(&LocalizationManager_TypeInfo, v14);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B761C0(&Method_EventRewardAssistConfirmDialog___c__DisplayClass22_0__Open_b__0__, v16);
    sub_1B761C0(&EventRewardAssistConfirmDialog___c__DisplayClass22_0_TypeInfo, v17);
    sub_1B761C0(&StringLiteral_8235/*"LEVEL_INFO"*/, v18);
    sub_1B761C0(&StringLiteral_5688/*"EVENT_REWARD_ASSIST_SKILL_MSG"*/, v19);
    sub_1B761C0(&StringLiteral_5687/*"EVENT_REWARD_ASSIST_SKILL_LV"*/, v20);
    sub_1B761C0(&StringLiteral_5690/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/, v21);
    sub_1B761C0(&StringLiteral_3758/*"COMMON_CONFIRM_NO"*/, v22);
    sub_1B761C0(&StringLiteral_3762/*"COMMON_CONFIRM_YES"*/, v23);
    sub_1B761C0(&StringLiteral_5686/*"EVENT_REWARD_ASSIST_SKILL_CONFIRM"*/, v24);
    byte_4A32108 = 1;
  }
  v25 = sub_1B7640C(EventRewardAssistConfirmDialog___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_46;
  *(_QWORD *)(v25 + 16) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v25 + 16), (int32_t)this, v28, v29);
  *(_QWORD *)(v25 + 24) = shopEnt;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v25 + 24), (int32_t)shopEnt, v30, v31);
  v32 = *(_QWORD *)(v25 + 24);
  if ( !v32 )
    goto LABEL_46;
  v33 = *(_QWORD *)(v32 + 56);
  if ( !v33 )
    goto LABEL_46;
  if ( !*(_DWORD *)(v33 + 24) )
    sub_1B76424(Instance, v27);
  v34 = *(Il2CppObject **)(v32 + 104);
  v35 = *(_DWORD *)(v33 + 32);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_AssistMaster___);
  if ( !Instance )
    goto LABEL_46;
  v36 = (AssistMaster_o *)Instance;
  CurrentLevelEntity = AssistMaster__GetCurrentLevelEntity((AssistMaster_o *)Instance, v35, 0LL);
  *(_QWORD *)(v25 + 32) = CurrentLevelEntity;
  v38 = (DataManager_o **)(v25 + 32);
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v25 + 32), (int32_t)CurrentLevelEntity, v39, v40);
  if ( !*(_QWORD *)(v25 + 32) )
    goto LABEL_46;
  AssistEntity = AssistMaster__GetAssistEntity(v36, v35, *(_DWORD *)(*(_QWORD *)(v25 + 32) + 32LL) + 1, 0LL);
  *(_QWORD *)(v25 + 40) = AssistEntity;
  v42 = (DataManager_o **)(v25 + 40);
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v25 + 40), (int32_t)AssistEntity, v43, v44);
  this->fields.onDecide = onDecide;
  p_onDecide = &this->fields.onDecide;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.onDecide, (int32_t)onDecide, v46, v47);
  v48 = *(_QWORD *)(v25 + 32);
  if ( v48 && *v42 )
  {
    v49 = *(_DWORD *)(v48 + 40);
    v50 = *(_DWORD *)(v48 + 44);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      v49,
                                      (const MethodInfo_30FF780 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v51 = *v42;
        if ( *v42 )
        {
          v52 = (SkillEntity_o *)Instance;
          datalist = (int32_t)v51->fields.datalist;
          datalist_high = HIDWORD(v51->fields.datalist);
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_SkillMaster___);
            if ( Instance )
            {
              Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                            datalist,
                                            (const MethodInfo_30FF780 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
                          v59 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
                          System_Action___ctor(
                            v59,
                            (Il2CppObject *)v25,
                            Method_EventRewardAssistConfirmDialog___c__DisplayClass22_0__Open_b__0__,
                            0LL);
                          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                          AtlasManager__LoadEventUI(v59, 1, 0LL);
                          skillLvLabel = this->fields.skillLvLabel;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v61 = LocalizationManager__Get((System_String_o *)StringLiteral_8235/*"LEVEL_INFO"*/, 0LL);
                          v85 = v50;
                          v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v85, v62, v63, v64);
                          Instance = (DataManager_o *)System_String__Format(v61, v65, 0LL);
                          if ( skillLvLabel )
                          {
                            UILabel__set_text(skillLvLabel, (System_String_o *)Instance, 0LL);
                            combineSkillLvLabel = this->fields.combineSkillLvLabel;
                            v67 = LocalizationManager__Get((System_String_o *)StringLiteral_5687/*"EVENT_REWARD_ASSIST_SKILL_LV"*/, 0LL);
                            v84 = datalist_high;
                            v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v84, v68, v69, v70);
                            Instance = (DataManager_o *)System_String__Format(v67, v71, 0LL);
                            if ( combineSkillLvLabel )
                            {
                              UILabel__set_text(combineSkillLvLabel, (System_String_o *)Instance, 0LL);
                              Instance = *v38;
                              if ( *v38 )
                              {
                                skillInfoLabel = this->fields.skillInfoLabel;
                                Instance = (DataManager_o *)AssistEntity__GetDetail((AssistEntity_o *)Instance, 0, 0LL);
                                v73 = this->fields.skillInfoLabel;
                                if ( v73 )
                                {
                                  WrapControlText__textAdjust(
                                    skillInfoLabel,
                                    (System_String_o *)Instance,
                                    v73->fields.mFontSize,
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
                                    v75 = this->fields.combineSkillInfoLabel;
                                    if ( v75 )
                                    {
                                      WrapControlText__textAdjust(
                                        combineSkillInfoLabel,
                                        (System_String_o *)Instance,
                                        v75->fields.mFontSize,
                                        0,
                                        0,
                                        0LL);
                                      titleLabel = this->fields.titleLabel;
                                      v77 = LocalizationManager__Get((System_String_o *)StringLiteral_5690/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/, 0LL);
                                      Instance = (DataManager_o *)System_String__Format(v77, v34, 0LL);
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
                                                                        (System_String_o *)StringLiteral_5688/*"EVENT_REWARD_ASSIST_SKILL_MSG"*/,
                                                                        0LL);
                                          v79 = this->fields.skillNameLabel;
                                          if ( v79 )
                                          {
                                            Instance = (DataManager_o *)System_String__Format(
                                                                          (System_String_o *)Instance,
                                                                          (Il2CppObject *)v79->fields.mText,
                                                                          0LL);
                                            if ( detailMsgLabel )
                                            {
                                              UILabel__set_text(detailMsgLabel, (System_String_o *)Instance, 0LL);
                                              confirmMsgLabel = this->fields.confirmMsgLabel;
                                              Instance = (DataManager_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_5686/*"EVENT_REWARD_ASSIST_SKILL_CONFIRM"*/,
                                                                            0LL);
                                              if ( confirmMsgLabel )
                                              {
                                                UILabel__set_text(confirmMsgLabel, (System_String_o *)Instance, 0LL);
                                                decideLabel = this->fields.decideLabel;
                                                Instance = (DataManager_o *)LocalizationManager__Get(
                                                                              (System_String_o *)StringLiteral_3762/*"COMMON_CONFIRM_YES"*/,
                                                                              0LL);
                                                if ( decideLabel )
                                                {
                                                  UILabel__set_text(decideLabel, (System_String_o *)Instance, 0LL);
                                                  cancelLabel = this->fields.cancelLabel;
                                                  Instance = (DataManager_o *)LocalizationManager__Get(
                                                                                (System_String_o *)StringLiteral_3758/*"COMMON_CONFIRM_NO"*/,
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
                                                      v83 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
                                                      System_Action___ctor(
                                                        v83,
                                                        (Il2CppObject *)this,
                                                        Method_EventRewardAssistConfirmDialog_EndOpen__,
                                                        0LL);
                                                      BaseDialog__Open((BaseDialog_o *)this, v83, 0, 0LL);
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
    sub_1B7641C(Instance, v27);
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
  if ( (byte_4A3210B & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_15635/*"Window/CancelButton"*/, method);
    byte_4A3210B = 1;
  }
  return (System_String_o *)StringLiteral_15635/*"Window/CancelButton"*/;
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
  if ( (byte_4A3210E & 1) == 0 )
  {
    sub_1B761C0(&AtlasManager_TypeInfo, method);
    sub_1B761C0(&EventRewardAssistConfirmDialog_TypeInfo, v6);
    this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)sub_1B761C0(&int_TypeInfo, v7);
    byte_4A3210E = 1;
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
  v18 = System_String__Format_61549432((System_String_o *)klass, v16, v17, 0LL);
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
    sub_1B7641C(this, method);
  }
  v30 = (Il2CppObject *)this;
  v33 = afterAssistEnt->fields.imageId;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v26, v27, v28);
  v32 = System_String__Format_61549432(ASSIST_SKILL_ICON, v30, v31, 0LL);
  AtlasManager__SetEventUI(combineSkillIcon, v32, 0LL);
}