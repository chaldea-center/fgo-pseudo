void __fastcall SubmarineScanVoiceComponent___ctor(SubmarineScanVoiceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SubmarineScanVoiceComponent__Awake(SubmarineScanVoiceComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3
  __int64 v7; // x1
  int32_t *p_svtId; // x0
  struct System_String_array *vcNameList; // x8
  System_String_o *v10; // x0
  struct System_String_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_String_array *v14; // x8
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_String_array *v17; // x8
  struct System_String_o *v18; // x1

  if ( (byte_4AB2929 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_4463/*"ChrVoice_"*/, method);
    byte_4AB2929 = 1;
  }
  this->fields.assetName = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.assetName, 0, v2, v3);
  this->fields.vcName = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.vcName, 0, v5, v6);
  p_svtId = &this->fields.svtId;
  if ( this->fields.svtId )
  {
    vcNameList = this->fields.vcNameList;
    if ( !vcNameList )
      goto LABEL_11;
    if ( !*(_QWORD *)&vcNameList->max_length )
      return;
    v10 = System_Int32__ToString((int32_t)p_svtId, 0LL);
    v11 = System_String__Concat_62048128((System_String_o *)StringLiteral_4463/*"ChrVoice_"*/, v10, 0LL);
    this->fields.assetName = v11;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.assetName, (int32_t)v11, v12, v13);
    v14 = this->fields.vcNameList;
    if ( !v14
      || (p_svtId = (int32_t *)UnityEngine_Random__Range_69760360(0, v14->max_length, 0LL),
          (v17 = this->fields.vcNameList) == 0LL) )
    {
LABEL_11:
      sub_1BAB678(p_svtId, v7);
    }
    if ( (unsigned int)p_svtId >= v17->max_length )
      sub_1BAB680(p_svtId, v7);
    v18 = v17->m_Items[(int)p_svtId];
    this->fields.vcName = v18;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.vcName, (int32_t)v18, v15, v16);
  }
}


float __fastcall SubmarineScanVoiceComponent__GetWaitTime(
        SubmarineScanVoiceComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.waitTime;
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
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4AB292A & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&SeManager_TypeInfo, v3);
    sub_1BAB41C(&SoundManager_TypeInfo, v4);
    sub_1BAB41C(&Method_SubmarineScanVoiceComponent_StopVoice__, v5);
    byte_4AB292A = 1;
  }
  assetName = this->fields.assetName;
  if ( assetName )
  {
    vcName = this->fields.vcName;
    if ( vcName )
    {
      v8 = SeManager_TypeInfo;
      if ( !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        v8 = SeManager_TypeInfo;
      }
      DEFAULT_VOLUME = v8->static_fields->DEFAULT_VOLUME;
      v10 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_SubmarineScanVoiceComponent_StopVoice__, 0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      v11 = SoundManager__playVoice_39087920(assetName, vcName, DEFAULT_VOLUME, v10, 0LL);
      this->fields.sePlayer = v11;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.sePlayer, (int32_t)v11, v12, v13);
    }
  }
}


void __fastcall SubmarineScanVoiceComponent__StopVoice(SubmarineScanVoiceComponent_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_sePlayer; // x19
  System_String_o *vcName; // x20
  System_String_o *v5; // x21
  struct System_String_o **p_vcName; // t2
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4AB292B & 1) == 0 )
  {
    sub_1BAB41C(&SoundManager_TypeInfo, method);
    byte_4AB292B = 1;
  }
  p_sePlayer = (ServantStatusBattleListViewItem_o *)&this->fields.sePlayer;
  if ( this->fields.sePlayer )
  {
    p_vcName = &this->fields.vcName;
    vcName = this->fields.vcName;
    v5 = p_vcName[1];
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopVoice(v5, vcName, 0.0, 0LL);
    p_sePlayer->klass = 0LL;
    sub_1BAB3C0(p_sePlayer, 0, v7, v8);
  }
}