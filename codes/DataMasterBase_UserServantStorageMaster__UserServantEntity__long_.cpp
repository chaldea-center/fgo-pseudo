UserServantEntity_o *__fastcall DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
        DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *this,
        int64_t key,
        const MethodInfo_24E42F8 *method)
{
  System_String_o *v5; // x0
  __int64 v6; // x1
  int64_t v8; // [xsp+8h] [xbp-18h] BYREF

  v8 = key;
  v5 = System_Int64__ToString((int64_t)&v8, 0LL);
  if ( !this )
    sub_B2C434(v5, v6);
  return (UserServantEntity_o *)((__int64 (__fastcall *)(DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *, System_String_o *))method->klass->rgctx_data->_2_DataMasterBase_getEntityFromKey_TEntity_->methodPointer)(
                                  this,
                                  v5);
}


bool __fastcall DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
        DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *this,
        UserServantEntity_o **entity,
        int64_t key,
        const MethodInfo_24E4354 *method)
{
  System_String_o *v7; // x0
  __int64 v8; // x1
  int64_t v10; // [xsp+8h] [xbp-18h] BYREF

  v10 = key;
  v7 = System_Int64__ToString((int64_t)&v10, 0LL);
  if ( !this )
    sub_B2C434(v7, v8);
  return ((__int64 (__fastcall *)(DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *, UserServantEntity_o **, System_String_o *))method->klass->rgctx_data->_3_DataMasterBase_TryGetEntityFromId_TEntity_->methodPointer)(
           this,
           entity,
           v7) & 1;
}