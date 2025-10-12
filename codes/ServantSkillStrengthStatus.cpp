void ServantSkillStrengthStatus___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct ServantSkillStrengthStatus_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct ServantSkillStrengthStatus_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct ServantSkillStrengthStatus_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  struct ServantSkillStrengthStatus_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C32DF3 & 1) == 0 )
  {
    sub_1C32C20(&ServantSkillStrengthStatus_TypeInfo);
    sub_1C32C20(&StringLiteral_4613/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/);
    sub_1C32C20(&StringLiteral_20236/*"icon_stateup_on"*/);
    sub_1C32C20(&StringLiteral_20228/*"icon_skill_off"*/);
    sub_1C32C20(&StringLiteral_20235/*"icon_stateup_off"*/);
    sub_1C32C20(&StringLiteral_20229/*"icon_skill_on"*/);
    byte_4C32DF3 = 1;
  }
  ServantSkillStrengthStatus_TypeInfo->static_fields->PATH = (struct System_String_o *)StringLiteral_4613/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)ServantSkillStrengthStatus_TypeInfo->static_fields, StringLiteral_4613/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/, v1, v2);
  v3 = StringLiteral_20236/*"icon_stateup_on"*/;
  static_fields = ServantSkillStrengthStatus_TypeInfo->static_fields;
  static_fields->ICON_NAME_ON = (struct System_String_o *)StringLiteral_20236/*"icon_stateup_on"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->ICON_NAME_ON, v3, v5, v6);
  v7 = StringLiteral_20235/*"icon_stateup_off"*/;
  v8 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v8->ICON_NAME_OFF = (struct System_String_o *)StringLiteral_20235/*"icon_stateup_off"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->ICON_NAME_OFF, v7, v9, v10);
  v11 = StringLiteral_20229/*"icon_skill_on"*/;
  v12 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v12->ICON_SKILL_ON = (struct System_String_o *)StringLiteral_20229/*"icon_skill_on"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v12->ICON_SKILL_ON, v11, v13, v14);
  v15 = StringLiteral_20228/*"icon_skill_off"*/;
  v16 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v16->ICON_SKILL_OFF = (struct System_String_o *)StringLiteral_20228/*"icon_skill_off"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v16->ICON_SKILL_OFF, v15, v17, v18);
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

  if ( (byte_4C32DF2 & 1) == 0 )
  {
    sub_1C32C20(&ServantSkillStrengthStatus_TypeInfo);
    byte_4C32DF2 = 1;
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
  int32_t mWidth; // w2
  System_String_o *v18; // x0
  int32_t v19; // s8
  int v20; // w24
  float x; // s0
  float v22; // s9
  int32_t mAlignment; // w8
  float v24; // s8
  UnityEngine_GameObject_o *gameObject; // x26
  int v26; // w19
  int v27; // w20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v29; // x27
  ServantSkillStrengthStatus_c *v30; // x8
  UISprite_o *v31; // x28
  struct ServantSkillStrengthStatus_StaticFields *static_fields; // x8
  __int64 v33; // x9
  float v34; // s9
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  int v37; // [xsp+Ch] [xbp-84h]
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C32DF0 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&ServantSkillStrengthStatus_TypeInfo);
    sub_1C32C20(&StringLiteral_20234/*"icon_stateup"*/);
    byte_4C32DF0 = 1;
  }
  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  if ( strengthStatus < 1 || (v37 = skillRecord - 1, skillRecord - 1 <= 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)addLabel, 0, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( !skillNameLabel || !addLabel )
        goto LABEL_61;
      v18 = System_String__Concat_63518544(skillNameLabel->fields.mText, addLabel->fields.mText, 0);
      UILabel__set_text(skillNameLabel, v18, 0);
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
    UILabel__SetCondensedScale(skillNameLabel, maxLabelWidth - v37 * offset, mWidth, 0);
  }
  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  IsNullOrEmpty = (UnityEngine_Transform_o *)ServantSkillStrengthStatus__GetStrengthenedCnt(
                                               strengthStatus,
                                               skillRecord,
                                               *(const MethodInfo **)&strengthStatus);
  if ( !skillNameLabel )
    goto LABEL_61;
  v19 = skillNameLabel->fields.mWidth;
  v20 = (int)IsNullOrEmpty;
  x = UILabel__get_printedSize(skillNameLabel, 0).fields.x;
  if ( x <= (float)v19 )
    v22 = x;
  else
    v22 = (float)v19;
  if ( System_String__IsNullOrEmpty(skillNameLabel->fields.mText, 0) )
    v22 = v22 - (float)skillNameLabel->fields.mSpacingX;
  mAlignment = skillNameLabel->fields.mAlignment;
  if ( mAlignment == 3 )
  {
    v24 = -(float)(v22 + 2.0);
  }
  else if ( mAlignment == 2 )
  {
    v24 = (float)(v22 * 0.5) + 2.0;
  }
  else
  {
    v24 = -2.0;
    if ( mAlignment == 1 )
      v24 = v22 + 2.0;
  }
  IsNullOrEmpty = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !IsNullOrEmpty )
    goto LABEL_61;
  v40.fields.y = (float)y;
  v40.fields.z = 0.0;
  v40.fields.x = v24;
  UnityEngine_Transform__set_localPosition(IsNullOrEmpty, v40, 0);
  IsNullOrEmpty = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !IsNullOrEmpty )
    goto LABEL_61;
  IsNullOrEmpty = UnityEngine_Transform__Find(IsNullOrEmpty, (System_String_o *)StringLiteral_20234/*"icon_stateup"*/, 0);
  if ( !IsNullOrEmpty )
    goto LABEL_61;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0);
  v26 = 0;
  v27 = 0;
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
    v29 = (UnityEngine_GameObject_o *)IsNullOrEmpty;
    IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)IsNullOrEmpty,
                                                 (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v30 = ServantSkillStrengthStatus_TypeInfo;
    v31 = (UISprite_o *)IsNullOrEmpty;
    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
      v30 = ServantSkillStrengthStatus_TypeInfo;
    }
    static_fields = v30->static_fields;
    if ( v27 >= v20 )
    {
      if ( !v31 )
        goto LABEL_61;
      v33 = 16;
    }
    else
    {
      if ( !v31 )
        goto LABEL_61;
      v33 = 8;
    }
    UISprite__set_spriteName(v31, *(System_String_o **)((char *)&static_fields->PATH + v33), 0);
    UIWidget__set_width((UIWidget_o *)v31, size.fields.m_X, 0);
    UIWidget__set_height((UIWidget_o *)v31, size.fields.m_Y, 0);
    UIWidget__set_depth((UIWidget_o *)v31, skillNameLabel->fields.mDepth, 0);
    GameObjectExtensions__SetLocalPositionX(v29, (float)v26, 0);
    IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_GameObject__get_gameObject(v29, 0);
    if ( !IsNullOrEmpty )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 1, 0);
    ++v27;
    v26 += offset;
  }
  while ( v37 != v27 );
  IsNullOrEmpty = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillNameLabel, 0);
  if ( !IsNullOrEmpty )
LABEL_61:
    sub_1C32E7C(IsNullOrEmpty);
  v34 = 1.0 / COERCE_FLOAT(UnityEngine_Transform__get_localScale(IsNullOrEmpty, 0));
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalScaleX(v35, v34, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)addLabel, 0, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( !addLabel )
      goto LABEL_61;
    v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)addLabel, 0);
    GameObjectExtensions__SetLocalPositionX(v36, v24 + (float)((float)(v34 * (float)offset) * (float)v37), 0);
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
  UnityEngine_GameObject_o *v12; // x22
  UnityEngine_GameObject_o *v13; // x0
  int32_t mHeight; // w23
  UnityEngine_GameObject_o *v15; // x22
  int v16; // w28
  float v17; // s8
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v19; // x23
  ServantSkillStrengthStatus_c *v20; // x8
  UISprite_o *v21; // x24
  struct ServantSkillStrengthStatus_StaticFields *static_fields; // x8
  __int64 v23; // x9
  UnityEngine_GameObject_o *v24; // x25
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C32DF1 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C32C20(&ServantSkillStrengthStatus_TypeInfo);
    sub_1C32C20(&StringLiteral_20234/*"icon_stateup"*/);
    byte_4C32DF1 = 1;
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
        v12 = gameObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)uISprite, 0);
        if ( gameObject )
        {
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
          if ( gameObject )
          {
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
            GameObjectExtensions__SetLocalPosition(v12, localPosition, 0);
            gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
            if ( gameObject )
            {
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__Find(
                                                         (UnityEngine_Transform_o *)gameObject,
                                                         (System_String_o *)StringLiteral_20234/*"icon_stateup"*/,
                                                         0);
              if ( gameObject )
              {
                v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                mHeight = uISprite->fields.mHeight;
                v15 = v13;
                gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)uISprite,
                                                           0);
                if ( gameObject )
                {
                  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
                  v16 = 0;
                  v17 = (float)(localScale.fields.y * (float)mHeight) * 0.75;
                  while ( 1 )
                  {
                    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
                    gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v15, transform, 0, 0);
                    if ( !gameObject )
                      break;
                    v19 = gameObject;
                    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                               gameObject,
                                                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    v20 = ServantSkillStrengthStatus_TypeInfo;
                    v21 = (UISprite_o *)gameObject;
                    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                      v20 = ServantSkillStrengthStatus_TypeInfo;
                    }
                    static_fields = v20->static_fields;
                    if ( v16 >= StrengthenedCnt )
                    {
                      if ( !v21 )
                        break;
                      v23 = 16;
                    }
                    else
                    {
                      if ( !v21 )
                        break;
                      v23 = 8;
                    }
                    UISprite__set_spriteName(v21, *(System_String_o **)((char *)&static_fields->PATH + v23), 0);
                    UIWidget__set_width((UIWidget_o *)v21, uISprite->fields.mWidth, 0);
                    UIWidget__set_height((UIWidget_o *)v21, uISprite->fields.mHeight, 0);
                    v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21, 0);
                    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)uISprite,
                                                               0);
                    if ( !gameObject )
                      break;
                    v27 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
                    GameObjectExtensions__SetLocalScale(v24, v27, 0);
                    UIWidget__set_depth((UIWidget_o *)v21, uISprite->fields.mDepth, 0);
                    UIWidget__set_pivot((UIWidget_o *)v21, uISprite->fields.mPivot, 0);
                    GameObjectExtensions__SetLocalPosition_36036760(v19, 0.0, v17 * (float)v16, 0);
                    gameObject = UnityEngine_GameObject__get_gameObject(v19, 0);
                    if ( !gameObject )
                      break;
                    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
                    if ( v9 == ++v16 )
                      return;
                  }
                }
              }
            }
          }
        }
      }
      sub_1C32E7C(gameObject);
    }
  }
}