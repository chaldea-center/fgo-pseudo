void EventMissionCondDetailMaster___ctor(EventMissionCondDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D30A0D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int___ctor__);
    byte_4D30A0D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    140,
    (const MethodInfo_3460CFC *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int___ctor__);
}


System_Collections_Generic_List_EventMissionCondDetailEntity__o *EventMissionCondDetailMaster__GetMissionConditionDetailListFromMissionTargetId(
        EventMissionCondDetailMaster_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  EventMissionConditionMaster_o *Master_object; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppClass *klass; // x25
  const char *namespaze; // x8
  unsigned __int64 v13; // x26
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  Il2CppObject *v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D30A0E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventMissionConditionMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo);
    byte_4D30A0E = 1;
  }
  memset(&v29, 0, sizeof(v29));
  entity = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventMissionConditionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  if ( !Master_object
    || (Master_object = (EventMissionConditionMaster_o *)EventMissionConditionMaster__GetEntityListFromMissionIdAndProgressTypeAndCondType(
                                                           Master_object,
                                                           missionId,
                                                           4,
                                                           22,
                                                           v8)) == 0 )
  {
    sub_1C93D2C(Master_object, v7);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v29 = v27;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v29,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v9 )
      break;
    if ( !v29.fields._current )
      sub_1C93D2C(v9, v10);
    klass = v29.fields._current[3].klass;
    if ( klass )
    {
      namespaze = klass->_1.namespaze;
      if ( namespaze )
      {
        if ( (int)namespaze >= 1 )
        {
          v13 = 0;
          do
          {
            if ( v13 >= (unsigned int)namespaze )
              sub_1C93D34(v9);
            v9 = DataMasterBase_object__object__int___TryGetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   &entity,
                   *((_DWORD *)&klass->_1.byval_arg.data + v13),
                   (const MethodInfo_34632C0 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
            if ( v9 )
            {
              if ( !v5 )
                sub_1C93D2C(v9, v14);
              v21 = entity;
              items = v5->fields._items;
              v23 = Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__;
              ++v5->fields._version;
              if ( !items )
                sub_1C93D2C(v9, v21);
              size = v5->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v5,
                  v21,
                  *(const MethodInfo_387999C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
              }
              else
              {
                v25 = &items->obj.klass + size;
                v5->fields._size = size + 1;
                v25[4] = (Il2CppClass *)v21;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v21, v15, v16, v17, v18, v19, v20);
              }
            }
            LODWORD(namespaze) = klass->_1.namespaze;
            ++v13;
          }
          while ( (__int64)v13 < (int)namespaze );
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return (System_Collections_Generic_List_EventMissionCondDetailEntity__o *)v5;
}