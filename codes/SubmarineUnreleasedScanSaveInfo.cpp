void __fastcall SubmarineUnreleasedScanSaveInfo___ctor(
        SubmarineUnreleasedScanSaveInfo_o *this,
        int32_t eventId,
        System_Int32_array *scanIds,
        const MethodInfo *method)
{
  SubmarineUnreleasedScanSaveInfo_o *v6; // x21

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields._ScanIds_k__BackingField = scanIds;
  v6 = (SubmarineUnreleasedScanSaveInfo_o *)((char *)v6 + 24);
  LODWORD(v6[-1].fields._ScanIds_k__BackingField) = eventId;
  sub_B2C2F8(v6, scanIds);
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
  System_Char_array *v10; // x1
  System_String_array *v11; // x20
  System_Collections_Generic_List_int__o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x8
  int v16; // w21
  __int64 v17; // x22
  __int64 v18; // x23
  __int64 v19; // x0
  unsigned __int64 v20; // x8
  __int64 v21; // x0
  System_Int32_array *v22; // x19
  __int64 v24; // x0
  __int64 v25; // x0

  if ( (byte_4185850 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B2C35C(&SubmarineUnreleasedScanSaveInfo_TypeInfo, v7);
    byte_4185850 = 1;
  }
  v8 = 0LL;
  if ( !System_String__IsNullOrEmpty(value, 0LL) )
  {
    v9 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
    if ( v9 )
    {
      v10 = v9;
      if ( !v9->max_length )
      {
        v24 = sub_B2C460(v9);
        sub_B2C400(v24, 0LL);
      }
      v9->m_Items[2] = 44;
      if ( value )
      {
        v11 = System_String__Split(value, v9, 0LL);
        v12 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v12,
          (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !v11 )
          sub_B2C434(v13, v14);
        if ( !v11->max_length )
        {
          v25 = sub_B2C460(v13);
          sub_B2C400(v25, 0LL);
        }
        v9 = (System_Char_array *)System_Int32__Parse(v11->m_Items[0], 0LL);
        v15 = *(_QWORD *)&v11->max_length;
        v16 = (int)v9;
        if ( (int)v15 >= 2 )
        {
          if ( (v15 & 0xFFFFFFFE) == 0 )
          {
LABEL_15:
            v21 = sub_B2C460(v9);
            sub_B2C400(v21, 0LL);
          }
          v17 = (int)v15;
          v18 = 5LL;
          while ( 1 )
          {
            v19 = System_Int32__Parse(*((System_String_o **)&v11->obj.klass + v18), 0LL);
            if ( !v12 )
              sub_B2C434(v19, (unsigned int)v19);
            System_Collections_Generic_List_int___Add(
              v12,
              v19,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
            v20 = v18 - 3;
            if ( v18 - 3 >= v17 )
              goto LABEL_17;
            ++v18;
            if ( v20 >= v11->max_length )
              goto LABEL_15;
          }
        }
        if ( v12 )
        {
LABEL_17:
          v22 = System_Collections_Generic_List_int___ToArray(
                  v12,
                  (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
          v8 = sub_B2C42C(SubmarineUnreleasedScanSaveInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v8, 0LL);
          *(_DWORD *)(v8 + 16) = v16;
          *(_QWORD *)(v8 + 24) = v22;
          sub_B2C2F8(v8 + 24, v22);
          return (SubmarineUnreleasedScanSaveInfo_o *)v8;
        }
      }
    }
    sub_B2C434(v9, v10);
  }
  return (SubmarineUnreleasedScanSaveInfo_o *)v8;
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
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_T__o *ScanIds_k__BackingField; // x21
  System_Collections_Generic_List_int__o *v14; // x20
  SubmarineUnreleasedScanSaveInfo___c_c *v15; // x0
  struct SubmarineUnreleasedScanSaveInfo___c_StaticFields *static_fields; // x8
  System_Func_int__BattleActionData_SideEffectData__o *_9__9_0; // x21
  Il2CppObject *v18; // x22
  struct SubmarineUnreleasedScanSaveInfo___c_StaticFields *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *v21; // x20
  System_String_o *v22; // x0
  __int64 v23; // x1
  System_String_array *v24; // x0
  int32_t EventId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418584F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_int__string___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_string___, v3);
    sub_B2C35C(&Method_System_Func_int__string___ctor__, v4);
    sub_B2C35C(&System_Func_int__string__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Insert__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v8);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B2C35C(&Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__, v10);
    sub_B2C35C(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_699/*","*/, v12);
    byte_418584F = 1;
  }
  EventId_k__BackingField = 0;
  ScanIds_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)this->fields._ScanIds_k__BackingField;
  v14 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_49702036(
    v14,
    ScanIds_k__BackingField,
    (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
  v15 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo;
  if ( (BYTE3(SubmarineUnreleasedScanSaveInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineUnreleasedScanSaveInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
    v15 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__9_0 = (System_Func_int__BattleActionData_SideEffectData__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B2C42C(System_Func_int__string__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      _9__9_0,
      v18,
      Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__,
      (const MethodInfo_270D828 *)Method_System_Func_int__string___ctor__);
    v19 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields;
    v19->__9__9_0 = (struct System_Func_int__string__o *)_9__9_0;
    sub_B2C2F8(&v19->__9__9_0, _9__9_0);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                                                               (System_Func_TSource__TResult__o *)_9__9_0,
                                                               (const MethodInfo_1A95A8C *)Method_System_Linq_Enumerable_Select_int__string___);
  v21 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                     v20,
                                                                     (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_string___);
  EventId_k__BackingField = this->fields._EventId_k__BackingField;
  v22 = System_Int32__ToString((int32_t)&EventId_k__BackingField, 0LL);
  if ( !v21 )
    sub_B2C434(v22, v23);
  System_Collections_Generic_List_XWeaponTrail_Element___Insert(
    v21,
    0,
    (XWeaponTrail_Element_o *)v22,
    (const MethodInfo_2EF5674 *)Method_System_Collections_Generic_List_string__Insert__);
  v24 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                 (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
  return System_String__Join((System_String_o *)StringLiteral_699/*","*/, v24, 0LL);
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
  this->fields._ScanIds_k__BackingField = value;
  sub_B2C2F8(&this->fields._ScanIds_k__BackingField, value);
}


void __fastcall SubmarineUnreleasedScanSaveInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct SubmarineUnreleasedScanSaveInfo___c_StaticFields *static_fields; // x0

  if ( (byte_41847AF & 1) == 0 )
  {
    sub_B2C35C(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo, v1);
    byte_41847AF = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SubmarineUnreleasedScanSaveInfo___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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