void GachaSubMaster___ctor(GachaSubMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37CB7 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string___ctor__);
    byte_4C37CB7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    191,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaSubEntity_o *GachaSubMaster__GetEntity(
        GachaSubMaster_o *this,
        int32_t gachaId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C37CB8 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__GetEntity__);
    byte_4C37CB8 = 1;
  }
  PK = (Il2CppObject *)GachaSubEntity__CreatePK(gachaId, id, *(const MethodInfo **)&id);
  return (GachaSubEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_339B2F0 *)Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__GetEntity__);
}


// attributes: thunk
GachaSubEntity_o *GachaSubMaster__GetFriendPointGachaImageInfo(
        GachaSubMaster_o *this,
        int32_t gachaId,
        int64_t nowTime,
        const MethodInfo *method)
{
  return GachaSubMaster__GetOpenEntity_42135532(this, gachaId, nowTime, method);
}


GachaSubEntity_o *GachaSubMaster__GetOpenEntity(GachaSubMaster_o *this, int32_t gachaId, const MethodInfo *method)
{
  int64_t Time; // x2
  const MethodInfo *v6; // x3

  if ( (byte_4C37CB5 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C37CB5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  return GachaSubMaster__GetOpenEntity_42135532(this, gachaId, Time, v6);
}


GachaSubEntity_o *GachaSubMaster__GetOpenEntity_42135532(
        GachaSubMaster_o *this,
        int32_t gachaId,
        int64_t checkTime,
        const MethodInfo *method)
{
  void *Instance; // x0
  CommonReleaseMaster_o *v8; // x22
  int32_t Count; // w0
  int32_t v10; // w23
  GachaSubEntity_o *v11; // x24
  int32_t v12; // w25
  GachaSubEntity_o *v13; // x26
  int32_t v14; // w1

  if ( (byte_4C37CB6 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_GachaSubEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_GachaSubEntity__get_Item__);
    sub_1C32C20(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C37CB6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_22;
  v8 = (CommonReleaseMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_GachaSubEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v12,
                   (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_GachaSubEntity__get_Item__);
      if ( !Instance )
        break;
      v13 = (GachaSubEntity_o *)Instance;
      if ( *((_DWORD *)Instance + 4) == gachaId
        && *((_QWORD *)Instance + 6) <= checkTime
        && *((_QWORD *)Instance + 7) >= checkTime
        && (!v11 || *((_DWORD *)Instance + 6) > v11->fields.priority) )
      {
        v14 = *((_DWORD *)Instance + 16);
        if ( !v14 )
          goto LABEL_17;
        if ( !v8 )
          break;
        if ( CommonReleaseMaster__IsOpen(v8, v14, 0, 0, 0) )
LABEL_17:
          v11 = v13;
      }
      if ( v10 == ++v12 )
        return v11;
    }
LABEL_22:
    sub_1C32E7C(Instance);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool GachaSubMaster__TryGetEntity(
        GachaSubMaster_o *this,
        GachaSubEntity_o **entity,
        int32_t gachaId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C37CB9 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__TryGetEntity__);
    byte_4C37CB9 = 1;
  }
  PK = (Il2CppObject *)GachaSubEntity__CreatePK(gachaId, id, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__TryGetEntity__);
}