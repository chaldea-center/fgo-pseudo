void ServantProfileLimitCountManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__c *v8; // x0
  System_Collections_Generic_List_object__o *v9; // x19
  struct ServantProfileLimitCountManager_StaticFields *static_fields; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5971DCB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
    sub_2213A60(&ServantProfileLimitCountManager_TypeInfo);
    sub_2213A60(&StringLiteral_6960/*"Fgo_20191029"*/);
    byte_5971DCB = 1;
  }
  v7 = StringLiteral_6960/*"Fgo_20191029"*/;
  ServantProfileLimitCountManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6960/*"Fgo_20191029"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantProfileLimitCountManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo;
  *(_WORD *)&ServantProfileLimitCountManager_TypeInfo->static_fields->isModfiy = 0;
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v8);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo___ctor__);
  static_fields = ServantProfileLimitCountManager_TypeInfo->static_fields;
  static_fields->limitCountList = (struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *)v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->limitCountList,
    (int32_t)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void ServantProfileLimitCountManager___ctor(ServantProfileLimitCountManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantProfileLimitCountManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileLimitCountManager_c *v2; // x0
  struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_5971DC4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Count__);
    sub_2213A60(&ServantProfileLimitCountManager_TypeInfo);
    byte_5971DC4 = 1;
  }
  v2 = ServantProfileLimitCountManager_TypeInfo;
  if ( !*(&ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v1);
    v2 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = v2->static_fields->limitCountList;
  if ( !limitCountList )
    goto LABEL_14;
  if ( limitCountList->fields._size < 1 )
    goto LABEL_11;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = ServantProfileLimitCountManager_TypeInfo;
    limitCountList = ServantProfileLimitCountManager_TypeInfo->static_fields->limitCountList;
    if ( !limitCountList )
LABEL_14:
      sub_2213CDC(v2, v1);
  }
  size = limitCountList->fields._size;
  v5 = limitCountList->fields._version + 1;
  limitCountList->fields._size = 0;
  limitCountList->fields._version = v5;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)limitCountList->fields._items, 0, size, 0);
    v2 = ServantProfileLimitCountManager_TypeInfo;
  }
LABEL_11:
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = ServantProfileLimitCountManager_TypeInfo;
  }
  *(_WORD *)&v2->static_fields->isModfiy = 1;
}


void ServantProfileLimitCountManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileLimitCountManager_c *v2; // x0
  System_String_o *SaveFileName; // x19
  __int64 v4; // x1
  ServantProfileLimitCountManager_c *v5; // x0

  if ( (byte_5971DC2 & 1) == 0 )
  {
    sub_2213A60(&ServantProfileLimitCountManager_TypeInfo);
    byte_5971DC2 = 1;
  }
  v2 = ServantProfileLimitCountManager_TypeInfo;
  if ( !*(&ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v1);
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
  v5 = ServantProfileLimitCountManager_TypeInfo;
  if ( !*(&ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v4);
  ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v5);
}


int32_t ServantProfileLimitCountManager__GetLimitCount(int32_t servantId, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  ServantProfileLimitCountManager_c *v6; // x0
  int v7; // w8
  System_Collections_Generic_List_object__o *limitCountList; // x19
  System_Predicate_object__o *v9; // x21
  Il2CppObject *v10; // x0

  if ( (byte_5971DC6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
    sub_2213A60(&System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
    sub_2213A60(&ServantProfileLimitCountManager_TypeInfo);
    sub_2213A60(&Method_ServantProfileLimitCountManager___c__DisplayClass10_0__GetLimitCount_b__0__);
    sub_2213A60(&ServantProfileLimitCountManager___c__DisplayClass10_0_TypeInfo);
    byte_5971DC6 = 1;
  }
  v3 = sub_2213CCC(ServantProfileLimitCountManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  v6 = ServantProfileLimitCountManager_TypeInfo;
  v7 = *(&ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished + 1);
  *(_DWORD *)(v3 + 16) = servantId;
  if ( !v7 )
  {
    j_il2cpp_runtime_class_init_0(v6, v5);
    v6 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_object__o *)v6->static_fields->limitCountList;
  v9 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v3,
    Method_ServantProfileLimitCountManager___c__DisplayClass10_0__GetLimitCount_b__0__,
    0);
  if ( !limitCountList )
LABEL_10:
    sub_2213CDC(v4, v5);
  v10 = System_Collections_Generic_List_object___Find(
          limitCountList,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
  if ( v10 )
    LODWORD(v10) = HIDWORD(v10[1].klass);
  return (int)v10;
}


System_String_o *ServantProfileLimitCountManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_5971DC1 & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&DatFileName_TypeInfo);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_5971DC1 = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(27, 0);
  return System_String__Concat_75694928(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


void ServantProfileLimitCountManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileLimitCountManager_c *v2; // x0

  if ( (byte_5971DC3 & 1) == 0 )
  {
    sub_2213A60(&ServantProfileLimitCountManager_TypeInfo);
    byte_5971DC3 = 1;
  }
  v2 = ServantProfileLimitCountManager_TypeInfo;
  if ( !*(&ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v1);
  ServantProfileLimitCountManager__ReadData((const MethodInfo *)v2);
}


bool ServantProfileLimitCountManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileLimitCountManager_c *v2; // x0
  ManagerConfig_c *v3; // x8
  int v4; // w10
  _BOOL8 v5; // x0
  ServantProfileLimitCountManager_c *v6; // x0
  System_String_o *SaveFileName; // x19
  __int64 v8; // x1
  ServantProfileLimitCountManager_c *v9; // x0
  System_IO_BinaryReader_o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  System_String_o *v14; // x19
  ServantProfileLimitCountManager_c *v15; // x0
  int v16; // w21
  __int64 v17; // x1
  char v18; // w19
  ServantProfileLimitCountManager_c *v19; // x0
  __int64 v20; // x1
  int v21; // w19
  int v22; // w21
  int v23; // w22
  __int64 v24; // x20
  __int64 v25; // x0
  __int64 v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  ServantProfileLimitCountManager_c *v33; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v40; // x9
  int *p_offset; // x10
  __int64 v42; // x0
  System_IO_Stream_c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  ServantProfileLimitCountManager_c *v47; // x0
  System_IO_BinaryReader_o *v49; // [xsp+30h] [xbp-50h]
  System_IO_Stream_o *v50; // [xsp+38h] [xbp-48h]

  if ( (byte_5971DC7 & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryReader_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
    sub_2213A60(&ServantProfileLimitCountManager_TypeInfo);
    byte_5971DC7 = 1;
  }
  v2 = ServantProfileLimitCountManager_TypeInfo;
  if ( !*(&ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v1);
    v2 = ServantProfileLimitCountManager_TypeInfo;
  }
  v3 = ManagerConfig_TypeInfo;
  v4 = *(&ManagerConfig_TypeInfo->_2.cctor_finished + 1);
  v2->static_fields->isModfiy = 0;
  if ( !v4 )
  {
    j_il2cpp_runtime_class_init_0(v3, v1);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
  {
    LOBYTE(v5) = 1;
  }
  else
  {
    v6 = ServantProfileLimitCountManager_TypeInfo;
    if ( !*(&ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v1);
    SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v6);
    if ( System_IO_File__Exists(SaveFileName, 0) )
    {
      v9 = ServantProfileLimitCountManager_TypeInfo;
      if ( !*(&ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v8);
      ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v9);
      v50 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
      v10 = (System_IO_BinaryReader_o *)sub_2213CCC(System_IO_BinaryReader_TypeInfo);
      System_IO_BinaryReader___ctor(v10, v50, 0);
      v49 = v10;
      if ( !v10 )
        sub_2213CDC(v11, v12);
      v14 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v10->klass->vtable._22_ReadString.methodPtr)(
                                 v10,
                                 v10->klass->vtable._22_ReadString.method);
      v15 = ServantProfileLimitCountManager_TypeInfo;
      if ( !*(&ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v13);
        v15 = ServantProfileLimitCountManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v15->static_fields->SAVE_DATA_VERSION, v14, 0) )
      {
        v16 = 5;
      }
      else
      {
        v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v10->klass->vtable._9_ReadBoolean.methodPtr)(
                v10,
                v10->klass->vtable._9_ReadBoolean.method);
        v19 = ServantProfileLimitCountManager_TypeInfo;
        if ( !*(&ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v17);
          v19 = ServantProfileLimitCountManager_TypeInfo;
        }
        v19->static_fields->isContinueDevice = v18 & 1;
        v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v10->klass->vtable._15_ReadInt32.methodPtr)(
                v10,
                v10->klass->vtable._15_ReadInt32.method);
        if ( v21 >= 1 )
        {
          do
          {
            if ( !v49 )
              sub_2213CDC(0, v20);
            v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v49->klass->vtable._15_ReadInt32.methodPtr)(
                    v49,
                    v49->klass->vtable._15_ReadInt32.method);
            v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v49->klass->vtable._15_ReadInt32.methodPtr)(
                    v49,
                    v49->klass->vtable._15_ReadInt32.method);
            v24 = sub_2213CCC(ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
            System_Object___ctor((Il2CppObject *)v24, 0);
            if ( !v24 )
              sub_2213CDC(v25, v26);
            v33 = ServantProfileLimitCountManager_TypeInfo;
            *(_DWORD *)(v24 + 16) = v22;
            *(_DWORD *)(v24 + 20) = v23;
            if ( !*(&v33->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v33, v26);
              v33 = ServantProfileLimitCountManager_TypeInfo;
            }
            limitCountList = (System_Collections_Generic_List_object__o *)v33->static_fields->limitCountList;
            if ( !limitCountList
              || (items = limitCountList->fields._items,
                  v36 = Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__,
                  ++limitCountList->fields._version,
                  !items) )
            {
              sub_2213CDC(limitCountList, v26);
            }
            size = limitCountList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                limitCountList,
                (Il2CppObject *)v24,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
            }
            else
            {
              v38 = &items->obj.klass + size;
              limitCountList->fields._size = size + 1;
              v38[4] = (Il2CppClass *)v24;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v38 + 4), v24, v27, v28, v29, v30, v31, v32);
            }
            --v21;
          }
          while ( v21 );
        }
        if ( !v49 )
          sub_2213CDC(0, v20);
        ((void (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v49->klass->vtable._6_Close.methodPtr)(
          v49,
          v49->klass->vtable._6_Close.method);
        v16 = 8;
      }
      if ( v49 )
      {
        klass = v49->klass;
        v40 = *(unsigned __int16 *)&v49->klass->_2.rank;
        if ( *(_WORD *)&v49->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
          {
            --v40;
            p_offset += 4;
            if ( !v40 )
              goto LABEL_39;
          }
          v42 = (__int64)&klass->vtable + 16 * *p_offset;
        }
        else
        {
LABEL_39:
          v42 = sub_224BC3C(v49, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v42)(v49, *(_QWORD *)(v42 + 8));
      }
      if ( (v16 | 8) == 8 )
        v16 = 9;
      if ( v50 )
      {
        v43 = v50->klass;
        v44 = *(unsigned __int16 *)&v50->klass->_2.rank;
        if ( *(_WORD *)&v50->klass->_2.rank )
        {
          v45 = &v43->_1.interfaceOffsets->offset;
          while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
          {
            --v44;
            v45 += 4;
            if ( !v44 )
              goto LABEL_49;
          }
          v46 = (__int64)&v43->vtable + 16 * *v45;
        }
        else
        {
LABEL_49:
          v46 = sub_224BC3C(v50, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v46)(v50, *(_QWORD *)(v46 + 8));
      }
      return v16 == 9;
    }
    else
    {
      v47 = ServantProfileLimitCountManager_TypeInfo;
      if ( !*(&ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v8);
      ServantProfileLimitCountManager__ClearSaveDataList((const MethodInfo *)v47);
      LOBYTE(v5) = 0;
    }
  }
  return v5;
}


void ServantProfileLimitCountManager__SetLimitCount(int32_t servantId, int32_t limitCount, const MethodInfo *method)
{
  __int64 v5; // x20
  System_Collections_Generic_List_object__o *v6; // x0
  __int64 v7; // x1
  ServantProfileLimitCountManager_c *v8; // x0
  int v9; // w8
  System_Collections_Generic_List_object__o *limitCountList; // x21
  System_Predicate_object__o *v11; // x22
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x8
  ServantProfileLimitCountManager_c *v15; // x0
  __int64 v16; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  ServantProfileLimitCountManager_c *v23; // x0
  int v24; // w9
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x8

  if ( (byte_5971DC5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
    sub_2213A60(&System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
    sub_2213A60(&ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
    sub_2213A60(&ServantProfileLimitCountManager_TypeInfo);
    sub_2213A60(&Method_ServantProfileLimitCountManager___c__DisplayClass9_0__SetLimitCount_b__0__);
    sub_2213A60(&ServantProfileLimitCountManager___c__DisplayClass9_0_TypeInfo);
    byte_5971DC5 = 1;
  }
  v5 = sub_2213CCC(ServantProfileLimitCountManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_22;
  v8 = ServantProfileLimitCountManager_TypeInfo;
  v9 = *(&ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished + 1);
  *(_DWORD *)(v5 + 16) = servantId;
  if ( !v9 )
  {
    j_il2cpp_runtime_class_init_0(v8, v7);
    v8 = ServantProfileLimitCountManager_TypeInfo;
  }
  limitCountList = (System_Collections_Generic_List_object__o *)v8->static_fields->limitCountList;
  v11 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_ServantProfileLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Predicate_object____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_ServantProfileLimitCountManager___c__DisplayClass9_0__SetLimitCount_b__0__,
    0);
  if ( !limitCountList )
    goto LABEL_22;
  v12 = System_Collections_Generic_List_object___Find(
          limitCountList,
          (System_Predicate_T__o *)v11,
          (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Find__);
  if ( !v12 )
  {
    v16 = sub_2213CCC(ServantProfileLimitCountManager_ServantLimitCountInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v16, 0);
    if ( v16 )
    {
      v23 = ServantProfileLimitCountManager_TypeInfo;
      v24 = *(&ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished + 1);
      *(_DWORD *)(v16 + 16) = *(_DWORD *)(v5 + 16);
      *(_DWORD *)(v16 + 20) = limitCount;
      if ( !v24 )
      {
        j_il2cpp_runtime_class_init_0(v23, v7);
        v23 = ServantProfileLimitCountManager_TypeInfo;
      }
      v6 = (System_Collections_Generic_List_object__o *)v23->static_fields->limitCountList;
      if ( v6 )
      {
        items = v6->fields._items;
        v26 = Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__Add__;
        ++v6->fields._version;
        if ( items )
        {
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)v16,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v28[4] = (Il2CppClass *)v16;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 4), v16, v17, v18, v19, v20, v21, v22);
          }
          goto LABEL_19;
        }
      }
    }
LABEL_22:
    sub_2213CDC(v6, v7);
  }
  v14 = v12;
  if ( SHIDWORD(v12[1].klass) >= limitCount )
    return;
  v15 = ServantProfileLimitCountManager_TypeInfo;
  HIDWORD(v14[1].klass) = limitCount;
  if ( !*(&v15->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v15, v13);
LABEL_19:
    v15 = ServantProfileLimitCountManager_TypeInfo;
  }
  v15->static_fields->isModfiy = 1;
}


void ServantProfileLimitCountManager__SetLimitCountExistProfile(
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *Entitys; // x22
  System_Collections_Generic_List_object__o *v9; // x21
  System_Predicate_object__o *v10; // x22
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  int32_t v13; // w20
  const MethodInfo *v14; // x0

  if ( (byte_5971DCA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__getEntitys__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantProfileEntity__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor___91663088);
    sub_2213A60(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
    sub_2213A60(&System_Predicate_ServantProfileEntity__TypeInfo);
    sub_2213A60(&ServantProfileLimitCountManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_ServantProfileLimitCountManager___c__DisplayClass14_0__SetLimitCountExistProfile_b__0__);
    sub_2213A60(&ServantProfileLimitCountManager___c__DisplayClass14_0_TypeInfo);
    byte_5971DCA = 1;
  }
  v5 = sub_2213CCC(ServantProfileLimitCountManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_DWORD *)(v5 + 16) = servantId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantProfileMaster___)) == 0
    || (Entitys = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase_object__object__object___getEntitys(
                                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                                   (const MethodInfo_3F14B68 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__getEntitys__),
        v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantProfileEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor_71841080(
          v9,
          Entitys,
          (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor___91663088),
        v10 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_ServantProfileEntity__TypeInfo),
        System_Predicate_object____ctor(
          v10,
          (Il2CppObject *)v5,
          Method_ServantProfileLimitCountManager___c__DisplayClass14_0__SetLimitCountExistProfile_b__0__,
          0),
        !v9) )
  {
LABEL_12:
    sub_2213CDC(Instance, v7);
  }
  if ( System_Collections_Generic_List_object___Find(
         v9,
         (System_Predicate_T__o *)v10,
         (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_ServantProfileEntity__Find__) )
  {
    v13 = *(_DWORD *)(v5 + 16);
    if ( !*(&ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v11);
    ServantProfileLimitCountManager__SetLimitCount(v13, limitCount, v12);
    ServantProfileLimitCountManager__WriteData(v14);
  }
}


void ServantProfileLimitCountManager__UpdateProfileServantLimitCount(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  System_Collections_Generic_IEnumerable_T__o *Entitys; // x20
  System_Collections_Generic_List_object__o *v4; // x19
  System_Collections_ObjectModel_Collection_T__o *monitor; // x20
  __int64 v6; // x1
  int32_t v7; // w21
  __int64 v8; // x23
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **v15; // x22
  System_Predicate_object__o *v16; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v17; // x8
  __int64 v18; // x23
  __int64 v19; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v20; // x8
  int32_t v21; // w22
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  int32_t v24; // w23
  ServantProfileLimitCountManager_c *v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_5971DC9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantProfileMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__getEntityList__);
    sub_2213A60(&Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__getEntitys__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantProfileEntity__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantProfileEntity___ctor___91663088);
    sub_2213A60(&System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&System_Predicate_ServantProfileEntity__TypeInfo);
    sub_2213A60(&ServantProfileLimitCountManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_ServantProfileLimitCountManager___c__DisplayClass13_0__UpdateProfileServantLimitCount_b__0__);
    sub_2213A60(&ServantProfileLimitCountManager___c__DisplayClass13_0_TypeInfo);
    byte_5971DC9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantProfileMaster___);
  if ( !Instance )
    goto LABEL_24;
  Entitys = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase_object__object__object___getEntitys(
                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                             (const MethodInfo_3F14B68 *)Method_DataMasterBase_ServantProfileMaster__ServantProfileEntity__string__getEntitys__);
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantProfileEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_71841080(
    v4,
    Entitys,
    (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_ServantProfileEntity___ctor___91663088);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_24;
  monitor = (System_Collections_ObjectModel_Collection_T__o *)Instance[2].monitor;
  if ( !monitor )
    goto LABEL_24;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)Instance[2].monitor,
         (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__) >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = sub_2213CCC(ServantProfileLimitCountManager___c__DisplayClass13_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v8, 0);
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   monitor,
                   v7,
                   (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Item__);
      if ( !v8 )
        break;
      *(_QWORD *)(v8 + 16) = Instance;
      v15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)(v8 + 16);
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 16), (int32_t)Instance, v9, v10, v11, v12, v13, v14);
      v16 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_ServantProfileEntity__TypeInfo);
      System_Predicate_object____ctor(
        v16,
        (Il2CppObject *)v8,
        Method_ServantProfileLimitCountManager___c__DisplayClass13_0__UpdateProfileServantLimitCount_b__0__,
        0);
      if ( !v4 )
        break;
      Instance = System_Collections_Generic_List_object___Find(
                   v4,
                   (System_Predicate_T__o *)v16,
                   (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_ServantProfileEntity__Find__);
      if ( Instance )
      {
        v17 = *v15;
        if ( !*v15 )
          break;
        v18 = *(_QWORD *)&v17[5].fields.currentCryptoKey;
        v19 = *(_QWORD *)&v17[5].fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v2);
        *(_QWORD *)&v26.fields.currentCryptoKey = v18;
        *(_QWORD *)&v26.fields.fakeValue = v19;
        Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v26, 0);
        v20 = *v15;
        if ( !*v15 )
          break;
        v21 = (int)Instance;
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v20[6], 0);
        if ( !*(&ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v22);
        ServantProfileLimitCountManager__SetLimitCount(v21, v24, v23);
      }
      if ( ++v7 >= System_Collections_ObjectModel_Collection_object___get_Count(
                     monitor,
                     (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_UserServantEntity__get_Count__) )
        goto LABEL_21;
    }
LABEL_24:
    sub_2213CDC(Instance, v2);
  }
LABEL_21:
  v25 = ServantProfileLimitCountManager_TypeInfo;
  if ( !*(&ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v6);
  ServantProfileLimitCountManager__WriteData((const MethodInfo *)v25);
}


bool ServantProfileLimitCountManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantProfileLimitCountManager_c *v2; // x0
  struct ServantProfileLimitCountManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v4; // x0
  ServantProfileLimitCountManager_c *v6; // x0
  System_String_o *SaveFileName; // x0
  System_IO_BinaryWriter_o *v8; // x20
  __int64 v9; // x1
  ServantProfileLimitCountManager_c *v10; // x0
  struct ServantProfileLimitCountManager_StaticFields *v11; // x8
  struct System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x9
  int size; // w19
  __int64 v14; // x1
  int32_t i; // w20
  ServantProfileLimitCountManager_c *v16; // x0
  System_Collections_Generic_List_object__o *v17; // x0
  __int64 v18; // x1
  Il2CppObject *Item; // x21
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v21; // x9
  int *p_offset; // x10
  __int64 v23; // x0
  System_IO_Stream_c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  System_IO_BinaryWriter_o *v28; // [xsp+30h] [xbp-40h]
  System_IO_Stream_o *v29; // [xsp+38h] [xbp-38h]

  if ( (byte_5971DC8 & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryWriter_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Item__);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&ServantProfileLimitCountManager_TypeInfo);
    byte_5971DC8 = 1;
  }
  v2 = ServantProfileLimitCountManager_TypeInfo;
  if ( !*(&ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v1);
    v2 = ServantProfileLimitCountManager_TypeInfo;
  }
  static_fields = v2->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    static_fields = ServantProfileLimitCountManager_TypeInfo->static_fields;
  }
  v4 = ManagerConfig_TypeInfo;
  static_fields->isModfiy = 0;
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, v1);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( v4->static_fields->UseMock )
    return 0;
  v6 = ServantProfileLimitCountManager_TypeInfo;
  if ( !*(&ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v1);
  SaveFileName = ServantProfileLimitCountManager__GetSaveFileName((const MethodInfo *)v6);
  v29 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
  v8 = (System_IO_BinaryWriter_o *)sub_2213CCC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_76953012(v8, v29, 0);
  v10 = ServantProfileLimitCountManager_TypeInfo;
  v28 = v8;
  if ( !*(&ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v9);
    v10 = ServantProfileLimitCountManager_TypeInfo;
  }
  v11 = v10->static_fields;
  limitCountList = v11->limitCountList;
  if ( !limitCountList )
    sub_2213CDC(v10, v9);
  if ( !v8 )
    sub_2213CDC(0, v9);
  size = limitCountList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *))v8->klass->vtable._22_Write.methodPtr)(
    v8,
    v11->SAVE_DATA_VERSION);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool))v8->klass->vtable._8_Write.methodPtr)(
    v8,
    ServantProfileLimitCountManager_TypeInfo->static_fields->isContinueDevice);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD))v8->klass->vtable._17_Write.methodPtr)(
    v8,
    (unsigned int)size);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v16 = ServantProfileLimitCountManager_TypeInfo;
      if ( !*(&ServantProfileLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantProfileLimitCountManager_TypeInfo, v14);
        v16 = ServantProfileLimitCountManager_TypeInfo;
      }
      v17 = (System_Collections_Generic_List_object__o *)v16->static_fields->limitCountList;
      if ( !v17 )
        sub_2213CDC(0, v14);
      Item = System_Collections_Generic_List_object___get_Item(
               v17,
               i,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ServantProfileLimitCountManager_ServantLimitCountInfo__get_Item__);
      if ( !Item )
        sub_2213CDC(0, v18);
      if ( !v28 )
        sub_2213CDC(0, v18);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD))v28->klass->vtable._17_Write.methodPtr)(
        v28,
        LODWORD(Item[1].klass));
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD))v28->klass->vtable._17_Write.methodPtr)(
        v28,
        HIDWORD(Item[1].klass));
    }
  }
  if ( !v28 )
    sub_2213CDC(0, v14);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, const MethodInfo *))v28->klass->vtable._5_Close.methodPtr)(
    v28,
    v28->klass->vtable._5_Close.method);
  klass = v28->klass;
  v21 = *(unsigned __int16 *)&v28->klass->_2.rank;
  if ( *(_WORD *)&v28->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_31;
    }
    v23 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_31:
    v23 = sub_224BC3C(v28, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v23)(v28, *(_QWORD *)(v23 + 8));
  if ( v29 )
  {
    v24 = v29->klass;
    v25 = *(unsigned __int16 *)&v29->klass->_2.rank;
    if ( *(_WORD *)&v29->klass->_2.rank )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_38;
      }
      v27 = (__int64)&v24->vtable + 16 * *v26;
    }
    else
    {
LABEL_38:
      v27 = sub_224BC3C(v29, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v27)(v29, *(_QWORD *)(v27 + 8));
  }
  return 1;
}


void ServantProfileLimitCountManager_ServantLimitCountInfo___ctor(
        ServantProfileLimitCountManager_ServantLimitCountInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantProfileLimitCountManager___c__DisplayClass10_0___ctor(
        ServantProfileLimitCountManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantProfileLimitCountManager___c__DisplayClass10_0___GetLimitCount_b__0(
        ServantProfileLimitCountManager___c__DisplayClass10_0_o *this,
        ServantProfileLimitCountManager_ServantLimitCountInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.servantId == this->fields.servantId;
}


void ServantProfileLimitCountManager___c__DisplayClass13_0___ctor(
        ServantProfileLimitCountManager___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantProfileLimitCountManager___c__DisplayClass13_0___UpdateProfileServantLimitCount_b__0(
        ServantProfileLimitCountManager___c__DisplayClass13_0_o *this,
        ServantProfileEntity_o *x,
        const MethodInfo *method)
{
  ServantProfileLimitCountManager___c__DisplayClass13_0_o *v4; // x20
  struct UserServantEntity_o *ent; // x8
  int32_t svtId; // w21
  __int64 v7; // x19
  __int64 v8; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_5971DCC & 1) == 0 )
  {
    this = (ServantProfileLimitCountManager___c__DisplayClass13_0_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5971DCC = 1;
  }
  if ( !x || (ent = v4->fields.ent) == 0 )
    sub_2213CDC(this, x);
  svtId = x->fields.svtId;
  v7 = *(_QWORD *)&ent->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&ent->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, x);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v8;
  return svtId == CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v10, 0);
}


void ServantProfileLimitCountManager___c__DisplayClass14_0___ctor(
        ServantProfileLimitCountManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantProfileLimitCountManager___c__DisplayClass14_0___SetLimitCountExistProfile_b__0(
        ServantProfileLimitCountManager___c__DisplayClass14_0_o *this,
        ServantProfileEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.svtId == this->fields.servantId;
}


void ServantProfileLimitCountManager___c__DisplayClass9_0___ctor(
        ServantProfileLimitCountManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantProfileLimitCountManager___c__DisplayClass9_0___SetLimitCount_b__0(
        ServantProfileLimitCountManager___c__DisplayClass9_0_o *this,
        ServantProfileLimitCountManager_ServantLimitCountInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.servantId == this->fields.servantId;
}