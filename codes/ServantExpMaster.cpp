void __fastcall ServantExpMaster___ctor(ServantExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6476 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_ServantExpMaster__ServantExpEntity__string___ctor__, method);
    byte_4AB6476 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    87,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_ServantExpMaster__ServantExpEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantExpEntity_o *__fastcall ServantExpMaster__GetEntity(
        ServantExpMaster_o *this,
        int32_t type,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4AB6474 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_ServantExpMaster__ServantExpEntity__string__GetEntity__, *(_QWORD *)&type);
    byte_4AB6474 = 1;
  }
  PK = (Il2CppObject *)ServantExpEntity__CreatePK(type, lv, *(const MethodInfo **)&lv);
  return (ServantExpEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_31640E8 *)Method_DataMasterBase_ServantExpMaster__ServantExpEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantExpMaster__TryGetEntity(
        ServantExpMaster_o *this,
        ServantExpEntity_o **entity,
        int32_t type,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4AB6475 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_ServantExpMaster__ServantExpEntity__string__TryGetEntity__, entity);
    byte_4AB6475 = 1;
  }
  PK = (Il2CppObject *)ServantExpEntity__CreatePK(type, lv, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_ServantExpMaster__ServantExpEntity__string__TryGetEntity__);
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