void SubmarineUnreleasedScanSaveInfo___ctor(
        SubmarineUnreleasedScanSaveInfo_o *this,
        int32_t eventId,
        System_Int32_array *scanIds,
        const MethodInfo *method)
{
  SubmarineUnreleasedScanSaveInfo_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields._ScanIds_k__BackingField = scanIds;
  v6 = (SubmarineUnreleasedScanSaveInfo_o *)((char *)v6 + 24);
  LODWORD(v6[-1].fields._ScanIds_k__BackingField) = eventId;
  sub_1C3E508((CGThumbnailListItem_o *)v6, (int32_t)scanIds, v7, v8);
}


SubmarineUnreleasedScanSaveInfo_o *SubmarineUnreleasedScanSaveInfo__CreateBySaveValue(
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
  __int64 max_length; // x8
  __int64 v12; // x24
  __int64 v13; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  unsigned __int64 v17; // x9
  System_Int32_array *v18; // x19
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C536D4 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&SubmarineUnreleasedScanSaveInfo_TypeInfo);
    byte_4C536D4 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0);
  v5 = 0;
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( value )
    {
      v6 = System_String__Split(value, 0x2Cu, 0, 0);
      v7 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v7,
        (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v6 )
        sub_1C3E7C0(v8, v9);
      if ( !LODWORD(v6->max_length) )
        sub_1C3E7C8(v8, v9);
      IsNullOrEmpty = System_Int32__Parse(v6->m_Items[0], 0);
      v10 = IsNullOrEmpty;
      if ( (int)v6->max_length >= 2 )
      {
        max_length = (unsigned int)v6->max_length;
        if ( (max_length & 0xFFFFFFFE) == 0 )
LABEL_17:
          sub_1C3E7C8(IsNullOrEmpty, v4);
        v12 = 0;
        v13 = max_length - 2;
        while ( 1 )
        {
          IsNullOrEmpty = System_Int32__Parse(v6->m_Items[v12 + 1], 0);
          v4 = (unsigned int)IsNullOrEmpty;
          if ( !v7 )
            sub_1C3E7C0(IsNullOrEmpty, (unsigned int)IsNullOrEmpty);
          items = v7->fields._items;
          v15 = Method_System_Collections_Generic_List_int__Add__;
          ++v7->fields._version;
          if ( !items )
            sub_1C3E7C0(IsNullOrEmpty, (unsigned int)IsNullOrEmpty);
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v7,
              IsNullOrEmpty,
              *(const MethodInfo_379843C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v7->fields._size = size + 1;
            items->m_Items[size] = IsNullOrEmpty;
          }
          if ( v13 == v12 )
            goto LABEL_19;
          v17 = v12 + 2;
          ++v12;
          if ( v17 >= LODWORD(v6->max_length) )
            goto LABEL_17;
        }
      }
      if ( v7 )
      {
LABEL_19:
        v18 = System_Collections_Generic_List_int___ToArray(
                v7,
                (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
        v5 = sub_1C3E7B0(SubmarineUnreleasedScanSaveInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v5, 0);
        *(_DWORD *)(v5 + 16) = v10;
        *(_QWORD *)(v5 + 24) = v18;
        sub_1C3E508((CGThumbnailListItem_o *)(v5 + 24), (int32_t)v18, v19, v20);
        return (SubmarineUnreleasedScanSaveInfo_o *)v5;
      }
    }
    sub_1C3E7C0(IsNullOrEmpty, v4);
  }
  return (SubmarineUnreleasedScanSaveInfo_o *)v5;
}


System_String_o *SubmarineUnreleasedScanSaveInfo__GetSaveValue(
        SubmarineUnreleasedScanSaveInfo_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *ScanIds_k__BackingField; // x21
  System_Collections_Generic_List_int__o *v4; // x20
  SubmarineUnreleasedScanSaveInfo___c_c *v5; // x0
  System_Func_T__TResult__o *_9__9_0; // x21
  Il2CppObject *v7; // x22
  struct SubmarineUnreleasedScanSaveInfo___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Collections_Generic_List_object__o *v12; // x20
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  System_String_array *v15; // x0
  int32_t EventId_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C536D3 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C3E564(&System_Func_int__string__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__Insert__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor___78135936);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__);
    sub_1C3E564(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
    sub_1C3E564(&StringLiteral_811/*","*/);
    byte_4C536D3 = 1;
  }
  ScanIds_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)this->fields._ScanIds_k__BackingField;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58293520(
    v4,
    ScanIds_k__BackingField,
    (const MethodInfo_3797D10 *)Method_System_Collections_Generic_List_int___ctor___78135936);
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
    _9__9_0 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_int__string__TypeInfo);
    System_Func_int__object____ctor(_9__9_0, v7, Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__, 0);
    static_fields = SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Func_int__string__o *)_9__9_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v9, v10);
  }
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v4,
                                                               (System_Func_TSource__TResult__o *)_9__9_0,
                                                               (const MethodInfo_312D55C *)Method_System_Linq_Enumerable_Select_int__string___);
  v12 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v11,
                                                       (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_string___);
  EventId_k__BackingField = this->fields._EventId_k__BackingField;
  v13 = (Il2CppObject *)System_Int32__ToString((int32_t)&EventId_k__BackingField, 0);
  if ( !v12 )
    sub_1C3E7C0(v13, v14);
  System_Collections_Generic_List_object___Insert(
    v12,
    0,
    v13,
    (const MethodInfo_37B6210 *)Method_System_Collections_Generic_List_string__Insert__);
  v15 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 v12,
                                 (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_string__ToArray__);
  return System_String__Join((System_String_o *)StringLiteral_811/*","*/, v15, 0);
}


int32_t SubmarineUnreleasedScanSaveInfo__get_EventId(SubmarineUnreleasedScanSaveInfo_o *this, const MethodInfo *method)
{
  return this->fields._EventId_k__BackingField;
}


System_Int32_array *SubmarineUnreleasedScanSaveInfo__get_ScanIds(
        SubmarineUnreleasedScanSaveInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._ScanIds_k__BackingField;
}


void SubmarineUnreleasedScanSaveInfo__set_EventId(
        SubmarineUnreleasedScanSaveInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EventId_k__BackingField = value;
}


void SubmarineUnreleasedScanSaveInfo__set_ScanIds(
        SubmarineUnreleasedScanSaveInfo_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ScanIds_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._ScanIds_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void SubmarineUnreleasedScanSaveInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C536D5 & 1) == 0 )
  {
    sub_1C3E564(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
    byte_4C536D5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields->__9 = (struct SubmarineUnreleasedScanSaveInfo___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void SubmarineUnreleasedScanSaveInfo___c___ctor(SubmarineUnreleasedScanSaveInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *SubmarineUnreleasedScanSaveInfo___c___GetSaveValue_b__9_0(
        SubmarineUnreleasedScanSaveInfo___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0);
}