void __fastcall VoiceEffectComponent___ctor(VoiceEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_43912AA & 1) == 0 )
  {
    sub_B775C4(&CommonEffectComponent_TypeInfo);
    byte_43912AA = 1;
  }
  if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  }
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


void __fastcall VoiceEffectComponent__LoadVoiceAsset(
        VoiceEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  Il2CppObject *voiceDataStr; // x21
  Il2CppObject *v6; // x0
  struct System_String_o *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_o *voicePath; // x20
  int32_t voiceId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_43912A9 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_24131/*"{0}_{1}"*/);
    byte_43912A9 = 1;
  }
  voiceDataStr = (Il2CppObject *)this->fields.voiceDataStr;
  voiceId = this->fields.voiceId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &voiceId, method);
  v7 = System_String__Format_44897472((System_String_o *)StringLiteral_24131/*"{0}_{1}"*/, voiceDataStr, v6, 0LL);
  this->fields.voicePath = v7;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.voicePath,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  voicePath = this->fields.voicePath;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(voicePath, callback, 1, 0LL);
}