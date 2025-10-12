void EquipExpMaster___ctor(EquipExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C3783C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EquipExpMaster__EquipExpEntity__string___ctor__);
    byte_4C3783C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    52,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_EquipExpMaster__EquipExpEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EquipExpEntity_o *EquipExpMaster__GetEntity(
        EquipExpMaster_o *this,
        int32_t equipId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C3783A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EquipExpMaster__EquipExpEntity__string__GetEntity__);
    byte_4C3783A = 1;
  }
  PK = (Il2CppObject *)EquipExpEntity__CreatePK(equipId, lv, *(const MethodInfo **)&lv);
  return (EquipExpEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_339B2F0 *)Method_DataMasterBase_EquipExpMaster__EquipExpEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EquipExpMaster__TryGetEntity(
        EquipExpMaster_o *this,
        EquipExpEntity_o **entity,
        int32_t equipId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C3783B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EquipExpMaster__EquipExpEntity__string__TryGetEntity__);
    byte_4C3783B = 1;
  }
  PK = (Il2CppObject *)EquipExpEntity__CreatePK(equipId, lv, *(const MethodInfo **)&equipId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_EquipExpMaster__EquipExpEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t EquipExpMaster__getLevel(
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


int32_t EquipExpMaster__getLevelMax(EquipExpMaster_o *this, int32_t id, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w22
  int32_t klass_high; // w21
  int32_t v9; // w23
  Il2CppObject *Item; // x0

  if ( (byte_4C3783D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EquipExpEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EquipExpEntity__get_Item__);
    byte_4C3783D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_EquipExpEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    klass_high = 0;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v9,
               (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_EquipExpEntity__get_Item__);
      if ( Item && LODWORD(Item[1].klass) == id && SHIDWORD(Item[1].klass) > klass_high )
        klass_high = HIDWORD(Item[1].klass);
      if ( v7 == ++v9 )
        return klass_high;
    }
LABEL_15:
    sub_1C32E7C(list);
  }
  return 0;
}