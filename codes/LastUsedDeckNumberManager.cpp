void __fastcall LastUsedDeckNumberManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  LastUsedDeckNumberManager_c *v9; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  struct LastUsedDeckNumberManager_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_438A76D & 1) == 0 )
  {
    sub_B775C4(&LastUsedDeckNumberManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
    sub_B775C4(&System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
    sub_B775C4(&StringLiteral_6772/*"Fgo_20210906"*/);
    byte_438A76D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)LastUsedDeckNumberManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6772/*"Fgo_20210906"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6772/*"Fgo_20210906"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = LastUsedDeckNumberManager_TypeInfo;
  LastUsedDeckNumberManager_TypeInfo->static_fields->isModfiy = 0;
  v9->static_fields->isContinueDevice = 0;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  v11 = LastUsedDeckNumberManager_TypeInfo->static_fields;
  v11->lastUsedInfoList = (struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&v11->lastUsedInfoList,
    (System_Int32_array **)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall LastUsedDeckNumberManager___ctor(LastUsedDeckNumberManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall LastUsedDeckNumberManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  LastUsedDeckNumberManager_c *v2; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *lastUsedInfoList; // x8

  if ( (byte_438A767 & 1) == 0 )
  {
    sub_B775C4(&LastUsedDeckNumberManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__);
    byte_438A767 = 1;
  }
  v2 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v2 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2->static_fields->lastUsedInfoList;
  if ( !lastUsedInfoList )
    goto LABEL_16;
  if ( lastUsedInfoList->fields._size >= 1 )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) == 0
      || v2->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v2),
          (lastUsedInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)LastUsedDeckNumberManager_TypeInfo->static_fields->lastUsedInfoList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        lastUsedInfoList,
        (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Clear__);
      v2 = LastUsedDeckNumberManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B7769C(v2, v1);
  }
LABEL_12:
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = LastUsedDeckNumberManager_TypeInfo;
  }
  v2->static_fields->isContinueDevice = 0;
  v2->static_fields->isModfiy = 1;
}


void __fastcall LastUsedDeckNumberManager__DeleteData(int32_t questId, const MethodInfo *method)
{
  LastUsedDeckNumberManager___c__DisplayClass11_0_o *v3; // x20
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v4; // x0
  __int64 v5; // x1
  LastUsedDeckNumberManager_c *v6; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *lastUsedInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v8; // x21
  peRenderTexture_ChangeLayerObject_o *v9; // x0
  WarBoardManager_TaskList_o *v10; // x19
  LastUsedDeckNumberManager_c *v11; // x0

  if ( (byte_438A76A & 1) == 0 )
  {
    sub_B775C4(&LastUsedDeckNumberManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
    sub_B775C4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Remove__);
    sub_B775C4(&Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
    sub_B775C4(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
    sub_B775C4(&Method_LastUsedDeckNumberManager___c__DisplayClass11_0__DeleteData_b__0__);
    sub_B775C4(&LastUsedDeckNumberManager___c__DisplayClass11_0_TypeInfo);
    byte_438A76A = 1;
  }
  v3 = (LastUsedDeckNumberManager___c__DisplayClass11_0_o *)sub_B77694(LastUsedDeckNumberManager___c__DisplayClass11_0_TypeInfo);
  LastUsedDeckNumberManager___c__DisplayClass11_0___ctor(v3, 0LL);
  if ( !v3 )
    goto LABEL_15;
  v3->fields.questId = questId;
  v6 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v6 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v6->static_fields->lastUsedInfoList;
  v8 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v8,
    (Il2CppObject *)v3,
    Method_LastUsedDeckNumberManager___c__DisplayClass11_0__DeleteData_b__0__,
    (const MethodInfo_2C3248C *)Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  if ( !lastUsedInfoList )
    goto LABEL_15;
  v9 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         lastUsedInfoList,
         (System_Predicate_T__o *)v8,
         (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( !v9 )
    return;
  v10 = (WarBoardManager_TaskList_o *)v9;
  v11 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v11 = LastUsedDeckNumberManager_TypeInfo;
  }
  v4 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v11->static_fields->lastUsedInfoList;
  if ( !v4 )
LABEL_15:
    sub_B7769C(v4, v5);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    v4,
    v10,
    (const MethodInfo_3054C44 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Remove__);
  LastUsedDeckNumberManager_TypeInfo->static_fields->isModfiy = 1;
}


void __fastcall LastUsedDeckNumberManager__DeleteSaveData(const MethodInfo *method)
{
  LastUsedDeckNumberManager_c *v1; // x0
  const MethodInfo *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_438A765 & 1) == 0 )
  {
    sub_B775C4(&LastUsedDeckNumberManager_TypeInfo);
    byte_438A765 = 1;
  }
  v1 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  }
  LastUsedDeckNumberManager__ClearSaveDataList((const MethodInfo *)v1);
  SaveFileName = LastUsedDeckNumberManager__GetSaveFileName(v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


int32_t __fastcall LastUsedDeckNumberManager__GetDeckNumber(int32_t questId, const MethodInfo *method)
{
  LastUsedDeckNumberManager___c__DisplayClass10_0_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  LastUsedDeckNumberManager_c *v6; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *lastUsedInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v8; // x21
  peRenderTexture_ChangeLayerObject_o *v9; // x0

  if ( (byte_438A769 & 1) == 0 )
  {
    sub_B775C4(&LastUsedDeckNumberManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
    sub_B775C4(&Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
    sub_B775C4(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
    sub_B775C4(&Method_LastUsedDeckNumberManager___c__DisplayClass10_0__GetDeckNumber_b__0__);
    sub_B775C4(&LastUsedDeckNumberManager___c__DisplayClass10_0_TypeInfo);
    byte_438A769 = 1;
  }
  v3 = (LastUsedDeckNumberManager___c__DisplayClass10_0_o *)sub_B77694(LastUsedDeckNumberManager___c__DisplayClass10_0_TypeInfo);
  LastUsedDeckNumberManager___c__DisplayClass10_0___ctor(v3, 0LL);
  if ( !v3 )
    goto LABEL_11;
  v3->fields.questId = questId;
  v6 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v6 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v6->static_fields->lastUsedInfoList;
  v8 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v8,
    (Il2CppObject *)v3,
    Method_LastUsedDeckNumberManager___c__DisplayClass10_0__GetDeckNumber_b__0__,
    (const MethodInfo_2C3248C *)Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  if ( !lastUsedInfoList )
LABEL_11:
    sub_B7769C(v4, v5);
  v9 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         lastUsedInfoList,
         (System_Predicate_T__o *)v8,
         (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( v9 )
    LODWORD(v9) = HIDWORD(v9->fields.gameObject);
  return (int)v9;
}


System_String_o *__fastcall LastUsedDeckNumberManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_438A764 & 1) == 0 )
  {
    sub_B775C4(&AndroidUtil_TypeInfo);
    sub_B775C4(&DatFileName_TypeInfo);
    sub_B775C4(&StringLiteral_892/*"/"*/);
    byte_438A764 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(34, 0LL);
  return System_String__Concat_44904220(DatFileSavePath, (System_String_o *)StringLiteral_892/*"/"*/, FileName, 0LL);
}


void __fastcall LastUsedDeckNumberManager__Initialize(const MethodInfo *method)
{
  LastUsedDeckNumberManager_c *v1; // x0

  if ( (byte_438A766 & 1) == 0 )
  {
    sub_B775C4(&LastUsedDeckNumberManager_TypeInfo);
    byte_438A766 = 1;
  }
  v1 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  }
  LastUsedDeckNumberManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall LastUsedDeckNumberManager__ReadData(const MethodInfo *method)
{
  LastUsedDeckNumberManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  LastUsedDeckNumberManager_c *v4; // x0
  System_String_o *SaveFileName; // x19
  LastUsedDeckNumberManager_c *v6; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryReader_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  LastUsedDeckNumberManager_c *v12; // x0
  char v13; // w20
  LastUsedDeckNumberManager_c *v14; // x0
  int v15; // w20
  int i; // w26
  int32_t v17; // w22
  int32_t v18; // w23
  __int64 v19; // x24
  LastUsedDeckNumberManager_LastUsedInfo_o *v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  LastUsedDeckNumberManager_c *v23; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *lastUsedInfoList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 v28; // x0
  LastUsedDeckNumberManager_c *v29; // x0
  int v30; // [xsp+8h] [xbp-68h]

  if ( (byte_438A76B & 1) == 0 )
  {
    sub_B775C4(&System_IO_BinaryReader_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&LastUsedDeckNumberManager_TypeInfo);
    sub_B775C4(&LastUsedDeckNumberManager_LastUsedInfo_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__);
    sub_B775C4(&ManagerConfig_TypeInfo);
    byte_438A76B = 1;
  }
  v1 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v1 = LastUsedDeckNumberManager_TypeInfo;
  }
  v1->static_fields->isModfiy = 0;
  v2 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 1;
  v4 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  }
  SaveFileName = LastUsedDeckNumberManager__GetSaveFileName((const MethodInfo *)v4);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v6 = LastUsedDeckNumberManager_TypeInfo;
    if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    }
    LastUsedDeckNumberManager__ClearSaveDataList((const MethodInfo *)v6);
    v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v8 = (System_IO_BinaryReader_o *)sub_B77694(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v8, v7, 0LL);
    if ( !v8 )
      sub_B7769C(v9, v10);
    v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._22_ReadString.method)(
                               v8,
                               v8->klass->vtable._23_ReadChars.methodPtr);
    v12 = LastUsedDeckNumberManager_TypeInfo;
    if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      v12 = LastUsedDeckNumberManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v12->static_fields->SAVE_DATA_VERSION, v11, 0LL) )
    {
      v30 = 208;
    }
    else
    {
      v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._9_ReadBoolean.method)(
              v8,
              v8->klass->vtable._10_ReadByte.methodPtr);
      v14 = LastUsedDeckNumberManager_TypeInfo;
      if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        v14 = LastUsedDeckNumberManager_TypeInfo;
      }
      v14->static_fields->isContinueDevice = v13 & 1;
      v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
              v8,
              v8->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v15 >= 1 )
      {
        for ( i = 0; i < v15; ++i )
        {
          v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                  v8,
                  v8->klass->vtable._16_ReadUInt32.methodPtr);
          v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                  v8,
                  v8->klass->vtable._16_ReadUInt32.methodPtr);
          v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._17_ReadInt64.method)(
                  v8,
                  v8->klass->vtable._18_ReadUInt64.methodPtr);
          v20 = (LastUsedDeckNumberManager_LastUsedInfo_o *)sub_B77694(LastUsedDeckNumberManager_LastUsedInfo_TypeInfo);
          LastUsedDeckNumberManager_LastUsedInfo___ctor(v20, 0LL);
          if ( !v20 )
            sub_B7769C(v21, v22);
          v20->fields.questId = v17;
          v20->fields.deckNumber = v18;
          v20->fields.time = v19;
          v23 = LastUsedDeckNumberManager_TypeInfo;
          if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
            v23 = LastUsedDeckNumberManager_TypeInfo;
          }
          lastUsedInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v23->static_fields->lastUsedInfoList;
          if ( !lastUsedInfoList )
            sub_B7769C(0LL, v22);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            lastUsedInfoList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__);
        }
      }
      v30 = 193;
    }
    klass = v8->klass;
    if ( *(_WORD *)&v8->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v26;
        p_offset += 4;
        if ( v26 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
          goto LABEL_40;
      }
      v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_40:
      v28 = sub_B0F4C0(v8, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v28)(v8, *(_QWORD *)(v28 + 8));
    return v30 == 193;
  }
  else
  {
    v29 = LastUsedDeckNumberManager_TypeInfo;
    if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    }
    LastUsedDeckNumberManager__ClearSaveDataList((const MethodInfo *)v29);
    return 0;
  }
}


void __fastcall LastUsedDeckNumberManager__SetDeckNumber(int32_t questId, int32_t deckNumber, const MethodInfo *method)
{
  LastUsedDeckNumberManager___c__DisplayClass9_0_o *v5; // x20
  void *UsedDeckNumberManager_LastUsedInfo; // x0
  const MethodInfo *v7; // x1
  int64_t Time; // x21
  LastUsedDeckNumberManager_c *v9; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *lastUsedInfoList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v11; // x23
  peRenderTexture_ChangeLayerObject_o *v12; // x0
  LastUsedDeckNumberManager_c *v13; // x0
  __int64 v14; // x8
  int32_t v15; // w22
  BalanceConfig_c *v16; // x0
  LastUsedDeckNumberManager_c *v17; // x8
  LastUsedDeckNumberManager___c_c *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x22
  struct LastUsedDeckNumberManager___c_StaticFields *static_fields; // x8
  System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *_9__9_1; // x23
  Il2CppObject *v22; // x24
  struct LastUsedDeckNumberManager___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t v30; // w22
  LastUsedDeckNumberManager_LastUsedInfo_o *v31; // x22
  int32_t v32; // w8
  LastUsedDeckNumberManager_c *v33; // x0

  if ( (byte_438A768 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Aggregate_LastUsedDeckNumberManager_LastUsedInfo___);
    sub_B775C4(&Method_System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo___ctor__);
    sub_B775C4(&System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
    sub_B775C4(&LastUsedDeckNumberManager_TypeInfo);
    sub_B775C4(&LastUsedDeckNumberManager_LastUsedInfo_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
    sub_B775C4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
    sub_B775C4(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
    sub_B775C4(&Method_LastUsedDeckNumberManager___c__SetDeckNumber_b__9_1__);
    sub_B775C4(&Method_LastUsedDeckNumberManager___c__DisplayClass9_0__SetDeckNumber_b__0__);
    sub_B775C4(&LastUsedDeckNumberManager___c__DisplayClass9_0_TypeInfo);
    sub_B775C4(&LastUsedDeckNumberManager___c_TypeInfo);
    byte_438A768 = 1;
  }
  v5 = (LastUsedDeckNumberManager___c__DisplayClass9_0_o *)sub_B77694(LastUsedDeckNumberManager___c__DisplayClass9_0_TypeInfo);
  LastUsedDeckNumberManager___c__DisplayClass9_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_47;
  v5->fields.questId = questId;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v9 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v9 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v9->static_fields->lastUsedInfoList;
  v11 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_LastUsedDeckNumberManager___c__DisplayClass9_0__SetDeckNumber_b__0__,
    (const MethodInfo_2C3248C *)Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  if ( !lastUsedInfoList )
    goto LABEL_47;
  v12 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v11,
          (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( !v12 )
  {
    UsedDeckNumberManager_LastUsedInfo = LastUsedDeckNumberManager_TypeInfo;
    if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      UsedDeckNumberManager_LastUsedInfo = LastUsedDeckNumberManager_TypeInfo;
    }
    v14 = *(_QWORD *)(*((_QWORD *)UsedDeckNumberManager_LastUsedInfo + 23) + 16LL);
    if ( v14 )
    {
      v15 = *(_DWORD *)(v14 + 24);
      v16 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v16 = BalanceConfig_TypeInfo;
      }
      if ( v15 >= v16->static_fields->MemoryDeckLimitByQuest )
      {
        v17 = LastUsedDeckNumberManager_TypeInfo;
        if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
          v17 = LastUsedDeckNumberManager_TypeInfo;
        }
        v18 = LastUsedDeckNumberManager___c_TypeInfo;
        v19 = (System_Collections_Generic_IEnumerable_TSource__o *)v17->static_fields->lastUsedInfoList;
        if ( (BYTE3(LastUsedDeckNumberManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LastUsedDeckNumberManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager___c_TypeInfo);
          v18 = LastUsedDeckNumberManager___c_TypeInfo;
        }
        static_fields = v18->static_fields;
        _9__9_1 = static_fields->__9__9_1;
        if ( !_9__9_1 )
        {
          if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v18);
            static_fields = LastUsedDeckNumberManager___c_TypeInfo->static_fields;
          }
          v22 = (Il2CppObject *)static_fields->__9;
          _9__9_1 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B77694(System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
          System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
            _9__9_1,
            v22,
            Method_LastUsedDeckNumberManager___c__SetDeckNumber_b__9_1__,
            (const MethodInfo_29F4C8C *)Method_System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo___ctor__);
          v23 = LastUsedDeckNumberManager___c_TypeInfo->static_fields;
          v23->__9__9_1 = _9__9_1;
          sub_B77560(
            (BattleServantConfConponent_o *)&v23->__9__9_1,
            (System_Int32_array **)_9__9_1,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
        }
        UsedDeckNumberManager_LastUsedInfo = System_Linq_Enumerable__Aggregate_LastUsedDeckNumberManager_LastUsedInfo_(
                                               v19,
                                               (System_Func_TSource__TSource__TSource__o *)_9__9_1,
                                               (const MethodInfo_1D1B48C *)Method_System_Linq_Enumerable_Aggregate_LastUsedDeckNumberManager_LastUsedInfo___);
        if ( !UsedDeckNumberManager_LastUsedInfo )
          goto LABEL_47;
        v30 = *((_DWORD *)UsedDeckNumberManager_LastUsedInfo + 4);
        if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        }
        LastUsedDeckNumberManager__DeleteData(v30, v7);
      }
      v31 = (LastUsedDeckNumberManager_LastUsedInfo_o *)sub_B77694(LastUsedDeckNumberManager_LastUsedInfo_TypeInfo);
      LastUsedDeckNumberManager_LastUsedInfo___ctor(v31, 0LL);
      if ( v31 )
      {
        v32 = v5->fields.questId;
        v31->fields.time = Time;
        v31->fields.questId = v32;
        v31->fields.deckNumber = deckNumber;
        v33 = LastUsedDeckNumberManager_TypeInfo;
        if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
          v33 = LastUsedDeckNumberManager_TypeInfo;
        }
        UsedDeckNumberManager_LastUsedInfo = v33->static_fields->lastUsedInfoList;
        if ( UsedDeckNumberManager_LastUsedInfo )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UsedDeckNumberManager_LastUsedInfo,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__);
          goto LABEL_45;
        }
      }
    }
LABEL_47:
    sub_B7769C(UsedDeckNumberManager_LastUsedInfo, v7);
  }
  HIDWORD(v12->fields.gameObject) = deckNumber;
  v12->fields.renderer = (struct UnityEngine_Renderer_o *)Time;
  v13 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
LABEL_45:
    v13 = LastUsedDeckNumberManager_TypeInfo;
  }
  v13->static_fields->isModfiy = 1;
}


bool __fastcall LastUsedDeckNumberManager__WriteData(const MethodInfo *method)
{
  LastUsedDeckNumberManager_c *v1; // x0
  struct LastUsedDeckNumberManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v5; // x0
  LastUsedDeckNumberManager_c *v7; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v9; // x20
  System_IO_BinaryWriter_o *v10; // x19
  __int64 v11; // x1
  LastUsedDeckNumberManager_c *v12; // x0
  struct LastUsedDeckNumberManager_StaticFields *v13; // x8
  struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *lastUsedInfoList; // x9
  int size; // w20
  __int64 v16; // x1
  __int64 v17; // x22
  LastUsedDeckNumberManager_c *v18; // x0
  struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *v19; // x23
  LastUsedDeckNumberManager_LastUsedInfo_o *v20; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 v24; // x0

  if ( (byte_438A76C & 1) == 0 )
  {
    sub_B775C4(&System_IO_BinaryWriter_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&LastUsedDeckNumberManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Item__);
    sub_B775C4(&ManagerConfig_TypeInfo);
    byte_438A76C = 1;
  }
  v1 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v1 = LastUsedDeckNumberManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    p_isModfiy = &LastUsedDeckNumberManager_TypeInfo->static_fields->isModfiy;
  }
  *p_isModfiy = 0;
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    return 0;
  v7 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  }
  SaveFileName = LastUsedDeckNumberManager__GetSaveFileName((const MethodInfo *)v7);
  v9 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v10 = (System_IO_BinaryWriter_o *)sub_B77694(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_40221404(v10, v9, 0LL);
  v12 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v12 = LastUsedDeckNumberManager_TypeInfo;
  }
  v13 = v12->static_fields;
  lastUsedInfoList = v13->lastUsedInfoList;
  if ( !lastUsedInfoList )
    sub_B7769C(v12, v11);
  if ( !v10 )
    sub_B7769C(v12, v11);
  size = lastUsedInfoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v10->klass->vtable._22_Write.method)(
    v10,
    v13->SAVE_DATA_VERSION,
    v10->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v10->klass->vtable._8_Write.method)(
    v10,
    LastUsedDeckNumberManager_TypeInfo->static_fields->isContinueDevice,
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
      v18 = LastUsedDeckNumberManager_TypeInfo;
      if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        v18 = LastUsedDeckNumberManager_TypeInfo;
      }
      v19 = v18->static_fields->lastUsedInfoList;
      if ( !v19 )
        sub_B7769C(v18, v16);
      if ( v19->fields._size <= (unsigned int)v17 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v20 = v19->fields._items->m_Items[v17];
      if ( !v20 )
        sub_B7769C(v18, v16);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
        v10,
        (unsigned int)v20->fields.questId,
        v10->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
        v10,
        (unsigned int)v20->fields.deckNumber,
        v10->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v10->klass->vtable._19_Write.method)(
        v10,
        v20->fields.time,
        v10->klass->vtable._20_Write.methodPtr);
      ++v17;
    }
    while ( (int)v17 < size );
  }
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
    v24 = sub_B0F4C0(v10, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v24)(v10, *(_QWORD *)(v24 + 8));
  return 1;
}


void __fastcall LastUsedDeckNumberManager_LastUsedInfo___ctor(
        LastUsedDeckNumberManager_LastUsedInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall LastUsedDeckNumberManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct LastUsedDeckNumberManager___c_StaticFields *static_fields; // x0

  if ( (byte_438894E & 1) == 0 )
  {
    sub_B775C4(&LastUsedDeckNumberManager___c_TypeInfo);
    byte_438894E = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(LastUsedDeckNumberManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = LastUsedDeckNumberManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct LastUsedDeckNumberManager___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall LastUsedDeckNumberManager___c___ctor(LastUsedDeckNumberManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


LastUsedDeckNumberManager_LastUsedInfo_o *__fastcall LastUsedDeckNumberManager___c___SetDeckNumber_b__9_1(
        LastUsedDeckNumberManager___c_o *this,
        LastUsedDeckNumberManager_LastUsedInfo_o *x,
        LastUsedDeckNumberManager_LastUsedInfo_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_B7769C(this, x);
  if ( x->fields.time >= y->fields.time )
    return y;
  else
    return x;
}


void __fastcall LastUsedDeckNumberManager___c__DisplayClass10_0___ctor(
        LastUsedDeckNumberManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall LastUsedDeckNumberManager___c__DisplayClass10_0___GetDeckNumber_b__0(
        LastUsedDeckNumberManager___c__DisplayClass10_0_o *this,
        LastUsedDeckNumberManager_LastUsedInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.questId == this->fields.questId;
}


void __fastcall LastUsedDeckNumberManager___c__DisplayClass11_0___ctor(
        LastUsedDeckNumberManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall LastUsedDeckNumberManager___c__DisplayClass11_0___DeleteData_b__0(
        LastUsedDeckNumberManager___c__DisplayClass11_0_o *this,
        LastUsedDeckNumberManager_LastUsedInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.questId == this->fields.questId;
}


void __fastcall LastUsedDeckNumberManager___c__DisplayClass9_0___ctor(
        LastUsedDeckNumberManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall LastUsedDeckNumberManager___c__DisplayClass9_0___SetDeckNumber_b__0(
        LastUsedDeckNumberManager___c__DisplayClass9_0_o *this,
        LastUsedDeckNumberManager_LastUsedInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.questId == this->fields.questId;
}