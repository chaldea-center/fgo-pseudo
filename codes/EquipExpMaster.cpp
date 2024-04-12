void __fastcall EquipExpMaster___ctor(EquipExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B469A & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EquipExpMaster__EquipExpEntity__string___ctor__);
    byte_42B469A = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    47,
    (const MethodInfo_23E268C *)Method_DataMasterBase_EquipExpMaster__EquipExpEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EquipExpEntity_o *__fastcall EquipExpMaster__GetEntity(
        EquipExpMaster_o *this,
        int32_t equipId,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B4698 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EquipExpMaster__EquipExpEntity__string__GetEntity__);
    byte_42B4698 = 1;
  }
  PK = EquipExpEntity__CreatePK(equipId, lv, *(const MethodInfo **)&lv);
  return (EquipExpEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                               PK,
                               (const MethodInfo_23E2728 *)Method_DataMasterBase_EquipExpMaster__EquipExpEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EquipExpMaster__TryGetEntity(
        EquipExpMaster_o *this,
        EquipExpEntity_o **entity,
        int32_t equipId,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B4699 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_EquipExpMaster__EquipExpEntity__string__TryGetEntity__);
    byte_42B4699 = 1;
  }
  PK = EquipExpEntity__CreatePK(equipId, lv, *(const MethodInfo **)&equipId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_EquipExpMaster__EquipExpEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EquipExpMaster__getLevel(
        EquipExpMaster_o *this,
        int32_t equipId,
        int32_t exp,
        int32_t start_lv,
        const MethodInfo *method)
{
  int32_t LevelMax; // w0
  const MethodInfo *v10; // x3
  int32_t v11; // w23
  EquipExpEntity_o *Entity; // x0
  const MethodInfo *v13; // x3
  int32_t v14; // w24

  LevelMax = EquipExpMaster__getLevelMax(this, equipId, *(const MethodInfo **)&exp);
  if ( LevelMax >= start_lv )
  {
    v11 = LevelMax;
    Entity = EquipExpMaster__GetEntity(this, equipId, start_lv, v10);
    if ( Entity )
    {
      v14 = start_lv + 1;
      do
      {
        start_lv = Entity->fields.lv;
        if ( Entity->fields.exp > exp )
          break;
        if ( v14 > v11 )
          break;
        Entity = EquipExpMaster__GetEntity(this, equipId, v14++, v13);
      }
      while ( Entity );
    }
  }
  return start_lv;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EquipExpMaster__getLevelMax(EquipExpMaster_o *this, int32_t id, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w22
  int32_t klass_high; // w21
  int32_t v9; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v11; // x10

  if ( (byte_42B469B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&EquipExpEntity_TypeInfo);
    byte_42B469B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    klass_high = 0;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v9,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v11 = *(&EquipExpEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v11
          && (EquipExpEntity_c *)Item->klass->_2.typeHierarchy[v11 - 1] == EquipExpEntity_TypeInfo
          && LODWORD(Item[1].klass) == id
          && SHIDWORD(Item[1].klass) > klass_high )
        {
          klass_high = HIDWORD(Item[1].klass);
        }
      }
      if ( ++v9 >= v7 )
        return klass_high;
    }
LABEL_17:
    sub_B52A5C(list, *(_QWORD *)&id);
  }
  return 0;
}