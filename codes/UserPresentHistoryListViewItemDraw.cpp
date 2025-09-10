void UserPresentHistoryListViewItemDraw___ctor(UserPresentHistoryListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UserPresentHistoryListViewItemDraw__SetItem(
        UserPresentHistoryListViewItemDraw_o *this,
        UserPresentHistoryListViewItem_o *item,
        const MethodInfo *method)
{
  if ( !item || (this = (UserPresentHistoryListViewItemDraw_o *)this->fields.messageLabel) == 0 )
    sub_1C2D6EC(this, item);
  UILabel__set_text((UILabel_o *)this, item->fields._Message_k__BackingField, 0);
}