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

  if ( (byte_4D31E0E & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_int___);
    byte_4D31E0E = 1;
  }
  skillEntity = this->fields.skillEntity;
  if ( skillEntity )
    id = skillEntity->fields.id;
  else
    id = 0;
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.onSelectSkill,
    id,
    (const MethodInfo_30EBBB4 *)Method_ActionExtensions_Call_int___);
}


void EventInfoPassiveSkillComponent__SetSelected(
        EventInfoPassiveSkillComponent_o *this,
        bool isSelected,
        const MethodInfo *method)
{
  GameObjectHelper__SetActiveSafely(this->fields.selectedObject, isSelected, 0);
}


void EventInfoPassiveSkillComponent__Setup(
        EventInfoPassiveSkillComponent_o *this,
        SkillEntity_o *inSkillEntity,
        bool isBefore,
        System_Action_int__o *inOnSelectSkill,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  char v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  UnityEngine_Object_o *skillIconSprite; // x21
  struct SkillEntity_o *skillEntity; // x8
  UISprite_o *v20; // x21
  int32_t id; // w22
  SkillEntity_o *v22; // x0
  UILabel_o *skillNameLabel; // x21
  System_String_o *Name; // x1
  UnityEngine_Object_o *skillDetailLabel; // x21
  SkillEntity_o *EffectExplanation; // x0
  UILabel_o *v27; // x21
  struct UILabel_o *v28; // x8
  System_String_o *v29; // x1

  if ( (byte_4D31E0D & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D31E0D = 1;
  }
  this->fields.skillEntity = inSkillEntity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.skillEntity,
    (int32_t)inSkillEntity,
    isBefore,
    (int32_t)inOnSelectSkill,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.onSelectSkill = inOnSelectSkill;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.onSelectSkill,
    (int32_t)inOnSelectSkill,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0, 0) )
  {
    skillEntity = this->fields.skillEntity;
    v20 = this->fields.skillIconSprite;
    if ( skillEntity )
      id = skillEntity->fields.id;
    else
      id = 0;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetSkillIcon(v20, id, 0);
  }
  v22 = this->fields.skillEntity;
  skillNameLabel = this->fields.skillNameLabel;
  Name = 0;
  if ( v22 )
    Name = SkillEntity__getName(v22, 0);
  UILabelHelper__SetTextSafely(skillNameLabel, Name, 0);
  skillDetailLabel = (UnityEngine_Object_o *)this->fields.skillDetailLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillDetailLabel, 0, 0) )
  {
    EffectExplanation = this->fields.skillEntity;
    v27 = this->fields.skillDetailLabel;
    if ( EffectExplanation )
    {
      EffectExplanation = (SkillEntity_o *)SkillEntity__getEffectExplanation(EffectExplanation, 0, 0);
      v28 = this->fields.skillDetailLabel;
      v29 = (System_String_o *)EffectExplanation;
      if ( v28 )
      {
LABEL_19:
        WrapControlText__textAdjust(v27, v29, v28->fields.mFontSize, v28->fields.mFontSize, 0);
        goto LABEL_20;
      }
    }
    else
    {
      v29 = 0;
      v28 = this->fields.skillDetailLabel;
      if ( v27 )
        goto LABEL_19;
    }
    sub_1C93D2C(EffectExplanation, v29);
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