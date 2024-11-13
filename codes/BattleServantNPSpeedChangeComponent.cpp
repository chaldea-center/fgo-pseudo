void __fastcall BattleServantNPSpeedChangeComponent___ctor(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  this->fields.contentsHeight = 200;
  this->fields.maskColor = (struct UnityEngine_Color_o)xmmword_BD1FE0;
  this->fields.maskLabelEffectColor = (struct UnityEngine_Color_o)xmmword_BD1EB0;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  _QWORD *v9; // x0
  _BOOL4 isSupport; // w21
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  struct BattleServantData_o *battleServantData; // x8
  int32_t servantCollectionId_k__BackingField; // w20
  int32_t svtCommonFlag; // w21
  const MethodInfo *v17; // x1

  if ( (byte_4B192C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_UICommonButton___, button, method);
    sub_1BCA7E0(&BattleData_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_BattleServantNPSpeedChangeComponent_OnClickButton__, v7, v8);
    byte_4B192C0 = 1;
  }
  v9 = Method_BattleServantNPSpeedChangeComponent_OnClickButton__;
  isSupport = this->fields.isSupport;
  if ( (*((_BYTE *)Method_BattleServantNPSpeedChangeComponent_OnClickButton__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1BCA7F8(Method_BattleServantNPSpeedChangeComponent_OnClickButton__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
  if ( isSupport )
  {
    OverwriteAssetSoundName__PlaySystemSe(v11, 2, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    v12 = System_Array__IndexOf_object_(
            (System_Object_array *)this->fields.npSpeedButtonArray,
            (Il2CppObject *)button,
            (const MethodInfo_300EB38 *)Method_System_Array_IndexOf_UICommonButton___);
    if ( !this->fields.battleServantData
      || (BattleServantData__SetServantNPSpeedCommonFlag(this->fields.battleServantData, v12, 0LL),
          (battleServantData = this->fields.battleServantData) == 0LL) )
    {
      sub_1BCAA3C(v12, v13);
    }
    servantCollectionId_k__BackingField = battleServantData->fields._servantCollectionId_k__BackingField;
    svtCommonFlag = battleServantData->fields.svtCommonFlag;
    if ( !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v13);
    BattleData__SaveServantCommonFlag(servantCollectionId_k__BackingField, svtCommonFlag, 0LL);
    BattleServantNPSpeedChangeComponent__SetButton(this, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantNPSpeedChangeComponent__SetButton(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  void *supportServantLabel; // x0
  float *v9; // x8
  float v10; // s8
  float v11; // s9
  float v12; // s10
  float v13; // s11
  struct BattleServantData_o *battleServantData; // x8
  int32_t svtCommonFlag; // w9
  struct UICommonButton_array *npSpeedButtonArray; // x8
  int v17; // w10
  float *v18; // x11
  float v19; // s12
  float v20; // s13
  float v21; // s14
  float v22; // s15
  int v23; // w22
  __int64 v24; // x23
  int max_length; // w9
  il2cpp_array_size_t v26; // w24
  int v27; // w25
  struct UISprite_array *npSpeedButtonSpriteArray; // x8
  System_String_o **v29; // x8
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  float v31; // s1
  float v32; // s0
  float v33; // s2
  float v34; // s3

  if ( (byte_4B192BF & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17652/*"btn_bg_20"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17653/*"btn_bg_21"*/, v6, v7);
    byte_4B192BF = 1;
  }
  this->fields.isSupport = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  if ( !byte_4B11133 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    byte_4B11133 = 1;
  }
  supportServantLabel = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    supportServantLabel = LocalizationManager_TypeInfo;
  }
  v9 = (float *)*((_QWORD *)supportServantLabel + 23);
  v10 = v9[20];
  v11 = v9[21];
  v12 = v9[22];
  v13 = v9[23];
  if ( !byte_4B11134 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    supportServantLabel = LocalizationManager_TypeInfo;
    byte_4B11134 = 1;
  }
  if ( !*((_DWORD *)supportServantLabel + 56) )
  {
    j_il2cpp_runtime_class_init_0(supportServantLabel, method);
    supportServantLabel = LocalizationManager_TypeInfo;
  }
  battleServantData = this->fields.battleServantData;
  if ( !battleServantData )
    goto LABEL_48;
  svtCommonFlag = battleServantData->fields.svtCommonFlag;
  npSpeedButtonArray = this->fields.npSpeedButtonArray;
  v17 = (svtCommonFlag & 4) != 0 ? 2 : 1;
  if ( !npSpeedButtonArray )
    goto LABEL_48;
  v18 = (float *)*((_QWORD *)supportServantLabel + 23);
  v19 = v18[24];
  v20 = v18[25];
  v21 = v18[26];
  v22 = v18[27];
  v23 = -(v17 & (svtCommonFlag << 30 >> 31));
  v24 = 4LL;
  while ( 1 )
  {
    max_length = npSpeedButtonArray->max_length;
    v26 = v24 - 4;
    if ( (int)v24 - 4 >= max_length )
      break;
    if ( v26 >= max_length )
      goto LABEL_49;
    supportServantLabel = (void *)*((_QWORD *)&npSpeedButtonArray->obj.klass + v24);
    if ( supportServantLabel )
    {
      v27 = v23 + v24;
      UICommonButton__SetColliderEnable((UICommonButton_o *)supportServantLabel, v23 + (_DWORD)v24 != 4, 1, 0LL);
      npSpeedButtonSpriteArray = this->fields.npSpeedButtonSpriteArray;
      if ( npSpeedButtonSpriteArray )
      {
        if ( v26 >= npSpeedButtonSpriteArray->max_length )
          goto LABEL_49;
        supportServantLabel = (void *)*((_QWORD *)&npSpeedButtonSpriteArray->obj.klass + v24);
        if ( supportServantLabel )
        {
          v29 = (System_String_o **)(v27 == 4 ? &StringLiteral_17653/*"btn_bg_21"*/ : &StringLiteral_17652/*"btn_bg_20"*/);
          UISprite__set_spriteName((UISprite_o *)supportServantLabel, *v29, 0LL);
          npSpeedLabelArray = this->fields.npSpeedLabelArray;
          if ( npSpeedLabelArray )
          {
            if ( v26 >= npSpeedLabelArray->max_length )
LABEL_49:
              sub_1BCAA44(supportServantLabel, method);
            supportServantLabel = (void *)*((_QWORD *)&npSpeedLabelArray->obj.klass + v24);
            v31 = v27 == 4 ? v20 : v11;
            v32 = v27 == 4 ? v19 : v10;
            v33 = v27 == 4 ? v21 : v12;
            v34 = v27 == 4 ? v22 : v13;
            if ( supportServantLabel )
            {
              UIRangeLabel__set_effectColor(
                (UIRangeLabel_o *)supportServantLabel,
                *(UnityEngine_Color_o *)(&v31 - 1),
                0LL);
              npSpeedButtonArray = this->fields.npSpeedButtonArray;
              ++v24;
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
    sub_1BCAA3C(supportServantLabel, method);
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
    sub_1BCAA3C(0LL, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v19; // x1
  struct BattleServantData_o **p_battleServantData; // x21
  struct BattleDeckServantData_o *deckSvt; // x8
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  UIRangeLabel_o *v23; // x20
  struct UIRangeLabel_array *v24; // x8
  UIRangeLabel_o *v25; // x20
  struct UIRangeLabel_array *v26; // x8
  UIRangeLabel_o *v27; // x20
  UILabel_o *explanationLabel; // x19

  if ( (byte_4B192BE & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, battleSvtData, method);
    sub_1BCA7E0(&StringLiteral_12074/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_12072/*"SERVANT_STATUS_TD_SPEED_FREE"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_12073/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_12068/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, v16, v17);
    byte_4B192BE = 1;
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
    sub_1BCAA3C(gameObject, v19);
  }
  this->fields.battleServantData = battleSvtData;
  p_battleServantData = &this->fields.battleServantData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.battleServantData,
    (int64_t)battleSvtData,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    BattleServantNPSpeedChangeComponent__SetSupportServantButton(this, v19);
  else
    BattleServantNPSpeedChangeComponent__SetButton(this, v19);
  npSpeedLabelArray = this->fields.npSpeedLabelArray;
  if ( !npSpeedLabelArray )
    goto LABEL_27;
  if ( !npSpeedLabelArray->max_length )
    goto LABEL_28;
  v23 = npSpeedLabelArray->m_Items[0];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12072/*"SERVANT_STATUS_TD_SPEED_FREE"*/, 0LL);
  if ( !v23 )
    goto LABEL_27;
  UIRangeLabel__Set(v23, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
  v24 = this->fields.npSpeedLabelArray;
  if ( !v24 )
    goto LABEL_27;
  if ( v24->max_length <= 1 )
    goto LABEL_28;
  v25 = v24->m_Items[1];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12068/*"SERVANT_STATUS_TD_SPEED_ACTUAL"*/, 0LL);
  if ( !v25 )
    goto LABEL_27;
  UIRangeLabel__Set(v25, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
  v26 = this->fields.npSpeedLabelArray;
  if ( !v26 )
    goto LABEL_27;
  if ( v26->max_length <= 2 )
LABEL_28:
    sub_1BCAA44(gameObject, v19);
  v27 = v26->m_Items[2];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12074/*"SERVANT_STATUS_TD_SPEED_TWICE"*/, 0LL);
  if ( !v27 )
    goto LABEL_27;
  UIRangeLabel__Set(v27, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12073/*"SERVANT_STATUS_TD_SPEED_MESSAGE"*/, 0LL);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UICommonButton_o *supportServantLabel; // x0
  struct UICommonButton_array *npSpeedButtonArray; // x8
  float *v12; // x9
  float v13; // s8
  float v14; // s9
  float v15; // s10
  float v16; // s11
  __int64 v17; // x24
  int max_length; // w9
  il2cpp_array_size_t v19; // w25
  struct UICommonButton_array *v20; // x8
  struct UISprite_array *npSpeedButtonSpriteArray; // x8
  System_String_o **v22; // x8
  struct UISprite_array *v23; // x8
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  struct UIRangeLabel_array *v25; // x8
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0
  __int64 v30; // x1
  UILabel_o *v31; // x19

  if ( (byte_4B192C1 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17652/*"btn_bg_20"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_3018/*"BATTLE_SUPPORT_SERVANT_NP_SPEED"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_17653/*"btn_bg_21"*/, v8, v9);
    byte_4B192C1 = 1;
  }
  this->fields.isSupport = 1;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  if ( !byte_4B11133 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    byte_4B11133 = 1;
  }
  supportServantLabel = (UICommonButton_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    supportServantLabel = (UICommonButton_o *)LocalizationManager_TypeInfo;
  }
  npSpeedButtonArray = this->fields.npSpeedButtonArray;
  if ( !npSpeedButtonArray )
    goto LABEL_42;
  v12 = *(float **)&supportServantLabel[1].fields.specifyHoverColor.fields.b;
  v13 = v12[20];
  v14 = v12[21];
  v15 = v12[22];
  v16 = v12[23];
  v17 = 4LL;
  while ( 1 )
  {
    max_length = npSpeedButtonArray->max_length;
    v19 = v17 - 4;
    if ( (int)v17 - 4 >= max_length )
      break;
    if ( v19 >= max_length )
      goto LABEL_43;
    supportServantLabel = (UICommonButton_o *)*((_QWORD *)&npSpeedButtonArray->obj.klass + v17);
    if ( supportServantLabel )
    {
      UICommonButton__SetButtonEnableWithCollider(supportServantLabel, 1, 0LL);
      v20 = this->fields.npSpeedButtonArray;
      if ( v20 )
      {
        if ( v19 >= v20->max_length )
          goto LABEL_43;
        supportServantLabel = (UICommonButton_o *)*((_QWORD *)&v20->obj.klass + v17);
        if ( supportServantLabel )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)supportServantLabel, 0, 0LL);
          npSpeedButtonSpriteArray = this->fields.npSpeedButtonSpriteArray;
          if ( npSpeedButtonSpriteArray )
          {
            if ( v19 >= npSpeedButtonSpriteArray->max_length )
              goto LABEL_43;
            supportServantLabel = (UICommonButton_o *)*((_QWORD *)&npSpeedButtonSpriteArray->obj.klass + v17);
            if ( supportServantLabel )
            {
              v22 = (System_String_o **)((_DWORD)v17 == 4 ? &StringLiteral_17653/*"btn_bg_21"*/ : &StringLiteral_17652/*"btn_bg_20"*/);
              UISprite__set_spriteName((UISprite_o *)supportServantLabel, *v22, 0LL);
              v23 = this->fields.npSpeedButtonSpriteArray;
              if ( v23 )
              {
                if ( v19 >= v23->max_length )
                  goto LABEL_43;
                supportServantLabel = (UICommonButton_o *)*((_QWORD *)&v23->obj.klass + v17);
                if ( supportServantLabel )
                {
                  UIWidget__set_color((UIWidget_o *)supportServantLabel, this->fields.maskColor, 0LL);
                  npSpeedLabelArray = this->fields.npSpeedLabelArray;
                  if ( npSpeedLabelArray )
                  {
                    if ( v19 >= npSpeedLabelArray->max_length )
                      goto LABEL_43;
                    supportServantLabel = (UICommonButton_o *)*((_QWORD *)&npSpeedLabelArray->obj.klass + v17);
                    if ( supportServantLabel )
                    {
                      UIRangeLabel__set_color((UIRangeLabel_o *)supportServantLabel, this->fields.maskColor, 0LL);
                      v25 = this->fields.npSpeedLabelArray;
                      if ( v25 )
                      {
                        if ( v19 >= v25->max_length )
LABEL_43:
                          sub_1BCAA44(supportServantLabel, method);
                        a = v16;
                        b = v15;
                        g = v14;
                        r = v13;
                        if ( (_DWORD)v17 == 4 )
                        {
                          r = this->fields.maskLabelEffectColor.fields.r;
                          g = this->fields.maskLabelEffectColor.fields.g;
                          b = this->fields.maskLabelEffectColor.fields.b;
                          a = this->fields.maskLabelEffectColor.fields.a;
                        }
                        supportServantLabel = (UICommonButton_o *)*((_QWORD *)&v25->obj.klass + v17);
                        if ( supportServantLabel )
                        {
                          UIRangeLabel__set_effectColor(
                            (UIRangeLabel_o *)supportServantLabel,
                            *(UnityEngine_Color_o *)&r,
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
  v31 = this->fields.supportServantLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30);
  supportServantLabel = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3018/*"BATTLE_SUPPORT_SERVANT_NP_SPEED"*/, 0LL);
  if ( !v31 )
LABEL_42:
    sub_1BCAA3C(supportServantLabel, method);
  UILabel__set_text(v31, (System_String_o *)supportServantLabel, 0LL);
}


int32_t __fastcall BattleServantNPSpeedChangeComponent__get_ContentsHeight(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.contentsHeight;
}