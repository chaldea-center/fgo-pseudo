void ServantStatusFlavorTextListViewItemDrawVoice___ctor(
        ServantStatusFlavorTextListViewItemDrawVoice_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t ServantStatusFlavorTextListViewItemDrawVoice__GetKind(
        ServantStatusFlavorTextListViewItemDrawVoice_o *this,
        const MethodInfo *method)
{
  return 3;
}


void ServantStatusFlavorTextListViewItemDrawVoice__SetCvName(
        ServantStatusFlavorTextListViewItemDrawVoice_o *this,
        System_String_o *cvName,
        const MethodInfo *method)
{
  UIRangeLabel_o *cvRangeLabel; // x0

  cvRangeLabel = this->fields.cvRangeLabel;
  if ( !cvRangeLabel )
    sub_2213CDC(0, cvName);
  UIRangeLabel__Set(cvRangeLabel, cvName, 0, 1, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusFlavorTextListViewItemDrawVoice__SetItem(
        ServantStatusFlavorTextListViewItemDrawVoice_o *this,
        ServantStatusListViewItem_o *item,
        bool isOpen,
        bool isNew,
        System_String_o *text,
        int32_t profileNum,
        int32_t mode,
        const MethodInfo *method)
{
  UILabel_o *illustTitleLabel; // x21
  System_String_o *illustRangeLabel; // x0
  __int64 v13; // x1
  UILabel_o *cvTitleLabel; // x21
  const MethodInfo *v15; // x4
  bool isPlayVoice; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *voice; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *illust; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596CB65 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12459/*"SERVANT_STATUS_PROFILE_ILLUST_TITLE"*/);
    sub_2213A60(&StringLiteral_12458/*"SERVANT_STATUS_PROFILE_CV_TITLE"*/);
    byte_596CB65 = 1;
  }
  illust = 0;
  voice = 0;
  isPlayVoice = 0;
  this->fields.dispMode = mode;
  if ( item && mode )
  {
    illustTitleLabel = this->fields.illustTitleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, isOpen);
    illustRangeLabel = LocalizationManager__Get((System_String_o *)StringLiteral_12459/*"SERVANT_STATUS_PROFILE_ILLUST_TITLE"*/, 0);
    if ( !illustTitleLabel )
      goto LABEL_13;
    UILabel__set_text(illustTitleLabel, illustRangeLabel, 0);
    cvTitleLabel = this->fields.cvTitleLabel;
    illustRangeLabel = LocalizationManager__Get((System_String_o *)StringLiteral_12458/*"SERVANT_STATUS_PROFILE_CV_TITLE"*/, 0);
    if ( !cvTitleLabel
      || (UILabel__set_text(cvTitleLabel, illustRangeLabel, 0),
          ServantStatusListViewItem__GetVoiceInfo(item, &illust, &voice, &isPlayVoice, v15),
          (illustRangeLabel = (System_String_o *)this->fields.illustRangeLabel) == 0)
      || (UIRangeLabel__Set((UIRangeLabel_o *)illustRangeLabel, illust, 0, 1, 0, 0, 0),
          (illustRangeLabel = (System_String_o *)this->fields.cvRangeLabel) == 0) )
    {
LABEL_13:
      sub_2213CDC(illustRangeLabel, v13);
    }
    UIRangeLabel__Set((UIRangeLabel_o *)illustRangeLabel, voice, 0, 1, 0, 0, 0);
  }
}