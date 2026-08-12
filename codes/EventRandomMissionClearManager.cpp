void EventRandomMissionClearManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  System_Collections_Generic_List_ClearRandomMissionInfo__c *v8; // x0
  struct EventRandomMissionClearManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *v10; // x19
  struct EventRandomMissionClearManager_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5970380 & 1) == 0 )
  {
    sub_2213A60(&EventRandomMissionClearManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ClearRandomMissionInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ClearRandomMissionInfo__TypeInfo);
    sub_2213A60(&StringLiteral_6966/*"Fgo_20211029"*/);
    byte_5970380 = 1;
  }
  v7 = StringLiteral_6966/*"Fgo_20211029"*/;
  EventRandomMissionClearManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6966/*"Fgo_20211029"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventRandomMissionClearManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = System_Collections_Generic_List_ClearRandomMissionInfo__TypeInfo;
  static_fields = EventRandomMissionClearManager_TypeInfo->static_fields;
  static_fields->LIST_MAX = 100;
  *(_WORD *)&static_fields->isModify = 0;
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v8);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ClearRandomMissionInfo___ctor__);
  v11 = EventRandomMissionClearManager_TypeInfo->static_fields;
  v11->clearRandomMissionList = (struct System_Collections_Generic_List_ClearRandomMissionInfo__o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v11->clearRandomMissionList,
    (int32_t)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void EventRandomMissionClearManager___ctor(EventRandomMissionClearManager_o *this, const MethodInfo *method)
{
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0);
}


void EventRandomMissionClearManager__AddClearRandomMissionInfo(
        ClearRandomMissionInfo_o *info,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  EventRandomMissionClearManager_c *v9; // x0
  EventRandomMissionClearManager_c *clearRandomMissionList; // x0
  const char *name; // x8
  _QWORD *v12; // x9
  __int64 namespaze_low; // x10
  const char *v14; // x8
  struct EventRandomMissionClearManager_StaticFields *static_fields; // x9
  System_Collections_Generic_List_object__o *v16; // x8

  if ( (byte_597037C & 1) == 0 )
  {
    sub_2213A60(&EventRandomMissionClearManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__);
    byte_597037C = 1;
  }
  v9 = EventRandomMissionClearManager_TypeInfo;
  if ( !*(&EventRandomMissionClearManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, method);
    v9 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = (EventRandomMissionClearManager_c *)v9->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    goto LABEL_18;
  name = clearRandomMissionList->_1.name;
  v12 = Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__;
  ++HIDWORD(clearRandomMissionList->_1.namespaze);
  if ( !name )
    goto LABEL_18;
  namespaze_low = SLODWORD(clearRandomMissionList->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)clearRandomMissionList,
      (Il2CppObject *)info,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &name[8 * namespaze_low];
    LODWORD(clearRandomMissionList->_1.namespaze) = namespaze_low + 1;
    *((_QWORD *)v14 + 4) = info;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v14 + 32), (int32_t)info, v2, v3, v4, v5, v6, v7);
  }
  clearRandomMissionList = EventRandomMissionClearManager_TypeInfo;
  static_fields = EventRandomMissionClearManager_TypeInfo->static_fields;
  v16 = (System_Collections_Generic_List_object__o *)static_fields->clearRandomMissionList;
  if ( !v16 )
    goto LABEL_18;
  if ( v16->fields._size <= static_fields->LIST_MAX )
    goto LABEL_15;
  if ( !*(&EventRandomMissionClearManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, method);
    v16 = (System_Collections_Generic_List_object__o *)EventRandomMissionClearManager_TypeInfo->static_fields->clearRandomMissionList;
    if ( !v16 )
LABEL_18:
      sub_2213CDC(clearRandomMissionList, method);
  }
  System_Collections_Generic_List_object___RemoveAt(
    v16,
    0,
    (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__RemoveAt__);
  clearRandomMissionList = EventRandomMissionClearManager_TypeInfo;
LABEL_15:
  if ( !*(&clearRandomMissionList->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(clearRandomMissionList, method);
    clearRandomMissionList = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList->static_fields->isModify = 1;
}


void EventRandomMissionClearManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  EventRandomMissionClearManager_c *v2; // x0
  struct System_Collections_Generic_List_ClearRandomMissionInfo__o *clearRandomMissionList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_597037B & 1) == 0 )
  {
    sub_2213A60(&EventRandomMissionClearManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__);
    byte_597037B = 1;
  }
  v2 = EventRandomMissionClearManager_TypeInfo;
  if ( !*(&EventRandomMissionClearManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v1);
    v2 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = v2->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    goto LABEL_14;
  if ( clearRandomMissionList->fields._size < 1 )
    goto LABEL_11;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = EventRandomMissionClearManager_TypeInfo;
    clearRandomMissionList = EventRandomMissionClearManager_TypeInfo->static_fields->clearRandomMissionList;
    if ( !clearRandomMissionList )
LABEL_14:
      sub_2213CDC(v2, v1);
  }
  size = clearRandomMissionList->fields._size;
  v5 = clearRandomMissionList->fields._version + 1;
  clearRandomMissionList->fields._size = 0;
  clearRandomMissionList->fields._version = v5;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)clearRandomMissionList->fields._items, 0, size, 0);
    v2 = EventRandomMissionClearManager_TypeInfo;
  }
LABEL_11:
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = EventRandomMissionClearManager_TypeInfo;
  }
  *(_WORD *)&v2->static_fields->isModify = 1;
}


void EventRandomMissionClearManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  EventRandomMissionClearManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_5970379 & 1) == 0 )
  {
    sub_2213A60(&EventRandomMissionClearManager_TypeInfo);
    byte_5970379 = 1;
  }
  v2 = EventRandomMissionClearManager_TypeInfo;
  if ( !*(&EventRandomMissionClearManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v1);
  SaveFileName = EventRandomMissionClearManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
}


ClearRandomMissionInfo_array *EventRandomMissionClearManager__GetClearRandomMissionInfos(const MethodInfo *method)
{
  __int64 v1; // x1
  EventRandomMissionClearManager_c *v2; // x0
  System_Collections_Generic_List_object__o *clearRandomMissionList; // x0

  if ( (byte_597037D & 1) == 0 )
  {
    sub_2213A60(&EventRandomMissionClearManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__ToArray__);
    byte_597037D = 1;
  }
  v2 = EventRandomMissionClearManager_TypeInfo;
  if ( !*(&EventRandomMissionClearManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v1);
    v2 = EventRandomMissionClearManager_TypeInfo;
  }
  clearRandomMissionList = (System_Collections_Generic_List_object__o *)v2->static_fields->clearRandomMissionList;
  if ( !clearRandomMissionList )
    sub_2213CDC(0, v1);
  return (ClearRandomMissionInfo_array *)System_Collections_Generic_List_object___ToArray(
                                           clearRandomMissionList,
                                           (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__ToArray__);
}


System_String_o *EventRandomMissionClearManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_5970378 & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&DatFileName_TypeInfo);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_5970378 = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(36, 0);
  return System_String__Concat_75694928(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


void EventRandomMissionClearManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  EventRandomMissionClearManager_c *v2; // x0

  if ( (byte_597037A & 1) == 0 )
  {
    sub_2213A60(&EventRandomMissionClearManager_TypeInfo);
    byte_597037A = 1;
  }
  v2 = EventRandomMissionClearManager_TypeInfo;
  if ( !*(&EventRandomMissionClearManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v1);
  EventRandomMissionClearManager__ReadData((const MethodInfo *)v2);
}


bool EventRandomMissionClearManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  EventRandomMissionClearManager_c *v2; // x0
  ManagerConfig_c *v3; // x8
  int v4; // w10
  _BOOL8 v5; // x0
  EventRandomMissionClearManager_c *v6; // x0
  System_String_o *SaveFileName; // x19
  __int64 v8; // x1
  EventRandomMissionClearManager_c *v9; // x0
  System_IO_BinaryReader_o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  System_String_o *v14; // x19
  EventRandomMissionClearManager_c *v15; // x0
  int v16; // w21
  __int64 v17; // x1
  char v18; // w19
  EventRandomMissionClearManager_c *v19; // x0
  __int64 v20; // x1
  int v21; // w19
  int v22; // w21
  __int64 v23; // x22
  __int64 v24; // x20
  __int64 v25; // x0
  __int64 v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  EventRandomMissionClearManager_c *v40; // x0
  System_Collections_Generic_List_object__o *clearRandomMissionList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v47; // x9
  int *p_offset; // x10
  __int64 v49; // x0
  System_IO_Stream_c *v50; // x8
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0
  EventRandomMissionClearManager_c *v54; // x0
  System_IO_BinaryReader_o *v56; // [xsp+30h] [xbp-50h]
  System_IO_Stream_o *v57; // [xsp+38h] [xbp-48h]

  if ( (byte_597037E & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryReader_TypeInfo);
    sub_2213A60(&ClearRandomMissionInfo_TypeInfo);
    sub_2213A60(&EventRandomMissionClearManager_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__);
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_597037E = 1;
  }
  v2 = EventRandomMissionClearManager_TypeInfo;
  if ( !*(&EventRandomMissionClearManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v1);
    v2 = EventRandomMissionClearManager_TypeInfo;
  }
  v3 = ManagerConfig_TypeInfo;
  v4 = *(&ManagerConfig_TypeInfo->_2.cctor_finished + 1);
  v2->static_fields->isModify = 0;
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
    v6 = EventRandomMissionClearManager_TypeInfo;
    if ( !*(&EventRandomMissionClearManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v1);
    SaveFileName = EventRandomMissionClearManager__GetSaveFileName((const MethodInfo *)v6);
    if ( System_IO_File__Exists(SaveFileName, 0) )
    {
      v9 = EventRandomMissionClearManager_TypeInfo;
      if ( !*(&EventRandomMissionClearManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v8);
      EventRandomMissionClearManager__ClearSaveDataList((const MethodInfo *)v9);
      v57 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
      v10 = (System_IO_BinaryReader_o *)sub_2213CCC(System_IO_BinaryReader_TypeInfo);
      System_IO_BinaryReader___ctor(v10, v57, 0);
      v56 = v10;
      if ( !v10 )
        sub_2213CDC(v11, v12);
      v14 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v10->klass->vtable._22_ReadString.methodPtr)(
                                 v10,
                                 v10->klass->vtable._22_ReadString.method);
      v15 = EventRandomMissionClearManager_TypeInfo;
      if ( !*(&EventRandomMissionClearManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v13);
        v15 = EventRandomMissionClearManager_TypeInfo;
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
        v19 = EventRandomMissionClearManager_TypeInfo;
        if ( !*(&EventRandomMissionClearManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v17);
          v19 = EventRandomMissionClearManager_TypeInfo;
        }
        v19->static_fields->isContinueDevice = v18 & 1;
        v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v10->klass->vtable._15_ReadInt32.methodPtr)(
                v10,
                v10->klass->vtable._15_ReadInt32.method);
        if ( v21 >= 1 )
        {
          do
          {
            if ( !v56 )
              sub_2213CDC(0, v20);
            v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v56->klass->vtable._15_ReadInt32.methodPtr)(
                    v56,
                    v56->klass->vtable._15_ReadInt32.method);
            v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v56->klass->vtable._22_ReadString.methodPtr)(
                    v56,
                    v56->klass->vtable._22_ReadString.method);
            v24 = sub_2213CCC(ClearRandomMissionInfo_TypeInfo);
            ClearRandomMissionInfo___ctor((ClearRandomMissionInfo_o *)v24, 0);
            if ( !v24 )
              sub_2213CDC(v25, v26);
            *(_QWORD *)(v24 + 24) = v23;
            *(_DWORD *)(v24 + 16) = v22;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 24), v23, v27, v28, v29, v30, v31, v32);
            v40 = EventRandomMissionClearManager_TypeInfo;
            if ( !*(&EventRandomMissionClearManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v33);
              v40 = EventRandomMissionClearManager_TypeInfo;
            }
            clearRandomMissionList = (System_Collections_Generic_List_object__o *)v40->static_fields->clearRandomMissionList;
            if ( !clearRandomMissionList
              || (items = clearRandomMissionList->fields._items,
                  v43 = Method_System_Collections_Generic_List_ClearRandomMissionInfo__Add__,
                  ++clearRandomMissionList->fields._version,
                  !items) )
            {
              sub_2213CDC(clearRandomMissionList, v33);
            }
            size = clearRandomMissionList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                clearRandomMissionList,
                (Il2CppObject *)v24,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
            }
            else
            {
              v45 = &items->obj.klass + size;
              clearRandomMissionList->fields._size = size + 1;
              v45[4] = (Il2CppClass *)v24;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v45 + 4), v24, v34, v35, v36, v37, v38, v39);
            }
            --v21;
          }
          while ( v21 );
        }
        if ( !v56 )
          sub_2213CDC(0, v20);
        ((void (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v56->klass->vtable._6_Close.methodPtr)(
          v56,
          v56->klass->vtable._6_Close.method);
        v16 = 8;
      }
      if ( v56 )
      {
        klass = v56->klass;
        v47 = *(unsigned __int16 *)&v56->klass->_2.rank;
        if ( *(_WORD *)&v56->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
          {
            --v47;
            p_offset += 4;
            if ( !v47 )
              goto LABEL_39;
          }
          v49 = (__int64)&klass->vtable + 16 * *p_offset;
        }
        else
        {
LABEL_39:
          v49 = sub_224BC3C(v56, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v49)(v56, *(_QWORD *)(v49 + 8));
      }
      if ( (v16 | 8) == 8 )
        v16 = 9;
      if ( v57 )
      {
        v50 = v57->klass;
        v51 = *(unsigned __int16 *)&v57->klass->_2.rank;
        if ( *(_WORD *)&v57->klass->_2.rank )
        {
          v52 = &v50->_1.interfaceOffsets->offset;
          while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
          {
            --v51;
            v52 += 4;
            if ( !v51 )
              goto LABEL_49;
          }
          v53 = (__int64)&v50->vtable + 16 * *v52;
        }
        else
        {
LABEL_49:
          v53 = sub_224BC3C(v57, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v53)(v57, *(_QWORD *)(v53 + 8));
      }
      return v16 == 9;
    }
    else
    {
      v54 = EventRandomMissionClearManager_TypeInfo;
      if ( !*(&EventRandomMissionClearManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v8);
      EventRandomMissionClearManager__ClearSaveDataList((const MethodInfo *)v54);
      LOBYTE(v5) = 0;
    }
  }
  return v5;
}


bool EventRandomMissionClearManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  EventRandomMissionClearManager_c *v2; // x0
  struct EventRandomMissionClearManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v4; // x0
  EventRandomMissionClearManager_c *v6; // x0
  System_String_o *SaveFileName; // x0
  System_IO_BinaryWriter_o *v8; // x20
  __int64 v9; // x1
  EventRandomMissionClearManager_c *v10; // x0
  struct EventRandomMissionClearManager_StaticFields *v11; // x8
  struct System_Collections_Generic_List_ClearRandomMissionInfo__o *clearRandomMissionList; // x9
  int size; // w19
  __int64 v14; // x1
  int32_t i; // w20
  EventRandomMissionClearManager_c *v16; // x0
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

  if ( (byte_597037F & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryWriter_TypeInfo);
    sub_2213A60(&EventRandomMissionClearManager_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Item__);
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_597037F = 1;
  }
  v2 = EventRandomMissionClearManager_TypeInfo;
  if ( !*(&EventRandomMissionClearManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v1);
    v2 = EventRandomMissionClearManager_TypeInfo;
  }
  static_fields = v2->static_fields;
  if ( !static_fields->isModify )
    return 0;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    static_fields = EventRandomMissionClearManager_TypeInfo->static_fields;
  }
  v4 = ManagerConfig_TypeInfo;
  static_fields->isModify = 0;
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, v1);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( v4->static_fields->UseMock )
    return 0;
  v6 = EventRandomMissionClearManager_TypeInfo;
  if ( !*(&EventRandomMissionClearManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v1);
  SaveFileName = EventRandomMissionClearManager__GetSaveFileName((const MethodInfo *)v6);
  v29 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
  v8 = (System_IO_BinaryWriter_o *)sub_2213CCC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_76953012(v8, v29, 0);
  v10 = EventRandomMissionClearManager_TypeInfo;
  v28 = v8;
  if ( !*(&EventRandomMissionClearManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v9);
    v10 = EventRandomMissionClearManager_TypeInfo;
  }
  v11 = v10->static_fields;
  clearRandomMissionList = v11->clearRandomMissionList;
  if ( !clearRandomMissionList )
    sub_2213CDC(v10, v9);
  if ( !v8 )
    sub_2213CDC(0, v9);
  size = clearRandomMissionList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *))v8->klass->vtable._22_Write.methodPtr)(
    v8,
    v11->SAVE_DATA_VERSION);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool))v8->klass->vtable._8_Write.methodPtr)(
    v8,
    EventRandomMissionClearManager_TypeInfo->static_fields->isContinueDevice);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD))v8->klass->vtable._17_Write.methodPtr)(
    v8,
    (unsigned int)size);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v16 = EventRandomMissionClearManager_TypeInfo;
      if ( !*(&EventRandomMissionClearManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, v14);
        v16 = EventRandomMissionClearManager_TypeInfo;
      }
      v17 = (System_Collections_Generic_List_object__o *)v16->static_fields->clearRandomMissionList;
      if ( !v17 )
        sub_2213CDC(0, v14);
      Item = System_Collections_Generic_List_object___get_Item(
               v17,
               i,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ClearRandomMissionInfo__get_Item__);
      if ( !Item )
        sub_2213CDC(0, v18);
      if ( !v28 )
        sub_2213CDC(0, v18);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD))v28->klass->vtable._17_Write.methodPtr)(
        v28,
        LODWORD(Item[1].klass));
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, void *))v28->klass->vtable._22_Write.methodPtr)(
        v28,
        Item[1].monitor);
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