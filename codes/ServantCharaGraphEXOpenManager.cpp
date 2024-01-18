void __fastcall ServantCharaGraphEXOpenManager___cctor(const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v13; // x19
  struct ServantCharaGraphEXOpenManager_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4187C44 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v1);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v8);
    sub_B2C35C(&ServantCharaGraphEXOpenManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_6623/*"Fgo_20210622"*/, v10);
    byte_4187C44 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantCharaGraphEXOpenManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6623/*"Fgo_20210622"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6623/*"Fgo_20210622"*/;
  sub_B2C2F8(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v13,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  v14 = ServantCharaGraphEXOpenManager_TypeInfo->static_fields;
  v14->svtCharaGraphEXOpenDict = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v14->svtCharaGraphEXOpenDict,
    (System_Int32_array **)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void __fastcall ServantCharaGraphEXOpenManager___ctor(ServantCharaGraphEXOpenManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCharaGraphEXOpenManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  ServantCharaGraphEXOpenManager_c *v3; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *svtCharaGraphEXOpenDict; // x0

  if ( (byte_4187C3F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__, v1);
    sub_B2C35C(&ServantCharaGraphEXOpenManager_TypeInfo, v2);
    byte_4187C3F = 1;
  }
  v3 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v3 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v3->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    sub_B2C434(0LL, v1);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    svtCharaGraphEXOpenDict,
    (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
}


void __fastcall ServantCharaGraphEXOpenManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCharaGraphEXOpenManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4187C3D & 1) == 0 )
  {
    sub_B2C35C(&ServantCharaGraphEXOpenManager_TypeInfo, v1);
    byte_4187C3D = 1;
  }
  v2 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  }
  SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


System_String_o *__fastcall ServantCharaGraphEXOpenManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4187C3C & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&DatFileName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_4187C3C = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(32, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}


void __fastcall ServantCharaGraphEXOpenManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCharaGraphEXOpenManager_c *v2; // x0

  if ( (byte_4187C3E & 1) == 0 )
  {
    sub_B2C35C(&ServantCharaGraphEXOpenManager_TypeInfo, v1);
    byte_4187C3E = 1;
  }
  v2 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  }
  ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCharaGraphEXOpenManager__IsCharaGraphEXOpen(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantCharaGraphEXOpenManager_c *v8; // x0
  WarBoardEvalValueSquare_CalcEval_o *svtCharaGraphEXOpenDict; // x0
  ServantCharaGraphEXOpenManager_c *v10; // x0
  ServantCharaGraphEXOpenManager_c *v11; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187C42 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, *(_QWORD *)&limitCount);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v6);
    sub_B2C35C(&ServantCharaGraphEXOpenManager_TypeInfo, v7);
    byte_4187C42 = 1;
  }
  value = 0LL;
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
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)svtCharaGraphEXOpenDict,
          (const MethodInfo_2E64348 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__) )
  {
    v10 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    }
    ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v10);
  }
  v11 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v11 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (WarBoardEvalValueSquare_CalcEval_o *)v11->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)svtCharaGraphEXOpenDict,
          svtId,
          &value,
          (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    return 0;
  svtCharaGraphEXOpenDict = value;
  if ( !value )
LABEL_21:
    sub_B2C434(svtCharaGraphEXOpenDict, *(_QWORD *)&limitCount);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)value,
           limitCount,
           (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall ServantCharaGraphEXOpenManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ManagerConfig_c *v9; // x0
  bool v10; // w20
  ServantCharaGraphEXOpenManager_c *v11; // x0
  System_String_o *SaveFileName; // x19
  ServantCharaGraphEXOpenManager_c *v13; // x0
  System_IO_Stream_o *v14; // x20
  System_IO_BinaryReader_o *v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_o *v18; // x20
  ServantCharaGraphEXOpenManager_c *v19; // x0
  __int64 v20; // x3
  int v21; // w20
  int i; // w25
  int32_t v23; // w21
  int v24; // w23
  System_Collections_Generic_List_int__o *v25; // x22
  __int64 v26; // x1
  int j; // w26
  __int64 v28; // x0
  ServantCharaGraphEXOpenManager_c *v29; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *svtCharaGraphEXOpenDict; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v32; // x10
  int32_t *p_offset; // x11
  __int64 v34; // x0
  ServantCharaGraphEXOpenManager_c *v35; // x0

  if ( (byte_4187C40 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v2);
    sub_B2C35C(&System_IDisposable_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B2C35C(&ManagerConfig_TypeInfo, v7);
    sub_B2C35C(&ServantCharaGraphEXOpenManager_TypeInfo, v8);
    byte_4187C40 = 1;
  }
  v9 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = ManagerConfig_TypeInfo;
  }
  if ( v9->static_fields->UseMock )
    return 1;
  v11 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  }
  SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v11);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v13 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    }
    ServantCharaGraphEXOpenManager__ClearSaveDataList((const MethodInfo *)v13);
    v14 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v15 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v15, v14, 0LL);
    if ( !v15 )
      sub_B2C434(v16, v17);
    v18 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._22_ReadString.method)(
                               v15,
                               v15->klass->vtable._23_ReadChars.methodPtr);
    v19 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
      v19 = ServantCharaGraphEXOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v19->static_fields->SAVE_DATA_VERSION, v18, 0LL) )
    {
      v10 = 0;
    }
    else
    {
      v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._15_ReadInt32.method)(
              v15,
              v15->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v21 >= 1 )
      {
        for ( i = 0; i < v21; ++i )
        {
          v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._15_ReadInt32.method)(
                  v15,
                  v15->klass->vtable._16_ReadUInt32.methodPtr);
          v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._15_ReadInt32.method)(
                  v15,
                  v15->klass->vtable._16_ReadUInt32.methodPtr);
          v25 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v25,
            (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
          if ( v24 >= 1 )
          {
            for ( j = 0; j < v24; ++j )
            {
              v28 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._15_ReadInt32.method)(
                      v15,
                      v15->klass->vtable._16_ReadUInt32.methodPtr);
              if ( !v25 )
                sub_B2C434(v28, (unsigned int)v28);
              System_Collections_Generic_List_int___Add(
                v25,
                v28,
                (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
          v29 = ServantCharaGraphEXOpenManager_TypeInfo;
          if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
            v29 = ServantCharaGraphEXOpenManager_TypeInfo;
          }
          svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v29->static_fields->svtCharaGraphEXOpenDict;
          if ( !svtCharaGraphEXOpenDict )
            sub_B2C434(0LL, v26);
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            svtCharaGraphEXOpenDict,
            v23,
            (WarBoardEvalValueSquare_EvalValueSquare_o *)v25,
            (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
        }
      }
      v10 = 1;
    }
    klass = v15->klass;
    if ( *(_WORD *)&v15->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v32;
        p_offset += 4;
        if ( v32 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
          goto LABEL_37;
      }
      v34 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_37:
      v34 = sub_AC5258(v15, System_IDisposable_TypeInfo, 0LL, v20);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v34)(v15, *(_QWORD *)(v34 + 8));
  }
  else
  {
    v35 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    }
    ServantCharaGraphEXOpenManager__ClearSaveDataList((const MethodInfo *)v35);
    return 0;
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCharaGraphEXOpenManager__SetCharaGraphEXOpen(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ServantCharaGraphEXOpenManager_c *v12; // x0
  WarBoardEvalValueSquare_CalcEval_o *svtCharaGraphEXOpenDict; // x0
  ServantCharaGraphEXOpenManager_c *v14; // x0
  ServantCharaGraphEXOpenManager_c *v15; // x0
  System_Collections_Generic_List_int__o *v16; // x21
  ServantCharaGraphEXOpenManager_c *v17; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187C43 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, *(_QWORD *)&limitCount);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B2C35C(&ServantCharaGraphEXOpenManager_TypeInfo, v11);
    byte_4187C43 = 1;
  }
  value = 0LL;
  v12 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v12 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (WarBoardEvalValueSquare_CalcEval_o *)v12->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_28;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)svtCharaGraphEXOpenDict,
          (const MethodInfo_2E64348 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__) )
  {
    v14 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    }
    ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v14);
  }
  v15 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v15 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (WarBoardEvalValueSquare_CalcEval_o *)v15->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_28;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)svtCharaGraphEXOpenDict,
         svtId,
         &value,
         (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    svtCharaGraphEXOpenDict = value;
    if ( !value )
      goto LABEL_28;
    if ( !System_Collections_Generic_List_int___Contains(
            (System_Collections_Generic_List_int__o *)value,
            limitCount,
            (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      svtCharaGraphEXOpenDict = value;
      if ( value )
      {
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)value,
          limitCount,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        return;
      }
LABEL_28:
      sub_B2C434(svtCharaGraphEXOpenDict, *(_QWORD *)&limitCount);
    }
  }
  else
  {
    v16 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v16,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !v16 )
      goto LABEL_28;
    System_Collections_Generic_List_int___Add(
      v16,
      limitCount,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    v17 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
      v17 = ServantCharaGraphEXOpenManager_TypeInfo;
    }
    svtCharaGraphEXOpenDict = (WarBoardEvalValueSquare_CalcEval_o *)v17->static_fields->svtCharaGraphEXOpenDict;
    if ( !svtCharaGraphEXOpenDict )
      goto LABEL_28;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)svtCharaGraphEXOpenDict,
      svtId,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v16,
      (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
  }
}


bool __fastcall ServantCharaGraphEXOpenManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  ManagerConfig_c *v14; // x0
  ServantCharaGraphEXOpenManager_c *v16; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v18; // x20
  System_IO_BinaryWriter_o *v19; // x19
  __int64 v20; // x1
  ServantCharaGraphEXOpenManager_c *v21; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *svtCharaGraphEXOpenDict; // x0
  __int64 Count; // x0
  __int64 v24; // x1
  unsigned int v25; // w20
  __int64 v26; // x1
  struct System_Collections_Generic_Dictionary_int__List_int___o *v27; // x0
  Il2CppObject *value; // x22
  signed __int64 monitor_low; // x20
  unsigned __int64 i; // x23
  _BOOL8 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x3
  char v34; // w8
  int v35; // w21
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v37; // x10
  int32_t *p_offset; // x11
  __int64 v39; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v40; // [xsp+0h] [xbp-A0h] BYREF
  int v41[4]; // [xsp+28h] [xbp-78h] BYREF
  int v42; // [xsp+38h] [xbp-68h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v43; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_4187C41 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__, v2);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v11);
    sub_B2C35C(&ManagerConfig_TypeInfo, v12);
    sub_B2C35C(&ServantCharaGraphEXOpenManager_TypeInfo, v13);
    byte_4187C41 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v42 = 0;
  v14 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v14 = ManagerConfig_TypeInfo;
  }
  if ( !v14->static_fields->UseMock )
  {
    v16 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    }
    SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v16);
    v18 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v19 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_39287252(v19, v18, 0LL);
    v21 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
      v21 = ServantCharaGraphEXOpenManager_TypeInfo;
    }
    svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v21->static_fields->svtCharaGraphEXOpenDict;
    if ( !svtCharaGraphEXOpenDict )
      sub_B2C434(0LL, v20);
    Count = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
              svtCharaGraphEXOpenDict,
              (const MethodInfo_2E64348 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__);
    if ( !v19 )
      sub_B2C434(Count, v24);
    v25 = Count;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v19->klass->vtable._22_Write.method)(
      v19,
      ServantCharaGraphEXOpenManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
      v19->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v19->klass->vtable._17_Write.method)(
      v19,
      v25,
      v19->klass->vtable._18_Write.methodPtr);
    v27 = ServantCharaGraphEXOpenManager_TypeInfo->static_fields->svtCharaGraphEXOpenDict;
    if ( !v27 )
      sub_B2C434(0LL, v26);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
      &v40,
      (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v27,
      (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    v43 = v40;
    while ( 1 )
    {
      v31 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
              &v43,
              (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
      if ( !v31 )
        break;
      value = v43.fields.current.fields.value;
      if ( !v43.fields.current.fields.value )
        sub_B2C434(v31, v32);
      monitor_low = SLODWORD(v43.fields.current.fields.value[1].monitor);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v19->klass->vtable._17_Write.method)(
        v19,
        LODWORD(v43.fields.current.fields.key),
        v19->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v19->klass->vtable._17_Write.method)(
        v19,
        (unsigned int)monitor_low,
        v19->klass->vtable._18_Write.methodPtr);
      if ( (int)monitor_low >= 1 )
      {
        for ( i = 0LL; (__int64)i < monitor_low; ++i )
        {
          if ( i >= LODWORD(value[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v19->klass->vtable._17_Write.method)(
            v19,
            *((unsigned int *)&value[1].klass->_1.byval_arg.data + i),
            v19->klass->vtable._18_Write.methodPtr);
        }
      }
    }
    v41[0] = 178;
    v42 = 1;
    System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
      &v43,
      (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    if ( v41[0] == 178 )
    {
      v34 = 0;
      v42 = 0;
    }
    else
    {
      v34 = 1;
    }
    *(_DWORD *)((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFFBLL | (4LL * (v34 & 1))) = 190;
    v35 = ++v42;
    klass = v19->klass;
    if ( *(_WORD *)&v19->klass->_2.bitflags1 )
    {
      v37 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v37;
        p_offset += 4;
        if ( v37 >= *(unsigned __int16 *)&v19->klass->_2.bitflags1 )
          goto LABEL_32;
      }
      v39 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_32:
      v39 = sub_AC5258(v19, System_IDisposable_TypeInfo, 0LL, v33);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v39)(v19, *(_QWORD *)(v39 + 8));
    if ( v35 && v41[v35 - 1] == 190 )
      v42 = v35 - 1;
  }
  return 1;
}