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
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  struct MaterialServantLimitCountManager_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BB587F & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo___ctor__,
      v1);
    sub_1C13D24(&System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__TypeInfo, v8);
    sub_1C13D24(&MaterialServantLimitCountManager_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_6797/*"Fgo_20160323_1"*/, v10);
    byte_4BB587F = 1;
  }
  MaterialServantLimitCountManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6797/*"Fgo_20160323_1"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)MaterialServantLimitCountManager_TypeInfo->static_fields,
    StringLiteral_6797/*"Fgo_20160323_1"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  *(_WORD *)&MaterialServantLimitCountManager_TypeInfo->static_fields->isModfiy = 0;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo___ctor__);
  static_fields = MaterialServantLimitCountManager_TypeInfo->static_fields;
  static_fields->limitCountList = (struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *)v11;
  sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->limitCountList, (int64_t)v11, v13, v14, v15, v16, v17, v18);
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
  __int64 v2; // x1
  __int64 v3; // x1
  MaterialServantLimitCountManager_c *v4; // x0
  struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x8
  int32_t size; // w2
  int v7; // w9

  if ( (byte_4BB587A & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Clear__,
      v1);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__,
      v2);
    sub_1C13D24(&MaterialServantLimitCountManager_TypeInfo, v3);
    byte_4BB587A = 1;
  }
  v4 = MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    v4 = MaterialServantLimitCountManager_TypeInfo;
  }
  limitCountList = v4->static_fields->limitCountList;
  if ( !limitCountList )
    goto LABEL_14;
  if ( limitCountList->fields._size < 1 )
    goto LABEL_11;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = MaterialServantLimitCountManager_TypeInfo;
    limitCountList = MaterialServantLimitCountManager_TypeInfo->static_fields->limitCountList;
    if ( !limitCountList )
LABEL_14:
      sub_1C13F80(v4, v1);
  }
  size = limitCountList->fields._size;
  v7 = limitCountList->fields._version + 1;
  limitCountList->fields._size = 0;
  limitCountList->fields._version = v7;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)limitCountList->fields._items, 0, size, 0LL);
    v4 = MaterialServantLimitCountManager_TypeInfo;
  }
LABEL_11:
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = MaterialServantLimitCountManager_TypeInfo;
  }
  *(_WORD *)&v4->static_fields->isModfiy = 1;
}


void __fastcall MaterialServantLimitCountManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialServantLimitCountManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4BB5878 & 1) == 0 )
  {
    sub_1C13D24(&MaterialServantLimitCountManager_TypeInfo, v1);
    byte_4BB5878 = 1;
  }
  v2 = MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  SaveFileName = MaterialServantLimitCountManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


int32_t __fastcall MaterialServantLimitCountManager__GetLimitCount(int32_t servantId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *Item; // x0
  __int64 v6; // x8
  int v7; // w8
  int v8; // w22
  int32_t i; // w20

  if ( (byte_4BB587C & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__,
      method);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__,
      v3);
    sub_1C13D24(&MaterialServantLimitCountManager_TypeInfo, v4);
    byte_4BB587C = 1;
  }
  Item = MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    Item = MaterialServantLimitCountManager_TypeInfo;
  }
  v6 = *(_QWORD *)(*((_QWORD *)Item + 23) + 16LL);
  if ( !v6 )
LABEL_17:
    sub_1C13F80(Item, method);
  v7 = *(_DWORD *)(v6 + 24);
  v8 = v7 - 1;
  if ( v7 < 1 )
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
             (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__);
    if ( !Item )
      goto LABEL_17;
    if ( *((_DWORD *)Item + 4) == servantId )
      break;
    if ( v8 == i )
      return 0;
    Item = MaterialServantLimitCountManager_TypeInfo;
  }
  return *((_DWORD *)Item + 5);
}


System_String_o *__fastcall MaterialServantLimitCountManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4BB5877 & 1) == 0 )
  {
    sub_1C13D24(&AndroidUtil_TypeInfo, v1);
    sub_1C13D24(&DatFileName_TypeInfo, v2);
    sub_1C13D24(&StringLiteral_1123/*"/"*/, v3);
    byte_4BB5877 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(26, 0LL);
  return System_String__Concat_62979204(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


void __fastcall MaterialServantLimitCountManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialServantLimitCountManager_c *v2; // x0

  if ( (byte_4BB5879 & 1) == 0 )
  {
    sub_1C13D24(&MaterialServantLimitCountManager_TypeInfo, v1);
    byte_4BB5879 = 1;
  }
  v2 = MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  MaterialServantLimitCountManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall MaterialServantLimitCountManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  MaterialServantLimitCountManager_c *v7; // x0
  ManagerConfig_c *v8; // x0
  MaterialServantLimitCountManager_c *v10; // x0
  System_String_o *SaveFileName; // x19
  MaterialServantLimitCountManager_c *v12; // x0
  System_IO_Stream_o *v13; // x20
  System_IO_BinaryReader_o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x20
  MaterialServantLimitCountManager_c *v18; // x0
  int v19; // w21
  char v20; // w20
  MaterialServantLimitCountManager_c *v21; // x0
  int v22; // w20
  int v23; // w22
  int v24; // w23
  int64_t v25; // x21
  __int64 v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  MaterialServantLimitCountManager_c *v34; // x0
  System_Collections_Generic_List_object__o *limitCountList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v41; // x9
  int32_t *p_offset; // x10
  __int64 v43; // x0
  MaterialServantLimitCountManager_c *v44; // x0

  if ( (byte_4BB587D & 1) == 0 )
  {
    sub_1C13D24(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1C13D24(&System_IDisposable_TypeInfo, v2);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__,
      v3);
    sub_1C13D24(&ManagerConfig_TypeInfo, v4);
    sub_1C13D24(&MaterialServantLimitCountManager_TypeInfo, v5);
    sub_1C13D24(&MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo, v6);
    byte_4BB587D = 1;
  }
  v7 = MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    v7 = MaterialServantLimitCountManager_TypeInfo;
  }
  v7->static_fields->isModfiy = 0;
  v8 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
  }
  if ( !v8->static_fields->UseMock )
  {
    v10 = MaterialServantLimitCountManager_TypeInfo;
    if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    SaveFileName = MaterialServantLimitCountManager__GetSaveFileName((const MethodInfo *)v10);
    if ( System_IO_File__Exists(SaveFileName, 0LL) )
    {
      v12 = MaterialServantLimitCountManager_TypeInfo;
      if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
      MaterialServantLimitCountManager__ClearSaveDataList((const MethodInfo *)v12);
      v13 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
      v14 = (System_IO_BinaryReader_o *)sub_1C13F70(System_IO_BinaryReader_TypeInfo);
      System_IO_BinaryReader___ctor(v14, v13, 0LL);
      if ( !v14 )
        sub_1C13F80(v15, v16);
      v17 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._22_ReadString.method)(
                                 v14,
                                 v14->klass->vtable._23_ReadChars.methodPtr);
      v18 = MaterialServantLimitCountManager_TypeInfo;
      if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
        v18 = MaterialServantLimitCountManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v18->static_fields->SAVE_DATA_VERSION, v17, 0LL) )
      {
        v19 = 5;
      }
      else
      {
        v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._9_ReadBoolean.method)(
                v14,
                v14->klass->vtable._10_ReadByte.methodPtr);
        v21 = MaterialServantLimitCountManager_TypeInfo;
        if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
          v21 = MaterialServantLimitCountManager_TypeInfo;
        }
        v21->static_fields->isContinueDevice = v20 & 1;
        v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                v14,
                v14->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v22 >= 1 )
        {
          do
          {
            v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                    v14,
                    v14->klass->vtable._16_ReadUInt32.methodPtr);
            v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                    v14,
                    v14->klass->vtable._16_ReadUInt32.methodPtr);
            v25 = sub_1C13F70(MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo);
            System_Object___ctor((Il2CppObject *)v25, 0LL);
            if ( !v25 )
              sub_1C13F80(v26, v27);
            *(_DWORD *)(v25 + 16) = v23;
            *(_DWORD *)(v25 + 20) = v24;
            v34 = MaterialServantLimitCountManager_TypeInfo;
            if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
              v34 = MaterialServantLimitCountManager_TypeInfo;
            }
            limitCountList = (System_Collections_Generic_List_object__o *)v34->static_fields->limitCountList;
            if ( !limitCountList )
              sub_1C13F80(0LL, v27);
            items = limitCountList->fields._items;
            v37 = Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__;
            ++limitCountList->fields._version;
            if ( !items )
              sub_1C13F80(limitCountList, v27);
            size = limitCountList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                limitCountList,
                (Il2CppObject *)v25,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
            }
            else
            {
              v39 = &items->obj.klass + size;
              limitCountList->fields._size = size + 1;
              v39[4] = (Il2CppClass *)v25;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v39 + 4), v25, v28, v29, v30, v31, v32, v33);
            }
            --v22;
          }
          while ( v22 );
        }
        v19 = 8;
      }
      klass = v14->klass;
      v41 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v41;
          p_offset += 4;
          if ( !v41 )
            goto LABEL_36;
        }
        v43 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_36:
        v43 = sub_1C65D04(v14, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v43)(v14, *(_QWORD *)(v43 + 8));
      if ( (v19 | 8) == 8 )
        return 1;
    }
    else
    {
      v44 = MaterialServantLimitCountManager_TypeInfo;
      if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
      MaterialServantLimitCountManager__ClearSaveDataList((const MethodInfo *)v44);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *limitCountList; // x0
  __int64 v10; // x8
  int v11; // w8
  int v12; // w23
  int32_t i; // w21
  int64_t v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  MaterialServantLimitCountManager_c *v21; // x0
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  __int64 v25; // x8
  MaterialServantLimitCountManager_c *v26; // x0

  if ( (byte_4BB587B & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__,
      *(_QWORD *)&limitCount);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__,
      v5);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__,
      v6);
    sub_1C13D24(&MaterialServantLimitCountManager_TypeInfo, v7);
    sub_1C13D24(&MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo, v8);
    byte_4BB587B = 1;
  }
  limitCountList = (System_Collections_Generic_List_object__o *)MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    limitCountList = (System_Collections_Generic_List_object__o *)MaterialServantLimitCountManager_TypeInfo;
  }
  v10 = *(_QWORD *)(*(_QWORD *)&limitCountList[4].fields._size + 16LL);
  if ( !v10 )
    goto LABEL_29;
  v11 = *(_DWORD *)(v10 + 24);
  v12 = v11 - 1;
  if ( v11 < 1 )
  {
LABEL_15:
    v14 = sub_1C13F70(MaterialServantLimitCountManager_ServantLimitCountInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0LL);
    if ( v14 )
    {
      *(_DWORD *)(v14 + 16) = servantId;
      *(_DWORD *)(v14 + 20) = limitCount;
      v21 = MaterialServantLimitCountManager_TypeInfo;
      if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
        v21 = MaterialServantLimitCountManager_TypeInfo;
      }
      limitCountList = (System_Collections_Generic_List_object__o *)v21->static_fields->limitCountList;
      if ( limitCountList )
      {
        items = limitCountList->fields._items;
        v23 = Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__Add__;
        ++limitCountList->fields._version;
        if ( items )
        {
          size = limitCountList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              limitCountList,
              (Il2CppObject *)v14,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = (__int64)items + 8 * size;
            limitCountList->fields._size = size + 1;
            *(_QWORD *)(v25 + 32) = v14;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v25 + 32), v14, v15, v16, v17, v18, v19, v20);
          }
          goto LABEL_23;
        }
      }
    }
LABEL_29:
    sub_1C13F80(limitCountList, *(_QWORD *)&limitCount);
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
                                                                    (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__);
    if ( !limitCountList )
      goto LABEL_29;
    if ( LODWORD(limitCountList->fields._items) == servantId )
      break;
    if ( v12 == i )
      goto LABEL_15;
    limitCountList = (System_Collections_Generic_List_object__o *)MaterialServantLimitCountManager_TypeInfo;
  }
  if ( HIDWORD(limitCountList->fields._items) != limitCount )
  {
    HIDWORD(limitCountList->fields._items) = limitCount;
    v26 = MaterialServantLimitCountManager_TypeInfo;
    if ( MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      goto LABEL_24;
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
LABEL_23:
    v26 = MaterialServantLimitCountManager_TypeInfo;
LABEL_24:
    v26->static_fields->isModfiy = 1;
  }
}


bool __fastcall MaterialServantLimitCountManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  MaterialServantLimitCountManager_c *v7; // x0
  struct MaterialServantLimitCountManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v9; // x0
  MaterialServantLimitCountManager_c *v11; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v13; // x20
  System_IO_BinaryWriter_o *v14; // x19
  __int64 v15; // x1
  MaterialServantLimitCountManager_c *v16; // x0
  struct MaterialServantLimitCountManager_StaticFields *v17; // x8
  struct System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__o *limitCountList; // x9
  int size; // w20
  __int64 v20; // x1
  int32_t i; // w21
  MaterialServantLimitCountManager_c *v22; // x0
  System_Collections_Generic_List_object__o *v23; // x0
  Il2CppObject *Item; // x0
  __int64 v25; // x1
  Il2CppObject *v26; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0

  if ( (byte_4BB587E & 1) == 0 )
  {
    sub_1C13D24(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1C13D24(&System_IDisposable_TypeInfo, v2);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Count__,
      v3);
    sub_1C13D24(
      &Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__,
      v4);
    sub_1C13D24(&ManagerConfig_TypeInfo, v5);
    sub_1C13D24(&MaterialServantLimitCountManager_TypeInfo, v6);
    byte_4BB587E = 1;
  }
  v7 = MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    v7 = MaterialServantLimitCountManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    static_fields = MaterialServantLimitCountManager_TypeInfo->static_fields;
  }
  static_fields->isModfiy = 0;
  v9 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = ManagerConfig_TypeInfo;
  }
  if ( v9->static_fields->UseMock )
    return 0;
  v11 = MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  SaveFileName = MaterialServantLimitCountManager__GetSaveFileName((const MethodInfo *)v11);
  v13 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v14 = (System_IO_BinaryWriter_o *)sub_1C13F70(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_63206436(v14, v13, 0LL);
  v16 = MaterialServantLimitCountManager_TypeInfo;
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    v16 = MaterialServantLimitCountManager_TypeInfo;
  }
  v17 = v16->static_fields;
  limitCountList = v17->limitCountList;
  if ( !limitCountList )
    sub_1C13F80(v16, v15);
  if ( !v14 )
    sub_1C13F80(v16, v15);
  size = limitCountList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v14->klass->vtable._22_Write.method)(
    v14,
    v17->SAVE_DATA_VERSION,
    v14->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v14->klass->vtable._8_Write.method)(
    v14,
    MaterialServantLimitCountManager_TypeInfo->static_fields->isContinueDevice,
    v14->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
    v14,
    (unsigned int)size,
    v14->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v22 = MaterialServantLimitCountManager_TypeInfo;
      if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
        v22 = MaterialServantLimitCountManager_TypeInfo;
      }
      v23 = (System_Collections_Generic_List_object__o *)v22->static_fields->limitCountList;
      if ( !v23 )
        sub_1C13F80(0LL, v20);
      Item = System_Collections_Generic_List_object___get_Item(
               v23,
               i,
               (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_MaterialServantLimitCountManager_ServantLimitCountInfo__get_Item__);
      v26 = Item;
      if ( !Item )
        sub_1C13F80(0LL, v25);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
        v14,
        LODWORD(Item[1].klass),
        v14->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v14->klass->vtable._17_Write.method)(
        v14,
        HIDWORD(v26[1].klass),
        v14->klass->vtable._18_Write.methodPtr);
    }
  }
  klass = v14->klass;
  v28 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      p_offset += 4;
      if ( !v28 )
        goto LABEL_29;
    }
    v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_29:
    v30 = sub_1C65D04(v14, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v30)(v14, *(_QWORD *)(v30 + 8));
  return 1;
}


void __fastcall MaterialServantLimitCountManager_ServantLimitCountInfo___ctor(
        MaterialServantLimitCountManager_ServantLimitCountInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}