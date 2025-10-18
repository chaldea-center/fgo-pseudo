void ServantStatusFlavorTextListViewItemDrawVoice2___ctor(
        ServantStatusFlavorTextListViewItemDrawVoice2_o *this,
        const MethodInfo *method)
{
  this->fields.isFirst = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t ServantStatusFlavorTextListViewItemDrawVoice2__GetKind(
        ServantStatusFlavorTextListViewItemDrawVoice2_o *this,
        const MethodInfo *method)
{
  return 4;
}


void ServantStatusFlavorTextListViewItemDrawVoice2__SetItem(
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
  int v13; // w21
  float v14; // s1
  float x; // s8
  float y; // s10
  float z; // s9
  int v18; // w19
  bool isPlayVoice; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *voice; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *illust; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  illust = 0;
  voice = 0;
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
    UIWidget__set_height((UIWidget_o *)illustLabel, 1000, 0);
    illustLabel = this->fields.illustLabel;
    if ( !illustLabel )
      goto LABEL_23;
    WrapControlText__textAdjust(illustLabel, illust, illustLabel->fields.mFontSize, 0, 0);
    illustLabel = this->fields.illustLabel;
    if ( !illustLabel )
      goto LABEL_23;
    printedSize = UILabel__get_printedSize(illustLabel, 0);
    illustLabel = (UILabel_o *)this->fields.baseCollider;
    v12 = printedSize.fields.y == INFINITY ? 0x80000000 : (int)printedSize.fields.y;
    if ( !illustLabel )
      goto LABEL_23;
    size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)illustLabel, 0);
    illustLabel = (UILabel_o *)this->fields.baseCollider;
    if ( !illustLabel )
      goto LABEL_23;
    v13 = v12 - mHeight;
    v14 = size.fields.y + (float)v13;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)illustLabel, size, 0);
    illustLabel = (UILabel_o *)this->fields.baseSprite;
    if ( !illustLabel )
      goto LABEL_23;
    UIWidget__set_height((UIWidget_o *)illustLabel, illustLabel->fields.mHeight + v13, 0);
    illustLabel = (UILabel_o *)this->fields.titleBase;
    if ( !illustLabel )
      goto LABEL_23;
    illustLabel = (UILabel_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)illustLabel, 0);
    if ( !illustLabel )
      goto LABEL_23;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)illustLabel, 0);
    illustLabel = this->fields.illustLabel;
    if ( !illustLabel )
      goto LABEL_23;
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    UIWidget__set_height((UIWidget_o *)illustLabel, v12, 0);
    illustLabel = (UILabel_o *)this->fields.titleBase;
    v18 = v13 >= 0 ? v13 : v13 + 1;
    if ( !illustLabel
      || (illustLabel = (UILabel_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)illustLabel, 0)) == 0 )
    {
LABEL_23:
      sub_1C372B4(illustLabel);
    }
    v24.fields.y = y + (float)(v18 >> 1);
    v24.fields.x = x;
    v24.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)illustLabel, v24, 0);
  }
}