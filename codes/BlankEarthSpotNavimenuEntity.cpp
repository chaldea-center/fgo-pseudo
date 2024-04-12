void __fastcall BlankEarthSpotNavimenuEntity___ctor(BlankEarthSpotNavimenuEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AFE9B & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42AFE9B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BlankEarthSpotNavimenuEntity__CreatePrimaryKey(
        BlankEarthSpotNavimenuEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.blankEarthSpotId;
}


bool __fastcall BlankEarthSpotNavimenuEntity__IsEnable(BlankEarthSpotNavimenuEntity_o *this, const MethodInfo *method)
{
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_42AFE9A & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    byte_42AFE9A = 1;
  }
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condId, condNum, 0, 0LL);
}