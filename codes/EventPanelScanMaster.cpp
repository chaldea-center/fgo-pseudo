void __fastcall EventPanelScanMaster___ctor(EventPanelScanMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66C11 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int___ctor__, method);
    byte_4B66C11 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    348,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventPanelScanEntity_array *__fastcall EventPanelScanMaster__GetListByEventId(
        EventPanelScanMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  int64_t v12; // x1
  int64_t list; // x0
  int v14; // w22
  int32_t v15; // w23
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4B66C12 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&EventPanelScanEntity_TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventPanelScanEntity__Add__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventPanelScanEntity__ToArray__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventPanelScanEntity___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_EventPanelScanEntity__TypeInfo, v10);
    byte_4B66C12 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventPanelScanEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventPanelScanEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = list;
    v15 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v15,
                        (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = list;
        methodPtr_low = LOBYTE(EventPanelScanEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(EventPanelScanEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventPanelScanEntity_TypeInfo
          && *(_DWORD *)(list + 20) == eventId )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v24 = Method_System_Collections_Generic_List_EventPanelScanEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)list,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v12;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 4), v12, v16, v17, v18, v19, v20, v21);
          }
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BE4D28(list, v12);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_19;
  return (EventPanelScanEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v11,
                                         (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventPanelScanEntity__ToArray__);
}


bool __fastcall EventPanelScanMaster__IsSatisfyReleaseCondition(
        EventPanelScanMaster_o *this,
        EventPanelScanEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 commonReleaseId; // x1

  if ( (byte_4B66C13 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, entity);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B66C13 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !entity )
    goto LABEL_9;
  commonReleaseId = (unsigned int)entity->fields.commonReleaseId;
  if ( (int)commonReleaseId >= 1 )
  {
    if ( Instance )
      return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, commonReleaseId, 0LL, 0, 0LL);
LABEL_9:
    sub_1BE4D28(Instance, commonReleaseId);
  }
  return 1;
}