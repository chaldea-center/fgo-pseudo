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

  if ( (byte_40F8A1E & 1) == 0 )
  {
    sub_B16FFC(&BattleServantConfSkillComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_19555/*"img_skillclass_0"*/, v8);
    byte_40F8A1E = 1;
  }
  BattleServantConfSkillComponent_TypeInfo->static_fields->MAX_HEIGHT = 500;
  BattleServantConfSkillComponent_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
  static_fields = BattleServantConfSkillComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_19555/*"img_skillclass_0"*/;
  static_fields->SKILL_NO_FILE_PREFIX = (struct System_String_o *)StringLiteral_19555/*"img_skillclass_0"*/;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->SKILL_NO_FILE_PREFIX, v10, v2, v3, v4, v5, v6, v7);
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
    sub_B170D4();
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
  BattleServantConfSkillComponent_c *v29; // x0
  System_String_o *SKILL_NO_FILE_PREFIX; // x25
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  UnityEngine_Component_o *titleNumSecondSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *skillExplanationLabel; // x0
  UILabel_o *v36; // x25
  int32_t DETAIL_FONT_SIZE; // w24
  BattleServantConfSkillComponent_c *v38; // x0
  SkillIconComponent_o *skillIcon; // x0
  UIRangeLabel_o *skillTitleRangeLabel; // x0
  SkillIconComponent_o *v41; // x0
  UIRangeLabel_o *v42; // x21
  int v43; // s0
  UIWidget_o *v47; // x20
  int v48; // s0
  unsigned int v52; // [xsp+8h] [xbp-48h] BYREF
  int32_t v53; // [xsp+Ch] [xbp-44h] BYREF

  v53 = num;
  if ( (byte_40F8A1D & 1) == 0 )
  {
    sub_B16FFC(&BattleServantConfSkillComponent_TypeInfo, *(_QWORD *)&num);
    sub_B16FFC(&StringLiteral_1/*""*/, v14);
    byte_40F8A1D = 1;
  }
  v52 = 0;
  if ( num <= 9 )
  {
    titleNumFirstSprite = this->fields.titleNumFirstSprite;
    v29 = BattleServantConfSkillComponent_TypeInfo;
    if ( (BYTE3(BattleServantConfSkillComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleServantConfSkillComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantConfSkillComponent_TypeInfo);
      v29 = BattleServantConfSkillComponent_TypeInfo;
    }
    SKILL_NO_FILE_PREFIX = v29->static_fields->SKILL_NO_FILE_PREFIX;
    v31 = System_Int32__ToString((int32_t)&v53, 0LL);
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
LABEL_36:
    sub_B170D4();
  }
  v15 = BattleServantConfSkillComponent_TypeInfo;
  v52 = num / 0xAu;
  v16 = this->fields.titleNumFirstSprite;
  if ( (BYTE3(BattleServantConfSkillComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantConfSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfSkillComponent_TypeInfo);
    v15 = BattleServantConfSkillComponent_TypeInfo;
  }
  v17 = v15->static_fields->SKILL_NO_FILE_PREFIX;
  v18 = System_Int32__ToString((int32_t)&v52, 0LL);
  v19 = System_String__Concat_43743732(v17, v18, 0LL);
  if ( !v16 )
    goto LABEL_36;
  UISprite__set_spriteName(v16, v19, 0LL);
  v20 = (UnityEngine_Component_o *)this->fields.titleNumSecondSprite;
  if ( !v20 )
    goto LABEL_36;
  v21 = UnityEngine_Component__get_gameObject(v20, 0LL);
  if ( !v21 )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(v21, 1, 0LL);
  v52 = v53 % 10;
  v22 = this->fields.titleNumSecondSprite;
  v23 = BattleServantConfSkillComponent_TypeInfo->static_fields->SKILL_NO_FILE_PREFIX;
  v24 = System_Int32__ToString((int32_t)&v52, 0LL);
  v25 = System_String__Concat_43743732(v23, v24, 0LL);
  if ( !v22 )
    goto LABEL_36;
  v26 = v25;
  v27 = v22;
LABEL_20:
  UISprite__set_spriteName(v27, v26, 0LL);
  skillExplanationLabel = (UIWidget_o *)this->fields.skillExplanationLabel;
  if ( !skillExplanationLabel )
    goto LABEL_36;
  UIWidget__set_height(skillExplanationLabel, this->fields.DEFAULT_HEIGHT, 0LL);
  v36 = this->fields.skillExplanationLabel;
  DETAIL_FONT_SIZE = this->fields.DETAIL_FONT_SIZE;
  v38 = BattleServantConfSkillComponent_TypeInfo;
  if ( (BYTE3(BattleServantConfSkillComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantConfSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfSkillComponent_TypeInfo);
    v38 = BattleServantConfSkillComponent_TypeInfo;
  }
  WrapControlText__textAdjust(
    v36,
    explanationMessage,
    DETAIL_FONT_SIZE,
    DETAIL_FONT_SIZE,
    v38->static_fields->MAX_HEIGHT,
    0LL);
  skillIcon = this->fields.skillIcon;
  if ( !skillIcon )
    goto LABEL_36;
  SkillIconComponent__Set(skillIcon, skillId, 0LL);
  skillTitleRangeLabel = this->fields.skillTitleRangeLabel;
  if ( !skillTitleRangeLabel )
    goto LABEL_36;
  UIRangeLabel__Set(skillTitleRangeLabel, titleMessage, 0LL, 1, 0, 0LL);
  v41 = this->fields.skillIcon;
  if ( !v41 )
    goto LABEL_36;
  SkillIconComponent__SetMask(v41, !releaseState, 0LL);
  v42 = this->fields.skillTitleRangeLabel;
  if ( releaseState )
  {
    *(UnityEngine_Color_o *)&v43 = UnityEngine_Color__get_white(0LL);
    if ( !v42 )
      goto LABEL_36;
  }
  else
  {
    *(UnityEngine_Color_o *)&v43 = UnityEngine_Color__get_gray(0LL);
    if ( !v42 )
      goto LABEL_36;
  }
  UIRangeLabel__set_color(v42, *(UnityEngine_Color_o *)&v43, 0LL);
  v47 = (UIWidget_o *)this->fields.skillExplanationLabel;
  if ( releaseState )
  {
    *(UnityEngine_Color_o *)&v48 = UnityEngine_Color__get_white(0LL);
    if ( !v47 )
      goto LABEL_36;
  }
  else
  {
    *(UnityEngine_Color_o *)&v48 = UnityEngine_Color__get_gray(0LL);
    if ( !v47 )
      goto LABEL_36;
  }
  UIWidget__set_color(v47, *(UnityEngine_Color_o *)&v48, 0LL);
}