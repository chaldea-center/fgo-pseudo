void __fastcall BattleServantConfWindowPassiveSkillListComponent___ctor(
        BattleServantConfWindowPassiveSkillListComponent_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleServantConfWindowPassiveSkillListComponent__Awake(
        BattleServantConfWindowPassiveSkillListComponent_o *this,
        const MethodInfo *method)
{
  ;
}


float __fastcall BattleServantConfWindowPassiveSkillListComponent__GetSkillOffset(
        BattleServantConfWindowPassiveSkillListComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.skillOffset;
}


void __fastcall BattleServantConfWindowPassiveSkillListComponent__InitPositionY(
        BattleServantConfWindowPassiveSkillListComponent_o *this,
        float adjustPosY,
        float adjustHeight,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    gameObject,
    (float)(this->fields.skillInitPosY + adjustPosY) + adjustHeight,
    0LL);
}


void __fastcall BattleServantConfWindowPassiveSkillListComponent__SetActive(
        BattleServantConfWindowPassiveSkillListComponent_o *this,
        bool val,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, val, 0LL);
}


void __fastcall BattleServantConfWindowPassiveSkillListComponent__SetSkillInfoObject(
        BattleServantConfWindowPassiveSkillListComponent_o *this,
        System_Int32_array *skillIdArray,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantConfWindowPassiveSkillListComponent__SetSkillTitle(
        BattleServantConfWindowPassiveSkillListComponent_o *this,
        UIAtlas_o *uiAtlas,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  UISprite_o *skillTitle; // x0
  UISprite_o *v7; // x0
  struct UISprite_o *v8; // x0

  skillTitle = this->fields.skillTitle;
  if ( !skillTitle
    || (UISprite__set_atlas(skillTitle, uiAtlas, 0LL), (v7 = this->fields.skillTitle) == 0LL)
    || (UISprite__set_spriteName(v7, spriteName, 0LL), (v8 = this->fields.skillTitle) == 0LL) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v8->klass->vtable._33_MakePixelPerfect.method)(
    v8,
    v8->klass->vtable._34_get_minWidth.methodPtr);
}