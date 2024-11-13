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
  sub_1BCA784(v6, (int64_t)scanIds, v7, v8, v9, v10, v11, v12);
}


SubmarineUnreleasedScanSaveInfo_o *__fastcall SubmarineUnreleasedScanSaveInfo__CreateBySaveValue(
        System_String_o *value,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 IsNullOrEmpty; // x0
  __int64 v13; // x1
  __int64 v14; // x20
  System_String_array *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_List_int__o *v19; // x19
  __int64 v20; // x0
  __int64 v21; // x1
  int v22; // w21
  __int64 v23; // x8
  __int64 v24; // x24
  __int64 v25; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  unsigned __int64 v29; // x9
  System_Int32_array *v30; // x19
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4B12DE6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v8, v9);
    sub_1BCA7E0(&SubmarineUnreleasedScanSaveInfo_TypeInfo, v10, v11);
    byte_4B12DE6 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0LL);
  v14 = 0LL;
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( value )
    {
      v15 = System_String__Split(value, 0x2Cu, 0, 0LL);
      v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v16,
                                                        v17,
                                                        v18);
      System_Collections_Generic_List_int____ctor(
        v19,
        (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v15 )
        sub_1BCAA3C(v20, v21);
      if ( !v15->max_length )
        sub_1BCAA44(v20, v21);
      IsNullOrEmpty = System_Int32__Parse(v15->m_Items[0], 0LL);
      v22 = IsNullOrEmpty;
      if ( (int)*(_QWORD *)&v15->max_length >= 2 )
      {
        v23 = (unsigned int)*(_QWORD *)&v15->max_length;
        if ( (v23 & 0xFFFFFFFE) == 0 )
LABEL_17:
          sub_1BCAA44(IsNullOrEmpty, v13);
        v24 = 0LL;
        v25 = v23 - 2;
        while ( 1 )
        {
          IsNullOrEmpty = System_Int32__Parse(v15->m_Items[v24 + 1], 0LL);
          v13 = (unsigned int)IsNullOrEmpty;
          if ( !v19 )
            sub_1BCAA3C(IsNullOrEmpty, (unsigned int)IsNullOrEmpty);
          items = v19->fields._items;
          v27 = Method_System_Collections_Generic_List_int__Add__;
          ++v19->fields._version;
          if ( !items )
            sub_1BCAA3C(IsNullOrEmpty, (unsigned int)IsNullOrEmpty);
          size = v19->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v19,
              IsNullOrEmpty,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v19->fields._size = size + 1;
            items->m_Items[size + 1] = IsNullOrEmpty;
          }
          if ( v25 == v24 )
            goto LABEL_19;
          v29 = v24 + 2;
          ++v24;
          if ( v29 >= v15->max_length )
            goto LABEL_17;
        }
      }
      if ( v19 )
      {
LABEL_19:
        v30 = System_Collections_Generic_List_int___ToArray(
                v19,
                (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
        v14 = sub_1BCAA2C(SubmarineUnreleasedScanSaveInfo_TypeInfo, v31, v32, v33);
        System_Object___ctor((Il2CppObject *)v14, 0LL);
        *(_DWORD *)(v14 + 16) = v22;
        *(_QWORD *)(v14 + 24) = v30;
        sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)v30, v34, v35, v36, v37, v38, v39);
        return (SubmarineUnreleasedScanSaveInfo_o *)v14;
      }
    }
    sub_1BCAA3C(IsNullOrEmpty, v13);
  }
  return (SubmarineUnreleasedScanSaveInfo_o *)v14;
}


System_String_o *__fastcall SubmarineUnreleasedScanSaveInfo__GetSaveValue(
        SubmarineUnreleasedScanSaveInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_IEnumerable_T__o *ScanIds_k__BackingField; // x21
  System_Collections_Generic_List_int__o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  SubmarineUnreleasedScanSaveInfo___c_c *v28; // x0
  System_Func_T__TResult__o *_9__9_0; // x21
  Il2CppObject *v30; // x22
  struct SubmarineUnreleasedScanSaveInfo___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  System_Collections_Generic_List_object__o *v39; // x20
  Il2CppObject *v40; // x0
  __int64 v41; // x1
  System_String_array *v42; // x0
  int32_t EventId_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B12DE5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__string___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_string___, v5, v6);
    sub_1BCA7E0(&System_Func_int__string__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Insert__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__, v17, v18);
    sub_1BCA7E0(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v21, v22);
    byte_4B12DE5 = 1;
  }
  ScanIds_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)this->fields._ScanIds_k__BackingField;
  v24 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor_56116492(
    v24,
    ScanIds_k__BackingField,
    (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
  v28 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo;
  if ( !SubmarineUnreleasedScanSaveInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineUnreleasedScanSaveInfo___c_TypeInfo, v25);
    v28 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo;
  }
  _9__9_0 = (System_Func_T__TResult__o *)v28->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28, v25);
      v28 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v28->static_fields->__9;
    _9__9_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_int__string__TypeInfo, v25, v26, v27);
    System_Func_int__object____ctor(
      _9__9_0,
      v30,
      Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__,
      0LL);
    static_fields = SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Func_int__string__o *)_9__9_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__9_0, (int64_t)_9__9_0, v32, v33, v34, v35, v36, v37);
  }
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v24,
                                                               (System_Func_TSource__TResult__o *)_9__9_0,
                                                               (const MethodInfo_2F3F30C *)Method_System_Linq_Enumerable_Select_int__string___);
  v39 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v38,
                                                       (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_string___);
  EventId_k__BackingField = this->fields._EventId_k__BackingField;
  v40 = (Il2CppObject *)System_Int32__ToString((int32_t)&EventId_k__BackingField, 0LL);
  if ( !v39 )
    sub_1BCAA3C(v40, v41);
  System_Collections_Generic_List_object___Insert(
    v39,
    0,
    v40,
    (const MethodInfo_35A2A0C *)Method_System_Collections_Generic_List_string__Insert__);
  v42 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 v39,
                                 (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
  return System_String__Join((System_String_o *)StringLiteral_863/*","*/, v42, 0LL);
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
  sub_1BCA784(
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12DE7 & 1) == 0 )
  {
    sub_1BCA7E0(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo, v1, v2);
    byte_4B12DE7 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SubmarineUnreleasedScanSaveInfo___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields->__9 = (struct SubmarineUnreleasedScanSaveInfo___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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