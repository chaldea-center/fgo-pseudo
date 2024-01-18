void __fastcall BattleServantConfSkillComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  struct BattleServantConfSkillComponent_StaticFields *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_4185AE5 & 1) == 0 )
  {
    sub_B2C35C(&BattleServantConfSkillComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_19629/*"img_skillclass_0"*/, v8);
    byte_4185AE5 = 1;
  }
  BattleServantConfSkillComponent_TypeInfo->static_fields->MAX_HEIGHT = 500;
  BattleServantConfSkillComponent_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
  static_fields = BattleServantConfSkillComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_19629/*"img_skillclass_0"*/;
  static_fields->SKILL_NO_FILE_PREFIX = (struct System_String_o *)StringLiteral_19629/*"img_skillclass_0"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->SKILL_NO_FILE_PREFIX, v10, v2, v3, v4, v5, v6, v7);
  BattleServantConfSkillComponent_TypeInfo->static_fields->MAX_LEVEL = 10;
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
    sub_B2C434(this, method);
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
  UISprite_o *v16; // x24
  System_String_o *v17; // x25
  System_String_o *v18; // x0
  System_String_o *titleNumSecondSprite; // x0
  __int64 v20; // x1
  struct UISprite_o *v21; // x24
  System_String_o *v22; // x25
  System_String_o *v23; // x0
  System_String_o *v24; // x1
  UISprite_o *titleNumFirstSprite; // x24
  BattleServantConfSkillComponent_c *v26; // x0
  System_String_o *SKILL_NO_FILE_PREFIX; // x25
  System_String_o *v28; // x0
  UILabel_o *skillExplanationLabel; // x25
  int32_t DETAIL_FONT_SIZE; // w24
  BattleServantConfSkillComponent_c *v31; // x0
  UIRangeLabel_o *skillTitleRangeLabel; // x21
  int v33; // s0
  UIWidget_o *v37; // x20
  int v38; // s0
  unsigned int v42; // [xsp+8h] [xbp-48h] BYREF
  int32_t v43; // [xsp+Ch] [xbp-44h] BYREF

  v43 = num;
  if ( (byte_4185AE4 & 1) == 0 )
  {
    sub_B2C35C(&BattleServantConfSkillComponent_TypeInfo, *(_QWORD *)&num);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    byte_4185AE4 = 1;
  }
  v42 = 0;
  if ( num <= 9 )
  {
    titleNumFirstSprite = this->fields.titleNumFirstSprite;
    v26 = BattleServantConfSkillComponent_TypeInfo;
    if ( (BYTE3(BattleServantConfSkillComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleServantConfSkillComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantConfSkillComponent_TypeInfo);
      v26 = BattleServantConfSkillComponent_TypeInfo;
    }
    SKILL_NO_FILE_PREFIX = v26->static_fields->SKILL_NO_FILE_PREFIX;
    v28 = System_Int32__ToString((int32_t)&v43, 0LL);
    titleNumSecondSprite = System_String__Concat_44305532(SKILL_NO_FILE_PREFIX, v28, 0LL);
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
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleNumSecondSprite, 0, 0LL);
          titleNumSecondSprite = (System_String_o *)this->fields.titleNumSecondSprite;
          if ( titleNumSecondSprite )
          {
            v24 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_20;
          }
        }
      }
    }
LABEL_36:
    sub_B2C434(titleNumSecondSprite, v20);
  }
  v15 = BattleServantConfSkillComponent_TypeInfo;
  v42 = num / 0xAu;
  v16 = this->fields.titleNumFirstSprite;
  if ( (BYTE3(BattleServantConfSkillComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantConfSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfSkillComponent_TypeInfo);
    v15 = BattleServantConfSkillComponent_TypeInfo;
  }
  v17 = v15->static_fields->SKILL_NO_FILE_PREFIX;
  v18 = System_Int32__ToString((int32_t)&v42, 0LL);
  titleNumSecondSprite = System_String__Concat_44305532(v17, v18, 0LL);
  if ( !v16 )
    goto LABEL_36;
  UISprite__set_spriteName(v16, titleNumSecondSprite, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.titleNumSecondSprite;
  if ( !titleNumSecondSprite )
    goto LABEL_36;
  titleNumSecondSprite = (System_String_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)titleNumSecondSprite,
                                              0LL);
  if ( !titleNumSecondSprite )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleNumSecondSprite, 1, 0LL);
  v42 = v43 % 10;
  v21 = this->fields.titleNumSecondSprite;
  v22 = BattleServantConfSkillComponent_TypeInfo->static_fields->SKILL_NO_FILE_PREFIX;
  v23 = System_Int32__ToString((int32_t)&v42, 0LL);
  titleNumSecondSprite = System_String__Concat_44305532(v22, v23, 0LL);
  if ( !v21 )
    goto LABEL_36;
  v24 = titleNumSecondSprite;
  titleNumSecondSprite = (System_String_o *)v21;
LABEL_20:
  UISprite__set_spriteName((UISprite_o *)titleNumSecondSprite, v24, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillExplanationLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)titleNumSecondSprite, this->fields.DEFAULT_HEIGHT, 0LL);
  skillExplanationLabel = this->fields.skillExplanationLabel;
  DETAIL_FONT_SIZE = this->fields.DETAIL_FONT_SIZE;
  v31 = BattleServantConfSkillComponent_TypeInfo;
  if ( (BYTE3(BattleServantConfSkillComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantConfSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfSkillComponent_TypeInfo);
    v31 = BattleServantConfSkillComponent_TypeInfo;
  }
  WrapControlText__textAdjust(
    skillExplanationLabel,
    explanationMessage,
    DETAIL_FONT_SIZE,
    DETAIL_FONT_SIZE,
    v31->static_fields->MAX_HEIGHT,
    0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillIcon;
  if ( !titleNumSecondSprite )
    goto LABEL_36;
  SkillIconComponent__Set((SkillIconComponent_o *)titleNumSecondSprite, skillId, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillTitleRangeLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_36;
  UIRangeLabel__Set((UIRangeLabel_o *)titleNumSecondSprite, titleMessage, 0LL, 1, 0, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillIcon;
  if ( !titleNumSecondSprite )
    goto LABEL_36;
  SkillIconComponent__SetMask((SkillIconComponent_o *)titleNumSecondSprite, !releaseState, 0LL);
  skillTitleRangeLabel = this->fields.skillTitleRangeLabel;
  if ( releaseState )
  {
    *(UnityEngine_Color_o *)&v33 = UnityEngine_Color__get_white(0LL);
    if ( !skillTitleRangeLabel )
      goto LABEL_36;
  }
  else
  {
    *(UnityEngine_Color_o *)&v33 = UnityEngine_Color__get_gray(0LL);
    if ( !skillTitleRangeLabel )
      goto LABEL_36;
  }
  UIRangeLabel__set_color(skillTitleRangeLabel, *(UnityEngine_Color_o *)&v33, 0LL);
  v37 = (UIWidget_o *)this->fields.skillExplanationLabel;
  if ( releaseState )
  {
    *(UnityEngine_Color_o *)&v38 = UnityEngine_Color__get_white(0LL);
    if ( !v37 )
      goto LABEL_36;
  }
  else
  {
    *(UnityEngine_Color_o *)&v38 = UnityEngine_Color__get_gray(0LL);
    if ( !v37 )
      goto LABEL_36;
  }
  UIWidget__set_color(v37, *(UnityEngine_Color_o *)&v38, 0LL);
}