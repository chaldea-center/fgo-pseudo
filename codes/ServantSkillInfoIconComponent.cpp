void __fastcall ServantSkillInfoIconComponent___ctor(ServantSkillInfoIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantSkillInfoIconComponent__Clear(ServantSkillInfoIconComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  SkillIconComponent_o *skillIconComp; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1
  UnityEngine_Object_o *skillStrengthStatus; // x20
  __int64 v15; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B19EA2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B19EA2 = 1;
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
  skillIconComp = (SkillIconComponent_o *)this->fields.skillNameLabel;
  *(_QWORD *)&this->fields.currentSkillId = 0LL;
  if ( !skillIconComp )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
  {
    skillIconComp = (SkillIconComponent_o *)this->fields.skillStrengthStatus;
    if ( skillIconComp )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)skillIconComp,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      return;
    }
LABEL_17:
    sub_1BCAA3C(skillIconComp, method);
  }
}


void __fastcall ServantSkillInfoIconComponent__ClearAppendSkillInfo(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  SkillIconComponent_o *skillIconComp; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1
  UnityEngine_Object_o *lineImg; // x20
  UnityEngine_Object_o *lockImg; // x20
  UnityEngine_Object_o *msgLabel; // x20

  if ( (byte_4B19EA3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B19EA3 = 1;
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
  skillIconComp = (SkillIconComponent_o *)this->fields.skillNameLabel;
  *(_QWORD *)&this->fields.currentSkillId = 0LL;
  if ( !skillIconComp )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  lineImg = (UnityEngine_Object_o *)this->fields.lineImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    sub_1BCAA3C(skillIconComp, method);
  }
}


TweenColor_o *__fastcall ServantSkillInfoIconComponent__GetSelectMskImgTweenColor(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *noSelectMskImg; // x0

  if ( (byte_4B19EA6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, method, v2);
    byte_4B19EA6 = 1;
  }
  noSelectMskImg = (UnityEngine_Component_o *)this->fields.noSelectMskImg;
  if ( !noSelectMskImg
    || (noSelectMskImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noSelectMskImg, 0LL)) == 0LL )
  {
    sub_1BCAA3C(noSelectMskImg, method);
  }
  return (TweenColor_o *)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)noSelectMskImg,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
}


void __fastcall ServantSkillInfoIconComponent__OnClickSkill(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct ServantSkillInfoIconComponent_ClickDelegate_o *callbackFunc; // x8

  if ( (byte_4B19E9F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ServantSkillInfoIconComponent_OnClickSkill__, method, v2);
    byte_4B19E9F = 1;
  }
  if ( this->fields.currentSkillId >= 1 && this->fields.isPlayClickSe )
  {
    v4 = Method_ServantSkillInfoIconComponent_OnClickSkill__;
    if ( (*((_BYTE *)Method_ServantSkillInfoIconComponent_OnClickSkill__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ServantSkillInfoIconComponent_OnClickSkill__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  DataManager_o *Instance; // x0
  __int64 v31; // x1
  int32_t v32; // w20
  __int64 v33; // x1
  System_String_o *v34; // x21
  System_String_o *v35; // x22
  Il2CppObject *v36; // x0
  System_String_o *v37; // x0
  __int64 v38; // x1
  System_String_o *Empty; // x20
  System_String_o *v40; // x19
  Il2CppObject *v41; // x0
  int32_t chargeTurn; // [xsp+Ch] [xbp-74h] BYREF
  SkillLvEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  System_String_o *detail; // [xsp+18h] [xbp-68h] BYREF
  System_String_o *name; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4B19EA0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillLvMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&int_TypeInfo, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_ServantSkillInfoIconComponent_OnClickSkillDetail__, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19);
    sub_1BCA7E0(&string_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_8648/*"MASTER_EQSKILL_LV_TXT"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_3004/*"BATTLE_SKILLCHARGETURN"*/, v26, v27);
    byte_4B19EA0 = 1;
  }
  name = 0LL;
  entity = 0LL;
  detail = 0LL;
  if ( this->fields.currentSkillId >= 1 )
  {
    v28 = Method_ServantSkillInfoIconComponent_OnClickSkillDetail__;
    if ( (*((_BYTE *)Method_ServantSkillInfoIconComponent_OnClickSkillDetail__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1BCA7F8(Method_ServantSkillInfoIconComponent_OnClickSkillDetail__);
    v29 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v28, v28[4]);
    OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
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
                                      this->fields.currentSkillId,
                                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v32 = this->fields.currentSkillLv ? this->fields.currentSkillLv : 1;
        if ( Instance )
        {
          SkillEntity__getSkillMessageInfo((SkillEntity_o *)Instance, &name, &detail, v32, 0LL);
          v34 = name;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
          v35 = LocalizationManager__Get((System_String_o *)StringLiteral_8648/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
          chargeTurn = v32;
          v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn);
          v37 = System_String__Format(v35, v36, 0LL);
          name = System_String__Concat_62412480(v34, (System_String_o *)StringLiteral_116/*" "*/, v37, 0LL);
          Empty = string_TypeInfo->static_fields->Empty;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v38);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillLvMaster___);
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
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
                Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3004/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
                if ( !entity )
                  goto LABEL_27;
                v40 = (System_String_o *)Instance;
                chargeTurn = entity->fields.chargeTurn;
                v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn);
                Empty = System_String__Format(v40, v41, 0LL);
              }
            }
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1BCAA3C(Instance, v31);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillInfoIconComponent__PlaySkillIconTweenColor(
        ServantSkillInfoIconComponent_o *this,
        bool isPlayLock,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Component_o *skillIconSprite; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4B19EA7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenColor___, isPlayLock, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B19EA7 = 1;
  }
  skillIconSprite = (UnityEngine_Component_o *)this->fields.skillIconSprite;
  if ( !skillIconSprite )
    goto LABEL_12;
  skillIconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(skillIconSprite, 0LL);
  if ( !skillIconSprite )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)skillIconSprite,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
    sub_1BCAA3C(skillIconSprite, isPlayLock);
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
    sub_1BCAA3C(noSelectMskImg, isShow);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UILabel_o *levelLabel; // x19
  System_String_o *v14; // x22
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x0
  System_String_o *Empty; // x1
  int32_t v18; // [xsp+8h] [xbp-38h] BYREF
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_4B19EA4 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&skillLv, *(_QWORD *)&skillMaxLv);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&string_TypeInfo, v9, v10);
    this = (ServantSkillInfoIconComponent_o *)sub_1BCA7E0(&StringLiteral_2120/*"APPEND_SKILL_ICON_INFO_LV"*/, v11, v12);
    byte_4B19EA4 = 1;
  }
  levelLabel = v6->fields.levelLabel;
  if ( !skillLv )
  {
    Empty = string_TypeInfo->static_fields->Empty;
    if ( levelLabel )
      goto LABEL_7;
LABEL_9:
    sub_1BCAA3C(this, Empty);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&skillLv);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2120/*"APPEND_SKILL_ICON_INFO_LV"*/, 0LL);
  v19 = skillLv;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v18 = skillMaxLv;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  this = (ServantSkillInfoIconComponent_o *)System_String__Format_62415592(v14, v15, v16, 0LL);
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

  if ( (byte_4B19EA5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, msg, method);
    byte_4B19EA5 = 1;
  }
  msgLabel = (UnityEngine_Object_o *)this->fields.msgLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, msg);
  if ( !UnityEngine_Object__op_Equality(msgLabel, 0LL, 0LL) )
  {
    gameObject = this->fields.msgLabel;
    if ( !gameObject
      || (UILabel__set_text(gameObject, msg, 0LL), (gameObject = this->fields.msgLabel) == 0LL)
      || (gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
    {
      sub_1BCAA3C(gameObject, v6);
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
  __int64 v14; // x1
  UnityEngine_Object_o *lockImg; // x22
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct ServantSkillInfoIconComponent_ClickDelegate_o **p_callbackFunc; // x20

  if ( (byte_4B19E9C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&idx, *(_QWORD *)&skillId);
    byte_4B19E9C = 1;
  }
  skillIconComp = this->fields.skillIconComp;
  this->fields.index = idx;
  this->fields.currentSkillId = skillId;
  this->fields.currentSkillLv = skillLv;
  if ( !skillIconComp )
    goto LABEL_17;
  SkillIconComponent__Set_38947272(skillIconComp, skillId, skillLv, 0LL);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
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
    sub_1BCAA3C(skillIconComp, *(_QWORD *)&idx);
  }
LABEL_16:
  this->fields.callbackFunc = callback;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1BCA784((PartyOrganizationUtility_o *)p_callbackFunc, (int64_t)callback, v16, v17, v18, v19, v20, v21);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Component_o *lockImg; // x0
  __int64 v16; // x1
  struct UILabel_o *statusLb; // x19
  System_String_o *v18; // x1
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19E9E & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&skillLv, isEnableCombine);
    sub_1BCA7E0(&StringLiteral_8881/*"MSG_ABLED_SKILLUP"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B19E9E = 1;
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
      v20.fields.r = 0.32812;
      v20.fields.g = 0.32812;
      v20.fields.b = 0.32812;
      v20.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)lockImg, v20, 0LL);
    }
    if ( !updateLvLabel )
      return;
    lockImg = (UnityEngine_Component_o *)this->fields.levelLabel;
    if ( lockImg )
    {
      v18 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_25;
    }
LABEL_27:
    sub_1BCAA3C(lockImg, *(_QWORD *)&skillLv);
  }
  if ( updateLockSkillSprite )
  {
    lockImg = (UnityEngine_Component_o *)this->fields.skillIconSprite;
    if ( !lockImg )
      goto LABEL_27;
    v19.fields.r = 1.0;
    v19.fields.g = 1.0;
    v19.fields.b = 1.0;
    v19.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)lockImg, v19, 0LL);
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    lockImg = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8881/*"MSG_ABLED_SKILLUP"*/, 0LL);
    if ( statusLb )
    {
      v18 = (System_String_o *)lockImg;
      lockImg = (UnityEngine_Component_o *)statusLb;
LABEL_25:
      UILabel__set_text((UILabel_o *)lockImg, v18, 0LL);
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
  void *skillNameLabel; // x0
  __int64 v39; // x1
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x23
  UnityEngine_Object_o *skillStrengthStatus; // x24
  __int64 v42; // x1
  UnityEngine_Object_o *gameObject; // x24
  System_String_o *PATH; // x24
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x1
  UILabel_o *levelLabel; // x22
  System_String_o *v55; // x23
  Il2CppObject *v56; // x21
  Il2CppObject *v57; // x0
  SkillEntity_o *v58; // x20
  int32_t v59; // w22
  UILabel_o *chargeTitleLb; // x21
  UILabel_o *chargeTimeLb; // x21
  const MethodInfo *v62; // x2
  int32_t v63; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v64; // [xsp+8h] [xbp-58h] BYREF
  int32_t SkillChargeTime; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector2Int_o v66; // 0:x6.8

  if ( (byte_4B19E9B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, *(_QWORD *)&idx, *(_QWORD *)&skillId);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v21, v22);
    sub_1BCA7E0(&int_TypeInfo, v23, v24);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v27, v28);
    sub_1BCA7E0(&ServantSkillStrengthStatus_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32);
    sub_1BCA7E0(&StringLiteral_5124/*"DISP_SKLL_LV"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_12299/*"SKILLCHARGETURN_TXT"*/, v35, v36);
    byte_4B19E9B = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
  if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
  {
    skillNameLabel = *p_skillStrengthStatus;
    if ( !*p_skillStrengthStatus )
      goto LABEL_30;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)skillNameLabel,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, v37);
  skillNameLabel = this->fields.skillNameLabel;
  if ( !skillNameLabel )
    goto LABEL_30;
  PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillNameLabel, 0LL);
  skillNameLabel = BaseMonoBehaviour__createObject_38952608((BaseMonoBehaviour_o *)this, PATH, transform, 0LL, 0LL);
  if ( !skillNameLabel )
    goto LABEL_30;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)skillNameLabel,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
  *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.skillStrengthStatus,
    (int64_t)Component_object,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  skillNameLabel = *p_skillStrengthStatus;
  if ( !*p_skillStrengthStatus )
    goto LABEL_30;
  v66 = (UnityEngine_Vector2Int_o)0x1000000012LL;
  ServantSkillStrengthStatus__Set(
    (ServantSkillStrengthStatus_o *)skillNameLabel,
    this->fields.skillNameLabel,
    statusKind,
    skillRecord,
    18,
    -7,
    v66,
    0LL);
  levelLabel = this->fields.levelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53);
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_5124/*"DISP_SKLL_LV"*/, 0LL);
  v64 = skillLv;
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64);
  v63 = skillMaxLv;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63);
  skillNameLabel = System_String__Format_62415592(v55, v56, v57, 0LL);
  if ( !levelLabel )
    goto LABEL_30;
  UILabel__set_text(levelLabel, (System_String_o *)skillNameLabel, 0LL);
  skillNameLabel = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillNameLabel )
    goto LABEL_30;
  skillNameLabel = DataManager__GetMasterData_object_(
                     (DataManager_o *)skillNameLabel,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillNameLabel )
    goto LABEL_30;
  skillNameLabel = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)skillNameLabel,
                     this->fields.currentSkillId,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !skillNameLabel )
    goto LABEL_30;
  v58 = (SkillEntity_o *)skillNameLabel;
  v59 = *((_DWORD *)skillNameLabel + 10);
  chargeTitleLb = this->fields.chargeTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37);
  skillNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_12299/*"SKILLCHARGETURN_TXT"*/, 0LL);
  if ( !chargeTitleLb
    || (UILabel__set_text(chargeTitleLb, (System_String_o *)skillNameLabel, 0LL),
        chargeTimeLb = this->fields.chargeTimeLb,
        SkillChargeTime = SkillEntity__getSkillChargeTime(v58, this->fields.currentSkillLv, 0LL),
        skillNameLabel = System_Int32__ToString((int32_t)&SkillChargeTime, 0LL),
        !chargeTimeLb)
    || (UILabel__set_text(chargeTimeLb, (System_String_o *)skillNameLabel, 0LL),
        (skillNameLabel = this->fields.chargeInfoObj) == 0LL) )
  {
LABEL_30:
    sub_1BCAA3C(skillNameLabel, v37);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillNameLabel, 1, 0LL);
  if ( this->fields.currentSkillLv < v59 )
    ServantSkillInfoIconComponent__checkEnableCombine(this, baseSvtId, v62);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillInfoIconComponent__SetSkillInfo_46205128(
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
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  UILabel_o *skillNameLabel; // x0
  __int64 v23; // x1
  UILabel_o *levelLabel; // x21
  System_String_o *v25; // x22
  Il2CppObject *v26; // x20
  Il2CppObject *v27; // x0
  int32_t v28; // [xsp+8h] [xbp-58h] BYREF
  int32_t v29; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B19E9D & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&idx, skillName);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_2120/*"APPEND_SKILL_ICON_INFO_LV"*/, v19, v20);
    byte_4B19E9D = 1;
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_2120/*"APPEND_SKILL_ICON_INFO_LV"*/, 0LL);
  v29 = skillLv;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
  v28 = skillMaxLv;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  skillNameLabel = (UILabel_o *)System_String__Format_62415592(v25, v26, v27, 0LL);
  if ( !levelLabel )
LABEL_10:
    sub_1BCAA3C(skillNameLabel, v21);
  UILabel__set_text(levelLabel, (System_String_o *)skillNameLabel, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillInfoIconComponent__checkEnableCombine(
        ServantSkillInfoIconComponent_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
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
  int64_t SelfUserGame; // x0
  __int64 v20; // x1
  int v21; // w21
  Il2CppObject *v22; // x20
  __int64 v23; // x25
  int v24; // w26
  int v25; // w23
  __int64 v26; // x28
  unsigned int v27; // w27
  _BOOL4 v28; // w24
  __int64 v29; // x1
  Il2CppObject *MasterData_object; // x20
  int32_t num; // w8
  _BOOL4 v32; // w19
  __int64 v33; // x1
  UILabel_o *statusLb; // x19
  ServantSkillInfoIconComponent_o *v35; // [xsp+10h] [xbp-70h]
  UserItemEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B19EA1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CombineSkillMaster___, *(_QWORD *)&id, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&StringLiteral_8881/*"MSG_ABLED_SKILLUP"*/, v17, v18);
    byte_4B19EA1 = 1;
  }
  entity = 0LL;
  SelfUserGame = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_36;
  v21 = *(_DWORD *)(SelfUserGame + 96);
  SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_36;
  SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_36;
  v22 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
          id,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_36;
  SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  if ( !v22 )
    goto LABEL_36;
  if ( !SelfUserGame )
    goto LABEL_36;
  SelfUserGame = (int64_t)CombineSkillMaster__GetEntity(
                            (CombineSkillMaster_o *)SelfUserGame,
                            (int32_t)v22[7].klass,
                            this->fields.currentSkillLv,
                            0LL);
  if ( !SelfUserGame )
    goto LABEL_36;
  v23 = *(_QWORD *)(SelfUserGame + 32);
  if ( !v23 )
    goto LABEL_36;
  v24 = *(_DWORD *)(v23 + 24);
  v25 = *(_DWORD *)(SelfUserGame + 24);
  v35 = this;
  if ( v24 >= 1 )
  {
    v26 = *(_QWORD *)(SelfUserGame + 40);
    v27 = 0;
    v28 = 1;
    while ( 1 )
    {
      SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_36;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v29);
      SelfUserGame = NetworkManager__get_UserId(0LL);
      if ( v27 >= *(_DWORD *)(v23 + 24) )
LABEL_37:
        sub_1BCAA44(SelfUserGame, v20);
      if ( !MasterData_object )
        goto LABEL_36;
      SelfUserGame = UserItemMaster__TryGetEntity(
                       (UserItemMaster_o *)MasterData_object,
                       &entity,
                       SelfUserGame,
                       *(_DWORD *)(v23 + 4LL * (int)v27 + 32),
                       0LL);
      if ( (SelfUserGame & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_36;
        num = entity->fields.num;
      }
      else
      {
        num = 0;
      }
      if ( !v26 )
        goto LABEL_36;
      if ( v27 >= *(_DWORD *)(v26 + 24) )
        goto LABEL_37;
      if ( num >= *(_DWORD *)(v26 + 4LL * (int)v27 + 32) )
      {
        v28 = (int)++v27 < v24;
        if ( v24 != v27 )
          continue;
      }
      goto LABEL_28;
    }
  }
  v28 = 0;
LABEL_28:
  SelfUserGame = (int64_t)this->fields.statusLb;
  v32 = v21 >= v25;
  if ( !SelfUserGame
    || (SelfUserGame = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SelfUserGame, 0LL)) == 0 )
  {
LABEL_36:
    sub_1BCAA3C(SelfUserGame, v20);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, v32 && !v28, 0LL);
  if ( v32 && !v28 )
  {
    statusLb = v35->fields.statusLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
    SelfUserGame = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8881/*"MSG_ABLED_SKILLUP"*/, 0LL);
    if ( !statusLb )
      goto LABEL_36;
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A11AC8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A11A70;
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
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  char v14[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v14[0] = isDecide;
  v13 = idx;
  if ( (byte_4B19EA8 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isDecide, *(_QWORD *)&idx);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    byte_4B19EA8 = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall ServantSkillInfoIconComponent_ClickDelegate__EndInvoke(
        ServantSkillInfoIconComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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