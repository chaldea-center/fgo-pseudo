void __fastcall ServantLvDetailEntity___ctor(ServantLvDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CE8E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, method);
    byte_4B1CE8E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantLvDetailEntity__CreatePK(int32_t rarity, int32_t lv, const MethodInfo *method)
{
  if ( (byte_4B1CE8D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&lv);
    byte_4B1CE8D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           lv,
           (const MethodInfo_3018C2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantLvDetailEntity__CreatePrimaryKey(
        ServantLvDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantLvDetailEntity__CreatePK(this->fields.rarity, this->fields.lv, v2);
}


int32_t __fastcall ServantLvDetailEntity__GetFrameType(
        ServantLvDetailEntity_o *this,
        bool isGrandServant,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 24LL;
  if ( isGrandServant )
    v3 = 32LL;
  return *(_DWORD *)((char *)&this->klass + v3);
}


int32_t __fastcall ServantLvDetailEntity__GetRarityIcon(
        ServantLvDetailEntity_o *this,
        bool isGrandServant,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 28LL;
  if ( isGrandServant )
    v3 = 36LL;
  return *(_DWORD *)((char *)&this->klass + v3);
}