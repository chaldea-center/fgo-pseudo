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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  struct EventRandomMissionClearManager_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42149F5 & 1) == 0 )
  {
    sub_B0D8A4(&EventRandomMissionClearManager_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClearRandomMissionInfo___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_ClearRandomMissionInfo__TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_6643/*"Fgo_20211029"*/, v10);
    byte_42149F5 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventRandomMissionClearManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6643/*"Fgo_20211029"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6643/*"Fgo_20211029"*/;
  sub_B0D840(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = EventRandomMissionClearManager_TypeInfo;
  EventRandomMissionClearManager_TypeInfo->static_fields->LIST_MAX = 100;
  v13->static_fields->isModify = 0;
  v13->static_fields->isContinueDevice = 0;
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ClearRandomMissionInfo__TypeInfo,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo___ctor__);
  v17 = EventRandomMissionClearManager_TypeInfo->static_fields;
  v17->clearRandomMissionList = (struct System_Collections_Generic_List_ClearRandomMissionInfo__o *)v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v17->clearRandomMissionList,
    (System_Int32_array **)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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
  EventRandomMissionClearManager_c *clearRandomMissionList; // x0
  struct EventRandomMissionClearManager_StaticFields *static_fields; // x9
  System_Collections_Generic_List_XWeaponTrail_Element__o *v9; // x8

  if ( (byte_42149F1 & 1) == 0 )
  {
    sub_B0D8A4(&EventRandomMissionClearManager_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__RemoveAt__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__, v5);
    byte_42149F1 = 1;
  }
  v6 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v6 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = (EventRandomMissionClearManager_c *)v6->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    goto LABEL_17;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)clearRandomMissionList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)info,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__);
  clearRandomMissionList = EventRandomMissionClearManager_TypeInfo;
  static_fields = EventRandomMissionClearManager_TypeInfo->static_fields;
  v9 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)static_fields->clearRandomMissionList;
  if ( !v9 )
    goto LABEL_17;
  if ( v9->fields._size > static_fields->LIST_MAX )
  {
    if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
      || EventRandomMissionClearManager_TypeInfo->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo),
          (v9 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)EventRandomMissionClearManager_TypeInfo->static_fields->clearRandomMissionList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
        v9,
        0,
        (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__RemoveAt__);
      clearRandomMissionList = EventRandomMissionClearManager_TypeInfo;
      goto LABEL_13;
    }
LABEL_17:
    sub_B0D97C(clearRandomMissionList);
  }
LABEL_13:
  if ( (BYTE3(clearRandomMissionList->vtable._0_Equals.methodPtr) & 4) != 0
    && !clearRandomMissionList->_2.cctor_finished )
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
  System_Collections_Generic_List_XWeaponTrail_Element__o *clearRandomMissionList; // x8

  if ( (byte_42149F0 & 1) == 0 )
  {
    sub_B0D8A4(&EventRandomMissionClearManager_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Clear__, v2);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__, v3);
    byte_42149F0 = 1;
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
        (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__Clear__);
      v4 = EventRandomMissionClearManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B0D97C(v4);
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

  if ( (byte_42149EE & 1) == 0 )
  {
    sub_B0D8A4(&EventRandomMissionClearManager_TypeInfo, v1);
    byte_42149EE = 1;
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

  if ( (byte_42149F2 & 1) == 0 )
  {
    sub_B0D8A4(&EventRandomMissionClearManager_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__ToArray__, v2);
    byte_42149F2 = 1;
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
    sub_B0D97C(0LL);
  return (ClearRandomMissionInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           clearRandomMissionList,
                                           (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__ToArray__);
}


System_String_o *__fastcall EventRandomMissionClearManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42149ED & 1) == 0 )
  {
    sub_B0D8A4(&AndroidUtil_TypeInfo, v1);
    sub_B0D8A4(&DatFileName_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v3);
    byte_42149ED = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(36, 0LL);
  return System_String__Concat_43852188(DatFileSavePath, (System_String_o *)StringLiteral_879/*"/"*/, FileName, 0LL);
}


void __fastcall EventRandomMissionClearManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  EventRandomMissionClearManager_c *v2; // x0

  if ( (byte_42149EF & 1) == 0 )
  {
    sub_B0D8A4(&EventRandomMissionClearManager_TypeInfo, v1);
    byte_42149EF = 1;
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
  System_IO_BinaryReader_o *v16; // x20
  __int64 v17; // x0
  System_String_o *v18; // x21
  EventRandomMissionClearManager_c *v19; // x0
  char v20; // w21
  EventRandomMissionClearManager_c *v21; // x0
  int v22; // w0
  System_IO_BinaryReader_c *klass; // x8
  int v24; // w21
  int v25; // w26
  int v26; // w23
  System_Int32_array **v27; // x24
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x22
  __int64 v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  EventRandomMissionClearManager_c *v38; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *clearRandomMissionList; // x0
  System_IO_BinaryReader_c *v40; // x8
  unsigned __int64 v41; // x10
  int32_t *p_offset; // x11
  __int64 v43; // x0
  System_IO_Stream_c *v44; // x8
  unsigned __int64 v45; // x10
  int32_t *v46; // x11
  __int64 v47; // x0
  EventRandomMissionClearManager_c *v48; // x0
  int v49; // [xsp+8h] [xbp-68h]

  if ( (byte_42149F3 & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B0D8A4(&ClearRandomMissionInfo_TypeInfo, v2);
    sub_B0D8A4(&EventRandomMissionClearManager_TypeInfo, v3);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__, v5);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v6);
    byte_42149F3 = 1;
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
    v48 = EventRandomMissionClearManager_TypeInfo;
    if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    }
    EventRandomMissionClearManager__ClearSaveDataList((const MethodInfo *)v48);
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
  v16 = (System_IO_BinaryReader_o *)sub_B0D974(System_IO_BinaryReader_TypeInfo, v14, v15);
  System_IO_BinaryReader___ctor(v16, v13, 0LL);
  if ( !v16 )
    sub_B0D97C(v17);
  v18 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._22_ReadString.method)(
                             v16,
                             v16->klass->vtable._23_ReadChars.methodPtr);
  v19 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v19 = EventRandomMissionClearManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v19->static_fields->SAVE_DATA_VERSION, v18, 0LL) )
  {
    v49 = 213;
  }
  else
  {
    v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._9_ReadBoolean.method)(
            v16,
            v16->klass->vtable._10_ReadByte.methodPtr);
    v21 = EventRandomMissionClearManager_TypeInfo;
    if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      v21 = EventRandomMissionClearManager_TypeInfo;
    }
    v21->static_fields->isContinueDevice = v20 & 1;
    v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
            v16,
            v16->klass->vtable._16_ReadUInt32.methodPtr);
    klass = v16->klass;
    v24 = v22;
    if ( v22 >= 1 )
    {
      v25 = 0;
      do
      {
        v26 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._15_ReadInt32.method)(
                v16,
                klass->vtable._16_ReadUInt32.methodPtr);
        v27 = (System_Int32_array **)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._22_ReadString.method)(
                                       v16,
                                       v16->klass->vtable._23_ReadChars.methodPtr);
        v30 = sub_B0D974(ClearRandomMissionInfo_TypeInfo, v28, v29);
        ClearRandomMissionInfo___ctor((ClearRandomMissionInfo_o *)v30, 0LL);
        if ( !v30 )
          sub_B0D97C(v31);
        *(_QWORD *)(v30 + 24) = v27;
        *(_DWORD *)(v30 + 16) = v26;
        sub_B0D840((BattleServantConfConponent_o *)(v30 + 24), v27, v32, v33, v34, v35, v36, v37);
        v38 = EventRandomMissionClearManager_TypeInfo;
        if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
          v38 = EventRandomMissionClearManager_TypeInfo;
        }
        clearRandomMissionList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v38->static_fields->clearRandomMissionList;
        if ( !clearRandomMissionList )
          sub_B0D97C(0LL);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          clearRandomMissionList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__);
        klass = v16->klass;
        ++v25;
      }
      while ( v25 < v24 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._6_Close.method)(
      v16,
      klass->vtable._7_Dispose.methodPtr);
    v49 = 186;
  }
  v40 = v16->klass;
  if ( *(_WORD *)&v16->klass->_2.bitflags1 )
  {
    v41 = 0LL;
    p_offset = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v41;
      p_offset += 4;
      if ( v41 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
        goto LABEL_40;
    }
    v43 = (__int64)(&v40->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_40:
    v43 = sub_AA67A0(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v43)(v16, *(_QWORD *)(v43 + 8));
  if ( v49 != 186 )
  {
    if ( !v13 )
      return v49 == 198;
LABEL_46:
    v44 = v13->klass;
    if ( *(_WORD *)&v13->klass->_2.bitflags1 )
    {
      v45 = 0LL;
      v46 = &v44->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
      {
        ++v45;
        v46 += 4;
        if ( v45 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
          goto LABEL_50;
      }
      v47 = (__int64)(&v44->vtable._0_Equals.method + 2 * *v46);
    }
    else
    {
LABEL_50:
      v47 = sub_AA67A0(v13, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v47)(v13, *(_QWORD *)(v47 + 8));
    return v49 == 198;
  }
  v49 = 198;
  if ( v13 )
    goto LABEL_46;
  return v49 == 198;
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
  System_IO_BinaryWriter_o *v18; // x20
  EventRandomMissionClearManager_c *v19; // x0
  struct EventRandomMissionClearManager_StaticFields *v20; // x8
  struct System_Collections_Generic_List_ClearRandomMissionInfo__o *clearRandomMissionList; // x9
  int size; // w21
  __int64 v23; // x23
  EventRandomMissionClearManager_c *v24; // x0
  struct System_Collections_Generic_List_ClearRandomMissionInfo__o *v25; // x24
  ClearRandomMissionInfo_o *v26; // x24
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 v30; // x0
  int v31; // w22
  System_IO_Stream_c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  int v36[4]; // [xsp+8h] [xbp-48h]
  int v37; // [xsp+18h] [xbp-38h]

  if ( (byte_42149F4 & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B0D8A4(&EventRandomMissionClearManager_TypeInfo, v2);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Item__, v5);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v6);
    byte_42149F4 = 1;
  }
  v37 = 0;
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
  v18 = (System_IO_BinaryWriter_o *)sub_B0D974(System_IO_BinaryWriter_TypeInfo, v16, v17);
  System_IO_BinaryWriter___ctor_39036700(v18, v15, 0LL);
  v19 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v19 = EventRandomMissionClearManager_TypeInfo;
  }
  v20 = v19->static_fields;
  clearRandomMissionList = v20->clearRandomMissionList;
  if ( !clearRandomMissionList )
    sub_B0D97C(v19);
  if ( !v18 )
    sub_B0D97C(v19);
  size = clearRandomMissionList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v18->klass->vtable._22_Write.method)(
    v18,
    v20->SAVE_DATA_VERSION,
    v18->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v18->klass->vtable._8_Write.method)(
    v18,
    EventRandomMissionClearManager_TypeInfo->static_fields->isContinueDevice,
    v18->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
    v18,
    (unsigned int)size,
    v18->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v23 = 0LL;
    do
    {
      v24 = EventRandomMissionClearManager_TypeInfo;
      if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
        v24 = EventRandomMissionClearManager_TypeInfo;
      }
      v25 = v24->static_fields->clearRandomMissionList;
      if ( !v25 )
        sub_B0D97C(v24);
      if ( v25->fields._size <= (unsigned int)v23 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v26 = v25->fields._items->m_Items[v23];
      if ( !v26 )
        sub_B0D97C(v24);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
        v18,
        (unsigned int)v26->fields.missionId,
        v18->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v18->klass->vtable._22_Write.method)(
        v18,
        v26->fields.name,
        v18->klass[1]._1.image);
      ++v23;
    }
    while ( (int)v23 < size );
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v18->klass->vtable._5_Close.method)(
    v18,
    v18->klass->vtable._6_Dispose.methodPtr);
  v36[0] = 158;
  v37 = 1;
  klass = v18->klass;
  if ( *(_WORD *)&v18->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v28;
      p_offset += 4;
      if ( v28 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v30 = sub_AA67A0(v18, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v30)(v18, *(_QWORD *)(v30 + 8));
  v37 = 0;
  v36[0] = 170;
  v31 = ++v37;
  if ( v15 )
  {
    v32 = v15->klass;
    if ( *(_WORD *)&v15->klass->_2.bitflags1 )
    {
      v33 = 0LL;
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
      {
        ++v33;
        v34 += 4;
        if ( v33 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
          goto LABEL_46;
      }
      v35 = (__int64)(&v32->vtable._0_Equals.method + 2 * *v34);
    }
    else
    {
LABEL_46:
      v35 = sub_AA67A0(v15, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v35)(v15, *(_QWORD *)(v35 + 8));
  }
  if ( v31 )
  {
    if ( v36[v31 - 1] == 170 )
      v37 = v31 - 1;
  }
  return 1;
}