void UserBgImagePartsGroupEntity___ctor(UserBgImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597160C & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_597160C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
}


bool UserBgImagePartsGroupEntity__ContainsImagePartsGroupIdx(
        UserBgImagePartsGroupEntity_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *idxs; // x0

  if ( (byte_597160B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_597160B = 1;
  }
  idxs = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.idxs;
  if ( idxs )
    LOBYTE(idxs) = System_Linq_Enumerable__Contains_int_(
                     idxs,
                     index,
                     (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)idxs;
}


int32_t UserBgImagePartsGroupEntity__CreatePrimaryKey(UserBgImagePartsGroupEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}