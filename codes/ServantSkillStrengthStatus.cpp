void __fastcall ServantSkillStrengthStatus___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ServantSkillStrengthStatus_StaticFields *static_fields; // x0
  __int64 v3; // x1
  struct ServantSkillStrengthStatus_StaticFields *v4; // x0
  __int64 v5; // x1
  struct ServantSkillStrengthStatus_StaticFields *v6; // x0
  __int64 v7; // x1
  struct ServantSkillStrengthStatus_StaticFields *v8; // x0

  if ( (byte_4A56C9E & 1) == 0 )
  {
    sub_1B885B0(&ServantSkillStrengthStatus_TypeInfo);
    sub_1B885B0(&StringLiteral_4643/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/);
    sub_1B885B0(&StringLiteral_20187/*"icon_stateup_on"*/);
    sub_1B885B0(&StringLiteral_20179/*"icon_skill_off"*/);
    sub_1B885B0(&StringLiteral_20186/*"icon_stateup_off"*/);
    sub_1B885B0(&StringLiteral_20180/*"icon_skill_on"*/);
    byte_4A56C9E = 1;
  }
  ServantSkillStrengthStatus_TypeInfo->static_fields->PATH = (struct System_String_o *)StringLiteral_4643/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/;
  sub_1B88554(ServantSkillStrengthStatus_TypeInfo->static_fields, StringLiteral_4643/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/);
  v1 = StringLiteral_20187/*"icon_stateup_on"*/;
  static_fields = ServantSkillStrengthStatus_TypeInfo->static_fields;
  static_fields->ICON_NAME_ON = (struct System_String_o *)StringLiteral_20187/*"icon_stateup_on"*/;
  sub_1B88554(&static_fields->ICON_NAME_ON, v1);
  v3 = StringLiteral_20186/*"icon_stateup_off"*/;
  v4 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v4->ICON_NAME_OFF = (struct System_String_o *)StringLiteral_20186/*"icon_stateup_off"*/;
  sub_1B88554(&v4->ICON_NAME_OFF, v3);
  v5 = StringLiteral_20180/*"icon_skill_on"*/;
  v6 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v6->ICON_SKILL_ON = (struct System_String_o *)StringLiteral_20180/*"icon_skill_on"*/;
  sub_1B88554(&v6->ICON_SKILL_ON, v5);
  v7 = StringLiteral_20179/*"icon_skill_off"*/;
  v8 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v8->ICON_SKILL_OFF = (struct System_String_o *)StringLiteral_20179/*"icon_skill_off"*/;
  sub_1B88554(&v8->ICON_SKILL_OFF, v7);
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


int32_t __fastcall ServantSkillStrengthStatus__GetStrengthenedCnt(
        int32_t strengthStatus,
        int32_t skillRecord,
        const MethodInfo *method)
{
  int v5; // w8

  if ( (byte_4A56C9D & 1) == 0 )
  {
    sub_1B885B0(&ServantSkillStrengthStatus_TypeInfo);
    byte_4A56C9D = 1;
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
  int v13; // w29
  UnityEngine_Transform_o *StrengthenedCnt; // x0
  __int64 v15; // x1
  int32_t mWidth; // s8
  int v17; // w23
  float x; // s0
  float v19; // s9
  int32_t mAlignment; // w8
  float v21; // s8
  UnityEngine_GameObject_o *gameObject; // x25
  int v23; // w28
  int v24; // w20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v26; // x26
  ServantSkillStrengthStatus_c *v27; // x8
  UISprite_o *v28; // x27
  struct ServantSkillStrengthStatus_StaticFields *static_fields; // x8
  __int64 v30; // x9
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A56C9B & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&ServantSkillStrengthStatus_TypeInfo);
    sub_1B885B0(&StringLiteral_20185/*"icon_stateup"*/);
    byte_4A56C9B = 1;
  }
  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  if ( strengthStatus >= 1 )
  {
    v13 = skillRecord - 1;
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
          v21 = -2.0;
          if ( mAlignment == 1 )
            v21 = v19 + 2.0;
        }
        StrengthenedCnt = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( StrengthenedCnt )
        {
          v33.fields.y = (float)y;
          v33.fields.z = 0.0;
          v33.fields.x = v21;
          UnityEngine_Transform__set_localPosition(StrengthenedCnt, v33, 0LL);
          StrengthenedCnt = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          if ( StrengthenedCnt )
          {
            StrengthenedCnt = UnityEngine_Transform__Find(StrengthenedCnt, (System_String_o *)StringLiteral_20185/*"icon_stateup"*/, 0LL);
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
                StrengthenedCnt = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                                               (UnityEngine_GameObject_o *)StrengthenedCnt,
                                                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                v27 = ServantSkillStrengthStatus_TypeInfo;
                v28 = (UISprite_o *)StrengthenedCnt;
                if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                  v27 = ServantSkillStrengthStatus_TypeInfo;
                }
                static_fields = v27->static_fields;
                if ( v24 >= v17 )
                {
                  if ( !v28 )
                    break;
                  v30 = 16LL;
                }
                else
                {
                  if ( !v28 )
                    break;
                  v30 = 8LL;
                }
                UISprite__set_spriteName(v28, *(System_String_o **)((char *)&static_fields->PATH + v30), 0LL);
                UIWidget__set_width((UIWidget_o *)v28, size.fields.m_X, 0LL);
                UIWidget__set_height((UIWidget_o *)v28, size.fields.m_Y, 0LL);
                UIWidget__set_depth((UIWidget_o *)v28, skillNameLabel->fields.mDepth, 0LL);
                GameObjectExtensions__SetLocalPositionX(v26, (float)v23, 0LL);
                StrengthenedCnt = (UnityEngine_Transform_o *)UnityEngine_GameObject__get_gameObject(v26, 0LL);
                if ( !StrengthenedCnt )
                  break;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)StrengthenedCnt, 1, 0LL);
                ++v24;
                v23 += offset;
                if ( v13 == v24 )
                  return;
              }
            }
          }
        }
      }
      sub_1B8880C(StrengthenedCnt, v15);
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
  ServantSkillStrengthStatus_c *v21; // x8
  UISprite_o *v22; // x24
  struct ServantSkillStrengthStatus_StaticFields *static_fields; // x8
  __int64 v24; // x9
  UnityEngine_GameObject_o *v25; // x25
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A56C9C & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&ServantSkillStrengthStatus_TypeInfo);
    sub_1B885B0(&StringLiteral_20185/*"icon_stateup"*/);
    byte_4A56C9C = 1;
  }
  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  if ( strengthStatus >= 1 )
  {
    v9 = skillRecord - 1;
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
                                                         (System_String_o *)StringLiteral_20185/*"icon_stateup"*/,
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
                    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                               gameObject,
                                                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    v21 = ServantSkillStrengthStatus_TypeInfo;
                    v22 = (UISprite_o *)gameObject;
                    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                      v21 = ServantSkillStrengthStatus_TypeInfo;
                    }
                    static_fields = v21->static_fields;
                    if ( v17 >= StrengthenedCnt )
                    {
                      if ( !v22 )
                        break;
                      v24 = 16LL;
                    }
                    else
                    {
                      if ( !v22 )
                        break;
                      v24 = 8LL;
                    }
                    UISprite__set_spriteName(v22, *(System_String_o **)((char *)&static_fields->PATH + v24), 0LL);
                    UIWidget__set_width((UIWidget_o *)v22, uISprite->fields.mWidth, 0LL);
                    UIWidget__set_height((UIWidget_o *)v22, uISprite->fields.mHeight, 0LL);
                    v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0LL);
                    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)uISprite,
                                                               0LL);
                    if ( !gameObject )
                      break;
                    v28 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
                    GameObjectExtensions__SetLocalScale(v25, v28, 0LL);
                    UIWidget__set_depth((UIWidget_o *)v22, uISprite->fields.mDepth, 0LL);
                    UIWidget__set_pivot((UIWidget_o *)v22, uISprite->fields.mPivot, 0LL);
                    GameObjectExtensions__SetLocalPosition_33724120(v20, 0.0, v18 * (float)v17, 0LL);
                    gameObject = UnityEngine_GameObject__get_gameObject(v20, 0LL);
                    if ( !gameObject )
                      break;
                    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                    if ( v9 == ++v17 )
                      return;
                  }
                }
              }
            }
          }
        }
      }
      sub_1B8880C(gameObject, v12);
    }
  }
}