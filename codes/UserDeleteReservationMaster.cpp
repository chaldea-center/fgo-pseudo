void __fastcall UserDeleteReservationMaster___ctor(UserDeleteReservationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8717 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_UserDeleteReservationMaster__UserDeleteReservationEntity__string___ctor__,
      method);
    byte_4BC8717 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    407,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_UserDeleteReservationMaster__UserDeleteReservationEntity__string___ctor__);
}


UserDeleteReservationEntity_o *__fastcall UserDeleteReservationMaster__GetEntity(
        UserDeleteReservationMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *v6; // x1

  if ( (byte_4BC8715 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_UserDeleteReservationMaster__UserDeleteReservationEntity__string__GetEntity__,
      userId);
    sub_1C1ABD4(&UserDeleteReservationEntity_TypeInfo, v5);
    byte_4BC8715 = 1;
  }
  if ( !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
  v6 = (Il2CppObject *)UserDeleteReservationEntity__CreatePK(userId, (const MethodInfo *)userId);
  return (UserDeleteReservationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            v6,
                                            (const MethodInfo_324D130 *)Method_DataMasterBase_UserDeleteReservationMaster__UserDeleteReservationEntity__string__GetEntity__);
}


bool __fastcall UserDeleteReservationMaster__TryGetEntity(
        UserDeleteReservationMaster_o *this,
        UserDeleteReservationEntity_o **entity,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *v8; // x2

  if ( (byte_4BC8716 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_UserDeleteReservationMaster__UserDeleteReservationEntity__string__TryGetEntity__,
      entity);
    sub_1C1ABD4(&UserDeleteReservationEntity_TypeInfo, v7);
    byte_4BC8716 = 1;
  }
  if ( !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
  v8 = (Il2CppObject *)UserDeleteReservationEntity__CreatePK(userId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           v8,
           (const MethodInfo_324D17C *)Method_DataMasterBase_UserDeleteReservationMaster__UserDeleteReservationEntity__string__TryGetEntity__);
}