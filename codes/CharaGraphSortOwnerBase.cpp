void __fastcall CharaGraphSortOwnerBase___ctor(CharaGraphSortOwnerBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CharaGraphSortOwnerBase__DeleteContinueData(CharaGraphSortOwnerBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x0
  const MethodInfo *v13; // x1
  System_Collections_Generic_IEnumerable_T__o *SortManageUnitArray; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_object__o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  CharaGraphSortOwnerBase___c_c *v22; // x0
  System_Action_object__o *_9__24_1; // x20
  Il2CppObject *v24; // x21
  struct CharaGraphSortOwnerBase___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4B155CD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_CharaGraphSortManageUnitBase__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___, v4, v5);
    sub_1BCA7E0(&Method_CharaGraphSortOwnerBase__DeleteContinueData_b__24_0__, v6, v7);
    sub_1BCA7E0(&Method_CharaGraphSortOwnerBase___c__DeleteContinueData_b__24_1__, v8, v9);
    sub_1BCA7E0(&CharaGraphSortOwnerBase___c_TypeInfo, v10, v11);
    byte_4B155CD = 1;
  }
  v12 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const char *))this->klass[1]._1.gc_desc)(
                             this,
                             this->klass[1]._1.name);
  if ( !System_String__IsNullOrEmpty(v12, 0LL) )
  {
    SortManageUnitArray = (System_Collections_Generic_IEnumerable_T__o *)CharaGraphSortOwnerBase__GetSortManageUnitArray(
                                                                           this,
                                                                           v13);
    v18 = (System_Action_object__o *)sub_1BCAA2C(System_Action_CharaGraphSortManageUnitBase__TypeInfo, v15, v16, v17);
    System_Action_object____ctor(
      v18,
      (Il2CppObject *)this,
      Method_CharaGraphSortOwnerBase__DeleteContinueData_b__24_0__,
      0LL);
    BasicHelper__ForEach_object_(
      SortManageUnitArray,
      (System_Action_T__o *)v18,
      (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
    v22 = CharaGraphSortOwnerBase___c_TypeInfo;
    if ( !CharaGraphSortOwnerBase___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphSortOwnerBase___c_TypeInfo, v19);
      v22 = CharaGraphSortOwnerBase___c_TypeInfo;
    }
    _9__24_1 = (System_Action_object__o *)v22->static_fields->__9__24_1;
    if ( !_9__24_1 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22, v19);
        v22 = CharaGraphSortOwnerBase___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v22->static_fields->__9;
      _9__24_1 = (System_Action_object__o *)sub_1BCAA2C(
                                              System_Action_CharaGraphSortManageUnitBase__TypeInfo,
                                              v19,
                                              v20,
                                              v21);
      System_Action_object____ctor(_9__24_1, v24, Method_CharaGraphSortOwnerBase___c__DeleteContinueData_b__24_1__, 0LL);
      static_fields = CharaGraphSortOwnerBase___c_TypeInfo->static_fields;
      static_fields->__9__24_1 = (struct System_Action_CharaGraphSortManageUnitBase__o *)_9__24_1;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__24_1,
        (int64_t)_9__24_1,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    BasicHelper__ForEach_object_(
      SortManageUnitArray,
      (System_Action_T__o *)_9__24_1,
      (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
  }
}


void __fastcall CharaGraphSortOwnerBase__DeleteContinueData_38761512(
        CharaGraphSortOwnerBase_o *instance,
        const MethodInfo *method)
{
  if ( !instance )
    sub_1BCAA3C(0LL, method);
  CharaGraphSortOwnerBase__DeleteContinueData(instance, method);
}


CharaGraphSortManageUnitBase_array *__fastcall CharaGraphSortOwnerBase__GetSortManageUnitArray(
        CharaGraphSortOwnerBase_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct CharaGraphSortManageUnitBase_o *ServantSortManageUnit_k__BackingField; // x21
  CharaGraphSortManageUnitBase_array *v13; // x19
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct CharaGraphSortManageUnitBase_o *ServantEquipSortManageUnit_k__BackingField; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct CharaGraphSortManageUnitBase_o *CommandCodeSortManageUnit_k__BackingField; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct CharaGraphSortManageUnitBase_o *ServantCollectionSortManageUnit_k__BackingField; // x20
  __int64 v36; // x0

  if ( (byte_4B155CC & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphSortManageUnitBase___TypeInfo, method, v2);
    byte_4B155CC = 1;
  }
  v4 = sub_1BCA888(CharaGraphSortManageUnitBase___TypeInfo, 4LL);
  if ( !v4 )
    sub_1BCAA3C(0LL, v5);
  ServantSortManageUnit_k__BackingField = this->fields._ServantSortManageUnit_k__BackingField;
  v13 = (CharaGraphSortManageUnitBase_array *)v4;
  if ( ServantSortManageUnit_k__BackingField )
  {
    v4 = sub_1BCA91C(this->fields._ServantSortManageUnit_k__BackingField, *(_QWORD *)(*(_QWORD *)v4 + 64LL));
    if ( !v4 )
      goto LABEL_18;
  }
  if ( !v13->max_length )
    goto LABEL_17;
  v13->m_Items[0] = ServantSortManageUnit_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)v13->m_Items,
    (int64_t)ServantSortManageUnit_k__BackingField,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  ServantEquipSortManageUnit_k__BackingField = this->fields._ServantEquipSortManageUnit_k__BackingField;
  if ( ServantEquipSortManageUnit_k__BackingField )
  {
    v4 = sub_1BCA91C(this->fields._ServantEquipSortManageUnit_k__BackingField, v13->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_18;
  }
  if ( v13->max_length <= 1 )
    goto LABEL_17;
  v13->m_Items[1] = ServantEquipSortManageUnit_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v13->m_Items[1],
    (int64_t)ServantEquipSortManageUnit_k__BackingField,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  CommandCodeSortManageUnit_k__BackingField = this->fields._CommandCodeSortManageUnit_k__BackingField;
  if ( CommandCodeSortManageUnit_k__BackingField )
  {
    v4 = sub_1BCA91C(this->fields._CommandCodeSortManageUnit_k__BackingField, v13->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_18;
  }
  if ( v13->max_length <= 2 )
    goto LABEL_17;
  v13->m_Items[2] = CommandCodeSortManageUnit_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v13->m_Items[2],
    (int64_t)CommandCodeSortManageUnit_k__BackingField,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  ServantCollectionSortManageUnit_k__BackingField = this->fields._ServantCollectionSortManageUnit_k__BackingField;
  if ( ServantCollectionSortManageUnit_k__BackingField )
  {
    v4 = sub_1BCA91C(ServantCollectionSortManageUnit_k__BackingField, v13->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_18:
      v36 = sub_1BCAA60(v4);
      sub_1BCA908(v36, 0LL);
    }
  }
  if ( v13->max_length <= 3 )
LABEL_17:
    sub_1BCAA44(v4, v5);
  v13->m_Items[3] = ServantCollectionSortManageUnit_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v13->m_Items[3],
    (int64_t)ServantCollectionSortManageUnit_k__BackingField,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  return v13;
}


void __fastcall CharaGraphSortOwnerBase__Save(CharaGraphSortOwnerBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x0
  const MethodInfo *v13; // x1
  System_Collections_Generic_IEnumerable_T__o *SortManageUnitArray; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_object__o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  CharaGraphSortOwnerBase___c_c *v22; // x0
  System_Action_object__o *_9__25_1; // x20
  Il2CppObject *v24; // x21
  struct CharaGraphSortOwnerBase___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4B155CE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_CharaGraphSortManageUnitBase__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___, v4, v5);
    sub_1BCA7E0(&Method_CharaGraphSortOwnerBase__Save_b__25_0__, v6, v7);
    sub_1BCA7E0(&Method_CharaGraphSortOwnerBase___c__Save_b__25_1__, v8, v9);
    sub_1BCA7E0(&CharaGraphSortOwnerBase___c_TypeInfo, v10, v11);
    byte_4B155CE = 1;
  }
  v12 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const char *))this->klass[1]._1.gc_desc)(
                             this,
                             this->klass[1]._1.name);
  if ( !System_String__IsNullOrEmpty(v12, 0LL) )
  {
    SortManageUnitArray = (System_Collections_Generic_IEnumerable_T__o *)CharaGraphSortOwnerBase__GetSortManageUnitArray(
                                                                           this,
                                                                           v13);
    v18 = (System_Action_object__o *)sub_1BCAA2C(System_Action_CharaGraphSortManageUnitBase__TypeInfo, v15, v16, v17);
    System_Action_object____ctor(v18, (Il2CppObject *)this, Method_CharaGraphSortOwnerBase__Save_b__25_0__, 0LL);
    BasicHelper__ForEach_object_(
      SortManageUnitArray,
      (System_Action_T__o *)v18,
      (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
    v22 = CharaGraphSortOwnerBase___c_TypeInfo;
    if ( !CharaGraphSortOwnerBase___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphSortOwnerBase___c_TypeInfo, v19);
      v22 = CharaGraphSortOwnerBase___c_TypeInfo;
    }
    _9__25_1 = (System_Action_object__o *)v22->static_fields->__9__25_1;
    if ( !_9__25_1 )
    {
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22, v19);
        v22 = CharaGraphSortOwnerBase___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v22->static_fields->__9;
      _9__25_1 = (System_Action_object__o *)sub_1BCAA2C(
                                              System_Action_CharaGraphSortManageUnitBase__TypeInfo,
                                              v19,
                                              v20,
                                              v21);
      System_Action_object____ctor(_9__25_1, v24, Method_CharaGraphSortOwnerBase___c__Save_b__25_1__, 0LL);
      static_fields = CharaGraphSortOwnerBase___c_TypeInfo->static_fields;
      static_fields->__9__25_1 = (struct System_Action_CharaGraphSortManageUnitBase__o *)_9__25_1;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__25_1,
        (int64_t)_9__25_1,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
    }
    BasicHelper__ForEach_object_(
      SortManageUnitArray,
      (System_Action_T__o *)_9__25_1,
      (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
  }
}


void __fastcall CharaGraphSortOwnerBase__SwitchCurrentViewSortUnit(
        CharaGraphSortOwnerBase_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CurrentSortManageUnit_k__BackingField,
    (int64_t)ServantSortManageUnit_k__BackingField,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphSortOwnerBase___DeleteContinueData_b__24_0(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *x,
        const MethodInfo *method)
{
  struct System_String_o *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( x )
  {
    v4 = (struct System_String_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const char *, const MethodInfo *))this->klass[1]._1.gc_desc)(
                                     this,
                                     this->klass[1]._1.name,
                                     method);
    x->fields._SortSaveKeyPrefix_k__BackingField = v4;
    sub_1BCA784((PartyOrganizationUtility_o *)&x->fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  }
}


void __fastcall CharaGraphSortOwnerBase___Save_b__25_0(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *x,
        const MethodInfo *method)
{
  struct System_String_o *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( x )
  {
    v4 = (struct System_String_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const char *, const MethodInfo *))this->klass[1]._1.gc_desc)(
                                     this,
                                     this->klass[1]._1.name,
                                     method);
    x->fields._SortSaveKeyPrefix_k__BackingField = v4;
    sub_1BCA784((PartyOrganizationUtility_o *)&x->fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._CommandCodeSortManageUnit_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CommandCodeSortManageUnit_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._CurrentSortManageUnit_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CurrentSortManageUnit_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphSortOwnerBase__set_ServantCollectionSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ServantCollectionSortManageUnit_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ServantCollectionSortManageUnit_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ServantEquipSortManageUnit_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ServantSortManageUnit_k__BackingField = value;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall CharaGraphSortOwnerBase___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B155CF & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphSortOwnerBase___c_TypeInfo, v1, v2);
    byte_4B155CF = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(CharaGraphSortOwnerBase___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  CharaGraphSortOwnerBase___c_TypeInfo->static_fields->__9 = (struct CharaGraphSortOwnerBase___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CharaGraphSortOwnerBase___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
      sub_1BCAA3C(0LL, v4);
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
      sub_1BCAA3C(0LL, v4);
    ListViewSort__Save(SortInfo, 0LL);
  }
}