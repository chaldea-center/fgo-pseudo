void __fastcall ServantSkillInfoIconComponent___ctor(ServantSkillInfoIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantSkillInfoIconComponent__Clear(ServantSkillInfoIconComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SkillIconComponent_o *skillIconComp; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Object_o *skillStrengthStatus; // x20
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42EAB02 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42EAB02 = 1;
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
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
      UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
      return;
    }
LABEL_19:
    sub_B5D69C(skillIconComp, method);
  }
}


void __fastcall ServantSkillInfoIconComponent__ClearAppendSkillInfo(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SkillIconComponent_o *skillIconComp; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Object_o *lineImg; // x20
  UnityEngine_Object_o *lockImg; // x20

  if ( (byte_42EAB03 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42EAB03 = 1;
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
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
    sub_B5D69C(skillIconComp, method);
  }
}


void __fastcall ServantSkillInfoIconComponent__OnClickSkill(
        ServantSkillInfoIconComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantSkillInfoIconComponent_ClickDelegate_o *callbackFunc; // x0

  if ( (byte_42EAAFF & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAAFF = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  DataManager_o *Instance; // x0
  __int64 v42; // x1
  int32_t v43; // w20
  System_String_o *v44; // x21
  System_String_o *v45; // x22
  Il2CppObject *v46; // x0
  System_String_o *v47; // x0
  System_String_o *Empty; // x20
  System_String_o *v49; // x19
  Il2CppObject *v50; // x0
  int32_t chargeTurn; // [xsp+4h] [xbp-4Ch] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42EAB00 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillLvMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&int_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&SoundManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&string_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_8719/*"MASTER_EQSKILL_LV_TXT"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_2572/*"BATTLE_SKILLCHARGETURN"*/, v38, v39, v40);
    byte_42EAB00 = 1;
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      this->fields.currentSkillId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        v43 = this->fields.currentSkillLv ? this->fields.currentSkillLv : 1;
        if ( Instance )
        {
          SkillEntity__getSkillMessageInfo((SkillEntity_o *)Instance, &name, &detail, v43, 0LL);
          v44 = name;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v45 = LocalizationManager__Get((System_String_o *)StringLiteral_8719/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
          chargeTurn = v43;
          v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn);
          v47 = System_String__Format(v45, v46, 0LL);
          name = System_String__Concat_44580072(v44, (System_String_o *)StringLiteral_81/*" "*/, v47, 0LL);
          Empty = string_TypeInfo->static_fields->Empty;
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillLvMaster___);
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
                Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2572/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
                if ( !entity )
                  goto LABEL_31;
                v49 = (System_String_o *)Instance;
                chargeTurn = entity->fields.chargeTurn;
                v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &chargeTurn);
                Empty = System_String__Format(v49, v50, 0LL);
              }
            }
            Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B5D69C(Instance, v42);
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

  if ( (byte_42EAAFC & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, idx, skillId, *(_QWORD *)&skillLv);
    byte_42EAAFC = 1;
  }
  skillIconComp = this->fields.skillIconComp;
  this->fields.index = idx;
  this->fields.currentSkillId = skillId;
  this->fields.currentSkillLv = skillLv;
  if ( !skillIconComp )
    goto LABEL_18;
  SkillIconComponent__Set_26822028(skillIconComp, skillId, skillLv, 0LL);
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
    sub_B5D69C(skillIconComp, *(_QWORD *)&idx);
  }
LABEL_17:
  this->fields.callbackFunc = callback;
  sub_B5D560(
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
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  UIWidget_o *skillIconSprite; // x22
  float v18; // s0
  float v19; // s1
  float v20; // s2
  UnityEngine_Component_o *lockImg; // x0
  __int64 v22; // x1
  struct UILabel_o *statusLb; // x19
  System_String_o *v24; // x1
  float v25; // s0
  float v26; // s1
  float v27; // s2
  UnityEngine_Color_o v28; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_42EAAFE & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, skillLv, isEnableCombine, method);
    sub_B5D5C4(&StringLiteral_8920/*"MSG_ABLED_SKILLUP"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42EAAFE = 1;
  }
  skillIconSprite = (UIWidget_o *)this->fields.skillIconSprite;
  if ( !skillLv )
  {
    v25 = 0.32812;
    v26 = 0.32812;
    v27 = 0.32812;
    v28 = (UnityEngine_Color_o)0LL;
    UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, (const MethodInfo *)&v28);
    if ( skillIconSprite )
    {
      UIWidget__set_color(skillIconSprite, v28, 0LL);
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
            v24 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_21;
          }
        }
      }
    }
LABEL_23:
    sub_B5D69C(lockImg, v22);
  }
  v18 = 1.0;
  v19 = 1.0;
  v20 = 1.0;
  *(_QWORD *)&v28.fields.r = 0LL;
  *(_QWORD *)&v28.fields.b = 0LL;
  UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, (const MethodInfo *)&v28);
  if ( !skillIconSprite )
    goto LABEL_23;
  UIWidget__set_color(skillIconSprite, v28, 0LL);
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
    lockImg = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8920/*"MSG_ABLED_SKILLUP"*/, 0LL);
    if ( statusLb )
    {
      v24 = (System_String_o *)lockImg;
      lockImg = (UnityEngine_Component_o *)statusLb;
LABEL_21:
      UILabel__set_text((UILabel_o *)lockImg, v24, 0LL);
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  __int64 v46; // x1
  void *skillNameLabel; // x0
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x23
  UnityEngine_Object_o *skillStrengthStatus; // x24
  UnityEngine_Object_o *gameObject; // x24
  System_String_o *PATH; // x24
  UnityEngine_Transform_o *transform; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  UILabel_o *levelLabel; // x22
  System_String_o *v61; // x23
  Il2CppObject *v62; // x21
  Il2CppObject *v63; // x0
  SkillEntity_o *v64; // x20
  int32_t v65; // w22
  UILabel_o *chargeTitleLb; // x21
  UILabel_o *chargeTimeLb; // x21
  const MethodInfo *v68; // x2
  int32_t v69; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v70; // [xsp+18h] [xbp-48h] BYREF
  int32_t SkillChargeTime; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector2Int_o v72; // 0:x6.8

  if ( (byte_42EAAFB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, idx, skillId, *(_QWORD *)&skillLv);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v19, v20, v21);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v22, v23, v24);
    sub_B5D5C4(&int_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&ServantSkillStrengthStatus_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_4675/*"DISP_SKLL_LV"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_12393/*"SKILLCHARGETURN_TXT"*/, v43, v44, v45);
    byte_42EAAFB = 1;
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
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
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
  skillNameLabel = BaseMonoBehaviour__createObject_21082944((BaseMonoBehaviour_o *)this, PATH, transform, 0LL, 0LL);
  if ( !skillNameLabel )
    goto LABEL_35;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)skillNameLabel,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
  *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.skillStrengthStatus,
    Component_srcLineSprite,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  skillNameLabel = *p_skillStrengthStatus;
  if ( !*p_skillStrengthStatus )
    goto LABEL_35;
  v72 = (UnityEngine_Vector2Int_o)0x1000000012LL;
  ServantSkillStrengthStatus__Set(
    (ServantSkillStrengthStatus_o *)skillNameLabel,
    this->fields.skillNameLabel,
    statusKind,
    skillRecord,
    18,
    -7,
    v72,
    0LL);
  levelLabel = this->fields.levelLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_4675/*"DISP_SKLL_LV"*/, 0LL);
  v70 = skillLv;
  v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70);
  v69 = skillMaxLv;
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
  skillNameLabel = System_String__Format_44573324(v61, v62, v63, 0LL);
  if ( !levelLabel )
    goto LABEL_35;
  UILabel__set_text(levelLabel, (System_String_o *)skillNameLabel, 0LL);
  skillNameLabel = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !skillNameLabel )
    goto LABEL_35;
  skillNameLabel = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)skillNameLabel,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !skillNameLabel )
    goto LABEL_35;
  skillNameLabel = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)skillNameLabel,
                     this->fields.currentSkillId,
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( !skillNameLabel )
    goto LABEL_35;
  v64 = (SkillEntity_o *)skillNameLabel;
  v65 = *((_DWORD *)skillNameLabel + 10);
  chargeTitleLb = this->fields.chargeTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  skillNameLabel = LocalizationManager__Get((System_String_o *)StringLiteral_12393/*"SKILLCHARGETURN_TXT"*/, 0LL);
  if ( !chargeTitleLb
    || (UILabel__set_text(chargeTitleLb, (System_String_o *)skillNameLabel, 0LL),
        chargeTimeLb = this->fields.chargeTimeLb,
        SkillChargeTime = SkillEntity__getSkillChargeTime(v64, this->fields.currentSkillLv, 0LL),
        skillNameLabel = System_Int32__ToString((int32_t)&SkillChargeTime, 0LL),
        !chargeTimeLb)
    || (UILabel__set_text(chargeTimeLb, (System_String_o *)skillNameLabel, 0LL),
        (skillNameLabel = this->fields.chargeInfoObj) == 0LL) )
  {
LABEL_35:
    sub_B5D69C(skillNameLabel, v46);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillNameLabel, 1, 0LL);
  if ( this->fields.currentSkillLv < v65 )
    ServantSkillInfoIconComponent__checkEnableCombine(this, baseSvtId, v68);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillInfoIconComponent__SetSkillInfo_29097720(
        ServantSkillInfoIconComponent_o *this,
        int32_t idx,
        System_String_o *skillName,
        int32_t skillId,
        int32_t skillLv,
        int32_t skillMaxLv,
        ServantSkillInfoIconComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x1
  UILabel_o *skillNameLabel; // x0
  UILabel_o *levelLabel; // x21
  System_String_o *v24; // x22
  Il2CppObject *v25; // x20
  Il2CppObject *v26; // x0
  int32_t v27; // [xsp+8h] [xbp-48h] BYREF
  int32_t v28; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42EAAFD & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, idx, (_DWORD)skillName, *(_QWORD *)&skillId);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_1730/*"APPEND_SKILL_ICON_INFO_LV"*/, v18, v19, v20);
    byte_42EAAFD = 1;
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
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_1730/*"APPEND_SKILL_ICON_INFO_LV"*/, 0LL);
  v28 = skillLv;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  v27 = skillMaxLv;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
  skillNameLabel = (UILabel_o *)System_String__Format_44573324(v24, v25, v26, 0LL);
  if ( !levelLabel )
LABEL_11:
    sub_B5D69C(skillNameLabel, v21);
  UILabel__set_text(levelLabel, (System_String_o *)skillNameLabel, 0LL);
}


void __fastcall ServantSkillInfoIconComponent__checkEnableCombine(
        ServantSkillInfoIconComponent_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int64_t SelfUserGame; // x0
  __int64 v28; // x1
  int v29; // w23
  WarEntity_o *v30; // x20
  __int64 v31; // x24
  int v32; // w25
  int v33; // w8
  __int64 v34; // x27
  __int64 v35; // x26
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int32_t num; // w8
  int v38; // w19
  _BOOL4 v39; // w20
  int v40; // w20
  UILabel_o *statusLb; // x19
  __int64 v42; // x0
  int v43; // [xsp+8h] [xbp-68h]
  UserItemEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42EAB01 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CombineSkillMaster___, id, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_8920/*"MSG_ABLED_SKILLUP"*/, v24, v25, v26);
    byte_42EAB01 = 1;
  }
  entity = 0LL;
  SelfUserGame = (int64_t)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_40;
  v29 = *(_DWORD *)(SelfUserGame + 96);
  SelfUserGame = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_40;
  SelfUserGame = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_40;
  v30 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)SelfUserGame,
          id,
          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  SelfUserGame = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_40;
  SelfUserGame = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)SelfUserGame,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CombineSkillMaster___);
  if ( !v30 )
    goto LABEL_40;
  if ( !SelfUserGame )
    goto LABEL_40;
  SelfUserGame = (int64_t)CombineSkillMaster__GetEntity(
                            (CombineSkillMaster_o *)SelfUserGame,
                            (int32_t)v30->fields.coordinates,
                            this->fields.currentSkillLv,
                            0LL);
  if ( !SelfUserGame )
    goto LABEL_40;
  v31 = *(_QWORD *)(SelfUserGame + 32);
  if ( !v31 )
    goto LABEL_40;
  v32 = *(_DWORD *)(v31 + 24);
  v33 = *(_DWORD *)(SelfUserGame + 24);
  if ( v32 < 1 )
  {
    v38 = 1;
  }
  else
  {
    v43 = *(_DWORD *)(SelfUserGame + 24);
    v34 = *(_QWORD *)(SelfUserGame + 40);
    v35 = 0LL;
    while ( 1 )
    {
      SelfUserGame = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SelfUserGame )
        goto LABEL_40;
      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)SelfUserGame,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      SelfUserGame = NetworkManager__get_UserId(0LL);
      if ( (unsigned int)v35 >= *(_DWORD *)(v31 + 24) )
      {
LABEL_41:
        v42 = sub_B5D6C8(SelfUserGame);
        sub_B5D668(v42, 0LL);
      }
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_40;
      SelfUserGame = UserItemMaster__TryGetEntity(
                       MasterData_WarQuestSelectionMaster,
                       &entity,
                       SelfUserGame,
                       *(_DWORD *)(v31 + 32 + 4 * v35),
                       0LL);
      if ( (SelfUserGame & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_40;
        num = entity->fields.num;
        if ( !v34 )
          goto LABEL_40;
      }
      else
      {
        num = 0;
        if ( !v34 )
          goto LABEL_40;
      }
      if ( (unsigned int)v35 >= *(_DWORD *)(v34 + 24) )
        goto LABEL_41;
      if ( num < *(_DWORD *)(v34 + 32 + 4 * v35) )
        break;
      if ( (int)++v35 >= v32 )
      {
        v38 = 1;
        goto LABEL_30;
      }
    }
    v38 = 0;
LABEL_30:
    v33 = v43;
  }
  SelfUserGame = (int64_t)this->fields.statusLb;
  v39 = v29 >= v33;
  if ( !SelfUserGame )
    goto LABEL_40;
  SelfUserGame = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SelfUserGame, 0LL);
  if ( !SelfUserGame )
    goto LABEL_40;
  v40 = v39 & v38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, v40, 0LL);
  if ( !v40 )
    return;
  statusLb = this->fields.statusLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8920/*"MSG_ABLED_SKILLUP"*/, 0LL);
  if ( !statusLb )
LABEL_40:
    sub_B5D69C(SelfUserGame, v28);
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
    sub_B5D69C(noSelectMskImg, isShow);
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall ServantSkillInfoIconComponent_ClickDelegate__BeginInvoke(
        ServantSkillInfoIconComponent_ClickDelegate_o *this,
        bool isDecide,
        int32_t idx,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v13[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v14; // [xsp+18h] [xbp-28h] BYREF
  char v15[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v15[0] = isDecide;
  v14 = idx;
  if ( (byte_42E5D8F & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isDecide, idx, callback);
    sub_B5D5C4(&int_TypeInfo, v9, v10, v11);
    byte_42E5D8F = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(bool_TypeInfo, v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall ServantSkillInfoIconComponent_ClickDelegate__EndInvoke(
        ServantSkillInfoIconComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, isDecide, *(_QWORD *)&idx);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
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
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
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
            v19 = sub_AF54C0(v22, v29, v30, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, bool, _QWORD, _QWORD))sub_B5D674(v18, v23);
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
            v17 = sub_AF54C0(v22, class_0, v11, v13);
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