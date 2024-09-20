void __fastcall ServantStatusSkillComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct ServantStatusSkillComponent_StaticFields *static_fields; // x0
  int32_t v4; // w1

  if ( (byte_4A5864F & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusSkillComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_20466/*"img_skillclass_0"*/);
    byte_4A5864F = 1;
  }
  static_fields = ServantStatusSkillComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DETAIL_FONT_SIZE = 0x1F400000012LL;
  v4 = StringLiteral_20466/*"img_skillclass_0"*/;
  static_fields->SKILL_NO_FILE_PREFIX = (struct System_String_o *)StringLiteral_20466/*"img_skillclass_0"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->SKILL_NO_FILE_PREFIX, v4, v1, v2);
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
    sub_1B8880C(this, method);
  return skillExplanationLabel->fields.mHeight;
}


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
  ServantStatusSkillComponent_c *v14; // x0
  UISprite_o *titleNumFirstSprite; // x24
  System_String_o *SKILL_NO_FILE_PREFIX; // x25
  System_String_o *v17; // x0
  System_String_o *titleNumSecondSprite; // x0
  __int64 v19; // x1
  struct UISprite_o *v20; // x24
  System_String_o *v21; // x25
  System_String_o *v22; // x0
  System_String_o *v23; // x1
  ServantStatusSkillComponent_c *v24; // x0
  UISprite_o *v25; // x24
  System_String_o *v26; // x25
  System_String_o *v27; // x0
  ServantStatusSkillComponent_c *v28; // x0
  UILabel_o *skillExplanationLabel; // x24
  float v30; // s8
  unsigned int v31; // [xsp+8h] [xbp-58h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v32 = num;
  if ( (byte_4A5864E & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusSkillComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5864E = 1;
  }
  v31 = 0;
  if ( num > 9 )
  {
    v14 = ServantStatusSkillComponent_TypeInfo;
    v31 = num / 0xAu;
    titleNumFirstSprite = this->fields.titleNumFirstSprite;
    if ( !ServantStatusSkillComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusSkillComponent_TypeInfo);
      v14 = ServantStatusSkillComponent_TypeInfo;
    }
    SKILL_NO_FILE_PREFIX = v14->static_fields->SKILL_NO_FILE_PREFIX;
    v17 = System_Int32__ToString((int32_t)&v31, 0LL);
    titleNumSecondSprite = System_String__Concat_61707032(SKILL_NO_FILE_PREFIX, v17, 0LL);
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
          v31 = v32 % 10;
          v20 = this->fields.titleNumSecondSprite;
          v21 = ServantStatusSkillComponent_TypeInfo->static_fields->SKILL_NO_FILE_PREFIX;
          v22 = System_Int32__ToString((int32_t)&v31, 0LL);
          titleNumSecondSprite = System_String__Concat_61707032(v21, v22, 0LL);
          if ( v20 )
          {
            v23 = titleNumSecondSprite;
            titleNumSecondSprite = (System_String_o *)v20;
            goto LABEL_18;
          }
        }
      }
    }
LABEL_29:
    sub_1B8880C(titleNumSecondSprite, v19);
  }
  v24 = ServantStatusSkillComponent_TypeInfo;
  v25 = this->fields.titleNumFirstSprite;
  if ( !ServantStatusSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusSkillComponent_TypeInfo);
    v24 = ServantStatusSkillComponent_TypeInfo;
  }
  v26 = v24->static_fields->SKILL_NO_FILE_PREFIX;
  v27 = System_Int32__ToString((int32_t)&v32, 0LL);
  titleNumSecondSprite = System_String__Concat_61707032(v26, v27, 0LL);
  if ( !v25 )
    goto LABEL_29;
  UISprite__set_spriteName(v25, titleNumSecondSprite, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.titleNumSecondSprite;
  if ( !titleNumSecondSprite )
    goto LABEL_29;
  titleNumSecondSprite = (System_String_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)titleNumSecondSprite,
                                              0LL);
  if ( !titleNumSecondSprite )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleNumSecondSprite, 0, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.titleNumSecondSprite;
  if ( !titleNumSecondSprite )
    goto LABEL_29;
  v23 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_18:
  UISprite__set_spriteName((UISprite_o *)titleNumSecondSprite, v23, 0LL);
  v28 = ServantStatusSkillComponent_TypeInfo;
  skillExplanationLabel = this->fields.skillExplanationLabel;
  if ( !ServantStatusSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusSkillComponent_TypeInfo);
    v28 = ServantStatusSkillComponent_TypeInfo;
  }
  WrapControlText__textAdjust(
    skillExplanationLabel,
    explanationMessage,
    v28->static_fields->DETAIL_FONT_SIZE,
    v28->static_fields->DETAIL_FONT_SIZE,
    v28->static_fields->MAX_HEIGHT,
    0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillIcon;
  if ( !titleNumSecondSprite )
    goto LABEL_29;
  SkillIconComponent__Set((SkillIconComponent_o *)titleNumSecondSprite, skillId, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillTitleRangeLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_29;
  UIRangeLabel__Set((UIRangeLabel_o *)titleNumSecondSprite, titleMessage, 0LL, 1, 0, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillIcon;
  if ( !titleNumSecondSprite )
    goto LABEL_29;
  SkillIconComponent__SetMask((SkillIconComponent_o *)titleNumSecondSprite, !releaseState, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillTitleRangeLabel;
  v30 = releaseState ? 1.0 : 0.5;
  if ( !titleNumSecondSprite )
    goto LABEL_29;
  v33.fields.a = 1.0;
  v33.fields.r = v30;
  v33.fields.g = v30;
  v33.fields.b = v30;
  UIRangeLabel__set_color((UIRangeLabel_o *)titleNumSecondSprite, v33, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillExplanationLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_29;
  v34.fields.a = 1.0;
  v34.fields.r = v30;
  v34.fields.g = v30;
  v34.fields.b = v30;
  UIWidget__set_color((UIWidget_o *)titleNumSecondSprite, v34, 0LL);
}