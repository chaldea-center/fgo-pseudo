void BattleServantNPSpeedChangeComponent___ctor(BattleServantNPSpeedChangeComponent_o *this, const MethodInfo *method)
{
  this->fields.contentsHeight = 200;
  this->fields.maskColor = (struct UnityEngine_Color_o)xmmword_E9C3F0;
  this->fields.maskLabelEffectColor = (struct UnityEngine_Color_o)xmmword_E9D710;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


float BattleServantNPSpeedChangeComponent__CalcCommandCodeOffset(
        int32_t commandCodeSkillLength,
        const MethodInfo *method)
{
  float result; // s0

  result = (float)((float)commandCodeSkillLength * 126.0) + -32.0;
  if ( commandCodeSkillLength <= 0 )
    return 0.0;
  return result;
}


int32_t BattleServantNPSpeedChangeComponent__GetSelectedButtonIndex(
        BattleServantNPSpeedChangeComponent_o *this,
        int32_t svtCommonFlag,
        const MethodInfo *method)
{
  int v3; // w8

  if ( (svtCommonFlag & 4) != 0 )
    v3 = 2;
  else
    v3 = 1;
  return v3 & (svtCommonFlag << 30 >> 31);
}


void BattleServantNPSpeedChangeComponent__OnClickButton(
        BattleServantNPSpeedChangeComponent_o *this,
        UICommonButton_o *button,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  struct BattleServantData_o *battleServantData; // x8
  int32_t servantCollectionId_k__BackingField; // w20
  int32_t svtCommonFlag; // w21
  const MethodInfo *v13; // x1

  if ( (byte_59741F2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_UICommonButton___);
    sub_2213A60(&BattleData_TypeInfo);
    sub_2213A60(&Method_BattleServantNPSpeedChangeComponent_OnClickButton__);
    byte_59741F2 = 1;
  }
  v5 = Method_BattleServantNPSpeedChangeComponent_OnClickButton__;
  if ( this->fields.isSupport )
  {
    if ( (*((_BYTE *)Method_BattleServantNPSpeedChangeComponent_OnClickButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_BattleServantNPSpeedChangeComponent_OnClickButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
  }
  else
  {
    if ( (*((_BYTE *)Method_BattleServantNPSpeedChangeComponent_OnClickButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_BattleServantNPSpeedChangeComponent_OnClickButton__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    v8 = System_Array__IndexOf_object_(
           (System_Object_array *)this->fields.npSpeedButtonArray,
           (Il2CppObject *)button,
           (const MethodInfo_3A2E6EC *)Method_System_Array_IndexOf_UICommonButton___);
    if ( !this->fields.battleServantData
      || (BattleServantData__SetServantNPSpeedCommonFlag(this->fields.battleServantData, v8, 0),
          (battleServantData = this->fields.battleServantData) == 0) )
    {
      sub_2213CDC(v8, v9);
    }
    servantCollectionId_k__BackingField = battleServantData->fields._servantCollectionId_k__BackingField;
    svtCommonFlag = battleServantData->fields.svtCommonFlag;
    if ( !*(&BattleData_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v9);
    BattleData__SaveServantCommonFlag(servantCollectionId_k__BackingField, svtCommonFlag, 0);
    BattleServantNPSpeedChangeComponent__SetButton(this, v13);
  }
}


void BattleServantNPSpeedChangeComponent__SetButton(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  LocalizationManager_c *v3; // x0
  void *supportServantLabel; // x0
  float *v5; // x8
  float v6; // s8
  float v7; // s9
  float v8; // s10
  float v9; // s11
  struct BattleServantData_o *battleServantData; // x8
  int32_t svtCommonFlag; // w9
  struct UICommonButton_array *npSpeedButtonArray; // x8
  int v13; // w10
  float *v14; // x11
  __int64 v15; // x23
  float v16; // s12
  float v17; // s13
  float v18; // s14
  float v19; // s15
  int v20; // w22
  int max_length; // w9
  unsigned int v22; // w24
  int v23; // w25
  struct UISprite_array *npSpeedButtonSpriteArray; // x8
  System_String_o **v25; // x8
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59741F1 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_18209/*"btn_bg_20"*/);
    sub_2213A60(&StringLiteral_18211/*"btn_bg_21"*/);
    byte_59741F1 = 1;
  }
  v3 = LocalizationManager_TypeInfo;
  this->fields.isSupport = 0;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  if ( !byte_596ABD5 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596ABD5 = 1;
  }
  supportServantLabel = LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    supportServantLabel = LocalizationManager_TypeInfo;
  }
  v5 = (float *)*((_QWORD *)supportServantLabel + 23);
  v6 = v5[20];
  v7 = v5[21];
  v8 = v5[22];
  v9 = v5[23];
  if ( !byte_596ABD6 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    supportServantLabel = LocalizationManager_TypeInfo;
    byte_596ABD6 = 1;
  }
  if ( !*((_DWORD *)supportServantLabel + 57) )
  {
    j_il2cpp_runtime_class_init_0(supportServantLabel, method);
    supportServantLabel = LocalizationManager_TypeInfo;
  }
  battleServantData = this->fields.battleServantData;
  if ( !battleServantData )
    goto LABEL_44;
  svtCommonFlag = battleServantData->fields.svtCommonFlag;
  npSpeedButtonArray = this->fields.npSpeedButtonArray;
  v13 = (svtCommonFlag & 4) != 0 ? 2 : 1;
  if ( !npSpeedButtonArray )
    goto LABEL_44;
  v14 = (float *)*((_QWORD *)supportServantLabel + 23);
  v15 = 4;
  v16 = v14[24];
  v17 = v14[25];
  v18 = v14[26];
  v19 = v14[27];
  v20 = -(v13 & (svtCommonFlag << 30 >> 31));
  while ( 1 )
  {
    max_length = npSpeedButtonArray->max_length;
    v22 = v15 - 4;
    if ( (int)v15 - 4 >= max_length )
      break;
    if ( v22 >= max_length )
      goto LABEL_48;
    supportServantLabel = (void *)*((_QWORD *)&npSpeedButtonArray->obj.klass + v15);
    if ( supportServantLabel )
    {
      v23 = v20 + v15;
      UICommonButton__SetColliderEnable((UICommonButton_o *)supportServantLabel, v20 + (_DWORD)v15 != 4, 1, 0);
      npSpeedButtonSpriteArray = this->fields.npSpeedButtonSpriteArray;
      if ( npSpeedButtonSpriteArray )
      {
        if ( v22 >= LODWORD(npSpeedButtonSpriteArray->max_length) )
          goto LABEL_48;
        supportServantLabel = (void *)*((_QWORD *)&npSpeedButtonSpriteArray->obj.klass + v15);
        if ( supportServantLabel )
        {
          v25 = (System_String_o **)(v23 == 4 ? &StringLiteral_18211/*"btn_bg_21"*/ : &StringLiteral_18209/*"btn_bg_20"*/);
          UISprite__set_spriteName((UISprite_o *)supportServantLabel, *v25, 0);
          npSpeedLabelArray = this->fields.npSpeedLabelArray;
          if ( npSpeedLabelArray )
          {
            if ( v22 >= LODWORD(npSpeedLabelArray->max_length) )
LABEL_48:
              sub_2213CE4(supportServantLabel);
            supportServantLabel = (void *)*((_QWORD *)&npSpeedLabelArray->obj.klass + v15);
            if ( supportServantLabel )
            {
              v30.fields.r = v23 == 4 ? v16 : v6;
              v30.fields.g = v23 == 4 ? v17 : v7;
              v30.fields.b = v23 == 4 ? v18 : v8;
              v30.fields.a = v23 == 4 ? v19 : v9;
              UIRangeLabel__set_effectColor((UIRangeLabel_o *)supportServantLabel, v30, 0);
              npSpeedButtonArray = this->fields.npSpeedButtonArray;
              ++v15;
              if ( npSpeedButtonArray )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_44;
  }
  supportServantLabel = this->fields.supportServantLabel;
  if ( !supportServantLabel
    || (supportServantLabel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)supportServantLabel, 0)) == 0 )
  {
LABEL_44:
    sub_2213CDC(supportServantLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantLabel, 0, 0);
}


void BattleServantNPSpeedChangeComponent__SetButtonPosition(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_2213CDC(0, v4);
  v5.fields.z = 0.0;
  v5.fields.y = this->fields.equipeOffsetZ + -698.0;
  v5.fields.x = -9.0;
  UnityEngine_Transform__set_localPosition(transform, v5, 0);
}


void BattleServantNPSpeedChangeComponent__SetData(
        BattleServantNPSpeedChangeComponent_o *this,
        BattleServantData_o *battleSvtData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v11; // x1
  struct BattleServantData_o **p_battleServantData; // x21
  struct BattleDeckServantData_o *deckSvt; // x8
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  UIRangeLabel_o *v15; // x20
  struct UIRangeLabel_array *v16; // x8
  UIRangeLabel_o *v17; // x20
  struct UIRangeLabel_array *v18; // x8
  UIRangeLabel_o *v19; // x20
  UILabel_o *explanationLabel; // x19

  if ( (byte_59741F0 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12506/*"SERVANT_STATUS_TD_SPEED_TWICE"*/);
    sub_2213A60(&StringLiteral_12504/*"SERVANT_STATUS_TD_SPEED_FREE"*/);
    sub_2213A60(&StringLiteral_12505/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/);
    sub_2213A60(&StringLiteral_12500/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/);
    byte_59741F0 = 1;
  }
  if ( !battleSvtData || !battleSvtData->fields.deckSvt || battleSvtData->fields.isEnemy )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      return;
    }
LABEL_27:
    sub_2213CDC(gameObject, v11);
  }
  this->fields.battleServantData = battleSvtData;
  p_battleServantData = &this->fields.battleServantData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.battleServantData,
    (int32_t)battleSvtData,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  if ( !*p_battleServantData )
    goto LABEL_27;
  deckSvt = (*p_battleServantData)->fields.deckSvt;
  if ( !deckSvt )
    goto LABEL_27;
  if ( deckSvt->fields.isFollowerSvt )
    BattleServantNPSpeedChangeComponent__SetSupportServantButton(this, v11);
  else
    BattleServantNPSpeedChangeComponent__SetButton(this, v11);
  npSpeedLabelArray = this->fields.npSpeedLabelArray;
  if ( !npSpeedLabelArray )
    goto LABEL_27;
  if ( !LODWORD(npSpeedLabelArray->max_length) )
    goto LABEL_28;
  v15 = npSpeedLabelArray->m_Items[0];
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12504/*"SERVANT_STATUS_TD_SPEED_FREE"*/, 0);
  if ( !v15 )
    goto LABEL_27;
  UIRangeLabel__Set(v15, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
  v16 = this->fields.npSpeedLabelArray;
  if ( !v16 )
    goto LABEL_27;
  if ( (v16->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_28;
  v17 = v16->m_Items[1];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12500/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, 0);
  if ( !v17 )
    goto LABEL_27;
  UIRangeLabel__Set(v17, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
  v18 = this->fields.npSpeedLabelArray;
  if ( !v18 )
    goto LABEL_27;
  if ( LODWORD(v18->max_length) <= 2 )
LABEL_28:
    sub_2213CE4(gameObject);
  v19 = v18->m_Items[2];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12506/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, 0);
  if ( !v19 )
    goto LABEL_27;
  UIRangeLabel__Set(v19, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12505/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0);
  if ( !explanationLabel )
    goto LABEL_27;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0);
}


void BattleServantNPSpeedChangeComponent__SetSupportServantButton(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  LocalizationManager_c *v3; // x0
  UICommonButton_o *supportServantLabel; // x0
  struct UICommonButton_array *npSpeedButtonArray; // x8
  float *v6; // x9
  unsigned int v7; // w24
  float v8; // s8
  float v9; // s9
  float v10; // s10
  float v11; // s11
  unsigned int max_length; // w9
  struct UICommonButton_array *v13; // x8
  struct UISprite_array *npSpeedButtonSpriteArray; // x8
  System_String_o **v15; // x8
  struct UISprite_array *v16; // x8
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  struct UIRangeLabel_array *v18; // x8
  __int64 v22; // x1
  UILabel_o *v23; // x19
  UnityEngine_Color_o maskLabelEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59741F3 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_18209/*"btn_bg_20"*/);
    sub_2213A60(&StringLiteral_3004/*"BATTLE_SUPPORT_SERVANT_NP_SPEED"*/);
    sub_2213A60(&StringLiteral_18211/*"btn_bg_21"*/);
    byte_59741F3 = 1;
  }
  v3 = LocalizationManager_TypeInfo;
  this->fields.isSupport = 1;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  if ( !byte_596ABD5 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596ABD5 = 1;
  }
  supportServantLabel = (UICommonButton_o *)LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    supportServantLabel = (UICommonButton_o *)LocalizationManager_TypeInfo;
  }
  npSpeedButtonArray = this->fields.npSpeedButtonArray;
  if ( !npSpeedButtonArray )
    goto LABEL_35;
  v6 = *(float **)&supportServantLabel[1].fields.specifyHoverColor.fields.b;
  v7 = 0;
  v8 = v6[20];
  v9 = v6[21];
  v10 = v6[22];
  v11 = v6[23];
  while ( 1 )
  {
    max_length = npSpeedButtonArray->max_length;
    if ( (int)v7 >= (int)max_length )
      break;
    if ( v7 >= max_length )
      goto LABEL_42;
    supportServantLabel = npSpeedButtonArray->m_Items[v7];
    if ( supportServantLabel )
    {
      UICommonButton__SetButtonEnableWithCollider(supportServantLabel, 1, 0);
      v13 = this->fields.npSpeedButtonArray;
      if ( v13 )
      {
        if ( v7 >= LODWORD(v13->max_length) )
          goto LABEL_42;
        supportServantLabel = v13->m_Items[v7];
        if ( supportServantLabel )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)supportServantLabel, 0, 0);
          npSpeedButtonSpriteArray = this->fields.npSpeedButtonSpriteArray;
          if ( npSpeedButtonSpriteArray )
          {
            if ( v7 >= LODWORD(npSpeedButtonSpriteArray->max_length) )
              goto LABEL_42;
            supportServantLabel = (UICommonButton_o *)npSpeedButtonSpriteArray->m_Items[v7];
            if ( supportServantLabel )
            {
              v15 = (System_String_o **)(v7 ? &StringLiteral_18209/*"btn_bg_20"*/ : &StringLiteral_18211/*"btn_bg_21"*/);
              UISprite__set_spriteName((UISprite_o *)supportServantLabel, *v15, 0);
              v16 = this->fields.npSpeedButtonSpriteArray;
              if ( v16 )
              {
                if ( v7 >= LODWORD(v16->max_length) )
                  goto LABEL_42;
                supportServantLabel = (UICommonButton_o *)v16->m_Items[v7];
                if ( supportServantLabel )
                {
                  UIWidget__set_color((UIWidget_o *)supportServantLabel, this->fields.maskColor, 0);
                  npSpeedLabelArray = this->fields.npSpeedLabelArray;
                  if ( npSpeedLabelArray )
                  {
                    if ( v7 >= LODWORD(npSpeedLabelArray->max_length) )
                      goto LABEL_42;
                    supportServantLabel = (UICommonButton_o *)npSpeedLabelArray->m_Items[v7];
                    if ( supportServantLabel )
                    {
                      UIRangeLabel__set_color((UIRangeLabel_o *)supportServantLabel, this->fields.maskColor, 0);
                      v18 = this->fields.npSpeedLabelArray;
                      if ( v18 )
                      {
                        if ( v7 >= LODWORD(v18->max_length) )
LABEL_42:
                          sub_2213CE4(supportServantLabel);
                        maskLabelEffectColor.fields.a = v11;
                        maskLabelEffectColor.fields.b = v10;
                        maskLabelEffectColor.fields.g = v9;
                        maskLabelEffectColor.fields.r = v8;
                        if ( !v7 )
                          maskLabelEffectColor = this->fields.maskLabelEffectColor;
                        supportServantLabel = (UICommonButton_o *)v18->m_Items[v7];
                        if ( supportServantLabel )
                        {
                          ++v7;
                          UIRangeLabel__set_effectColor((UIRangeLabel_o *)supportServantLabel, maskLabelEffectColor, 0);
                          npSpeedButtonArray = this->fields.npSpeedButtonArray;
                          if ( npSpeedButtonArray )
                            continue;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_35;
  }
  supportServantLabel = (UICommonButton_o *)this->fields.supportServantLabel;
  if ( !supportServantLabel )
    goto LABEL_35;
  supportServantLabel = (UICommonButton_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)supportServantLabel,
                                              0);
  if ( !supportServantLabel )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantLabel, 1, 0);
  v23 = this->fields.supportServantLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
  supportServantLabel = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3004/*"BATTLE_SUPPORT_SERVANT_NP_SPEED"*/, 0);
  if ( !v23 )
LABEL_35:
    sub_2213CDC(supportServantLabel, method);
  UILabel__set_text(v23, (System_String_o *)supportServantLabel, 0);
}


int32_t BattleServantNPSpeedChangeComponent__get_ContentsHeight(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.contentsHeight;
}