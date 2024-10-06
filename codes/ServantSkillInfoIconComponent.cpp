void __fastcall ServantSkillInfoIconComponent___ctor(ServantSkillInfoIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantSkillInfoIconComponent__Clear(ServantSkillInfoIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SkillIconComponent_o *skillIconComp; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  UnityEngine_Object_o *skillStrengthStatus; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A73A4F & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    sub_1B90010(&StringLiteral_1/*""*/, v3);
    byte_4A73A4F = 1;
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v5, v6);
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
      UnityEngine_Object__Destroy_69539440(gameObject, 0LL);
      return;
    }
LABEL_17:
    sub_1B9026C(skillIconComp, method);
  }
}


void __fastcall ServantSkillInfoIconComponent__ClearAppendSkillInfo(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  SkillIconComponent_o *skillIconComp; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  UnityEngine_Object_o *lineImg; // x20
  UnityEngine_Object_o *lockImg; // x20

  if ( (byte_4A73A50 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    sub_1B90010(&StringLiteral_1/*""*/, v3);
    byte_4A73A50 = 1;
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v5, v6);
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
    sub_1B9026C(skillIconComp, method);
  }
}


void __fastcall ServantSkillInfoIconComponent__OnClickSkill(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ServantSkillInfoIconComponent_ClickDelegate_o *callbackFunc; // x8

  if ( (byte_4A73A4C & 1) == 0 )
  {
    sub_1B90010(&Method_ServantSkillInfoIconComponent_OnClickSkill__, method);
    byte_4A73A4C = 1;
  }
  if ( this->fields.currentSkillId >= 1 )
  {
    v3 = Method_ServantSkillInfoIconComponent_OnClickSkill__;
    if ( (*((_BYTE *)Method_ServantSkillInfoIconComponent_OnClickSkill__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028(Method_ServantSkillInfoIconComponent_OnClickSkill__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
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

  if ( (byte_4A73A4D & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1B90010(&Method_DataManager_GetMaster_SkillLvMaster___, v3);
    sub_1B90010(&DataManager_TypeInfo, v4);
    sub_1B90010(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_1B90010(&int_TypeInfo, v6);
    sub_1B90010(&LocalizationManager_TypeInfo, v7);
    sub_1B90010(&Method_ServantSkillInfoIconComponent_OnClickSkillDetail__, v8);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B90010(&string_TypeInfo, v11);
    sub_1B90010(&StringLiteral_117/*" "*/, v12);
    sub_1B90010(&StringLiteral_8526/*"MASTER_EQSKILL_LV_TXT"*/, v13);
    sub_1B90010(&StringLiteral_2984/*"BATTLE_SKILLCHARGETURN"*/, v14);
    byte_4A73A4D = 1;
  }
  name = 0LL;
  entity = 0LL;
  detail = 0LL;
  if ( this->fields.currentSkillId >= 1 )
  {
    v15 = Method_ServantSkillInfoIconComponent_OnClickSkillDetail__;
    if ( (*((_BYTE *)Method_ServantSkillInfoIconComponent_OnClickSkillDetail__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1B90028(Method_ServantSkillInfoIconComponent_OnClickSkillDetail__);
    v16 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      this->fields.currentSkillId,
                                      (const MethodInfo_312C5A8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v19 = this->fields.currentSkillLv ? this->fields.currentSkillLv : 1;
        if ( Instance )
        {
          SkillEntity__getSkillMessageInfo((SkillEntity_o *)Instance, &name, &detail, v19, 0LL);
          v20 = name;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v21 = LocalizationManager__Get((System_String_o *)StringLiteral_8526/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
          chargeTurn = v19;
          v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn, v22, v23, v24);
          v26 = System_String__Format(v21, v25, 0LL);
          name = System_String__Concat_61798352(v20, (System_String_o *)StringLiteral_117/*" "*/, v26, 0LL);
          Empty = string_TypeInfo->static_fields->Empty;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_SkillLvMaster___);
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
                Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2984/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
                if ( !entity )
                  goto LABEL_27;
                v31 = (System_String_o *)Instance;
                chargeTurn = entity->fields.chargeTurn;
                v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn, v28, v29, v30);
                Empty = System_String__Format(v31, v32, 0LL);
              }
            }
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B9026C(Instance, v18);
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

  if ( (byte_4A73A49 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, *(_QWORD *)&idx);
    byte_4A73A49 = 1;
  }
  skillIconComp = this->fields.skillIconComp;
  this->fields.index = idx;
  this->fields.currentSkillId = skillId;
  this->fields.currentSkillLv = skillLv;
  if ( !skillIconComp )
    goto LABEL_17;
  SkillIconComponent__Set_38287712(skillIconComp, skillId, skillLv, 0LL);
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
    sub_1B9026C(skillIconComp, *(_QWORD *)&idx);
  }
LABEL_16:
  this->fields.callbackFunc = callback;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillInfoIconComponent__SetSkillIconStatusDisp(
        ServantSkillInfoIconComponent_o *this,
        int32_t skillLv,
        bool isEnableCombine,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UIWidget_o *skillIconSprite; // x0
  struct UILabel_o *statusLb; // x19
  System_String_o *v11; // x1
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A73A4B & 1) == 0 )
  {
    sub_1B90010(&LocalizationManager_TypeInfo, *(_QWORD *)&skillLv);
    sub_1B90010(&StringLiteral_8757/*"MSG_ABLED_SKILLUP"*/, v7);
    sub_1B90010(&StringLiteral_1/*""*/, v8);
    byte_4A73A4B = 1;
  }
  skillIconSprite = (UIWidget_o *)this->fields.skillIconSprite;
  if ( !skillLv )
  {
    if ( skillIconSprite )
    {
      v13.fields.r = 0.32812;
      v13.fields.g = 0.32812;
      v13.fields.b = 0.32812;
      v13.fields.a = 1.0;
      UIWidget__set_color(skillIconSprite, v13, 0LL);
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
            v11 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_20;
          }
        }
      }
    }
LABEL_22:
    sub_1B9026C(skillIconSprite, *(_QWORD *)&skillLv);
  }
  if ( !skillIconSprite )
    goto LABEL_22;
  v12.fields.r = 1.0;
  v12.fields.g = 1.0;
  v12.fields.b = 1.0;
  v12.fields.a = 1.0;
  UIWidget__set_color(skillIconSprite, v12, 0LL);
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
    skillIconSprite = (UIWidget_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8757/*"MSG_ABLED_SKILLUP"*/, 0LL);
    if ( statusLb )
    {
      v11 = (System_String_o *)skillIconSprite;
      skillIconSprite = (UIWidget_o *)statusLb;
LABEL_20:
      UILabel__set_text((UILabel_o *)skillIconSprite, v11, 0LL);
      return;
    }
    goto LABEL_22;
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
  int32_t v37; // w3
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
  int32_t v53; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v54; // [xsp+8h] [xbp-58h] BYREF
  int32_t SkillChargeTime; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector2Int_o v56; // 0:x6.8

  if ( (byte_4A73A48 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_SkillMaster___, *(_QWORD *)&idx);
    sub_1B90010(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v19);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v20);
    sub_1B90010(&int_TypeInfo, v21);
    sub_1B90010(&LocalizationManager_TypeInfo, v22);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v23);
    sub_1B90010(&ServantSkillStrengthStatus_TypeInfo, v24);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1B90010(&StringLiteral_5051/*"DISP_SKLL_LV"*/, v26);
    sub_1B90010(&StringLiteral_12168/*"SKILLCHARGETURN_TXT"*/, v27);
    byte_4A73A48 = 1;
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
    UnityEngine_Object__Destroy_69539440(gameObject, 0LL);
  }
  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  skillNameLabel = this->fields.skillNameLabel;
  if ( !skillNameLabel )
    goto LABEL_30;
  PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillNameLabel, 0LL);
  skillNameLabel = BaseMonoBehaviour__createObject_38293048((BaseMonoBehaviour_o *)this, PATH, transform, 0LL, 0LL);
  if ( !skillNameLabel )
    goto LABEL_30;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)skillNameLabel,
                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
  *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)Component_object;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.skillStrengthStatus,
    (int32_t)Component_object,
    v36,
    v37);
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
    0LL);
  levelLabel = this->fields.levelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_5051/*"DISP_SKLL_LV"*/, 0LL);
  v54 = skillLv;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v40, v41, v42);
  v53 = skillMaxLv;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v44, v45, v46);
  skillNameLabel = System_String__Format_61801464(v39, v43, v47, 0LL);
  if ( !levelLabel )
    goto LABEL_30;
  UILabel__set_text(levelLabel, (System_String_o *)skillNameLabel, 0LL);
  skillNameLabel = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillNameLabel )
    goto LABEL_30;
  skillNameLabel = DataManager__GetMasterData_object_(
                     (DataManager_o *)skillNameLabel,
                     (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillNameLabel )
    goto LABEL_30;
  skillNameLabel = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)skillNameLabel,
                     this->fields.currentSkillId,
                     (const MethodInfo_312C5A8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !skillNameLabel )
    goto LABEL_30;
  v48 = (SkillEntity_o *)skillNameLabel;
  v49 = *((_DWORD *)skillNameLabel + 10);
  chargeTitleLb = this->fields.chargeTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  skillNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_12168/*"SKILLCHARGETURN_TXT"*/, 0LL);
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
    sub_1B9026C(skillNameLabel, v28);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillNameLabel, 1, 0LL);
  if ( this->fields.currentSkillLv < v49 )
    ServantSkillInfoIconComponent__checkEnableCombine(this, baseSvtId, v52);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillInfoIconComponent__SetSkillInfo_45449000(
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
  __int64 v16; // x1
  __int64 v17; // x1
  UILabel_o *skillNameLabel; // x0
  UILabel_o *levelLabel; // x21
  System_String_o *v20; // x22
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x20
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x0
  int32_t v29; // [xsp+8h] [xbp-48h] BYREF
  int32_t v30; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A73A4A & 1) == 0 )
  {
    sub_1B90010(&int_TypeInfo, *(_QWORD *)&idx);
    sub_1B90010(&LocalizationManager_TypeInfo, v15);
    sub_1B90010(&StringLiteral_2101/*"APPEND_SKILL_ICON_INFO_LV"*/, v16);
    byte_4A73A4A = 1;
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
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2101/*"APPEND_SKILL_ICON_INFO_LV"*/, 0LL);
  v30 = skillLv;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v21, v22, v23);
  v29 = skillMaxLv;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v25, v26, v27);
  skillNameLabel = (UILabel_o *)System_String__Format_61801464(v20, v24, v28, 0LL);
  if ( !levelLabel )
LABEL_10:
    sub_1B9026C(skillNameLabel, v17);
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
  int64_t SelfUserGame; // x0
  __int64 v13; // x1
  int v14; // w21
  Il2CppObject *v15; // x20
  __int64 v16; // x25
  int v17; // w26
  int v18; // w23
  __int64 v19; // x28
  unsigned int v20; // w27
  _BOOL4 v21; // w24
  Il2CppObject *MasterData_object; // x20
  int32_t num; // w8
  _BOOL4 v24; // w19
  UILabel_o *statusLb; // x19
  ServantSkillInfoIconComponent_o *v26; // [xsp+10h] [xbp-70h]
  UserItemEntity_o *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A73A4E & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_CombineSkillMaster___, *(_QWORD *)&id);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1B90010(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1B90010(&LocalizationManager_TypeInfo, v8);
    sub_1B90010(&NetworkManager_TypeInfo, v9);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B90010(&StringLiteral_8757/*"MSG_ABLED_SKILLUP"*/, v11);
    byte_4A73A4E = 1;
  }
  entity = 0LL;
  SelfUserGame = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_36;
  v14 = *(_DWORD *)(SelfUserGame + 96);
  SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_36;
  SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_36;
  v15 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)SelfUserGame,
          id,
          (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_36;
  SelfUserGame = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  if ( !v15 )
    goto LABEL_36;
  if ( !SelfUserGame )
    goto LABEL_36;
  SelfUserGame = (int64_t)CombineSkillMaster__GetEntity(
                            (CombineSkillMaster_o *)SelfUserGame,
                            (int32_t)v15[7].klass,
                            this->fields.currentSkillLv,
                            0LL);
  if ( !SelfUserGame )
    goto LABEL_36;
  v16 = *(_QWORD *)(SelfUserGame + 32);
  if ( !v16 )
    goto LABEL_36;
  v17 = *(_DWORD *)(v16 + 24);
  v18 = *(_DWORD *)(SelfUserGame + 24);
  v26 = this;
  if ( v17 >= 1 )
  {
    v19 = *(_QWORD *)(SelfUserGame + 40);
    v20 = 0;
    v21 = 1;
    while ( 1 )
    {
      SelfUserGame = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_36;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      SelfUserGame = NetworkManager__get_UserId(0LL);
      if ( v20 >= *(_DWORD *)(v16 + 24) )
LABEL_37:
        sub_1B90274(SelfUserGame, v13);
      if ( !MasterData_object )
        goto LABEL_36;
      SelfUserGame = UserItemMaster__TryGetEntity(
                       (UserItemMaster_o *)MasterData_object,
                       &entity,
                       SelfUserGame,
                       *(_DWORD *)(v16 + 4LL * (int)v20 + 32),
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
      if ( !v19 )
        goto LABEL_36;
      if ( v20 >= *(_DWORD *)(v19 + 24) )
        goto LABEL_37;
      if ( num >= *(_DWORD *)(v19 + 4LL * (int)v20 + 32) )
      {
        v21 = (int)++v20 < v17;
        if ( v17 != v20 )
          continue;
      }
      goto LABEL_28;
    }
  }
  v21 = 0;
LABEL_28:
  SelfUserGame = (int64_t)this->fields.statusLb;
  v24 = v14 >= v18;
  if ( !SelfUserGame
    || (SelfUserGame = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SelfUserGame, 0LL)) == 0 )
  {
LABEL_36:
    sub_1B9026C(SelfUserGame, v13);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, v24 && !v21, 0LL);
  if ( v24 && !v21 )
  {
    statusLb = v26->fields.statusLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserGame = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8757/*"MSG_ABLED_SKILLUP"*/, 0LL);
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
    sub_1B9026C(noSelectMskImg, isShow);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B900D0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B90288(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B90138(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19DA8D8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19DA880;
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
  if ( (byte_4A73A51 & 1) == 0 )
  {
    sub_1B90010(&bool_TypeInfo, isDecide);
    sub_1B90010(&int_TypeInfo, v9);
    byte_4A73A51 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(bool_TypeInfo, v16, *(_QWORD *)&idx, callback, object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1B8FFC4(this, v14, callback, object);
}


void __fastcall ServantSkillInfoIconComponent_ClickDelegate__EndInvoke(
        ServantSkillInfoIconComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B8FFC8(result, 0LL, method);
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