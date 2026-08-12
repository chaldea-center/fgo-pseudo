void EventMissionCondDetailMaster___ctor(EventMissionCondDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970888 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int___ctor__);
    byte_5970888 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    142,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int___ctor__);
}


System_Collections_Generic_List_EventMissionCondDetailEntity__o *EventMissionCondDetailMaster__GetMissionConditionDetailListFromMissionTargetId(
        EventMissionCondDetailMaster_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  EventMissionConditionMaster_o *Master_object; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppClass *klass; // x25
  const char *namespaze; // x8
  unsigned __int64 v14; // x26
  Il2CppObject *v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+0h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_5970889 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventMissionConditionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo);
    byte_5970889 = 1;
  }
  entity = 0;
  memset(&v29, 0, sizeof(v29));
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMissionCondDetailEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMissionCondDetailEntity___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
  Master_object = (EventMissionConditionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMissionConditionMaster___);
  if ( !Master_object
    || (Master_object = (EventMissionConditionMaster_o *)EventMissionConditionMaster__GetEntityListFromMissionIdAndProgressTypeAndCondType(
                                                           Master_object,
                                                           missionId,
                                                           4,
                                                           22,
                                                           v9)) == 0 )
  {
    sub_2213CDC(Master_object, v8);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
  v29 = v27;
  v27.fields._list = 0;
  *(_QWORD *)&v27.fields._index = &v29;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    if ( !v10 )
      break;
    if ( !v29.fields._current )
      sub_2213CDC(v10, v11);
    klass = v29.fields._current[3].klass;
    if ( klass )
    {
      namespaze = klass->_1.namespaze;
      if ( (int)namespaze >= 1 )
      {
        v14 = 0;
        do
        {
          if ( v14 >= (unsigned int)namespaze )
            sub_2213CE4(v10);
          v10 = DataMasterBase_object__object__int___TryGetEntity(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                  &entity,
                  *((_DWORD *)&klass->_1.byval_arg.data + v14),
                  (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
          if ( v10 )
          {
            if ( !v5
              || (items = v5->fields._items,
                  v15 = entity,
                  v23 = Method_System_Collections_Generic_List_EventMissionCondDetailEntity__Add__,
                  ++v5->fields._version,
                  !items) )
            {
              sub_2213CDC(v10, v15);
            }
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                v15,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v15;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v15, v16, v17, v18, v19, v20, v21);
            }
          }
          LODWORD(namespaze) = klass->_1.namespaze;
          ++v14;
        }
        while ( (__int64)v14 < (int)namespaze );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  return (System_Collections_Generic_List_EventMissionCondDetailEntity__o *)v5;
}