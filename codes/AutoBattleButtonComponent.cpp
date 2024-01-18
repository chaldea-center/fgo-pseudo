void __fastcall AutoBattleButtonComponent___ctor(AutoBattleButtonComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall AutoBattleButtonComponent__InitButton(AutoBattleButtonComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall AutoBattleButtonComponent__OnClick(AutoBattleButtonComponent_o *this, const MethodInfo *method)
{
  ;
}