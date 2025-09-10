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
  __int64 v7; // x1
  int32_t *p_svtId; // x0
  struct System_String_array *vcNameList; // x8
  System_String_o *v10; // x0
  struct System_String_o *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_String_array *v14; // x8
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  struct System_String_array *v17; // x8
  struct System_String_o *v18; // x1

  if ( (byte_4C23C3A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_4417/*"ChrVoice_"*/);
    byte_4C23C3A = 1;
  }
  this->fields.assetName = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.assetName, 0, v2, v3);
  this->fields.vcName = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.vcName, 0, v5, v6);
  p_svtId = &this->fields.svtId;
  if ( this->fields.svtId )
  {
    vcNameList = this->fields.vcNameList;
    if ( !vcNameList )
      goto LABEL_11;
    if ( !vcNameList->max_length )
      return;
    v10 = System_Int32__ToString((int32_t)p_svtId, 0);
    v11 = System_String__Concat_63457864((System_String_o *)StringLiteral_4417/*"ChrVoice_"*/, v10, 0);
    this->fields.assetName = v11;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.assetName, (int32_t)v11, v12, v13);
    v14 = this->fields.vcNameList;
    if ( !v14
      || (p_svtId = (int32_t *)UnityEngine_Random__Range_71123924(0, v14->max_length, 0),
          (v17 = this->fields.vcNameList) == 0) )
    {
LABEL_11:
      sub_1C2D6EC(p_svtId, v7);
    }
    if ( (unsigned int)p_svtId >= LODWORD(v17->max_length) )
      sub_1C2D6F4(p_svtId, v7, v15);
    v18 = v17->m_Items[(int)p_svtId];
    this->fields.vcName = v18;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.vcName, (int32_t)v18, v15, v16);
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

  if ( (byte_4C23C3B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&SeManager_TypeInfo);
    sub_1C2D490(&SoundManager_TypeInfo);
    sub_1C2D490(&Method_SubmarineScanVoiceComponent_StopVoice__);
    byte_4C23C3B = 1;
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
      v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_SubmarineScanVoiceComponent_StopVoice__, 0);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      v8 = SoundManager__playVoice_41296680(assetName, vcName, DEFAULT_VOLUME, v7, 0, 0);
      this->fields.sePlayer = v8;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.sePlayer, (int32_t)v8, v9, v10);
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

  if ( (byte_4C23C3C & 1) == 0 )
  {
    sub_1C2D490(&SoundManager_TypeInfo);
    byte_4C23C3C = 1;
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
    sub_1C2D434(p_sePlayer, 0, v7, v8);
  }
}