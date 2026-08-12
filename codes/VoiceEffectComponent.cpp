void VoiceEffectComponent___ctor(VoiceEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_5971FB6 & 1) == 0 )
  {
    sub_2213A60(&CommonEffectComponent_TypeInfo);
    byte_5971FB6 = 1;
  }
  if ( !*(&CommonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, method);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  System_String_o *v16; // x20
  int32_t voiceId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5971FB5 & 1) == 0 )
  {
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&StringLiteral_26596/*"{0}_{1}"*/);
    byte_5971FB5 = 1;
  }
  voiceDataStr = (Il2CppObject *)this->fields.voiceDataStr;
  voiceId = this->fields.voiceId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &voiceId);
  v7 = System_String__Format_75697880((System_String_o *)StringLiteral_26596/*"{0}_{1}"*/, voiceDataStr, v6, 0);
  this->fields.voicePath = v7;
  p_voicePath = &this->fields.voicePath;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_voicePath, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  v16 = *p_voicePath;
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v15);
  SoundManager__loadAudioAssetStorage(v16, callback, 1, 0);
}