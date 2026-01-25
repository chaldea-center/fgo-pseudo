void EventRandomMissionClearManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct EventRandomMissionClearManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *v8; // x19
  struct EventRandomMissionClearManager_StaticFields *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CEE1FF & 1) == 0 )
  {
    sub_1C7BAE8(&EventRandomMissionClearManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClearRandomMissionInfo___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ClearRandomMissionInfo__TypeInfo);
    sub_1C7BAE8(&StringLiteral_6690/*"Fgo_20211029"*/);
    byte_4CEE1FF = 1;
  }
  EventRandomMissionClearManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6690/*"Fgo_20211029"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)EventRandomMissionClearManager_TypeInfo->static_fields,
    StringLiteral_6690/*"Fgo_20211029"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  static_fields = EventRandomMissionClearManager_TypeInfo->static_fields;
  static_fields->LIST_MAX = 100;
  *(_WORD *)&static_fields->isModify = 0;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ClearRandomMissionInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo___ctor__);
  v9 = EventRandomMissionClearManager_TypeInfo->static_fields;
  v9->clearRandomMissionList = (struct System_Collections_Generic_List_ClearRandomMissionInfo__o *)v8;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v9->clearRandomMissionList, (int32_t)v8, v10, v11, v12, v13, v14, v15);
}


void EventRandomMissionClearManager___ctor(EventRandomMissionClearManager_o *this, const MethodInfo *method)
{
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0);
}


void EventRandomMissionClearManager__AddClearRandomMissionInfo(
        ClearRandomMissionInfo_o *info,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  EventRandomMissionClearManager_c *v9; // x0
  EventRandomMissionClearManager_c *clearRandomMissionList; // x0
  const char *name; // x8
  _QWORD *v12; // x9
  __int64 namespaze_low; // x10
  const char *v14; // x8
  struct EventRandomMissionClearManager_StaticFields *static_fields; // x9
  System_Collections_Generic_List_object__o *v16; // x8

  if ( (byte_4CEE1FB & 1) == 0 )
  {
    sub_1C7BAE8(&EventRandomMissionClearManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__RemoveAt__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__);
    byte_4CEE1FB = 1;
  }
  v9 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v9 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = (EventRandomMissionClearManager_c *)v9->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    goto LABEL_18;
  name = clearRandomMissionList->_1.name;
  v12 = Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__;
  ++HIDWORD(clearRandomMissionList->_1.namespaze);
  if ( !name )
    goto LABEL_18;
  namespaze_low = SLODWORD(clearRandomMissionList->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)clearRandomMissionList,
      (Il2CppObject *)info,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &name[8 * namespaze_low];
    LODWORD(clearRandomMissionList->_1.namespaze) = namespaze_low + 1;
    *((_QWORD *)v14 + 4) = info;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v14 + 32), (int32_t)info, v2, v3, v4, v5, v6, v7);
  }
  clearRandomMissionList = EventRandomMissionClearManager_TypeInfo;
  static_fields = EventRandomMissionClearManager_TypeInfo->static_fields;
  v16 = (System_Collections_Generic_List_object__o *)static_fields->clearRandomMissionList;
  if ( !v16 )
    goto LABEL_18;
  if ( v16->fields._size <= static_fields->LIST_MAX )
    goto LABEL_15;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v16 = (System_Collections_Generic_List_object__o *)EventRandomMissionClearManager_TypeInfo->static_fields->clearRandomMissionList;
    if ( !v16 )
LABEL_18:
      sub_1C7BD40(clearRandomMissionList, method);
  }
  System_Collections_Generic_List_object___RemoveAt(
    v16,
    0,
    (const MethodInfo_38405D0 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__RemoveAt__);
  clearRandomMissionList = EventRandomMissionClearManager_TypeInfo;
LABEL_15:
  if ( !clearRandomMissionList->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clearRandomMissionList);
    clearRandomMissionList = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList->static_fields->isModify = 1;
}


void EventRandomMissionClearManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  EventRandomMissionClearManager_c *v2; // x0
  struct System_Collections_Generic_List_ClearRandomMissionInfo__o *clearRandomMissionList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4CEE1FA & 1) == 0 )
  {
    sub_1C7BAE8(&EventRandomMissionClearManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__);
    byte_4CEE1FA = 1;
  }
  v2 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v2 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = v2->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    goto LABEL_14;
  if ( clearRandomMissionList->fields._size < 1 )
    goto LABEL_11;
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = EventRandomMissionClearManager_TypeInfo;
    clearRandomMissionList = EventRandomMissionClearManager_TypeInfo->static_fields->clearRandomMissionList;
    if ( !clearRandomMissionList )
LABEL_14:
      sub_1C7BD40(v2, v1);
  }
  size = clearRandomMissionList->fields._size;
  v5 = clearRandomMissionList->fields._version + 1;
  clearRandomMissionList->fields._size = 0;
  clearRandomMissionList->fields._version = v5;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)clearRandomMissionList->fields._items, 0, size, 0);
    v2 = EventRandomMissionClearManager_TypeInfo;
  }
LABEL_11:
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = EventRandomMissionClearManager_TypeInfo;
  }
  *(_WORD *)&v2->static_fields->isModify = 1;
}


void EventRandomMissionClearManager__DeleteSaveData(const MethodInfo *method)
{
  EventRandomMissionClearManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4CEE1F8 & 1) == 0 )
  {
    sub_1C7BAE8(&EventRandomMissionClearManager_TypeInfo);
    byte_4CEE1F8 = 1;
  }
  v1 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  SaveFileName = EventRandomMissionClearManager__GetSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
}


ClearRandomMissionInfo_array *EventRandomMissionClearManager__GetClearRandomMissionInfos(const MethodInfo *method)
{
  __int64 v1; // x1
  EventRandomMissionClearManager_c *v2; // x0
  System_Collections_Generic_List_object__o *clearRandomMissionList; // x0

  if ( (byte_4CEE1FC & 1) == 0 )
  {
    sub_1C7BAE8(&EventRandomMissionClearManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__ToArray__);
    byte_4CEE1FC = 1;
  }
  v2 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v2 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = (System_Collections_Generic_List_object__o *)v2->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    sub_1C7BD40(0, v1);
  return (ClearRandomMissionInfo_array *)System_Collections_Generic_List_object___ToArray(
                                           clearRandomMissionList,
                                           (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__ToArray__);
}


System_String_o *EventRandomMissionClearManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4CEE1F7 & 1) == 0 )
  {
    sub_1C7BAE8(&AndroidUtil_TypeInfo);
    sub_1C7BAE8(&DatFileName_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1042/*"/"*/);
    byte_4CEE1F7 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(36, 0);
  return System_String__Concat_64215176(DatFileSavePath, (System_String_o *)StringLiteral_1042/*"/"*/, FileName, 0);
}


void EventRandomMissionClearManager__Initialize(const MethodInfo *method)
{
  EventRandomMissionClearManager_c *v1; // x0

  if ( (byte_4CEE1F9 & 1) == 0 )
  {
    sub_1C7BAE8(&EventRandomMissionClearManager_TypeInfo);
    byte_4CEE1F9 = 1;
  }
  v1 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  EventRandomMissionClearManager__ReadData((const MethodInfo *)v1);
}


bool EventRandomMissionClearManager__ReadData(const MethodInfo *method)
{
  EventRandomMissionClearManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  EventRandomMissionClearManager_c *v4; // x0
  System_String_o *SaveFileName; // x19
  EventRandomMissionClearManager_c *v6; // x0
  System_IO_Stream_o *v7; // x19
  System_IO_BinaryReader_o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x21
  EventRandomMissionClearManager_c *v12; // x0
  int v13; // w22
  char v14; // w21
  EventRandomMissionClearManager_c *v15; // x0
  int v16; // w21
  int v17; // w23
  __int64 v18; // x24
  __int64 v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  EventRandomMissionClearManager_c *v35; // x0
  System_Collections_Generic_List_object__o *clearRandomMissionList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v42; // x9
  int32_t *p_offset; // x10
  __int64 v44; // x0
  System_IO_Stream_c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0
  EventRandomMissionClearManager_c *v49; // x0

  if ( (byte_4CEE1FD & 1) == 0 )
  {
    sub_1C7BAE8(&System_IO_BinaryReader_TypeInfo);
    sub_1C7BAE8(&ClearRandomMissionInfo_TypeInfo);
    sub_1C7BAE8(&EventRandomMissionClearManager_TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__);
    sub_1C7BAE8(&ManagerConfig_TypeInfo);
    byte_4CEE1FD = 1;
  }
  v1 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v1 = EventRandomMissionClearManager_TypeInfo;
  }
  v1->static_fields->isModify = 0;
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 1;
  v4 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  SaveFileName = EventRandomMissionClearManager__GetSaveFileName((const MethodInfo *)v4);
  if ( !System_IO_File__Exists(SaveFileName, 0) )
  {
    v49 = EventRandomMissionClearManager_TypeInfo;
    if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    EventRandomMissionClearManager__ClearSaveDataList((const MethodInfo *)v49);
    return 0;
  }
  v6 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  EventRandomMissionClearManager__ClearSaveDataList((const MethodInfo *)v6);
  v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
  v8 = (System_IO_BinaryReader_o *)sub_1C7BD34(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v8, v7, 0);
  if ( !v8 )
    sub_1C7BD40(v9, v10);
  v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._22_ReadString.methodPtr)(
                             v8,
                             v8->klass->vtable._22_ReadString.method);
  v12 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v12 = EventRandomMissionClearManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v12->static_fields->SAVE_DATA_VERSION, v11, 0) )
  {
    v13 = 5;
  }
  else
  {
    v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._9_ReadBoolean.methodPtr)(
            v8,
            v8->klass->vtable._9_ReadBoolean.method);
    v15 = EventRandomMissionClearManager_TypeInfo;
    if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      v15 = EventRandomMissionClearManager_TypeInfo;
    }
    v15->static_fields->isContinueDevice = v14 & 1;
    v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
            v8,
            v8->klass->vtable._15_ReadInt32.method);
    if ( v16 >= 1 )
    {
      do
      {
        v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                v8,
                v8->klass->vtable._15_ReadInt32.method);
        v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._22_ReadString.methodPtr)(
                v8,
                v8->klass->vtable._22_ReadString.method);
        v19 = sub_1C7BD34(ClearRandomMissionInfo_TypeInfo);
        ClearRandomMissionInfo___ctor((ClearRandomMissionInfo_o *)v19, 0);
        if ( !v19 )
          sub_1C7BD40(v20, v21);
        *(_QWORD *)(v19 + 24) = v18;
        *(_DWORD *)(v19 + 16) = v17;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v19 + 24), v18, v22, v23, v24, v25, v26, v27);
        v35 = EventRandomMissionClearManager_TypeInfo;
        if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
          v35 = EventRandomMissionClearManager_TypeInfo;
        }
        clearRandomMissionList = (System_Collections_Generic_List_object__o *)v35->static_fields->clearRandomMissionList;
        if ( !clearRandomMissionList )
          sub_1C7BD40(0, v28);
        items = clearRandomMissionList->fields._items;
        v38 = Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__;
        ++clearRandomMissionList->fields._version;
        if ( !items )
          sub_1C7BD40(clearRandomMissionList, v28);
        size = clearRandomMissionList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            clearRandomMissionList,
            (Il2CppObject *)v19,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &items->obj.klass + size;
          clearRandomMissionList->fields._size = size + 1;
          v40[4] = (Il2CppClass *)v19;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v40 + 4), v19, v29, v30, v31, v32, v33, v34);
        }
        --v16;
      }
      while ( v16 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._6_Close.methodPtr)(
      v8,
      v8->klass->vtable._6_Close.method);
    v13 = 8;
  }
  klass = v8->klass;
  v42 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      p_offset += 4;
      if ( !v42 )
        goto LABEL_36;
    }
    v44 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_36:
    v44 = sub_1C51E70(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v44)(v8, *(_QWORD *)(v44 + 8));
  if ( (v13 | 8) == 8 )
  {
    v13 = 9;
    if ( !v7 )
      return v13 == 9;
  }
  else if ( !v7 )
  {
    return v13 == 9;
  }
  v45 = v7->klass;
  v46 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_46;
    }
    v48 = (__int64)&v45->vtable + 16 * *v47;
  }
  else
  {
LABEL_46:
    v48 = sub_1C51E70(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v48)(v7, *(_QWORD *)(v48 + 8));
  return v13 == 9;
}


bool EventRandomMissionClearManager__WriteData(const MethodInfo *method)
{
  EventRandomMissionClearManager_c *v1; // x0
  struct EventRandomMissionClearManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v3; // x0
  EventRandomMissionClearManager_c *v5; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v7; // x19
  System_IO_BinaryWriter_o *v8; // x20
  __int64 v9; // x1
  EventRandomMissionClearManager_c *v10; // x0
  struct EventRandomMissionClearManager_StaticFields *v11; // x8
  struct System_Collections_Generic_List_ClearRandomMissionInfo__o *clearRandomMissionList; // x9
  int size; // w21
  __int64 v14; // x1
  int32_t i; // w22
  EventRandomMissionClearManager_c *v16; // x0
  System_Collections_Generic_List_object__o *v17; // x0
  Il2CppObject *Item; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x23
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  System_IO_Stream_c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0

  if ( (byte_4CEE1FE & 1) == 0 )
  {
    sub_1C7BAE8(&System_IO_BinaryWriter_TypeInfo);
    sub_1C7BAE8(&EventRandomMissionClearManager_TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Item__);
    sub_1C7BAE8(&ManagerConfig_TypeInfo);
    byte_4CEE1FE = 1;
  }
  v1 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v1 = EventRandomMissionClearManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  if ( !static_fields->isModify )
    return 0;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    static_fields = EventRandomMissionClearManager_TypeInfo->static_fields;
  }
  static_fields->isModify = 0;
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 0;
  v5 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  SaveFileName = EventRandomMissionClearManager__GetSaveFileName((const MethodInfo *)v5);
  v7 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
  v8 = (System_IO_BinaryWriter_o *)sub_1C7BD34(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_65086240(v8, v7, 0);
  v10 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v10 = EventRandomMissionClearManager_TypeInfo;
  }
  v11 = v10->static_fields;
  clearRandomMissionList = v11->clearRandomMissionList;
  if ( !clearRandomMissionList )
    sub_1C7BD40(v10, v9);
  if ( !v8 )
    sub_1C7BD40(v10, v9);
  size = clearRandomMissionList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *))v8->klass->vtable._22_Write.methodPtr)(
    v8,
    v11->SAVE_DATA_VERSION,
    v8->klass->vtable._22_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, const MethodInfo *))v8->klass->vtable._8_Write.methodPtr)(
    v8,
    EventRandomMissionClearManager_TypeInfo->static_fields->isContinueDevice,
    v8->klass->vtable._8_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
    v8,
    (unsigned int)size,
    v8->klass->vtable._17_Write.method);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v16 = EventRandomMissionClearManager_TypeInfo;
      if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
        v16 = EventRandomMissionClearManager_TypeInfo;
      }
      v17 = (System_Collections_Generic_List_object__o *)v16->static_fields->clearRandomMissionList;
      if ( !v17 )
        sub_1C7BD40(0, v14);
      Item = System_Collections_Generic_List_object___get_Item(
               v17,
               i,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Item__);
      v20 = Item;
      if ( !Item )
        sub_1C7BD40(0, v19);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        LODWORD(Item[1].klass),
        v8->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *, const MethodInfo *))v8->klass->vtable._22_Write.methodPtr)(
        v8,
        v20[1].monitor,
        v8->klass->vtable._22_Write.method);
    }
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, const MethodInfo *))v8->klass->vtable._5_Close.methodPtr)(
    v8,
    v8->klass->vtable._5_Close.method);
  klass = v8->klass;
  v22 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_29;
    }
    v24 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_29:
    v24 = sub_1C51E70(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v24)(v8, *(_QWORD *)(v24 + 8));
  if ( v7 )
  {
    v25 = v7->klass;
    v26 = *(unsigned __int16 *)&v7->klass->_2.rank;
    if ( *(_WORD *)&v7->klass->_2.rank )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_36;
      }
      v28 = (__int64)&v25->vtable + 16 * *v27;
    }
    else
    {
LABEL_36:
      v28 = sub_1C51E70(v7, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v28)(v7, *(_QWORD *)(v28 + 8));
  }
  return 1;
}