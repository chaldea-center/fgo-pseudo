void __fastcall BattleServantNPSpeedChangeComponent___ctor(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  this->fields.contentsHeight = 200;
  this->fields.maskColor = (struct UnityEngine_Color_o)xmmword_BF5D80;
  this->fields.maskLabelEffectColor = (struct UnityEngine_Color_o)xmmword_BF5C40;
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

  if ( (byte_4BB7863 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_IndexOf_UICommonButton___, button);
    sub_1C13D24(&BattleData_TypeInfo, v5);
    sub_1C13D24(&Method_BattleServantNPSpeedChangeComponent_OnClickButton__, v6);
    byte_4BB7863 = 1;
  }
  v7 = Method_BattleServantNPSpeedChangeComponent_OnClickButton__;
  isSupport = this->fields.isSupport;
  if ( (*((_BYTE *)Method_BattleServantNPSpeedChangeComponent_OnClickButton__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C13D3C(Method_BattleServantNPSpeedChangeComponent_OnClickButton__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C13D08(v7, v7[4]);
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
            (const MethodInfo_308C32C *)Method_System_Array_IndexOf_UICommonButton___);
    if ( !this->fields.battleServantData
      || (BattleServantData__SetServantNPSpeedCommonFlag(this->fields.battleServantData, v10, 0LL),
          (battleServantData = this->fields.battleServantData) == 0LL) )
    {
      sub_1C13F80(v10, v11);
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
  __int64 v3; // x1
  __int64 v4; // x1
  void *supportServantLabel; // x0
  float *v6; // x8
  float v7; // s8
  float v8; // s9
  float v9; // s10
  float v10; // s11
  struct BattleServantData_o *battleServantData; // x8
  int32_t svtCommonFlag; // w9
  struct UICommonButton_array *npSpeedButtonArray; // x8
  int v14; // w10
  float *v15; // x11
  float v16; // s12
  float v17; // s13
  float v18; // s14
  float v19; // s15
  int v20; // w22
  __int64 v21; // x23
  int max_length; // w9
  il2cpp_array_size_t v23; // w24
  int v24; // w25
  struct UISprite_array *npSpeedButtonSpriteArray; // x8
  System_String_o **v26; // x8
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  float v28; // s1
  float v29; // s0
  float v30; // s2
  float v31; // s3

  if ( (byte_4BB7862 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_17741/*"btn_auto_on"*/, v3);
    sub_1C13D24(&StringLiteral_17742/*"btn_badge_organization"*/, v4);
    byte_4BB7862 = 1;
  }
  this->fields.isSupport = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4BAF545 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    byte_4BAF545 = 1;
  }
  supportServantLabel = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    supportServantLabel = LocalizationManager_TypeInfo;
  }
  v6 = (float *)*((_QWORD *)supportServantLabel + 23);
  v7 = v6[20];
  v8 = v6[21];
  v9 = v6[22];
  v10 = v6[23];
  if ( !byte_4BAF546 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    supportServantLabel = LocalizationManager_TypeInfo;
    byte_4BAF546 = 1;
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
  v14 = (svtCommonFlag & 4) != 0 ? 2 : 1;
  if ( !npSpeedButtonArray )
    goto LABEL_48;
  v15 = (float *)*((_QWORD *)supportServantLabel + 23);
  v16 = v15[24];
  v17 = v15[25];
  v18 = v15[26];
  v19 = v15[27];
  v20 = -(v14 & (svtCommonFlag << 30 >> 31));
  v21 = 4LL;
  while ( 1 )
  {
    max_length = npSpeedButtonArray->max_length;
    v23 = v21 - 4;
    if ( (int)v21 - 4 >= max_length )
      break;
    if ( v23 >= max_length )
      goto LABEL_49;
    supportServantLabel = (void *)*((_QWORD *)&npSpeedButtonArray->obj.klass + v21);
    if ( supportServantLabel )
    {
      v24 = v20 + v21;
      UICommonButton__SetColliderEnable((UICommonButton_o *)supportServantLabel, v20 + (_DWORD)v21 != 4, 1, 0LL);
      npSpeedButtonSpriteArray = this->fields.npSpeedButtonSpriteArray;
      if ( npSpeedButtonSpriteArray )
      {
        if ( v23 >= npSpeedButtonSpriteArray->max_length )
          goto LABEL_49;
        supportServantLabel = (void *)*((_QWORD *)&npSpeedButtonSpriteArray->obj.klass + v21);
        if ( supportServantLabel )
        {
          v26 = (System_String_o **)(v24 == 4 ? &StringLiteral_17742/*"btn_badge_organization"*/ : &StringLiteral_17741/*"btn_auto_on"*/);
          UISprite__set_spriteName((UISprite_o *)supportServantLabel, *v26, 0LL);
          npSpeedLabelArray = this->fields.npSpeedLabelArray;
          if ( npSpeedLabelArray )
          {
            if ( v23 >= npSpeedLabelArray->max_length )
LABEL_49:
              sub_1C13F88(supportServantLabel, method);
            supportServantLabel = (void *)*((_QWORD *)&npSpeedLabelArray->obj.klass + v21);
            v28 = v24 == 4 ? v17 : v8;
            v29 = v24 == 4 ? v16 : v7;
            v30 = v24 == 4 ? v18 : v9;
            v31 = v24 == 4 ? v19 : v10;
            if ( supportServantLabel )
            {
              UIRangeLabel__set_effectColor(
                (UIRangeLabel_o *)supportServantLabel,
                *(UnityEngine_Color_o *)(&v28 - 1),
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
    goto LABEL_48;
  }
  supportServantLabel = this->fields.supportServantLabel;
  if ( !supportServantLabel
    || (supportServantLabel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)supportServantLabel, 0LL)) == 0LL )
  {
LABEL_48:
    sub_1C13F80(supportServantLabel, method);
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
    sub_1C13F80(0LL, v4);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v15; // x1
  struct BattleServantData_o **p_battleServantData; // x21
  struct BattleDeckServantData_o *deckSvt; // x8
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  UIRangeLabel_o *v19; // x20
  struct UIRangeLabel_array *v20; // x8
  UIRangeLabel_o *v21; // x20
  struct UIRangeLabel_array *v22; // x8
  UIRangeLabel_o *v23; // x20
  UILabel_o *explanationLabel; // x19

  if ( (byte_4BB7861 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, battleSvtData);
    sub_1C13D24(&StringLiteral_12133/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/, v10);
    sub_1C13D24(&StringLiteral_12131/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, v11);
    sub_1C13D24(&StringLiteral_12132/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, v12);
    sub_1C13D24(&StringLiteral_12127/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_OFF_BUTTON"*/, v13);
    byte_4BB7861 = 1;
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
    sub_1C13F80(gameObject, v15);
  }
  this->fields.battleServantData = battleSvtData;
  p_battleServantData = &this->fields.battleServantData;
  sub_1C13CC8(
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
    BattleServantNPSpeedChangeComponent__SetSupportServantButton(this, v15);
  else
    BattleServantNPSpeedChangeComponent__SetButton(this, v15);
  npSpeedLabelArray = this->fields.npSpeedLabelArray;
  if ( !npSpeedLabelArray )
    goto LABEL_27;
  if ( !npSpeedLabelArray->max_length )
    goto LABEL_28;
  v19 = npSpeedLabelArray->m_Items[0];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12131/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_CANCEL"*/, 0LL);
  if ( !v19 )
    goto LABEL_27;
  UIRangeLabel__Set(v19, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
  v20 = this->fields.npSpeedLabelArray;
  if ( !v20 )
    goto LABEL_27;
  if ( v20->max_length <= 1 )
    goto LABEL_28;
  v21 = v20->m_Items[1];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12127/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_OFF_BUTTON"*/, 0LL);
  if ( !v21 )
    goto LABEL_27;
  UIRangeLabel__Set(v21, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
  v22 = this->fields.npSpeedLabelArray;
  if ( !v22 )
    goto LABEL_27;
  if ( v22->max_length <= 2 )
LABEL_28:
    sub_1C13F88(gameObject, v15);
  v23 = v22->m_Items[2];
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12133/*"SERVANT_STATUS_SERVANT_QUEST_INTERLUDE2_CONFIRM_MESSAGE"*/, 0LL);
  if ( !v23 )
    goto LABEL_27;
  UIRangeLabel__Set(v23, (System_String_o *)gameObject, 0LL, 1, 0, 0LL);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12132/*"SERVANT_STATUS_SERVANT_QUEST_CONFIRM_DECIDE"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_27;
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
  float v9; // s8
  float v10; // s9
  float v11; // s10
  float v12; // s11
  __int64 v13; // x24
  int max_length; // w9
  il2cpp_array_size_t v15; // w25
  struct UICommonButton_array *v16; // x8
  struct UISprite_array *npSpeedButtonSpriteArray; // x8
  System_String_o **v18; // x8
  struct UISprite_array *v19; // x8
  struct UIRangeLabel_array *npSpeedLabelArray; // x8
  struct UIRangeLabel_array *v21; // x8
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0
  UILabel_o *v26; // x19

  if ( (byte_4BB7864 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_17741/*"btn_auto_on"*/, v3);
    sub_1C13D24(&StringLiteral_3029/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, v4);
    sub_1C13D24(&StringLiteral_17742/*"btn_badge_organization"*/, v5);
    byte_4BB7864 = 1;
  }
  this->fields.isSupport = 1;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4BAF545 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, method);
    byte_4BAF545 = 1;
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
  v8 = *(float **)&supportServantLabel[1].fields.specifyHoverColor.fields.b;
  v9 = v8[20];
  v10 = v8[21];
  v11 = v8[22];
  v12 = v8[23];
  v13 = 4LL;
  while ( 1 )
  {
    max_length = npSpeedButtonArray->max_length;
    v15 = v13 - 4;
    if ( (int)v13 - 4 >= max_length )
      break;
    if ( v15 >= max_length )
      goto LABEL_43;
    supportServantLabel = (UICommonButton_o *)*((_QWORD *)&npSpeedButtonArray->obj.klass + v13);
    if ( supportServantLabel )
    {
      UICommonButton__SetButtonEnableWithCollider(supportServantLabel, 1, 0LL);
      v16 = this->fields.npSpeedButtonArray;
      if ( v16 )
      {
        if ( v15 >= v16->max_length )
          goto LABEL_43;
        supportServantLabel = (UICommonButton_o *)*((_QWORD *)&v16->obj.klass + v13);
        if ( supportServantLabel )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)supportServantLabel, 0, 0LL);
          npSpeedButtonSpriteArray = this->fields.npSpeedButtonSpriteArray;
          if ( npSpeedButtonSpriteArray )
          {
            if ( v15 >= npSpeedButtonSpriteArray->max_length )
              goto LABEL_43;
            supportServantLabel = (UICommonButton_o *)*((_QWORD *)&npSpeedButtonSpriteArray->obj.klass + v13);
            if ( supportServantLabel )
            {
              v18 = (System_String_o **)((_DWORD)v13 == 4 ? &StringLiteral_17742/*"btn_badge_organization"*/ : &StringLiteral_17741/*"btn_auto_on"*/);
              UISprite__set_spriteName((UISprite_o *)supportServantLabel, *v18, 0LL);
              v19 = this->fields.npSpeedButtonSpriteArray;
              if ( v19 )
              {
                if ( v15 >= v19->max_length )
                  goto LABEL_43;
                supportServantLabel = (UICommonButton_o *)*((_QWORD *)&v19->obj.klass + v13);
                if ( supportServantLabel )
                {
                  UIWidget__set_color((UIWidget_o *)supportServantLabel, this->fields.maskColor, 0LL);
                  npSpeedLabelArray = this->fields.npSpeedLabelArray;
                  if ( npSpeedLabelArray )
                  {
                    if ( v15 >= npSpeedLabelArray->max_length )
                      goto LABEL_43;
                    supportServantLabel = (UICommonButton_o *)*((_QWORD *)&npSpeedLabelArray->obj.klass + v13);
                    if ( supportServantLabel )
                    {
                      UIRangeLabel__set_color((UIRangeLabel_o *)supportServantLabel, this->fields.maskColor, 0LL);
                      v21 = this->fields.npSpeedLabelArray;
                      if ( v21 )
                      {
                        if ( v15 >= v21->max_length )
LABEL_43:
                          sub_1C13F88(supportServantLabel, method);
                        a = v12;
                        b = v11;
                        g = v10;
                        r = v9;
                        if ( (_DWORD)v13 == 4 )
                        {
                          r = this->fields.maskLabelEffectColor.fields.r;
                          g = this->fields.maskLabelEffectColor.fields.g;
                          b = this->fields.maskLabelEffectColor.fields.b;
                          a = this->fields.maskLabelEffectColor.fields.a;
                        }
                        supportServantLabel = (UICommonButton_o *)*((_QWORD *)&v21->obj.klass + v13);
                        if ( supportServantLabel )
                        {
                          UIRangeLabel__set_effectColor(
                            (UIRangeLabel_o *)supportServantLabel,
                            *(UnityEngine_Color_o *)&r,
                            0LL);
                          npSpeedButtonArray = this->fields.npSpeedButtonArray;
                          ++v13;
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
  v26 = this->fields.supportServantLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  supportServantLabel = (UICommonButton_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3029/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, 0LL);
  if ( !v26 )
LABEL_42:
    sub_1C13F80(supportServantLabel, method);
  UILabel__set_text(v26, (System_String_o *)supportServantLabel, 0LL);
}


int32_t __fastcall BattleServantNPSpeedChangeComponent__get_ContentsHeight(
        BattleServantNPSpeedChangeComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.contentsHeight;
}