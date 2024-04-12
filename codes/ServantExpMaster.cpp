void __fastcall ServantExpMaster___ctor(ServantExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B2EE4 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantExpMaster__ServantExpEntity__string___ctor__);
    byte_42B2EE4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    86,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ServantExpMaster__ServantExpEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantExpEntity_o *__fastcall ServantExpMaster__GetEntity(
        ServantExpMaster_o *this,
        int32_t type,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B2EE2 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantExpMaster__ServantExpEntity__string__GetEntity__);
    byte_42B2EE2 = 1;
  }
  PK = ServantExpEntity__CreatePK(type, lv, *(const MethodInfo **)&lv);
  return (ServantExpEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_23E2728 *)Method_DataMasterBase_ServantExpMaster__ServantExpEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantExpMaster__TryGetEntity(
        ServantExpMaster_o *this,
        ServantExpEntity_o **entity,
        int32_t type,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B2EE3 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantExpMaster__ServantExpEntity__string__TryGetEntity__);
    byte_42B2EE3 = 1;
  }
  PK = ServantExpEntity__CreatePK(type, lv, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ServantExpMaster__ServantExpEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantExpMaster__getLevel(
        ServantExpMaster_o *this,
        int32_t exp,
        int32_t type,
        int32_t max_lv,
        int32_t start_lv,
        const MethodInfo *method)
{
  int32_t lv; // w19
  ServantExpEntity_o *Entity; // x0
  const MethodInfo *v12; // x3
  int32_t v13; // w24

  lv = start_lv;
  if ( start_lv <= max_lv )
  {
    Entity = ServantExpMaster__GetEntity(this, type, start_lv, *(const MethodInfo **)&max_lv);
    if ( Entity )
    {
      v13 = lv + 1;
      do
      {
        lv = Entity->fields.lv;
        if ( Entity->fields.exp > exp )
          break;
        if ( v13 > max_lv )
          break;
        Entity = ServantExpMaster__GetEntity(this, type, v13++, v12);
      }
      while ( Entity );
    }
  }
  return lv;
}