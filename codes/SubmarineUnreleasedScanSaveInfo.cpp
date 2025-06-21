void __fastcall SubmarineUnreleasedScanSaveInfo___ctor(
        SubmarineUnreleasedScanSaveInfo_o *this,
        int32_t eventId,
        System_Int32_array *scanIds,
        const MethodInfo *method)
{
  SubmarineUnreleasedScanSaveInfo_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields._ScanIds_k__BackingField = scanIds;
  v6 = (SubmarineUnreleasedScanSaveInfo_o *)((char *)v6 + 24);
  LODWORD(v6[-1].fields._ScanIds_k__BackingField) = eventId;
  sub_1BCAF9C((CGThumbnailListItem_o *)v6, (int32_t)scanIds, v7, v8);
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
  __int64 v14; // x2
  __int64 v15; // x2
  int v16; // w21
  __int64 v17; // x8
  __int64 v18; // x24
  __int64 v19; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  unsigned __int64 v23; // x9
  System_Int32_array *v24; // x19
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4B18F17 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1BCAFF8(&SubmarineUnreleasedScanSaveInfo_TypeInfo, v6);
    byte_4B18F17 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0LL);
  v9 = 0LL;
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( value )
    {
      v10 = System_String__Split(value, 0x2Cu, 0, 0LL);
      v11 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v11,
        (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v10 )
        sub_1BCB254(v12, v13);
      if ( !v10->max_length )
        sub_1BCB25C(v12, v13, v14);
      IsNullOrEmpty = System_Int32__Parse(v10->m_Items[0], 0LL);
      v16 = IsNullOrEmpty;
      if ( (int)*(_QWORD *)&v10->max_length >= 2 )
      {
        v17 = (unsigned int)*(_QWORD *)&v10->max_length;
        if ( (v17 & 0xFFFFFFFE) == 0 )
LABEL_17:
          sub_1BCB25C(IsNullOrEmpty, v8, v15);
        v18 = 0LL;
        v19 = v17 - 2;
        while ( 1 )
        {
          IsNullOrEmpty = System_Int32__Parse(v10->m_Items[v18 + 1], 0LL);
          v8 = (unsigned int)IsNullOrEmpty;
          if ( !v11 )
            sub_1BCB254(IsNullOrEmpty, (unsigned int)IsNullOrEmpty);
          items = v11->fields._items;
          v21 = Method_System_Collections_Generic_List_int__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BCB254(IsNullOrEmpty, (unsigned int)IsNullOrEmpty);
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v11,
              IsNullOrEmpty,
              *(const MethodInfo_369CBAC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v11->fields._size = size + 1;
            items->m_Items[size + 1] = IsNullOrEmpty;
          }
          if ( v19 == v18 )
            goto LABEL_19;
          v23 = v18 + 2;
          ++v18;
          if ( v23 >= v10->max_length )
            goto LABEL_17;
        }
      }
      if ( v11 )
      {
LABEL_19:
        v24 = System_Collections_Generic_List_int___ToArray(
                v11,
                (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
        v9 = sub_1BCB244(SubmarineUnreleasedScanSaveInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v9, 0LL);
        *(_DWORD *)(v9 + 16) = v16;
        *(_QWORD *)(v9 + 24) = v24;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)v24, v25, v26);
        return (SubmarineUnreleasedScanSaveInfo_o *)v9;
      }
    }
    sub_1BCB254(IsNullOrEmpty, v8);
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Collections_Generic_List_object__o *v21; // x20
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  System_String_array *v24; // x0
  int32_t EventId_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B18F16 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_int__string___, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_string___, v3);
    sub_1BCAFF8(&System_Func_int__string__TypeInfo, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Insert__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__ToArray__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor___76866480, v7);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1BCAFF8(&Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__, v9);
    sub_1BCAFF8(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo, v10);
    sub_1BCAFF8(&StringLiteral_806/*","*/, v11);
    byte_4B18F16 = 1;
  }
  ScanIds_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)this->fields._ScanIds_k__BackingField;
  v13 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_57263232(
    v13,
    ScanIds_k__BackingField,
    (const MethodInfo_369C480 *)Method_System_Collections_Generic_List_int___ctor___76866480);
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
    _9__9_0 = (System_Func_T__TResult__o *)sub_1BCB244(System_Func_int__string__TypeInfo);
    System_Func_int__object____ctor(
      _9__9_0,
      v16,
      Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__,
      0LL);
    static_fields = SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Func_int__string__o *)_9__9_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                                               (System_Func_TSource__TResult__o *)_9__9_0,
                                                               (const MethodInfo_304C604 *)Method_System_Linq_Enumerable_Select_int__string___);
  v21 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v20,
                                                       (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_string___);
  EventId_k__BackingField = this->fields._EventId_k__BackingField;
  v22 = (Il2CppObject *)System_Int32__ToString((int32_t)&EventId_k__BackingField, 0LL);
  if ( !v21 )
    sub_1BCB254(v22, v23);
  System_Collections_Generic_List_object___Insert(
    v21,
    0,
    v22,
    (const MethodInfo_36BA980 *)Method_System_Collections_Generic_List_string__Insert__);
  v24 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 v21,
                                 (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_string__ToArray__);
  return System_String__Join((System_String_o *)StringLiteral_806/*","*/, v24, 0LL);
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
  const MethodInfo *v3; // x3

  this->fields._ScanIds_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._ScanIds_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall SubmarineUnreleasedScanSaveInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B18F18 & 1) == 0 )
  {
    sub_1BCAFF8(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo, v1);
    byte_4B18F18 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields->__9 = (struct SubmarineUnreleasedScanSaveInfo___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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