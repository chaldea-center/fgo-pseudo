void __fastcall SubmarineUnreleasedScanSaveInfo___ctor(
        SubmarineUnreleasedScanSaveInfo_o *this,
        int32_t eventId,
        System_Int32_array *scanIds,
        const MethodInfo *method)
{
  SubmarineUnreleasedScanSaveInfo_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields._ScanIds_k__BackingField = scanIds;
  v6 = (SubmarineUnreleasedScanSaveInfo_o *)((char *)v6 + 24);
  LODWORD(v6[-1].fields._ScanIds_k__BackingField) = eventId;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v6, (int32_t)scanIds, v7, v8);
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
  __int64 v8; // x20
  System_String_array *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_int__o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  int v16; // w21
  __int64 v17; // x8
  __int64 v18; // x24
  __int64 v19; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  unsigned __int64 v23; // x9
  System_Int32_array *v24; // x19
  __int64 v25; // x1
  __int64 v26; // x2
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_49F90F5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1B640C8(&SubmarineUnreleasedScanSaveInfo_TypeInfo, v6);
    byte_49F90F5 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0LL);
  v8 = 0LL;
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( value )
    {
      v9 = System_String__Split(value, 0x2Cu, 0, 0LL);
      v12 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v10,
                                                        v11);
      System_Collections_Generic_List_int____ctor(
        v12,
        (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v9 )
        sub_1B64324(v13);
      if ( !v9->max_length )
        sub_1B6432C(v13, v14);
      IsNullOrEmpty = System_Int32__Parse(v9->m_Items[0], 0LL);
      v16 = IsNullOrEmpty;
      if ( (int)*(_QWORD *)&v9->max_length >= 2 )
      {
        v17 = (unsigned int)*(_QWORD *)&v9->max_length;
        if ( (v17 & 0xFFFFFFFE) == 0 )
LABEL_17:
          sub_1B6432C(IsNullOrEmpty, v15);
        v18 = 0LL;
        v19 = v17 - 2;
        while ( 1 )
        {
          IsNullOrEmpty = System_Int32__Parse(v9->m_Items[v18 + 1], 0LL);
          v15 = (unsigned int)IsNullOrEmpty;
          if ( !v12 )
            sub_1B64324(IsNullOrEmpty);
          items = v12->fields._items;
          v21 = Method_System_Collections_Generic_List_int__Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1B64324(IsNullOrEmpty);
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v12,
              IsNullOrEmpty,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v12->fields._size = size + 1;
            items->m_Items[size + 1] = IsNullOrEmpty;
          }
          if ( v19 == v18 )
            goto LABEL_19;
          v23 = v18 + 2;
          ++v18;
          if ( v23 >= v9->max_length )
            goto LABEL_17;
        }
      }
      if ( v12 )
      {
LABEL_19:
        v24 = System_Collections_Generic_List_int___ToArray(
                v12,
                (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
        v8 = sub_1B64314(SubmarineUnreleasedScanSaveInfo_TypeInfo, v25, v26);
        System_Object___ctor((Il2CppObject *)v8, 0LL);
        *(_DWORD *)(v8 + 16) = v16;
        *(_QWORD *)(v8 + 24) = v24;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)v24, v27, v28);
        return (SubmarineUnreleasedScanSaveInfo_o *)v8;
      }
    }
    sub_1B64324(IsNullOrEmpty);
  }
  return (SubmarineUnreleasedScanSaveInfo_o *)v8;
}


System_String_o *__fastcall SubmarineUnreleasedScanSaveInfo__GetSaveValue(
        SubmarineUnreleasedScanSaveInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_T__o *ScanIds_k__BackingField; // x21
  System_Collections_Generic_List_int__o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  SubmarineUnreleasedScanSaveInfo___c_c *v17; // x0
  System_Func_T__TResult__o *_9__9_0; // x21
  Il2CppObject *v19; // x22
  struct SubmarineUnreleasedScanSaveInfo___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Collections_Generic_List_object__o *v24; // x20
  Il2CppObject *v25; // x0
  System_String_array *v26; // x0
  int32_t EventId_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49F90F4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_int__string___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_string___, v4);
    sub_1B640C8(&System_Func_int__string__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Insert__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v8);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B640C8(&Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__, v10);
    sub_1B640C8(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_869/*","*/, v12);
    byte_49F90F4 = 1;
  }
  ScanIds_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)this->fields._ScanIds_k__BackingField;
  v14 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor_55113648(
    v14,
    ScanIds_k__BackingField,
    (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
  v17 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo;
  if ( !SubmarineUnreleasedScanSaveInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
    v17 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo;
  }
  _9__9_0 = (System_Func_T__TResult__o *)v17->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__9_0 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_int__string__TypeInfo, v15, v16);
    System_Func_int__object____ctor(
      _9__9_0,
      v19,
      Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__,
      0LL);
    static_fields = SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Func_int__string__o *)_9__9_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v21, v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                                                               (System_Func_TSource__TResult__o *)_9__9_0,
                                                               (const MethodInfo_2E66FCC *)Method_System_Linq_Enumerable_Select_int__string___);
  v24 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v23,
                                                       (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_string___);
  EventId_k__BackingField = this->fields._EventId_k__BackingField;
  v25 = (Il2CppObject *)System_Int32__ToString((int32_t)&EventId_k__BackingField, 0LL);
  if ( !v24 )
    sub_1B64324(v25);
  System_Collections_Generic_List_object___Insert(
    v24,
    0,
    v25,
    (const MethodInfo_34AE524 *)Method_System_Collections_Generic_List_string__Insert__);
  v26 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 v24,
                                 (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
  return System_String__Join((System_String_o *)StringLiteral_869/*","*/, v26, 0LL);
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

  this->fields._ScanIds_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._ScanIds_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineUnreleasedScanSaveInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F90F6 & 1) == 0 )
  {
    sub_1B640C8(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo, v1);
    byte_49F90F6 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(SubmarineUnreleasedScanSaveInfo___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields->__9 = (struct SubmarineUnreleasedScanSaveInfo___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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