void ServantLvDetailEntity___ctor(ServantLvDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C4396E & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_string___ctor__);
    byte_4C4396E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_339EC34 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantLvDetailEntity__CreatePK(int32_t rarity, int32_t lv, const MethodInfo *method)
{
  if ( (byte_4C4396D & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C4396D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           rarity,
           lv,
           (const MethodInfo_30E5DE0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantLvDetailEntity__CreatePrimaryKey(ServantLvDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantLvDetailEntity__CreatePK(this->fields.rarity, this->fields.lv, v2);
}


int32_t ServantLvDetailEntity__GetFrameType(
        ServantLvDetailEntity_o *this,
        bool isGrandServant,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 24;
  if ( isGrandServant )
    v3 = 32;
  return *(_DWORD *)((char *)&this->klass + v3);
}


int32_t ServantLvDetailEntity__GetRarityIcon(
        ServantLvDetailEntity_o *this,
        bool isGrandServant,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 28;
  if ( isGrandServant )
    v3 = 36;
  return *(_DWORD *)((char *)&this->klass + v3);
}