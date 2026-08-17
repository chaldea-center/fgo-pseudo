void BattleServantConfSkillComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_59741C4 & 1) == 0 )
  {
    sub_2213A60(&BattleServantConfSkillComponent_TypeInfo);
    sub_2213A60(&StringLiteral_21571/*"img_skillclass_0"*/);
    byte_59741C4 = 1;
  }
  v7 = StringLiteral_21571/*"img_skillclass_0"*/;
  BattleServantConfSkillComponent_TypeInfo->static_fields->SKILL_NO_FILE_PREFIX = (struct System_String_o *)StringLiteral_21571/*"img_skillclass_0"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleServantConfSkillComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void BattleServantConfSkillComponent___ctor(BattleServantConfSkillComponent_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.DETAIL_FONT_SIZE = 0x4600000012LL;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


int32_t BattleServantConfSkillComponent__GetDefaultHeight(
        BattleServantConfSkillComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.DEFAULT_HEIGHT;
}


int32_t BattleServantConfSkillComponent__GetHeight(BattleServantConfSkillComponent_o *this, const MethodInfo *method)
{
  struct UILabel_o *skillExplanationLabel; // x8

  skillExplanationLabel = this->fields.skillExplanationLabel;
  if ( !skillExplanationLabel )
    sub_2213CDC(this, method);
  return skillExplanationLabel->fields.mHeight;
}


// local variable allocation has failed, the output may be wrong!
void BattleServantConfSkillComponent__SetItem(
        BattleServantConfSkillComponent_o *this,
        int32_t num,
        int32_t skillId,
        System_String_o *titleMessage,
        System_String_o *explanationMessage,
        bool releaseState,
        int32_t skillLv,
        const MethodInfo *method)
{
  BattleServantConfSkillComponent_c *v14; // x0
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
  BattleServantConfSkillComponent_c *v26; // x0
  UISprite_o *v27; // x24
  System_String_o *v28; // x25
  System_String_o *v29; // x0
  float v30; // s3 OVERLAPPED
  float v31; // s8
  float v32; // s0
  float v33; // s1
  float v34; // s2
  unsigned int v35; // [xsp+8h] [xbp-68h] BYREF
  int32_t v36; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v36 = num;
  if ( (byte_59741C3 & 1) == 0 )
  {
    sub_2213A60(&BattleServantConfSkillComponent_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59741C3 = 1;
  }
  v35 = 0;
  if ( num > 9 )
  {
    v14 = BattleServantConfSkillComponent_TypeInfo;
    titleNumFirstSprite = this->fields.titleNumFirstSprite;
    v16 = *(&BattleServantConfSkillComponent_TypeInfo->_2.cctor_finished + 1);
    v35 = num / 0xAu;
    if ( !v16 )
    {
      j_il2cpp_runtime_class_init_0(BattleServantConfSkillComponent_TypeInfo, *(_QWORD *)&num);
      v14 = BattleServantConfSkillComponent_TypeInfo;
    }
    SKILL_NO_FILE_PREFIX = v14->static_fields->SKILL_NO_FILE_PREFIX;
    v18 = System_Int32__ToString((int32_t)&v35, 0);
    titleNumSecondSprite = System_String__Concat_75651716(SKILL_NO_FILE_PREFIX, v18, 0);
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
          v23 = BattleServantConfSkillComponent_TypeInfo->static_fields->SKILL_NO_FILE_PREFIX;
          v35 = v21;
          v24 = System_Int32__ToString((int32_t)&v35, 0);
          titleNumSecondSprite = System_String__Concat_75651716(v23, v24, 0);
          if ( v22 )
          {
            v25 = titleNumSecondSprite;
            titleNumSecondSprite = (System_String_o *)v22;
            goto LABEL_18;
          }
        }
      }
    }
LABEL_28:
    sub_2213CDC(titleNumSecondSprite, v20);
  }
  v26 = BattleServantConfSkillComponent_TypeInfo;
  v27 = this->fields.titleNumFirstSprite;
  if ( !*(&BattleServantConfSkillComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfSkillComponent_TypeInfo, *(_QWORD *)&num);
    v26 = BattleServantConfSkillComponent_TypeInfo;
  }
  v28 = v26->static_fields->SKILL_NO_FILE_PREFIX;
  v29 = System_Int32__ToString((int32_t)&v36, 0);
  titleNumSecondSprite = System_String__Concat_75651716(v28, v29, 0);
  if ( !v27 )
    goto LABEL_28;
  UISprite__set_spriteName(v27, titleNumSecondSprite, 0);
  titleNumSecondSprite = (System_String_o *)this->fields.titleNumSecondSprite;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  titleNumSecondSprite = (System_String_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)titleNumSecondSprite,
                                              0);
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleNumSecondSprite, 0, 0);
  titleNumSecondSprite = (System_String_o *)this->fields.titleNumSecondSprite;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  v25 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_18:
  UISprite__set_spriteName((UISprite_o *)titleNumSecondSprite, v25, 0);
  titleNumSecondSprite = (System_String_o *)this->fields.skillExplanationLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  UIWidget__set_height((UIWidget_o *)titleNumSecondSprite, this->fields.DEFAULT_HEIGHT, 0);
  WrapControlText__textAdjust(
    this->fields.skillExplanationLabel,
    explanationMessage,
    this->fields.DETAIL_FONT_SIZE,
    this->fields.DETAIL_FONT_SIZE,
    0);
  titleNumSecondSprite = (System_String_o *)this->fields.skillIcon;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  SkillIconComponent__Set((SkillIconComponent_o *)titleNumSecondSprite, skillId, 0);
  titleNumSecondSprite = (System_String_o *)this->fields.skillTitleRangeLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  UIRangeLabel__Set((UIRangeLabel_o *)titleNumSecondSprite, titleMessage, 0, 1, 0, 0, 0);
  titleNumSecondSprite = (System_String_o *)this->fields.skillIcon;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  SkillIconComponent__SetMask((SkillIconComponent_o *)titleNumSecondSprite, !releaseState, 0);
  titleNumSecondSprite = (System_String_o *)this->fields.skillTitleRangeLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  v30 = 1.0;
  v31 = releaseState ? 1.0 : 0.5;
  v32 = v31;
  v33 = v31;
  v34 = v31;
  UIRangeLabel__set_color((UIRangeLabel_o *)titleNumSecondSprite, *(UnityEngine_Color_o *)(&v30 - 3), 0);
  titleNumSecondSprite = (System_String_o *)this->fields.skillExplanationLabel;
  if ( !titleNumSecondSprite )
    goto LABEL_28;
  v37.fields.r = v31;
  v37.fields.g = v31;
  v37.fields.b = v31;
  v37.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)titleNumSecondSprite, v37, 0);
}