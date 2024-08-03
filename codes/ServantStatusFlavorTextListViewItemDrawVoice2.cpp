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
  UILabel_o *illustLabel; // x0
  int32_t mHeight; // w21
  UnityEngine_Vector2_o printedSize; // kr00_8
  int32_t v12; // w20
  int v13; // s0
  float v14; // s1
  int v16; // w21
  float v17; // s1
  float v18; // s0
  float v19; // s1
  float v20; // s2
  float v21; // s8
  float v22; // s10
  float v23; // s9
  int v24; // w19
  bool isPlayVoice; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *voice; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *illust; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

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
    WrapControlText__textAdjust(illustLabel, illust, illustLabel->fields.mFontSize, 0, 0, 0LL);
    illustLabel = this->fields.illustLabel;
    if ( !illustLabel )
      goto LABEL_23;
    printedSize = UILabel__get_printedSize(illustLabel, 0LL);
    illustLabel = (UILabel_o *)this->fields.baseCollider;
    v12 = printedSize.fields.y == INFINITY ? 0x80000000 : (int)printedSize.fields.y;
    if ( !illustLabel )
      goto LABEL_23;
    *(UnityEngine_Vector3_o *)&v13 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)illustLabel, 0LL);
    illustLabel = (UILabel_o *)this->fields.baseCollider;
    if ( !illustLabel )
      goto LABEL_23;
    v16 = v12 - mHeight;
    v17 = v14 + (float)v16;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)illustLabel, *(UnityEngine_Vector3_o *)&v13, 0LL);
    illustLabel = (UILabel_o *)this->fields.baseSprite;
    if ( !illustLabel )
      goto LABEL_23;
    UIWidget__set_height((UIWidget_o *)illustLabel, illustLabel->fields.mHeight + v16, 0LL);
    illustLabel = (UILabel_o *)this->fields.titleBase;
    if ( !illustLabel )
      goto LABEL_23;
    illustLabel = (UILabel_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)illustLabel, 0LL);
    if ( !illustLabel )
      goto LABEL_23;
    *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)illustLabel,
                                       0LL);
    illustLabel = this->fields.illustLabel;
    if ( !illustLabel )
      goto LABEL_23;
    v21 = v18;
    v22 = v19;
    v23 = v20;
    UIWidget__set_height((UIWidget_o *)illustLabel, v12, 0LL);
    illustLabel = (UILabel_o *)this->fields.titleBase;
    v24 = v16 >= 0 ? v16 : v16 + 1;
    if ( !illustLabel
      || (illustLabel = (UILabel_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)illustLabel, 0LL)) == 0LL )
    {
LABEL_23:
      sub_1B64324(illustLabel);
    }
    v28.fields.y = v22 + (float)(v24 >> 1);
    v28.fields.x = v21;
    v28.fields.z = v23;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)illustLabel, v28, 0LL);
  }
}