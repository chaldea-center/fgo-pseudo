void __fastcall VoiceEffectComponent___ctor(VoiceEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_49FF8AC & 1) == 0 )
  {
    sub_1B64870(&CommonEffectComponent_TypeInfo, method);
    byte_49FF8AC = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


void __fastcall VoiceEffectComponent__LoadVoiceAsset(
        VoiceEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *voiceDataStr; // x21
  Il2CppObject *v10; // x0
  struct System_String_o *v11; // x0
  struct System_String_o **p_voicePath; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x20
  int32_t voiceId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF8AB & 1) == 0 )
  {
    sub_1B64870(&int_TypeInfo, callback);
    sub_1B64870(&SoundManager_TypeInfo, v7);
    sub_1B64870(&StringLiteral_25001/*"{0}_{1}"*/, v8);
    byte_49FF8AB = 1;
  }
  voiceDataStr = (Il2CppObject *)this->fields.voiceDataStr;
  voiceId = this->fields.voiceId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &voiceId, method, v3, v4);
  v11 = System_String__Format_61397948((System_String_o *)StringLiteral_25001/*"{0}_{1}"*/, voiceDataStr, v10, 0LL);
  this->fields.voicePath = v11;
  p_voicePath = &this->fields.voicePath;
  sub_1B64814((ServantStatusBattleListViewItem_o *)p_voicePath, (int32_t)v11, v13, v14);
  v15 = *p_voicePath;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(v15, callback, 1, 0LL);
}