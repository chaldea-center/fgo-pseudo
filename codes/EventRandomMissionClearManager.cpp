void __fastcall EventRandomMissionClearManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v18; // x1
  EventRandomMissionClearManager_c *v19; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  struct EventRandomMissionClearManager_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42E8E64 & 1) == 0 )
  {
    sub_B5D5C4(&EventRandomMissionClearManager_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClearRandomMissionInfo___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_ClearRandomMissionInfo__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6705/*"Fgo_20211029"*/, v14, v15, v16);
    byte_42E8E64 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventRandomMissionClearManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_6705/*"Fgo_20211029"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6705/*"Fgo_20211029"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = EventRandomMissionClearManager_TypeInfo;
  EventRandomMissionClearManager_TypeInfo->static_fields->LIST_MAX = 100;
  v19->static_fields->isModify = 0;
  v19->static_fields->isContinueDevice = 0;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ClearRandomMissionInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ClearRandomMissionInfo___ctor__);
  v21 = EventRandomMissionClearManager_TypeInfo->static_fields;
  v21->clearRandomMissionList = (struct System_Collections_Generic_List_ClearRandomMissionInfo__o *)v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v21->clearRandomMissionList,
    (System_Int32_array **)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}


void __fastcall EventRandomMissionClearManager___ctor(EventRandomMissionClearManager_o *this, const MethodInfo *method)
{
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0LL);
}


void __fastcall EventRandomMissionClearManager__AddClearRandomMissionInfo(
        ClearRandomMissionInfo_o *info,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  EventRandomMissionClearManager_c *v14; // x0
  EventRandomMissionClearManager_c *clearRandomMissionList; // x0
  struct EventRandomMissionClearManager_StaticFields *static_fields; // x9
  System_Collections_Generic_List_XWeaponTrail_Element__o *v17; // x8

  if ( (byte_42E8E60 & 1) == 0 )
  {
    sub_B5D5C4(&EventRandomMissionClearManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__RemoveAt__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__, v11, v12, v13);
    byte_42E8E60 = 1;
  }
  v14 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v14 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = (EventRandomMissionClearManager_c *)v14->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    goto LABEL_17;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)clearRandomMissionList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)info,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__);
  clearRandomMissionList = EventRandomMissionClearManager_TypeInfo;
  static_fields = EventRandomMissionClearManager_TypeInfo->static_fields;
  v17 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)static_fields->clearRandomMissionList;
  if ( !v17 )
    goto LABEL_17;
  if ( v17->fields._size > static_fields->LIST_MAX )
  {
    if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
      || EventRandomMissionClearManager_TypeInfo->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo),
          (v17 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)EventRandomMissionClearManager_TypeInfo->static_fields->clearRandomMissionList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
        v17,
        0,
        (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__RemoveAt__);
      clearRandomMissionList = EventRandomMissionClearManager_TypeInfo;
      goto LABEL_13;
    }
LABEL_17:
    sub_B5D69C(clearRandomMissionList, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  EventRandomMissionClearManager_c *v10; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *clearRandomMissionList; // x8

  if ( (byte_42E8E5F & 1) == 0 )
  {
    sub_B5D5C4(&EventRandomMissionClearManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Clear__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__, v7, v8, v9);
    byte_42E8E5F = 1;
  }
  v10 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v10 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    goto LABEL_16;
  if ( clearRandomMissionList->fields._size >= 1 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) == 0
      || v10->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v10),
          (clearRandomMissionList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)EventRandomMissionClearManager_TypeInfo->static_fields->clearRandomMissionList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        clearRandomMissionList,
        (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__Clear__);
      v10 = EventRandomMissionClearManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B5D69C(v10, v1);
  }
LABEL_12:
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = EventRandomMissionClearManager_TypeInfo;
  }
  v10->static_fields->isContinueDevice = 0;
  v10->static_fields->isModify = 1;
}


void __fastcall EventRandomMissionClearManager__DeleteSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  EventRandomMissionClearManager_c *v4; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_42E8E5D & 1) == 0 )
  {
    sub_B5D5C4(&EventRandomMissionClearManager_TypeInfo, v1, v2, v3);
    byte_42E8E5D = 1;
  }
  v4 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  }
  SaveFileName = EventRandomMissionClearManager__GetSaveFileName((const MethodInfo *)v4);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


ClearRandomMissionInfo_array *__fastcall EventRandomMissionClearManager__GetClearRandomMissionInfos(
        const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  EventRandomMissionClearManager_c *v7; // x0
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *clearRandomMissionList; // x0

  if ( (byte_42E8E61 & 1) == 0 )
  {
    sub_B5D5C4(&EventRandomMissionClearManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__ToArray__, v4, v5, v6);
    byte_42E8E61 = 1;
  }
  v7 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v7 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    sub_B5D69C(0LL, v1);
  return (ClearRandomMissionInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           clearRandomMissionList,
                                           (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__ToArray__);
}


System_String_o *__fastcall EventRandomMissionClearManager__GetSaveFileName(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42E8E5C & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&DatFileName_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v7, v8, v9);
    byte_42E8E5C = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(36, 0LL);
  return System_String__Concat_44580072(DatFileSavePath, (System_String_o *)StringLiteral_885/*"/"*/, FileName, 0LL);
}


void __fastcall EventRandomMissionClearManager__Initialize(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  EventRandomMissionClearManager_c *v4; // x0

  if ( (byte_42E8E5E & 1) == 0 )
  {
    sub_B5D5C4(&EventRandomMissionClearManager_TypeInfo, v1, v2, v3);
    byte_42E8E5E = 1;
  }
  v4 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  }
  EventRandomMissionClearManager__ReadData((const MethodInfo *)v4);
}


bool __fastcall EventRandomMissionClearManager__ReadData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  EventRandomMissionClearManager_c *v19; // x0
  ManagerConfig_c *v20; // x0
  EventRandomMissionClearManager_c *v22; // x0
  System_String_o *SaveFileName; // x19
  EventRandomMissionClearManager_c *v24; // x0
  System_IO_Stream_o *v25; // x19
  System_IO_BinaryReader_o *v26; // x20
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x21
  EventRandomMissionClearManager_c *v30; // x0
  __int64 v31; // x3
  char v32; // w21
  EventRandomMissionClearManager_c *v33; // x0
  int v34; // w0
  System_IO_BinaryReader_c *klass; // x8
  int v36; // w21
  int v37; // w26
  int v38; // w23
  System_Int32_array **v39; // x24
  __int64 v40; // x22
  __int64 v41; // x0
  __int64 v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x1
  EventRandomMissionClearManager_c *v50; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *clearRandomMissionList; // x0
  System_IO_BinaryReader_c *v52; // x8
  unsigned __int64 v53; // x10
  int32_t *p_offset; // x11
  __int64 v55; // x0
  __int64 v56; // x3
  System_IO_Stream_c *v57; // x8
  unsigned __int64 v58; // x10
  int32_t *v59; // x11
  __int64 v60; // x0
  EventRandomMissionClearManager_c *v61; // x0
  int v62; // [xsp+8h] [xbp-68h]

  if ( (byte_42E8E62 & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryReader_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&ClearRandomMissionInfo_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&EventRandomMissionClearManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__, v13, v14, v15);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v16, v17, v18);
    byte_42E8E62 = 1;
  }
  v19 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v19 = EventRandomMissionClearManager_TypeInfo;
  }
  v19->static_fields->isModify = 0;
  v20 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v20 = ManagerConfig_TypeInfo;
  }
  if ( v20->static_fields->UseMock )
    return 1;
  v22 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  }
  SaveFileName = EventRandomMissionClearManager__GetSaveFileName((const MethodInfo *)v22);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v61 = EventRandomMissionClearManager_TypeInfo;
    if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    }
    EventRandomMissionClearManager__ClearSaveDataList((const MethodInfo *)v61);
    return 0;
  }
  v24 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  }
  EventRandomMissionClearManager__ClearSaveDataList((const MethodInfo *)v24);
  v25 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v26 = (System_IO_BinaryReader_o *)sub_B5D694(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v26, v25, 0LL);
  if ( !v26 )
    sub_B5D69C(v27, v28);
  v29 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._22_ReadString.method)(
                             v26,
                             v26->klass->vtable._23_ReadChars.methodPtr);
  v30 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v30 = EventRandomMissionClearManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v30->static_fields->SAVE_DATA_VERSION, v29, 0LL) )
  {
    v62 = 213;
  }
  else
  {
    v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._9_ReadBoolean.method)(
            v26,
            v26->klass->vtable._10_ReadByte.methodPtr);
    v33 = EventRandomMissionClearManager_TypeInfo;
    if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      v33 = EventRandomMissionClearManager_TypeInfo;
    }
    v33->static_fields->isContinueDevice = v32 & 1;
    v34 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._15_ReadInt32.method)(
            v26,
            v26->klass->vtable._16_ReadUInt32.methodPtr);
    klass = v26->klass;
    v36 = v34;
    if ( v34 >= 1 )
    {
      v37 = 0;
      do
      {
        v38 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._15_ReadInt32.method)(
                v26,
                klass->vtable._16_ReadUInt32.methodPtr);
        v39 = (System_Int32_array **)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._22_ReadString.method)(
                                       v26,
                                       v26->klass->vtable._23_ReadChars.methodPtr);
        v40 = sub_B5D694(ClearRandomMissionInfo_TypeInfo);
        ClearRandomMissionInfo___ctor((ClearRandomMissionInfo_o *)v40, 0LL);
        if ( !v40 )
          sub_B5D69C(v41, v42);
        *(_QWORD *)(v40 + 24) = v39;
        *(_DWORD *)(v40 + 16) = v38;
        sub_B5D560((BattleServantConfConponent_o *)(v40 + 24), v39, v43, v44, v45, v46, v47, v48);
        v50 = EventRandomMissionClearManager_TypeInfo;
        if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
          v50 = EventRandomMissionClearManager_TypeInfo;
        }
        clearRandomMissionList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v50->static_fields->clearRandomMissionList;
        if ( !clearRandomMissionList )
          sub_B5D69C(0LL, v49);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          clearRandomMissionList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__);
        klass = v26->klass;
        ++v37;
      }
      while ( v37 < v36 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))klass->vtable._6_Close.method)(
      v26,
      klass->vtable._7_Dispose.methodPtr);
    v62 = 186;
  }
  v52 = v26->klass;
  if ( *(_WORD *)&v26->klass->_2.bitflags1 )
  {
    v53 = 0LL;
    p_offset = &v52->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v53;
      p_offset += 4;
      if ( v53 >= *(unsigned __int16 *)&v26->klass->_2.bitflags1 )
        goto LABEL_40;
    }
    v55 = (__int64)(&v52->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_40:
    v55 = sub_AF54C0(v26, System_IDisposable_TypeInfo, 0LL, v31);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v55)(v26, *(_QWORD *)(v55 + 8));
  if ( v62 != 186 )
  {
    if ( !v25 )
      return v62 == 198;
LABEL_46:
    v57 = v25->klass;
    if ( *(_WORD *)&v25->klass->_2.bitflags1 )
    {
      v58 = 0LL;
      v59 = &v57->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
      {
        ++v58;
        v59 += 4;
        if ( v58 >= *(unsigned __int16 *)&v25->klass->_2.bitflags1 )
          goto LABEL_50;
      }
      v60 = (__int64)(&v57->vtable._0_Equals.method + 2 * *v59);
    }
    else
    {
LABEL_50:
      v60 = sub_AF54C0(v25, System_IDisposable_TypeInfo, 0LL, v56);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v60)(v25, *(_QWORD *)(v60 + 8));
    return v62 == 198;
  }
  v62 = 198;
  if ( v25 )
    goto LABEL_46;
  return v62 == 198;
}


bool __fastcall EventRandomMissionClearManager__WriteData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  EventRandomMissionClearManager_c *v19; // x0
  struct EventRandomMissionClearManager_StaticFields *static_fields; // x8
  bool *p_isModify; // x8
  _BOOL4 isModify; // t1
  ManagerConfig_c *v23; // x0
  EventRandomMissionClearManager_c *v25; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v27; // x19
  System_IO_BinaryWriter_o *v28; // x20
  __int64 v29; // x1
  EventRandomMissionClearManager_c *v30; // x0
  struct EventRandomMissionClearManager_StaticFields *v31; // x8
  struct System_Collections_Generic_List_ClearRandomMissionInfo__o *clearRandomMissionList; // x9
  int size; // w21
  __int64 v34; // x1
  __int64 v35; // x23
  EventRandomMissionClearManager_c *v36; // x0
  struct System_Collections_Generic_List_ClearRandomMissionInfo__o *v37; // x24
  ClearRandomMissionInfo_o *v38; // x24
  __int64 v39; // x3
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v41; // x10
  int32_t *p_offset; // x11
  __int64 v43; // x0
  __int64 v44; // x3
  int v45; // w22
  System_IO_Stream_c *v46; // x8
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 v49; // x0
  int v50[4]; // [xsp+8h] [xbp-48h]
  int v51; // [xsp+18h] [xbp-38h]

  if ( (byte_42E8E63 & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryWriter_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&EventRandomMissionClearManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Item__, v13, v14, v15);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v16, v17, v18);
    byte_42E8E63 = 1;
  }
  v51 = 0;
  v19 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v19 = EventRandomMissionClearManager_TypeInfo;
  }
  static_fields = v19->static_fields;
  isModify = static_fields->isModify;
  p_isModify = &static_fields->isModify;
  if ( !isModify )
    return 0;
  if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    p_isModify = &EventRandomMissionClearManager_TypeInfo->static_fields->isModify;
  }
  *p_isModify = 0;
  v23 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v23 = ManagerConfig_TypeInfo;
  }
  if ( v23->static_fields->UseMock )
    return 0;
  v25 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  }
  SaveFileName = EventRandomMissionClearManager__GetSaveFileName((const MethodInfo *)v25);
  v27 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v28 = (System_IO_BinaryWriter_o *)sub_B5D694(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_40360312(v28, v27, 0LL);
  v30 = EventRandomMissionClearManager_TypeInfo;
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v30 = EventRandomMissionClearManager_TypeInfo;
  }
  v31 = v30->static_fields;
  clearRandomMissionList = v31->clearRandomMissionList;
  if ( !clearRandomMissionList )
    sub_B5D69C(v30, v29);
  if ( !v28 )
    sub_B5D69C(v30, v29);
  size = clearRandomMissionList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v28->klass->vtable._22_Write.method)(
    v28,
    v31->SAVE_DATA_VERSION,
    v28->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v28->klass->vtable._8_Write.method)(
    v28,
    EventRandomMissionClearManager_TypeInfo->static_fields->isContinueDevice,
    v28->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v28->klass->vtable._17_Write.method)(
    v28,
    (unsigned int)size,
    v28->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v35 = 0LL;
    do
    {
      v36 = EventRandomMissionClearManager_TypeInfo;
      if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
        v36 = EventRandomMissionClearManager_TypeInfo;
      }
      v37 = v36->static_fields->clearRandomMissionList;
      if ( !v37 )
        sub_B5D69C(v36, v34);
      if ( v37->fields._size <= (unsigned int)v35 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v38 = v37->fields._items->m_Items[v35];
      if ( !v38 )
        sub_B5D69C(v36, v34);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v28->klass->vtable._17_Write.method)(
        v28,
        (unsigned int)v38->fields.missionId,
        v28->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v28->klass->vtable._22_Write.method)(
        v28,
        v38->fields.name,
        v28->klass[1]._1.image);
      ++v35;
    }
    while ( (int)v35 < size );
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v28->klass->vtable._5_Close.method)(
    v28,
    v28->klass->vtable._6_Dispose.methodPtr);
  v50[0] = 158;
  v51 = 1;
  klass = v28->klass;
  if ( *(_WORD *)&v28->klass->_2.bitflags1 )
  {
    v41 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v41;
      p_offset += 4;
      if ( v41 >= *(unsigned __int16 *)&v28->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v43 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v43 = sub_AF54C0(v28, System_IDisposable_TypeInfo, 0LL, v39);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v43)(v28, *(_QWORD *)(v43 + 8));
  v51 = 0;
  v50[0] = 170;
  v45 = ++v51;
  if ( v27 )
  {
    v46 = v27->klass;
    if ( *(_WORD *)&v27->klass->_2.bitflags1 )
    {
      v47 = 0LL;
      v48 = &v46->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
      {
        ++v47;
        v48 += 4;
        if ( v47 >= *(unsigned __int16 *)&v27->klass->_2.bitflags1 )
          goto LABEL_46;
      }
      v49 = (__int64)(&v46->vtable._0_Equals.method + 2 * *v48);
    }
    else
    {
LABEL_46:
      v49 = sub_AF54C0(v27, System_IDisposable_TypeInfo, 0LL, v44);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v49)(v27, *(_QWORD *)(v49 + 8));
  }
  if ( v45 )
  {
    if ( v50[v45 - 1] == 170 )
      v51 = v45 - 1;
  }
  return 1;
}