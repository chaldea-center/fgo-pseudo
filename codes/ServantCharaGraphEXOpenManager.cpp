void __fastcall ServantCharaGraphEXOpenManager___cctor(const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v19; // x19
  struct ServantCharaGraphEXOpenManager_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_42E9962 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&ServantCharaGraphEXOpenManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6702/*"Fgo_20210622"*/, v14, v15, v16);
    byte_42E9962 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantCharaGraphEXOpenManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_6702/*"Fgo_20210622"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6702/*"Fgo_20210622"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v19,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  v20 = ServantCharaGraphEXOpenManager_TypeInfo->static_fields;
  v20->svtCharaGraphEXOpenDict = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v20->svtCharaGraphEXOpenDict,
    (System_Int32_array **)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


void __fastcall ServantCharaGraphEXOpenManager___ctor(ServantCharaGraphEXOpenManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCharaGraphEXOpenManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  ServantCharaGraphEXOpenManager_c *v7; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *svtCharaGraphEXOpenDict; // x0

  if ( (byte_42E995D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__, v1, v2, v3);
    sub_B5D5C4(&ServantCharaGraphEXOpenManager_TypeInfo, v4, v5, v6);
    byte_42E995D = 1;
  }
  v7 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v7 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v7->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    sub_B5D69C(0LL, v1);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    svtCharaGraphEXOpenDict,
    (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
}


void __fastcall ServantCharaGraphEXOpenManager__DeleteSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ServantCharaGraphEXOpenManager_c *v4; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_42E995B & 1) == 0 )
  {
    sub_B5D5C4(&ServantCharaGraphEXOpenManager_TypeInfo, v1, v2, v3);
    byte_42E995B = 1;
  }
  v4 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  }
  SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v4);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


System_String_o *__fastcall ServantCharaGraphEXOpenManager__GetSaveFileName(const MethodInfo *method)
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

  if ( (byte_42E995A & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&DatFileName_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v7, v8, v9);
    byte_42E995A = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(32, 0LL);
  return System_String__Concat_44580072(DatFileSavePath, (System_String_o *)StringLiteral_885/*"/"*/, FileName, 0LL);
}


void __fastcall ServantCharaGraphEXOpenManager__Initialize(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ServantCharaGraphEXOpenManager_c *v4; // x0

  if ( (byte_42E995C & 1) == 0 )
  {
    sub_B5D5C4(&ServantCharaGraphEXOpenManager_TypeInfo, v1, v2, v3);
    byte_42E995C = 1;
  }
  v4 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  }
  ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCharaGraphEXOpenManager__IsCharaGraphEXOpen(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  ServantCharaGraphEXOpenManager_c *v15; // x0
  WarBoardEvalValueSquare_CalcEval_o *svtCharaGraphEXOpenDict; // x0
  ServantCharaGraphEXOpenManager_c *v17; // x0
  ServantCharaGraphEXOpenManager_c *v18; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E9960 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__,
      limitCount,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v9, v10, v11);
    sub_B5D5C4(&ServantCharaGraphEXOpenManager_TypeInfo, v12, v13, v14);
    byte_42E9960 = 1;
  }
  value = 0LL;
  v15 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v15 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (WarBoardEvalValueSquare_CalcEval_o *)v15->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)svtCharaGraphEXOpenDict,
          (const MethodInfo_2F31CC0 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__) )
  {
    v17 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    }
    ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v17);
  }
  v18 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v18 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (WarBoardEvalValueSquare_CalcEval_o *)v18->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)svtCharaGraphEXOpenDict,
          svtId,
          &value,
          (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    return 0;
  svtCharaGraphEXOpenDict = value;
  if ( !value )
LABEL_21:
    sub_B5D69C(svtCharaGraphEXOpenDict, *(_QWORD *)&limitCount);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)value,
           limitCount,
           (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall ServantCharaGraphEXOpenManager__ReadData(const MethodInfo *method)
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  ManagerConfig_c *v25; // x0
  bool v26; // w20
  ServantCharaGraphEXOpenManager_c *v27; // x0
  System_String_o *SaveFileName; // x19
  ServantCharaGraphEXOpenManager_c *v29; // x0
  System_IO_Stream_o *v30; // x20
  System_IO_BinaryReader_o *v31; // x19
  __int64 v32; // x0
  __int64 v33; // x1
  System_String_o *v34; // x20
  ServantCharaGraphEXOpenManager_c *v35; // x0
  __int64 v36; // x3
  int v37; // w20
  int i; // w25
  int32_t v39; // w21
  int v40; // w23
  System_Collections_Generic_List_int__o *v41; // x22
  __int64 v42; // x1
  int j; // w26
  __int64 v44; // x0
  ServantCharaGraphEXOpenManager_c *v45; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *svtCharaGraphEXOpenDict; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v48; // x10
  int32_t *p_offset; // x11
  __int64 v50; // x0
  ServantCharaGraphEXOpenManager_c *v51; // x0

  if ( (byte_42E995E & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryReader_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v4, v5, v6);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&ServantCharaGraphEXOpenManager_TypeInfo, v22, v23, v24);
    byte_42E995E = 1;
  }
  v25 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v25 = ManagerConfig_TypeInfo;
  }
  if ( v25->static_fields->UseMock )
    return 1;
  v27 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  }
  SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v27);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v29 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    }
    ServantCharaGraphEXOpenManager__ClearSaveDataList((const MethodInfo *)v29);
    v30 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v31 = (System_IO_BinaryReader_o *)sub_B5D694(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v31, v30, 0LL);
    if ( !v31 )
      sub_B5D69C(v32, v33);
    v34 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v31->klass->vtable._22_ReadString.method)(
                               v31,
                               v31->klass->vtable._23_ReadChars.methodPtr);
    v35 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
      v35 = ServantCharaGraphEXOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v35->static_fields->SAVE_DATA_VERSION, v34, 0LL) )
    {
      v26 = 0;
    }
    else
    {
      v37 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v31->klass->vtable._15_ReadInt32.method)(
              v31,
              v31->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v37 >= 1 )
      {
        for ( i = 0; i < v37; ++i )
        {
          v39 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v31->klass->vtable._15_ReadInt32.method)(
                  v31,
                  v31->klass->vtable._16_ReadUInt32.methodPtr);
          v40 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v31->klass->vtable._15_ReadInt32.method)(
                  v31,
                  v31->klass->vtable._16_ReadUInt32.methodPtr);
          v41 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v41,
            (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
          if ( v40 >= 1 )
          {
            for ( j = 0; j < v40; ++j )
            {
              v44 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v31->klass->vtable._15_ReadInt32.method)(
                      v31,
                      v31->klass->vtable._16_ReadUInt32.methodPtr);
              if ( !v41 )
                sub_B5D69C(v44, (unsigned int)v44);
              System_Collections_Generic_List_int___Add(
                v41,
                v44,
                (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
          v45 = ServantCharaGraphEXOpenManager_TypeInfo;
          if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
            v45 = ServantCharaGraphEXOpenManager_TypeInfo;
          }
          svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v45->static_fields->svtCharaGraphEXOpenDict;
          if ( !svtCharaGraphEXOpenDict )
            sub_B5D69C(0LL, v42);
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            svtCharaGraphEXOpenDict,
            v39,
            (WarBoardEvalValueSquare_EvalValueSquare_o *)v41,
            (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
        }
      }
      v26 = 1;
    }
    klass = v31->klass;
    if ( *(_WORD *)&v31->klass->_2.bitflags1 )
    {
      v48 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v48;
        p_offset += 4;
        if ( v48 >= *(unsigned __int16 *)&v31->klass->_2.bitflags1 )
          goto LABEL_37;
      }
      v50 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_37:
      v50 = sub_AF54C0(v31, System_IDisposable_TypeInfo, 0LL, v36);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v50)(v31, *(_QWORD *)(v50 + 8));
  }
  else
  {
    v51 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    }
    ServantCharaGraphEXOpenManager__ClearSaveDataList((const MethodInfo *)v51);
    return 0;
  }
  return v26;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCharaGraphEXOpenManager__SetCharaGraphEXOpen(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  ServantCharaGraphEXOpenManager_c *v27; // x0
  WarBoardEvalValueSquare_CalcEval_o *svtCharaGraphEXOpenDict; // x0
  ServantCharaGraphEXOpenManager_c *v29; // x0
  ServantCharaGraphEXOpenManager_c *v30; // x0
  System_Collections_Generic_List_int__o *v31; // x21
  ServantCharaGraphEXOpenManager_c *v32; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E9961 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, limitCount, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&ServantCharaGraphEXOpenManager_TypeInfo, v24, v25, v26);
    byte_42E9961 = 1;
  }
  value = 0LL;
  v27 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v27 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (WarBoardEvalValueSquare_CalcEval_o *)v27->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_28;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)svtCharaGraphEXOpenDict,
          (const MethodInfo_2F31CC0 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__) )
  {
    v29 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    }
    ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v29);
  }
  v30 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v30 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (WarBoardEvalValueSquare_CalcEval_o *)v30->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_28;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)svtCharaGraphEXOpenDict,
         svtId,
         &value,
         (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    svtCharaGraphEXOpenDict = value;
    if ( !value )
      goto LABEL_28;
    if ( !System_Collections_Generic_List_int___Contains(
            (System_Collections_Generic_List_int__o *)value,
            limitCount,
            (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      svtCharaGraphEXOpenDict = value;
      if ( value )
      {
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)value,
          limitCount,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        return;
      }
LABEL_28:
      sub_B5D69C(svtCharaGraphEXOpenDict, *(_QWORD *)&limitCount);
    }
  }
  else
  {
    v31 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v31,
      (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
    if ( !v31 )
      goto LABEL_28;
    System_Collections_Generic_List_int___Add(
      v31,
      limitCount,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    v32 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
      v32 = ServantCharaGraphEXOpenManager_TypeInfo;
    }
    svtCharaGraphEXOpenDict = (WarBoardEvalValueSquare_CalcEval_o *)v32->static_fields->svtCharaGraphEXOpenDict;
    if ( !svtCharaGraphEXOpenDict )
      goto LABEL_28;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)svtCharaGraphEXOpenDict,
      svtId,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v31,
      (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
  }
}


bool __fastcall ServantCharaGraphEXOpenManager__WriteData(const MethodInfo *method)
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  ManagerConfig_c *v40; // x0
  ServantCharaGraphEXOpenManager_c *v42; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v44; // x20
  System_IO_BinaryWriter_o *v45; // x19
  __int64 v46; // x1
  ServantCharaGraphEXOpenManager_c *v47; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *svtCharaGraphEXOpenDict; // x0
  __int64 Count; // x0
  __int64 v50; // x1
  unsigned int v51; // w20
  __int64 v52; // x1
  struct System_Collections_Generic_Dictionary_int__List_int___o *v53; // x0
  Il2CppObject *value; // x22
  signed __int64 monitor_low; // x20
  unsigned __int64 i; // x23
  _BOOL8 v57; // x0
  __int64 v58; // x1
  __int64 v59; // x3
  char v60; // w8
  int v61; // w21
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v63; // x10
  int32_t *p_offset; // x11
  __int64 v65; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v66; // [xsp+0h] [xbp-A0h] BYREF
  int v67[4]; // [xsp+28h] [xbp-78h] BYREF
  int v68; // [xsp+38h] [xbp-68h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v69; // [xsp+40h] [xbp-60h] BYREF

  if ( (byte_42E995F & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryWriter_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__, v16, v17, v18);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v31, v32, v33);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&ServantCharaGraphEXOpenManager_TypeInfo, v37, v38, v39);
    byte_42E995F = 1;
  }
  memset(&v69, 0, sizeof(v69));
  v68 = 0;
  v40 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v40 = ManagerConfig_TypeInfo;
  }
  if ( !v40->static_fields->UseMock )
  {
    v42 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    }
    SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v42);
    v44 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v45 = (System_IO_BinaryWriter_o *)sub_B5D694(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_40360312(v45, v44, 0LL);
    v47 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( (BYTE3(ServantCharaGraphEXOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
      v47 = ServantCharaGraphEXOpenManager_TypeInfo;
    }
    svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v47->static_fields->svtCharaGraphEXOpenDict;
    if ( !svtCharaGraphEXOpenDict )
      sub_B5D69C(0LL, v46);
    Count = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
              svtCharaGraphEXOpenDict,
              (const MethodInfo_2F31CC0 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__);
    if ( !v45 )
      sub_B5D69C(Count, v50);
    v51 = Count;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v45->klass->vtable._22_Write.method)(
      v45,
      ServantCharaGraphEXOpenManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
      v45->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v45->klass->vtable._17_Write.method)(
      v45,
      v51,
      v45->klass->vtable._18_Write.methodPtr);
    v53 = ServantCharaGraphEXOpenManager_TypeInfo->static_fields->svtCharaGraphEXOpenDict;
    if ( !v53 )
      sub_B5D69C(0LL, v52);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
      &v66,
      (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v53,
      (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    v69 = v66;
    while ( 1 )
    {
      v57 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
              &v69,
              (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
      if ( !v57 )
        break;
      value = v69.fields.current.fields.value;
      if ( !v69.fields.current.fields.value )
        sub_B5D69C(v57, v58);
      monitor_low = SLODWORD(v69.fields.current.fields.value[1].monitor);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v45->klass->vtable._17_Write.method)(
        v45,
        LODWORD(v69.fields.current.fields.key),
        v45->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v45->klass->vtable._17_Write.method)(
        v45,
        (unsigned int)monitor_low,
        v45->klass->vtable._18_Write.methodPtr);
      if ( (int)monitor_low >= 1 )
      {
        for ( i = 0LL; (__int64)i < monitor_low; ++i )
        {
          if ( i >= LODWORD(value[1].monitor) )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v45->klass->vtable._17_Write.method)(
            v45,
            *((unsigned int *)&value[1].klass->_1.byval_arg.data + i),
            v45->klass->vtable._18_Write.methodPtr);
        }
      }
    }
    v67[0] = 178;
    v68 = 1;
    System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
      &v69,
      (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    if ( v67[0] == 178 )
    {
      v60 = 0;
      v68 = 0;
    }
    else
    {
      v60 = 1;
    }
    *(_DWORD *)((unsigned __int64)v67 & 0xFFFFFFFFFFFFFFFBLL | (4LL * (v60 & 1))) = 190;
    v61 = ++v68;
    klass = v45->klass;
    if ( *(_WORD *)&v45->klass->_2.bitflags1 )
    {
      v63 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v63;
        p_offset += 4;
        if ( v63 >= *(unsigned __int16 *)&v45->klass->_2.bitflags1 )
          goto LABEL_32;
      }
      v65 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_32:
      v65 = sub_AF54C0(v45, System_IDisposable_TypeInfo, 0LL, v59);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v65)(v45, *(_QWORD *)(v65 + 8));
    if ( v61 && v67[v61 - 1] == 190 )
      v68 = v61 - 1;
  }
  return 1;
}