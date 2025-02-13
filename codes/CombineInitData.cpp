void __fastcall CombineInitData___ctor(CombineInitData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDFDE4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDFDE4 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.eventIdList = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.eventIdList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


EventCampaignEntity_o *__fastcall CombineInitData__getCombineEventData(
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

  if ( (byte_4BDFDE3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__getEntitys__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    byte_4BDFDE3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  if ( !Master_object )
    goto LABEL_20;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__object___getEntitys(
                                                                  Master_object,
                                                                  (const MethodInfo_325FB04 *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__getEntitys__);
  if ( !Master_object )
    return 0LL;
  MasterName_k__BackingField = (int)Master_object->fields._MasterName_k__BackingField;
  if ( MasterName_k__BackingField < 1 )
    return 0LL;
  v8 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v8 >= MasterName_k__BackingField )
      sub_1C2209C(Master_object, v6);
    v9 = (EventCampaignEntity_o *)*((_QWORD *)&Master_object->fields.revision + v8);
    if ( !v9 )
      goto LABEL_20;
    if ( v9->fields.eventId == eventId )
      break;
    if ( (int)++v8 >= MasterName_k__BackingField )
      return 0LL;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.eventIdList;
  if ( !Master_object
    || (v11 = *(_QWORD *)&Master_object->fields._MasterKind_k__BackingField,
        v12 = Method_System_Collections_Generic_List_int__Add__,
        ++HIDWORD(Master_object->fields._MasterName_k__BackingField),
        !v11) )
  {
LABEL_20:
    sub_1C22094(Master_object, v6);
  }
  MasterName_k__BackingField_low = SLODWORD(Master_object->fields._MasterName_k__BackingField);
  if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v11 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)Master_object,
      eventId,
      *(const MethodInfo_3632090 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(Master_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
    *(_DWORD *)(v11 + 4 * MasterName_k__BackingField_low + 32) = eventId;
  }
  return v9;
}


EventEntity_array *__fastcall CombineInitData__getCombineEventList(CombineInitData_o *this, const MethodInfo *method)
{
  return this->fields.combineEventList;
}


void __fastcall CombineInitData__getEventData(CombineInitData_o *this, const MethodInfo *method)
{
  EventEntity_array *Instance; // x0
  __int64 v4; // x1
  EventMaster_o *v5; // x21
  EventEntity_array *EnableEntityList; // x20
  EventEntity_array *v7; // x21
  System_Collections_Generic_List_object__o *v8; // x22
  struct EventEntity_array *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BDFDE2 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventEntity__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventEntity___ctor___77569616);
    sub_1C21E38(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDFDE2 = 1;
  }
  Instance = (EventEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (v5 = (EventMaster_o *)Instance,
        EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 5, 1, 0, 0LL),
        Instance = EventMaster__GetEnableEntityList(v5, 13, 1, 0, 0LL),
        !EnableEntityList)
    || (v7 = Instance) == 0LL
    || (v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor_56944880(
          v8,
          v7->max_length + EnableEntityList->max_length,
          (const MethodInfo_364E8F0 *)Method_System_Collections_Generic_List_EventEntity___ctor___77569616),
        !v8) )
  {
    sub_1C22094(Instance, v4);
  }
  System_Collections_Generic_List_object___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)EnableEntityList,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)v7,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  v9 = (struct EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v8,
                                     (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
  this->fields.combineEventList = v9;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.combineEventList, (int64_t)v9, v10, v11, v12, v13, v14, v15);
}


System_Collections_Generic_List_int__o *__fastcall CombineInitData__getEventIdList(
        CombineInitData_o *this,
        const MethodInfo *method)
{
  return this->fields.eventIdList;
}