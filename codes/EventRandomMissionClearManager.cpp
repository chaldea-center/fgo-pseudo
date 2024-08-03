void __fastcall EventRandomMissionClearManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct EventRandomMissionClearManager_StaticFields *static_fields; // x8
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *v10; // x19
  struct EventRandomMissionClearManager_StaticFields *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FBFF4 & 1) == 0 )
  {
    sub_1B640C8(&EventRandomMissionClearManager_TypeInfo, v1);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClearRandomMissionInfo___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_ClearRandomMissionInfo__TypeInfo, v5);
    sub_1B640C8(&StringLiteral_6621/*"Fgo_20211029"*/, v6);
    byte_49FBFF4 = 1;
  }
  EventRandomMissionClearManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6621/*"Fgo_20211029"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventRandomMissionClearManager_TypeInfo->static_fields,
    StringLiteral_6621/*"Fgo_20211029"*/,
    v2,
    v3);
  static_fields = EventRandomMissionClearManager_TypeInfo->static_fields;
  static_fields->LIST_MAX = 100;
  *(_WORD *)&static_fields->isModify = 0;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ClearRandomMissionInfo__TypeInfo,
                                                       v8,
                                                       v9);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo___ctor__);
  v11 = EventRandomMissionClearManager_TypeInfo->static_fields;
  v11->clearRandomMissionList = (struct System_Collections_Generic_List_ClearRandomMissionInfo__o *)v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11->clearRandomMissionList, (int32_t)v10, v12, v13);
}


void __fastcall EventRandomMissionClearManager___ctor(EventRandomMissionClearManager_o *this, const MethodInfo *method)
{
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0LL);
}


void __fastcall EventRandomMissionClearManager__AddClearRandomMissionInfo(
        ClearRandomMissionInfo_o *info,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventRandomMissionClearManager_c *v8; // x0
  EventRandomMissionClearManager_c *clearRandomMissionList; // x0
  const char *name; // x8
  _QWORD *v11; // x9
  __int64 namespaze_low; // x10
  const char *v13; // x8
  struct EventRandomMissionClearManager_StaticFields *static_fields; // x9
  System_Collections_Generic_List_object__o *v15; // x8

  if ( (byte_49FBFF0 & 1) == 0 )
  {
    sub_1B640C8(&EventRandomMissionClearManager_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__RemoveAt__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__, v7);
    byte_49FBFF0 = 1;
  }
  v8 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v8 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = (EventRandomMissionClearManager_c *)v8->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    goto LABEL_18;
  name = clearRandomMissionList->_1.name;
  v11 = Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__;
  ++HIDWORD(clearRandomMissionList->_1.namespaze);
  if ( !name )
    goto LABEL_18;
  namespaze_low = SLODWORD(clearRandomMissionList->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)clearRandomMissionList,
      (Il2CppObject *)info,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &name[8 * namespaze_low];
    LODWORD(clearRandomMissionList->_1.namespaze) = namespaze_low + 1;
    *((_QWORD *)v13 + 4) = info;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)info, v2, v3);
  }
  clearRandomMissionList = EventRandomMissionClearManager_TypeInfo;
  static_fields = EventRandomMissionClearManager_TypeInfo->static_fields;
  v15 = (System_Collections_Generic_List_object__o *)static_fields->clearRandomMissionList;
  if ( !v15 )
    goto LABEL_18;
  if ( v15->fields._size <= static_fields->LIST_MAX )
    goto LABEL_15;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v15 = (System_Collections_Generic_List_object__o *)EventRandomMissionClearManager_TypeInfo->static_fields->clearRandomMissionList;
    if ( !v15 )
LABEL_18:
      sub_1B64324(clearRandomMissionList);
  }
  System_Collections_Generic_List_object___RemoveAt(
    v15,
    0,
    (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__RemoveAt__);
  clearRandomMissionList = EventRandomMissionClearManager_TypeInfo;
LABEL_15:
  if ( !clearRandomMissionList->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(clearRandomMissionList);
    clearRandomMissionList = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList->static_fields->isModify = 1;
}


void __fastcall EventRandomMissionClearManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  EventRandomMissionClearManager_c *v4; // x0
  struct System_Collections_Generic_List_ClearRandomMissionInfo__o *clearRandomMissionList; // x8
  int32_t size; // w2
  int v7; // w9

  if ( (byte_49FBFEF & 1) == 0 )
  {
    sub_1B640C8(&EventRandomMissionClearManager_TypeInfo, v1);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Clear__, v2);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__, v3);
    byte_49FBFEF = 1;
  }
  v4 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v4 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = v4->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    goto LABEL_14;
  if ( clearRandomMissionList->fields._size < 1 )
    goto LABEL_11;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = EventRandomMissionClearManager_TypeInfo;
    clearRandomMissionList = EventRandomMissionClearManager_TypeInfo->static_fields->clearRandomMissionList;
    if ( !clearRandomMissionList )
LABEL_14:
      sub_1B64324(v4);
  }
  size = clearRandomMissionList->fields._size;
  v7 = clearRandomMissionList->fields._version + 1;
  clearRandomMissionList->fields._size = 0;
  clearRandomMissionList->fields._version = v7;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)clearRandomMissionList->fields._items, 0, size, 0LL);
    v4 = EventRandomMissionClearManager_TypeInfo;
  }
LABEL_11:
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = EventRandomMissionClearManager_TypeInfo;
  }
  *(_WORD *)&v4->static_fields->isModify = 1;
}


void __fastcall EventRandomMissionClearManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  EventRandomMissionClearManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_49FBFED & 1) == 0 )
  {
    sub_1B640C8(&EventRandomMissionClearManager_TypeInfo, v1);
    byte_49FBFED = 1;
  }
  v2 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  SaveFileName = EventRandomMissionClearManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


ClearRandomMissionInfo_array *__fastcall EventRandomMissionClearManager__GetClearRandomMissionInfos(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  EventRandomMissionClearManager_c *v3; // x0
  System_Collections_Generic_List_object__o *clearRandomMissionList; // x0

  if ( (byte_49FBFF1 & 1) == 0 )
  {
    sub_1B640C8(&EventRandomMissionClearManager_TypeInfo, v1);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__ToArray__, v2);
    byte_49FBFF1 = 1;
  }
  v3 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v3 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = (System_Collections_Generic_List_object__o *)v3->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    sub_1B64324(0LL);
  return (ClearRandomMissionInfo_array *)System_Collections_Generic_List_object___ToArray(
                                           clearRandomMissionList,
                                           (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__ToArray__);
}


System_String_o *__fastcall EventRandomMissionClearManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_49FBFEC & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, v1);
    sub_1B640C8(&DatFileName_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FBFEC = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(36, 0LL);
  return System_String__Concat_61386656(DatFileSavePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


void __fastcall EventRandomMissionClearManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  EventRandomMissionClearManager_c *v2; // x0

  if ( (byte_49FBFEE & 1) == 0 )
  {
    sub_1B640C8(&EventRandomMissionClearManager_TypeInfo, v1);
    byte_49FBFEE = 1;
  }
  v2 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  EventRandomMissionClearManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall EventRandomMissionClearManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  EventRandomMissionClearManager_c *v7; // x0
  ManagerConfig_c *v8; // x0
  EventRandomMissionClearManager_c *v10; // x0
  System_String_o *SaveFileName; // x19
  EventRandomMissionClearManager_c *v12; // x0
  System_IO_Stream_o *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_IO_BinaryReader_o *v16; // x20
  __int64 v17; // x0
  System_String_o *v18; // x21
  EventRandomMissionClearManager_c *v19; // x0
  int v20; // w22
  char v21; // w21
  EventRandomMissionClearManager_c *v22; // x0
  int v23; // w21
  int v24; // w23
  __int64 v25; // x24
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x22
  __int64 v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  EventRandomMissionClearManager_c *v34; // x0
  System_Collections_Generic_List_object__o *clearRandomMissionList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v41; // x9
  int32_t *p_offset; // x10
  __int64 v43; // x0
  System_IO_Stream_c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  EventRandomMissionClearManager_c *v48; // x0

  if ( (byte_49FBFF2 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1B640C8(&ClearRandomMissionInfo_TypeInfo, v2);
    sub_1B640C8(&EventRandomMissionClearManager_TypeInfo, v3);
    sub_1B640C8(&System_IDisposable_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__, v5);
    sub_1B640C8(&ManagerConfig_TypeInfo, v6);
    byte_49FBFF2 = 1;
  }
  v7 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v7 = EventRandomMissionClearManager_TypeInfo;
  }
  v7->static_fields->isModify = 0;
  v8 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
  }
  if ( v8->static_fields->UseMock )
    return 1;
  v10 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  SaveFileName = EventRandomMissionClearManager__GetSaveFileName((const MethodInfo *)v10);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v48 = EventRandomMissionClearManager_TypeInfo;
    if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    EventRandomMissionClearManager__ClearSaveDataList((const MethodInfo *)v48);
    return 0;
  }
  v12 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  EventRandomMissionClearManager__ClearSaveDataList((const MethodInfo *)v12);
  v13 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v16 = (System_IO_BinaryReader_o *)sub_1B64314(System_IO_BinaryReader_TypeInfo, v14, v15);
  System_IO_BinaryReader___ctor(v16, v13, 0LL);
  if ( !v16 )
    sub_1B64324(v17);
  v18 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._22_ReadString.method)(
                             v16,
                             v16->klass->vtable._23_ReadChars.methodPtr);
  v19 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v19 = EventRandomMissionClearManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v19->static_fields->SAVE_DATA_VERSION, v18, 0LL) )
  {
    v20 = 5;
  }
  else
  {
    v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._9_ReadBoolean.method)(
            v16,
            v16->klass->vtable._10_ReadByte.methodPtr);
    v22 = EventRandomMissionClearManager_TypeInfo;
    if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      v22 = EventRandomMissionClearManager_TypeInfo;
    }
    v22->static_fields->isContinueDevice = v21 & 1;
    v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
            v16,
            v16->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v23 >= 1 )
    {
      do
      {
        v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
                v16,
                v16->klass->vtable._16_ReadUInt32.methodPtr);
        v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._22_ReadString.method)(
                v16,
                v16->klass->vtable._23_ReadChars.methodPtr);
        v28 = sub_1B64314(ClearRandomMissionInfo_TypeInfo, v26, v27);
        ClearRandomMissionInfo___ctor((ClearRandomMissionInfo_o *)v28, 0LL);
        if ( !v28 )
          sub_1B64324(v29);
        *(_QWORD *)(v28 + 24) = v25;
        *(_DWORD *)(v28 + 16) = v24;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 24), v25, v30, v31);
        v34 = EventRandomMissionClearManager_TypeInfo;
        if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
          v34 = EventRandomMissionClearManager_TypeInfo;
        }
        clearRandomMissionList = (System_Collections_Generic_List_object__o *)v34->static_fields->clearRandomMissionList;
        if ( !clearRandomMissionList )
          sub_1B64324(0LL);
        items = clearRandomMissionList->fields._items;
        v37 = Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__;
        ++clearRandomMissionList->fields._version;
        if ( !items )
          sub_1B64324(clearRandomMissionList);
        size = clearRandomMissionList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            clearRandomMissionList,
            (Il2CppObject *)v28,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          clearRandomMissionList->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v28;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v39 + 4), v28, v32, v33);
        }
        --v23;
      }
      while ( v23 );
    }
    ((void (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._6_Close.method)(
      v16,
      v16->klass->vtable._7_Dispose.methodPtr);
    v20 = 8;
  }
  klass = v16->klass;
  v41 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
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
    v43 = sub_1BB60A8(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v43)(v16, *(_QWORD *)(v43 + 8));
  if ( (v20 | 8) == 8 )
  {
    v20 = 9;
    if ( !v13 )
      return v20 == 9;
  }
  else if ( !v13 )
  {
    return v20 == 9;
  }
  v44 = v13->klass;
  v45 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_46;
    }
    v47 = (__int64)(&v44->vtable._0_Equals.method + 2 * *v46);
  }
  else
  {
LABEL_46:
    v47 = sub_1BB60A8(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v47)(v13, *(_QWORD *)(v47 + 8));
  return v20 == 9;
}


bool __fastcall EventRandomMissionClearManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  EventRandomMissionClearManager_c *v7; // x0
  struct EventRandomMissionClearManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v9; // x0
  EventRandomMissionClearManager_c *v11; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_IO_BinaryWriter_o *v16; // x20
  EventRandomMissionClearManager_c *v17; // x0
  struct EventRandomMissionClearManager_StaticFields *v18; // x8
  struct System_Collections_Generic_List_ClearRandomMissionInfo__o *clearRandomMissionList; // x9
  int size; // w21
  int32_t i; // w22
  EventRandomMissionClearManager_c *v22; // x0
  System_Collections_Generic_List_object__o *v23; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v25; // x23
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0
  System_IO_Stream_c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_49FBFF3 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1B640C8(&EventRandomMissionClearManager_TypeInfo, v2);
    sub_1B640C8(&System_IDisposable_TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Item__, v5);
    sub_1B640C8(&ManagerConfig_TypeInfo, v6);
    byte_49FBFF3 = 1;
  }
  v7 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v7 = EventRandomMissionClearManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( !static_fields->isModify )
    return 0;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    static_fields = EventRandomMissionClearManager_TypeInfo->static_fields;
  }
  static_fields->isModify = 0;
  v9 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = ManagerConfig_TypeInfo;
  }
  if ( v9->static_fields->UseMock )
    return 0;
  v11 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  SaveFileName = EventRandomMissionClearManager__GetSaveFileName((const MethodInfo *)v11);
  v13 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v16 = (System_IO_BinaryWriter_o *)sub_1B64314(System_IO_BinaryWriter_TypeInfo, v14, v15);
  System_IO_BinaryWriter___ctor_61613552(v16, v13, 0LL);
  v17 = EventRandomMissionClearManager_TypeInfo;
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
    v17 = EventRandomMissionClearManager_TypeInfo;
  }
  v18 = v17->static_fields;
  clearRandomMissionList = v18->clearRandomMissionList;
  if ( !clearRandomMissionList )
    sub_1B64324(v17);
  if ( !v16 )
    sub_1B64324(v17);
  size = clearRandomMissionList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v16->klass->vtable._22_Write.method)(
    v16,
    v18->SAVE_DATA_VERSION,
    v16->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v16->klass->vtable._8_Write.method)(
    v16,
    EventRandomMissionClearManager_TypeInfo->static_fields->isContinueDevice,
    v16->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
    v16,
    (unsigned int)size,
    v16->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v22 = EventRandomMissionClearManager_TypeInfo;
      if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
        v22 = EventRandomMissionClearManager_TypeInfo;
      }
      v23 = (System_Collections_Generic_List_object__o *)v22->static_fields->clearRandomMissionList;
      if ( !v23 )
        sub_1B64324(0LL);
      Item = System_Collections_Generic_List_object___get_Item(
               v23,
               i,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Item__);
      v25 = Item;
      if ( !Item )
        sub_1B64324(0LL);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        LODWORD(Item[1].klass),
        v16->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *, void *))v16->klass->vtable._22_Write.method)(
        v16,
        v25[1].monitor,
        v16->klass[1]._1.image);
    }
  }
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, Il2CppMethodPointer))v16->klass->vtable._5_Close.method)(
    v16,
    v16->klass->vtable._6_Dispose.methodPtr);
  klass = v16->klass;
  v27 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_29;
    }
    v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_29:
    v29 = sub_1BB60A8(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v29)(v16, *(_QWORD *)(v29 + 8));
  if ( v13 )
  {
    v30 = v13->klass;
    v31 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_36;
      }
      v33 = (__int64)(&v30->vtable._0_Equals.method + 2 * *v32);
    }
    else
    {
LABEL_36:
      v33 = sub_1BB60A8(v13, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v33)(v13, *(_QWORD *)(v33 + 8));
  }
  return 1;
}