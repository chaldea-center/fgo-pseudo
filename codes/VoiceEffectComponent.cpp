void __fastcall VoiceEffectComponent___ctor(VoiceEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE718 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EE718 = 1;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  Il2CppObject *voiceDataStr; // x21
  Il2CppObject *v13; // x0
  struct System_String_o *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_o *voicePath; // x20
  int32_t voiceId; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EE717 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_23955/*"{0}_{1}"*/, v9, v10, v11);
    byte_42EE717 = 1;
  }
  voiceDataStr = (Il2CppObject *)this->fields.voiceDataStr;
  voiceId = this->fields.voiceId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &voiceId);
  v14 = System_String__Format_44573324((System_String_o *)StringLiteral_23955/*"{0}_{1}"*/, voiceDataStr, v13, 0LL);
  this->fields.voicePath = v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.voicePath,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  voicePath = this->fields.voicePath;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(voicePath, callback, 1, 0LL);
}