void __fastcall CharaGraphSortOwnerBase___ctor(CharaGraphSortOwnerBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CharaGraphSortOwnerBase__DeleteContinueData(CharaGraphSortOwnerBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x0
  const MethodInfo *v9; // x1
  System_Collections_Generic_IEnumerable_T__o *SortManageUnitArray; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  CharaGraphSortOwnerBase___c_c *v16; // x0
  struct CharaGraphSortOwnerBase___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__20_1; // x20
  Il2CppObject *v19; // x21
  struct CharaGraphSortOwnerBase___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_421424E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_CharaGraphSortManageUnitBase___ctor__, method);
    sub_B0D8A4(&System_Action_CharaGraphSortManageUnitBase__TypeInfo, v3);
    sub_B0D8A4(&Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___, v4);
    sub_B0D8A4(&Method_CharaGraphSortOwnerBase__DeleteContinueData_b__20_0__, v5);
    sub_B0D8A4(&Method_CharaGraphSortOwnerBase___c__DeleteContinueData_b__20_1__, v6);
    sub_B0D8A4(&CharaGraphSortOwnerBase___c_TypeInfo, v7);
    byte_421424E = 1;
  }
  v8 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const char *))this->klass[1]._1.gc_desc)(
                            this,
                            this->klass[1]._1.name);
  if ( !System_String__IsNullOrEmpty(v8, 0LL) )
  {
    SortManageUnitArray = (System_Collections_Generic_IEnumerable_T__o *)CharaGraphSortOwnerBase__GetSortManageUnitArray(
                                                                           this,
                                                                           v9);
    v13 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_CharaGraphSortManageUnitBase__TypeInfo,
                                                                                 v11,
                                                                                 v12);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v13,
      (Il2CppObject *)this,
      Method_CharaGraphSortOwnerBase__DeleteContinueData_b__20_0__,
      (const MethodInfo_246EA3C *)Method_System_Action_CharaGraphSortManageUnitBase___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      SortManageUnitArray,
      (System_Action_T__o *)v13,
      (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
    v16 = CharaGraphSortOwnerBase___c_TypeInfo;
    if ( (BYTE3(CharaGraphSortOwnerBase___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CharaGraphSortOwnerBase___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphSortOwnerBase___c_TypeInfo);
      v16 = CharaGraphSortOwnerBase___c_TypeInfo;
    }
    static_fields = v16->static_fields;
    _9__20_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__20_1;
    if ( !_9__20_1 )
    {
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        static_fields = CharaGraphSortOwnerBase___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__20_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                        System_Action_CharaGraphSortManageUnitBase__TypeInfo,
                                                                                        v14,
                                                                                        v15);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__20_1,
        v19,
        Method_CharaGraphSortOwnerBase___c__DeleteContinueData_b__20_1__,
        (const MethodInfo_246EA3C *)Method_System_Action_CharaGraphSortManageUnitBase___ctor__);
      v20 = CharaGraphSortOwnerBase___c_TypeInfo->static_fields;
      v20->__9__20_1 = (struct System_Action_CharaGraphSortManageUnitBase__o *)_9__20_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v20->__9__20_1,
        (System_Int32_array **)_9__20_1,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      SortManageUnitArray,
      (System_Action_T__o *)_9__20_1,
      (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
  }
}


void __fastcall CharaGraphSortOwnerBase__DeleteContinueData_24050672(
        CharaGraphSortOwnerBase_o *instance,
        const MethodInfo *method)
{
  if ( !instance )
    sub_B0D97C(0LL);
  CharaGraphSortOwnerBase__DeleteContinueData(instance, method);
}


CharaGraphSortManageUnitBase_array *__fastcall CharaGraphSortOwnerBase__GetSortManageUnitArray(
        CharaGraphSortOwnerBase_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Int32_array **ServantSortManageUnit_k__BackingField; // x21
  CharaGraphSortManageUnitBase_array *v11; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **ServantEquipSortManageUnit_k__BackingField; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **CommandCodeSortManageUnit_k__BackingField; // x20
  __int64 v27; // x0
  __int64 v28; // x0

  if ( (byte_421424D & 1) == 0 )
  {
    sub_B0D8A4(&CharaGraphSortManageUnitBase___TypeInfo, method);
    byte_421424D = 1;
  }
  v3 = sub_B0D8BC(CharaGraphSortManageUnitBase___TypeInfo, 3LL);
  if ( !v3 )
    sub_B0D97C(0LL);
  ServantSortManageUnit_k__BackingField = (System_Int32_array **)this->fields._ServantSortManageUnit_k__BackingField;
  v11 = (CharaGraphSortManageUnitBase_array *)v3;
  if ( ServantSortManageUnit_k__BackingField )
  {
    v3 = sub_B0D964(this->fields._ServantSortManageUnit_k__BackingField, *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !v3 )
      goto LABEL_15;
  }
  if ( !v11->max_length )
    goto LABEL_14;
  v11->m_Items[0] = (CharaGraphSortManageUnitBase_o *)ServantSortManageUnit_k__BackingField;
  sub_B0D840(
    (BattleServantConfConponent_o *)v11->m_Items,
    ServantSortManageUnit_k__BackingField,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  ServantEquipSortManageUnit_k__BackingField = (System_Int32_array **)this->fields._ServantEquipSortManageUnit_k__BackingField;
  if ( ServantEquipSortManageUnit_k__BackingField )
  {
    v3 = sub_B0D964(this->fields._ServantEquipSortManageUnit_k__BackingField, v11->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_15;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_14;
  v11->m_Items[1] = (CharaGraphSortManageUnitBase_o *)ServantEquipSortManageUnit_k__BackingField;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v11->m_Items[1],
    ServantEquipSortManageUnit_k__BackingField,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  CommandCodeSortManageUnit_k__BackingField = (System_Int32_array **)this->fields._CommandCodeSortManageUnit_k__BackingField;
  if ( CommandCodeSortManageUnit_k__BackingField )
  {
    v3 = sub_B0D964(CommandCodeSortManageUnit_k__BackingField, v11->obj.klass->_1.element_class);
    if ( !v3 )
    {
LABEL_15:
      v28 = sub_B0D99C(v3);
      sub_B0D948(v28, 0LL);
    }
  }
  if ( v11->max_length <= 2 )
  {
LABEL_14:
    v27 = sub_B0D9A8(v3);
    sub_B0D948(v27, 0LL);
  }
  v11->m_Items[2] = (CharaGraphSortManageUnitBase_o *)CommandCodeSortManageUnit_k__BackingField;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v11->m_Items[2],
    CommandCodeSortManageUnit_k__BackingField,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  return v11;
}


void __fastcall CharaGraphSortOwnerBase__Save(CharaGraphSortOwnerBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x0
  const MethodInfo *v9; // x1
  System_Collections_Generic_IEnumerable_T__o *SortManageUnitArray; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  CharaGraphSortOwnerBase___c_c *v16; // x0
  struct CharaGraphSortOwnerBase___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__21_1; // x20
  Il2CppObject *v19; // x21
  struct CharaGraphSortOwnerBase___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_421424F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_CharaGraphSortManageUnitBase___ctor__, method);
    sub_B0D8A4(&System_Action_CharaGraphSortManageUnitBase__TypeInfo, v3);
    sub_B0D8A4(&Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___, v4);
    sub_B0D8A4(&Method_CharaGraphSortOwnerBase__Save_b__21_0__, v5);
    sub_B0D8A4(&Method_CharaGraphSortOwnerBase___c__Save_b__21_1__, v6);
    sub_B0D8A4(&CharaGraphSortOwnerBase___c_TypeInfo, v7);
    byte_421424F = 1;
  }
  v8 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const char *))this->klass[1]._1.gc_desc)(
                            this,
                            this->klass[1]._1.name);
  if ( !System_String__IsNullOrEmpty(v8, 0LL) )
  {
    SortManageUnitArray = (System_Collections_Generic_IEnumerable_T__o *)CharaGraphSortOwnerBase__GetSortManageUnitArray(
                                                                           this,
                                                                           v9);
    v13 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_CharaGraphSortManageUnitBase__TypeInfo,
                                                                                 v11,
                                                                                 v12);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v13,
      (Il2CppObject *)this,
      Method_CharaGraphSortOwnerBase__Save_b__21_0__,
      (const MethodInfo_246EA3C *)Method_System_Action_CharaGraphSortManageUnitBase___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      SortManageUnitArray,
      (System_Action_T__o *)v13,
      (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
    v16 = CharaGraphSortOwnerBase___c_TypeInfo;
    if ( (BYTE3(CharaGraphSortOwnerBase___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CharaGraphSortOwnerBase___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphSortOwnerBase___c_TypeInfo);
      v16 = CharaGraphSortOwnerBase___c_TypeInfo;
    }
    static_fields = v16->static_fields;
    _9__21_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__21_1;
    if ( !_9__21_1 )
    {
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        static_fields = CharaGraphSortOwnerBase___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__21_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                        System_Action_CharaGraphSortManageUnitBase__TypeInfo,
                                                                                        v14,
                                                                                        v15);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__21_1,
        v19,
        Method_CharaGraphSortOwnerBase___c__Save_b__21_1__,
        (const MethodInfo_246EA3C *)Method_System_Action_CharaGraphSortManageUnitBase___ctor__);
      v20 = CharaGraphSortOwnerBase___c_TypeInfo->static_fields;
      v20->__9__21_1 = (struct System_Action_CharaGraphSortManageUnitBase__o *)_9__21_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v20->__9__21_1,
        (System_Int32_array **)_9__21_1,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      SortManageUnitArray,
      (System_Action_T__o *)_9__21_1,
      (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
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
  sub_B0D840(
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
    sub_B0D840((BattleServantConfConponent_o *)&x->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
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
    sub_B0D840((BattleServantConfConponent_o *)&x->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct CharaGraphSortOwnerBase___c_StaticFields *static_fields; // x0

  if ( (byte_4211E02 & 1) == 0 )
  {
    sub_B0D8A4(&CharaGraphSortOwnerBase___c_TypeInfo, v1);
    byte_4211E02 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(CharaGraphSortOwnerBase___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = CharaGraphSortOwnerBase___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CharaGraphSortOwnerBase___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( x )
  {
    SortInfo = CharaGraphSortManageUnitBase__get_SortInfo(x, 0LL);
    if ( !SortInfo )
      sub_B0D97C(0LL);
    ListViewSort__DeleteContinueData(SortInfo, 0LL);
  }
}


void __fastcall CharaGraphSortOwnerBase___c___Save_b__21_1(
        CharaGraphSortOwnerBase___c_o *this,
        CharaGraphSortManageUnitBase_o *x,
        const MethodInfo *method)
{
  ListViewSort_o *SortInfo; // x0

  if ( x )
  {
    SortInfo = CharaGraphSortManageUnitBase__get_SortInfo(x, 0LL);
    if ( !SortInfo )
      sub_B0D97C(0LL);
    ListViewSort__Save(SortInfo, 0LL);
  }
}