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
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // kr20_16
  struct VoiceEntity_o **p_voiceEntitiy; // x23
  struct VoiceEntity_o *voiceEntity; // x1
  struct System_String_o *overwriteName; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct System_String_o *overwriteNameDefault; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  int32_t overwritePriority; // w8

  if ( (byte_418B09A & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&index);
    byte_418B09A = 1;
  }
  ListViewItem___ctor_24128628((ListViewItem_o *)this, index, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  this->fields.changeSvrVoiceId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(changeSvrVoiceId, 0LL);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(limitCount, 0LL);
  v19 = *(const MethodInfo **)&v26.fields.fakeValue;
  v18 = *(_QWORD *)&v26.fields.currentCryptoKey;
  this->fields.limitCount = v26;
  if ( !voiceInfo )
    goto LABEL_11;
  p_voiceEntitiy = &this->fields.voiceEntitiy;
  this->fields.isCanPlay = voiceInfo->fields.isCanPlay;
  voiceEntity = voiceInfo->fields.voiceEntity;
  this->fields.voiceEntitiy = voiceEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.voiceEntitiy,
    (System_Int32_array **)voiceEntity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  overwriteName = voiceInfo->fields.overwriteName;
  this->fields.overwriteName = overwriteName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.overwriteName,
    (System_Int32_array **)overwriteName,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  overwriteNameDefault = voiceInfo->fields.overwriteNameDefault;
  this->fields.overwriteNameDefault = overwriteNameDefault;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.overwriteNameDefault,
    (System_Int32_array **)overwriteNameDefault,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  overwritePriority = voiceInfo->fields.overwritePriority;
  if ( !overwritePriority )
  {
    if ( *p_voiceEntitiy )
    {
      overwritePriority = (*p_voiceEntitiy)->fields.priority;
      goto LABEL_10;
    }
LABEL_11:
    sub_B2C434(v18, v19);
  }
LABEL_10:
  this->fields.overwritePriority = overwritePriority;
  this->fields.firstPriority = firstPriority;
  this->fields.genderFlag = genderFlag;
  this->fields.voiceLabelSpecification = voiceLabelSpec;
  ServantStatusVoiceListViewItem__Analyze(this, v19);
}


void __fastcall ServantStatusVoiceListViewItem__Analyze(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct VoiceEntity_o *voiceEntitiy; // x8
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x1
  System_String_o *overwriteName; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct VoiceEntity_o *v20; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *nameDefault; // x20
  System_String_o *v22; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *openName; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **p_dispName; // x0

  if ( (byte_418B09B & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
    byte_418B09B = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.overwriteName, 0LL);
  if ( IsNullOrEmpty )
  {
    voiceEntitiy = this->fields.voiceEntitiy;
    if ( !voiceEntitiy )
      goto LABEL_19;
    name = voiceEntitiy->fields.name;
  }
  else
  {
    overwriteName = this->fields.overwriteName;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    }
    name = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(overwriteName, 0LL);
  }
  this->fields.openName = name;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.openName,
    (System_Int32_array **)name,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  if ( this->fields.isCanPlay )
    goto LABEL_16;
  v20 = this->fields.voiceEntitiy;
  if ( !v20 )
LABEL_19:
    sub_B2C434(IsNullOrEmpty, v4);
  nameDefault = v20->fields.nameDefault;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(nameDefault, 0LL);
  if ( !System_String__IsNullOrEmpty(v22, 0LL) )
  {
    this->fields.dispName = 0LL;
    p_dispName = &this->fields.dispName;
    openName = 0LL;
    goto LABEL_17;
  }
LABEL_16:
  openName = this->fields.openName;
  p_dispName = &this->fields.dispName;
  this->fields.dispName = openName;
LABEL_17:
  sub_B2C2F8((BattleServantConfConponent_o *)p_dispName, (System_Int32_array **)openName, v14, v15, v16, v17, v18, v19);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // kr20_16
  struct VoiceEntity_o *voiceEntity; // x1
  struct System_String_o *overwriteName; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_String_o *overwriteNameDefault; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x1

  if ( (byte_418B09C & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&svtId);
    byte_418B09C = 1;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
  this->fields.changeSvrVoiceId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(changeSvrVoiceId, 0LL);
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(limitCount, 0LL);
  this->fields.limitCount = v18;
  if ( !voiceInfo )
    sub_B2C434(*(_QWORD *)&v18.fields.currentCryptoKey, *(_QWORD *)&v18.fields.fakeValue);
  this->fields.isCanPlay = voiceInfo->fields.isCanPlay;
  voiceEntity = voiceInfo->fields.voiceEntity;
  this->fields.voiceEntitiy = voiceEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.voiceEntitiy,
    (System_Int32_array **)voiceEntity,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  overwriteName = voiceInfo->fields.overwriteName;
  this->fields.overwriteName = overwriteName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.overwriteName,
    (System_Int32_array **)overwriteName,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  overwriteNameDefault = voiceInfo->fields.overwriteNameDefault;
  this->fields.overwriteNameDefault = overwriteNameDefault;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.overwriteNameDefault,
    (System_Int32_array **)overwriteNameDefault,
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
  if ( (byte_418B0A5 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&num);
    byte_418B0A5 = 1;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
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
  result = 1;
  this->fields.sortValue0 = -firstPriority;
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

  if ( (byte_418B09E & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_418B09E = 1;
  }
  v4 = *(_QWORD *)&this->fields.changeSvrVoiceId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.changeSvrVoiceId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v6, 0LL);
}


int32_t __fastcall ServantStatusVoiceListViewItem__get_CondType(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  struct VoiceEntity_o *voiceEntitiy; // x8

  voiceEntitiy = this->fields.voiceEntitiy;
  if ( !voiceEntitiy )
    sub_B2C434(this, method);
  return voiceEntitiy->fields.condType;
}


int32_t __fastcall ServantStatusVoiceListViewItem__get_CondValue(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  struct VoiceEntity_o *voiceEntitiy; // x8

  voiceEntitiy = this->fields.voiceEntitiy;
  if ( !voiceEntitiy )
    sub_B2C434(this, method);
  return voiceEntitiy->fields.condValue;
}


System_String_o *__fastcall ServantStatusVoiceListViewItem__get_DispName(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *dispName; // x19

  if ( (byte_418B0A3 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
    byte_418B0A3 = 1;
  }
  dispName = this->fields.dispName;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(dispName, 0LL);
}


int32_t __fastcall ServantStatusVoiceListViewItem__get_DispNum(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_418B0A4 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_418B0A4 = 1;
  }
  v4 = *(_QWORD *)&this->fields.dispNum.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.dispNum.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v6, 0LL);
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
  if ( (byte_418B0A0 & 1) == 0 )
  {
    this = (ServantStatusVoiceListViewItem_o *)sub_B2C35C(
                                                 &CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo,
                                                 method);
    byte_418B0A0 = 1;
  }
  voiceEntitiy = v2->fields.voiceEntitiy;
  if ( !voiceEntitiy )
    sub_B2C434(this, method);
  id = voiceEntitiy->fields.id;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(id, 0LL);
}


int32_t __fastcall ServantStatusVoiceListViewItem__get_LimitCount(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_418B09F & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_418B09F = 1;
  }
  v4 = *(_QWORD *)&this->fields.limitCount.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.limitCount.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v6, 0LL);
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

  if ( (byte_418B0A1 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_418B0A1 = 1;
  }
  dispName = this->fields.dispName;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Inequality(dispName, 0LL, 0LL) )
  {
    v7 = this->fields.dispName;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    }
    v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(v7, 0LL);
    v11 = *(_QWORD *)&this->fields.dispNum.fields.currentCryptoKey;
    p_dispNum = &this->fields.dispNum;
    v10 = v11;
    v12 = v8;
    v13 = *(_QWORD *)&p_dispNum->fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v19.fields.currentCryptoKey = v10;
    *(_QWORD *)&v19.fields.fakeValue = v13;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v19, 0LL) <= 0 )
    {
      v15 = (Il2CppObject *)StringLiteral_1/*""*/;
    }
    else
    {
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
        sub_B2C434(0LL, v6);
      nameDefault = voiceEntitiy->fields.nameDefault;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
      }
      return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(nameDefault, 0LL);
    }
  }
  return result;
}


System_String_o *__fastcall ServantStatusVoiceListViewItem__get_OpenName(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *openName; // x19

  if ( (byte_418B0A2 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, method);
    byte_418B0A2 = 1;
  }
  openName = this->fields.openName;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(openName, 0LL);
}


int32_t __fastcall ServantStatusVoiceListViewItem__get_PlayType(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  struct VoiceEntity_o *voiceEntitiy; // x8

  voiceEntitiy = this->fields.voiceEntitiy;
  if ( !voiceEntitiy )
    sub_B2C434(this, method);
  return voiceEntitiy->fields.svtVoiceType;
}


int32_t __fastcall ServantStatusVoiceListViewItem__get_SvtId(
        ServantStatusVoiceListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_418B09D & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_418B09D = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v6, 0LL);
}