// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewItem___ctor(
        ServantStatusVoiceListViewItem_o *this,
        int32_t index,
        int32_t svtId,
        int32_t changeSvrVoiceId,
        int32_t limitCount,
        VoiceInfo_o *voiceInfo,
        int32_t firstPriority,
        bool genderFlag,
        bool voiceLabelSpec,
        const MethodInfo *method)
{
  __int64 v18; // x1
  __int64 v19; // x0
  const MethodInfo *v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // kr20_16
  struct VoiceEntity_o *voiceEntity; // x1
  struct VoiceEntity_o **p_voiceEntitiy; // x23
  struct System_String_o *overwriteName; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_String_o *overwriteNameDefault; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int32_t *p_overwritePriority; // x22
  int32_t overwritePriority; // t1
  int32_t v46; // w8

  if ( (byte_4B13D11 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&index, *(_QWORD *)&svtId);
    byte_4B13D11 = 1;
  }
  ListViewItem___ctor_41447164((ListViewItem_o *)this, index, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  this->fields.changeSvrVoiceId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(changeSvrVoiceId, 0LL);
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(limitCount, 0LL);
  v20 = *(const MethodInfo **)&v27.fields.fakeValue;
  v19 = *(_QWORD *)&v27.fields.currentCryptoKey;
  this->fields.limitCount = v27;
  if ( !voiceInfo )
    goto LABEL_10;
  this->fields.isCanPlay = voiceInfo->fields.isCanPlay;
  voiceEntity = voiceInfo->fields.voiceEntity;
  this->fields.voiceEntitiy = voiceEntity;
  p_voiceEntitiy = &this->fields.voiceEntitiy;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.voiceEntitiy,
    (int64_t)voiceEntity,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  overwriteName = voiceInfo->fields.overwriteName;
  this->fields.overwriteName = overwriteName;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.overwriteName,
    (int64_t)overwriteName,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  overwriteNameDefault = voiceInfo->fields.overwriteNameDefault;
  this->fields.overwriteNameDefault = overwriteNameDefault;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.overwriteNameDefault,
    (int64_t)overwriteNameDefault,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  overwritePriority = voiceInfo->fields.overwritePriority;
  p_overwritePriority = &voiceInfo->fields.overwritePriority;
  if ( !overwritePriority )
  {
    if ( *p_voiceEntitiy )
    {
      p_overwritePriority = &(*p_voiceEntitiy)->fields.priority;
      goto LABEL_9;
    }
LABEL_10:
    sub_1BCAA3C(v19, v20);
  }
LABEL_9:
  v46 = *p_overwritePriority;
  this->fields.genderFlag = genderFlag;
  this->fields.overwritePriority = v46;
  this->fields.firstPriority = firstPriority;
  this->fields.voiceLabelSpecification = voiceLabelSpec;
  ServantStatusVoiceListViewItem__Analyze(this, v20);
}


void __fastcall ServantStatusVoiceListViewItem__Analyze(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct VoiceEntity_o *voiceEntitiy; // x8
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x1
  System_String_o *overwriteName; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct VoiceEntity_o *v21; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *nameDefault; // x20
  System_String_o *v23; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *openName; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **p_dispName; // x0

  if ( (byte_4B13D12 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method, v2);
    byte_4B13D12 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.overwriteName, 0LL);
  if ( IsNullOrEmpty )
  {
    voiceEntitiy = this->fields.voiceEntitiy;
    if ( !voiceEntitiy )
      goto LABEL_17;
    name = voiceEntitiy->fields.name;
  }
  else
  {
    overwriteName = this->fields.overwriteName;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v5);
    name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(overwriteName, 0LL);
  }
  this->fields.openName = name;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.openName, (int64_t)name, v6, v7, v8, v9, v10, v11);
  if ( this->fields.isCanPlay )
    goto LABEL_14;
  v21 = this->fields.voiceEntitiy;
  if ( !v21 )
LABEL_17:
    sub_1BCAA3C(IsNullOrEmpty, v5);
  nameDefault = v21->fields.nameDefault;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v5);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(nameDefault, 0LL);
  if ( !System_String__IsNullOrEmpty(v23, 0LL) )
  {
    this->fields.dispName = 0LL;
    p_dispName = &this->fields.dispName;
    openName = 0LL;
    goto LABEL_15;
  }
LABEL_14:
  openName = this->fields.openName;
  this->fields.dispName = openName;
  p_dispName = &this->fields.dispName;
LABEL_15:
  sub_1BCA784((PartyOrganizationUtility_o *)p_dispName, (int64_t)openName, v15, v16, v17, v18, v19, v20);
}


void __fastcall ServantStatusVoiceListViewItem__Finalize(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewItem__SetLimitCount(
        ServantStatusVoiceListViewItem_o *this,
        int32_t svtId,
        int32_t changeSvrVoiceId,
        int32_t limitCount,
        VoiceInfo_o *voiceInfo,
        int32_t firstPriority,
        const MethodInfo *method)
{
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // kr20_16
  struct VoiceEntity_o *voiceEntity; // x1
  struct System_String_o *overwriteName; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_String_o *overwriteNameDefault; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  const MethodInfo *v34; // x1

  if ( (byte_4B13D13 & 1) == 0 )
  {
    sub_1BCA7E0(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      *(_QWORD *)&svtId,
      *(_QWORD *)&changeSvrVoiceId);
    byte_4B13D13 = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  this->fields.changeSvrVoiceId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(changeSvrVoiceId, 0LL);
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(limitCount, 0LL);
  this->fields.limitCount = v18;
  if ( !voiceInfo )
    sub_1BCAA3C(*(_QWORD *)&v18.fields.currentCryptoKey, *(_QWORD *)&v18.fields.fakeValue);
  this->fields.isCanPlay = voiceInfo->fields.isCanPlay;
  voiceEntity = voiceInfo->fields.voiceEntity;
  this->fields.voiceEntitiy = voiceEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.voiceEntitiy,
    (int64_t)voiceEntity,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  overwriteName = voiceInfo->fields.overwriteName;
  this->fields.overwriteName = overwriteName;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.overwriteName,
    (int64_t)overwriteName,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  overwriteNameDefault = voiceInfo->fields.overwriteNameDefault;
  this->fields.overwriteNameDefault = overwriteNameDefault;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.overwriteNameDefault,
    (int64_t)overwriteNameDefault,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  ServantStatusVoiceListViewItem__Analyze(this, v34);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewItem__SetNameNum(
        ServantStatusVoiceListViewItem_o *this,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_4B13D1C & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&num, method);
    byte_4B13D1C = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&num);
  this->fields.dispNum = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(num, 0LL);
}


void __fastcall ServantStatusVoiceListViewItem__SetPLay(
        ServantStatusVoiceListViewItem_o *this,
        bool isPlay,
        const MethodInfo *method)
{
  this->fields.isPlay = isPlay;
}


bool __fastcall ServantStatusVoiceListViewItem__SetSortValue(
        ServantStatusVoiceListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  int32_t firstPriority; // w9
  int32_t overwritePriority; // w10
  bool result; // w0

  overwritePriority = this->fields.overwritePriority;
  firstPriority = this->fields.firstPriority;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0 = -firstPriority;
  result = 1;
  this->fields.sortValue1 = -overwritePriority;
  return result;
}


int32_t __fastcall ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4B13D15 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B13D15 = 1;
  }
  v5 = *(_QWORD *)&this->fields.changeSvrVoiceId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.changeSvrVoiceId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v7, 0LL);
}


int32_t __fastcall ServantStatusVoiceListViewItem__get_CondType(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  struct VoiceEntity_o *voiceEntitiy; // x8

  voiceEntitiy = this->fields.voiceEntitiy;
  if ( !voiceEntitiy )
    sub_1BCAA3C(this, method);
  return voiceEntitiy->fields.condType;
}


int32_t __fastcall ServantStatusVoiceListViewItem__get_CondValue(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  struct VoiceEntity_o *voiceEntitiy; // x8

  voiceEntitiy = this->fields.voiceEntitiy;
  if ( !voiceEntitiy )
    sub_1BCAA3C(this, method);
  return voiceEntitiy->fields.condValue;
}


System_String_o *__fastcall ServantStatusVoiceListViewItem__get_DispName(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *dispName; // x19

  if ( (byte_4B13D1A & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method, v2);
    byte_4B13D1A = 1;
  }
  dispName = this->fields.dispName;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(dispName, 0LL);
}


int32_t __fastcall ServantStatusVoiceListViewItem__get_DispNum(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4B13D1B & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B13D1B = 1;
  }
  v5 = *(_QWORD *)&this->fields.dispNum.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.dispNum.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v7, 0LL);
}


bool __fastcall ServantStatusVoiceListViewItem__get_GenderFlag(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.genderFlag;
}


bool __fastcall ServantStatusVoiceListViewItem__get_IsCanPlay(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isCanPlay;
}


bool __fastcall ServantStatusVoiceListViewItem__get_IsPlay(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.isPlay;
}


bool __fastcall ServantStatusVoiceListViewItem__get_IsVoiceLabelSpecification(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.voiceLabelSpecification;
}


System_String_o *__fastcall ServantStatusVoiceListViewItem__get_LabelName(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusVoiceListViewItem_o *v3; // x19
  struct VoiceEntity_o *voiceEntitiy; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x19

  v3 = this;
  if ( (byte_4B13D17 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewItem_o *)sub_1BCA7E0(
                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo,
                                                 method,
                                                 v2);
    byte_4B13D17 = 1;
  }
  voiceEntitiy = v3->fields.voiceEntitiy;
  if ( !voiceEntitiy )
    sub_1BCAA3C(this, method);
  id = voiceEntitiy->fields.id;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(id, 0LL);
}


int32_t __fastcall ServantStatusVoiceListViewItem__get_LimitCount(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4B13D16 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B13D16 = 1;
  }
  v5 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v7, 0LL);
}


System_String_o *__fastcall ServantStatusVoiceListViewItem__get_Name(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *dispName; // x20
  __int64 v9; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v10; // x20
  System_String_o *v11; // x0
  __int64 v12; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_dispNum; // x19
  __int64 v14; // x21
  __int64 v15; // t1
  System_String_o *v16; // x20
  __int64 v17; // x22
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  Il2CppObject *v20; // x1
  System_String_o *result; // x0
  struct VoiceEntity_o *voiceEntitiy; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *nameDefault; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4B13D18 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B13D18 = 1;
  }
  dispName = this->fields.dispName;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Inequality(dispName, 0LL, 0LL) )
  {
    v10 = this->fields.dispName;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v9);
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(v10, 0LL);
    v15 = *(_QWORD *)&this->fields.dispNum.fields.currentCryptoKey;
    p_dispNum = &this->fields.dispNum;
    v14 = v15;
    v16 = v11;
    v17 = *(_QWORD *)&p_dispNum->fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    *(_QWORD *)&v24.fields.currentCryptoKey = v14;
    *(_QWORD *)&v24.fields.fakeValue = v17;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v24, 0LL) <= 0 )
    {
      v20 = (Il2CppObject *)StringLiteral_1/*""*/;
    }
    else
    {
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
      *(_QWORD *)&v25.fields.currentCryptoKey = p_dispNum;
      *(_QWORD *)&v25.fields.fakeValue = 0LL;
      v20 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v25, v19);
    }
    return System_String__Format(v16, v20, 0LL);
  }
  else
  {
    result = this->fields.overwriteNameDefault;
    if ( !result )
    {
      voiceEntitiy = this->fields.voiceEntitiy;
      if ( !voiceEntitiy )
        sub_1BCAA3C(0LL, v9);
      nameDefault = voiceEntitiy->fields.nameDefault;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v9);
      return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(nameDefault, 0LL);
    }
  }
  return result;
}


System_String_o *__fastcall ServantStatusVoiceListViewItem__get_OpenName(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *openName; // x19

  if ( (byte_4B13D19 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method, v2);
    byte_4B13D19 = 1;
  }
  openName = this->fields.openName;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(openName, 0LL);
}


int32_t __fastcall ServantStatusVoiceListViewItem__get_PlayType(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  struct VoiceEntity_o *voiceEntitiy; // x8

  voiceEntitiy = this->fields.voiceEntitiy;
  if ( !voiceEntitiy )
    sub_1BCAA3C(this, method);
  return voiceEntitiy->fields.svtVoiceType;
}


int32_t __fastcall ServantStatusVoiceListViewItem__get_SvtId(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_4B13D14 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    byte_4B13D14 = 1;
  }
  v5 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v7, 0LL);
}