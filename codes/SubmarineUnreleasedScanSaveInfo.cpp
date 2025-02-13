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
  sub_1C21DDC(v6, (int64_t)scanIds, v7, v8, v9, v10, v11, v12);
}


SubmarineUnreleasedScanSaveInfo_o *__fastcall SubmarineUnreleasedScanSaveInfo__CreateBySaveValue(
        System_String_o *value,
        const MethodInfo *method)
{
  __int64 IsNullOrEmpty; // x0
  __int64 v4; // x1
  __int64 v5; // x20
  System_String_array *v6; // x20
  System_Collections_Generic_List_int__o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  int v10; // w21
  __int64 v11; // x8
  __int64 v12; // x24
  __int64 v13; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  unsigned __int64 v17; // x9
  System_Int32_array *v18; // x19
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4BD90B8 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&SubmarineUnreleasedScanSaveInfo_TypeInfo);
    byte_4BD90B8 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0LL);
  v5 = 0LL;
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( value )
    {
      v6 = System_String__Split(value, 0x2Cu, 0, 0LL);
      v7 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v7,
        (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v6 )
        sub_1C22094(v8, v9);
      if ( !v6->max_length )
        sub_1C2209C(v8, v9);
      IsNullOrEmpty = System_Int32__Parse(v6->m_Items[0], 0LL);
      v10 = IsNullOrEmpty;
      if ( (int)*(_QWORD *)&v6->max_length >= 2 )
      {
        v11 = (unsigned int)*(_QWORD *)&v6->max_length;
        if ( (v11 & 0xFFFFFFFE) == 0 )
LABEL_17:
          sub_1C2209C(IsNullOrEmpty, v4);
        v12 = 0LL;
        v13 = v11 - 2;
        while ( 1 )
        {
          IsNullOrEmpty = System_Int32__Parse(v6->m_Items[v12 + 1], 0LL);
          v4 = (unsigned int)IsNullOrEmpty;
          if ( !v7 )
            sub_1C22094(IsNullOrEmpty, (unsigned int)IsNullOrEmpty);
          items = v7->fields._items;
          v15 = Method_System_Collections_Generic_List_int__Add__;
          ++v7->fields._version;
          if ( !items )
            sub_1C22094(IsNullOrEmpty, (unsigned int)IsNullOrEmpty);
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v7,
              IsNullOrEmpty,
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v7->fields._size = size + 1;
            items->m_Items[size + 1] = IsNullOrEmpty;
          }
          if ( v13 == v12 )
            goto LABEL_19;
          v17 = v12 + 2;
          ++v12;
          if ( v17 >= v6->max_length )
            goto LABEL_17;
        }
      }
      if ( v7 )
      {
LABEL_19:
        v18 = System_Collections_Generic_List_int___ToArray(
                v7,
                (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
        v5 = sub_1C22084(SubmarineUnreleasedScanSaveInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v5, 0LL);
        *(_DWORD *)(v5 + 16) = v10;
        *(_QWORD *)(v5 + 24) = v18;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)v18, v19, v20, v21, v22, v23, v24);
        return (SubmarineUnreleasedScanSaveInfo_o *)v5;
      }
    }
    sub_1C22094(IsNullOrEmpty, v4);
  }
  return (SubmarineUnreleasedScanSaveInfo_o *)v5;
}


System_String_o *__fastcall SubmarineUnreleasedScanSaveInfo__GetSaveValue(
        SubmarineUnreleasedScanSaveInfo_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *ScanIds_k__BackingField; // x21
  System_Collections_Generic_List_int__o *v4; // x20
  SubmarineUnreleasedScanSaveInfo___c_c *v5; // x0
  System_Func_T__TResult__o *_9__9_0; // x21
  Il2CppObject *v7; // x22
  struct SubmarineUnreleasedScanSaveInfo___c_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Collections_Generic_List_object__o *v16; // x20
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  System_String_array *v19; // x0
  int32_t EventId_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BD90B7 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C21E38(&System_Func_int__string__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Insert__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor___77576624);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__);
    sub_1C21E38(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
    sub_1C21E38(&StringLiteral_866/*","*/);
    byte_4BD90B7 = 1;
  }
  ScanIds_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)this->fields._ScanIds_k__BackingField;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_56826212(
    v4,
    ScanIds_k__BackingField,
    (const MethodInfo_3631964 *)Method_System_Collections_Generic_List_int___ctor___77576624);
  v5 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo;
  if ( !SubmarineUnreleasedScanSaveInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
    v5 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo;
  }
  _9__9_0 = (System_Func_T__TResult__o *)v5->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__9_0 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_int__string__TypeInfo);
    System_Func_int__object____ctor(_9__9_0, v7, Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__, 0LL);
    static_fields = SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Func_int__string__o *)_9__9_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__9_0, (int64_t)_9__9_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v4,
                                                               (System_Func_TSource__TResult__o *)_9__9_0,
                                                               (const MethodInfo_2FDEEE4 *)Method_System_Linq_Enumerable_Select_int__string___);
  v16 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v15,
                                                       (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_string___);
  EventId_k__BackingField = this->fields._EventId_k__BackingField;
  v17 = (Il2CppObject *)System_Int32__ToString((int32_t)&EventId_k__BackingField, 0LL);
  if ( !v16 )
    sub_1C22094(v17, v18);
  System_Collections_Generic_List_object___Insert(
    v16,
    0,
    v17,
    (const MethodInfo_364FE64 *)Method_System_Collections_Generic_List_string__Insert__);
  v19 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 v16,
                                 (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
  return System_String__Join((System_String_o *)StringLiteral_866/*","*/, v19, 0LL);
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
  sub_1C21DDC(
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
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD90B9 & 1) == 0 )
  {
    sub_1C21E38(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
    byte_4BD90B9 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields->__9 = (struct SubmarineUnreleasedScanSaveInfo___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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