void EventInfoPassiveSkillComponent___ctor(EventInfoPassiveSkillComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoPassiveSkillComponent__Awake(EventInfoPassiveSkillComponent_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoPassiveSkillComponent__OnClick(EventInfoPassiveSkillComponent_o *this, const MethodInfo *method)
{
  struct SkillEntity_o *skillEntity; // x9
  int32_t id; // w1

  if ( (byte_59399A9 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_int___);
    byte_59399A9 = 1;
  }
  skillEntity = this->fields.skillEntity;
  if ( skillEntity )
    id = skillEntity->fields.id;
  else
    id = 0;
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.onSelectSkill,
    id,
    (const MethodInfo_36CDE6C *)Method_ActionExtensions_Call_int___);
}


void EventInfoPassiveSkillComponent__SetSelected(
        EventInfoPassiveSkillComponent_o *this,
        bool isSelected,
        const MethodInfo *method)
{
  GameObjectHelper__SetActiveSafely(this->fields.selectedObject, isSelected, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoPassiveSkillComponent__Setup(
        EventInfoPassiveSkillComponent_o *this,
        SkillEntity_o *inSkillEntity,
        bool isBefore,
        System_Action_int__o *inOnSelectSkill,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  UnityEngine_Object_o *skillIconSprite; // x21
  __int64 v20; // x1
  struct SkillEntity_o *skillEntity; // x9
  UISprite_o *v22; // x21
  int32_t id; // w22
  SkillEntity_o *v24; // x0
  UILabel_o *skillNameLabel; // x21
  System_String_o *Name; // x1
  __int64 v27; // x1
  UnityEngine_Object_o *skillDetailLabel; // x21
  SkillEntity_o *EffectExplanation; // x0
  UILabel_o *v30; // x21
  struct UILabel_o *v31; // x8
  System_String_o *v32; // x1

  if ( (byte_59399A8 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59399A8 = 1;
  }
  this->fields.skillEntity = inSkillEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillEntity,
    (int32_t)inSkillEntity,
    (System_String_o *)isBefore,
    (System_String_o *)inOnSelectSkill,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.onSelectSkill = inOnSelectSkill;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onSelectSkill,
    (int32_t)inOnSelectSkill,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0, 0) )
  {
    skillEntity = this->fields.skillEntity;
    v22 = this->fields.skillIconSprite;
    if ( skillEntity )
      id = skillEntity->fields.id;
    else
      id = 0;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v20);
    AtlasManager__SetSkillIcon(v22, id, 0);
  }
  v24 = this->fields.skillEntity;
  skillNameLabel = this->fields.skillNameLabel;
  Name = 0;
  if ( v24 )
    Name = SkillEntity__getName(v24, 0);
  UILabelHelper__SetTextSafely(skillNameLabel, Name, 0);
  skillDetailLabel = (UnityEngine_Object_o *)this->fields.skillDetailLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  if ( UnityEngine_Object__op_Inequality(skillDetailLabel, 0, 0) )
  {
    EffectExplanation = this->fields.skillEntity;
    v30 = this->fields.skillDetailLabel;
    if ( EffectExplanation )
    {
      EffectExplanation = (SkillEntity_o *)SkillEntity__getEffectExplanation(EffectExplanation, 0, 0);
      v31 = this->fields.skillDetailLabel;
      v32 = (System_String_o *)EffectExplanation;
      if ( v31 )
      {
LABEL_19:
        WrapControlText__textAdjust(v30, v32, v31->fields.mFontSize, v31->fields.mFontSize, 0);
        goto LABEL_20;
      }
    }
    else
    {
      v32 = 0;
      v31 = this->fields.skillDetailLabel;
      if ( v30 )
        goto LABEL_19;
    }
    sub_21FFECC(EffectExplanation, v32);
  }
LABEL_20:
  GameObjectHelper__SetActiveSafely(this->fields.beforeObject, isBefore, 0);
  GameObjectHelper__SetActiveSafely(this->fields.selectedObject, 0, 0);
}


int32_t EventInfoPassiveSkillComponent__get_SkillId(EventInfoPassiveSkillComponent_o *this, const MethodInfo *method)
{
  struct SkillEntity_o *skillEntity; // x8

  skillEntity = this->fields.skillEntity;
  if ( skillEntity )
    return skillEntity->fields.id;
  else
    return 0;
}