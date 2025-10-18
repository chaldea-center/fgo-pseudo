void AutoBattleButtonComponent___ctor(AutoBattleButtonComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AutoBattleButtonComponent__InitButton(AutoBattleButtonComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void AutoBattleButtonComponent__OnClick(AutoBattleButtonComponent_o *this, const MethodInfo *method)
{
  ;
}