void BattleServantConfSkillComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C3B015 & 1) == 0 )
  {
    sub_1C32C20(&BattleServantConfSkillComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_20574/*"img_skillclass_0"*/);
    byte_4C3B015 = 1;
  }
  BattleServantConfSkillComponent_TypeInfo->static_fields->SKILL_NO_FILE_PREFIX = (struct System_String_o *)StringLiteral_20574/*"img_skillclass_0"*/;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)BattleServantConfSkillComponent_TypeInfo->static_fields,
    StringLiteral_20574/*"img_skillclass_0"*/,
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
    sub_1C32E7C(this);
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
  struct UISprite_o *v19; // x24
  System_String_o *v20; // x25
  System_String_o *v21; // x0
  System_String_o *v22; // x1
  BattleServantConfSkillComponent_c *v23; // x0
  UISprite_o *v24; // x24
  System_String_o *v25; // x25
  System_String_o *v26; // x0
  float v27; // s8
  unsigned int v28; // [xsp+8h] [xbp-58h] BYREF
  int32_t v29; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v29 = num;
  if ( (byte_4C3B014 & 1) == 0 )
  {
    sub_1C32C20(&BattleServantConfSkillComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3B014 = 1;
  }
  v28 = 0;
  if ( num > 9 )
  {
    v14 = BattleServantConfSkillComponent_TypeInfo;
    v28 = num / 0xAu;
    titleNumFirstSprite = this->fields.titleNumFirstSprite;
    if ( !BattleServantConfSkillComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantConfSkillComponent_TypeInfo);
      v14 = BattleServantConfSkillComponent_TypeInfo;
    }
    SKILL_NO_FILE_PREFIX = v14->static_fields->SKILL_NO_FILE_PREFIX;
    v17 = System_Int32__ToString((int32_t)&v28, 0);
    titleNumSecondSprite = System_String__Concat_63518544(SKILL_NO_FILE_PREFIX, v17, 0);
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
          v28 = v29 % 10;
          v19 = this->fields.titleNumSecondSprite;
          v20 = BattleServantConfSkillComponent_TypeInfo->static_fields->SKILL_NO_FILE_PREFIX;
          v21 = System_Int32__ToString((int32_t)&v28, 0);
          titleNumSecondSprite = System_String__Concat_63518544(v20, v21, 0);
          if ( v19 )
          {
            v22 = titleNumSecondSprite;
            titleNumSecondSprite = (System_String_o *)v19;
            goto LABEL_18;
          }
        }
      }
    }
LABEL_28:
    sub_1C32E7C(titleNumSecondSprite);
  }
  v23 = BattleServantConfSkillComponent_TypeInfo;
  v24 = this->fields.titleNumFirstSprite;
  if ( !BattleServantConfSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfSkillComponent_TypeInfo);
    v23 = BattleServantConfSkillComponent_TypeInfo;
  }
  v25 = v23->static_fields->SKILL_NO_FILE_PREFIX;
  v26 = System_Int32__ToString((int32_t)&v29, 0);
  titleNumSecondSprite = System_String__Concat_63518544(v25, v26, 0);
  if ( !v24 )
    goto LABEL_28;
  UISprite__set_spriteName(v24, titleNumSecondSprite, 0);
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
  v22 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_18:
  UISprite__set_spriteName((UISprite_o *)titleNumSecondSprite, v22, 0);
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
  v27 = releaseState ? 1.0 : 0.5;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  v30.fields.a = 1.0;
  v30.fields.r = v27;
  v30.fields.g = v27;
  v30.fields.b = v27;
  UIRangeLabel__set_color((UIRangeLabel_o *)titleNumSecondSprite, v30, 0);
  titleNumSecondSprite = (System_String_o *)this->fields.skillExplanationLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  v31.fields.a = 1.0;
  v31.fields.r = v27;
  v31.fields.g = v27;
  v31.fields.b = v27;
  UIWidget__set_color((UIWidget_o *)titleNumSecondSprite, v31, 0);
}