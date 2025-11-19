void BattleServantConfWindowPassiveSkillListComponent___ctor(
        BattleServantConfWindowPassiveSkillListComponent_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleServantConfWindowPassiveSkillListComponent__Awake(
        BattleServantConfWindowPassiveSkillListComponent_o *this,
        const MethodInfo *method)
{
  ;
}


float BattleServantConfWindowPassiveSkillListComponent__GetSkillOffset(
        BattleServantConfWindowPassiveSkillListComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.skillOffset;
}


void BattleServantConfWindowPassiveSkillListComponent__InitPositionY(
        BattleServantConfWindowPassiveSkillListComponent_o *this,
        float adjustPosY,
        float adjustHeight,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(
    gameObject,
    (float)(this->fields.skillInitPosY + adjustPosY) + adjustHeight,
    0);
}


bool BattleServantConfWindowPassiveSkillListComponent__IsActive(
        BattleServantConfWindowPassiveSkillListComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C6BC60(0, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0);
}


void BattleServantConfWindowPassiveSkillListComponent__SetActive(
        BattleServantConfWindowPassiveSkillListComponent_o *this,
        bool val,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C6BC60(0, v5);
  UnityEngine_GameObject__SetActive(gameObject, val, 0);
}


void BattleServantConfWindowPassiveSkillListComponent__SetSkillInfoObject(
        BattleServantConfWindowPassiveSkillListComponent_o *this,
        System_Int32_array *skillIdArray,
        const MethodInfo *method)
{
  ;
}


void BattleServantConfWindowPassiveSkillListComponent__SetSkillTitle(
        BattleServantConfWindowPassiveSkillListComponent_o *this,
        UIAtlas_o *uiAtlas,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UISprite_o *skillTitle; // x0

  skillTitle = this->fields.skillTitle;
  if ( !skillTitle
    || (UISprite__set_atlas(skillTitle, uiAtlas, 0), (skillTitle = this->fields.skillTitle) == 0)
    || (UISprite__set_spriteName(skillTitle, spriteName, 0), (skillTitle = this->fields.skillTitle) == 0) )
  {
    sub_1C6BC60(skillTitle, uiAtlas);
  }
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))skillTitle->klass->vtable._33_MakePixelPerfect.methodPtr)(
    skillTitle,
    skillTitle->klass->vtable._33_MakePixelPerfect.method);
}