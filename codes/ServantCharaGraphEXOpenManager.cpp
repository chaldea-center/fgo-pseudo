void __fastcall ServantCharaGraphEXOpenManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v9; // x19
  struct ServantCharaGraphEXOpenManager_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438C578 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_B775C4(&ServantCharaGraphEXOpenManager_TypeInfo);
    sub_B775C4(&StringLiteral_6771/*"Fgo_20210622"*/);
    byte_438C578 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantCharaGraphEXOpenManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6771/*"Fgo_20210622"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6771/*"Fgo_20210622"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v9,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  v10 = ServantCharaGraphEXOpenManager_TypeInfo->static_fields;
  v10->svtCharaGraphEXOpenDict = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v9;
  sub_B77560(
    (BattleServantConfConponent_o *)&v10->svtCharaGraphEXOpenDict,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void __fastcall ServantCharaGraphEXOpenManager___ctor(ServantCharaGraphEXOpenManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCharaGraphEXOpenManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCharaGraphEXOpenManager_c *v2; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *svtCharaGraphEXOpenDict; // x0

  if ( (byte_438C573 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
    sub_B775C4(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_438C573 = 1;
  }
  v2 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v2 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v2->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    sub_B7769C(0LL, v1);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    svtCharaGraphEXOpenDict,
    (const MethodInfo_2FF4354 *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
}


void __fastcall ServantCharaGraphEXOpenManager__DeleteSaveData(const MethodInfo *method)
{
  ServantCharaGraphEXOpenManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_438C571 & 1) == 0 )
  {
    sub_B775C4(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_438C571 = 1;
  }
  v1 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  }
  SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


System_String_o *__fastcall ServantCharaGraphEXOpenManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_438C570 & 1) == 0 )
  {
    sub_B775C4(&AndroidUtil_TypeInfo);
    sub_B775C4(&DatFileName_TypeInfo);
    sub_B775C4(&StringLiteral_892/*"/"*/);
    byte_438C570 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(32, 0LL);
  return System_String__Concat_44904220(DatFileSavePath, (System_String_o *)StringLiteral_892/*"/"*/, FileName, 0LL);
}


void __fastcall ServantCharaGraphEXOpenManager__Initialize(const MethodInfo *method)
{
  ServantCharaGraphEXOpenManager_c *v1; // x0

  if ( (byte_438C572 & 1) == 0 )
  {
    sub_B775C4(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_438C572 = 1;
  }
  v1 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  }
  ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v1);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCharaGraphEXOpenManager__IsCharaGraphEXOpen(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  ServantCharaGraphEXOpenManager_c *v5; // x0
  WarBoardEvalValueSquare_CalcEval_o *svtCharaGraphEXOpenDict; // x0
  ServantCharaGraphEXOpenManager_c *v7; // x0
  ServantCharaGraphEXOpenManager_c *v8; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438C576 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_438C576 = 1;
  }
  value = 0LL;
  v5 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v5 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (WarBoardEvalValueSquare_CalcEval_o *)v5->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)svtCharaGraphEXOpenDict,
          (const MethodInfo_2FF3D74 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__) )
  {
    v7 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    }
    ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v7);
  }
  v8 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v8 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (WarBoardEvalValueSquare_CalcEval_o *)v8->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)svtCharaGraphEXOpenDict,
          svtId,
          &value,
          (const MethodInfo_2FF5E9C *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    return 0;
  svtCharaGraphEXOpenDict = value;
  if ( !value )
LABEL_21:
    sub_B7769C(svtCharaGraphEXOpenDict, *(_QWORD *)&limitCount);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)value,
           limitCount,
           (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall ServantCharaGraphEXOpenManager__ReadData(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  bool v2; // w20
  ServantCharaGraphEXOpenManager_c *v3; // x0
  System_String_o *SaveFileName; // x19
  ServantCharaGraphEXOpenManager_c *v5; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryReader_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x20
  ServantCharaGraphEXOpenManager_c *v11; // x0
  int v12; // w20
  int i; // w25
  int32_t v14; // w21
  int v15; // w23
  System_Collections_Generic_List_int__o *v16; // x22
  __int64 v17; // x1
  int j; // w26
  __int64 v19; // x0
  ServantCharaGraphEXOpenManager_c *v20; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *svtCharaGraphEXOpenDict; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 v25; // x0
  ServantCharaGraphEXOpenManager_c *v26; // x0

  if ( (byte_438C574 & 1) == 0 )
  {
    sub_B775C4(&System_IO_BinaryReader_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_438C574 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseMock )
    return 1;
  v3 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  }
  SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v3);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v5 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    }
    ServantCharaGraphEXOpenManager__ClearSaveDataList((const MethodInfo *)v5);
    v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v7 = (System_IO_BinaryReader_o *)sub_B77694(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v7, v6, 0LL);
    if ( !v7 )
      sub_B7769C(v8, v9);
    v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._22_ReadString.method)(
                               v7,
                               v7->klass->vtable._23_ReadChars.methodPtr);
    v11 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
      v11 = ServantCharaGraphEXOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v11->static_fields->SAVE_DATA_VERSION, v10, 0LL) )
    {
      v2 = 0;
    }
    else
    {
      v12 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._15_ReadInt32.method)(
              v7,
              v7->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v12 >= 1 )
      {
        for ( i = 0; i < v12; ++i )
        {
          v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._15_ReadInt32.method)(
                  v7,
                  v7->klass->vtable._16_ReadUInt32.methodPtr);
          v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._15_ReadInt32.method)(
                  v7,
                  v7->klass->vtable._16_ReadUInt32.methodPtr);
          v16 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v16,
            (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
          if ( v15 >= 1 )
          {
            for ( j = 0; j < v15; ++j )
            {
              v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._15_ReadInt32.method)(
                      v7,
                      v7->klass->vtable._16_ReadUInt32.methodPtr);
              if ( !v16 )
                sub_B7769C(v19, (unsigned int)v19);
              System_Collections_Generic_List_int___Add(
                v16,
                v19,
                (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
          v20 = ServantCharaGraphEXOpenManager_TypeInfo;
          if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
            v20 = ServantCharaGraphEXOpenManager_TypeInfo;
          }
          svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v20->static_fields->svtCharaGraphEXOpenDict;
          if ( !svtCharaGraphEXOpenDict )
            sub_B7769C(0LL, v17);
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            svtCharaGraphEXOpenDict,
            v14,
            (WarBoardEvalValueSquare_EvalValueSquare_o *)v16,
            (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
        }
      }
      v2 = 1;
    }
    klass = v7->klass;
    if ( *(_WORD *)&v7->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&v7->klass->_2.bitflags1 )
          goto LABEL_37;
      }
      v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_37:
      v25 = sub_B0F4C0(v7, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v25)(v7, *(_QWORD *)(v25 + 8));
  }
  else
  {
    v26 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    }
    ServantCharaGraphEXOpenManager__ClearSaveDataList((const MethodInfo *)v26);
    return 0;
  }
  return v2;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCharaGraphEXOpenManager__SetCharaGraphEXOpen(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  ServantCharaGraphEXOpenManager_c *v5; // x0
  WarBoardEvalValueSquare_CalcEval_o *svtCharaGraphEXOpenDict; // x0
  ServantCharaGraphEXOpenManager_c *v7; // x0
  ServantCharaGraphEXOpenManager_c *v8; // x0
  System_Collections_Generic_List_int__o *v9; // x21
  ServantCharaGraphEXOpenManager_c *v10; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438C577 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_438C577 = 1;
  }
  value = 0LL;
  v5 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v5 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (WarBoardEvalValueSquare_CalcEval_o *)v5->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_28;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)svtCharaGraphEXOpenDict,
          (const MethodInfo_2FF3D74 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__) )
  {
    v7 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    }
    ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v7);
  }
  v8 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v8 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (WarBoardEvalValueSquare_CalcEval_o *)v8->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_28;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)svtCharaGraphEXOpenDict,
         svtId,
         &value,
         (const MethodInfo_2FF5E9C *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    svtCharaGraphEXOpenDict = value;
    if ( !value )
      goto LABEL_28;
    if ( !System_Collections_Generic_List_int___Contains(
            (System_Collections_Generic_List_int__o *)value,
            limitCount,
            (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      svtCharaGraphEXOpenDict = value;
      if ( value )
      {
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)value,
          limitCount,
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
        return;
      }
LABEL_28:
      sub_B7769C(svtCharaGraphEXOpenDict, *(_QWORD *)&limitCount);
    }
  }
  else
  {
    v9 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v9,
      (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
    if ( !v9 )
      goto LABEL_28;
    System_Collections_Generic_List_int___Add(
      v9,
      limitCount,
      (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
    v10 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
      v10 = ServantCharaGraphEXOpenManager_TypeInfo;
    }
    svtCharaGraphEXOpenDict = (WarBoardEvalValueSquare_CalcEval_o *)v10->static_fields->svtCharaGraphEXOpenDict;
    if ( !svtCharaGraphEXOpenDict )
      goto LABEL_28;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)svtCharaGraphEXOpenDict,
      svtId,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v9,
      (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
  }
}


bool __fastcall ServantCharaGraphEXOpenManager__WriteData(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  ServantCharaGraphEXOpenManager_c *v3; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v5; // x20
  System_IO_BinaryWriter_o *v6; // x19
  __int64 v7; // x1
  ServantCharaGraphEXOpenManager_c *v8; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *svtCharaGraphEXOpenDict; // x0
  __int64 Count; // x0
  __int64 v11; // x1
  unsigned int v12; // w20
  __int64 v13; // x1
  struct System_Collections_Generic_Dictionary_int__List_int___o *v14; // x0
  Il2CppObject *value; // x22
  signed __int64 monitor_low; // x20
  unsigned __int64 i; // x23
  _BOOL8 v18; // x0
  __int64 v19; // x1
  char v20; // w8
  int v21; // w21
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 v25; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+0h] [xbp-A0h] BYREF
  int v27[4]; // [xsp+28h] [xbp-78h] BYREF
  int v28; // [xsp+38h] [xbp-68h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_438C575 & 1) == 0 )
  {
    sub_B775C4(&System_IO_BinaryWriter_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_438C575 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v28 = 0;
  v1 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( !v1->static_fields->UseMock )
  {
    v3 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    }
    SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v3);
    v5 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v6 = (System_IO_BinaryWriter_o *)sub_B77694(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_40221404(v6, v5, 0LL);
    v8 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
      v8 = ServantCharaGraphEXOpenManager_TypeInfo;
    }
    svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v8->static_fields->svtCharaGraphEXOpenDict;
    if ( !svtCharaGraphEXOpenDict )
      sub_B7769C(0LL, v7);
    Count = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
              svtCharaGraphEXOpenDict,
              (const MethodInfo_2FF3D74 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__);
    if ( !v6 )
      sub_B7769C(Count, v11);
    v12 = Count;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v6->klass->vtable._22_Write.method)(
      v6,
      ServantCharaGraphEXOpenManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
      v6->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._17_Write.method)(
      v6,
      v12,
      v6->klass->vtable._18_Write.methodPtr);
    v14 = ServantCharaGraphEXOpenManager_TypeInfo->static_fields->svtCharaGraphEXOpenDict;
    if ( !v14 )
      sub_B7769C(0LL, v13);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
      &v26,
      (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v14,
      (const MethodInfo_2FF475C *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    v29 = v26;
    while ( 1 )
    {
      v18 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
              &v29,
              (const MethodInfo_28883E4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
      if ( !v18 )
        break;
      value = v29.fields.current.fields.value;
      if ( !v29.fields.current.fields.value )
        sub_B7769C(v18, v19);
      monitor_low = SLODWORD(v29.fields.current.fields.value[1].monitor);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._17_Write.method)(
        v6,
        LODWORD(v29.fields.current.fields.key),
        v6->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._17_Write.method)(
        v6,
        (unsigned int)monitor_low,
        v6->klass->vtable._18_Write.methodPtr);
      if ( (int)monitor_low >= 1 )
      {
        for ( i = 0LL; (__int64)i < monitor_low; ++i )
        {
          if ( i >= LODWORD(value[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._17_Write.method)(
            v6,
            *((unsigned int *)&value[1].klass->_1.byval_arg.data + i),
            v6->klass->vtable._18_Write.methodPtr);
        }
      }
    }
    v27[0] = 178;
    v28 = 1;
    System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
      &v29,
      (const MethodInfo_2888550 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    if ( v27[0] == 178 )
    {
      v20 = 0;
      v28 = 0;
    }
    else
    {
      v20 = 1;
    }
    *(_DWORD *)((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFFBLL | (4LL * (v20 & 1))) = 190;
    v21 = ++v28;
    klass = v6->klass;
    if ( *(_WORD *)&v6->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&v6->klass->_2.bitflags1 )
          goto LABEL_32;
      }
      v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_32:
      v25 = sub_B0F4C0(v6, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v25)(v6, *(_QWORD *)(v25 + 8));
    if ( v21 && v27[v21 - 1] == 190 )
      v28 = v21 - 1;
  }
  return 1;
}