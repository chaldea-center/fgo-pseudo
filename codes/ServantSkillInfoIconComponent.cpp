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

  if ( (byte_4189C8D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_4189C8D = 1;
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
      UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
      return;
    }
LABEL_19:
    sub_B2C434(skillIconComp, method);
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

  if ( (byte_4189C8E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_4189C8E = 1;
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
    sub_B2C434(skillIconComp, method);
  }
}


void __fastcall ServantSkillInfoIconComponent__OnClickSkill(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  ServantSkillInfoIconComponent_ClickDelegate_o *callbackFunc; // x0

  if ( (byte_4189C8A & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189C8A = 1;
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
  __int64 v16; // x1
  int32_t v17; // w20
  System_String_o *v18; // x21
  System_String_o *v19; // x22
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  System_String_o *Empty; // x20
  System_String_o *v23; // x19
  Il2CppObject *v24; // x0
  int32_t chargeTurn; // [xsp+4h] [xbp-4Ch] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4189C8B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillLvMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5);
    sub_B2C35C(&int_TypeInfo, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B2C35C(&SoundManager_TypeInfo, v10);
    sub_B2C35C(&string_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_80/*" "*/, v12);
    sub_B2C35C(&StringLiteral_8632/*"MASTER_EQSKILL_LV_TXT"*/, v13);
    sub_B2C35C(&StringLiteral_2518/*"BATTLE_SKILLCHARGETURN"*/, v14);
    byte_4189C8B = 1;
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      this->fields.currentSkillId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v17 = this->fields.currentSkillLv ? this->fields.currentSkillLv : 1;
        if ( Instance )
        {
          SkillEntity__getSkillMessageInfo((SkillEntity_o *)Instance, &name, &detail, v17, 0LL);
          v18 = name;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v19 = LocalizationManager__Get((System_String_o *)StringLiteral_8632/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
          chargeTurn = v17;
          v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn);
          v21 = System_String__Format(v19, v20, 0LL);
          name = System_String__Concat_44307816(v18, (System_String_o *)StringLiteral_80/*" "*/, v21, 0LL);
          Empty = string_TypeInfo->static_fields->Empty;
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillLvMaster___);
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
                Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2518/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
                if ( !entity )
                  goto LABEL_31;
                v23 = (System_String_o *)Instance;
                chargeTurn = entity->fields.chargeTurn;
                v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn);
                Empty = System_String__Format(v23, v24, 0LL);
              }
            }
            Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B2C434(Instance, v16);
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

  if ( (byte_4189C87 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&idx);
    byte_4189C87 = 1;
  }
  skillIconComp = this->fields.skillIconComp;
  this->fields.index = idx;
  this->fields.currentSkillId = skillId;
  this->fields.currentSkillLv = skillLv;
  if ( !skillIconComp )
    goto LABEL_18;
  SkillIconComponent__Set_23787276(skillIconComp, skillId, skillLv, 0LL);
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
    sub_B2C434(skillIconComp, *(_QWORD *)&idx);
  }
LABEL_17:
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
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
  __int64 v18; // x1
  struct UILabel_o *statusLb; // x19
  System_String_o *v20; // x1
  float v21; // s0
  float v22; // s1
  float v23; // s2
  UnityEngine_Color_o v24; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4189C89 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&skillLv);
    sub_B2C35C(&StringLiteral_8829/*"MSG_ABLED_SKILLUP"*/, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_4189C89 = 1;
  }
  skillIconSprite = (UIWidget_o *)this->fields.skillIconSprite;
  if ( !skillLv )
  {
    v21 = 0.32812;
    v22 = 0.32812;
    v23 = 0.32812;
    v24 = (UnityEngine_Color_o)0LL;
    UnityEngine_Color___ctor_40633184(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, (const MethodInfo *)&v24);
    if ( skillIconSprite )
    {
      UIWidget__set_color(skillIconSprite, v24, 0LL);
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
            v20 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_21;
          }
        }
      }
    }
LABEL_23:
    sub_B2C434(lockImg, v18);
  }
  v14 = 1.0;
  v15 = 1.0;
  v16 = 1.0;
  *(_QWORD *)&v24.fields.r = 0LL;
  *(_QWORD *)&v24.fields.b = 0LL;
  UnityEngine_Color___ctor_40633184(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, (const MethodInfo *)&v24);
  if ( !skillIconSprite )
    goto LABEL_23;
  UIWidget__set_color(skillIconSprite, v24, 0LL);
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
    lockImg = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8829/*"MSG_ABLED_SKILLUP"*/, 0LL);
    if ( statusLb )
    {
      v20 = (System_String_o *)lockImg;
      lockImg = (UnityEngine_Component_o *)statusLb;
LABEL_21:
      UILabel__set_text((UILabel_o *)lockImg, v20, 0LL);
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
  __int64 v28; // x1
  void *skillNameLabel; // x0
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x23
  UnityEngine_Object_o *skillStrengthStatus; // x24
  UnityEngine_Object_o *gameObject; // x24
  System_String_o *PATH; // x24
  UnityEngine_Transform_o *transform; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UILabel_o *levelLabel; // x22
  System_String_o *v43; // x23
  Il2CppObject *v44; // x21
  Il2CppObject *v45; // x0
  SkillEntity_o *v46; // x20
  int32_t v47; // w22
  UILabel_o *chargeTitleLb; // x21
  UILabel_o *chargeTimeLb; // x21
  const MethodInfo *v50; // x2
  int32_t v51; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v52; // [xsp+18h] [xbp-48h] BYREF
  int32_t SkillChargeTime; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector2Int_o v54; // 0:x6.8

  if ( (byte_4189C86 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, *(_QWORD *)&idx);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v19);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v20);
    sub_B2C35C(&int_TypeInfo, v21);
    sub_B2C35C(&LocalizationManager_TypeInfo, v22);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v23);
    sub_B2C35C(&ServantSkillStrengthStatus_TypeInfo, v24);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B2C35C(&StringLiteral_4601/*"DISP_SKLL_LV"*/, v26);
    sub_B2C35C(&StringLiteral_12246/*"SKILLCHARGETURN_TXT"*/, v27);
    byte_4189C86 = 1;
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
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
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
  skillNameLabel = BaseMonoBehaviour__createObject_19214240((BaseMonoBehaviour_o *)this, PATH, transform, 0LL, 0LL);
  if ( !skillNameLabel )
    goto LABEL_35;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)skillNameLabel,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
  *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)Component_srcLineSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.skillStrengthStatus,
    Component_srcLineSprite,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  skillNameLabel = *p_skillStrengthStatus;
  if ( !*p_skillStrengthStatus )
    goto LABEL_35;
  v54 = (UnityEngine_Vector2Int_o)0x1000000012LL;
  ServantSkillStrengthStatus__Set(
    (ServantSkillStrengthStatus_o *)skillNameLabel,
    this->fields.skillNameLabel,
    statusKind,
    skillRecord,
    18,
    -7,
    v54,
    0LL);
  levelLabel = this->fields.levelLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_4601/*"DISP_SKLL_LV"*/, 0LL);
  v52 = skillLv;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
  v51 = skillMaxLv;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
  skillNameLabel = System_String__Format_44301068(v43, v44, v45, 0LL);
  if ( !levelLabel )
    goto LABEL_35;
  UILabel__set_text(levelLabel, (System_String_o *)skillNameLabel, 0LL);
  skillNameLabel = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillNameLabel )
    goto LABEL_35;
  skillNameLabel = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)skillNameLabel,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillNameLabel )
    goto LABEL_35;
  skillNameLabel = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)skillNameLabel,
                     this->fields.currentSkillId,
                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !skillNameLabel )
    goto LABEL_35;
  v46 = (SkillEntity_o *)skillNameLabel;
  v47 = *((_DWORD *)skillNameLabel + 10);
  chargeTitleLb = this->fields.chargeTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  skillNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_12246/*"SKILLCHARGETURN_TXT"*/, 0LL);
  if ( !chargeTitleLb
    || (UILabel__set_text(chargeTitleLb, (System_String_o *)skillNameLabel, 0LL),
        chargeTimeLb = this->fields.chargeTimeLb,
        SkillChargeTime = SkillEntity__getSkillChargeTime(v46, this->fields.currentSkillLv, 0LL),
        skillNameLabel = System_Int32__ToString((int32_t)&SkillChargeTime, 0LL),
        !chargeTimeLb)
    || (UILabel__set_text(chargeTimeLb, (System_String_o *)skillNameLabel, 0LL),
        (skillNameLabel = this->fields.chargeInfoObj) == 0LL) )
  {
LABEL_35:
    sub_B2C434(skillNameLabel, v28);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillNameLabel, 1, 0LL);
  if ( this->fields.currentSkillLv < v47 )
    ServantSkillInfoIconComponent__checkEnableCombine(this, baseSvtId, v50);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillInfoIconComponent__SetSkillInfo_28897608(
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
  Il2CppObject *v21; // x20
  Il2CppObject *v22; // x0
  int32_t v23; // [xsp+8h] [xbp-48h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4189C88 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&idx);
    sub_B2C35C(&LocalizationManager_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_1705/*"APPEND_SKILL_ICON_INFO_LV"*/, v16);
    byte_4189C88 = 1;
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
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_1705/*"APPEND_SKILL_ICON_INFO_LV"*/, 0LL);
  v24 = skillLv;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v23 = skillMaxLv;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  skillNameLabel = (UILabel_o *)System_String__Format_44301068(v20, v21, v22, 0LL);
  if ( !levelLabel )
LABEL_11:
    sub_B2C434(skillNameLabel, v17);
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
  int v14; // w23
  WarEntity_o *v15; // x20
  __int64 v16; // x24
  int v17; // w25
  int v18; // w8
  __int64 v19; // x27
  __int64 v20; // x26
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int32_t num; // w8
  int v23; // w19
  _BOOL4 v24; // w20
  int v25; // w20
  UILabel_o *statusLb; // x19
  __int64 v27; // x0
  int v28; // [xsp+8h] [xbp-68h]
  UserItemEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4189C8C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CombineSkillMaster___, *(_QWORD *)&id);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&StringLiteral_8829/*"MSG_ABLED_SKILLUP"*/, v11);
    byte_4189C8C = 1;
  }
  entity = 0LL;
  SelfUserGame = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_40;
  v14 = *(_DWORD *)(SelfUserGame + 96);
  SelfUserGame = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_40;
  SelfUserGame = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_40;
  v15 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)SelfUserGame,
          id,
          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  SelfUserGame = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_40;
  SelfUserGame = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  if ( !v15 )
    goto LABEL_40;
  if ( !SelfUserGame )
    goto LABEL_40;
  SelfUserGame = (int64_t)CombineSkillMaster__GetEntity(
                            (CombineSkillMaster_o *)SelfUserGame,
                            (int32_t)v15->fields.coordinates,
                            this->fields.currentSkillLv,
                            0LL);
  if ( !SelfUserGame )
    goto LABEL_40;
  v16 = *(_QWORD *)(SelfUserGame + 32);
  if ( !v16 )
    goto LABEL_40;
  v17 = *(_DWORD *)(v16 + 24);
  v18 = *(_DWORD *)(SelfUserGame + 24);
  if ( v17 < 1 )
  {
    v23 = 1;
  }
  else
  {
    v28 = *(_DWORD *)(SelfUserGame + 24);
    v19 = *(_QWORD *)(SelfUserGame + 40);
    v20 = 0LL;
    while ( 1 )
    {
      SelfUserGame = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_40;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)SelfUserGame,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      SelfUserGame = NetworkManager__get_UserId(0LL);
      if ( (unsigned int)v20 >= *(_DWORD *)(v16 + 24) )
      {
LABEL_41:
        v27 = sub_B2C460(SelfUserGame);
        sub_B2C400(v27, 0LL);
      }
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_40;
      SelfUserGame = UserItemMaster__TryGetEntity(
                       MasterData_WarQuestSelectionMaster,
                       &entity,
                       SelfUserGame,
                       *(_DWORD *)(v16 + 32 + 4 * v20),
                       0LL);
      if ( (SelfUserGame & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_40;
        num = entity->fields.num;
        if ( !v19 )
          goto LABEL_40;
      }
      else
      {
        num = 0;
        if ( !v19 )
          goto LABEL_40;
      }
      if ( (unsigned int)v20 >= *(_DWORD *)(v19 + 24) )
        goto LABEL_41;
      if ( num < *(_DWORD *)(v19 + 32 + 4 * v20) )
        break;
      if ( (int)++v20 >= v17 )
      {
        v23 = 1;
        goto LABEL_30;
      }
    }
    v23 = 0;
LABEL_30:
    v18 = v28;
  }
  SelfUserGame = (int64_t)this->fields.statusLb;
  v24 = v14 >= v18;
  if ( !SelfUserGame )
    goto LABEL_40;
  SelfUserGame = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_40;
  v25 = v24 & v23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, v25, 0LL);
  if ( !v25 )
    return;
  statusLb = this->fields.statusLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8829/*"MSG_ABLED_SKILLUP"*/, 0LL);
  if ( !statusLb )
LABEL_40:
    sub_B2C434(SelfUserGame, v13);
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
    sub_B2C434(noSelectMskImg, isShow);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4185416 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isDecide);
    sub_B2C35C(&int_TypeInfo, v9);
    byte_4185416 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall ServantSkillInfoIconComponent_ClickDelegate__EndInvoke(
        ServantSkillInfoIconComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, isDecide, *(_QWORD *)&idx, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
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
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
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
            v19 = sub_AC5258(v22, v29, v30, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD))sub_B2C40C(v18, v23);
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
            v17 = sub_AC5258(v22, class_0, v11, v13);
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