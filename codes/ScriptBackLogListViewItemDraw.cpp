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
  ScriptBackLogListViewItemDraw_o *v5; // x19

  v5 = this;
  if ( item && mode )
  {
    this = (ScriptBackLogListViewItemDraw_o *)item->fields.label;
    if ( this )
    {
      ScriptMessageLabel__CheckPlayingVoice((ScriptMessageLabel_o *)this, 0);
      this = (ScriptBackLogListViewItemDraw_o *)item->fields.label;
      if ( this )
      {
        ScriptMessageLabel__SetLogDraw(
          (ScriptMessageLabel_o *)this,
          v5->fields.mainPrefab,
          v5->fields.rubyPrefab,
          v5->fields.imagePrefab,
          v5->fields.playVoicePrefab,
          v5->fields.playVoiceEffect,
          (UnityEngine_Font_o *)this[1].fields.m_CachedPtr,
          0);
        return;
      }
    }
LABEL_9:
    sub_2213CDC(this, item);
  }
  if ( !item )
    goto LABEL_9;
  this = (ScriptBackLogListViewItemDraw_o *)item->fields.label;
  if ( !this )
    goto LABEL_9;
  ScriptMessageLabel__ClearLogDraw(
    (ScriptMessageLabel_o *)this,
    v5->fields.mainPrefab,
    v5->fields.rubyPrefab,
    v5->fields.imagePrefab,
    v5->fields.playVoicePrefab,
    v5->fields.playVoiceEffect,
    0);
}