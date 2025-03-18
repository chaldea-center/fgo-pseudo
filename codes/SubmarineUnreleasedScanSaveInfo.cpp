void __fastcall SubmarineUnreleasedScanSaveInfo___ctor(
        SubmarineUnreleasedScanSaveInfo_o *this,
        int32_t eventId,
        System_Int32_array *scanIds,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v6 = (PartyOrganizationUtility_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields._normalFollowerInfo = (struct FollowerInfo_o *)scanIds;
  v6 = (PartyOrganizationUtility_o *)((char *)v6 + 24);
  *(_DWORD *)&v6[-1].fields._IsQuestStartMenuMode_k__BackingField = eventId;
  sub_1C3B708(v6, (int64_t)scanIds, v7, v8, v9, v10, v11, v12);
}


SubmarineUnreleasedScanSaveInfo_o *__fastcall SubmarineUnreleasedScanSaveInfo__CreateBySaveValue(
        System_String_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 IsNullOrEmpty; // x0
  __int64 v8; // x1
  __int64 v9; // x20
  System_String_array *v10; // x20
  System_Collections_Generic_List_int__o *v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  int v14; // w21
  __int64 v15; // x8
  __int64 v16; // x24
  __int64 v17; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  unsigned __int64 v21; // x9
  System_Int32_array *v22; // x19
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4C1EAA7 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1C3B764(&SubmarineUnreleasedScanSaveInfo_TypeInfo, v6);
    byte_4C1EAA7 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0LL);
  v9 = 0LL;
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( value )
    {
      v10 = System_String__Split(value, 0x2Cu, 0, 0LL);
      v11 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v11,
        (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v10 )
        sub_1C3B9C0(v12, v13);
      if ( !v10->max_length )
        sub_1C3B9C8(v12, v13);
      IsNullOrEmpty = System_Int32__Parse(v10->m_Items[0], 0LL);
      v14 = IsNullOrEmpty;
      if ( (int)*(_QWORD *)&v10->max_length >= 2 )
      {
        v15 = (unsigned int)*(_QWORD *)&v10->max_length;
        if ( (v15 & 0xFFFFFFFE) == 0 )
LABEL_17:
          sub_1C3B9C8(IsNullOrEmpty, v8);
        v16 = 0LL;
        v17 = v15 - 2;
        while ( 1 )
        {
          IsNullOrEmpty = System_Int32__Parse(v10->m_Items[v16 + 1], 0LL);
          v8 = (unsigned int)IsNullOrEmpty;
          if ( !v11 )
            sub_1C3B9C0(IsNullOrEmpty, (unsigned int)IsNullOrEmpty);
          items = v11->fields._items;
          v19 = Method_System_Collections_Generic_List_int__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1C3B9C0(IsNullOrEmpty, (unsigned int)IsNullOrEmpty);
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v11,
              IsNullOrEmpty,
              *(const MethodInfo_366EC48 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v11->fields._size = size + 1;
            items->m_Items[size + 1] = IsNullOrEmpty;
          }
          if ( v17 == v16 )
            goto LABEL_19;
          v21 = v16 + 2;
          ++v16;
          if ( v21 >= v10->max_length )
            goto LABEL_17;
        }
      }
      if ( v11 )
      {
LABEL_19:
        v22 = System_Collections_Generic_List_int___ToArray(
                v11,
                (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
        v9 = sub_1C3B9B0(SubmarineUnreleasedScanSaveInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v9, 0LL);
        *(_DWORD *)(v9 + 16) = v14;
        *(_QWORD *)(v9 + 24) = v22;
        sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)v22, v23, v24, v25, v26, v27, v28);
        return (SubmarineUnreleasedScanSaveInfo_o *)v9;
      }
    }
    sub_1C3B9C0(IsNullOrEmpty, v8);
  }
  return (SubmarineUnreleasedScanSaveInfo_o *)v9;
}


System_String_o *__fastcall SubmarineUnreleasedScanSaveInfo__GetSaveValue(
        SubmarineUnreleasedScanSaveInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_T__o *ScanIds_k__BackingField; // x21
  System_Collections_Generic_List_int__o *v13; // x20
  SubmarineUnreleasedScanSaveInfo___c_c *v14; // x0
  System_Func_T__TResult__o *_9__9_0; // x21
  Il2CppObject *v16; // x22
  struct SubmarineUnreleasedScanSaveInfo___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Collections_Generic_List_object__o *v25; // x20
  Il2CppObject *v26; // x0
  __int64 v27; // x1
  System_String_array *v28; // x0
  int32_t EventId_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C1EAA6 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_Select_int__string___, method);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_string___, v3);
    sub_1C3B764(&System_Func_int__string__TypeInfo, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Insert__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__ToArray__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor___77852768, v7);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1C3B764(&Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__, v9);
    sub_1C3B764(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo, v10);
    sub_1C3B764(&StringLiteral_845/*", line {0}, position {1}"*/, v11);
    byte_4C1EAA6 = 1;
  }
  ScanIds_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)this->fields._ScanIds_k__BackingField;
  v13 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_57074972(
    v13,
    ScanIds_k__BackingField,
    (const MethodInfo_366E51C *)Method_System_Collections_Generic_List_int___ctor___77852768);
  v14 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo;
  if ( !SubmarineUnreleasedScanSaveInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
    v14 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo;
  }
  _9__9_0 = (System_Func_T__TResult__o *)v14->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__9_0 = (System_Func_T__TResult__o *)sub_1C3B9B0(System_Func_int__string__TypeInfo);
    System_Func_int__object____ctor(
      _9__9_0,
      v16,
      Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__,
      0LL);
    static_fields = SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Func_int__string__o *)_9__9_0;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__9_0, (int64_t)_9__9_0, v18, v19, v20, v21, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                                               (System_Func_TSource__TResult__o *)_9__9_0,
                                                               (const MethodInfo_30203C8 *)Method_System_Linq_Enumerable_Select_int__string___);
  v25 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v24,
                                                       (const MethodInfo_302EAAC *)Method_System_Linq_Enumerable_ToList_string___);
  EventId_k__BackingField = this->fields._EventId_k__BackingField;
  v26 = (Il2CppObject *)System_Int32__ToString((int32_t)&EventId_k__BackingField, 0LL);
  if ( !v25 )
    sub_1C3B9C0(v26, v27);
  System_Collections_Generic_List_object___Insert(
    v25,
    0,
    v26,
    (const MethodInfo_368CA1C *)Method_System_Collections_Generic_List_string__Insert__);
  v28 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 v25,
                                 (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_string__ToArray__);
  return System_String__Join((System_String_o *)StringLiteral_845/*", line {0}, position {1}"*/, v28, 0LL);
}


int32_t __fastcall SubmarineUnreleasedScanSaveInfo__get_EventId(
        SubmarineUnreleasedScanSaveInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._EventId_k__BackingField;
}


System_Int32_array *__fastcall SubmarineUnreleasedScanSaveInfo__get_ScanIds(
        SubmarineUnreleasedScanSaveInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._ScanIds_k__BackingField;
}


void __fastcall SubmarineUnreleasedScanSaveInfo__set_EventId(
        SubmarineUnreleasedScanSaveInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EventId_k__BackingField = value;
}


void __fastcall SubmarineUnreleasedScanSaveInfo__set_ScanIds(
        SubmarineUnreleasedScanSaveInfo_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ScanIds_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._ScanIds_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineUnreleasedScanSaveInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C1EAA8 & 1) == 0 )
  {
    sub_1C3B764(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo, v1);
    byte_4C1EAA8 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields->__9 = (struct SubmarineUnreleasedScanSaveInfo___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall SubmarineUnreleasedScanSaveInfo___c___ctor(
        SubmarineUnreleasedScanSaveInfo___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall SubmarineUnreleasedScanSaveInfo___c___GetSaveValue_b__9_0(
        SubmarineUnreleasedScanSaveInfo___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0LL);
}