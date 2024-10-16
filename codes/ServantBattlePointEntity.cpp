void __fastcall ServantBattlePointEntity___ctor(ServantBattlePointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6E41 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB6E41 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantBattlePointEntity__CreatePK(
        int32_t svtId,
        int32_t battlePointId,
        const MethodInfo *method)
{
  if ( (byte_4AB6E40 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&battlePointId);
    byte_4AB6E40 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           battlePointId,
           (const MethodInfo_2EC2598 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantBattlePointEntity__CreatePrimaryKey(
        ServantBattlePointEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantBattlePointEntity__CreatePK(this->fields.svtId, this->fields.battlePointId, v2);
}