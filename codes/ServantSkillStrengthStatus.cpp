void ServantSkillStrengthStatus___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct ServantSkillStrengthStatus_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct ServantSkillStrengthStatus_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  struct ServantSkillStrengthStatus_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  struct ServantSkillStrengthStatus_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7

  if ( (byte_4D288C2 & 1) == 0 )
  {
    sub_1C94098(&ServantSkillStrengthStatus_TypeInfo);
    sub_1C94098(&StringLiteral_4616/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/);
    sub_1C94098(&StringLiteral_20410/*"icon_stateup_on"*/);
    sub_1C94098(&StringLiteral_20402/*"icon_skill_off"*/);
    sub_1C94098(&StringLiteral_20409/*"icon_stateup_off"*/);
    sub_1C94098(&StringLiteral_20403/*"icon_skill_on"*/);
    byte_4D288C2 = 1;
  }
  ServantSkillStrengthStatus_TypeInfo->static_fields->PATH = (struct System_String_o *)StringLiteral_4616/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)ServantSkillStrengthStatus_TypeInfo->static_fields,
    StringLiteral_4616/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_20410/*"icon_stateup_on"*/;
  static_fields = ServantSkillStrengthStatus_TypeInfo->static_fields;
  static_fields->ICON_NAME_ON = (struct System_String_o *)StringLiteral_20410/*"icon_stateup_on"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->ICON_NAME_ON, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_20409/*"icon_stateup_off"*/;
  v16 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v16->ICON_NAME_OFF = (struct System_String_o *)StringLiteral_20409/*"icon_stateup_off"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v16->ICON_NAME_OFF, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_20403/*"icon_skill_on"*/;
  v24 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v24->ICON_SKILL_ON = (struct System_String_o *)StringLiteral_20403/*"icon_skill_on"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v24->ICON_SKILL_ON, v23, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_20402/*"icon_skill_off"*/;
  v32 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v32->ICON_SKILL_OFF = (struct System_String_o *)StringLiteral_20402/*"icon_skill_off"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v32->ICON_SKILL_OFF, v31, v33, v34, v35, v36, v37, v38);
}


void ServantSkillStrengthStatus___ctor(ServantSkillStrengthStatus_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


int32_t ServantSkillStrengthStatus__GetIconCnt(int32_t skillRecord, const MethodInfo *method)
{
  return skillRecord - 1;
}


int32_t ServantSkillStrengthStatus__GetRestStrengtdCnt(int32_t strengthStatus, const MethodInfo *method)
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


int32_t ServantSkillStrengthStatus__GetStrengthenedCnt(
        int32_t strengthStatus,
        int32_t skillRecord,
        const MethodInfo *method)
{
  int v5; // w8

  if ( (byte_4D288C1 & 1) == 0 )
  {
    sub_1C94098(&ServantSkillStrengthStatus_TypeInfo);
    byte_4D288C1 = 1;
  }
  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  v5 = -1;
  if ( strengthStatus && strengthStatus != 99 )
    v5 = ~strengthStatus;
  return v5 + skillRecord;
}


// local variable allocation has failed, the output may be wrong!
void ServantSkillStrengthStatus__Set(
        ServantSkillStrengthStatus_o *this,
        UILabel_o *skillNameLabel,
        int32_t strengthStatus,
        int32_t skillRecord,
        int32_t offset,
        int32_t y,
        UnityEngine_Vector2Int_o size,
        int32_t maxLabelWidth,
        UILabel_o *addLabel,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *IsNullOrEmpty; // x0
  __int64 v17; // x1
  int32_t mWidth; // w2
  System_String_o *v19; // x0
  int32_t v20; // s8
  int v21; // w24
  float x; // s0
  float v23; // s9
  int32_t mAlignment; // w8
  float v25; // s8
  UnityEngine_GameObject_o *gameObject; // x26
  int v27; // w19
  int v28; // w20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v30; // x27
  ServantSkillStrengthStatus_c *v31; // x8
  UISprite_o *v32; // x28
  struct ServantSkillStrengthStatus_StaticFields *static_fields; // x8
  __int64 v34; // x9
  float v35; // s9
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  int v38; // [xsp+Ch] [xbp-84h]
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D288BF & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&ServantSkillStrengthStatus_TypeInfo);
    sub_1C94098(&StringLiteral_20408/*"icon_stateup"*/);
    byte_4D288BF = 1;
  }
  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  if ( strengthStatus < 1 || (v38 = skillRecord - 1, skillRecord - 1 <= 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)addLabel, 0, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( !skillNameLabel || !addLabel )
        goto LABEL_61;
      v19 = System_String__Concat_64417744(skillNameLabel->fields.mText, addLabel->fields.mText, 0);
      UILabel__set_text(skillNameLabel, v19, 0);
    }
    if ( maxLabelWidth >= 1 )
    {
      if ( !skillNameLabel )
        goto LABEL_61;
      UILabel__SetCondensedScale(skillNameLabel, maxLabelWidth, 0, 0);
    }
    return;
  }
  if ( maxLabelWidth >= 1 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)addLabel, 0, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      goto LABEL_13;
    if ( !addLabel )
      goto LABEL_61;
    IsNullOrEmpty = (UnityEngine_Transform_o *)System_String__IsNullOrEmpty(addLabel->fields.mText, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      mWidth = addLabel->fields.mWidth;
      if ( !skillNameLabel )
        goto LABEL_61;
    }
    else
    {
LABEL_13:
      mWidth = 0;
      if ( !skillNameLabel )
        goto LABEL_61;
    }
    UILabel__SetCondensedScale(skillNameLabel, maxLabelWidth - v38 * offset, mWidth, 0);
  }
  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  IsNullOrEmpty = (UnityEngine_Transform_o *)ServantSkillStrengthStatus__GetStrengthenedCnt(
                                               strengthStatus,
                                               skillRecord,
                                               *(const MethodInfo **)&strengthStatus);
  if ( !skillNameLabel )
    goto LABEL_61;
  v20 = skillNameLabel->fields.mWidth;
  v21 = (int)IsNullOrEmpty;
  x = UILabel__get_printedSize(skillNameLabel, 0).fields.x;
  if ( x <= (float)v20 )
    v23 = x;
  else
    v23 = (float)v20;
  if ( System_String__IsNullOrEmpty(skillNameLabel->fields.mText, 0) )
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
  IsNullOrEmpty = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !IsNullOrEmpty )
    goto LABEL_61;
  v41.fields.y = (float)y;
  v41.fields.z = 0.0;
  v41.fields.x = v25;
  UnityEngine_Transform__set_localPosition(IsNullOrEmpty, v41, 0);
  IsNullOrEmpty = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !IsNullOrEmpty )
    goto LABEL_61;
  IsNullOrEmpty = UnityEngine_Transform__Find(IsNullOrEmpty, (System_String_o *)StringLiteral_20408/*"icon_stateup"*/, 0);
  if ( !IsNullOrEmpty )
    goto LABEL_61;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0);
  v27 = 0;
  v28 = 0;
  do
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    IsNullOrEmpty = (UnityEngine_Transform_o *)BaseMonoBehaviour__createObject(
                                                 (BaseMonoBehaviour_o *)this,
                                                 gameObject,
                                                 transform,
                                                 0,
                                                 0);
    if ( !IsNullOrEmpty )
      goto LABEL_61;
    v30 = (UnityEngine_GameObject_o *)IsNullOrEmpty;
    IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)IsNullOrEmpty,
                                                 (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v31 = ServantSkillStrengthStatus_TypeInfo;
    v32 = (UISprite_o *)IsNullOrEmpty;
    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
      v31 = ServantSkillStrengthStatus_TypeInfo;
    }
    static_fields = v31->static_fields;
    if ( v28 >= v21 )
    {
      if ( !v32 )
        goto LABEL_61;
      v34 = 16;
    }
    else
    {
      if ( !v32 )
        goto LABEL_61;
      v34 = 8;
    }
    UISprite__set_spriteName(v32, *(System_String_o **)((char *)&static_fields->PATH + v34), 0);
    UIWidget__set_width((UIWidget_o *)v32, size.fields.m_X, 0);
    UIWidget__set_height((UIWidget_o *)v32, size.fields.m_Y, 0);
    UIWidget__set_depth((UIWidget_o *)v32, skillNameLabel->fields.mDepth, 0);
    GameObjectExtensions__SetLocalPositionX(v30, (float)v27, 0);
    IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_GameObject__get_gameObject(v30, 0);
    if ( !IsNullOrEmpty )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 1, 0);
    ++v28;
    v27 += offset;
  }
  while ( v38 != v28 );
  IsNullOrEmpty = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillNameLabel, 0);
  if ( !IsNullOrEmpty )
LABEL_61:
    sub_1C942F0(IsNullOrEmpty, v17);
  v35 = 1.0 / COERCE_FLOAT(UnityEngine_Transform__get_localScale(IsNullOrEmpty, 0));
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalScaleX(v36, v35, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)addLabel, 0, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( !addLabel )
      goto LABEL_61;
    v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)addLabel, 0);
    GameObjectExtensions__SetLocalPositionX(v37, v25 + (float)((float)(v35 * (float)offset) * (float)v38), 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantSkillStrengthStatus__SetVertical(
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

  if ( (byte_4D288C0 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C94098(&ServantSkillStrengthStatus_TypeInfo);
    sub_1C94098(&StringLiteral_20408/*"icon_stateup"*/);
    byte_4D288C0 = 1;
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
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( uISprite )
      {
        v13 = gameObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)uISprite, 0);
        if ( gameObject )
        {
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
          if ( gameObject )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
            GameObjectExtensions__SetLocalPosition(v13, localPosition, 0);
            gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
            if ( gameObject )
            {
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(
                                                         (UnityEngine_Transform_o *)gameObject,
                                                         (System_String_o *)StringLiteral_20408/*"icon_stateup"*/,
                                                         0);
              if ( gameObject )
              {
                v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                mHeight = uISprite->fields.mHeight;
                v16 = v14;
                gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)uISprite,
                                                           0);
                if ( gameObject )
                {
                  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
                  v17 = 0;
                  v18 = (float)(localScale.fields.y * (float)mHeight) * 0.75;
                  while ( 1 )
                  {
                    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
                    gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v16, transform, 0, 0);
                    if ( !gameObject )
                      break;
                    v20 = gameObject;
                    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                               gameObject,
                                                               (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                      v24 = 16;
                    }
                    else
                    {
                      if ( !v22 )
                        break;
                      v24 = 8;
                    }
                    UISprite__set_spriteName(v22, *(System_String_o **)((char *)&static_fields->PATH + v24), 0);
                    UIWidget__set_width((UIWidget_o *)v22, uISprite->fields.mWidth, 0);
                    UIWidget__set_height((UIWidget_o *)v22, uISprite->fields.mHeight, 0);
                    v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0);
                    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)uISprite,
                                                               0);
                    if ( !gameObject )
                      break;
                    v28 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
                    GameObjectExtensions__SetLocalScale(v25, v28, 0);
                    UIWidget__set_depth((UIWidget_o *)v22, uISprite->fields.mDepth, 0);
                    UIWidget__set_pivot((UIWidget_o *)v22, uISprite->fields.mPivot, 0);
                    GameObjectExtensions__SetLocalPosition_36798812(v20, 0.0, v18 * (float)v17, 0);
                    gameObject = UnityEngine_GameObject__get_gameObject(v20, 0);
                    if ( !gameObject )
                      break;
                    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
                    if ( v9 == ++v17 )
                      return;
                  }
                }
              }
            }
          }
        }
      }
      sub_1C942F0(gameObject, v12);
    }
  }
}