void __fastcall ServantSkillInfoIconComponent___ctor(ServantSkillInfoIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantSkillInfoIconComponent__Clear(ServantSkillInfoIconComponent_o *this, const MethodInfo *method)
{
  SkillIconComponent_o *skillIconComp; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  UnityEngine_Object_o *skillStrengthStatus; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A5ED36 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ED36 = 1;
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v4, v5);
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
      UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
      return;
    }
LABEL_17:
    sub_1B8880C(skillIconComp, method);
  }
}


void __fastcall ServantSkillInfoIconComponent__ClearAppendSkillInfo(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  SkillIconComponent_o *skillIconComp; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  UnityEngine_Object_o *lineImg; // x20
  UnityEngine_Object_o *lockImg; // x20

  if ( (byte_4A5ED37 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ED37 = 1;
  }
  skillIconComp = this->fields.skillIconComp;
  if ( !skillIconComp )
    goto LABEL_22;
  SkillIconComponent__Clear(skillIconComp, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.statusLb;
  if ( !skillIconComp )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.levelLabel;
  if ( !skillIconComp )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.chargeTitleLb;
  if ( !skillIconComp )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.chargeTimeLb;
  if ( !skillIconComp )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.callbackFunc = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v4, v5);
  skillIconComp = (SkillIconComponent_o *)this->fields.skillNameLabel;
  *(_QWORD *)&this->fields.currentSkillId = 0LL;
  if ( !skillIconComp )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  lineImg = (UnityEngine_Object_o *)this->fields.lineImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lineImg, 0LL, 0LL) )
  {
    skillIconComp = (SkillIconComponent_o *)this->fields.lineImg;
    if ( !skillIconComp )
      goto LABEL_22;
    skillIconComp = (SkillIconComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)skillIconComp,
                                              0LL);
    if ( !skillIconComp )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillIconComp, 0, 0LL);
  }
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
        return;
      }
    }
LABEL_22:
    sub_1B8880C(skillIconComp, method);
  }
}


void __fastcall ServantSkillInfoIconComponent__OnClickSkill(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ServantSkillInfoIconComponent_ClickDelegate_o *callbackFunc; // x8

  if ( (byte_4A5ED33 & 1) == 0 )
  {
    sub_1B885B0(&Method_ServantSkillInfoIconComponent_OnClickSkill__);
    byte_4A5ED33 = 1;
  }
  if ( this->fields.currentSkillId >= 1 )
  {
    v3 = Method_ServantSkillInfoIconComponent_OnClickSkill__;
    if ( (*((_BYTE *)Method_ServantSkillInfoIconComponent_OnClickSkill__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSkillInfoIconComponent_OnClickSkill__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w20
  System_String_o *v8; // x21
  System_String_o *v9; // x22
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  System_String_o *Empty; // x20
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_String_o *v19; // x19
  Il2CppObject *v20; // x0
  int32_t chargeTurn; // [xsp+Ch] [xbp-74h] BYREF
  SkillLvEntity_o *entity; // [xsp+10h] [xbp-70h] BYREF
  System_String_o *detail; // [xsp+18h] [xbp-68h] BYREF
  System_String_o *name; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_4A5ED34 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_ServantSkillInfoIconComponent_OnClickSkillDetail__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_8522/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_1B885B0(&StringLiteral_2983/*"BATTLE_SKILLCHARGETURN"*/);
    byte_4A5ED34 = 1;
  }
  name = 0LL;
  entity = 0LL;
  detail = 0LL;
  if ( this->fields.currentSkillId >= 1 )
  {
    v3 = Method_ServantSkillInfoIconComponent_OnClickSkillDetail__;
    if ( (*((_BYTE *)Method_ServantSkillInfoIconComponent_OnClickSkillDetail__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSkillInfoIconComponent_OnClickSkillDetail__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
                                      this->fields.currentSkillId,
                                      (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v7 = this->fields.currentSkillLv ? this->fields.currentSkillLv : 1;
        if ( Instance )
        {
          SkillEntity__getSkillMessageInfo((SkillEntity_o *)Instance, &name, &detail, v7, 0LL);
          v8 = name;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v9 = LocalizationManager__Get((System_String_o *)StringLiteral_8522/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
          chargeTurn = v7;
          v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn, v10, v11, v12);
          v14 = System_String__Format(v9, v13, 0LL);
          name = System_String__Concat_61718292(v8, (System_String_o *)StringLiteral_117/*" "*/, v14, 0LL);
          Empty = string_TypeInfo->static_fields->Empty;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillLvMaster___);
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
                Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2983/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
                if ( !entity )
                  goto LABEL_27;
                v19 = (System_String_o *)Instance;
                chargeTurn = entity->fields.chargeTurn;
                v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn, v16, v17, v18);
                Empty = System_String__Format(v19, v20, 0LL);
              }
            }
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B8880C(Instance, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillInfoIconComponent__SetSkillIconInfo(
        ServantSkillInfoIconComponent_o *this,
        int32_t idx,
        int32_t skillId,
        int32_t skillLv,
        ServantSkillInfoIconComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  SkillIconComponent_o *skillIconComp; // x0
  UnityEngine_Object_o *lockImg; // x21
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A5ED30 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5ED30 = 1;
  }
  skillIconComp = this->fields.skillIconComp;
  this->fields.index = idx;
  this->fields.currentSkillId = skillId;
  this->fields.currentSkillLv = skillLv;
  if ( !skillIconComp )
    goto LABEL_17;
  SkillIconComponent__Set_38235592(skillIconComp, skillId, skillLv, 0LL);
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
    sub_1B8880C(skillIconComp, *(_QWORD *)&idx);
  }
LABEL_16:
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillInfoIconComponent__SetSkillIconStatusDisp(
        ServantSkillInfoIconComponent_o *this,
        int32_t skillLv,
        bool isEnableCombine,
        const MethodInfo *method)
{
  UIWidget_o *skillIconSprite; // x0
  struct UILabel_o *statusLb; // x19
  System_String_o *v9; // x1
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5ED32 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8753/*"MSG_ABLED_SKILLUP"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ED32 = 1;
  }
  skillIconSprite = (UIWidget_o *)this->fields.skillIconSprite;
  if ( !skillLv )
  {
    if ( skillIconSprite )
    {
      v11.fields.r = 0.32812;
      v11.fields.g = 0.32812;
      v11.fields.b = 0.32812;
      v11.fields.a = 1.0;
      UIWidget__set_color(skillIconSprite, v11, 0LL);
      skillIconSprite = (UIWidget_o *)this->fields.lockImg;
      if ( skillIconSprite )
      {
        skillIconSprite = (UIWidget_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)skillIconSprite,
                                          0LL);
        if ( skillIconSprite )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillIconSprite, 1, 0LL);
          skillIconSprite = (UIWidget_o *)this->fields.levelLabel;
          if ( skillIconSprite )
          {
            v9 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_20;
          }
        }
      }
    }
LABEL_22:
    sub_1B8880C(skillIconSprite, *(_QWORD *)&skillLv);
  }
  if ( !skillIconSprite )
    goto LABEL_22;
  v10.fields.r = 1.0;
  v10.fields.g = 1.0;
  v10.fields.b = 1.0;
  v10.fields.a = 1.0;
  UIWidget__set_color(skillIconSprite, v10, 0LL);
  skillIconSprite = (UIWidget_o *)this->fields.lockImg;
  if ( !skillIconSprite )
    goto LABEL_22;
  skillIconSprite = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillIconSprite, 0LL);
  if ( !skillIconSprite )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillIconSprite, 0, 0LL);
  skillIconSprite = (UIWidget_o *)this->fields.statusLb;
  if ( !skillIconSprite )
    goto LABEL_22;
  skillIconSprite = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillIconSprite, 0LL);
  if ( !skillIconSprite )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillIconSprite, 1, 0LL);
  if ( skillLv <= 9 && isEnableCombine )
  {
    statusLb = this->fields.statusLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    skillIconSprite = (UIWidget_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8753/*"MSG_ABLED_SKILLUP"*/, 0LL);
    if ( statusLb )
    {
      v9 = (System_String_o *)skillIconSprite;
      skillIconSprite = (UIWidget_o *)statusLb;
LABEL_20:
      UILabel__set_text((UILabel_o *)skillIconSprite, v9, 0LL);
      return;
    }
    goto LABEL_22;
  }
}


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
  void *skillNameLabel; // x0
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x23
  UnityEngine_Object_o *skillStrengthStatus; // x24
  UnityEngine_Object_o *gameObject; // x24
  System_String_o *PATH; // x24
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  UILabel_o *levelLabel; // x22
  System_String_o *v30; // x23
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x21
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  Il2CppObject *v38; // x0
  SkillEntity_o *v39; // x20
  int32_t v40; // w22
  UILabel_o *chargeTitleLb; // x21
  UILabel_o *chargeTimeLb; // x21
  const MethodInfo *v43; // x2
  int32_t v44; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v45; // [xsp+8h] [xbp-58h] BYREF
  int32_t SkillChargeTime; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector2Int_o v47; // 0:x6.8

  if ( (byte_4A5ED2F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantSkillStrengthStatus_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_5050/*"DISP_SKLL_LV"*/);
    sub_1B885B0(&StringLiteral_12143/*"SKILLCHARGETURN_TXT"*/);
    byte_4A5ED2F = 1;
  }
  SkillChargeTime = 0;
  ServantSkillInfoIconComponent__SetSkillIconInfo(this, idx, skillId, skillLv, callback, (const MethodInfo *)skillName);
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
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
  }
  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  skillNameLabel = this->fields.skillNameLabel;
  if ( !skillNameLabel )
    goto LABEL_30;
  PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillNameLabel, 0LL);
  skillNameLabel = BaseMonoBehaviour__createObject_38240928((BaseMonoBehaviour_o *)this, PATH, transform, 0LL, 0LL);
  if ( !skillNameLabel )
    goto LABEL_30;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)skillNameLabel,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
  *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)Component_object;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.skillStrengthStatus,
    (int32_t)Component_object,
    v27,
    v28);
  skillNameLabel = *p_skillStrengthStatus;
  if ( !*p_skillStrengthStatus )
    goto LABEL_30;
  v47 = (UnityEngine_Vector2Int_o)0x1000000012LL;
  ServantSkillStrengthStatus__Set(
    (ServantSkillStrengthStatus_o *)skillNameLabel,
    this->fields.skillNameLabel,
    statusKind,
    skillRecord,
    18,
    -7,
    v47,
    0LL);
  levelLabel = this->fields.levelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_5050/*"DISP_SKLL_LV"*/, 0LL);
  v45 = skillLv;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v31, v32, v33);
  v44 = skillMaxLv;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v35, v36, v37);
  skillNameLabel = System_String__Format_61721404(v30, v34, v38, 0LL);
  if ( !levelLabel )
    goto LABEL_30;
  UILabel__set_text(levelLabel, (System_String_o *)skillNameLabel, 0LL);
  skillNameLabel = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillNameLabel )
    goto LABEL_30;
  skillNameLabel = DataManager__GetMasterData_object_(
                     (DataManager_o *)skillNameLabel,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillNameLabel )
    goto LABEL_30;
  skillNameLabel = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)skillNameLabel,
                     this->fields.currentSkillId,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !skillNameLabel )
    goto LABEL_30;
  v39 = (SkillEntity_o *)skillNameLabel;
  v40 = *((_DWORD *)skillNameLabel + 10);
  chargeTitleLb = this->fields.chargeTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  skillNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_12143/*"SKILLCHARGETURN_TXT"*/, 0LL);
  if ( !chargeTitleLb
    || (UILabel__set_text(chargeTitleLb, (System_String_o *)skillNameLabel, 0LL),
        chargeTimeLb = this->fields.chargeTimeLb,
        SkillChargeTime = SkillEntity__getSkillChargeTime(v39, this->fields.currentSkillLv, 0LL),
        skillNameLabel = System_Int32__ToString((int32_t)&SkillChargeTime, 0LL),
        !chargeTimeLb)
    || (UILabel__set_text(chargeTimeLb, (System_String_o *)skillNameLabel, 0LL),
        (skillNameLabel = this->fields.chargeInfoObj) == 0LL) )
  {
LABEL_30:
    sub_1B8880C(skillNameLabel, v19);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillNameLabel, 1, 0LL);
  if ( this->fields.currentSkillLv < v40 )
    ServantSkillInfoIconComponent__checkEnableCombine(this, baseSvtId, v43);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillInfoIconComponent__SetSkillInfo_45392452(
        ServantSkillInfoIconComponent_o *this,
        int32_t idx,
        System_String_o *skillName,
        int32_t skillId,
        int32_t skillLv,
        int32_t skillMaxLv,
        ServantSkillInfoIconComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  __int64 v15; // x1
  UILabel_o *skillNameLabel; // x0
  UILabel_o *levelLabel; // x21
  System_String_o *v18; // x22
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x20
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  int32_t v27; // [xsp+8h] [xbp-48h] BYREF
  int32_t v28; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5ED31 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_2100/*"APPEND_SKILL_ICON_INFO_LV"*/);
    byte_4A5ED31 = 1;
  }
  ServantSkillInfoIconComponent__SetSkillIconInfo(
    this,
    idx,
    skillId,
    skillLv,
    callback,
    *(const MethodInfo **)&skillMaxLv);
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
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_2100/*"APPEND_SKILL_ICON_INFO_LV"*/, 0LL);
  v28 = skillLv;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v19, v20, v21);
  v27 = skillMaxLv;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v23, v24, v25);
  skillNameLabel = (UILabel_o *)System_String__Format_61721404(v18, v22, v26, 0LL);
  if ( !levelLabel )
LABEL_10:
    sub_1B8880C(skillNameLabel, v15);
  UILabel__set_text(levelLabel, (System_String_o *)skillNameLabel, 0LL);
}


void __fastcall ServantSkillInfoIconComponent__checkEnableCombine(
        ServantSkillInfoIconComponent_o *this,
        int32_t id,
        const MethodInfo *method)
{
  int64_t SelfUserGame; // x0
  __int64 v6; // x1
  int v7; // w21
  Il2CppObject *v8; // x20
  __int64 v9; // x25
  int v10; // w26
  int v11; // w23
  __int64 v12; // x28
  unsigned int v13; // w27
  _BOOL4 v14; // w24
  Il2CppObject *MasterData_object; // x20
  int32_t num; // w8
  _BOOL4 v17; // w19
  UILabel_o *statusLb; // x19
  ServantSkillInfoIconComponent_o *v19; // [xsp+10h] [xbp-70h]
  UserItemEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A5ED35 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CombineSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_8753/*"MSG_ABLED_SKILLUP"*/);
    byte_4A5ED35 = 1;
  }
  entity = 0LL;
  SelfUserGame = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_36;
  v7 = *(_DWORD *)(SelfUserGame + 96);
  SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_36;
  SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_36;
  v8 = DataMasterBase_object__object__int___GetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
         id,
         (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_36;
  SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  if ( !v8 )
    goto LABEL_36;
  if ( !SelfUserGame )
    goto LABEL_36;
  SelfUserGame = (int64_t)CombineSkillMaster__GetEntity(
                            (CombineSkillMaster_o *)SelfUserGame,
                            (int32_t)v8[7].klass,
                            this->fields.currentSkillLv,
                            0LL);
  if ( !SelfUserGame )
    goto LABEL_36;
  v9 = *(_QWORD *)(SelfUserGame + 32);
  if ( !v9 )
    goto LABEL_36;
  v10 = *(_DWORD *)(v9 + 24);
  v11 = *(_DWORD *)(SelfUserGame + 24);
  v19 = this;
  if ( v10 >= 1 )
  {
    v12 = *(_QWORD *)(SelfUserGame + 40);
    v13 = 0;
    v14 = 1;
    while ( 1 )
    {
      SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_36;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      SelfUserGame = NetworkManager__get_UserId(0LL);
      if ( v13 >= *(_DWORD *)(v9 + 24) )
LABEL_37:
        sub_1B88814(SelfUserGame, v6);
      if ( !MasterData_object )
        goto LABEL_36;
      SelfUserGame = UserItemMaster__TryGetEntity(
                       (UserItemMaster_o *)MasterData_object,
                       &entity,
                       SelfUserGame,
                       *(_DWORD *)(v9 + 4LL * (int)v13 + 32),
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
      if ( !v12 )
        goto LABEL_36;
      if ( v13 >= *(_DWORD *)(v12 + 24) )
        goto LABEL_37;
      if ( num >= *(_DWORD *)(v12 + 4LL * (int)v13 + 32) )
      {
        v14 = (int)++v13 < v10;
        if ( v10 != v13 )
          continue;
      }
      goto LABEL_28;
    }
  }
  v14 = 0;
LABEL_28:
  SelfUserGame = (int64_t)this->fields.statusLb;
  v17 = v7 >= v11;
  if ( !SelfUserGame
    || (SelfUserGame = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SelfUserGame, 0LL)) == 0 )
  {
LABEL_36:
    sub_1B8880C(SelfUserGame, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, v17 && !v14, 0LL);
  if ( v17 && !v14 )
  {
    statusLb = v19->fields.statusLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserGame = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8753/*"MSG_ABLED_SKILLUP"*/, 0LL);
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
void __fastcall ServantSkillInfoIconComponent__setDispSelectMskImg(
        ServantSkillInfoIconComponent_o *this,
        bool isShow,
        const MethodInfo *method)
{
  UnityEngine_Component_o *noSelectMskImg; // x0

  noSelectMskImg = (UnityEngine_Component_o *)this->fields.noSelectMskImg;
  if ( !noSelectMskImg
    || (noSelectMskImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(noSelectMskImg, 0LL)) == 0LL )
  {
    sub_1B8880C(noSelectMskImg, isShow);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)noSelectMskImg, isShow, 0LL);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19D3520;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D34C8;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  char v15[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v15[0] = isDecide;
  v14 = idx;
  if ( (byte_4A5ED38 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    byte_4A5ED38 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(bool_TypeInfo, v15, *(_QWORD *)&idx, callback, object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall ServantSkillInfoIconComponent_ClickDelegate__EndInvoke(
        ServantSkillInfoIconComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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