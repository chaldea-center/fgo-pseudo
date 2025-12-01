void SupportDeckFixErrorListViewItemDraw___ctor(SupportDeckFixErrorListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SupportDeckFixErrorListViewItemDraw__SetMessage(
        SupportDeckFixErrorListViewItemDraw_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_1C71608(0, message);
  UILabel__set_text(messageLabel, message, 0);
}