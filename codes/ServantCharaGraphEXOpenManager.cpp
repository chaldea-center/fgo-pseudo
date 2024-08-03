void __fastcall ServantCharaGraphEXOpenManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_int__object__o *v9; // x19
  struct ServantCharaGraphEXOpenManager_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FD573 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v1);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v4);
    sub_1B640C8(&ServantCharaGraphEXOpenManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_6618/*"Fgo_20210622"*/, v6);
    byte_49FD573 = 1;
  }
  ServantCharaGraphEXOpenManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6618/*"Fgo_20210622"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ServantCharaGraphEXOpenManager_TypeInfo->static_fields,
    StringLiteral_6618/*"Fgo_20210622"*/,
    v2,
    v3);
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                 v7,
                                                                 v8);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  static_fields = ServantCharaGraphEXOpenManager_TypeInfo->static_fields;
  static_fields->svtCharaGraphEXOpenDict = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->svtCharaGraphEXOpenDict, (int32_t)v9, v11, v12);
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
  System_Collections_Generic_Dictionary_int__object__o *svtCharaGraphEXOpenDict; // x0

  if ( (byte_49FD56E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__, v1);
    sub_1B640C8(&ServantCharaGraphEXOpenManager_TypeInfo, v2);
    byte_49FD56E = 1;
  }
  v3 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v3 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__object__o *)v3->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_int__object___Clear(
    svtCharaGraphEXOpenDict,
    (const MethodInfo_3123B0C *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
}


void __fastcall ServantCharaGraphEXOpenManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCharaGraphEXOpenManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_49FD56C & 1) == 0 )
  {
    sub_1B640C8(&ServantCharaGraphEXOpenManager_TypeInfo, v1);
    byte_49FD56C = 1;
  }
  v2 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
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

  if ( (byte_49FD56B & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, v1);
    sub_1B640C8(&DatFileName_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FD56B = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(32, 0LL);
  return System_String__Concat_61386656(DatFileSavePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


void __fastcall ServantCharaGraphEXOpenManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCharaGraphEXOpenManager_c *v2; // x0

  if ( (byte_49FD56D & 1) == 0 )
  {
    sub_1B640C8(&ServantCharaGraphEXOpenManager_TypeInfo, v1);
    byte_49FD56D = 1;
  }
  v2 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
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
  Il2CppObject *svtCharaGraphEXOpenDict; // x0
  ServantCharaGraphEXOpenManager_c *v10; // x0
  ServantCharaGraphEXOpenManager_c *v11; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FD571 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, *(_QWORD *)&limitCount);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v6);
    sub_1B640C8(&ServantCharaGraphEXOpenManager_TypeInfo, v7);
    byte_49FD571 = 1;
  }
  v8 = ServantCharaGraphEXOpenManager_TypeInfo;
  value = 0LL;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v8 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (Il2CppObject *)v8->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          (System_Collections_Generic_Dictionary_int__object__o *)svtCharaGraphEXOpenDict,
          (const MethodInfo_3123634 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__) )
  {
    v10 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v10);
  }
  v11 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v11 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (Il2CppObject *)v11->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)svtCharaGraphEXOpenDict,
          svtId,
          &value,
          (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    return 0;
  svtCharaGraphEXOpenDict = value;
  if ( !value )
LABEL_18:
    sub_1B64324(svtCharaGraphEXOpenDict);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)value,
           limitCount,
           (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
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
  bool v10; // w21
  ServantCharaGraphEXOpenManager_c *v11; // x0
  System_String_o *SaveFileName; // x19
  ServantCharaGraphEXOpenManager_c *v13; // x0
  System_IO_Stream_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  System_IO_BinaryReader_o *v17; // x19
  __int64 v18; // x0
  System_String_o *v19; // x20
  ServantCharaGraphEXOpenManager_c *v20; // x0
  int v21; // w20
  int i; // w25
  int32_t v23; // w21
  int v24; // w23
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_int__o *v27; // x22
  __int64 v28; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  ServantCharaGraphEXOpenManager_c *v32; // x0
  System_Collections_Generic_Dictionary_int__object__o *svtCharaGraphEXOpenDict; // x0
  System_IO_BinaryReader_c *klass; // x8
  __int64 v35; // x9
  int32_t *p_offset; // x10
  __int64 v37; // x0
  ServantCharaGraphEXOpenManager_c *v38; // x0

  if ( (byte_49FD56F & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v2);
    sub_1B640C8(&System_IDisposable_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1B640C8(&ManagerConfig_TypeInfo, v7);
    sub_1B640C8(&ServantCharaGraphEXOpenManager_TypeInfo, v8);
    byte_49FD56F = 1;
  }
  v9 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = ManagerConfig_TypeInfo;
  }
  if ( v9->static_fields->UseMock )
    return 1;
  v11 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v11);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v13 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    ServantCharaGraphEXOpenManager__ClearSaveDataList((const MethodInfo *)v13);
    v14 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v17 = (System_IO_BinaryReader_o *)sub_1B64314(System_IO_BinaryReader_TypeInfo, v15, v16);
    System_IO_BinaryReader___ctor(v17, v14, 0LL);
    if ( !v17 )
      sub_1B64324(v18);
    v19 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._22_ReadString.method)(
                               v17,
                               v17->klass->vtable._23_ReadChars.methodPtr);
    v20 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
      v20 = ServantCharaGraphEXOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v20->static_fields->SAVE_DATA_VERSION, v19, 0LL) )
    {
      v10 = 0;
    }
    else
    {
      v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
              v17,
              v17->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v21 >= 1 )
      {
        for ( i = 0; i != v21; ++i )
        {
          v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
                  v17,
                  v17->klass->vtable._16_ReadUInt32.methodPtr);
          v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
                  v17,
                  v17->klass->vtable._16_ReadUInt32.methodPtr);
          v27 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                            System_Collections_Generic_List_int__TypeInfo,
                                                            v25,
                                                            v26);
          System_Collections_Generic_List_int____ctor(
            v27,
            (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( v24 >= 1 )
          {
            do
            {
              v28 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
                      v17,
                      v17->klass->vtable._16_ReadUInt32.methodPtr);
              if ( !v27 )
                sub_1B64324(v28);
              items = v27->fields._items;
              v30 = Method_System_Collections_Generic_List_int__Add__;
              ++v27->fields._version;
              if ( !items )
                sub_1B64324(v28);
              size = v27->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v27,
                  v28,
                  *(const MethodInfo_348FEDC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
              }
              else
              {
                v27->fields._size = size + 1;
                items->m_Items[size + 1] = v28;
              }
              --v24;
            }
            while ( v24 );
          }
          v32 = ServantCharaGraphEXOpenManager_TypeInfo;
          if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
            v32 = ServantCharaGraphEXOpenManager_TypeInfo;
          }
          svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__object__o *)v32->static_fields->svtCharaGraphEXOpenDict;
          if ( !svtCharaGraphEXOpenDict )
            sub_1B64324(0LL);
          System_Collections_Generic_Dictionary_int__object___Add(
            svtCharaGraphEXOpenDict,
            v23,
            (Il2CppObject *)v27,
            (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
        }
      }
      v10 = 1;
    }
    klass = v17->klass;
    v35 = *(unsigned __int16 *)(&v17->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v17->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v35;
        p_offset += 4;
        if ( !v35 )
          goto LABEL_35;
      }
      v37 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_35:
      v37 = sub_1BB60A8(v17, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v37)(v17, *(_QWORD *)(v37 + 8));
  }
  else
  {
    v38 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    ServantCharaGraphEXOpenManager__ClearSaveDataList((const MethodInfo *)v38);
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
  Il2CppObject *svtCharaGraphEXOpenDict; // x0
  ServantCharaGraphEXOpenManager_c *v14; // x0
  ServantCharaGraphEXOpenManager_c *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppClass *klass; // x8
  _QWORD *v19; // x9
  __int64 monitor_low; // x10
  System_Collections_Generic_List_int__o *v21; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  ServantCharaGraphEXOpenManager_c *v25; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FD572 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, *(_QWORD *)&limitCount);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B640C8(&ServantCharaGraphEXOpenManager_TypeInfo, v11);
    byte_49FD572 = 1;
  }
  v12 = ServantCharaGraphEXOpenManager_TypeInfo;
  value = 0LL;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v12 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (Il2CppObject *)v12->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_31;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          (System_Collections_Generic_Dictionary_int__object__o *)svtCharaGraphEXOpenDict,
          (const MethodInfo_3123634 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__) )
  {
    v14 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v14);
  }
  v15 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v15 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (Il2CppObject *)v15->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_31;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)svtCharaGraphEXOpenDict,
          svtId,
          &value,
          (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v21 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v16, v17);
    System_Collections_Generic_List_int____ctor(
      v21,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( v21 )
    {
      items = v21->fields._items;
      v23 = Method_System_Collections_Generic_List_int__Add__;
      ++v21->fields._version;
      if ( items )
      {
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v21,
            limitCount,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v21->fields._size = size + 1;
          items->m_Items[size + 1] = limitCount;
        }
        v25 = ServantCharaGraphEXOpenManager_TypeInfo;
        if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
          v25 = ServantCharaGraphEXOpenManager_TypeInfo;
        }
        svtCharaGraphEXOpenDict = (Il2CppObject *)v25->static_fields->svtCharaGraphEXOpenDict;
        if ( svtCharaGraphEXOpenDict )
        {
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)svtCharaGraphEXOpenDict,
            svtId,
            (Il2CppObject *)v21,
            (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
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
         (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return;
  }
  svtCharaGraphEXOpenDict = value;
  if ( !value
    || (klass = value[1].klass,
        v19 = Method_System_Collections_Generic_List_int__Add__,
        ++HIDWORD(value[1].monitor),
        !klass) )
  {
LABEL_31:
    sub_1B64324(svtCharaGraphEXOpenDict);
  }
  monitor_low = SLODWORD(svtCharaGraphEXOpenDict[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)svtCharaGraphEXOpenDict,
      limitCount,
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
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
  ServantCharaGraphEXOpenManager_c *v15; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  System_IO_BinaryWriter_o *v20; // x19
  ServantCharaGraphEXOpenManager_c *v21; // x0
  System_Collections_Generic_Dictionary_int__object__o *svtCharaGraphEXOpenDict; // x0
  __int64 Count; // x0
  unsigned int v24; // w20
  struct System_Collections_Generic_Dictionary_int__List_int___o *v25; // x0
  _BOOL8 v26; // x0
  Il2CppObject *value; // x20
  int monitor; // w21
  int32_t i; // w22
  unsigned int Item; // w0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v37; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_49FD570 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__, v2);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__, v6);
    sub_1B640C8(&System_IDisposable_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v11);
    sub_1B640C8(&ManagerConfig_TypeInfo, v12);
    sub_1B640C8(&ServantCharaGraphEXOpenManager_TypeInfo, v13);
    byte_49FD570 = 1;
  }
  v14 = ManagerConfig_TypeInfo;
  memset(&v37, 0, sizeof(v37));
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v14 = ManagerConfig_TypeInfo;
  }
  if ( !v14->static_fields->UseMock )
  {
    v15 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v15);
    v17 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v20 = (System_IO_BinaryWriter_o *)sub_1B64314(System_IO_BinaryWriter_TypeInfo, v18, v19);
    System_IO_BinaryWriter___ctor_61613552(v20, v17, 0LL);
    v21 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
      v21 = ServantCharaGraphEXOpenManager_TypeInfo;
    }
    svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__object__o *)v21->static_fields->svtCharaGraphEXOpenDict;
    if ( !svtCharaGraphEXOpenDict )
      sub_1B64324(0LL);
    Count = System_Collections_Generic_Dictionary_int__object___get_Count(
              svtCharaGraphEXOpenDict,
              (const MethodInfo_3123634 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__);
    if ( !v20 )
      sub_1B64324(Count);
    v24 = Count;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v20->klass->vtable._22_Write.method)(
      v20,
      ServantCharaGraphEXOpenManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
      v20->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
      v20,
      v24,
      v20->klass->vtable._18_Write.methodPtr);
    v25 = ServantCharaGraphEXOpenManager_TypeInfo->static_fields->svtCharaGraphEXOpenDict;
    if ( !v25 )
      sub_1B64324(0LL);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v36,
      (System_Collections_Generic_Dictionary_int__object__o *)v25,
      (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    v37 = v36;
    while ( 1 )
    {
      v26 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v37,
              (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
      if ( !v26 )
        break;
      value = v37.fields._current.fields.value;
      if ( !v37.fields._current.fields.value )
        sub_1B64324(v26);
      monitor = (int)v37.fields._current.fields.value[1].monitor;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
        v20,
        LODWORD(v37.fields._current.fields.key),
        v20->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
        v20,
        (unsigned int)monitor,
        v20->klass->vtable._18_Write.methodPtr);
      if ( monitor >= 1 )
      {
        for ( i = 0; i != monitor; ++i )
        {
          Item = System_Collections_Generic_List_int___get_Item(
                   (System_Collections_Generic_List_int__o *)value,
                   i,
                   (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
            v20,
            Item,
            v20->klass->vtable._18_Write.methodPtr);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v37,
      (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    klass = v20->klass;
    v32 = *(unsigned __int16 *)(&v20->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v20->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        p_offset += 4;
        if ( !v32 )
          goto LABEL_24;
      }
      v34 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_24:
      v34 = sub_1BB60A8(v20, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v34)(v20, *(_QWORD *)(v34 + 8));
  }
  return 1;
}