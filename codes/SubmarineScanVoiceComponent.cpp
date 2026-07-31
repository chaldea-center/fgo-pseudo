void SubmarineScanVoiceComponent___ctor(SubmarineScanVoiceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SubmarineScanVoiceComponent__Awake(SubmarineScanVoiceComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  int32_t *p_svtId; // x0
  struct System_String_array *vcNameList; // x8
  System_String_o *v18; // x0
  struct System_String_o *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_String_array *v26; // x8
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_String_array *v33; // x8
  struct System_String_o *v34; // x1

  if ( (byte_5934DE6 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4588/*"ChrVoice_"*/);
    byte_5934DE6 = 1;
  }
  this->fields.assetName = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.assetName, 0, v2, v3, v4, v5, v6, v7);
  this->fields.vcName = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.vcName, 0, v9, v10, v11, v12, v13, v14);
  p_svtId = &this->fields.svtId;
  if ( this->fields.svtId )
  {
    vcNameList = this->fields.vcNameList;
    if ( !vcNameList )
      goto LABEL_11;
    if ( !vcNameList->max_length )
      return;
    v18 = System_Int32__ToString((int32_t)p_svtId, 0);
    v19 = System_String__Concat_75438412((System_String_o *)StringLiteral_4588/*"ChrVoice_"*/, v18, 0);
    this->fields.assetName = v19;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.assetName, (int32_t)v19, v20, v21, v22, v23, v24, v25);
    v26 = this->fields.vcNameList;
    if ( !v26
      || (p_svtId = (int32_t *)UnityEngine_Random__Range_83187376(0, v26->max_length, 0),
          (v33 = this->fields.vcNameList) == 0) )
    {
LABEL_11:
      sub_21FFECC(p_svtId, v15);
    }
    if ( (unsigned int)p_svtId >= LODWORD(v33->max_length) )
      sub_21FFED4(p_svtId);
    v34 = v33->m_Items[(int)p_svtId];
    this->fields.vcName = v34;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.vcName, (int32_t)v34, v27, v28, v29, v30, v31, v32);
  }
}


float SubmarineScanVoiceComponent__GetWaitTime(SubmarineScanVoiceComponent_o *this, const MethodInfo *method)
{
  return this->fields.waitTime;
}


void SubmarineScanVoiceComponent__PlayScanVoice(SubmarineScanVoiceComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *assetName; // x20
  System_String_o *vcName; // x21
  SeManager_c *v6; // x0
  float DEFAULT_VOLUME; // s8
  System_Action_o *v8; // x22
  __int64 v9; // x1
  __int64 v10; // x2
  struct SePlayer_o *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5934DE7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&SeManager_TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&Method_SubmarineScanVoiceComponent_StopVoice__);
    byte_5934DE7 = 1;
  }
  assetName = this->fields.assetName;
  if ( assetName )
  {
    vcName = this->fields.vcName;
    if ( vcName )
    {
      v6 = SeManager_TypeInfo;
      if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method, v2);
        v6 = SeManager_TypeInfo;
      }
      DEFAULT_VOLUME = v6->static_fields->DEFAULT_VOLUME;
      v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_SubmarineScanVoiceComponent_StopVoice__, 0);
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v9, v10);
      v11 = SoundManager__playVoice_48465348(assetName, vcName, DEFAULT_VOLUME, v8, 0, 0);
      this->fields.sePlayer = v11;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.sePlayer,
        (int32_t)v11,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
  }
}


void SubmarineScanVoiceComponent__StopVoice(SubmarineScanVoiceComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_sePlayer; // x19
  System_String_o *vcName; // x20
  System_String_o *v6; // x21
  struct System_String_o **p_vcName; // t2
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5934DE8 & 1) == 0 )
  {
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_5934DE8 = 1;
  }
  p_sePlayer = (MissionNaviTransitionBoardItem_o *)&this->fields.sePlayer;
  if ( this->fields.sePlayer )
  {
    p_vcName = &this->fields.vcName;
    vcName = this->fields.vcName;
    v6 = p_vcName[1];
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method, v2);
    SoundManager__stopVoice(v6, vcName, 0.0, 0);
    p_sePlayer->klass = 0;
    sub_21FFBF4(p_sePlayer, 0, v8, v9, v10, v11, v12, v13);
  }
}