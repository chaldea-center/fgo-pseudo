void __fastcall UserDeleteReservationMaster___ctor(UserDeleteReservationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BD62 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserDeleteReservationMaster__UserDeleteReservationEntity__string___ctor__);
    byte_4A5BD62 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    403,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserDeleteReservationMaster__UserDeleteReservationEntity__string___ctor__);
}


UserDeleteReservationEntity_o *__fastcall UserDeleteReservationMaster__GetEntity(
        UserDeleteReservationMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x1

  if ( (byte_4A5BD60 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserDeleteReservationMaster__UserDeleteReservationEntity__string__GetEntity__);
    sub_1B885B0(&UserDeleteReservationEntity_TypeInfo);
    byte_4A5BD60 = 1;
  }
  if ( !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
  v5 = (Il2CppObject *)UserDeleteReservationEntity__CreatePK(userId, (const MethodInfo *)userId);
  return (UserDeleteReservationEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            v5,
                                            (const MethodInfo_311DC8C *)Method_DataMasterBase_UserDeleteReservationMaster__UserDeleteReservationEntity__string__GetEntity__);
}


bool __fastcall UserDeleteReservationMaster__TryGetEntity(
        UserDeleteReservationMaster_o *this,
        UserDeleteReservationEntity_o **entity,
        int64_t userId,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x2

  if ( (byte_4A5BD61 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserDeleteReservationMaster__UserDeleteReservationEntity__string__TryGetEntity__);
    sub_1B885B0(&UserDeleteReservationEntity_TypeInfo);
    byte_4A5BD61 = 1;
  }
  if ( !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
  v7 = (Il2CppObject *)UserDeleteReservationEntity__CreatePK(userId, (const MethodInfo *)entity);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           v7,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserDeleteReservationMaster__UserDeleteReservationEntity__string__TryGetEntity__);
}