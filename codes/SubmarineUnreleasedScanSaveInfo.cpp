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
  sub_1C36FFC((CGThumbnailListItem_o *)v6, (int32_t)scanIds, v7, v8);
}


SubmarineUnreleasedScanSaveInfo_o *SubmarineUnreleasedScanSaveInfo__CreateBySaveValue(
        System_String_o *value,
        const MethodInfo *method)
{
  __int64 IsNullOrEmpty; // x0
  __int64 v4; // x20
  System_String_array *v5; // x20
  System_Collections_Generic_List_int__o *v6; // x19
  __int64 v7; // x0
  int v8; // w21
  __int64 max_length; // x8
  __int64 v10; // x24
  __int64 v11; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  unsigned __int64 v15; // x9
  System_Int32_array *v16; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C3F939 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&SubmarineUnreleasedScanSaveInfo_TypeInfo);
    byte_4C3F939 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0);
  v4 = 0;
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( value )
    {
      v5 = System_String__Split(value, 0x2Cu, 0, 0);
      v6 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v6,
        (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v5 )
        sub_1C372B4(v7);
      if ( !LODWORD(v5->max_length) )
        sub_1C372BC(v7);
      IsNullOrEmpty = System_Int32__Parse(v5->m_Items[0], 0);
      v8 = IsNullOrEmpty;
      if ( (int)v5->max_length >= 2 )
      {
        max_length = (unsigned int)v5->max_length;
        if ( (max_length & 0xFFFFFFFE) == 0 )
LABEL_17:
          sub_1C372BC(IsNullOrEmpty);
        v10 = 0;
        v11 = max_length - 2;
        while ( 1 )
        {
          IsNullOrEmpty = System_Int32__Parse(v5->m_Items[v10 + 1], 0);
          if ( !v6 )
            sub_1C372B4(IsNullOrEmpty);
          items = v6->fields._items;
          v13 = Method_System_Collections_Generic_List_int__Add__;
          ++v6->fields._version;
          if ( !items )
            sub_1C372B4(IsNullOrEmpty);
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v6,
              IsNullOrEmpty,
              *(const MethodInfo_3786000 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v6->fields._size = size + 1;
            items->m_Items[size] = IsNullOrEmpty;
          }
          if ( v11 == v10 )
            goto LABEL_19;
          v15 = v10 + 2;
          ++v10;
          if ( v15 >= LODWORD(v5->max_length) )
            goto LABEL_17;
        }
      }
      if ( v6 )
      {
LABEL_19:
        v16 = System_Collections_Generic_List_int___ToArray(
                v6,
                (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
        v4 = sub_1C372A4(SubmarineUnreleasedScanSaveInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v4, 0);
        *(_DWORD *)(v4 + 16) = v8;
        *(_QWORD *)(v4 + 24) = v16;
        sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 24), (int32_t)v16, v17, v18);
        return (SubmarineUnreleasedScanSaveInfo_o *)v4;
      }
    }
    sub_1C372B4(IsNullOrEmpty);
  }
  return (SubmarineUnreleasedScanSaveInfo_o *)v4;
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
  System_String_array *v14; // x0
  int32_t EventId_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C3F938 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C37058(&System_Func_int__string__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Insert__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor___78055976);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__);
    sub_1C37058(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
    sub_1C37058(&StringLiteral_811/*","*/);
    byte_4C3F938 = 1;
  }
  ScanIds_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)this->fields._ScanIds_k__BackingField;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58218708(
    v4,
    ScanIds_k__BackingField,
    (const MethodInfo_37858D4 *)Method_System_Collections_Generic_List_int___ctor___78055976);
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
    _9__9_0 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_int__string__TypeInfo);
    System_Func_int__object____ctor(_9__9_0, v7, Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__, 0);
    static_fields = SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Func_int__string__o *)_9__9_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v9, v10);
  }
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v4,
                                                               (System_Func_TSource__TResult__o *)_9__9_0,
                                                               (const MethodInfo_311B668 *)Method_System_Linq_Enumerable_Select_int__string___);
  v12 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v11,
                                                       (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_string___);
  EventId_k__BackingField = this->fields._EventId_k__BackingField;
  v13 = (Il2CppObject *)System_Int32__ToString((int32_t)&EventId_k__BackingField, 0);
  if ( !v12 )
    sub_1C372B4(v13);
  System_Collections_Generic_List_object___Insert(
    v12,
    0,
    v13,
    (const MethodInfo_37A3DD4 *)Method_System_Collections_Generic_List_string__Insert__);
  v14 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 v12,
                                 (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_string__ToArray__);
  return System_String__Join((System_String_o *)StringLiteral_811/*","*/, v14, 0);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._ScanIds_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void SubmarineUnreleasedScanSaveInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3F93A & 1) == 0 )
  {
    sub_1C37058(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
    byte_4C3F93A = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields->__9 = (struct SubmarineUnreleasedScanSaveInfo___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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