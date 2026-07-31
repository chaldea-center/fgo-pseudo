void BlankEarthSpotAddEntity___ctor(BlankEarthSpotAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593830E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_593830E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *BlankEarthSpotAddEntity__CreatePK(
        int32_t blankEarthSpotId,
        int32_t priority,
        int32_t overwriteType,
        const MethodInfo *method)
{
  if ( (byte_593830D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_593830D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           blankEarthSpotId,
           priority,
           overwriteType,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *BlankEarthSpotAddEntity__CreatePrimaryKey(BlankEarthSpotAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return BlankEarthSpotAddEntity__CreatePK(
           this->fields.blankEarthSpotId,
           this->fields.priority,
           this->fields.overwriteType,
           v2);
}


int32_t BlankEarthSpotAddEntity__GetCondType(BlankEarthSpotAddEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType;
}


// local variable allocation has failed, the output may be wrong!
bool BlankEarthSpotAddEntity__IsOpen(
        BlankEarthSpotAddEntity_o *this,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  int32_t condType; // w22
  int32_t condTargetId; // w23
  int64_t condNum; // x21

  if ( (byte_593830C & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    byte_593830C = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
  return CondType__IsOpenExcludeBeforeClearQuest(
           condType,
           condTargetId,
           condNum,
           beforeClearQuestId,
           isCheckResetFlag,
           0);
}