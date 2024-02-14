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
  int32_t *v15; // x0
  struct System_String_array *vcNameList; // x8
  System_String_o *v17; // x0
  struct System_String_o *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_String_array *v25; // x8
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct System_String_array *v32; // x8
  struct System_String_o *v33; // x1
  __int64 v34; // x0

  if ( (byte_421366F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3976/*"ChrVoice_"*/, method);
    byte_421366F = 1;
  }
  this->fields.assetName = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.assetName, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.vcName = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.vcName, 0LL, v9, v10, v11, v12, v13, v14);
  v15 = &this->fields.svtId + 1;
  if ( *(&this->fields.svtId + 1) )
  {
    vcNameList = this->fields.vcNameList;
    if ( !vcNameList )
      goto LABEL_11;
    if ( !*(_QWORD *)&vcNameList->max_length )
      return;
    v17 = System_Int32__ToString((int32_t)v15, 0LL);
    v18 = System_String__Concat_43849904((System_String_o *)StringLiteral_3976/*"ChrVoice_"*/, v17, 0LL);
    this->fields.assetName = v18;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.assetName,
      (System_Int32_array **)v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    v25 = this->fields.vcNameList;
    if ( !v25
      || (v15 = (int32_t *)UnityEngine_Random__Range_34969060(0, v25->max_length, 0LL),
          (v32 = this->fields.vcNameList) == 0LL) )
    {
LABEL_11:
      sub_B0D97C(v15);
    }
    if ( (unsigned int)v15 >= v32->max_length )
    {
      v34 = sub_B0D9A8(v15);
      sub_B0D948(v34, 0LL);
    }
    v33 = v32->m_Items[(int)v15];
    this->fields.vcName = v33;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.vcName,
      (System_Int32_array **)v33,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *assetName; // x20
  System_String_o *vcName; // x21
  SeManager_c *v9; // x0
  float DEFAULT_VOLUME; // s8
  System_Action_o *v11; // x22
  struct SePlayer_o *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4213670 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&SeManager_TypeInfo, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SubmarineScanVoiceComponent_StopVoice__, v6);
    byte_4213670 = 1;
  }
  assetName = this->fields.assetName;
  if ( assetName )
  {
    vcName = this->fields.vcName;
    if ( vcName )
    {
      v9 = SeManager_TypeInfo;
      if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        v9 = SeManager_TypeInfo;
      }
      DEFAULT_VOLUME = v9->static_fields->DEFAULT_VOLUME;
      v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_SubmarineScanVoiceComponent_StopVoice__, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v12 = SoundManager__playVoice_24977528(assetName, vcName, DEFAULT_VOLUME, v11, 0LL);
      this->fields.sePlayer = v12;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.sePlayer,
        (System_Int32_array **)v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
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

  if ( (byte_4213671 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4213671 = 1;
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
    sub_B0D840(p_sePlayer, 0LL, v6, v7, v8, v9, v10, v11);
  }
}