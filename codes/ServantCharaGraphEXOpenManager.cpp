void __fastcall ServantCharaGraphEXOpenManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_Dictionary_int__object__o *v17; // x19
  struct ServantCharaGraphEXOpenManager_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B173C2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v8, v9);
    sub_1BCA7E0(&ServantCharaGraphEXOpenManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_6764/*"Fgo_20210622"*/, v12, v13);
    byte_4B173C2 = 1;
  }
  ServantCharaGraphEXOpenManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6764/*"Fgo_20210622"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantCharaGraphEXOpenManager_TypeInfo->static_fields,
    StringLiteral_6764/*"Fgo_20210622"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                  v14,
                                                                  v15,
                                                                  v16);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v17,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  static_fields = ServantCharaGraphEXOpenManager_TypeInfo->static_fields;
  static_fields->svtCharaGraphEXOpenDict = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v17;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->svtCharaGraphEXOpenDict,
    (int64_t)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
}


void __fastcall ServantCharaGraphEXOpenManager___ctor(ServantCharaGraphEXOpenManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCharaGraphEXOpenManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  ServantCharaGraphEXOpenManager_c *v5; // x0
  System_Collections_Generic_Dictionary_int__object__o *svtCharaGraphEXOpenDict; // x0

  if ( (byte_4B173BD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__, v1, v2);
    sub_1BCA7E0(&ServantCharaGraphEXOpenManager_TypeInfo, v3, v4);
    byte_4B173BD = 1;
  }
  v5 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v1);
    v5 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__object__o *)v5->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    sub_1BCAA3C(0LL, v1);
  System_Collections_Generic_Dictionary_int__object___Clear(
    svtCharaGraphEXOpenDict,
    (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
}


void __fastcall ServantCharaGraphEXOpenManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantCharaGraphEXOpenManager_c *v3; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4B173BB & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCharaGraphEXOpenManager_TypeInfo, v1, v2);
    byte_4B173BB = 1;
  }
  v3 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v1);
  SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v3);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


System_String_o *__fastcall ServantCharaGraphEXOpenManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B173BA & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B173BA = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v7);
  FileName = DatFileName__getFileName(32, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


void __fastcall ServantCharaGraphEXOpenManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  ServantCharaGraphEXOpenManager_c *v3; // x0

  if ( (byte_4B173BC & 1) == 0 )
  {
    sub_1BCA7E0(&ServantCharaGraphEXOpenManager_TypeInfo, v1, v2);
    byte_4B173BC = 1;
  }
  v3 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v1);
  ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCharaGraphEXOpenManager__IsCharaGraphEXOpen(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  ServantCharaGraphEXOpenManager_c *v11; // x0
  Il2CppObject *svtCharaGraphEXOpenDict; // x0
  ServantCharaGraphEXOpenManager_c *v13; // x0
  ServantCharaGraphEXOpenManager_c *v14; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B173C0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__,
      *(_QWORD *)&limitCount,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v7, v8);
    sub_1BCA7E0(&ServantCharaGraphEXOpenManager_TypeInfo, v9, v10);
    byte_4B173C0 = 1;
  }
  v11 = ServantCharaGraphEXOpenManager_TypeInfo;
  value = 0LL;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, *(_QWORD *)&limitCount);
    v11 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (Il2CppObject *)v11->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          (System_Collections_Generic_Dictionary_int__object__o *)svtCharaGraphEXOpenDict,
          (const MethodInfo_3205B94 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__) )
  {
    v13 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, *(_QWORD *)&limitCount);
    ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v13);
  }
  v14 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, *(_QWORD *)&limitCount);
    v14 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (Il2CppObject *)v14->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)svtCharaGraphEXOpenDict,
          svtId,
          &value,
          (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    return 0;
  svtCharaGraphEXOpenDict = value;
  if ( !value )
LABEL_18:
    sub_1BCAA3C(svtCharaGraphEXOpenDict, *(_QWORD *)&limitCount);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)value,
           limitCount,
           (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall ServantCharaGraphEXOpenManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  ManagerConfig_c *v17; // x0
  bool v18; // w21
  ServantCharaGraphEXOpenManager_c *v19; // x0
  System_String_o *SaveFileName; // x19
  __int64 v21; // x1
  ServantCharaGraphEXOpenManager_c *v22; // x0
  System_IO_Stream_o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_IO_BinaryReader_o *v27; // x19
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  System_String_o *v31; // x20
  ServantCharaGraphEXOpenManager_c *v32; // x0
  int v33; // w20
  int i; // w25
  int32_t v35; // w21
  int v36; // w23
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Collections_Generic_List_int__o *v40; // x22
  __int64 v41; // x1
  __int64 v42; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  ServantCharaGraphEXOpenManager_c *v46; // x0
  System_Collections_Generic_Dictionary_int__object__o *svtCharaGraphEXOpenDict; // x0
  System_IO_BinaryReader_c *klass; // x8
  __int64 v49; // x9
  int32_t *p_offset; // x10
  __int64 v51; // x0
  ServantCharaGraphEXOpenManager_c *v52; // x0

  if ( (byte_4B173BE & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v3, v4);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v11, v12);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v13, v14);
    sub_1BCA7E0(&ServantCharaGraphEXOpenManager_TypeInfo, v15, v16);
    byte_4B173BE = 1;
  }
  v17 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v17 = ManagerConfig_TypeInfo;
  }
  if ( v17->static_fields->UseMock )
    return 1;
  v19 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v1);
  SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v19);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v22 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v21);
    ServantCharaGraphEXOpenManager__ClearSaveDataList((const MethodInfo *)v22);
    v23 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v27 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v24, v25, v26);
    System_IO_BinaryReader___ctor(v27, v23, 0LL);
    if ( !v27 )
      sub_1BCAA3C(v28, v29);
    v31 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v27->klass->vtable._22_ReadString.method)(
                               v27,
                               v27->klass->vtable._23_ReadChars.methodPtr);
    v32 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v30);
      v32 = ServantCharaGraphEXOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v32->static_fields->SAVE_DATA_VERSION, v31, 0LL) )
    {
      v18 = 0;
    }
    else
    {
      v33 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v27->klass->vtable._15_ReadInt32.method)(
              v27,
              v27->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v33 >= 1 )
      {
        for ( i = 0; i != v33; ++i )
        {
          v35 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v27->klass->vtable._15_ReadInt32.method)(
                  v27,
                  v27->klass->vtable._16_ReadUInt32.methodPtr);
          v36 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v27->klass->vtable._15_ReadInt32.method)(
                  v27,
                  v27->klass->vtable._16_ReadUInt32.methodPtr);
          v40 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                            System_Collections_Generic_List_int__TypeInfo,
                                                            v37,
                                                            v38,
                                                            v39);
          System_Collections_Generic_List_int____ctor(
            v40,
            (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( v36 >= 1 )
          {
            do
            {
              v42 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v27->klass->vtable._15_ReadInt32.method)(
                      v27,
                      v27->klass->vtable._16_ReadUInt32.methodPtr);
              v41 = (unsigned int)v42;
              if ( !v40 )
                sub_1BCAA3C(v42, (unsigned int)v42);
              items = v40->fields._items;
              v44 = Method_System_Collections_Generic_List_int__Add__;
              ++v40->fields._version;
              if ( !items )
                sub_1BCAA3C(v42, (unsigned int)v42);
              size = v40->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v40,
                  v42,
                  *(const MethodInfo_3584C38 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
              }
              else
              {
                v40->fields._size = size + 1;
                items->m_Items[size + 1] = v42;
              }
              --v36;
            }
            while ( v36 );
          }
          v46 = ServantCharaGraphEXOpenManager_TypeInfo;
          if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v41);
            v46 = ServantCharaGraphEXOpenManager_TypeInfo;
          }
          svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__object__o *)v46->static_fields->svtCharaGraphEXOpenDict;
          if ( !svtCharaGraphEXOpenDict )
            sub_1BCAA3C(0LL, v41);
          System_Collections_Generic_Dictionary_int__object___Add(
            svtCharaGraphEXOpenDict,
            v35,
            (Il2CppObject *)v40,
            (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
        }
      }
      v18 = 1;
    }
    klass = v27->klass;
    v49 = *(unsigned __int16 *)(&v27->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v27->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v49;
        p_offset += 4;
        if ( !v49 )
          goto LABEL_35;
      }
      v51 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_35:
      v51 = sub_1C1C7C0(v27, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v51)(v27, *(_QWORD *)(v51 + 8));
  }
  else
  {
    v52 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v21);
    ServantCharaGraphEXOpenManager__ClearSaveDataList((const MethodInfo *)v52);
    return 0;
  }
  return v18;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCharaGraphEXOpenManager__SetCharaGraphEXOpen(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  ServantCharaGraphEXOpenManager_c *v19; // x0
  Il2CppObject *svtCharaGraphEXOpenDict; // x0
  ServantCharaGraphEXOpenManager_c *v21; // x0
  ServantCharaGraphEXOpenManager_c *v22; // x0
  __int64 v23; // x2
  __int64 v24; // x3
  Il2CppClass *klass; // x8
  _QWORD *v26; // x9
  __int64 monitor_low; // x10
  System_Collections_Generic_List_int__o *v28; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  ServantCharaGraphEXOpenManager_c *v32; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B173C1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, *(_QWORD *)&limitCount, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v15, v16);
    sub_1BCA7E0(&ServantCharaGraphEXOpenManager_TypeInfo, v17, v18);
    byte_4B173C1 = 1;
  }
  v19 = ServantCharaGraphEXOpenManager_TypeInfo;
  value = 0LL;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, *(_QWORD *)&limitCount);
    v19 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (Il2CppObject *)v19->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_31;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          (System_Collections_Generic_Dictionary_int__object__o *)svtCharaGraphEXOpenDict,
          (const MethodInfo_3205B94 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__) )
  {
    v21 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, *(_QWORD *)&limitCount);
    ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v21);
  }
  v22 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, *(_QWORD *)&limitCount);
    v22 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (Il2CppObject *)v22->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_31;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)svtCharaGraphEXOpenDict,
          svtId,
          &value,
          (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v28 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      *(_QWORD *)&limitCount,
                                                      v23,
                                                      v24);
    System_Collections_Generic_List_int____ctor(
      v28,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( v28 )
    {
      items = v28->fields._items;
      v30 = Method_System_Collections_Generic_List_int__Add__;
      ++v28->fields._version;
      if ( items )
      {
        size = v28->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v28,
            limitCount,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v28->fields._size = size + 1;
          items->m_Items[size + 1] = limitCount;
        }
        v32 = ServantCharaGraphEXOpenManager_TypeInfo;
        if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, *(_QWORD *)&limitCount);
          v32 = ServantCharaGraphEXOpenManager_TypeInfo;
        }
        svtCharaGraphEXOpenDict = (Il2CppObject *)v32->static_fields->svtCharaGraphEXOpenDict;
        if ( svtCharaGraphEXOpenDict )
        {
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)svtCharaGraphEXOpenDict,
            svtId,
            (Il2CppObject *)v28,
            (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
          return;
        }
      }
    }
    goto LABEL_31;
  }
  svtCharaGraphEXOpenDict = value;
  if ( !value )
    goto LABEL_31;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)value,
         limitCount,
         (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return;
  }
  svtCharaGraphEXOpenDict = value;
  if ( !value
    || (klass = value[1].klass,
        v26 = Method_System_Collections_Generic_List_int__Add__,
        ++HIDWORD(value[1].monitor),
        !klass) )
  {
LABEL_31:
    sub_1BCAA3C(svtCharaGraphEXOpenDict, *(_QWORD *)&limitCount);
  }
  monitor_low = SLODWORD(svtCharaGraphEXOpenDict[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)svtCharaGraphEXOpenDict,
      limitCount,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(svtCharaGraphEXOpenDict[1].monitor) = monitor_low + 1;
    *((_DWORD *)&klass->_1.byval_arg.data + monitor_low) = limitCount;
  }
}


bool __fastcall ServantCharaGraphEXOpenManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  ManagerConfig_c *v27; // x0
  ServantCharaGraphEXOpenManager_c *v28; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_IO_BinaryWriter_o *v34; // x19
  __int64 v35; // x1
  ServantCharaGraphEXOpenManager_c *v36; // x0
  System_Collections_Generic_Dictionary_int__object__o *svtCharaGraphEXOpenDict; // x0
  __int64 Count; // x0
  __int64 v39; // x1
  unsigned int v40; // w20
  __int64 v41; // x1
  struct System_Collections_Generic_Dictionary_int__List_int___o *v42; // x0
  _BOOL8 v43; // x0
  __int64 v44; // x1
  Il2CppObject *value; // x20
  int monitor; // w21
  int32_t i; // w22
  unsigned int Item; // w0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v50; // x9
  int32_t *p_offset; // x10
  __int64 v52; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v54; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v55; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4B173BF & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryWriter_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__, v11, v12);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v21, v22);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v23, v24);
    sub_1BCA7E0(&ServantCharaGraphEXOpenManager_TypeInfo, v25, v26);
    byte_4B173BF = 1;
  }
  v27 = ManagerConfig_TypeInfo;
  memset(&v55, 0, sizeof(v55));
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v27 = ManagerConfig_TypeInfo;
  }
  if ( !v27->static_fields->UseMock )
  {
    v28 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v1);
    SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v28);
    v30 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v34 = (System_IO_BinaryWriter_o *)sub_1BCAA2C(System_IO_BinaryWriter_TypeInfo, v31, v32, v33);
    System_IO_BinaryWriter___ctor_62639712(v34, v30, 0LL);
    v36 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v35);
      v36 = ServantCharaGraphEXOpenManager_TypeInfo;
    }
    svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__object__o *)v36->static_fields->svtCharaGraphEXOpenDict;
    if ( !svtCharaGraphEXOpenDict )
      sub_1BCAA3C(0LL, v35);
    Count = System_Collections_Generic_Dictionary_int__object___get_Count(
              svtCharaGraphEXOpenDict,
              (const MethodInfo_3205B94 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__);
    if ( !v34 )
      sub_1BCAA3C(Count, v39);
    v40 = Count;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v34->klass->vtable._22_Write.method)(
      v34,
      ServantCharaGraphEXOpenManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
      v34->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v34->klass->vtable._17_Write.method)(
      v34,
      v40,
      v34->klass->vtable._18_Write.methodPtr);
    v42 = ServantCharaGraphEXOpenManager_TypeInfo->static_fields->svtCharaGraphEXOpenDict;
    if ( !v42 )
      sub_1BCAA3C(0LL, v41);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v54,
      (System_Collections_Generic_Dictionary_int__object__o *)v42,
      (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    v55 = v54;
    while ( 1 )
    {
      v43 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v55,
              (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
      if ( !v43 )
        break;
      value = v55.fields._current.fields.value;
      if ( !v55.fields._current.fields.value )
        sub_1BCAA3C(v43, v44);
      monitor = (int)v55.fields._current.fields.value[1].monitor;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v34->klass->vtable._17_Write.method)(
        v34,
        LODWORD(v55.fields._current.fields.key),
        v34->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v34->klass->vtable._17_Write.method)(
        v34,
        (unsigned int)monitor,
        v34->klass->vtable._18_Write.methodPtr);
      if ( monitor >= 1 )
      {
        for ( i = 0; i != monitor; ++i )
        {
          Item = System_Collections_Generic_List_int___get_Item(
                   (System_Collections_Generic_List_int__o *)value,
                   i,
                   (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v34->klass->vtable._17_Write.method)(
            v34,
            Item,
            v34->klass->vtable._18_Write.methodPtr);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v55,
      (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    klass = v34->klass;
    v50 = *(unsigned __int16 *)(&v34->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v34->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v50;
        p_offset += 4;
        if ( !v50 )
          goto LABEL_24;
      }
      v52 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_24:
      v52 = sub_1C1C7C0(v34, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v52)(v34, *(_QWORD *)(v52 + 8));
  }
  return 1;
}