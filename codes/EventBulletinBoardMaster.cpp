void EventBulletinBoardMaster___ctor(EventBulletinBoardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C271A2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int___ctor__);
    byte_4C271A2 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    242,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int___ctor__);
}


System_Collections_Generic_List_EventBulletinBoardEntity__o *EventBulletinBoardMaster__GetAvailableEntityList(
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4C271A3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventBulletinBoardEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventBulletinBoardEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMaster_EventBulletinBoardReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo);
    byte_4C271A3 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventBulletinBoardReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventBulletinBoardReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_23;
  v8 = Master_object;
  Master_object = (EventBulletinBoardReleaseMaster_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                         (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                                         (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventBulletinBoardEntity__get_Count__);
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
                                                             (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventBulletinBoardEntity__get_Item__);
      if ( !Master_object )
        break;
      v12 = (Il2CppObject *)Master_object;
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
          v16 = Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v12,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v12;
            sub_1C2D434((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v12, v13, v14);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_19;
    }
LABEL_23:
    sub_1C2D6EC(Master_object, v7);
  }
LABEL_19:
  if ( !v5 )
    goto LABEL_23;
  if ( v5->fields._size <= 0 )
    return 0;
  else
    return (System_Collections_Generic_List_EventBulletinBoardEntity__o *)v5;
}


System_Collections_Generic_List_string__o *EventBulletinBoardMaster__GetAvailableMessages(
        EventBulletinBoardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  void *Instance; // x0
  Il2CppObject *v7; // x1
  EventBulletinBoardReleaseMaster_o *v8; // x22
  int32_t Count; // w0
  int32_t v10; // w23
  char v11; // w28
  int32_t i; // w24
  const MethodInfo *v13; // x2
  void *v14; // x25
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4C271A4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventBulletinBoardEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_EventBulletinBoardEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventBulletinBoardReleaseMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C271A4 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventBulletinBoardReleaseMaster___),
        !this->fields.list) )
  {
LABEL_23:
    sub_1C2D6EC(Instance, v7);
  }
  v8 = (EventBulletinBoardReleaseMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_EventBulletinBoardEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v10 = Count;
  v11 = 0;
  for ( i = 0; i != v10; ++i )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_23;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 i,
                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_EventBulletinBoardEntity__get_Item__);
    if ( !Instance )
      goto LABEL_23;
    v14 = Instance;
    if ( *((_DWORD *)Instance + 5) == eventId )
    {
      if ( !v8 )
        goto LABEL_23;
      Instance = (void *)EventBulletinBoardReleaseMaster__IsOpen(v8, *((_DWORD *)Instance + 4), v13);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v5 )
          goto LABEL_23;
        v7 = (Il2CppObject *)*((_QWORD *)v14 + 3);
        items = v5->fields._items;
        v18 = Method_System_Collections_Generic_List_string__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_23;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v7,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v7;
          sub_1C2D434((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v7, v15, v16);
        }
      }
      v11 = 1;
    }
  }
  if ( (v11 & 1) != 0 )
    return (System_Collections_Generic_List_string__o *)v5;
  else
    return 0;
}