void __fastcall ServantSkillInfoIconComponent___ctor(ServantSkillInfoIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantSkillInfoIconComponent__Clear(ServantSkillInfoIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SkillIconComponent_o *skillIconComp; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_Object_o *skillStrengthStatus; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B060F4 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&StringLiteral_1/*""*/, v3);
    byte_4B060F4 = 1;
  }
  skillIconComp = this->fields.skillIconComp;
  if ( !skillIconComp )
    goto LABEL_17;
  SkillIconComponent__Clear(skillIconComp, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.statusLb;
  if ( !skillIconComp )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.levelLabel;
  if ( !skillIconComp )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.chargeTitleLb;
  if ( !skillIconComp )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.chargeTimeLb;
  if ( !skillIconComp )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.callbackFunc = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v5, v6);
  skillIconComp = (SkillIconComponent_o *)this->fields.skillNameLabel;
  *(_QWORD *)&this->fields.currentSkillId = 0LL;
  if ( !skillIconComp )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
  {
    skillIconComp = (SkillIconComponent_o *)this->fields.skillStrengthStatus;
    if ( skillIconComp )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)skillIconComp,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
      return;
    }
LABEL_17:
    sub_1BC3264(skillIconComp, method);
  }
}


void __fastcall ServantSkillInfoIconComponent__ClearAppendSkillInfo(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  SkillIconComponent_o *skillIconComp; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_Object_o *lineImg; // x20
  UnityEngine_Object_o *lockImg; // x20
  UnityEngine_Object_o *msgLabel; // x20

  if ( (byte_4B060F5 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&StringLiteral_1/*""*/, v3);
    byte_4B060F5 = 1;
  }
  skillIconComp = this->fields.skillIconComp;
  if ( !skillIconComp )
    goto LABEL_28;
  SkillIconComponent__Clear(skillIconComp, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.statusLb;
  if ( !skillIconComp )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.levelLabel;
  if ( !skillIconComp )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.chargeTitleLb;
  if ( !skillIconComp )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.chargeTimeLb;
  if ( !skillIconComp )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.callbackFunc = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v5, v6);
  skillIconComp = (SkillIconComponent_o *)this->fields.skillNameLabel;
  *(_QWORD *)&this->fields.currentSkillId = 0LL;
  if ( !skillIconComp )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  lineImg = (UnityEngine_Object_o *)this->fields.lineImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lineImg, 0LL, 0LL) )
  {
    skillIconComp = (SkillIconComponent_o *)this->fields.lineImg;
    if ( !skillIconComp )
      goto LABEL_28;
    skillIconComp = (SkillIconComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)skillIconComp,
                                              0LL);
    if ( !skillIconComp )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillIconComp, 0, 0LL);
  }
  lockImg = (UnityEngine_Object_o *)this->fields.lockImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lockImg, 0LL, 0LL) )
  {
    skillIconComp = (SkillIconComponent_o *)this->fields.lockImg;
    if ( !skillIconComp )
      goto LABEL_28;
    skillIconComp = (SkillIconComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)skillIconComp,
                                              0LL);
    if ( !skillIconComp )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillIconComp, 0, 0LL);
  }
  msgLabel = (UnityEngine_Object_o *)this->fields.msgLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(msgLabel, 0LL, 0LL) )
  {
    skillIconComp = (SkillIconComponent_o *)this->fields.msgLabel;
    if ( skillIconComp )
    {
      skillIconComp = (SkillIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)skillIconComp,
                                                0LL);
      if ( skillIconComp )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillIconComp, 0, 0LL);
        return;
      }
    }
LABEL_28:
    sub_1BC3264(skillIconComp, method);
  }
}


TweenColor_o *__fastcall ServantSkillInfoIconComponent__GetSelectMskImgTweenColor(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *noSelectMskImg; // x0

  if ( (byte_4B060F8 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, method);
    byte_4B060F8 = 1;
  }
  noSelectMskImg = (UnityEngine_Component_o *)this->fields.noSelectMskImg;
  if ( !noSelectMskImg
    || (noSelectMskImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noSelectMskImg, 0LL)) == 0LL )
  {
    sub_1BC3264(noSelectMskImg, method);
  }
  return (TweenColor_o *)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)noSelectMskImg,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
}


void __fastcall ServantSkillInfoIconComponent__OnClickSkill(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ServantSkillInfoIconComponent_ClickDelegate_o *callbackFunc; // x8

  if ( (byte_4B060F1 & 1) == 0 )
  {
    sub_1BC3008(&Method_ServantSkillInfoIconComponent_OnClickSkill__, method);
    byte_4B060F1 = 1;
  }
  if ( this->fields.currentSkillId >= 1 && this->fields.isPlayClickSe )
  {
    v3 = Method_ServantSkillInfoIconComponent_OnClickSkill__;
    if ( (*((_BYTE *)Method_ServantSkillInfoIconComponent_OnClickSkill__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_ServantSkillInfoIconComponent_OnClickSkill__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      1LL,
      (unsigned int)this->fields.index,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall ServantSkillInfoIconComponent__OnClickSkillDetail(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  int32_t v19; // w20
  System_String_o *v20; // x21
  System_String_o *v21; // x22
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  System_String_o *Empty; // x20
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_String_o *v31; // x19
  Il2CppObject *v32; // x0
  int32_t chargeTurn; // [xsp+Ch] [xbp-74h] BYREF
  SkillLvEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  System_String_o *detail; // [xsp+18h] [xbp-68h] BYREF
  System_String_o *name; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4B060F2 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1BC3008(&Method_DataManager_GetMaster_SkillLvMaster___, v3);
    sub_1BC3008(&DataManager_TypeInfo, v4);
    sub_1BC3008(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_1BC3008(&int_TypeInfo, v6);
    sub_1BC3008(&LocalizationManager_TypeInfo, v7);
    sub_1BC3008(&Method_ServantSkillInfoIconComponent_OnClickSkillDetail__, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BC3008(&string_TypeInfo, v11);
    sub_1BC3008(&StringLiteral_113/*" "*/, v12);
    sub_1BC3008(&StringLiteral_8469/*"MASTER_EQSKILL_LV_TXT"*/, v13);
    sub_1BC3008(&StringLiteral_2853/*"BATTLE_SKILLCHARGETURN"*/, v14);
    byte_4B060F2 = 1;
  }
  name = 0LL;
  entity = 0LL;
  detail = 0LL;
  if ( this->fields.currentSkillId >= 1 )
  {
    v15 = Method_ServantSkillInfoIconComponent_OnClickSkillDetail__;
    if ( (*((_BYTE *)Method_ServantSkillInfoIconComponent_OnClickSkillDetail__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1BC3020(Method_ServantSkillInfoIconComponent_OnClickSkillDetail__);
    v16 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      this->fields.currentSkillId,
                                      (const MethodInfo_32AF070 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v19 = this->fields.currentSkillLv ? this->fields.currentSkillLv : 1;
        if ( Instance )
        {
          SkillEntity__getSkillMessageInfo((SkillEntity_o *)Instance, &name, &detail, v19, 0LL);
          v20 = name;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v21 = LocalizationManager__Get((System_String_o *)StringLiteral_8469/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
          chargeTurn = v19;
          v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn, v22, v23, v24);
          v26 = System_String__Format(v21, v25, 0LL);
          name = System_String__Concat_62386896(v20, (System_String_o *)StringLiteral_113/*" "*/, v26, 0LL);
          Empty = string_TypeInfo->static_fields->Empty;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_SkillLvMaster___);
          if ( Instance )
          {
            Instance = (DataManager_o *)SkillLvMaster__TryGetEntity(
                                          (SkillLvMaster_o *)Instance,
                                          &entity,
                                          this->fields.currentSkillId,
                                          this->fields.currentSkillLv,
                                          0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_27;
              if ( entity->fields.chargeTurn >= 1 )
              {
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2853/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
                if ( !entity )
                  goto LABEL_27;
                v31 = (System_String_o *)Instance;
                chargeTurn = entity->fields.chargeTurn;
                v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn, v28, v29, v30);
                Empty = System_String__Format(v31, v32, 0LL);
              }
            }
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( Instance )
            {
              CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, Empty, detail, 1, 1, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_27:
    sub_1BC3264(Instance, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillInfoIconComponent__PlaySkillIconTweenColor(
        ServantSkillInfoIconComponent_o *this,
        bool isPlayLock,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Component_o *skillIconSprite; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4B060F9 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, isPlayLock);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v5);
    byte_4B060F9 = 1;
  }
  skillIconSprite = (UnityEngine_Component_o *)this->fields.skillIconSprite;
  if ( !skillIconSprite )
    goto LABEL_12;
  skillIconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(skillIconSprite, 0LL);
  if ( !skillIconSprite )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)skillIconSprite,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  skillIconSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
  if ( ((unsigned __int8)skillIconSprite & 1) == 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0LL);
      if ( isPlayLock )
      {
        UITweener__set_tweenFactor((UITweener_o *)Component_object, 0.0, 0LL);
        UITweener__PlayForward((UITweener_o *)Component_object, 0LL);
      }
      else
      {
        UITweener__set_tweenFactor((UITweener_o *)Component_object, 1.0, 0LL);
        UITweener__PlayReverse((UITweener_o *)Component_object, 0LL);
      }
      return;
    }
LABEL_12:
    sub_1BC3264(skillIconSprite, isPlayLock);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillInfoIconComponent__SetDispSelectMskImg(
        ServantSkillInfoIconComponent_o *this,
        bool isShow,
        const MethodInfo *method)
{
  UnityEngine_Component_o *noSelectMskImg; // x0

  noSelectMskImg = (UnityEngine_Component_o *)this->fields.noSelectMskImg;
  if ( !noSelectMskImg
    || (noSelectMskImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noSelectMskImg, 0LL)) == 0LL )
  {
    sub_1BC3264(noSelectMskImg, isShow);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noSelectMskImg, isShow, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillInfoIconComponent__SetLevelLabel(
        ServantSkillInfoIconComponent_o *this,
        int32_t skillLv,
        int32_t skillMaxLv,
        const MethodInfo *method)
{
  ServantSkillInfoIconComponent_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UILabel_o *levelLabel; // x19
  System_String_o *v11; // x22
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  System_String_o *Empty; // x1
  int32_t v21; // [xsp+8h] [xbp-38h] BYREF
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_4B060F6 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&skillLv);
    sub_1BC3008(&LocalizationManager_TypeInfo, v7);
    sub_1BC3008(&string_TypeInfo, v8);
    this = (ServantSkillInfoIconComponent_o *)sub_1BC3008(&StringLiteral_1990/*"APPEND_SKILL_ICON_INFO_LV"*/, v9);
    byte_4B060F6 = 1;
  }
  levelLabel = v6->fields.levelLabel;
  if ( !skillLv )
  {
    Empty = string_TypeInfo->static_fields->Empty;
    if ( levelLabel )
      goto LABEL_7;
LABEL_9:
    sub_1BC3264(this, Empty);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_1990/*"APPEND_SKILL_ICON_INFO_LV"*/, 0LL);
  v22 = skillLv;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v12, v13, v14);
  v21 = skillMaxLv;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v16, v17, v18);
  this = (ServantSkillInfoIconComponent_o *)System_String__Format_62389940(v11, v15, v19, 0LL);
  Empty = (System_String_o *)this;
  if ( !levelLabel )
    goto LABEL_9;
LABEL_7:
  UILabel__set_text(levelLabel, Empty, 0LL);
}


void __fastcall ServantSkillInfoIconComponent__SetMsgLabel(
        ServantSkillInfoIconComponent_o *this,
        System_String_o *msg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *msgLabel; // x21
  __int64 v6; // x1
  UILabel_o *gameObject; // x0

  if ( (byte_4B060F7 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, msg);
    byte_4B060F7 = 1;
  }
  msgLabel = (UnityEngine_Object_o *)this->fields.msgLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(msgLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.msgLabel;
    if ( !gameObject
      || (UILabel__set_text(gameObject, msg, 0LL), (gameObject = this->fields.msgLabel) == 0LL)
      || (gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
    {
      sub_1BC3264(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillInfoIconComponent__SetSkillIconInfo(
        ServantSkillInfoIconComponent_o *this,
        int32_t idx,
        int32_t skillId,
        int32_t skillLv,
        ServantSkillInfoIconComponent_ClickDelegate_o *callback,
        bool isPlayClickSe,
        const MethodInfo *method)
{
  SkillIconComponent_o *skillIconComp; // x0
  UnityEngine_Object_o *lockImg; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct ServantSkillInfoIconComponent_ClickDelegate_o **p_callbackFunc; // x20

  if ( (byte_4B060EE & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&idx);
    byte_4B060EE = 1;
  }
  skillIconComp = this->fields.skillIconComp;
  this->fields.index = idx;
  this->fields.currentSkillId = skillId;
  this->fields.currentSkillLv = skillLv;
  if ( !skillIconComp )
    goto LABEL_17;
  SkillIconComponent__Set_40054368(skillIconComp, skillId, skillLv, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.skillIconSprite;
  if ( !skillIconComp )
    goto LABEL_17;
  skillIconComp = (SkillIconComponent_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)skillIconComp,
                                            0LL);
  if ( !skillIconComp )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillIconComp, 1, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.levelInfo;
  if ( !skillIconComp )
    goto LABEL_17;
  skillIconComp = (SkillIconComponent_o *)UnityEngine_GameObject__get_gameObject(
                                            (UnityEngine_GameObject_o *)skillIconComp,
                                            0LL);
  if ( !skillIconComp )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillIconComp, 1, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.statusLb;
  if ( !skillIconComp )
    goto LABEL_17;
  skillIconComp = (SkillIconComponent_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)skillIconComp,
                                            0LL);
  if ( !skillIconComp )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillIconComp, 0, 0LL);
  lockImg = (UnityEngine_Object_o *)this->fields.lockImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lockImg, 0LL, 0LL) )
  {
    skillIconComp = (SkillIconComponent_o *)this->fields.lockImg;
    if ( skillIconComp )
    {
      skillIconComp = (SkillIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)skillIconComp,
                                                0LL);
      if ( skillIconComp )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillIconComp, 0, 0LL);
        goto LABEL_16;
      }
    }
LABEL_17:
    sub_1BC3264(skillIconComp, *(_QWORD *)&idx);
  }
LABEL_16:
  this->fields.callbackFunc = callback;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_callbackFunc, (int32_t)callback, v15, v16);
  *((_BYTE *)p_callbackFunc + 24) = isPlayClickSe;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillInfoIconComponent__SetSkillIconStatusDisp(
        ServantSkillInfoIconComponent_o *this,
        int32_t skillLv,
        bool isEnableCombine,
        bool updateLvLabel,
        bool updateLockSkillSprite,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Component_o *lockImg; // x0
  struct UILabel_o *statusLb; // x19
  System_String_o *v15; // x1
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B060F0 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, *(_QWORD *)&skillLv);
    sub_1BC3008(&StringLiteral_8712/*"MSG_ABLED_SKILLUP"*/, v11);
    sub_1BC3008(&StringLiteral_1/*""*/, v12);
    byte_4B060F0 = 1;
  }
  if ( !skillLv )
  {
    lockImg = (UnityEngine_Component_o *)this->fields.lockImg;
    if ( !lockImg )
      goto LABEL_27;
    lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0LL);
    if ( !lockImg )
      goto LABEL_27;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 1, 0LL);
    if ( updateLockSkillSprite )
    {
      lockImg = (UnityEngine_Component_o *)this->fields.skillIconSprite;
      if ( !lockImg )
        goto LABEL_27;
      v17.fields.r = 0.32812;
      v17.fields.g = 0.32812;
      v17.fields.b = 0.32812;
      v17.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)lockImg, v17, 0LL);
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
    sub_1BC3264(lockImg, *(_QWORD *)&skillLv);
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
    UIWidget__set_color((UIWidget_o *)lockImg, v16, 0LL);
  }
  lockImg = (UnityEngine_Component_o *)this->fields.lockImg;
  if ( !lockImg )
    goto LABEL_27;
  lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0LL);
  if ( !lockImg )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 0, 0LL);
  lockImg = (UnityEngine_Component_o *)this->fields.statusLb;
  if ( !lockImg )
    goto LABEL_27;
  lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0LL);
  if ( !lockImg )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 1, 0LL);
  if ( skillLv <= 9 && isEnableCombine )
  {
    statusLb = this->fields.statusLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    lockImg = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8712/*"MSG_ABLED_SKILLUP"*/, 0LL);
    if ( statusLb )
    {
      v15 = (System_String_o *)lockImg;
      lockImg = (UnityEngine_Component_o *)statusLb;
LABEL_25:
      UILabel__set_text((UILabel_o *)lockImg, v15, 0LL);
      return;
    }
    goto LABEL_27;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillInfoIconComponent__SetSkillInfo(
        ServantSkillInfoIconComponent_o *this,
        int32_t idx,
        int32_t skillId,
        int32_t skillLv,
        int32_t skillMaxLv,
        System_String_o *skillName,
        int32_t skillIconId,
        int32_t statusKind,
        int32_t skillRecord,
        int32_t baseSvtId,
        ServantSkillInfoIconComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  void *skillNameLabel; // x0
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x23
  UnityEngine_Object_o *skillStrengthStatus; // x24
  UnityEngine_Object_o *gameObject; // x24
  System_String_o *PATH; // x24
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  UILabel_o *levelLabel; // x22
  System_String_o *v39; // x23
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  Il2CppObject *v43; // x21
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  Il2CppObject *v47; // x0
  SkillEntity_o *v48; // x20
  int32_t v49; // w22
  UILabel_o *chargeTitleLb; // x21
  UILabel_o *chargeTimeLb; // x21
  const MethodInfo *v52; // x2
  int32_t v53; // [xsp+14h] [xbp-5Ch] BYREF
  int32_t v54; // [xsp+18h] [xbp-58h] BYREF
  int32_t SkillChargeTime; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector2Int_o v56; // 0:x6.8

  if ( (byte_4B060ED & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_SkillMaster___, *(_QWORD *)&idx);
    sub_1BC3008(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v19);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v20);
    sub_1BC3008(&int_TypeInfo, v21);
    sub_1BC3008(&LocalizationManager_TypeInfo, v22);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v23);
    sub_1BC3008(&ServantSkillStrengthStatus_TypeInfo, v24);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1BC3008(&StringLiteral_4975/*"DISP_SKLL_LV"*/, v26);
    sub_1BC3008(&StringLiteral_12109/*"SKILLCHARGETURN_TXT"*/, v27);
    byte_4B060ED = 1;
  }
  SkillChargeTime = 0;
  ServantSkillInfoIconComponent__SetSkillIconInfo(
    this,
    idx,
    skillId,
    skillLv,
    callback,
    1,
    *(const MethodInfo **)&skillIconId);
  skillNameLabel = this->fields.skillNameLabel;
  if ( !skillNameLabel )
    goto LABEL_30;
  UILabel__set_text((UILabel_o *)skillNameLabel, skillName, 0LL);
  p_skillStrengthStatus = &this->fields.skillStrengthStatus;
  skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
  {
    skillNameLabel = *p_skillStrengthStatus;
    if ( !*p_skillStrengthStatus )
      goto LABEL_30;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)skillNameLabel,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70034300(gameObject, 0LL);
  }
  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  skillNameLabel = this->fields.skillNameLabel;
  if ( !skillNameLabel )
    goto LABEL_30;
  PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillNameLabel, 0LL);
  skillNameLabel = BaseMonoBehaviour__createObject_40210276((BaseMonoBehaviour_o *)this, PATH, transform, 0LL, 0LL);
  if ( !skillNameLabel )
    goto LABEL_30;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)skillNameLabel,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
  *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)Component_object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.skillStrengthStatus, (int32_t)Component_object, v36, v37);
  skillNameLabel = *p_skillStrengthStatus;
  if ( !*p_skillStrengthStatus )
    goto LABEL_30;
  v56 = (UnityEngine_Vector2Int_o)0x1000000012LL;
  ServantSkillStrengthStatus__Set(
    (ServantSkillStrengthStatus_o *)skillNameLabel,
    this->fields.skillNameLabel,
    statusKind,
    skillRecord,
    18,
    -7,
    v56,
    210,
    0LL,
    0LL);
  levelLabel = this->fields.levelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_4975/*"DISP_SKLL_LV"*/, 0LL);
  v54 = skillLv;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v40, v41, v42);
  v53 = skillMaxLv;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v44, v45, v46);
  skillNameLabel = System_String__Format_62389940(v39, v43, v47, 0LL);
  if ( !levelLabel )
    goto LABEL_30;
  UILabel__set_text(levelLabel, (System_String_o *)skillNameLabel, 0LL);
  skillNameLabel = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillNameLabel )
    goto LABEL_30;
  skillNameLabel = DataManager__GetMasterData_object_(
                     (DataManager_o *)skillNameLabel,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillNameLabel )
    goto LABEL_30;
  skillNameLabel = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)skillNameLabel,
                     this->fields.currentSkillId,
                     (const MethodInfo_32AF070 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !skillNameLabel )
    goto LABEL_30;
  v48 = (SkillEntity_o *)skillNameLabel;
  v49 = *((_DWORD *)skillNameLabel + 10);
  chargeTitleLb = this->fields.chargeTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  skillNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_12109/*"SKILLCHARGETURN_TXT"*/, 0LL);
  if ( !chargeTitleLb
    || (UILabel__set_text(chargeTitleLb, (System_String_o *)skillNameLabel, 0LL),
        chargeTimeLb = this->fields.chargeTimeLb,
        SkillChargeTime = SkillEntity__getSkillChargeTime(v48, this->fields.currentSkillLv, 0LL),
        skillNameLabel = System_Int32__ToString((int32_t)&SkillChargeTime, 0LL),
        !chargeTimeLb)
    || (UILabel__set_text(chargeTimeLb, (System_String_o *)skillNameLabel, 0LL),
        (skillNameLabel = this->fields.chargeInfoObj) == 0LL) )
  {
LABEL_30:
    sub_1BC3264(skillNameLabel, v28);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillNameLabel, 1, 0LL);
  if ( this->fields.currentSkillLv < v49 )
    ServantSkillInfoIconComponent__checkEnableCombine(this, baseSvtId, v52);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillInfoIconComponent__SetSkillInfo_47750504(
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
  __int64 v18; // x1
  __int64 v19; // x1
  UILabel_o *skillNameLabel; // x0
  UILabel_o *levelLabel; // x21
  System_String_o *v22; // x22
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x20
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x0
  int32_t v31; // [xsp+8h] [xbp-58h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B060EF & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&idx);
    sub_1BC3008(&LocalizationManager_TypeInfo, v17);
    sub_1BC3008(&StringLiteral_1990/*"APPEND_SKILL_ICON_INFO_LV"*/, v18);
    byte_4B060EF = 1;
  }
  ServantSkillInfoIconComponent__SetSkillIconInfo(
    this,
    idx,
    skillId,
    skillLv,
    callback,
    isPlayClickSe,
    (const MethodInfo *)callback);
  skillNameLabel = this->fields.skillNameLabel;
  if ( !skillNameLabel )
    goto LABEL_10;
  UILabel__set_text(skillNameLabel, skillName, 0LL);
  skillNameLabel = (UILabel_o *)this->fields.lineImg;
  if ( !skillNameLabel )
    goto LABEL_10;
  skillNameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillNameLabel, 0LL);
  if ( !skillNameLabel )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillNameLabel, 1, 0LL);
  levelLabel = this->fields.levelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_1990/*"APPEND_SKILL_ICON_INFO_LV"*/, 0LL);
  v32 = skillLv;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v23, v24, v25);
  v31 = skillMaxLv;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v27, v28, v29);
  skillNameLabel = (UILabel_o *)System_String__Format_62389940(v22, v26, v30, 0LL);
  if ( !levelLabel )
LABEL_10:
    sub_1BC3264(skillNameLabel, v19);
  UILabel__set_text(levelLabel, (System_String_o *)skillNameLabel, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillInfoIconComponent__checkEnableCombine(
        ServantSkillInfoIconComponent_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *SelfUserGame; // x0
  __int64 v13; // x1
  Il2CppObject *lockCountObj; // x19
  Il2CppObject *v15; // x20
  __int64 v16; // x25
  int v17; // w27
  struct DataMasterBase_array *datalist; // x22
  il2cpp_array_size_t v19; // w28
  _BOOL4 v20; // w26
  __int64 v21; // x2
  Il2CppObject *MasterData_object; // x21
  int32_t num; // w8
  _BOOL4 v24; // w19
  UILabel_o *statusLb; // x19
  __int64 m_CancellationTokenSource_low; // [xsp+0h] [xbp-80h]
  ServantSkillInfoIconComponent_o *v27; // [xsp+10h] [xbp-70h]
  UserItemEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B060F3 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_CombineSkillMaster___, *(_QWORD *)&id);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BC3008(&LocalizationManager_TypeInfo, v8);
    sub_1BC3008(&NetworkManager_TypeInfo, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BC3008(&StringLiteral_8712/*"MSG_ABLED_SKILLUP"*/, v11);
    byte_4B060F3 = 1;
  }
  entity = 0LL;
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_40;
  lockCountObj = SelfUserGame->fields.lockCountObj;
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_40;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_40;
  v15 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
          id,
          (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_40;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  if ( !v15 )
    goto LABEL_40;
  if ( !SelfUserGame )
    goto LABEL_40;
  SelfUserGame = (DataManager_o *)CombineSkillMaster__GetEntity(
                                    (CombineSkillMaster_o *)SelfUserGame,
                                    (int32_t)v15[7].klass,
                                    this->fields.currentSkillLv,
                                    0LL);
  if ( !SelfUserGame )
    goto LABEL_40;
  v16 = *(_QWORD *)&SelfUserGame->fields._DispLog;
  if ( !v16 )
    goto LABEL_40;
  v17 = *(_DWORD *)(v16 + 24);
  v27 = this;
  m_CancellationTokenSource_low = SLODWORD(SelfUserGame->fields.m_CancellationTokenSource);
  if ( v17 >= 1 )
  {
    datalist = SelfUserGame->fields.datalist;
    v19 = 0;
    v20 = 1;
    while ( 1 )
    {
      SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_40;
      MasterData_object = DataManager__GetMasterData_object_(
                            SelfUserGame,
                            (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4AFC1F1 )
      {
        sub_1BC3008(&NetworkManager_TypeInfo, v13);
        byte_4AFC1F1 = 1;
      }
      SelfUserGame = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        SelfUserGame = (DataManager_o *)NetworkManager_TypeInfo;
      }
      if ( v19 >= *(_DWORD *)(v16 + 24) )
LABEL_41:
        sub_1BC326C(SelfUserGame, v13, v21);
      if ( !MasterData_object )
        goto LABEL_40;
      SelfUserGame = (DataManager_o *)UserItemMaster__TryGetEntity(
                                        (UserItemMaster_o *)MasterData_object,
                                        &entity,
                                        *(_QWORD *)(*(_QWORD *)&SelfUserGame[1].fields._DispLog + 64LL),
                                        *(_DWORD *)(v16 + 4LL * (int)v19 + 32),
                                        0LL);
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
      if ( v19 >= datalist->max_length )
        goto LABEL_41;
      if ( num >= *((_DWORD *)datalist->m_Items + (int)v19) )
      {
        v20 = (int)++v19 < v17;
        if ( v17 != v19 )
          continue;
      }
      goto LABEL_32;
    }
  }
  v20 = 0;
LABEL_32:
  SelfUserGame = (DataManager_o *)v27->fields.statusLb;
  v24 = (__int64)lockCountObj >= m_CancellationTokenSource_low;
  if ( !SelfUserGame
    || (SelfUserGame = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)SelfUserGame,
                                          0LL)) == 0LL )
  {
LABEL_40:
    sub_1BC3264(SelfUserGame, v13);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, v24 && !v20, 0LL);
  if ( v24 && !v20 )
  {
    statusLb = v27->fields.statusLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8712/*"MSG_ABLED_SKILLUP"*/, 0LL);
    if ( !statusLb )
      goto LABEL_40;
    UILabel__set_text(statusLb, (System_String_o *)SelfUserGame, 0LL);
  }
}


int32_t __fastcall ServantSkillInfoIconComponent__getSkillInfo(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.currentSkillId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillInfoIconComponent_ClickDelegate___ctor(
        ServantSkillInfoIconComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A12328;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A122D0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantSkillInfoIconComponent_ClickDelegate__BeginInvoke(
        ServantSkillInfoIconComponent_ClickDelegate_o *this,
        bool isDecide,
        int32_t idx,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  char v16[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v16[0] = isDecide;
  v15 = idx;
  if ( (byte_4B060FA & 1) == 0 )
  {
    sub_1BC3008(&bool_TypeInfo, isDecide);
    sub_1BC3008(&int_TypeInfo, v9);
    byte_4B060FA = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(bool_TypeInfo, v16, *(_QWORD *)&idx, callback, object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v14, callback, object);
}


void __fastcall ServantSkillInfoIconComponent_ClickDelegate__EndInvoke(
        ServantSkillInfoIconComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
}


void __fastcall ServantSkillInfoIconComponent_ClickDelegate__Invoke(
        ServantSkillInfoIconComponent_ClickDelegate_o *this,
        bool isDecide,
        int32_t idx,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    idx,
    *(_QWORD *)&this->fields.extra_arg);
}