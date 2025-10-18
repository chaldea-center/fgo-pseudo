void ScriptTextListViewItemDraw___ctor(ScriptTextListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptTextListViewItemDraw__SetItem(
        ScriptTextListViewItemDraw_o *this,
        ScriptTextListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UILabel_o *lineTextLabel; // x0

  if ( item && mode )
  {
    lineTextLabel = this->fields.lineTextLabel;
    if ( !lineTextLabel )
      sub_1C372B4(0);
    UILabel__set_text(lineTextLabel, item->fields.lineText, 0);
  }
}