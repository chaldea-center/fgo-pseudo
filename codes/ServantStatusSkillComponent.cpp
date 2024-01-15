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

  if ( (byte_40FCA92 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusSkillComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_19555/*"img_skillclass_0"*/, v8);
    byte_40FCA92 = 1;
  }
  ServantStatusSkillComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
  ServantStatusSkillComponent_TypeInfo->static_fields->MAX_HEIGHT = 500;
  v9 = ServantStatusSkillComponent_TypeInfo;
  ServantStatusSkillComponent_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
  static_fields = v9->static_fields;
  v11 = (System_Int32_array **)StringLiteral_19555/*"img_skillclass_0"*/;
  static_fields->SKILL_NO_FILE_PREFIX = (struct System_String_o *)StringLiteral_19555/*"img_skillclass_0"*/;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->SKILL_NO_FILE_PREFIX, v11, v2, v3, v4, v5, v6, v7);
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
    sub_B170D4();
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
  System_String_o *v19; // x0
  UnityEngine_Component_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  struct UISprite_o *v22; // x24
  System_String_o *v23; // x25
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  System_String_o *v26; // x1
  UISprite_o *v27; // x0
  UISprite_o *titleNumFirstSprite; // x24
  ServantStatusSkillComponent_c *v29; // x0
  System_String_o *SKILL_NO_FILE_PREFIX; // x25
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  UnityEngine_Component_o *titleNumSecondSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *skillExplanationLabel; // x24
  ServantStatusSkillComponent_c *v36; // x0
  SkillIconComponent_o *skillIcon; // x0
  UIRangeLabel_o *skillTitleRangeLabel; // x0
  SkillIconComponent_o *v39; // x0
  UIRangeLabel_o *v40; // x21
  int v41; // s0
  UIWidget_o *v45; // x20
  int v46; // s0
  unsigned int v50; // [xsp+8h] [xbp-48h] BYREF
  int32_t v51; // [xsp+Ch] [xbp-44h] BYREF

  v51 = num;
  if ( (byte_40FCA91 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusSkillComponent_TypeInfo, *(_QWORD *)&num);
    sub_B16FFC(&StringLiteral_1/*""*/, v14);
    byte_40FCA91 = 1;
  }
  v50 = 0;
  if ( num <= 9 )
  {
    titleNumFirstSprite = this->fields.titleNumFirstSprite;
    v29 = ServantStatusSkillComponent_TypeInfo;
    if ( (BYTE3(ServantStatusSkillComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusSkillComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusSkillComponent_TypeInfo);
      v29 = ServantStatusSkillComponent_TypeInfo;
    }
    SKILL_NO_FILE_PREFIX = v29->static_fields->SKILL_NO_FILE_PREFIX;
    v31 = System_Int32__ToString((int32_t)&v51, 0LL);
    v32 = System_String__Concat_43743732(SKILL_NO_FILE_PREFIX, v31, 0LL);
    if ( titleNumFirstSprite )
    {
      UISprite__set_spriteName(titleNumFirstSprite, v32, 0LL);
      titleNumSecondSprite = (UnityEngine_Component_o *)this->fields.titleNumSecondSprite;
      if ( titleNumSecondSprite )
      {
        gameObject = UnityEngine_Component__get_gameObject(titleNumSecondSprite, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          v27 = this->fields.titleNumSecondSprite;
          if ( v27 )
          {
            v26 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_20;
          }
        }
      }
    }
LABEL_35:
    sub_B170D4();
  }
  v15 = ServantStatusSkillComponent_TypeInfo;
  v50 = num / 0xAu;
  v16 = this->fields.titleNumFirstSprite;
  if ( (BYTE3(ServantStatusSkillComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusSkillComponent_TypeInfo);
    v15 = ServantStatusSkillComponent_TypeInfo;
  }
  v17 = v15->static_fields->SKILL_NO_FILE_PREFIX;
  v18 = System_Int32__ToString((int32_t)&v50, 0LL);
  v19 = System_String__Concat_43743732(v17, v18, 0LL);
  if ( !v16 )
    goto LABEL_35;
  UISprite__set_spriteName(v16, v19, 0LL);
  v20 = (UnityEngine_Component_o *)this->fields.titleNumSecondSprite;
  if ( !v20 )
    goto LABEL_35;
  v21 = UnityEngine_Component__get_gameObject(v20, 0LL);
  if ( !v21 )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(v21, 1, 0LL);
  v50 = v51 % 10;
  v22 = this->fields.titleNumSecondSprite;
  v23 = ServantStatusSkillComponent_TypeInfo->static_fields->SKILL_NO_FILE_PREFIX;
  v24 = System_Int32__ToString((int32_t)&v50, 0LL);
  v25 = System_String__Concat_43743732(v23, v24, 0LL);
  if ( !v22 )
    goto LABEL_35;
  v26 = v25;
  v27 = v22;
LABEL_20:
  UISprite__set_spriteName(v27, v26, 0LL);
  skillExplanationLabel = this->fields.skillExplanationLabel;
  v36 = ServantStatusSkillComponent_TypeInfo;
  if ( (BYTE3(ServantStatusSkillComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusSkillComponent_TypeInfo);
    v36 = ServantStatusSkillComponent_TypeInfo;
  }
  WrapControlText__textAdjust(
    skillExplanationLabel,
    explanationMessage,
    v36->static_fields->DETAIL_FONT_SIZE,
    v36->static_fields->DETAIL_FONT_SIZE,
    v36->static_fields->MAX_HEIGHT,
    0LL);
  skillIcon = this->fields.skillIcon;
  if ( !skillIcon )
    goto LABEL_35;
  SkillIconComponent__Set(skillIcon, skillId, 0LL);
  skillTitleRangeLabel = this->fields.skillTitleRangeLabel;
  if ( !skillTitleRangeLabel )
    goto LABEL_35;
  UIRangeLabel__Set(skillTitleRangeLabel, titleMessage, 0LL, 1, 0, 0LL);
  v39 = this->fields.skillIcon;
  if ( !v39 )
    goto LABEL_35;
  SkillIconComponent__SetMask(v39, !releaseState, 0LL);
  v40 = this->fields.skillTitleRangeLabel;
  if ( releaseState )
  {
    *(UnityEngine_Color_o *)&v41 = UnityEngine_Color__get_white(0LL);
    if ( !v40 )
      goto LABEL_35;
  }
  else
  {
    *(UnityEngine_Color_o *)&v41 = UnityEngine_Color__get_gray(0LL);
    if ( !v40 )
      goto LABEL_35;
  }
  UIRangeLabel__set_color(v40, *(UnityEngine_Color_o *)&v41, 0LL);
  v45 = (UIWidget_o *)this->fields.skillExplanationLabel;
  if ( releaseState )
  {
    *(UnityEngine_Color_o *)&v46 = UnityEngine_Color__get_white(0LL);
    if ( !v45 )
      goto LABEL_35;
  }
  else
  {
    *(UnityEngine_Color_o *)&v46 = UnityEngine_Color__get_gray(0LL);
    if ( !v45 )
      goto LABEL_35;
  }
  UIWidget__set_color(v45, *(UnityEngine_Color_o *)&v46, 0LL);
}