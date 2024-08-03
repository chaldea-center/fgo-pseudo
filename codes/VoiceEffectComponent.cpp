void __fastcall VoiceEffectComponent___ctor(VoiceEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_49FD7B2 & 1) == 0 )
  {
    sub_1B640C8(&CommonEffectComponent_TypeInfo, method);
    byte_49FD7B2 = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *voiceDataStr; // x21
  Il2CppObject *v8; // x0
  struct System_String_o *v9; // x0
  struct System_String_o **p_voicePath; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x20
  int32_t voiceId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FD7B1 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, callback);
    sub_1B640C8(&SoundManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_24997/*"{0}_{1}"*/, v6);
    byte_49FD7B1 = 1;
  }
  voiceDataStr = (Il2CppObject *)this->fields.voiceDataStr;
  voiceId = this->fields.voiceId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &voiceId);
  v9 = System_String__Format_61389768((System_String_o *)StringLiteral_24997/*"{0}_{1}"*/, voiceDataStr, v8, 0LL);
  this->fields.voicePath = v9;
  p_voicePath = &this->fields.voicePath;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_voicePath, (int32_t)v9, v11, v12);
  v13 = *p_voicePath;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(v13, callback, 1, 0LL);
}