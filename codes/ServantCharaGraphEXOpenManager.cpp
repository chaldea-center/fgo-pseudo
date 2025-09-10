void ServantCharaGraphEXOpenManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_Collections_Generic_Dictionary_int__object__o *v3; // x19
  struct ServantCharaGraphEXOpenManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C2866C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1C2D490(&ServantCharaGraphEXOpenManager_TypeInfo);
    sub_1C2D490(&StringLiteral_6674/*"Fgo_20210622"*/);
    byte_4C2866C = 1;
  }
  ServantCharaGraphEXOpenManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6674/*"Fgo_20210622"*/;
  sub_1C2D434(
    (CGThumbnailListItem_o *)ServantCharaGraphEXOpenManager_TypeInfo->static_fields,
    StringLiteral_6674/*"Fgo_20210622"*/,
    v1,
    v2);
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  static_fields = ServantCharaGraphEXOpenManager_TypeInfo->static_fields;
  static_fields->svtCharaGraphEXOpenDict = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->svtCharaGraphEXOpenDict, (int32_t)v3, v5, v6);
}


void ServantCharaGraphEXOpenManager___ctor(ServantCharaGraphEXOpenManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantCharaGraphEXOpenManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCharaGraphEXOpenManager_c *v2; // x0
  System_Collections_Generic_Dictionary_int__object__o *svtCharaGraphEXOpenDict; // x0

  if ( (byte_4C28667 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
    sub_1C2D490(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_4C28667 = 1;
  }
  v2 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v2 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__object__o *)v2->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    sub_1C2D6EC(0, v1);
  System_Collections_Generic_Dictionary_int__object___Clear(
    svtCharaGraphEXOpenDict,
    (const MethodInfo_33E1404 *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
}


void ServantCharaGraphEXOpenManager__DeleteSaveData(const MethodInfo *method)
{
  ServantCharaGraphEXOpenManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4C28665 & 1) == 0 )
  {
    sub_1C2D490(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_4C28665 = 1;
  }
  v1 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
}


System_String_o *ServantCharaGraphEXOpenManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C28664 & 1) == 0 )
  {
    sub_1C2D490(&AndroidUtil_TypeInfo);
    sub_1C2D490(&DatFileName_TypeInfo);
    sub_1C2D490(&StringLiteral_1048/*"/"*/);
    byte_4C28664 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(32, 0);
  return System_String__Concat_63496112(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


void ServantCharaGraphEXOpenManager__Initialize(const MethodInfo *method)
{
  ServantCharaGraphEXOpenManager_c *v1; // x0

  if ( (byte_4C28666 & 1) == 0 )
  {
    sub_1C2D490(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_4C28666 = 1;
  }
  v1 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v1);
}


// local variable allocation has failed, the output may be wrong!
bool ServantCharaGraphEXOpenManager__IsCharaGraphEXOpen(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  ServantCharaGraphEXOpenManager_c *v5; // x0
  Il2CppObject *svtCharaGraphEXOpenDict; // x0
  ServantCharaGraphEXOpenManager_c *v7; // x0
  ServantCharaGraphEXOpenManager_c *v8; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C2866A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_4C2866A = 1;
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
          (const MethodInfo_33E0F2C *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__) )
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
          (const MethodInfo_33E2A08 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    return 0;
  svtCharaGraphEXOpenDict = value;
  if ( !value )
LABEL_18:
    sub_1C2D6EC(svtCharaGraphEXOpenDict, *(_QWORD *)&limitCount);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)value,
           limitCount,
           (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
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
  __int64 v9; // x1
  System_String_o *v10; // x20
  ServantCharaGraphEXOpenManager_c *v11; // x0
  int v12; // w20
  int i; // w25
  int32_t v14; // w21
  int v15; // w23
  System_Collections_Generic_List_int__o *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  ServantCharaGraphEXOpenManager_c *v22; // x0
  System_Collections_Generic_Dictionary_int__object__o *svtCharaGraphEXOpenDict; // x0
  System_IO_BinaryReader_c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0
  ServantCharaGraphEXOpenManager_c *v28; // x0

  if ( (byte_4C28668 & 1) == 0 )
  {
    sub_1C2D490(&System_IO_BinaryReader_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&ManagerConfig_TypeInfo);
    sub_1C2D490(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_4C28668 = 1;
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
    v7 = (System_IO_BinaryReader_o *)sub_1C2D6DC(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v7, v6, 0);
    if ( !v7 )
      sub_1C2D6EC(v8, v9);
    v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._22_ReadString.methodPtr)(
                               v7,
                               v7->klass->vtable._22_ReadString.method);
    v11 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
      v11 = ServantCharaGraphEXOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v11->static_fields->SAVE_DATA_VERSION, v10, 0) )
    {
      v2 = 0;
    }
    else
    {
      v12 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
              v7,
              v7->klass->vtable._15_ReadInt32.method);
      if ( v12 >= 1 )
      {
        for ( i = 0; i != v12; ++i )
        {
          v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                  v7,
                  v7->klass->vtable._15_ReadInt32.method);
          v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                  v7,
                  v7->klass->vtable._15_ReadInt32.method);
          v16 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v16,
            (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
          if ( v15 >= 1 )
          {
            do
            {
              v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                      v7,
                      v7->klass->vtable._15_ReadInt32.method);
              v17 = (unsigned int)v18;
              if ( !v16 )
                sub_1C2D6EC(v18, (unsigned int)v18);
              items = v16->fields._items;
              v20 = Method_System_Collections_Generic_List_int__Add__;
              ++v16->fields._version;
              if ( !items )
                sub_1C2D6EC(v18, (unsigned int)v18);
              size = v16->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v16,
                  v18,
                  *(const MethodInfo_376CB60 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
              }
              else
              {
                v16->fields._size = size + 1;
                items->m_Items[size] = v18;
              }
              --v15;
            }
            while ( v15 );
          }
          v22 = ServantCharaGraphEXOpenManager_TypeInfo;
          if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
            v22 = ServantCharaGraphEXOpenManager_TypeInfo;
          }
          svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__object__o *)v22->static_fields->svtCharaGraphEXOpenDict;
          if ( !svtCharaGraphEXOpenDict )
            sub_1C2D6EC(0, v17);
          System_Collections_Generic_Dictionary_int__object___Add(
            svtCharaGraphEXOpenDict,
            v14,
            (Il2CppObject *)v16,
            (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
        }
      }
      v2 = 1;
    }
    klass = v7->klass;
    v25 = *(unsigned __int16 *)&v7->klass->_2.rank;
    if ( *(_WORD *)&v7->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v25;
        p_offset += 4;
        if ( !v25 )
          goto LABEL_35;
      }
      v27 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_35:
      v27 = sub_1C7DCA8(v7, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v27)(v7, *(_QWORD *)(v27 + 8));
  }
  else
  {
    v28 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    ServantCharaGraphEXOpenManager__ClearSaveDataList((const MethodInfo *)v28);
    return 0;
  }
  return v2;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4C2866B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_4C2866B = 1;
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
          (const MethodInfo_33E0F2C *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__) )
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
          (const MethodInfo_33E2A08 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v12 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v12,
      (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
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
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
            (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
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
         (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__) )
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
    sub_1C2D6EC(svtCharaGraphEXOpenDict, *(_QWORD *)&limitCount);
  }
  monitor_low = SLODWORD(svtCharaGraphEXOpenDict[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)svtCharaGraphEXOpenDict,
      limitCount,
      *(const MethodInfo_376CB60 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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
  __int64 v6; // x1
  ServantCharaGraphEXOpenManager_c *v7; // x0
  System_Collections_Generic_Dictionary_int__object__o *svtCharaGraphEXOpenDict; // x0
  __int64 Count; // x0
  __int64 v10; // x1
  unsigned int v11; // w20
  __int64 v12; // x1
  struct System_Collections_Generic_Dictionary_int__List_int___o *v13; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *value; // x20
  int monitor; // w21
  int32_t i; // w22
  unsigned int Item; // w0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4C28669 & 1) == 0 )
  {
    sub_1C2D490(&System_IO_BinaryWriter_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C2D490(&ManagerConfig_TypeInfo);
    sub_1C2D490(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_4C28669 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  memset(&v26, 0, sizeof(v26));
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
    v5 = (System_IO_BinaryWriter_o *)sub_1C2D6DC(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_64369912(v5, v4, 0);
    v7 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
      v7 = ServantCharaGraphEXOpenManager_TypeInfo;
    }
    svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__object__o *)v7->static_fields->svtCharaGraphEXOpenDict;
    if ( !svtCharaGraphEXOpenDict )
      sub_1C2D6EC(0, v6);
    Count = System_Collections_Generic_Dictionary_int__object___get_Count(
              svtCharaGraphEXOpenDict,
              (const MethodInfo_33E0F2C *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__);
    if ( !v5 )
      sub_1C2D6EC(Count, v10);
    v11 = Count;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *))v5->klass->vtable._22_Write.methodPtr)(
      v5,
      ServantCharaGraphEXOpenManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
      v5->klass->vtable._22_Write.method);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v5->klass->vtable._17_Write.methodPtr)(
      v5,
      v11,
      v5->klass->vtable._17_Write.method);
    v13 = ServantCharaGraphEXOpenManager_TypeInfo->static_fields->svtCharaGraphEXOpenDict;
    if ( !v13 )
      sub_1C2D6EC(0, v12);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v25,
      (System_Collections_Generic_Dictionary_int__object__o *)v13,
      (const MethodInfo_33E16B4 *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    v26 = v25;
    while ( 1 )
    {
      v14 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v26,
              (const MethodInfo_35380F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
      if ( !v14 )
        break;
      value = v26.fields._current.fields.value;
      if ( !v26.fields._current.fields.value )
        sub_1C2D6EC(v14, v15);
      monitor = (int)v26.fields._current.fields.value[1].monitor;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v5->klass->vtable._17_Write.methodPtr)(
        v5,
        LODWORD(v26.fields._current.fields.key),
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
                   (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v5->klass->vtable._17_Write.methodPtr)(
            v5,
            Item,
            v5->klass->vtable._17_Write.method);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v26,
      (const MethodInfo_3538214 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    klass = v5->klass;
    v21 = *(unsigned __int16 *)&v5->klass->_2.rank;
    if ( *(_WORD *)&v5->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_24;
      }
      v23 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_24:
      v23 = sub_1C7DCA8(v5, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v23)(v5, *(_QWORD *)(v23 + 8));
  }
  return 1;
}