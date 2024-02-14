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
  ServantStatusFlavorTextListViewItemDrawVoice_c *klass; // x0

  klass = this[1].klass;
  if ( !klass )
    sub_B0D97C(0LL);
  UIRangeLabel__Set((UIRangeLabel_o *)klass, cvName, 0LL, 1, 0, 0LL);
}


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
  __int64 v12; // x1
  struct UIRangeLabel_o *illustRangeLabel; // x21
  System_String_o *cvTitleLabel; // x0
  struct UIRangeLabel_o *cvRangeLabel; // x21
  const MethodInfo *v16; // x4
  bool isPlayVoice; // [xsp+Ch] [xbp-34h] BYREF
  System_String_o *voice; // [xsp+10h] [xbp-30h] BYREF
  System_String_o *illust; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4219D0B & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, item);
    sub_B0D8A4(&StringLiteral_12031/*"SERVANT_STATUS_PROFILE_ILLUST_TITLE"*/, v11);
    sub_B0D8A4(&StringLiteral_12030/*"SERVANT_STATUS_PROFILE_CV_TITLE"*/, v12);
    byte_4219D0B = 1;
  }
  voice = 0LL;
  illust = 0LL;
  isPlayVoice = 0;
  LODWORD(this->fields.illustTitleLabel) = mode;
  if ( item && mode )
  {
    illustRangeLabel = this->fields.illustRangeLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    cvTitleLabel = LocalizationManager__Get((System_String_o *)StringLiteral_12031/*"SERVANT_STATUS_PROFILE_ILLUST_TITLE"*/, 0LL);
    if ( !illustRangeLabel )
      goto LABEL_14;
    UILabel__set_text((UILabel_o *)illustRangeLabel, cvTitleLabel, 0LL);
    cvRangeLabel = this->fields.cvRangeLabel;
    cvTitleLabel = LocalizationManager__Get((System_String_o *)StringLiteral_12030/*"SERVANT_STATUS_PROFILE_CV_TITLE"*/, 0LL);
    if ( !cvRangeLabel
      || (UILabel__set_text((UILabel_o *)cvRangeLabel, cvTitleLabel, 0LL),
          ServantStatusListViewItem__GetVoiceInfo(item, &illust, &voice, &isPlayVoice, v16),
          (cvTitleLabel = (System_String_o *)this->fields.cvTitleLabel) == 0LL)
      || (UIRangeLabel__Set((UIRangeLabel_o *)cvTitleLabel, illust, 0LL, 1, 0, 0LL),
          (cvTitleLabel = (System_String_o *)this[1].klass) == 0LL) )
    {
LABEL_14:
      sub_B0D97C(cvTitleLabel);
    }
    UIRangeLabel__Set((UIRangeLabel_o *)cvTitleLabel, voice, 0LL, 1, 0, 0LL);
  }
}