void __fastcall ServantGroupEntity___ctor(ServantGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF238 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF238 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantGroupEntity__CreatePK(int32_t id, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_49FF237 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&svtId);
    byte_49FF237 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           svtId,
           (const MethodInfo_2E39F04 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantGroupEntity__CreatePrimaryKey(ServantGroupEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantGroupEntity__CreatePK(this->fields.id, this->fields.svtId, v2);
}


int32_t __fastcall ServantGroupEntity__getServantGroupId(ServantGroupEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall ServantGroupEntity__getServantId(ServantGroupEntity_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}