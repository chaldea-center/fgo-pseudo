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
  struct ServantStatusSkillComponent_StaticFields *static_fields; // x0
  int64_t v10; // x1

  if ( (byte_4BFB1B5 & 1) == 0 )
  {
    sub_1C2E12C(&ServantStatusSkillComponent_TypeInfo, v1);
    sub_1C2E12C(&StringLiteral_20845/*"img_skillclass_0"*/, v8);
    byte_4BFB1B5 = 1;
  }
  static_fields = ServantStatusSkillComponent_TypeInfo->static_fields;
  static_fields->DETAIL_FONT_SIZE = 18;
  v10 = StringLiteral_20845/*"img_skillclass_0"*/;
  static_fields->SKILL_NO_FILE_PREFIX = (struct System_String_o *)StringLiteral_20845/*"img_skillclass_0"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->SKILL_NO_FILE_PREFIX, v10, v2, v3, v4, v5, v6, v7);
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
    sub_1C2E388(this, method);
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
  UISprite_o *titleNumFirstSprite; // x24
  System_String_o *SKILL_NO_FILE_PREFIX; // x25
  System_String_o *v18; // x0
  System_String_o *titleNumSecondSprite; // x0
  __int64 v20; // x1
  struct UISprite_o *v21; // x24
  System_String_o *v22; // x25
  System_String_o *v23; // x0
  System_String_o *v24; // x1
  ServantStatusSkillComponent_c *v25; // x0
  UISprite_o *v26; // x24
  System_String_o *v27; // x25
  System_String_o *v28; // x0
  ServantStatusSkillComponent_c *v29; // x0
  UILabel_o *skillExplanationLabel; // x24
  float v31; // s8
  unsigned int v32; // [xsp+8h] [xbp-58h] BYREF
  int32_t v33; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v33 = num;
  if ( (byte_4BFB1B4 & 1) == 0 )
  {
    sub_1C2E12C(&ServantStatusSkillComponent_TypeInfo, *(_QWORD *)&num);
    sub_1C2E12C(&StringLiteral_1/*""*/, v14);
    byte_4BFB1B4 = 1;
  }
  v32 = 0;
  if ( num > 9 )
  {
    v15 = ServantStatusSkillComponent_TypeInfo;
    v32 = num / 0xAu;
    titleNumFirstSprite = this->fields.titleNumFirstSprite;
    if ( !ServantStatusSkillComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusSkillComponent_TypeInfo);
      v15 = ServantStatusSkillComponent_TypeInfo;
    }
    SKILL_NO_FILE_PREFIX = v15->static_fields->SKILL_NO_FILE_PREFIX;
    v18 = System_Int32__ToString((int32_t)&v32, 0LL);
    titleNumSecondSprite = System_String__Concat_63235584(SKILL_NO_FILE_PREFIX, v18, 0LL);
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
          v32 = v33 % 10;
          v21 = this->fields.titleNumSecondSprite;
          v22 = ServantStatusSkillComponent_TypeInfo->static_fields->SKILL_NO_FILE_PREFIX;
          v23 = System_Int32__ToString((int32_t)&v32, 0LL);
          titleNumSecondSprite = System_String__Concat_63235584(v22, v23, 0LL);
          if ( v21 )
          {
            v24 = titleNumSecondSprite;
            titleNumSecondSprite = (System_String_o *)v21;
            goto LABEL_18;
          }
        }
      }
    }
LABEL_29:
    sub_1C2E388(titleNumSecondSprite, v20);
  }
  v25 = ServantStatusSkillComponent_TypeInfo;
  v26 = this->fields.titleNumFirstSprite;
  if ( !ServantStatusSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusSkillComponent_TypeInfo);
    v25 = ServantStatusSkillComponent_TypeInfo;
  }
  v27 = v25->static_fields->SKILL_NO_FILE_PREFIX;
  v28 = System_Int32__ToString((int32_t)&v33, 0LL);
  titleNumSecondSprite = System_String__Concat_63235584(v27, v28, 0LL);
  if ( !v26 )
    goto LABEL_29;
  UISprite__set_spriteName(v26, titleNumSecondSprite, 0LL);
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
  v24 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_18:
  UISprite__set_spriteName((UISprite_o *)titleNumSecondSprite, v24, 0LL);
  v29 = ServantStatusSkillComponent_TypeInfo;
  skillExplanationLabel = this->fields.skillExplanationLabel;
  if ( !ServantStatusSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusSkillComponent_TypeInfo);
    v29 = ServantStatusSkillComponent_TypeInfo;
  }
  WrapControlText__textAdjust(
    skillExplanationLabel,
    explanationMessage,
    v29->static_fields->DETAIL_FONT_SIZE,
    v29->static_fields->DETAIL_FONT_SIZE,
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
  v31 = releaseState ? 1.0 : 0.5;
  if ( !titleNumSecondSprite )
    goto LABEL_29;
  v34.fields.a = 1.0;
  v34.fields.r = v31;
  v34.fields.g = v31;
  v34.fields.b = v31;
  UIRangeLabel__set_color((UIRangeLabel_o *)titleNumSecondSprite, v34, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillExplanationLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_29;
  v35.fields.a = 1.0;
  v35.fields.r = v31;
  v35.fields.g = v31;
  v35.fields.b = v31;
  UIWidget__set_color((UIWidget_o *)titleNumSecondSprite, v35, 0LL);
}