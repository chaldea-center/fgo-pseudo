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
  UIWidget_o *v9; // x0
  int32_t mHeight; // w21
  UILabel_o *v11; // x0
  UILabel_o *v12; // x0
  UnityEngine_Vector2_o printedSize; // kr00_8
  UnityEngine_BoxCollider_o *baseSprite; // x0
  double v15; // d8
  int v16; // s0
  float v17; // s1
  UnityEngine_BoxCollider_o *v19; // x0
  int32_t v20; // w20
  int v21; // w21
  float v22; // s1
  UIWidget_o *titleBase; // x0
  UnityEngine_GameObject_o *illustLabel; // x0
  UnityEngine_Transform_o *transform; // x0
  float v26; // s0
  float v27; // s1
  float v28; // s2
  UIWidget_o *v29; // x0
  float v30; // s8
  float v31; // s10
  float v32; // s9
  UnityEngine_GameObject_o *v33; // x0
  int v34; // w19
  UnityEngine_Transform_o *v35; // x0
  bool isPlayVoice; // [xsp+Ch] [xbp-44h] BYREF
  System_String_o *voice; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *illust; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  voice = 0LL;
  illust = 0LL;
  isPlayVoice = 0;
  LODWORD(this->fields.baseCollider) = mode;
  if ( item && mode && LOBYTE(this[1].klass) )
  {
    LOBYTE(this[1].klass) = 0;
    ServantStatusListViewItem__GetVoiceInfo(item, &illust, &voice, &isPlayVoice, (const MethodInfo *)text);
    v9 = *(UIWidget_o **)&this->fields.isFirst;
    if ( !v9 )
      goto LABEL_23;
    mHeight = v9->fields.mHeight;
    UIWidget__set_height(v9, 1000, 0LL);
    v11 = *(UILabel_o **)&this->fields.isFirst;
    if ( !v11 )
      goto LABEL_23;
    WrapControlText__textAdjust(v11, illust, v11->fields.mFontSize, 0, 0, 0LL);
    v12 = *(UILabel_o **)&this->fields.isFirst;
    if ( !v12 )
      goto LABEL_23;
    printedSize = UILabel__get_printedSize(v12, 0LL);
    baseSprite = (UnityEngine_BoxCollider_o *)this->fields.baseSprite;
    v15 = printedSize.fields.y == INFINITY ? -printedSize.fields.y : printedSize.fields.y;
    if ( !baseSprite )
      goto LABEL_23;
    *(UnityEngine_Vector3_o *)&v16 = UnityEngine_BoxCollider__get_size(baseSprite, 0LL);
    v19 = (UnityEngine_BoxCollider_o *)this->fields.baseSprite;
    if ( !v19 )
      goto LABEL_23;
    v20 = (int)v15;
    v21 = (int)v15 - mHeight;
    v22 = v17 + (float)v21;
    UnityEngine_BoxCollider__set_size(v19, *(UnityEngine_Vector3_o *)&v16, 0LL);
    titleBase = (UIWidget_o *)this->fields.titleBase;
    if ( !titleBase )
      goto LABEL_23;
    UIWidget__set_height(titleBase, titleBase->fields.mHeight + v21, 0LL);
    illustLabel = (UnityEngine_GameObject_o *)this->fields.illustLabel;
    if ( !illustLabel )
      goto LABEL_23;
    transform = UnityEngine_GameObject__get_transform(illustLabel, 0LL);
    if ( !transform )
      goto LABEL_23;
    *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Transform__get_localPosition(transform, 0LL);
    v29 = *(UIWidget_o **)&this->fields.isFirst;
    if ( !v29 )
      goto LABEL_23;
    v30 = v26;
    v31 = v27;
    v32 = v28;
    UIWidget__set_height(v29, v20, 0LL);
    v33 = (UnityEngine_GameObject_o *)this->fields.illustLabel;
    v34 = v21 >= 0 ? v21 : v21 + 1;
    if ( !v33 || (v35 = UnityEngine_GameObject__get_transform(v33, 0LL)) == 0LL )
LABEL_23:
      sub_B170D4();
    v39.fields.y = v31 + (float)(v34 >> 1);
    v39.fields.x = v30;
    v39.fields.z = v32;
    UnityEngine_Transform__set_localPosition(v35, v39, 0LL);
  }
}