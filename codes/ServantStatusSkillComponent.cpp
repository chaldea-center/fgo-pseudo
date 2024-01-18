void __fastcall ServantStatusSkillComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  ServantStatusSkillComponent_c *v9; // x8
  struct ServantStatusSkillComponent_StaticFields *static_fields; // x0
  System_Int32_array **v11; // x1

  if ( (byte_418B099 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusSkillComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_19629/*"img_skillclass_0"*/, v8);
    byte_418B099 = 1;
  }
  ServantStatusSkillComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
  ServantStatusSkillComponent_TypeInfo->static_fields->MAX_HEIGHT = 500;
  v9 = ServantStatusSkillComponent_TypeInfo;
  ServantStatusSkillComponent_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
  static_fields = v9->static_fields;
  v11 = (System_Int32_array **)StringLiteral_19629/*"img_skillclass_0"*/;
  static_fields->SKILL_NO_FILE_PREFIX = (struct System_String_o *)StringLiteral_19629/*"img_skillclass_0"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->SKILL_NO_FILE_PREFIX, v11, v2, v3, v4, v5, v6, v7);
  ServantStatusSkillComponent_TypeInfo->static_fields->MAX_LEVEL = 10;
}


void __fastcall ServantStatusSkillComponent___ctor(ServantStatusSkillComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantStatusSkillComponent__GetHeight(
        ServantStatusSkillComponent_o *this,
        const MethodInfo *method)
{
  struct UILabel_o *skillExplanationLabel; // x8

  skillExplanationLabel = this->fields.skillExplanationLabel;
  if ( !skillExplanationLabel )
    sub_B2C434(this, method);
  return skillExplanationLabel->fields.mHeight;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusSkillComponent__SetItem(
        ServantStatusSkillComponent_o *this,
        int32_t num,
        int32_t skillId,
        System_String_o *titleMessage,
        System_String_o *explanationMessage,
        bool releaseState,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v14; // x1
  ServantStatusSkillComponent_c *v15; // x0
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
  ServantStatusSkillComponent_c *v26; // x0
  System_String_o *SKILL_NO_FILE_PREFIX; // x25
  System_String_o *v28; // x0
  UILabel_o *skillExplanationLabel; // x24
  ServantStatusSkillComponent_c *v30; // x0
  UIRangeLabel_o *skillTitleRangeLabel; // x21
  int v32; // s0
  UIWidget_o *v36; // x20
  int v37; // s0
  unsigned int v41; // [xsp+8h] [xbp-48h] BYREF
  int32_t v42; // [xsp+Ch] [xbp-44h] BYREF

  v42 = num;
  if ( (byte_418B098 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusSkillComponent_TypeInfo, *(_QWORD *)&num);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    byte_418B098 = 1;
  }
  v41 = 0;
  if ( num <= 9 )
  {
    titleNumFirstSprite = this->fields.titleNumFirstSprite;
    v26 = ServantStatusSkillComponent_TypeInfo;
    if ( (BYTE3(ServantStatusSkillComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusSkillComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusSkillComponent_TypeInfo);
      v26 = ServantStatusSkillComponent_TypeInfo;
    }
    SKILL_NO_FILE_PREFIX = v26->static_fields->SKILL_NO_FILE_PREFIX;
    v28 = System_Int32__ToString((int32_t)&v42, 0LL);
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
LABEL_35:
    sub_B2C434(titleNumSecondSprite, v20);
  }
  v15 = ServantStatusSkillComponent_TypeInfo;
  v41 = num / 0xAu;
  v16 = this->fields.titleNumFirstSprite;
  if ( (BYTE3(ServantStatusSkillComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusSkillComponent_TypeInfo);
    v15 = ServantStatusSkillComponent_TypeInfo;
  }
  v17 = v15->static_fields->SKILL_NO_FILE_PREFIX;
  v18 = System_Int32__ToString((int32_t)&v41, 0LL);
  titleNumSecondSprite = System_String__Concat_44305532(v17, v18, 0LL);
  if ( !v16 )
    goto LABEL_35;
  UISprite__set_spriteName(v16, titleNumSecondSprite, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.titleNumSecondSprite;
  if ( !titleNumSecondSprite )
    goto LABEL_35;
  titleNumSecondSprite = (System_String_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)titleNumSecondSprite,
                                              0LL);
  if ( !titleNumSecondSprite )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleNumSecondSprite, 1, 0LL);
  v41 = v42 % 10;
  v21 = this->fields.titleNumSecondSprite;
  v22 = ServantStatusSkillComponent_TypeInfo->static_fields->SKILL_NO_FILE_PREFIX;
  v23 = System_Int32__ToString((int32_t)&v41, 0LL);
  titleNumSecondSprite = System_String__Concat_44305532(v22, v23, 0LL);
  if ( !v21 )
    goto LABEL_35;
  v24 = titleNumSecondSprite;
  titleNumSecondSprite = (System_String_o *)v21;
LABEL_20:
  UISprite__set_spriteName((UISprite_o *)titleNumSecondSprite, v24, 0LL);
  skillExplanationLabel = this->fields.skillExplanationLabel;
  v30 = ServantStatusSkillComponent_TypeInfo;
  if ( (BYTE3(ServantStatusSkillComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusSkillComponent_TypeInfo);
    v30 = ServantStatusSkillComponent_TypeInfo;
  }
  WrapControlText__textAdjust(
    skillExplanationLabel,
    explanationMessage,
    v30->static_fields->DETAIL_FONT_SIZE,
    v30->static_fields->DETAIL_FONT_SIZE,
    v30->static_fields->MAX_HEIGHT,
    0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillIcon;
  if ( !titleNumSecondSprite )
    goto LABEL_35;
  SkillIconComponent__Set((SkillIconComponent_o *)titleNumSecondSprite, skillId, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillTitleRangeLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_35;
  UIRangeLabel__Set((UIRangeLabel_o *)titleNumSecondSprite, titleMessage, 0LL, 1, 0, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillIcon;
  if ( !titleNumSecondSprite )
    goto LABEL_35;
  SkillIconComponent__SetMask((SkillIconComponent_o *)titleNumSecondSprite, !releaseState, 0LL);
  skillTitleRangeLabel = this->fields.skillTitleRangeLabel;
  if ( releaseState )
  {
    *(UnityEngine_Color_o *)&v32 = UnityEngine_Color__get_white(0LL);
    if ( !skillTitleRangeLabel )
      goto LABEL_35;
  }
  else
  {
    *(UnityEngine_Color_o *)&v32 = UnityEngine_Color__get_gray(0LL);
    if ( !skillTitleRangeLabel )
      goto LABEL_35;
  }
  UIRangeLabel__set_color(skillTitleRangeLabel, *(UnityEngine_Color_o *)&v32, 0LL);
  v36 = (UIWidget_o *)this->fields.skillExplanationLabel;
  if ( releaseState )
  {
    *(UnityEngine_Color_o *)&v37 = UnityEngine_Color__get_white(0LL);
    if ( !v36 )
      goto LABEL_35;
  }
  else
  {
    *(UnityEngine_Color_o *)&v37 = UnityEngine_Color__get_gray(0LL);
    if ( !v36 )
      goto LABEL_35;
  }
  UIWidget__set_color(v36, *(UnityEngine_Color_o *)&v37, 0LL);
}