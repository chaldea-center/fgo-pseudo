void UserBgImagePartsGroupEntity___ctor(UserBgImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E7841E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_int___ctor__);
    byte_4E7841E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3533444 *)Method_DataEntityBase_int___ctor__);
}


bool UserBgImagePartsGroupEntity__ContainsImagePartsGroupIdx(
        UserBgImagePartsGroupEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *idxs; // x0

  if ( (byte_4E7841D & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4E7841D = 1;
  }
  idxs = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.idxs;
  if ( idxs )
    LOBYTE(idxs) = System_Linq_Enumerable__Contains_int_(
                     idxs,
                     index,
                     (const MethodInfo_326C62C *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)idxs;
}


int32_t UserBgImagePartsGroupEntity__CreatePrimaryKey(UserBgImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}