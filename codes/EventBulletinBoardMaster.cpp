void EventBulletinBoardMaster___ctor(EventBulletinBoardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D308CA & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int___ctor__);
    byte_4D308CA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    242,
    (const MethodInfo_3460CFC *)Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int___ctor__);
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4D308CB & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventBulletinBoardEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_EventBulletinBoardEntity__get_Item__);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventBulletinBoardReleaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo);
    byte_4D308CB = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventBulletinBoardReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventBulletinBoardReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_23;
  v8 = Master_object;
  Master_object = (EventBulletinBoardReleaseMaster_o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                         (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
                                                         (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_EventBulletinBoardEntity__get_Count__);
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
                                                             (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_EventBulletinBoardEntity__get_Item__);
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
          v20 = Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v12,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v12;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)v12, v13, v14, v15, v16, v17, v18);
          }
        }
      }
      if ( v9 == ++v10 )
        goto LABEL_19;
    }
LABEL_23:
    sub_1C93D2C(Master_object, v7);
  }
LABEL_19:
  if ( !v5 )
    goto LABEL_23;
  if ( v5->fields._size <= 0 )
    return 0;
  else
    return (System_Collections_Generic_List_EventBulletinBoardEntity__o *)v5;
}