void ServantCharaGraphEXOpenManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  System_Collections_Generic_Dictionary_int__object__o *v8; // x19
  struct ServantCharaGraphEXOpenManager_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5939B9E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_21FFC50(&ServantCharaGraphEXOpenManager_TypeInfo);
    sub_21FFC50(&StringLiteral_6951/*"Fgo_20210622"*/);
    byte_5939B9E = 1;
  }
  v7 = StringLiteral_6951/*"Fgo_20210622"*/;
  ServantCharaGraphEXOpenManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6951/*"Fgo_20210622"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantCharaGraphEXOpenManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v8,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  static_fields = ServantCharaGraphEXOpenManager_TypeInfo->static_fields;
  static_fields->svtCharaGraphEXOpenDict = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v8;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->svtCharaGraphEXOpenDict,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
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

  if ( (byte_5939B99 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
    sub_21FFC50(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_5939B99 = 1;
  }
  v2 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !*(&ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v1);
    v2 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__object__o *)v2->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    sub_21FFECC(0, v1);
  System_Collections_Generic_Dictionary_int__object___Clear(
    svtCharaGraphEXOpenDict,
    (const MethodInfo_3F68E90 *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
}


void ServantCharaGraphEXOpenManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCharaGraphEXOpenManager_c *v2; // x0
  System_String_o *SaveFileName; // x19
  __int64 v4; // x1
  ServantCharaGraphEXOpenManager_c *v5; // x0

  if ( (byte_5939B97 & 1) == 0 )
  {
    sub_21FFC50(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_5939B97 = 1;
  }
  v2 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !*(&ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v1);
  SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
  v5 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !*(&ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v4);
  ServantCharaGraphEXOpenManager__ClearSaveDataList((const MethodInfo *)v5);
}


System_String_o *ServantCharaGraphEXOpenManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_5939B96 & 1) == 0 )
  {
    sub_21FFC50(&AndroidUtil_TypeInfo);
    sub_21FFC50(&DatFileName_TypeInfo);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_5939B96 = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(32, 0);
  return System_String__Concat_75481624(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


void ServantCharaGraphEXOpenManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCharaGraphEXOpenManager_c *v2; // x0

  if ( (byte_5939B98 & 1) == 0 )
  {
    sub_21FFC50(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_5939B98 = 1;
  }
  v2 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !*(&ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v1);
  ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v2);
}


// local variable allocation has failed, the output may be wrong!
bool ServantCharaGraphEXOpenManager__IsCharaGraphEXOpen(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  ServantCharaGraphEXOpenManager_c *v5; // x0
  Il2CppObject *svtCharaGraphEXOpenDict; // x0
  ServantCharaGraphEXOpenManager_c *v7; // x0
  ServantCharaGraphEXOpenManager_c *v8; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5939B9C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_5939B9C = 1;
  }
  v5 = ServantCharaGraphEXOpenManager_TypeInfo;
  value = 0;
  if ( !*(&ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, *(_QWORD *)&limitCount);
    v5 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (Il2CppObject *)v5->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          (System_Collections_Generic_Dictionary_int__object__o *)svtCharaGraphEXOpenDict,
          (const MethodInfo_3F689A0 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__) )
  {
    v7 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !*(&ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, *(_QWORD *)&limitCount);
    ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v7);
  }
  v8 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !*(&ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, *(_QWORD *)&limitCount);
    v8 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (Il2CppObject *)v8->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)svtCharaGraphEXOpenDict,
          svtId,
          &value,
          (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    return 0;
  svtCharaGraphEXOpenDict = value;
  if ( !value )
LABEL_18:
    sub_21FFECC(svtCharaGraphEXOpenDict, *(_QWORD *)&limitCount);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)value,
           limitCount,
           (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool ServantCharaGraphEXOpenManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagerConfig_c *v2; // x0
  bool v3; // w19
  ServantCharaGraphEXOpenManager_c *v4; // x0
  System_String_o *SaveFileName; // x19
  __int64 v6; // x1
  ServantCharaGraphEXOpenManager_c *v7; // x0
  System_IO_Stream_o *v8; // x20
  System_IO_BinaryReader_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x19
  ServantCharaGraphEXOpenManager_c *v14; // x0
  __int64 v15; // x1
  int v16; // w19
  int i; // w28
  int32_t v18; // w20
  int v19; // w22
  System_Collections_Generic_List_int__o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  ServantCharaGraphEXOpenManager_c *v26; // x0
  System_Collections_Generic_Dictionary_int__object__o *svtCharaGraphEXOpenDict; // x0
  System_IO_BinaryReader_c *klass; // x8
  __int64 v29; // x9
  int *p_offset; // x10
  __int64 v31; // x0
  ServantCharaGraphEXOpenManager_c *v32; // x0
  System_IO_BinaryReader_o *v34; // [xsp+28h] [xbp-58h]

  if ( (byte_5939B9A & 1) == 0 )
  {
    sub_21FFC50(&System_IO_BinaryReader_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_5939B9A = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 1;
  v4 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !*(&ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v1);
  SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v4);
  if ( System_IO_File__Exists(SaveFileName, 0) )
  {
    v7 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !*(&ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v6);
    ServantCharaGraphEXOpenManager__ClearSaveDataList((const MethodInfo *)v7);
    v8 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
    v9 = (System_IO_BinaryReader_o *)sub_21FFEBC(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v9, v8, 0);
    v34 = v9;
    if ( !v9 )
      sub_21FFECC(v10, v11);
    v13 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v9->klass->vtable._22_ReadString.methodPtr)(
                               v9,
                               v9->klass->vtable._22_ReadString.method);
    v14 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !*(&ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v12);
      v14 = ServantCharaGraphEXOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v14->static_fields->SAVE_DATA_VERSION, v13, 0) )
    {
      v3 = 0;
    }
    else
    {
      if ( !v34 )
        sub_21FFECC(0, v15);
      v16 = ((__int64 (*)(void))v34->klass->vtable._15_ReadInt32.methodPtr)();
      if ( v16 >= 1 )
      {
        for ( i = 0; i != v16; ++i )
        {
          v18 = ((__int64 (*)(void))v34->klass->vtable._15_ReadInt32.methodPtr)();
          v19 = ((__int64 (*)(void))v34->klass->vtable._15_ReadInt32.methodPtr)();
          v20 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v20,
            (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( v19 >= 1 )
          {
            do
            {
              v22 = ((__int64 (*)(void))v34->klass->vtable._15_ReadInt32.methodPtr)();
              v21 = (unsigned int)v22;
              if ( !v20
                || (items = v20->fields._items,
                    v24 = Method_System_Collections_Generic_List_int__Add__,
                    ++v20->fields._version,
                    !items) )
              {
                sub_21FFECC(v22, (unsigned int)v22);
              }
              size = v20->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v20,
                  v22,
                  *(const MethodInfo_4433138 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
              }
              else
              {
                v20->fields._size = size + 1;
                items->m_Items[size] = v22;
              }
              --v19;
            }
            while ( v19 );
          }
          v26 = ServantCharaGraphEXOpenManager_TypeInfo;
          if ( !*(&ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v21);
            v26 = ServantCharaGraphEXOpenManager_TypeInfo;
          }
          svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__object__o *)v26->static_fields->svtCharaGraphEXOpenDict;
          if ( !svtCharaGraphEXOpenDict )
            sub_21FFECC(0, v21);
          System_Collections_Generic_Dictionary_int__object___Add(
            svtCharaGraphEXOpenDict,
            v18,
            (Il2CppObject *)v20,
            (const MethodInfo_3F68D08 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
        }
      }
      v3 = 1;
    }
    if ( v34 )
    {
      klass = v34->klass;
      v29 = *(unsigned __int16 *)&v34->klass->_2.rank;
      if ( *(_WORD *)&v34->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v29;
          p_offset += 4;
          if ( !v29 )
            goto LABEL_37;
        }
        v31 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_37:
        v31 = sub_2237E2C(v34, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v31)(v34, *(_QWORD *)(v31 + 8));
    }
  }
  else
  {
    v32 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !*(&ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v6);
    ServantCharaGraphEXOpenManager__ClearSaveDataList((const MethodInfo *)v32);
    return 0;
  }
  return v3;
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

  if ( (byte_5939B9D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_5939B9D = 1;
  }
  v5 = ServantCharaGraphEXOpenManager_TypeInfo;
  value = 0;
  if ( !*(&ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, *(_QWORD *)&limitCount);
    v5 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (Il2CppObject *)v5->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_31;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          (System_Collections_Generic_Dictionary_int__object__o *)svtCharaGraphEXOpenDict,
          (const MethodInfo_3F689A0 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__) )
  {
    v7 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !*(&ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, *(_QWORD *)&limitCount);
    ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v7);
  }
  v8 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !*(&ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, *(_QWORD *)&limitCount);
    v8 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (Il2CppObject *)v8->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_31;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)svtCharaGraphEXOpenDict,
          svtId,
          &value,
          (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v12 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v12,
      (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
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
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v12->fields._size = size + 1;
          items->m_Items[size] = limitCount;
        }
        v16 = ServantCharaGraphEXOpenManager_TypeInfo;
        if ( !*(&ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, *(_QWORD *)&limitCount);
          v16 = ServantCharaGraphEXOpenManager_TypeInfo;
        }
        svtCharaGraphEXOpenDict = (Il2CppObject *)v16->static_fields->svtCharaGraphEXOpenDict;
        if ( svtCharaGraphEXOpenDict )
        {
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)svtCharaGraphEXOpenDict,
            svtId,
            (Il2CppObject *)v12,
            (const MethodInfo_3F68D08 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
          return;
        }
      }
    }
LABEL_31:
    sub_21FFECC(svtCharaGraphEXOpenDict, *(_QWORD *)&limitCount);
  }
  svtCharaGraphEXOpenDict = value;
  if ( !value )
    goto LABEL_31;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)value,
         limitCount,
         (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return;
  }
  svtCharaGraphEXOpenDict = value;
  if ( !value )
    goto LABEL_31;
  klass = value[1].klass;
  v10 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(value[1].monitor);
  if ( !klass )
    goto LABEL_31;
  monitor_low = SLODWORD(svtCharaGraphEXOpenDict[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)svtCharaGraphEXOpenDict,
      limitCount,
      *(const MethodInfo_4433138 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(svtCharaGraphEXOpenDict[1].monitor) = monitor_low + 1;
    *((_DWORD *)&klass->_1.byval_arg.data + monitor_low) = limitCount;
  }
}


bool ServantCharaGraphEXOpenManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  ManagerConfig_c *v2; // x0
  int v3; // w8
  ServantCharaGraphEXOpenManager_c *v4; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryWriter_o *v7; // x19
  __int64 v8; // x1
  ServantCharaGraphEXOpenManager_c *v9; // x0
  System_Collections_Generic_Dictionary_int__object__o *svtCharaGraphEXOpenDict; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct System_Collections_Generic_Dictionary_int__List_int___o *v14; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *value; // x19
  int monitor; // w20
  __int64 v19; // x1
  int32_t i; // w21
  System_IO_BinaryWriter_o *v21; // x22
  __int64 Item; // x0
  System_IO_BinaryWriter_o *v23; // x19
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v25; // x9
  int *p_offset; // x10
  __int64 v27; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+8h] [xbp-B8h] BYREF
  __int64 v30; // [xsp+30h] [xbp-90h]
  System_IO_BinaryWriter_o **v31; // [xsp+38h] [xbp-88h]
  int v32; // [xsp+48h] [xbp-78h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v33; // [xsp+50h] [xbp-70h] BYREF
  System_IO_BinaryWriter_o *v34; // [xsp+88h] [xbp-38h] BYREF

  if ( (byte_5939B9B & 1) == 0 )
  {
    sub_21FFC50(&System_IO_BinaryWriter_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&ServantCharaGraphEXOpenManager_TypeInfo);
    byte_5939B9B = 1;
  }
  v2 = ManagerConfig_TypeInfo;
  v34 = 0;
  v3 = *(&ManagerConfig_TypeInfo->_2.cctor_finished + 1);
  v32 = 0;
  memset(&v33, 0, sizeof(v33));
  if ( !v3 )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( !v2->static_fields->UseMock )
  {
    v4 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !*(&ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v1);
    SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v4);
    v6 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
    v7 = (System_IO_BinaryWriter_o *)sub_21FFEBC(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_76739708(v7, v6, 0);
    v9 = ServantCharaGraphEXOpenManager_TypeInfo;
    v34 = v7;
    v30 = 0;
    v31 = &v34;
    if ( !*(&ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo, v8);
      v9 = ServantCharaGraphEXOpenManager_TypeInfo;
    }
    svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__object__o *)v9->static_fields->svtCharaGraphEXOpenDict;
    if ( !svtCharaGraphEXOpenDict )
      sub_21FFECC(0, v8);
    System_Collections_Generic_Dictionary_int__object___get_Count(
      svtCharaGraphEXOpenDict,
      (const MethodInfo_3F689A0 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__);
    if ( !v34 )
      sub_21FFECC(0, v11);
    v34->klass->vtable._22_Write.methodPtr();
    if ( !v34 )
      sub_21FFECC(0, v12);
    v34->klass->vtable._17_Write.methodPtr();
    v14 = ServantCharaGraphEXOpenManager_TypeInfo->static_fields->svtCharaGraphEXOpenDict;
    if ( !v14 )
      sub_21FFECC(0, v13);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v29,
      (System_Collections_Generic_Dictionary_int__object__o *)v14,
      (const MethodInfo_3F69144 *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    v33 = v29;
    v29.fields._dictionary = 0;
    *(_QWORD *)&v29.fields._version = &v33;
    while ( 1 )
    {
      v15 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v33,
              (const MethodInfo_41249BC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
      if ( !v15 )
        break;
      value = v33.fields._current.fields.value;
      if ( !v33.fields._current.fields.value )
        sub_21FFECC(v15, v16);
      if ( !v34 )
        sub_21FFECC(0, v16);
      monitor = (int)v33.fields._current.fields.value[1].monitor;
      v34->klass->vtable._17_Write.methodPtr();
      if ( !v34 )
        sub_21FFECC(0, v19);
      v34->klass->vtable._17_Write.methodPtr();
      if ( monitor >= 1 )
      {
        for ( i = 0; i != monitor; ++i )
        {
          v21 = v34;
          Item = System_Collections_Generic_List_int___get_Item(
                   (System_Collections_Generic_List_int__o *)value,
                   i,
                   (const MethodInfo_4432E40 *)Method_System_Collections_Generic_List_int__get_Item__);
          if ( !v21 )
            sub_21FFECC(Item, (unsigned int)Item);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v21->klass->vtable._17_Write.methodPtr)(
            v21,
            (unsigned int)Item,
            v21->klass->vtable._17_Write.method);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v33,
      (const MethodInfo_4124AE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    v23 = *v31;
    if ( *v31 )
    {
      klass = v23->klass;
      v25 = *(unsigned __int16 *)&v23->klass->_2.rank;
      if ( *(_WORD *)&v23->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v25;
          p_offset += 4;
          if ( !v25 )
            goto LABEL_29;
        }
        v27 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_29:
        v27 = sub_2237E2C(*v31, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8));
    }
    if ( v30 )
      sub_21FFEC4(v30);
  }
  return 1;
}