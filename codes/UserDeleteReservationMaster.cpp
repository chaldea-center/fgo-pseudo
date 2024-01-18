void __fastcall UserDeleteReservationMaster___ctor(UserDeleteReservationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188AFD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserDeleteReservationMaster__UserDeleteReservationEntity__string___ctor__, method);
    byte_4188AFD = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    401,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserDeleteReservationMaster__UserDeleteReservationEntity__string___ctor__);
}


UserDeleteReservationEntity_o *__fastcall UserDeleteReservationMaster__GetEntity(
        UserDeleteReservationMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *v6; // x1

  if ( (byte_4188AFB & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserDeleteReservationMaster__UserDeleteReservationEntity__string__GetEntity__,
      userId);
    sub_B2C35C(&UserDeleteReservationEntity_TypeInfo, v5);
    byte_4188AFB = 1;
  }
  if ( (BYTE3(UserDeleteReservationEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
  }
  v6 = UserDeleteReservationEntity__CreatePK(userId, (const MethodInfo *)userId);
  return (UserDeleteReservationEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                            (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                            v6,
                                            (const MethodInfo_24E4520 *)Method_DataMasterBase_UserDeleteReservationMaster__UserDeleteReservationEntity__string__GetEntity__);
}


bool __fastcall UserDeleteReservationMaster__TryGetEntity(
        UserDeleteReservationMaster_o *this,
        UserDeleteReservationEntity_o **entity,
        int64_t userId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *v8; // x2

  if ( (byte_4188AFC & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserDeleteReservationMaster__UserDeleteReservationEntity__string__TryGetEntity__,
      entity);
    sub_B2C35C(&UserDeleteReservationEntity_TypeInfo, v7);
    byte_4188AFC = 1;
  }
  if ( (BYTE3(UserDeleteReservationEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
  }
  v8 = UserDeleteReservationEntity__CreatePK(userId, (const MethodInfo *)entity);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           v8,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserDeleteReservationMaster__UserDeleteReservationEntity__string__TryGetEntity__);
}