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

  if ( (byte_43525EA & 1) == 0 )
  {
    sub_B70694(&EventRandomMissionClearManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ClearRandomMissionInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_ClearRandomMissionInfo__TypeInfo);
    sub_B70694(&StringLiteral_6718/*"Fgo_20211029"*/);
    byte_43525EA = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventRandomMissionClearManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6718/*"Fgo_20211029"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6718/*"Fgo_20211029"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = EventRandomMissionClearManager_TypeInfo;
  EventRandomMissionClearManager_TypeInfo->static_fields->LIST_MAX = 100;
  v9->static_fields->isModify = 0;
  v9->static_fields->isContinueDevice = 0;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ClearRandomMissionInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo___ctor__);
  v11 = EventRandomMissionClearManager_TypeInfo->static_fields;
  v11->clearRandomMissionList = (struct System_Collections_Generic_List_ClearRandomMissionInfo__o *)v10;
  sub_B70630(
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

  if ( (byte_43525E6 & 1) == 0 )
  {
    sub_B70694(&EventRandomMissionClearManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__);
    byte_43525E6 = 1;
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
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__);
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
        (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__RemoveAt__);
      clearRandomMissionList = EventRandomMissionClearManager_TypeInfo;
      goto LABEL_13;
    }
LABEL_17:
    sub_B7076C(clearRandomMissionList, method);
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

  if ( (byte_43525E5 & 1) == 0 )
  {
    sub_B70694(&EventRandomMissionClearManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__);
    byte_43525E5 = 1;
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
        (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__Clear__);
      v2 = EventRandomMissionClearManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B7076C(v2, v1);
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

  if ( (byte_43525E3 & 1) == 0 )
  {
    sub_B70694(&EventRandomMissionClearManager_TypeInfo);
    byte_43525E3 = 1;
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

  if ( (byte_43525E7 & 1) == 0 )
  {
    sub_B70694(&EventRandomMissionClearManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__ToArray__);
    byte_43525E7 = 1;
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
    sub_B7076C(0LL, v1);
  return (ClearRandomMissionInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           clearRandomMissionList,
                                           (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__ToArray__);
}


System_String_o *__fastcall EventRandomMissionClearManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_43525E2 & 1) == 0 )
  {
    sub_B70694(&AndroidUtil_TypeInfo);
    sub_B70694(&DatFileName_TypeInfo);
    sub_B70694(&StringLiteral_890/*"/"*/);
    byte_43525E2 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(36, 0LL);
  return System_String__Concat_44760452(DatFileSavePath, (System_String_o *)StringLiteral_890/*"/"*/, FileName, 0LL);
}


void __fastcall EventRandomMissionClearManager__Initialize(const MethodInfo *method)
{
  EventRandomMissionClearManager_c *v1; // x0

  if ( (byte_43525E4 & 1) == 0 )
  {
    sub_B70694(&EventRandomMissionClearManager_TypeInfo);
    byte_43525E4 = 1;
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
  char v13; // w21
  EventRandomMissionClearManager_c *v14; // x0
  int v15; // w0
  System_IO_BinaryReader_c *klass; // x8
  int v17; // w21
  int v18; // w26
  int v19; // w23
  System_Int32_array **v20; // x24
  __int64 v21; // x22
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  EventRandomMissionClearManager_c *v31; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *clearRandomMissionList; // x0
  System_IO_BinaryReader_c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 v36; // x0
  System_IO_Stream_c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  EventRandomMissionClearManager_c *v41; // x0
  int v42; // [xsp+8h] [xbp-68h]

  if ( (byte_43525E8 & 1) == 0 )
  {
    sub_B70694(&System_IO_BinaryReader_TypeInfo);
    sub_B70694(&ClearRandomMissionInfo_TypeInfo);
    sub_B70694(&EventRandomMissionClearManager_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__);
    sub_B70694(&ManagerConfig_TypeInfo);
    byte_43525E8 = 1;
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
    v41 = EventRandomMissionClearManager_TypeInfo;
    if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    }
    EventRandomMissionClearManager__ClearSaveDataList((const MethodInfo *)v41);
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
  v8 = (System_IO_BinaryReader_o *)sub_B70764(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v8, v7, 0LL);
  if ( !v8 )
    sub_B7076C(v9, v10);
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
    v42 = 213;
  }
  else
  {
    v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._9_ReadBoolean.method)(
            v8,
            v8->klass->vtable._10_ReadByte.methodPtr);
    v14 = EventRandomMissionClearManager_TypeInfo;
    if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      v14 = EventRandomMissionClearManager_TypeInfo;
    }
    v14->static_fields->isContinueDevice = v13 & 1;
    v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
            v8,
            v8->klass->vtable._16_ReadUInt32.methodPtr);
    klass = v8->klass;
    v17 = v15;
    if ( v15 >= 1 )
    {
      v18 = 0;
      do
      {
        v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._15_ReadInt32.method)(
                v8,
                klass->vtable._16_ReadUInt32.methodPtr);
        v20 = (System_Int32_array **)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._22_ReadString.method)(
                                       v8,
                                       v8->klass->vtable._23_ReadChars.methodPtr);
        v21 = sub_B70764(ClearRandomMissionInfo_TypeInfo);
        ClearRandomMissionInfo___ctor((ClearRandomMissionInfo_o *)v21, 0LL);
        if ( !v21 )
          sub_B7076C(v22, v23);
        *(_QWORD *)(v21 + 24) = v20;
        *(_DWORD *)(v21 + 16) = v19;
        sub_B70630((BattleServantConfConponent_o *)(v21 + 24), v20, v24, v25, v26, v27, v28, v29);
        v31 = EventRandomMissionClearManager_TypeInfo;
        if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
          v31 = EventRandomMissionClearManager_TypeInfo;
        }
        clearRandomMissionList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v31->static_fields->clearRandomMissionList;
        if ( !clearRandomMissionList )
          sub_B7076C(0LL, v30);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          clearRandomMissionList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__);
        klass = v8->klass;
        ++v18;
      }
      while ( v18 < v17 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._6_Close.method)(
      v8,
      klass->vtable._7_Dispose.methodPtr);
    v42 = 186;
  }
  v33 = v8->klass;
  if ( *(_WORD *)&v8->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    p_offset = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      p_offset += 4;
      if ( v34 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
        goto LABEL_40;
    }
    v36 = (__int64)(&v33->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_40:
    v36 = sub_B08590(v8, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v36)(v8, *(_QWORD *)(v36 + 8));
  if ( v42 != 186 )
  {
    if ( !v7 )
      return v42 == 198;
LABEL_46:
    v37 = v7->klass;
    if ( *(_WORD *)&v7->klass->_2.bitflags1 )
    {
      v38 = 0LL;
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
      {
        ++v38;
        v39 += 4;
        if ( v38 >= *(unsigned __int16 *)&v7->klass->_2.bitflags1 )
          goto LABEL_50;
      }
      v40 = (__int64)(&v37->vtable._0_Equals.method + 2 * *v39);
    }
    else
    {
LABEL_50:
      v40 = sub_B08590(v7, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v40)(v7, *(_QWORD *)(v40 + 8));
    return v42 == 198;
  }
  v42 = 198;
  if ( v7 )
    goto LABEL_46;
  return v42 == 198;
}


bool __fastcall EventRandomMissionClearManager__WriteData(const MethodInfo *method)
{
  EventRandomMissionClearManager_c *v1; // x0
  struct EventRandomMissionClearManager_StaticFields *static_fields; // x8
  bool *p_isModify; // x8
  _BOOL4 isModify; // t1
  ManagerConfig_c *v5; // x0
  EventRandomMissionClearManager_c *v7; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v9; // x19
  System_IO_BinaryWriter_o *v10; // x20
  __int64 v11; // x1
  EventRandomMissionClearManager_c *v12; // x0
  struct EventRandomMissionClearManager_StaticFields *v13; // x8
  struct System_Collections_Generic_List_ClearRandomMissionInfo__o *clearRandomMissionList; // x9
  int size; // w21
  __int64 v16; // x1
  __int64 v17; // x23
  EventRandomMissionClearManager_c *v18; // x0
  struct System_Collections_Generic_List_ClearRandomMissionInfo__o *v19; // x24
  ClearRandomMissionInfo_o *v20; // x24
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 v24; // x0
  int v25; // w22
  System_IO_Stream_c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  int v30[4]; // [xsp+8h] [xbp-48h]
  int v31; // [xsp+18h] [xbp-38h]

  if ( (byte_43525E9 & 1) == 0 )
  {
    sub_B70694(&System_IO_BinaryWriter_TypeInfo);
    sub_B70694(&EventRandomMissionClearManager_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Item__);
    sub_B70694(&ManagerConfig_TypeInfo);
    byte_43525E9 = 1;
  }
  v31 = 0;
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
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    return 0;
  v7 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  }
  SaveFileName = EventRandomMissionClearManager__GetSaveFileName((const MethodInfo *)v7);
  v9 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v10 = (System_IO_BinaryWriter_o *)sub_B70764(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_39879612(v10, v9, 0LL);
  v12 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v12 = EventRandomMissionClearManager_TypeInfo;
  }
  v13 = v12->static_fields;
  clearRandomMissionList = v13->clearRandomMissionList;
  if ( !clearRandomMissionList )
    sub_B7076C(v12, v11);
  if ( !v10 )
    sub_B7076C(v12, v11);
  size = clearRandomMissionList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v10->klass->vtable._22_Write.method)(
    v10,
    v13->SAVE_DATA_VERSION,
    v10->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v10->klass->vtable._8_Write.method)(
    v10,
    EventRandomMissionClearManager_TypeInfo->static_fields->isContinueDevice,
    v10->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
    v10,
    (unsigned int)size,
    v10->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v17 = 0LL;
    do
    {
      v18 = EventRandomMissionClearManager_TypeInfo;
      if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
        v18 = EventRandomMissionClearManager_TypeInfo;
      }
      v19 = v18->static_fields->clearRandomMissionList;
      if ( !v19 )
        sub_B7076C(v18, v16);
      if ( v19->fields._size <= (unsigned int)v17 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v20 = v19->fields._items->m_Items[v17];
      if ( !v20 )
        sub_B7076C(v18, v16);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
        v10,
        (unsigned int)v20->fields.missionId,
        v10->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v10->klass->vtable._22_Write.method)(
        v10,
        v20->fields.name,
        v10->klass[1]._1.image);
      ++v17;
    }
    while ( (int)v17 < size );
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v10->klass->vtable._5_Close.method)(
    v10,
    v10->klass->vtable._6_Dispose.methodPtr);
  v30[0] = 158;
  v31 = 1;
  klass = v10->klass;
  if ( *(_WORD *)&v10->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      p_offset += 4;
      if ( v22 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v24 = sub_B08590(v10, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v24)(v10, *(_QWORD *)(v24 + 8));
  v31 = 0;
  v30[0] = 170;
  v25 = ++v31;
  if ( v9 )
  {
    v26 = v9->klass;
    if ( *(_WORD *)&v9->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
          goto LABEL_46;
      }
      v29 = (__int64)(&v26->vtable._0_Equals.method + 2 * *v28);
    }
    else
    {
LABEL_46:
      v29 = sub_B08590(v9, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v29)(v9, *(_QWORD *)(v29 + 8));
  }
  if ( v25 )
  {
    if ( v30[v25 - 1] == 170 )
      v31 = v25 - 1;
  }
  return 1;
}