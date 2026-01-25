void CombineInitData___ctor(CombineInitData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CF2562 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CF2562 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.eventIdList = v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.eventIdList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


EventCampaignEntity_o *CombineInitData__getCombineEventData(
        CombineInitData_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v6; // x1
  int MasterName_k__BackingField; // w8
  __int64 v8; // x9
  EventCampaignEntity_o *v9; // x21
  __int64 v11; // x8
  _QWORD *v12; // x9
  __int64 MasterName_k__BackingField_low; // x10

  if ( (byte_4CF2561 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__getEntitys__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    byte_4CF2561 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !Master_object )
    goto LABEL_20;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__object___getEntitys(
                                                                  Master_object,
                                                                  (const MethodInfo_3432038 *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__getEntitys__);
  if ( !Master_object )
    return 0;
  MasterName_k__BackingField = (int)Master_object->fields._MasterName_k__BackingField;
  if ( MasterName_k__BackingField < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v8 >= MasterName_k__BackingField )
      sub_1C7BD48(Master_object);
    v9 = (EventCampaignEntity_o *)*((_QWORD *)&Master_object->fields.revision + v8);
    if ( !v9 )
      goto LABEL_20;
    if ( v9->fields.eventId == eventId )
      break;
    if ( (int)++v8 >= MasterName_k__BackingField )
      return 0;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.eventIdList;
  if ( !Master_object
    || (v11 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField,
        v12 = Method_System_Collections_Generic_List_int__Add__,
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField),
        !v11) )
  {
LABEL_20:
    sub_1C7BD40(Master_object, v6);
  }
  MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v11 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)Master_object,
      eventId,
      *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    *(_DWORD *)(v11 + 4 * MasterName_k__BackingField_low + 32) = eventId;
  }
  return v9;
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CF2560 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventEntity__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventEntity___ctor___78735016);
    sub_1C7BAE8(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF2560 = 1;
  }
  Instance = (EventEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMaster___)) == 0
    || (v5 = (EventMaster_o *)Instance,
        EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 5, 1, 0, 0),
        Instance = EventMaster__GetEnableEntityList(v5, 13, 1, 0, 0),
        !EnableEntityList)
    || (v7 = Instance) == 0
    || (v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor_58975800(
          v8,
          LODWORD(v7->max_length) + LODWORD(EnableEntityList->max_length),
          (const MethodInfo_383E638 *)Method_System_Collections_Generic_List_EventEntity___ctor___78735016),
        !v8) )
  {
    sub_1C7BD40(Instance, v4);
  }
  System_Collections_Generic_List_object___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)EnableEntityList,
    (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)v7,
    (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  v9 = (struct EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v8,
                                     (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
  this->fields.combineEventList = v9;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.combineEventList, (int32_t)v9, v10, v11, v12, v13, v14, v15);
}


System_Collections_Generic_List_int__o *CombineInitData__getEventIdList(
        CombineInitData_o *this,
        const MethodInfo *method)
{
  return this->fields.eventIdList;
}