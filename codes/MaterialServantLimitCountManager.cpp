void __fastcall MaterialServantLimitCountManager___cctor(const MethodInfo *method)
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
  System_Collections_Generic_List_object__o *v17; // x19
  struct MaterialServantLimitCountManager_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B17343 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo___ctor__,
      v1,
      v2);
    sub_1BCA7E0(
      &System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__TypeInfo,
      v8,
      v9);
    sub_1BCA7E0(&MaterialServantLimitCountManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_6760/*"Fgo_20191017"*/, v12, v13);
    byte_4B17343 = 1;
  }
  MaterialServantLimitCountManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6760/*"Fgo_20191017"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MaterialServantLimitCountManager_TypeInfo->static_fields,
    StringLiteral_6760/*"Fgo_20191017"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  *(_WORD *)&MaterialServantLimitCountManager_TypeInfo->static_fields->isModfiy = 0;
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__TypeInfo,
                                                       v14,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo___ctor__);
  static_fields = MaterialServantLimitCountManager_TypeInfo->static_fields;
  static_fields->limitCountList = (struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *)v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->limitCountList, (int64_t)v17, v19, v20, v21, v22, v23, v24);
}


void __fastcall MaterialServantLimitCountManager___ctor(
        MaterialServantLimitCountManager_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MaterialServantLimitCountManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  MaterialServantLimitCountManager_c *v7; // x0
  struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x8
  int32_t size; // w2
  int v10; // w9

  if ( (byte_4B1733E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Clear__,
      v1,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__,
      v3,
      v4);
    sub_1BCA7E0(&MaterialServantLimitCountManager_TypeInfo, v5, v6);
    byte_4B1733E = 1;
  }
  v7 = MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v1);
    v7 = MaterialServantLimitCountManager_TypeInfo;
  }
  limitCountList = v7->static_fields->limitCountList;
  if ( !limitCountList )
    goto LABEL_14;
  if ( limitCountList->fields._size < 1 )
    goto LABEL_11;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = MaterialServantLimitCountManager_TypeInfo;
    limitCountList = MaterialServantLimitCountManager_TypeInfo->static_fields->limitCountList;
    if ( !limitCountList )
LABEL_14:
      sub_1BCAA3C(v7, v1);
  }
  size = limitCountList->fields._size;
  v10 = limitCountList->fields._version + 1;
  limitCountList->fields._size = 0;
  limitCountList->fields._version = v10;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)limitCountList->fields._items, 0, size, 0LL);
    v7 = MaterialServantLimitCountManager_TypeInfo;
  }
LABEL_11:
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = MaterialServantLimitCountManager_TypeInfo;
  }
  *(_WORD *)&v7->static_fields->isModfiy = 1;
}


void __fastcall MaterialServantLimitCountManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MaterialServantLimitCountManager_c *v3; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4B1733C & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialServantLimitCountManager_TypeInfo, v1, v2);
    byte_4B1733C = 1;
  }
  v3 = MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v1);
  SaveFileName = MaterialServantLimitCountManager__GetSaveFileName((const MethodInfo *)v3);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


int32_t __fastcall MaterialServantLimitCountManager__GetLimitCount(int32_t servantId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  void *Item; // x0
  __int64 v9; // x8
  int v10; // w8
  int v11; // w22
  int32_t i; // w20

  if ( (byte_4B17340 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__,
      v4,
      v5);
    sub_1BCA7E0(&MaterialServantLimitCountManager_TypeInfo, v6, v7);
    byte_4B17340 = 1;
  }
  Item = MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, method);
    Item = MaterialServantLimitCountManager_TypeInfo;
  }
  v9 = *(_QWORD *)(*((_QWORD *)Item + 23) + 16LL);
  if ( !v9 )
LABEL_17:
    sub_1BCAA3C(Item, method);
  v10 = *(_DWORD *)(v9 + 24);
  v11 = v10 - 1;
  if ( v10 < 1 )
    return 0;
  for ( i = 0; ; ++i )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item, method);
      Item = MaterialServantLimitCountManager_TypeInfo;
    }
    Item = *(void **)(*((_QWORD *)Item + 23) + 16LL);
    if ( !Item )
      goto LABEL_17;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Item,
             i,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__);
    if ( !Item )
      goto LABEL_17;
    if ( *((_DWORD *)Item + 4) == servantId )
      break;
    if ( v11 == i )
      return 0;
    Item = MaterialServantLimitCountManager_TypeInfo;
  }
  return *((_DWORD *)Item + 5);
}


System_String_o *__fastcall MaterialServantLimitCountManager__GetSaveFileName(const MethodInfo *method)
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

  if ( (byte_4B1733B & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B1733B = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v7);
  FileName = DatFileName__getFileName(26, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


void __fastcall MaterialServantLimitCountManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MaterialServantLimitCountManager_c *v3; // x0

  if ( (byte_4B1733D & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialServantLimitCountManager_TypeInfo, v1, v2);
    byte_4B1733D = 1;
  }
  v3 = MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v1);
  MaterialServantLimitCountManager__ReadData((const MethodInfo *)v3);
}


bool __fastcall MaterialServantLimitCountManager__ReadData(const MethodInfo *method)
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
  MaterialServantLimitCountManager_c *v13; // x0
  ManagerConfig_c *v14; // x0
  MaterialServantLimitCountManager_c *v16; // x0
  System_String_o *SaveFileName; // x19
  __int64 v18; // x1
  MaterialServantLimitCountManager_c *v19; // x0
  System_IO_Stream_o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_IO_BinaryReader_o *v24; // x19
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x1
  System_String_o *v28; // x20
  MaterialServantLimitCountManager_c *v29; // x0
  int v30; // w21
  __int64 v31; // x1
  char v32; // w20
  MaterialServantLimitCountManager_c *v33; // x0
  int v34; // w20
  int v35; // w22
  int v36; // w23
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  int64_t v40; // x21
  __int64 v41; // x0
  __int64 v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  MaterialServantLimitCountManager_c *v49; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v56; // x9
  int32_t *p_offset; // x10
  __int64 v58; // x0
  MaterialServantLimitCountManager_c *v59; // x0

  if ( (byte_4B17341 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__,
      v5,
      v6);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&MaterialServantLimitCountManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo, v11, v12);
    byte_4B17341 = 1;
  }
  v13 = MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v1);
    v13 = MaterialServantLimitCountManager_TypeInfo;
  }
  v13->static_fields->isModfiy = 0;
  v14 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v14 = ManagerConfig_TypeInfo;
  }
  if ( !v14->static_fields->UseMock )
  {
    v16 = MaterialServantLimitCountManager_TypeInfo;
    if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v1);
    SaveFileName = MaterialServantLimitCountManager__GetSaveFileName((const MethodInfo *)v16);
    if ( System_IO_File__Exists(SaveFileName, 0LL) )
    {
      v19 = MaterialServantLimitCountManager_TypeInfo;
      if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v18);
      MaterialServantLimitCountManager__ClearSaveDataList((const MethodInfo *)v19);
      v20 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
      v24 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v21, v22, v23);
      System_IO_BinaryReader___ctor(v24, v20, 0LL);
      if ( !v24 )
        sub_1BCAA3C(v25, v26);
      v28 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._22_ReadString.method)(
                                 v24,
                                 v24->klass->vtable._23_ReadChars.methodPtr);
      v29 = MaterialServantLimitCountManager_TypeInfo;
      if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v27);
        v29 = MaterialServantLimitCountManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v29->static_fields->SAVE_DATA_VERSION, v28, 0LL) )
      {
        v30 = 5;
      }
      else
      {
        v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._9_ReadBoolean.method)(
                v24,
                v24->klass->vtable._10_ReadByte.methodPtr);
        v33 = MaterialServantLimitCountManager_TypeInfo;
        if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v31);
          v33 = MaterialServantLimitCountManager_TypeInfo;
        }
        v33->static_fields->isContinueDevice = v32 & 1;
        v34 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._15_ReadInt32.method)(
                v24,
                v24->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v34 >= 1 )
        {
          do
          {
            v35 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._15_ReadInt32.method)(
                    v24,
                    v24->klass->vtable._16_ReadUInt32.methodPtr);
            v36 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._15_ReadInt32.method)(
                    v24,
                    v24->klass->vtable._16_ReadUInt32.methodPtr);
            v40 = sub_1BCAA2C(MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo, v37, v38, v39);
            System_Object___ctor((Il2CppObject *)v40, 0LL);
            if ( !v40 )
              sub_1BCAA3C(v41, v42);
            *(_DWORD *)(v40 + 16) = v35;
            *(_DWORD *)(v40 + 20) = v36;
            v49 = MaterialServantLimitCountManager_TypeInfo;
            if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v42);
              v49 = MaterialServantLimitCountManager_TypeInfo;
            }
            limitCountList = (System_Collections_Generic_List_object__o *)v49->static_fields->limitCountList;
            if ( !limitCountList )
              sub_1BCAA3C(0LL, v42);
            items = limitCountList->fields._items;
            v52 = Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__;
            ++limitCountList->fields._version;
            if ( !items )
              sub_1BCAA3C(limitCountList, v42);
            size = limitCountList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                limitCountList,
                (Il2CppObject *)v40,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
            }
            else
            {
              v54 = &items->obj.klass + size;
              limitCountList->fields._size = size + 1;
              v54[4] = (Il2CppClass *)v40;
              sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 4), v40, v43, v44, v45, v46, v47, v48);
            }
            --v34;
          }
          while ( v34 );
        }
        v30 = 8;
      }
      klass = v24->klass;
      v56 = *(unsigned __int16 *)(&v24->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v24->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v56;
          p_offset += 4;
          if ( !v56 )
            goto LABEL_36;
        }
        v58 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_36:
        v58 = sub_1C1C7C0(v24, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v58)(v24, *(_QWORD *)(v58 + 8));
      if ( (v30 | 8) == 8 )
        return 1;
    }
    else
    {
      v59 = MaterialServantLimitCountManager_TypeInfo;
      if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v18);
      MaterialServantLimitCountManager__ClearSaveDataList((const MethodInfo *)v59);
    }
    return 0;
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialServantLimitCountManager__SetLimitCount(
        int32_t servantId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *limitCountList; // x0
  __int64 v15; // x8
  int v16; // w8
  int v17; // w23
  int32_t i; // w21
  int64_t v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  MaterialServantLimitCountManager_c *v26; // x0
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  __int64 v30; // x8
  MaterialServantLimitCountManager_c *v31; // x0

  if ( (byte_4B1733F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__,
      *(_QWORD *)&limitCount,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__,
      v8,
      v9);
    sub_1BCA7E0(&MaterialServantLimitCountManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo, v12, v13);
    byte_4B1733F = 1;
  }
  limitCountList = (System_Collections_Generic_List_object__o *)MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, *(_QWORD *)&limitCount);
    limitCountList = (System_Collections_Generic_List_object__o *)MaterialServantLimitCountManager_TypeInfo;
  }
  v15 = *(_QWORD *)(*(_QWORD *)&limitCountList[4].fields._size + 16LL);
  if ( !v15 )
    goto LABEL_29;
  v16 = *(_DWORD *)(v15 + 24);
  v17 = v16 - 1;
  if ( v16 < 1 )
  {
LABEL_15:
    v19 = sub_1BCAA2C(
            MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo,
            *(_QWORD *)&limitCount,
            method,
            v3);
    System_Object___ctor((Il2CppObject *)v19, 0LL);
    if ( v19 )
    {
      *(_DWORD *)(v19 + 16) = servantId;
      *(_DWORD *)(v19 + 20) = limitCount;
      v26 = MaterialServantLimitCountManager_TypeInfo;
      if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, *(_QWORD *)&limitCount);
        v26 = MaterialServantLimitCountManager_TypeInfo;
      }
      limitCountList = (System_Collections_Generic_List_object__o *)v26->static_fields->limitCountList;
      if ( limitCountList )
      {
        items = limitCountList->fields._items;
        v28 = Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__;
        ++limitCountList->fields._version;
        if ( items )
        {
          size = limitCountList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              limitCountList,
              (Il2CppObject *)v19,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = (__int64)items + 8 * size;
            limitCountList->fields._size = size + 1;
            *(_QWORD *)(v30 + 32) = v19;
            sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 32), v19, v20, v21, v22, v23, v24, v25);
          }
          goto LABEL_23;
        }
      }
    }
LABEL_29:
    sub_1BCAA3C(limitCountList, *(_QWORD *)&limitCount);
  }
  for ( i = 0; ; ++i )
  {
    if ( !limitCountList[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(limitCountList, *(_QWORD *)&limitCount);
      limitCountList = (System_Collections_Generic_List_object__o *)MaterialServantLimitCountManager_TypeInfo;
    }
    limitCountList = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)&limitCountList[4].fields._size + 16LL);
    if ( !limitCountList )
      goto LABEL_29;
    limitCountList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    limitCountList,
                                                                    i,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__);
    if ( !limitCountList )
      goto LABEL_29;
    if ( LODWORD(limitCountList->fields._items) == servantId )
      break;
    if ( v17 == i )
      goto LABEL_15;
    limitCountList = (System_Collections_Generic_List_object__o *)MaterialServantLimitCountManager_TypeInfo;
  }
  if ( HIDWORD(limitCountList->fields._items) != limitCount )
  {
    HIDWORD(limitCountList->fields._items) = limitCount;
    v31 = MaterialServantLimitCountManager_TypeInfo;
    if ( MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      goto LABEL_24;
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, *(_QWORD *)&limitCount);
LABEL_23:
    v31 = MaterialServantLimitCountManager_TypeInfo;
LABEL_24:
    v31->static_fields->isModfiy = 1;
  }
}


bool __fastcall MaterialServantLimitCountManager__WriteData(const MethodInfo *method)
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
  MaterialServantLimitCountManager_c *v13; // x0
  struct MaterialServantLimitCountManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v15; // x0
  MaterialServantLimitCountManager_c *v17; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_IO_BinaryWriter_o *v23; // x19
  __int64 v24; // x1
  MaterialServantLimitCountManager_c *v25; // x0
  struct MaterialServantLimitCountManager_StaticFields *v26; // x8
  struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x9
  int size; // w20
  __int64 v29; // x1
  int32_t i; // w21
  MaterialServantLimitCountManager_c *v31; // x0
  System_Collections_Generic_List_object__o *v32; // x0
  Il2CppObject *Item; // x0
  __int64 v34; // x1
  Il2CppObject *v35; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 v39; // x0

  if ( (byte_4B17342 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryWriter_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__,
      v7,
      v8);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v9, v10);
    sub_1BCA7E0(&MaterialServantLimitCountManager_TypeInfo, v11, v12);
    byte_4B17342 = 1;
  }
  v13 = MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v1);
    v13 = MaterialServantLimitCountManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13, v1);
    static_fields = MaterialServantLimitCountManager_TypeInfo->static_fields;
  }
  static_fields->isModfiy = 0;
  v15 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v15 = ManagerConfig_TypeInfo;
  }
  if ( v15->static_fields->UseMock )
    return 0;
  v17 = MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v1);
  SaveFileName = MaterialServantLimitCountManager__GetSaveFileName((const MethodInfo *)v17);
  v19 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v23 = (System_IO_BinaryWriter_o *)sub_1BCAA2C(System_IO_BinaryWriter_TypeInfo, v20, v21, v22);
  System_IO_BinaryWriter___ctor_62639712(v23, v19, 0LL);
  v25 = MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v24);
    v25 = MaterialServantLimitCountManager_TypeInfo;
  }
  v26 = v25->static_fields;
  limitCountList = v26->limitCountList;
  if ( !limitCountList )
    sub_1BCAA3C(v25, v24);
  if ( !v23 )
    sub_1BCAA3C(v25, v24);
  size = limitCountList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v23->klass->vtable._22_Write.method)(
    v23,
    v26->SAVE_DATA_VERSION,
    v23->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v23->klass->vtable._8_Write.method)(
    v23,
    MaterialServantLimitCountManager_TypeInfo->static_fields->isContinueDevice,
    v23->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._17_Write.method)(
    v23,
    (unsigned int)size,
    v23->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v31 = MaterialServantLimitCountManager_TypeInfo;
      if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo, v29);
        v31 = MaterialServantLimitCountManager_TypeInfo;
      }
      v32 = (System_Collections_Generic_List_object__o *)v31->static_fields->limitCountList;
      if ( !v32 )
        sub_1BCAA3C(0LL, v29);
      Item = System_Collections_Generic_List_object___get_Item(
               v32,
               i,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__);
      v35 = Item;
      if ( !Item )
        sub_1BCAA3C(0LL, v34);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._17_Write.method)(
        v23,
        LODWORD(Item[1].klass),
        v23->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._17_Write.method)(
        v23,
        HIDWORD(v35[1].klass),
        v23->klass->vtable._18_Write.methodPtr);
    }
  }
  klass = v23->klass;
  v37 = *(unsigned __int16 *)(&v23->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v23->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      p_offset += 4;
      if ( !v37 )
        goto LABEL_29;
    }
    v39 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_29:
    v39 = sub_1C1C7C0(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v39)(v23, *(_QWORD *)(v39 + 8));
  return 1;
}


void __fastcall MaterialServantLimitCountManager_ServantLimitCountInfo___ctor(
        MaterialServantLimitCountManager_ServantLimitCountInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}