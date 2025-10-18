void ServantCharaGraphEXOpenManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_Collections_Generic_Dictionary_int__object__o *v3; // x19
  struct ServantCharaGraphEXOpenManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C4436C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1C37058(&ServantCharaGraphEXOpenManager_TypeInfo);
    sub_1C37058(&StringLiteral_6680/*"Fgo_20210622"*/);
    byte_4C4436C = 1;
  }
  ServantCharaGraphEXOpenManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6680/*"Fgo_20210622"*/;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)ServantCharaGraphEXOpenManager_TypeInfo->static_fields,
    StringLiteral_6680/*"Fgo_20210622"*/,
    v1,
    v2);
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  static_fields = ServantCharaGraphEXOpenManager_TypeInfo->static_fields;
  static_fields->svtCharaGraphEXOpenDict = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->svtCharaGraphEXOpenDict, (int32_t)v3, v5, v6);
}


void ServantCharaGraphEXOpenManager___ctor(ServantCharaGraphEXOpenManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantCharaGraphEXOpenManager__ClearSaveDataList(const MethodInfo *method)
{
  ServantCharaGraphEXOpenManager_c *v1; // x0
  System_Collections_Generic_Dictionary_int__object__o *svtCharaGraphEXOpenDict; // x0

  if ( (byte_4C44367 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
    sub_1C37058(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_4C44367 = 1;
  }
  v1 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v1 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__object__o *)v1->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    sub_1C372B4(0);
  System_Collections_Generic_Dictionary_int__object___Clear(
    svtCharaGraphEXOpenDict,
    (const MethodInfo_33FA70C *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
}


void ServantCharaGraphEXOpenManager__DeleteSaveData(const MethodInfo *method)
{
  ServantCharaGraphEXOpenManager_c *v1; // x0
  System_String_o *SaveFileName; // x19
  ServantCharaGraphEXOpenManager_c *v3; // x0

  if ( (byte_4C44365 & 1) == 0 )
  {
    sub_1C37058(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_4C44365 = 1;
  }
  v1 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
  v3 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  ServantCharaGraphEXOpenManager__ClearSaveDataList((const MethodInfo *)v3);
}


System_String_o *ServantCharaGraphEXOpenManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C44364 & 1) == 0 )
  {
    sub_1C37058(&AndroidUtil_TypeInfo);
    sub_1C37058(&DatFileName_TypeInfo);
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    byte_4C44364 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(32, 0);
  return System_String__Concat_63599904(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


void ServantCharaGraphEXOpenManager__Initialize(const MethodInfo *method)
{
  ServantCharaGraphEXOpenManager_c *v1; // x0

  if ( (byte_4C44366 & 1) == 0 )
  {
    sub_1C37058(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_4C44366 = 1;
  }
  v1 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v1);
}


bool ServantCharaGraphEXOpenManager__IsCharaGraphEXOpen(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  ServantCharaGraphEXOpenManager_c *v5; // x0
  Il2CppObject *svtCharaGraphEXOpenDict; // x0
  ServantCharaGraphEXOpenManager_c *v7; // x0
  ServantCharaGraphEXOpenManager_c *v8; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C4436A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_4C4436A = 1;
  }
  v5 = ServantCharaGraphEXOpenManager_TypeInfo;
  value = 0;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v5 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (Il2CppObject *)v5->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          (System_Collections_Generic_Dictionary_int__object__o *)svtCharaGraphEXOpenDict,
          (const MethodInfo_33FA234 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__) )
  {
    v7 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v7);
  }
  v8 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v8 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (Il2CppObject *)v8->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)svtCharaGraphEXOpenDict,
          svtId,
          &value,
          (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    return 0;
  svtCharaGraphEXOpenDict = value;
  if ( !value )
LABEL_18:
    sub_1C372B4(svtCharaGraphEXOpenDict);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)value,
           limitCount,
           (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool ServantCharaGraphEXOpenManager__ReadData(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  bool v2; // w21
  ServantCharaGraphEXOpenManager_c *v3; // x0
  System_String_o *SaveFileName; // x19
  ServantCharaGraphEXOpenManager_c *v5; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryReader_o *v7; // x19
  __int64 v8; // x0
  System_String_o *v9; // x20
  ServantCharaGraphEXOpenManager_c *v10; // x0
  int v11; // w20
  int i; // w25
  int32_t v13; // w21
  int v14; // w23
  System_Collections_Generic_List_int__o *v15; // x22
  __int64 v16; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  ServantCharaGraphEXOpenManager_c *v20; // x0
  System_Collections_Generic_Dictionary_int__object__o *svtCharaGraphEXOpenDict; // x0
  System_IO_BinaryReader_c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0
  ServantCharaGraphEXOpenManager_c *v26; // x0

  if ( (byte_4C44368 & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryReader_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_4C44368 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseMock )
    return 1;
  v3 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v3);
  if ( System_IO_File__Exists(SaveFileName, 0) )
  {
    v5 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    ServantCharaGraphEXOpenManager__ClearSaveDataList((const MethodInfo *)v5);
    v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
    v7 = (System_IO_BinaryReader_o *)sub_1C372A4(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v7, v6, 0);
    if ( !v7 )
      sub_1C372B4(v8);
    v9 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._22_ReadString.methodPtr)(
                              v7,
                              v7->klass->vtable._22_ReadString.method);
    v10 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
      v10 = ServantCharaGraphEXOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v10->static_fields->SAVE_DATA_VERSION, v9, 0) )
    {
      v2 = 0;
    }
    else
    {
      v11 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
              v7,
              v7->klass->vtable._15_ReadInt32.method);
      if ( v11 >= 1 )
      {
        for ( i = 0; i != v11; ++i )
        {
          v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                  v7,
                  v7->klass->vtable._15_ReadInt32.method);
          v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                  v7,
                  v7->klass->vtable._15_ReadInt32.method);
          v15 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v15,
            (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
          if ( v14 >= 1 )
          {
            do
            {
              v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                      v7,
                      v7->klass->vtable._15_ReadInt32.method);
              if ( !v15 )
                sub_1C372B4(v16);
              items = v15->fields._items;
              v18 = Method_System_Collections_Generic_List_int__Add__;
              ++v15->fields._version;
              if ( !items )
                sub_1C372B4(v16);
              size = v15->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v15,
                  v16,
                  *(const MethodInfo_3786000 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
              }
              else
              {
                v15->fields._size = size + 1;
                items->m_Items[size] = v16;
              }
              --v14;
            }
            while ( v14 );
          }
          v20 = ServantCharaGraphEXOpenManager_TypeInfo;
          if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
            v20 = ServantCharaGraphEXOpenManager_TypeInfo;
          }
          svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__object__o *)v20->static_fields->svtCharaGraphEXOpenDict;
          if ( !svtCharaGraphEXOpenDict )
            sub_1C372B4(0);
          System_Collections_Generic_Dictionary_int__object___Add(
            svtCharaGraphEXOpenDict,
            v13,
            (Il2CppObject *)v15,
            (const MethodInfo_33FA584 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
        }
      }
      v2 = 1;
    }
    klass = v7->klass;
    v23 = *(unsigned __int16 *)&v7->klass->_2.rank;
    if ( *(_WORD *)&v7->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_35;
      }
      v25 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_35:
      v25 = sub_1C87870(v7, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v25)(v7, *(_QWORD *)(v25 + 8));
  }
  else
  {
    v26 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    ServantCharaGraphEXOpenManager__ClearSaveDataList((const MethodInfo *)v26);
    return 0;
  }
  return v2;
}


void ServantCharaGraphEXOpenManager__SetCharaGraphEXOpen(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  ServantCharaGraphEXOpenManager_c *v5; // x0
  Il2CppObject *svtCharaGraphEXOpenDict; // x0
  ServantCharaGraphEXOpenManager_c *v7; // x0
  ServantCharaGraphEXOpenManager_c *v8; // x0
  Il2CppClass *klass; // x8
  _QWORD *v10; // x9
  __int64 monitor_low; // x10
  System_Collections_Generic_List_int__o *v12; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  ServantCharaGraphEXOpenManager_c *v16; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C4436B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_4C4436B = 1;
  }
  v5 = ServantCharaGraphEXOpenManager_TypeInfo;
  value = 0;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v5 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (Il2CppObject *)v5->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_31;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          (System_Collections_Generic_Dictionary_int__object__o *)svtCharaGraphEXOpenDict,
          (const MethodInfo_33FA234 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__) )
  {
    v7 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v7);
  }
  v8 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v8 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (Il2CppObject *)v8->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_31;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)svtCharaGraphEXOpenDict,
          svtId,
          &value,
          (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v12 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v12,
      (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
    if ( v12 )
    {
      items = v12->fields._items;
      v14 = Method_System_Collections_Generic_List_int__Add__;
      ++v12->fields._version;
      if ( items )
      {
        size = v12->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v12,
            limitCount,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v12->fields._size = size + 1;
          items->m_Items[size] = limitCount;
        }
        v16 = ServantCharaGraphEXOpenManager_TypeInfo;
        if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
          v16 = ServantCharaGraphEXOpenManager_TypeInfo;
        }
        svtCharaGraphEXOpenDict = (Il2CppObject *)v16->static_fields->svtCharaGraphEXOpenDict;
        if ( svtCharaGraphEXOpenDict )
        {
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)svtCharaGraphEXOpenDict,
            svtId,
            (Il2CppObject *)v12,
            (const MethodInfo_33FA584 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
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
         (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return;
  }
  svtCharaGraphEXOpenDict = value;
  if ( !value
    || (klass = value[1].klass,
        v10 = Method_System_Collections_Generic_List_int__Add__,
        ++HIDWORD(value[1].monitor),
        !klass) )
  {
LABEL_31:
    sub_1C372B4(svtCharaGraphEXOpenDict);
  }
  monitor_low = SLODWORD(svtCharaGraphEXOpenDict[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)svtCharaGraphEXOpenDict,
      limitCount,
      *(const MethodInfo_3786000 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(svtCharaGraphEXOpenDict[1].monitor) = monitor_low + 1;
    *((_DWORD *)&klass->_1.byval_arg.data + monitor_low) = limitCount;
  }
}


bool ServantCharaGraphEXOpenManager__WriteData(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  ServantCharaGraphEXOpenManager_c *v2; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v4; // x20
  System_IO_BinaryWriter_o *v5; // x19
  ServantCharaGraphEXOpenManager_c *v6; // x0
  System_Collections_Generic_Dictionary_int__object__o *svtCharaGraphEXOpenDict; // x0
  __int64 Count; // x0
  unsigned int v9; // w20
  struct System_Collections_Generic_Dictionary_int__List_int___o *v10; // x0
  _BOOL8 v11; // x0
  Il2CppObject *value; // x20
  int monitor; // w21
  int32_t i; // w22
  unsigned int Item; // w0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v21; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4C44369 & 1) == 0 )
  {
    sub_1C37058(&System_IO_BinaryWriter_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_4C44369 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  memset(&v22, 0, sizeof(v22));
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( !v1->static_fields->UseMock )
  {
    v2 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v2);
    v4 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
    v5 = (System_IO_BinaryWriter_o *)sub_1C372A4(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_64472960(v5, v4, 0);
    v6 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
      v6 = ServantCharaGraphEXOpenManager_TypeInfo;
    }
    svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__object__o *)v6->static_fields->svtCharaGraphEXOpenDict;
    if ( !svtCharaGraphEXOpenDict )
      sub_1C372B4(0);
    Count = System_Collections_Generic_Dictionary_int__object___get_Count(
              svtCharaGraphEXOpenDict,
              (const MethodInfo_33FA234 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__);
    if ( !v5 )
      sub_1C372B4(Count);
    v9 = Count;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *))v5->klass->vtable._22_Write.methodPtr)(
      v5,
      ServantCharaGraphEXOpenManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
      v5->klass->vtable._22_Write.method);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v5->klass->vtable._17_Write.methodPtr)(
      v5,
      v9,
      v5->klass->vtable._17_Write.method);
    v10 = ServantCharaGraphEXOpenManager_TypeInfo->static_fields->svtCharaGraphEXOpenDict;
    if ( !v10 )
      sub_1C372B4(0);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v21,
      (System_Collections_Generic_Dictionary_int__object__o *)v10,
      (const MethodInfo_33FA9BC *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    v22 = v21;
    while ( 1 )
    {
      v11 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v22,
              (const MethodInfo_35513F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
      if ( !v11 )
        break;
      value = v22.fields._current.fields.value;
      if ( !v22.fields._current.fields.value )
        sub_1C372B4(v11);
      monitor = (int)v22.fields._current.fields.value[1].monitor;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v5->klass->vtable._17_Write.methodPtr)(
        v5,
        LODWORD(v22.fields._current.fields.key),
        v5->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v5->klass->vtable._17_Write.methodPtr)(
        v5,
        (unsigned int)monitor,
        v5->klass->vtable._17_Write.method);
      if ( monitor >= 1 )
      {
        for ( i = 0; i != monitor; ++i )
        {
          Item = System_Collections_Generic_List_int___get_Item(
                   (System_Collections_Generic_List_int__o *)value,
                   i,
                   (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v5->klass->vtable._17_Write.methodPtr)(
            v5,
            Item,
            v5->klass->vtable._17_Write.method);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v22,
      (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    klass = v5->klass;
    v17 = *(unsigned __int16 *)&v5->klass->_2.rank;
    if ( *(_WORD *)&v5->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_24;
      }
      v19 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_24:
      v19 = sub_1C87870(v5, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v19)(v5, *(_QWORD *)(v19 + 8));
  }
  return 1;
}