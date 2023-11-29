void __fastcall UserPresentHistoryListViewItemDraw___ctor(
        UserPresentHistoryListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UserPresentHistoryListViewItemDraw__SetItem(
        UserPresentHistoryListViewItemDraw_o *this,
        UserPresentHistoryListViewItem_o *item,
        const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( !item || (messageLabel = this->fields.messageLabel) == 0LL )
    sub_B170D4();
  UILabel__set_text(messageLabel, item->fields._Message_k__BackingField, 0LL);
}