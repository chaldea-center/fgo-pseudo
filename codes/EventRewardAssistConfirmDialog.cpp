void EventRewardAssistConfirmDialog___cctor(const MethodInfo *method)
{
  if ( (byte_4C21B25 & 1) == 0 )
  {
    sub_1C2D490(&EventRewardAssistConfirmDialog_TypeInfo);
    sub_1C2D490(&StringLiteral_19261/*"event_skill_icon_{0}{1:D2}"*/);
    byte_4C21B25 = 1;
  }
  EventRewardAssistConfirmDialog_TypeInfo->static_fields->ASSIST_SKILL_ICON = (struct System_String_o *)StringLiteral_19261/*"event_skill_icon_{0}{1:D2}"*/;
  sub_1C2D434(EventRewardAssistConfirmDialog_TypeInfo->static_fields);
  *(_QWORD *)&EventRewardAssistConfirmDialog_TypeInfo->static_fields->SKILL_NAME_LABEL_MAX_WIDTH = 0x26C0000010ELL;
}


void EventRewardAssistConfirmDialog___ctor(EventRewardAssistConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C21B24 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C21B24 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.onDecide = 0;
  sub_1C2D434(&this->fields.onDecide);
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

  if ( (byte_4C21B22 & 1) == 0 )
  {
    sub_1C2D490(&Method_EventRewardAssistConfirmDialog_OnClickCancel__);
    byte_4C21B22 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAssistConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_EventRewardAssistConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_EventRewardAssistConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_1C2D6EC(v5, v6);
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

  if ( (byte_4C21B21 & 1) == 0 )
  {
    sub_1C2D490(&Method_EventRewardAssistConfirmDialog_OnClickDecide__);
    byte_4C21B21 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_EventRewardAssistConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_EventRewardAssistConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_EventRewardAssistConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    onDecide = this->fields.onDecide;
    this->fields.state = 0;
    if ( !onDecide )
      sub_1C2D6EC(v5, v6);
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
  Il2CppObject *v7; // x23
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  void *monitor; // x8
  __int64 v12; // x9
  Il2CppObject *v13; // x20
  int32_t v14; // w21
  AssistMaster_o *v15; // x25
  DataManager_o **v16; // x22
  DataManager_o **p_monitor; // x21
  struct System_Action_int__o **p_onDecide; // x25
  Il2CppClass *klass; // x8
  int32_t bits; // w24
  int v21; // w27
  DataManager_o *v22; // x8
  SkillEntity_o *v23; // x24
  int32_t datalist; // w25
  int datalist_high; // w28
  UILabel_o *skillNameLabel; // x26
  SkillEntity_o *v27; // x25
  UILabel_o *combineSkillNameLabel; // x24
  UILabel_o *v29; // x24
  System_Action_o *v30; // x24
  UILabel_o *skillLvLabel; // x23
  System_String_o *v32; // x24
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x0
  UILabel_o *combineSkillLvLabel; // x23
  System_String_o *v38; // x24
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  UILabel_o *skillInfoLabel; // x22
  struct UILabel_o *v44; // x8
  UILabel_o *combineSkillInfoLabel; // x21
  struct UILabel_o *v46; // x8
  UILabel_o *titleLabel; // x21
  System_String_o *v48; // x0
  UILabel_o *detailMsgLabel; // x20
  struct UICrossNarrowLabel_o *v50; // x8
  UILabel_o *confirmMsgLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v54; // x20
  int v55; // [xsp+8h] [xbp-68h] BYREF
  int v56; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C21B20 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_AssistMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C2D490(&Method_EventRewardAssistConfirmDialog_EndOpen__);
    sub_1C2D490(&EventRewardAssistConfirmDialog_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_EventRewardAssistConfirmDialog___c__DisplayClass22_0__Open_b__0__);
    sub_1C2D490(&EventRewardAssistConfirmDialog___c__DisplayClass22_0_TypeInfo);
    sub_1C2D490(&StringLiteral_8256/*"LEVEL_INFO"*/);
    sub_1C2D490(&StringLiteral_5675/*"EVENT_REWARD_ASSIST_SKILL_MSG"*/);
    sub_1C2D490(&StringLiteral_5674/*"EVENT_REWARD_ASSIST_SKILL_LV"*/);
    sub_1C2D490(&StringLiteral_5677/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/);
    sub_1C2D490(&StringLiteral_3681/*"COMMON_CONFIRM_NO"*/);
    sub_1C2D490(&StringLiteral_3686/*"COMMON_CONFIRM_YES"*/);
    sub_1C2D490(&StringLiteral_5673/*"EVENT_REWARD_ASSIST_SKILL_CONFIRM"*/);
    byte_4C21B20 = 1;
  }
  v7 = (Il2CppObject *)sub_1C2D6DC(EventRewardAssistConfirmDialog___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_46;
  v7[1].klass = (Il2CppClass *)this;
  sub_1C2D434(&v7[1]);
  v7[1].monitor = shopEnt;
  Instance = (DataManager_o *)sub_1C2D434(&v7[1].monitor);
  monitor = v7[1].monitor;
  if ( !monitor )
    goto LABEL_46;
  v12 = *((_QWORD *)monitor + 7);
  if ( !v12 )
    goto LABEL_46;
  if ( !*(_DWORD *)(v12 + 24) )
    sub_1C2D6F4(Instance, v9, v10);
  v13 = (Il2CppObject *)*((_QWORD *)monitor + 13);
  v14 = *(_DWORD *)(v12 + 32);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_AssistMaster___);
  if ( !Instance )
    goto LABEL_46;
  v15 = (AssistMaster_o *)Instance;
  v7[2].klass = (Il2CppClass *)AssistMaster__GetCurrentLevelEntity((AssistMaster_o *)Instance, v14, 0);
  v16 = (DataManager_o **)&v7[2];
  Instance = (DataManager_o *)sub_1C2D434(&v7[2]);
  if ( !v7[2].klass )
    goto LABEL_46;
  v7[2].monitor = AssistMaster__GetAssistEntity(v15, v14, LODWORD(v7[2].klass->_1.byval_arg.data) + 1, 0);
  p_monitor = (DataManager_o **)&v7[2].monitor;
  sub_1C2D434(&v7[2].monitor);
  this->fields.onDecide = onDecide;
  p_onDecide = &this->fields.onDecide;
  Instance = (DataManager_o *)sub_1C2D434(&this->fields.onDecide);
  klass = v7[2].klass;
  if ( klass && *p_monitor )
  {
    bits = klass->_1.byval_arg.bits;
    v21 = *(&klass->_1.byval_arg.bits + 1);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      bits,
                                      (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v22 = *p_monitor;
        if ( *p_monitor )
        {
          v23 = (SkillEntity_o *)Instance;
          datalist = (int32_t)v22->fields.datalist;
          datalist_high = HIDWORD(v22->fields.datalist);
          Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillMaster___);
            if ( Instance )
            {
              Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                            datalist,
                                            (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
              if ( v23 )
              {
                skillNameLabel = (UILabel_o *)this->fields.skillNameLabel;
                v27 = (SkillEntity_o *)Instance;
                Instance = (DataManager_o *)SkillEntity__getName(v23, 0);
                if ( skillNameLabel )
                {
                  UILabel__set_text(skillNameLabel, (System_String_o *)Instance, 0);
                  if ( v27 )
                  {
                    combineSkillNameLabel = (UILabel_o *)this->fields.combineSkillNameLabel;
                    Instance = (DataManager_o *)SkillEntity__getName(v27, 0);
                    if ( combineSkillNameLabel )
                    {
                      UILabel__set_text(combineSkillNameLabel, (System_String_o *)Instance, 0);
                      v29 = (UILabel_o *)this->fields.skillNameLabel;
                      Instance = (DataManager_o *)EventRewardAssistConfirmDialog_TypeInfo;
                      if ( !EventRewardAssistConfirmDialog_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(EventRewardAssistConfirmDialog_TypeInfo);
                      if ( v29 )
                      {
                        UILabel__SetCondensedScale(
                          v29,
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
                          v30 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                          System_Action___ctor(
                            v30,
                            v7,
                            Method_EventRewardAssistConfirmDialog___c__DisplayClass22_0__Open_b__0__,
                            0);
                          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                          AtlasManager__LoadEventUI(v30, 1, 0);
                          skillLvLabel = this->fields.skillLvLabel;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          v32 = LocalizationManager__Get((System_String_o *)StringLiteral_8256/*"LEVEL_INFO"*/, 0);
                          v56 = v21;
                          v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v33, v34, v35);
                          Instance = (DataManager_o *)System_String__Format(v32, v36, 0);
                          if ( skillLvLabel )
                          {
                            UILabel__set_text(skillLvLabel, (System_String_o *)Instance, 0);
                            combineSkillLvLabel = this->fields.combineSkillLvLabel;
                            v38 = LocalizationManager__Get((System_String_o *)StringLiteral_5674/*"EVENT_REWARD_ASSIST_SKILL_LV"*/, 0);
                            v55 = datalist_high;
                            v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55, v39, v40, v41);
                            Instance = (DataManager_o *)System_String__Format(v38, v42, 0);
                            if ( combineSkillLvLabel )
                            {
                              UILabel__set_text(combineSkillLvLabel, (System_String_o *)Instance, 0);
                              Instance = *v16;
                              if ( *v16 )
                              {
                                skillInfoLabel = this->fields.skillInfoLabel;
                                Instance = (DataManager_o *)AssistEntity__GetDetail((AssistEntity_o *)Instance, 0, 0);
                                v44 = this->fields.skillInfoLabel;
                                if ( v44 )
                                {
                                  WrapControlText__textAdjust(
                                    skillInfoLabel,
                                    (System_String_o *)Instance,
                                    v44->fields.mFontSize,
                                    0,
                                    0);
                                  Instance = *p_monitor;
                                  if ( *p_monitor )
                                  {
                                    combineSkillInfoLabel = this->fields.combineSkillInfoLabel;
                                    Instance = (DataManager_o *)AssistEntity__GetDetail(
                                                                  (AssistEntity_o *)Instance,
                                                                  0,
                                                                  0);
                                    v46 = this->fields.combineSkillInfoLabel;
                                    if ( v46 )
                                    {
                                      WrapControlText__textAdjust(
                                        combineSkillInfoLabel,
                                        (System_String_o *)Instance,
                                        v46->fields.mFontSize,
                                        0,
                                        0);
                                      titleLabel = this->fields.titleLabel;
                                      v48 = LocalizationManager__Get((System_String_o *)StringLiteral_5677/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/, 0);
                                      Instance = (DataManager_o *)System_String__Format(v48, v13, 0);
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
                                                                        (System_String_o *)StringLiteral_5675/*"EVENT_REWARD_ASSIST_SKILL_MSG"*/,
                                                                        0);
                                          v50 = this->fields.skillNameLabel;
                                          if ( v50 )
                                          {
                                            Instance = (DataManager_o *)System_String__Format(
                                                                          (System_String_o *)Instance,
                                                                          (Il2CppObject *)v50->fields.mText,
                                                                          0);
                                            if ( detailMsgLabel )
                                            {
                                              UILabel__set_text(detailMsgLabel, (System_String_o *)Instance, 0);
                                              confirmMsgLabel = this->fields.confirmMsgLabel;
                                              Instance = (DataManager_o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_5673/*"EVENT_REWARD_ASSIST_SKILL_CONFIRM"*/,
                                                                            0);
                                              if ( confirmMsgLabel )
                                              {
                                                UILabel__set_text(confirmMsgLabel, (System_String_o *)Instance, 0);
                                                decideLabel = this->fields.decideLabel;
                                                Instance = (DataManager_o *)LocalizationManager__Get(
                                                                              (System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_YES"*/,
                                                                              0);
                                                if ( decideLabel )
                                                {
                                                  UILabel__set_text(decideLabel, (System_String_o *)Instance, 0);
                                                  cancelLabel = this->fields.cancelLabel;
                                                  Instance = (DataManager_o *)LocalizationManager__Get(
                                                                                (System_String_o *)StringLiteral_3681/*"COMMON_CONFIRM_NO"*/,
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
                                                      this->fields.state = 2;
                                                      v54 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                                                      System_Action___ctor(
                                                        v54,
                                                        (Il2CppObject *)this,
                                                        Method_EventRewardAssistConfirmDialog_EndOpen__,
                                                        0);
                                                      BaseDialog__Open((BaseDialog_o *)this, v54, 0, 0);
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
    sub_1C2D6EC(Instance, v9);
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
  if ( (byte_4C21B23 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15638/*"Window/CancelButton"*/);
    byte_4C21B23 = 1;
  }
  return (System_String_o *)StringLiteral_15638/*"Window/CancelButton"*/;
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
  if ( (byte_4C21B26 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&EventRewardAssistConfirmDialog_TypeInfo);
    this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)sub_1C2D490(&int_TypeInfo);
    byte_4C21B26 = 1;
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
  v16 = System_String__Format_63499156((System_String_o *)klass, v14, v15, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)AtlasManager__SetEventUI(skillIcon, v16, 0);
  v20 = v5->fields.__4__this;
  if ( !v20
    || (v21 = v5->fields.shopEnt) == 0
    || (combineSkillIcon = v20->fields.combineSkillIcon,
        ASSIST_SKILL_ICON = EventRewardAssistConfirmDialog_TypeInfo->static_fields->ASSIST_SKILL_ICON,
        v32 = v21->fields.eventId,
        this = (EventRewardAssistConfirmDialog___c__DisplayClass22_0_o *)j_il2cpp_value_box_0(
                                                                           int_TypeInfo,
                                                                           &v32,
                                                                           v17,
                                                                           v18,
                                                                           v19),
        (afterAssistEnt = v5->fields.afterAssistEnt) == 0) )
  {
LABEL_14:
    sub_1C2D6EC(this, method);
  }
  v28 = (Il2CppObject *)this;
  v31 = afterAssistEnt->fields.imageId;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v24, v25, v26);
  v30 = System_String__Format_63499156(ASSIST_SKILL_ICON, v28, v29, 0);
  AtlasManager__SetEventUI(combineSkillIcon, v30, 0);
}