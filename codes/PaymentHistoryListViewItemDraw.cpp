void PaymentHistoryListViewItemDraw___ctor(PaymentHistoryListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PaymentHistoryListViewItemDraw__Awake(PaymentHistoryListViewItemDraw_o *this, const MethodInfo *method)
{
  ;
}


void PaymentHistoryListViewItemDraw__SetItem(
        PaymentHistoryListViewItemDraw_o *this,
        PaymentHistoryListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *upsideMessageLabel; // x0

  upsideMessageLabel = (UnityEngine_Component_o *)this->fields.upsideMessageLabel;
  if ( !upsideMessageLabel )
    goto LABEL_9;
  upsideMessageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(upsideMessageLabel, 0);
  if ( !upsideMessageLabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)upsideMessageLabel, 1, 0), !item)
    || (upsideMessageLabel = (UnityEngine_Component_o *)this->fields.upsideMessageLabel) == 0
    || (UILabel__set_text((UILabel_o *)upsideMessageLabel, item->fields._UpsideMessage_k__BackingField, 0),
        (upsideMessageLabel = (UnityEngine_Component_o *)this->fields.bottomMessageLabel) == 0)
    || (upsideMessageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(upsideMessageLabel, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)upsideMessageLabel, 1, 0),
        (upsideMessageLabel = (UnityEngine_Component_o *)this->fields.bottomMessageLabel) == 0) )
  {
LABEL_9:
    sub_1C2D6EC(upsideMessageLabel, item);
  }
  UILabel__set_text((UILabel_o *)upsideMessageLabel, item->fields._BottomMessage_k__BackingField, 0);
}