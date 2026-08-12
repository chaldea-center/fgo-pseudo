void UserImagePartsGroupMaster___ctor(UserImagePartsGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59717A8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int___ctor__);
    byte_59717A8 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    537,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int___ctor__);
}


bool UserImagePartsGroupMaster__ContainsImagePartsGroupIdx(
        UserImagePartsGroupMaster_o *this,
        int32_t id,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  char v8; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59717A9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__);
    byte_59717A9 = 1;
  }
  entity = 0;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_UserImagePartsGroupMaster__UserImagePartsGroupEntity__int__TryGetEntity__) )
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