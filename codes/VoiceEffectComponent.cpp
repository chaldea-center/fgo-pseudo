void __fastcall VoiceEffectComponent___ctor(VoiceEffectComponent_o *this, const MethodInfo *method)
{
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


void __fastcall VoiceEffectComponent__LoadVoiceAsset(
        VoiceEffectComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_o *klass; // x20
  int voicePath; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FF744 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, callback);
    sub_B16FFC(&SoundManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_23549, v6);
    byte_40FF744 = 1;
  }
  v7 = *(Il2CppObject **)&this->fields.voiceId;
  voicePath = (int)this->fields.voicePath;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &voicePath);
  v9 = System_String__Format_43739268((System_String_o *)StringLiteral_23549, v7, v8, 0LL);
  this[1].klass = (VoiceEffectComponent_c *)v9;
  sub_B16F98((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
  klass = (System_String_o *)this[1].klass;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(klass, callback, 1, 0LL);
}