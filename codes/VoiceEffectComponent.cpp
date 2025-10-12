void VoiceEffectComponent___ctor(VoiceEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C390B9 & 1) == 0 )
  {
    sub_1C32C20(&CommonEffectComponent_TypeInfo);
    byte_4C390B9 = 1;
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
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *voiceDataStr; // x21
  Il2CppObject *v11; // x0
  struct System_String_o *v12; // x0
  struct System_String_o **p_voicePath; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_String_o *v16; // x20
  int32_t voiceId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C390B8 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&SoundManager_TypeInfo);
    sub_1C32C20(&StringLiteral_25192/*"{0}_{1}"*/);
    byte_4C390B8 = 1;
  }
  voiceDataStr = (Il2CppObject *)this->fields.voiceDataStr;
  voiceId = this->fields.voiceId;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &voiceId, method, v3, v4, v5, v6, v7);
  v12 = System_String__Format_63559836((System_String_o *)StringLiteral_25192/*"{0}_{1}"*/, voiceDataStr, v11, 0);
  this->fields.voicePath = v12;
  p_voicePath = &this->fields.voicePath;
  sub_1C32BC4((CGThumbnailListItem_o *)p_voicePath, (int32_t)v12, v14, v15);
  v16 = *p_voicePath;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(v16, callback, 1, 0);
}