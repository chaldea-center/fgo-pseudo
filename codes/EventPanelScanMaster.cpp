void __fastcall EventPanelScanMaster___ctor(EventPanelScanMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B1B9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int___ctor__);
    byte_4A5B1B9 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    344,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int___ctor__);
}


EventPanelScanEntity_array *__fastcall EventPanelScanMaster__GetListByEventId(
        EventPanelScanMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4A5B1BA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventPanelScanEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPanelScanEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPanelScanEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPanelScanEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventPanelScanEntity__TypeInfo);
    byte_4A5B1BA = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventPanelScanEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventPanelScanEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        methodPtr_low = LOBYTE(EventPanelScanEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventPanelScanEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventPanelScanEntity_TypeInfo
          && HIDWORD(list->fields.items) == eventId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v14 = Method_System_Collections_Generic_List_EventPanelScanEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v16 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v16[4] = (Il2CppClass *)v6;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v6, v10, v11);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(list, v6);
  }
LABEL_17:
  if ( !v5 )
    goto LABEL_19;
  return (EventPanelScanEntity_array *)System_Collections_Generic_List_object___ToArray(
                                         v5,
                                         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventPanelScanEntity__ToArray__);
}


bool __fastcall EventPanelScanMaster__IsSatisfyReleaseCondition(
        EventPanelScanMaster_o *this,
        EventPanelScanEntity_o *entity,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 commonReleaseId; // x1

  if ( (byte_4A5B1BB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B1BB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !entity )
    goto LABEL_9;
  commonReleaseId = (unsigned int)entity->fields.commonReleaseId;
  if ( (int)commonReleaseId >= 1 )
  {
    if ( Instance )
      return CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, commonReleaseId, 0LL, 0, 0LL);
LABEL_9:
    sub_1B8880C(Instance, commonReleaseId);
  }
  return 1;
}