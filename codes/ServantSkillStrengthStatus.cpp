void __fastcall ServantSkillStrengthStatus___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  int64_t v7; // x1
  struct ServantSkillStrengthStatus_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x1
  struct ServantSkillStrengthStatus_StaticFields *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x1
  struct ServantSkillStrengthStatus_StaticFields *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x1
  struct ServantSkillStrengthStatus_StaticFields *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4BD83F4 & 1) == 0 )
  {
    sub_1C21E38(&ServantSkillStrengthStatus_TypeInfo);
    sub_1C21E38(&StringLiteral_4737/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/);
    sub_1C21E38(&StringLiteral_20542/*"icon_stateup_on"*/);
    sub_1C21E38(&StringLiteral_20534/*"icon_skill_off"*/);
    sub_1C21E38(&StringLiteral_20541/*"icon_stateup_off"*/);
    sub_1C21E38(&StringLiteral_20535/*"icon_skill_on"*/);
    byte_4BD83F4 = 1;
  }
  ServantSkillStrengthStatus_TypeInfo->static_fields->PATH = (struct System_String_o *)StringLiteral_4737/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ServantSkillStrengthStatus_TypeInfo->static_fields,
    StringLiteral_4737/*"CommonUI/ServantStatus/ServantSkillStrengthStatusPrefab"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_20542/*"icon_stateup_on"*/;
  static_fields = ServantSkillStrengthStatus_TypeInfo->static_fields;
  static_fields->ICON_NAME_ON = (struct System_String_o *)StringLiteral_20542/*"icon_stateup_on"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->ICON_NAME_ON, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_20541/*"icon_stateup_off"*/;
  v16 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v16->ICON_NAME_OFF = (struct System_String_o *)StringLiteral_20541/*"icon_stateup_off"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->ICON_NAME_OFF, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_20535/*"icon_skill_on"*/;
  v24 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v24->ICON_SKILL_ON = (struct System_String_o *)StringLiteral_20535/*"icon_skill_on"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v24->ICON_SKILL_ON, v23, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_20534/*"icon_skill_off"*/;
  v32 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v32->ICON_SKILL_OFF = (struct System_String_o *)StringLiteral_20534/*"icon_skill_off"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v32->ICON_SKILL_OFF, v31, v33, v34, v35, v36, v37, v38);
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

  if ( (byte_4BD83F3 & 1) == 0 )
  {
    sub_1C21E38(&ServantSkillStrengthStatus_TypeInfo);
    byte_4BD83F3 = 1;
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
  int32_t v17; // w28
  UnityEngine_Transform_o *IsNullOrEmpty; // x0
  __int64 v19; // x1
  int v20; // w8
  int32_t mWidth; // s8
  int v22; // w24
  float x; // s0
  float v24; // s9
  int32_t mAlignment; // w8
  float v26; // s8
  System_String_o *v27; // x0
  UnityEngine_GameObject_o *gameObject; // x26
  int v29; // w19
  int v30; // w20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v32; // x27
  ServantSkillStrengthStatus_c *v33; // x8
  UISprite_o *v34; // x28
  struct ServantSkillStrengthStatus_StaticFields *static_fields; // x8
  __int64 v36; // x9
  float v37; // s9
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  int v40; // [xsp+1Ch] [xbp-84h]
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD83F1 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ServantSkillStrengthStatus_TypeInfo);
    sub_1C21E38(&StringLiteral_20540/*"icon_stateup"*/);
    byte_4BD83F1 = 1;
  }
  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  if ( strengthStatus < 1 || (v40 = skillRecord - 1, skillRecord - 1 <= 0) )
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
      v27 = System_String__Concat_63115476(skillNameLabel->fields.mText, addLabel->fields.mText, 0LL);
      UILabel__set_text(skillNameLabel, v27, 0LL);
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
        v17 = 0;
      else
        v17 = v40 * offset;
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
          v17 += addLabel->fields.mWidth;
      }
      if ( !skillNameLabel )
LABEL_68:
        sub_1C22094(IsNullOrEmpty, v19);
      if ( isFixScale )
        v20 = v40 * offset;
      else
        v20 = 0;
      UILabel__SetCondensedScale(skillNameLabel, maxLabelWidth - v20, v17, 0LL);
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
    v22 = (int)IsNullOrEmpty;
    x = UILabel__get_printedSize(skillNameLabel, 0LL).fields.x;
    if ( x <= (float)mWidth )
      v24 = x;
    else
      v24 = (float)mWidth;
    if ( System_String__IsNullOrEmpty(skillNameLabel->fields.mText, 0LL) )
      v24 = v24 - (float)skillNameLabel->fields.mSpacingX;
    mAlignment = skillNameLabel->fields.mAlignment;
    if ( mAlignment == 3 )
    {
      v26 = -(float)(v24 + 2.0);
    }
    else if ( mAlignment == 2 )
    {
      v26 = (float)(v24 * 0.5) + 2.0;
    }
    else
    {
      v26 = -2.0;
      if ( mAlignment == 1 )
        v26 = v24 + 2.0;
    }
    IsNullOrEmpty = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !IsNullOrEmpty )
      goto LABEL_68;
    v43.fields.y = (float)y;
    v43.fields.z = 0.0;
    v43.fields.x = v26;
    UnityEngine_Transform__set_localPosition(IsNullOrEmpty, v43, 0LL);
    IsNullOrEmpty = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !IsNullOrEmpty )
      goto LABEL_68;
    IsNullOrEmpty = UnityEngine_Transform__Find(IsNullOrEmpty, (System_String_o *)StringLiteral_20540/*"icon_stateup"*/, 0LL);
    if ( !IsNullOrEmpty )
      goto LABEL_68;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0LL);
    v29 = 0;
    v30 = 0;
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
      v32 = (UnityEngine_GameObject_o *)IsNullOrEmpty;
      IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)IsNullOrEmpty,
                                                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      v33 = ServantSkillStrengthStatus_TypeInfo;
      v34 = (UISprite_o *)IsNullOrEmpty;
      if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
        v33 = ServantSkillStrengthStatus_TypeInfo;
      }
      static_fields = v33->static_fields;
      if ( v30 >= v22 )
      {
        if ( !v34 )
          goto LABEL_68;
        v36 = 16LL;
      }
      else
      {
        if ( !v34 )
          goto LABEL_68;
        v36 = 8LL;
      }
      UISprite__set_spriteName(v34, *(System_String_o **)((char *)&static_fields->PATH + v36), 0LL);
      UIWidget__set_width((UIWidget_o *)v34, size.fields.m_X, 0LL);
      UIWidget__set_height((UIWidget_o *)v34, size.fields.m_Y, 0LL);
      UIWidget__set_depth((UIWidget_o *)v34, skillNameLabel->fields.mDepth, 0LL);
      GameObjectExtensions__SetLocalPositionX(v32, (float)v29, 0LL);
      IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_GameObject__get_gameObject(v32, 0LL);
      if ( !IsNullOrEmpty )
        goto LABEL_68;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 1, 0LL);
      ++v30;
      v29 += offset;
    }
    while ( v40 != v30 );
    v37 = 1.0;
    if ( isFixScale )
    {
      IsNullOrEmpty = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillNameLabel, 0LL);
      if ( !IsNullOrEmpty )
        goto LABEL_68;
      v37 = 1.0 / COERCE_FLOAT(UnityEngine_Transform__get_localScale(IsNullOrEmpty, 0LL));
      v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SetLocalScaleX(v38, v37, 0LL);
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
        v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)addLabel, 0LL);
        GameObjectExtensions__SetLocalPositionX(v39, v26 + (float)((float)(v37 * (float)offset) * (float)v40), 0LL);
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

  if ( (byte_4BD83F2 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C21E38(&ServantSkillStrengthStatus_TypeInfo);
    sub_1C21E38(&StringLiteral_20540/*"icon_stateup"*/);
    byte_4BD83F2 = 1;
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
                                                         (System_String_o *)StringLiteral_20540/*"icon_stateup"*/,
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
                                                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                    GameObjectExtensions__SetLocalPosition_34797668(v20, 0.0, v18 * (float)v17, 0LL);
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
      sub_1C22094(gameObject, v12);
    }
  }
}