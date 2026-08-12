void MaterialServantLimitCountManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__c *v8; // x0
  System_Collections_Generic_List_object__o *v9; // x19
  struct MaterialServantLimitCountManager_StaticFields *static_fields; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5971BED & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__TypeInfo);
    sub_2213A60(&MaterialServantLimitCountManager_TypeInfo);
    sub_2213A60(&StringLiteral_6959/*"Fgo_20191017"*/);
    byte_5971BED = 1;
  }
  v7 = StringLiteral_6959/*"Fgo_20191017"*/;
  MaterialServantLimitCountManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6959/*"Fgo_20191017"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)MaterialServantLimitCountManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__TypeInfo;
  *(_WORD *)&MaterialServantLimitCountManager_TypeInfo->static_fields->isModfiy = 0;
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v8);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo___ctor__);
  static_fields = MaterialServantLimitCountManager_TypeInfo->static_fields;
  static_fields->limitCountList = (struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *)v9;
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


void MaterialServantLimitCountManager___ctor(MaterialServantLimitCountManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MaterialServantLimitCountManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialServantLimitCountManager_c *v2; // x0
  struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_5971BE8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__);
    sub_2213A60(&MaterialServantLimitCountManager_TypeInfo);
    byte_5971BE8 = 1;
  }
  v2 = MaterialServantLimitCountManager_TypeInfo;
  if ( !*(&MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v1);
    v2 = MaterialServantLimitCountManager_TypeInfo;
  }
  limitCountList = v2->static_fields->limitCountList;
  if ( !limitCountList )
    goto LABEL_14;
  if ( limitCountList->fields._size < 1 )
    goto LABEL_11;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = MaterialServantLimitCountManager_TypeInfo;
    limitCountList = MaterialServantLimitCountManager_TypeInfo->static_fields->limitCountList;
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
    v2 = MaterialServantLimitCountManager_TypeInfo;
  }
LABEL_11:
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = MaterialServantLimitCountManager_TypeInfo;
  }
  *(_WORD *)&v2->static_fields->isModfiy = 1;
}


void MaterialServantLimitCountManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialServantLimitCountManager_c *v2; // x0
  System_String_o *SaveFileName; // x19
  __int64 v4; // x1
  MaterialServantLimitCountManager_c *v5; // x0

  if ( (byte_5971BE6 & 1) == 0 )
  {
    sub_2213A60(&MaterialServantLimitCountManager_TypeInfo);
    byte_5971BE6 = 1;
  }
  v2 = MaterialServantLimitCountManager_TypeInfo;
  if ( !*(&MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v1);
  SaveFileName = MaterialServantLimitCountManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
  v5 = MaterialServantLimitCountManager_TypeInfo;
  if ( !*(&MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v4);
  MaterialServantLimitCountManager__ClearSaveDataList((const MethodInfo *)v5);
}


int32_t MaterialServantLimitCountManager__GetLimitCount(int32_t servantId, const MethodInfo *method)
{
  void *limitCountList; // x0
  __int64 v4; // x8
  int v5; // w22
  int32_t v6; // w20
  MaterialServantLimitCountManager_c *v7; // x0

  if ( (byte_5971BEA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__);
    sub_2213A60(&MaterialServantLimitCountManager_TypeInfo);
    byte_5971BEA = 1;
  }
  limitCountList = MaterialServantLimitCountManager_TypeInfo;
  if ( !*(&MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, method);
    limitCountList = MaterialServantLimitCountManager_TypeInfo;
  }
  v4 = *(_QWORD *)(*((_QWORD *)limitCountList + 23) + 16LL);
  if ( !v4 )
LABEL_16:
    sub_2213CDC(limitCountList, method);
  v5 = *(_DWORD *)(v4 + 24);
  if ( v5 < 1 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = MaterialServantLimitCountManager_TypeInfo;
    if ( !*(&MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, method);
      v7 = MaterialServantLimitCountManager_TypeInfo;
    }
    limitCountList = v7->static_fields->limitCountList;
    if ( !limitCountList )
      goto LABEL_16;
    limitCountList = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)limitCountList,
                       v6,
                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__);
    if ( !limitCountList )
      goto LABEL_16;
    if ( *((_DWORD *)limitCountList + 4) == servantId )
      return *((_DWORD *)limitCountList + 5);
    if ( v5 == ++v6 )
      return 0;
  }
}


System_String_o *MaterialServantLimitCountManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_5971BE5 & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&DatFileName_TypeInfo);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_5971BE5 = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(26, 0);
  return System_String__Concat_75694928(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


void MaterialServantLimitCountManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialServantLimitCountManager_c *v2; // x0

  if ( (byte_5971BE7 & 1) == 0 )
  {
    sub_2213A60(&MaterialServantLimitCountManager_TypeInfo);
    byte_5971BE7 = 1;
  }
  v2 = MaterialServantLimitCountManager_TypeInfo;
  if ( !*(&MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v1);
  MaterialServantLimitCountManager__ReadData((const MethodInfo *)v2);
}


bool MaterialServantLimitCountManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialServantLimitCountManager_c *v2; // x0
  ManagerConfig_c *v3; // x8
  int v4; // w10
  bool v5; // w20
  MaterialServantLimitCountManager_c *v6; // x0
  System_String_o *SaveFileName; // x19
  __int64 v8; // x1
  MaterialServantLimitCountManager_c *v9; // x0
  System_IO_Stream_o *v10; // x20
  System_IO_BinaryReader_o *v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o *v15; // x19
  MaterialServantLimitCountManager_c *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  char v19; // w19
  MaterialServantLimitCountManager_c *v20; // x0
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
  MaterialServantLimitCountManager_c *v33; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v40; // x9
  int *p_offset; // x10
  __int64 v42; // x0
  MaterialServantLimitCountManager_c *v43; // x0
  System_IO_BinaryReader_o *v45; // [xsp+28h] [xbp-48h]

  if ( (byte_5971BEB & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryReader_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&MaterialServantLimitCountManager_TypeInfo);
    sub_2213A60(&MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo);
    byte_5971BEB = 1;
  }
  v2 = MaterialServantLimitCountManager_TypeInfo;
  if ( !*(&MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v1);
    v2 = MaterialServantLimitCountManager_TypeInfo;
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
    return 1;
  v6 = MaterialServantLimitCountManager_TypeInfo;
  if ( !*(&MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v1);
  SaveFileName = MaterialServantLimitCountManager__GetSaveFileName((const MethodInfo *)v6);
  if ( System_IO_File__Exists(SaveFileName, 0) )
  {
    v9 = MaterialServantLimitCountManager_TypeInfo;
    if ( !*(&MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v8);
    MaterialServantLimitCountManager__ClearSaveDataList((const MethodInfo *)v9);
    v10 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
    v11 = (System_IO_BinaryReader_o *)sub_2213CCC(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v11, v10, 0);
    v45 = v11;
    if ( !v11 )
      sub_2213CDC(v12, v13);
    v15 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v11->klass->vtable._22_ReadString.methodPtr)(
                               v11,
                               v11->klass->vtable._22_ReadString.method);
    v16 = MaterialServantLimitCountManager_TypeInfo;
    if ( !*(&MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v14);
      v16 = MaterialServantLimitCountManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v16->static_fields->SAVE_DATA_VERSION, v15, 0) )
    {
      v5 = 0;
    }
    else
    {
      if ( !v45 )
        sub_2213CDC(0, v17);
      v19 = ((__int64 (*)(void))v45->klass->vtable._9_ReadBoolean.methodPtr)();
      v20 = MaterialServantLimitCountManager_TypeInfo;
      if ( !*(&MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v18);
        v20 = MaterialServantLimitCountManager_TypeInfo;
      }
      v20->static_fields->isContinueDevice = v19 & 1;
      v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v45->klass->vtable._15_ReadInt32.methodPtr)(
              v45,
              v45->klass->vtable._15_ReadInt32.method);
      if ( v21 >= 1 )
      {
        do
        {
          v22 = ((__int64 (*)(void))v45->klass->vtable._15_ReadInt32.methodPtr)();
          v23 = ((__int64 (*)(void))v45->klass->vtable._15_ReadInt32.methodPtr)();
          v24 = sub_2213CCC(MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v24, 0);
          if ( !v24 )
            sub_2213CDC(v25, v26);
          v33 = MaterialServantLimitCountManager_TypeInfo;
          *(_DWORD *)(v24 + 16) = v22;
          *(_DWORD *)(v24 + 20) = v23;
          if ( !*(&v33->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v33, v26);
            v33 = MaterialServantLimitCountManager_TypeInfo;
          }
          limitCountList = (System_Collections_Generic_List_object__o *)v33->static_fields->limitCountList;
          if ( !limitCountList
            || (items = limitCountList->fields._items,
                v36 = Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__,
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
      v5 = 1;
    }
    if ( v45 )
    {
      klass = v45->klass;
      v40 = *(unsigned __int16 *)&v45->klass->_2.rank;
      if ( *(_WORD *)&v45->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v40;
          p_offset += 4;
          if ( !v40 )
            goto LABEL_38;
        }
        v42 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_38:
        v42 = sub_224BC3C(v45, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v42)(v45, *(_QWORD *)(v42 + 8));
    }
  }
  else
  {
    v43 = MaterialServantLimitCountManager_TypeInfo;
    if ( !*(&MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v8);
    MaterialServantLimitCountManager__ClearSaveDataList((const MethodInfo *)v43);
    return 0;
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
void MaterialServantLimitCountManager__SetLimitCount(int32_t servantId, int32_t limitCount, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *limitCountList; // x0
  __int64 v6; // x8
  int v7; // w23
  int32_t v8; // w21
  MaterialServantLimitCountManager_c *v9; // x0
  __int64 v10; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  MaterialServantLimitCountManager_c *v17; // x0
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  __int64 v21; // x8
  MaterialServantLimitCountManager_c *v22; // x8

  if ( (byte_5971BE9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__);
    sub_2213A60(&MaterialServantLimitCountManager_TypeInfo);
    sub_2213A60(&MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo);
    byte_5971BE9 = 1;
  }
  limitCountList = (System_Collections_Generic_List_object__o *)MaterialServantLimitCountManager_TypeInfo;
  if ( !*(&MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, *(_QWORD *)&limitCount);
    limitCountList = (System_Collections_Generic_List_object__o *)MaterialServantLimitCountManager_TypeInfo;
  }
  v6 = *(_QWORD *)(*(_QWORD *)&limitCountList[4].fields._size + 16LL);
  if ( !v6 )
    goto LABEL_28;
  v7 = *(_DWORD *)(v6 + 24);
  if ( v7 < 1 )
  {
LABEL_14:
    v10 = sub_2213CCC(MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    if ( v10 )
    {
      v17 = MaterialServantLimitCountManager_TypeInfo;
      *(_DWORD *)(v10 + 16) = servantId;
      *(_DWORD *)(v10 + 20) = limitCount;
      if ( !*(&v17->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v17, *(_QWORD *)&limitCount);
        v17 = MaterialServantLimitCountManager_TypeInfo;
      }
      limitCountList = (System_Collections_Generic_List_object__o *)v17->static_fields->limitCountList;
      if ( limitCountList )
      {
        items = limitCountList->fields._items;
        v19 = Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__;
        ++limitCountList->fields._version;
        if ( items )
        {
          size = limitCountList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              limitCountList,
              (Il2CppObject *)v10,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = (__int64)items + 8 * size;
            limitCountList->fields._size = size + 1;
            *(_QWORD *)(v21 + 32) = v10;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 32), v10, v11, v12, v13, v14, v15, v16);
          }
          goto LABEL_22;
        }
      }
    }
LABEL_28:
    sub_2213CDC(limitCountList, *(_QWORD *)&limitCount);
  }
  v8 = 0;
  while ( 1 )
  {
    v9 = MaterialServantLimitCountManager_TypeInfo;
    if ( !*(&MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, *(_QWORD *)&limitCount);
      v9 = MaterialServantLimitCountManager_TypeInfo;
    }
    limitCountList = (System_Collections_Generic_List_object__o *)v9->static_fields->limitCountList;
    if ( !limitCountList )
      goto LABEL_28;
    limitCountList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    limitCountList,
                                                                    v8,
                                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__);
    if ( !limitCountList )
      goto LABEL_28;
    if ( LODWORD(limitCountList->fields._items) == servantId )
      break;
    if ( v7 == ++v8 )
      goto LABEL_14;
  }
  if ( HIDWORD(limitCountList->fields._items) != limitCount )
  {
    v22 = MaterialServantLimitCountManager_TypeInfo;
    HIDWORD(limitCountList->fields._items) = limitCount;
    if ( *(&v22->_2.cctor_finished + 1) )
      goto LABEL_23;
    j_il2cpp_runtime_class_init_0(v22, *(_QWORD *)&limitCount);
LABEL_22:
    v22 = MaterialServantLimitCountManager_TypeInfo;
LABEL_23:
    v22->static_fields->isModfiy = 1;
  }
}


bool MaterialServantLimitCountManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialServantLimitCountManager_c *v2; // x0
  struct MaterialServantLimitCountManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v4; // x0
  MaterialServantLimitCountManager_c *v6; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v8; // x20
  System_IO_BinaryWriter_o *v9; // x19
  __int64 v10; // x1
  MaterialServantLimitCountManager_c *v11; // x0
  struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x9
  int size; // w19
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t i; // w20
  MaterialServantLimitCountManager_c *v17; // x0
  System_Collections_Generic_List_object__o *v18; // x0
  __int64 v19; // x1
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v21; // x9
  int *p_offset; // x10
  __int64 v23; // x0
  System_IO_BinaryWriter_o *v24; // [xsp+28h] [xbp-38h]

  if ( (byte_5971BEC & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryWriter_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&MaterialServantLimitCountManager_TypeInfo);
    byte_5971BEC = 1;
  }
  v2 = MaterialServantLimitCountManager_TypeInfo;
  if ( !*(&MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v1);
    v2 = MaterialServantLimitCountManager_TypeInfo;
  }
  static_fields = v2->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    static_fields = MaterialServantLimitCountManager_TypeInfo->static_fields;
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
  v6 = MaterialServantLimitCountManager_TypeInfo;
  if ( !*(&MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v1);
  SaveFileName = MaterialServantLimitCountManager__GetSaveFileName((const MethodInfo *)v6);
  v8 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
  v9 = (System_IO_BinaryWriter_o *)sub_2213CCC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_76953012(v9, v8, 0);
  v11 = MaterialServantLimitCountManager_TypeInfo;
  v24 = v9;
  if ( !*(&MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v10);
    v11 = MaterialServantLimitCountManager_TypeInfo;
  }
  limitCountList = v11->static_fields->limitCountList;
  if ( !limitCountList )
    sub_2213CDC(v11, v10);
  if ( !v9 )
    sub_2213CDC(0, v10);
  size = limitCountList->fields._size;
  v24->klass->vtable._22_Write.methodPtr();
  v24->klass->vtable._8_Write.methodPtr();
  if ( !v24 )
    sub_2213CDC(0, v14);
  v24->klass->vtable._17_Write.methodPtr();
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v17 = MaterialServantLimitCountManager_TypeInfo;
      if ( !*(&MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v15);
        v17 = MaterialServantLimitCountManager_TypeInfo;
      }
      v18 = (System_Collections_Generic_List_object__o *)v17->static_fields->limitCountList;
      if ( !v18 )
        sub_2213CDC(0, v15);
      if ( !System_Collections_Generic_List_object___get_Item(
              v18,
              i,
              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__) )
        sub_2213CDC(0, v19);
      v24->klass->vtable._17_Write.methodPtr();
      v24->klass->vtable._17_Write.methodPtr();
    }
  }
  klass = v24->klass;
  v21 = *(unsigned __int16 *)&v24->klass->_2.rank;
  if ( *(_WORD *)&v24->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_30;
    }
    v23 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_30:
    v23 = sub_224BC3C(v24, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v23)(v24, *(_QWORD *)(v23 + 8));
  return 1;
}


void MaterialServantLimitCountManager_ServantLimitCountInfo___ctor(
        MaterialServantLimitCountManager_ServantLimitCountInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}