bool __fastcall DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
        DataMasterBase_UserGameMaster__UserGameEntity__long__o *this,
        UserGameEntity_o **entity,
        const MethodInfo_24E43E0 *method)
{
  if ( !this )
    sub_B2C434(0LL, entity);
  return ((__int64 (__fastcall *)(DataMasterBase_UserGameMaster__UserGameEntity__long__o *, UserGameEntity_o **))method->klass->rgctx_data->_5_DataMasterBase_TryGetSingleEntity_TEntity_->methodPointer)(
           this,
           entity);
}