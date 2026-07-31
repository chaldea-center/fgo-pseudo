void UserBgImagePartsGroupMaster___ctor(UserBgImagePartsGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593944D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserBgImagePartsGroupMaster__UserBgImagePartsGroupEntity__int___ctor__);
    byte_593944D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    559,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_UserBgImagePartsGroupMaster__UserBgImagePartsGroupEntity__int___ctor__);
}


bool UserBgImagePartsGroupMaster__ContainsImagePartsGroupIdx(
        UserBgImagePartsGroupMaster_o *this,
        int32_t id,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  char v8; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_593944E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserBgImagePartsGroupMaster__UserBgImagePartsGroupEntity__int__TryGetEntity__);
    byte_593944E = 1;
  }
  entity = 0;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         id,
         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_UserBgImagePartsGroupMaster__UserBgImagePartsGroupEntity__int__TryGetEntity__) )
  {
    v8 = (char)entity;
    if ( entity )
      v8 = UserBgImagePartsGroupEntity__ContainsImagePartsGroupIdx((UserBgImagePartsGroupEntity_o *)entity, index, v7);
  }
  else
  {
    v8 = 0;
  }
  return v8 & 1;
}