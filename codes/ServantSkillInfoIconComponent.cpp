void __fastcall ServantSkillInfoIconComponent___ctor(ServantSkillInfoIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantSkillInfoIconComponent__Clear(ServantSkillInfoIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SkillIconComponent_o *skillIconComp; // x0
  UILabel_o *statusLb; // x0
  UILabel_o *levelLabel; // x0
  UILabel_o *chargeTitleLb; // x0
  UILabel_o *chargeTimeLb; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UILabel_o *skillNameLabel; // x0
  UnityEngine_Object_o *skillStrengthStatus; // x20
  UnityEngine_Component_o *v17; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40FBC49 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40FBC49 = 1;
  }
  skillIconComp = this->fields.skillIconComp;
  if ( !skillIconComp )
    goto LABEL_19;
  SkillIconComponent__Clear(skillIconComp, 0LL);
  statusLb = this->fields.statusLb;
  if ( !statusLb )
    goto LABEL_19;
  UILabel__set_text(statusLb, (System_String_o *)StringLiteral_1, 0LL);
  levelLabel = this->fields.levelLabel;
  if ( !levelLabel )
    goto LABEL_19;
  UILabel__set_text(levelLabel, (System_String_o *)StringLiteral_1, 0LL);
  chargeTitleLb = this->fields.chargeTitleLb;
  if ( !chargeTitleLb )
    goto LABEL_19;
  UILabel__set_text(chargeTitleLb, (System_String_o *)StringLiteral_1, 0LL);
  chargeTimeLb = this->fields.chargeTimeLb;
  if ( !chargeTimeLb )
    goto LABEL_19;
  UILabel__set_text(chargeTimeLb, (System_String_o *)StringLiteral_1, 0LL);
  this->fields.callbackFunc = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
  skillNameLabel = this->fields.skillNameLabel;
  *(_QWORD *)&this->fields.currentSkillId = 0LL;
  if ( !skillNameLabel )
    goto LABEL_19;
  UILabel__set_text(skillNameLabel, (System_String_o *)StringLiteral_1, 0LL);
  skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
  {
    v17 = (UnityEngine_Component_o *)this->fields.skillStrengthStatus;
    if ( v17 )
    {
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v17, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
      return;
    }
LABEL_19:
    sub_B170D4();
  }
}


void __fastcall ServantSkillInfoIconComponent__ClearAppendSkillInfo(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  SkillIconComponent_o *skillIconComp; // x0
  UILabel_o *statusLb; // x0
  UILabel_o *levelLabel; // x0
  UILabel_o *chargeTitleLb; // x0
  UILabel_o *chargeTimeLb; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UILabel_o *skillNameLabel; // x0
  UnityEngine_Object_o *lineImg; // x20
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *lockImg; // x20
  UnityEngine_Component_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0

  if ( (byte_40FBC4A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40FBC4A = 1;
  }
  skillIconComp = this->fields.skillIconComp;
  if ( !skillIconComp )
    goto LABEL_24;
  SkillIconComponent__Clear(skillIconComp, 0LL);
  statusLb = this->fields.statusLb;
  if ( !statusLb )
    goto LABEL_24;
  UILabel__set_text(statusLb, (System_String_o *)StringLiteral_1, 0LL);
  levelLabel = this->fields.levelLabel;
  if ( !levelLabel )
    goto LABEL_24;
  UILabel__set_text(levelLabel, (System_String_o *)StringLiteral_1, 0LL);
  chargeTitleLb = this->fields.chargeTitleLb;
  if ( !chargeTitleLb )
    goto LABEL_24;
  UILabel__set_text(chargeTitleLb, (System_String_o *)StringLiteral_1, 0LL);
  chargeTimeLb = this->fields.chargeTimeLb;
  if ( !chargeTimeLb )
    goto LABEL_24;
  UILabel__set_text(chargeTimeLb, (System_String_o *)StringLiteral_1, 0LL);
  this->fields.callbackFunc = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
  skillNameLabel = this->fields.skillNameLabel;
  *(_QWORD *)&this->fields.currentSkillId = 0LL;
  if ( !skillNameLabel )
    goto LABEL_24;
  UILabel__set_text(skillNameLabel, (System_String_o *)StringLiteral_1, 0LL);
  lineImg = (UnityEngine_Object_o *)this->fields.lineImg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lineImg, 0LL, 0LL) )
  {
    v17 = (UnityEngine_Component_o *)this->fields.lineImg;
    if ( !v17 )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject(v17, 0LL);
    if ( !gameObject )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  lockImg = (UnityEngine_Object_o *)this->fields.lockImg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lockImg, 0LL, 0LL) )
  {
    v20 = (UnityEngine_Component_o *)this->fields.lockImg;
    if ( v20 )
    {
      v21 = UnityEngine_Component__get_gameObject(v20, 0LL);
      if ( v21 )
      {
        UnityEngine_GameObject__SetActive(v21, 0, 0LL);
        return;
      }
    }
LABEL_24:
    sub_B170D4();
  }
}


void __fastcall ServantSkillInfoIconComponent__OnClickSkill(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  ServantSkillInfoIconComponent_ClickDelegate_o *callbackFunc; // x0

  if ( (byte_40FBC46 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FBC46 = 1;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  SkillEntity_o *v17; // x0
  int32_t v18; // w20
  System_String_o *v19; // x21
  System_String_o *v20; // x22
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  System_String_o *Empty; // x20
  SkillLvMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_o *v25; // x0
  System_String_o *v26; // x19
  Il2CppObject *v27; // x0
  CommonUI_o *v28; // x0
  int32_t chargeTurn; // [xsp+4h] [xbp-4Ch] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_40FBC47 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillLvMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_B16FFC(&int_TypeInfo, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&SoundManager_TypeInfo, v10);
    sub_B16FFC(&string_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_80, v12);
    sub_B16FFC(&StringLiteral_8603, v13);
    sub_B16FFC(&StringLiteral_2508, v14);
    byte_40FBC47 = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v17 = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 this->fields.currentSkillId,
                                 (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v18 = this->fields.currentSkillLv ? this->fields.currentSkillLv : 1;
        if ( v17 )
        {
          SkillEntity__getSkillMessageInfo(v17, &name, &detail, v18, 0LL);
          v19 = name;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v20 = LocalizationManager__Get((System_String_o *)StringLiteral_8603, 0LL);
          chargeTurn = v18;
          v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn);
          v22 = System_String__Format(v20, v21, 0LL);
          name = System_String__Concat_43746016(v19, (System_String_o *)StringLiteral_80, v22, 0LL);
          Empty = string_TypeInfo->static_fields->Empty;
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillLvMaster___);
          if ( Master_WarQuestSelectionMaster )
          {
            if ( SkillLvMaster__TryGetEntity(
                   Master_WarQuestSelectionMaster,
                   &entity,
                   this->fields.currentSkillId,
                   this->fields.currentSkillLv,
                   0LL) )
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
                v25 = LocalizationManager__Get((System_String_o *)StringLiteral_2508, 0LL);
                if ( !entity )
                  goto LABEL_31;
                v26 = v25;
                chargeTurn = entity->fields.chargeTurn;
                v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn);
                Empty = System_String__Format(v26, v27, 0LL);
              }
            }
            v28 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( v28 )
            {
              CommonUI__OpenDetailLongInfoDialog(v28, name, Empty, detail, 1, 1, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_31:
    sub_B170D4();
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
  UnityEngine_Component_o *skillIconSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *levelInfo; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Component_o *statusLb; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Object_o *lockImg; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Component_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0

  if ( (byte_40FBC43 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&idx);
    byte_40FBC43 = 1;
  }
  skillIconComp = this->fields.skillIconComp;
  this->fields.index = idx;
  this->fields.currentSkillId = skillId;
  this->fields.currentSkillLv = skillLv;
  if ( !skillIconComp )
    goto LABEL_18;
  SkillIconComponent__Set_23613360(skillIconComp, skillId, skillLv, 0LL);
  skillIconSprite = (UnityEngine_Component_o *)this->fields.skillIconSprite;
  if ( !skillIconSprite )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject(skillIconSprite, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  levelInfo = this->fields.levelInfo;
  if ( !levelInfo )
    goto LABEL_18;
  v15 = UnityEngine_GameObject__get_gameObject(levelInfo, 0LL);
  if ( !v15 )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(v15, 1, 0LL);
  statusLb = (UnityEngine_Component_o *)this->fields.statusLb;
  if ( !statusLb )
    goto LABEL_18;
  v17 = UnityEngine_Component__get_gameObject(statusLb, 0LL);
  if ( !v17 )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(v17, 0, 0LL);
  lockImg = (UnityEngine_Object_o *)this->fields.lockImg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lockImg, 0LL, 0LL) )
  {
    v25 = (UnityEngine_Component_o *)this->fields.lockImg;
    if ( v25 )
    {
      v26 = UnityEngine_Component__get_gameObject(v25, 0LL);
      if ( v26 )
      {
        UnityEngine_GameObject__SetActive(v26, 0, 0LL);
        goto LABEL_17;
      }
    }
LABEL_18:
    sub_B170D4();
  }
LABEL_17:
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_Component_o *statusLb; // x0
  UnityEngine_GameObject_o *v20; // x0
  struct UILabel_o *v21; // x19
  System_String_o *v22; // x0
  System_String_o *v23; // x1
  UILabel_o *levelLabel; // x0
  float v25; // s0
  float v26; // s1
  float v27; // s2
  UnityEngine_Component_o *lockImg; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v30; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_40FBC45 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&skillLv);
    sub_B16FFC(&StringLiteral_8800, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    byte_40FBC45 = 1;
  }
  skillIconSprite = (UIWidget_o *)this->fields.skillIconSprite;
  if ( !skillLv )
  {
    v25 = 0.32812;
    v26 = 0.32812;
    v27 = 0.32812;
    v30 = (UnityEngine_Color_o)0LL;
    UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, (const MethodInfo *)&v30);
    if ( skillIconSprite )
    {
      UIWidget__set_color(skillIconSprite, v30, 0LL);
      lockImg = (UnityEngine_Component_o *)this->fields.lockImg;
      if ( lockImg )
      {
        gameObject = UnityEngine_Component__get_gameObject(lockImg, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          levelLabel = this->fields.levelLabel;
          if ( levelLabel )
          {
            v23 = (System_String_o *)StringLiteral_1;
            goto LABEL_21;
          }
        }
      }
    }
LABEL_23:
    sub_B170D4();
  }
  v14 = 1.0;
  v15 = 1.0;
  v16 = 1.0;
  *(_QWORD *)&v30.fields.r = 0LL;
  *(_QWORD *)&v30.fields.b = 0LL;
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, (const MethodInfo *)&v30);
  if ( !skillIconSprite )
    goto LABEL_23;
  UIWidget__set_color(skillIconSprite, v30, 0LL);
  v17 = (UnityEngine_Component_o *)this->fields.lockImg;
  if ( !v17 )
    goto LABEL_23;
  v18 = UnityEngine_Component__get_gameObject(v17, 0LL);
  if ( !v18 )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(v18, 0, 0LL);
  statusLb = (UnityEngine_Component_o *)this->fields.statusLb;
  if ( !statusLb )
    goto LABEL_23;
  v20 = UnityEngine_Component__get_gameObject(statusLb, 0LL);
  if ( !v20 )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(v20, 1, 0LL);
  if ( skillLv <= 9 && isEnableCombine )
  {
    v21 = this->fields.statusLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_8800, 0LL);
    if ( v21 )
    {
      v23 = v22;
      levelLabel = v21;
LABEL_21:
      UILabel__set_text(levelLabel, v23, 0LL);
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
  UILabel_o *skillNameLabel; // x0
  UnityEngine_Component_o **p_skillStrengthStatus; // x23
  UnityEngine_Object_o *skillStrengthStatus; // x24
  UnityEngine_Object_o *gameObject; // x24
  UnityEngine_Component_o *v32; // x0
  System_String_o *PATH; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object_19257936; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UILabel_o *levelLabel; // x22
  System_String_o *v44; // x23
  Il2CppObject *v45; // x21
  Il2CppObject *v46; // x0
  System_String_o *v47; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  SkillEntity_o *v51; // x20
  int32_t longName; // w22
  UILabel_o *chargeTitleLb; // x21
  System_String_o *v54; // x0
  UILabel_o *chargeTimeLb; // x21
  System_String_o *v56; // x0
  UnityEngine_GameObject_o *chargeInfoObj; // x0
  const MethodInfo *v58; // x2
  int32_t v59; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v60; // [xsp+18h] [xbp-48h] BYREF
  int32_t SkillChargeTime; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector2Int_o v62; // 0:x6.8

  if ( (byte_40FBC42 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, *(_QWORD *)&idx);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v19);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v20);
    sub_B16FFC(&int_TypeInfo, v21);
    sub_B16FFC(&LocalizationManager_TypeInfo, v22);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v23);
    sub_B16FFC(&ServantSkillStrengthStatus_TypeInfo, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B16FFC(&StringLiteral_4586, v26);
    sub_B16FFC(&StringLiteral_12193, v27);
    byte_40FBC42 = 1;
  }
  SkillChargeTime = 0;
  ServantSkillInfoIconComponent__SetSkillIconInfo(this, idx, skillId, skillLv, callback, (const MethodInfo *)skillName);
  skillNameLabel = this->fields.skillNameLabel;
  if ( !skillNameLabel )
    goto LABEL_35;
  UILabel__set_text(skillNameLabel, skillName, 0LL);
  p_skillStrengthStatus = (UnityEngine_Component_o **)&this->fields.skillStrengthStatus;
  skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
  {
    if ( !*p_skillStrengthStatus )
      goto LABEL_35;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_skillStrengthStatus, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  }
  if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  }
  v32 = (UnityEngine_Component_o *)this->fields.skillNameLabel;
  if ( !v32 )
    goto LABEL_35;
  PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
  transform = UnityEngine_Component__get_transform(v32, 0LL);
  Object_19257936 = BaseMonoBehaviour__createObject_19257936((BaseMonoBehaviour_o *)this, PATH, transform, 0LL, 0LL);
  if ( !Object_19257936 )
    goto LABEL_35;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     Object_19257936,
                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
  *p_skillStrengthStatus = (UnityEngine_Component_o *)Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.skillStrengthStatus,
    Component_srcLineSprite,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  if ( !*p_skillStrengthStatus )
    goto LABEL_35;
  v62 = (UnityEngine_Vector2Int_o)0x1000000012LL;
  ServantSkillStrengthStatus__Set(
    (ServantSkillStrengthStatus_o *)*p_skillStrengthStatus,
    this->fields.skillNameLabel,
    statusKind,
    skillRecord,
    18,
    -7,
    v62,
    0LL);
  levelLabel = this->fields.levelLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_4586, 0LL);
  v60 = skillLv;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
  v59 = skillMaxLv;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
  v47 = System_String__Format_43739268(v44, v45, v46, 0LL);
  if ( !levelLabel )
    goto LABEL_35;
  UILabel__set_text(levelLabel, v47, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_35;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             this->fields.currentSkillId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_35;
  v51 = (SkillEntity_o *)Entity;
  longName = (int32_t)Entity->fields.longName;
  chargeTitleLb = this->fields.chargeTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_12193, 0LL);
  if ( !chargeTitleLb
    || (UILabel__set_text(chargeTitleLb, v54, 0LL),
        chargeTimeLb = this->fields.chargeTimeLb,
        SkillChargeTime = SkillEntity__getSkillChargeTime(v51, this->fields.currentSkillLv, 0LL),
        v56 = System_Int32__ToString((int32_t)&SkillChargeTime, 0LL),
        !chargeTimeLb)
    || (UILabel__set_text(chargeTimeLb, v56, 0LL), (chargeInfoObj = this->fields.chargeInfoObj) == 0LL) )
  {
LABEL_35:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(chargeInfoObj, 1, 0LL);
  if ( this->fields.currentSkillLv < longName )
    ServantSkillInfoIconComponent__checkEnableCombine(this, baseSvtId, v58);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillInfoIconComponent__SetSkillInfo_28339620(
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
  UnityEngine_Component_o *lineImg; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *levelLabel; // x21
  System_String_o *v21; // x22
  Il2CppObject *v22; // x20
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  int32_t v25; // [xsp+8h] [xbp-48h] BYREF
  int32_t v26; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FBC44 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&idx);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_1707, v16);
    byte_40FBC44 = 1;
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
  lineImg = (UnityEngine_Component_o *)this->fields.lineImg;
  if ( !lineImg )
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject(lineImg, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  levelLabel = this->fields.levelLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_1707, 0LL);
  v26 = skillLv;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  v25 = skillMaxLv;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v24 = System_String__Format_43739268(v21, v22, v23, 0LL);
  if ( !levelLabel )
LABEL_11:
    sub_B170D4();
  UILabel__set_text(levelLabel, v24, 0LL);
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
  UserGameEntity_o *SelfUserGame; // x0
  int32_t qp; // w23
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *v16; // x20
  WebViewManager_o *v17; // x0
  CombineSkillMaster_o *v18; // x0
  CombineSkillEntity_o *v19; // x0
  struct System_Int32_array *itemIds; // x24
  int max_length; // w25
  int32_t v22; // w8
  struct System_Int32_array *itemNums; // x27
  __int64 v24; // x26
  WebViewManager_o *v25; // x0
  UserItemMaster_o *v26; // x20
  int64_t UserId; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  int32_t num; // w8
  int v31; // w19
  UnityEngine_Component_o *statusLb; // x0
  _BOOL4 v33; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  int v35; // w20
  UILabel_o *v36; // x19
  System_String_o *v37; // x0
  int32_t v38; // [xsp+8h] [xbp-68h]
  UserItemEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_40FBC48 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CombineSkillMaster___, *(_QWORD *)&id);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&StringLiteral_8800, v11);
    byte_40FBC48 = 1;
  }
  entity = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_40;
  qp = SelfUserGame->fields.qp;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_40;
  v16 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          MasterData_WarQuestSelectionMaster,
          id,
          (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v17 )
    goto LABEL_40;
  v18 = (CombineSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v17,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  if ( !v16 )
    goto LABEL_40;
  if ( !v18 )
    goto LABEL_40;
  v19 = CombineSkillMaster__GetEntity(v18, (int32_t)v16->fields.coordinates, this->fields.currentSkillLv, 0LL);
  if ( !v19 )
    goto LABEL_40;
  itemIds = v19->fields.itemIds;
  if ( !itemIds )
    goto LABEL_40;
  max_length = itemIds->max_length;
  v22 = v19->fields.qp;
  if ( max_length < 1 )
  {
    v31 = 1;
  }
  else
  {
    v38 = v19->fields.qp;
    itemNums = v19->fields.itemNums;
    v24 = 0LL;
    while ( 1 )
    {
      v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v25 )
        goto LABEL_40;
      v26 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v25,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( (unsigned int)v24 >= itemIds->max_length )
      {
LABEL_41:
        sub_B17100(UserId, v28, v29);
        sub_B170A0();
      }
      if ( !v26 )
        goto LABEL_40;
      UserId = UserItemMaster__TryGetEntity(v26, &entity, UserId, itemIds->m_Items[v24 + 1], 0LL);
      if ( (UserId & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_40;
        num = entity->fields.num;
        if ( !itemNums )
          goto LABEL_40;
      }
      else
      {
        num = 0;
        if ( !itemNums )
          goto LABEL_40;
      }
      if ( (unsigned int)v24 >= itemNums->max_length )
        goto LABEL_41;
      if ( num < itemNums->m_Items[v24 + 1] )
        break;
      if ( (int)++v24 >= max_length )
      {
        v31 = 1;
        goto LABEL_30;
      }
    }
    v31 = 0;
LABEL_30:
    v22 = v38;
  }
  statusLb = (UnityEngine_Component_o *)this->fields.statusLb;
  v33 = qp >= v22;
  if ( !statusLb )
    goto LABEL_40;
  gameObject = UnityEngine_Component__get_gameObject(statusLb, 0LL);
  if ( !gameObject )
    goto LABEL_40;
  v35 = v33 & v31;
  UnityEngine_GameObject__SetActive(gameObject, v35, 0LL);
  if ( !v35 )
    return;
  v36 = this->fields.statusLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_8800, 0LL);
  if ( !v36 )
LABEL_40:
    sub_B170D4();
  UILabel__set_text(v36, v37, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0

  noSelectMskImg = (UnityEngine_Component_o *)this->fields.noSelectMskImg;
  if ( !noSelectMskImg || (gameObject = UnityEngine_Component__get_gameObject(noSelectMskImg, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, isShow, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillInfoIconComponent_ClickDelegate___ctor(
        ServantSkillInfoIconComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F765A & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isDecide);
    sub_B16FFC(&int_TypeInfo, v9);
    byte_40F765A = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall ServantSkillInfoIconComponent_ClickDelegate__EndInvoke(
        ServantSkillInfoIconComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, isDecide, *(_QWORD *)&idx);
      if ( (sub_B1702C(v22) & 1) == 0 )
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
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
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
            v18 = sub_AAFEF8(v21, v27, v28);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD))sub_B170AC(v17, v22);
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
            v16 = sub_AAFEF8(v21, class_0, v11);
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