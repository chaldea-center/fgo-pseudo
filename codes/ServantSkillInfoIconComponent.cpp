void __fastcall ServantSkillInfoIconComponent___ctor(ServantSkillInfoIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantSkillInfoIconComponent__Clear(ServantSkillInfoIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SkillIconComponent_o *skillIconComp; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UnityEngine_Object_o *skillStrengthStatus; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4216ADF & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v3);
    byte_4216ADF = 1;
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
      UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
      return;
    }
LABEL_19:
    sub_B0D97C(skillIconComp);
  }
}


void __fastcall ServantSkillInfoIconComponent__ClearAppendSkillInfo(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  SkillIconComponent_o *skillIconComp; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UnityEngine_Object_o *lineImg; // x20
  UnityEngine_Object_o *lockImg; // x20

  if ( (byte_4216AE0 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v3);
    byte_4216AE0 = 1;
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(skillIconComp);
  }
}


void __fastcall ServantSkillInfoIconComponent__OnClickSkill(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  ServantSkillInfoIconComponent_ClickDelegate_o *callbackFunc; // x0

  if ( (byte_4216ADC & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4216ADC = 1;
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
  DataManager_o *Instance; // x0
  int32_t v16; // w20
  System_String_o *v17; // x21
  System_String_o *v18; // x22
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  System_String_o *Empty; // x20
  System_String_o *v22; // x19
  Il2CppObject *v23; // x0
  int32_t chargeTurn; // [xsp+4h] [xbp-4Ch] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4216ADD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillLvMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_B0D8A4(&int_TypeInfo, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B0D8A4(&SoundManager_TypeInfo, v10);
    sub_B0D8A4(&string_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_80/*" "*/, v12);
    sub_B0D8A4(&StringLiteral_8654/*"MASTER_EQSKILL_LV_TXT"*/, v13);
    sub_B0D8A4(&StringLiteral_2529/*"BATTLE_SKILLCHARGETURN"*/, v14);
    byte_4216ADD = 1;
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      this->fields.currentSkillId,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v16 = this->fields.currentSkillLv ? this->fields.currentSkillLv : 1;
        if ( Instance )
        {
          SkillEntity__getSkillMessageInfo((SkillEntity_o *)Instance, &name, &detail, v16, 0LL);
          v17 = name;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8654/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
          chargeTurn = v16;
          v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn);
          v20 = System_String__Format(v18, v19, 0LL);
          name = System_String__Concat_43852188(v17, (System_String_o *)StringLiteral_80/*" "*/, v20, 0LL);
          Empty = string_TypeInfo->static_fields->Empty;
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillLvMaster___);
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
                Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2529/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
                if ( !entity )
                  goto LABEL_31;
                v22 = (System_String_o *)Instance;
                chargeTurn = entity->fields.chargeTurn;
                v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn);
                Empty = System_String__Format(v22, v23, 0LL);
              }
            }
            Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B0D97C(Instance);
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

  if ( (byte_4216AD9 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&idx);
    byte_4216AD9 = 1;
  }
  skillIconComp = this->fields.skillIconComp;
  this->fields.index = idx;
  this->fields.currentSkillId = skillId;
  this->fields.currentSkillLv = skillLv;
  if ( !skillIconComp )
    goto LABEL_18;
  SkillIconComponent__Set_26129364(skillIconComp, skillId, skillLv, 0LL);
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
    sub_B0D97C(skillIconComp);
  }
LABEL_17:
  this->fields.callbackFunc = callback;
  sub_B0D840(
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
  __int64 v11; // x1
  __int64 v12; // x1
  UIWidget_o *skillIconSprite; // x22
  float v14; // s0
  float v15; // s1
  float v16; // s2
  UnityEngine_Component_o *lockImg; // x0
  struct UILabel_o *statusLb; // x19
  System_String_o *v19; // x1
  float v20; // s0
  float v21; // s1
  float v22; // s2
  UnityEngine_Color_o v23; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4216ADB & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&skillLv);
    sub_B0D8A4(&StringLiteral_8852/*"MSG_ABLED_SKILLUP"*/, v11);
    sub_B0D8A4(&StringLiteral_1/*""*/, v12);
    byte_4216ADB = 1;
  }
  skillIconSprite = (UIWidget_o *)this->fields.skillIconSprite;
  if ( !skillLv )
  {
    v20 = 0.32812;
    v21 = 0.32812;
    v22 = 0.32812;
    v23 = (UnityEngine_Color_o)0LL;
    UnityEngine_Color___ctor_40757524(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, (const MethodInfo *)&v23);
    if ( skillIconSprite )
    {
      UIWidget__set_color(skillIconSprite, v23, 0LL);
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
            v19 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_21;
          }
        }
      }
    }
LABEL_23:
    sub_B0D97C(lockImg);
  }
  v14 = 1.0;
  v15 = 1.0;
  v16 = 1.0;
  *(_QWORD *)&v23.fields.r = 0LL;
  *(_QWORD *)&v23.fields.b = 0LL;
  UnityEngine_Color___ctor_40757524(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, (const MethodInfo *)&v23);
  if ( !skillIconSprite )
    goto LABEL_23;
  UIWidget__set_color(skillIconSprite, v23, 0LL);
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
    lockImg = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8852/*"MSG_ABLED_SKILLUP"*/, 0LL);
    if ( statusLb )
    {
      v19 = (System_String_o *)lockImg;
      lockImg = (UnityEngine_Component_o *)statusLb;
LABEL_21:
      UILabel__set_text((UILabel_o *)lockImg, v19, 0LL);
      return;
    }
    goto LABEL_23;
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
  void *skillNameLabel; // x0
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x23
  UnityEngine_Object_o *skillStrengthStatus; // x24
  UnityEngine_Object_o *gameObject; // x24
  System_String_o *PATH; // x24
  UnityEngine_Transform_o *transform; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UILabel_o *levelLabel; // x22
  System_String_o *v42; // x23
  Il2CppObject *v43; // x21
  Il2CppObject *v44; // x0
  SkillEntity_o *v45; // x20
  int32_t v46; // w22
  UILabel_o *chargeTitleLb; // x21
  UILabel_o *chargeTimeLb; // x21
  const MethodInfo *v49; // x2
  int32_t v50; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v51; // [xsp+18h] [xbp-48h] BYREF
  int32_t SkillChargeTime; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector2Int_o v53; // 0:x6.8

  if ( (byte_4216AD8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, *(_QWORD *)&idx);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v19);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v20);
    sub_B0D8A4(&int_TypeInfo, v21);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v22);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v23);
    sub_B0D8A4(&ServantSkillStrengthStatus_TypeInfo, v24);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B0D8A4(&StringLiteral_4617/*"DISP_SKLL_LV"*/, v26);
    sub_B0D8A4(&StringLiteral_12284/*"SKILLCHARGETURN_TXT"*/, v27);
    byte_4216AD8 = 1;
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
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
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
  skillNameLabel = BaseMonoBehaviour__createObject_18711800((BaseMonoBehaviour_o *)this, PATH, transform, 0LL, 0LL);
  if ( !skillNameLabel )
    goto LABEL_35;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)skillNameLabel,
                                                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
  *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)Component_srcLineSprite;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.skillStrengthStatus,
    Component_srcLineSprite,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  skillNameLabel = *p_skillStrengthStatus;
  if ( !*p_skillStrengthStatus )
    goto LABEL_35;
  v53 = (UnityEngine_Vector2Int_o)0x1000000012LL;
  ServantSkillStrengthStatus__Set(
    (ServantSkillStrengthStatus_o *)skillNameLabel,
    this->fields.skillNameLabel,
    statusKind,
    skillRecord,
    18,
    -7,
    v53,
    0LL);
  levelLabel = this->fields.levelLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_4617/*"DISP_SKLL_LV"*/, 0LL);
  v51 = skillLv;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
  v50 = skillMaxLv;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
  skillNameLabel = System_String__Format_43845440(v42, v43, v44, 0LL);
  if ( !levelLabel )
    goto LABEL_35;
  UILabel__set_text(levelLabel, (System_String_o *)skillNameLabel, 0LL);
  skillNameLabel = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillNameLabel )
    goto LABEL_35;
  skillNameLabel = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)skillNameLabel,
                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillNameLabel )
    goto LABEL_35;
  skillNameLabel = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)skillNameLabel,
                     this->fields.currentSkillId,
                     (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !skillNameLabel )
    goto LABEL_35;
  v45 = (SkillEntity_o *)skillNameLabel;
  v46 = *((_DWORD *)skillNameLabel + 10);
  chargeTitleLb = this->fields.chargeTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  skillNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_12284/*"SKILLCHARGETURN_TXT"*/, 0LL);
  if ( !chargeTitleLb
    || (UILabel__set_text(chargeTitleLb, (System_String_o *)skillNameLabel, 0LL),
        chargeTimeLb = this->fields.chargeTimeLb,
        SkillChargeTime = SkillEntity__getSkillChargeTime(v45, this->fields.currentSkillLv, 0LL),
        skillNameLabel = System_Int32__ToString((int32_t)&SkillChargeTime, 0LL),
        !chargeTimeLb)
    || (UILabel__set_text(chargeTimeLb, (System_String_o *)skillNameLabel, 0LL),
        (skillNameLabel = this->fields.chargeInfoObj) == 0LL) )
  {
LABEL_35:
    sub_B0D97C(skillNameLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillNameLabel, 1, 0LL);
  if ( this->fields.currentSkillLv < v46 )
    ServantSkillInfoIconComponent__checkEnableCombine(this, baseSvtId, v49);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillInfoIconComponent__SetSkillInfo_28298880(
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
  UILabel_o *skillNameLabel; // x0
  UILabel_o *levelLabel; // x21
  System_String_o *v19; // x22
  Il2CppObject *v20; // x20
  Il2CppObject *v21; // x0
  int32_t v22; // [xsp+8h] [xbp-48h] BYREF
  int32_t v23; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4216ADA & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&idx);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_1713/*"APPEND_SKILL_ICON_INFO_LV"*/, v16);
    byte_4216ADA = 1;
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
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_1713/*"APPEND_SKILL_ICON_INFO_LV"*/, 0LL);
  v23 = skillLv;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  v22 = skillMaxLv;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  skillNameLabel = (UILabel_o *)System_String__Format_43845440(v19, v20, v21, 0LL);
  if ( !levelLabel )
LABEL_11:
    sub_B0D97C(skillNameLabel);
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
  int v13; // w23
  WarEntity_o *v14; // x20
  __int64 v15; // x24
  int v16; // w25
  int v17; // w8
  __int64 v18; // x27
  __int64 v19; // x26
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int32_t num; // w8
  int v22; // w19
  _BOOL4 v23; // w20
  int v24; // w20
  UILabel_o *statusLb; // x19
  __int64 v26; // x0
  int v27; // [xsp+8h] [xbp-68h]
  UserItemEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4216ADE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CombineSkillMaster___, *(_QWORD *)&id);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B0D8A4(&StringLiteral_8852/*"MSG_ABLED_SKILLUP"*/, v11);
    byte_4216ADE = 1;
  }
  entity = 0LL;
  SelfUserGame = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_40;
  v13 = *(_DWORD *)(SelfUserGame + 96);
  SelfUserGame = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_40;
  SelfUserGame = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_40;
  v14 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)SelfUserGame,
          id,
          (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  SelfUserGame = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_40;
  SelfUserGame = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  if ( !v14 )
    goto LABEL_40;
  if ( !SelfUserGame )
    goto LABEL_40;
  SelfUserGame = (int64_t)CombineSkillMaster__GetEntity(
                            (CombineSkillMaster_o *)SelfUserGame,
                            (int32_t)v14->fields.coordinates,
                            this->fields.currentSkillLv,
                            0LL);
  if ( !SelfUserGame )
    goto LABEL_40;
  v15 = *(_QWORD *)(SelfUserGame + 32);
  if ( !v15 )
    goto LABEL_40;
  v16 = *(_DWORD *)(v15 + 24);
  v17 = *(_DWORD *)(SelfUserGame + 24);
  if ( v16 < 1 )
  {
    v22 = 1;
  }
  else
  {
    v27 = *(_DWORD *)(SelfUserGame + 24);
    v18 = *(_QWORD *)(SelfUserGame + 40);
    v19 = 0LL;
    while ( 1 )
    {
      SelfUserGame = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_40;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)SelfUserGame,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      SelfUserGame = NetworkManager__get_UserId(0LL);
      if ( (unsigned int)v19 >= *(_DWORD *)(v15 + 24) )
      {
LABEL_41:
        v26 = sub_B0D9A8(SelfUserGame);
        sub_B0D948(v26, 0LL);
      }
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_40;
      SelfUserGame = UserItemMaster__TryGetEntity(
                       MasterData_WarQuestSelectionMaster,
                       &entity,
                       SelfUserGame,
                       *(_DWORD *)(v15 + 32 + 4 * v19),
                       0LL);
      if ( (SelfUserGame & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_40;
        num = entity->fields.num;
        if ( !v18 )
          goto LABEL_40;
      }
      else
      {
        num = 0;
        if ( !v18 )
          goto LABEL_40;
      }
      if ( (unsigned int)v19 >= *(_DWORD *)(v18 + 24) )
        goto LABEL_41;
      if ( num < *(_DWORD *)(v18 + 32 + 4 * v19) )
        break;
      if ( (int)++v19 >= v16 )
      {
        v22 = 1;
        goto LABEL_30;
      }
    }
    v22 = 0;
LABEL_30:
    v17 = v27;
  }
  SelfUserGame = (int64_t)this->fields.statusLb;
  v23 = v13 >= v17;
  if ( !SelfUserGame )
    goto LABEL_40;
  SelfUserGame = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_40;
  v24 = v23 & v22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, v24, 0LL);
  if ( !v24 )
    return;
  statusLb = this->fields.statusLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8852/*"MSG_ABLED_SKILLUP"*/, 0LL);
  if ( !statusLb )
LABEL_40:
    sub_B0D97C(SelfUserGame);
  UILabel__set_text(statusLb, (System_String_o *)SelfUserGame, 0LL);
}


int32_t __fastcall ServantSkillInfoIconComponent__getSkillInfo(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.currentSkillId;
}


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
    sub_B0D97C(noSelectMskImg);
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
  sub_B0D840(p_method, object);
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
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  char v13[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v13[0] = isDecide;
  v12 = idx;
  if ( (byte_421225D & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, isDecide);
    sub_B0D8A4(&int_TypeInfo, v9);
    byte_421225D = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B0D848(this, v11, callback, object);
}


void __fastcall ServantSkillInfoIconComponent_ClickDelegate__EndInvoke(
        ServantSkillInfoIconComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD, _QWORD); // x0
  ServantSkillInfoIconComponent_ClickDelegate_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(bool, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  ServantSkillInfoIconComponent_ClickDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v31;
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
      v20 = v9[v10];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v20->fields.extra_arg, isDecide, *(_QWORD *)&idx, method);
      if ( (sub_B0D8D4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_35;
      v23(isDecide, (unsigned int)idx, v22);
LABEL_36:
      if ( ++v10 == v8 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B0D8CC(v22);
      v25 = sub_B0DCD0(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v26 = *v21;
          v27 = *(_QWORD *)(v22 + 24);
          v28 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_34;
            }
            v18 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v18 = sub_AA67A0(v21, v27, v28);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD))sub_B0D954(v17, v22);
        (*v19)(v21, isDecide, (unsigned int)idx, v19);
      }
      else
      {
        v11 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v11) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AA67A0(v21, class_0, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD))v16)(
            v21,
            isDecide,
            (unsigned int)idx,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isDecide,
            (unsigned int)idx,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, bool, _QWORD, __int64))v23)(v21, isDecide, (unsigned int)idx, v22);
    goto LABEL_36;
  }
}