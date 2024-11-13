void __fastcall ServantSkillStrengthStatus___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  struct ServantSkillStrengthStatus_StaticFields *static_fields; // x0
  __int64 v15; // x1
  struct ServantSkillStrengthStatus_StaticFields *v16; // x0
  __int64 v17; // x1
  struct ServantSkillStrengthStatus_StaticFields *v18; // x0
  __int64 v19; // x1
  struct ServantSkillStrengthStatus_StaticFields *v20; // x0

  if ( (byte_4B11A18 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantSkillStrengthStatus_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_4710/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/, v3, v4);
    sub_1BCA7E0(&StringLiteral_20401/*"icon_stateup_on"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_20393/*"icon_skill_off"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_20400/*"icon_stateup_off"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_20394/*"icon_skill_on"*/, v11, v12);
    byte_4B11A18 = 1;
  }
  ServantSkillStrengthStatus_TypeInfo->static_fields->PATH = (struct System_String_o *)StringLiteral_4710/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/;
  sub_1BCA784(ServantSkillStrengthStatus_TypeInfo->static_fields, StringLiteral_4710/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/);
  v13 = StringLiteral_20401/*"icon_stateup_on"*/;
  static_fields = ServantSkillStrengthStatus_TypeInfo->static_fields;
  static_fields->ICON_NAME_ON = (struct System_String_o *)StringLiteral_20401/*"icon_stateup_on"*/;
  sub_1BCA784(&static_fields->ICON_NAME_ON, v13);
  v15 = StringLiteral_20400/*"icon_stateup_off"*/;
  v16 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v16->ICON_NAME_OFF = (struct System_String_o *)StringLiteral_20400/*"icon_stateup_off"*/;
  sub_1BCA784(&v16->ICON_NAME_OFF, v15);
  v17 = StringLiteral_20394/*"icon_skill_on"*/;
  v18 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v18->ICON_SKILL_ON = (struct System_String_o *)StringLiteral_20394/*"icon_skill_on"*/;
  sub_1BCA784(&v18->ICON_SKILL_ON, v17);
  v19 = StringLiteral_20393/*"icon_skill_off"*/;
  v20 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v20->ICON_SKILL_OFF = (struct System_String_o *)StringLiteral_20393/*"icon_skill_off"*/;
  sub_1BCA784(&v20->ICON_SKILL_OFF, v19);
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
  int32_t result; // w0

  result = 0;
  if ( strengthStatus )
  {
    if ( strengthStatus != 99 )
      return strengthStatus;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantSkillStrengthStatus__GetStrengthenedCnt(
        int32_t strengthStatus,
        int32_t skillRecord,
        const MethodInfo *method)
{
  int v5; // w8

  if ( (byte_4B11A17 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantSkillStrengthStatus_TypeInfo, *(_QWORD *)&skillRecord, method);
    byte_4B11A17 = 1;
  }
  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, *(_QWORD *)&skillRecord);
  v5 = -1;
  if ( strengthStatus && strengthStatus != 99 )
    v5 = ~strengthStatus;
  return v5 + skillRecord;
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  int v17; // w29
  UnityEngine_Transform_o *StrengthenedCnt; // x0
  __int64 v19; // x1
  int32_t mWidth; // s8
  int v21; // w23
  float x; // s0
  float v23; // s9
  int32_t mAlignment; // w8
  float v25; // s8
  UnityEngine_GameObject_o *gameObject; // x25
  int v27; // w28
  int v28; // w20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v30; // x26
  ServantSkillStrengthStatus_c *v31; // x8
  UISprite_o *v32; // x27
  struct ServantSkillStrengthStatus_StaticFields *static_fields; // x8
  __int64 v34; // x9
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B11A15 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, skillNameLabel, *(_QWORD *)&strengthStatus);
    sub_1BCA7E0(&ServantSkillStrengthStatus_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_20399/*"icon_stateup"*/, v15, v16);
    byte_4B11A15 = 1;
  }
  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, skillNameLabel);
  if ( strengthStatus >= 1 )
  {
    v17 = skillRecord - 1;
    if ( skillRecord - 1 >= 1 )
    {
      if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, skillNameLabel);
      StrengthenedCnt = (UnityEngine_Transform_o *)ServantSkillStrengthStatus__GetStrengthenedCnt(
                                                     strengthStatus,
                                                     skillRecord,
                                                     *(const MethodInfo **)&strengthStatus);
      if ( skillNameLabel )
      {
        mWidth = skillNameLabel->fields.mWidth;
        v21 = (int)StrengthenedCnt;
        x = UILabel__get_printedSize(skillNameLabel, 0LL).fields.x;
        if ( x <= (float)mWidth )
          v23 = x;
        else
          v23 = (float)mWidth;
        if ( System_String__IsNullOrEmpty(skillNameLabel->fields.mText, 0LL) )
          v23 = v23 - (float)skillNameLabel->fields.mSpacingX;
        mAlignment = skillNameLabel->fields.mAlignment;
        if ( mAlignment == 3 )
        {
          v25 = -(float)(v23 + 2.0);
        }
        else if ( mAlignment == 2 )
        {
          v25 = (float)(v23 * 0.5) + 2.0;
        }
        else
        {
          v25 = -2.0;
          if ( mAlignment == 1 )
            v25 = v23 + 2.0;
        }
        StrengthenedCnt = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( StrengthenedCnt )
        {
          v37.fields.y = (float)y;
          v37.fields.z = 0.0;
          v37.fields.x = v25;
          UnityEngine_Transform__set_localPosition(StrengthenedCnt, v37, 0LL);
          StrengthenedCnt = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          if ( StrengthenedCnt )
          {
            StrengthenedCnt = UnityEngine_Transform__Find(StrengthenedCnt, (System_String_o *)StringLiteral_20399/*"icon_stateup"*/, 0LL);
            if ( StrengthenedCnt )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)StrengthenedCnt, 0LL);
              v27 = 0;
              v28 = 0;
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
                v30 = (UnityEngine_GameObject_o *)StrengthenedCnt;
                StrengthenedCnt = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                                               (UnityEngine_GameObject_o *)StrengthenedCnt,
                                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                v31 = ServantSkillStrengthStatus_TypeInfo;
                v32 = (UISprite_o *)StrengthenedCnt;
                if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, v19);
                  v31 = ServantSkillStrengthStatus_TypeInfo;
                }
                static_fields = v31->static_fields;
                if ( v28 >= v21 )
                {
                  if ( !v32 )
                    break;
                  v34 = 16LL;
                }
                else
                {
                  if ( !v32 )
                    break;
                  v34 = 8LL;
                }
                UISprite__set_spriteName(v32, *(System_String_o **)((char *)&static_fields->PATH + v34), 0LL);
                UIWidget__set_width((UIWidget_o *)v32, size.fields.m_X, 0LL);
                UIWidget__set_height((UIWidget_o *)v32, size.fields.m_Y, 0LL);
                UIWidget__set_depth((UIWidget_o *)v32, skillNameLabel->fields.mDepth, 0LL);
                GameObjectExtensions__SetLocalPositionX(v30, (float)v27, 0LL);
                StrengthenedCnt = (UnityEngine_Transform_o *)UnityEngine_GameObject__get_gameObject(v30, 0LL);
                if ( !StrengthenedCnt )
                  break;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)StrengthenedCnt, 1, 0LL);
                ++v28;
                v27 += offset;
                if ( v17 == v28 )
                  return;
              }
            }
          }
        }
      }
      sub_1BCAA3C(StrengthenedCnt, v19);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int v13; // w27
  int32_t StrengthenedCnt; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  UnityEngine_GameObject_o *v17; // x22
  UnityEngine_GameObject_o *v18; // x0
  int32_t mHeight; // w23
  UnityEngine_GameObject_o *v20; // x22
  int v21; // w28
  float v22; // s8
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v24; // x23
  ServantSkillStrengthStatus_c *v25; // x8
  UISprite_o *v26; // x24
  struct ServantSkillStrengthStatus_StaticFields *static_fields; // x8
  __int64 v28; // x9
  UnityEngine_GameObject_o *v29; // x25
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B11A16 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, uISprite, *(_QWORD *)&strengthStatus);
    sub_1BCA7E0(&ServantSkillStrengthStatus_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_20399/*"icon_stateup"*/, v11, v12);
    byte_4B11A16 = 1;
  }
  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, uISprite);
  if ( strengthStatus >= 1 )
  {
    v13 = skillRecord - 1;
    if ( skillRecord - 1 >= 1 )
    {
      if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, uISprite);
      StrengthenedCnt = ServantSkillStrengthStatus__GetStrengthenedCnt(
                          strengthStatus,
                          skillRecord,
                          *(const MethodInfo **)&strengthStatus);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( uISprite )
      {
        v17 = gameObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)uISprite, 0LL);
        if ( gameObject )
        {
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
          if ( gameObject )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
            GameObjectExtensions__SetLocalPosition(v17, localPosition, 0LL);
            gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
            if ( gameObject )
            {
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(
                                                         (UnityEngine_Transform_o *)gameObject,
                                                         (System_String_o *)StringLiteral_20399/*"icon_stateup"*/,
                                                         0LL);
              if ( gameObject )
              {
                v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                mHeight = uISprite->fields.mHeight;
                v20 = v18;
                gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)uISprite,
                                                           0LL);
                if ( gameObject )
                {
                  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
                  v21 = 0;
                  v22 = (float)(localScale.fields.y * (float)mHeight) * 0.75;
                  while ( 1 )
                  {
                    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
                    gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v20, transform, 0LL, 0LL);
                    if ( !gameObject )
                      break;
                    v24 = gameObject;
                    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                               gameObject,
                                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    v25 = ServantSkillStrengthStatus_TypeInfo;
                    v26 = (UISprite_o *)gameObject;
                    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, v16);
                      v25 = ServantSkillStrengthStatus_TypeInfo;
                    }
                    static_fields = v25->static_fields;
                    if ( v21 >= StrengthenedCnt )
                    {
                      if ( !v26 )
                        break;
                      v28 = 16LL;
                    }
                    else
                    {
                      if ( !v26 )
                        break;
                      v28 = 8LL;
                    }
                    UISprite__set_spriteName(v26, *(System_String_o **)((char *)&static_fields->PATH + v28), 0LL);
                    UIWidget__set_width((UIWidget_o *)v26, uISprite->fields.mWidth, 0LL);
                    UIWidget__set_height((UIWidget_o *)v26, uISprite->fields.mHeight, 0LL);
                    v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v26, 0LL);
                    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)uISprite,
                                                               0LL);
                    if ( !gameObject )
                      break;
                    v32 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
                    GameObjectExtensions__SetLocalScale(v29, v32, 0LL);
                    UIWidget__set_depth((UIWidget_o *)v26, uISprite->fields.mDepth, 0LL);
                    UIWidget__set_pivot((UIWidget_o *)v26, uISprite->fields.mPivot, 0LL);
                    GameObjectExtensions__SetLocalPosition_34331044(v24, 0.0, v22 * (float)v21, 0LL);
                    gameObject = UnityEngine_GameObject__get_gameObject(v24, 0LL);
                    if ( !gameObject )
                      break;
                    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                    if ( v13 == ++v21 )
                      return;
                  }
                }
              }
            }
          }
        }
      }
      sub_1BCAA3C(gameObject, v16);
    }
  }
}