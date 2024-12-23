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

  if ( (byte_4B62375 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantSkillStrengthStatus_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_4721/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/, v2);
    sub_1BE4ACC(&StringLiteral_20469/*"icon_stateup_on"*/, v3);
    sub_1BE4ACC(&StringLiteral_20461/*"icon_skill_off"*/, v4);
    sub_1BE4ACC(&StringLiteral_20468/*"icon_stateup_off"*/, v5);
    sub_1BE4ACC(&StringLiteral_20462/*"icon_skill_on"*/, v6);
    byte_4B62375 = 1;
  }
  ServantSkillStrengthStatus_TypeInfo->static_fields->PATH = (struct System_String_o *)StringLiteral_4721/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/;
  sub_1BE4A70(ServantSkillStrengthStatus_TypeInfo->static_fields);
  static_fields = ServantSkillStrengthStatus_TypeInfo->static_fields;
  static_fields->ICON_NAME_ON = (struct System_String_o *)StringLiteral_20469/*"icon_stateup_on"*/;
  sub_1BE4A70(&static_fields->ICON_NAME_ON);
  v8 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v8->ICON_NAME_OFF = (struct System_String_o *)StringLiteral_20468/*"icon_stateup_off"*/;
  sub_1BE4A70(&v8->ICON_NAME_OFF);
  v9 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v9->ICON_SKILL_ON = (struct System_String_o *)StringLiteral_20462/*"icon_skill_on"*/;
  sub_1BE4A70(&v9->ICON_SKILL_ON);
  v10 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v10->ICON_SKILL_OFF = (struct System_String_o *)StringLiteral_20461/*"icon_skill_off"*/;
  sub_1BE4A70(&v10->ICON_SKILL_OFF);
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

  if ( (byte_4B62374 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantSkillStrengthStatus_TypeInfo, *(_QWORD *)&skillRecord);
    byte_4B62374 = 1;
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
        int32_t maxLabelWidth,
        UILabel_o *addLabel,
        bool isFixScale,
        const MethodInfo *method)
{
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  int32_t v20; // w28
  UnityEngine_Transform_o *IsNullOrEmpty; // x0
  __int64 v22; // x1
  int v23; // w8
  int32_t mWidth; // s8
  int v25; // w24
  float x; // s0
  float v27; // s9
  int32_t mAlignment; // w8
  float v29; // s8
  System_String_o *v30; // x0
  UnityEngine_GameObject_o *gameObject; // x26
  int v32; // w19
  int v33; // w20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v35; // x27
  ServantSkillStrengthStatus_c *v36; // x8
  UISprite_o *v37; // x28
  struct ServantSkillStrengthStatus_StaticFields *static_fields; // x8
  __int64 v39; // x9
  float v40; // s9
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  int v43; // [xsp+1Ch] [xbp-84h]
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B62372 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, skillNameLabel);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v17);
    sub_1BE4ACC(&ServantSkillStrengthStatus_TypeInfo, v18);
    sub_1BE4ACC(&StringLiteral_20467/*"icon_stateup"*/, v19);
    byte_4B62372 = 1;
  }
  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  if ( strengthStatus < 1 || (v43 = skillRecord - 1, skillRecord - 1 <= 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)addLabel,
                                                 0LL,
                                                 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( !skillNameLabel || !addLabel )
        goto LABEL_68;
      v30 = System_String__Concat_62698808(skillNameLabel->fields.mText, addLabel->fields.mText, 0LL);
      UILabel__set_text(skillNameLabel, v30, 0LL);
    }
    if ( maxLabelWidth >= 1 )
    {
      if ( skillNameLabel )
      {
        UILabel__SetCondensedScale(skillNameLabel, maxLabelWidth, 0, 0LL);
        return;
      }
      goto LABEL_68;
    }
  }
  else
  {
    if ( maxLabelWidth >= 1 )
    {
      if ( isFixScale )
        v20 = 0;
      else
        v20 = v43 * offset;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)addLabel,
                                                   0LL,
                                                   0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        if ( !addLabel )
          goto LABEL_68;
        IsNullOrEmpty = (UnityEngine_Transform_o *)System_String__IsNullOrEmpty(addLabel->fields.mText, 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
          v20 += addLabel->fields.mWidth;
      }
      if ( !skillNameLabel )
LABEL_68:
        sub_1BE4D28(IsNullOrEmpty, v22);
      if ( isFixScale )
        v23 = v43 * offset;
      else
        v23 = 0;
      UILabel__SetCondensedScale(skillNameLabel, maxLabelWidth - v23, v20, 0LL);
    }
    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
    IsNullOrEmpty = (UnityEngine_Transform_o *)ServantSkillStrengthStatus__GetStrengthenedCnt(
                                                 strengthStatus,
                                                 skillRecord,
                                                 *(const MethodInfo **)&strengthStatus);
    if ( !skillNameLabel )
      goto LABEL_68;
    mWidth = skillNameLabel->fields.mWidth;
    v25 = (int)IsNullOrEmpty;
    x = UILabel__get_printedSize(skillNameLabel, 0LL).fields.x;
    if ( x <= (float)mWidth )
      v27 = x;
    else
      v27 = (float)mWidth;
    if ( System_String__IsNullOrEmpty(skillNameLabel->fields.mText, 0LL) )
      v27 = v27 - (float)skillNameLabel->fields.mSpacingX;
    mAlignment = skillNameLabel->fields.mAlignment;
    if ( mAlignment == 3 )
    {
      v29 = -(float)(v27 + 2.0);
    }
    else if ( mAlignment == 2 )
    {
      v29 = (float)(v27 * 0.5) + 2.0;
    }
    else
    {
      v29 = -2.0;
      if ( mAlignment == 1 )
        v29 = v27 + 2.0;
    }
    IsNullOrEmpty = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !IsNullOrEmpty )
      goto LABEL_68;
    v46.fields.y = (float)y;
    v46.fields.z = 0.0;
    v46.fields.x = v29;
    UnityEngine_Transform__set_localPosition(IsNullOrEmpty, v46, 0LL);
    IsNullOrEmpty = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !IsNullOrEmpty )
      goto LABEL_68;
    IsNullOrEmpty = UnityEngine_Transform__Find(IsNullOrEmpty, (System_String_o *)StringLiteral_20467/*"icon_stateup"*/, 0LL);
    if ( !IsNullOrEmpty )
      goto LABEL_68;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0LL);
    v32 = 0;
    v33 = 0;
    do
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      IsNullOrEmpty = (UnityEngine_Transform_o *)BaseMonoBehaviour__createObject(
                                                   (BaseMonoBehaviour_o *)this,
                                                   gameObject,
                                                   transform,
                                                   0LL,
                                                   0LL);
      if ( !IsNullOrEmpty )
        goto LABEL_68;
      v35 = (UnityEngine_GameObject_o *)IsNullOrEmpty;
      IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)IsNullOrEmpty,
                                                   (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      v36 = ServantSkillStrengthStatus_TypeInfo;
      v37 = (UISprite_o *)IsNullOrEmpty;
      if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
        v36 = ServantSkillStrengthStatus_TypeInfo;
      }
      static_fields = v36->static_fields;
      if ( v33 >= v25 )
      {
        if ( !v37 )
          goto LABEL_68;
        v39 = 16LL;
      }
      else
      {
        if ( !v37 )
          goto LABEL_68;
        v39 = 8LL;
      }
      UISprite__set_spriteName(v37, *(System_String_o **)((char *)&static_fields->PATH + v39), 0LL);
      UIWidget__set_width((UIWidget_o *)v37, size.fields.m_X, 0LL);
      UIWidget__set_height((UIWidget_o *)v37, size.fields.m_Y, 0LL);
      UIWidget__set_depth((UIWidget_o *)v37, skillNameLabel->fields.mDepth, 0LL);
      GameObjectExtensions__SetLocalPositionX(v35, (float)v32, 0LL);
      IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_GameObject__get_gameObject(v35, 0LL);
      if ( !IsNullOrEmpty )
        goto LABEL_68;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 1, 0LL);
      ++v33;
      v32 += offset;
    }
    while ( v43 != v33 );
    v40 = 1.0;
    if ( isFixScale )
    {
      IsNullOrEmpty = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillNameLabel, 0LL);
      if ( !IsNullOrEmpty )
        goto LABEL_68;
      v40 = 1.0 / COERCE_FLOAT(UnityEngine_Transform__get_localScale(IsNullOrEmpty, 0LL));
      v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalScaleX(v41, v40, 0LL);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)addLabel,
                                                 0LL,
                                                 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( addLabel )
      {
        v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)addLabel, 0LL);
        GameObjectExtensions__SetLocalPositionX(v42, v29 + (float)((float)(v40 * (float)offset) * (float)v43), 0LL);
        return;
      }
      goto LABEL_68;
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

  if ( (byte_4B62373 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, uISprite);
    sub_1BE4ACC(&ServantSkillStrengthStatus_TypeInfo, v9);
    sub_1BE4ACC(&StringLiteral_20467/*"icon_stateup"*/, v10);
    byte_4B62373 = 1;
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
                                                         (System_String_o *)StringLiteral_20467/*"icon_stateup"*/,
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
                                                               (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                    GameObjectExtensions__SetLocalPosition_34486792(v22, 0.0, v20 * (float)v19, 0LL);
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
      sub_1BE4D28(gameObject, v14);
    }
  }
}