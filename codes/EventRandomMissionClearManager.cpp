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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct EventRandomMissionClearManager_StaticFields *static_fields; // x8
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Collections_Generic_List_object__o *v18; // x19
  struct EventRandomMissionClearManager_StaticFields *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B15DC0 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRandomMissionClearManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClearRandomMissionInfo___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_ClearRandomMissionInfo__TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_6767/*"Fgo_20211029"*/, v12, v13);
    byte_4B15DC0 = 1;
  }
  EventRandomMissionClearManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6767/*"Fgo_20211029"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventRandomMissionClearManager_TypeInfo->static_fields,
    StringLiteral_6767/*"Fgo_20211029"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  static_fields = EventRandomMissionClearManager_TypeInfo->static_fields;
  static_fields->LIST_MAX = 100;
  *(_WORD *)&static_fields->isModify = 0;
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ClearRandomMissionInfo__TypeInfo,
                                                       v15,
                                                       v16,
                                                       v17);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo___ctor__);
  v19 = EventRandomMissionClearManager_TypeInfo->static_fields;
  v19->clearRandomMissionList = (struct System_Collections_Generic_List_ClearRandomMissionInfo__o *)v18;
  sub_1BCA784((PartyOrganizationUtility_o *)&v19->clearRandomMissionList, (int64_t)v18, v20, v21, v22, v23, v24, v25);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  EventRandomMissionClearManager_c *v15; // x0
  EventRandomMissionClearManager_c *clearRandomMissionList; // x0
  const char *name; // x8
  _QWORD *v18; // x9
  __int64 namespaze_low; // x10
  const char *v20; // x8
  struct EventRandomMissionClearManager_StaticFields *static_fields; // x9
  System_Collections_Generic_List_object__o *v22; // x8

  if ( (byte_4B15DBC & 1) == 0 )
  {
    sub_1BCA7E0(&EventRandomMissionClearManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__RemoveAt__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__, v13, v14);
    byte_4B15DBC = 1;
  }
  v15 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, method);
    v15 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = (EventRandomMissionClearManager_c *)v15->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    goto LABEL_18;
  name = clearRandomMissionList->_1.name;
  v18 = Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__;
  ++HIDWORD(clearRandomMissionList->_1.namespaze);
  if ( !name )
    goto LABEL_18;
  namespaze_low = SLODWORD(clearRandomMissionList->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)clearRandomMissionList,
      (Il2CppObject *)info,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &name[8 * namespaze_low];
    LODWORD(clearRandomMissionList->_1.namespaze) = namespaze_low + 1;
    *((_QWORD *)v20 + 4) = info;
    sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 32), (int64_t)info, v2, v3, v4, v5, v6, v7);
  }
  clearRandomMissionList = EventRandomMissionClearManager_TypeInfo;
  static_fields = EventRandomMissionClearManager_TypeInfo->static_fields;
  v22 = (System_Collections_Generic_List_object__o *)static_fields->clearRandomMissionList;
  if ( !v22 )
    goto LABEL_18;
  if ( v22->fields._size <= static_fields->LIST_MAX )
    goto LABEL_15;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, method);
    v22 = (System_Collections_Generic_List_object__o *)EventRandomMissionClearManager_TypeInfo->static_fields->clearRandomMissionList;
    if ( !v22 )
LABEL_18:
      sub_1BCAA3C(clearRandomMissionList, method);
  }
  System_Collections_Generic_List_object___RemoveAt(
    v22,
    0,
    (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__RemoveAt__);
  clearRandomMissionList = EventRandomMissionClearManager_TypeInfo;
LABEL_15:
  if ( !clearRandomMissionList->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clearRandomMissionList, method);
    clearRandomMissionList = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList->static_fields->isModify = 1;
}


void __fastcall EventRandomMissionClearManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  EventRandomMissionClearManager_c *v7; // x0
  struct System_Collections_Generic_List_ClearRandomMissionInfo__o *clearRandomMissionList; // x8
  int32_t size; // w2
  int v10; // w9

  if ( (byte_4B15DBB & 1) == 0 )
  {
    sub_1BCA7E0(&EventRandomMissionClearManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Clear__, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__, v5, v6);
    byte_4B15DBB = 1;
  }
  v7 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v1);
    v7 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = v7->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    goto LABEL_14;
  if ( clearRandomMissionList->fields._size < 1 )
    goto LABEL_11;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = EventRandomMissionClearManager_TypeInfo;
    clearRandomMissionList = EventRandomMissionClearManager_TypeInfo->static_fields->clearRandomMissionList;
    if ( !clearRandomMissionList )
LABEL_14:
      sub_1BCAA3C(v7, v1);
  }
  size = clearRandomMissionList->fields._size;
  v10 = clearRandomMissionList->fields._version + 1;
  clearRandomMissionList->fields._size = 0;
  clearRandomMissionList->fields._version = v10;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)clearRandomMissionList->fields._items, 0, size, 0LL);
    v7 = EventRandomMissionClearManager_TypeInfo;
  }
LABEL_11:
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = EventRandomMissionClearManager_TypeInfo;
  }
  *(_WORD *)&v7->static_fields->isModify = 1;
}


void __fastcall EventRandomMissionClearManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  EventRandomMissionClearManager_c *v3; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4B15DB9 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRandomMissionClearManager_TypeInfo, v1, v2);
    byte_4B15DB9 = 1;
  }
  v3 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v1);
  SaveFileName = EventRandomMissionClearManager__GetSaveFileName((const MethodInfo *)v3);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


ClearRandomMissionInfo_array *__fastcall EventRandomMissionClearManager__GetClearRandomMissionInfos(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  EventRandomMissionClearManager_c *v5; // x0
  System_Collections_Generic_List_object__o *clearRandomMissionList; // x0

  if ( (byte_4B15DBD & 1) == 0 )
  {
    sub_1BCA7E0(&EventRandomMissionClearManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__ToArray__, v3, v4);
    byte_4B15DBD = 1;
  }
  v5 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v1);
    v5 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = (System_Collections_Generic_List_object__o *)v5->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    sub_1BCAA3C(0LL, v1);
  return (ClearRandomMissionInfo_array *)System_Collections_Generic_List_object___ToArray(
                                           clearRandomMissionList,
                                           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__ToArray__);
}


System_String_o *__fastcall EventRandomMissionClearManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B15DB8 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B15DB8 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v7);
  FileName = DatFileName__getFileName(36, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


void __fastcall EventRandomMissionClearManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  EventRandomMissionClearManager_c *v3; // x0

  if ( (byte_4B15DBA & 1) == 0 )
  {
    sub_1BCA7E0(&EventRandomMissionClearManager_TypeInfo, v1, v2);
    byte_4B15DBA = 1;
  }
  v3 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v1);
  EventRandomMissionClearManager__ReadData((const MethodInfo *)v3);
}


bool __fastcall EventRandomMissionClearManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  EventRandomMissionClearManager_c *v13; // x0
  ManagerConfig_c *v14; // x0
  EventRandomMissionClearManager_c *v16; // x0
  System_String_o *SaveFileName; // x19
  __int64 v18; // x1
  EventRandomMissionClearManager_c *v19; // x0
  System_IO_Stream_o *v20; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_IO_BinaryReader_o *v24; // x20
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x1
  System_String_o *v28; // x21
  EventRandomMissionClearManager_c *v29; // x0
  int v30; // w22
  __int64 v31; // x1
  char v32; // w21
  EventRandomMissionClearManager_c *v33; // x0
  int v34; // w21
  int v35; // w23
  int64_t v36; // x24
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  int64_t v40; // x22
  __int64 v41; // x0
  __int64 v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  EventRandomMissionClearManager_c *v56; // x0
  System_Collections_Generic_List_object__o *clearRandomMissionList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v63; // x9
  int32_t *p_offset; // x10
  __int64 v65; // x0
  System_IO_Stream_c *v66; // x8
  __int64 v67; // x9
  int32_t *v68; // x10
  __int64 v69; // x0
  EventRandomMissionClearManager_c *v70; // x0

  if ( (byte_4B15DBE & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, v1, v2);
    sub_1BCA7E0(&ClearRandomMissionInfo_TypeInfo, v3, v4);
    sub_1BCA7E0(&EventRandomMissionClearManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__, v9, v10);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v11, v12);
    byte_4B15DBE = 1;
  }
  v13 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v1);
    v13 = EventRandomMissionClearManager_TypeInfo;
  }
  v13->static_fields->isModify = 0;
  v14 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v14 = ManagerConfig_TypeInfo;
  }
  if ( v14->static_fields->UseMock )
    return 1;
  v16 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v1);
  SaveFileName = EventRandomMissionClearManager__GetSaveFileName((const MethodInfo *)v16);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v70 = EventRandomMissionClearManager_TypeInfo;
    if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v18);
    EventRandomMissionClearManager__ClearSaveDataList((const MethodInfo *)v70);
    return 0;
  }
  v19 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v18);
  EventRandomMissionClearManager__ClearSaveDataList((const MethodInfo *)v19);
  v20 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v24 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v21, v22, v23);
  System_IO_BinaryReader___ctor(v24, v20, 0LL);
  if ( !v24 )
    sub_1BCAA3C(v25, v26);
  v28 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._22_ReadString.method)(
                             v24,
                             v24->klass->vtable._23_ReadChars.methodPtr);
  v29 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v27);
    v29 = EventRandomMissionClearManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v29->static_fields->SAVE_DATA_VERSION, v28, 0LL) )
  {
    v30 = 5;
  }
  else
  {
    v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._9_ReadBoolean.method)(
            v24,
            v24->klass->vtable._10_ReadByte.methodPtr);
    v33 = EventRandomMissionClearManager_TypeInfo;
    if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v31);
      v33 = EventRandomMissionClearManager_TypeInfo;
    }
    v33->static_fields->isContinueDevice = v32 & 1;
    v34 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._15_ReadInt32.method)(
            v24,
            v24->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v34 >= 1 )
    {
      do
      {
        v35 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._15_ReadInt32.method)(
                v24,
                v24->klass->vtable._16_ReadUInt32.methodPtr);
        v36 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._22_ReadString.method)(
                v24,
                v24->klass->vtable._23_ReadChars.methodPtr);
        v40 = sub_1BCAA2C(ClearRandomMissionInfo_TypeInfo, v37, v38, v39);
        ClearRandomMissionInfo___ctor((ClearRandomMissionInfo_o *)v40, 0LL);
        if ( !v40 )
          sub_1BCAA3C(v41, v42);
        *(_QWORD *)(v40 + 24) = v36;
        *(_DWORD *)(v40 + 16) = v35;
        sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 24), v36, v43, v44, v45, v46, v47, v48);
        v56 = EventRandomMissionClearManager_TypeInfo;
        if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v49);
          v56 = EventRandomMissionClearManager_TypeInfo;
        }
        clearRandomMissionList = (System_Collections_Generic_List_object__o *)v56->static_fields->clearRandomMissionList;
        if ( !clearRandomMissionList )
          sub_1BCAA3C(0LL, v49);
        items = clearRandomMissionList->fields._items;
        v59 = Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__;
        ++clearRandomMissionList->fields._version;
        if ( !items )
          sub_1BCAA3C(clearRandomMissionList, v49);
        size = clearRandomMissionList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            clearRandomMissionList,
            (Il2CppObject *)v40,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
        }
        else
        {
          v61 = &items->obj.klass + size;
          clearRandomMissionList->fields._size = size + 1;
          v61[4] = (Il2CppClass *)v40;
          sub_1BCA784((PartyOrganizationUtility_o *)(v61 + 4), v40, v50, v51, v52, v53, v54, v55);
        }
        --v34;
      }
      while ( v34 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._6_Close.method)(
      v24,
      v24->klass->vtable._7_Dispose.methodPtr);
    v30 = 8;
  }
  klass = v24->klass;
  v63 = *(unsigned __int16 *)(&v24->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v24->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v63;
      p_offset += 4;
      if ( !v63 )
        goto LABEL_36;
    }
    v65 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_36:
    v65 = sub_1C1C7C0(v24, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v65)(v24, *(_QWORD *)(v65 + 8));
  if ( (v30 | 8) == 8 )
  {
    v30 = 9;
    if ( !v20 )
      return v30 == 9;
  }
  else if ( !v20 )
  {
    return v30 == 9;
  }
  v66 = v20->klass;
  v67 = *(unsigned __int16 *)(&v20->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v20->klass->_2.bitflags2 + 3) )
  {
    v68 = &v66->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
    {
      --v67;
      v68 += 4;
      if ( !v67 )
        goto LABEL_46;
    }
    v69 = (__int64)(&v66->vtable._0_Equals.method + 2 * *v68);
  }
  else
  {
LABEL_46:
    v69 = sub_1C1C7C0(v20, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v69)(v20, *(_QWORD *)(v69 + 8));
  return v30 == 9;
}


bool __fastcall EventRandomMissionClearManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  EventRandomMissionClearManager_c *v13; // x0
  struct EventRandomMissionClearManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v15; // x0
  EventRandomMissionClearManager_c *v17; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v19; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_IO_BinaryWriter_o *v23; // x20
  __int64 v24; // x1
  EventRandomMissionClearManager_c *v25; // x0
  struct EventRandomMissionClearManager_StaticFields *v26; // x8
  struct System_Collections_Generic_List_ClearRandomMissionInfo__o *clearRandomMissionList; // x9
  int size; // w21
  __int64 v29; // x1
  int32_t i; // w22
  EventRandomMissionClearManager_c *v31; // x0
  System_Collections_Generic_List_object__o *v32; // x0
  Il2CppObject *Item; // x0
  __int64 v34; // x1
  Il2CppObject *v35; // x23
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 v39; // x0
  System_IO_Stream_c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0

  if ( (byte_4B15DBF & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryWriter_TypeInfo, v1, v2);
    sub_1BCA7E0(&EventRandomMissionClearManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Item__, v9, v10);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v11, v12);
    byte_4B15DBF = 1;
  }
  v13 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v1);
    v13 = EventRandomMissionClearManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  if ( !static_fields->isModify )
    return 0;
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13, v1);
    static_fields = EventRandomMissionClearManager_TypeInfo->static_fields;
  }
  static_fields->isModify = 0;
  v15 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v15 = ManagerConfig_TypeInfo;
  }
  if ( v15->static_fields->UseMock )
    return 0;
  v17 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v1);
  SaveFileName = EventRandomMissionClearManager__GetSaveFileName((const MethodInfo *)v17);
  v19 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v23 = (System_IO_BinaryWriter_o *)sub_1BCAA2C(System_IO_BinaryWriter_TypeInfo, v20, v21, v22);
  System_IO_BinaryWriter___ctor_62639712(v23, v19, 0LL);
  v25 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v24);
    v25 = EventRandomMissionClearManager_TypeInfo;
  }
  v26 = v25->static_fields;
  clearRandomMissionList = v26->clearRandomMissionList;
  if ( !clearRandomMissionList )
    sub_1BCAA3C(v25, v24);
  if ( !v23 )
    sub_1BCAA3C(v25, v24);
  size = clearRandomMissionList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v23->klass->vtable._22_Write.method)(
    v23,
    v26->SAVE_DATA_VERSION,
    v23->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v23->klass->vtable._8_Write.method)(
    v23,
    EventRandomMissionClearManager_TypeInfo->static_fields->isContinueDevice,
    v23->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._17_Write.method)(
    v23,
    (unsigned int)size,
    v23->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v31 = EventRandomMissionClearManager_TypeInfo;
      if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v29);
        v31 = EventRandomMissionClearManager_TypeInfo;
      }
      v32 = (System_Collections_Generic_List_object__o *)v31->static_fields->clearRandomMissionList;
      if ( !v32 )
        sub_1BCAA3C(0LL, v29);
      Item = System_Collections_Generic_List_object___get_Item(
               v32,
               i,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Item__);
      v35 = Item;
      if ( !Item )
        sub_1BCAA3C(0LL, v34);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._17_Write.method)(
        v23,
        LODWORD(Item[1].klass),
        v23->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *, void *))v23->klass->vtable._22_Write.method)(
        v23,
        v35[1].monitor,
        v23->klass[1]._1.image);
    }
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v23->klass->vtable._5_Close.method)(
    v23,
    v23->klass->vtable._6_Dispose.methodPtr);
  klass = v23->klass;
  v37 = *(unsigned __int16 *)(&v23->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v23->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      p_offset += 4;
      if ( !v37 )
        goto LABEL_29;
    }
    v39 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_29:
    v39 = sub_1C1C7C0(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v39)(v23, *(_QWORD *)(v39 + 8));
  if ( v19 )
  {
    v40 = v19->klass;
    v41 = *(unsigned __int16 *)(&v19->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v19->klass->_2.bitflags2 + 3) )
    {
      v42 = &v40->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_36;
      }
      v43 = (__int64)(&v40->vtable._0_Equals.method + 2 * *v42);
    }
    else
    {
LABEL_36:
      v43 = sub_1C1C7C0(v19, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v43)(v19, *(_QWORD *)(v43 + 8));
  }
  return 1;
}