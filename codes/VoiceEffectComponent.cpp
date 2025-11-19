void VoiceEffectComponent___ctor(VoiceEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4CB79EE & 1) == 0 )
  {
    sub_1C6BA08(&CommonEffectComponent_TypeInfo);
    byte_4CB79EE = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0);
}


void VoiceEffectComponent__LoadVoiceAsset(
        VoiceEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *voiceDataStr; // x21
  Il2CppObject *v6; // x0
  struct System_String_o *v7; // x0
  struct System_String_o **p_voicePath; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_String_o *v11; // x20
  int32_t voiceId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB79ED & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_25307/*"{0}_{1}"*/);
    byte_4CB79ED = 1;
  }
  voiceDataStr = (Il2CppObject *)this->fields.voiceDataStr;
  voiceId = this->fields.voiceId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &voiceId);
  v7 = System_String__Format_64008100((System_String_o *)StringLiteral_25307/*"{0}_{1}"*/, voiceDataStr, v6, 0);
  this->fields.voicePath = v7;
  p_voicePath = &this->fields.voicePath;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_voicePath, (int32_t)v7, v9, v10);
  v11 = *p_voicePath;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(v11, callback, 1, 0);
}