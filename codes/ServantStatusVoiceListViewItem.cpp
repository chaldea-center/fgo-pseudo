void ServantStatusVoiceListViewItem___ctor(
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
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // kr20_16
  struct VoiceEntity_o *voiceEntity; // x1
  struct VoiceEntity_o **p_voiceEntitiy; // x23
  struct System_String_o *overwriteName; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct System_String_o *overwriteNameDefault; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  int32_t *p_overwritePriority; // x22
  int32_t overwritePriority; // t1
  int32_t v45; // w8

  if ( (byte_4D2A50E & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2A50E = 1;
  }
  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
  this->fields.changeSvrVoiceId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(changeSvrVoiceId, 0);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(limitCount, 0);
  v19 = *(const MethodInfo **)&v26.fields.fakeValue;
  v18 = *(_QWORD *)&v26.fields.currentCryptoKey;
  this->fields.limitCount = v26;
  if ( !voiceInfo )
    goto LABEL_10;
  this->fields.isCanPlay = voiceInfo->fields.isCanPlay;
  voiceEntity = voiceInfo->fields.voiceEntity;
  this->fields.voiceEntitiy = voiceEntity;
  p_voiceEntitiy = &this->fields.voiceEntitiy;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.voiceEntitiy,
    (int32_t)voiceEntity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  overwriteName = voiceInfo->fields.overwriteName;
  this->fields.overwriteName = overwriteName;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.overwriteName,
    (int32_t)overwriteName,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  overwriteNameDefault = voiceInfo->fields.overwriteNameDefault;
  this->fields.overwriteNameDefault = overwriteNameDefault;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.overwriteNameDefault,
    (int32_t)overwriteNameDefault,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
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
    sub_1C942F0(v18, v19);
  }
LABEL_9:
  v45 = *p_overwritePriority;
  this->fields.genderFlag = genderFlag;
  this->fields.overwritePriority = v45;
  this->fields.firstPriority = firstPriority;
  this->fields.voiceLabelSpecification = voiceLabelSpec;
  ServantStatusVoiceListViewItem__Analyze(this, v19);
}


void ServantStatusVoiceListViewItem__Analyze(ServantStatusVoiceListViewItem_o *this, const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct VoiceEntity_o *voiceEntitiy; // x8
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x1
  System_String_o *overwriteName; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct VoiceEntity_o *v20; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *nameDefault; // x20
  System_String_o *v22; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *openName; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **p_dispName; // x0

  if ( (byte_4D2A50F & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_4D2A50F = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.overwriteName, 0);
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
    name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(overwriteName, 0);
  }
  this->fields.openName = name;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.openName, (int32_t)name, v5, v6, v7, v8, v9, v10);
  if ( this->fields.isCanPlay )
    goto LABEL_14;
  v20 = this->fields.voiceEntitiy;
  if ( !v20 )
LABEL_17:
    sub_1C942F0(IsNullOrEmpty, v4);
  nameDefault = v20->fields.nameDefault;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49657388(nameDefault, 0);
  if ( !System_String__IsNullOrEmpty(v22, 0) )
  {
    this->fields.dispName = 0;
    p_dispName = &this->fields.dispName;
    LODWORD(openName) = 0;
    goto LABEL_15;
  }
LABEL_14:
  openName = this->fields.openName;
  this->fields.dispName = openName;
  p_dispName = &this->fields.dispName;
LABEL_15:
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_dispName, (int32_t)openName, v14, v15, v16, v17, v18, v19);
}


void ServantStatusVoiceListViewItem__Finalize(ServantStatusVoiceListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


void ServantStatusVoiceListViewItem__SetLimitCount(
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
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // kr20_16
  struct VoiceEntity_o *voiceEntity; // x1
  struct System_String_o *overwriteName; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_String_o *overwriteNameDefault; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  const MethodInfo *v34; // x1

  if ( (byte_4D2A510 & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2A510 = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0);
  this->fields.changeSvrVoiceId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(changeSvrVoiceId, 0);
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(limitCount, 0);
  this->fields.limitCount = v18;
  if ( !voiceInfo )
    sub_1C942F0(*(_QWORD *)&v18.fields.currentCryptoKey, *(_QWORD *)&v18.fields.fakeValue);
  this->fields.isCanPlay = voiceInfo->fields.isCanPlay;
  voiceEntity = voiceInfo->fields.voiceEntity;
  this->fields.voiceEntitiy = voiceEntity;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.voiceEntitiy,
    (int32_t)voiceEntity,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  overwriteName = voiceInfo->fields.overwriteName;
  this->fields.overwriteName = overwriteName;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.overwriteName,
    (int32_t)overwriteName,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  overwriteNameDefault = voiceInfo->fields.overwriteNameDefault;
  this->fields.overwriteNameDefault = overwriteNameDefault;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.overwriteNameDefault,
    (int32_t)overwriteNameDefault,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  ServantStatusVoiceListViewItem__Analyze(this, v34);
}


void ServantStatusVoiceListViewItem__SetNameNum(
        ServantStatusVoiceListViewItem_o *this,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_4D2A519 & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2A519 = 1;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  this->fields.dispNum = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(num, 0);
}


void ServantStatusVoiceListViewItem__SetPLay(
        ServantStatusVoiceListViewItem_o *this,
        bool isPlay,
        const MethodInfo *method)
{
  this->fields.isPlay = isPlay;
}


bool ServantStatusVoiceListViewItem__SetSortValue(
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


int32_t ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4D2A512 & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2A512 = 1;
  }
  v4 = *(_QWORD *)&this->fields.changeSvrVoiceId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.changeSvrVoiceId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v6, 0);
}


int32_t ServantStatusVoiceListViewItem__get_CondType(ServantStatusVoiceListViewItem_o *this, const MethodInfo *method)
{
  struct VoiceEntity_o *voiceEntitiy; // x8

  voiceEntitiy = this->fields.voiceEntitiy;
  if ( !voiceEntitiy )
    sub_1C942F0(this, method);
  return voiceEntitiy->fields.condType;
}


int32_t ServantStatusVoiceListViewItem__get_CondValue(ServantStatusVoiceListViewItem_o *this, const MethodInfo *method)
{
  struct VoiceEntity_o *voiceEntitiy; // x8

  voiceEntitiy = this->fields.voiceEntitiy;
  if ( !voiceEntitiy )
    sub_1C942F0(this, method);
  return voiceEntitiy->fields.condValue;
}


System_String_o *ServantStatusVoiceListViewItem__get_DispName(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *dispName; // x19

  if ( (byte_4D2A517 & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_4D2A517 = 1;
  }
  dispName = this->fields.dispName;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49657388(dispName, 0);
}


int32_t ServantStatusVoiceListViewItem__get_DispNum(ServantStatusVoiceListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4D2A518 & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2A518 = 1;
  }
  v4 = *(_QWORD *)&this->fields.dispNum.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.dispNum.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v6, 0);
}


bool ServantStatusVoiceListViewItem__get_GenderFlag(ServantStatusVoiceListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.genderFlag;
}


bool ServantStatusVoiceListViewItem__get_IsCanPlay(ServantStatusVoiceListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isCanPlay;
}


bool ServantStatusVoiceListViewItem__get_IsPlay(ServantStatusVoiceListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isPlay;
}


bool ServantStatusVoiceListViewItem__get_IsVoiceLabelSpecification(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.voiceLabelSpecification;
}


System_String_o *ServantStatusVoiceListViewItem__get_LabelName(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  ServantStatusVoiceListViewItem_o *v2; // x19
  struct VoiceEntity_o *voiceEntitiy; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x19

  v2 = this;
  if ( (byte_4D2A514 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewItem_o *)sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_4D2A514 = 1;
  }
  voiceEntitiy = v2->fields.voiceEntitiy;
  if ( !voiceEntitiy )
    sub_1C942F0(this, method);
  id = voiceEntitiy->fields.id;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49657388(id, 0);
}


int32_t ServantStatusVoiceListViewItem__get_LimitCount(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4D2A513 & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2A513 = 1;
  }
  v4 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v6, 0);
}


System_String_o *ServantStatusVoiceListViewItem__get_Name(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *dispName; // x20
  __int64 v4; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v5; // x20
  System_String_o *v6; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_dispNum; // x19
  __int64 v8; // x21
  __int64 v9; // t1
  System_String_o *v10; // x20
  __int64 v11; // x22
  const MethodInfo *v12; // x2
  Il2CppObject *v13; // x1
  System_String_o *result; // x0
  struct VoiceEntity_o *voiceEntitiy; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *nameDefault; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4D2A515 & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2A515 = 1;
  }
  dispName = this->fields.dispName;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Inequality(dispName, 0, 0) )
  {
    v5 = this->fields.dispName;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49657388(v5, 0);
    v9 = *(_QWORD *)&this->fields.dispNum.fields.currentCryptoKey;
    p_dispNum = &this->fields.dispNum;
    v8 = v9;
    v10 = v6;
    v11 = *(_QWORD *)&p_dispNum->fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v17.fields.currentCryptoKey = v8;
    *(_QWORD *)&v17.fields.fakeValue = v11;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v17, 0) <= 0 )
    {
      v13 = (Il2CppObject *)StringLiteral_1/*""*/;
    }
    else
    {
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v18.fields.currentCryptoKey = p_dispNum;
      *(_QWORD *)&v18.fields.fakeValue = 0;
      v13 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v18, v12);
    }
    return System_String__Format(v10, v13, 0);
  }
  else
  {
    result = this->fields.overwriteNameDefault;
    if ( !result )
    {
      voiceEntitiy = this->fields.voiceEntitiy;
      if ( !voiceEntitiy )
        sub_1C942F0(0, v4);
      nameDefault = voiceEntitiy->fields.nameDefault;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49657388(nameDefault, 0);
    }
  }
  return result;
}


System_String_o *ServantStatusVoiceListViewItem__get_OpenName(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *openName; // x19

  if ( (byte_4D2A516 & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_4D2A516 = 1;
  }
  openName = this->fields.openName;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49657388(openName, 0);
}


int32_t ServantStatusVoiceListViewItem__get_PlayType(ServantStatusVoiceListViewItem_o *this, const MethodInfo *method)
{
  struct VoiceEntity_o *voiceEntitiy; // x8

  voiceEntitiy = this->fields.voiceEntitiy;
  if ( !voiceEntitiy )
    sub_1C942F0(this, method);
  return voiceEntitiy->fields.svtVoiceType;
}


int32_t ServantStatusVoiceListViewItem__get_SvtId(ServantStatusVoiceListViewItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4D2A511 & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2A511 = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v6, 0);
}