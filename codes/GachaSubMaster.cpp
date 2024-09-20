void __fastcall GachaSubMaster___ctor(GachaSubMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B416 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string___ctor__);
    byte_4A5B416 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    187,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaSubEntity_o *__fastcall GachaSubMaster__GetEntity(
        GachaSubMaster_o *this,
        int32_t gachaId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B414 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__GetEntity__);
    byte_4A5B414 = 1;
  }
  PK = (Il2CppObject *)GachaSubEntity__CreatePK(gachaId, id, *(const MethodInfo **)&id);
  return (GachaSubEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_311DC8C *)Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__GetEntity__);
}


// attributes: thunk
GachaSubEntity_o *__fastcall GachaSubMaster__GetFriendPointGachaImageInfo(
        GachaSubMaster_o *this,
        int32_t gachaId,
        int64_t nowTime,
        const MethodInfo *method)
{
  return GachaSubMaster__GetOpenEntity_39361924(this, gachaId, nowTime, method);
}


GachaSubEntity_o *__fastcall GachaSubMaster__GetOpenEntity(
        GachaSubMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  int64_t Time; // x2
  const MethodInfo *v6; // x3

  if ( (byte_4A5B417 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B417 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return GachaSubMaster__GetOpenEntity_39361924(this, gachaId, Time, v6);
}


GachaSubEntity_o *__fastcall GachaSubMaster__GetOpenEntity_39361924(
        GachaSubMaster_o *this,
        int32_t gachaId,
        int64_t checkTime,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 masterDataBytes_low; // x1
  CommonReleaseMaster_o *v9; // x22
  int32_t Count; // w0
  int32_t v11; // w23
  GachaSubEntity_o *v12; // x24
  int32_t v13; // w25
  GachaSubEntity_o *v14; // x26
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B418 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&GachaSubEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B418 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_24;
  v9 = (CommonReleaseMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0LL;
    v13 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v13,
                                    (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v14 = (GachaSubEntity_o *)Instance;
      methodPtr_low = LOBYTE(GachaSubEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (GachaSubEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != GachaSubEntity_TypeInfo )
      {
        break;
      }
      if ( Instance->fields.m_CachedPtr == gachaId
        && (__int64)Instance->fields.datalist <= checkTime
        && (__int64)Instance->fields.lookup >= checkTime
        && (!v12 || SLODWORD(Instance->fields.m_CancellationTokenSource) > v12->fields.priority) )
      {
        masterDataBytes_low = LODWORD(Instance->fields.masterDataBytes);
        if ( !(_DWORD)masterDataBytes_low )
          goto LABEL_19;
        if ( !v9 )
          break;
        if ( CommonReleaseMaster__IsOpen(v9, masterDataBytes_low, 0LL, 0, 0LL) )
LABEL_19:
          v12 = v14;
      }
      if ( v11 == ++v13 )
        return v12;
    }
LABEL_24:
    sub_1B8880C(Instance, masterDataBytes_low);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaSubMaster__TryGetEntity(
        GachaSubMaster_o *this,
        GachaSubEntity_o **entity,
        int32_t gachaId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B415 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__TryGetEntity__);
    byte_4A5B415 = 1;
  }
  PK = (Il2CppObject *)GachaSubEntity__CreatePK(gachaId, id, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__TryGetEntity__);
}