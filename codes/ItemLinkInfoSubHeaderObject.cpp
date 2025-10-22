void ItemLinkInfoSubHeaderObject___ctor(ItemLinkInfoSubHeaderObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ItemLinkInfoSubHeaderObject__Awake(ItemLinkInfoSubHeaderObject_o *this, const MethodInfo *method)
{
  ;
}


float ItemLinkInfoSubHeaderObject__get_Height(ItemLinkInfoSubHeaderObject_o *this, const MethodInfo *method)
{
  struct UIWidget_o *widget; // x8

  widget = this->fields.widget;
  if ( !widget )
    sub_1C3E7C0(this, method);
  return (float)widget->fields.mHeight;
}