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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct EventRandomMissionClearManager_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4188739 & 1) == 0 )
  {
    sub_B2C35C(&EventRandomMissionClearManager_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClearRandomMissionInfo___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_ClearRandomMissionInfo__TypeInfo, v9);
    sub_B2C35C(&StringLiteral_6626/*"Fgo_20211029"*/, v10);
    byte_4188739 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventRandomMissionClearManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6626/*"Fgo_20211029"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6626/*"Fgo_20211029"*/;
  sub_B2C2F8(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = EventRandomMissionClearManager_TypeInfo;
  EventRandomMissionClearManager_TypeInfo->static_fields->LIST_MAX = 100;
  v13->static_fields->isModify = 0;
  v13->static_fields->isContinueDevice = 0;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ClearRandomMissionInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ClearRandomMissionInfo___ctor__);
  v15 = EventRandomMissionClearManager_TypeInfo->static_fields;
  v15->clearRandomMissionList = (struct System_Collections_Generic_List_ClearRandomMissionInfo__o *)v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v15->clearRandomMissionList,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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

  if ( (byte_4188735 & 1) == 0 )
  {
    sub_B2C35C(&EventRandomMissionClearManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__RemoveAt__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__, v5);
    byte_4188735 = 1;
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
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__);
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
        (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__RemoveAt__);
      clearRandomMissionList = EventRandomMissionClearManager_TypeInfo;
      goto LABEL_13;
    }
LABEL_17:
    sub_B2C434(clearRandomMissionList, method);
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

  if ( (byte_4188734 & 1) == 0 )
  {
    sub_B2C35C(&EventRandomMissionClearManager_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Clear__, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__, v3);
    byte_4188734 = 1;
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
        (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__Clear__);
      v4 = EventRandomMissionClearManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B2C434(v4, v1);
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

  if ( (byte_4188732 & 1) == 0 )
  {
    sub_B2C35C(&EventRandomMissionClearManager_TypeInfo, v1);
    byte_4188732 = 1;
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

  if ( (byte_4188736 & 1) == 0 )
  {
    sub_B2C35C(&EventRandomMissionClearManager_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__ToArray__, v2);
    byte_4188736 = 1;
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
    sub_B2C434(0LL, v1);
  return (ClearRandomMissionInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           clearRandomMissionList,
                                           (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__ToArray__);
}


System_String_o *__fastcall EventRandomMissionClearManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4188731 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&DatFileName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_4188731 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(36, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}


void __fastcall EventRandomMissionClearManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  EventRandomMissionClearManager_c *v2; // x0

  if ( (byte_4188733 & 1) == 0 )
  {
    sub_B2C35C(&EventRandomMissionClearManager_TypeInfo, v1);
    byte_4188733 = 1;
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
  System_IO_BinaryReader_o *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x21
  EventRandomMissionClearManager_c *v18; // x0
  __int64 v19; // x3
  char v20; // w21
  EventRandomMissionClearManager_c *v21; // x0
  int v22; // w0
  System_IO_BinaryReader_c *klass; // x8
  int v24; // w21
  int v25; // w26
  int v26; // w23
  System_Int32_array **v27; // x24
  __int64 v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x1
  EventRandomMissionClearManager_c *v38; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *clearRandomMissionList; // x0
  System_IO_BinaryReader_c *v40; // x8
  unsigned __int64 v41; // x10
  int32_t *p_offset; // x11
  __int64 v43; // x0
  __int64 v44; // x3
  System_IO_Stream_c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0
  EventRandomMissionClearManager_c *v49; // x0
  int v50; // [xsp+8h] [xbp-68h]

  if ( (byte_4188737 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B2C35C(&ClearRandomMissionInfo_TypeInfo, v2);
    sub_B2C35C(&EventRandomMissionClearManager_TypeInfo, v3);
    sub_B2C35C(&System_IDisposable_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__, v5);
    sub_B2C35C(&ManagerConfig_TypeInfo, v6);
    byte_4188737 = 1;
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
    v49 = EventRandomMissionClearManager_TypeInfo;
    if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    }
    EventRandomMissionClearManager__ClearSaveDataList((const MethodInfo *)v49);
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
  v14 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v14, v13, 0LL);
  if ( !v14 )
    sub_B2C434(v15, v16);
  v17 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._22_ReadString.method)(
                             v14,
                             v14->klass->vtable._23_ReadChars.methodPtr);
  v18 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v18 = EventRandomMissionClearManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v18->static_fields->SAVE_DATA_VERSION, v17, 0LL) )
  {
    v50 = 213;
  }
  else
  {
    v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._9_ReadBoolean.method)(
            v14,
            v14->klass->vtable._10_ReadByte.methodPtr);
    v21 = EventRandomMissionClearManager_TypeInfo;
    if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      v21 = EventRandomMissionClearManager_TypeInfo;
    }
    v21->static_fields->isContinueDevice = v20 & 1;
    v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
            v14,
            v14->klass->vtable._16_ReadUInt32.methodPtr);
    klass = v14->klass;
    v24 = v22;
    if ( v22 >= 1 )
    {
      v25 = 0;
      do
      {
        v26 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._15_ReadInt32.method)(
                v14,
                klass->vtable._16_ReadUInt32.methodPtr);
        v27 = (System_Int32_array **)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._22_ReadString.method)(
                                       v14,
                                       v14->klass->vtable._23_ReadChars.methodPtr);
        v28 = sub_B2C42C(ClearRandomMissionInfo_TypeInfo);
        ClearRandomMissionInfo___ctor((ClearRandomMissionInfo_o *)v28, 0LL);
        if ( !v28 )
          sub_B2C434(v29, v30);
        *(_QWORD *)(v28 + 24) = v27;
        *(_DWORD *)(v28 + 16) = v26;
        sub_B2C2F8((BattleServantConfConponent_o *)(v28 + 24), v27, v31, v32, v33, v34, v35, v36);
        v38 = EventRandomMissionClearManager_TypeInfo;
        if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
          v38 = EventRandomMissionClearManager_TypeInfo;
        }
        clearRandomMissionList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v38->static_fields->clearRandomMissionList;
        if ( !clearRandomMissionList )
          sub_B2C434(0LL, v37);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          clearRandomMissionList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__);
        klass = v14->klass;
        ++v25;
      }
      while ( v25 < v24 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._6_Close.method)(
      v14,
      klass->vtable._7_Dispose.methodPtr);
    v50 = 186;
  }
  v40 = v14->klass;
  if ( *(_WORD *)&v14->klass->_2.bitflags1 )
  {
    v41 = 0LL;
    p_offset = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v41;
      p_offset += 4;
      if ( v41 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
        goto LABEL_40;
    }
    v43 = (__int64)(&v40->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_40:
    v43 = sub_AC5258(v14, System_IDisposable_TypeInfo, 0LL, v19);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v43)(v14, *(_QWORD *)(v43 + 8));
  if ( v50 != 186 )
  {
    if ( !v13 )
      return v50 == 198;
LABEL_46:
    v45 = v13->klass;
    if ( *(_WORD *)&v13->klass->_2.bitflags1 )
    {
      v46 = 0LL;
      v47 = &v45->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
      {
        ++v46;
        v47 += 4;
        if ( v46 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
          goto LABEL_50;
      }
      v48 = (__int64)(&v45->vtable._0_Equals.method + 2 * *v47);
    }
    else
    {
LABEL_50:
      v48 = sub_AC5258(v13, System_IDisposable_TypeInfo, 0LL, v44);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v48)(v13, *(_QWORD *)(v48 + 8));
    return v50 == 198;
  }
  v50 = 198;
  if ( v13 )
    goto LABEL_46;
  return v50 == 198;
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
  System_IO_BinaryWriter_o *v16; // x20
  __int64 v17; // x1
  EventRandomMissionClearManager_c *v18; // x0
  struct EventRandomMissionClearManager_StaticFields *v19; // x8
  struct System_Collections_Generic_List_ClearRandomMissionInfo__o *clearRandomMissionList; // x9
  int size; // w21
  __int64 v22; // x1
  __int64 v23; // x23
  EventRandomMissionClearManager_c *v24; // x0
  struct System_Collections_Generic_List_ClearRandomMissionInfo__o *v25; // x24
  ClearRandomMissionInfo_o *v26; // x24
  __int64 v27; // x3
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 v31; // x0
  __int64 v32; // x3
  int v33; // w22
  System_IO_Stream_c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  int v38[4]; // [xsp+8h] [xbp-48h]
  int v39; // [xsp+18h] [xbp-38h]

  if ( (byte_4188738 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B2C35C(&EventRandomMissionClearManager_TypeInfo, v2);
    sub_B2C35C(&System_IDisposable_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Item__, v5);
    sub_B2C35C(&ManagerConfig_TypeInfo, v6);
    byte_4188738 = 1;
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
  v16 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_39287252(v16, v15, 0LL);
  v18 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v18 = EventRandomMissionClearManager_TypeInfo;
  }
  v19 = v18->static_fields;
  clearRandomMissionList = v19->clearRandomMissionList;
  if ( !clearRandomMissionList )
    sub_B2C434(v18, v17);
  if ( !v16 )
    sub_B2C434(v18, v17);
  size = clearRandomMissionList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v16->klass->vtable._22_Write.method)(
    v16,
    v19->SAVE_DATA_VERSION,
    v16->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v16->klass->vtable._8_Write.method)(
    v16,
    EventRandomMissionClearManager_TypeInfo->static_fields->isContinueDevice,
    v16->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
    v16,
    (unsigned int)size,
    v16->klass->vtable._18_Write.methodPtr);
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
        sub_B2C434(v24, v22);
      if ( v25->fields._size <= (unsigned int)v23 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v26 = v25->fields._items->m_Items[v23];
      if ( !v26 )
        sub_B2C434(v24, v22);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        (unsigned int)v26->fields.missionId,
        v16->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v16->klass->vtable._22_Write.method)(
        v16,
        v26->fields.name,
        v16->klass[1]._1.image);
      ++v23;
    }
    while ( (int)v23 < size );
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v16->klass->vtable._5_Close.method)(
    v16,
    v16->klass->vtable._6_Dispose.methodPtr);
  v38[0] = 158;
  v39 = 1;
  klass = v16->klass;
  if ( *(_WORD *)&v16->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      p_offset += 4;
      if ( v29 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v31 = sub_AC5258(v16, System_IDisposable_TypeInfo, 0LL, v27);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v31)(v16, *(_QWORD *)(v31 + 8));
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
      v37 = sub_AC5258(v15, System_IDisposable_TypeInfo, 0LL, v32);
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