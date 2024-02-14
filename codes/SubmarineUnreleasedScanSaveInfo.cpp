void __fastcall SubmarineUnreleasedScanSaveInfo___ctor(
        SubmarineUnreleasedScanSaveInfo_o *this,
        int32_t eventId,
        System_Int32_array *scanIds,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v6 = (BattleServantConfConponent_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields._closeBtnObject = (struct UnityEngine_GameObject_o *)scanIds;
  v6 = (BattleServantConfConponent_o *)((char *)v6 + 24);
  *(_DWORD *)&v6[-1].fields.isOpenAfter = eventId;
  sub_B0D840(v6, (System_Int32_array **)scanIds, v7, v8, v9, v10, v11, v12);
}


SubmarineUnreleasedScanSaveInfo_o *__fastcall SubmarineUnreleasedScanSaveInfo__CreateBySaveValue(
        System_String_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  System_Char_array *v9; // x0
  System_String_array *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_int__o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x8
  int v16; // w21
  __int64 v17; // x22
  __int64 v18; // x23
  __int64 v19; // x0
  unsigned __int64 v20; // x8
  __int64 v21; // x0
  System_Int32_array **v22; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v32; // x0
  __int64 v33; // x0

  if ( (byte_4215F63 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B0D8A4(&SubmarineUnreleasedScanSaveInfo_TypeInfo, v7);
    byte_4215F63 = 1;
  }
  v8 = 0LL;
  if ( !System_String__IsNullOrEmpty(value, 0LL) )
  {
    v9 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
    if ( v9 )
    {
      if ( !v9->max_length )
      {
        v32 = sub_B0D9A8(v9);
        sub_B0D948(v32, 0LL);
      }
      v9->m_Items[2] = 44;
      if ( value )
      {
        v10 = System_String__Split(value, v9, 0LL);
        v13 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v11,
                                                          v12);
        System_Collections_Generic_List_int____ctor(
          v13,
          (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !v10 )
          sub_B0D97C(v14);
        if ( !v10->max_length )
        {
          v33 = sub_B0D9A8(v14);
          sub_B0D948(v33, 0LL);
        }
        v9 = (System_Char_array *)System_Int32__Parse(v10->m_Items[0], 0LL);
        v15 = *(_QWORD *)&v10->max_length;
        v16 = (int)v9;
        if ( (int)v15 >= 2 )
        {
          if ( (v15 & 0xFFFFFFFE) == 0 )
          {
LABEL_15:
            v21 = sub_B0D9A8(v9);
            sub_B0D948(v21, 0LL);
          }
          v17 = (int)v15;
          v18 = 5LL;
          while ( 1 )
          {
            v19 = System_Int32__Parse(*((System_String_o **)&v10->obj.klass + v18), 0LL);
            if ( !v13 )
              sub_B0D97C(v19);
            System_Collections_Generic_List_int___Add(
              v13,
              v19,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
            v20 = v18 - 3;
            if ( v18 - 3 >= v17 )
              goto LABEL_17;
            ++v18;
            if ( v20 >= v10->max_length )
              goto LABEL_15;
          }
        }
        if ( v13 )
        {
LABEL_17:
          v22 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                         v13,
                                         (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
          v8 = sub_B0D974(SubmarineUnreleasedScanSaveInfo_TypeInfo, v23, v24);
          System_Object___ctor((Il2CppObject *)v8, 0LL);
          *(_DWORD *)(v8 + 16) = v16;
          *(_QWORD *)(v8 + 24) = v22;
          sub_B0D840((BattleServantConfConponent_o *)(v8 + 24), v22, v25, v26, v27, v28, v29, v30);
          return (SubmarineUnreleasedScanSaveInfo_o *)v8;
        }
      }
    }
    sub_B0D97C(v9);
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
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_T__o *ScanIds_k__BackingField; // x21
  System_Collections_Generic_List_int__o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  SubmarineUnreleasedScanSaveInfo___c_c *v18; // x0
  struct SubmarineUnreleasedScanSaveInfo___c_StaticFields *static_fields; // x8
  System_Func_int__BattleActionData_SideEffectData__o *_9__9_0; // x21
  Il2CppObject *v21; // x22
  struct SubmarineUnreleasedScanSaveInfo___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *v30; // x20
  System_String_o *v31; // x0
  System_String_array *v32; // x0
  int32_t EventId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4215F62 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_int__string___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_string___, v4);
    sub_B0D8A4(&Method_System_Func_int__string___ctor__, v5);
    sub_B0D8A4(&System_Func_int__string__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Insert__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884944, v9);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B0D8A4(&Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__, v11);
    sub_B0D8A4(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_705/*","*/, v13);
    byte_4215F62 = 1;
  }
  EventId_k__BackingField = 0;
  ScanIds_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)this->fields._ScanIds_k__BackingField;
  v15 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor_50000796(
    v15,
    ScanIds_k__BackingField,
    (const MethodInfo_2FAF39C *)Method_System_Collections_Generic_List_int___ctor___67884944);
  v18 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo;
  if ( (BYTE3(SubmarineUnreleasedScanSaveInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineUnreleasedScanSaveInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
    v18 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__9_0 = (System_Func_int__BattleActionData_SideEffectData__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B0D974(
                                                                       System_Func_int__string__TypeInfo,
                                                                       v16,
                                                                       v17);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      _9__9_0,
      v21,
      Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__,
      (const MethodInfo_26145DC *)Method_System_Func_int__string___ctor__);
    v22 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields;
    v22->__9__9_0 = (struct System_Func_int__string__o *)_9__9_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v22->__9__9_0,
      (System_Int32_array **)_9__9_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                                               (System_Func_TSource__TResult__o *)_9__9_0,
                                                               (const MethodInfo_1B50D58 *)Method_System_Linq_Enumerable_Select_int__string___);
  v30 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                     v29,
                                                                     (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_string___);
  EventId_k__BackingField = this->fields._EventId_k__BackingField;
  v31 = System_Int32__ToString((int32_t)&EventId_k__BackingField, 0LL);
  if ( !v30 )
    sub_B0D97C(v31);
  System_Collections_Generic_List_XWeaponTrail_Element___Insert(
    v30,
    0,
    (XWeaponTrail_Element_o *)v31,
    (const MethodInfo_2FC68FC *)Method_System_Collections_Generic_List_string__Insert__);
  v32 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v30,
                                 (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_string__ToArray__);
  return System_String__Join((System_String_o *)StringLiteral_705/*","*/, v32, 0LL);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ScanIds_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._ScanIds_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  Il2CppObject *v3; // x19
  struct SubmarineUnreleasedScanSaveInfo___c_StaticFields *static_fields; // x0

  if ( (byte_4211744 & 1) == 0 )
  {
    sub_B0D8A4(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo, v1);
    byte_4211744 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(SubmarineUnreleasedScanSaveInfo___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SubmarineUnreleasedScanSaveInfo___c_o *)v3;
  sub_B0D840(static_fields, v3);
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