void BattleServantNPSpeedChangeComponent___ctor(BattleServantNPSpeedChangeComponent_o *this, const MethodInfo *method)
{
  this->fields.contentsHeight = 200;
  this->fields.maskColor = (struct UnityEngine_Color_o)xmmword_C08DA0;
  this->fields.maskLabelEffectColor = (struct UnityEngine_Color_o)xmmword_C08C70;
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

  if ( (byte_4C2A91C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_IndexOf_UICommonButton___);
    sub_1C2D490(&BattleData_TypeInfo);
    sub_1C2D490(&Method_BattleServantNPSpeedChangeComponent_OnClickButton__);
    byte_4C2A91C = 1;
  }
  v5 = Method_BattleServantNPSpeedChangeComponent_OnClickButton__;
  isSupport = this->fields.isSupport;
  if ( (*((_BYTE *)Method_BattleServantNPSpeedChangeComponent_OnClickButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C2D4A8(Method_BattleServantNPSpeedChangeComponent_OnClickButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
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
           (const MethodInfo_31D5B68 *)Method_System_Array_IndexOf_UICommonButton___);
    if ( !this->fields.battleServantData
      || (BattleServantData__SetServantNPSpeedCommonFlag(this->fields.battleServantData, v8, 0),
          (battleServantData = this->fields.battleServantData) == 0) )
    {
      sub_1C2D6EC(v8, v9);
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
  __int64 v2; // x2
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
  float v15; // s12
  float v16; // s13
  float v17; // s14
  float v18; // s15
  int v19; // w22
  __int64 v20; // x23
  int max_length; // w9
  unsigned int v22; // w24
  int v23; // w25
  struct UISprite_array *npSpeedButtonSpriteArray; // x8
  System_String_o **v25; // x8
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  float v27; // s1 OVERLAPPED
  float v28; // s0
  float v29; // s2
  float v30; // s3

  if ( (byte_4C2A91B & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_17441/*"btn_bg_20"*/);
    sub_1C2D490(&StringLiteral_17442/*"btn_bg_21"*/);
    byte_4C2A91B = 1;
  }
  this->fields.isSupport = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C21AC5 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    byte_4C21AC5 = 1;
  }
  supportServantLabel = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    supportServantLabel = LocalizationManager_TypeInfo;
  }
  v5 = (float *)*((_QWORD *)supportServantLabel + 23);
  v6 = v5[20];
  v7 = v5[21];
  v8 = v5[22];
  v9 = v5[23];
  if ( !byte_4C21AC6 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    supportServantLabel = LocalizationManager_TypeInfo;
    byte_4C21AC6 = 1;
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
  v13 = (svtCommonFlag & 4) != 0 ? 2 : 1;
  if ( !npSpeedButtonArray )
    goto LABEL_48;
  v14 = (float *)*((_QWORD *)supportServantLabel + 23);
  v15 = v14[24];
  v16 = v14[25];
  v17 = v14[26];
  v18 = v14[27];
  v19 = -(v13 & (svtCommonFlag << 30 >> 31));
  v20 = 4;
  while ( 1 )
  {
    max_length = npSpeedButtonArray->max_length;
    v22 = v20 - 4;
    if ( (int)v20 - 4 >= max_length )
      break;
    if ( v22 >= max_length )
      goto LABEL_49;
    supportServantLabel = (void *)*((_QWORD *)&npSpeedButtonArray->obj.klass + v20);
    if ( supportServantLabel )
    {
      v23 = v19 + v20;
      UICommonButton__SetColliderEnable((UICommonButton_o *)supportServantLabel, v19 + (_DWORD)v20 != 4, 1, 0);
      npSpeedButtonSpriteArray = this->fields.npSpeedButtonSpriteArray;
      if ( npSpeedButtonSpriteArray )
      {
        if ( v22 >= LODWORD(npSpeedButtonSpriteArray->max_length) )
          goto LABEL_49;
        supportServantLabel = (void *)*((_QWORD *)&npSpeedButtonSpriteArray->obj.klass + v20);
        if ( supportServantLabel )
        {
          v25 = (System_String_o **)(v23 == 4 ? &StringLiteral_17442/*"btn_bg_21"*/ : &StringLiteral_17441/*"btn_bg_20"*/);
          UISprite__set_spriteName((UISprite_o *)supportServantLabel, *v25, 0);
          npSpeedLabelArray = this->fields.npSpeedLabelArray;
          if ( npSpeedLabelArray )
          {
            if ( v22 >= LODWORD(npSpeedLabelArray->max_length) )
LABEL_49:
              sub_1C2D6F4(supportServantLabel, method, v2);
            supportServantLabel = (void *)*((_QWORD *)&npSpeedLabelArray->obj.klass + v20);
            v27 = v23 == 4 ? v16 : v7;
            v28 = v23 == 4 ? v15 : v6;
            v29 = v23 == 4 ? v17 : v8;
            v30 = v23 == 4 ? v18 : v9;
            if ( supportServantLabel )
            {
              UIRangeLabel__set_effectColor(
                (UIRangeLabel_o *)supportServantLabel,
                *(UnityEngine_Color_o *)(&v27 - 1),
                0);
              npSpeedButtonArray = this->fields.npSpeedButtonArray;
              ++v20;
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
    sub_1C2D6EC(supportServantLabel, method);
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
    sub_1C2D6EC(0, v4);
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
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v7; // x1
  struct BattleServantData_o **p_battleServantData; // x21
  struct BattleDeckServantData_o *deckSvt; // x8
  __int64 v10; // x2
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  UIRangeLabel_o *v12; // x20
  struct UIRangeLabel_array *v13; // x8
  UIRangeLabel_o *v14; // x20
  struct UIRangeLabel_array *v15; // x8
  UIRangeLabel_o *v16; // x20
  UILabel_o *explanationLabel; // x19

  if ( (byte_4C2A91A & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_11987/*"SERVANT_STATUS_TD_SPEED_TWICE"*/);
    sub_1C2D490(&StringLiteral_11985/*"SERVANT_STATUS_TD_SPEED_FREE"*/);
    sub_1C2D490(&StringLiteral_11986/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_11981/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/);
    byte_4C2A91A = 1;
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
    sub_1C2D6EC(gameObject, v7);
  }
  this->fields.battleServantData = battleSvtData;
  p_battleServantData = &this->fields.battleServantData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.battleServantData, (int32_t)battleSvtData, (int32_t)method, v3);
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
    BattleServantNPSpeedChangeComponent__SetSupportServantButton(this, v7);
  else
    BattleServantNPSpeedChangeComponent__SetButton(this, v7);
  npSpeedLabelArray = this->fields.npSpeedLabelArray;
  if ( !npSpeedLabelArray )
    goto LABEL_27;
  if ( !LODWORD(npSpeedLabelArray->max_length) )
    goto LABEL_28;
  v12 = npSpeedLabelArray->m_Items[0];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11985/*"SERVANT_STATUS_TD_SPEED_FREE"*/, 0);
  if ( !v12 )
    goto LABEL_27;
  UIRangeLabel__Set(v12, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
  v13 = this->fields.npSpeedLabelArray;
  if ( !v13 )
    goto LABEL_27;
  if ( LODWORD(v13->max_length) <= 1 )
    goto LABEL_28;
  v14 = v13->m_Items[1];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11981/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, 0);
  if ( !v14 )
    goto LABEL_27;
  UIRangeLabel__Set(v14, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
  v15 = this->fields.npSpeedLabelArray;
  if ( !v15 )
    goto LABEL_27;
  if ( LODWORD(v15->max_length) <= 2 )
LABEL_28:
    sub_1C2D6F4(gameObject, v7, v10);
  v16 = v15->m_Items[2];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11987/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, 0);
  if ( !v16 )
    goto LABEL_27;
  UIRangeLabel__Set(v16, (System_String_o *)gameObject, 0, 1, 0, 0, 0);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11986/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0);
  if ( !explanationLabel )
    goto LABEL_27;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleServantNPSpeedChangeComponent__SetSupportServantButton(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UICommonButton_o *supportServantLabel; // x0
  struct UICommonButton_array *npSpeedButtonArray; // x8
  float *v6; // x9
  float v7; // s8
  float v8; // s9
  float v9; // s10
  float v10; // s11
  __int64 v11; // x24
  int max_length; // w9
  unsigned int v13; // w25
  struct UICommonButton_array *v14; // x8
  struct UISprite_array *npSpeedButtonSpriteArray; // x8
  System_String_o **v16; // x8
  struct UISprite_array *v17; // x8
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  struct UIRangeLabel_array *v19; // x8
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0 OVERLAPPED
  UILabel_o *v24; // x19

  if ( (byte_4C2A91D & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_17441/*"btn_bg_20"*/);
    sub_1C2D490(&StringLiteral_2885/*"BATTLE_SUPPORT_SERVANT_NP_SPEED"*/);
    sub_1C2D490(&StringLiteral_17442/*"btn_bg_21"*/);
    byte_4C2A91D = 1;
  }
  this->fields.isSupport = 1;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C21AC5 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    byte_4C21AC5 = 1;
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
  v6 = *(float **)&supportServantLabel[1].fields.specifyHoverColor.fields.b;
  v7 = v6[20];
  v8 = v6[21];
  v9 = v6[22];
  v10 = v6[23];
  v11 = 4;
  while ( 1 )
  {
    max_length = npSpeedButtonArray->max_length;
    v13 = v11 - 4;
    if ( (int)v11 - 4 >= max_length )
      break;
    if ( v13 >= max_length )
      goto LABEL_43;
    supportServantLabel = (UICommonButton_o *)*((_QWORD *)&npSpeedButtonArray->obj.klass + v11);
    if ( supportServantLabel )
    {
      UICommonButton__SetButtonEnableWithCollider(supportServantLabel, 1, 0);
      v14 = this->fields.npSpeedButtonArray;
      if ( v14 )
      {
        if ( v13 >= LODWORD(v14->max_length) )
          goto LABEL_43;
        supportServantLabel = (UICommonButton_o *)*((_QWORD *)&v14->obj.klass + v11);
        if ( supportServantLabel )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)supportServantLabel, 0, 0);
          npSpeedButtonSpriteArray = this->fields.npSpeedButtonSpriteArray;
          if ( npSpeedButtonSpriteArray )
          {
            if ( v13 >= LODWORD(npSpeedButtonSpriteArray->max_length) )
              goto LABEL_43;
            supportServantLabel = (UICommonButton_o *)*((_QWORD *)&npSpeedButtonSpriteArray->obj.klass + v11);
            if ( supportServantLabel )
            {
              v16 = (System_String_o **)((_DWORD)v11 == 4 ? &StringLiteral_17442/*"btn_bg_21"*/ : &StringLiteral_17441/*"btn_bg_20"*/);
              UISprite__set_spriteName((UISprite_o *)supportServantLabel, *v16, 0);
              v17 = this->fields.npSpeedButtonSpriteArray;
              if ( v17 )
              {
                if ( v13 >= LODWORD(v17->max_length) )
                  goto LABEL_43;
                supportServantLabel = (UICommonButton_o *)*((_QWORD *)&v17->obj.klass + v11);
                if ( supportServantLabel )
                {
                  UIWidget__set_color((UIWidget_o *)supportServantLabel, this->fields.maskColor, 0);
                  npSpeedLabelArray = this->fields.npSpeedLabelArray;
                  if ( npSpeedLabelArray )
                  {
                    if ( v13 >= LODWORD(npSpeedLabelArray->max_length) )
                      goto LABEL_43;
                    supportServantLabel = (UICommonButton_o *)*((_QWORD *)&npSpeedLabelArray->obj.klass + v11);
                    if ( supportServantLabel )
                    {
                      UIRangeLabel__set_color((UIRangeLabel_o *)supportServantLabel, this->fields.maskColor, 0);
                      v19 = this->fields.npSpeedLabelArray;
                      if ( v19 )
                      {
                        if ( v13 >= LODWORD(v19->max_length) )
LABEL_43:
                          sub_1C2D6F4(supportServantLabel, method, v2);
                        a = v10;
                        b = v9;
                        g = v8;
                        r = v7;
                        if ( (_DWORD)v11 == 4 )
                        {
                          r = this->fields.maskLabelEffectColor.fields.r;
                          g = this->fields.maskLabelEffectColor.fields.g;
                          b = this->fields.maskLabelEffectColor.fields.b;
                          a = this->fields.maskLabelEffectColor.fields.a;
                        }
                        supportServantLabel = (UICommonButton_o *)*((_QWORD *)&v19->obj.klass + v11);
                        if ( supportServantLabel )
                        {
                          UIRangeLabel__set_effectColor(
                            (UIRangeLabel_o *)supportServantLabel,
                            *(UnityEngine_Color_o *)&r,
                            0);
                          npSpeedButtonArray = this->fields.npSpeedButtonArray;
                          ++v11;
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
  v24 = this->fields.supportServantLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  supportServantLabel = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2885/*"BATTLE_SUPPORT_SERVANT_NP_SPEED"*/, 0);
  if ( !v24 )
LABEL_42:
    sub_1C2D6EC(supportServantLabel, method);
  UILabel__set_text(v24, (System_String_o *)supportServantLabel, 0);
}


int32_t BattleServantNPSpeedChangeComponent__get_ContentsHeight(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.contentsHeight;
}