void __fastcall EquipExpMaster___ctor(EquipExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE3A3 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_EquipExpMaster__EquipExpEntity__string___ctor__, method);
    byte_49FE3A3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    48,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_EquipExpMaster__EquipExpEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EquipExpEntity_o *__fastcall EquipExpMaster__GetEntity(
        EquipExpMaster_o *this,
        int32_t equipId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FE3A1 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_EquipExpMaster__EquipExpEntity__string__GetEntity__, *(_QWORD *)&equipId);
    byte_49FE3A1 = 1;
  }
  PK = (Il2CppObject *)EquipExpEntity__CreatePK(equipId, lv, *(const MethodInfo **)&lv);
  return (EquipExpEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_30D64D8 *)Method_DataMasterBase_EquipExpMaster__EquipExpEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EquipExpMaster__TryGetEntity(
        EquipExpMaster_o *this,
        EquipExpEntity_o **entity,
        int32_t equipId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FE3A2 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_EquipExpMaster__EquipExpEntity__string__TryGetEntity__, entity);
    byte_49FE3A2 = 1;
  }
  PK = (Il2CppObject *)EquipExpEntity__CreatePK(equipId, lv, *(const MethodInfo **)&equipId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_EquipExpMaster__EquipExpEntity__string__TryGetEntity__);
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
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t klass_high; // w21
  int32_t v11; // w23
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49FE3A4 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64870(&EquipExpEntity_TypeInfo, v6);
    byte_49FE3A4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    klass_high = 0;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v11,
               (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(EquipExpEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (EquipExpEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == EquipExpEntity_TypeInfo
          && LODWORD(Item[1].klass) == id
          && SHIDWORD(Item[1].klass) > klass_high )
        {
          klass_high = HIDWORD(Item[1].klass);
        }
      }
      if ( v9 == ++v11 )
        return klass_high;
    }
LABEL_17:
    sub_1B64ACC(list, *(_QWORD *)&id);
  }
  return 0;
}