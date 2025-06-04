void __fastcall BattleServantNPSpeedChangeComponent___ctor(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  this->fields.contentsHeight = 200;
  this->fields.maskColor = (struct UnityEngine_Color_o)xmmword_BDDCA0;
  this->fields.maskLabelEffectColor = (struct UnityEngine_Color_o)xmmword_BDDB70;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


float __fastcall BattleServantNPSpeedChangeComponent__CalcCommandCodeOffset(
        int32_t commandCodeSkillLength,
        const MethodInfo *method)
{
  float result; // s0

  result = (float)((float)commandCodeSkillLength * 126.0) + -32.0;
  if ( commandCodeSkillLength <= 0 )
    return 0.0;
  return result;
}


int32_t __fastcall BattleServantNPSpeedChangeComponent__GetSelectedButtonIndex(
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


void __fastcall BattleServantNPSpeedChangeComponent__OnClickButton(
        BattleServantNPSpeedChangeComponent_o *this,
        UICommonButton_o *button,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  _BOOL4 isSupport; // w21
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x0
  __int64 v11; // x1
  struct BattleServantData_o *battleServantData; // x8
  int32_t servantCollectionId_k__BackingField; // w20
  int32_t svtCommonFlag; // w21
  const MethodInfo *v15; // x1

  if ( (byte_4B05522 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_IndexOf_UICommonButton___, button);
    sub_1BC3008(&BattleData_TypeInfo, v5);
    sub_1BC3008(&Method_BattleServantNPSpeedChangeComponent_OnClickButton__, v6);
    byte_4B05522 = 1;
  }
  v7 = Method_BattleServantNPSpeedChangeComponent_OnClickButton__;
  isSupport = this->fields.isSupport;
  if ( (*((_BYTE *)Method_BattleServantNPSpeedChangeComponent_OnClickButton__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BC3020(Method_BattleServantNPSpeedChangeComponent_OnClickButton__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v7, v7[4]);
  if ( isSupport )
  {
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
    v10 = System_Array__IndexOf_object_(
            (System_Object_array *)this->fields.npSpeedButtonArray,
            (Il2CppObject *)button,
            (const MethodInfo_3100440 *)Method_System_Array_IndexOf_UICommonButton___);
    if ( !this->fields.battleServantData
      || (BattleServantData__SetServantNPSpeedCommonFlag(this->fields.battleServantData, v10, 0LL),
          (battleServantData = this->fields.battleServantData) == 0LL) )
    {
      sub_1BC3264(v10, v11);
    }
    servantCollectionId_k__BackingField = battleServantData->fields._servantCollectionId_k__BackingField;
    svtCommonFlag = battleServantData->fields.svtCommonFlag;
    if ( !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    BattleData__SaveServantCommonFlag(servantCollectionId_k__BackingField, svtCommonFlag, 0LL);
    BattleServantNPSpeedChangeComponent__SetButton(this, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantNPSpeedChangeComponent__SetButton(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  void *supportServantLabel; // x0
  float *v7; // x8
  float v8; // s8
  float v9; // s9
  float v10; // s10
  float v11; // s11
  struct BattleServantData_o *battleServantData; // x8
  int32_t svtCommonFlag; // w9
  struct UICommonButton_array *npSpeedButtonArray; // x8
  int v15; // w10
  float *v16; // x11
  float v17; // s12
  float v18; // s13
  float v19; // s14
  float v20; // s15
  int v21; // w22
  __int64 v22; // x23
  int max_length; // w9
  il2cpp_array_size_t v24; // w24
  int v25; // w25
  struct UISprite_array *npSpeedButtonSpriteArray; // x8
  System_String_o **v27; // x8
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  float v29; // s1
  float v30; // s0
  float v31; // s2
  float v32; // s3

  if ( (byte_4B05521 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_17296/*"btn_bg_20"*/, v4);
    sub_1BC3008(&StringLiteral_17297/*"btn_bg_21"*/, v5);
    byte_4B05521 = 1;
  }
  this->fields.isSupport = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4AFC909 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, method);
    byte_4AFC909 = 1;
  }
  supportServantLabel = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    supportServantLabel = LocalizationManager_TypeInfo;
  }
  v7 = (float *)*((_QWORD *)supportServantLabel + 23);
  v8 = v7[20];
  v9 = v7[21];
  v10 = v7[22];
  v11 = v7[23];
  if ( !byte_4AFC90A )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, method);
    supportServantLabel = LocalizationManager_TypeInfo;
    byte_4AFC90A = 1;
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
  v15 = (svtCommonFlag & 4) != 0 ? 2 : 1;
  if ( !npSpeedButtonArray )
    goto LABEL_48;
  v16 = (float *)*((_QWORD *)supportServantLabel + 23);
  v17 = v16[24];
  v18 = v16[25];
  v19 = v16[26];
  v20 = v16[27];
  v21 = -(v15 & (svtCommonFlag << 30 >> 31));
  v22 = 4LL;
  while ( 1 )
  {
    max_length = npSpeedButtonArray->max_length;
    v24 = v22 - 4;
    if ( (int)v22 - 4 >= max_length )
      break;
    if ( v24 >= max_length )
      goto LABEL_49;
    supportServantLabel = (void *)*((_QWORD *)&npSpeedButtonArray->obj.klass + v22);
    if ( supportServantLabel )
    {
      v25 = v21 + v22;
      UICommonButton__SetColliderEnable((UICommonButton_o *)supportServantLabel, v21 + (_DWORD)v22 != 4, 1, 0LL);
      npSpeedButtonSpriteArray = this->fields.npSpeedButtonSpriteArray;
      if ( npSpeedButtonSpriteArray )
      {
        if ( v24 >= npSpeedButtonSpriteArray->max_length )
          goto LABEL_49;
        supportServantLabel = (void *)*((_QWORD *)&npSpeedButtonSpriteArray->obj.klass + v22);
        if ( supportServantLabel )
        {
          v27 = (System_String_o **)(v25 == 4 ? &StringLiteral_17297/*"btn_bg_21"*/ : &StringLiteral_17296/*"btn_bg_20"*/);
          UISprite__set_spriteName((UISprite_o *)supportServantLabel, *v27, 0LL);
          npSpeedLabelArray = this->fields.npSpeedLabelArray;
          if ( npSpeedLabelArray )
          {
            if ( v24 >= npSpeedLabelArray->max_length )
LABEL_49:
              sub_1BC326C(supportServantLabel, method, v2);
            supportServantLabel = (void *)*((_QWORD *)&npSpeedLabelArray->obj.klass + v22);
            v29 = v25 == 4 ? v18 : v9;
            v30 = v25 == 4 ? v17 : v8;
            v31 = v25 == 4 ? v19 : v10;
            v32 = v25 == 4 ? v20 : v11;
            if ( supportServantLabel )
            {
              UIRangeLabel__set_effectColor(
                (UIRangeLabel_o *)supportServantLabel,
                *(UnityEngine_Color_o *)(&v29 - 1),
                0LL);
              npSpeedButtonArray = this->fields.npSpeedButtonArray;
              ++v22;
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
    || (supportServantLabel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)supportServantLabel, 0LL)) == 0LL )
  {
LABEL_48:
    sub_1BC3264(supportServantLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantLabel, 0, 0LL);
}


void __fastcall BattleServantNPSpeedChangeComponent__SetButtonPosition(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BC3264(0LL, v4);
  v5.fields.x = -9.0;
  v5.fields.y = this->fields.equipeOffsetZ + -698.0;
  v5.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(transform, v5, 0LL);
}


void __fastcall BattleServantNPSpeedChangeComponent__SetData(
        BattleServantNPSpeedChangeComponent_o *this,
        BattleServantData_o *battleSvtData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v11; // x1
  struct BattleServantData_o **p_battleServantData; // x21
  struct BattleDeckServantData_o *deckSvt; // x8
  __int64 v14; // x2
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  UIRangeLabel_o *v16; // x20
  struct UIRangeLabel_array *v17; // x8
  UIRangeLabel_o *v18; // x20
  struct UIRangeLabel_array *v19; // x8
  UIRangeLabel_o *v20; // x20
  UILabel_o *explanationLabel; // x19

  if ( (byte_4B05520 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, battleSvtData);
    sub_1BC3008(&StringLiteral_11877/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, v6);
    sub_1BC3008(&StringLiteral_11875/*"SERVANT_STATUS_TD_SPEED_FREE"*/, v7);
    sub_1BC3008(&StringLiteral_11876/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, v8);
    sub_1BC3008(&StringLiteral_11871/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, v9);
    byte_4B05520 = 1;
  }
  if ( !battleSvtData || !battleSvtData->fields.deckSvt || battleSvtData->fields.isEnemy )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      return;
    }
LABEL_27:
    sub_1BC3264(gameObject, v11);
  }
  this->fields.battleServantData = battleSvtData;
  p_battleServantData = &this->fields.battleServantData;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.battleServantData, (int32_t)battleSvtData, (int32_t)method, v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
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
  if ( !npSpeedLabelArray->max_length )
    goto LABEL_28;
  v16 = npSpeedLabelArray->m_Items[0];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11875/*"SERVANT_STATUS_TD_SPEED_FREE"*/, 0LL);
  if ( !v16 )
    goto LABEL_27;
  UIRangeLabel__Set(v16, (System_String_o *)gameObject, 0LL, 1, 0, 0, 0LL);
  v17 = this->fields.npSpeedLabelArray;
  if ( !v17 )
    goto LABEL_27;
  if ( v17->max_length <= 1 )
    goto LABEL_28;
  v18 = v17->m_Items[1];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11871/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, 0LL);
  if ( !v18 )
    goto LABEL_27;
  UIRangeLabel__Set(v18, (System_String_o *)gameObject, 0LL, 1, 0, 0, 0LL);
  v19 = this->fields.npSpeedLabelArray;
  if ( !v19 )
    goto LABEL_27;
  if ( v19->max_length <= 2 )
LABEL_28:
    sub_1BC326C(gameObject, v11, v14);
  v20 = v19->m_Items[2];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11877/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, 0LL);
  if ( !v20 )
    goto LABEL_27;
  UIRangeLabel__Set(v20, (System_String_o *)gameObject, 0LL, 1, 0, 0, 0LL);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11876/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_27;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantNPSpeedChangeComponent__SetSupportServantButton(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UICommonButton_o *supportServantLabel; // x0
  struct UICommonButton_array *npSpeedButtonArray; // x8
  float *v9; // x9
  float v10; // s8
  float v11; // s9
  float v12; // s10
  float v13; // s11
  __int64 v14; // x24
  int max_length; // w9
  il2cpp_array_size_t v16; // w25
  struct UICommonButton_array *v17; // x8
  struct UISprite_array *npSpeedButtonSpriteArray; // x8
  System_String_o **v19; // x8
  struct UISprite_array *v20; // x8
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  struct UIRangeLabel_array *v22; // x8
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0
  UILabel_o *v27; // x19

  if ( (byte_4B05523 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_17296/*"btn_bg_20"*/, v4);
    sub_1BC3008(&StringLiteral_2869/*"BATTLE_SUPPORT_SERVANT_NP_SPEED"*/, v5);
    sub_1BC3008(&StringLiteral_17297/*"btn_bg_21"*/, v6);
    byte_4B05523 = 1;
  }
  this->fields.isSupport = 1;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4AFC909 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, method);
    byte_4AFC909 = 1;
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
  v9 = *(float **)&supportServantLabel[1].fields.specifyHoverColor.fields.b;
  v10 = v9[20];
  v11 = v9[21];
  v12 = v9[22];
  v13 = v9[23];
  v14 = 4LL;
  while ( 1 )
  {
    max_length = npSpeedButtonArray->max_length;
    v16 = v14 - 4;
    if ( (int)v14 - 4 >= max_length )
      break;
    if ( v16 >= max_length )
      goto LABEL_43;
    supportServantLabel = (UICommonButton_o *)*((_QWORD *)&npSpeedButtonArray->obj.klass + v14);
    if ( supportServantLabel )
    {
      UICommonButton__SetButtonEnableWithCollider(supportServantLabel, 1, 0LL);
      v17 = this->fields.npSpeedButtonArray;
      if ( v17 )
      {
        if ( v16 >= v17->max_length )
          goto LABEL_43;
        supportServantLabel = (UICommonButton_o *)*((_QWORD *)&v17->obj.klass + v14);
        if ( supportServantLabel )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)supportServantLabel, 0, 0LL);
          npSpeedButtonSpriteArray = this->fields.npSpeedButtonSpriteArray;
          if ( npSpeedButtonSpriteArray )
          {
            if ( v16 >= npSpeedButtonSpriteArray->max_length )
              goto LABEL_43;
            supportServantLabel = (UICommonButton_o *)*((_QWORD *)&npSpeedButtonSpriteArray->obj.klass + v14);
            if ( supportServantLabel )
            {
              v19 = (System_String_o **)((_DWORD)v14 == 4 ? &StringLiteral_17297/*"btn_bg_21"*/ : &StringLiteral_17296/*"btn_bg_20"*/);
              UISprite__set_spriteName((UISprite_o *)supportServantLabel, *v19, 0LL);
              v20 = this->fields.npSpeedButtonSpriteArray;
              if ( v20 )
              {
                if ( v16 >= v20->max_length )
                  goto LABEL_43;
                supportServantLabel = (UICommonButton_o *)*((_QWORD *)&v20->obj.klass + v14);
                if ( supportServantLabel )
                {
                  UIWidget__set_color((UIWidget_o *)supportServantLabel, this->fields.maskColor, 0LL);
                  npSpeedLabelArray = this->fields.npSpeedLabelArray;
                  if ( npSpeedLabelArray )
                  {
                    if ( v16 >= npSpeedLabelArray->max_length )
                      goto LABEL_43;
                    supportServantLabel = (UICommonButton_o *)*((_QWORD *)&npSpeedLabelArray->obj.klass + v14);
                    if ( supportServantLabel )
                    {
                      UIRangeLabel__set_color((UIRangeLabel_o *)supportServantLabel, this->fields.maskColor, 0LL);
                      v22 = this->fields.npSpeedLabelArray;
                      if ( v22 )
                      {
                        if ( v16 >= v22->max_length )
LABEL_43:
                          sub_1BC326C(supportServantLabel, method, v2);
                        a = v13;
                        b = v12;
                        g = v11;
                        r = v10;
                        if ( (_DWORD)v14 == 4 )
                        {
                          r = this->fields.maskLabelEffectColor.fields.r;
                          g = this->fields.maskLabelEffectColor.fields.g;
                          b = this->fields.maskLabelEffectColor.fields.b;
                          a = this->fields.maskLabelEffectColor.fields.a;
                        }
                        supportServantLabel = (UICommonButton_o *)*((_QWORD *)&v22->obj.klass + v14);
                        if ( supportServantLabel )
                        {
                          UIRangeLabel__set_effectColor(
                            (UIRangeLabel_o *)supportServantLabel,
                            *(UnityEngine_Color_o *)&r,
                            0LL);
                          npSpeedButtonArray = this->fields.npSpeedButtonArray;
                          ++v14;
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
                                              0LL);
  if ( !supportServantLabel )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantLabel, 1, 0LL);
  v27 = this->fields.supportServantLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  supportServantLabel = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2869/*"BATTLE_SUPPORT_SERVANT_NP_SPEED"*/, 0LL);
  if ( !v27 )
LABEL_42:
    sub_1BC3264(supportServantLabel, method);
  UILabel__set_text(v27, (System_String_o *)supportServantLabel, 0LL);
}


int32_t __fastcall BattleServantNPSpeedChangeComponent__get_ContentsHeight(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.contentsHeight;
}