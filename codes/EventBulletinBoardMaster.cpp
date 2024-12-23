void __fastcall EventBulletinBoardMaster___ctor(EventBulletinBoardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66AA6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int___ctor__, method);
    byte_4B66AA6 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    240,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventBulletinBoardEntity__o *__fastcall EventBulletinBoardMaster__GetAvailableEntityList(
        EventBulletinBoardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x21
  EventBulletinBoardReleaseMaster_o *Master_object; // x0
  __int64 v15; // x1
  EventBulletinBoardReleaseMaster_o *v16; // x22
  int v17; // w23
  int32_t v18; // w24
  const MethodInfo *v19; // x2
  Il2CppObject *v20; // x25
  __int64 methodPtr_low; // x10
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4B66AA7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventBulletinBoardReleaseMaster___, v6);
    sub_1BE4ACC(&DataManager_TypeInfo, v7);
    sub_1BE4ACC(&EventBulletinBoardEntity_TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v11);
    sub_1BE4ACC(&System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo, v12);
    byte_4B66AA7 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventBulletinBoardReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventBulletinBoardReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_25;
  v16 = Master_object;
  Master_object = (EventBulletinBoardReleaseMaster_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                         (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                                         (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Master_object >= 1 )
  {
    v17 = (int)Master_object;
    v18 = 0;
    while ( 1 )
    {
      Master_object = (EventBulletinBoardReleaseMaster_o *)this->fields.list;
      if ( !Master_object )
        break;
      Master_object = (EventBulletinBoardReleaseMaster_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                             (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                                             v18,
                                                             (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Master_object )
        break;
      v20 = (Il2CppObject *)Master_object;
      methodPtr_low = LOBYTE(EventBulletinBoardEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Master_object->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventBulletinBoardEntity_c *)Master_object->klass->_2.typeHierarchy[methodPtr_low - 1] != EventBulletinBoardEntity_TypeInfo )
      {
        break;
      }
      if ( *(&Master_object->fields._MasterKind_k__BackingField + 1) == eventId )
      {
        if ( !v16 )
          break;
        Master_object = (EventBulletinBoardReleaseMaster_o *)EventBulletinBoardReleaseMaster__IsOpen(
                                                               v16,
                                                               Master_object->fields._MasterKind_k__BackingField,
                                                               v19);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !v13 )
            break;
          items = v13->fields._items;
          v29 = Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__;
          ++v13->fields._version;
          if ( !items )
            break;
          size = v13->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              v20,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &items->obj.klass + size;
            v13->fields._size = size + 1;
            v31[4] = (Il2CppClass *)v20;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v31 + 4), (int64_t)v20, v22, v23, v24, v25, v26, v27);
          }
        }
      }
      if ( v17 == ++v18 )
        goto LABEL_21;
    }
LABEL_25:
    sub_1BE4D28(Master_object, v15);
  }
LABEL_21:
  if ( !v13 )
    goto LABEL_25;
  if ( v13->fields._size <= 0 )
    return 0LL;
  else
    return (System_Collections_Generic_List_EventBulletinBoardEntity__o *)v13;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_string__o *__fastcall EventBulletinBoardMaster__GetAvailableMessages(
        EventBulletinBoardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x21
  DataManager_o *Instance; // x0
  Il2CppObject *m_CancellationTokenSource; // x1
  EventBulletinBoardReleaseMaster_o *v15; // x22
  int32_t Count; // w0
  int32_t v17; // w23
  char v18; // w29
  int32_t i; // w24
  const MethodInfo *v20; // x2
  DataManager_o *v21; // x25
  __int64 methodPtr_low; // x10
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4B66AA8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventBulletinBoardReleaseMaster___, v6);
    sub_1BE4ACC(&EventBulletinBoardEntity_TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B66AA8 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_string___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventBulletinBoardReleaseMaster___),
        !this->fields.list) )
  {
LABEL_25:
    sub_1BE4D28(Instance, m_CancellationTokenSource);
  }
  v15 = (EventBulletinBoardReleaseMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v17 = Count;
  v18 = 0;
  for ( i = 0; i != v17; ++i )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                  i,
                                  (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_25;
    v21 = Instance;
    methodPtr_low = LOBYTE(EventBulletinBoardEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (EventBulletinBoardEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != EventBulletinBoardEntity_TypeInfo )
    {
      goto LABEL_25;
    }
    if ( *((_DWORD *)&Instance->fields.UnityEngine_Behaviour_Fields + 1) == eventId )
    {
      if ( !v15 )
        goto LABEL_25;
      Instance = (DataManager_o *)EventBulletinBoardReleaseMaster__IsOpen(v15, Instance->fields.m_CachedPtr, v20);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v12 )
          goto LABEL_25;
        m_CancellationTokenSource = (Il2CppObject *)v21->fields.m_CancellationTokenSource;
        items = v12->fields._items;
        v30 = Method_System_Collections_Generic_List_string__Add__;
        ++v12->fields._version;
        if ( !items )
          goto LABEL_25;
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            m_CancellationTokenSource,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v32[4] = (Il2CppClass *)m_CancellationTokenSource;
          sub_1BE4A70(
            (PartyOrganizationUtility_o *)(v32 + 4),
            (int64_t)m_CancellationTokenSource,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28);
        }
      }
      v18 = 1;
    }
  }
  if ( (v18 & 1) != 0 )
    return (System_Collections_Generic_List_string__o *)v12;
  else
    return 0LL;
}