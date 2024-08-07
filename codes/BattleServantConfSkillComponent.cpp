void __fastcall BattleServantConfSkillComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  struct BattleServantConfSkillComponent_StaticFields *static_fields; // x0
  int32_t v6; // w1

  if ( (byte_4A01AD0 & 1) == 0 )
  {
    sub_1B64A00(&BattleServantConfSkillComponent_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_20388/*"img_skillclass_0"*/, v4);
    byte_4A01AD0 = 1;
  }
  static_fields = BattleServantConfSkillComponent_TypeInfo->static_fields;
  static_fields->MAX_HEIGHT = 500;
  v6 = StringLiteral_20388/*"img_skillclass_0"*/;
  static_fields->SKILL_NO_FILE_PREFIX = (struct System_String_o *)StringLiteral_20388/*"img_skillclass_0"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->SKILL_NO_FILE_PREFIX, v6, v2, v3);
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
    sub_1B64C5C(this, method);
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
  BattleServantConfSkillComponent_c *v25; // x0
  UISprite_o *titleNumFirstSprite; // x24
  System_String_o *SKILL_NO_FILE_PREFIX; // x25
  System_String_o *v28; // x0
  BattleServantConfSkillComponent_c *v29; // x0
  UILabel_o *skillExplanationLabel; // x25
  int32_t DETAIL_FONT_SIZE; // w24
  float v32; // s8
  unsigned int v33; // [xsp+8h] [xbp-58h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v34 = num;
  if ( (byte_4A01ACF & 1) == 0 )
  {
    sub_1B64A00(&BattleServantConfSkillComponent_TypeInfo, *(_QWORD *)&num);
    sub_1B64A00(&StringLiteral_1/*""*/, v14);
    byte_4A01ACF = 1;
  }
  v33 = 0;
  if ( num <= 9 )
  {
    v25 = BattleServantConfSkillComponent_TypeInfo;
    titleNumFirstSprite = this->fields.titleNumFirstSprite;
    if ( !BattleServantConfSkillComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantConfSkillComponent_TypeInfo);
      v25 = BattleServantConfSkillComponent_TypeInfo;
    }
    SKILL_NO_FILE_PREFIX = v25->static_fields->SKILL_NO_FILE_PREFIX;
    v28 = System_Int32__ToString((int32_t)&v34, 0LL);
    titleNumSecondSprite = System_String__Concat_61385136(SKILL_NO_FILE_PREFIX, v28, 0LL);
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
            goto LABEL_18;
          }
        }
      }
    }
LABEL_30:
    sub_1B64C5C(titleNumSecondSprite, v20);
  }
  v15 = BattleServantConfSkillComponent_TypeInfo;
  v33 = num / 0xAu;
  v16 = this->fields.titleNumFirstSprite;
  if ( !BattleServantConfSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfSkillComponent_TypeInfo);
    v15 = BattleServantConfSkillComponent_TypeInfo;
  }
  v17 = v15->static_fields->SKILL_NO_FILE_PREFIX;
  v18 = System_Int32__ToString((int32_t)&v33, 0LL);
  titleNumSecondSprite = System_String__Concat_61385136(v17, v18, 0LL);
  if ( !v16 )
    goto LABEL_30;
  UISprite__set_spriteName(v16, titleNumSecondSprite, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.titleNumSecondSprite;
  if ( !titleNumSecondSprite )
    goto LABEL_30;
  titleNumSecondSprite = (System_String_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)titleNumSecondSprite,
                                              0LL);
  if ( !titleNumSecondSprite )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleNumSecondSprite, 1, 0LL);
  v33 = v34 % 10;
  v21 = this->fields.titleNumSecondSprite;
  v22 = BattleServantConfSkillComponent_TypeInfo->static_fields->SKILL_NO_FILE_PREFIX;
  v23 = System_Int32__ToString((int32_t)&v33, 0LL);
  titleNumSecondSprite = System_String__Concat_61385136(v22, v23, 0LL);
  if ( !v21 )
    goto LABEL_30;
  v24 = titleNumSecondSprite;
  titleNumSecondSprite = (System_String_o *)v21;
LABEL_18:
  UISprite__set_spriteName((UISprite_o *)titleNumSecondSprite, v24, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillExplanationLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_30;
  UIWidget__set_height((UIWidget_o *)titleNumSecondSprite, this->fields.DEFAULT_HEIGHT, 0LL);
  v29 = BattleServantConfSkillComponent_TypeInfo;
  skillExplanationLabel = this->fields.skillExplanationLabel;
  DETAIL_FONT_SIZE = this->fields.DETAIL_FONT_SIZE;
  if ( !BattleServantConfSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfSkillComponent_TypeInfo);
    v29 = BattleServantConfSkillComponent_TypeInfo;
  }
  WrapControlText__textAdjust(
    skillExplanationLabel,
    explanationMessage,
    DETAIL_FONT_SIZE,
    DETAIL_FONT_SIZE,
    v29->static_fields->MAX_HEIGHT,
    0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillIcon;
  if ( !titleNumSecondSprite )
    goto LABEL_30;
  SkillIconComponent__Set((SkillIconComponent_o *)titleNumSecondSprite, skillId, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillTitleRangeLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_30;
  UIRangeLabel__Set((UIRangeLabel_o *)titleNumSecondSprite, titleMessage, 0LL, 1, 0, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillIcon;
  if ( !titleNumSecondSprite )
    goto LABEL_30;
  SkillIconComponent__SetMask((SkillIconComponent_o *)titleNumSecondSprite, !releaseState, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillTitleRangeLabel;
  v32 = releaseState ? 1.0 : 0.5;
  if ( !titleNumSecondSprite )
    goto LABEL_30;
  v35.fields.a = 1.0;
  v35.fields.r = v32;
  v35.fields.g = v32;
  v35.fields.b = v32;
  UIRangeLabel__set_color((UIRangeLabel_o *)titleNumSecondSprite, v35, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillExplanationLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_30;
  v36.fields.a = 1.0;
  v36.fields.r = v32;
  v36.fields.g = v32;
  v36.fields.b = v32;
  UIWidget__set_color((UIWidget_o *)titleNumSecondSprite, v36, 0LL);
}