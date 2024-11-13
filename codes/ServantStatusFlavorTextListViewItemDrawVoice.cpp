void __fastcall ServantStatusFlavorTextListViewItemDrawVoice___ctor(
        ServantStatusFlavorTextListViewItemDrawVoice_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantStatusFlavorTextListViewItemDrawVoice__GetKind(
        ServantStatusFlavorTextListViewItemDrawVoice_o *this,
        const MethodInfo *method)
{
  return 3;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawVoice__SetCvName(
        ServantStatusFlavorTextListViewItemDrawVoice_o *this,
        System_String_o *cvName,
        const MethodInfo *method)
{
  UIRangeLabel_o *cvRangeLabel; // x0

  cvRangeLabel = this->fields.cvRangeLabel;
  if ( !cvRangeLabel )
    sub_1BCAA3C(0LL, cvName);
  UIRangeLabel__Set(cvRangeLabel, cvName, 0LL, 1, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewItemDrawVoice__SetItem(
        ServantStatusFlavorTextListViewItemDrawVoice_o *this,
        ServantStatusListViewItem_o *item,
        bool isOpen,
        bool isNew,
        System_String_o *text,
        int32_t profileNum,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UILabel_o *illustTitleLabel; // x21
  System_String_o *illustRangeLabel; // x0
  __int64 v17; // x1
  UILabel_o *cvTitleLabel; // x21
  const MethodInfo *v19; // x4
  bool isPlayVoice; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *voice; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *illust; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B12A7A & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, isOpen);
    sub_1BCA7E0(&StringLiteral_12029/*"SERVANT_STATUS_PROFILE_ILLUST_TITLE"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_12028/*"SERVANT_STATUS_PROFILE_CV_TITLE"*/, v13, v14);
    byte_4B12A7A = 1;
  }
  illust = 0LL;
  voice = 0LL;
  isPlayVoice = 0;
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    illustTitleLabel = this->fields.illustTitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    illustRangeLabel = LocalizationManager__Get((System_String_o *)StringLiteral_12029/*"SERVANT_STATUS_PROFILE_ILLUST_TITLE"*/, 0LL);
    if ( !illustTitleLabel )
      goto LABEL_13;
    UILabel__set_text(illustTitleLabel, illustRangeLabel, 0LL);
    cvTitleLabel = this->fields.cvTitleLabel;
    illustRangeLabel = LocalizationManager__Get((System_String_o *)StringLiteral_12028/*"SERVANT_STATUS_PROFILE_CV_TITLE"*/, 0LL);
    if ( !cvTitleLabel
      || (UILabel__set_text(cvTitleLabel, illustRangeLabel, 0LL),
          ServantStatusListViewItem__GetVoiceInfo(item, &illust, &voice, &isPlayVoice, v19),
          (illustRangeLabel = (System_String_o *)this->fields.illustRangeLabel) == 0LL)
      || (UIRangeLabel__Set((UIRangeLabel_o *)illustRangeLabel, illust, 0LL, 1, 0, 0LL),
          (illustRangeLabel = (System_String_o *)this->fields.cvRangeLabel) == 0LL) )
    {
LABEL_13:
      sub_1BCAA3C(illustRangeLabel, v17);
    }
    UIRangeLabel__Set((UIRangeLabel_o *)illustRangeLabel, voice, 0LL, 1, 0, 0LL);
  }
}