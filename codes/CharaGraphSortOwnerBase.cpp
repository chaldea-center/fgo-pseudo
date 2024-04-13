void __fastcall CharaGraphSortOwnerBase___ctor(CharaGraphSortOwnerBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CharaGraphSortOwnerBase__DeleteContinueData(CharaGraphSortOwnerBase_o *this, const MethodInfo *method)
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
  System_String_o *v20; // x0
  const MethodInfo *v21; // x1
  System_Collections_Generic_IEnumerable_T__o *SortManageUnitArray; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v23; // x21
  CharaGraphSortOwnerBase___c_c *v24; // x0
  struct CharaGraphSortOwnerBase___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__20_1; // x20
  Il2CppObject *v27; // x21
  struct CharaGraphSortOwnerBase___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_42E9704 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_CharaGraphSortManageUnitBase___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_CharaGraphSortManageUnitBase__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___, v8, v9, v10);
    sub_B5D5C4(&Method_CharaGraphSortOwnerBase__DeleteContinueData_b__20_0__, v11, v12, v13);
    sub_B5D5C4(&Method_CharaGraphSortOwnerBase___c__DeleteContinueData_b__20_1__, v14, v15, v16);
    sub_B5D5C4(&CharaGraphSortOwnerBase___c_TypeInfo, v17, v18, v19);
    byte_42E9704 = 1;
  }
  v20 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const char *))this->klass[1]._1.gc_desc)(
                             this,
                             this->klass[1]._1.name);
  if ( !System_String__IsNullOrEmpty(v20, 0LL) )
  {
    SortManageUnitArray = (System_Collections_Generic_IEnumerable_T__o *)CharaGraphSortOwnerBase__GetSortManageUnitArray(
                                                                           this,
                                                                           v21);
    v23 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_CharaGraphSortManageUnitBase__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v23,
      (Il2CppObject *)this,
      Method_CharaGraphSortOwnerBase__DeleteContinueData_b__20_0__,
      (const MethodInfo_258B320 *)Method_System_Action_CharaGraphSortManageUnitBase___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      SortManageUnitArray,
      (System_Action_T__o *)v23,
      (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
    v24 = CharaGraphSortOwnerBase___c_TypeInfo;
    if ( (BYTE3(CharaGraphSortOwnerBase___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CharaGraphSortOwnerBase___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphSortOwnerBase___c_TypeInfo);
      v24 = CharaGraphSortOwnerBase___c_TypeInfo;
    }
    static_fields = v24->static_fields;
    _9__20_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__20_1;
    if ( !_9__20_1 )
    {
      if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        static_fields = CharaGraphSortOwnerBase___c_TypeInfo->static_fields;
      }
      v27 = (Il2CppObject *)static_fields->__9;
      _9__20_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_CharaGraphSortManageUnitBase__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__20_1,
        v27,
        Method_CharaGraphSortOwnerBase___c__DeleteContinueData_b__20_1__,
        (const MethodInfo_258B320 *)Method_System_Action_CharaGraphSortManageUnitBase___ctor__);
      v28 = CharaGraphSortOwnerBase___c_TypeInfo->static_fields;
      v28->__9__20_1 = (struct System_Action_CharaGraphSortManageUnitBase__o *)_9__20_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v28->__9__20_1,
        (System_Int32_array **)_9__20_1,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
    }
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      SortManageUnitArray,
      (System_Action_T__o *)_9__20_1,
      (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
  }
}


void __fastcall CharaGraphSortOwnerBase__DeleteContinueData_26729284(
        CharaGraphSortOwnerBase_o *instance,
        const MethodInfo *method)
{
  if ( !instance )
    sub_B5D69C(0LL, method);
  CharaGraphSortOwnerBase__DeleteContinueData(instance, method);
}


CharaGraphSortManageUnitBase_array *__fastcall CharaGraphSortOwnerBase__GetSortManageUnitArray(
        CharaGraphSortOwnerBase_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **ServantSortManageUnit_k__BackingField; // x21
  CharaGraphSortManageUnitBase_array *v14; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **ServantEquipSortManageUnit_k__BackingField; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **CommandCodeSortManageUnit_k__BackingField; // x20
  __int64 v30; // x0
  __int64 v31; // x0

  if ( (byte_42E9703 & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphSortManageUnitBase___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9703 = 1;
  }
  v5 = sub_B5D5DC(CharaGraphSortManageUnitBase___TypeInfo, 3LL);
  if ( !v5 )
    sub_B5D69C(0LL, v6);
  ServantSortManageUnit_k__BackingField = (System_Int32_array **)this->fields._ServantSortManageUnit_k__BackingField;
  v14 = (CharaGraphSortManageUnitBase_array *)v5;
  if ( ServantSortManageUnit_k__BackingField )
  {
    v5 = sub_B5D684(this->fields._ServantSortManageUnit_k__BackingField, *(_QWORD *)(*(_QWORD *)v5 + 64LL));
    if ( !v5 )
      goto LABEL_15;
  }
  if ( !v14->max_length )
    goto LABEL_14;
  v14->m_Items[0] = (CharaGraphSortManageUnitBase_o *)ServantSortManageUnit_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)v14->m_Items,
    ServantSortManageUnit_k__BackingField,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  ServantEquipSortManageUnit_k__BackingField = (System_Int32_array **)this->fields._ServantEquipSortManageUnit_k__BackingField;
  if ( ServantEquipSortManageUnit_k__BackingField )
  {
    v5 = sub_B5D684(this->fields._ServantEquipSortManageUnit_k__BackingField, v14->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_15;
  }
  if ( v14->max_length <= 1 )
    goto LABEL_14;
  v14->m_Items[1] = (CharaGraphSortManageUnitBase_o *)ServantEquipSortManageUnit_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v14->m_Items[1],
    ServantEquipSortManageUnit_k__BackingField,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  CommandCodeSortManageUnit_k__BackingField = (System_Int32_array **)this->fields._CommandCodeSortManageUnit_k__BackingField;
  if ( CommandCodeSortManageUnit_k__BackingField )
  {
    v5 = sub_B5D684(CommandCodeSortManageUnit_k__BackingField, v14->obj.klass->_1.element_class);
    if ( !v5 )
    {
LABEL_15:
      v31 = sub_B5D6BC(v5);
      sub_B5D668(v31, 0LL);
    }
  }
  if ( v14->max_length <= 2 )
  {
LABEL_14:
    v30 = sub_B5D6C8(v5);
    sub_B5D668(v30, 0LL);
  }
  v14->m_Items[2] = (CharaGraphSortManageUnitBase_o *)CommandCodeSortManageUnit_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v14->m_Items[2],
    CommandCodeSortManageUnit_k__BackingField,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  return v14;
}


void __fastcall CharaGraphSortOwnerBase__Save(CharaGraphSortOwnerBase_o *this, const MethodInfo *method)
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
  System_String_o *v20; // x0
  const MethodInfo *v21; // x1
  System_Collections_Generic_IEnumerable_T__o *SortManageUnitArray; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v23; // x21
  CharaGraphSortOwnerBase___c_c *v24; // x0
  struct CharaGraphSortOwnerBase___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__21_1; // x20
  Il2CppObject *v27; // x21
  struct CharaGraphSortOwnerBase___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_42E9705 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_CharaGraphSortManageUnitBase___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_CharaGraphSortManageUnitBase__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___, v8, v9, v10);
    sub_B5D5C4(&Method_CharaGraphSortOwnerBase__Save_b__21_0__, v11, v12, v13);
    sub_B5D5C4(&Method_CharaGraphSortOwnerBase___c__Save_b__21_1__, v14, v15, v16);
    sub_B5D5C4(&CharaGraphSortOwnerBase___c_TypeInfo, v17, v18, v19);
    byte_42E9705 = 1;
  }
  v20 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const char *))this->klass[1]._1.gc_desc)(
                             this,
                             this->klass[1]._1.name);
  if ( !System_String__IsNullOrEmpty(v20, 0LL) )
  {
    SortManageUnitArray = (System_Collections_Generic_IEnumerable_T__o *)CharaGraphSortOwnerBase__GetSortManageUnitArray(
                                                                           this,
                                                                           v21);
    v23 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_CharaGraphSortManageUnitBase__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v23,
      (Il2CppObject *)this,
      Method_CharaGraphSortOwnerBase__Save_b__21_0__,
      (const MethodInfo_258B320 *)Method_System_Action_CharaGraphSortManageUnitBase___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      SortManageUnitArray,
      (System_Action_T__o *)v23,
      (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
    v24 = CharaGraphSortOwnerBase___c_TypeInfo;
    if ( (BYTE3(CharaGraphSortOwnerBase___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CharaGraphSortOwnerBase___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphSortOwnerBase___c_TypeInfo);
      v24 = CharaGraphSortOwnerBase___c_TypeInfo;
    }
    static_fields = v24->static_fields;
    _9__21_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__21_1;
    if ( !_9__21_1 )
    {
      if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        static_fields = CharaGraphSortOwnerBase___c_TypeInfo->static_fields;
      }
      v27 = (Il2CppObject *)static_fields->__9;
      _9__21_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_CharaGraphSortManageUnitBase__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__21_1,
        v27,
        Method_CharaGraphSortOwnerBase___c__Save_b__21_1__,
        (const MethodInfo_258B320 *)Method_System_Action_CharaGraphSortManageUnitBase___ctor__);
      v28 = CharaGraphSortOwnerBase___c_TypeInfo->static_fields;
      v28->__9__21_1 = (struct System_Action_CharaGraphSortManageUnitBase__o *)_9__21_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v28->__9__21_1,
        (System_Int32_array **)_9__21_1,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
    }
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      SortManageUnitArray,
      (System_Action_T__o *)_9__21_1,
      (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
  }
}


void __fastcall CharaGraphSortOwnerBase__SwitchCurrentViewSortUnit(
        CharaGraphSortOwnerBase_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  CharaGraphSortOwnerBase_Fields *p_CommandCodeSortManageUnit_k__BackingField; // x8
  struct CharaGraphSortManageUnitBase_o *ServantSortManageUnit_k__BackingField; // x1

  if ( kind == 2 )
  {
    p_CommandCodeSortManageUnit_k__BackingField = (CharaGraphSortOwnerBase_Fields *)&this->fields._CommandCodeSortManageUnit_k__BackingField;
  }
  else if ( kind == 1 )
  {
    p_CommandCodeSortManageUnit_k__BackingField = (CharaGraphSortOwnerBase_Fields *)&this->fields._ServantEquipSortManageUnit_k__BackingField;
  }
  else
  {
    p_CommandCodeSortManageUnit_k__BackingField = &this->fields;
  }
  ServantSortManageUnit_k__BackingField = p_CommandCodeSortManageUnit_k__BackingField->_ServantSortManageUnit_k__BackingField;
  this->fields._CurrentSortManageUnit_k__BackingField = p_CommandCodeSortManageUnit_k__BackingField->_ServantSortManageUnit_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._CurrentSortManageUnit_k__BackingField,
    (System_Int32_array **)ServantSortManageUnit_k__BackingField,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphSortOwnerBase___DeleteContinueData_b__20_0(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *x,
        const MethodInfo *method)
{
  struct System_String_o *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( x )
  {
    v4 = (struct System_String_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const char *, const MethodInfo *))this->klass[1]._1.gc_desc)(
                                     this,
                                     this->klass[1]._1.name,
                                     method);
    x->fields._SortSaveKeyPrefix_k__BackingField = v4;
    sub_B5D560((BattleServantConfConponent_o *)&x->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
  }
}


void __fastcall CharaGraphSortOwnerBase___Save_b__21_0(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *x,
        const MethodInfo *method)
{
  struct System_String_o *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( x )
  {
    v4 = (struct System_String_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const char *, const MethodInfo *))this->klass[1]._1.gc_desc)(
                                     this,
                                     this->klass[1]._1.name,
                                     method);
    x->fields._SortSaveKeyPrefix_k__BackingField = v4;
    sub_B5D560((BattleServantConfConponent_o *)&x->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
  }
}


CharaGraphSortManageUnitBase_o *__fastcall CharaGraphSortOwnerBase__get_CommandCodeSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        const MethodInfo *method)
{
  return this->fields._CommandCodeSortManageUnit_k__BackingField;
}


CharaGraphSortManageUnitBase_o *__fastcall CharaGraphSortOwnerBase__get_CurrentSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        const MethodInfo *method)
{
  return this->fields._CurrentSortManageUnit_k__BackingField;
}


CharaGraphSortManageUnitBase_o *__fastcall CharaGraphSortOwnerBase__get_ServantEquipSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantEquipSortManageUnit_k__BackingField;
}


CharaGraphSortManageUnitBase_o *__fastcall CharaGraphSortOwnerBase__get_ServantSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantSortManageUnit_k__BackingField;
}


void __fastcall CharaGraphSortOwnerBase__set_CommandCodeSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._CommandCodeSortManageUnit_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._CommandCodeSortManageUnit_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphSortOwnerBase__set_CurrentSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._CurrentSortManageUnit_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._CurrentSortManageUnit_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphSortOwnerBase__set_ServantEquipSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ServantEquipSortManageUnit_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphSortOwnerBase__set_ServantSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ServantSortManageUnit_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphSortOwnerBase___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct CharaGraphSortOwnerBase___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E5B & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphSortOwnerBase___c_TypeInfo, v1, v2, v3);
    byte_42E5E5B = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(CharaGraphSortOwnerBase___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = CharaGraphSortOwnerBase___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CharaGraphSortOwnerBase___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall CharaGraphSortOwnerBase___c___ctor(CharaGraphSortOwnerBase___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CharaGraphSortOwnerBase___c___DeleteContinueData_b__20_1(
        CharaGraphSortOwnerBase___c_o *this,
        CharaGraphSortManageUnitBase_o *x,
        const MethodInfo *method)
{
  ListViewSort_o *SortInfo; // x0
  __int64 v4; // x1

  if ( x )
  {
    SortInfo = CharaGraphSortManageUnitBase__get_SortInfo(x, 0LL);
    if ( !SortInfo )
      sub_B5D69C(0LL, v4);
    ListViewSort__DeleteContinueData(SortInfo, 0LL);
  }
}


void __fastcall CharaGraphSortOwnerBase___c___Save_b__21_1(
        CharaGraphSortOwnerBase___c_o *this,
        CharaGraphSortManageUnitBase_o *x,
        const MethodInfo *method)
{
  ListViewSort_o *SortInfo; // x0
  __int64 v4; // x1

  if ( x )
  {
    SortInfo = CharaGraphSortManageUnitBase__get_SortInfo(x, 0LL);
    if ( !SortInfo )
      sub_B5D69C(0LL, v4);
    ListViewSort__Save(SortInfo, 0LL);
  }
}