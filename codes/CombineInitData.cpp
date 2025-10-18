void CombineInitData___ctor(CombineInitData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C46DDD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C46DDD = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.eventIdList = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventIdList, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


EventCampaignEntity_o *CombineInitData__getCombineEventData(
        CombineInitData_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  int MasterName_k__BackingField; // w8
  __int64 v7; // x9
  EventCampaignEntity_o *v8; // x21
  __int64 v10; // x8
  _QWORD *v11; // x9
  __int64 MasterName_k__BackingField_low; // x10

  if ( (byte_4C46DDC & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__getEntitys__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    byte_4C46DDC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !Master_object )
    goto LABEL_20;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__object___getEntitys(
                                                                  Master_object,
                                                                  (const MethodInfo_33A4DDC *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__getEntitys__);
  if ( !Master_object )
    return 0;
  MasterName_k__BackingField = (int)Master_object->fields._MasterName_k__BackingField;
  if ( MasterName_k__BackingField < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v7 >= MasterName_k__BackingField )
      sub_1C372BC(Master_object);
    v8 = (EventCampaignEntity_o *)*((_QWORD *)&Master_object->fields.revision + v7);
    if ( !v8 )
      goto LABEL_20;
    if ( v8->fields.eventId == eventId )
      break;
    if ( (int)++v7 >= MasterName_k__BackingField )
      return 0;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.eventIdList;
  if ( !Master_object
    || (v10 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField,
        v11 = Method_System_Collections_Generic_List_int__Add__,
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField),
        !v10) )
  {
LABEL_20:
    sub_1C372B4(Master_object);
  }
  MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v10 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)Master_object,
      eventId,
      *(const MethodInfo_3786000 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    *(_DWORD *)(v10 + 4 * MasterName_k__BackingField_low + 32) = eventId;
  }
  return v8;
}


EventEntity_array *CombineInitData__getCombineEventList(CombineInitData_o *this, const MethodInfo *method)
{
  return this->fields.combineEventList;
}


void CombineInitData__getEventData(CombineInitData_o *this, const MethodInfo *method)
{
  EventEntity_array *Instance; // x0
  EventMaster_o *v4; // x21
  EventEntity_array *EnableEntityList; // x20
  EventEntity_array *v6; // x21
  System_Collections_Generic_List_object__o *v7; // x22
  struct EventEntity_array *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C46DDB & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventEntity___ctor___78048760);
    sub_1C37058(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C46DDB = 1;
  }
  Instance = (EventEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMaster___)) == 0
    || (v4 = (EventMaster_o *)Instance,
        EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 5, 1, 0, 0),
        Instance = EventMaster__GetEnableEntityList(v4, 13, 1, 0, 0),
        !EnableEntityList)
    || (v6 = Instance) == 0
    || (v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor_58337376(
          v7,
          LODWORD(v6->max_length) + LODWORD(EnableEntityList->max_length),
          (const MethodInfo_37A2860 *)Method_System_Collections_Generic_List_EventEntity___ctor___78048760),
        !v7) )
  {
    sub_1C372B4(Instance);
  }
  System_Collections_Generic_List_object___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)EnableEntityList,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)v6,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  v8 = (struct EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v7,
                                     (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
  this->fields.combineEventList = v8;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.combineEventList, (int32_t)v8, v9, v10);
}


System_Collections_Generic_List_int__o *CombineInitData__getEventIdList(
        CombineInitData_o *this,
        const MethodInfo *method)
{
  return this->fields.eventIdList;
}