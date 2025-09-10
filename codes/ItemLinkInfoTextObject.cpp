void ItemLinkInfoTextObject___ctor(ItemLinkInfoTextObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ItemLinkInfoTextObject__Awake(ItemLinkInfoTextObject_o *this, const MethodInfo *method)
{
  ;
}


float ItemLinkInfoTextObject__get_Height(ItemLinkInfoTextObject_o *this, const MethodInfo *method)
{
  struct UIWidget_o *widget; // x8

  widget = this->fields.widget;
  if ( !widget )
    sub_1C2D6EC(this, method);
  return (float)widget->fields.mHeight;
}