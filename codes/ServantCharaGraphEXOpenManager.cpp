void __fastcall ServantCharaGraphEXOpenManager___cctor(const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_int__object__o *v11; // x19
  struct ServantCharaGraphEXOpenManager_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4C231E8 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v1);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v8);
    sub_1C3B764(&ServantCharaGraphEXOpenManager_TypeInfo, v9);
    sub_1C3B764(&StringLiteral_6808/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/, v10);
    byte_4C231E8 = 1;
  }
  ServantCharaGraphEXOpenManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6808/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)ServantCharaGraphEXOpenManager_TypeInfo->static_fields,
    StringLiteral_6808/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v11,
    (const MethodInfo_32F41C8 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  static_fields = ServantCharaGraphEXOpenManager_TypeInfo->static_fields;
  static_fields->svtCharaGraphEXOpenDict = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v11;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->svtCharaGraphEXOpenDict,
    (int64_t)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall ServantCharaGraphEXOpenManager___ctor(ServantCharaGraphEXOpenManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantCharaGraphEXOpenManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  ServantCharaGraphEXOpenManager_c *v3; // x0
  System_Collections_Generic_Dictionary_int__object__o *svtCharaGraphEXOpenDict; // x0

  if ( (byte_4C231E3 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__, v1);
    sub_1C3B764(&ServantCharaGraphEXOpenManager_TypeInfo, v2);
    byte_4C231E3 = 1;
  }
  v3 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v3 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__object__o *)v3->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    sub_1C3B9C0(0LL, v1);
  System_Collections_Generic_Dictionary_int__object___Clear(
    svtCharaGraphEXOpenDict,
    (const MethodInfo_32F4D24 *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
}


void __fastcall ServantCharaGraphEXOpenManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCharaGraphEXOpenManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4C231E1 & 1) == 0 )
  {
    sub_1C3B764(&ServantCharaGraphEXOpenManager_TypeInfo, v1);
    byte_4C231E1 = 1;
  }
  v2 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


System_String_o *__fastcall ServantCharaGraphEXOpenManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C231E0 & 1) == 0 )
  {
    sub_1C3B764(&AndroidUtil_TypeInfo, v1);
    sub_1C3B764(&DatFileName_TypeInfo, v2);
    sub_1C3B764(&StringLiteral_1102/*"/[delegate]"*/, v3);
    byte_4C231E0 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(32, 0LL);
  return System_String__Concat_63379872(DatFileSavePath, (System_String_o *)StringLiteral_1102/*"/[delegate]"*/, FileName, 0LL);
}


void __fastcall ServantCharaGraphEXOpenManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  ServantCharaGraphEXOpenManager_c *v2; // x0

  if ( (byte_4C231E2 & 1) == 0 )
  {
    sub_1C3B764(&ServantCharaGraphEXOpenManager_TypeInfo, v1);
    byte_4C231E2 = 1;
  }
  v2 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCharaGraphEXOpenManager__IsCharaGraphEXOpen(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantCharaGraphEXOpenManager_c *v8; // x0
  Il2CppObject *svtCharaGraphEXOpenDict; // x0
  ServantCharaGraphEXOpenManager_c *v10; // x0
  ServantCharaGraphEXOpenManager_c *v11; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C231E6 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, *(_QWORD *)&limitCount);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Contains__, v6);
    sub_1C3B764(&ServantCharaGraphEXOpenManager_TypeInfo, v7);
    byte_4C231E6 = 1;
  }
  v8 = ServantCharaGraphEXOpenManager_TypeInfo;
  value = 0LL;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v8 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (Il2CppObject *)v8->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          (System_Collections_Generic_Dictionary_int__object__o *)svtCharaGraphEXOpenDict,
          (const MethodInfo_32F484C *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__) )
  {
    v10 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v10);
  }
  v11 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v11 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (Il2CppObject *)v11->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)svtCharaGraphEXOpenDict,
          svtId,
          &value,
          (const MethodInfo_32F6328 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
    return 0;
  svtCharaGraphEXOpenDict = value;
  if ( !value )
LABEL_18:
    sub_1C3B9C0(svtCharaGraphEXOpenDict, *(_QWORD *)&limitCount);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)value,
           limitCount,
           (const MethodInfo_366EFC0 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall ServantCharaGraphEXOpenManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ManagerConfig_c *v9; // x0
  bool v10; // w21
  ServantCharaGraphEXOpenManager_c *v11; // x0
  System_String_o *SaveFileName; // x19
  ServantCharaGraphEXOpenManager_c *v13; // x0
  System_IO_Stream_o *v14; // x20
  System_IO_BinaryReader_o *v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_o *v18; // x20
  ServantCharaGraphEXOpenManager_c *v19; // x0
  int v20; // w20
  int i; // w25
  int32_t v22; // w21
  int v23; // w23
  System_Collections_Generic_List_int__o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  ServantCharaGraphEXOpenManager_c *v30; // x0
  System_Collections_Generic_Dictionary_int__object__o *svtCharaGraphEXOpenDict; // x0
  System_IO_BinaryReader_c *klass; // x8
  __int64 v33; // x9
  int32_t *p_offset; // x10
  __int64 v35; // x0
  ServantCharaGraphEXOpenManager_c *v36; // x0

  if ( (byte_4C231E4 & 1) == 0 )
  {
    sub_1C3B764(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v2);
    sub_1C3B764(&System_IDisposable_TypeInfo, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_1C3B764(&ManagerConfig_TypeInfo, v7);
    sub_1C3B764(&ServantCharaGraphEXOpenManager_TypeInfo, v8);
    byte_4C231E4 = 1;
  }
  v9 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = ManagerConfig_TypeInfo;
  }
  if ( v9->static_fields->UseMock )
    return 1;
  v11 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
  SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v11);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v13 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    ServantCharaGraphEXOpenManager__ClearSaveDataList((const MethodInfo *)v13);
    v14 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v15 = (System_IO_BinaryReader_o *)sub_1C3B9B0(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v15, v14, 0LL);
    if ( !v15 )
      sub_1C3B9C0(v16, v17);
    v18 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._22_ReadString.method)(
                               v15,
                               v15->klass->vtable._23_ReadChars.methodPtr);
    v19 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
      v19 = ServantCharaGraphEXOpenManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v19->static_fields->SAVE_DATA_VERSION, v18, 0LL) )
    {
      v10 = 0;
    }
    else
    {
      v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._15_ReadInt32.method)(
              v15,
              v15->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v20 >= 1 )
      {
        for ( i = 0; i != v20; ++i )
        {
          v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._15_ReadInt32.method)(
                  v15,
                  v15->klass->vtable._16_ReadUInt32.methodPtr);
          v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._15_ReadInt32.method)(
                  v15,
                  v15->klass->vtable._16_ReadUInt32.methodPtr);
          v24 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v24,
            (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( v23 >= 1 )
          {
            do
            {
              v26 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._15_ReadInt32.method)(
                      v15,
                      v15->klass->vtable._16_ReadUInt32.methodPtr);
              v25 = (unsigned int)v26;
              if ( !v24 )
                sub_1C3B9C0(v26, (unsigned int)v26);
              items = v24->fields._items;
              v28 = Method_System_Collections_Generic_List_int__Add__;
              ++v24->fields._version;
              if ( !items )
                sub_1C3B9C0(v26, (unsigned int)v26);
              size = v24->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v24,
                  v26,
                  *(const MethodInfo_366EC48 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
              }
              else
              {
                v24->fields._size = size + 1;
                items->m_Items[size + 1] = v26;
              }
              --v23;
            }
            while ( v23 );
          }
          v30 = ServantCharaGraphEXOpenManager_TypeInfo;
          if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
            v30 = ServantCharaGraphEXOpenManager_TypeInfo;
          }
          svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__object__o *)v30->static_fields->svtCharaGraphEXOpenDict;
          if ( !svtCharaGraphEXOpenDict )
            sub_1C3B9C0(0LL, v25);
          System_Collections_Generic_Dictionary_int__object___Add(
            svtCharaGraphEXOpenDict,
            v22,
            (Il2CppObject *)v24,
            (const MethodInfo_32F4B9C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
        }
      }
      v10 = 1;
    }
    klass = v15->klass;
    v33 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v33;
        p_offset += 4;
        if ( !v33 )
          goto LABEL_35;
      }
      v35 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_35:
      v35 = sub_1C8D744(v15, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v35)(v15, *(_QWORD *)(v35 + 8));
  }
  else
  {
    v36 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    ServantCharaGraphEXOpenManager__ClearSaveDataList((const MethodInfo *)v36);
    return 0;
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCharaGraphEXOpenManager__SetCharaGraphEXOpen(
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ServantCharaGraphEXOpenManager_c *v12; // x0
  Il2CppObject *svtCharaGraphEXOpenDict; // x0
  ServantCharaGraphEXOpenManager_c *v14; // x0
  ServantCharaGraphEXOpenManager_c *v15; // x0
  Il2CppClass *klass; // x8
  _QWORD *v17; // x9
  __int64 monitor_low; // x10
  System_Collections_Generic_List_int__o *v19; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  ServantCharaGraphEXOpenManager_c *v23; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C231E7 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, *(_QWORD *)&limitCount);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Contains__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1C3B764(&ServantCharaGraphEXOpenManager_TypeInfo, v11);
    byte_4C231E7 = 1;
  }
  v12 = ServantCharaGraphEXOpenManager_TypeInfo;
  value = 0LL;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v12 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (Il2CppObject *)v12->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_31;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          (System_Collections_Generic_Dictionary_int__object__o *)svtCharaGraphEXOpenDict,
          (const MethodInfo_32F484C *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__) )
  {
    v14 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    ServantCharaGraphEXOpenManager__ReadData((const MethodInfo *)v14);
  }
  v15 = ServantCharaGraphEXOpenManager_TypeInfo;
  if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    v15 = ServantCharaGraphEXOpenManager_TypeInfo;
  }
  svtCharaGraphEXOpenDict = (Il2CppObject *)v15->static_fields->svtCharaGraphEXOpenDict;
  if ( !svtCharaGraphEXOpenDict )
    goto LABEL_31;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)svtCharaGraphEXOpenDict,
          svtId,
          &value,
          (const MethodInfo_32F6328 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v19 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v19,
      (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( v19 )
    {
      items = v19->fields._items;
      v21 = Method_System_Collections_Generic_List_int__Add__;
      ++v19->fields._version;
      if ( items )
      {
        size = v19->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v19,
            limitCount,
            *(const MethodInfo_366EC48 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v19->fields._size = size + 1;
          items->m_Items[size + 1] = limitCount;
        }
        v23 = ServantCharaGraphEXOpenManager_TypeInfo;
        if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
          v23 = ServantCharaGraphEXOpenManager_TypeInfo;
        }
        svtCharaGraphEXOpenDict = (Il2CppObject *)v23->static_fields->svtCharaGraphEXOpenDict;
        if ( svtCharaGraphEXOpenDict )
        {
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)svtCharaGraphEXOpenDict,
            svtId,
            (Il2CppObject *)v19,
            (const MethodInfo_32F4B9C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
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
         (const MethodInfo_366EFC0 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return;
  }
  svtCharaGraphEXOpenDict = value;
  if ( !value
    || (klass = value[1].klass,
        v17 = Method_System_Collections_Generic_List_int__Add__,
        ++HIDWORD(value[1].monitor),
        !klass) )
  {
LABEL_31:
    sub_1C3B9C0(svtCharaGraphEXOpenDict, *(_QWORD *)&limitCount);
  }
  monitor_low = SLODWORD(svtCharaGraphEXOpenDict[1].monitor);
  if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)svtCharaGraphEXOpenDict,
      limitCount,
      *(const MethodInfo_366EC48 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(svtCharaGraphEXOpenDict[1].monitor) = monitor_low + 1;
    *((_DWORD *)&klass->_1.byval_arg.data + monitor_low) = limitCount;
  }
}


bool __fastcall ServantCharaGraphEXOpenManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  ManagerConfig_c *v14; // x0
  ServantCharaGraphEXOpenManager_c *v15; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v17; // x20
  System_IO_BinaryWriter_o *v18; // x19
  __int64 v19; // x1
  ServantCharaGraphEXOpenManager_c *v20; // x0
  System_Collections_Generic_Dictionary_int__object__o *svtCharaGraphEXOpenDict; // x0
  __int64 Count; // x0
  __int64 v23; // x1
  unsigned int v24; // w20
  __int64 v25; // x1
  struct System_Collections_Generic_Dictionary_int__List_int___o *v26; // x0
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppObject *value; // x20
  int monitor; // w21
  int32_t i; // w22
  unsigned int Item; // w0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 v36; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v39; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4C231E5 & 1) == 0 )
  {
    sub_1C3B764(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__, v2);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__, v6);
    sub_1C3B764(&System_IDisposable_TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Count__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Item__, v11);
    sub_1C3B764(&ManagerConfig_TypeInfo, v12);
    sub_1C3B764(&ServantCharaGraphEXOpenManager_TypeInfo, v13);
    byte_4C231E5 = 1;
  }
  v14 = ManagerConfig_TypeInfo;
  memset(&v39, 0, sizeof(v39));
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v14 = ManagerConfig_TypeInfo;
  }
  if ( !v14->static_fields->UseMock )
  {
    v15 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
    SaveFileName = ServantCharaGraphEXOpenManager__GetSaveFileName((const MethodInfo *)v15);
    v17 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v18 = (System_IO_BinaryWriter_o *)sub_1C3B9B0(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_63607104(v18, v17, 0LL);
    v20 = ServantCharaGraphEXOpenManager_TypeInfo;
    if ( !ServantCharaGraphEXOpenManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCharaGraphEXOpenManager_TypeInfo);
      v20 = ServantCharaGraphEXOpenManager_TypeInfo;
    }
    svtCharaGraphEXOpenDict = (System_Collections_Generic_Dictionary_int__object__o *)v20->static_fields->svtCharaGraphEXOpenDict;
    if ( !svtCharaGraphEXOpenDict )
      sub_1C3B9C0(0LL, v19);
    Count = System_Collections_Generic_Dictionary_int__object___get_Count(
              svtCharaGraphEXOpenDict,
              (const MethodInfo_32F484C *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Count__);
    if ( !v18 )
      sub_1C3B9C0(Count, v23);
    v24 = Count;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v18->klass->vtable._22_Write.method)(
      v18,
      ServantCharaGraphEXOpenManager_TypeInfo->static_fields->SAVE_DATA_VERSION,
      v18->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
      v18,
      v24,
      v18->klass->vtable._18_Write.methodPtr);
    v26 = ServantCharaGraphEXOpenManager_TypeInfo->static_fields->svtCharaGraphEXOpenDict;
    if ( !v26 )
      sub_1C3B9C0(0LL, v25);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v38,
      (System_Collections_Generic_Dictionary_int__object__o *)v26,
      (const MethodInfo_32F4FD4 *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    v39 = v38;
    while ( 1 )
    {
      v27 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v39,
              (const MethodInfo_3443968 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
      if ( !v27 )
        break;
      value = v39.fields._current.fields.value;
      if ( !v39.fields._current.fields.value )
        sub_1C3B9C0(v27, v28);
      monitor = (int)v39.fields._current.fields.value[1].monitor;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
        v18,
        LODWORD(v39.fields._current.fields.key),
        v18->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
        v18,
        (unsigned int)monitor,
        v18->klass->vtable._18_Write.methodPtr);
      if ( monitor >= 1 )
      {
        for ( i = 0; i != monitor; ++i )
        {
          Item = System_Collections_Generic_List_int___get_Item(
                   (System_Collections_Generic_List_int__o *)value,
                   i,
                   (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
            v18,
            Item,
            v18->klass->vtable._18_Write.methodPtr);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v39,
      (const MethodInfo_3443A8C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    klass = v18->klass;
    v34 = *(unsigned __int16 *)(&v18->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v18->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v34;
        p_offset += 4;
        if ( !v34 )
          goto LABEL_24;
      }
      v36 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_24:
      v36 = sub_1C8D744(v18, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v36)(v18, *(_QWORD *)(v36 + 8));
  }
  return 1;
}