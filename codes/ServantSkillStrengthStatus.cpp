void __fastcall ServantSkillStrengthStatus___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct ServantSkillStrengthStatus_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct ServantSkillStrengthStatus_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
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

  if ( (byte_434FEA8 & 1) == 0 )
  {
    sub_B70694(&ServantSkillStrengthStatus_TypeInfo);
    sub_B70694(&StringLiteral_4269/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/);
    sub_B70694(&StringLiteral_19676/*"icon_stateup_on"*/);
    sub_B70694(&StringLiteral_19668/*"icon_skill_off"*/);
    sub_B70694(&StringLiteral_19675/*"icon_stateup_off"*/);
    sub_B70694(&StringLiteral_19669/*"icon_skill_on"*/);
    byte_434FEA8 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantSkillStrengthStatus_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_4269/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_4269/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_19676/*"icon_stateup_on"*/;
  v9->ICON_NAME_ON = (struct System_String_o *)StringLiteral_19676/*"icon_stateup_on"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->ICON_NAME_ON, v10, v11, v12, v13, v14, v15, v16);
  v17 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_19675/*"icon_stateup_off"*/;
  v17->ICON_NAME_OFF = (struct System_String_o *)StringLiteral_19675/*"icon_stateup_off"*/;
  sub_B70630((BattleServantConfConponent_o *)&v17->ICON_NAME_OFF, v18, v19, v20, v21, v22, v23, v24);
  v25 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_19669/*"icon_skill_on"*/;
  v25->ICON_SKILL_ON = (struct System_String_o *)StringLiteral_19669/*"icon_skill_on"*/;
  sub_B70630((BattleServantConfConponent_o *)&v25->ICON_SKILL_ON, v26, v27, v28, v29, v30, v31, v32);
  v33 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v34 = (System_Int32_array **)StringLiteral_19668/*"icon_skill_off"*/;
  v33->ICON_SKILL_OFF = (struct System_String_o *)StringLiteral_19668/*"icon_skill_off"*/;
  sub_B70630((BattleServantConfConponent_o *)&v33->ICON_SKILL_OFF, v34, v35, v36, v37, v38, v39, v40);
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
  int v6; // w8

  if ( (byte_434FEA7 & 1) == 0 )
  {
    sub_B70694(&ServantSkillStrengthStatus_TypeInfo);
    byte_434FEA7 = 1;
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
  int v13; // w20
  UnityEngine_Transform_o *StrengthenedCnt; // x0
  __int64 v15; // x1
  int32_t mWidth; // s8
  int v17; // w23
  float x; // s0
  float v19; // s8
  int32_t mAlignment; // w8
  float v21; // s8
  UnityEngine_GameObject_o *gameObject; // x25
  int v23; // w19
  int v24; // w28
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v26; // x26
  UISprite_o *v27; // x27
  System_String_o *ICON_NAME_OFF; // x1
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_434FEA5 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B70694(&ServantSkillStrengthStatus_TypeInfo);
    sub_B70694(&StringLiteral_19674/*"icon_stateup"*/);
    byte_434FEA5 = 1;
  }
  if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  }
  if ( strengthStatus >= 1 )
  {
    v13 = skillRecord - 1;
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
        v17 = (int)StrengthenedCnt;
        x = UILabel__get_printedSize(skillNameLabel, 0LL).fields.x;
        if ( x <= (float)mWidth )
          v19 = x;
        else
          v19 = (float)mWidth;
        if ( System_String__IsNullOrEmpty(skillNameLabel->fields.mText, 0LL) )
          v19 = v19 - (float)skillNameLabel->fields.mSpacingX;
        mAlignment = skillNameLabel->fields.mAlignment;
        if ( mAlignment == 3 )
        {
          v21 = -(float)(v19 + 2.0);
        }
        else if ( mAlignment == 2 )
        {
          v21 = (float)(v19 * 0.5) + 2.0;
        }
        else
        {
          v21 = mAlignment == 1 ? v19 + 2.0 : -2.0;
        }
        StrengthenedCnt = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( StrengthenedCnt )
        {
          v31.fields.y = (float)y;
          v31.fields.z = 0.0;
          v31.fields.x = v21;
          UnityEngine_Transform__set_localPosition(StrengthenedCnt, v31, 0LL);
          StrengthenedCnt = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          if ( StrengthenedCnt )
          {
            StrengthenedCnt = UnityEngine_Transform__Find(StrengthenedCnt, (System_String_o *)StringLiteral_19674/*"icon_stateup"*/, 0LL);
            if ( StrengthenedCnt )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)StrengthenedCnt, 0LL);
              v23 = 0;
              v24 = 0;
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
                v26 = (UnityEngine_GameObject_o *)StrengthenedCnt;
                StrengthenedCnt = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               (UnityEngine_GameObject_o *)StrengthenedCnt,
                                                               (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                v27 = (UISprite_o *)StrengthenedCnt;
                if ( v24 >= v17 )
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
                UIWidget__set_width((UIWidget_o *)v27, size.fields.m_X, 0LL);
                UIWidget__set_height((UIWidget_o *)v27, size.fields.m_Y, 0LL);
                UIWidget__set_depth((UIWidget_o *)v27, skillNameLabel->fields.mDepth, 0LL);
                GameObjectExtensions__SetLocalPositionX(v26, (float)v23, 0LL);
                StrengthenedCnt = (UnityEngine_Transform_o *)UnityEngine_GameObject__get_gameObject(v26, 0LL);
                if ( !StrengthenedCnt )
                  break;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)StrengthenedCnt, 1, 0LL);
                ++v24;
                v23 += offset;
                if ( v24 >= v13 )
                  return;
              }
            }
          }
        }
      }
      sub_B7076C(StrengthenedCnt, v15);
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
  int v9; // w27
  int32_t StrengthenedCnt; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x22
  UnityEngine_GameObject_o *v14; // x0
  int32_t mHeight; // w23
  UnityEngine_GameObject_o *v16; // x22
  int v17; // w28
  float v18; // s8
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v20; // x23
  UISprite_o *v21; // x24
  System_String_o *ICON_NAME_OFF; // x1
  UnityEngine_GameObject_o *v23; // x25
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_434FEA6 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B70694(&ServantSkillStrengthStatus_TypeInfo);
    sub_B70694(&StringLiteral_19674/*"icon_stateup"*/);
    byte_434FEA6 = 1;
  }
  if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  }
  if ( strengthStatus >= 1 )
  {
    v9 = skillRecord - 1;
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
        v13 = gameObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)uISprite, 0LL);
        if ( gameObject )
        {
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
          if ( gameObject )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
            GameObjectExtensions__SetLocalPosition(v13, localPosition, 0LL);
            gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
            if ( gameObject )
            {
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(
                                                         (UnityEngine_Transform_o *)gameObject,
                                                         (System_String_o *)StringLiteral_19674/*"icon_stateup"*/,
                                                         0LL);
              if ( gameObject )
              {
                v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                mHeight = uISprite->fields.mHeight;
                v16 = v14;
                gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)uISprite,
                                                           0LL);
                if ( gameObject )
                {
                  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
                  v17 = 0;
                  v18 = (float)(localScale.fields.y * (float)mHeight) * 0.75;
                  while ( 1 )
                  {
                    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
                    gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v16, transform, 0LL, 0LL);
                    if ( !gameObject )
                      break;
                    v20 = gameObject;
                    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               gameObject,
                                                               (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    v21 = (UISprite_o *)gameObject;
                    if ( v17 >= StrengthenedCnt )
                    {
                      if ( (WORD1(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                        && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                      }
                      if ( !v21 )
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
                      if ( !v21 )
                        break;
                      ICON_NAME_OFF = ServantSkillStrengthStatus_TypeInfo->static_fields->ICON_NAME_ON;
                    }
                    UISprite__set_spriteName(v21, ICON_NAME_OFF, 0LL);
                    UIWidget__set_width((UIWidget_o *)v21, uISprite->fields.mWidth, 0LL);
                    UIWidget__set_height((UIWidget_o *)v21, uISprite->fields.mHeight, 0LL);
                    v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21, 0LL);
                    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)uISprite,
                                                               0LL);
                    if ( !gameObject )
                      break;
                    v26 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
                    GameObjectExtensions__SetLocalScale(v23, v26, 0LL);
                    UIWidget__set_depth((UIWidget_o *)v21, uISprite->fields.mDepth, 0LL);
                    UIWidget__set_pivot((UIWidget_o *)v21, uISprite->fields.mPivot, 0LL);
                    GameObjectExtensions__SetLocalPosition_32497428(v20, 0.0, v18 * (float)v17, 0LL);
                    gameObject = UnityEngine_GameObject__get_gameObject(v20, 0LL);
                    if ( !gameObject )
                      break;
                    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                    if ( ++v17 >= v9 )
                      return;
                  }
                }
              }
            }
          }
        }
      }
      sub_B7076C(gameObject, v12);
    }
  }
}