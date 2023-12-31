void __fastcall AttriRelationMaster___ctor(AttriRelationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FBF2D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string___ctor__, method);
    byte_40FBF2D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    106,
    (const MethodInfo_266F73C *)Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
AttriRelationEntity_o *__fastcall AttriRelationMaster__GetEntity(
        AttriRelationMaster_o *this,
        int32_t atkAttri,
        int32_t defAttri,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FBF2B & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string__GetEntity__,
      *(_QWORD *)&atkAttri);
    byte_40FBF2B = 1;
  }
  PK = AttriRelationEntity__CreatePK(atkAttri, defAttri, *(const MethodInfo **)&defAttri);
  return (AttriRelationEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_266F7D8 *)Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string__GetEntity__);
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

  if ( (byte_40FBF2C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string__TryGetEntity__, entity);
    byte_40FBF2C = 1;
  }
  PK = AttriRelationEntity__CreatePK(atkAttri, defAttri, *(const MethodInfo **)&atkAttri);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall AttriRelationMaster__getRate(int32_t atk, int32_t def, const MethodInfo *method)
{
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  AttriRelationMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v8; // x3
  float v9; // s8
  AttriRelationEntity_o *Entity; // x0

  if ( (byte_40FBF2E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_AttriRelationMaster___, *(_QWORD *)&def);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FBF2E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  MasterData_WarQuestSelectionMaster = (AttriRelationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_AttriRelationMaster___);
  v9 = 1.0;
  if ( MasterData_WarQuestSelectionMaster )
  {
    Entity = AttriRelationMaster__GetEntity(MasterData_WarQuestSelectionMaster, atk, def, v8);
    if ( Entity )
      return (float)Entity->fields.attackRate / 1000.0;
  }
  return v9;
}