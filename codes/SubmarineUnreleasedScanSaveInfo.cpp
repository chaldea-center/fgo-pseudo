void SubmarineUnreleasedScanSaveInfo___ctor(
        SubmarineUnreleasedScanSaveInfo_o *this,
        int32_t eventId,
        System_Int32_array *scanIds,
        const MethodInfo *method)
{
  SubmarineUnreleasedScanSaveInfo_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields._ScanIds_k__BackingField = scanIds;
  v6 = (SubmarineUnreleasedScanSaveInfo_o *)((char *)v6 + 24);
  LODWORD(v6[-1].fields._ScanIds_k__BackingField) = eventId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v6, (int32_t)scanIds, v7, v8, v9, v10, v11, v12);
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
  __int64 v11; // x22
  __int64 v12; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  System_Int32_array *v16; // x19
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_596CF56 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&SubmarineUnreleasedScanSaveInfo_TypeInfo);
    byte_596CF56 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(value, 0);
  v5 = 0;
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( value )
    {
      v6 = System_String__Split(value, 0x2Cu, 0, 0);
      v7 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v7,
        (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v6 )
        sub_2213CDC(v8, v9);
      if ( !LODWORD(v6->max_length) )
        sub_2213CE4(v8);
      IsNullOrEmpty = System_Int32__Parse(v6->m_Items[0], 0);
      v10 = IsNullOrEmpty;
      if ( (int)v6->max_length >= 2 )
      {
        v11 = 0;
        v12 = (unsigned int)v6->max_length - 1LL;
        do
        {
          if ( v11 + 1 >= (unsigned __int64)LODWORD(v6->max_length) )
            sub_2213CE4(IsNullOrEmpty);
          IsNullOrEmpty = System_Int32__Parse(v6->m_Items[v11 + 1], 0);
          if ( !v7
            || (items = v7->fields._items,
                v14 = Method_System_Collections_Generic_List_int__Add__,
                ++v7->fields._version,
                !items) )
          {
            sub_2213CDC(IsNullOrEmpty, (unsigned int)IsNullOrEmpty);
          }
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v7,
              IsNullOrEmpty,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v7->fields._size = size + 1;
            items->m_Items[size] = IsNullOrEmpty;
          }
          ++v11;
        }
        while ( v12 != v11 );
        goto LABEL_18;
      }
      if ( v7 )
      {
LABEL_18:
        v16 = System_Collections_Generic_List_int___ToArray(
                v7,
                (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
        v5 = sub_2213CCC(SubmarineUnreleasedScanSaveInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v5, 0);
        *(_DWORD *)(v5 + 16) = v10;
        *(_QWORD *)(v5 + 24) = v16;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)v16, v17, v18, v19, v20, v21, v22);
        return (SubmarineUnreleasedScanSaveInfo_o *)v5;
      }
    }
    sub_2213CDC(IsNullOrEmpty, v4);
  }
  return (SubmarineUnreleasedScanSaveInfo_o *)v5;
}


System_String_o *SubmarineUnreleasedScanSaveInfo__GetSaveValue(
        SubmarineUnreleasedScanSaveInfo_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *ScanIds_k__BackingField; // x21
  System_Collections_Generic_List_int__o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  SubmarineUnreleasedScanSaveInfo___c_c *v7; // x0
  struct SubmarineUnreleasedScanSaveInfo___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__9_0; // x21
  Il2CppObject *v10; // x22
  struct SubmarineUnreleasedScanSaveInfo___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_Generic_List_object__o *v19; // x20
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  System_String_array *v22; // x0
  int32_t EventId_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596CF55 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_string___);
    sub_2213A60(&System_Func_int__string__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Insert__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor___91653480);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__);
    sub_2213A60(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
    sub_2213A60(&StringLiteral_869/*","*/);
    byte_596CF55 = 1;
  }
  ScanIds_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)this->fields._ScanIds_k__BackingField;
  EventId_k__BackingField = 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_71723804(
    v4,
    ScanIds_k__BackingField,
    (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480);
  v7 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo;
  if ( !*(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SubmarineUnreleasedScanSaveInfo___c_TypeInfo, v5, v6);
    v7 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__9_0 = (System_Func_T__TResult__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v5, v6);
      static_fields = SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_int__string__TypeInfo);
    System_Func_int__object____ctor(_9__9_0, v10, Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__, 0);
    v11 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields;
    v11->__9__9_0 = (struct System_Func_int__string__o *)_9__9_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__9_0, (int32_t)_9__9_0, v12, v13, v14, v15, v16, v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v4,
                                                               (System_Func_TSource__TResult__o *)_9__9_0,
                                                               (const MethodInfo_388DEA8 *)Method_System_Linq_Enumerable_Select_int__string___);
  v19 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v18,
                                                       (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_string___);
  EventId_k__BackingField = this->fields._EventId_k__BackingField;
  v20 = (Il2CppObject *)System_Int32__ToString((int32_t)&EventId_k__BackingField, 0);
  if ( !v19 )
    sub_2213CDC(v20, v21);
  System_Collections_Generic_List_object___Insert(
    v19,
    0,
    v20,
    (const MethodInfo_4484A00 *)Method_System_Collections_Generic_List_string__Insert__);
  v22 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 v19,
                                 (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
  return System_String__Join((System_String_o *)StringLiteral_869/*","*/, v22, 0);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ScanIds_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ScanIds_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineUnreleasedScanSaveInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596CF57 & 1) == 0 )
  {
    sub_2213A60(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
    byte_596CF57 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields->__9 = (struct SubmarineUnreleasedScanSaveInfo___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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