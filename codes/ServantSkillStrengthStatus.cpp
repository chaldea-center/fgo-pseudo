void __fastcall ServantSkillStrengthStatus___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v14; // x1
  struct ServantSkillStrengthStatus_StaticFields *v15; // x0
  System_Int32_array **v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct ServantSkillStrengthStatus_StaticFields *v23; // x0
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct ServantSkillStrengthStatus_StaticFields *v31; // x0
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct ServantSkillStrengthStatus_StaticFields *v39; // x0
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_4212D4F & 1) == 0 )
  {
    sub_B0D8A4(&ServantSkillStrengthStatus_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_4204/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/, v8);
    sub_B0D8A4(&StringLiteral_19434/*"icon_stateup_on"*/, v9);
    sub_B0D8A4(&StringLiteral_19426/*"icon_skill_off"*/, v10);
    sub_B0D8A4(&StringLiteral_19433/*"icon_stateup_off"*/, v11);
    sub_B0D8A4(&StringLiteral_19427/*"icon_skill_on"*/, v12);
    byte_4212D4F = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantSkillStrengthStatus_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_4204/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_4204/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/;
  sub_B0D840(static_fields, v14, v2, v3, v4, v5, v6, v7);
  v15 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v16 = (System_Int32_array **)StringLiteral_19434/*"icon_stateup_on"*/;
  v15->ICON_NAME_ON = (struct System_String_o *)StringLiteral_19434/*"icon_stateup_on"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v15->ICON_NAME_ON, v16, v17, v18, v19, v20, v21, v22);
  v23 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v24 = (System_Int32_array **)StringLiteral_19433/*"icon_stateup_off"*/;
  v23->ICON_NAME_OFF = (struct System_String_o *)StringLiteral_19433/*"icon_stateup_off"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v23->ICON_NAME_OFF, v24, v25, v26, v27, v28, v29, v30);
  v31 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v32 = (System_Int32_array **)StringLiteral_19427/*"icon_skill_on"*/;
  v31->ICON_SKILL_ON = (struct System_String_o *)StringLiteral_19427/*"icon_skill_on"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v31->ICON_SKILL_ON, v32, v33, v34, v35, v36, v37, v38);
  v39 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v40 = (System_Int32_array **)StringLiteral_19426/*"icon_skill_off"*/;
  v39->ICON_SKILL_OFF = (struct System_String_o *)StringLiteral_19426/*"icon_skill_off"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v39->ICON_SKILL_OFF, v40, v41, v42, v43, v44, v45, v46);
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantSkillStrengthStatus__GetStrengthenedCnt(
        int32_t strengthStatus,
        int32_t skillRecord,
        const MethodInfo *method)
{
  int v6; // w8

  if ( (byte_4212D4E & 1) == 0 )
  {
    sub_B0D8A4(&ServantSkillStrengthStatus_TypeInfo, *(_QWORD *)&skillRecord);
    byte_4212D4E = 1;
  }
  if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  }
  if ( strengthStatus == 99 || strengthStatus == 0 )
    v6 = -1;
  else
    v6 = ~strengthStatus;
  return v6 + skillRecord;
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
  __int64 v13; // x1
  __int64 v14; // x1
  int v15; // w20
  UnityEngine_Transform_o *StrengthenedCnt; // x0
  int32_t mWidth; // s8
  int v18; // w23
  float x; // s0
  float v20; // s8
  int32_t mAlignment; // w8
  float v22; // s8
  UnityEngine_GameObject_o *gameObject; // x25
  int v24; // w19
  int v25; // w28
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v27; // x26
  UISprite_o *v28; // x27
  System_String_o *ICON_NAME_OFF; // x1
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4212D4C & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, skillNameLabel);
    sub_B0D8A4(&ServantSkillStrengthStatus_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_19432/*"icon_stateup"*/, v14);
    byte_4212D4C = 1;
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
      StrengthenedCnt = (UnityEngine_Transform_o *)ServantSkillStrengthStatus__GetStrengthenedCnt(
                                                     strengthStatus,
                                                     skillRecord,
                                                     *(const MethodInfo **)&strengthStatus);
      if ( skillNameLabel )
      {
        mWidth = skillNameLabel->fields.mWidth;
        v18 = (int)StrengthenedCnt;
        x = UILabel__get_printedSize(skillNameLabel, 0LL).fields.x;
        if ( x <= (float)mWidth )
          v20 = x;
        else
          v20 = (float)mWidth;
        if ( System_String__IsNullOrEmpty(skillNameLabel->fields.mText, 0LL) )
          v20 = v20 - (float)skillNameLabel->fields.mSpacingX;
        mAlignment = skillNameLabel->fields.mAlignment;
        if ( mAlignment == 3 )
        {
          v22 = -(float)(v20 + 2.0);
        }
        else if ( mAlignment == 2 )
        {
          v22 = (float)(v20 * 0.5) + 2.0;
        }
        else
        {
          v22 = mAlignment == 1 ? v20 + 2.0 : -2.0;
        }
        StrengthenedCnt = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( StrengthenedCnt )
        {
          v32.fields.y = (float)y;
          v32.fields.z = 0.0;
          v32.fields.x = v22;
          UnityEngine_Transform__set_localPosition(StrengthenedCnt, v32, 0LL);
          StrengthenedCnt = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          if ( StrengthenedCnt )
          {
            StrengthenedCnt = UnityEngine_Transform__Find(StrengthenedCnt, (System_String_o *)StringLiteral_19432/*"icon_stateup"*/, 0LL);
            if ( StrengthenedCnt )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)StrengthenedCnt, 0LL);
              v24 = 0;
              v25 = 0;
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
                v27 = (UnityEngine_GameObject_o *)StrengthenedCnt;
                StrengthenedCnt = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               (UnityEngine_GameObject_o *)StrengthenedCnt,
                                                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                v28 = (UISprite_o *)StrengthenedCnt;
                if ( v25 >= v18 )
                {
                  if ( (WORD1(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                  }
                  if ( !v28 )
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
                  if ( !v28 )
                    break;
                  ICON_NAME_OFF = ServantSkillStrengthStatus_TypeInfo->static_fields->ICON_NAME_ON;
                }
                UISprite__set_spriteName(v28, ICON_NAME_OFF, 0LL);
                UIWidget__set_width((UIWidget_o *)v28, size.fields.m_X, 0LL);
                UIWidget__set_height((UIWidget_o *)v28, size.fields.m_Y, 0LL);
                UIWidget__set_depth((UIWidget_o *)v28, skillNameLabel->fields.mDepth, 0LL);
                GameObjectExtensions__SetLocalPositionX(v27, (float)v24, 0LL);
                StrengthenedCnt = (UnityEngine_Transform_o *)UnityEngine_GameObject__get_gameObject(v27, 0LL);
                if ( !StrengthenedCnt )
                  break;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)StrengthenedCnt, 1, 0LL);
                ++v25;
                v24 += offset;
                if ( v25 >= v15 )
                  return;
              }
            }
          }
        }
      }
      sub_B0D97C(StrengthenedCnt);
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
  __int64 v9; // x1
  __int64 v10; // x1
  int v11; // w27
  int32_t StrengthenedCnt; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v14; // x22
  UnityEngine_GameObject_o *v15; // x0
  int32_t mHeight; // w23
  UnityEngine_GameObject_o *v17; // x22
  int v18; // w28
  float v19; // s8
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v21; // x23
  UISprite_o *v22; // x24
  System_String_o *ICON_NAME_OFF; // x1
  UnityEngine_GameObject_o *v24; // x25
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4212D4D & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, uISprite);
    sub_B0D8A4(&ServantSkillStrengthStatus_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_19432/*"icon_stateup"*/, v10);
    byte_4212D4D = 1;
  }
  if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  }
  if ( strengthStatus >= 1 )
  {
    v11 = skillRecord - 1;
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
        v14 = gameObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)uISprite, 0LL);
        if ( gameObject )
        {
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
          if ( gameObject )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
            GameObjectExtensions__SetLocalPosition(v14, localPosition, 0LL);
            gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
            if ( gameObject )
            {
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(
                                                         (UnityEngine_Transform_o *)gameObject,
                                                         (System_String_o *)StringLiteral_19432/*"icon_stateup"*/,
                                                         0LL);
              if ( gameObject )
              {
                v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                mHeight = uISprite->fields.mHeight;
                v17 = v15;
                gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)uISprite,
                                                           0LL);
                if ( gameObject )
                {
                  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
                  v18 = 0;
                  v19 = (float)(localScale.fields.y * (float)mHeight) * 0.75;
                  while ( 1 )
                  {
                    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
                    gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v17, transform, 0LL, 0LL);
                    if ( !gameObject )
                      break;
                    v21 = gameObject;
                    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               gameObject,
                                                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    v22 = (UISprite_o *)gameObject;
                    if ( v18 >= StrengthenedCnt )
                    {
                      if ( (WORD1(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                      }
                      if ( !v22 )
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
                      if ( !v22 )
                        break;
                      ICON_NAME_OFF = ServantSkillStrengthStatus_TypeInfo->static_fields->ICON_NAME_ON;
                    }
                    UISprite__set_spriteName(v22, ICON_NAME_OFF, 0LL);
                    UIWidget__set_width((UIWidget_o *)v22, uISprite->fields.mWidth, 0LL);
                    UIWidget__set_height((UIWidget_o *)v22, uISprite->fields.mHeight, 0LL);
                    v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0LL);
                    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)uISprite,
                                                               0LL);
                    if ( !gameObject )
                      break;
                    v27 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
                    GameObjectExtensions__SetLocalScale(v24, v27, 0LL);
                    UIWidget__set_depth((UIWidget_o *)v22, uISprite->fields.mDepth, 0LL);
                    UIWidget__set_pivot((UIWidget_o *)v22, uISprite->fields.mPivot, 0LL);
                    GameObjectExtensions__SetLocalPosition_31178688(v21, 0.0, v19 * (float)v18, 0LL);
                    gameObject = UnityEngine_GameObject__get_gameObject(v21, 0LL);
                    if ( !gameObject )
                      break;
                    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                    if ( ++v18 >= v11 )
                      return;
                  }
                }
              }
            }
          }
        }
      }
      sub_B0D97C(gameObject);
    }
  }
}