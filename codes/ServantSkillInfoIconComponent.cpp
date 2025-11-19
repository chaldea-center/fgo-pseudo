void ServantSkillInfoIconComponent___ctor(ServantSkillInfoIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ServantSkillInfoIconComponent__Clear(ServantSkillInfoIconComponent_o *this, const MethodInfo *method)
{
  SkillIconComponent_o *skillIconComp; // x0
  UnityEngine_Object_o *skillStrengthStatus; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CB0347 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB0347 = 1;
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
  sub_1C6B9AC(&this->fields.callbackFunc, 0);
  skillIconComp = (SkillIconComponent_o *)this->fields.skillNameLabel;
  *(_QWORD *)&this->fields.currentSkillId = 0;
  if ( !skillIconComp )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0);
  skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0, 0) )
  {
    skillIconComp = (SkillIconComponent_o *)this->fields.skillStrengthStatus;
    if ( skillIconComp )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)skillIconComp,
                                             0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71659676(gameObject, 0);
      return;
    }
LABEL_17:
    sub_1C6BC60(skillIconComp, method);
  }
}


void ServantSkillInfoIconComponent__ClearAppendSkillInfo(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  SkillIconComponent_o *skillIconComp; // x0
  UnityEngine_Object_o *lineImg; // x20
  UnityEngine_Object_o *lockImg; // x20
  UnityEngine_Object_o *msgLabel; // x20

  if ( (byte_4CB0348 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB0348 = 1;
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
  sub_1C6B9AC(&this->fields.callbackFunc, 0);
  skillIconComp = (SkillIconComponent_o *)this->fields.skillNameLabel;
  *(_QWORD *)&this->fields.currentSkillId = 0;
  if ( !skillIconComp )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0);
  lineImg = (UnityEngine_Object_o *)this->fields.lineImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C6BC60(skillIconComp, method);
  }
}


TweenColor_o *ServantSkillInfoIconComponent__GetSelectMskImgTweenColor(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *noSelectMskImg; // x0

  if ( (byte_4CB034B & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    byte_4CB034B = 1;
  }
  noSelectMskImg = (UnityEngine_Component_o *)this->fields.noSelectMskImg;
  if ( !noSelectMskImg
    || (noSelectMskImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noSelectMskImg, 0)) == 0 )
  {
    sub_1C6BC60(noSelectMskImg, method);
  }
  return (TweenColor_o *)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)noSelectMskImg,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
}


void ServantSkillInfoIconComponent__OnClickSkill(ServantSkillInfoIconComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ServantSkillInfoIconComponent_ClickDelegate_o *callbackFunc; // x8

  if ( (byte_4CB0344 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ServantSkillInfoIconComponent_OnClickSkill__);
    byte_4CB0344 = 1;
  }
  if ( this->fields.currentSkillId >= 1 && this->fields.isPlayClickSe )
  {
    v3 = Method_ServantSkillInfoIconComponent_OnClickSkill__;
    if ( (*((_BYTE *)Method_ServantSkillInfoIconComponent_OnClickSkill__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSkillInfoIconComponent_OnClickSkill__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w20
  DataManager_o *v8; // x21
  struct UserServantEntity_o *baseUserServantData; // x8
  ServantLimitImageMaster_o *v10; // x22
  __int64 v11; // x23
  __int64 v12; // x24
  int32_t v13; // w23
  int32_t ServantImageLimitSealAfter; // w23
  struct UserServantEntity_o *v15; // x8
  ServantLimitAddMaster_o *v16; // x22
  struct UserServantEntity_o *v17; // x8
  int32_t v18; // w24
  int32_t v19; // w25
  System_String_o *v20; // x21
  System_String_o *v21; // x22
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  System_String_o *Empty; // x20
  System_String_o *v25; // x19
  Il2CppObject *v26; // x0
  int32_t chargeTurn; // [xsp+4h] [xbp-7Ch] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  SkillLvEntity_o *v29; // [xsp+10h] [xbp-70h] BYREF
  System_String_o *detail; // [xsp+18h] [xbp-68h] BYREF
  System_String_o *name; // [xsp+28h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4CB0345 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C6BA08(&ImageLimitCount_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_ServantSkillInfoIconComponent_OnClickSkillDetail__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&StringLiteral_113/*" "*/);
    sub_1C6BA08(&StringLiteral_8547/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_1C6BA08(&StringLiteral_2864/*"BATTLE_SKILLCHARGETURN"*/);
    byte_4CB0345 = 1;
  }
  name = 0;
  v29 = 0;
  detail = 0;
  entity = 0;
  if ( this->fields.currentSkillId >= 1 )
  {
    v3 = Method_ServantSkillInfoIconComponent_OnClickSkillDetail__;
    if ( (*((_BYTE *)Method_ServantSkillInfoIconComponent_OnClickSkillDetail__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ServantSkillInfoIconComponent_OnClickSkillDetail__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      this->fields.currentSkillId,
                                      (const MethodInfo_33F90DC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v7 = this->fields.currentSkillLv ? this->fields.currentSkillLv : 1;
        if ( Instance )
        {
          v8 = Instance;
          SkillEntity__getSkillMessageInfo((SkillEntity_o *)Instance, &name, &detail, v7, 0);
          if ( this->fields.baseUserServantData )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
            baseUserServantData = this->fields.baseUserServantData;
            if ( !baseUserServantData )
              goto LABEL_45;
            v10 = (ServantLimitImageMaster_o *)Instance;
            v12 = *(_QWORD *)&baseUserServantData->fields.svtId.fields.currentCryptoKey;
            v11 = *(_QWORD *)&baseUserServantData->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v32.fields.currentCryptoKey = v12;
            *(_QWORD *)&v32.fields.fakeValue = v11;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v32, 0);
            if ( !this->fields.baseUserServantData )
              goto LABEL_45;
            v13 = (int)Instance;
            Instance = (DataManager_o *)UserServantEntity__getDispLimitCount(this->fields.baseUserServantData, 0, 0);
            if ( !v10 )
              goto LABEL_45;
            ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                           v10,
                                           v13,
                                           (int32_t)Instance,
                                           0);
            Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
            v15 = this->fields.baseUserServantData;
            if ( !v15 )
              goto LABEL_45;
            v16 = (ServantLimitAddMaster_o *)Instance;
            Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                          v15->fields.svtId,
                                          0);
            v17 = this->fields.baseUserServantData;
            if ( !v17 )
              goto LABEL_45;
            v18 = (int)Instance;
            v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v17->fields.limitCount, 0);
            if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
            Instance = (DataManager_o *)ImageLimitCount__GetLimitCountByDispLimit(ServantImageLimitSealAfter, v19, 0);
            if ( !v16 )
              goto LABEL_45;
            if ( ServantLimitAddMaster__TryGetEntity(v16, &entity, v18, (int32_t)Instance, 0) )
            {
              Instance = (DataManager_o *)entity;
              if ( !entity )
                goto LABEL_45;
              if ( ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
              {
                Instance = (DataManager_o *)entity;
                if ( !entity )
                  goto LABEL_45;
                name = ServantLimitAddEntity__GetOverwriteSkillName(entity, v8->fields.m_CachedPtr, name, 0);
              }
            }
          }
          v20 = name;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v21 = LocalizationManager__Get((System_String_o *)StringLiteral_8547/*"MASTER_EQSKILL_LV_TXT"*/, 0);
          chargeTurn = v7;
          v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn);
          v23 = System_String__Format(v21, v22, 0);
          name = System_String__Concat_64005056(v20, (System_String_o *)StringLiteral_113/*" "*/, v23, 0);
          Empty = string_TypeInfo->static_fields->Empty;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_SkillLvMaster___);
          if ( Instance )
          {
            Instance = (DataManager_o *)SkillLvMaster__TryGetEntity(
                                          (SkillLvMaster_o *)Instance,
                                          &v29,
                                          this->fields.currentSkillId,
                                          this->fields.currentSkillLv,
                                          0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v29 )
                goto LABEL_45;
              if ( v29->fields.chargeTurn >= 1 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2864/*"BATTLE_SKILLCHARGETURN"*/, 0);
                if ( !v29 )
                  goto LABEL_45;
                v25 = (System_String_o *)Instance;
                chargeTurn = v29->fields.chargeTurn;
                v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn);
                Empty = System_String__Format(v25, v26, 0);
              }
            }
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( Instance )
            {
              CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, Empty, detail, 1, 1, 0);
              return;
            }
          }
        }
      }
    }
LABEL_45:
    sub_1C6BC60(Instance, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantSkillInfoIconComponent__PlaySkillIconTweenColor(
        ServantSkillInfoIconComponent_o *this,
        bool isPlayLock,
        const MethodInfo *method)
{
  UnityEngine_Component_o *skillIconSprite; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4CB034C & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB034C = 1;
  }
  skillIconSprite = (UnityEngine_Component_o *)this->fields.skillIconSprite;
  if ( !skillIconSprite )
    goto LABEL_12;
  skillIconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(skillIconSprite, 0);
  if ( !skillIconSprite )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)skillIconSprite,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C6BC60(skillIconSprite, isPlayLock);
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
    sub_1C6BC60(noSelectMskImg, isShow);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noSelectMskImg, isShow, 0);
}


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
  System_String_o *Empty; // x1
  int32_t v12; // [xsp+8h] [xbp-38h] BYREF
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_4CB0349 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&string_TypeInfo);
    this = (ServantSkillInfoIconComponent_o *)sub_1C6BA08(&StringLiteral_1995/*"APPEND_SKILL_ICON_INFO_LV"*/);
    byte_4CB0349 = 1;
  }
  levelLabel = v6->fields.levelLabel;
  if ( !skillLv )
  {
    Empty = string_TypeInfo->static_fields->Empty;
    if ( levelLabel )
      goto LABEL_7;
LABEL_9:
    sub_1C6BC60(this, Empty);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_1995/*"APPEND_SKILL_ICON_INFO_LV"*/, 0);
  v13 = skillLv;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  v12 = skillMaxLv;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  this = (ServantSkillInfoIconComponent_o *)System_String__Format_64008100(v8, v9, v10, 0);
  Empty = (System_String_o *)this;
  if ( !levelLabel )
    goto LABEL_9;
LABEL_7:
  UILabel__set_text(levelLabel, Empty, 0);
}


void ServantSkillInfoIconComponent__SetMsgLabel(
        ServantSkillInfoIconComponent_o *this,
        System_String_o *msg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *msgLabel; // x21
  __int64 v6; // x1
  UILabel_o *gameObject; // x0

  if ( (byte_4CB034A & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB034A = 1;
  }
  msgLabel = (UnityEngine_Object_o *)this->fields.msgLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(msgLabel, 0, 0) )
  {
    gameObject = this->fields.msgLabel;
    if ( !gameObject
      || (UILabel__set_text(gameObject, msg, 0), (gameObject = this->fields.msgLabel) == 0)
      || (gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
    {
      sub_1C6BC60(gameObject, v6);
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
        const MethodInfo *method)
{
  SkillIconComponent_o *skillIconComp; // x0
  UnityEngine_Object_o *lockImg; // x23
  struct UserServantEntity_o **p_baseUserServantData; // x21

  if ( (byte_4CB0341 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB0341 = 1;
  }
  skillIconComp = this->fields.skillIconComp;
  this->fields.index = idx;
  this->fields.currentSkillId = skillId;
  this->fields.currentSkillLv = skillLv;
  if ( !skillIconComp )
    goto LABEL_17;
  SkillIconComponent__Set_41257104(skillIconComp, skillId, skillLv, 0);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C6BC60(skillIconComp, *(_QWORD *)&idx);
  }
LABEL_16:
  this->fields.callbackFunc = callback;
  sub_1C6B9AC(&this->fields.callbackFunc, callback);
  this->fields.baseUserServantData = baseUserServantEntity;
  p_baseUserServantData = &this->fields.baseUserServantData;
  *((_BYTE *)p_baseUserServantData - 8) = isPlayClickSe;
  sub_1C6B9AC(p_baseUserServantData, baseUserServantEntity);
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
  struct UILabel_o *statusLb; // x19
  System_String_o *v13; // x1
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB0343 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_8791/*"MSG_ABLED_SKILLUP"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB0343 = 1;
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
      v15.fields.r = 0.32812;
      v15.fields.g = 0.32812;
      v15.fields.b = 0.32812;
      v15.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)lockImg, v15, 0);
    }
    if ( !updateLvLabel )
      return;
    lockImg = (UnityEngine_Component_o *)this->fields.levelLabel;
    if ( lockImg )
    {
      v13 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_25;
    }
LABEL_27:
    sub_1C6BC60(lockImg, *(_QWORD *)&skillLv);
  }
  if ( updateLockSkillSprite )
  {
    lockImg = (UnityEngine_Component_o *)this->fields.skillIconSprite;
    if ( !lockImg )
      goto LABEL_27;
    v14.fields.r = 1.0;
    v14.fields.g = 1.0;
    v14.fields.b = 1.0;
    v14.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)lockImg, v14, 0);
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
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    lockImg = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8791/*"MSG_ABLED_SKILLUP"*/, 0);
    if ( statusLb )
    {
      v13 = (System_String_o *)lockImg;
      lockImg = (UnityEngine_Component_o *)statusLb;
LABEL_25:
      UILabel__set_text((UILabel_o *)lockImg, v13, 0);
      return;
    }
    goto LABEL_27;
  }
}


// local variable allocation has failed, the output may be wrong!
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
        ServantSkillInfoIconComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  __int64 v19; // x1
  void *skillNameLabel; // x0
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x24
  UnityEngine_Object_o *skillStrengthStatus; // x25
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *PATH; // x25
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  UnityEngine_Vector2Int_o v27; // x6
  UILabel_o *levelLabel; // x23
  System_String_o *v29; // x24
  Il2CppObject *v30; // x22
  Il2CppObject *v31; // x0
  SkillEntity_o *v32; // x21
  int32_t v33; // w23
  UILabel_o *chargeTitleLb; // x22
  UILabel_o *chargeTimeLb; // x22
  __int64 v36; // x20
  __int64 v37; // x21
  int32_t v38; // w0
  const MethodInfo *v39; // x2
  int32_t v40; // [xsp+1Ch] [xbp-64h] BYREF
  int32_t v41; // [xsp+28h] [xbp-58h] BYREF
  int32_t SkillChargeTime; // [xsp+2Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4CB0340 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C6BA08(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&ServantSkillStrengthStatus_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_5008/*"DISP_SKLL_LV"*/);
    sub_1C6BA08(&StringLiteral_12222/*"SKILLCHARGETURN_TXT"*/);
    byte_4CB0340 = 1;
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
    *(const MethodInfo **)&statusKind);
  skillNameLabel = this->fields.skillNameLabel;
  if ( !skillNameLabel )
    goto LABEL_33;
  UILabel__set_text((UILabel_o *)skillNameLabel, skillName, 0);
  p_skillStrengthStatus = &this->fields.skillStrengthStatus;
  skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0, 0) )
  {
    skillNameLabel = *p_skillStrengthStatus;
    if ( !*p_skillStrengthStatus )
      goto LABEL_33;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)skillNameLabel,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71659676(gameObject, 0);
  }
  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  skillNameLabel = this->fields.skillNameLabel;
  if ( !skillNameLabel )
    goto LABEL_33;
  PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillNameLabel, 0);
  skillNameLabel = BaseMonoBehaviour__createObject_41419124((BaseMonoBehaviour_o *)this, PATH, transform, 0, 0);
  if ( !skillNameLabel )
    goto LABEL_33;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)skillNameLabel,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
  *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)Component_object;
  sub_1C6B9AC(&this->fields.skillStrengthStatus, Component_object);
  skillNameLabel = *p_skillStrengthStatus;
  if ( !*p_skillStrengthStatus )
    goto LABEL_33;
  v27 = (UnityEngine_Vector2Int_o)0x1000000012LL;
  ServantSkillStrengthStatus__Set(
    (ServantSkillStrengthStatus_o *)skillNameLabel,
    this->fields.skillNameLabel,
    statusKind,
    skillRecord,
    18,
    -7,
    v27,
    210,
    0,
    0);
  levelLabel = this->fields.levelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_5008/*"DISP_SKLL_LV"*/, 0);
  v41 = skillLv;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
  v40 = skillMaxLv;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
  skillNameLabel = System_String__Format_64008100(v29, v30, v31, 0);
  if ( !levelLabel )
    goto LABEL_33;
  UILabel__set_text(levelLabel, (System_String_o *)skillNameLabel, 0);
  skillNameLabel = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillNameLabel )
    goto LABEL_33;
  skillNameLabel = DataManager__GetMasterData_object_(
                     (DataManager_o *)skillNameLabel,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillNameLabel )
    goto LABEL_33;
  skillNameLabel = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)skillNameLabel,
                     this->fields.currentSkillId,
                     (const MethodInfo_33F90DC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !skillNameLabel )
    goto LABEL_33;
  v32 = (SkillEntity_o *)skillNameLabel;
  v33 = *((_DWORD *)skillNameLabel + 10);
  chargeTitleLb = this->fields.chargeTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  skillNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_12222/*"SKILLCHARGETURN_TXT"*/, 0);
  if ( !chargeTitleLb )
    goto LABEL_33;
  UILabel__set_text(chargeTitleLb, (System_String_o *)skillNameLabel, 0);
  chargeTimeLb = this->fields.chargeTimeLb;
  SkillChargeTime = SkillEntity__getSkillChargeTime(v32, this->fields.currentSkillLv, 0);
  skillNameLabel = System_Int32__ToString((int32_t)&SkillChargeTime, 0);
  if ( !chargeTimeLb )
    goto LABEL_33;
  UILabel__set_text(chargeTimeLb, (System_String_o *)skillNameLabel, 0);
  skillNameLabel = this->fields.chargeInfoObj;
  if ( !skillNameLabel )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillNameLabel, 1, 0);
  if ( this->fields.currentSkillLv >= v33 )
    return;
  if ( !baseUserServantEntity )
LABEL_33:
    sub_1C6BC60(skillNameLabel, v19);
  v37 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&baseUserServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = v37;
  *(_QWORD *)&v43.fields.fakeValue = v36;
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v43, 0);
  ServantSkillInfoIconComponent__checkEnableCombine(this, v38, v39);
}


// local variable allocation has failed, the output may be wrong!
void ServantSkillInfoIconComponent__SetSkillInfo_31700808(
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
  UILabel_o *levelLabel; // x21
  System_String_o *v20; // x22
  Il2CppObject *v21; // x20
  Il2CppObject *v22; // x0
  int32_t v23; // [xsp+8h] [xbp-58h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CB0342 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_1995/*"APPEND_SKILL_ICON_INFO_LV"*/);
    byte_4CB0342 = 1;
  }
  ServantSkillInfoIconComponent__SetSkillIconInfo(
    this,
    idx,
    skillId,
    skillLv,
    callback,
    isPlayClickSe,
    0,
    (const MethodInfo *)isPlayClickSe);
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
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_1995/*"APPEND_SKILL_ICON_INFO_LV"*/, 0);
  v24 = skillLv;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v23 = skillMaxLv;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  skillNameLabel = (UILabel_o *)System_String__Format_64008100(v20, v21, v22, 0);
  if ( !levelLabel )
LABEL_10:
    sub_1C6BC60(skillNameLabel, v17);
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
  __int64 v9; // x25
  int v10; // w27
  struct DataMasterBase_array *datalist; // x22
  unsigned int v12; // w28
  _BOOL4 v13; // w26
  Il2CppObject *MasterData_object; // x21
  int32_t num; // w8
  _BOOL4 v16; // w19
  UILabel_o *statusLb; // x19
  __int64 m_CancellationTokenSource_low; // [xsp+0h] [xbp-80h]
  ServantSkillInfoIconComponent_o *v19; // [xsp+10h] [xbp-70h]
  UserItemEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4CB0346 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_CombineSkillMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_8791/*"MSG_ABLED_SKILLUP"*/);
    byte_4CB0346 = 1;
  }
  entity = 0;
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_40;
  lockCountObj = SelfUserGame->fields.lockCountObj;
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_40;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_40;
  v8 = DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
         id,
         (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_40;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
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
  v10 = *(_DWORD *)(v9 + 24);
  v19 = this;
  m_CancellationTokenSource_low = SLODWORD(SelfUserGame->fields.m_CancellationTokenSource);
  if ( v10 >= 1 )
  {
    datalist = SelfUserGame->fields.datalist;
    v12 = 0;
    v13 = 1;
    while ( 1 )
    {
      SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_40;
      MasterData_object = DataManager__GetMasterData_object_(
                            SelfUserGame,
                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4CB002A )
      {
        sub_1C6BA08(&NetworkManager_TypeInfo);
        byte_4CB002A = 1;
      }
      SelfUserGame = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        SelfUserGame = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( v12 >= *(_DWORD *)(v9 + 24) )
LABEL_41:
        sub_1C6BC68(SelfUserGame);
      if ( !MasterData_object )
        goto LABEL_40;
      SelfUserGame = (DataManager_o *)UserItemMaster__TryGetEntity(
                                        (UserItemMaster_o *)MasterData_object,
                                        &entity,
                                        *(_QWORD *)(*(_QWORD *)&SelfUserGame[1].fields._DispLog + 64LL),
                                        *(_DWORD *)(v9 + 4LL * (int)v12 + 32),
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
      if ( v12 >= LODWORD(datalist->max_length) )
        goto LABEL_41;
      if ( num >= *((_DWORD *)datalist->m_Items + (int)v12) )
      {
        v13 = (int)++v12 < v10;
        if ( v10 != v12 )
          continue;
      }
      goto LABEL_32;
    }
  }
  v13 = 0;
LABEL_32:
  SelfUserGame = (DataManager_o *)v19->fields.statusLb;
  v16 = (__int64)lockCountObj >= m_CancellationTokenSource_low;
  if ( !SelfUserGame
    || (SelfUserGame = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)SelfUserGame,
                                          0)) == 0 )
  {
LABEL_40:
    sub_1C6BC60(SelfUserGame, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, v16 && !v13, 0);
  if ( v16 && !v13 )
  {
    statusLb = v19->fields.statusLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8791/*"MSG_ABLED_SKILLUP"*/, 0);
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
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A98994;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9893C;
}


System_IAsyncResult_o *ServantSkillInfoIconComponent_ClickDelegate__BeginInvoke(
        ServantSkillInfoIconComponent_ClickDelegate_o *this,
        bool isDecide,
        int32_t idx,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  bool v12[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v12[0] = isDecide;
  v11 = idx;
  if ( (byte_4CB034D & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    byte_4CB034D = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v10, callback, object);
}


void ServantSkillInfoIconComponent_ClickDelegate__EndInvoke(
        ServantSkillInfoIconComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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