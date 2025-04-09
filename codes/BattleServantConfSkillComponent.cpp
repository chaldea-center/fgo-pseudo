void __fastcall BattleServantConfSkillComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_49BE0DC & 1) == 0 )
  {
    sub_1B4CF90(&BattleServantConfSkillComponent_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_20175/*"img_skillclass_0"*/, v4);
    byte_49BE0DC = 1;
  }
  BattleServantConfSkillComponent_TypeInfo->static_fields->SKILL_NO_FILE_PREFIX = (struct System_String_o *)StringLiteral_20175/*"img_skillclass_0"*/;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)BattleServantConfSkillComponent_TypeInfo->static_fields,
    StringLiteral_20175/*"img_skillclass_0"*/,
    v2,
    v3);
}


void __fastcall BattleServantConfSkillComponent___ctor(
        BattleServantConfSkillComponent_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.DETAIL_FONT_SIZE = 0x4600000012LL;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall BattleServantConfSkillComponent__GetDefaultHeight(
        BattleServantConfSkillComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.DEFAULT_HEIGHT;
}


int32_t __fastcall BattleServantConfSkillComponent__GetHeight(
        BattleServantConfSkillComponent_o *this,
        const MethodInfo *method)
{
  struct UILabel_o *skillExplanationLabel; // x8

  skillExplanationLabel = this->fields.skillExplanationLabel;
  if ( !skillExplanationLabel )
    sub_1B4D1EC(this, method);
  return skillExplanationLabel->fields.mHeight;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantConfSkillComponent__SetItem(
        BattleServantConfSkillComponent_o *this,
        int32_t num,
        int32_t skillId,
        System_String_o *titleMessage,
        System_String_o *explanationMessage,
        bool releaseState,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v14; // x1
  BattleServantConfSkillComponent_c *v15; // x0
  UISprite_o *titleNumFirstSprite; // x24
  System_String_o *SKILL_NO_FILE_PREFIX; // x25
  System_String_o *v18; // x0
  System_String_o *titleNumSecondSprite; // x0
  __int64 v20; // x1
  struct UISprite_o *v21; // x24
  System_String_o *v22; // x25
  System_String_o *v23; // x0
  System_String_o *v24; // x1
  BattleServantConfSkillComponent_c *v25; // x0
  UISprite_o *v26; // x24
  System_String_o *v27; // x25
  System_String_o *v28; // x0
  float v29; // s8
  unsigned int v30; // [xsp+8h] [xbp-58h] BYREF
  int32_t v31; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v31 = num;
  if ( (byte_49BE0DB & 1) == 0 )
  {
    sub_1B4CF90(&BattleServantConfSkillComponent_TypeInfo, *(_QWORD *)&num);
    sub_1B4CF90(&StringLiteral_1/*""*/, v14);
    byte_49BE0DB = 1;
  }
  v30 = 0;
  if ( num > 9 )
  {
    v15 = BattleServantConfSkillComponent_TypeInfo;
    v30 = num / 0xAu;
    titleNumFirstSprite = this->fields.titleNumFirstSprite;
    if ( !BattleServantConfSkillComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantConfSkillComponent_TypeInfo);
      v15 = BattleServantConfSkillComponent_TypeInfo;
    }
    SKILL_NO_FILE_PREFIX = v15->static_fields->SKILL_NO_FILE_PREFIX;
    v18 = System_Int32__ToString((int32_t)&v30, 0LL);
    titleNumSecondSprite = System_String__Concat_61093468(SKILL_NO_FILE_PREFIX, v18, 0LL);
    if ( titleNumFirstSprite )
    {
      UISprite__set_spriteName(titleNumFirstSprite, titleNumSecondSprite, 0LL);
      titleNumSecondSprite = (System_String_o *)this->fields.titleNumSecondSprite;
      if ( titleNumSecondSprite )
      {
        titleNumSecondSprite = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)titleNumSecondSprite,
                                                    0LL);
        if ( titleNumSecondSprite )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleNumSecondSprite, 1, 0LL);
          v30 = v31 % 10;
          v21 = this->fields.titleNumSecondSprite;
          v22 = BattleServantConfSkillComponent_TypeInfo->static_fields->SKILL_NO_FILE_PREFIX;
          v23 = System_Int32__ToString((int32_t)&v30, 0LL);
          titleNumSecondSprite = System_String__Concat_61093468(v22, v23, 0LL);
          if ( v21 )
          {
            v24 = titleNumSecondSprite;
            titleNumSecondSprite = (System_String_o *)v21;
            goto LABEL_18;
          }
        }
      }
    }
LABEL_28:
    sub_1B4D1EC(titleNumSecondSprite, v20);
  }
  v25 = BattleServantConfSkillComponent_TypeInfo;
  v26 = this->fields.titleNumFirstSprite;
  if ( !BattleServantConfSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfSkillComponent_TypeInfo);
    v25 = BattleServantConfSkillComponent_TypeInfo;
  }
  v27 = v25->static_fields->SKILL_NO_FILE_PREFIX;
  v28 = System_Int32__ToString((int32_t)&v31, 0LL);
  titleNumSecondSprite = System_String__Concat_61093468(v27, v28, 0LL);
  if ( !v26 )
    goto LABEL_28;
  UISprite__set_spriteName(v26, titleNumSecondSprite, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.titleNumSecondSprite;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  titleNumSecondSprite = (System_String_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)titleNumSecondSprite,
                                              0LL);
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleNumSecondSprite, 0, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.titleNumSecondSprite;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  v24 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_18:
  UISprite__set_spriteName((UISprite_o *)titleNumSecondSprite, v24, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillExplanationLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  UIWidget__set_height((UIWidget_o *)titleNumSecondSprite, this->fields.DEFAULT_HEIGHT, 0LL);
  WrapControlText__textAdjust(
    this->fields.skillExplanationLabel,
    explanationMessage,
    this->fields.DETAIL_FONT_SIZE,
    this->fields.DETAIL_FONT_SIZE,
    0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillIcon;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  SkillIconComponent__Set((SkillIconComponent_o *)titleNumSecondSprite, skillId, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillTitleRangeLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  UIRangeLabel__Set((UIRangeLabel_o *)titleNumSecondSprite, titleMessage, 0LL, 1, 0, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillIcon;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  SkillIconComponent__SetMask((SkillIconComponent_o *)titleNumSecondSprite, !releaseState, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillTitleRangeLabel;
  v29 = releaseState ? 1.0 : 0.5;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  v32.fields.a = 1.0;
  v32.fields.r = v29;
  v32.fields.g = v29;
  v32.fields.b = v29;
  UIRangeLabel__set_color((UIRangeLabel_o *)titleNumSecondSprite, v32, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillExplanationLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  v33.fields.a = 1.0;
  v33.fields.r = v29;
  v33.fields.g = v29;
  v33.fields.b = v29;
  UIWidget__set_color((UIWidget_o *)titleNumSecondSprite, v33, 0LL);
}