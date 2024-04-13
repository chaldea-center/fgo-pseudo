void __fastcall BattleServantConfSkillComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct BattleServantConfSkillComponent_StaticFields *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E668C & 1) == 0 )
  {
    sub_B5D5C4(&BattleServantConfSkillComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_19878/*"img_skillclass_0"*/, v8, v9, v10);
    byte_42E668C = 1;
  }
  BattleServantConfSkillComponent_TypeInfo->static_fields->MAX_HEIGHT = 500;
  BattleServantConfSkillComponent_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
  static_fields = BattleServantConfSkillComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_19878/*"img_skillclass_0"*/;
  static_fields->SKILL_NO_FILE_PREFIX = (struct System_String_o *)StringLiteral_19878/*"img_skillclass_0"*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->SKILL_NO_FILE_PREFIX, v12, v2, v3, v4, v5, v6, v7);
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
    sub_B5D69C(this, method);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfSkillComponent_c *v17; // x0
  UISprite_o *v18; // x24
  System_String_o *v19; // x25
  System_String_o *v20; // x0
  System_String_o *titleNumSecondSprite; // x0
  __int64 v22; // x1
  struct UISprite_o *v23; // x24
  System_String_o *v24; // x25
  System_String_o *v25; // x0
  System_String_o *v26; // x1
  UISprite_o *titleNumFirstSprite; // x24
  BattleServantConfSkillComponent_c *v28; // x0
  System_String_o *SKILL_NO_FILE_PREFIX; // x25
  System_String_o *v30; // x0
  UILabel_o *skillExplanationLabel; // x25
  int32_t DETAIL_FONT_SIZE; // w24
  BattleServantConfSkillComponent_c *v33; // x0
  UIRangeLabel_o *skillTitleRangeLabel; // x21
  int v35; // s0
  UIWidget_o *v39; // x20
  int v40; // s0
  unsigned int v44; // [xsp+8h] [xbp-48h] BYREF
  int32_t v45; // [xsp+Ch] [xbp-44h] BYREF

  v45 = num;
  if ( (byte_42E668B & 1) == 0 )
  {
    sub_B5D5C4(&BattleServantConfSkillComponent_TypeInfo, num, skillId, titleMessage);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42E668B = 1;
  }
  v44 = 0;
  if ( num <= 9 )
  {
    titleNumFirstSprite = this->fields.titleNumFirstSprite;
    v28 = BattleServantConfSkillComponent_TypeInfo;
    if ( (BYTE3(BattleServantConfSkillComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleServantConfSkillComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantConfSkillComponent_TypeInfo);
      v28 = BattleServantConfSkillComponent_TypeInfo;
    }
    SKILL_NO_FILE_PREFIX = v28->static_fields->SKILL_NO_FILE_PREFIX;
    v30 = System_Int32__ToString((int32_t)&v45, 0LL);
    titleNumSecondSprite = System_String__Concat_44577788(SKILL_NO_FILE_PREFIX, v30, 0LL);
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
            v26 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_20;
          }
        }
      }
    }
LABEL_36:
    sub_B5D69C(titleNumSecondSprite, v22);
  }
  v17 = BattleServantConfSkillComponent_TypeInfo;
  v44 = num / 0xAu;
  v18 = this->fields.titleNumFirstSprite;
  if ( (BYTE3(BattleServantConfSkillComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantConfSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfSkillComponent_TypeInfo);
    v17 = BattleServantConfSkillComponent_TypeInfo;
  }
  v19 = v17->static_fields->SKILL_NO_FILE_PREFIX;
  v20 = System_Int32__ToString((int32_t)&v44, 0LL);
  titleNumSecondSprite = System_String__Concat_44577788(v19, v20, 0LL);
  if ( !v18 )
    goto LABEL_36;
  UISprite__set_spriteName(v18, titleNumSecondSprite, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.titleNumSecondSprite;
  if ( !titleNumSecondSprite )
    goto LABEL_36;
  titleNumSecondSprite = (System_String_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)titleNumSecondSprite,
                                              0LL);
  if ( !titleNumSecondSprite )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleNumSecondSprite, 1, 0LL);
  v44 = v45 % 10;
  v23 = this->fields.titleNumSecondSprite;
  v24 = BattleServantConfSkillComponent_TypeInfo->static_fields->SKILL_NO_FILE_PREFIX;
  v25 = System_Int32__ToString((int32_t)&v44, 0LL);
  titleNumSecondSprite = System_String__Concat_44577788(v24, v25, 0LL);
  if ( !v23 )
    goto LABEL_36;
  v26 = titleNumSecondSprite;
  titleNumSecondSprite = (System_String_o *)v23;
LABEL_20:
  UISprite__set_spriteName((UISprite_o *)titleNumSecondSprite, v26, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillExplanationLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_36;
  UIWidget__set_height((UIWidget_o *)titleNumSecondSprite, this->fields.DEFAULT_HEIGHT, 0LL);
  skillExplanationLabel = this->fields.skillExplanationLabel;
  DETAIL_FONT_SIZE = this->fields.DETAIL_FONT_SIZE;
  v33 = BattleServantConfSkillComponent_TypeInfo;
  if ( (BYTE3(BattleServantConfSkillComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantConfSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfSkillComponent_TypeInfo);
    v33 = BattleServantConfSkillComponent_TypeInfo;
  }
  WrapControlText__textAdjust(
    skillExplanationLabel,
    explanationMessage,
    DETAIL_FONT_SIZE,
    DETAIL_FONT_SIZE,
    v33->static_fields->MAX_HEIGHT,
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
    *(UnityEngine_Color_o *)&v35 = UnityEngine_Color__get_white(0LL);
    if ( !skillTitleRangeLabel )
      goto LABEL_36;
  }
  else
  {
    *(UnityEngine_Color_o *)&v35 = UnityEngine_Color__get_gray(0LL);
    if ( !skillTitleRangeLabel )
      goto LABEL_36;
  }
  UIRangeLabel__set_color(skillTitleRangeLabel, *(UnityEngine_Color_o *)&v35, 0LL);
  v39 = (UIWidget_o *)this->fields.skillExplanationLabel;
  if ( releaseState )
  {
    *(UnityEngine_Color_o *)&v40 = UnityEngine_Color__get_white(0LL);
    if ( !v39 )
      goto LABEL_36;
  }
  else
  {
    *(UnityEngine_Color_o *)&v40 = UnityEngine_Color__get_gray(0LL);
    if ( !v39 )
      goto LABEL_36;
  }
  UIWidget__set_color(v39, *(UnityEngine_Color_o *)&v40, 0LL);
}