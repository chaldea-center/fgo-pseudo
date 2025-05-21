void __fastcall CombineInitData___ctor(CombineInitData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_int__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B485CB & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v3);
    byte_4B485CB = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.eventIdList = v4;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.eventIdList, (int32_t)v4, v5, v6);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EventCampaignEntity_o *__fastcall CombineInitData__getCombineEventData(
        CombineInitData_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int MasterName_k__BackingField; // w8
  __int64 v12; // x9
  EventCampaignEntity_o *v13; // x21
  __int64 v15; // x8
  _QWORD *v16; // x9
  __int64 MasterName_k__BackingField_low; // x10

  if ( (byte_4B485CA & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_EventCampaignMaster___, *(_QWORD *)&eventId);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__getEntitys__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v7);
    byte_4B485CA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !Master_object )
    goto LABEL_20;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__object___getEntitys(
                                                                  Master_object,
                                                                  (const MethodInfo_32E5B78 *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__getEntitys__);
  if ( !Master_object )
    return 0LL;
  MasterName_k__BackingField = (int)Master_object->fields._MasterName_k__BackingField;
  if ( MasterName_k__BackingField < 1 )
    return 0LL;
  v12 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v12 >= MasterName_k__BackingField )
      sub_1BDBADC(Master_object, v9, v10);
    v13 = (EventCampaignEntity_o *)*((_QWORD *)&Master_object->fields.revision + v12);
    if ( !v13 )
      goto LABEL_20;
    if ( v13->fields.eventId == eventId )
      break;
    if ( (int)++v12 >= MasterName_k__BackingField )
      return 0LL;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.eventIdList;
  if ( !Master_object
    || (v15 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField,
        v16 = Method_System_Collections_Generic_List_int__Add__,
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField),
        !v15) )
  {
LABEL_20:
    sub_1BDBAD4(Master_object, v9);
  }
  MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v15 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)Master_object,
      eventId,
      *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    *(_DWORD *)(v15 + 4 * MasterName_k__BackingField_low + 32) = eventId;
  }
  return v13;
}


EventEntity_array *__fastcall CombineInitData__getCombineEventList(CombineInitData_o *this, const MethodInfo *method)
{
  return this->fields.combineEventList;
}


void __fastcall CombineInitData__getEventData(CombineInitData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *Instance; // x0
  __int64 v9; // x1
  EventMaster_o *v10; // x21
  EventEntity_array *EnableEntityList; // x20
  EventEntity_array *v12; // x21
  System_Collections_Generic_List_object__o *v13; // x22
  struct EventEntity_array *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4B485C9 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventEntity___ctor___77017712, v5);
    sub_1BDB878(&System_Collections_Generic_List_EventEntity__TypeInfo, v6);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B485C9 = 1;
  }
  Instance = (EventEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (v10 = (EventMaster_o *)Instance,
        EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 5, 1, 0, 0LL),
        Instance = EventMaster__GetEnableEntityList(v10, 13, 1, 0, 0LL),
        !EnableEntityList)
    || (v12 = Instance) == 0LL
    || (v13 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor_57497088(
          v13,
          v12->max_length + EnableEntityList->max_length,
          (const MethodInfo_36D5600 *)Method_System_Collections_Generic_List_EventEntity___ctor___77017712),
        !v13) )
  {
    sub_1BDBAD4(Instance, v9);
  }
  System_Collections_Generic_List_object___AddRange(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)EnableEntityList,
    (const MethodInfo_36D5FD0 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)v12,
    (const MethodInfo_36D5FD0 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  v14 = (struct EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v13,
                                      (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
  this->fields.combineEventList = v14;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.combineEventList, (int32_t)v14, v15, v16);
}


System_Collections_Generic_List_int__o *__fastcall CombineInitData__getEventIdList(
        CombineInitData_o *this,
        const MethodInfo *method)
{
  return this->fields.eventIdList;
}