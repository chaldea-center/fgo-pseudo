void __fastcall BattleServantNPSpeedChangeComponent___ctor(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  float v7; // s4
  float v8; // s5
  float v9; // s6
  float v10; // s7
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v12.fields.r = 0.298;
  v12.fields.g = 0.298;
  v12.fields.b = 0.298;
  v12.fields.a = 1.0;
  var40.name = 0LL;
  var40.klass = 0LL;
  UnityEngine_Color___ctor(v12, v2, v3, v4, v5, (const MethodInfo *)&var40.name);
  v13.fields.g = 0.0823;
  v13.fields.a = 1.0;
  *(_OWORD *)&this->fields.maskColor.fields.g = *(_OWORD *)&var40.name;
  v13.fields.r = 0.298;
  v13.fields.b = 0.0823;
  *(_OWORD *)&var40.methodPointer = 0uLL;
  UnityEngine_Color___ctor(v13, v7, v8, v9, v10, &var40);
  *(_OWORD *)&this->fields.maskLabelEffectColor.fields.g = *(_OWORD *)&var40.methodPointer;
  this->fields.contentsHeight = 200;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


float __fastcall BattleServantNPSpeedChangeComponent__CalcCommandCodeOffset(
        int32_t commandCodeSkillLength,
        const MethodInfo *method)
{
  if ( commandCodeSkillLength < 1 )
    return 0.0;
  else
    return (float)((float)commandCodeSkillLength * 126.0) + -32.0;
}


int32_t __fastcall BattleServantNPSpeedChangeComponent__GetSelectedButtonIndex(
        BattleServantNPSpeedChangeComponent_o *this,
        int32_t svtCommonFlag,
        const MethodInfo *method)
{
  if ( (svtCommonFlag & 2) == 0 )
    return 0;
  if ( (~(svtCommonFlag << 29 >> 31) & 3) != 0 )
    return 1;
  return 2;
}


void __fastcall BattleServantNPSpeedChangeComponent__OnClickButton(
        BattleServantNPSpeedChangeComponent_o *this,
        UICommonButton_o *button,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x0
  struct BattleServantData_o *battleServantData; // x8
  int32_t servantCollectionId_k__BackingField; // w20
  int32_t svtCommonFlag; // w21
  const MethodInfo *v11; // x1

  if ( (byte_4217253 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_UICommonButton___, button);
    sub_B0D8A4(&BattleData_TypeInfo, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_4217253 = 1;
  }
  if ( this->fields.isSupport )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v7 = System_Array__IndexOf_UICommonButton_(
           this->fields.npSpeedButtonArray,
           button,
           (const MethodInfo_1F69C70 *)Method_System_Array_IndexOf_UICommonButton___);
    if ( !this->fields.battleServantData
      || (BattleServantData__SetServantNPSpeedCommonFlag(this->fields.battleServantData, v7, 0LL),
          (battleServantData = this->fields.battleServantData) == 0LL) )
    {
      sub_B0D97C(v7);
    }
    servantCollectionId_k__BackingField = battleServantData->fields._servantCollectionId_k__BackingField;
    svtCommonFlag = battleServantData->fields.svtCommonFlag;
    if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    BattleData__SaveServantCommonFlag(servantCollectionId_k__BackingField, svtCommonFlag, 0LL);
    BattleServantNPSpeedChangeComponent__SetButton(this, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantNPSpeedChangeComponent__SetButton(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *supportServantLabel; // x0
  float *v6; // x8
  float v7; // s8
  float v8; // s9
  float v9; // s10
  float v10; // s11
  struct BattleServantData_o *battleServantData; // x8
  float *v12; // x9
  int32_t svtCommonFlag; // w8
  float v14; // s12
  float v15; // s13
  float v16; // s14
  float v17; // s15
  int v18; // w9
  struct UICommonButton_array *npSpeedButtonArray; // x8
  int v20; // w20
  __int64 v21; // x21
  int max_length; // w9
  il2cpp_array_size_t v23; // w24
  int v24; // w25
  struct UISprite_array *npSpeedButtonSpriteArray; // x8
  System_String_o **v26; // x8
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  float v28; // s3
  float v29; // s2
  float v30; // s1
  float v31; // s0
  __int64 v32; // x0

  if ( (byte_4217252 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17016/*"btn_bg_20"*/, v3);
    sub_B0D8A4(&StringLiteral_17017/*"btn_bg_21"*/, v4);
    byte_4217252 = 1;
  }
  this->fields.isSupport = 0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4211435 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    byte_4211435 = 1;
  }
  supportServantLabel = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    supportServantLabel = LocalizationManager_TypeInfo;
  }
  v6 = (float *)*((_QWORD *)supportServantLabel + 23);
  v7 = v6[20];
  v8 = v6[21];
  v9 = v6[22];
  v10 = v6[23];
  if ( !byte_4211436 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    supportServantLabel = LocalizationManager_TypeInfo;
    byte_4211436 = 1;
  }
  if ( (*((_BYTE *)supportServantLabel + 307) & 4) != 0 && !*((_DWORD *)supportServantLabel + 56) )
  {
    j_il2cpp_runtime_class_init_0(supportServantLabel);
    supportServantLabel = LocalizationManager_TypeInfo;
  }
  battleServantData = this->fields.battleServantData;
  if ( !battleServantData )
    goto LABEL_53;
  v12 = (float *)*((_QWORD *)supportServantLabel + 23);
  svtCommonFlag = battleServantData->fields.svtCommonFlag;
  v14 = v12[24];
  v15 = v12[25];
  v16 = v12[26];
  v17 = v12[27];
  if ( (svtCommonFlag & 2) != 0 )
    v18 = (~(svtCommonFlag << 29 >> 31) & 3) != 0 ? 1 : 2;
  else
    v18 = 0;
  npSpeedButtonArray = this->fields.npSpeedButtonArray;
  if ( !npSpeedButtonArray )
    goto LABEL_53;
  v20 = -v18;
  v21 = 4LL;
  while ( 1 )
  {
    max_length = npSpeedButtonArray->max_length;
    v23 = v21 - 4;
    if ( (int)v21 - 4 >= max_length )
      break;
    if ( v23 >= max_length )
      goto LABEL_54;
    supportServantLabel = (void *)*((_QWORD *)&npSpeedButtonArray->obj.klass + v21);
    if ( supportServantLabel )
    {
      v24 = v20 + v21;
      UICommonButton__SetColliderEnable((UICommonButton_o *)supportServantLabel, v20 + (_DWORD)v21 != 4, 1, 0LL);
      npSpeedButtonSpriteArray = this->fields.npSpeedButtonSpriteArray;
      if ( npSpeedButtonSpriteArray )
      {
        if ( v23 >= npSpeedButtonSpriteArray->max_length )
          goto LABEL_54;
        supportServantLabel = (void *)*((_QWORD *)&npSpeedButtonSpriteArray->obj.klass + v21);
        if ( supportServantLabel )
        {
          v26 = (System_String_o **)(v24 == 4 ? &StringLiteral_17017/*"btn_bg_21"*/ : &StringLiteral_17016/*"btn_bg_20"*/);
          UISprite__set_spriteName((UISprite_o *)supportServantLabel, *v26, 0LL);
          npSpeedLabelArray = this->fields.npSpeedLabelArray;
          if ( npSpeedLabelArray )
          {
            if ( v23 >= npSpeedLabelArray->max_length )
            {
LABEL_54:
              v32 = sub_B0D9A8(supportServantLabel);
              sub_B0D948(v32, 0LL);
            }
            supportServantLabel = (void *)*((_QWORD *)&npSpeedLabelArray->obj.klass + v21);
            if ( supportServantLabel )
            {
              v28 = v24 == 4 ? v17 : v10;
              v29 = v24 == 4 ? v16 : v9;
              v30 = v24 == 4 ? v15 : v8;
              v31 = v24 == 4 ? v14 : v7;
              UIRangeLabel__set_effectColor(
                (UIRangeLabel_o *)supportServantLabel,
                *(UnityEngine_Color_o *)(&v28 - 3),
                0LL);
              npSpeedButtonArray = this->fields.npSpeedButtonArray;
              ++v21;
              if ( npSpeedButtonArray )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_53;
  }
  supportServantLabel = this->fields.supportServantLabel;
  if ( !supportServantLabel
    || (supportServantLabel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)supportServantLabel, 0LL)) == 0LL )
  {
LABEL_53:
    sub_B0D97C(supportServantLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantLabel, 0, 0LL);
}


void __fastcall BattleServantNPSpeedChangeComponent__SetButtonPosition(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o v4; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B0D97C(0LL);
  v4.fields.x = -9.0;
  v4.fields.y = this->fields.equipeOffsetZ + -698.0;
  v4.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(transform, v4, 0LL);
}


void __fastcall BattleServantNPSpeedChangeComponent__SetData(
        BattleServantNPSpeedChangeComponent_o *this,
        BattleServantData_o *battleSvtData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  struct BattleServantData_o **p_battleServantData; // x21
  const MethodInfo *v16; // x1
  struct BattleDeckServantData_o *deckSvt; // x8
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  UIRangeLabel_o *v19; // x20
  struct UIRangeLabel_array *v20; // x8
  UIRangeLabel_o *v21; // x20
  struct UIRangeLabel_array *v22; // x8
  UIRangeLabel_o *v23; // x20
  UILabel_o *explanationLabel; // x19
  __int64 v25; // x0

  if ( (byte_4217251 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, battleSvtData);
    sub_B0D8A4(&StringLiteral_12079/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, v10);
    sub_B0D8A4(&StringLiteral_12077/*"SERVANT_STATUS_TD_SPEED_FREE"*/, v11);
    sub_B0D8A4(&StringLiteral_12078/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, v12);
    sub_B0D8A4(&StringLiteral_12073/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, v13);
    byte_4217251 = 1;
  }
  if ( !battleSvtData || !battleSvtData->fields.deckSvt || battleSvtData->fields.isEnemy )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      return;
    }
LABEL_28:
    sub_B0D97C(gameObject);
  }
  this->fields.battleServantData = battleSvtData;
  p_battleServantData = &this->fields.battleServantData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.battleServantData,
    (System_Int32_array **)battleSvtData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !*p_battleServantData )
    goto LABEL_28;
  deckSvt = (*p_battleServantData)->fields.deckSvt;
  if ( !deckSvt )
    goto LABEL_28;
  if ( deckSvt->fields.isFollowerSvt )
    BattleServantNPSpeedChangeComponent__SetSupportServantButton(this, v16);
  else
    BattleServantNPSpeedChangeComponent__SetButton(this, v16);
  npSpeedLabelArray = this->fields.npSpeedLabelArray;
  if ( !npSpeedLabelArray )
    goto LABEL_28;
  if ( !npSpeedLabelArray->max_length )
    goto LABEL_29;
  v19 = npSpeedLabelArray->m_Items[0];
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12077/*"SERVANT_STATUS_TD_SPEED_FREE"*/, 0LL);
  if ( !v19 )
    goto LABEL_28;
  UIRangeLabel__Set(v19, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
  v20 = this->fields.npSpeedLabelArray;
  if ( !v20 )
    goto LABEL_28;
  if ( v20->max_length <= 1 )
    goto LABEL_29;
  v21 = v20->m_Items[1];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12073/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, 0LL);
  if ( !v21 )
    goto LABEL_28;
  UIRangeLabel__Set(v21, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
  v22 = this->fields.npSpeedLabelArray;
  if ( !v22 )
    goto LABEL_28;
  if ( v22->max_length <= 2 )
  {
LABEL_29:
    v25 = sub_B0D9A8(gameObject);
    sub_B0D948(v25, 0LL);
  }
  v23 = v22->m_Items[2];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12079/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, 0LL);
  if ( !v23 )
    goto LABEL_28;
  UIRangeLabel__Set(v23, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12078/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_28;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantNPSpeedChangeComponent__SetSupportServantButton(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UICommonButton_o *supportServantLabel; // x0
  struct UICommonButton_array *npSpeedButtonArray; // x8
  float *v8; // x9
  __int64 v9; // x21
  float v10; // s8
  float v11; // s9
  float v12; // s10
  int v13; // s11
  int max_length; // w9
  il2cpp_array_size_t v15; // w24
  struct UICommonButton_array *v16; // x8
  struct UISprite_array *npSpeedButtonSpriteArray; // x8
  System_String_o **v18; // x8
  struct UISprite_array *v19; // x8
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  struct UIRangeLabel_array *v21; // x8
  float g; // s0
  float b; // s1
  float a; // s2
  int v25; // s3
  UILabel_o *v26; // x19
  __int64 v27; // x0

  if ( (byte_4217254 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17016/*"btn_bg_20"*/, v3);
    sub_B0D8A4(&StringLiteral_2542/*"BATTLE_SUPPORT_SERVANT_NP_SPEED"*/, v4);
    sub_B0D8A4(&StringLiteral_17017/*"btn_bg_21"*/, v5);
    byte_4217254 = 1;
  }
  this->fields.isSupport = 1;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4211435 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    byte_4211435 = 1;
  }
  supportServantLabel = (UICommonButton_o *)LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    supportServantLabel = (UICommonButton_o *)LocalizationManager_TypeInfo;
  }
  npSpeedButtonArray = this->fields.npSpeedButtonArray;
  if ( !npSpeedButtonArray )
    goto LABEL_45;
  v8 = *(float **)&supportServantLabel[1].fields.specifyPressedColor.fields.b;
  v9 = 4LL;
  v10 = v8[20];
  v11 = v8[21];
  v12 = v8[22];
  v13 = *((_DWORD *)v8 + 23);
  while ( 1 )
  {
    max_length = npSpeedButtonArray->max_length;
    v15 = v9 - 4;
    if ( (int)v9 - 4 >= max_length )
      break;
    if ( v15 >= max_length )
      goto LABEL_46;
    supportServantLabel = (UICommonButton_o *)*((_QWORD *)&npSpeedButtonArray->obj.klass + v9);
    if ( supportServantLabel )
    {
      UICommonButton__SetButtonEnableWithCollider(supportServantLabel, 1, 0LL);
      v16 = this->fields.npSpeedButtonArray;
      if ( v16 )
      {
        if ( v15 >= v16->max_length )
          goto LABEL_46;
        supportServantLabel = (UICommonButton_o *)*((_QWORD *)&v16->obj.klass + v9);
        if ( supportServantLabel )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)supportServantLabel, 0, 0LL);
          npSpeedButtonSpriteArray = this->fields.npSpeedButtonSpriteArray;
          if ( npSpeedButtonSpriteArray )
          {
            if ( v15 >= npSpeedButtonSpriteArray->max_length )
              goto LABEL_46;
            supportServantLabel = (UICommonButton_o *)*((_QWORD *)&npSpeedButtonSpriteArray->obj.klass + v9);
            if ( supportServantLabel )
            {
              v18 = (System_String_o **)((_DWORD)v9 == 4 ? &StringLiteral_17017/*"btn_bg_21"*/ : &StringLiteral_17016/*"btn_bg_20"*/);
              UISprite__set_spriteName((UISprite_o *)supportServantLabel, *v18, 0LL);
              v19 = this->fields.npSpeedButtonSpriteArray;
              if ( v19 )
              {
                if ( v15 >= v19->max_length )
                  goto LABEL_46;
                supportServantLabel = (UICommonButton_o *)*((_QWORD *)&v19->obj.klass + v9);
                if ( supportServantLabel )
                {
                  UIWidget__set_color(
                    (UIWidget_o *)supportServantLabel,
                    *(UnityEngine_Color_o *)&this->fields.maskColor.fields.g,
                    0LL);
                  npSpeedLabelArray = this->fields.npSpeedLabelArray;
                  if ( npSpeedLabelArray )
                  {
                    if ( v15 >= npSpeedLabelArray->max_length )
                      goto LABEL_46;
                    supportServantLabel = (UICommonButton_o *)*((_QWORD *)&npSpeedLabelArray->obj.klass + v9);
                    if ( supportServantLabel )
                    {
                      UIRangeLabel__set_color(
                        (UIRangeLabel_o *)supportServantLabel,
                        *(UnityEngine_Color_o *)&this->fields.maskColor.fields.g,
                        0LL);
                      v21 = this->fields.npSpeedLabelArray;
                      if ( v21 )
                      {
                        if ( v15 >= v21->max_length )
                        {
LABEL_46:
                          v27 = sub_B0D9A8(supportServantLabel);
                          sub_B0D948(v27, 0LL);
                        }
                        supportServantLabel = (UICommonButton_o *)*((_QWORD *)&v21->obj.klass + v9);
                        g = v10;
                        b = v11;
                        a = v12;
                        v25 = v13;
                        if ( (_DWORD)v9 == 4 )
                        {
                          g = this->fields.maskLabelEffectColor.fields.g;
                          b = this->fields.maskLabelEffectColor.fields.b;
                          a = this->fields.maskLabelEffectColor.fields.a;
                          v25 = *((_DWORD *)&this->fields.maskLabelEffectColor + 4);
                        }
                        if ( supportServantLabel )
                        {
                          UIRangeLabel__set_effectColor(
                            (UIRangeLabel_o *)supportServantLabel,
                            *(UnityEngine_Color_o *)&g,
                            0LL);
                          npSpeedButtonArray = this->fields.npSpeedButtonArray;
                          ++v9;
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
    goto LABEL_45;
  }
  supportServantLabel = (UICommonButton_o *)this->fields.supportServantLabel;
  if ( !supportServantLabel )
    goto LABEL_45;
  supportServantLabel = (UICommonButton_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)supportServantLabel,
                                              0LL);
  if ( !supportServantLabel )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)supportServantLabel, 1, 0LL);
  v26 = this->fields.supportServantLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  supportServantLabel = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2542/*"BATTLE_SUPPORT_SERVANT_NP_SPEED"*/, 0LL);
  if ( !v26 )
LABEL_45:
    sub_B0D97C(supportServantLabel);
  UILabel__set_text(v26, (System_String_o *)supportServantLabel, 0LL);
}


int32_t __fastcall BattleServantNPSpeedChangeComponent__get_ContentsHeight(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.contentsHeight;
}