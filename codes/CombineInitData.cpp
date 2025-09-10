void CombineInitData___ctor(CombineInitData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2B0AB & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C2B0AB = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.eventIdList = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventIdList, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


EventCampaignEntity_o *CombineInitData__getCombineEventData(
        CombineInitData_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int MasterName_k__BackingField; // w8
  __int64 v9; // x9
  EventCampaignEntity_o *v10; // x21
  __int64 v12; // x8
  _QWORD *v13; // x9
  __int64 MasterName_k__BackingField_low; // x10

  if ( (byte_4C2B0AA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__getEntitys__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    byte_4C2B0AA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !Master_object )
    goto LABEL_20;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__object___getEntitys(
                                                                  Master_object,
                                                                  (const MethodInfo_338BAD4 *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__getEntitys__);
  if ( !Master_object )
    return 0;
  MasterName_k__BackingField = (int)Master_object->fields._MasterName_k__BackingField;
  if ( MasterName_k__BackingField < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v9 >= MasterName_k__BackingField )
      sub_1C2D6F4(Master_object, v6, v7);
    v10 = (EventCampaignEntity_o *)*((_QWORD *)&Master_object->fields.revision + v9);
    if ( !v10 )
      goto LABEL_20;
    if ( v10->fields.eventId == eventId )
      break;
    if ( (int)++v9 >= MasterName_k__BackingField )
      return 0;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.eventIdList;
  if ( !Master_object
    || (v12 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField,
        v13 = Method_System_Collections_Generic_List_int__Add__,
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField),
        !v12) )
  {
LABEL_20:
    sub_1C2D6EC(Master_object, v6);
  }
  MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v12 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)Master_object,
      eventId,
      *(const MethodInfo_376CB60 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    *(_DWORD *)(v12 + 4 * MasterName_k__BackingField_low + 32) = eventId;
  }
  return v10;
}


EventEntity_array *CombineInitData__getCombineEventList(CombineInitData_o *this, const MethodInfo *method)
{
  return this->fields.combineEventList;
}


void CombineInitData__getEventData(CombineInitData_o *this, const MethodInfo *method)
{
  EventEntity_array *Instance; // x0
  __int64 v4; // x1
  EventMaster_o *v5; // x21
  EventEntity_array *EnableEntityList; // x20
  EventEntity_array *v7; // x21
  System_Collections_Generic_List_object__o *v8; // x22
  struct EventEntity_array *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C2B0A9 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventEntity__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventEntity___ctor___77937720);
    sub_1C2D490(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2B0A9 = 1;
  }
  Instance = (EventEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___)) == 0
    || (v5 = (EventMaster_o *)Instance,
        EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 5, 1, 0, 0),
        Instance = EventMaster__GetEnableEntityList(v5, 13, 1, 0, 0),
        !EnableEntityList)
    || (v7 = Instance) == 0
    || (v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor_58233792(
          v8,
          LODWORD(v7->max_length) + LODWORD(EnableEntityList->max_length),
          (const MethodInfo_37893C0 *)Method_System_Collections_Generic_List_EventEntity___ctor___77937720),
        !v8) )
  {
    sub_1C2D6EC(Instance, v4);
  }
  System_Collections_Generic_List_object___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)EnableEntityList,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)v7,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  v9 = (struct EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v8,
                                     (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
  this->fields.combineEventList = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.combineEventList, (int32_t)v9, v10, v11);
}


System_Collections_Generic_List_int__o *CombineInitData__getEventIdList(
        CombineInitData_o *this,
        const MethodInfo *method)
{
  return this->fields.eventIdList;
}