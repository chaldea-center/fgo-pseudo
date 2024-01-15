void __fastcall EventRandomMissionClearManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  EventRandomMissionClearManager_c *v13; // x8
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  struct EventRandomMissionClearManager_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40FACEB & 1) == 0 )
  {
    sub_B16FFC(&EventRandomMissionClearManager_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClearRandomMissionInfo___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_ClearRandomMissionInfo__TypeInfo, v9);
    sub_B16FFC(&StringLiteral_6602/*"Fgo_20211029"*/, v10);
    byte_40FACEB = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventRandomMissionClearManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6602/*"Fgo_20211029"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6602/*"Fgo_20211029"*/;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = EventRandomMissionClearManager_TypeInfo;
  EventRandomMissionClearManager_TypeInfo->static_fields->LIST_MAX = 100;
  v13->static_fields->isModify = 0;
  v13->static_fields->isContinueDevice = 0;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ClearRandomMissionInfo__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo___ctor__);
  v19 = EventRandomMissionClearManager_TypeInfo->static_fields;
  v19->clearRandomMissionList = (struct System_Collections_Generic_List_ClearRandomMissionInfo__o *)v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v19->clearRandomMissionList,
    (System_Int32_array **)v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


void __fastcall EventRandomMissionClearManager___ctor(EventRandomMissionClearManager_o *this, const MethodInfo *method)
{
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0LL);
}


void __fastcall EventRandomMissionClearManager__AddClearRandomMissionInfo(
        ClearRandomMissionInfo_o *info,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  EventRandomMissionClearManager_c *v6; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *clearRandomMissionList; // x0
  EventRandomMissionClearManager_c *v8; // x0
  struct EventRandomMissionClearManager_StaticFields *static_fields; // x9
  System_Collections_Generic_List_XWeaponTrail_Element__o *v10; // x8

  if ( (byte_40FACE7 & 1) == 0 )
  {
    sub_B16FFC(&EventRandomMissionClearManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__RemoveAt__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__, v5);
    byte_40FACE7 = 1;
  }
  v6 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v6 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v6->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    goto LABEL_17;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    clearRandomMissionList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)info,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__);
  v8 = EventRandomMissionClearManager_TypeInfo;
  static_fields = EventRandomMissionClearManager_TypeInfo->static_fields;
  v10 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)static_fields->clearRandomMissionList;
  if ( !v10 )
    goto LABEL_17;
  if ( v10->fields._size > static_fields->LIST_MAX )
  {
    if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
      || EventRandomMissionClearManager_TypeInfo->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo),
          (v10 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)EventRandomMissionClearManager_TypeInfo->static_fields->clearRandomMissionList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
        v10,
        0,
        (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__RemoveAt__);
      v8 = EventRandomMissionClearManager_TypeInfo;
      goto LABEL_13;
    }
LABEL_17:
    sub_B170D4();
  }
LABEL_13:
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = EventRandomMissionClearManager_TypeInfo;
  }
  v8->static_fields->isModify = 1;
}


void __fastcall EventRandomMissionClearManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  EventRandomMissionClearManager_c *v4; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *clearRandomMissionList; // x8

  if ( (byte_40FACE6 & 1) == 0 )
  {
    sub_B16FFC(&EventRandomMissionClearManager_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Clear__, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__, v3);
    byte_40FACE6 = 1;
  }
  v4 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v4 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v4->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    goto LABEL_16;
  if ( clearRandomMissionList->fields._size >= 1 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) == 0
      || v4->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v4),
          (clearRandomMissionList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)EventRandomMissionClearManager_TypeInfo->static_fields->clearRandomMissionList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        clearRandomMissionList,
        (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__Clear__);
      v4 = EventRandomMissionClearManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_12:
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = EventRandomMissionClearManager_TypeInfo;
  }
  v4->static_fields->isContinueDevice = 0;
  v4->static_fields->isModify = 1;
}


void __fastcall EventRandomMissionClearManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  EventRandomMissionClearManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_40FACE4 & 1) == 0 )
  {
    sub_B16FFC(&EventRandomMissionClearManager_TypeInfo, v1);
    byte_40FACE4 = 1;
  }
  v2 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  }
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
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *clearRandomMissionList; // x0

  if ( (byte_40FACE8 & 1) == 0 )
  {
    sub_B16FFC(&EventRandomMissionClearManager_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__ToArray__, v2);
    byte_40FACE8 = 1;
  }
  v3 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v3 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    sub_B170D4();
  return (ClearRandomMissionInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           clearRandomMissionList,
                                           (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__ToArray__);
}


System_String_o *__fastcall EventRandomMissionClearManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_40FACE3 & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, v1);
    sub_B16FFC(&DatFileName_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_871/*"/"*/, v3);
    byte_40FACE3 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(36, 0LL);
  return System_String__Concat_43746016(DatFileSavePath, (System_String_o *)StringLiteral_871/*"/"*/, FileName, 0LL);
}


void __fastcall EventRandomMissionClearManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  EventRandomMissionClearManager_c *v2; // x0

  if ( (byte_40FACE5 & 1) == 0 )
  {
    sub_B16FFC(&EventRandomMissionClearManager_TypeInfo, v1);
    byte_40FACE5 = 1;
  }
  v2 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  }
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_IO_BinaryReader_o *v18; // x20
  System_String_o *v19; // x21
  EventRandomMissionClearManager_c *v20; // x0
  char v21; // w21
  EventRandomMissionClearManager_c *v22; // x0
  int v23; // w0
  System_IO_BinaryReader_c *klass; // x8
  int v25; // w21
  int v26; // w26
  int v27; // w23
  System_Int32_array **v28; // x24
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  EventRandomMissionClearManager_c *v40; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *clearRandomMissionList; // x0
  System_IO_BinaryReader_c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *p_offset; // x11
  __int64 v45; // x0
  System_IO_Stream_c *v46; // x8
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 v49; // x0
  EventRandomMissionClearManager_c *v50; // x0
  int v51; // [xsp+8h] [xbp-68h]

  if ( (byte_40FACE9 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B16FFC(&ClearRandomMissionInfo_TypeInfo, v2);
    sub_B16FFC(&EventRandomMissionClearManager_TypeInfo, v3);
    sub_B16FFC(&System_IDisposable_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__, v5);
    sub_B16FFC(&ManagerConfig_TypeInfo, v6);
    byte_40FACE9 = 1;
  }
  v7 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v7 = EventRandomMissionClearManager_TypeInfo;
  }
  v7->static_fields->isModify = 0;
  v8 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
  }
  if ( v8->static_fields->UseMock )
    return 1;
  v10 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  }
  SaveFileName = EventRandomMissionClearManager__GetSaveFileName((const MethodInfo *)v10);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v50 = EventRandomMissionClearManager_TypeInfo;
    if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    }
    EventRandomMissionClearManager__ClearSaveDataList((const MethodInfo *)v50);
    return 0;
  }
  v12 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  }
  EventRandomMissionClearManager__ClearSaveDataList((const MethodInfo *)v12);
  v13 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v18 = (System_IO_BinaryReader_o *)sub_B170CC(System_IO_BinaryReader_TypeInfo, v14, v15, v16, v17);
  System_IO_BinaryReader___ctor(v18, v13, 0LL);
  if ( !v18 )
    sub_B170D4();
  v19 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._22_ReadString.method)(
                             v18,
                             v18->klass->vtable._23_ReadChars.methodPtr);
  v20 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v20 = EventRandomMissionClearManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v20->static_fields->SAVE_DATA_VERSION, v19, 0LL) )
  {
    v51 = 213;
  }
  else
  {
    v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._9_ReadBoolean.method)(
            v18,
            v18->klass->vtable._10_ReadByte.methodPtr);
    v22 = EventRandomMissionClearManager_TypeInfo;
    if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      v22 = EventRandomMissionClearManager_TypeInfo;
    }
    v22->static_fields->isContinueDevice = v21 & 1;
    v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
            v18,
            v18->klass->vtable._16_ReadUInt32.methodPtr);
    klass = v18->klass;
    v25 = v23;
    if ( v23 >= 1 )
    {
      v26 = 0;
      do
      {
        v27 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._15_ReadInt32.method)(
                v18,
                klass->vtable._16_ReadUInt32.methodPtr);
        v28 = (System_Int32_array **)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._22_ReadString.method)(
                                       v18,
                                       v18->klass->vtable._23_ReadChars.methodPtr);
        v33 = sub_B170CC(ClearRandomMissionInfo_TypeInfo, v29, v30, v31, v32);
        ClearRandomMissionInfo___ctor((ClearRandomMissionInfo_o *)v33, 0LL);
        if ( !v33 )
          sub_B170D4();
        *(_QWORD *)(v33 + 24) = v28;
        *(_DWORD *)(v33 + 16) = v27;
        sub_B16F98((BattleServantConfConponent_o *)(v33 + 24), v28, v34, v35, v36, v37, v38, v39);
        v40 = EventRandomMissionClearManager_TypeInfo;
        if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
          v40 = EventRandomMissionClearManager_TypeInfo;
        }
        clearRandomMissionList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v40->static_fields->clearRandomMissionList;
        if ( !clearRandomMissionList )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          clearRandomMissionList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__);
        klass = v18->klass;
        ++v26;
      }
      while ( v26 < v25 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._6_Close.method)(
      v18,
      klass->vtable._7_Dispose.methodPtr);
    v51 = 186;
  }
  v42 = v18->klass;
  if ( *(_WORD *)&v18->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    p_offset = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v43;
      p_offset += 4;
      if ( v43 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
        goto LABEL_40;
    }
    v45 = (__int64)(&v42->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_40:
    v45 = sub_AAFEF8(v18, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v45)(v18, *(_QWORD *)(v45 + 8));
  if ( v51 != 186 )
  {
    if ( !v13 )
      return v51 == 198;
LABEL_46:
    v46 = v13->klass;
    if ( *(_WORD *)&v13->klass->_2.bitflags1 )
    {
      v47 = 0LL;
      v48 = &v46->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
      {
        ++v47;
        v48 += 4;
        if ( v47 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
          goto LABEL_50;
      }
      v49 = (__int64)(&v46->vtable._0_Equals.method + 2 * *v48);
    }
    else
    {
LABEL_50:
      v49 = sub_AAFEF8(v13, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v49)(v13, *(_QWORD *)(v49 + 8));
    return v51 == 198;
  }
  v51 = 198;
  if ( v13 )
    goto LABEL_46;
  return v51 == 198;
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
  bool *p_isModify; // x8
  _BOOL4 isModify; // t1
  ManagerConfig_c *v11; // x0
  EventRandomMissionClearManager_c *v13; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v15; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_IO_BinaryWriter_o *v20; // x20
  EventRandomMissionClearManager_c *v21; // x0
  struct EventRandomMissionClearManager_StaticFields *v22; // x8
  struct System_Collections_Generic_List_ClearRandomMissionInfo__o *clearRandomMissionList; // x9
  int size; // w21
  __int64 v25; // x23
  EventRandomMissionClearManager_c *v26; // x0
  struct System_Collections_Generic_List_ClearRandomMissionInfo__o *v27; // x24
  ClearRandomMissionInfo_o *v28; // x24
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 v32; // x0
  int v33; // w22
  System_IO_Stream_c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  int v38[4]; // [xsp+8h] [xbp-48h]
  int v39; // [xsp+18h] [xbp-38h]

  if ( (byte_40FACEA & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B16FFC(&EventRandomMissionClearManager_TypeInfo, v2);
    sub_B16FFC(&System_IDisposable_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Item__, v5);
    sub_B16FFC(&ManagerConfig_TypeInfo, v6);
    byte_40FACEA = 1;
  }
  v39 = 0;
  v7 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v7 = EventRandomMissionClearManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  isModify = static_fields->isModify;
  p_isModify = &static_fields->isModify;
  if ( !isModify )
    return 0;
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    p_isModify = &EventRandomMissionClearManager_TypeInfo->static_fields->isModify;
  }
  *p_isModify = 0;
  v11 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v11 = ManagerConfig_TypeInfo;
  }
  if ( v11->static_fields->UseMock )
    return 0;
  v13 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  }
  SaveFileName = EventRandomMissionClearManager__GetSaveFileName((const MethodInfo *)v13);
  v15 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v20 = (System_IO_BinaryWriter_o *)sub_B170CC(System_IO_BinaryWriter_TypeInfo, v16, v17, v18, v19);
  System_IO_BinaryWriter___ctor_39195976(v20, v15, 0LL);
  v21 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v21 = EventRandomMissionClearManager_TypeInfo;
  }
  v22 = v21->static_fields;
  clearRandomMissionList = v22->clearRandomMissionList;
  if ( !clearRandomMissionList )
    sub_B170D4();
  if ( !v20 )
    sub_B170D4();
  size = clearRandomMissionList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v20->klass->vtable._22_Write.method)(
    v20,
    v22->SAVE_DATA_VERSION,
    v20->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v20->klass->vtable._8_Write.method)(
    v20,
    EventRandomMissionClearManager_TypeInfo->static_fields->isContinueDevice,
    v20->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
    v20,
    (unsigned int)size,
    v20->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v25 = 0LL;
    do
    {
      v26 = EventRandomMissionClearManager_TypeInfo;
      if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
        v26 = EventRandomMissionClearManager_TypeInfo;
      }
      v27 = v26->static_fields->clearRandomMissionList;
      if ( !v27 )
        sub_B170D4();
      if ( v27->fields._size <= (unsigned int)v25 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v28 = v27->fields._items->m_Items[v25];
      if ( !v28 )
        sub_B170D4();
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
        v20,
        (unsigned int)v28->fields.missionId,
        v20->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v20->klass->vtable._22_Write.method)(
        v20,
        v28->fields.name,
        v20->klass[1]._1.image);
      ++v25;
    }
    while ( (int)v25 < size );
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v20->klass->vtable._5_Close.method)(
    v20,
    v20->klass->vtable._6_Dispose.methodPtr);
  v38[0] = 158;
  v39 = 1;
  klass = v20->klass;
  if ( *(_WORD *)&v20->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      p_offset += 4;
      if ( v30 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v32 = sub_AAFEF8(v20, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v32)(v20, *(_QWORD *)(v32 + 8));
  v39 = 0;
  v38[0] = 170;
  v33 = ++v39;
  if ( v15 )
  {
    v34 = v15->klass;
    if ( *(_WORD *)&v15->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
          goto LABEL_46;
      }
      v37 = (__int64)(&v34->vtable._0_Equals.method + 2 * *v36);
    }
    else
    {
LABEL_46:
      v37 = sub_AAFEF8(v15, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v37)(v15, *(_QWORD *)(v37 + 8));
  }
  if ( v33 )
  {
    if ( v38[v33 - 1] == 170 )
      v39 = v33 - 1;
  }
  return 1;
}