UserServantEntity_o *__fastcall DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
        DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *this,
        int64_t key,
        const MethodInfo_2669DFC *method)
{
  System_String_o *v5; // x0
  int64_t v7; // [xsp+8h] [xbp-18h] BYREF

  v7 = key;
  v5 = System_Int64__ToString((int64_t)&v7, 0LL);
  if ( !this )
    sub_B0D97C(v5);
  return (UserServantEntity_o *)((__int64 (__fastcall *)(DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *, System_String_o *))method->klass->rgctx_data->_2_DataMasterBase_getEntityFromKey_TEntity_->methodPointer)(
                                  this,
                                  v5);
}


bool __fastcall DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
        DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *this,
        UserServantEntity_o **entity,
        int64_t key,
        const MethodInfo_2669E58 *method)
{
  System_String_o *v7; // x0
  int64_t v9; // [xsp+8h] [xbp-18h] BYREF

  v9 = key;
  v7 = System_Int64__ToString((int64_t)&v9, 0LL);
  if ( !this )
    sub_B0D97C(v7);
  return ((__int64 (__fastcall *)(DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *, UserServantEntity_o **, System_String_o *))method->klass->rgctx_data->_3_DataMasterBase_TryGetEntityFromId_TEntity_->methodPointer)(
           this,
           entity,
           v7) & 1;
}