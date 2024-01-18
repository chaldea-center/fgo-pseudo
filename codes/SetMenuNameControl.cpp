void __fastcall SetMenuNameControl___ctor(SetMenuNameControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SetMenuNameControl__setMenuName(
        SetMenuNameControl_o *this,
        System_String_o *menuName,
        const MethodInfo *method)
{
  UILabel_o *menuNameLb; // x0

  menuNameLb = this->fields.menuNameLb;
  if ( !menuNameLb )
    sub_B2C434(0LL, menuName);
  UILabel__set_text(menuNameLb, menuName, 0LL);
}