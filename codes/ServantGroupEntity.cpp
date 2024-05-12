void __fastcall ServantGroupEntity___ctor(ServantGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438D503 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438D503 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantGroupEntity__CreatePK(int32_t id, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_438D502 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438D502 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           svtId,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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