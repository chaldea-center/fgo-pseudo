void __fastcall ServantSkillInfoIconComponent___ctor(ServantSkillInfoIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantSkillInfoIconComponent__Clear(ServantSkillInfoIconComponent_o *this, const MethodInfo *method)
{
  SkillIconComponent_o *skillIconComp; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  UnityEngine_Object_o *skillStrengthStatus; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42B21A3 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B21A3 = 1;
  }
  skillIconComp = this->fields.skillIconComp;
  if ( !skillIconComp )
    goto LABEL_19;
  SkillIconComponent__Clear(skillIconComp, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.statusLb;
  if ( !skillIconComp )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.levelLabel;
  if ( !skillIconComp )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.chargeTitleLb;
  if ( !skillIconComp )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.chargeTimeLb;
  if ( !skillIconComp )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.callbackFunc = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
  skillIconComp = (SkillIconComponent_o *)this->fields.skillNameLabel;
  *(_QWORD *)&this->fields.currentSkillId = 0LL;
  if ( !skillIconComp )
    goto LABEL_19;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
  {
    skillIconComp = (SkillIconComponent_o *)this->fields.skillStrengthStatus;
    if ( skillIconComp )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)skillIconComp,
                                             0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
      return;
    }
LABEL_19:
    sub_B52A5C(skillIconComp, method);
  }
}


void __fastcall ServantSkillInfoIconComponent__ClearAppendSkillInfo(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  SkillIconComponent_o *skillIconComp; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  UnityEngine_Object_o *lineImg; // x20
  UnityEngine_Object_o *lockImg; // x20

  if ( (byte_42B21A4 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B21A4 = 1;
  }
  skillIconComp = this->fields.skillIconComp;
  if ( !skillIconComp )
    goto LABEL_24;
  SkillIconComponent__Clear(skillIconComp, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.statusLb;
  if ( !skillIconComp )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.levelLabel;
  if ( !skillIconComp )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.chargeTitleLb;
  if ( !skillIconComp )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.chargeTimeLb;
  if ( !skillIconComp )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.callbackFunc = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
  skillIconComp = (SkillIconComponent_o *)this->fields.skillNameLabel;
  *(_QWORD *)&this->fields.currentSkillId = 0LL;
  if ( !skillIconComp )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)skillIconComp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  lineImg = (UnityEngine_Object_o *)this->fields.lineImg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lineImg, 0LL, 0LL) )
  {
    skillIconComp = (SkillIconComponent_o *)this->fields.lineImg;
    if ( !skillIconComp )
      goto LABEL_24;
    skillIconComp = (SkillIconComponent_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)skillIconComp,
                                              0LL);
    if ( !skillIconComp )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillIconComp, 0, 0LL);
  }
  lockImg = (UnityEngine_Object_o *)this->fields.lockImg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
LABEL_24:
    sub_B52A5C(skillIconComp, method);
  }
}


void __fastcall ServantSkillInfoIconComponent__OnClickSkill(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  ServantSkillInfoIconComponent_ClickDelegate_o *callbackFunc; // x0

  if ( (byte_42B21A0 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B21A0 = 1;
  }
  if ( this->fields.currentSkillId >= 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
  }
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ServantSkillInfoIconComponent_ClickDelegate__Invoke(callbackFunc, 1, this->fields.index, 0LL);
}


void __fastcall ServantSkillInfoIconComponent__OnClickSkillDetail(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  int32_t v5; // w20
  System_String_o *v6; // x21
  System_String_o *v7; // x22
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  System_String_o *Empty; // x20
  System_String_o *v11; // x19
  Il2CppObject *v12; // x0
  int32_t chargeTurn; // [xsp+4h] [xbp-4Ch] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42B21A1 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&StringLiteral_81/*" "*/);
    sub_B52984(&StringLiteral_8682/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_B52984(&StringLiteral_2550/*"BATTLE_SKILLCHARGETURN"*/);
    byte_42B21A1 = 1;
  }
  detail = 0LL;
  name = 0LL;
  entity = 0LL;
  if ( this->fields.currentSkillId >= 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      this->fields.currentSkillId,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v5 = this->fields.currentSkillLv ? this->fields.currentSkillLv : 1;
        if ( Instance )
        {
          SkillEntity__getSkillMessageInfo((SkillEntity_o *)Instance, &name, &detail, v5, 0LL);
          v6 = name;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v7 = LocalizationManager__Get((System_String_o *)StringLiteral_8682/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
          chargeTurn = v5;
          v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn);
          v9 = System_String__Format(v7, v8, 0LL);
          name = System_String__Concat_44570600(v6, (System_String_o *)StringLiteral_81/*" "*/, v9, 0LL);
          Empty = string_TypeInfo->static_fields->Empty;
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillLvMaster___);
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
                goto LABEL_31;
              if ( entity->fields.chargeTurn >= 1 )
              {
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2550/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
                if ( !entity )
                  goto LABEL_31;
                v11 = (System_String_o *)Instance;
                chargeTurn = entity->fields.chargeTurn;
                v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn);
                Empty = System_String__Format(v11, v12, 0LL);
              }
            }
            Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( Instance )
            {
              CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, Empty, detail, 1, 1, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_31:
    sub_B52A5C(Instance, v4);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42B219D & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B219D = 1;
  }
  skillIconComp = this->fields.skillIconComp;
  this->fields.index = idx;
  this->fields.currentSkillId = skillId;
  this->fields.currentSkillLv = skillLv;
  if ( !skillIconComp )
    goto LABEL_18;
  SkillIconComponent__Set_26537744(skillIconComp, skillId, skillLv, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.skillIconSprite;
  if ( !skillIconComp )
    goto LABEL_18;
  skillIconComp = (SkillIconComponent_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)skillIconComp,
                                            0LL);
  if ( !skillIconComp )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillIconComp, 1, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.levelInfo;
  if ( !skillIconComp )
    goto LABEL_18;
  skillIconComp = (SkillIconComponent_o *)UnityEngine_GameObject__get_gameObject(
                                            (UnityEngine_GameObject_o *)skillIconComp,
                                            0LL);
  if ( !skillIconComp )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillIconComp, 1, 0LL);
  skillIconComp = (SkillIconComponent_o *)this->fields.statusLb;
  if ( !skillIconComp )
    goto LABEL_18;
  skillIconComp = (SkillIconComponent_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)skillIconComp,
                                            0LL);
  if ( !skillIconComp )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillIconComp, 0, 0LL);
  lockImg = (UnityEngine_Object_o *)this->fields.lockImg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
        goto LABEL_17;
      }
    }
LABEL_18:
    sub_B52A5C(skillIconComp, *(_QWORD *)&idx);
  }
LABEL_17:
  this->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillInfoIconComponent__SetSkillIconStatusDisp(
        ServantSkillInfoIconComponent_o *this,
        int32_t skillLv,
        bool isEnableCombine,
        const MethodInfo *method)
{
  int v4; // s3
  float v5; // s4
  float v6; // s5
  float v7; // s6
  UIWidget_o *skillIconSprite; // x22
  float v12; // s0
  float v13; // s1
  float v14; // s2
  UnityEngine_Component_o *lockImg; // x0
  __int64 v16; // x1
  struct UILabel_o *statusLb; // x19
  System_String_o *v18; // x1
  float v19; // s0
  float v20; // s1
  float v21; // s2
  UnityEngine_Color_o v22; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_42B219F & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_8883/*"MSG_ABLED_SKILLUP"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B219F = 1;
  }
  skillIconSprite = (UIWidget_o *)this->fields.skillIconSprite;
  if ( !skillLv )
  {
    v19 = 0.32812;
    v20 = 0.32812;
    v21 = 0.32812;
    v22 = (UnityEngine_Color_o)0LL;
    UnityEngine_Color___ctor_41463668(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, (const MethodInfo *)&v22);
    if ( skillIconSprite )
    {
      UIWidget__set_color(skillIconSprite, v22, 0LL);
      lockImg = (UnityEngine_Component_o *)this->fields.lockImg;
      if ( lockImg )
      {
        lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0LL);
        if ( lockImg )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 1, 0LL);
          lockImg = (UnityEngine_Component_o *)this->fields.levelLabel;
          if ( lockImg )
          {
            v18 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_21;
          }
        }
      }
    }
LABEL_23:
    sub_B52A5C(lockImg, v16);
  }
  v12 = 1.0;
  v13 = 1.0;
  v14 = 1.0;
  *(_QWORD *)&v22.fields.r = 0LL;
  *(_QWORD *)&v22.fields.b = 0LL;
  UnityEngine_Color___ctor_41463668(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, (const MethodInfo *)&v22);
  if ( !skillIconSprite )
    goto LABEL_23;
  UIWidget__set_color(skillIconSprite, v22, 0LL);
  lockImg = (UnityEngine_Component_o *)this->fields.lockImg;
  if ( !lockImg )
    goto LABEL_23;
  lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0LL);
  if ( !lockImg )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 0, 0LL);
  lockImg = (UnityEngine_Component_o *)this->fields.statusLb;
  if ( !lockImg )
    goto LABEL_23;
  lockImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(lockImg, 0LL);
  if ( !lockImg )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)lockImg, 1, 0LL);
  if ( skillLv <= 9 && isEnableCombine )
  {
    statusLb = this->fields.statusLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    lockImg = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8883/*"MSG_ABLED_SKILLUP"*/, 0LL);
    if ( statusLb )
    {
      v18 = (System_String_o *)lockImg;
      lockImg = (UnityEngine_Component_o *)statusLb;
LABEL_21:
      UILabel__set_text((UILabel_o *)lockImg, v18, 0LL);
      return;
    }
    goto LABEL_23;
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
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UILabel_o *levelLabel; // x22
  System_String_o *v34; // x23
  Il2CppObject *v35; // x21
  Il2CppObject *v36; // x0
  SkillEntity_o *v37; // x20
  int32_t v38; // w22
  UILabel_o *chargeTitleLb; // x21
  UILabel_o *chargeTimeLb; // x21
  const MethodInfo *v41; // x2
  int32_t v42; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v43; // [xsp+18h] [xbp-48h] BYREF
  int32_t SkillChargeTime; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector2Int_o v45; // 0:x6.8

  if ( (byte_42B219C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ServantSkillStrengthStatus_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_4641/*"DISP_SKLL_LV"*/);
    sub_B52984(&StringLiteral_12335/*"SKILLCHARGETURN_TXT"*/);
    byte_42B219C = 1;
  }
  SkillChargeTime = 0;
  ServantSkillInfoIconComponent__SetSkillIconInfo(this, idx, skillId, skillLv, callback, (const MethodInfo *)skillName);
  skillNameLabel = this->fields.skillNameLabel;
  if ( !skillNameLabel )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)skillNameLabel, skillName, 0LL);
  p_skillStrengthStatus = &this->fields.skillStrengthStatus;
  skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
  {
    skillNameLabel = *p_skillStrengthStatus;
    if ( !*p_skillStrengthStatus )
      goto LABEL_35;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)skillNameLabel,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
  }
  if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  }
  skillNameLabel = this->fields.skillNameLabel;
  if ( !skillNameLabel )
    goto LABEL_35;
  PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillNameLabel, 0LL);
  skillNameLabel = BaseMonoBehaviour__createObject_19346208((BaseMonoBehaviour_o *)this, PATH, transform, 0LL, 0LL);
  if ( !skillNameLabel )
    goto LABEL_35;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)skillNameLabel,
                                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
  *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)Component_srcLineSprite;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.skillStrengthStatus,
    Component_srcLineSprite,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  skillNameLabel = *p_skillStrengthStatus;
  if ( !*p_skillStrengthStatus )
    goto LABEL_35;
  v45 = (UnityEngine_Vector2Int_o)0x1000000012LL;
  ServantSkillStrengthStatus__Set(
    (ServantSkillStrengthStatus_o *)skillNameLabel,
    this->fields.skillNameLabel,
    statusKind,
    skillRecord,
    18,
    -7,
    v45,
    0LL);
  levelLabel = this->fields.levelLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_4641/*"DISP_SKLL_LV"*/, 0LL);
  v43 = skillLv;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
  v42 = skillMaxLv;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
  skillNameLabel = System_String__Format_44563852(v34, v35, v36, 0LL);
  if ( !levelLabel )
    goto LABEL_35;
  UILabel__set_text(levelLabel, (System_String_o *)skillNameLabel, 0LL);
  skillNameLabel = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillNameLabel )
    goto LABEL_35;
  skillNameLabel = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)skillNameLabel,
                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillNameLabel )
    goto LABEL_35;
  skillNameLabel = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)skillNameLabel,
                     this->fields.currentSkillId,
                     (const MethodInfo_23E22D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !skillNameLabel )
    goto LABEL_35;
  v37 = (SkillEntity_o *)skillNameLabel;
  v38 = *((_DWORD *)skillNameLabel + 10);
  chargeTitleLb = this->fields.chargeTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  skillNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_12335/*"SKILLCHARGETURN_TXT"*/, 0LL);
  if ( !chargeTitleLb
    || (UILabel__set_text(chargeTitleLb, (System_String_o *)skillNameLabel, 0LL),
        chargeTimeLb = this->fields.chargeTimeLb,
        SkillChargeTime = SkillEntity__getSkillChargeTime(v37, this->fields.currentSkillLv, 0LL),
        skillNameLabel = System_Int32__ToString((int32_t)&SkillChargeTime, 0LL),
        !chargeTimeLb)
    || (UILabel__set_text(chargeTimeLb, (System_String_o *)skillNameLabel, 0LL),
        (skillNameLabel = this->fields.chargeInfoObj) == 0LL) )
  {
LABEL_35:
    sub_B52A5C(skillNameLabel, v19);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillNameLabel, 1, 0LL);
  if ( this->fields.currentSkillLv < v38 )
    ServantSkillInfoIconComponent__checkEnableCombine(this, baseSvtId, v41);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillInfoIconComponent__SetSkillInfo_29020452(
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
  Il2CppObject *v19; // x20
  Il2CppObject *v20; // x0
  int32_t v21; // [xsp+8h] [xbp-48h] BYREF
  int32_t v22; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42B219E & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_1725/*"APPEND_SKILL_ICON_INFO_LV"*/);
    byte_42B219E = 1;
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
    goto LABEL_11;
  UILabel__set_text(skillNameLabel, skillName, 0LL);
  skillNameLabel = (UILabel_o *)this->fields.lineImg;
  if ( !skillNameLabel )
    goto LABEL_11;
  skillNameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillNameLabel, 0LL);
  if ( !skillNameLabel )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillNameLabel, 1, 0LL);
  levelLabel = this->fields.levelLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_1725/*"APPEND_SKILL_ICON_INFO_LV"*/, 0LL);
  v22 = skillLv;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  v21 = skillMaxLv;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  skillNameLabel = (UILabel_o *)System_String__Format_44563852(v18, v19, v20, 0LL);
  if ( !levelLabel )
LABEL_11:
    sub_B52A5C(skillNameLabel, v15);
  UILabel__set_text(levelLabel, (System_String_o *)skillNameLabel, 0LL);
}


void __fastcall ServantSkillInfoIconComponent__checkEnableCombine(
        ServantSkillInfoIconComponent_o *this,
        int32_t id,
        const MethodInfo *method)
{
  int64_t SelfUserGame; // x0
  __int64 v6; // x1
  int v7; // w23
  WarEntity_o *v8; // x20
  __int64 v9; // x24
  int v10; // w25
  int v11; // w8
  __int64 v12; // x27
  __int64 v13; // x26
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int32_t num; // w8
  int v16; // w19
  _BOOL4 v17; // w20
  int v18; // w20
  UILabel_o *statusLb; // x19
  __int64 v20; // x0
  int v21; // [xsp+8h] [xbp-68h]
  UserItemEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42B21A2 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CombineSkillMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_8883/*"MSG_ABLED_SKILLUP"*/);
    byte_42B21A2 = 1;
  }
  entity = 0LL;
  SelfUserGame = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_40;
  v7 = *(_DWORD *)(SelfUserGame + 96);
  SelfUserGame = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_40;
  SelfUserGame = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_40;
  v8 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)SelfUserGame,
         id,
         (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  SelfUserGame = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_40;
  SelfUserGame = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  if ( !v8 )
    goto LABEL_40;
  if ( !SelfUserGame )
    goto LABEL_40;
  SelfUserGame = (int64_t)CombineSkillMaster__GetEntity(
                            (CombineSkillMaster_o *)SelfUserGame,
                            (int32_t)v8->fields.coordinates,
                            this->fields.currentSkillLv,
                            0LL);
  if ( !SelfUserGame )
    goto LABEL_40;
  v9 = *(_QWORD *)(SelfUserGame + 32);
  if ( !v9 )
    goto LABEL_40;
  v10 = *(_DWORD *)(v9 + 24);
  v11 = *(_DWORD *)(SelfUserGame + 24);
  if ( v10 < 1 )
  {
    v16 = 1;
  }
  else
  {
    v21 = *(_DWORD *)(SelfUserGame + 24);
    v12 = *(_QWORD *)(SelfUserGame + 40);
    v13 = 0LL;
    while ( 1 )
    {
      SelfUserGame = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_40;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)SelfUserGame,
                                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      SelfUserGame = NetworkManager__get_UserId(0LL);
      if ( (unsigned int)v13 >= *(_DWORD *)(v9 + 24) )
      {
LABEL_41:
        v20 = sub_B52A88(SelfUserGame);
        sub_B52A28(v20, 0LL);
      }
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_40;
      SelfUserGame = UserItemMaster__TryGetEntity(
                       MasterData_WarQuestSelectionMaster,
                       &entity,
                       SelfUserGame,
                       *(_DWORD *)(v9 + 32 + 4 * v13),
                       0LL);
      if ( (SelfUserGame & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_40;
        num = entity->fields.num;
        if ( !v12 )
          goto LABEL_40;
      }
      else
      {
        num = 0;
        if ( !v12 )
          goto LABEL_40;
      }
      if ( (unsigned int)v13 >= *(_DWORD *)(v12 + 24) )
        goto LABEL_41;
      if ( num < *(_DWORD *)(v12 + 32 + 4 * v13) )
        break;
      if ( (int)++v13 >= v10 )
      {
        v16 = 1;
        goto LABEL_30;
      }
    }
    v16 = 0;
LABEL_30:
    v11 = v21;
  }
  SelfUserGame = (int64_t)this->fields.statusLb;
  v17 = v7 >= v11;
  if ( !SelfUserGame )
    goto LABEL_40;
  SelfUserGame = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_40;
  v18 = v17 & v16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, v18, 0LL);
  if ( !v18 )
    return;
  statusLb = this->fields.statusLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8883/*"MSG_ABLED_SKILLUP"*/, 0LL);
  if ( !statusLb )
LABEL_40:
    sub_B52A5C(SelfUserGame, v6);
  UILabel__set_text(statusLb, (System_String_o *)SelfUserGame, 0LL);
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
    sub_B52A5C(noSelectMskImg, isShow);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall ServantSkillInfoIconComponent_ClickDelegate__BeginInvoke(
        ServantSkillInfoIconComponent_ClickDelegate_o *this,
        bool isDecide,
        int32_t idx,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v11; // [xsp+18h] [xbp-28h] BYREF
  char v12[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v12[0] = isDecide;
  v11 = idx;
  if ( (byte_42AD377 & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    sub_B52984(&int_TypeInfo);
    byte_42AD377 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_B52928(this, v10, callback, object);
}


void __fastcall ServantSkillInfoIconComponent_ClickDelegate__EndInvoke(
        ServantSkillInfoIconComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillInfoIconComponent_ClickDelegate__Invoke(
        ServantSkillInfoIconComponent_ClickDelegate_o *this,
        bool isDecide,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v8; // x25
  ServantSkillInfoIconComponent_ClickDelegate_o **v9; // x26
  __int64 v10; // x27
  unsigned int v11; // w24
  __int64 class_0; // x0
  __int64 v13; // x3
  __int64 v14; // x8
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, bool, _QWORD, _QWORD); // x0
  ServantSkillInfoIconComponent_ClickDelegate_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(bool, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  ServantSkillInfoIconComponent_ClickDelegate_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v33;
    v8 = 1LL;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 )
  {
    v9 = (ServantSkillInfoIconComponent_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v10 = 0LL;
    while ( 1 )
    {
      v21 = v9[v10];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(bool, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v21->fields.extra_arg, isDecide, *(_QWORD *)&idx, method);
      if ( (sub_B529B4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_35;
      v24(isDecide, (unsigned int)idx, v23);
LABEL_36:
      if ( ++v10 == v8 )
        return;
    }
    if ( v22 && *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B529AC(v23);
      v26 = sub_B52DB0(v23);
      if ( (v25 & 1) != 0 )
      {
        if ( (v26 & 1) != 0 )
        {
          v28 = *v22;
          v29 = *(_QWORD *)(v23 + 24);
          v30 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_34;
            }
            v19 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_34:
            v19 = sub_AEB880(v22, v29, v30, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD))sub_B52A34(v18, v23);
        (*v20)(v22, isDecide, (unsigned int)idx, v20);
      }
      else
      {
        v11 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v14 = *v22;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v14 + 16LL * (int)(*v16 + v11) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AEB880(v22, class_0, v11, v13);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD))v17)(
            v22,
            isDecide,
            (unsigned int)idx,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            isDecide,
            (unsigned int)idx,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, bool, _QWORD, __int64))v24)(v22, isDecide, (unsigned int)idx, v23);
    goto LABEL_36;
  }
}