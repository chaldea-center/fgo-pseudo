void MaterialServantLimitCountManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  System_Collections_Generic_List_object__o *v7; // x19
  struct MaterialServantLimitCountManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CEF96E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__TypeInfo);
    sub_1C7BAE8(&MaterialServantLimitCountManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_6683/*"Fgo_20191017"*/);
    byte_4CEF96E = 1;
  }
  MaterialServantLimitCountManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6683/*"Fgo_20191017"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)MaterialServantLimitCountManager_TypeInfo->static_fields,
    StringLiteral_6683/*"Fgo_20191017"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  *(_WORD *)&MaterialServantLimitCountManager_TypeInfo->static_fields->isModfiy = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo___ctor__);
  static_fields = MaterialServantLimitCountManager_TypeInfo->static_fields;
  static_fields->limitCountList = (struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *)v7;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->limitCountList, (int32_t)v7, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_4CEF969 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__);
    sub_1C7BAE8(&MaterialServantLimitCountManager_TypeInfo);
    byte_4CEF969 = 1;
  }
  v2 = MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    v2 = MaterialServantLimitCountManager_TypeInfo;
  }
  limitCountList = v2->static_fields->limitCountList;
  if ( !limitCountList )
    goto LABEL_14;
  if ( limitCountList->fields._size < 1 )
    goto LABEL_11;
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = MaterialServantLimitCountManager_TypeInfo;
    limitCountList = MaterialServantLimitCountManager_TypeInfo->static_fields->limitCountList;
    if ( !limitCountList )
LABEL_14:
      sub_1C7BD40(v2, v1);
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
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = MaterialServantLimitCountManager_TypeInfo;
  }
  *(_WORD *)&v2->static_fields->isModfiy = 1;
}


void MaterialServantLimitCountManager__DeleteSaveData(const MethodInfo *method)
{
  MaterialServantLimitCountManager_c *v1; // x0
  System_String_o *SaveFileName; // x19
  MaterialServantLimitCountManager_c *v3; // x0

  if ( (byte_4CEF967 & 1) == 0 )
  {
    sub_1C7BAE8(&MaterialServantLimitCountManager_TypeInfo);
    byte_4CEF967 = 1;
  }
  v1 = MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  SaveFileName = MaterialServantLimitCountManager__GetSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
  v3 = MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  MaterialServantLimitCountManager__ClearSaveDataList((const MethodInfo *)v3);
}


int32_t MaterialServantLimitCountManager__GetLimitCount(int32_t servantId, const MethodInfo *method)
{
  void *Item; // x0
  __int64 v4; // x8
  int v5; // w8
  int v6; // w22
  int32_t i; // w20

  if ( (byte_4CEF96B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__);
    sub_1C7BAE8(&MaterialServantLimitCountManager_TypeInfo);
    byte_4CEF96B = 1;
  }
  Item = MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    Item = MaterialServantLimitCountManager_TypeInfo;
  }
  v4 = *(_QWORD *)(*((_QWORD *)Item + 23) + 16LL);
  if ( !v4 )
LABEL_17:
    sub_1C7BD40(Item, method);
  v5 = *(_DWORD *)(v4 + 24);
  v6 = v5 - 1;
  if ( v5 < 1 )
    return 0;
  for ( i = 0; ; ++i )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item);
      Item = MaterialServantLimitCountManager_TypeInfo;
    }
    Item = *(void **)(*((_QWORD *)Item + 23) + 16LL);
    if ( !Item )
      goto LABEL_17;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Item,
             i,
             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__);
    if ( !Item )
      goto LABEL_17;
    if ( *((_DWORD *)Item + 4) == servantId )
      break;
    if ( v6 == i )
      return 0;
    Item = MaterialServantLimitCountManager_TypeInfo;
  }
  return *((_DWORD *)Item + 5);
}


System_String_o *MaterialServantLimitCountManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4CEF966 & 1) == 0 )
  {
    sub_1C7BAE8(&AndroidUtil_TypeInfo);
    sub_1C7BAE8(&DatFileName_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1042/*"/"*/);
    byte_4CEF966 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(26, 0);
  return System_String__Concat_64215176(DatFileSavePath, (System_String_o *)StringLiteral_1042/*"/"*/, FileName, 0);
}


void MaterialServantLimitCountManager__Initialize(const MethodInfo *method)
{
  MaterialServantLimitCountManager_c *v1; // x0

  if ( (byte_4CEF968 & 1) == 0 )
  {
    sub_1C7BAE8(&MaterialServantLimitCountManager_TypeInfo);
    byte_4CEF968 = 1;
  }
  v1 = MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  MaterialServantLimitCountManager__ReadData((const MethodInfo *)v1);
}


bool MaterialServantLimitCountManager__ReadData(const MethodInfo *method)
{
  MaterialServantLimitCountManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  MaterialServantLimitCountManager_c *v4; // x0
  System_String_o *SaveFileName; // x19
  MaterialServantLimitCountManager_c *v6; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryReader_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  MaterialServantLimitCountManager_c *v12; // x0
  int v13; // w21
  char v14; // w20
  MaterialServantLimitCountManager_c *v15; // x0
  int v16; // w20
  int v17; // w22
  int v18; // w23
  __int64 v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  MaterialServantLimitCountManager_c *v28; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v35; // x9
  int32_t *p_offset; // x10
  __int64 v37; // x0
  MaterialServantLimitCountManager_c *v38; // x0

  if ( (byte_4CEF96C & 1) == 0 )
  {
    sub_1C7BAE8(&System_IO_BinaryReader_TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__);
    sub_1C7BAE8(&ManagerConfig_TypeInfo);
    sub_1C7BAE8(&MaterialServantLimitCountManager_TypeInfo);
    sub_1C7BAE8(&MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo);
    byte_4CEF96C = 1;
  }
  v1 = MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    v1 = MaterialServantLimitCountManager_TypeInfo;
  }
  v1->static_fields->isModfiy = 0;
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( !v2->static_fields->UseMock )
  {
    v4 = MaterialServantLimitCountManager_TypeInfo;
    if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    SaveFileName = MaterialServantLimitCountManager__GetSaveFileName((const MethodInfo *)v4);
    if ( System_IO_File__Exists(SaveFileName, 0) )
    {
      v6 = MaterialServantLimitCountManager_TypeInfo;
      if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
      MaterialServantLimitCountManager__ClearSaveDataList((const MethodInfo *)v6);
      v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
      v8 = (System_IO_BinaryReader_o *)sub_1C7BD34(System_IO_BinaryReader_TypeInfo);
      System_IO_BinaryReader___ctor(v8, v7, 0);
      if ( !v8 )
        sub_1C7BD40(v9, v10);
      v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._22_ReadString.methodPtr)(
                                 v8,
                                 v8->klass->vtable._22_ReadString.method);
      v12 = MaterialServantLimitCountManager_TypeInfo;
      if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
        v12 = MaterialServantLimitCountManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v12->static_fields->SAVE_DATA_VERSION, v11, 0) )
      {
        v13 = 5;
      }
      else
      {
        v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._9_ReadBoolean.methodPtr)(
                v8,
                v8->klass->vtable._9_ReadBoolean.method);
        v15 = MaterialServantLimitCountManager_TypeInfo;
        if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
          v15 = MaterialServantLimitCountManager_TypeInfo;
        }
        v15->static_fields->isContinueDevice = v14 & 1;
        v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                v8,
                v8->klass->vtable._15_ReadInt32.method);
        if ( v16 >= 1 )
        {
          do
          {
            v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                    v8,
                    v8->klass->vtable._15_ReadInt32.method);
            v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                    v8,
                    v8->klass->vtable._15_ReadInt32.method);
            v19 = sub_1C7BD34(MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo);
            System_Object___ctor((Il2CppObject *)v19, 0);
            if ( !v19 )
              sub_1C7BD40(v20, v21);
            *(_DWORD *)(v19 + 16) = v17;
            *(_DWORD *)(v19 + 20) = v18;
            v28 = MaterialServantLimitCountManager_TypeInfo;
            if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
              v28 = MaterialServantLimitCountManager_TypeInfo;
            }
            limitCountList = (System_Collections_Generic_List_object__o *)v28->static_fields->limitCountList;
            if ( !limitCountList )
              sub_1C7BD40(0, v21);
            items = limitCountList->fields._items;
            v31 = Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__;
            ++limitCountList->fields._version;
            if ( !items )
              sub_1C7BD40(limitCountList, v21);
            size = limitCountList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                limitCountList,
                (Il2CppObject *)v19,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = &items->obj.klass + size;
              limitCountList->fields._size = size + 1;
              v33[4] = (Il2CppClass *)v19;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v33 + 4), v19, v22, v23, v24, v25, v26, v27);
            }
            --v16;
          }
          while ( v16 );
        }
        v13 = 8;
      }
      klass = v8->klass;
      v35 = *(unsigned __int16 *)&v8->klass->_2.rank;
      if ( *(_WORD *)&v8->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v35;
          p_offset += 4;
          if ( !v35 )
            goto LABEL_36;
        }
        v37 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_36:
        v37 = sub_1C51E70(v8, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v37)(v8, *(_QWORD *)(v37 + 8));
      if ( (v13 | 8) == 8 )
        return 1;
    }
    else
    {
      v38 = MaterialServantLimitCountManager_TypeInfo;
      if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
      MaterialServantLimitCountManager__ClearSaveDataList((const MethodInfo *)v38);
    }
    return 0;
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void MaterialServantLimitCountManager__SetLimitCount(int32_t servantId, int32_t limitCount, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *limitCountList; // x0
  __int64 v6; // x8
  int v7; // w8
  int v8; // w23
  int32_t i; // w21
  __int64 v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  MaterialServantLimitCountManager_c *v17; // x0
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  __int64 v21; // x8
  MaterialServantLimitCountManager_c *v22; // x0

  if ( (byte_4CEF96A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__);
    sub_1C7BAE8(&MaterialServantLimitCountManager_TypeInfo);
    sub_1C7BAE8(&MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo);
    byte_4CEF96A = 1;
  }
  limitCountList = (System_Collections_Generic_List_object__o *)MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    limitCountList = (System_Collections_Generic_List_object__o *)MaterialServantLimitCountManager_TypeInfo;
  }
  v6 = *(_QWORD *)(*(_QWORD *)&limitCountList[4].fields._size + 16LL);
  if ( !v6 )
    goto LABEL_29;
  v7 = *(_DWORD *)(v6 + 24);
  v8 = v7 - 1;
  if ( v7 < 1 )
  {
LABEL_15:
    v10 = sub_1C7BD34(MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    if ( v10 )
    {
      *(_DWORD *)(v10 + 16) = servantId;
      *(_DWORD *)(v10 + 20) = limitCount;
      v17 = MaterialServantLimitCountManager_TypeInfo;
      if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
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
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = (__int64)items + 8 * size;
            limitCountList->fields._size = size + 1;
            *(_QWORD *)(v21 + 32) = v10;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v21 + 32), v10, v11, v12, v13, v14, v15, v16);
          }
          goto LABEL_23;
        }
      }
    }
LABEL_29:
    sub_1C7BD40(limitCountList, *(_QWORD *)&limitCount);
  }
  for ( i = 0; ; ++i )
  {
    if ( !limitCountList[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(limitCountList);
      limitCountList = (System_Collections_Generic_List_object__o *)MaterialServantLimitCountManager_TypeInfo;
    }
    limitCountList = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)&limitCountList[4].fields._size + 16LL);
    if ( !limitCountList )
      goto LABEL_29;
    limitCountList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    limitCountList,
                                                                    i,
                                                                    (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__);
    if ( !limitCountList )
      goto LABEL_29;
    if ( LODWORD(limitCountList->fields._items) == servantId )
      break;
    if ( v8 == i )
      goto LABEL_15;
    limitCountList = (System_Collections_Generic_List_object__o *)MaterialServantLimitCountManager_TypeInfo;
  }
  if ( HIDWORD(limitCountList->fields._items) != limitCount )
  {
    HIDWORD(limitCountList->fields._items) = limitCount;
    v22 = MaterialServantLimitCountManager_TypeInfo;
    if ( MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      goto LABEL_24;
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
LABEL_23:
    v22 = MaterialServantLimitCountManager_TypeInfo;
LABEL_24:
    v22->static_fields->isModfiy = 1;
  }
}


bool MaterialServantLimitCountManager__WriteData(const MethodInfo *method)
{
  MaterialServantLimitCountManager_c *v1; // x0
  struct MaterialServantLimitCountManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v3; // x0
  MaterialServantLimitCountManager_c *v5; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryWriter_o *v8; // x19
  __int64 v9; // x1
  MaterialServantLimitCountManager_c *v10; // x0
  struct MaterialServantLimitCountManager_StaticFields *v11; // x8
  struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x9
  int size; // w20
  __int64 v14; // x1
  int32_t i; // w21
  MaterialServantLimitCountManager_c *v16; // x0
  System_Collections_Generic_List_object__o *v17; // x0
  Il2CppObject *Item; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0

  if ( (byte_4CEF96D & 1) == 0 )
  {
    sub_1C7BAE8(&System_IO_BinaryWriter_TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__);
    sub_1C7BAE8(&ManagerConfig_TypeInfo);
    sub_1C7BAE8(&MaterialServantLimitCountManager_TypeInfo);
    byte_4CEF96D = 1;
  }
  v1 = MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    v1 = MaterialServantLimitCountManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    static_fields = MaterialServantLimitCountManager_TypeInfo->static_fields;
  }
  static_fields->isModfiy = 0;
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 0;
  v5 = MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  SaveFileName = MaterialServantLimitCountManager__GetSaveFileName((const MethodInfo *)v5);
  v7 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
  v8 = (System_IO_BinaryWriter_o *)sub_1C7BD34(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_65086240(v8, v7, 0);
  v10 = MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    v10 = MaterialServantLimitCountManager_TypeInfo;
  }
  v11 = v10->static_fields;
  limitCountList = v11->limitCountList;
  if ( !limitCountList )
    sub_1C7BD40(v10, v9);
  if ( !v8 )
    sub_1C7BD40(v10, v9);
  size = limitCountList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *))v8->klass->vtable._22_Write.methodPtr)(
    v8,
    v11->SAVE_DATA_VERSION,
    v8->klass->vtable._22_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, const MethodInfo *))v8->klass->vtable._8_Write.methodPtr)(
    v8,
    MaterialServantLimitCountManager_TypeInfo->static_fields->isContinueDevice,
    v8->klass->vtable._8_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
    v8,
    (unsigned int)size,
    v8->klass->vtable._17_Write.method);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v16 = MaterialServantLimitCountManager_TypeInfo;
      if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
        v16 = MaterialServantLimitCountManager_TypeInfo;
      }
      v17 = (System_Collections_Generic_List_object__o *)v16->static_fields->limitCountList;
      if ( !v17 )
        sub_1C7BD40(0, v14);
      Item = System_Collections_Generic_List_object___get_Item(
               v17,
               i,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__);
      v20 = Item;
      if ( !Item )
        sub_1C7BD40(0, v19);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        LODWORD(Item[1].klass),
        v8->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        HIDWORD(v20[1].klass),
        v8->klass->vtable._17_Write.method);
    }
  }
  klass = v8->klass;
  v22 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_29;
    }
    v24 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_29:
    v24 = sub_1C51E70(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v24)(v8, *(_QWORD *)(v24 + 8));
  return 1;
}


void MaterialServantLimitCountManager_ServantLimitCountInfo___ctor(
        MaterialServantLimitCountManager_ServantLimitCountInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}