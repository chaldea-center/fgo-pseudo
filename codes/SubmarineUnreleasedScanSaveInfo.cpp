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
  sub_B5D560(v6, (System_Int32_array **)scanIds, v7, v8, v9, v10, v11, v12);
}


SubmarineUnreleasedScanSaveInfo_o *__fastcall SubmarineUnreleasedScanSaveInfo__CreateBySaveValue(
        System_String_o *value,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  __int64 v20; // x20
  System_Char_array *v21; // x0
  System_Char_array *v22; // x1
  System_String_array *v23; // x20
  System_Collections_Generic_List_int__o *v24; // x19
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x8
  int v28; // w21
  __int64 v29; // x22
  __int64 v30; // x23
  __int64 v31; // x0
  unsigned __int64 v32; // x8
  __int64 v33; // x0
  System_Int32_array **v34; // x19
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v42; // x0
  __int64 v43; // x0

  if ( (byte_42EA385 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&SubmarineUnreleasedScanSaveInfo_TypeInfo, v17, v18, v19);
    byte_42EA385 = 1;
  }
  v20 = 0LL;
  if ( !System_String__IsNullOrEmpty(value, 0LL) )
  {
    v21 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( v21 )
    {
      v22 = v21;
      if ( !v21->max_length )
      {
        v42 = sub_B5D6C8(v21);
        sub_B5D668(v42, 0LL);
      }
      v21->m_Items[2] = 44;
      if ( value )
      {
        v23 = System_String__Split(value, v21, 0LL);
        v24 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v24,
          (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
        if ( !v23 )
          sub_B5D69C(v25, v26);
        if ( !v23->max_length )
        {
          v43 = sub_B5D6C8(v25);
          sub_B5D668(v43, 0LL);
        }
        v21 = (System_Char_array *)System_Int32__Parse(v23->m_Items[0], 0LL);
        v27 = *(_QWORD *)&v23->max_length;
        v28 = (int)v21;
        if ( (int)v27 >= 2 )
        {
          if ( (v27 & 0xFFFFFFFE) == 0 )
          {
LABEL_15:
            v33 = sub_B5D6C8(v21);
            sub_B5D668(v33, 0LL);
          }
          v29 = (int)v27;
          v30 = 5LL;
          while ( 1 )
          {
            v31 = System_Int32__Parse(*((System_String_o **)&v23->obj.klass + v30), 0LL);
            if ( !v24 )
              sub_B5D69C(v31, (unsigned int)v31);
            System_Collections_Generic_List_int___Add(
              v24,
              v31,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
            v32 = v30 - 3;
            if ( v30 - 3 >= v29 )
              goto LABEL_17;
            ++v30;
            if ( v32 >= v23->max_length )
              goto LABEL_15;
          }
        }
        if ( v24 )
        {
LABEL_17:
          v34 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                         v24,
                                         (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
          v20 = sub_B5D694(SubmarineUnreleasedScanSaveInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v20, 0LL);
          *(_DWORD *)(v20 + 16) = v28;
          *(_QWORD *)(v20 + 24) = v34;
          sub_B5D560((BattleServantConfConponent_o *)(v20 + 24), v34, v35, v36, v37, v38, v39, v40);
          return (SubmarineUnreleasedScanSaveInfo_o *)v20;
        }
      }
    }
    sub_B5D69C(v21, v22);
  }
  return (SubmarineUnreleasedScanSaveInfo_o *)v20;
}


System_String_o *__fastcall SubmarineUnreleasedScanSaveInfo__GetSaveValue(
        SubmarineUnreleasedScanSaveInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  System_Collections_Generic_IEnumerable_T__o *ScanIds_k__BackingField; // x21
  System_Collections_Generic_List_int__o *v36; // x20
  SubmarineUnreleasedScanSaveInfo___c_c *v37; // x0
  struct SubmarineUnreleasedScanSaveInfo___c_StaticFields *static_fields; // x8
  System_Func_int__BattleActionData_SideEffectData__o *_9__9_0; // x21
  Il2CppObject *v40; // x22
  struct SubmarineUnreleasedScanSaveInfo___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *v49; // x20
  System_String_o *v50; // x0
  __int64 v51; // x1
  System_String_array *v52; // x0
  int32_t EventId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EA384 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_int__string___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_string___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_int__string___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_int__string__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Insert__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__, v26, v27, v28);
    sub_B5D5C4(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_707/*","*/, v32, v33, v34);
    byte_42EA384 = 1;
  }
  EventId_k__BackingField = 0;
  ScanIds_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)this->fields._ScanIds_k__BackingField;
  v36 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50870440(
    v36,
    ScanIds_k__BackingField,
    (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
  v37 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo;
  if ( (BYTE3(SubmarineUnreleasedScanSaveInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineUnreleasedScanSaveInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
    v37 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo;
  }
  static_fields = v37->static_fields;
  _9__9_0 = (System_Func_int__BattleActionData_SideEffectData__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      static_fields = SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B5D694(System_Func_int__string__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      _9__9_0,
      v40,
      Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__,
      (const MethodInfo_2C29938 *)Method_System_Func_int__string___ctor__);
    v41 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields;
    v41->__9__9_0 = (struct System_Func_int__string__o *)_9__9_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v41->__9__9_0,
      (System_Int32_array **)_9__9_0,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v36,
                                                               (System_Func_TSource__TResult__o *)_9__9_0,
                                                               (const MethodInfo_1CB1D40 *)Method_System_Linq_Enumerable_Select_int__string___);
  v49 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                     v48,
                                                                     (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_string___);
  EventId_k__BackingField = this->fields._EventId_k__BackingField;
  v50 = System_Int32__ToString((int32_t)&EventId_k__BackingField, 0LL);
  if ( !v49 )
    sub_B5D69C(v50, v51);
  System_Collections_Generic_List_XWeaponTrail_Element___Insert(
    v49,
    0,
    (XWeaponTrail_Element_o *)v50,
    (const MethodInfo_30581D4 *)Method_System_Collections_Generic_List_string__Insert__);
  v52 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v49,
                                 (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
  return System_String__Join((System_String_o *)StringLiteral_707/*","*/, v52, 0LL);
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
  sub_B5D560(
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct SubmarineUnreleasedScanSaveInfo___c_StaticFields *static_fields; // x0

  if ( (byte_42E6465 & 1) == 0 )
  {
    sub_B5D5C4(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo, v1, v2, v3);
    byte_42E6465 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SubmarineUnreleasedScanSaveInfo___c_o *)v4;
  sub_B5D560(static_fields);
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