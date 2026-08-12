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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x0
  const MethodInfo *v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // kr10_16
  struct VoiceEntity_o *voiceEntity; // x1
  bool isCanPlay; // w8
  struct VoiceEntity_o **p_voiceEntitiy; // x23
  struct System_String_o *overwriteName; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct System_String_o *overwriteNameDefault; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t overwritePriority; // w8

  if ( (byte_596DFB1 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596DFB1 = 1;
  }
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
  this->fields.changeSvrVoiceId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(changeSvrVoiceId, 0);
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(limitCount, 0);
  v20 = *(const MethodInfo **)&v27.fields.fakeValue;
  v19 = *(_QWORD *)&v27.fields.currentCryptoKey;
  this->fields.limitCount = v27;
  if ( !voiceInfo )
    goto LABEL_10;
  voiceEntity = voiceInfo->fields.voiceEntity;
  isCanPlay = voiceInfo->fields.isCanPlay;
  this->fields.voiceEntitiy = voiceEntity;
  p_voiceEntitiy = &this->fields.voiceEntitiy;
  this->fields.isCanPlay = isCanPlay;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.voiceEntitiy,
    (int32_t)voiceEntity,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  overwriteName = voiceInfo->fields.overwriteName;
  this->fields.overwriteName = overwriteName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteName,
    (int32_t)overwriteName,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  overwriteNameDefault = voiceInfo->fields.overwriteNameDefault;
  this->fields.overwriteNameDefault = overwriteNameDefault;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteNameDefault,
    (int32_t)overwriteNameDefault,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  overwritePriority = voiceInfo->fields.overwritePriority;
  if ( !overwritePriority )
  {
    if ( *p_voiceEntitiy )
    {
      overwritePriority = (*p_voiceEntitiy)->fields.priority;
      goto LABEL_9;
    }
LABEL_10:
    sub_2213CDC(v19, v20);
  }
LABEL_9:
  this->fields.overwritePriority = overwritePriority;
  this->fields.firstPriority = firstPriority;
  this->fields.genderFlag = genderFlag;
  this->fields.voiceLabelSpecification = voiceLabelSpec;
  ServantStatusVoiceListViewItem__Analyze(this, v20);
}


void ServantStatusVoiceListViewItem__Analyze(ServantStatusVoiceListViewItem_o *this, const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct VoiceEntity_o *voiceEntitiy; // x8
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x1
  System_String_o *overwriteName; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct VoiceEntity_o *v20; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *nameDefault; // x20
  System_String_o *v22; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *openName; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **p_dispName; // x0

  if ( (byte_596DFB2 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_596DFB2 = 1;
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
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v4, v5);
    name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(overwriteName, 0);
  }
  this->fields.openName = name;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.openName, (int32_t)name, v5, v6, v7, v8, v9, v10);
  if ( this->fields.isCanPlay )
    goto LABEL_14;
  v20 = this->fields.voiceEntitiy;
  if ( !v20 )
LABEL_17:
    sub_2213CDC(IsNullOrEmpty, v4);
  nameDefault = v20->fields.nameDefault;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v4, v14);
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(nameDefault, 0);
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
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_dispName, (int32_t)openName, v14, v15, v16, v17, v18, v19);
}


void ServantStatusVoiceListViewItem__Finalize(ServantStatusVoiceListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusVoiceListViewItem__SetLimitCount(
        ServantStatusVoiceListViewItem_o *this,
        int32_t svtId,
        int32_t changeSvrVoiceId,
        int32_t limitCount,
        VoiceInfo_o *voiceInfo,
        int32_t firstPriority,
        const MethodInfo *method)
{
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // kr10_16
  struct VoiceEntity_o *voiceEntity; // x1
  struct System_String_o *overwriteName; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_String_o *overwriteNameDefault; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  const MethodInfo *v33; // x1

  if ( (byte_596DFB3 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596DFB3 = 1;
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      *(_QWORD *)&svtId,
      *(_QWORD *)&changeSvrVoiceId);
  this->fields.changeSvrVoiceId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(changeSvrVoiceId, 0);
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(limitCount, 0);
  this->fields.limitCount = v17;
  if ( !voiceInfo )
    sub_2213CDC(*(_QWORD *)&v17.fields.currentCryptoKey, *(_QWORD *)&v17.fields.fakeValue);
  voiceEntity = voiceInfo->fields.voiceEntity;
  this->fields.isCanPlay = voiceInfo->fields.isCanPlay;
  this->fields.voiceEntitiy = voiceEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.voiceEntitiy,
    (int32_t)voiceEntity,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  overwriteName = voiceInfo->fields.overwriteName;
  this->fields.overwriteName = overwriteName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteName,
    (int32_t)overwriteName,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  overwriteNameDefault = voiceInfo->fields.overwriteNameDefault;
  this->fields.overwriteNameDefault = overwriteNameDefault;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteNameDefault,
    (int32_t)overwriteNameDefault,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  ServantStatusVoiceListViewItem__Analyze(this, v33);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusVoiceListViewItem__SetNameNum(
        ServantStatusVoiceListViewItem_o *this,
        int32_t num,
        const MethodInfo *method)
{
  if ( (byte_596DFBA & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596DFBA = 1;
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&num, method);
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

  overwritePriority = this->fields.overwritePriority;
  firstPriority = this->fields.firstPriority;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue0 = -firstPriority;
  this->fields.sortValue1 = -overwritePriority;
  return 1;
}


int32_t ServantStatusVoiceListViewItem__get_ChangeSvrVoiceId(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_596DFB4 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596DFB4 = 1;
  }
  v5 = *(_QWORD *)&this->fields.changeSvrVoiceId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.changeSvrVoiceId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v7, 0);
}


int32_t ServantStatusVoiceListViewItem__get_CondType(ServantStatusVoiceListViewItem_o *this, const MethodInfo *method)
{
  struct VoiceEntity_o *voiceEntitiy; // x8

  voiceEntitiy = this->fields.voiceEntitiy;
  if ( !voiceEntitiy )
    sub_2213CDC(this, method);
  return voiceEntitiy->fields.condType;
}


int32_t ServantStatusVoiceListViewItem__get_CondValue(ServantStatusVoiceListViewItem_o *this, const MethodInfo *method)
{
  struct VoiceEntity_o *voiceEntitiy; // x8

  voiceEntitiy = this->fields.voiceEntitiy;
  if ( !voiceEntitiy )
    sub_2213CDC(this, method);
  return voiceEntitiy->fields.condValue;
}


int32_t ServantStatusVoiceListViewItem__get_DispNum(ServantStatusVoiceListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_596DFB9 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596DFB9 = 1;
  }
  v5 = *(_QWORD *)&this->fields.dispNum.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.dispNum.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v7, 0);
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
  __int64 v2; // x2
  ServantStatusVoiceListViewItem_o *v3; // x19
  struct VoiceEntity_o *voiceEntitiy; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *id; // x19

  v3 = this;
  if ( (byte_596DFB6 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewItem_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_596DFB6 = 1;
  }
  voiceEntitiy = v3->fields.voiceEntitiy;
  if ( !voiceEntitiy )
    sub_2213CDC(this, method);
  id = voiceEntitiy->fields.id;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method, v2);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(id, 0);
}


int32_t ServantStatusVoiceListViewItem__get_LimitCount(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_596DFB5 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596DFB5 = 1;
  }
  v5 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v7, 0);
}


System_String_o *ServantStatusVoiceListViewItem__get_Name(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *dispName; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *v10; // x20
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *p_dispNum; // x19
  __int64 v12; // x21
  __int64 v13; // x22
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  Il2CppObject *v16; // x1
  System_String_o *result; // x0
  struct VoiceEntity_o *voiceEntitiy; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *nameDefault; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_596DFB7 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596DFB7 = 1;
  }
  dispName = this->fields.dispName;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method, v2);
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Inequality(dispName, 0, 0) )
  {
    v7 = this->fields.dispName;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v5, v6);
    v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(v7, 0);
    v12 = *(_QWORD *)&this->fields.dispNum.fields.currentCryptoKey;
    v13 = *(_QWORD *)&this->fields.dispNum.fields.fakeValue;
    p_dispNum = &this->fields.dispNum;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
    *(_QWORD *)&v20.fields.currentCryptoKey = v12;
    *(_QWORD *)&v20.fields.fakeValue = v13;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v20, 0) <= 0 )
    {
      v16 = (Il2CppObject *)StringLiteral_1/*""*/;
    }
    else
    {
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15);
      *(_QWORD *)&v21.fields.currentCryptoKey = p_dispNum;
      *(_QWORD *)&v21.fields.fakeValue = 0;
      v16 = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v21, v15);
    }
    return System_String__Format(v10, v16, 0);
  }
  else
  {
    result = this->fields.overwriteNameDefault;
    if ( !result )
    {
      voiceEntitiy = this->fields.voiceEntitiy;
      if ( !voiceEntitiy )
        sub_2213CDC(0, v5);
      nameDefault = voiceEntitiy->fields.nameDefault;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v5, v6);
      return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(nameDefault, 0);
    }
  }
  return result;
}


System_String_o *ServantStatusVoiceListViewItem__get_OpenName(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *openName; // x19

  if ( (byte_596DFB8 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    byte_596DFB8 = 1;
  }
  openName = this->fields.openName;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method, v2);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(openName, 0);
}


int32_t ServantStatusVoiceListViewItem__get_PlayType(ServantStatusVoiceListViewItem_o *this, const MethodInfo *method)
{
  struct VoiceEntity_o *voiceEntitiy; // x8

  voiceEntitiy = this->fields.voiceEntitiy;
  if ( !voiceEntitiy )
    sub_2213CDC(this, method);
  return voiceEntitiy->fields.svtVoiceType;
}