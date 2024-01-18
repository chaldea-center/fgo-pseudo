void __fastcall SubmarineScanVoiceComponent___ctor(SubmarineScanVoiceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SubmarineScanVoiceComponent__Awake(SubmarineScanVoiceComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t *v4; // x0
  struct System_String_array *vcNameList; // x8
  System_String_o *v6; // x0
  struct System_String_o *v7; // x0
  struct System_String_array *v8; // x8
  struct System_String_array *v9; // x8
  struct System_String_o *v10; // x1
  __int64 v11; // x0

  if ( (byte_4185826 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3963/*"ChrVoice_"*/, method);
    byte_4185826 = 1;
  }
  this->fields.assetName = 0LL;
  sub_B2C2F8(&this->fields.assetName, 0LL);
  this->fields.vcName = 0LL;
  sub_B2C2F8(&this->fields.vcName, 0LL);
  v4 = &this->fields.svtId + 1;
  if ( *(&this->fields.svtId + 1) )
  {
    vcNameList = this->fields.vcNameList;
    if ( !vcNameList )
      goto LABEL_11;
    if ( !*(_QWORD *)&vcNameList->max_length )
      return;
    v6 = System_Int32__ToString((int32_t)v4, 0LL);
    v7 = System_String__Concat_44305532((System_String_o *)StringLiteral_3963/*"ChrVoice_"*/, v6, 0LL);
    this->fields.assetName = v7;
    sub_B2C2F8(&this->fields.assetName, v7);
    v8 = this->fields.vcNameList;
    if ( !v8
      || (v4 = (int32_t *)UnityEngine_Random__Range_35348680(0, v8->max_length, 0LL),
          (v9 = this->fields.vcNameList) == 0LL) )
    {
LABEL_11:
      sub_B2C434(v4, v3);
    }
    if ( (unsigned int)v4 >= v9->max_length )
    {
      v11 = sub_B2C460(v4);
      sub_B2C400(v11, 0LL);
    }
    v10 = v9->m_Items[(int)v4];
    this->fields.vcName = v10;
    sub_B2C2F8(&this->fields.vcName, v10);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *assetName; // x20
  System_String_o *vcName; // x21
  SeManager_c *v8; // x0
  float DEFAULT_VOLUME; // s8
  System_Action_o *v10; // x22
  struct SePlayer_o *v11; // x0

  if ( (byte_4185827 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&SeManager_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    sub_B2C35C(&Method_SubmarineScanVoiceComponent_StopVoice__, v5);
    byte_4185827 = 1;
  }
  assetName = this->fields.assetName;
  if ( assetName )
  {
    vcName = this->fields.vcName;
    if ( vcName )
    {
      v8 = SeManager_TypeInfo;
      if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        v8 = SeManager_TypeInfo;
      }
      DEFAULT_VOLUME = v8->static_fields->DEFAULT_VOLUME;
      v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_SubmarineScanVoiceComponent_StopVoice__, 0LL);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v11 = SoundManager__playVoice_24786800(assetName, vcName, DEFAULT_VOLUME, v10, 0LL);
      this->fields.sePlayer = v11;
      sub_B2C2F8(&this->fields.sePlayer, v11);
    }
  }
}


void __fastcall SubmarineScanVoiceComponent__StopVoice(SubmarineScanVoiceComponent_o *this, const MethodInfo *method)
{
  struct SePlayer_o **p_sePlayer; // x19
  System_String_o *assetName; // x20
  System_String_o *vcName; // x21

  if ( (byte_4185828 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185828 = 1;
  }
  p_sePlayer = &this->fields.sePlayer;
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
    *p_sePlayer = 0LL;
    sub_B2C2F8(p_sePlayer, 0LL);
  }
}