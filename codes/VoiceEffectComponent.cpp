void VoiceEffectComponent___ctor(VoiceEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C289B1 & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectComponent_TypeInfo);
    byte_4C289B1 = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *voiceDataStr; // x21
  Il2CppObject *v8; // x0
  struct System_String_o *v9; // x0
  struct System_String_o **p_voicePath; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_String_o *v13; // x20
  int32_t voiceId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C289B0 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&SoundManager_TypeInfo);
    sub_1C2D490(&StringLiteral_25174/*"{0}_{1}"*/);
    byte_4C289B0 = 1;
  }
  voiceDataStr = (Il2CppObject *)this->fields.voiceDataStr;
  voiceId = this->fields.voiceId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &voiceId, method, v3, v4);
  v9 = System_String__Format_63499156((System_String_o *)StringLiteral_25174/*"{0}_{1}"*/, voiceDataStr, v8, 0);
  this->fields.voicePath = v9;
  p_voicePath = &this->fields.voicePath;
  sub_1C2D434((CGThumbnailListItem_o *)p_voicePath, (int32_t)v9, v11, v12);
  v13 = *p_voicePath;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(v13, callback, 1, 0);
}