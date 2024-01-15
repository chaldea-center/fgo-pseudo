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
  int32_t v7; // w0
  struct BattleServantData_o *battleServantData; // x8
  int32_t servantCollectionId_k__BackingField; // w20
  int32_t svtCommonFlag; // w21
  const MethodInfo *v11; // x1

  if ( (byte_40FCCE6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_UICommonButton___, button);
    sub_B16FFC(&BattleData_TypeInfo, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40FCCE6 = 1;
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
           (const MethodInfo_20456B0 *)Method_System_Array_IndexOf_UICommonButton___);
    if ( !this->fields.battleServantData
      || (BattleServantData__SetServantNPSpeedCommonFlag(this->fields.battleServantData, v7, 0LL),
          (battleServantData = this->fields.battleServantData) == 0LL) )
    {
      sub_B170D4();
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  LocalizationManager_c *v6; // x0
  float *static_fields; // x8
  float v8; // s8
  float v9; // s9
  float v10; // s10
  float v11; // s11
  struct BattleServantData_o *battleServantData; // x8
  float *v13; // x9
  int32_t svtCommonFlag; // w8
  float v15; // s12
  float v16; // s13
  float v17; // s14
  float v18; // s15
  int v19; // w9
  struct UICommonButton_array *npSpeedButtonArray; // x8
  int v21; // w20
  __int64 v22; // x21
  int max_length; // w9
  il2cpp_array_size_t v24; // w24
  UICommonButton_o *v25; // x0
  int v26; // w25
  struct UISprite_array *npSpeedButtonSpriteArray; // x8
  UISprite_o *v28; // x0
  System_String_o **v29; // x8
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  UIRangeLabel_o *v31; // x0
  float v32; // s3
  float v33; // s2
  float v34; // s1
  float v35; // s0
  UnityEngine_Component_o *supportServantLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FCCE5 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16899/*"btn_bg_20"*/, v4);
    sub_B16FFC(&StringLiteral_16900/*"btn_bg_21"*/, v5);
    byte_40FCCE5 = 1;
  }
  this->fields.isSupport = 0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_40F6254 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    byte_40F6254 = 1;
  }
  v6 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v6->static_fields;
  v8 = static_fields[20];
  v9 = static_fields[21];
  v10 = static_fields[22];
  v11 = static_fields[23];
  if ( !byte_40F6255 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    v6 = LocalizationManager_TypeInfo;
    byte_40F6255 = 1;
  }
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = LocalizationManager_TypeInfo;
  }
  battleServantData = this->fields.battleServantData;
  if ( !battleServantData )
    goto LABEL_53;
  v13 = (float *)v6->static_fields;
  svtCommonFlag = battleServantData->fields.svtCommonFlag;
  v15 = v13[24];
  v16 = v13[25];
  v17 = v13[26];
  v18 = v13[27];
  if ( (svtCommonFlag & 2) != 0 )
    v19 = (~(svtCommonFlag << 29 >> 31) & 3) != 0 ? 1 : 2;
  else
    v19 = 0;
  npSpeedButtonArray = this->fields.npSpeedButtonArray;
  if ( !npSpeedButtonArray )
    goto LABEL_53;
  v21 = -v19;
  v22 = 4LL;
  while ( 1 )
  {
    max_length = npSpeedButtonArray->max_length;
    v24 = v22 - 4;
    if ( (int)v22 - 4 >= max_length )
      break;
    if ( v24 >= max_length )
      goto LABEL_54;
    v25 = (UICommonButton_o *)*((_QWORD *)&npSpeedButtonArray->obj.klass + v22);
    if ( v25 )
    {
      v26 = v21 + v22;
      UICommonButton__SetColliderEnable(v25, v21 + (_DWORD)v22 != 4, 1, 0LL);
      npSpeedButtonSpriteArray = this->fields.npSpeedButtonSpriteArray;
      if ( npSpeedButtonSpriteArray )
      {
        if ( v24 >= npSpeedButtonSpriteArray->max_length )
          goto LABEL_54;
        v28 = (UISprite_o *)*((_QWORD *)&npSpeedButtonSpriteArray->obj.klass + v22);
        if ( v28 )
        {
          v29 = (System_String_o **)(v26 == 4 ? &StringLiteral_16900/*"btn_bg_21"*/ : &StringLiteral_16899/*"btn_bg_20"*/);
          UISprite__set_spriteName(v28, *v29, 0LL);
          npSpeedLabelArray = this->fields.npSpeedLabelArray;
          if ( npSpeedLabelArray )
          {
            if ( v24 >= npSpeedLabelArray->max_length )
            {
LABEL_54:
              sub_B17100(v6, method, v2);
              sub_B170A0();
            }
            v31 = (UIRangeLabel_o *)*((_QWORD *)&npSpeedLabelArray->obj.klass + v22);
            if ( v31 )
            {
              v32 = v26 == 4 ? v18 : v11;
              v33 = v26 == 4 ? v17 : v10;
              v34 = v26 == 4 ? v16 : v9;
              v35 = v26 == 4 ? v15 : v8;
              UIRangeLabel__set_effectColor(v31, *(UnityEngine_Color_o *)(&v32 - 3), 0LL);
              npSpeedButtonArray = this->fields.npSpeedButtonArray;
              ++v22;
              if ( npSpeedButtonArray )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_53;
  }
  supportServantLabel = (UnityEngine_Component_o *)this->fields.supportServantLabel;
  if ( !supportServantLabel || (gameObject = UnityEngine_Component__get_gameObject(supportServantLabel, 0LL)) == 0LL )
LABEL_53:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall BattleServantNPSpeedChangeComponent__SetButtonPosition(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Vector3_o v4; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_B170D4();
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
  UnityEngine_GameObject_o *v16; // x0
  const MethodInfo *v17; // x1
  struct BattleDeckServantData_o *deckSvt; // x8
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  UIRangeLabel_o *v23; // x20
  System_String_o *v24; // x0
  struct UIRangeLabel_array *v25; // x8
  UIRangeLabel_o *v26; // x20
  System_String_o *v27; // x0
  struct UIRangeLabel_array *v28; // x8
  UIRangeLabel_o *v29; // x20
  System_String_o *v30; // x0
  UILabel_o *explanationLabel; // x19
  System_String_o *v32; // x0

  if ( (byte_40FCCE4 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, battleSvtData);
    sub_B16FFC(&StringLiteral_11991/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, v10);
    sub_B16FFC(&StringLiteral_11989/*"SERVANT_STATUS_TD_SPEED_FREE"*/, v11);
    sub_B16FFC(&StringLiteral_11990/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, v12);
    sub_B16FFC(&StringLiteral_11985/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, v13);
    byte_40FCCE4 = 1;
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
    sub_B170D4();
  }
  this->fields.battleServantData = battleSvtData;
  p_battleServantData = &this->fields.battleServantData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.battleServantData,
    (System_Int32_array **)battleSvtData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v16 )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(v16, 1, 0LL);
  if ( !*p_battleServantData )
    goto LABEL_28;
  deckSvt = (*p_battleServantData)->fields.deckSvt;
  if ( !deckSvt )
    goto LABEL_28;
  if ( deckSvt->fields.isFollowerSvt )
    BattleServantNPSpeedChangeComponent__SetSupportServantButton(this, v17);
  else
    BattleServantNPSpeedChangeComponent__SetButton(this, v17);
  npSpeedLabelArray = this->fields.npSpeedLabelArray;
  if ( !npSpeedLabelArray )
    goto LABEL_28;
  if ( !npSpeedLabelArray->max_length )
    goto LABEL_29;
  v23 = npSpeedLabelArray->m_Items[0];
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_11989/*"SERVANT_STATUS_TD_SPEED_FREE"*/, 0LL);
  if ( !v23 )
    goto LABEL_28;
  UIRangeLabel__Set(v23, v24, 0LL, 1, 0, 0LL);
  v25 = this->fields.npSpeedLabelArray;
  if ( !v25 )
    goto LABEL_28;
  if ( v25->max_length <= 1 )
    goto LABEL_29;
  v26 = v25->m_Items[1];
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_11985/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, 0LL);
  if ( !v26 )
    goto LABEL_28;
  UIRangeLabel__Set(v26, v27, 0LL, 1, 0, 0LL);
  v28 = this->fields.npSpeedLabelArray;
  if ( !v28 )
    goto LABEL_28;
  if ( v28->max_length <= 2 )
  {
LABEL_29:
    sub_B17100(v19, v20, v21);
    sub_B170A0();
  }
  v29 = v28->m_Items[2];
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_11991/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, 0LL);
  if ( !v29 )
    goto LABEL_28;
  UIRangeLabel__Set(v29, v30, 0LL, 1, 0, 0LL);
  explanationLabel = this->fields.explanationLabel;
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_11990/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_28;
  UILabel__set_text(explanationLabel, v32, 0LL);
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
  LocalizationManager_c *v7; // x0
  struct UICommonButton_array *npSpeedButtonArray; // x8
  struct LocalizationManager_StaticFields *static_fields; // x9
  __int64 v10; // x21
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  int max_length; // w9
  il2cpp_array_size_t v16; // w24
  UICommonButton_o *v17; // x0
  struct UICommonButton_array *v18; // x8
  UnityEngine_Behaviour_o *v19; // x0
  struct UISprite_array *npSpeedButtonSpriteArray; // x8
  UISprite_o *v21; // x0
  System_String_o **v22; // x8
  struct UISprite_array *v23; // x8
  UIWidget_o *v24; // x0
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  UIRangeLabel_o *v26; // x0
  struct UIRangeLabel_array *v27; // x8
  UIRangeLabel_o *v28; // x0
  float v29; // s0
  float v30; // s1
  float v31; // s2
  float v32; // s3
  UnityEngine_Component_o *supportServantLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *v35; // x19
  System_String_o *v36; // x0

  if ( (byte_40FCCE7 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16899/*"btn_bg_20"*/, v4);
    sub_B16FFC(&StringLiteral_2521/*"BATTLE_SUPPORT_SERVANT_NP_SPEED"*/, v5);
    sub_B16FFC(&StringLiteral_16900/*"btn_bg_21"*/, v6);
    byte_40FCCE7 = 1;
  }
  this->fields.isSupport = 1;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_40F6254 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    byte_40F6254 = 1;
  }
  v7 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager_TypeInfo;
  }
  npSpeedButtonArray = this->fields.npSpeedButtonArray;
  if ( !npSpeedButtonArray )
    goto LABEL_45;
  static_fields = v7->static_fields;
  v10 = 4LL;
  r = static_fields->normalEffectColor.fields.r;
  g = static_fields->normalEffectColor.fields.g;
  b = static_fields->normalEffectColor.fields.b;
  a = static_fields->normalEffectColor.fields.a;
  while ( 1 )
  {
    max_length = npSpeedButtonArray->max_length;
    v16 = v10 - 4;
    if ( (int)v10 - 4 >= max_length )
      break;
    if ( v16 >= max_length )
      goto LABEL_46;
    v17 = (UICommonButton_o *)*((_QWORD *)&npSpeedButtonArray->obj.klass + v10);
    if ( v17 )
    {
      UICommonButton__SetButtonEnableWithCollider(v17, 1, 0LL);
      v18 = this->fields.npSpeedButtonArray;
      if ( v18 )
      {
        if ( v16 >= v18->max_length )
          goto LABEL_46;
        v19 = (UnityEngine_Behaviour_o *)*((_QWORD *)&v18->obj.klass + v10);
        if ( v19 )
        {
          UnityEngine_Behaviour__set_enabled(v19, 0, 0LL);
          npSpeedButtonSpriteArray = this->fields.npSpeedButtonSpriteArray;
          if ( npSpeedButtonSpriteArray )
          {
            if ( v16 >= npSpeedButtonSpriteArray->max_length )
              goto LABEL_46;
            v21 = (UISprite_o *)*((_QWORD *)&npSpeedButtonSpriteArray->obj.klass + v10);
            if ( v21 )
            {
              v22 = (System_String_o **)((_DWORD)v10 == 4 ? &StringLiteral_16900/*"btn_bg_21"*/ : &StringLiteral_16899/*"btn_bg_20"*/);
              UISprite__set_spriteName(v21, *v22, 0LL);
              v23 = this->fields.npSpeedButtonSpriteArray;
              if ( v23 )
              {
                if ( v16 >= v23->max_length )
                  goto LABEL_46;
                v24 = (UIWidget_o *)*((_QWORD *)&v23->obj.klass + v10);
                if ( v24 )
                {
                  UIWidget__set_color(v24, *(UnityEngine_Color_o *)&this->fields.maskColor.fields.g, 0LL);
                  npSpeedLabelArray = this->fields.npSpeedLabelArray;
                  if ( npSpeedLabelArray )
                  {
                    if ( v16 >= npSpeedLabelArray->max_length )
                      goto LABEL_46;
                    v26 = (UIRangeLabel_o *)*((_QWORD *)&npSpeedLabelArray->obj.klass + v10);
                    if ( v26 )
                    {
                      UIRangeLabel__set_color(v26, *(UnityEngine_Color_o *)&this->fields.maskColor.fields.g, 0LL);
                      v27 = this->fields.npSpeedLabelArray;
                      if ( v27 )
                      {
                        if ( v16 >= v27->max_length )
                        {
LABEL_46:
                          sub_B17100(v7, method, v2);
                          sub_B170A0();
                        }
                        v28 = (UIRangeLabel_o *)*((_QWORD *)&v27->obj.klass + v10);
                        v29 = r;
                        v30 = g;
                        v31 = b;
                        v32 = a;
                        if ( (_DWORD)v10 == 4 )
                        {
                          v29 = this->fields.maskLabelEffectColor.fields.g;
                          v30 = this->fields.maskLabelEffectColor.fields.b;
                          v31 = this->fields.maskLabelEffectColor.fields.a;
                          v32 = *((float *)&this->fields.maskLabelEffectColor + 4);
                        }
                        if ( v28 )
                        {
                          UIRangeLabel__set_effectColor(v28, *(UnityEngine_Color_o *)&v29, 0LL);
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
    goto LABEL_45;
  }
  supportServantLabel = (UnityEngine_Component_o *)this->fields.supportServantLabel;
  if ( !supportServantLabel )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject(supportServantLabel, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v35 = this->fields.supportServantLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_2521/*"BATTLE_SUPPORT_SERVANT_NP_SPEED"*/, 0LL);
  if ( !v35 )
LABEL_45:
    sub_B170D4();
  UILabel__set_text(v35, v36, 0LL);
}


int32_t __fastcall BattleServantNPSpeedChangeComponent__get_ContentsHeight(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.contentsHeight;
}