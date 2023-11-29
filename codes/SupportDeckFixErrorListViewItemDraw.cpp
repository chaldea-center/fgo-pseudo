void __fastcall SupportDeckFixErrorListViewItemDraw___ctor(
        SupportDeckFixErrorListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SupportDeckFixErrorListViewItemDraw__SetMessage(
        SupportDeckFixErrorListViewItemDraw_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_B170D4();
  UILabel__set_text(messageLabel, message, 0LL);
}