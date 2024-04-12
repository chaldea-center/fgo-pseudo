void __fastcall EventRandomMissionClearManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  EventRandomMissionClearManager_c *v9; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  struct EventRandomMissionClearManager_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42B0459 & 1) == 0 )
  {
    sub_B52984(&EventRandomMissionClearManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ClearRandomMissionInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_ClearRandomMissionInfo__TypeInfo);
    sub_B52984(&StringLiteral_6669/*"Fgo_20211029"*/);
    byte_42B0459 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventRandomMissionClearManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6669/*"Fgo_20211029"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6669/*"Fgo_20211029"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = EventRandomMissionClearManager_TypeInfo;
  EventRandomMissionClearManager_TypeInfo->static_fields->LIST_MAX = 100;
  v9->static_fields->isModify = 0;
  v9->static_fields->isContinueDevice = 0;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ClearRandomMissionInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo___ctor__);
  v11 = EventRandomMissionClearManager_TypeInfo->static_fields;
  v11->clearRandomMissionList = (struct System_Collections_Generic_List_ClearRandomMissionInfo__o *)v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&v11->clearRandomMissionList,
    (System_Int32_array **)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall EventRandomMissionClearManager___ctor(EventRandomMissionClearManager_o *this, const MethodInfo *method)
{
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0LL);
}


void __fastcall EventRandomMissionClearManager__AddClearRandomMissionInfo(
        ClearRandomMissionInfo_o *info,
        const MethodInfo *method)
{
  EventRandomMissionClearManager_c *v3; // x0
  EventRandomMissionClearManager_c *clearRandomMissionList; // x0
  struct EventRandomMissionClearManager_StaticFields *static_fields; // x9
  System_Collections_Generic_List_XWeaponTrail_Element__o *v6; // x8

  if ( (byte_42B0455 & 1) == 0 )
  {
    sub_B52984(&EventRandomMissionClearManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__RemoveAt__);
    sub_B52984(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__);
    byte_42B0455 = 1;
  }
  v3 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v3 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = (EventRandomMissionClearManager_c *)v3->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    goto LABEL_17;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)clearRandomMissionList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)info,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__);
  clearRandomMissionList = EventRandomMissionClearManager_TypeInfo;
  static_fields = EventRandomMissionClearManager_TypeInfo->static_fields;
  v6 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)static_fields->clearRandomMissionList;
  if ( !v6 )
    goto LABEL_17;
  if ( v6->fields._size > static_fields->LIST_MAX )
  {
    if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
      || EventRandomMissionClearManager_TypeInfo->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo),
          (v6 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)EventRandomMissionClearManager_TypeInfo->static_fields->clearRandomMissionList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
        v6,
        0,
        (const MethodInfo_2FF32F4 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__RemoveAt__);
      clearRandomMissionList = EventRandomMissionClearManager_TypeInfo;
      goto LABEL_13;
    }
LABEL_17:
    sub_B52A5C(clearRandomMissionList, method);
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
  EventRandomMissionClearManager_c *v2; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *clearRandomMissionList; // x8

  if ( (byte_42B0454 & 1) == 0 )
  {
    sub_B52984(&EventRandomMissionClearManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__);
    byte_42B0454 = 1;
  }
  v2 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v2 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    goto LABEL_16;
  if ( clearRandomMissionList->fields._size >= 1 )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) == 0
      || v2->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v2),
          (clearRandomMissionList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)EventRandomMissionClearManager_TypeInfo->static_fields->clearRandomMissionList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        clearRandomMissionList,
        (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__Clear__);
      v2 = EventRandomMissionClearManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B52A5C(v2, v1);
  }
LABEL_12:
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = EventRandomMissionClearManager_TypeInfo;
  }
  v2->static_fields->isContinueDevice = 0;
  v2->static_fields->isModify = 1;
}


void __fastcall EventRandomMissionClearManager__DeleteSaveData(const MethodInfo *method)
{
  EventRandomMissionClearManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_42B0452 & 1) == 0 )
  {
    sub_B52984(&EventRandomMissionClearManager_TypeInfo);
    byte_42B0452 = 1;
  }
  v1 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  }
  SaveFileName = EventRandomMissionClearManager__GetSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


ClearRandomMissionInfo_array *__fastcall EventRandomMissionClearManager__GetClearRandomMissionInfos(
        const MethodInfo *method)
{
  __int64 v1; // x1
  EventRandomMissionClearManager_c *v2; // x0
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *clearRandomMissionList; // x0

  if ( (byte_42B0456 & 1) == 0 )
  {
    sub_B52984(&EventRandomMissionClearManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__ToArray__);
    byte_42B0456 = 1;
  }
  v2 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v2 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v2->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    sub_B52A5C(0LL, v1);
  return (ClearRandomMissionInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           clearRandomMissionList,
                                           (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__ToArray__);
}


System_String_o *__fastcall EventRandomMissionClearManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42B0451 & 1) == 0 )
  {
    sub_B52984(&AndroidUtil_TypeInfo);
    sub_B52984(&DatFileName_TypeInfo);
    sub_B52984(&StringLiteral_886/*"/"*/);
    byte_42B0451 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(36, 0LL);
  return System_String__Concat_44570600(DatFileSavePath, (System_String_o *)StringLiteral_886/*"/"*/, FileName, 0LL);
}


void __fastcall EventRandomMissionClearManager__Initialize(const MethodInfo *method)
{
  EventRandomMissionClearManager_c *v1; // x0

  if ( (byte_42B0453 & 1) == 0 )
  {
    sub_B52984(&EventRandomMissionClearManager_TypeInfo);
    byte_42B0453 = 1;
  }
  v1 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  }
  EventRandomMissionClearManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall EventRandomMissionClearManager__ReadData(const MethodInfo *method)
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
  __int64 v13; // x3
  char v14; // w21
  EventRandomMissionClearManager_c *v15; // x0
  int v16; // w0
  System_IO_BinaryReader_c *klass; // x8
  int v18; // w21
  int v19; // w26
  int v20; // w23
  System_Int32_array **v21; // x24
  __int64 v22; // x22
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  EventRandomMissionClearManager_c *v32; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *clearRandomMissionList; // x0
  System_IO_BinaryReader_c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 v37; // x0
  __int64 v38; // x3
  System_IO_Stream_c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  EventRandomMissionClearManager_c *v43; // x0
  int v44; // [xsp+8h] [xbp-68h]

  if ( (byte_42B0457 & 1) == 0 )
  {
    sub_B52984(&System_IO_BinaryReader_TypeInfo);
    sub_B52984(&ClearRandomMissionInfo_TypeInfo);
    sub_B52984(&EventRandomMissionClearManager_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__);
    sub_B52984(&ManagerConfig_TypeInfo);
    byte_42B0457 = 1;
  }
  v1 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v1 = EventRandomMissionClearManager_TypeInfo;
  }
  v1->static_fields->isModify = 0;
  v2 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 1;
  v4 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  }
  SaveFileName = EventRandomMissionClearManager__GetSaveFileName((const MethodInfo *)v4);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v43 = EventRandomMissionClearManager_TypeInfo;
    if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    }
    EventRandomMissionClearManager__ClearSaveDataList((const MethodInfo *)v43);
    return 0;
  }
  v6 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  }
  EventRandomMissionClearManager__ClearSaveDataList((const MethodInfo *)v6);
  v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v8 = (System_IO_BinaryReader_o *)sub_B52A54(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v8, v7, 0LL);
  if ( !v8 )
    sub_B52A5C(v9, v10);
  v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._22_ReadString.method)(
                             v8,
                             v8->klass->vtable._23_ReadChars.methodPtr);
  v12 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v12 = EventRandomMissionClearManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v12->static_fields->SAVE_DATA_VERSION, v11, 0LL) )
  {
    v44 = 213;
  }
  else
  {
    v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._9_ReadBoolean.method)(
            v8,
            v8->klass->vtable._10_ReadByte.methodPtr);
    v15 = EventRandomMissionClearManager_TypeInfo;
    if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      v15 = EventRandomMissionClearManager_TypeInfo;
    }
    v15->static_fields->isContinueDevice = v14 & 1;
    v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
            v8,
            v8->klass->vtable._16_ReadUInt32.methodPtr);
    klass = v8->klass;
    v18 = v16;
    if ( v16 >= 1 )
    {
      v19 = 0;
      do
      {
        v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._15_ReadInt32.method)(
                v8,
                klass->vtable._16_ReadUInt32.methodPtr);
        v21 = (System_Int32_array **)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._22_ReadString.method)(
                                       v8,
                                       v8->klass->vtable._23_ReadChars.methodPtr);
        v22 = sub_B52A54(ClearRandomMissionInfo_TypeInfo);
        ClearRandomMissionInfo___ctor((ClearRandomMissionInfo_o *)v22, 0LL);
        if ( !v22 )
          sub_B52A5C(v23, v24);
        *(_QWORD *)(v22 + 24) = v21;
        *(_DWORD *)(v22 + 16) = v20;
        sub_B52920((BattleServantConfConponent_o *)(v22 + 24), v21, v25, v26, v27, v28, v29, v30);
        v32 = EventRandomMissionClearManager_TypeInfo;
        if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
          v32 = EventRandomMissionClearManager_TypeInfo;
        }
        clearRandomMissionList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v32->static_fields->clearRandomMissionList;
        if ( !clearRandomMissionList )
          sub_B52A5C(0LL, v31);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          clearRandomMissionList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__);
        klass = v8->klass;
        ++v19;
      }
      while ( v19 < v18 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._6_Close.method)(
      v8,
      klass->vtable._7_Dispose.methodPtr);
    v44 = 186;
  }
  v34 = v8->klass;
  if ( *(_WORD *)&v8->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    p_offset = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      p_offset += 4;
      if ( v35 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
        goto LABEL_40;
    }
    v37 = (__int64)(&v34->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_40:
    v37 = sub_AEB880(v8, System_IDisposable_TypeInfo, 0LL, v13);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v37)(v8, *(_QWORD *)(v37 + 8));
  if ( v44 != 186 )
  {
    if ( !v7 )
      return v44 == 198;
LABEL_46:
    v39 = v7->klass;
    if ( *(_WORD *)&v7->klass->_2.bitflags1 )
    {
      v40 = 0LL;
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
      {
        ++v40;
        v41 += 4;
        if ( v40 >= *(unsigned __int16 *)&v7->klass->_2.bitflags1 )
          goto LABEL_50;
      }
      v42 = (__int64)(&v39->vtable._0_Equals.method + 2 * *v41);
    }
    else
    {
LABEL_50:
      v42 = sub_AEB880(v7, System_IDisposable_TypeInfo, 0LL, v38);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v42)(v7, *(_QWORD *)(v42 + 8));
    return v44 == 198;
  }
  v44 = 198;
  if ( v7 )
    goto LABEL_46;
  return v44 == 198;
}


bool __fastcall EventRandomMissionClearManager__WriteData(const MethodInfo *method)
{
  EventRandomMissionClearManager_c *v1; // x0
  struct EventRandomMissionClearManager_StaticFields *static_fields; // x8
  bool *p_isModify; // x8
  _BOOL4 isModify; // t1
  EventRandomMissionClearManager_c *v6; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v8; // x19
  System_IO_BinaryWriter_o *v9; // x20
  __int64 v10; // x1
  EventRandomMissionClearManager_c *v11; // x0
  struct EventRandomMissionClearManager_StaticFields *v12; // x8
  struct System_Collections_Generic_List_ClearRandomMissionInfo__o *clearRandomMissionList; // x9
  int size; // w21
  __int64 v15; // x1
  __int64 v16; // x23
  EventRandomMissionClearManager_c *v17; // x0
  struct System_Collections_Generic_List_ClearRandomMissionInfo__o *v18; // x24
  ClearRandomMissionInfo_o *v19; // x24
  __int64 v20; // x3
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 v24; // x0
  __int64 v25; // x3
  int v26; // w22
  System_IO_Stream_c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  ManagerConfig_c *v31; // x0
  int v32[4]; // [xsp+8h] [xbp-48h]
  int v33; // [xsp+18h] [xbp-38h]

  if ( (byte_42B0458 & 1) == 0 )
  {
    sub_B52984(&System_IO_BinaryWriter_TypeInfo);
    sub_B52984(&EventRandomMissionClearManager_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Item__);
    sub_B52984(&ManagerConfig_TypeInfo);
    byte_42B0458 = 1;
  }
  v33 = 0;
  v1 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v1 = EventRandomMissionClearManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  isModify = static_fields->isModify;
  p_isModify = &static_fields->isModify;
  if ( !isModify )
    return 0;
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    p_isModify = &EventRandomMissionClearManager_TypeInfo->static_fields->isModify;
  }
  *p_isModify = 0;
  v31 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v31 = ManagerConfig_TypeInfo;
  }
  if ( v31->static_fields->UseMock )
    return 0;
  v6 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  }
  SaveFileName = EventRandomMissionClearManager__GetSaveFileName((const MethodInfo *)v6);
  v8 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v9 = (System_IO_BinaryWriter_o *)sub_B52A54(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_40252128(v9, v8, 0LL);
  v11 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v11 = EventRandomMissionClearManager_TypeInfo;
  }
  v12 = v11->static_fields;
  clearRandomMissionList = v12->clearRandomMissionList;
  if ( !clearRandomMissionList )
    sub_B52A5C(v11, v10);
  if ( !v9 )
    sub_B52A5C(v11, v10);
  size = clearRandomMissionList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v9->klass->vtable._22_Write.method)(
    v9,
    v12->SAVE_DATA_VERSION,
    v9->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v9->klass->vtable._8_Write.method)(
    v9,
    EventRandomMissionClearManager_TypeInfo->static_fields->isContinueDevice,
    v9->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v9->klass->vtable._17_Write.method)(
    v9,
    (unsigned int)size,
    v9->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v16 = 0LL;
    do
    {
      v17 = EventRandomMissionClearManager_TypeInfo;
      if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
        v17 = EventRandomMissionClearManager_TypeInfo;
      }
      v18 = v17->static_fields->clearRandomMissionList;
      if ( !v18 )
        sub_B52A5C(v17, v15);
      if ( v18->fields._size <= (unsigned int)v16 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v19 = v18->fields._items->m_Items[v16];
      if ( !v19 )
        sub_B52A5C(v17, v15);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v9->klass->vtable._17_Write.method)(
        v9,
        (unsigned int)v19->fields.missionId,
        v9->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v9->klass->vtable._22_Write.method)(
        v9,
        v19->fields.name,
        v9->klass[1]._1.image);
      ++v16;
    }
    while ( (int)v16 < size );
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v9->klass->vtable._5_Close.method)(
    v9,
    v9->klass->vtable._6_Dispose.methodPtr);
  v32[0] = 158;
  v33 = 1;
  klass = v9->klass;
  if ( *(_WORD *)&v9->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      p_offset += 4;
      if ( v22 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v24 = sub_AEB880(v9, System_IDisposable_TypeInfo, 0LL, v20);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v24)(v9, *(_QWORD *)(v24 + 8));
  v33 = 0;
  v32[0] = 170;
  v26 = ++v33;
  if ( v8 )
  {
    v27 = v8->klass;
    if ( *(_WORD *)&v8->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
          goto LABEL_46;
      }
      v30 = (__int64)(&v27->vtable._0_Equals.method + 2 * *v29);
    }
    else
    {
LABEL_46:
      v30 = sub_AEB880(v8, System_IDisposable_TypeInfo, 0LL, v25);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v30)(v8, *(_QWORD *)(v30 + 8));
  }
  if ( v26 )
  {
    if ( v32[v26 - 1] == 170 )
      v33 = v26 - 1;
  }
  return 1;
}