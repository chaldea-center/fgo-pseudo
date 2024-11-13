void __fastcall BattleServantConfSkillComponent___cctor(const MethodInfo *method)
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
  struct BattleServantConfSkillComponent_StaticFields *static_fields; // x0
  int64_t v11; // x1

  if ( (byte_4B1929C & 1) == 0 )
  {
    sub_1BCA7E0(&BattleServantConfSkillComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_20685/*"img_skillclass_0"*/, v8, v9);
    byte_4B1929C = 1;
  }
  static_fields = BattleServantConfSkillComponent_TypeInfo->static_fields;
  static_fields->MAX_HEIGHT = 500;
  v11 = StringLiteral_20685/*"img_skillclass_0"*/;
  static_fields->SKILL_NO_FILE_PREFIX = (struct System_String_o *)StringLiteral_20685/*"img_skillclass_0"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->SKILL_NO_FILE_PREFIX, v11, v2, v3, v4, v5, v6, v7);
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
    sub_1BCAA3C(this, method);
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
  __int64 v15; // x2
  BattleServantConfSkillComponent_c *v16; // x0
  UISprite_o *v17; // x24
  System_String_o *v18; // x25
  System_String_o *v19; // x0
  System_String_o *titleNumSecondSprite; // x0
  __int64 v21; // x1
  struct UISprite_o *v22; // x24
  System_String_o *v23; // x25
  System_String_o *v24; // x0
  System_String_o *v25; // x1
  BattleServantConfSkillComponent_c *v26; // x0
  UISprite_o *titleNumFirstSprite; // x24
  System_String_o *SKILL_NO_FILE_PREFIX; // x25
  System_String_o *v29; // x0
  __int64 v30; // x1
  BattleServantConfSkillComponent_c *v31; // x0
  UILabel_o *skillExplanationLabel; // x25
  int32_t DETAIL_FONT_SIZE; // w24
  float v34; // s8
  unsigned int v35; // [xsp+8h] [xbp-58h] BYREF
  int32_t v36; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v36 = num;
  if ( (byte_4B1929B & 1) == 0 )
  {
    sub_1BCA7E0(&BattleServantConfSkillComponent_TypeInfo, *(_QWORD *)&num, *(_QWORD *)&skillId);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B1929B = 1;
  }
  v35 = 0;
  if ( num <= 9 )
  {
    v26 = BattleServantConfSkillComponent_TypeInfo;
    titleNumFirstSprite = this->fields.titleNumFirstSprite;
    if ( !BattleServantConfSkillComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantConfSkillComponent_TypeInfo, *(_QWORD *)&num);
      v26 = BattleServantConfSkillComponent_TypeInfo;
    }
    SKILL_NO_FILE_PREFIX = v26->static_fields->SKILL_NO_FILE_PREFIX;
    v29 = System_Int32__ToString((int32_t)&v36, 0LL);
    titleNumSecondSprite = System_String__Concat_62401220(SKILL_NO_FILE_PREFIX, v29, 0LL);
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
            v25 = (System_String_o *)StringLiteral_1/*""*/;
            goto LABEL_18;
          }
        }
      }
    }
LABEL_30:
    sub_1BCAA3C(titleNumSecondSprite, v21);
  }
  v16 = BattleServantConfSkillComponent_TypeInfo;
  v35 = num / 0xAu;
  v17 = this->fields.titleNumFirstSprite;
  if ( !BattleServantConfSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfSkillComponent_TypeInfo, *(_QWORD *)&num);
    v16 = BattleServantConfSkillComponent_TypeInfo;
  }
  v18 = v16->static_fields->SKILL_NO_FILE_PREFIX;
  v19 = System_Int32__ToString((int32_t)&v35, 0LL);
  titleNumSecondSprite = System_String__Concat_62401220(v18, v19, 0LL);
  if ( !v17 )
    goto LABEL_30;
  UISprite__set_spriteName(v17, titleNumSecondSprite, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.titleNumSecondSprite;
  if ( !titleNumSecondSprite )
    goto LABEL_30;
  titleNumSecondSprite = (System_String_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)titleNumSecondSprite,
                                              0LL);
  if ( !titleNumSecondSprite )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleNumSecondSprite, 1, 0LL);
  v35 = v36 % 10;
  v22 = this->fields.titleNumSecondSprite;
  v23 = BattleServantConfSkillComponent_TypeInfo->static_fields->SKILL_NO_FILE_PREFIX;
  v24 = System_Int32__ToString((int32_t)&v35, 0LL);
  titleNumSecondSprite = System_String__Concat_62401220(v23, v24, 0LL);
  if ( !v22 )
    goto LABEL_30;
  v25 = titleNumSecondSprite;
  titleNumSecondSprite = (System_String_o *)v22;
LABEL_18:
  UISprite__set_spriteName((UISprite_o *)titleNumSecondSprite, v25, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillExplanationLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_30;
  UIWidget__set_height((UIWidget_o *)titleNumSecondSprite, this->fields.DEFAULT_HEIGHT, 0LL);
  v31 = BattleServantConfSkillComponent_TypeInfo;
  skillExplanationLabel = this->fields.skillExplanationLabel;
  DETAIL_FONT_SIZE = this->fields.DETAIL_FONT_SIZE;
  if ( !BattleServantConfSkillComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfSkillComponent_TypeInfo, v30);
    v31 = BattleServantConfSkillComponent_TypeInfo;
  }
  WrapControlText__textAdjust(
    skillExplanationLabel,
    explanationMessage,
    DETAIL_FONT_SIZE,
    DETAIL_FONT_SIZE,
    v31->static_fields->MAX_HEIGHT,
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
  v34 = releaseState ? 1.0 : 0.5;
  if ( !titleNumSecondSprite )
    goto LABEL_30;
  v37.fields.a = 1.0;
  v37.fields.r = v34;
  v37.fields.g = v34;
  v37.fields.b = v34;
  UIRangeLabel__set_color((UIRangeLabel_o *)titleNumSecondSprite, v37, 0LL);
  titleNumSecondSprite = (System_String_o *)this->fields.skillExplanationLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_30;
  v38.fields.a = 1.0;
  v38.fields.r = v34;
  v38.fields.g = v34;
  v38.fields.b = v34;
  UIWidget__set_color((UIWidget_o *)titleNumSecondSprite, v38, 0LL);
}