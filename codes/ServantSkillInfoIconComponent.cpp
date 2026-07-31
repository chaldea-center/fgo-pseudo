void ServantSkillInfoIconComponent___ctor(ServantSkillInfoIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ServantSkillInfoIconComponent__Clear(ServantSkillInfoIconComponent_o *this, const MethodInfo *method)
{
  SkillIconComponent_o *skillIconComp; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *skillStrengthStatus; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_59322A0 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59322A0 = 1;
  }
  skillIconComp = this->fields.skillIconComp;
  if ( !skillIconComp )
    goto LABEL_17;
  SkillIconComponent__Clear(skillIconComp, 0);
  skillIconComp = (SkillIconComponent_o *)this->fields.statusLb;
  if ( !skillIconComp )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0);
  skillIconComp = (SkillIconComponent_o *)this->fields.levelLabel;
  if ( !skillIconComp )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0);
  skillIconComp = (SkillIconComponent_o *)this->fields.chargeTitleLb;
  if ( !skillIconComp )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0);
  skillIconComp = (SkillIconComponent_o *)this->fields.chargeTimeLb;
  if ( !skillIconComp )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.callbackFunc = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v4, v5, v6, v7, v8, v9);
  skillIconComp = (SkillIconComponent_o *)this->fields.skillNameLabel;
  *(_QWORD *)&this->fields.currentSkillId = 0;
  if ( !skillIconComp )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0);
  skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0, 0) )
  {
    skillIconComp = (SkillIconComponent_o *)this->fields.skillStrengthStatus;
    if ( skillIconComp )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)skillIconComp,
                                             0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
      UnityEngine_Object__Destroy_83246496(gameObject, 0);
      return;
    }
LABEL_17:
    sub_21FFECC(skillIconComp, method);
  }
}


void ServantSkillInfoIconComponent__ClearAppendSkillInfo(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  SkillIconComponent_o *skillIconComp; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *lineImg; // x20
  __int64 v13; // x2
  UnityEngine_Object_o *lockImg; // x20
  __int64 v15; // x2
  UnityEngine_Object_o *msgLabel; // x20

  if ( (byte_59322A1 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59322A1 = 1;
  }
  skillIconComp = this->fields.skillIconComp;
  if ( !skillIconComp )
    goto LABEL_28;
  SkillIconComponent__Clear(skillIconComp, 0);
  skillIconComp = (SkillIconComponent_o *)this->fields.statusLb;
  if ( !skillIconComp )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0);
  skillIconComp = (SkillIconComponent_o *)this->fields.levelLabel;
  if ( !skillIconComp )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0);
  skillIconComp = (SkillIconComponent_o *)this->fields.chargeTitleLb;
  if ( !skillIconComp )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0);
  skillIconComp = (SkillIconComponent_o *)this->fields.chargeTimeLb;
  if ( !skillIconComp )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.callbackFunc = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v4, v5, v6, v7, v8, v9);
  skillIconComp = (SkillIconComponent_o *)this->fields.skillNameLabel;
  *(_QWORD *)&this->fields.currentSkillId = 0;
  if ( !skillIconComp )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0);
  lineImg = (UnityEngine_Object_o *)this->fields.lineImg;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  if ( UnityEngine_Object__op_Inequality(lineImg, 0, 0) )
  {
    skillIconComp = (SkillIconComponent_o *)this->fields.lineImg;
    if ( !skillIconComp )
      goto LABEL_28;
    skillIconComp = (SkillIconComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)skillIconComp,
                                              0);
    if ( !skillIconComp )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillIconComp, 0, 0);
  }
  lockImg = (UnityEngine_Object_o *)this->fields.lockImg;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v13);
  if ( UnityEngine_Object__op_Inequality(lockImg, 0, 0) )
  {
    skillIconComp = (SkillIconComponent_o *)this->fields.lockImg;
    if ( !skillIconComp )
      goto LABEL_28;
    skillIconComp = (SkillIconComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)skillIconComp,
                                              0);
    if ( !skillIconComp )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillIconComp, 0, 0);
  }
  msgLabel = (UnityEngine_Object_o *)this->fields.msgLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v15);
  if ( UnityEngine_Object__op_Inequality(msgLabel, 0, 0) )
  {
    skillIconComp = (SkillIconComponent_o *)this->fields.msgLabel;
    if ( skillIconComp )
    {
      skillIconComp = (SkillIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)skillIconComp,
                                                0);
      if ( skillIconComp )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillIconComp, 0, 0);
        return;
      }
    }
LABEL_28:
    sub_21FFECC(skillIconComp, method);
  }
}


TweenColor_o *ServantSkillInfoIconComponent__GetSelectMskImgTweenColor(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *noSelectMskImg; // x0

  if ( (byte_59322A4 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    byte_59322A4 = 1;
  }
  noSelectMskImg = (UnityEngine_Component_o *)this->fields.noSelectMskImg;
  if ( !noSelectMskImg
    || (noSelectMskImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noSelectMskImg, 0)) == 0 )
  {
    sub_21FFECC(noSelectMskImg, method);
  }
  return (TweenColor_o *)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)noSelectMskImg,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
}


void ServantSkillInfoIconComponent__OnClickSkill(ServantSkillInfoIconComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ServantSkillInfoIconComponent_ClickDelegate_o *callbackFunc; // x8

  if ( (byte_593229D & 1) == 0 )
  {
    sub_21FFC50(&Method_ServantSkillInfoIconComponent_OnClickSkill__);
    byte_593229D = 1;
  }
  if ( this->fields.currentSkillId >= 1 && this->fields.isPlayClickSe )
  {
    v3 = Method_ServantSkillInfoIconComponent_OnClickSkill__;
    if ( (*((_BYTE *)Method_ServantSkillInfoIconComponent_OnClickSkill__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ServantSkillInfoIconComponent_OnClickSkill__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      1,
      (unsigned int)this->fields.index,
      callbackFunc->fields.method);
}


void ServantSkillInfoIconComponent__OnClickSkillDetail(ServantSkillInfoIconComponent_o *this, const MethodInfo *method)
{
  int32_t currentSkillId; // w8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w20
  DataManager_o *v9; // x21
  __int64 v10; // x2
  UserServantEntity_o *baseUserServantData; // x0
  bool IsSaveTransformServant; // w8
  int32_t ServantId; // w0
  int32_t displayTransformIndex; // w23
  int32_t v15; // w22
  __int64 v16; // x1
  __int64 v17; // x2
  int32_t DispLimitCountStageSealAfterAtStageLimitCount; // w23
  System_String_o *v19; // x21
  System_String_o *v20; // x22
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  System_String_o *v25; // x20
  __int64 v26; // x2
  System_String_o *v27; // x19
  Il2CppObject *v28; // x0
  int32_t chargeTurn; // [xsp+Ch] [xbp-74h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  SkillLvEntity_o *v31; // [xsp+18h] [xbp-68h] BYREF
  System_String_o *detail; // [xsp+20h] [xbp-60h] BYREF
  System_String_o *name; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_593229E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_ServantSkillInfoIconComponent_OnClickSkillDetail__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_113/*" "*/);
    sub_21FFC50(&StringLiteral_8900/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_21FFC50(&StringLiteral_2984/*"BATTLE_SKILLCHARGETURN"*/);
    byte_593229E = 1;
  }
  currentSkillId = this->fields.currentSkillId;
  detail = 0;
  name = 0;
  entity = 0;
  v31 = 0;
  if ( currentSkillId >= 1 )
  {
    v4 = Method_ServantSkillInfoIconComponent_OnClickSkillDetail__;
    if ( (*((_BYTE *)Method_ServantSkillInfoIconComponent_OnClickSkillDetail__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_21FFC68(Method_ServantSkillInfoIconComponent_OnClickSkillDetail__);
    v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_42;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !Instance )
      goto LABEL_42;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  this->fields.currentSkillId,
                                  (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    v8 = this->fields.currentSkillLv <= 1u ? 1 : this->fields.currentSkillLv;
    if ( !Instance )
      goto LABEL_42;
    v9 = Instance;
    SkillEntity__getSkillMessageInfo((SkillEntity_o *)Instance, &name, &detail, v8, 0);
    baseUserServantData = this->fields.baseUserServantData;
    if ( baseUserServantData )
    {
      IsSaveTransformServant = UserServantEntity__get_IsSaveTransformServant(baseUserServantData, 0);
      Instance = (DataManager_o *)this->fields.baseUserServantData;
      if ( IsSaveTransformServant )
      {
        if ( !Instance )
          goto LABEL_42;
        ServantId = UserServantEntity__GetServantId(
                      (UserServantEntity_o *)Instance,
                      this->fields.displayTransformIndex,
                      0);
        displayTransformIndex = this->fields.displayTransformIndex;
      }
      else
      {
        if ( !Instance )
          goto LABEL_42;
        displayTransformIndex = -1;
        ServantId = UserServantEntity__GetServantId((UserServantEntity_o *)Instance, -1, 0);
      }
      v15 = ServantId;
      Instance = (DataManager_o *)this->fields.baseUserServantData;
      if ( !Instance )
        goto LABEL_42;
      DispLimitCountStageSealAfterAtStageLimitCount = UserServantEntity__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                        (UserServantEntity_o *)Instance,
                                                        displayTransformIndex,
                                                        0,
                                                        0,
                                                        0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16, v17);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      if ( !Instance )
        goto LABEL_42;
      if ( ServantLimitAddMaster__TryGetEntity(
             (ServantLimitAddMaster_o *)Instance,
             &entity,
             v15,
             DispLimitCountStageSealAfterAtStageLimitCount,
             0) )
      {
        Instance = (DataManager_o *)entity;
        if ( !entity )
          goto LABEL_42;
        if ( ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
        {
          Instance = (DataManager_o *)entity;
          if ( !entity )
            goto LABEL_42;
          name = ServantLimitAddEntity__GetOverwriteSkillName(entity, v9->fields.m_CachedPtr, name, 0);
        }
      }
    }
    v19 = name;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v10);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_8900/*"MASTER_EQSKILL_LV_TXT"*/, 0);
    chargeTurn = v8;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &chargeTurn);
    v22 = System_String__Format(v20, v21, 0);
    name = System_String__Concat_75481624(v19, (System_String_o *)StringLiteral_113/*" "*/, v22, 0);
    v25 = **(System_String_o ***)(qword_594C0B8 + 184);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v23, v24);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( Instance )
    {
      Instance = (DataManager_o *)SkillLvMaster__TryGetEntity(
                                    (SkillLvMaster_o *)Instance,
                                    &v31,
                                    this->fields.currentSkillId,
                                    this->fields.currentSkillLv,
                                    0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v31 )
          goto LABEL_42;
        if ( v31->fields.chargeTurn >= 1 )
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v26);
          Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2984/*"BATTLE_SKILLCHARGETURN"*/, 0);
          if ( !v31 )
            goto LABEL_42;
          v27 = (System_String_o *)Instance;
          chargeTurn = v31->fields.chargeTurn;
          v28 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &chargeTurn);
          v25 = System_String__Format(v27, v28, 0);
        }
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, v25, detail, 1, 1, 0);
        return;
      }
    }
LABEL_42:
    sub_21FFECC(Instance, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantSkillInfoIconComponent__PlaySkillIconTweenColor(
        ServantSkillInfoIconComponent_o *this,
        bool isPlayLock,
        const MethodInfo *method)
{
  UnityEngine_Component_o *skillIconSprite; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Component_object; // x20

  if ( (byte_59322A5 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59322A5 = 1;
  }
  skillIconSprite = (UnityEngine_Component_o *)this->fields.skillIconSprite;
  if ( !skillIconSprite )
    goto LABEL_12;
  skillIconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(skillIconSprite, 0);
  if ( !skillIconSprite )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)skillIconSprite,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  skillIconSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
  if ( ((unsigned __int8)skillIconSprite & 1) == 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
      if ( isPlayLock )
      {
        UITweener__set_tweenFactor((UITweener_o *)Component_object, 0.0, 0);
        UITweener__PlayForward((UITweener_o *)Component_object, 0);
      }
      else
      {
        UITweener__set_tweenFactor((UITweener_o *)Component_object, 1.0, 0);
        UITweener__PlayReverse((UITweener_o *)Component_object, 0);
      }
      return;
    }
LABEL_12:
    sub_21FFECC(skillIconSprite, isPlayLock);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantSkillInfoIconComponent__SetDispSelectMskImg(
        ServantSkillInfoIconComponent_o *this,
        bool isShow,
        const MethodInfo *method)
{
  UnityEngine_Component_o *noSelectMskImg; // x0

  noSelectMskImg = (UnityEngine_Component_o *)this->fields.noSelectMskImg;
  if ( !noSelectMskImg
    || (noSelectMskImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noSelectMskImg, 0)) == 0 )
  {
    sub_21FFECC(noSelectMskImg, isShow);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noSelectMskImg, isShow, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantSkillInfoIconComponent__SetLevelLabel(
        ServantSkillInfoIconComponent_o *this,
        int32_t skillLv,
        int32_t skillMaxLv,
        const MethodInfo *method)
{
  ServantSkillInfoIconComponent_o *v6; // x19
  UILabel_o *levelLabel; // x19
  System_String_o *v8; // x22
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x0
  ServantSkillInfoIconComponent_o *v11; // x1
  int32_t v12; // [xsp+8h] [xbp-38h] BYREF
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_59322A2 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    this = (ServantSkillInfoIconComponent_o *)sub_21FFC50(&StringLiteral_2097/*"APPEND_SKILL_ICON_INFO_LV"*/);
    byte_59322A2 = 1;
  }
  levelLabel = v6->fields.levelLabel;
  if ( !skillLv )
  {
    v11 = **(ServantSkillInfoIconComponent_o ***)(qword_594C0B8 + 184);
    if ( levelLabel )
      goto LABEL_7;
LABEL_9:
    sub_21FFECC(this, v11);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&skillLv, *(_QWORD *)&skillMaxLv);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2097/*"APPEND_SKILL_ICON_INFO_LV"*/, 0);
  v13 = skillLv;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v13);
  v12 = skillMaxLv;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v12);
  this = (ServantSkillInfoIconComponent_o *)System_String__Format_75484576(v8, v9, v10, 0);
  v11 = this;
  if ( !levelLabel )
    goto LABEL_9;
LABEL_7:
  UILabel__set_text(levelLabel, (System_String_o *)v11, 0);
}


void ServantSkillInfoIconComponent__SetMsgLabel(
        ServantSkillInfoIconComponent_o *this,
        System_String_o *msg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *msgLabel; // x21
  __int64 v6; // x1
  UILabel_o *gameObject; // x0

  if ( (byte_59322A3 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59322A3 = 1;
  }
  msgLabel = (UnityEngine_Object_o *)this->fields.msgLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, msg, method);
  if ( !UnityEngine_Object__op_Equality(msgLabel, 0, 0) )
  {
    gameObject = this->fields.msgLabel;
    if ( !gameObject
      || (UILabel__set_text(gameObject, msg, 0), (gameObject = this->fields.msgLabel) == 0)
      || (gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
    {
      sub_21FFECC(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantSkillInfoIconComponent__SetSkillIconInfo(
        ServantSkillInfoIconComponent_o *this,
        int32_t idx,
        int32_t skillId,
        int32_t skillLv,
        ServantSkillInfoIconComponent_ClickDelegate_o *callback,
        bool isPlayClickSe,
        UserServantEntity_o *baseUserServantEntity,
        int32_t transformIndex,
        const MethodInfo *method)
{
  SkillIconComponent_o *skillIconComp; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Object_o *lockImg; // x24
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct UserServantEntity_o **p_baseUserServantData; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7

  if ( (byte_593229A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593229A = 1;
  }
  skillIconComp = this->fields.skillIconComp;
  this->fields.index = idx;
  this->fields.currentSkillId = skillId;
  this->fields.currentSkillLv = skillLv;
  if ( !skillIconComp )
    goto LABEL_17;
  SkillIconComponent__Set_48036300(skillIconComp, skillId, skillLv, 0);
  skillIconComp = (SkillIconComponent_o *)this->fields.skillIconSprite;
  if ( !skillIconComp )
    goto LABEL_17;
  skillIconComp = (SkillIconComponent_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)skillIconComp,
                                            0);
  if ( !skillIconComp )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillIconComp, 1, 0);
  skillIconComp = (SkillIconComponent_o *)this->fields.levelInfo;
  if ( !skillIconComp )
    goto LABEL_17;
  skillIconComp = (SkillIconComponent_o *)UnityEngine_GameObject__get_gameObject(
                                            (UnityEngine_GameObject_o *)skillIconComp,
                                            0);
  if ( !skillIconComp )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillIconComp, 1, 0);
  skillIconComp = (SkillIconComponent_o *)this->fields.statusLb;
  if ( !skillIconComp )
    goto LABEL_17;
  skillIconComp = (SkillIconComponent_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)skillIconComp,
                                            0);
  if ( !skillIconComp )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillIconComp, 0, 0);
  lockImg = (UnityEngine_Object_o *)this->fields.lockImg;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
  if ( UnityEngine_Object__op_Inequality(lockImg, 0, 0) )
  {
    skillIconComp = (SkillIconComponent_o *)this->fields.lockImg;
    if ( skillIconComp )
    {
      skillIconComp = (SkillIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)skillIconComp,
                                                0);
      if ( skillIconComp )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillIconComp, 0, 0);
        goto LABEL_16;
      }
    }
LABEL_17:
    sub_21FFECC(skillIconComp, *(_QWORD *)&idx);
  }
LABEL_16:
  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.baseUserServantData = baseUserServantEntity;
  p_baseUserServantData = &this->fields.baseUserServantData;
  *((_BYTE *)p_baseUserServantData - 8) = isPlayClickSe;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)p_baseUserServantData,
    (int32_t)baseUserServantEntity,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  *((_DWORD *)p_baseUserServantData + 2) = transformIndex;
}


// local variable allocation has failed, the output may be wrong!
void ServantSkillInfoIconComponent__SetSkillIconStatusDisp(
        ServantSkillInfoIconComponent_o *this,
        int32_t skillLv,
        bool isEnableCombine,
        bool updateLvLabel,
        bool updateLockSkillSprite,
        const MethodInfo *method)
{
  UnityEngine_Component_o *lockImg; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct UILabel_o *statusLb; // x19
  System_String_o *v15; // x1
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593229C & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_9146/*"MSG_ABLED_SKILLUP"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593229C = 1;
  }
  if ( !skillLv )
  {
    lockImg = (UnityEngine_Component_o *)this->fields.lockImg;
    if ( !lockImg )
      goto LABEL_27;
    lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0);
    if ( !lockImg )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 1, 0);
    if ( updateLockSkillSprite )
    {
      lockImg = (UnityEngine_Component_o *)this->fields.skillIconSprite;
      if ( !lockImg )
        goto LABEL_27;
      v17.fields.r = 0.32812;
      v17.fields.g = 0.32812;
      v17.fields.b = 0.32812;
      v17.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)lockImg, v17, 0);
    }
    if ( !updateLvLabel )
      return;
    lockImg = (UnityEngine_Component_o *)this->fields.levelLabel;
    if ( lockImg )
    {
      v15 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_25;
    }
LABEL_27:
    sub_21FFECC(lockImg, *(_QWORD *)&skillLv);
  }
  if ( updateLockSkillSprite )
  {
    lockImg = (UnityEngine_Component_o *)this->fields.skillIconSprite;
    if ( !lockImg )
      goto LABEL_27;
    v16.fields.r = 1.0;
    v16.fields.g = 1.0;
    v16.fields.b = 1.0;
    v16.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)lockImg, v16, 0);
  }
  lockImg = (UnityEngine_Component_o *)this->fields.lockImg;
  if ( !lockImg )
    goto LABEL_27;
  lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0);
  if ( !lockImg )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 0, 0);
  lockImg = (UnityEngine_Component_o *)this->fields.statusLb;
  if ( !lockImg )
    goto LABEL_27;
  lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0);
  if ( !lockImg )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 1, 0);
  if ( skillLv <= 9 && isEnableCombine )
  {
    statusLb = this->fields.statusLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12, v13);
    lockImg = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9146/*"MSG_ABLED_SKILLUP"*/, 0);
    if ( statusLb )
    {
      v15 = (System_String_o *)lockImg;
      lockImg = (UnityEngine_Component_o *)statusLb;
LABEL_25:
      UILabel__set_text((UILabel_o *)lockImg, v15, 0);
      return;
    }
    goto LABEL_27;
  }
}


void ServantSkillInfoIconComponent__SetSkillInfo(
        ServantSkillInfoIconComponent_o *this,
        int32_t idx,
        int32_t skillId,
        int32_t skillLv,
        int32_t skillMaxLv,
        System_String_o *skillName,
        int32_t skillIconId,
        int32_t statusKind,
        int32_t skillRecord,
        UserServantEntity_o *baseUserServantEntity,
        int32_t transformIndex,
        ServantSkillInfoIconComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  __int64 v20; // x1
  void *skillNameLabel; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x24
  UnityEngine_Object_o *skillStrengthStatus; // x25
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *PATH; // x25
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  UnityEngine_Vector2Int_o v39; // x6
  __int64 v40; // x1
  __int64 v41; // x2
  UILabel_o *levelLabel; // x23
  System_String_o *v43; // x24
  Il2CppObject *v44; // x22
  Il2CppObject *v45; // x0
  __int64 v46; // x2
  SkillEntity_o *v47; // x21
  int32_t v48; // w23
  UILabel_o *chargeTitleLb; // x22
  UILabel_o *chargeTimeLb; // x22
  __int64 v51; // x2
  __int64 v52; // x20
  __int64 v53; // x21
  int32_t v54; // w0
  const MethodInfo *v55; // x2
  UILabel_o *addLabel; // [xsp+0h] [xbp-80h]
  int32_t v57; // [xsp+14h] [xbp-6Ch] BYREF
  int32_t v58; // [xsp+18h] [xbp-68h] BYREF
  int32_t SkillChargeTime; // [xsp+1Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_5932299 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&ServantSkillStrengthStatus_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_5194/*"DISP_SKLL_LV"*/);
    sub_21FFC50(&StringLiteral_12713/*"SKILLCHARGETURN_TXT"*/);
    byte_5932299 = 1;
  }
  SkillChargeTime = 0;
  ServantSkillInfoIconComponent__SetSkillIconInfo(
    this,
    idx,
    skillId,
    skillLv,
    callback,
    1,
    baseUserServantEntity,
    transformIndex,
    (const MethodInfo *)addLabel);
  skillNameLabel = this->fields.skillNameLabel;
  if ( !skillNameLabel )
    goto LABEL_33;
  UILabel__set_text((UILabel_o *)skillNameLabel, skillName, 0);
  p_skillStrengthStatus = &this->fields.skillStrengthStatus;
  skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
  if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0, 0) )
  {
    skillNameLabel = *p_skillStrengthStatus;
    if ( !*p_skillStrengthStatus )
      goto LABEL_33;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)skillNameLabel,
                                           0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
  }
  if ( !*(&ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, v20, v26);
  skillNameLabel = this->fields.skillNameLabel;
  if ( !skillNameLabel )
    goto LABEL_33;
  PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillNameLabel, 0);
  skillNameLabel = BaseMonoBehaviour__createObject_48121252((BaseMonoBehaviour_o *)this, PATH, transform, 0, 0);
  if ( !skillNameLabel )
    goto LABEL_33;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)skillNameLabel,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
  *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillStrengthStatus,
    (int32_t)Component_object,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  skillNameLabel = *p_skillStrengthStatus;
  if ( !*p_skillStrengthStatus )
    goto LABEL_33;
  v39 = (UnityEngine_Vector2Int_o)0x1000000012LL;
  ServantSkillStrengthStatus__Set(
    (ServantSkillStrengthStatus_o *)skillNameLabel,
    this->fields.skillNameLabel,
    statusKind,
    skillRecord,
    18,
    -7,
    v39,
    210,
    0,
    0);
  levelLabel = this->fields.levelLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40, v41);
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_5194/*"DISP_SKLL_LV"*/, 0);
  v58 = skillLv;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v58);
  v57 = skillMaxLv;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v57);
  skillNameLabel = System_String__Format_75484576(v43, v44, v45, 0);
  if ( !levelLabel )
    goto LABEL_33;
  UILabel__set_text(levelLabel, (System_String_o *)skillNameLabel, 0);
  skillNameLabel = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillNameLabel )
    goto LABEL_33;
  skillNameLabel = DataManager__GetMasterData_object_(
                     (DataManager_o *)skillNameLabel,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillNameLabel )
    goto LABEL_33;
  skillNameLabel = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)skillNameLabel,
                     this->fields.currentSkillId,
                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !skillNameLabel )
    goto LABEL_33;
  v47 = (SkillEntity_o *)skillNameLabel;
  v48 = *((_DWORD *)skillNameLabel + 10);
  chargeTitleLb = this->fields.chargeTitleLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v46);
  skillNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_12713/*"SKILLCHARGETURN_TXT"*/, 0);
  if ( !chargeTitleLb )
    goto LABEL_33;
  UILabel__set_text(chargeTitleLb, (System_String_o *)skillNameLabel, 0);
  chargeTimeLb = this->fields.chargeTimeLb;
  SkillChargeTime = SkillEntity__getSkillChargeTime(v47, this->fields.currentSkillLv, 0);
  skillNameLabel = System_Int32__ToString((int32_t)&SkillChargeTime, 0);
  if ( !chargeTimeLb )
    goto LABEL_33;
  UILabel__set_text(chargeTimeLb, (System_String_o *)skillNameLabel, 0);
  skillNameLabel = this->fields.chargeInfoObj;
  if ( !skillNameLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillNameLabel, 1, 0);
  if ( this->fields.currentSkillLv >= v48 )
    return;
  if ( !baseUserServantEntity )
LABEL_33:
    sub_21FFECC(skillNameLabel, v20);
  v53 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v52 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v51);
  *(_QWORD *)&v60.fields.currentCryptoKey = v53;
  *(_QWORD *)&v60.fields.fakeValue = v52;
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v60, 0);
  ServantSkillInfoIconComponent__checkEnableCombine(this, v54, v55);
}


void ServantSkillInfoIconComponent__SetSkillInfo_37921696(
        ServantSkillInfoIconComponent_o *this,
        int32_t idx,
        System_String_o *skillName,
        int32_t skillId,
        int32_t skillLv,
        int32_t skillMaxLv,
        ServantSkillInfoIconComponent_ClickDelegate_o *callback,
        bool isPlayClickSe,
        const MethodInfo *method)
{
  __int64 v17; // x1
  UILabel_o *skillNameLabel; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  UILabel_o *levelLabel; // x21
  System_String_o *v22; // x22
  Il2CppObject *v23; // x20
  Il2CppObject *v24; // x0
  const MethodInfo *v25; // [xsp+0h] [xbp-60h]
  int32_t v26; // [xsp+8h] [xbp-58h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_593229B & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_2097/*"APPEND_SKILL_ICON_INFO_LV"*/);
    byte_593229B = 1;
  }
  ServantSkillInfoIconComponent__SetSkillIconInfo(this, idx, skillId, skillLv, callback, isPlayClickSe, 0, 0, v25);
  skillNameLabel = this->fields.skillNameLabel;
  if ( !skillNameLabel )
    goto LABEL_10;
  UILabel__set_text(skillNameLabel, skillName, 0);
  skillNameLabel = (UILabel_o *)this->fields.lineImg;
  if ( !skillNameLabel )
    goto LABEL_10;
  skillNameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillNameLabel, 0);
  if ( !skillNameLabel )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillNameLabel, 1, 0);
  levelLabel = this->fields.levelLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2097/*"APPEND_SKILL_ICON_INFO_LV"*/, 0);
  v27 = skillLv;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v27);
  v26 = skillMaxLv;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v26);
  skillNameLabel = (UILabel_o *)System_String__Format_75484576(v22, v23, v24, 0);
  if ( !levelLabel )
LABEL_10:
    sub_21FFECC(skillNameLabel, v17);
  UILabel__set_text(levelLabel, (System_String_o *)skillNameLabel, 0);
}


void ServantSkillInfoIconComponent__checkEnableCombine(
        ServantSkillInfoIconComponent_o *this,
        int32_t id,
        const MethodInfo *method)
{
  DataManager_o *SelfUserGame; // x0
  __int64 v6; // x1
  Il2CppObject *lockCountObj; // x19
  Il2CppObject *v8; // x20
  __int64 v9; // x26
  __int64 v10; // x27
  struct DataMasterBase_array *datalist; // x22
  __int64 v12; // x29
  bool v13; // w24
  __int64 v14; // x2
  Il2CppObject *MasterData_object; // x21
  int32_t num; // w8
  bool v17; // w19
  bool v18; // w19
  __int64 v19; // x1
  __int64 v20; // x2
  UILabel_o *statusLb; // x19
  __int64 m_CancellationTokenSource_low; // [xsp+0h] [xbp-80h]
  ServantSkillInfoIconComponent_o *v23; // [xsp+10h] [xbp-70h]
  UserItemEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_593229F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CombineSkillMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_9146/*"MSG_ABLED_SKILLUP"*/);
    byte_593229F = 1;
  }
  entity = 0;
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_40;
  lockCountObj = SelfUserGame->fields.lockCountObj;
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_40;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_40;
  v8 = DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
         id,
         (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_40;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  if ( !v8 )
    goto LABEL_40;
  if ( !SelfUserGame )
    goto LABEL_40;
  SelfUserGame = (DataManager_o *)CombineSkillMaster__GetEntity(
                                    (CombineSkillMaster_o *)SelfUserGame,
                                    (int32_t)v8[7].klass,
                                    this->fields.currentSkillLv,
                                    0);
  if ( !SelfUserGame )
    goto LABEL_40;
  v9 = *(_QWORD *)&SelfUserGame->fields._DispLog;
  if ( !v9 )
    goto LABEL_40;
  v10 = *(_QWORD *)(v9 + 24);
  v23 = this;
  m_CancellationTokenSource_low = SLODWORD(SelfUserGame->fields.m_CancellationTokenSource);
  if ( (int)v10 >= 1 )
  {
    datalist = SelfUserGame->fields.datalist;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_40;
      MasterData_object = DataManager__GetMasterData_object_(
                            SelfUserGame,
                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v14);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      SelfUserGame = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v14);
        SelfUserGame = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( (unsigned int)v12 >= *(_DWORD *)(v9 + 24) )
LABEL_41:
        sub_21FFED4(SelfUserGame);
      if ( !MasterData_object )
        goto LABEL_40;
      SelfUserGame = (DataManager_o *)UserItemMaster__TryGetEntity(
                                        (UserItemMaster_o *)MasterData_object,
                                        &entity,
                                        *(_QWORD *)(*(_QWORD *)&SelfUserGame[1].fields._DispLog + 64LL),
                                        *(_DWORD *)(v9 + 32 + 4 * v12),
                                        0);
      if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_40;
        num = entity->fields.num;
      }
      else
      {
        num = 0;
      }
      if ( !datalist )
        goto LABEL_40;
      if ( (unsigned int)v12 >= LODWORD(datalist->max_length) )
        goto LABEL_41;
      if ( num >= *((_DWORD *)datalist->m_Items + v12) )
      {
        v13 = (int)++v12 >= (int)v10;
        if ( (_DWORD)v10 != (_DWORD)v12 )
          continue;
      }
      goto LABEL_32;
    }
  }
  v13 = 1;
LABEL_32:
  SelfUserGame = (DataManager_o *)v23->fields.statusLb;
  v17 = (__int64)lockCountObj >= m_CancellationTokenSource_low;
  if ( !SelfUserGame
    || (SelfUserGame = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)SelfUserGame,
                                          0)) == 0 )
  {
LABEL_40:
    sub_21FFECC(SelfUserGame, v6);
  }
  v18 = v13 && (!v13 || v17);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, v18, 0);
  if ( v18 )
  {
    statusLb = v23->fields.statusLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
    SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9146/*"MSG_ABLED_SKILLUP"*/, 0);
    if ( !statusLb )
      goto LABEL_40;
    UILabel__set_text(statusLb, (System_String_o *)SelfUserGame, 0);
  }
}


int32_t ServantSkillInfoIconComponent__getSkillInfo(ServantSkillInfoIconComponent_o *this, const MethodInfo *method)
{
  return this->fields.currentSkillId;
}


void ServantSkillInfoIconComponent_ClickDelegate___ctor(
        ServantSkillInfoIconComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FEC320;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FEC2C8;
}


System_IAsyncResult_o *ServantSkillInfoIconComponent_ClickDelegate__BeginInvoke(
        ServantSkillInfoIconComponent_ClickDelegate_o *this,
        bool isDecide,
        int32_t idx,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v11; // [xsp+28h] [xbp-28h] BYREF
  bool v12[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v11 = idx;
  v12[0] = isDecide;
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(qword_594C050, v12);
  v10[1] = j_il2cpp_value_box_0(qword_594C070, &v11);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v10, callback, object);
}


void ServantSkillInfoIconComponent_ClickDelegate__EndInvoke(
        ServantSkillInfoIconComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void ServantSkillInfoIconComponent_ClickDelegate__Invoke(
        ServantSkillInfoIconComponent_ClickDelegate_o *this,
        bool isDecide,
        int32_t idx,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    idx,
    this->fields.method);
}