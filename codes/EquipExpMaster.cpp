void __fastcall EquipExpMaster___ctor(EquipExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B01E9D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_EquipExpMaster__EquipExpEntity__string___ctor__, method);
    byte_4B01E9D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    52,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_EquipExpMaster__EquipExpEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EquipExpEntity_o *__fastcall EquipExpMaster__GetEntity(
        EquipExpMaster_o *this,
        int32_t equipId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B01E9B & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_EquipExpMaster__EquipExpEntity__string__GetEntity__, *(_QWORD *)&equipId);
    byte_4B01E9B = 1;
  }
  PK = (Il2CppObject *)EquipExpEntity__CreatePK(equipId, lv, *(const MethodInfo **)&lv);
  return (EquipExpEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_32B3B28 *)Method_DataMasterBase_EquipExpMaster__EquipExpEntity__string__GetEntity__);
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

  if ( (byte_4B01E9C & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_EquipExpMaster__EquipExpEntity__string__TryGetEntity__, entity);
    byte_4B01E9C = 1;
  }
  PK = (Il2CppObject *)EquipExpEntity__CreatePK(equipId, lv, *(const MethodInfo **)&equipId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_EquipExpMaster__EquipExpEntity__string__TryGetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v8; // w22
  int32_t klass_high; // w21
  int32_t v10; // w23
  Il2CppObject *Item; // x0

  if ( (byte_4B01E9E & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_EquipExpEntity__get_Count__, *(_QWORD *)&id);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_EquipExpEntity__get_Item__, v5);
    byte_4B01E9E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_EquipExpEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    klass_high = 0;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v10,
               (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_EquipExpEntity__get_Item__);
      if ( Item && LODWORD(Item[1].klass) == id && SHIDWORD(Item[1].klass) > klass_high )
        klass_high = HIDWORD(Item[1].klass);
      if ( v8 == ++v10 )
        return klass_high;
    }
LABEL_15:
    sub_1BC3264(list, *(_QWORD *)&id);
  }
  return 0;
}