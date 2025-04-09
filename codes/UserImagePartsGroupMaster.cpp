void __fastcall UserImagePartsGroupMaster___ctor(UserImagePartsGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BBC7E & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int___ctor__, method);
    byte_49BBC7E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    535,
    (const MethodInfo_319B678 *)Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserImagePartsGroupMaster__ContainsImagePartsGroupIdx(
        UserImagePartsGroupMaster_o *this,
        int32_t id,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  char v8; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49BBC7F & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__,
      *(_QWORD *)&id);
    byte_49BBC7F = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_319D9E8 *)Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__) )
  {
    v8 = (char)entity;
    if ( entity )
      v8 = UserImagePartsGroupEntity__ContainsImagePartsGroupIdx((UserImagePartsGroupEntity_o *)entity, index, v7);
  }
  else
  {
    v8 = 0;
  }
  return v8 & 1;
}