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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x0
  __int64 v13; // x1
  struct BattleServantData_o *battleServantData; // x8
  int32_t servantCollectionId_k__BackingField; // w20
  int32_t svtCommonFlag; // w21
  const MethodInfo *v17; // x1

  if ( (byte_42EB251 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_UICommonButton___, (_DWORD)button, (_DWORD)method, v3);
    sub_B5D5C4(&BattleData_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&SoundManager_TypeInfo, v9, v10, v11);
    byte_42EB251 = 1;
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
    v12 = System_Array__IndexOf_UICommonButton_(
            this->fields.npSpeedButtonArray,
            button,
            (const MethodInfo_1FC18BC *)Method_System_Array_IndexOf_UICommonButton___);
    if ( !this->fields.battleServantData
      || (BattleServantData__SetServantNPSpeedCommonFlag(this->fields.battleServantData, v12, 0LL),
          (battleServantData = this->fields.battleServantData) == 0LL) )
    {
      sub_B5D69C(v12, v13);
    }
    servantCollectionId_k__BackingField = battleServantData->fields._servantCollectionId_k__BackingField;
    svtCommonFlag = battleServantData->fields.svtCommonFlag;
    if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    BattleData__SaveServantCommonFlag(servantCollectionId_k__BackingField, svtCommonFlag, 0LL);
    BattleServantNPSpeedChangeComponent__SetButton(this, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantNPSpeedChangeComponent__SetButton(
        BattleServantNPSpeedChangeComponent_o *this,
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
  void *supportServantLabel; // x0
  float *v12; // x8
  float v13; // s8
  float v14; // s9
  float v15; // s10
  float v16; // s11
  struct BattleServantData_o *battleServantData; // x8
  float *v18; // x9
  int32_t svtCommonFlag; // w8
  float v20; // s12
  float v21; // s13
  float v22; // s14
  float v23; // s15
  int v24; // w9
  struct UICommonButton_array *npSpeedButtonArray; // x8
  int v26; // w20
  __int64 v27; // x21
  int max_length; // w9
  il2cpp_array_size_t v29; // w24
  int v30; // w25
  struct UISprite_array *npSpeedButtonSpriteArray; // x8
  System_String_o **v32; // x8
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  float v34; // s3
  float v35; // s2
  float v36; // s1
  float v37; // s0
  __int64 v38; // x0

  if ( (byte_42EB250 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17174/*"btn_bg_20"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_17175/*"btn_bg_21"*/, v8, v9, v10);
    byte_42EB250 = 1;
  }
  this->fields.isSupport = 0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E563C )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E563C = 1;
  }
  supportServantLabel = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    supportServantLabel = LocalizationManager_TypeInfo;
  }
  v12 = (float *)*((_QWORD *)supportServantLabel + 23);
  v13 = v12[20];
  v14 = v12[21];
  v15 = v12[22];
  v16 = v12[23];
  if ( !byte_42E563D )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    supportServantLabel = LocalizationManager_TypeInfo;
    byte_42E563D = 1;
  }
  if ( (*((_BYTE *)supportServantLabel + 307) & 4) != 0 && !*((_DWORD *)supportServantLabel + 56) )
  {
    j_il2cpp_runtime_class_init_0(supportServantLabel);
    supportServantLabel = LocalizationManager_TypeInfo;
  }
  battleServantData = this->fields.battleServantData;
  if ( !battleServantData )
    goto LABEL_53;
  v18 = (float *)*((_QWORD *)supportServantLabel + 23);
  svtCommonFlag = battleServantData->fields.svtCommonFlag;
  v20 = v18[24];
  v21 = v18[25];
  v22 = v18[26];
  v23 = v18[27];
  if ( (svtCommonFlag & 2) != 0 )
    v24 = (~(svtCommonFlag << 29 >> 31) & 3) != 0 ? 1 : 2;
  else
    v24 = 0;
  npSpeedButtonArray = this->fields.npSpeedButtonArray;
  if ( !npSpeedButtonArray )
    goto LABEL_53;
  v26 = -v24;
  v27 = 4LL;
  while ( 1 )
  {
    max_length = npSpeedButtonArray->max_length;
    v29 = v27 - 4;
    if ( (int)v27 - 4 >= max_length )
      break;
    if ( v29 >= max_length )
      goto LABEL_54;
    supportServantLabel = (void *)*((_QWORD *)&npSpeedButtonArray->obj.klass + v27);
    if ( supportServantLabel )
    {
      v30 = v26 + v27;
      UICommonButton__SetColliderEnable((UICommonButton_o *)supportServantLabel, v26 + (_DWORD)v27 != 4, 1, 0LL);
      npSpeedButtonSpriteArray = this->fields.npSpeedButtonSpriteArray;
      if ( npSpeedButtonSpriteArray )
      {
        if ( v29 >= npSpeedButtonSpriteArray->max_length )
          goto LABEL_54;
        supportServantLabel = (void *)*((_QWORD *)&npSpeedButtonSpriteArray->obj.klass + v27);
        if ( supportServantLabel )
        {
          v32 = (System_String_o **)(v30 == 4 ? &StringLiteral_17175/*"btn_bg_21"*/ : &StringLiteral_17174/*"btn_bg_20"*/);
          UISprite__set_spriteName((UISprite_o *)supportServantLabel, *v32, 0LL);
          npSpeedLabelArray = this->fields.npSpeedLabelArray;
          if ( npSpeedLabelArray )
          {
            if ( v29 >= npSpeedLabelArray->max_length )
            {
LABEL_54:
              v38 = sub_B5D6C8(supportServantLabel);
              sub_B5D668(v38, 0LL);
            }
            supportServantLabel = (void *)*((_QWORD *)&npSpeedLabelArray->obj.klass + v27);
            if ( supportServantLabel )
            {
              v34 = v30 == 4 ? v23 : v16;
              v35 = v30 == 4 ? v22 : v15;
              v36 = v30 == 4 ? v21 : v14;
              v37 = v30 == 4 ? v20 : v13;
              UIRangeLabel__set_effectColor(
                (UIRangeLabel_o *)supportServantLabel,
                *(UnityEngine_Color_o *)(&v34 - 3),
                0LL);
              npSpeedButtonArray = this->fields.npSpeedButtonArray;
              ++v27;
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
    sub_B5D69C(supportServantLabel, method);
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
    sub_B5D69C(0LL, v4);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v23; // x1
  struct BattleServantData_o **p_battleServantData; // x21
  struct BattleDeckServantData_o *deckSvt; // x8
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  UIRangeLabel_o *v27; // x20
  struct UIRangeLabel_array *v28; // x8
  UIRangeLabel_o *v29; // x20
  struct UIRangeLabel_array *v30; // x8
  UIRangeLabel_o *v31; // x20
  UILabel_o *explanationLabel; // x19
  __int64 v33; // x0

  if ( (byte_42EB24F & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)battleSvtData, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_12188/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_12186/*"SERVANT_STATUS_TD_SPEED_FREE"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_12187/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_12182/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, v19, v20, v21);
    byte_42EB24F = 1;
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
    sub_B5D69C(gameObject, v23);
  }
  this->fields.battleServantData = battleSvtData;
  p_battleServantData = &this->fields.battleServantData;
  sub_B5D560(
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
    BattleServantNPSpeedChangeComponent__SetSupportServantButton(this, v23);
  else
    BattleServantNPSpeedChangeComponent__SetButton(this, v23);
  npSpeedLabelArray = this->fields.npSpeedLabelArray;
  if ( !npSpeedLabelArray )
    goto LABEL_28;
  if ( !npSpeedLabelArray->max_length )
    goto LABEL_29;
  v27 = npSpeedLabelArray->m_Items[0];
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12186/*"SERVANT_STATUS_TD_SPEED_FREE"*/, 0LL);
  if ( !v27 )
    goto LABEL_28;
  UIRangeLabel__Set(v27, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
  v28 = this->fields.npSpeedLabelArray;
  if ( !v28 )
    goto LABEL_28;
  if ( v28->max_length <= 1 )
    goto LABEL_29;
  v29 = v28->m_Items[1];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12182/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, 0LL);
  if ( !v29 )
    goto LABEL_28;
  UIRangeLabel__Set(v29, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
  v30 = this->fields.npSpeedLabelArray;
  if ( !v30 )
    goto LABEL_28;
  if ( v30->max_length <= 2 )
  {
LABEL_29:
    v33 = sub_B5D6C8(gameObject);
    sub_B5D668(v33, 0LL);
  }
  v31 = v30->m_Items[2];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12188/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, 0LL);
  if ( !v31 )
    goto LABEL_28;
  UIRangeLabel__Set(v31, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12187/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_28;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantNPSpeedChangeComponent__SetSupportServantButton(
        BattleServantNPSpeedChangeComponent_o *this,
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
  UICommonButton_o *supportServantLabel; // x0
  struct UICommonButton_array *npSpeedButtonArray; // x8
  float *v16; // x9
  __int64 v17; // x21
  float v18; // s8
  float v19; // s9
  float v20; // s10
  int v21; // s11
  int max_length; // w9
  il2cpp_array_size_t v23; // w24
  struct UICommonButton_array *v24; // x8
  struct UISprite_array *npSpeedButtonSpriteArray; // x8
  System_String_o **v26; // x8
  struct UISprite_array *v27; // x8
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  struct UIRangeLabel_array *v29; // x8
  float g; // s0
  float b; // s1
  float a; // s2
  int v33; // s3
  UILabel_o *v34; // x19
  __int64 v35; // x0

  if ( (byte_42EB252 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17174/*"btn_bg_20"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_2585/*"BATTLE_SUPPORT_SERVANT_NP_SPEED"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_17175/*"btn_bg_21"*/, v11, v12, v13);
    byte_42EB252 = 1;
  }
  this->fields.isSupport = 1;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E563C )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E563C = 1;
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
  v16 = *(float **)&supportServantLabel[1].fields.specifyPressedColor.fields.b;
  v17 = 4LL;
  v18 = v16[20];
  v19 = v16[21];
  v20 = v16[22];
  v21 = *((_DWORD *)v16 + 23);
  while ( 1 )
  {
    max_length = npSpeedButtonArray->max_length;
    v23 = v17 - 4;
    if ( (int)v17 - 4 >= max_length )
      break;
    if ( v23 >= max_length )
      goto LABEL_46;
    supportServantLabel = (UICommonButton_o *)*((_QWORD *)&npSpeedButtonArray->obj.klass + v17);
    if ( supportServantLabel )
    {
      UICommonButton__SetButtonEnableWithCollider(supportServantLabel, 1, 0LL);
      v24 = this->fields.npSpeedButtonArray;
      if ( v24 )
      {
        if ( v23 >= v24->max_length )
          goto LABEL_46;
        supportServantLabel = (UICommonButton_o *)*((_QWORD *)&v24->obj.klass + v17);
        if ( supportServantLabel )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)supportServantLabel, 0, 0LL);
          npSpeedButtonSpriteArray = this->fields.npSpeedButtonSpriteArray;
          if ( npSpeedButtonSpriteArray )
          {
            if ( v23 >= npSpeedButtonSpriteArray->max_length )
              goto LABEL_46;
            supportServantLabel = (UICommonButton_o *)*((_QWORD *)&npSpeedButtonSpriteArray->obj.klass + v17);
            if ( supportServantLabel )
            {
              v26 = (System_String_o **)((_DWORD)v17 == 4 ? &StringLiteral_17175/*"btn_bg_21"*/ : &StringLiteral_17174/*"btn_bg_20"*/);
              UISprite__set_spriteName((UISprite_o *)supportServantLabel, *v26, 0LL);
              v27 = this->fields.npSpeedButtonSpriteArray;
              if ( v27 )
              {
                if ( v23 >= v27->max_length )
                  goto LABEL_46;
                supportServantLabel = (UICommonButton_o *)*((_QWORD *)&v27->obj.klass + v17);
                if ( supportServantLabel )
                {
                  UIWidget__set_color(
                    (UIWidget_o *)supportServantLabel,
                    *(UnityEngine_Color_o *)&this->fields.maskColor.fields.g,
                    0LL);
                  npSpeedLabelArray = this->fields.npSpeedLabelArray;
                  if ( npSpeedLabelArray )
                  {
                    if ( v23 >= npSpeedLabelArray->max_length )
                      goto LABEL_46;
                    supportServantLabel = (UICommonButton_o *)*((_QWORD *)&npSpeedLabelArray->obj.klass + v17);
                    if ( supportServantLabel )
                    {
                      UIRangeLabel__set_color(
                        (UIRangeLabel_o *)supportServantLabel,
                        *(UnityEngine_Color_o *)&this->fields.maskColor.fields.g,
                        0LL);
                      v29 = this->fields.npSpeedLabelArray;
                      if ( v29 )
                      {
                        if ( v23 >= v29->max_length )
                        {
LABEL_46:
                          v35 = sub_B5D6C8(supportServantLabel);
                          sub_B5D668(v35, 0LL);
                        }
                        supportServantLabel = (UICommonButton_o *)*((_QWORD *)&v29->obj.klass + v17);
                        g = v18;
                        b = v19;
                        a = v20;
                        v33 = v21;
                        if ( (_DWORD)v17 == 4 )
                        {
                          g = this->fields.maskLabelEffectColor.fields.g;
                          b = this->fields.maskLabelEffectColor.fields.b;
                          a = this->fields.maskLabelEffectColor.fields.a;
                          v33 = *((_DWORD *)&this->fields.maskLabelEffectColor + 4);
                        }
                        if ( supportServantLabel )
                        {
                          UIRangeLabel__set_effectColor(
                            (UIRangeLabel_o *)supportServantLabel,
                            *(UnityEngine_Color_o *)&g,
                            0LL);
                          npSpeedButtonArray = this->fields.npSpeedButtonArray;
                          ++v17;
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
  v34 = this->fields.supportServantLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  supportServantLabel = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2585/*"BATTLE_SUPPORT_SERVANT_NP_SPEED"*/, 0LL);
  if ( !v34 )
LABEL_45:
    sub_B5D69C(supportServantLabel, method);
  UILabel__set_text(v34, (System_String_o *)supportServantLabel, 0LL);
}


int32_t __fastcall BattleServantNPSpeedChangeComponent__get_ContentsHeight(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.contentsHeight;
}