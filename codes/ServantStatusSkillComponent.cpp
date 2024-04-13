void __fastcall ServantStatusSkillComponent___cctor(const MethodInfo *method)
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
  ServantStatusSkillComponent_c *v11; // x8
  struct ServantStatusSkillComponent_StaticFields *static_fields; // x0
  System_Int32_array **v13; // x1

  if ( (byte_42EBEF1 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusSkillComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_19878/*"img_skillclass_0"*/, v8, v9, v10);
    byte_42EBEF1 = 1;
  }
  ServantStatusSkillComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
  ServantStatusSkillComponent_TypeInfo->static_fields->MAX_HEIGHT = 500;
  v11 = ServantStatusSkillComponent_TypeInfo;
  ServantStatusSkillComponent_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
  static_fields = v11->static_fields;
  v13 = (System_Int32_array **)StringLiteral_19878/*"img_skillclass_0"*/;
  static_fields->SKILL_NO_FILE_PREFIX = (struct System_String_o *)StringLiteral_19878/*"img_skillclass_0"*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->SKILL_NO_FILE_PREFIX, v13, v2, v3, v4, v5, v6, v7);
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
    sub_B5D69C(this, method);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  ServantStatusSkillComponent_c *v17; // x0
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
  ServantStatusSkillComponent_c *v28; // x0
  System_String_o *SKILL_NO_FILE_PREFIX; // x25
  System_String_o *v30; // x0
  UILabel_o *skillExplanationLabel; // x24
  ServantStatusSkillComponent_c *v32; // x0
  UIRangeLabel_o *skillTitleRangeLabel; // x21
  int v34; // s0
  UIWidget_o *v38; // x20
  int v39; // s0
  unsigned int v43; // [xsp+8h] [xbp-48h] BYREF
  int32_t v44; // [xsp+Ch] [xbp-44h] BYREF

  v44 = num;
  if ( (byte_42EBEF0 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusSkillComponent_TypeInfo, num, skillId, titleMessage);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42EBEF0 = 1;
  }
  v43 = 0;
  if ( num <= 9 )
  {
    titleNumFirstSprite = this->fields.titleNumFirstSprite;
    v28 = ServantStatusSkillComponent_TypeInfo;
    if ( (BYTE3(ServantStatusSkillComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusSkillComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusSkillComponent_TypeInfo);
      v28 = ServantStatusSkillComponent_TypeInfo;
    }
    SKILL_NO_FILE_PREFIX = v28->static_fields->SKILL_NO_FILE_PREFIX;
    v30 = System_Int32__ToString((int32_t)&v44, 0LL);
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
LABEL_35:
    sub_B5D69C(titleNumSecondSprite, v22);
  }
  v17 = ServantStatusSkillComponent_TypeInfo;
  v43 = num / 0xAu;
  v18 = this->fields.titleNumFirstSprite;
  if ( (BYTE3(ServantStatusSkillComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusSkillComponent_TypeInfo);
    v17 = ServantStatusSkillComponent_TypeInfo;
  }
  v19 = v17->static_fields->SKILL_NO_FILE_PREFIX;
  v20 = System_Int32__ToString((int32_t)&v43, 0LL);
  titleNumSecondSprite = System_String__Concat_44577788(v19, v20, 0LL);
  if ( !v18 )
    goto LABEL_35;
  UISprite__set_spriteName(v18, titleNumSecondSprite, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.titleNumSecondSprite;
  if ( !titleNumSecondSprite )
    goto LABEL_35;
  titleNumSecondSprite = (System_String_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)titleNumSecondSprite,
                                              0LL);
  if ( !titleNumSecondSprite )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleNumSecondSprite, 1, 0LL);
  v43 = v44 % 10;
  v23 = this->fields.titleNumSecondSprite;
  v24 = ServantStatusSkillComponent_TypeInfo->static_fields->SKILL_NO_FILE_PREFIX;
  v25 = System_Int32__ToString((int32_t)&v43, 0LL);
  titleNumSecondSprite = System_String__Concat_44577788(v24, v25, 0LL);
  if ( !v23 )
    goto LABEL_35;
  v26 = titleNumSecondSprite;
  titleNumSecondSprite = (System_String_o *)v23;
LABEL_20:
  UISprite__set_spriteName((UISprite_o *)titleNumSecondSprite, v26, 0LL);
  skillExplanationLabel = this->fields.skillExplanationLabel;
  v32 = ServantStatusSkillComponent_TypeInfo;
  if ( (BYTE3(ServantStatusSkillComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusSkillComponent_TypeInfo);
    v32 = ServantStatusSkillComponent_TypeInfo;
  }
  WrapControlText__textAdjust(
    skillExplanationLabel,
    explanationMessage,
    v32->static_fields->DETAIL_FONT_SIZE,
    v32->static_fields->DETAIL_FONT_SIZE,
    v32->static_fields->MAX_HEIGHT,
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
    *(UnityEngine_Color_o *)&v34 = UnityEngine_Color__get_white(0LL);
    if ( !skillTitleRangeLabel )
      goto LABEL_35;
  }
  else
  {
    *(UnityEngine_Color_o *)&v34 = UnityEngine_Color__get_gray(0LL);
    if ( !skillTitleRangeLabel )
      goto LABEL_35;
  }
  UIRangeLabel__set_color(skillTitleRangeLabel, *(UnityEngine_Color_o *)&v34, 0LL);
  v38 = (UIWidget_o *)this->fields.skillExplanationLabel;
  if ( releaseState )
  {
    *(UnityEngine_Color_o *)&v39 = UnityEngine_Color__get_white(0LL);
    if ( !v38 )
      goto LABEL_35;
  }
  else
  {
    *(UnityEngine_Color_o *)&v39 = UnityEngine_Color__get_gray(0LL);
    if ( !v38 )
      goto LABEL_35;
  }
  UIWidget__set_color(v38, *(UnityEngine_Color_o *)&v39, 0LL);
}