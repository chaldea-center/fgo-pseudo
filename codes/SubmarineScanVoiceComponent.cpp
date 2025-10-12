void SubmarineScanVoiceComponent___ctor(SubmarineScanVoiceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SubmarineScanVoiceComponent__Awake(SubmarineScanVoiceComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t *p_svtId; // x0
  struct System_String_array *vcNameList; // x8
  System_String_o *v9; // x0
  struct System_String_o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_String_array *v13; // x8
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_String_array *v16; // x8
  struct System_String_o *v17; // x1

  if ( (byte_4C3430E & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_4424/*"ChrVoice_"*/);
    byte_4C3430E = 1;
  }
  this->fields.assetName = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.assetName, 0, v2, v3);
  this->fields.vcName = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.vcName, 0, v5, v6);
  p_svtId = &this->fields.svtId;
  if ( this->fields.svtId )
  {
    vcNameList = this->fields.vcNameList;
    if ( !vcNameList )
      goto LABEL_11;
    if ( !vcNameList->max_length )
      return;
    v9 = System_Int32__ToString((int32_t)p_svtId, 0);
    v10 = System_String__Concat_63518544((System_String_o *)StringLiteral_4424/*"ChrVoice_"*/, v9, 0);
    this->fields.assetName = v10;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.assetName, (int32_t)v10, v11, v12);
    v13 = this->fields.vcNameList;
    if ( !v13
      || (p_svtId = (int32_t *)UnityEngine_Random__Range_71183860(0, v13->max_length, 0),
          (v16 = this->fields.vcNameList) == 0) )
    {
LABEL_11:
      sub_1C32E7C(p_svtId);
    }
    if ( (unsigned int)p_svtId >= LODWORD(v16->max_length) )
      sub_1C32E84(p_svtId);
    v17 = v16->m_Items[(int)p_svtId];
    this->fields.vcName = v17;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.vcName, (int32_t)v17, v14, v15);
  }
}


float SubmarineScanVoiceComponent__GetWaitTime(SubmarineScanVoiceComponent_o *this, const MethodInfo *method)
{
  return this->fields.waitTime;
}


void SubmarineScanVoiceComponent__PlayScanVoice(SubmarineScanVoiceComponent_o *this, const MethodInfo *method)
{
  System_String_o *assetName; // x20
  System_String_o *vcName; // x21
  SeManager_c *v5; // x0
  float DEFAULT_VOLUME; // s8
  System_Action_o *v7; // x22
  struct SePlayer_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C3430F & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&SeManager_TypeInfo);
    sub_1C32C20(&SoundManager_TypeInfo);
    sub_1C32C20(&Method_SubmarineScanVoiceComponent_StopVoice__);
    byte_4C3430F = 1;
  }
  assetName = this->fields.assetName;
  if ( assetName )
  {
    vcName = this->fields.vcName;
    if ( vcName )
    {
      v5 = SeManager_TypeInfo;
      if ( !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        v5 = SeManager_TypeInfo;
      }
      DEFAULT_VOLUME = v5->static_fields->DEFAULT_VOLUME;
      v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_SubmarineScanVoiceComponent_StopVoice__, 0);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      v8 = SoundManager__playVoice_41418932(assetName, vcName, DEFAULT_VOLUME, v7, 0, 0);
      this->fields.sePlayer = v8;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.sePlayer, (int32_t)v8, v9, v10);
    }
  }
}


void SubmarineScanVoiceComponent__StopVoice(SubmarineScanVoiceComponent_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_sePlayer; // x19
  System_String_o *vcName; // x20
  System_String_o *v5; // x21
  struct System_String_o **p_vcName; // t2
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C34310 & 1) == 0 )
  {
    sub_1C32C20(&SoundManager_TypeInfo);
    byte_4C34310 = 1;
  }
  p_sePlayer = (CGThumbnailListItem_o *)&this->fields.sePlayer;
  if ( this->fields.sePlayer )
  {
    p_vcName = &this->fields.vcName;
    vcName = this->fields.vcName;
    v5 = p_vcName[1];
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoice(v5, vcName, 0.0, 0);
    p_sePlayer->klass = 0;
    sub_1C32BC4(p_sePlayer, 0, v7, v8);
  }
}