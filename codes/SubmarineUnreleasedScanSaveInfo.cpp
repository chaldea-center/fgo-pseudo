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
  sub_B16F98(v6, (System_Int32_array **)scanIds, v7, v8, v9, v10, v11, v12);
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
  __int64 v8; // x2
  __int64 v9; // x20
  System_Char_array *v10; // x0
  __int64 v11; // x2
  System_String_array *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_int__o *v17; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x8
  int v25; // w21
  __int64 v26; // x22
  __int64 v27; // x23
  int32_t v28; // w1
  unsigned __int64 v29; // x8
  System_Int32_array **v30; // x19
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_40F7CE4 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B16FFC(&SubmarineUnreleasedScanSaveInfo_TypeInfo, v7);
    byte_40F7CE4 = 1;
  }
  v9 = 0LL;
  if ( !System_String__IsNullOrEmpty(value, 0LL) )
  {
    v10 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v8);
    if ( v10 )
    {
      if ( !v10->max_length )
      {
        sub_B17100(v10, v10, v11);
        sub_B170A0();
      }
      v10->m_Items[2] = 44;
      if ( value )
      {
        v12 = System_String__Split(value, v10, 0LL);
        v17 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                          System_Collections_Generic_List_int__TypeInfo,
                                                          v13,
                                                          v14,
                                                          v15,
                                                          v16);
        System_Collections_Generic_List_int____ctor(
          v17,
          (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
        if ( !v12 )
          sub_B170D4();
        if ( !v12->max_length )
        {
          sub_B17100(v18, v19, v20);
          sub_B170A0();
        }
        v21 = System_Int32__Parse(v12->m_Items[0], 0LL);
        v24 = *(_QWORD *)&v12->max_length;
        v25 = v21;
        if ( (int)v24 >= 2 )
        {
          if ( (v24 & 0xFFFFFFFE) == 0 )
          {
LABEL_15:
            sub_B17100(v21, v22, v23);
            sub_B170A0();
          }
          v26 = (int)v24;
          v27 = 5LL;
          while ( 1 )
          {
            v28 = System_Int32__Parse(*((System_String_o **)&v12->obj.klass + v27), 0LL);
            if ( !v17 )
              sub_B170D4();
            System_Collections_Generic_List_int___Add(
              v17,
              v28,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
            v29 = v27 - 3;
            if ( v27 - 3 >= v26 )
              goto LABEL_17;
            ++v27;
            if ( v29 >= v12->max_length )
              goto LABEL_15;
          }
        }
        if ( v17 )
        {
LABEL_17:
          v30 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                         v17,
                                         (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
          v9 = sub_B170CC(SubmarineUnreleasedScanSaveInfo_TypeInfo, v31, v32, v33, v34);
          System_Object___ctor((Il2CppObject *)v9, 0LL);
          *(_DWORD *)(v9 + 16) = v25;
          *(_QWORD *)(v9 + 24) = v30;
          sub_B16F98((BattleServantConfConponent_o *)(v9 + 24), v30, v35, v36, v37, v38, v39, v40);
          return (SubmarineUnreleasedScanSaveInfo_o *)v9;
        }
      }
    }
    sub_B170D4();
  }
  return (SubmarineUnreleasedScanSaveInfo_o *)v9;
}


System_String_o *__fastcall SubmarineUnreleasedScanSaveInfo__GetSaveValue(
        SubmarineUnreleasedScanSaveInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_IEnumerable_T__o *ScanIds_k__BackingField; // x21
  System_Collections_Generic_List_int__o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  SubmarineUnreleasedScanSaveInfo___c_c *v22; // x0
  struct SubmarineUnreleasedScanSaveInfo___c_StaticFields *static_fields; // x8
  System_Func_int__BattleActionData_SideEffectData__o *_9__9_0; // x21
  Il2CppObject *v25; // x22
  struct SubmarineUnreleasedScanSaveInfo___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *v34; // x20
  System_String_o *v35; // x0
  System_String_array *v36; // x0
  int32_t EventId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F7CE3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_int__string___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_string___, v6);
    sub_B16FFC(&Method_System_Func_int__string___ctor__, v7);
    sub_B16FFC(&System_Func_int__string__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Insert__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v11);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B16FFC(&Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__, v13);
    sub_B16FFC(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_698, v15);
    byte_40F7CE3 = 1;
  }
  EventId_k__BackingField = 0;
  ScanIds_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)this->fields._ScanIds_k__BackingField;
  v17 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor_49346956(
    v17,
    ScanIds_k__BackingField,
    (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
  v22 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo;
  if ( (BYTE3(SubmarineUnreleasedScanSaveInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineUnreleasedScanSaveInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineUnreleasedScanSaveInfo___c_TypeInfo);
    v22 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__9_0 = (System_Func_int__BattleActionData_SideEffectData__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B170CC(
                                                                       System_Func_int__string__TypeInfo,
                                                                       v18,
                                                                       v19,
                                                                       v20,
                                                                       v21);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      _9__9_0,
      v25,
      Method_SubmarineUnreleasedScanSaveInfo___c__GetSaveValue_b__9_0__,
      (const MethodInfo_2B66764 *)Method_System_Func_int__string___ctor__);
    v26 = SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields;
    v26->__9__9_0 = (struct System_Func_int__string__o *)_9__9_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v26->__9__9_0,
      (System_Int32_array **)_9__9_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                                               (System_Func_TSource__TResult__o *)_9__9_0,
                                                               (const MethodInfo_19BF868 *)Method_System_Linq_Enumerable_Select_int__string___);
  v34 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                     v33,
                                                                     (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_string___);
  EventId_k__BackingField = this->fields._EventId_k__BackingField;
  v35 = System_Int32__ToString((int32_t)&EventId_k__BackingField, 0LL);
  if ( !v34 )
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Insert(
    v34,
    0,
    (XWeaponTrail_Element_o *)v35,
    (const MethodInfo_2F26EEC *)Method_System_Collections_Generic_List_string__Insert__);
  v36 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v34,
                                 (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
  return System_String__Join((System_String_o *)StringLiteral_698, v36, 0LL);
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
  sub_B16F98(
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7A7E & 1) == 0 )
  {
    sub_B16FFC(&SubmarineUnreleasedScanSaveInfo___c_TypeInfo, v1);
    byte_40F7A7E = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(SubmarineUnreleasedScanSaveInfo___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)SubmarineUnreleasedScanSaveInfo___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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