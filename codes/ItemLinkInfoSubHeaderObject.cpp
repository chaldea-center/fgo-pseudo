void __fastcall ItemLinkInfoSubHeaderObject___ctor(ItemLinkInfoSubHeaderObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ItemLinkInfoSubHeaderObject__Awake(ItemLinkInfoSubHeaderObject_o *this, const MethodInfo *method)
{
  ;
}


float __fastcall ItemLinkInfoSubHeaderObject__get_Height(ItemLinkInfoSubHeaderObject_o *this, const MethodInfo *method)
{
  struct UIWidget_o *widget; // x8

  widget = this->fields.widget;
  if ( !widget )
    sub_1C1AE30(this, method);
  return (float)widget->fields.mHeight;
}