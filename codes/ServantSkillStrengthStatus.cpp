void __fastcall ServantSkillStrengthStatus___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct ServantSkillStrengthStatus_StaticFields *static_fields; // x0
  struct ServantSkillStrengthStatus_StaticFields *v8; // x0
  struct ServantSkillStrengthStatus_StaticFields *v9; // x0
  struct ServantSkillStrengthStatus_StaticFields *v10; // x0

  if ( (byte_49F80D4 & 1) == 0 )
  {
    sub_1B640C8(&ServantSkillStrengthStatus_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_4620/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/, v2);
    sub_1B640C8(&StringLiteral_20107/*"icon_stateup_on"*/, v3);
    sub_1B640C8(&StringLiteral_20099/*"icon_skill_off"*/, v4);
    sub_1B640C8(&StringLiteral_20106/*"icon_stateup_off"*/, v5);
    sub_1B640C8(&StringLiteral_20100/*"icon_skill_on"*/, v6);
    byte_49F80D4 = 1;
  }
  ServantSkillStrengthStatus_TypeInfo->static_fields->PATH = (struct System_String_o *)StringLiteral_4620/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/;
  sub_1B6406C(ServantSkillStrengthStatus_TypeInfo->static_fields);
  static_fields = ServantSkillStrengthStatus_TypeInfo->static_fields;
  static_fields->ICON_NAME_ON = (struct System_String_o *)StringLiteral_20107/*"icon_stateup_on"*/;
  sub_1B6406C(&static_fields->ICON_NAME_ON);
  v8 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v8->ICON_NAME_OFF = (struct System_String_o *)StringLiteral_20106/*"icon_stateup_off"*/;
  sub_1B6406C(&v8->ICON_NAME_OFF);
  v9 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v9->ICON_SKILL_ON = (struct System_String_o *)StringLiteral_20100/*"icon_skill_on"*/;
  sub_1B6406C(&v9->ICON_SKILL_ON);
  v10 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v10->ICON_SKILL_OFF = (struct System_String_o *)StringLiteral_20099/*"icon_skill_off"*/;
  sub_1B6406C(&v10->ICON_SKILL_OFF);
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

  if ( (byte_49F80D3 & 1) == 0 )
  {
    sub_1B640C8(&ServantSkillStrengthStatus_TypeInfo, *(_QWORD *)&skillRecord);
    byte_49F80D3 = 1;
  }
  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
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
  __int64 v14; // x1
  int v15; // w29
  UnityEngine_Transform_o *StrengthenedCnt; // x0
  int32_t mWidth; // s8
  int v18; // w23
  float x; // s0
  float v20; // s9
  int32_t mAlignment; // w8
  float v22; // s8
  UnityEngine_GameObject_o *gameObject; // x25
  int v24; // w28
  int v25; // w20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v27; // x26
  ServantSkillStrengthStatus_c *v28; // x8
  UISprite_o *v29; // x27
  struct ServantSkillStrengthStatus_StaticFields *static_fields; // x8
  __int64 v31; // x9
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F80D1 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, skillNameLabel);
    sub_1B640C8(&ServantSkillStrengthStatus_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_20105/*"icon_stateup"*/, v14);
    byte_49F80D1 = 1;
  }
  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  if ( strengthStatus >= 1 )
  {
    v15 = skillRecord - 1;
    if ( skillRecord - 1 >= 1 )
    {
      if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
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
          v22 = -2.0;
          if ( mAlignment == 1 )
            v22 = v20 + 2.0;
        }
        StrengthenedCnt = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( StrengthenedCnt )
        {
          v34.fields.y = (float)y;
          v34.fields.z = 0.0;
          v34.fields.x = v22;
          UnityEngine_Transform__set_localPosition(StrengthenedCnt, v34, 0LL);
          StrengthenedCnt = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          if ( StrengthenedCnt )
          {
            StrengthenedCnt = UnityEngine_Transform__Find(StrengthenedCnt, (System_String_o *)StringLiteral_20105/*"icon_stateup"*/, 0LL);
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
                StrengthenedCnt = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                                               (UnityEngine_GameObject_o *)StrengthenedCnt,
                                                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                v28 = ServantSkillStrengthStatus_TypeInfo;
                v29 = (UISprite_o *)StrengthenedCnt;
                if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                  v28 = ServantSkillStrengthStatus_TypeInfo;
                }
                static_fields = v28->static_fields;
                if ( v25 >= v18 )
                {
                  if ( !v29 )
                    break;
                  v31 = 16LL;
                }
                else
                {
                  if ( !v29 )
                    break;
                  v31 = 8LL;
                }
                UISprite__set_spriteName(v29, *(System_String_o **)((char *)&static_fields->PATH + v31), 0LL);
                UIWidget__set_width((UIWidget_o *)v29, size.fields.m_X, 0LL);
                UIWidget__set_height((UIWidget_o *)v29, size.fields.m_Y, 0LL);
                UIWidget__set_depth((UIWidget_o *)v29, skillNameLabel->fields.mDepth, 0LL);
                GameObjectExtensions__SetLocalPositionX(v27, (float)v24, 0LL);
                StrengthenedCnt = (UnityEngine_Transform_o *)UnityEngine_GameObject__get_gameObject(v27, 0LL);
                if ( !StrengthenedCnt )
                  break;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)StrengthenedCnt, 1, 0LL);
                ++v25;
                v24 += offset;
                if ( v15 == v25 )
                  return;
              }
            }
          }
        }
      }
      sub_1B64324(StrengthenedCnt);
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
  ServantSkillStrengthStatus_c *v22; // x8
  UISprite_o *v23; // x24
  struct ServantSkillStrengthStatus_StaticFields *static_fields; // x8
  __int64 v25; // x9
  UnityEngine_GameObject_o *v26; // x25
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F80D2 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, uISprite);
    sub_1B640C8(&ServantSkillStrengthStatus_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_20105/*"icon_stateup"*/, v10);
    byte_49F80D2 = 1;
  }
  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  if ( strengthStatus >= 1 )
  {
    v11 = skillRecord - 1;
    if ( skillRecord - 1 >= 1 )
    {
      if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
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
                                                         (System_String_o *)StringLiteral_20105/*"icon_stateup"*/,
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
                    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                               gameObject,
                                                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    v22 = ServantSkillStrengthStatus_TypeInfo;
                    v23 = (UISprite_o *)gameObject;
                    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                      v22 = ServantSkillStrengthStatus_TypeInfo;
                    }
                    static_fields = v22->static_fields;
                    if ( v18 >= StrengthenedCnt )
                    {
                      if ( !v23 )
                        break;
                      v25 = 16LL;
                    }
                    else
                    {
                      if ( !v23 )
                        break;
                      v25 = 8LL;
                    }
                    UISprite__set_spriteName(v23, *(System_String_o **)((char *)&static_fields->PATH + v25), 0LL);
                    UIWidget__set_width((UIWidget_o *)v23, uISprite->fields.mWidth, 0LL);
                    UIWidget__set_height((UIWidget_o *)v23, uISprite->fields.mHeight, 0LL);
                    v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v23, 0LL);
                    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)uISprite,
                                                               0LL);
                    if ( !gameObject )
                      break;
                    v29 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
                    GameObjectExtensions__SetLocalScale(v26, v29, 0LL);
                    UIWidget__set_depth((UIWidget_o *)v23, uISprite->fields.mDepth, 0LL);
                    UIWidget__set_pivot((UIWidget_o *)v23, uISprite->fields.mPivot, 0LL);
                    GameObjectExtensions__SetLocalPosition_33375460(v21, 0.0, v19 * (float)v18, 0LL);
                    gameObject = UnityEngine_GameObject__get_gameObject(v21, 0LL);
                    if ( !gameObject )
                      break;
                    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                    if ( v11 == ++v18 )
                      return;
                  }
                }
              }
            }
          }
        }
      }
      sub_1B64324(gameObject);
    }
  }
}