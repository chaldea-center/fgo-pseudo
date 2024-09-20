void __fastcall EventBulletinBoardMaster___ctor(EventBulletinBoardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B053 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int___ctor__);
    byte_4A5B053 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    236,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int___ctor__);
}


System_Collections_Generic_List_EventBulletinBoardEntity__o *__fastcall EventBulletinBoardMaster__GetAvailableEntityList(
        EventBulletinBoardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  EventBulletinBoardReleaseMaster_o *Master_object; // x0
  __int64 v7; // x1
  EventBulletinBoardReleaseMaster_o *v8; // x22
  int v9; // w23
  int32_t v10; // w24
  const MethodInfo *v11; // x2
  Il2CppObject *v12; // x25
  __int64 methodPtr_low; // x10
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4A5B054 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMaster_EventBulletinBoardReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&EventBulletinBoardEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo);
    byte_4A5B054 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventBulletinBoardReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventBulletinBoardReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_25;
  v8 = Master_object;
  Master_object = (EventBulletinBoardReleaseMaster_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                         (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                                         (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Master_object >= 1 )
  {
    v9 = (int)Master_object;
    v10 = 0;
    while ( 1 )
    {
      Master_object = (EventBulletinBoardReleaseMaster_o *)this->fields.list;
      if ( !Master_object )
        break;
      Master_object = (EventBulletinBoardReleaseMaster_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                             (System_Collections_ObjectModel_Collection_T__o *)Master_object,
                                                             v10,
                                                             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Master_object )
        break;
      v12 = (Il2CppObject *)Master_object;
      methodPtr_low = LOBYTE(EventBulletinBoardEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Master_object->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventBulletinBoardEntity_c *)Master_object->klass->_2.typeHierarchy[methodPtr_low - 1] != EventBulletinBoardEntity_TypeInfo )
      {
        break;
      }
      if ( *(&Master_object->fields._MasterKind_k__BackingField + 1) == eventId )
      {
        if ( !v8 )
          break;
        Master_object = (EventBulletinBoardReleaseMaster_o *)EventBulletinBoardReleaseMaster__IsOpen(
                                                               v8,
                                                               Master_object->fields._MasterKind_k__BackingField,
                                                               v11);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v17 = Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v12,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v12;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v12, v14, v15);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_21;
    }
LABEL_25:
    sub_1B8880C(Master_object, v7);
  }
LABEL_21:
  if ( !v5 )
    goto LABEL_25;
  if ( v5->fields._size <= 0 )
    return 0LL;
  else
    return (System_Collections_Generic_List_EventBulletinBoardEntity__o *)v5;
}


System_Collections_Generic_List_string__o *__fastcall EventBulletinBoardMaster__GetAvailableMessages(
        EventBulletinBoardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  DataManager_o *Instance; // x0
  Il2CppObject *m_CancellationTokenSource; // x1
  EventBulletinBoardReleaseMaster_o *v8; // x22
  int32_t Count; // w0
  int32_t v10; // w23
  char v11; // w29
  int32_t i; // w24
  const MethodInfo *v13; // x2
  DataManager_o *v14; // x25
  __int64 methodPtr_low; // x10
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4A5B055 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventBulletinBoardReleaseMaster___);
    sub_1B885B0(&EventBulletinBoardEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B055 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventBulletinBoardReleaseMaster___),
        !this->fields.list) )
  {
LABEL_25:
    sub_1B8880C(Instance, m_CancellationTokenSource);
  }
  v8 = (EventBulletinBoardReleaseMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v10 = Count;
  v11 = 0;
  for ( i = 0; i != v10; ++i )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_25;
    Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                  (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                  i,
                                  (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_25;
    v14 = Instance;
    methodPtr_low = LOBYTE(EventBulletinBoardEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (EventBulletinBoardEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != EventBulletinBoardEntity_TypeInfo )
    {
      goto LABEL_25;
    }
    if ( *((_DWORD *)&Instance->fields.UnityEngine_Behaviour_Fields + 1) == eventId )
    {
      if ( !v8 )
        goto LABEL_25;
      Instance = (DataManager_o *)EventBulletinBoardReleaseMaster__IsOpen(v8, Instance->fields.m_CachedPtr, v13);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v5 )
          goto LABEL_25;
        m_CancellationTokenSource = (Il2CppObject *)v14->fields.m_CancellationTokenSource;
        items = v5->fields._items;
        v19 = Method_System_Collections_Generic_List_string__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_25;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            m_CancellationTokenSource,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v21[4] = (Il2CppClass *)m_CancellationTokenSource;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)m_CancellationTokenSource, v16, v17);
        }
      }
      v11 = 1;
    }
  }
  if ( (v11 & 1) != 0 )
    return (System_Collections_Generic_List_string__o *)v5;
  else
    return 0LL;
}