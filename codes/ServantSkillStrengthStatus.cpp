void __fastcall ServantSkillStrengthStatus___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int64_t v13; // x1
  struct ServantSkillStrengthStatus_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  struct ServantSkillStrengthStatus_StaticFields *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x1
  struct ServantSkillStrengthStatus_StaticFields *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x1
  struct ServantSkillStrengthStatus_StaticFields *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4C1DDAF & 1) == 0 )
  {
    sub_1C3B764(&ServantSkillStrengthStatus_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_4725/*"Could not find schema information for the attribute '{0}'."*/, v8);
    sub_1C3B764(&StringLiteral_20588/*"java.lang.Long"*/, v9);
    sub_1C3B764(&StringLiteral_20580/*"java.lang"*/, v10);
    sub_1C3B764(&StringLiteral_20587/*"java.lang.Integer"*/, v11);
    sub_1C3B764(&StringLiteral_20581/*"java.lang.Boolean"*/, v12);
    byte_4C1DDAF = 1;
  }
  ServantSkillStrengthStatus_TypeInfo->static_fields->PATH = (struct System_String_o *)StringLiteral_4725/*"Could not find schema information for the attribute '{0}'."*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)ServantSkillStrengthStatus_TypeInfo->static_fields,
    StringLiteral_4725/*"Could not find schema information for the attribute '{0}'."*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v13 = StringLiteral_20588/*"java.lang.Long"*/;
  static_fields = ServantSkillStrengthStatus_TypeInfo->static_fields;
  static_fields->ICON_NAME_ON = (struct System_String_o *)StringLiteral_20588/*"java.lang.Long"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->ICON_NAME_ON, v13, v15, v16, v17, v18, v19, v20);
  v21 = StringLiteral_20587/*"java.lang.Integer"*/;
  v22 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v22->ICON_NAME_OFF = (struct System_String_o *)StringLiteral_20587/*"java.lang.Integer"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v22->ICON_NAME_OFF, v21, v23, v24, v25, v26, v27, v28);
  v29 = StringLiteral_20581/*"java.lang.Boolean"*/;
  v30 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v30->ICON_SKILL_ON = (struct System_String_o *)StringLiteral_20581/*"java.lang.Boolean"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v30->ICON_SKILL_ON, v29, v31, v32, v33, v34, v35, v36);
  v37 = StringLiteral_20580/*"java.lang"*/;
  v38 = ServantSkillStrengthStatus_TypeInfo->static_fields;
  v38->ICON_SKILL_OFF = (struct System_String_o *)StringLiteral_20580/*"java.lang"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v38->ICON_SKILL_OFF, v37, v39, v40, v41, v42, v43, v44);
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

  if ( (byte_4C1DDAE & 1) == 0 )
  {
    sub_1C3B764(&ServantSkillStrengthStatus_TypeInfo, *(_QWORD *)&skillRecord);
    byte_4C1DDAE = 1;
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
        const MethodInfo *method)
{
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_Transform_o *IsNullOrEmpty; // x0
  __int64 v20; // x1
  int32_t mWidth; // w2
  System_String_o *v22; // x0
  int32_t v23; // s8
  int v24; // w24
  float x; // s0
  float v26; // s9
  int32_t mAlignment; // w8
  float v28; // s8
  UnityEngine_GameObject_o *gameObject; // x26
  int v30; // w19
  int v31; // w20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v33; // x27
  ServantSkillStrengthStatus_c *v34; // x8
  UISprite_o *v35; // x28
  struct ServantSkillStrengthStatus_StaticFields *static_fields; // x8
  __int64 v37; // x9
  float v38; // s9
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  int v41; // [xsp+Ch] [xbp-84h]
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C1DDAC & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UISprite___, skillNameLabel);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v16);
    sub_1C3B764(&ServantSkillStrengthStatus_TypeInfo, v17);
    sub_1C3B764(&StringLiteral_20586/*"java.lang.Float"*/, v18);
    byte_4C1DDAC = 1;
  }
  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  if ( strengthStatus < 1 || (v41 = skillRecord - 1, skillRecord - 1 <= 0) )
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
        goto LABEL_61;
      v22 = System_String__Concat_63368612(skillNameLabel->fields.mText, addLabel->fields.mText, 0LL);
      UILabel__set_text(skillNameLabel, v22, 0LL);
    }
    if ( maxLabelWidth >= 1 )
    {
      if ( !skillNameLabel )
        goto LABEL_61;
      UILabel__SetCondensedScale(skillNameLabel, maxLabelWidth, 0, 0LL);
    }
    return;
  }
  if ( maxLabelWidth >= 1 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)addLabel,
                                                 0LL,
                                                 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      goto LABEL_13;
    if ( !addLabel )
      goto LABEL_61;
    IsNullOrEmpty = (UnityEngine_Transform_o *)System_String__IsNullOrEmpty(addLabel->fields.mText, 0LL);
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
    UILabel__SetCondensedScale(skillNameLabel, maxLabelWidth - v41 * offset, mWidth, 0LL);
  }
  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  IsNullOrEmpty = (UnityEngine_Transform_o *)ServantSkillStrengthStatus__GetStrengthenedCnt(
                                               strengthStatus,
                                               skillRecord,
                                               *(const MethodInfo **)&strengthStatus);
  if ( !skillNameLabel )
    goto LABEL_61;
  v23 = skillNameLabel->fields.mWidth;
  v24 = (int)IsNullOrEmpty;
  x = UILabel__get_printedSize(skillNameLabel, 0LL).fields.x;
  if ( x <= (float)v23 )
    v26 = x;
  else
    v26 = (float)v23;
  if ( System_String__IsNullOrEmpty(skillNameLabel->fields.mText, 0LL) )
    v26 = v26 - (float)skillNameLabel->fields.mSpacingX;
  mAlignment = skillNameLabel->fields.mAlignment;
  if ( mAlignment == 3 )
  {
    v28 = -(float)(v26 + 2.0);
  }
  else if ( mAlignment == 2 )
  {
    v28 = (float)(v26 * 0.5) + 2.0;
  }
  else
  {
    v28 = -2.0;
    if ( mAlignment == 1 )
      v28 = v26 + 2.0;
  }
  IsNullOrEmpty = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_61;
  v44.fields.y = (float)y;
  v44.fields.z = 0.0;
  v44.fields.x = v28;
  UnityEngine_Transform__set_localPosition(IsNullOrEmpty, v44, 0LL);
  IsNullOrEmpty = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_61;
  IsNullOrEmpty = UnityEngine_Transform__Find(IsNullOrEmpty, (System_String_o *)StringLiteral_20586/*"java.lang.Float"*/, 0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_61;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0LL);
  v30 = 0;
  v31 = 0;
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
      goto LABEL_61;
    v33 = (UnityEngine_GameObject_o *)IsNullOrEmpty;
    IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 (UnityEngine_GameObject_o *)IsNullOrEmpty,
                                                 (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v34 = ServantSkillStrengthStatus_TypeInfo;
    v35 = (UISprite_o *)IsNullOrEmpty;
    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
      v34 = ServantSkillStrengthStatus_TypeInfo;
    }
    static_fields = v34->static_fields;
    if ( v31 >= v24 )
    {
      if ( !v35 )
        goto LABEL_61;
      v37 = 16LL;
    }
    else
    {
      if ( !v35 )
        goto LABEL_61;
      v37 = 8LL;
    }
    UISprite__set_spriteName(v35, *(System_String_o **)((char *)&static_fields->PATH + v37), 0LL);
    UIWidget__set_width((UIWidget_o *)v35, size.fields.m_X, 0LL);
    UIWidget__set_height((UIWidget_o *)v35, size.fields.m_Y, 0LL);
    UIWidget__set_depth((UIWidget_o *)v35, skillNameLabel->fields.mDepth, 0LL);
    GameObjectExtensions__SetLocalPositionX(v33, (float)v30, 0LL);
    IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_GameObject__get_gameObject(v33, 0LL);
    if ( !IsNullOrEmpty )
      goto LABEL_61;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 1, 0LL);
    ++v31;
    v30 += offset;
  }
  while ( v41 != v31 );
  IsNullOrEmpty = UnityEngine_Component__get_transform((UnityEngine_Component_o *)skillNameLabel, 0LL);
  if ( !IsNullOrEmpty )
LABEL_61:
    sub_1C3B9C0(IsNullOrEmpty, v20);
  v38 = 1.0 / COERCE_FLOAT(UnityEngine_Transform__get_localScale(IsNullOrEmpty, 0LL));
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScaleX(v39, v38, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsNullOrEmpty = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)addLabel,
                                               0LL,
                                               0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( !addLabel )
      goto LABEL_61;
    v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)addLabel, 0LL);
    GameObjectExtensions__SetLocalPositionX(v40, v28 + (float)((float)(v38 * (float)offset) * (float)v41), 0LL);
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

  if ( (byte_4C1DDAD & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UISprite___, uISprite);
    sub_1C3B764(&ServantSkillStrengthStatus_TypeInfo, v9);
    sub_1C3B764(&StringLiteral_20586/*"java.lang.Float"*/, v10);
    byte_4C1DDAD = 1;
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
                                                         (System_String_o *)StringLiteral_20586/*"java.lang.Float"*/,
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
                                                               (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
                    GameObjectExtensions__SetLocalPosition_34963392(v22, 0.0, v20 * (float)v19, 0LL);
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
      sub_1C3B9C0(gameObject, v14);
    }
  }
}