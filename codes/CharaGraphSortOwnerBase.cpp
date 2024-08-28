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
  System_String_o *v7; // x0
  const MethodInfo *v8; // x1
  System_Collections_Generic_IEnumerable_T__o *SortManageUnitArray; // x19
  System_Action_object__o *v10; // x21
  CharaGraphSortOwnerBase___c_c *v11; // x0
  System_Action_object__o *_9__24_1; // x20
  Il2CppObject *v13; // x21
  struct CharaGraphSortOwnerBase___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A1EEDB & 1) == 0 )
  {
    sub_1B715CC(&System_Action_CharaGraphSortManageUnitBase__TypeInfo, method);
    sub_1B715CC(&Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___, v3);
    sub_1B715CC(&Method_CharaGraphSortOwnerBase__DeleteContinueData_b__24_0__, v4);
    sub_1B715CC(&Method_CharaGraphSortOwnerBase___c__DeleteContinueData_b__24_1__, v5);
    sub_1B715CC(&CharaGraphSortOwnerBase___c_TypeInfo, v6);
    byte_4A1EEDB = 1;
  }
  v7 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const char *))this->klass[1]._1.gc_desc)(
                            this,
                            this->klass[1]._1.name);
  if ( !System_String__IsNullOrEmpty(v7, 0LL) )
  {
    SortManageUnitArray = (System_Collections_Generic_IEnumerable_T__o *)CharaGraphSortOwnerBase__GetSortManageUnitArray(
                                                                           this,
                                                                           v8);
    v10 = (System_Action_object__o *)sub_1B71818(System_Action_CharaGraphSortManageUnitBase__TypeInfo);
    System_Action_object____ctor(
      v10,
      (Il2CppObject *)this,
      Method_CharaGraphSortOwnerBase__DeleteContinueData_b__24_0__,
      0LL);
    BasicHelper__ForEach_object_(
      SortManageUnitArray,
      (System_Action_T__o *)v10,
      (const MethodInfo_2E487A0 *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
    v11 = CharaGraphSortOwnerBase___c_TypeInfo;
    if ( !CharaGraphSortOwnerBase___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphSortOwnerBase___c_TypeInfo);
      v11 = CharaGraphSortOwnerBase___c_TypeInfo;
    }
    _9__24_1 = (System_Action_object__o *)v11->static_fields->__9__24_1;
    if ( !_9__24_1 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = CharaGraphSortOwnerBase___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__24_1 = (System_Action_object__o *)sub_1B71818(System_Action_CharaGraphSortManageUnitBase__TypeInfo);
      System_Action_object____ctor(_9__24_1, v13, Method_CharaGraphSortOwnerBase___c__DeleteContinueData_b__24_1__, 0LL);
      static_fields = CharaGraphSortOwnerBase___c_TypeInfo->static_fields;
      static_fields->__9__24_1 = (struct System_Action_CharaGraphSortManageUnitBase__o *)_9__24_1;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__24_1, (int32_t)_9__24_1, v15, v16);
    }
    BasicHelper__ForEach_object_(
      SortManageUnitArray,
      (System_Action_T__o *)_9__24_1,
      (const MethodInfo_2E487A0 *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
  }
}


void __fastcall CharaGraphSortOwnerBase__DeleteContinueData_37843300(
        CharaGraphSortOwnerBase_o *instance,
        const MethodInfo *method)
{
  if ( !instance )
    sub_1B71828(0LL, method);
  CharaGraphSortOwnerBase__DeleteContinueData(instance, method);
}


CharaGraphSortManageUnitBase_array *__fastcall CharaGraphSortOwnerBase__GetSortManageUnitArray(
        CharaGraphSortOwnerBase_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  struct CharaGraphSortManageUnitBase_o *ServantSortManageUnit_k__BackingField; // x21
  CharaGraphSortManageUnitBase_array *v8; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  struct CharaGraphSortManageUnitBase_o *ServantEquipSortManageUnit_k__BackingField; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  struct CharaGraphSortManageUnitBase_o *CommandCodeSortManageUnit_k__BackingField; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  struct CharaGraphSortManageUnitBase_o *ServantCollectionSortManageUnit_k__BackingField; // x20
  __int64 v19; // x0

  if ( (byte_4A1EEDA & 1) == 0 )
  {
    sub_1B715CC(&CharaGraphSortManageUnitBase___TypeInfo, method);
    byte_4A1EEDA = 1;
  }
  v3 = sub_1B71674(CharaGraphSortManageUnitBase___TypeInfo, 4LL);
  if ( !v3 )
    sub_1B71828(0LL, v4);
  ServantSortManageUnit_k__BackingField = this->fields._ServantSortManageUnit_k__BackingField;
  v8 = (CharaGraphSortManageUnitBase_array *)v3;
  if ( ServantSortManageUnit_k__BackingField )
  {
    v3 = sub_1B71708(this->fields._ServantSortManageUnit_k__BackingField, *(_QWORD *)(*(_QWORD *)v3 + 64LL));
    if ( !v3 )
      goto LABEL_18;
  }
  if ( !v8->max_length )
    goto LABEL_17;
  v8->m_Items[0] = ServantSortManageUnit_k__BackingField;
  sub_1B71570((ServantStatusBattleListViewItem_o *)v8->m_Items, (int32_t)ServantSortManageUnit_k__BackingField, v5, v6);
  ServantEquipSortManageUnit_k__BackingField = this->fields._ServantEquipSortManageUnit_k__BackingField;
  if ( ServantEquipSortManageUnit_k__BackingField )
  {
    v3 = sub_1B71708(this->fields._ServantEquipSortManageUnit_k__BackingField, v8->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_18;
  }
  if ( v8->max_length <= 1 )
    goto LABEL_17;
  v8->m_Items[1] = ServantEquipSortManageUnit_k__BackingField;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&v8->m_Items[1],
    (int32_t)ServantEquipSortManageUnit_k__BackingField,
    v9,
    v10);
  CommandCodeSortManageUnit_k__BackingField = this->fields._CommandCodeSortManageUnit_k__BackingField;
  if ( CommandCodeSortManageUnit_k__BackingField )
  {
    v3 = sub_1B71708(this->fields._CommandCodeSortManageUnit_k__BackingField, v8->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_18;
  }
  if ( v8->max_length <= 2 )
    goto LABEL_17;
  v8->m_Items[2] = CommandCodeSortManageUnit_k__BackingField;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&v8->m_Items[2],
    (int32_t)CommandCodeSortManageUnit_k__BackingField,
    v12,
    v13);
  ServantCollectionSortManageUnit_k__BackingField = this->fields._ServantCollectionSortManageUnit_k__BackingField;
  if ( ServantCollectionSortManageUnit_k__BackingField )
  {
    v3 = sub_1B71708(ServantCollectionSortManageUnit_k__BackingField, v8->obj.klass->_1.element_class);
    if ( !v3 )
    {
LABEL_18:
      v19 = sub_1B7184C(v3);
      sub_1B716F4(v19, 0LL);
    }
  }
  if ( v8->max_length <= 3 )
LABEL_17:
    sub_1B71830(v3, v4);
  v8->m_Items[3] = ServantCollectionSortManageUnit_k__BackingField;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&v8->m_Items[3],
    (int32_t)ServantCollectionSortManageUnit_k__BackingField,
    v15,
    v16);
  return v8;
}


void __fastcall CharaGraphSortOwnerBase__Save(CharaGraphSortOwnerBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x0
  const MethodInfo *v8; // x1
  System_Collections_Generic_IEnumerable_T__o *SortManageUnitArray; // x19
  System_Action_object__o *v10; // x21
  CharaGraphSortOwnerBase___c_c *v11; // x0
  System_Action_object__o *_9__25_1; // x20
  Il2CppObject *v13; // x21
  struct CharaGraphSortOwnerBase___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A1EEDC & 1) == 0 )
  {
    sub_1B715CC(&System_Action_CharaGraphSortManageUnitBase__TypeInfo, method);
    sub_1B715CC(&Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___, v3);
    sub_1B715CC(&Method_CharaGraphSortOwnerBase__Save_b__25_0__, v4);
    sub_1B715CC(&Method_CharaGraphSortOwnerBase___c__Save_b__25_1__, v5);
    sub_1B715CC(&CharaGraphSortOwnerBase___c_TypeInfo, v6);
    byte_4A1EEDC = 1;
  }
  v7 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const char *))this->klass[1]._1.gc_desc)(
                            this,
                            this->klass[1]._1.name);
  if ( !System_String__IsNullOrEmpty(v7, 0LL) )
  {
    SortManageUnitArray = (System_Collections_Generic_IEnumerable_T__o *)CharaGraphSortOwnerBase__GetSortManageUnitArray(
                                                                           this,
                                                                           v8);
    v10 = (System_Action_object__o *)sub_1B71818(System_Action_CharaGraphSortManageUnitBase__TypeInfo);
    System_Action_object____ctor(v10, (Il2CppObject *)this, Method_CharaGraphSortOwnerBase__Save_b__25_0__, 0LL);
    BasicHelper__ForEach_object_(
      SortManageUnitArray,
      (System_Action_T__o *)v10,
      (const MethodInfo_2E487A0 *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
    v11 = CharaGraphSortOwnerBase___c_TypeInfo;
    if ( !CharaGraphSortOwnerBase___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphSortOwnerBase___c_TypeInfo);
      v11 = CharaGraphSortOwnerBase___c_TypeInfo;
    }
    _9__25_1 = (System_Action_object__o *)v11->static_fields->__9__25_1;
    if ( !_9__25_1 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = CharaGraphSortOwnerBase___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__25_1 = (System_Action_object__o *)sub_1B71818(System_Action_CharaGraphSortManageUnitBase__TypeInfo);
      System_Action_object____ctor(_9__25_1, v13, Method_CharaGraphSortOwnerBase___c__Save_b__25_1__, 0LL);
      static_fields = CharaGraphSortOwnerBase___c_TypeInfo->static_fields;
      static_fields->__9__25_1 = (struct System_Action_CharaGraphSortManageUnitBase__o *)_9__25_1;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__25_1, (int32_t)_9__25_1, v15, v16);
    }
    BasicHelper__ForEach_object_(
      SortManageUnitArray,
      (System_Action_T__o *)_9__25_1,
      (const MethodInfo_2E487A0 *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
  }
}


void __fastcall CharaGraphSortOwnerBase__SwitchCurrentViewSortUnit(
        CharaGraphSortOwnerBase_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  int32_t v3; // w3
  CharaGraphSortOwnerBase_Fields *p_ServantCollectionSortManageUnit_k__BackingField; // x8
  struct CharaGraphSortManageUnitBase_o *ServantSortManageUnit_k__BackingField; // x1

  switch ( kind )
  {
    case 3:
      p_ServantCollectionSortManageUnit_k__BackingField = (CharaGraphSortOwnerBase_Fields *)&this->fields._ServantCollectionSortManageUnit_k__BackingField;
      break;
    case 2:
      p_ServantCollectionSortManageUnit_k__BackingField = (CharaGraphSortOwnerBase_Fields *)&this->fields._CommandCodeSortManageUnit_k__BackingField;
      break;
    case 1:
      p_ServantCollectionSortManageUnit_k__BackingField = (CharaGraphSortOwnerBase_Fields *)&this->fields._ServantEquipSortManageUnit_k__BackingField;
      break;
    default:
      p_ServantCollectionSortManageUnit_k__BackingField = &this->fields;
      break;
  }
  ServantSortManageUnit_k__BackingField = p_ServantCollectionSortManageUnit_k__BackingField->_ServantSortManageUnit_k__BackingField;
  this->fields._CurrentSortManageUnit_k__BackingField = p_ServantCollectionSortManageUnit_k__BackingField->_ServantSortManageUnit_k__BackingField;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._CurrentSortManageUnit_k__BackingField,
    (int32_t)ServantSortManageUnit_k__BackingField,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphSortOwnerBase___DeleteContinueData_b__24_0(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *x,
        const MethodInfo *method)
{
  struct System_String_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( x )
  {
    v4 = (struct System_String_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const char *, const MethodInfo *))this->klass[1]._1.gc_desc)(
                                     this,
                                     this->klass[1]._1.name,
                                     method);
    x->fields._SortSaveKeyPrefix_k__BackingField = v4;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&x->fields, (int32_t)v4, v5, v6);
  }
}


void __fastcall CharaGraphSortOwnerBase___Save_b__25_0(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *x,
        const MethodInfo *method)
{
  struct System_String_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( x )
  {
    v4 = (struct System_String_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const char *, const MethodInfo *))this->klass[1]._1.gc_desc)(
                                     this,
                                     this->klass[1]._1.name,
                                     method);
    x->fields._SortSaveKeyPrefix_k__BackingField = v4;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&x->fields, (int32_t)v4, v5, v6);
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


CharaGraphSortManageUnitBase_o *__fastcall CharaGraphSortOwnerBase__get_ServantCollectionSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantCollectionSortManageUnit_k__BackingField;
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
  int32_t v3; // w3

  this->fields._CommandCodeSortManageUnit_k__BackingField = value;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._CommandCodeSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphSortOwnerBase__set_CurrentSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._CurrentSortManageUnit_k__BackingField = value;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._CurrentSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphSortOwnerBase__set_ServantCollectionSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._ServantCollectionSortManageUnit_k__BackingField = value;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._ServantCollectionSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphSortOwnerBase__set_ServantEquipSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._ServantEquipSortManageUnit_k__BackingField = value;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphSortOwnerBase__set_ServantSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._ServantSortManageUnit_k__BackingField = value;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall CharaGraphSortOwnerBase___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A1EEDD & 1) == 0 )
  {
    sub_1B715CC(&CharaGraphSortOwnerBase___c_TypeInfo, v1);
    byte_4A1EEDD = 1;
  }
  v2 = (Il2CppObject *)sub_1B71818(CharaGraphSortOwnerBase___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CharaGraphSortOwnerBase___c_TypeInfo->static_fields->__9 = (struct CharaGraphSortOwnerBase___c_o *)v2;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)CharaGraphSortOwnerBase___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall CharaGraphSortOwnerBase___c___ctor(CharaGraphSortOwnerBase___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CharaGraphSortOwnerBase___c___DeleteContinueData_b__24_1(
        CharaGraphSortOwnerBase___c_o *this,
        CharaGraphSortManageUnitBase_o *x,
        const MethodInfo *method)
{
  ListViewSort_o *SortInfo; // x0
  __int64 v4; // x1

  if ( x )
  {
    SortInfo = CharaGraphSortManageUnitBase__get_SortInfo(x, (const MethodInfo *)x);
    if ( !SortInfo )
      sub_1B71828(0LL, v4);
    ListViewSort__DeleteContinueData(SortInfo, 0LL);
  }
}


void __fastcall CharaGraphSortOwnerBase___c___Save_b__25_1(
        CharaGraphSortOwnerBase___c_o *this,
        CharaGraphSortManageUnitBase_o *x,
        const MethodInfo *method)
{
  ListViewSort_o *SortInfo; // x0
  __int64 v4; // x1

  if ( x )
  {
    SortInfo = CharaGraphSortManageUnitBase__get_SortInfo(x, (const MethodInfo *)x);
    if ( !SortInfo )
      sub_1B71828(0LL, v4);
    ListViewSort__Save(SortInfo, 0LL);
  }
}