void __fastcall ServantStatusSkillComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  struct ServantStatusSkillComponent_StaticFields *static_fields; // x0
  int64_t v11; // x1

  if ( (byte_4B13D10 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusSkillComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_20685/*"img_skillclass_0"*/, v8, v9);
    byte_4B13D10 = 1;
  }
  static_fields = ServantStatusSkillComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DETAIL_FONT_SIZE = 0x1F400000012LL;
  v11 = StringLiteral_20685/*"img_skillclass_0"*/;
  static_fields->SKILL_NO_FILE_PREFIX = (struct System_String_o *)StringLiteral_20685/*"img_skillclass_0"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->SKILL_NO_FILE_PREFIX, v11, v2, v3, v4, v5, v6, v7);
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
    sub_1BCAA3C(this, method);
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
  __int64 v15; // x2
  ServantStatusSkillComponent_c *v16; // x0
  UISprite_o *titleNumFirstSprite; // x24
  System_String_o *SKILL_NO_FILE_PREFIX; // x25
  System_String_o *v19; // x0
  System_String_o *titleNumSecondSprite; // x0
  __int64 v21; // x1
  struct UISprite_o *v22; // x24
  System_String_o *v23; // x25
  System_String_o *v24; // x0
  System_String_o *v25; // x1
  ServantStatusSkillComponent_c *v26; // x0
  UISprite_o *v27; // x24
  System_String_o *v28; // x25
  System_String_o *v29; // x0
  __int64 v30; // x1
  ServantStatusSkillComponent_c *v31; // x0
  UILabel_o *skillExplanationLabel; // x24
  float v33; // s8
  unsigned int v34; // [xsp+8h] [xbp-58h] BYREF
  int32_t v35; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v35 = num;
  if ( (byte_4B13D0F & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusSkillComponent_TypeInfo, *(_QWORD *)&num, *(_QWORD *)&skillId);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B13D0F = 1;
  }
  v34 = 0;
  if ( num > 9 )
  {
    v16 = ServantStatusSkillComponent_TypeInfo;
    v34 = num / 0xAu;
    titleNumFirstSprite = this->fields.titleNumFirstSprite;
    if ( !ServantStatusSkillComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusSkillComponent_TypeInfo, *(_QWORD *)&num);
      v16 = ServantStatusSkillComponent_TypeInfo;
    }
    SKILL_NO_FILE_PREFIX = v16->static_fields->SKILL_NO_FILE_PREFIX;
    v19 = System_Int32__ToString((int32_t)&v34, 0LL);
    titleNumSecondSprite = System_String__Concat_62401220(SKILL_NO_FILE_PREFIX, v19, 0LL);
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
          v34 = v35 % 10;
          v22 = this->fields.titleNumSecondSprite;
          v23 = ServantStatusSkillComponent_TypeInfo->static_fields->SKILL_NO_FILE_PREFIX;
          v24 = System_Int32__ToString((int32_t)&v34, 0LL);
          titleNumSecondSprite = System_String__Concat_62401220(v23, v24, 0LL);
          if ( v22 )
          {
            v25 = titleNumSecondSprite;
            titleNumSecondSprite = (System_String_o *)v22;
            goto LABEL_18;
          }
        }
      }
    }
LABEL_29:
    sub_1BCAA3C(titleNumSecondSprite, v21);
  }
  v26 = ServantStatusSkillComponent_TypeInfo;
  v27 = this->fields.titleNumFirstSprite;
  if ( !ServantStatusSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusSkillComponent_TypeInfo, *(_QWORD *)&num);
    v26 = ServantStatusSkillComponent_TypeInfo;
  }
  v28 = v26->static_fields->SKILL_NO_FILE_PREFIX;
  v29 = System_Int32__ToString((int32_t)&v35, 0LL);
  titleNumSecondSprite = System_String__Concat_62401220(v28, v29, 0LL);
  if ( !v27 )
    goto LABEL_29;
  UISprite__set_spriteName(v27, titleNumSecondSprite, 0LL);
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
  v25 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_18:
  UISprite__set_spriteName((UISprite_o *)titleNumSecondSprite, v25, 0LL);
  v31 = ServantStatusSkillComponent_TypeInfo;
  skillExplanationLabel = this->fields.skillExplanationLabel;
  if ( !ServantStatusSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusSkillComponent_TypeInfo, v30);
    v31 = ServantStatusSkillComponent_TypeInfo;
  }
  WrapControlText__textAdjust(
    skillExplanationLabel,
    explanationMessage,
    v31->static_fields->DETAIL_FONT_SIZE,
    v31->static_fields->DETAIL_FONT_SIZE,
    v31->static_fields->MAX_HEIGHT,
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
  v33 = releaseState ? 1.0 : 0.5;
  if ( !titleNumSecondSprite )
    goto LABEL_29;
  v36.fields.a = 1.0;
  v36.fields.r = v33;
  v36.fields.g = v33;
  v36.fields.b = v33;
  UIRangeLabel__set_color((UIRangeLabel_o *)titleNumSecondSprite, v36, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillExplanationLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_29;
  v37.fields.a = 1.0;
  v37.fields.r = v33;
  v37.fields.g = v33;
  v37.fields.b = v33;
  UIWidget__set_color((UIWidget_o *)titleNumSecondSprite, v37, 0LL);
}