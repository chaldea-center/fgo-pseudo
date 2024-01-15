void __fastcall SubmarineScanVoiceComponent___ctor(SubmarineScanVoiceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SubmarineScanVoiceComponent__Awake(SubmarineScanVoiceComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct System_String_array *vcNameList; // x8
  System_String_o *v16; // x0
  struct System_String_o *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_String_array *v24; // x8
  __int64 v25; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct System_String_array *v33; // x8
  struct System_String_o *v34; // x1

  if ( (byte_40F7CBA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3947/*"ChrVoice_"*/, method);
    byte_40F7CBA = 1;
  }
  this->fields.assetName = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.assetName, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.vcName = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.vcName, 0LL, v9, v10, v11, v12, v13, v14);
  if ( *(&this->fields.svtId + 1) )
  {
    vcNameList = this->fields.vcNameList;
    if ( !vcNameList )
      goto LABEL_11;
    if ( !*(_QWORD *)&vcNameList->max_length )
      return;
    v16 = System_Int32__ToString((int)this + 28, 0LL);
    v17 = System_String__Concat_43743732((System_String_o *)StringLiteral_3947/*"ChrVoice_"*/, v16, 0LL);
    this->fields.assetName = v17;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.assetName,
      (System_Int32_array **)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    v24 = this->fields.vcNameList;
    if ( !v24
      || (v25 = UnityEngine_Random__Range_34843248(0, v24->max_length, 0LL), (v33 = this->fields.vcNameList) == 0LL) )
    {
LABEL_11:
      sub_B170D4();
    }
    if ( (unsigned int)v25 >= v33->max_length )
    {
      sub_B17100(v25, v26, v27);
      sub_B170A0();
    }
    v34 = v33->m_Items[(int)v25];
    this->fields.vcName = v34;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.vcName,
      (System_Int32_array **)v34,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
}


float __fastcall SubmarineScanVoiceComponent__GetWaitTime(
        SubmarineScanVoiceComponent_o *this,
        const MethodInfo *method)
{
  return *(float *)&this->fields.svtId;
}


void __fastcall SubmarineScanVoiceComponent__PlayScanVoice(
        SubmarineScanVoiceComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *assetName; // x20
  System_String_o *vcName; // x21
  SeManager_c *v11; // x0
  float DEFAULT_VOLUME; // s8
  System_Action_o *v13; // x22
  struct SePlayer_o *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40F7CBB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&SeManager_TypeInfo, v6);
    sub_B16FFC(&SoundManager_TypeInfo, v7);
    sub_B16FFC(&Method_SubmarineScanVoiceComponent_StopVoice__, v8);
    byte_40F7CBB = 1;
  }
  assetName = this->fields.assetName;
  if ( assetName )
  {
    vcName = this->fields.vcName;
    if ( vcName )
    {
      v11 = SeManager_TypeInfo;
      if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        v11 = SeManager_TypeInfo;
      }
      DEFAULT_VOLUME = v11->static_fields->DEFAULT_VOLUME;
      v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_SubmarineScanVoiceComponent_StopVoice__, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v14 = SoundManager__playVoice_24824004(assetName, vcName, DEFAULT_VOLUME, v13, 0LL);
      this->fields.sePlayer = v14;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.sePlayer,
        (System_Int32_array **)v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
  }
}


void __fastcall SubmarineScanVoiceComponent__StopVoice(SubmarineScanVoiceComponent_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *p_sePlayer; // x19
  System_String_o *assetName; // x20
  System_String_o *vcName; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40F7CBC & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F7CBC = 1;
  }
  p_sePlayer = (BattleServantConfConponent_o *)&this->fields.sePlayer;
  if ( this->fields.sePlayer )
  {
    vcName = this->fields.vcName;
    assetName = this->fields.assetName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopVoice(assetName, vcName, 0.0, 0LL);
    p_sePlayer->klass = 0LL;
    sub_B16F98(p_sePlayer, 0LL, v6, v7, v8, v9, v10, v11);
  }
}