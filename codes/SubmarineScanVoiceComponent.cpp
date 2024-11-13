void __fastcall SubmarineScanVoiceComponent___ctor(SubmarineScanVoiceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SubmarineScanVoiceComponent__Awake(SubmarineScanVoiceComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x1
  int32_t *p_svtId; // x0
  struct System_String_array *vcNameList; // x8
  System_String_o *v18; // x0
  struct System_String_o *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_String_array *v26; // x8
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_String_array *v33; // x8
  struct System_String_o *v34; // x1

  if ( (byte_4B12D95 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4532/*"ChrVoice_"*/, method, v2);
    byte_4B12D95 = 1;
  }
  this->fields.assetName = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetName, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.vcName = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.vcName, 0LL, v9, v10, v11, v12, v13, v14);
  p_svtId = &this->fields.svtId;
  if ( this->fields.svtId )
  {
    vcNameList = this->fields.vcNameList;
    if ( !vcNameList )
      goto LABEL_11;
    if ( !*(_QWORD *)&vcNameList->max_length )
      return;
    v18 = System_Int32__ToString((int32_t)p_svtId, 0LL);
    v19 = System_String__Concat_62401220((System_String_o *)StringLiteral_4532/*"ChrVoice_"*/, v18, 0LL);
    this->fields.assetName = v19;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetName, (int64_t)v19, v20, v21, v22, v23, v24, v25);
    v26 = this->fields.vcNameList;
    if ( !v26
      || (p_svtId = (int32_t *)UnityEngine_Random__Range_70113984(0, v26->max_length, 0LL),
          (v33 = this->fields.vcNameList) == 0LL) )
    {
LABEL_11:
      sub_1BCAA3C(p_svtId, v15);
    }
    if ( (unsigned int)p_svtId >= v33->max_length )
      sub_1BCAA44(p_svtId, v15);
    v34 = v33->m_Items[(int)p_svtId];
    this->fields.vcName = v34;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.vcName, (int64_t)v34, v27, v28, v29, v30, v31, v32);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *assetName; // x20
  System_String_o *vcName; // x21
  SeManager_c *v13; // x0
  float DEFAULT_VOLUME; // s8
  System_Action_o *v15; // x22
  __int64 v16; // x1
  struct SePlayer_o *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B12D96 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&SeManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&SoundManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SubmarineScanVoiceComponent_StopVoice__, v9, v10);
    byte_4B12D96 = 1;
  }
  assetName = this->fields.assetName;
  if ( assetName )
  {
    vcName = this->fields.vcName;
    if ( vcName )
    {
      v13 = SeManager_TypeInfo;
      if ( !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
        v13 = SeManager_TypeInfo;
      }
      DEFAULT_VOLUME = v13->static_fields->DEFAULT_VOLUME;
      v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_SubmarineScanVoiceComponent_StopVoice__, 0LL);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v16);
      v17 = SoundManager__playVoice_39419392(assetName, vcName, DEFAULT_VOLUME, v15, 0LL);
      this->fields.sePlayer = v17;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.sePlayer, (int64_t)v17, v18, v19, v20, v21, v22, v23);
    }
  }
}


void __fastcall SubmarineScanVoiceComponent__StopVoice(SubmarineScanVoiceComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUtility_o *p_sePlayer; // x19
  System_String_o *vcName; // x20
  System_String_o *v6; // x21
  struct System_String_o **p_vcName; // t2
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B12D97 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, method, v2);
    byte_4B12D97 = 1;
  }
  p_sePlayer = (PartyOrganizationUtility_o *)&this->fields.sePlayer;
  if ( this->fields.sePlayer )
  {
    p_vcName = &this->fields.vcName;
    vcName = this->fields.vcName;
    v6 = p_vcName[1];
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
    SoundManager__stopVoice(v6, vcName, 0.0, 0LL);
    p_sePlayer->klass = 0LL;
    sub_1BCA784(p_sePlayer, 0LL, v8, v9, v10, v11, v12, v13);
  }
}