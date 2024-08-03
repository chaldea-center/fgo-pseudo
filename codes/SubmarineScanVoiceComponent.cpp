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
  int32_t *p_svtId; // x0
  struct System_String_array *vcNameList; // x8
  System_String_o *v9; // x0
  struct System_String_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_String_array *v13; // x8
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_String_array *v17; // x8
  struct System_String_o *v18; // x1

  if ( (byte_49F90B4 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_4441/*"ChrVoice_"*/, method);
    byte_49F90B4 = 1;
  }
  this->fields.assetName = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetName, 0, v2, v3);
  this->fields.vcName = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.vcName, 0, v5, v6);
  p_svtId = &this->fields.svtId;
  if ( this->fields.svtId )
  {
    vcNameList = this->fields.vcNameList;
    if ( !vcNameList )
      goto LABEL_11;
    if ( !*(_QWORD *)&vcNameList->max_length )
      return;
    v9 = System_Int32__ToString((int32_t)p_svtId, 0LL);
    v10 = System_String__Concat_61375396((System_String_o *)StringLiteral_4441/*"ChrVoice_"*/, v9, 0LL);
    this->fields.assetName = v10;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetName, (int32_t)v10, v11, v12);
    v13 = this->fields.vcNameList;
    if ( !v13
      || (p_svtId = (int32_t *)UnityEngine_Random__Range_69087476(0, v13->max_length, 0LL),
          (v17 = this->fields.vcNameList) == 0LL) )
    {
LABEL_11:
      sub_1B64324(p_svtId);
    }
    if ( (unsigned int)p_svtId >= v17->max_length )
      sub_1B6432C(p_svtId, v14);
    v18 = v17->m_Items[(int)p_svtId];
    this->fields.vcName = v18;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.vcName, (int32_t)v18, v15, v16);
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
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49F90B5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&SeManager_TypeInfo, v4);
    sub_1B640C8(&SoundManager_TypeInfo, v5);
    sub_1B640C8(&Method_SubmarineScanVoiceComponent_StopVoice__, v6);
    byte_49F90B5 = 1;
  }
  assetName = this->fields.assetName;
  if ( assetName )
  {
    vcName = this->fields.vcName;
    if ( vcName )
    {
      v9 = SeManager_TypeInfo;
      if ( !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        v9 = SeManager_TypeInfo;
      }
      DEFAULT_VOLUME = v9->static_fields->DEFAULT_VOLUME;
      v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_SubmarineScanVoiceComponent_StopVoice__, 0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      v12 = SoundManager__playVoice_38387180(assetName, vcName, DEFAULT_VOLUME, v11, 0LL);
      this->fields.sePlayer = v12;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.sePlayer, (int32_t)v12, v13, v14);
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

  if ( (byte_49F90B6 & 1) == 0 )
  {
    sub_1B640C8(&SoundManager_TypeInfo, method);
    byte_49F90B6 = 1;
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
    sub_1B6406C(p_sePlayer, 0, v7, v8);
  }
}