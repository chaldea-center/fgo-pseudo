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
  __int64 v15; // x1
  int32_t *v16; // x0
  struct System_String_array *vcNameList; // x8
  System_String_o *v18; // x0
  struct System_String_o *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_String_array *v26; // x8
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct System_String_array *v33; // x8
  struct System_String_o *v34; // x1
  __int64 v35; // x0

  if ( (byte_438A637 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_4090/*"ChrVoice_"*/);
    byte_438A637 = 1;
  }
  this->fields.assetName = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.assetName, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.vcName = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.vcName, 0LL, v9, v10, v11, v12, v13, v14);
  v16 = &this->fields.svtId + 1;
  if ( *(&this->fields.svtId + 1) )
  {
    vcNameList = this->fields.vcNameList;
    if ( !vcNameList )
      goto LABEL_11;
    if ( !*(_QWORD *)&vcNameList->max_length )
      return;
    v18 = System_Int32__ToString((int32_t)v16, 0LL);
    v19 = System_String__Concat_44901936((System_String_o *)StringLiteral_4090/*"ChrVoice_"*/, v18, 0LL);
    this->fields.assetName = v19;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.assetName,
      (System_Int32_array **)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    v26 = this->fields.vcNameList;
    if ( !v26
      || (v16 = (int32_t *)UnityEngine_Random__Range_36343764(0, v26->max_length, 0LL),
          (v33 = this->fields.vcNameList) == 0LL) )
    {
LABEL_11:
      sub_B7769C(v16, v15);
    }
    if ( (unsigned int)v16 >= v33->max_length )
    {
      v35 = sub_B776C8(v16);
      sub_B77668(v35, 0LL);
    }
    v34 = v33->m_Items[(int)v16];
    this->fields.vcName = v34;
    sub_B77560(
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
  System_String_o *assetName; // x20
  System_String_o *vcName; // x21
  SeManager_c *v5; // x0
  float DEFAULT_VOLUME; // s8
  System_Action_o *v7; // x22
  struct SePlayer_o *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_438A638 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&SeManager_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_SubmarineScanVoiceComponent_StopVoice__);
    byte_438A638 = 1;
  }
  assetName = this->fields.assetName;
  if ( assetName )
  {
    vcName = this->fields.vcName;
    if ( vcName )
    {
      v5 = SeManager_TypeInfo;
      if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        v5 = SeManager_TypeInfo;
      }
      DEFAULT_VOLUME = v5->static_fields->DEFAULT_VOLUME;
      v7 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_SubmarineScanVoiceComponent_StopVoice__, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v8 = SoundManager__playVoice_23512556(assetName, vcName, DEFAULT_VOLUME, v7, 0LL);
      this->fields.sePlayer = v8;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.sePlayer,
        (System_Int32_array **)v8,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
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

  if ( (byte_438A639 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438A639 = 1;
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
    sub_B77560(p_sePlayer, 0LL, v6, v7, v8, v9, v10, v11);
  }
}