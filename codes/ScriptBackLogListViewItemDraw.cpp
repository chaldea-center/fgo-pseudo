void ScriptBackLogListViewItemDraw___ctor(ScriptBackLogListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptBackLogListViewItemDraw__SetItem(
        ScriptBackLogListViewItemDraw_o *this,
        ScriptBackLogListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ScriptBackLogListViewItemDraw_o *v4; // x19

  if ( !item )
    goto LABEL_8;
  v4 = this;
  this = (ScriptBackLogListViewItemDraw_o *)item->fields.label;
  if ( mode )
  {
    if ( this )
    {
      ScriptMessageLabel__CheckPlayingVoice((ScriptMessageLabel_o *)this, 0);
      this = (ScriptBackLogListViewItemDraw_o *)item->fields.label;
      if ( this )
      {
        ScriptMessageLabel__SetLogDraw(
          (ScriptMessageLabel_o *)this,
          v4->fields.mainPrefab,
          v4->fields.rubyPrefab,
          v4->fields.imagePrefab,
          v4->fields.playVoicePrefab,
          v4->fields.playVoiceEffect,
          (UnityEngine_Font_o *)this[1].fields.m_CachedPtr,
          0);
        return;
      }
    }
LABEL_8:
    sub_1C3E7C0(this, item);
  }
  if ( !this )
    goto LABEL_8;
  ScriptMessageLabel__ClearLogDraw(
    (ScriptMessageLabel_o *)this,
    v4->fields.mainPrefab,
    v4->fields.rubyPrefab,
    v4->fields.imagePrefab,
    v4->fields.playVoicePrefab,
    v4->fields.playVoiceEffect,
    0);
}