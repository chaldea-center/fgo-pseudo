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
  __int64 v5; // x0
  __int64 v6; // x1
  struct BattleServantData_o *battleServantData; // x8
  int32_t servantCollectionId_k__BackingField; // w20
  int32_t svtCommonFlag; // w21
  const MethodInfo *v10; // x1

  if ( (byte_435476B & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_IndexOf_UICommonButton___);
    sub_B70694(&BattleData_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_435476B = 1;
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
    v5 = System_Array__IndexOf_UICommonButton_(
           this->fields.npSpeedButtonArray,
           button,
           (const MethodInfo_1FCC134 *)Method_System_Array_IndexOf_UICommonButton___);
    if ( !this->fields.battleServantData
      || (BattleServantData__SetServantNPSpeedCommonFlag(this->fields.battleServantData, v5, 0LL),
          (battleServantData = this->fields.battleServantData) == 0LL) )
    {
      sub_B7076C(v5, v6);
    }
    servantCollectionId_k__BackingField = battleServantData->fields._servantCollectionId_k__BackingField;
    svtCommonFlag = battleServantData->fields.svtCommonFlag;
    if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    BattleData__SaveServantCommonFlag(servantCollectionId_k__BackingField, svtCommonFlag, 0LL);
    BattleServantNPSpeedChangeComponent__SetButton(this, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantNPSpeedChangeComponent__SetButton(
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
  float *v10; // x9
  int32_t svtCommonFlag; // w8
  float v12; // s12
  float v13; // s13
  float v14; // s14
  float v15; // s15
  int v16; // w9
  struct UICommonButton_array *npSpeedButtonArray; // x8
  int v18; // w20
  __int64 v19; // x21
  int max_length; // w9
  il2cpp_array_size_t v21; // w24
  int v22; // w25
  struct UISprite_array *npSpeedButtonSpriteArray; // x8
  System_String_o **v24; // x8
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  float v26; // s3
  float v27; // s2
  float v28; // s1
  float v29; // s0
  __int64 v30; // x0

  if ( (byte_435476A & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_17221/*"btn_bg_20"*/);
    sub_B70694(&StringLiteral_17222/*"btn_bg_21"*/);
    byte_435476A = 1;
  }
  this->fields.isSupport = 0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_434E9FD )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    byte_434E9FD = 1;
  }
  supportServantLabel = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    supportServantLabel = LocalizationManager_TypeInfo;
  }
  v4 = (float *)*((_QWORD *)supportServantLabel + 23);
  v5 = v4[20];
  v6 = v4[21];
  v7 = v4[22];
  v8 = v4[23];
  if ( !byte_434E9FE )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    supportServantLabel = LocalizationManager_TypeInfo;
    byte_434E9FE = 1;
  }
  if ( (*((_BYTE *)supportServantLabel + 307) & 4) != 0 && !*((_DWORD *)supportServantLabel + 56) )
  {
    j_il2cpp_runtime_class_init_0(supportServantLabel);
    supportServantLabel = LocalizationManager_TypeInfo;
  }
  battleServantData = this->fields.battleServantData;
  if ( !battleServantData )
    goto LABEL_53;
  v10 = (float *)*((_QWORD *)supportServantLabel + 23);
  svtCommonFlag = battleServantData->fields.svtCommonFlag;
  v12 = v10[24];
  v13 = v10[25];
  v14 = v10[26];
  v15 = v10[27];
  if ( (svtCommonFlag & 2) != 0 )
    v16 = (~(svtCommonFlag << 29 >> 31) & 3) != 0 ? 1 : 2;
  else
    v16 = 0;
  npSpeedButtonArray = this->fields.npSpeedButtonArray;
  if ( !npSpeedButtonArray )
    goto LABEL_53;
  v18 = -v16;
  v19 = 4LL;
  while ( 1 )
  {
    max_length = npSpeedButtonArray->max_length;
    v21 = v19 - 4;
    if ( (int)v19 - 4 >= max_length )
      break;
    if ( v21 >= max_length )
      goto LABEL_54;
    supportServantLabel = (void *)*((_QWORD *)&npSpeedButtonArray->obj.klass + v19);
    if ( supportServantLabel )
    {
      v22 = v18 + v19;
      UICommonButton__SetColliderEnable((UICommonButton_o *)supportServantLabel, v18 + (_DWORD)v19 != 4, 1, 0LL);
      npSpeedButtonSpriteArray = this->fields.npSpeedButtonSpriteArray;
      if ( npSpeedButtonSpriteArray )
      {
        if ( v21 >= npSpeedButtonSpriteArray->max_length )
          goto LABEL_54;
        supportServantLabel = (void *)*((_QWORD *)&npSpeedButtonSpriteArray->obj.klass + v19);
        if ( supportServantLabel )
        {
          v24 = (System_String_o **)(v22 == 4 ? &StringLiteral_17222/*"btn_bg_21"*/ : &StringLiteral_17221/*"btn_bg_20"*/);
          UISprite__set_spriteName((UISprite_o *)supportServantLabel, *v24, 0LL);
          npSpeedLabelArray = this->fields.npSpeedLabelArray;
          if ( npSpeedLabelArray )
          {
            if ( v21 >= npSpeedLabelArray->max_length )
            {
LABEL_54:
              v30 = sub_B70798(supportServantLabel);
              sub_B70738(v30, 0LL);
            }
            supportServantLabel = (void *)*((_QWORD *)&npSpeedLabelArray->obj.klass + v19);
            if ( supportServantLabel )
            {
              v26 = v22 == 4 ? v15 : v8;
              v27 = v22 == 4 ? v14 : v7;
              v28 = v22 == 4 ? v13 : v6;
              v29 = v22 == 4 ? v12 : v5;
              UIRangeLabel__set_effectColor(
                (UIRangeLabel_o *)supportServantLabel,
                *(UnityEngine_Color_o *)(&v26 - 3),
                0LL);
              npSpeedButtonArray = this->fields.npSpeedButtonArray;
              ++v19;
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
    sub_B7076C(supportServantLabel, method);
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
    sub_B7076C(0LL, v4);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  __int64 v21; // x0

  if ( (byte_4354769 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_12209/*"SERVANT_STATUS_TD_SPEED_TWICE"*/);
    sub_B70694(&StringLiteral_12207/*"SERVANT_STATUS_TD_SPEED_FREE"*/);
    sub_B70694(&StringLiteral_12208/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/);
    sub_B70694(&StringLiteral_12203/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/);
    byte_4354769 = 1;
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
    sub_B7076C(gameObject, v11);
  }
  this->fields.battleServantData = battleSvtData;
  p_battleServantData = &this->fields.battleServantData;
  sub_B70630(
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
    BattleServantNPSpeedChangeComponent__SetSupportServantButton(this, v11);
  else
    BattleServantNPSpeedChangeComponent__SetButton(this, v11);
  npSpeedLabelArray = this->fields.npSpeedLabelArray;
  if ( !npSpeedLabelArray )
    goto LABEL_28;
  if ( !npSpeedLabelArray->max_length )
    goto LABEL_29;
  v15 = npSpeedLabelArray->m_Items[0];
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12207/*"SERVANT_STATUS_TD_SPEED_FREE"*/, 0LL);
  if ( !v15 )
    goto LABEL_28;
  UIRangeLabel__Set(v15, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
  v16 = this->fields.npSpeedLabelArray;
  if ( !v16 )
    goto LABEL_28;
  if ( v16->max_length <= 1 )
    goto LABEL_29;
  v17 = v16->m_Items[1];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12203/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, 0LL);
  if ( !v17 )
    goto LABEL_28;
  UIRangeLabel__Set(v17, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
  v18 = this->fields.npSpeedLabelArray;
  if ( !v18 )
    goto LABEL_28;
  if ( v18->max_length <= 2 )
  {
LABEL_29:
    v21 = sub_B70798(gameObject);
    sub_B70738(v21, 0LL);
  }
  v19 = v18->m_Items[2];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12209/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, 0LL);
  if ( !v19 )
    goto LABEL_28;
  UIRangeLabel__Set(v19, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12208/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_28;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantNPSpeedChangeComponent__SetSupportServantButton(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  UICommonButton_o *supportServantLabel; // x0
  struct UICommonButton_array *npSpeedButtonArray; // x8
  float *v5; // x9
  __int64 v6; // x21
  float v7; // s8
  float v8; // s9
  float v9; // s10
  int v10; // s11
  int max_length; // w9
  il2cpp_array_size_t v12; // w24
  struct UICommonButton_array *v13; // x8
  struct UISprite_array *npSpeedButtonSpriteArray; // x8
  System_String_o **v15; // x8
  struct UISprite_array *v16; // x8
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  struct UIRangeLabel_array *v18; // x8
  float g; // s0
  float b; // s1
  float a; // s2
  int v22; // s3
  UILabel_o *v23; // x19
  __int64 v24; // x0

  if ( (byte_435476C & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_17221/*"btn_bg_20"*/);
    sub_B70694(&StringLiteral_2593/*"BATTLE_SUPPORT_SERVANT_NP_SPEED"*/);
    sub_B70694(&StringLiteral_17222/*"btn_bg_21"*/);
    byte_435476C = 1;
  }
  this->fields.isSupport = 1;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_434E9FD )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    byte_434E9FD = 1;
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
  v5 = *(float **)&supportServantLabel[1].fields.specifyPressedColor.fields.b;
  v6 = 4LL;
  v7 = v5[20];
  v8 = v5[21];
  v9 = v5[22];
  v10 = *((_DWORD *)v5 + 23);
  while ( 1 )
  {
    max_length = npSpeedButtonArray->max_length;
    v12 = v6 - 4;
    if ( (int)v6 - 4 >= max_length )
      break;
    if ( v12 >= max_length )
      goto LABEL_46;
    supportServantLabel = (UICommonButton_o *)*((_QWORD *)&npSpeedButtonArray->obj.klass + v6);
    if ( supportServantLabel )
    {
      UICommonButton__SetButtonEnableWithCollider(supportServantLabel, 1, 0LL);
      v13 = this->fields.npSpeedButtonArray;
      if ( v13 )
      {
        if ( v12 >= v13->max_length )
          goto LABEL_46;
        supportServantLabel = (UICommonButton_o *)*((_QWORD *)&v13->obj.klass + v6);
        if ( supportServantLabel )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)supportServantLabel, 0, 0LL);
          npSpeedButtonSpriteArray = this->fields.npSpeedButtonSpriteArray;
          if ( npSpeedButtonSpriteArray )
          {
            if ( v12 >= npSpeedButtonSpriteArray->max_length )
              goto LABEL_46;
            supportServantLabel = (UICommonButton_o *)*((_QWORD *)&npSpeedButtonSpriteArray->obj.klass + v6);
            if ( supportServantLabel )
            {
              v15 = (System_String_o **)((_DWORD)v6 == 4 ? &StringLiteral_17222/*"btn_bg_21"*/ : &StringLiteral_17221/*"btn_bg_20"*/);
              UISprite__set_spriteName((UISprite_o *)supportServantLabel, *v15, 0LL);
              v16 = this->fields.npSpeedButtonSpriteArray;
              if ( v16 )
              {
                if ( v12 >= v16->max_length )
                  goto LABEL_46;
                supportServantLabel = (UICommonButton_o *)*((_QWORD *)&v16->obj.klass + v6);
                if ( supportServantLabel )
                {
                  UIWidget__set_color(
                    (UIWidget_o *)supportServantLabel,
                    *(UnityEngine_Color_o *)&this->fields.maskColor.fields.g,
                    0LL);
                  npSpeedLabelArray = this->fields.npSpeedLabelArray;
                  if ( npSpeedLabelArray )
                  {
                    if ( v12 >= npSpeedLabelArray->max_length )
                      goto LABEL_46;
                    supportServantLabel = (UICommonButton_o *)*((_QWORD *)&npSpeedLabelArray->obj.klass + v6);
                    if ( supportServantLabel )
                    {
                      UIRangeLabel__set_color(
                        (UIRangeLabel_o *)supportServantLabel,
                        *(UnityEngine_Color_o *)&this->fields.maskColor.fields.g,
                        0LL);
                      v18 = this->fields.npSpeedLabelArray;
                      if ( v18 )
                      {
                        if ( v12 >= v18->max_length )
                        {
LABEL_46:
                          v24 = sub_B70798(supportServantLabel);
                          sub_B70738(v24, 0LL);
                        }
                        supportServantLabel = (UICommonButton_o *)*((_QWORD *)&v18->obj.klass + v6);
                        g = v7;
                        b = v8;
                        a = v9;
                        v22 = v10;
                        if ( (_DWORD)v6 == 4 )
                        {
                          g = this->fields.maskLabelEffectColor.fields.g;
                          b = this->fields.maskLabelEffectColor.fields.b;
                          a = this->fields.maskLabelEffectColor.fields.a;
                          v22 = *((_DWORD *)&this->fields.maskLabelEffectColor + 4);
                        }
                        if ( supportServantLabel )
                        {
                          UIRangeLabel__set_effectColor(
                            (UIRangeLabel_o *)supportServantLabel,
                            *(UnityEngine_Color_o *)&g,
                            0LL);
                          npSpeedButtonArray = this->fields.npSpeedButtonArray;
                          ++v6;
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
  v23 = this->fields.supportServantLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  supportServantLabel = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2593/*"BATTLE_SUPPORT_SERVANT_NP_SPEED"*/, 0LL);
  if ( !v23 )
LABEL_45:
    sub_B7076C(supportServantLabel, method);
  UILabel__set_text(v23, (System_String_o *)supportServantLabel, 0LL);
}


int32_t __fastcall BattleServantNPSpeedChangeComponent__get_ContentsHeight(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.contentsHeight;
}