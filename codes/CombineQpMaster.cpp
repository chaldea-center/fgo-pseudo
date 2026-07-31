void CombineQpMaster___ctor(CombineQpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593842F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string___ctor__);
    byte_593842F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    88,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineQpEntity_o *CombineQpMaster__GetEntity(
        CombineQpMaster_o *this,
        int32_t rarity,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_593842D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string__GetEntity__);
    byte_593842D = 1;
  }
  PK = (Il2CppObject *)CombineQpEntity__CreatePK(rarity, lv, *(const MethodInfo **)&lv);
  return (CombineQpEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_3EE2044 *)Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool CombineQpMaster__TryGetEntity(
        CombineQpMaster_o *this,
        CombineQpEntity_o **entity,
        int32_t rarity,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_593842E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string__TryGetEntity__);
    byte_593842E = 1;
  }
  PK = (Il2CppObject *)CombineQpEntity__CreatePK(rarity, lv, *(const MethodInfo **)&rarity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_CombineQpMaster__CombineQpEntity__string__TryGetEntity__);
}