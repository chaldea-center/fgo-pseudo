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

  if ( (byte_4A29B89 & 1) == 0 )
  {
    sub_1B761C0(&ServantSkillStrengthStatus_TypeInfo, v1);
    sub_1B761C0(&StringLiteral_4642/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/, v2);
    sub_1B761C0(&StringLiteral_20180/*"icon_stateup_on"*/, v3);
    sub_1B761C0(&StringLiteral_20172/*"icon_skill_off"*/, v4);
    sub_1B761C0(&StringLiteral_20179/*"icon_stateup_off"*/, v5);
    sub_1B761C0(&StringLiteral_20173/*"icon_skill_on"*/, v6);
    byte_4A29B89 = 1;
  }
  ServantSkillStrengthStatus_TypeInfo->static_fields->PATH = (struct System_String_o *)StringLiteral_4642/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/;
  sub_1B76164(ServantSkillStrengthStatus_TypeInfo->static_fields);
  static_fields = ServantSkillStrengthStatus_TypeInfo->static_fields;
  static_fields->ICON_NAME_ON = (struct System_String_o *)StringLiteral_20180/*"icon_stateup_on"*/;
  sub_1B76164(&static_fields->ICON_NAME_ON);
  v8 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v8->ICON_NAME_OFF = (struct System_String_o *)StringLiteral_20179/*"icon_stateup_off"*/;
  sub_1B76164(&v8->ICON_NAME_OFF);
  v9 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v9->ICON_SKILL_ON = (struct System_String_o *)StringLiteral_20173/*"icon_skill_on"*/;
  sub_1B76164(&v9->ICON_SKILL_ON);
  v10 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v10->ICON_SKILL_OFF = (struct System_String_o *)StringLiteral_20172/*"icon_skill_off"*/;
  sub_1B76164(&v10->ICON_SKILL_OFF);
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

  if ( (byte_4A29B88 & 1) == 0 )
  {
    sub_1B761C0(&ServantSkillStrengthStatus_TypeInfo, *(_QWORD *)&skillRecord);
    byte_4A29B88 = 1;
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
  __int64 v17; // x1
  int32_t mWidth; // s8
  int v19; // w23
  float x; // s0
  float v21; // s9
  int32_t mAlignment; // w8
  float v23; // s8
  UnityEngine_GameObject_o *gameObject; // x25
  int v25; // w28
  int v26; // w20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v28; // x26
  ServantSkillStrengthStatus_c *v29; // x8
  UISprite_o *v30; // x27
  struct ServantSkillStrengthStatus_StaticFields *static_fields; // x8
  __int64 v32; // x9
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A29B86 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, skillNameLabel);
    sub_1B761C0(&ServantSkillStrengthStatus_TypeInfo, v13);
    sub_1B761C0(&StringLiteral_20178/*"icon_stateup"*/, v14);
    byte_4A29B86 = 1;
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
        v19 = (int)StrengthenedCnt;
        x = UILabel__get_printedSize(skillNameLabel, 0LL).fields.x;
        if ( x <= (float)mWidth )
          v21 = x;
        else
          v21 = (float)mWidth;
        if ( System_String__IsNullOrEmpty(skillNameLabel->fields.mText, 0LL) )
          v21 = v21 - (float)skillNameLabel->fields.mSpacingX;
        mAlignment = skillNameLabel->fields.mAlignment;
        if ( mAlignment == 3 )
        {
          v23 = -(float)(v21 + 2.0);
        }
        else if ( mAlignment == 2 )
        {
          v23 = (float)(v21 * 0.5) + 2.0;
        }
        else
        {
          v23 = -2.0;
          if ( mAlignment == 1 )
            v23 = v21 + 2.0;
        }
        StrengthenedCnt = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( StrengthenedCnt )
        {
          v35.fields.y = (float)y;
          v35.fields.z = 0.0;
          v35.fields.x = v23;
          UnityEngine_Transform__set_localPosition(StrengthenedCnt, v35, 0LL);
          StrengthenedCnt = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          if ( StrengthenedCnt )
          {
            StrengthenedCnt = UnityEngine_Transform__Find(StrengthenedCnt, (System_String_o *)StringLiteral_20178/*"icon_stateup"*/, 0LL);
            if ( StrengthenedCnt )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)StrengthenedCnt, 0LL);
              v25 = 0;
              v26 = 0;
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
                v28 = (UnityEngine_GameObject_o *)StrengthenedCnt;
                StrengthenedCnt = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                                               (UnityEngine_GameObject_o *)StrengthenedCnt,
                                                               (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                v29 = ServantSkillStrengthStatus_TypeInfo;
                v30 = (UISprite_o *)StrengthenedCnt;
                if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                  v29 = ServantSkillStrengthStatus_TypeInfo;
                }
                static_fields = v29->static_fields;
                if ( v26 >= v19 )
                {
                  if ( !v30 )
                    break;
                  v32 = 16LL;
                }
                else
                {
                  if ( !v30 )
                    break;
                  v32 = 8LL;
                }
                UISprite__set_spriteName(v30, *(System_String_o **)((char *)&static_fields->PATH + v32), 0LL);
                UIWidget__set_width((UIWidget_o *)v30, size.fields.m_X, 0LL);
                UIWidget__set_height((UIWidget_o *)v30, size.fields.m_Y, 0LL);
                UIWidget__set_depth((UIWidget_o *)v30, skillNameLabel->fields.mDepth, 0LL);
                GameObjectExtensions__SetLocalPositionX(v28, (float)v25, 0LL);
                StrengthenedCnt = (UnityEngine_Transform_o *)UnityEngine_GameObject__get_gameObject(v28, 0LL);
                if ( !StrengthenedCnt )
                  break;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)StrengthenedCnt, 1, 0LL);
                ++v26;
                v25 += offset;
                if ( v15 == v26 )
                  return;
              }
            }
          }
        }
      }
      sub_1B7641C(StrengthenedCnt, v17);
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
  __int64 v14; // x1
  UnityEngine_GameObject_o *v15; // x22
  UnityEngine_GameObject_o *v16; // x0
  int32_t mHeight; // w23
  UnityEngine_GameObject_o *v18; // x22
  int v19; // w28
  float v20; // s8
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v22; // x23
  ServantSkillStrengthStatus_c *v23; // x8
  UISprite_o *v24; // x24
  struct ServantSkillStrengthStatus_StaticFields *static_fields; // x8
  __int64 v26; // x9
  UnityEngine_GameObject_o *v27; // x25
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A29B87 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, uISprite);
    sub_1B761C0(&ServantSkillStrengthStatus_TypeInfo, v9);
    sub_1B761C0(&StringLiteral_20178/*"icon_stateup"*/, v10);
    byte_4A29B87 = 1;
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
        v15 = gameObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)uISprite, 0LL);
        if ( gameObject )
        {
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
          if ( gameObject )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0LL);
            GameObjectExtensions__SetLocalPosition(v15, localPosition, 0LL);
            gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
            if ( gameObject )
            {
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(
                                                         (UnityEngine_Transform_o *)gameObject,
                                                         (System_String_o *)StringLiteral_20178/*"icon_stateup"*/,
                                                         0LL);
              if ( gameObject )
              {
                v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                mHeight = uISprite->fields.mHeight;
                v18 = v16;
                gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)uISprite,
                                                           0LL);
                if ( gameObject )
                {
                  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
                  v19 = 0;
                  v20 = (float)(localScale.fields.y * (float)mHeight) * 0.75;
                  while ( 1 )
                  {
                    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
                    gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v18, transform, 0LL, 0LL);
                    if ( !gameObject )
                      break;
                    v22 = gameObject;
                    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                               gameObject,
                                                               (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    v23 = ServantSkillStrengthStatus_TypeInfo;
                    v24 = (UISprite_o *)gameObject;
                    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                      v23 = ServantSkillStrengthStatus_TypeInfo;
                    }
                    static_fields = v23->static_fields;
                    if ( v19 >= StrengthenedCnt )
                    {
                      if ( !v24 )
                        break;
                      v26 = 16LL;
                    }
                    else
                    {
                      if ( !v24 )
                        break;
                      v26 = 8LL;
                    }
                    UISprite__set_spriteName(v24, *(System_String_o **)((char *)&static_fields->PATH + v26), 0LL);
                    UIWidget__set_width((UIWidget_o *)v24, uISprite->fields.mWidth, 0LL);
                    UIWidget__set_height((UIWidget_o *)v24, uISprite->fields.mHeight, 0LL);
                    v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v24, 0LL);
                    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)uISprite,
                                                               0LL);
                    if ( !gameObject )
                      break;
                    v30 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
                    GameObjectExtensions__SetLocalScale(v27, v30, 0LL);
                    UIWidget__set_depth((UIWidget_o *)v24, uISprite->fields.mDepth, 0LL);
                    UIWidget__set_pivot((UIWidget_o *)v24, uISprite->fields.mPivot, 0LL);
                    GameObjectExtensions__SetLocalPosition_33552048(v22, 0.0, v20 * (float)v19, 0LL);
                    gameObject = UnityEngine_GameObject__get_gameObject(v22, 0LL);
                    if ( !gameObject )
                      break;
                    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                    if ( v11 == ++v19 )
                      return;
                  }
                }
              }
            }
          }
        }
      }
      sub_1B7641C(gameObject, v14);
    }
  }
}