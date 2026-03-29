void VoiceEffectComponent___ctor(VoiceEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4D320A5 & 1) == 0 )
  {
    sub_1C93AD4(&CommonEffectComponent_TypeInfo);
    byte_4D320A5 = 1;
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_String_o *v15; // x20
  int32_t voiceId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D320A4 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&SoundManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_25522/*"{0}_{1}"*/);
    byte_4D320A4 = 1;
  }
  voiceDataStr = (Il2CppObject *)this->fields.voiceDataStr;
  voiceId = this->fields.voiceId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &voiceId);
  v7 = System_String__Format_64467032((System_String_o *)StringLiteral_25522/*"{0}_{1}"*/, voiceDataStr, v6, 0);
  this->fields.voicePath = v7;
  p_voicePath = &this->fields.voicePath;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_voicePath, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  v15 = *p_voicePath;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(v15, callback, 1, 0);
}