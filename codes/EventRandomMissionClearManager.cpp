void __fastcall EventRandomMissionClearManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct EventRandomMissionClearManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *v12; // x19
  struct EventRandomMissionClearManager_StaticFields *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BB42A2 & 1) == 0 )
  {
    sub_1C13D24(&EventRandomMissionClearManager_TypeInfo, v1);
    sub_1C13D24(&Method_System_Collections_Generic_List_ClearRandomMissionInfo___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_ClearRandomMissionInfo__TypeInfo, v9);
    sub_1C13D24(&StringLiteral_6804/*"Fgo_20210622"*/, v10);
    byte_4BB42A2 = 1;
  }
  EventRandomMissionClearManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6804/*"Fgo_20210622"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)EventRandomMissionClearManager_TypeInfo->static_fields,
    StringLiteral_6804/*"Fgo_20210622"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  static_fields = EventRandomMissionClearManager_TypeInfo->static_fields;
  static_fields->LIST_MAX = 100;
  *(_WORD *)&static_fields->isModify = 0;
  v12 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_ClearRandomMissionInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo___ctor__);
  v13 = EventRandomMissionClearManager_TypeInfo->static_fields;
  v13->clearRandomMissionList = (struct System_Collections_Generic_List_ClearRandomMissionInfo__o *)v12;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v13->clearRandomMissionList, (int64_t)v12, v14, v15, v16, v17, v18, v19);
}


void __fastcall EventRandomMissionClearManager___ctor(EventRandomMissionClearManager_o *this, const MethodInfo *method)
{
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0LL);
}


void __fastcall EventRandomMissionClearManager__AddClearRandomMissionInfo(
        ClearRandomMissionInfo_o *info,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  EventRandomMissionClearManager_c *v12; // x0
  EventRandomMissionClearManager_c *clearRandomMissionList; // x0
  const char *name; // x8
  _QWORD *v15; // x9
  __int64 namespaze_low; // x10
  const char *v17; // x8
  struct EventRandomMissionClearManager_StaticFields *static_fields; // x9
  System_Collections_Generic_List_object__o *v19; // x8

  if ( (byte_4BB429E & 1) == 0 )
  {
    sub_1C13D24(&EventRandomMissionClearManager_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__RemoveAt__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__, v11);
    byte_4BB429E = 1;
  }
  v12 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v12 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = (EventRandomMissionClearManager_c *)v12->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    goto LABEL_18;
  name = clearRandomMissionList->_1.name;
  v15 = Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__;
  ++HIDWORD(clearRandomMissionList->_1.namespaze);
  if ( !name )
    goto LABEL_18;
  namespaze_low = SLODWORD(clearRandomMissionList->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)clearRandomMissionList,
      (Il2CppObject *)info,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &name[8 * namespaze_low];
    LODWORD(clearRandomMissionList->_1.namespaze) = namespaze_low + 1;
    *((_QWORD *)v17 + 4) = info;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)info, v2, v3, v4, v5, v6, v7);
  }
  clearRandomMissionList = EventRandomMissionClearManager_TypeInfo;
  static_fields = EventRandomMissionClearManager_TypeInfo->static_fields;
  v19 = (System_Collections_Generic_List_object__o *)static_fields->clearRandomMissionList;
  if ( !v19 )
    goto LABEL_18;
  if ( v19->fields._size <= static_fields->LIST_MAX )
    goto LABEL_15;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v19 = (System_Collections_Generic_List_object__o *)EventRandomMissionClearManager_TypeInfo->static_fields->clearRandomMissionList;
    if ( !v19 )
LABEL_18:
      sub_1C13F80(clearRandomMissionList, method);
  }
  System_Collections_Generic_List_object___RemoveAt(
    v19,
    0,
    (const MethodInfo_362E9A0 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__RemoveAt__);
  clearRandomMissionList = EventRandomMissionClearManager_TypeInfo;
LABEL_15:
  if ( !clearRandomMissionList->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clearRandomMissionList);
    clearRandomMissionList = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList->static_fields->isModify = 1;
}


void __fastcall EventRandomMissionClearManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  EventRandomMissionClearManager_c *v4; // x0
  struct System_Collections_Generic_List_ClearRandomMissionInfo__o *clearRandomMissionList; // x8
  int32_t size; // w2
  int v7; // w9

  if ( (byte_4BB429D & 1) == 0 )
  {
    sub_1C13D24(&EventRandomMissionClearManager_TypeInfo, v1);
    sub_1C13D24(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Clear__, v2);
    sub_1C13D24(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__, v3);
    byte_4BB429D = 1;
  }
  v4 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v4 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = v4->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    goto LABEL_14;
  if ( clearRandomMissionList->fields._size < 1 )
    goto LABEL_11;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = EventRandomMissionClearManager_TypeInfo;
    clearRandomMissionList = EventRandomMissionClearManager_TypeInfo->static_fields->clearRandomMissionList;
    if ( !clearRandomMissionList )
LABEL_14:
      sub_1C13F80(v4, v1);
  }
  size = clearRandomMissionList->fields._size;
  v7 = clearRandomMissionList->fields._version + 1;
  clearRandomMissionList->fields._size = 0;
  clearRandomMissionList->fields._version = v7;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)clearRandomMissionList->fields._items, 0, size, 0LL);
    v4 = EventRandomMissionClearManager_TypeInfo;
  }
LABEL_11:
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = EventRandomMissionClearManager_TypeInfo;
  }
  *(_WORD *)&v4->static_fields->isModify = 1;
}


void __fastcall EventRandomMissionClearManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  EventRandomMissionClearManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4BB429B & 1) == 0 )
  {
    sub_1C13D24(&EventRandomMissionClearManager_TypeInfo, v1);
    byte_4BB429B = 1;
  }
  v2 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  SaveFileName = EventRandomMissionClearManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


ClearRandomMissionInfo_array *__fastcall EventRandomMissionClearManager__GetClearRandomMissionInfos(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  EventRandomMissionClearManager_c *v3; // x0
  System_Collections_Generic_List_object__o *clearRandomMissionList; // x0

  if ( (byte_4BB429F & 1) == 0 )
  {
    sub_1C13D24(&EventRandomMissionClearManager_TypeInfo, v1);
    sub_1C13D24(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__ToArray__, v2);
    byte_4BB429F = 1;
  }
  v3 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v3 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = (System_Collections_Generic_List_object__o *)v3->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    sub_1C13F80(0LL, v1);
  return (ClearRandomMissionInfo_array *)System_Collections_Generic_List_object___ToArray(
                                           clearRandomMissionList,
                                           (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__ToArray__);
}


System_String_o *__fastcall EventRandomMissionClearManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4BB429A & 1) == 0 )
  {
    sub_1C13D24(&AndroidUtil_TypeInfo, v1);
    sub_1C13D24(&DatFileName_TypeInfo, v2);
    sub_1C13D24(&StringLiteral_1123/*"/"*/, v3);
    byte_4BB429A = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(36, 0LL);
  return System_String__Concat_62979204(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


void __fastcall EventRandomMissionClearManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  EventRandomMissionClearManager_c *v2; // x0

  if ( (byte_4BB429C & 1) == 0 )
  {
    sub_1C13D24(&EventRandomMissionClearManager_TypeInfo, v1);
    byte_4BB429C = 1;
  }
  v2 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  EventRandomMissionClearManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall EventRandomMissionClearManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  EventRandomMissionClearManager_c *v7; // x0
  ManagerConfig_c *v8; // x0
  EventRandomMissionClearManager_c *v10; // x0
  System_String_o *SaveFileName; // x19
  EventRandomMissionClearManager_c *v12; // x0
  System_IO_Stream_o *v13; // x19
  System_IO_BinaryReader_o *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x21
  EventRandomMissionClearManager_c *v18; // x0
  int v19; // w22
  char v20; // w21
  EventRandomMissionClearManager_c *v21; // x0
  int v22; // w21
  int v23; // w23
  int64_t v24; // x24
  int64_t v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  EventRandomMissionClearManager_c *v41; // x0
  System_Collections_Generic_List_object__o *clearRandomMissionList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v48; // x9
  int32_t *p_offset; // x10
  __int64 v50; // x0
  System_IO_Stream_c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  EventRandomMissionClearManager_c *v55; // x0

  if ( (byte_4BB42A0 & 1) == 0 )
  {
    sub_1C13D24(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1C13D24(&ClearRandomMissionInfo_TypeInfo, v2);
    sub_1C13D24(&EventRandomMissionClearManager_TypeInfo, v3);
    sub_1C13D24(&System_IDisposable_TypeInfo, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__, v5);
    sub_1C13D24(&ManagerConfig_TypeInfo, v6);
    byte_4BB42A0 = 1;
  }
  v7 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v7 = EventRandomMissionClearManager_TypeInfo;
  }
  v7->static_fields->isModify = 0;
  v8 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
  }
  if ( v8->static_fields->UseMock )
    return 1;
  v10 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  SaveFileName = EventRandomMissionClearManager__GetSaveFileName((const MethodInfo *)v10);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v55 = EventRandomMissionClearManager_TypeInfo;
    if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    EventRandomMissionClearManager__ClearSaveDataList((const MethodInfo *)v55);
    return 0;
  }
  v12 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  EventRandomMissionClearManager__ClearSaveDataList((const MethodInfo *)v12);
  v13 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v14 = (System_IO_BinaryReader_o *)sub_1C13F70(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v14, v13, 0LL);
  if ( !v14 )
    sub_1C13F80(v15, v16);
  v17 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._22_ReadString.method)(
                             v14,
                             v14->klass->vtable._23_ReadChars.methodPtr);
  v18 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v18 = EventRandomMissionClearManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v18->static_fields->SAVE_DATA_VERSION, v17, 0LL) )
  {
    v19 = 5;
  }
  else
  {
    v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._9_ReadBoolean.method)(
            v14,
            v14->klass->vtable._10_ReadByte.methodPtr);
    v21 = EventRandomMissionClearManager_TypeInfo;
    if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      v21 = EventRandomMissionClearManager_TypeInfo;
    }
    v21->static_fields->isContinueDevice = v20 & 1;
    v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
            v14,
            v14->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v22 >= 1 )
    {
      do
      {
        v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                v14,
                v14->klass->vtable._16_ReadUInt32.methodPtr);
        v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._22_ReadString.method)(
                v14,
                v14->klass->vtable._23_ReadChars.methodPtr);
        v25 = sub_1C13F70(ClearRandomMissionInfo_TypeInfo);
        ClearRandomMissionInfo___ctor((ClearRandomMissionInfo_o *)v25, 0LL);
        if ( !v25 )
          sub_1C13F80(v26, v27);
        *(_QWORD *)(v25 + 24) = v24;
        *(_DWORD *)(v25 + 16) = v23;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v25 + 24), v24, v28, v29, v30, v31, v32, v33);
        v41 = EventRandomMissionClearManager_TypeInfo;
        if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
          v41 = EventRandomMissionClearManager_TypeInfo;
        }
        clearRandomMissionList = (System_Collections_Generic_List_object__o *)v41->static_fields->clearRandomMissionList;
        if ( !clearRandomMissionList )
          sub_1C13F80(0LL, v34);
        items = clearRandomMissionList->fields._items;
        v44 = Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__;
        ++clearRandomMissionList->fields._version;
        if ( !items )
          sub_1C13F80(clearRandomMissionList, v34);
        size = clearRandomMissionList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            clearRandomMissionList,
            (Il2CppObject *)v25,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = &items->obj.klass + size;
          clearRandomMissionList->fields._size = size + 1;
          v46[4] = (Il2CppClass *)v25;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v46 + 4), v25, v35, v36, v37, v38, v39, v40);
        }
        --v22;
      }
      while ( v22 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._6_Close.method)(
      v14,
      v14->klass->vtable._7_Dispose.methodPtr);
    v19 = 8;
  }
  klass = v14->klass;
  v48 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      p_offset += 4;
      if ( !v48 )
        goto LABEL_36;
    }
    v50 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_36:
    v50 = sub_1C65D04(v14, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v50)(v14, *(_QWORD *)(v50 + 8));
  if ( (v19 | 8) == 8 )
  {
    v19 = 9;
    if ( !v13 )
      return v19 == 9;
  }
  else if ( !v13 )
  {
    return v19 == 9;
  }
  v51 = v13->klass;
  v52 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_46;
    }
    v54 = (__int64)(&v51->vtable._0_Equals.method + 2 * *v53);
  }
  else
  {
LABEL_46:
    v54 = sub_1C65D04(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v54)(v13, *(_QWORD *)(v54 + 8));
  return v19 == 9;
}


bool __fastcall EventRandomMissionClearManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  EventRandomMissionClearManager_c *v7; // x0
  struct EventRandomMissionClearManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v9; // x0
  EventRandomMissionClearManager_c *v11; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v13; // x19
  System_IO_BinaryWriter_o *v14; // x20
  __int64 v15; // x1
  EventRandomMissionClearManager_c *v16; // x0
  struct EventRandomMissionClearManager_StaticFields *v17; // x8
  struct System_Collections_Generic_List_ClearRandomMissionInfo__o *clearRandomMissionList; // x9
  int size; // w21
  __int64 v20; // x1
  int32_t i; // w22
  EventRandomMissionClearManager_c *v22; // x0
  System_Collections_Generic_List_object__o *v23; // x0
  Il2CppObject *Item; // x0
  __int64 v25; // x1
  Il2CppObject *v26; // x23
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0
  System_IO_Stream_c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  if ( (byte_4BB42A1 & 1) == 0 )
  {
    sub_1C13D24(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1C13D24(&EventRandomMissionClearManager_TypeInfo, v2);
    sub_1C13D24(&System_IDisposable_TypeInfo, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Item__, v5);
    sub_1C13D24(&ManagerConfig_TypeInfo, v6);
    byte_4BB42A1 = 1;
  }
  v7 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v7 = EventRandomMissionClearManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( !static_fields->isModify )
    return 0;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    static_fields = EventRandomMissionClearManager_TypeInfo->static_fields;
  }
  static_fields->isModify = 0;
  v9 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = ManagerConfig_TypeInfo;
  }
  if ( v9->static_fields->UseMock )
    return 0;
  v11 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  SaveFileName = EventRandomMissionClearManager__GetSaveFileName((const MethodInfo *)v11);
  v13 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v14 = (System_IO_BinaryWriter_o *)sub_1C13F70(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_63206436(v14, v13, 0LL);
  v16 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v16 = EventRandomMissionClearManager_TypeInfo;
  }
  v17 = v16->static_fields;
  clearRandomMissionList = v17->clearRandomMissionList;
  if ( !clearRandomMissionList )
    sub_1C13F80(v16, v15);
  if ( !v14 )
    sub_1C13F80(v16, v15);
  size = clearRandomMissionList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v14->klass->vtable._22_Write.method)(
    v14,
    v17->SAVE_DATA_VERSION,
    v14->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v14->klass->vtable._8_Write.method)(
    v14,
    EventRandomMissionClearManager_TypeInfo->static_fields->isContinueDevice,
    v14->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
    v14,
    (unsigned int)size,
    v14->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v22 = EventRandomMissionClearManager_TypeInfo;
      if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
        v22 = EventRandomMissionClearManager_TypeInfo;
      }
      v23 = (System_Collections_Generic_List_object__o *)v22->static_fields->clearRandomMissionList;
      if ( !v23 )
        sub_1C13F80(0LL, v20);
      Item = System_Collections_Generic_List_object___get_Item(
               v23,
               i,
               (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Item__);
      v26 = Item;
      if ( !Item )
        sub_1C13F80(0LL, v25);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
        v14,
        LODWORD(Item[1].klass),
        v14->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *, void *))v14->klass->vtable._22_Write.method)(
        v14,
        v26[1].monitor,
        v14->klass[1]._1.image);
    }
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v14->klass->vtable._5_Close.method)(
    v14,
    v14->klass->vtable._6_Dispose.methodPtr);
  klass = v14->klass;
  v28 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      p_offset += 4;
      if ( !v28 )
        goto LABEL_29;
    }
    v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_29:
    v30 = sub_1C65D04(v14, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v30)(v14, *(_QWORD *)(v30 + 8));
  if ( v13 )
  {
    v31 = v13->klass;
    v32 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_36;
      }
      v34 = (__int64)(&v31->vtable._0_Equals.method + 2 * *v33);
    }
    else
    {
LABEL_36:
      v34 = sub_1C65D04(v13, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v34)(v13, *(_QWORD *)(v34 + 8));
  }
  return 1;
}