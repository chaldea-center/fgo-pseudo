void ServantStatusSkillComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct ServantStatusSkillComponent_StaticFields *static_fields; // x0

  if ( (byte_5935D52 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusSkillComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_21530/*"img_skillclass_0"*/);
    byte_5935D52 = 1;
  }
  v7 = StringLiteral_21530/*"img_skillclass_0"*/;
  static_fields = ServantStatusSkillComponent_TypeInfo->static_fields;
  static_fields->DETAIL_FONT_SIZE = 18;
  static_fields->SKILL_NO_FILE_PREFIX = (struct System_String_o *)v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->SKILL_NO_FILE_PREFIX, v7, v1, v2, v3, v4, v5, v6);
}


void ServantStatusSkillComponent___ctor(ServantStatusSkillComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


int32_t ServantStatusSkillComponent__GetHeight(ServantStatusSkillComponent_o *this, const MethodInfo *method)
{
  struct UILabel_o *skillExplanationLabel; // x8

  skillExplanationLabel = this->fields.skillExplanationLabel;
  if ( !skillExplanationLabel )
    sub_21FFECC(this, method);
  return skillExplanationLabel->fields.mHeight;
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusSkillComponent__SetItem(
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
  UISprite_o *titleNumFirstSprite; // x25
  int v16; // w8
  System_String_o *SKILL_NO_FILE_PREFIX; // x26
  System_String_o *v18; // x0
  System_String_o *titleNumSecondSprite; // x0
  __int64 v20; // x1
  unsigned int v21; // w9
  struct UISprite_o *v22; // x24
  System_String_o *v23; // x25
  System_String_o *v24; // x0
  System_String_o *v25; // x1
  ServantStatusSkillComponent_c *v26; // x0
  UISprite_o *v27; // x24
  System_String_o *v28; // x25
  System_String_o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  ServantStatusSkillComponent_c *v32; // x0
  UILabel_o *skillExplanationLabel; // x24
  float v34; // s3 OVERLAPPED
  float v35; // s8
  float v36; // s0
  float v37; // s1
  float v38; // s2
  unsigned int v39; // [xsp+8h] [xbp-68h] BYREF
  int32_t v40; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v40 = num;
  if ( (byte_5935D51 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusSkillComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5935D51 = 1;
  }
  v39 = 0;
  if ( num > 9 )
  {
    v14 = ServantStatusSkillComponent_TypeInfo;
    titleNumFirstSprite = this->fields.titleNumFirstSprite;
    v16 = *(&ServantStatusSkillComponent_TypeInfo->_2.cctor_finished + 1);
    v39 = num / 0xAu;
    if ( !v16 )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusSkillComponent_TypeInfo, *(_QWORD *)&num, *(_QWORD *)&skillId);
      v14 = ServantStatusSkillComponent_TypeInfo;
    }
    SKILL_NO_FILE_PREFIX = v14->static_fields->SKILL_NO_FILE_PREFIX;
    v18 = System_Int32__ToString((int32_t)&v39, 0);
    titleNumSecondSprite = System_String__Concat_75438412(SKILL_NO_FILE_PREFIX, v18, 0);
    if ( titleNumFirstSprite )
    {
      UISprite__set_spriteName(titleNumFirstSprite, titleNumSecondSprite, 0);
      titleNumSecondSprite = (System_String_o *)this->fields.titleNumSecondSprite;
      if ( titleNumSecondSprite )
      {
        titleNumSecondSprite = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)titleNumSecondSprite,
                                                    0);
        if ( titleNumSecondSprite )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleNumSecondSprite, 1, 0);
          v21 = num % 0xAu;
          v22 = this->fields.titleNumSecondSprite;
          v23 = ServantStatusSkillComponent_TypeInfo->static_fields->SKILL_NO_FILE_PREFIX;
          v39 = v21;
          v24 = System_Int32__ToString((int32_t)&v39, 0);
          titleNumSecondSprite = System_String__Concat_75438412(v23, v24, 0);
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
    sub_21FFECC(titleNumSecondSprite, v20);
  }
  v26 = ServantStatusSkillComponent_TypeInfo;
  v27 = this->fields.titleNumFirstSprite;
  if ( !*(&ServantStatusSkillComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusSkillComponent_TypeInfo, *(_QWORD *)&num, *(_QWORD *)&skillId);
    v26 = ServantStatusSkillComponent_TypeInfo;
  }
  v28 = v26->static_fields->SKILL_NO_FILE_PREFIX;
  v29 = System_Int32__ToString((int32_t)&v40, 0);
  titleNumSecondSprite = System_String__Concat_75438412(v28, v29, 0);
  if ( !v27 )
    goto LABEL_29;
  UISprite__set_spriteName(v27, titleNumSecondSprite, 0);
  titleNumSecondSprite = (System_String_o *)this->fields.titleNumSecondSprite;
  if ( !titleNumSecondSprite )
    goto LABEL_29;
  titleNumSecondSprite = (System_String_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)titleNumSecondSprite,
                                              0);
  if ( !titleNumSecondSprite )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleNumSecondSprite, 0, 0);
  titleNumSecondSprite = (System_String_o *)this->fields.titleNumSecondSprite;
  if ( !titleNumSecondSprite )
    goto LABEL_29;
  v25 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_18:
  UISprite__set_spriteName((UISprite_o *)titleNumSecondSprite, v25, 0);
  v32 = ServantStatusSkillComponent_TypeInfo;
  skillExplanationLabel = this->fields.skillExplanationLabel;
  if ( !*(&ServantStatusSkillComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusSkillComponent_TypeInfo, v30, v31);
    v32 = ServantStatusSkillComponent_TypeInfo;
  }
  WrapControlText__textAdjust(
    skillExplanationLabel,
    explanationMessage,
    v32->static_fields->DETAIL_FONT_SIZE,
    v32->static_fields->DETAIL_FONT_SIZE,
    0);
  titleNumSecondSprite = (System_String_o *)this->fields.skillIcon;
  if ( !titleNumSecondSprite )
    goto LABEL_29;
  SkillIconComponent__Set((SkillIconComponent_o *)titleNumSecondSprite, skillId, 0);
  titleNumSecondSprite = (System_String_o *)this->fields.skillTitleRangeLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_29;
  UIRangeLabel__Set((UIRangeLabel_o *)titleNumSecondSprite, titleMessage, 0, 1, 0, 0, 0);
  titleNumSecondSprite = (System_String_o *)this->fields.skillIcon;
  if ( !titleNumSecondSprite )
    goto LABEL_29;
  SkillIconComponent__SetMask((SkillIconComponent_o *)titleNumSecondSprite, !releaseState, 0);
  titleNumSecondSprite = (System_String_o *)this->fields.skillTitleRangeLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_29;
  v34 = 1.0;
  v35 = releaseState ? 1.0 : 0.5;
  v36 = v35;
  v37 = v35;
  v38 = v35;
  UIRangeLabel__set_color((UIRangeLabel_o *)titleNumSecondSprite, *(UnityEngine_Color_o *)(&v34 - 3), 0);
  titleNumSecondSprite = (System_String_o *)this->fields.skillExplanationLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_29;
  v41.fields.r = v35;
  v41.fields.g = v35;
  v41.fields.b = v35;
  v41.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)titleNumSecondSprite, v41, 0);
}