void __fastcall AttriRelationMaster___ctor(AttriRelationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1D49 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string___ctor__);
    byte_42B1D49 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    107,
    (const MethodInfo_23E268C *)Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
AttriRelationEntity_o *__fastcall AttriRelationMaster__GetEntity(
        AttriRelationMaster_o *this,
        int32_t atkAttri,
        int32_t defAttri,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B1D47 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string__GetEntity__);
    byte_42B1D47 = 1;
  }
  PK = AttriRelationEntity__CreatePK(atkAttri, defAttri, *(const MethodInfo **)&defAttri);
  return (AttriRelationEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_23E2728 *)Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AttriRelationMaster__TryGetEntity(
        AttriRelationMaster_o *this,
        AttriRelationEntity_o **entity,
        int32_t atkAttri,
        int32_t defAttri,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B1D48 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string__TryGetEntity__);
    byte_42B1D48 = 1;
  }
  PK = AttriRelationEntity__CreatePK(atkAttri, defAttri, *(const MethodInfo **)&atkAttri);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string__TryGetEntity__);
}


float __fastcall AttriRelationMaster__getRate(int32_t atk, int32_t def, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  AttriRelationMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v8; // x3
  float v9; // s8
  AttriRelationEntity_o *Entity; // x0

  if ( (byte_42B1D4A & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_AttriRelationMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1D4A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v6);
  MasterData_WarQuestSelectionMaster = (AttriRelationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_AttriRelationMaster___);
  v9 = 1.0;
  if ( MasterData_WarQuestSelectionMaster )
  {
    Entity = AttriRelationMaster__GetEntity(MasterData_WarQuestSelectionMaster, atk, def, v8);
    if ( Entity )
      return (float)Entity->fields.attackRate / 1000.0;
  }
  return v9;
}