void __fastcall EventPanelScanMaster___ctor(EventPanelScanMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C57A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int___ctor__, method);
    byte_4B1C57A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    350,
    (const MethodInfo_32C5ADC *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int___ctor__);
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
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v13; // w22
  int32_t v14; // w23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4B1C57B & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_EventPanelScanEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_EventPanelScanEntity__get_Item__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventPanelScanEntity__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventPanelScanEntity__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventPanelScanEntity___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_EventPanelScanEntity__TypeInfo, v9);
    byte_4B1C57B = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventPanelScanEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventPanelScanEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_EventPanelScanEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = (int)list;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_EventPanelScanEntity__get_Item__);
      if ( list )
      {
        v11 = list;
        if ( HIDWORD(list->fields.items) == eventId )
        {
          if ( !v10 )
            break;
          items = v10->fields._items;
          v18 = Method_System_Collections_Generic_List_EventPanelScanEntity__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)list,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v11;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v11, v15, v16);
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1BCB254(list, v11);
  }
LABEL_15:
  if ( !v10 )
    goto LABEL_17;
  return (EventPanelScanEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v10,
                                         (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_EventPanelScanEntity__ToArray__);
}


bool __fastcall EventPanelScanMaster__IsSatisfyReleaseCondition(
        EventPanelScanMaster_o *this,
        EventPanelScanEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 commonReleaseId; // x1

  if ( (byte_4B1C57C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, entity);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B1C57C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !entity )
    goto LABEL_9;
  commonReleaseId = (unsigned int)entity->fields.commonReleaseId;
  if ( (int)commonReleaseId >= 1 )
  {
    if ( Instance )
      return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, commonReleaseId, 0LL, 0, 0LL);
LABEL_9:
    sub_1BCB254(Instance, commonReleaseId);
  }
  return 1;
}