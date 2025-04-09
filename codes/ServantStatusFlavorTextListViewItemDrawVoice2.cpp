void __fastcall ServantStatusFlavorTextListViewItemDrawVoice2___ctor(
        ServantStatusFlavorTextListViewItemDrawVoice2_o *this,
        const MethodInfo *method)
{
  this->fields.isFirst = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantStatusFlavorTextListViewItemDrawVoice2__GetKind(
        ServantStatusFlavorTextListViewItemDrawVoice2_o *this,
        const MethodInfo *method)
{
  return 4;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewItemDrawVoice2__SetItem(
        ServantStatusFlavorTextListViewItemDrawVoice2_o *this,
        ServantStatusListViewItem_o *item,
        bool isOpen,
        bool isNew,
        System_String_o *text,
        int32_t profileNum,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UILabel_o *illustLabel; // x0
  int32_t mHeight; // w21
  UnityEngine_Vector2_o printedSize; // kr00_8
  int32_t v13; // w20
  int v14; // s0
  float v15; // s1
  int v17; // w21
  float v18; // s1
  float v19; // s0
  float v20; // s1
  float v21; // s2
  float v22; // s8
  float v23; // s10
  float v24; // s9
  int v25; // w19
  bool isPlayVoice; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *voice; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *illust; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  illust = 0LL;
  voice = 0LL;
  isPlayVoice = 0;
  this->fields.dispMode = mode;
  if ( item && mode && this->fields.isFirst )
  {
    this->fields.isFirst = 0;
    ServantStatusListViewItem__GetVoiceInfo(item, &illust, &voice, &isPlayVoice, (const MethodInfo *)text);
    illustLabel = this->fields.illustLabel;
    if ( !illustLabel )
      goto LABEL_23;
    mHeight = illustLabel->fields.mHeight;
    UIWidget__set_height((UIWidget_o *)illustLabel, 1000, 0LL);
    illustLabel = this->fields.illustLabel;
    if ( !illustLabel )
      goto LABEL_23;
    WrapControlText__textAdjust(illustLabel, illust, illustLabel->fields.mFontSize, 0, 0LL);
    illustLabel = this->fields.illustLabel;
    if ( !illustLabel )
      goto LABEL_23;
    printedSize = UILabel__get_printedSize(illustLabel, 0LL);
    illustLabel = (UILabel_o *)this->fields.baseCollider;
    v13 = printedSize.fields.y == INFINITY ? 0x80000000 : (int)printedSize.fields.y;
    if ( !illustLabel )
      goto LABEL_23;
    *(UnityEngine_Vector3_o *)&v14 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)illustLabel, 0LL);
    illustLabel = (UILabel_o *)this->fields.baseCollider;
    if ( !illustLabel )
      goto LABEL_23;
    v17 = v13 - mHeight;
    v18 = v15 + (float)v17;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)illustLabel, *(UnityEngine_Vector3_o *)&v14, 0LL);
    illustLabel = (UILabel_o *)this->fields.baseSprite;
    if ( !illustLabel )
      goto LABEL_23;
    UIWidget__set_height((UIWidget_o *)illustLabel, illustLabel->fields.mHeight + v17, 0LL);
    illustLabel = (UILabel_o *)this->fields.titleBase;
    if ( !illustLabel )
      goto LABEL_23;
    illustLabel = (UILabel_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)illustLabel, 0LL);
    if ( !illustLabel )
      goto LABEL_23;
    *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)illustLabel,
                                       0LL);
    illustLabel = this->fields.illustLabel;
    if ( !illustLabel )
      goto LABEL_23;
    v22 = v19;
    v23 = v20;
    v24 = v21;
    UIWidget__set_height((UIWidget_o *)illustLabel, v13, 0LL);
    illustLabel = (UILabel_o *)this->fields.titleBase;
    v25 = v17 >= 0 ? v17 : v17 + 1;
    if ( !illustLabel
      || (illustLabel = (UILabel_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)illustLabel, 0LL)) == 0LL )
    {
LABEL_23:
      sub_1B4D1EC(illustLabel, v9);
    }
    v29.fields.y = v23 + (float)(v25 >> 1);
    v29.fields.x = v22;
    v29.fields.z = v24;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)illustLabel, v29, 0LL);
  }
}