void __fastcall UserDeleteReservationMaster___ctor(UserDeleteReservationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438CB17 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserDeleteReservationMaster__UserDeleteReservationEntity__string___ctor__);
    byte_438CB17 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    402,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_UserDeleteReservationMaster__UserDeleteReservationEntity__string___ctor__);
}


UserDeleteReservationEntity_o *__fastcall UserDeleteReservationMaster__GetEntity(
        UserDeleteReservationMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  System_String_o *v5; // x1

  if ( (byte_438CB15 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserDeleteReservationMaster__UserDeleteReservationEntity__string__GetEntity__);
    sub_B775C4(&UserDeleteReservationEntity_TypeInfo);
    byte_438CB15 = 1;
  }
  if ( (BYTE3(UserDeleteReservationEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
  }
  v5 = UserDeleteReservationEntity__CreatePK(userId, (const MethodInfo *)userId);
  return (UserDeleteReservationEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            v5,
                                            (const MethodInfo_21FBCE4 *)Method_DataMasterBase_UserDeleteReservationMaster__UserDeleteReservationEntity__string__GetEntity__);
}


bool __fastcall UserDeleteReservationMaster__TryGetEntity(
        UserDeleteReservationMaster_o *this,
        UserDeleteReservationEntity_o **entity,
        int64_t userId,
        const MethodInfo *method)
{
  System_String_o *v7; // x2

  if ( (byte_438CB16 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserDeleteReservationMaster__UserDeleteReservationEntity__string__TryGetEntity__);
    sub_B775C4(&UserDeleteReservationEntity_TypeInfo);
    byte_438CB16 = 1;
  }
  if ( (BYTE3(UserDeleteReservationEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserDeleteReservationEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserDeleteReservationEntity_TypeInfo);
  }
  v7 = UserDeleteReservationEntity__CreatePK(userId, (const MethodInfo *)entity);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           v7,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_UserDeleteReservationMaster__UserDeleteReservationEntity__string__TryGetEntity__);
}