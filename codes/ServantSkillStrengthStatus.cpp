void __fastcall ServantSkillStrengthStatus___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v24; // x1
  struct ServantSkillStrengthStatus_StaticFields *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct ServantSkillStrengthStatus_StaticFields *v33; // x0
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct ServantSkillStrengthStatus_StaticFields *v41; // x0
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct ServantSkillStrengthStatus_StaticFields *v49; // x0
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  if ( (byte_42E6DAC & 1) == 0 )
  {
    sub_B5D5C4(&ServantSkillStrengthStatus_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_4260/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_19617/*"icon_stateup_on"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_19609/*"icon_skill_off"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_19616/*"icon_stateup_off"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_19610/*"icon_skill_on"*/, v20, v21, v22);
    byte_42E6DAC = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantSkillStrengthStatus_TypeInfo->static_fields;
  v24 = (System_Int32_array **)StringLiteral_4260/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_4260/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/;
  sub_B5D560(static_fields, v24, v2, v3, v4, v5, v6, v7);
  v25 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_19617/*"icon_stateup_on"*/;
  v25->ICON_NAME_ON = (struct System_String_o *)StringLiteral_19617/*"icon_stateup_on"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v25->ICON_NAME_ON, v26, v27, v28, v29, v30, v31, v32);
  v33 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v34 = (System_Int32_array **)StringLiteral_19616/*"icon_stateup_off"*/;
  v33->ICON_NAME_OFF = (struct System_String_o *)StringLiteral_19616/*"icon_stateup_off"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v33->ICON_NAME_OFF, v34, v35, v36, v37, v38, v39, v40);
  v41 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v42 = (System_Int32_array **)StringLiteral_19610/*"icon_skill_on"*/;
  v41->ICON_SKILL_ON = (struct System_String_o *)StringLiteral_19610/*"icon_skill_on"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v41->ICON_SKILL_ON, v42, v43, v44, v45, v46, v47, v48);
  v49 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v50 = (System_Int32_array **)StringLiteral_19609/*"icon_skill_off"*/;
  v49->ICON_SKILL_OFF = (struct System_String_o *)StringLiteral_19609/*"icon_skill_off"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v49->ICON_SKILL_OFF, v50, v51, v52, v53, v54, v55, v56);
}


void __fastcall ServantSkillStrengthStatus___ctor(ServantSkillStrengthStatus_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantSkillStrengthStatus__GetIconCnt(int32_t skillRecord, const MethodInfo *method)
{
  return skillRecord - 1;
}


int32_t __fastcall ServantSkillStrengthStatus__GetRestStrengtdCnt(int32_t strengthStatus, const MethodInfo *method)
{
  if ( strengthStatus == 99 )
    return 0;
  return strengthStatus;
}


int32_t __fastcall ServantSkillStrengthStatus__GetStrengthenedCnt(
        int32_t strengthStatus,
        int32_t skillRecord,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v7; // w8

  if ( (byte_42E6DAB & 1) == 0 )
  {
    sub_B5D5C4(&ServantSkillStrengthStatus_TypeInfo, skillRecord, (_DWORD)method, v3);
    byte_42E6DAB = 1;
  }
  if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  }
  if ( strengthStatus == 99 || strengthStatus == 0 )
    v7 = -1;
  else
    v7 = ~strengthStatus;
  return v7 + skillRecord;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillStrengthStatus__Set(
        ServantSkillStrengthStatus_o *this,
        UILabel_o *skillNameLabel,
        int32_t strengthStatus,
        int32_t skillRecord,
        int32_t offset,
        int32_t y,
        UnityEngine_Vector2Int_o size,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w20
  UnityEngine_Transform_o *StrengthenedCnt; // x0
  __int64 v21; // x1
  int32_t mWidth; // s8
  int v23; // w23
  float x; // s0
  float v25; // s8
  int32_t mAlignment; // w8
  float v27; // s8
  UnityEngine_GameObject_o *gameObject; // x25
  int v29; // w19
  int v30; // w28
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v32; // x26
  UISprite_o *v33; // x27
  System_String_o *ICON_NAME_OFF; // x1
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E6DA9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_UISprite___,
      (_DWORD)skillNameLabel,
      strengthStatus,
      *(_QWORD *)&skillRecord);
    sub_B5D5C4(&ServantSkillStrengthStatus_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_19615/*"icon_stateup"*/, v16, v17, v18);
    byte_42E6DA9 = 1;
  }
  if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  }
  if ( strengthStatus >= 1 )
  {
    v19 = skillRecord - 1;
    if ( skillRecord - 1 >= 1 )
    {
      if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
      }
      StrengthenedCnt = (UnityEngine_Transform_o *)ServantSkillStrengthStatus__GetStrengthenedCnt(
                                                     strengthStatus,
                                                     skillRecord,
                                                     *(const MethodInfo **)&strengthStatus);
      if ( skillNameLabel )
      {
        mWidth = skillNameLabel->fields.mWidth;
        v23 = (int)StrengthenedCnt;
        x = UILabel__get_printedSize(skillNameLabel, 0LL).fields.x;
        if ( x <= (float)mWidth )
          v25 = x;
        else
          v25 = (float)mWidth;
        if ( System_String__IsNullOrEmpty(skillNameLabel->fields.mText, 0LL) )
          v25 = v25 - (float)skillNameLabel->fields.mSpacingX;
        mAlignment = skillNameLabel->fields.mAlignment;
        if ( mAlignment == 3 )
        {
          v27 = -(float)(v25 + 2.0);
        }
        else if ( mAlignment == 2 )
        {
          v27 = (float)(v25 * 0.5) + 2.0;
        }
        else
        {
          v27 = mAlignment == 1 ? v25 + 2.0 : -2.0;
        }
        StrengthenedCnt = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( StrengthenedCnt )
        {
          v37.fields.y = (float)y;
          v37.fields.z = 0.0;
          v37.fields.x = v27;
          UnityEngine_Transform__set_localPosition(StrengthenedCnt, v37, 0LL);
          StrengthenedCnt = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          if ( StrengthenedCnt )
          {
            StrengthenedCnt = UnityEngine_Transform__Find(StrengthenedCnt, (System_String_o *)StringLiteral_19615/*"icon_stateup"*/, 0LL);
            if ( StrengthenedCnt )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)StrengthenedCnt, 0LL);
              v29 = 0;
              v30 = 0;
              while ( 1 )
              {
                transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
                StrengthenedCnt = (UnityEngine_Transform_o *)BaseMonoBehaviour__createObject(
                                                               (BaseMonoBehaviour_o *)this,
                                                               gameObject,
                                                               transform,
                                                               0LL,
                                                               0LL);
                if ( !StrengthenedCnt )
                  break;
                v32 = (UnityEngine_GameObject_o *)StrengthenedCnt;
                StrengthenedCnt = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               (UnityEngine_GameObject_o *)StrengthenedCnt,
                                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                v33 = (UISprite_o *)StrengthenedCnt;
                if ( v30 >= v23 )
                {
                  if ( (WORD1(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                  }
                  if ( !v33 )
                    break;
                  ICON_NAME_OFF = ServantSkillStrengthStatus_TypeInfo->static_fields->ICON_NAME_OFF;
                }
                else
                {
                  if ( (WORD1(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                  }
                  if ( !v33 )
                    break;
                  ICON_NAME_OFF = ServantSkillStrengthStatus_TypeInfo->static_fields->ICON_NAME_ON;
                }
                UISprite__set_spriteName(v33, ICON_NAME_OFF, 0LL);
                UIWidget__set_width((UIWidget_o *)v33, size.fields.m_X, 0LL);
                UIWidget__set_height((UIWidget_o *)v33, size.fields.m_Y, 0LL);
                UIWidget__set_depth((UIWidget_o *)v33, skillNameLabel->fields.mDepth, 0LL);
                GameObjectExtensions__SetLocalPositionX(v32, (float)v29, 0LL);
                StrengthenedCnt = (UnityEngine_Transform_o *)UnityEngine_GameObject__get_gameObject(v32, 0LL);
                if ( !StrengthenedCnt )
                  break;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)StrengthenedCnt, 1, 0LL);
                ++v30;
                v29 += offset;
                if ( v30 >= v19 )
                  return;
              }
            }
          }
        }
      }
      sub_B5D69C(StrengthenedCnt, v21);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantSkillStrengthStatus__SetVertical(
        ServantSkillStrengthStatus_o *this,
        UISprite_o *uISprite,
        int32_t strengthStatus,
        int32_t skillRecord,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w27
  int32_t StrengthenedCnt; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  UnityEngine_GameObject_o *v19; // x22
  UnityEngine_GameObject_o *v20; // x0
  int32_t mHeight; // w23
  UnityEngine_GameObject_o *v22; // x22
  int v23; // w28
  float v24; // s8
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v26; // x23
  UISprite_o *v27; // x24
  System_String_o *ICON_NAME_OFF; // x1
  UnityEngine_GameObject_o *v29; // x25
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E6DAA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_UISprite___,
      (_DWORD)uISprite,
      strengthStatus,
      *(_QWORD *)&skillRecord);
    sub_B5D5C4(&ServantSkillStrengthStatus_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_19615/*"icon_stateup"*/, v12, v13, v14);
    byte_42E6DAA = 1;
  }
  if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  }
  if ( strengthStatus >= 1 )
  {
    v15 = skillRecord - 1;
    if ( skillRecord - 1 >= 1 )
    {
      if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
      }
      StrengthenedCnt = ServantSkillStrengthStatus__GetStrengthenedCnt(
                          strengthStatus,
                          skillRecord,
                          *(const MethodInfo **)&strengthStatus);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( uISprite )
      {
        v19 = gameObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)uISprite, 0LL);
        if ( gameObject )
        {
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
          if ( gameObject )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
            GameObjectExtensions__SetLocalPosition(v19, localPosition, 0LL);
            gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
            if ( gameObject )
            {
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(
                                                         (UnityEngine_Transform_o *)gameObject,
                                                         (System_String_o *)StringLiteral_19615/*"icon_stateup"*/,
                                                         0LL);
              if ( gameObject )
              {
                v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                mHeight = uISprite->fields.mHeight;
                v22 = v20;
                gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)uISprite,
                                                           0LL);
                if ( gameObject )
                {
                  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
                  v23 = 0;
                  v24 = (float)(localScale.fields.y * (float)mHeight) * 0.75;
                  while ( 1 )
                  {
                    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
                    gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v22, transform, 0LL, 0LL);
                    if ( !gameObject )
                      break;
                    v26 = gameObject;
                    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               gameObject,
                                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    v27 = (UISprite_o *)gameObject;
                    if ( v23 >= StrengthenedCnt )
                    {
                      if ( (WORD1(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                      }
                      if ( !v27 )
                        break;
                      ICON_NAME_OFF = ServantSkillStrengthStatus_TypeInfo->static_fields->ICON_NAME_OFF;
                    }
                    else
                    {
                      if ( (WORD1(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                      }
                      if ( !v27 )
                        break;
                      ICON_NAME_OFF = ServantSkillStrengthStatus_TypeInfo->static_fields->ICON_NAME_ON;
                    }
                    UISprite__set_spriteName(v27, ICON_NAME_OFF, 0LL);
                    UIWidget__set_width((UIWidget_o *)v27, uISprite->fields.mWidth, 0LL);
                    UIWidget__set_height((UIWidget_o *)v27, uISprite->fields.mHeight, 0LL);
                    v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v27, 0LL);
                    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)uISprite,
                                                               0LL);
                    if ( !gameObject )
                      break;
                    v32 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
                    GameObjectExtensions__SetLocalScale(v29, v32, 0LL);
                    UIWidget__set_depth((UIWidget_o *)v27, uISprite->fields.mDepth, 0LL);
                    UIWidget__set_pivot((UIWidget_o *)v27, uISprite->fields.mPivot, 0LL);
                    GameObjectExtensions__SetLocalPosition_32430496(v26, 0.0, v24 * (float)v23, 0LL);
                    gameObject = UnityEngine_GameObject__get_gameObject(v26, 0LL);
                    if ( !gameObject )
                      break;
                    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                    if ( ++v23 >= v15 )
                      return;
                  }
                }
              }
            }
          }
        }
      }
      sub_B5D69C(gameObject, v18);
    }
  }
}