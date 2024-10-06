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
  __int64 v18; // x0
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // kr20_16
  struct VoiceEntity_o *voiceEntity; // x1
  struct VoiceEntity_o **p_voiceEntitiy; // x23
  struct System_String_o *overwriteName; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_String_o *overwriteNameDefault; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t *p_overwritePriority; // x22
  int32_t overwritePriority; // t1
  int32_t v33; // w8

  if ( (byte_4A6D288 & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&index);
    byte_4A6D288 = 1;
  }
  ListViewItem___ctor_40760684((ListViewItem_o *)this, index, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  this->fields.changeSvrVoiceId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(changeSvrVoiceId, 0LL);
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(limitCount, 0LL);
  v19 = *(const MethodInfo **)&v22.fields.fakeValue;
  v18 = *(_QWORD *)&v22.fields.currentCryptoKey;
  this->fields.limitCount = v22;
  if ( !voiceInfo )
    goto LABEL_10;
  this->fields.isCanPlay = voiceInfo->fields.isCanPlay;
  voiceEntity = voiceInfo->fields.voiceEntity;
  this->fields.voiceEntitiy = voiceEntity;
  p_voiceEntitiy = &this->fields.voiceEntitiy;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.voiceEntitiy, (int32_t)voiceEntity, v20, v21);
  overwriteName = voiceInfo->fields.overwriteName;
  this->fields.overwriteName = overwriteName;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.overwriteName, (int32_t)overwriteName, v26, v27);
  overwriteNameDefault = voiceInfo->fields.overwriteNameDefault;
  this->fields.overwriteNameDefault = overwriteNameDefault;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.overwriteNameDefault,
    (int32_t)overwriteNameDefault,
    v29,
    v30);
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
    sub_1B9026C(v18, v19);
  }
LABEL_9:
  v33 = *p_overwritePriority;
  this->fields.genderFlag = genderFlag;
  this->fields.overwritePriority = v33;
  this->fields.firstPriority = firstPriority;
  this->fields.voiceLabelSpecification = voiceLabelSpec;
  ServantStatusVoiceListViewItem__Analyze(this, v19);
}


void __fastcall ServantStatusVoiceListViewItem__Analyze(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  struct VoiceEntity_o *voiceEntitiy; // x8
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x1
  System_String_o *overwriteName; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  struct VoiceEntity_o *v12; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *nameDefault; // x20
  System_String_o *v14; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *openName; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **p_dispName; // x0

  if ( (byte_4A6D289 & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
    byte_4A6D289 = 1;
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
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(overwriteName, 0LL);
  }
  this->fields.openName = name;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.openName, (int32_t)name, v5, v6);
  if ( this->fields.isCanPlay )
    goto LABEL_14;
  v12 = this->fields.voiceEntitiy;
  if ( !v12 )
LABEL_17:
    sub_1B9026C(IsNullOrEmpty, v4);
  nameDefault = v12->fields.nameDefault;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46542220(nameDefault, 0LL);
  if ( !System_String__IsNullOrEmpty(v14, 0LL) )
  {
    this->fields.dispName = 0LL;
    p_dispName = &this->fields.dispName;
    LODWORD(openName) = 0;
    goto LABEL_15;
  }
LABEL_14:
  openName = this->fields.openName;
  this->fields.dispName = openName;
  p_dispName = &this->fields.dispName;
LABEL_15:
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)p_dispName, (int32_t)openName, v10, v11);
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
  int32_t v12; // w2
  int32_t v13; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // kr20_16
  struct VoiceEntity_o *voiceEntity; // x1
  struct System_String_o *overwriteName; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_String_o *overwriteNameDefault; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x1

  if ( (byte_4A6D28A & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
    byte_4A6D28A = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  this->fields.changeSvrVoiceId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(changeSvrVoiceId, 0LL);
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(limitCount, 0LL);
  this->fields.limitCount = v14;
  if ( !voiceInfo )
    sub_1B9026C(*(_QWORD *)&v14.fields.currentCryptoKey, *(_QWORD *)&v14.fields.fakeValue);
  this->fields.isCanPlay = voiceInfo->fields.isCanPlay;
  voiceEntity = voiceInfo->fields.voiceEntity;
  this->fields.voiceEntitiy = voiceEntity;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.voiceEntitiy, (int32_t)voiceEntity, v12, v13);
  overwriteName = voiceInfo->fields.overwriteName;
  this->fields.overwriteName = overwriteName;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.overwriteName, (int32_t)overwriteName, v17, v18);
  overwriteNameDefault = voiceInfo->fields.overwriteNameDefault;
  this->fields.overwriteNameDefault = overwriteNameDefault;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.overwriteNameDefault,
    (int32_t)overwriteNameDefault,
    v20,
    v21);
  ServantStatusVoiceListViewItem__Analyze(this, v22);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewItem__SetNameNum(
        ServantStatusVoiceListViewItem_o *this,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_4A6D293 & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&num);
    byte_4A6D293 = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
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
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4A6D28C & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A6D28C = 1;
  }
  v4 = *(_QWORD *)&this->fields.changeSvrVoiceId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.changeSvrVoiceId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v6, 0LL);
}


int32_t __fastcall ServantStatusVoiceListViewItem__get_CondType(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  struct VoiceEntity_o *voiceEntitiy; // x8

  voiceEntitiy = this->fields.voiceEntitiy;
  if ( !voiceEntitiy )
    sub_1B9026C(this, method);
  return voiceEntitiy->fields.condType;
}


int32_t __fastcall ServantStatusVoiceListViewItem__get_CondValue(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  struct VoiceEntity_o *voiceEntitiy; // x8

  voiceEntitiy = this->fields.voiceEntitiy;
  if ( !voiceEntitiy )
    sub_1B9026C(this, method);
  return voiceEntitiy->fields.condValue;
}


System_String_o *__fastcall ServantStatusVoiceListViewItem__get_DispName(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *dispName; // x19

  if ( (byte_4A6D291 & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
    byte_4A6D291 = 1;
  }
  dispName = this->fields.dispName;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46542220(dispName, 0LL);
}


int32_t __fastcall ServantStatusVoiceListViewItem__get_DispNum(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4A6D292 & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A6D292 = 1;
  }
  v4 = *(_QWORD *)&this->fields.dispNum.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.dispNum.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v6, 0LL);
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
  ServantStatusVoiceListViewItem_o *v2; // x19
  struct VoiceEntity_o *voiceEntitiy; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x19

  v2 = this;
  if ( (byte_4A6D28E & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewItem_o *)sub_1B90010(
                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo,
                                                 method);
    byte_4A6D28E = 1;
  }
  voiceEntitiy = v2->fields.voiceEntitiy;
  if ( !voiceEntitiy )
    sub_1B9026C(this, method);
  id = voiceEntitiy->fields.id;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46542220(id, 0LL);
}


int32_t __fastcall ServantStatusVoiceListViewItem__get_LimitCount(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4A6D28D & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A6D28D = 1;
  }
  v4 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v6, 0LL);
}


System_String_o *__fastcall ServantStatusVoiceListViewItem__get_Name(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *dispName; // x20
  __int64 v6; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v7; // x20
  System_String_o *v8; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_dispNum; // x19
  __int64 v10; // x21
  __int64 v11; // t1
  System_String_o *v12; // x20
  __int64 v13; // x22
  const MethodInfo *v14; // x2
  Il2CppObject *v15; // x1
  System_String_o *result; // x0
  struct VoiceEntity_o *voiceEntitiy; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *nameDefault; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4A6D28F & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v3);
    sub_1B90010(&StringLiteral_1/*""*/, v4);
    byte_4A6D28F = 1;
  }
  dispName = this->fields.dispName;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Inequality(dispName, 0LL, 0LL) )
  {
    v7 = this->fields.dispName;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46542220(v7, 0LL);
    v11 = *(_QWORD *)&this->fields.dispNum.fields.currentCryptoKey;
    p_dispNum = &this->fields.dispNum;
    v10 = v11;
    v12 = v8;
    v13 = *(_QWORD *)&p_dispNum->fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v19.fields.currentCryptoKey = v10;
    *(_QWORD *)&v19.fields.fakeValue = v13;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v19, 0LL) <= 0 )
    {
      v15 = (Il2CppObject *)StringLiteral_1/*""*/;
    }
    else
    {
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v20.fields.currentCryptoKey = p_dispNum;
      *(_QWORD *)&v20.fields.fakeValue = 0LL;
      v15 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v20, v14);
    }
    return System_String__Format(v12, v15, 0LL);
  }
  else
  {
    result = this->fields.overwriteNameDefault;
    if ( !result )
    {
      voiceEntitiy = this->fields.voiceEntitiy;
      if ( !voiceEntitiy )
        sub_1B9026C(0LL, v6);
      nameDefault = voiceEntitiy->fields.nameDefault;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46542220(nameDefault, 0LL);
    }
  }
  return result;
}


System_String_o *__fastcall ServantStatusVoiceListViewItem__get_OpenName(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *openName; // x19

  if ( (byte_4A6D290 & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
    byte_4A6D290 = 1;
  }
  openName = this->fields.openName;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46542220(openName, 0LL);
}


int32_t __fastcall ServantStatusVoiceListViewItem__get_PlayType(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  struct VoiceEntity_o *voiceEntitiy; // x8

  voiceEntitiy = this->fields.voiceEntitiy;
  if ( !voiceEntitiy )
    sub_1B9026C(this, method);
  return voiceEntitiy->fields.svtVoiceType;
}


int32_t __fastcall ServantStatusVoiceListViewItem__get_SvtId(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4A6D28B & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A6D28B = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v6, 0LL);
}