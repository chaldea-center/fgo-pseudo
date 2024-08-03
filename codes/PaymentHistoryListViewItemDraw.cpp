void __fastcall PaymentHistoryListViewItemDraw___ctor(PaymentHistoryListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PaymentHistoryListViewItemDraw__Awake(PaymentHistoryListViewItemDraw_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PaymentHistoryListViewItemDraw__SetItem(
        PaymentHistoryListViewItemDraw_o *this,
        PaymentHistoryListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *upsideMessageLabel; // x0

  upsideMessageLabel = (UnityEngine_Component_o *)this->fields.upsideMessageLabel;
  if ( !upsideMessageLabel )
    goto LABEL_9;
  upsideMessageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(upsideMessageLabel, 0LL);
  if ( !upsideMessageLabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)upsideMessageLabel, 1, 0LL), !item)
    || (upsideMessageLabel = (UnityEngine_Component_o *)this->fields.upsideMessageLabel) == 0LL
    || (UILabel__set_text((UILabel_o *)upsideMessageLabel, item->fields._UpsideMessage_k__BackingField, 0LL),
        (upsideMessageLabel = (UnityEngine_Component_o *)this->fields.bottomMessageLabel) == 0LL)
    || (upsideMessageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(upsideMessageLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)upsideMessageLabel, 1, 0LL),
        (upsideMessageLabel = (UnityEngine_Component_o *)this->fields.bottomMessageLabel) == 0LL) )
  {
LABEL_9:
    sub_1B64324(upsideMessageLabel);
  }
  UILabel__set_text((UILabel_o *)upsideMessageLabel, item->fields._BottomMessage_k__BackingField, 0LL);
}