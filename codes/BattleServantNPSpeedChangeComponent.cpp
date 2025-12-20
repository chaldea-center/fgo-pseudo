void BattleServantNPSpeedChangeComponent___ctor(BattleServantNPSpeedChangeComponent_o *this, const MethodInfo *method)
{
  this->fields.contentsHeight = 200;
  this->fields.maskColor = (struct UnityEngine_Color_o)xmmword_CFE2C0;
  this->fields.maskLabelEffectColor = (struct UnityEngine_Color_o)xmmword_CFE1B0;
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
  if ( (svtCommonFlag & 2) == 0 )
    return 0;
  if ( (svtCommonFlag & 4) != 0 )
    return 2;
  return 1;
}


void BattleServantNPSpeedChangeComponent__OnClickButton(
        BattleServantNPSpeedChangeComponent_o *this,
        UICommonButton_o *button,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  _BOOL4 isSupport; // w21
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  struct BattleServantData_o *battleServantData; // x8
  int32_t servantCollectionId_k__BackingField; // w20
  int32_t svtCommonFlag; // w21
  const MethodInfo *v13; // x1

  if ( (byte_4D30031 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_IndexOf_UICommonButton___);
    sub_1C94098(&BattleData_TypeInfo);
    sub_1C94098(&Method_BattleServantNPSpeedChangeComponent_OnClickButton__);
    byte_4D30031 = 1;
  }
  v5 = Method_BattleServantNPSpeedChangeComponent_OnClickButton__;
  isSupport = this->fields.isSupport;
  if ( (*((_BYTE *)Method_BattleServantNPSpeedChangeComponent_OnClickButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C940B0(Method_BattleServantNPSpeedChangeComponent_OnClickButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C9407C(v5, v5[4]);
  if ( isSupport )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    v8 = System_Array__IndexOf_object_(
           (System_Object_array *)this->fields.npSpeedButtonArray,
           (Il2CppObject *)button,
           (const MethodInfo_32A4C80 *)Method_System_Array_IndexOf_UICommonButton___);
    if ( !this->fields.battleServantData
      || (BattleServantData__SetServantNPSpeedCommonFlag(this->fields.battleServantData, v8, 0),
          (battleServantData = this->fields.battleServantData) == 0) )
    {
      sub_1C942F0(v8, v9);
    }
    servantCollectionId_k__BackingField = battleServantData->fields._servantCollectionId_k__BackingField;
    svtCommonFlag = battleServantData->fields.svtCommonFlag;
    if ( !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    BattleData__SaveServantCommonFlag(servantCollectionId_k__BackingField, svtCommonFlag, 0);
    BattleServantNPSpeedChangeComponent__SetButton(this, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantNPSpeedChangeComponent__SetButton(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  void *supportServantLabel; // x0
  float *v4; // x8
  float v5; // s8
  float v6; // s9
  float v7; // s10
  float v8; // s11
  struct BattleServantData_o *battleServantData; // x8
  int32_t svtCommonFlag; // w9
  struct UICommonButton_array *npSpeedButtonArray; // x8
  int v12; // w10
  float *v13; // x11
  float v14; // s12
  float v15; // s13
  float v16; // s14
  float v17; // s15
  int v18; // w22
  __int64 v19; // x23
  int max_length; // w9
  unsigned int v21; // w24
  int v22; // w25
  struct UISprite_array *npSpeedButtonSpriteArray; // x8
  System_String_o **v24; // x8
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  float v26; // s1 OVERLAPPED
  float v27; // s0
  float v28; // s2
  float v29; // s3

  if ( (byte_4D30030 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_17533/*"btn_bg_20"*/);
    sub_1C94098(&StringLiteral_17534/*"btn_bg_21"*/);
    byte_4D30030 = 1;
  }
  this->fields.isSupport = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4D26E67 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    byte_4D26E67 = 1;
  }
  supportServantLabel = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    supportServantLabel = LocalizationManager_TypeInfo;
  }
  v4 = (float *)*((_QWORD *)supportServantLabel + 23);
  v5 = v4[20];
  v6 = v4[21];
  v7 = v4[22];
  v8 = v4[23];
  if ( !byte_4D26E68 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    supportServantLabel = LocalizationManager_TypeInfo;
    byte_4D26E68 = 1;
  }
  if ( !*((_DWORD *)supportServantLabel + 56) )
  {
    j_il2cpp_runtime_class_init_0(supportServantLabel);
    supportServantLabel = LocalizationManager_TypeInfo;
  }
  battleServantData = this->fields.battleServantData;
  if ( !battleServantData )
    goto LABEL_48;
  svtCommonFlag = battleServantData->fields.svtCommonFlag;
  npSpeedButtonArray = this->fields.npSpeedButtonArray;
  v12 = (svtCommonFlag & 4) != 0 ? 2 : 1;
  if ( !npSpeedButtonArray )
    goto LABEL_48;
  v13 = (float *)*((_QWORD *)supportServantLabel + 23);
  v14 = v13[24];
  v15 = v13[25];
  v16 = v13[26];
  v17 = v13[27];
  v18 = -(v12 & (svtCommonFlag << 30 >> 31));
  v19 = 4;
  while ( 1 )
  {
    max_length = npSpeedButtonArray->max_length;
    v21 = v19 - 4;
    if ( (int)v19 - 4 >= max_length )
      break;
    if ( v21 >= max_length )
      goto LABEL_49;
    supportServantLabel = (void *)*((_QWORD *)&npSpeedButtonArray->obj.klass + v19);
    if ( supportServantLabel )
    {
      v22 = v18 + v19;
      UICommonButton__SetColliderEnable((UICommonButton_o *)supportServantLabel, v18 + (_DWORD)v19 != 4, 1, 0);
      npSpeedButtonSpriteArray = this->fields.npSpeedButtonSpriteArray;
      if ( npSpeedButtonSpriteArray )
      {
        if ( v21 >= LODWORD(npSpeedButtonSpriteArray->max_length) )
          goto LABEL_49;
        supportServantLabel = (void *)*((_QWORD *)&npSpeedButtonSpriteArray->obj.klass + v19);
        if ( supportServantLabel )
        {
          v24 = (System_String_o **)(v22 == 4 ? &StringLiteral_17534/*"btn_bg_21"*/ : &StringLiteral_17533/*"btn_bg_20"*/);
          UISprite__set_spriteName((UISprite_o *)supportServantLabel, *v24, 0);
          npSpeedLabelArray = this->fields.npSpeedLabelArray;
          if ( npSpeedLabelArray )
          {
            if ( v21 >= LODWORD(npSpeedLabelArray->max_length) )
LABEL_49:
              sub_1C942F8(supportServantLabel);
            supportServantLabel = (void *)*((_QWORD *)&npSpeedLabelArray->obj.klass + v19);
            v26 = v22 == 4 ? v15 : v6;
            v27 = v22 == 4 ? v14 : v5;
            v28 = v22 == 4 ? v16 : v7;
            v29 = v22 == 4 ? v17 : v8;
            if ( supportServantLabel )
            {
              UIRangeLabel__set_effectColor(
                (UIRangeLabel_o *)supportServantLabel,
                *(UnityEngine_Color_o *)(&v26 - 1),
                0);
              npSpeedButtonArray = this->fields.npSpeedButtonArray;
              ++v19;
              if ( npSpeedButtonArray )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_48;
  }
  supportServantLabel = this->fields.supportServantLabel;
  if ( !supportServantLabel
    || (supportServantLabel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)supportServantLabel, 0)) == 0 )
  {
LABEL_48:
    sub_1C942F0(supportServantLabel, method);
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
    sub_1C942F0(0, v4);
  v5.fields.x = -9.0;
  v5.fields.y = this->fields.equipeOffsetZ + -698.0;
  v5.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(transform, v5, 0);
}


void BattleServantNPSpeedChangeComponent__SetData(
        BattleServantNPSpeedChangeComponent_o *this,
        BattleServantData_o *battleSvtData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
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

  if ( (byte_4D3002F & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_12041/*"SERVANT_STATUS_TD_SPEED_TWICE"*/);
    sub_1C94098(&StringLiteral_12039/*"SERVANT_STATUS_TD_SPEED_FREE"*/);
    sub_1C94098(&StringLiteral_12040/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/);
    sub_1C94098(&StringLiteral_12035/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/);
    byte_4D3002F = 1;
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
    sub_1C942F0(gameObject, v11);
  }
  this->fields.battleServantData = battleSvtData;
  p_battleServantData = &this->fields.battleServantData;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.battleServantData,
    (int32_t)battleSvtData,
    (int32_t)method,
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
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12039/*"SERVANT_STATUS_TD_SPEED_FREE"*/, 0);
  if ( !v15 )
    goto LABEL_27;
  UIRangeLabel__Set(v15, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
  v16 = this->fields.npSpeedLabelArray;
  if ( !v16 )
    goto LABEL_27;
  if ( LODWORD(v16->max_length) <= 1 )
    goto LABEL_28;
  v17 = v16->m_Items[1];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12035/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, 0);
  if ( !v17 )
    goto LABEL_27;
  UIRangeLabel__Set(v17, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
  v18 = this->fields.npSpeedLabelArray;
  if ( !v18 )
    goto LABEL_27;
  if ( LODWORD(v18->max_length) <= 2 )
LABEL_28:
    sub_1C942F8(gameObject);
  v19 = v18->m_Items[2];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12041/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, 0);
  if ( !v19 )
    goto LABEL_27;
  UIRangeLabel__Set(v19, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12040/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0);
  if ( !explanationLabel )
    goto LABEL_27;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleServantNPSpeedChangeComponent__SetSupportServantButton(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  UICommonButton_o *supportServantLabel; // x0
  struct UICommonButton_array *npSpeedButtonArray; // x8
  float *v5; // x9
  float v6; // s8
  float v7; // s9
  float v8; // s10
  float v9; // s11
  __int64 v10; // x24
  int max_length; // w9
  unsigned int v12; // w25
  struct UICommonButton_array *v13; // x8
  struct UISprite_array *npSpeedButtonSpriteArray; // x8
  System_String_o **v15; // x8
  struct UISprite_array *v16; // x8
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  struct UIRangeLabel_array *v18; // x8
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0 OVERLAPPED
  UILabel_o *v23; // x19

  if ( (byte_4D30032 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_17533/*"btn_bg_20"*/);
    sub_1C94098(&StringLiteral_2885/*"BATTLE_SUPPORT_SERVANT_NP_SPEED"*/);
    sub_1C94098(&StringLiteral_17534/*"btn_bg_21"*/);
    byte_4D30032 = 1;
  }
  this->fields.isSupport = 1;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4D26E67 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    byte_4D26E67 = 1;
  }
  supportServantLabel = (UICommonButton_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    supportServantLabel = (UICommonButton_o *)LocalizationManager_TypeInfo;
  }
  npSpeedButtonArray = this->fields.npSpeedButtonArray;
  if ( !npSpeedButtonArray )
    goto LABEL_42;
  v5 = *(float **)&supportServantLabel[1].fields.specifyHoverColor.fields.b;
  v6 = v5[20];
  v7 = v5[21];
  v8 = v5[22];
  v9 = v5[23];
  v10 = 4;
  while ( 1 )
  {
    max_length = npSpeedButtonArray->max_length;
    v12 = v10 - 4;
    if ( (int)v10 - 4 >= max_length )
      break;
    if ( v12 >= max_length )
      goto LABEL_43;
    supportServantLabel = (UICommonButton_o *)*((_QWORD *)&npSpeedButtonArray->obj.klass + v10);
    if ( supportServantLabel )
    {
      UICommonButton__SetButtonEnableWithCollider(supportServantLabel, 1, 0);
      v13 = this->fields.npSpeedButtonArray;
      if ( v13 )
      {
        if ( v12 >= LODWORD(v13->max_length) )
          goto LABEL_43;
        supportServantLabel = (UICommonButton_o *)*((_QWORD *)&v13->obj.klass + v10);
        if ( supportServantLabel )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)supportServantLabel, 0, 0);
          npSpeedButtonSpriteArray = this->fields.npSpeedButtonSpriteArray;
          if ( npSpeedButtonSpriteArray )
          {
            if ( v12 >= LODWORD(npSpeedButtonSpriteArray->max_length) )
              goto LABEL_43;
            supportServantLabel = (UICommonButton_o *)*((_QWORD *)&npSpeedButtonSpriteArray->obj.klass + v10);
            if ( supportServantLabel )
            {
              v15 = (System_String_o **)((_DWORD)v10 == 4 ? &StringLiteral_17534/*"btn_bg_21"*/ : &StringLiteral_17533/*"btn_bg_20"*/);
              UISprite__set_spriteName((UISprite_o *)supportServantLabel, *v15, 0);
              v16 = this->fields.npSpeedButtonSpriteArray;
              if ( v16 )
              {
                if ( v12 >= LODWORD(v16->max_length) )
                  goto LABEL_43;
                supportServantLabel = (UICommonButton_o *)*((_QWORD *)&v16->obj.klass + v10);
                if ( supportServantLabel )
                {
                  UIWidget__set_color((UIWidget_o *)supportServantLabel, this->fields.maskColor, 0);
                  npSpeedLabelArray = this->fields.npSpeedLabelArray;
                  if ( npSpeedLabelArray )
                  {
                    if ( v12 >= LODWORD(npSpeedLabelArray->max_length) )
                      goto LABEL_43;
                    supportServantLabel = (UICommonButton_o *)*((_QWORD *)&npSpeedLabelArray->obj.klass + v10);
                    if ( supportServantLabel )
                    {
                      UIRangeLabel__set_color((UIRangeLabel_o *)supportServantLabel, this->fields.maskColor, 0);
                      v18 = this->fields.npSpeedLabelArray;
                      if ( v18 )
                      {
                        if ( v12 >= LODWORD(v18->max_length) )
LABEL_43:
                          sub_1C942F8(supportServantLabel);
                        a = v9;
                        b = v8;
                        g = v7;
                        r = v6;
                        if ( (_DWORD)v10 == 4 )
                        {
                          r = this->fields.maskLabelEffectColor.fields.r;
                          g = this->fields.maskLabelEffectColor.fields.g;
                          b = this->fields.maskLabelEffectColor.fields.b;
                          a = this->fields.maskLabelEffectColor.fields.a;
                        }
                        supportServantLabel = (UICommonButton_o *)*((_QWORD *)&v18->obj.klass + v10);
                        if ( supportServantLabel )
                        {
                          UIRangeLabel__set_effectColor(
                            (UIRangeLabel_o *)supportServantLabel,
                            *(UnityEngine_Color_o *)&r,
                            0);
                          npSpeedButtonArray = this->fields.npSpeedButtonArray;
                          ++v10;
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
    goto LABEL_42;
  }
  supportServantLabel = (UICommonButton_o *)this->fields.supportServantLabel;
  if ( !supportServantLabel )
    goto LABEL_42;
  supportServantLabel = (UICommonButton_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)supportServantLabel,
                                              0);
  if ( !supportServantLabel )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantLabel, 1, 0);
  v23 = this->fields.supportServantLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  supportServantLabel = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2885/*"BATTLE_SUPPORT_SERVANT_NP_SPEED"*/, 0);
  if ( !v23 )
LABEL_42:
    sub_1C942F0(supportServantLabel, method);
  UILabel__set_text(v23, (System_String_o *)supportServantLabel, 0);
}


int32_t BattleServantNPSpeedChangeComponent__get_ContentsHeight(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.contentsHeight;
}