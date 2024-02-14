void __fastcall VoiceEffectComponent___ctor(VoiceEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_421A2C1 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectComponent_TypeInfo, method);
    byte_421A2C1 = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *voiceDataStr; // x21
  Il2CppObject *v8; // x0
  struct System_String_o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_o *voicePath; // x20
  int32_t voiceId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_421A2C0 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, callback);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_23721/*"{0}_{1}"*/, v6);
    byte_421A2C0 = 1;
  }
  voiceDataStr = (Il2CppObject *)this->fields.voiceDataStr;
  voiceId = this->fields.voiceId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &voiceId);
  v9 = System_String__Format_43845440((System_String_o *)StringLiteral_23721/*"{0}_{1}"*/, voiceDataStr, v8, 0LL);
  this->fields.voicePath = v9;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.voicePath,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  voicePath = this->fields.voicePath;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(voicePath, callback, 1, 0LL);
}