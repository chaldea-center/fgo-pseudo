void __fastcall BlankEarthSpotEntity___ctor(BlankEarthSpotEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4187D7C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_4187D7C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BlankEarthSpotEntity__CreatePrimaryKey(BlankEarthSpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall BlankEarthSpotEntity__IsOpen(BlankEarthSpotEntity_o *this, const MethodInfo *method)
{
  int32_t condTargetId; // w20
  int32_t condTargetType; // w21
  int64_t condTargetNum; // x19

  if ( (byte_4187D7A & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    byte_4187D7A = 1;
  }
  condTargetType = this->fields.condTargetType;
  condTargetId = this->fields.condTargetId;
  condTargetNum = this->fields.condTargetNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condTargetType, condTargetId, condTargetNum, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BlankEarthSpotEntity__IsOpenForQAA(
        BlankEarthSpotEntity_o *this,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  int32_t condTargetId; // w22
  int32_t condTargetType; // w23
  int64_t condTargetNum; // x21

  if ( (byte_4187D7B & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    byte_4187D7B = 1;
  }
  condTargetType = this->fields.condTargetType;
  condTargetId = this->fields.condTargetId;
  condTargetNum = this->fields.condTargetNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpenExcludeBeforeClearQuest(
           condTargetType,
           condTargetId,
           condTargetNum,
           beforeClearQuestId,
           isCheckResetFlag,
           0LL);
}