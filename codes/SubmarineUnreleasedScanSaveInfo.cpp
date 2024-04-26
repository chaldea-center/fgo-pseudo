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
  sub_B70630(v6, (System_Int32_array **)scanIds, v7, v8, v9, v10, v11, v12);
}


SubmarineUnreleasedScanSaveInfo_o *__fastcall SubmarineUnreleasedScanSaveInfo__CreateBySaveValue(
        System_String_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_Char_array *v4; // x0
  System_Char_array *v5; // x1
  System_String_array *v6; // x20
  System_Collections_Generic_List_int__o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x8
  int v11; // w21
  __int64 v12; // x22
  __int64 v13; // x23
  __int64 v14; // x0
  unsigned __int64 v15; // x8
  __int64 v16; // x0
  System_Int32_array **v17; // x19
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v25; // x0
  __int64 v26; // x0

  if ( (byte_43535DD & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&SubmarineUnreleasedScanSaveInfo_TypeInfo);
    byte_43535DD = 1;
  }
  v3 = 0LL;
  if ( !System_String__IsNullOrEmpty(value, 0LL) )
  {
    v4 = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
    if ( v4 )
    {
      v5 = v4;
      if ( !v4->max_length )
      {
        v25 = sub_B70798(v4);
        sub_B70738(v25, 0LL);
      }
      v4->m_Items[2] = 44;
      if ( value )
      {
        v6 = System_String__Split(value, v4, 0LL);
        v7 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v7,
          (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !v6 )
          sub_B7076C(v8, v9);
        if ( !v6->max_length )
        {
          v26 = sub_B70798(v8);
          sub_B70738(v26, 0LL);
        }
        v4 = (System_Char_array *)System_Int32__Parse(v6->m_Items[0], 0LL);
        v10 = *(_QWORD *)&v6->max_length;
        v11 = (int)v4;
        if ( (int)v10 >= 2 )
        {
          if ( (v10 & 0xFFFFFFFE) == 0 )
          {
LABEL_15:
            v16 = sub_B70798(v4);
            sub_B70738(v16, 0LL);
          }
          v12 = (int)v10;
          v13 = 5LL;
          while ( 1 )
          {
            v14 = System_Int32__Parse(*((System_String_o **)&v6->obj.klass + v13), 0LL);
            if ( !v7 )
              sub_B7076C(v14, (unsigned int)v14);
            System_Collections_Generic_List_int___Add(
              v7,
              v14,
              (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
            v15 = v13 - 3;
            if ( v13 - 3 >= v12 )
              goto LABEL_17;
            ++v13;
            if ( v15 >= v6->max_length )
              goto LABEL_15;
          }
        }
        if ( v7 )
        {
LABEL_17:
          v17 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                         v7,
                                         (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
          v3 = sub_B70764(SubmarineUnreleasedScanSaveInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v3, 0LL);
          *(_DWORD *)(v3 + 16) = v11;
          *(_QWORD *)(v3 + 24) = v17;
          sub_B70630((BattleServantConfConponent_o *)(v3 + 24), v17, v18, v19, v20, v21, v22, v23);
          return (SubmarineUnreleasedScanSaveInfo_o *)v3;
        }
      }
    }
    sub_B7076C(v4, v5);
  }
  return (SubmarineUnreleasedScanSaveInfo_o *)v3;
}


System_String_o *__fastcall SubmarineUnreleasedScanSaveInfo__GetSaveValue(
        SubmarineUnreleasedScanSaveInfo_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *ScanIds_k__BackingField; // x21
  System_Collections_Generic_List_int__o *v4; // x20
  SubmarineUnreleasedScanSaveInfo___c_c *v5; // x0
  struct SubmarineUnreleasedScanSaveInfo___c_StaticFields *static_fields; // x8
  System_Func_int__BattleActionData_SideEffectData__o *_9__9_0; // x21
  Il2CppObject *v8; // x22
  struct SubmarineUnreleasedScanSaveInfo___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *v17; // x20
  System_String_o *v18; // x0
  __int64 v19; // x1
  System_String_array *v20; // x0
  int32_t EventId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_43535DC & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_string___);
    sub_B70694(&Method_System_Func_int__string___ctor__);
    sub_B70694(&System_Func_int__string__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__Insert__);
    sub_B70694(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor___69164920);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__);
    sub_B70694(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
    sub_B70694(&StringLiteral_712/*","*/);
    byte_43535DC = 1;
  }
  EventId_k__BackingField = 0;
  ScanIds_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)this->fields._ScanIds_k__BackingField;
  v4 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_51074676(
    v4,
    ScanIds_k__BackingField,
    (const MethodInfo_30B5674 *)Method_System_Collections_Generic_List_int___ctor___69164920);
  v5 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo;
  if ( (BYTE3(SubmarineUnreleasedScanSaveInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineUnreleasedScanSaveInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
    v5 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__9_0 = (System_Func_int__BattleActionData_SideEffectData__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B70764(System_Func_int__string__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      _9__9_0,
      v8,
      Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__,
      (const MethodInfo_29A71E0 *)Method_System_Func_int__string___ctor__);
    v9 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields;
    v9->__9__9_0 = (struct System_Func_int__string__o *)_9__9_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v9->__9__9_0,
      (System_Int32_array **)_9__9_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v4,
                                                               (System_Func_TSource__TResult__o *)_9__9_0,
                                                               (const MethodInfo_1CC29A4 *)Method_System_Linq_Enumerable_Select_int__string___);
  v17 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                     v16,
                                                                     (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_string___);
  EventId_k__BackingField = this->fields._EventId_k__BackingField;
  v18 = System_Int32__ToString((int32_t)&EventId_k__BackingField, 0LL);
  if ( !v17 )
    sub_B7076C(v18, v19);
  System_Collections_Generic_List_XWeaponTrail_Element___Insert(
    v17,
    0,
    (XWeaponTrail_Element_o *)v18,
    (const MethodInfo_302689C *)Method_System_Collections_Generic_List_string__Insert__);
  v20 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                 (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_string__ToArray__);
  return System_String__Join((System_String_o *)StringLiteral_712/*","*/, v20, 0LL);
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
  sub_B70630(
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
  Il2CppObject *v1; // x19
  struct SubmarineUnreleasedScanSaveInfo___c_StaticFields *static_fields; // x0

  if ( (byte_434F0D4 & 1) == 0 )
  {
    sub_B70694(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
    byte_434F0D4 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SubmarineUnreleasedScanSaveInfo___c_o *)v1;
  sub_B70630(static_fields);
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