void __fastcall ServantStatusFlavorTextListViewItemDrawVoice2___ctor(
        ServantStatusFlavorTextListViewItemDrawVoice2_o *this,
        const MethodInfo *method)
{
  LOBYTE(this[1].klass) = 1;
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
  UILabel_o *baseSprite; // x0
  int32_t mHeight; // w21
  UnityEngine_Vector2_o printedSize; // kr00_8
  double v13; // d8
  int v14; // s0
  float v15; // s1
  int32_t v17; // w20
  int v18; // w21
  float v19; // s1
  float v20; // s0
  float v21; // s1
  float v22; // s2
  float v23; // s8
  float v24; // s10
  float v25; // s9
  int v26; // w19
  bool isPlayVoice; // [xsp+Ch] [xbp-44h] BYREF
  System_String_o *voice; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *illust; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  voice = 0LL;
  illust = 0LL;
  isPlayVoice = 0;
  LODWORD(this->fields.baseCollider) = mode;
  if ( item && mode && LOBYTE(this[1].klass) )
  {
    LOBYTE(this[1].klass) = 0;
    ServantStatusListViewItem__GetVoiceInfo(item, &illust, &voice, &isPlayVoice, (const MethodInfo *)text);
    baseSprite = *(UILabel_o **)&this->fields.isFirst;
    if ( !baseSprite )
      goto LABEL_23;
    mHeight = baseSprite->fields.mHeight;
    UIWidget__set_height((UIWidget_o *)baseSprite, 1000, 0LL);
    baseSprite = *(UILabel_o **)&this->fields.isFirst;
    if ( !baseSprite )
      goto LABEL_23;
    WrapControlText__textAdjust(baseSprite, illust, baseSprite->fields.mFontSize, 0, 0, 0LL);
    baseSprite = *(UILabel_o **)&this->fields.isFirst;
    if ( !baseSprite )
      goto LABEL_23;
    printedSize = UILabel__get_printedSize(baseSprite, 0LL);
    baseSprite = (UILabel_o *)this->fields.baseSprite;
    v13 = printedSize.fields.y == INFINITY ? -printedSize.fields.y : printedSize.fields.y;
    if ( !baseSprite )
      goto LABEL_23;
    *(UnityEngine_Vector3_o *)&v14 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)baseSprite, 0LL);
    baseSprite = (UILabel_o *)this->fields.baseSprite;
    if ( !baseSprite )
      goto LABEL_23;
    v17 = (int)v13;
    v18 = (int)v13 - mHeight;
    v19 = v15 + (float)v18;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)baseSprite, *(UnityEngine_Vector3_o *)&v14, 0LL);
    baseSprite = (UILabel_o *)this->fields.titleBase;
    if ( !baseSprite )
      goto LABEL_23;
    UIWidget__set_height((UIWidget_o *)baseSprite, baseSprite->fields.mHeight + v18, 0LL);
    baseSprite = this->fields.illustLabel;
    if ( !baseSprite )
      goto LABEL_23;
    baseSprite = (UILabel_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseSprite, 0LL);
    if ( !baseSprite )
      goto LABEL_23;
    *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)baseSprite,
                                       0LL);
    baseSprite = *(UILabel_o **)&this->fields.isFirst;
    if ( !baseSprite )
      goto LABEL_23;
    v23 = v20;
    v24 = v21;
    v25 = v22;
    UIWidget__set_height((UIWidget_o *)baseSprite, v17, 0LL);
    baseSprite = this->fields.illustLabel;
    v26 = v18 >= 0 ? v18 : v18 + 1;
    if ( !baseSprite
      || (baseSprite = (UILabel_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)baseSprite, 0LL)) == 0LL )
    {
LABEL_23:
      sub_B2C434(baseSprite, v9);
    }
    v30.fields.y = v24 + (float)(v26 >> 1);
    v30.fields.x = v23;
    v30.fields.z = v25;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseSprite, v30, 0LL);
  }
}