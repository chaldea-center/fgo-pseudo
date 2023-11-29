bool __fastcall DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
        DataMasterBase_UserGameMaster__UserGameEntity__long__o *this,
        UserGameEntity_o **entity,
        const MethodInfo_266F698 *method)
{
  if ( !this )
    sub_B170D4();
  return ((__int64 (__fastcall *)(DataMasterBase_UserGameMaster__UserGameEntity__long__o *, UserGameEntity_o **))method->klass->rgctx_data->_5_DataMasterBase_TryGetSingleEntity_TEntity_->methodPointer)(
           this,
           entity);
}