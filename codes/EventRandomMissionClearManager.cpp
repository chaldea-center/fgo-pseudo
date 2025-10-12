void EventRandomMissionClearManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct EventRandomMissionClearManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *v4; // x19
  struct EventRandomMissionClearManager_StaticFields *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C37527 & 1) == 0 )
  {
    sub_1C32C20(&EventRandomMissionClearManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClearRandomMissionInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ClearRandomMissionInfo__TypeInfo);
    sub_1C32C20(&StringLiteral_6682/*"Fgo_20211029"*/);
    byte_4C37527 = 1;
  }
  EventRandomMissionClearManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6682/*"Fgo_20211029"*/;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)EventRandomMissionClearManager_TypeInfo->static_fields,
    StringLiteral_6682/*"Fgo_20211029"*/,
    v1,
    v2);
  static_fields = EventRandomMissionClearManager_TypeInfo->static_fields;
  static_fields->LIST_MAX = 100;
  *(_WORD *)&static_fields->isModify = 0;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ClearRandomMissionInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo___ctor__);
  v5 = EventRandomMissionClearManager_TypeInfo->static_fields;
  v5->clearRandomMissionList = (struct System_Collections_Generic_List_ClearRandomMissionInfo__o *)v4;
  sub_1C32BC4((CGThumbnailListItem_o *)&v5->clearRandomMissionList, (int32_t)v4, v6, v7);
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
  const MethodInfo *v3; // x3
  EventRandomMissionClearManager_c *v5; // x0
  EventRandomMissionClearManager_c *clearRandomMissionList; // x0
  const char *name; // x8
  _QWORD *v8; // x9
  __int64 namespaze_low; // x10
  const char *v10; // x8
  struct EventRandomMissionClearManager_StaticFields *static_fields; // x9
  System_Collections_Generic_List_object__o *v12; // x8

  if ( (byte_4C37523 & 1) == 0 )
  {
    sub_1C32C20(&EventRandomMissionClearManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__);
    byte_4C37523 = 1;
  }
  v5 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v5 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = (EventRandomMissionClearManager_c *)v5->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    goto LABEL_18;
  name = clearRandomMissionList->_1.name;
  v8 = Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__;
  ++HIDWORD(clearRandomMissionList->_1.namespaze);
  if ( !name )
    goto LABEL_18;
  namespaze_low = SLODWORD(clearRandomMissionList->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)clearRandomMissionList,
      (Il2CppObject *)info,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &name[8 * namespaze_low];
    LODWORD(clearRandomMissionList->_1.namespaze) = namespaze_low + 1;
    *((_QWORD *)v10 + 4) = info;
    sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 32), (int32_t)info, v2, v3);
  }
  clearRandomMissionList = EventRandomMissionClearManager_TypeInfo;
  static_fields = EventRandomMissionClearManager_TypeInfo->static_fields;
  v12 = (System_Collections_Generic_List_object__o *)static_fields->clearRandomMissionList;
  if ( !v12 )
    goto LABEL_18;
  if ( v12->fields._size <= static_fields->LIST_MAX )
    goto LABEL_15;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v12 = (System_Collections_Generic_List_object__o *)EventRandomMissionClearManager_TypeInfo->static_fields->clearRandomMissionList;
    if ( !v12 )
LABEL_18:
      sub_1C32E7C(clearRandomMissionList);
  }
  System_Collections_Generic_List_object___RemoveAt(
    v12,
    0,
    (const MethodInfo_3799F90 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__RemoveAt__);
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
  EventRandomMissionClearManager_c *v1; // x0
  struct System_Collections_Generic_List_ClearRandomMissionInfo__o *clearRandomMissionList; // x8
  int32_t size; // w2
  int v4; // w9

  if ( (byte_4C37522 & 1) == 0 )
  {
    sub_1C32C20(&EventRandomMissionClearManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__);
    byte_4C37522 = 1;
  }
  v1 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v1 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = v1->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    goto LABEL_14;
  if ( clearRandomMissionList->fields._size < 1 )
    goto LABEL_11;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = EventRandomMissionClearManager_TypeInfo;
    clearRandomMissionList = EventRandomMissionClearManager_TypeInfo->static_fields->clearRandomMissionList;
    if ( !clearRandomMissionList )
LABEL_14:
      sub_1C32E7C(v1);
  }
  size = clearRandomMissionList->fields._size;
  v4 = clearRandomMissionList->fields._version + 1;
  clearRandomMissionList->fields._size = 0;
  clearRandomMissionList->fields._version = v4;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)clearRandomMissionList->fields._items, 0, size, 0);
    v1 = EventRandomMissionClearManager_TypeInfo;
  }
LABEL_11:
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = EventRandomMissionClearManager_TypeInfo;
  }
  *(_WORD *)&v1->static_fields->isModify = 1;
}


void EventRandomMissionClearManager__DeleteSaveData(const MethodInfo *method)
{
  EventRandomMissionClearManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4C37520 & 1) == 0 )
  {
    sub_1C32C20(&EventRandomMissionClearManager_TypeInfo);
    byte_4C37520 = 1;
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
  EventRandomMissionClearManager_c *v1; // x0
  System_Collections_Generic_List_object__o *clearRandomMissionList; // x0

  if ( (byte_4C37524 & 1) == 0 )
  {
    sub_1C32C20(&EventRandomMissionClearManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__ToArray__);
    byte_4C37524 = 1;
  }
  v1 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v1 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = (System_Collections_Generic_List_object__o *)v1->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    sub_1C32E7C(0);
  return (ClearRandomMissionInfo_array *)System_Collections_Generic_List_object___ToArray(
                                           clearRandomMissionList,
                                           (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__ToArray__);
}


System_String_o *EventRandomMissionClearManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C3751F & 1) == 0 )
  {
    sub_1C32C20(&AndroidUtil_TypeInfo);
    sub_1C32C20(&DatFileName_TypeInfo);
    sub_1C32C20(&StringLiteral_1048/*"/"*/);
    byte_4C3751F = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(36, 0);
  return System_String__Concat_63556792(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


void EventRandomMissionClearManager__Initialize(const MethodInfo *method)
{
  EventRandomMissionClearManager_c *v1; // x0

  if ( (byte_4C37521 & 1) == 0 )
  {
    sub_1C32C20(&EventRandomMissionClearManager_TypeInfo);
    byte_4C37521 = 1;
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
  System_String_o *v10; // x21
  EventRandomMissionClearManager_c *v11; // x0
  int v12; // w22
  char v13; // w21
  EventRandomMissionClearManager_c *v14; // x0
  int v15; // w21
  int v16; // w23
  __int64 v17; // x24
  __int64 v18; // x22
  __int64 v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  EventRandomMissionClearManager_c *v24; // x0
  System_Collections_Generic_List_object__o *clearRandomMissionList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 v33; // x0
  System_IO_Stream_c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0
  EventRandomMissionClearManager_c *v38; // x0

  if ( (byte_4C37525 & 1) == 0 )
  {
    sub_1C32C20(&System_IO_BinaryReader_TypeInfo);
    sub_1C32C20(&ClearRandomMissionInfo_TypeInfo);
    sub_1C32C20(&EventRandomMissionClearManager_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__);
    sub_1C32C20(&ManagerConfig_TypeInfo);
    byte_4C37525 = 1;
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
    v38 = EventRandomMissionClearManager_TypeInfo;
    if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    EventRandomMissionClearManager__ClearSaveDataList((const MethodInfo *)v38);
    return 0;
  }
  v6 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  EventRandomMissionClearManager__ClearSaveDataList((const MethodInfo *)v6);
  v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
  v8 = (System_IO_BinaryReader_o *)sub_1C32E6C(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v8, v7, 0);
  if ( !v8 )
    sub_1C32E7C(v9);
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._22_ReadString.methodPtr)(
                             v8,
                             v8->klass->vtable._22_ReadString.method);
  v11 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v11 = EventRandomMissionClearManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v11->static_fields->SAVE_DATA_VERSION, v10, 0) )
  {
    v12 = 5;
  }
  else
  {
    v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._9_ReadBoolean.methodPtr)(
            v8,
            v8->klass->vtable._9_ReadBoolean.method);
    v14 = EventRandomMissionClearManager_TypeInfo;
    if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      v14 = EventRandomMissionClearManager_TypeInfo;
    }
    v14->static_fields->isContinueDevice = v13 & 1;
    v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
            v8,
            v8->klass->vtable._15_ReadInt32.method);
    if ( v15 >= 1 )
    {
      do
      {
        v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                v8,
                v8->klass->vtable._15_ReadInt32.method);
        v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._22_ReadString.methodPtr)(
                v8,
                v8->klass->vtable._22_ReadString.method);
        v18 = sub_1C32E6C(ClearRandomMissionInfo_TypeInfo);
        ClearRandomMissionInfo___ctor((ClearRandomMissionInfo_o *)v18, 0);
        if ( !v18 )
          sub_1C32E7C(v19);
        *(_QWORD *)(v18 + 24) = v17;
        *(_DWORD *)(v18 + 16) = v16;
        sub_1C32BC4((CGThumbnailListItem_o *)(v18 + 24), v17, v20, v21);
        v24 = EventRandomMissionClearManager_TypeInfo;
        if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
          v24 = EventRandomMissionClearManager_TypeInfo;
        }
        clearRandomMissionList = (System_Collections_Generic_List_object__o *)v24->static_fields->clearRandomMissionList;
        if ( !clearRandomMissionList )
          sub_1C32E7C(0);
        items = clearRandomMissionList->fields._items;
        v27 = Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__;
        ++clearRandomMissionList->fields._version;
        if ( !items )
          sub_1C32E7C(clearRandomMissionList);
        size = clearRandomMissionList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            clearRandomMissionList,
            (Il2CppObject *)v18,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          clearRandomMissionList->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v18;
          sub_1C32BC4((CGThumbnailListItem_o *)(v29 + 4), v18, v22, v23);
        }
        --v15;
      }
      while ( v15 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._6_Close.methodPtr)(
      v8,
      v8->klass->vtable._6_Close.method);
    v12 = 8;
  }
  klass = v8->klass;
  v31 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_36;
    }
    v33 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_36:
    v33 = sub_1C83438(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v33)(v8, *(_QWORD *)(v33 + 8));
  if ( (v12 | 8) == 8 )
  {
    v12 = 9;
    if ( !v7 )
      return v12 == 9;
  }
  else if ( !v7 )
  {
    return v12 == 9;
  }
  v34 = v7->klass;
  v35 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_46;
    }
    v37 = (__int64)&v34->vtable + 16 * *v36;
  }
  else
  {
LABEL_46:
    v37 = sub_1C83438(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v37)(v7, *(_QWORD *)(v37 + 8));
  return v12 == 9;
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
  EventRandomMissionClearManager_c *v9; // x0
  struct EventRandomMissionClearManager_StaticFields *v10; // x8
  struct System_Collections_Generic_List_ClearRandomMissionInfo__o *clearRandomMissionList; // x9
  int size; // w21
  int32_t i; // w22
  EventRandomMissionClearManager_c *v14; // x0
  System_Collections_Generic_List_object__o *v15; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v17; // x23
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  System_IO_Stream_c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4C37526 & 1) == 0 )
  {
    sub_1C32C20(&System_IO_BinaryWriter_TypeInfo);
    sub_1C32C20(&EventRandomMissionClearManager_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Item__);
    sub_1C32C20(&ManagerConfig_TypeInfo);
    byte_4C37526 = 1;
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
  v8 = (System_IO_BinaryWriter_o *)sub_1C32E6C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64429848(v8, v7, 0);
  v9 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v9 = EventRandomMissionClearManager_TypeInfo;
  }
  v10 = v9->static_fields;
  clearRandomMissionList = v10->clearRandomMissionList;
  if ( !clearRandomMissionList )
    sub_1C32E7C(v9);
  if ( !v8 )
    sub_1C32E7C(v9);
  size = clearRandomMissionList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *))v8->klass->vtable._22_Write.methodPtr)(
    v8,
    v10->SAVE_DATA_VERSION,
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
      v14 = EventRandomMissionClearManager_TypeInfo;
      if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
        v14 = EventRandomMissionClearManager_TypeInfo;
      }
      v15 = (System_Collections_Generic_List_object__o *)v14->static_fields->clearRandomMissionList;
      if ( !v15 )
        sub_1C32E7C(0);
      Item = System_Collections_Generic_List_object___get_Item(
               v15,
               i,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Item__);
      v17 = Item;
      if ( !Item )
        sub_1C32E7C(0);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        LODWORD(Item[1].klass),
        v8->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *, const MethodInfo *))v8->klass->vtable._22_Write.methodPtr)(
        v8,
        v17[1].monitor,
        v8->klass->vtable._22_Write.method);
    }
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, const MethodInfo *))v8->klass->vtable._5_Close.methodPtr)(
    v8,
    v8->klass->vtable._5_Close.method);
  klass = v8->klass;
  v19 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_29;
    }
    v21 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_29:
    v21 = sub_1C83438(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v21)(v8, *(_QWORD *)(v21 + 8));
  if ( v7 )
  {
    v22 = v7->klass;
    v23 = *(unsigned __int16 *)&v7->klass->_2.rank;
    if ( *(_WORD *)&v7->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_36;
      }
      v25 = (__int64)&v22->vtable + 16 * *v24;
    }
    else
    {
LABEL_36:
      v25 = sub_1C83438(v7, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v25)(v7, *(_QWORD *)(v25 + 8));
  }
  return 1;
}