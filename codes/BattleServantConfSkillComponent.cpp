void BattleServantConfSkillComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C5A41F & 1) == 0 )
  {
    sub_1C3E564(&BattleServantConfSkillComponent_TypeInfo);
    sub_1C3E564(&StringLiteral_20595/*"img_skillclass_0"*/);
    byte_4C5A41F = 1;
  }
  BattleServantConfSkillComponent_TypeInfo->static_fields->SKILL_NO_FILE_PREFIX = (struct System_String_o *)StringLiteral_20595/*"img_skillclass_0"*/;
  sub_1C3E508(
    (CGThumbnailListItem_o *)BattleServantConfSkillComponent_TypeInfo->static_fields,
    StringLiteral_20595/*"img_skillclass_0"*/,
    v1,
    v2);
}


void BattleServantConfSkillComponent___ctor(BattleServantConfSkillComponent_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.DETAIL_FONT_SIZE = 0x4600000012LL;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


int32_t BattleServantConfSkillComponent__GetDefaultHeight(
        BattleServantConfSkillComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.DEFAULT_HEIGHT;
}


int32_t BattleServantConfSkillComponent__GetHeight(BattleServantConfSkillComponent_o *this, const MethodInfo *method)
{
  struct UILabel_o *skillExplanationLabel; // x8

  skillExplanationLabel = this->fields.skillExplanationLabel;
  if ( !skillExplanationLabel )
    sub_1C3E7C0(this, method);
  return skillExplanationLabel->fields.mHeight;
}


void BattleServantConfSkillComponent__SetItem(
        BattleServantConfSkillComponent_o *this,
        int32_t num,
        int32_t skillId,
        System_String_o *titleMessage,
        System_String_o *explanationMessage,
        bool releaseState,
        int32_t skillLv,
        const MethodInfo *method)
{
  BattleServantConfSkillComponent_c *v14; // x0
  UISprite_o *titleNumFirstSprite; // x24
  System_String_o *SKILL_NO_FILE_PREFIX; // x25
  System_String_o *v17; // x0
  System_String_o *titleNumSecondSprite; // x0
  __int64 v19; // x1
  struct UISprite_o *v20; // x24
  System_String_o *v21; // x25
  System_String_o *v22; // x0
  System_String_o *v23; // x1
  BattleServantConfSkillComponent_c *v24; // x0
  UISprite_o *v25; // x24
  System_String_o *v26; // x25
  System_String_o *v27; // x0
  float v28; // s8
  unsigned int v29; // [xsp+8h] [xbp-58h] BYREF
  int32_t v30; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v30 = num;
  if ( (byte_4C5A41E & 1) == 0 )
  {
    sub_1C3E564(&BattleServantConfSkillComponent_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5A41E = 1;
  }
  v29 = 0;
  if ( num > 9 )
  {
    v14 = BattleServantConfSkillComponent_TypeInfo;
    v29 = num / 0xAu;
    titleNumFirstSprite = this->fields.titleNumFirstSprite;
    if ( !BattleServantConfSkillComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantConfSkillComponent_TypeInfo);
      v14 = BattleServantConfSkillComponent_TypeInfo;
    }
    SKILL_NO_FILE_PREFIX = v14->static_fields->SKILL_NO_FILE_PREFIX;
    v17 = System_Int32__ToString((int32_t)&v29, 0);
    titleNumSecondSprite = System_String__Concat_63636468(SKILL_NO_FILE_PREFIX, v17, 0);
    if ( titleNumFirstSprite )
    {
      UISprite__set_spriteName(titleNumFirstSprite, titleNumSecondSprite, 0);
      titleNumSecondSprite = (System_String_o *)this->fields.titleNumSecondSprite;
      if ( titleNumSecondSprite )
      {
        titleNumSecondSprite = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)titleNumSecondSprite,
                                                    0);
        if ( titleNumSecondSprite )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleNumSecondSprite, 1, 0);
          v29 = v30 % 10;
          v20 = this->fields.titleNumSecondSprite;
          v21 = BattleServantConfSkillComponent_TypeInfo->static_fields->SKILL_NO_FILE_PREFIX;
          v22 = System_Int32__ToString((int32_t)&v29, 0);
          titleNumSecondSprite = System_String__Concat_63636468(v21, v22, 0);
          if ( v20 )
          {
            v23 = titleNumSecondSprite;
            titleNumSecondSprite = (System_String_o *)v20;
            goto LABEL_18;
          }
        }
      }
    }
LABEL_28:
    sub_1C3E7C0(titleNumSecondSprite, v19);
  }
  v24 = BattleServantConfSkillComponent_TypeInfo;
  v25 = this->fields.titleNumFirstSprite;
  if ( !BattleServantConfSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfSkillComponent_TypeInfo);
    v24 = BattleServantConfSkillComponent_TypeInfo;
  }
  v26 = v24->static_fields->SKILL_NO_FILE_PREFIX;
  v27 = System_Int32__ToString((int32_t)&v30, 0);
  titleNumSecondSprite = System_String__Concat_63636468(v26, v27, 0);
  if ( !v25 )
    goto LABEL_28;
  UISprite__set_spriteName(v25, titleNumSecondSprite, 0);
  titleNumSecondSprite = (System_String_o *)this->fields.titleNumSecondSprite;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  titleNumSecondSprite = (System_String_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)titleNumSecondSprite,
                                              0);
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleNumSecondSprite, 0, 0);
  titleNumSecondSprite = (System_String_o *)this->fields.titleNumSecondSprite;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  v23 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_18:
  UISprite__set_spriteName((UISprite_o *)titleNumSecondSprite, v23, 0);
  titleNumSecondSprite = (System_String_o *)this->fields.skillExplanationLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  UIWidget__set_height((UIWidget_o *)titleNumSecondSprite, this->fields.DEFAULT_HEIGHT, 0);
  WrapControlText__textAdjust(
    this->fields.skillExplanationLabel,
    explanationMessage,
    this->fields.DETAIL_FONT_SIZE,
    this->fields.DETAIL_FONT_SIZE,
    0);
  titleNumSecondSprite = (System_String_o *)this->fields.skillIcon;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  SkillIconComponent__Set((SkillIconComponent_o *)titleNumSecondSprite, skillId, 0);
  titleNumSecondSprite = (System_String_o *)this->fields.skillTitleRangeLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  UIRangeLabel__Set((UIRangeLabel_o *)titleNumSecondSprite, titleMessage, 0, 1, 0, 0, 0);
  titleNumSecondSprite = (System_String_o *)this->fields.skillIcon;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  SkillIconComponent__SetMask((SkillIconComponent_o *)titleNumSecondSprite, !releaseState, 0);
  titleNumSecondSprite = (System_String_o *)this->fields.skillTitleRangeLabel;
  v28 = releaseState ? 1.0 : 0.5;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  v31.fields.a = 1.0;
  v31.fields.r = v28;
  v31.fields.g = v28;
  v31.fields.b = v28;
  UIRangeLabel__set_color((UIRangeLabel_o *)titleNumSecondSprite, v31, 0);
  titleNumSecondSprite = (System_String_o *)this->fields.skillExplanationLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  v32.fields.a = 1.0;
  v32.fields.r = v28;
  v32.fields.g = v28;
  v32.fields.b = v28;
  UIWidget__set_color((UIWidget_o *)titleNumSecondSprite, v32, 0);
}