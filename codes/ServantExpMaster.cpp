void __fastcall ServantExpMaster___ctor(ServantExpMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1692A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ServantExpMaster__ServantExpEntity__string___ctor__, method, v2);
    byte_4B1692A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    87,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantExpMaster__ServantExpEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantExpEntity_o *__fastcall ServantExpMaster__GetEntity(
        ServantExpMaster_o *this,
        int32_t type,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16928 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantExpMaster__ServantExpEntity__string__GetEntity__,
      *(_QWORD *)&type,
      *(_QWORD *)&lv);
    byte_4B16928 = 1;
  }
  PK = (Il2CppObject *)ServantExpEntity__CreatePK(type, lv, *(const MethodInfo **)&lv);
  return (ServantExpEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantExpMaster__ServantExpEntity__string__GetEntity__);
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

  if ( (byte_4B16929 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantExpMaster__ServantExpEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&type);
    byte_4B16929 = 1;
  }
  PK = (Il2CppObject *)ServantExpEntity__CreatePK(type, lv, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantExpMaster__ServantExpEntity__string__TryGetEntity__);
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