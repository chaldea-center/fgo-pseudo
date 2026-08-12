void ServantSkillStrengthStatus___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct ServantSkillStrengthStatus_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct ServantSkillStrengthStatus_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct ServantSkillStrengthStatus_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  struct ServantSkillStrengthStatus_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_596BB27 & 1) == 0 )
  {
    sub_2213A60(&ServantSkillStrengthStatus_TypeInfo);
    sub_2213A60(&StringLiteral_4791/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/);
    sub_2213A60(&StringLiteral_21216/*"icon_stateup_on"*/);
    sub_2213A60(&StringLiteral_21208/*"icon_skill_off"*/);
    sub_2213A60(&StringLiteral_21215/*"icon_stateup_off"*/);
    sub_2213A60(&StringLiteral_21209/*"icon_skill_on"*/);
    byte_596BB27 = 1;
  }
  v7 = StringLiteral_4791/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/;
  ServantSkillStrengthStatus_TypeInfo->static_fields->PATH = (struct System_String_o *)StringLiteral_4791/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantSkillStrengthStatus_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_21216/*"icon_stateup_on"*/;
  static_fields = ServantSkillStrengthStatus_TypeInfo->static_fields;
  static_fields->ICON_NAME_ON = (struct System_String_o *)StringLiteral_21216/*"icon_stateup_on"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->ICON_NAME_ON, v8, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_21215/*"icon_stateup_off"*/;
  v17 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v17->ICON_NAME_OFF = (struct System_String_o *)StringLiteral_21215/*"icon_stateup_off"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->ICON_NAME_OFF, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_21209/*"icon_skill_on"*/;
  v25 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v25->ICON_SKILL_ON = (struct System_String_o *)StringLiteral_21209/*"icon_skill_on"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->ICON_SKILL_ON, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_21208/*"icon_skill_off"*/;
  v33 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v33->ICON_SKILL_OFF = (struct System_String_o *)StringLiteral_21208/*"icon_skill_off"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->ICON_SKILL_OFF, v32, v34, v35, v36, v37, v38, v39);
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
  int32_t v2; // w8

  if ( strengthStatus == 99 )
    v2 = 0;
  else
    v2 = strengthStatus;
  if ( strengthStatus )
    return v2;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantSkillStrengthStatus__GetStrengthenedCnt(
        int32_t strengthStatus,
        int32_t skillRecord,
        const MethodInfo *method)
{
  int v5; // w8

  if ( (byte_596BB26 & 1) == 0 )
  {
    sub_2213A60(&ServantSkillStrengthStatus_TypeInfo);
    byte_596BB26 = 1;
  }
  if ( !*(&ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, *(_QWORD *)&skillRecord, method);
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
  int v20; // w24
  int32_t v21; // s8
  float x; // s0
  float v23; // s9
  int32_t mAlignment; // w8
  float v25; // s8
  UnityEngine_GameObject_o *gameObject; // x26
  int v27; // w20
  int v28; // w23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v30; // x27
  __int64 v31; // x2
  UISprite_o *v32; // x28
  int v33; // w9
  System_String_o **p_ICON_NAME_OFF; // x8
  float v35; // s9
  UnityEngine_GameObject_o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  UnityEngine_GameObject_o *v39; // x0
  int v40; // [xsp+Ch] [xbp-84h]
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596BB24 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantSkillStrengthStatus_TypeInfo);
    sub_2213A60(&StringLiteral_21214/*"icon_stateup"*/);
    byte_596BB24 = 1;
  }
  if ( !*(&ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, skillNameLabel, *(_QWORD *)&strengthStatus);
  if ( strengthStatus < 1 || (v40 = skillRecord - 1, skillRecord - 1 <= 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, skillNameLabel, *(_QWORD *)&strengthStatus);
    IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)addLabel, 0, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( !skillNameLabel || !addLabel )
        goto LABEL_63;
      v19 = System_String__Concat_75651716(skillNameLabel->fields.mText, addLabel->fields.mText, 0);
      UILabel__set_text(skillNameLabel, v19, 0);
    }
    if ( maxLabelWidth >= 1 )
    {
      if ( !skillNameLabel )
        goto LABEL_63;
      UILabel__SetCondensedScale(skillNameLabel, maxLabelWidth, 0, 0);
    }
    return;
  }
  if ( maxLabelWidth >= 1 )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, skillNameLabel, *(_QWORD *)&strengthStatus);
    IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)addLabel, 0, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      goto LABEL_13;
    if ( !addLabel )
      goto LABEL_63;
    IsNullOrEmpty = (UnityEngine_Transform_o *)System_String__IsNullOrEmpty(addLabel->fields.mText, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
    {
      mWidth = addLabel->fields.mWidth;
      if ( !skillNameLabel )
        goto LABEL_63;
    }
    else
    {
LABEL_13:
      mWidth = 0;
      if ( !skillNameLabel )
        goto LABEL_63;
    }
    UILabel__SetCondensedScale(skillNameLabel, maxLabelWidth - v40 * offset, mWidth, 0);
  }
  if ( !*(&ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, skillNameLabel, *(_QWORD *)&strengthStatus);
  IsNullOrEmpty = (UnityEngine_Transform_o *)ServantSkillStrengthStatus__GetStrengthenedCnt(
                                               strengthStatus,
                                               skillRecord,
                                               *(const MethodInfo **)&strengthStatus);
  if ( !skillNameLabel )
    goto LABEL_63;
  v20 = (int)IsNullOrEmpty;
  v21 = skillNameLabel->fields.mWidth;
  x = UILabel__get_printedSize(skillNameLabel, 0).fields.x;
  if ( x <= (float)v21 )
    v23 = x;
  else
    v23 = (float)v21;
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
    goto LABEL_63;
  v43.fields.y = (float)y;
  v43.fields.z = 0.0;
  v43.fields.x = v25;
  UnityEngine_Transform__set_localPosition(IsNullOrEmpty, v43, 0);
  IsNullOrEmpty = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !IsNullOrEmpty )
    goto LABEL_63;
  IsNullOrEmpty = UnityEngine_Transform__Find(IsNullOrEmpty, (System_String_o *)StringLiteral_21214/*"icon_stateup"*/, 0);
  if ( !IsNullOrEmpty )
    goto LABEL_63;
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
      goto LABEL_63;
    v30 = (UnityEngine_GameObject_o *)IsNullOrEmpty;
    IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)IsNullOrEmpty,
                                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v32 = (UISprite_o *)IsNullOrEmpty;
    v33 = *(&ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished + 1);
    if ( v28 >= v20 )
    {
      if ( !v33 )
        j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, v17, v31);
      if ( !v32 )
        goto LABEL_63;
      p_ICON_NAME_OFF = &ServantSkillStrengthStatus_TypeInfo->static_fields->ICON_NAME_OFF;
    }
    else
    {
      if ( !v33 )
        j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, v17, v31);
      if ( !v32 )
        goto LABEL_63;
      p_ICON_NAME_OFF = &ServantSkillStrengthStatus_TypeInfo->static_fields->ICON_NAME_ON;
    }
    UISprite__set_spriteName(v32, *p_ICON_NAME_OFF, 0);
    UIWidget__set_width((UIWidget_o *)v32, size.fields.m_X, 0);
    UIWidget__set_height((UIWidget_o *)v32, size.fields.m_Y, 0);
    UIWidget__set_depth((UIWidget_o *)v32, skillNameLabel->fields.mDepth, 0);
    GameObjectExtensions__SetLocalPositionX(v30, (float)v27, 0);
    IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_GameObject__get_gameObject(v30, 0);
    if ( !IsNullOrEmpty )
      goto LABEL_63;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 1, 0);
    ++v28;
    v27 += offset;
  }
  while ( v40 != v28 );
  IsNullOrEmpty = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillNameLabel, 0);
  if ( !IsNullOrEmpty )
LABEL_63:
    sub_2213CDC(IsNullOrEmpty, v17);
  v35 = 1.0 / COERCE_FLOAT(UnityEngine_Transform__get_localScale(IsNullOrEmpty, 0));
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalScaleX(v36, v35, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37, v38);
  IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)addLabel, 0, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( !addLabel )
      goto LABEL_63;
    v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)addLabel, 0);
    GameObjectExtensions__SetLocalPositionX(v39, v25 + (float)((float)(v35 * (float)offset) * (float)v40), 0);
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
  int v17; // w29
  float v18; // s8
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v20; // x23
  __int64 v21; // x2
  UISprite_o *v22; // x24
  int v23; // w9
  System_String_o **p_ICON_NAME_OFF; // x8
  UnityEngine_GameObject_o *v25; // x25
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596BB25 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&ServantSkillStrengthStatus_TypeInfo);
    sub_2213A60(&StringLiteral_21214/*"icon_stateup"*/);
    byte_596BB25 = 1;
  }
  if ( !*(&ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, uISprite, *(_QWORD *)&strengthStatus);
  if ( strengthStatus >= 1 )
  {
    v9 = skillRecord - 1;
    if ( skillRecord - 1 >= 1 )
    {
      if ( !*(&ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, uISprite, *(_QWORD *)&strengthStatus);
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
                                                         (System_String_o *)StringLiteral_21214/*"icon_stateup"*/,
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
                  v17 = 0;
                  v18 = (float)(COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_localScale(
                                                       (UnityEngine_Transform_o *)gameObject,
                                                       0).fields.y))
                              * (float)mHeight)
                      * 0.75;
                  while ( 1 )
                  {
                    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
                    gameObject = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v16, transform, 0, 0);
                    if ( !gameObject )
                      break;
                    v20 = gameObject;
                    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                               gameObject,
                                                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
                    v22 = (UISprite_o *)gameObject;
                    v23 = *(&ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished + 1);
                    if ( v17 >= StrengthenedCnt )
                    {
                      if ( !v23 )
                        j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, v12, v21);
                      if ( !v22 )
                        break;
                      p_ICON_NAME_OFF = &ServantSkillStrengthStatus_TypeInfo->static_fields->ICON_NAME_OFF;
                    }
                    else
                    {
                      if ( !v23 )
                        j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, v12, v21);
                      if ( !v22 )
                        break;
                      p_ICON_NAME_OFF = &ServantSkillStrengthStatus_TypeInfo->static_fields->ICON_NAME_ON;
                    }
                    UISprite__set_spriteName(v22, *p_ICON_NAME_OFF, 0);
                    UIWidget__set_width((UIWidget_o *)v22, uISprite->fields.mWidth, 0);
                    UIWidget__set_height((UIWidget_o *)v22, uISprite->fields.mHeight, 0);
                    v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0);
                    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)uISprite,
                                                               0);
                    if ( !gameObject )
                      break;
                    localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
                    GameObjectExtensions__SetLocalScale(v25, localScale, 0);
                    UIWidget__set_depth((UIWidget_o *)v22, uISprite->fields.mDepth, 0);
                    UIWidget__set_pivot((UIWidget_o *)v22, uISprite->fields.mPivot, 0);
                    GameObjectExtensions__SetLocalPosition_42891516(v20, 0.0, v18 * (float)v17, 0);
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
      sub_2213CDC(gameObject, v12);
    }
  }
}