void CharaGraphSortOwnerBase___ctor(CharaGraphSortOwnerBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  CharaGraphSortOwnerBase__SetSortSaveKeyPrefix(this, v3);
}


void CharaGraphSortOwnerBase__DeleteContinueData(CharaGraphSortOwnerBase_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_IEnumerable_T__o *SortManageUnitArray; // x19
  CharaGraphSortOwnerBase___c_c *v6; // x8
  System_Action_object__o *_9__26_0; // x20
  Il2CppObject *v8; // x21
  struct CharaGraphSortOwnerBase___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D2FD2A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_CharaGraphSortManageUnitBase__TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
    sub_1C93AD4(&Method_CharaGraphSortOwnerBase___c__DeleteContinueData_b__26_0__);
    sub_1C93AD4(&CharaGraphSortOwnerBase___c_TypeInfo);
    byte_4D2FD2A = 1;
  }
  v3 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const MethodInfo *))this->klass->vtable._4_unknown.methodPtr)(
                            this,
                            this->klass->vtable._4_unknown.method);
  if ( !System_String__IsNullOrEmpty(v3, 0) )
  {
    SortManageUnitArray = (System_Collections_Generic_IEnumerable_T__o *)CharaGraphSortOwnerBase__GetSortManageUnitArray(
                                                                           this,
                                                                           v4);
    v6 = CharaGraphSortOwnerBase___c_TypeInfo;
    if ( !CharaGraphSortOwnerBase___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphSortOwnerBase___c_TypeInfo);
      v6 = CharaGraphSortOwnerBase___c_TypeInfo;
    }
    _9__26_0 = (System_Action_object__o *)v6->static_fields->__9__26_0;
    if ( !_9__26_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = CharaGraphSortOwnerBase___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__26_0 = (System_Action_object__o *)sub_1C93D20(System_Action_CharaGraphSortManageUnitBase__TypeInfo);
      System_Action_object____ctor(_9__26_0, v8, Method_CharaGraphSortOwnerBase___c__DeleteContinueData_b__26_0__, 0);
      static_fields = CharaGraphSortOwnerBase___c_TypeInfo->static_fields;
      static_fields->__9__26_0 = (struct System_Action_CharaGraphSortManageUnitBase__o *)_9__26_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__26_0,
        (int32_t)_9__26_0,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    BasicHelper__ForEach_object_(
      SortManageUnitArray,
      (System_Action_T__o *)_9__26_0,
      (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
  }
}


void CharaGraphSortOwnerBase__DeleteContinueData_41541180(
        CharaGraphSortOwnerBase_o *instance,
        const MethodInfo *method)
{
  if ( !instance )
    sub_1C93D2C(0, method);
  CharaGraphSortOwnerBase__DeleteContinueData(instance, method);
}


CharaGraphSortManageUnitBase_array *CharaGraphSortOwnerBase__GetSortManageUnitArray(
        CharaGraphSortOwnerBase_o *this,
        const MethodInfo *method)
{
  CharaGraphSortManageUnitBase_array *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  CharaGraphSortManageUnitBase_o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  CharaGraphSortManageUnitBase_o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  CharaGraphSortManageUnitBase_o *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  CharaGraphSortManageUnitBase_o *v33; // x20
  __int64 v35; // x0

  if ( (byte_4D2FD28 & 1) == 0 )
  {
    sub_1C93AD4(&CharaGraphSortManageUnitBase___TypeInfo);
    byte_4D2FD28 = 1;
  }
  v3 = (CharaGraphSortManageUnitBase_array *)sub_1C93B7C(CharaGraphSortManageUnitBase___TypeInfo, 4);
  v4 = ((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const MethodInfo *))this->klass->vtable._5_get_ServantSortManageUnit.methodPtr)(
         this,
         this->klass->vtable._5_get_ServantSortManageUnit.method);
  if ( !v3 )
    sub_1C93D2C(v4, v5);
  v12 = (CharaGraphSortManageUnitBase_o *)v4;
  if ( v4 )
  {
    v4 = sub_1C93C10(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_18;
  }
  if ( !LODWORD(v3->max_length) )
    goto LABEL_17;
  v3->m_Items[0] = v12;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v3->m_Items, (int32_t)v12, v6, v7, v8, v9, v10, v11);
  v4 = ((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const MethodInfo *))this->klass->vtable._7_get_ServantEquipSortManageUnit.methodPtr)(
         this,
         this->klass->vtable._7_get_ServantEquipSortManageUnit.method);
  v19 = (CharaGraphSortManageUnitBase_o *)v4;
  if ( v4 )
  {
    v4 = sub_1C93C10(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_18;
  }
  if ( LODWORD(v3->max_length) <= 1 )
    goto LABEL_17;
  v3->m_Items[1] = v19;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->m_Items[1], (int32_t)v19, v13, v14, v15, v16, v17, v18);
  v4 = ((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const MethodInfo *))this->klass->vtable._9_get_CommandCodeSortManageUnit.methodPtr)(
         this,
         this->klass->vtable._9_get_CommandCodeSortManageUnit.method);
  v26 = (CharaGraphSortManageUnitBase_o *)v4;
  if ( v4 )
  {
    v4 = sub_1C93C10(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_18;
  }
  if ( LODWORD(v3->max_length) <= 2 )
    goto LABEL_17;
  v3->m_Items[2] = v26;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->m_Items[2], (int32_t)v26, v20, v21, v22, v23, v24, v25);
  v4 = ((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const MethodInfo *))this->klass->vtable._11_get_ServantCollectionSortManageUnit.methodPtr)(
         this,
         this->klass->vtable._11_get_ServantCollectionSortManageUnit.method);
  v33 = (CharaGraphSortManageUnitBase_o *)v4;
  if ( v4 )
  {
    v4 = sub_1C93C10(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_18:
      v35 = sub_1C93D50(v4);
      sub_1C93BFC(v35, 0);
    }
  }
  if ( LODWORD(v3->max_length) <= 3 )
LABEL_17:
    sub_1C93D34(v4);
  v3->m_Items[3] = v33;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v3->m_Items[3], (int32_t)v33, v27, v28, v29, v30, v31, v32);
  return v3;
}


void CharaGraphSortOwnerBase__Save(CharaGraphSortOwnerBase_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_IEnumerable_T__o *SortManageUnitArray; // x19
  CharaGraphSortOwnerBase___c_c *v6; // x8
  System_Action_object__o *_9__27_0; // x20
  Il2CppObject *v8; // x21
  struct CharaGraphSortOwnerBase___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D2FD2B & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_CharaGraphSortManageUnitBase__TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
    sub_1C93AD4(&Method_CharaGraphSortOwnerBase___c__Save_b__27_0__);
    sub_1C93AD4(&CharaGraphSortOwnerBase___c_TypeInfo);
    byte_4D2FD2B = 1;
  }
  v3 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const MethodInfo *))this->klass->vtable._4_unknown.methodPtr)(
                            this,
                            this->klass->vtable._4_unknown.method);
  if ( !System_String__IsNullOrEmpty(v3, 0) )
  {
    SortManageUnitArray = (System_Collections_Generic_IEnumerable_T__o *)CharaGraphSortOwnerBase__GetSortManageUnitArray(
                                                                           this,
                                                                           v4);
    v6 = CharaGraphSortOwnerBase___c_TypeInfo;
    if ( !CharaGraphSortOwnerBase___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphSortOwnerBase___c_TypeInfo);
      v6 = CharaGraphSortOwnerBase___c_TypeInfo;
    }
    _9__27_0 = (System_Action_object__o *)v6->static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = CharaGraphSortOwnerBase___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__27_0 = (System_Action_object__o *)sub_1C93D20(System_Action_CharaGraphSortManageUnitBase__TypeInfo);
      System_Action_object____ctor(_9__27_0, v8, Method_CharaGraphSortOwnerBase___c__Save_b__27_0__, 0);
      static_fields = CharaGraphSortOwnerBase___c_TypeInfo->static_fields;
      static_fields->__9__27_0 = (struct System_Action_CharaGraphSortManageUnitBase__o *)_9__27_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__27_0,
        (int32_t)_9__27_0,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    BasicHelper__ForEach_object_(
      SortManageUnitArray,
      (System_Action_T__o *)_9__27_0,
      (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
  }
}


void CharaGraphSortOwnerBase__SetSortSaveKeyPrefix(CharaGraphSortOwnerBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *SortManageUnitArray; // x20
  System_Action_object__o *v4; // x21

  if ( (byte_4D2FD29 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_CharaGraphSortManageUnitBase__TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
    sub_1C93AD4(&Method_CharaGraphSortOwnerBase__SetSortSaveKeyPrefix_b__24_0__);
    byte_4D2FD29 = 1;
  }
  SortManageUnitArray = (System_Collections_Generic_IEnumerable_T__o *)CharaGraphSortOwnerBase__GetSortManageUnitArray(
                                                                         this,
                                                                         method);
  v4 = (System_Action_object__o *)sub_1C93D20(System_Action_CharaGraphSortManageUnitBase__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_CharaGraphSortOwnerBase__SetSortSaveKeyPrefix_b__24_0__,
    0);
  BasicHelper__ForEach_object_(
    SortManageUnitArray,
    (System_Action_T__o *)v4,
    (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
}


void CharaGraphSortOwnerBase__SwitchCurrentViewSortUnit(
        CharaGraphSortOwnerBase_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  struct CharaGraphSortManageUnitBase_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  switch ( kind )
  {
    case 3:
      v4 = (struct CharaGraphSortManageUnitBase_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._11_get_ServantCollectionSortManageUnit.methodPtr)(
                                                      this,
                                                      this->klass->vtable._11_get_ServantCollectionSortManageUnit.method,
                                                      method);
      break;
    case 2:
      v4 = (struct CharaGraphSortManageUnitBase_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._9_get_CommandCodeSortManageUnit.methodPtr)(
                                                      this,
                                                      this->klass->vtable._9_get_CommandCodeSortManageUnit.method,
                                                      method);
      break;
    case 1:
      v4 = (struct CharaGraphSortManageUnitBase_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._7_get_ServantEquipSortManageUnit.methodPtr)(
                                                      this,
                                                      this->klass->vtable._7_get_ServantEquipSortManageUnit.method,
                                                      method);
      break;
    default:
      v4 = (struct CharaGraphSortManageUnitBase_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._5_get_ServantSortManageUnit.methodPtr)(
                                                      this,
                                                      this->klass->vtable._5_get_ServantSortManageUnit.method,
                                                      method);
      break;
  }
  this->fields._CurrentSortManageUnit_k__BackingField = v4;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._CurrentSortManageUnit_k__BackingField,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void CharaGraphSortOwnerBase___SetSortSaveKeyPrefix_b__24_0(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *x,
        const MethodInfo *method)
{
  struct System_String_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( x )
  {
    v4 = (struct System_String_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_unknown.methodPtr)(
                                     this,
                                     this->klass->vtable._4_unknown.method,
                                     method);
    x->fields._SortSaveKeyPrefix_k__BackingField = v4;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&x->fields, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  }
}


CharaGraphSortManageUnitBase_o *CharaGraphSortOwnerBase__get_CommandCodeSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        const MethodInfo *method)
{
  return this->fields._CommandCodeSortManageUnit_k__BackingField;
}


CharaGraphSortManageUnitBase_o *CharaGraphSortOwnerBase__get_CurrentSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        const MethodInfo *method)
{
  return this->fields._CurrentSortManageUnit_k__BackingField;
}


CharaGraphSortManageUnitBase_o *CharaGraphSortOwnerBase__get_ServantCollectionSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantCollectionSortManageUnit_k__BackingField;
}


CharaGraphSortManageUnitBase_o *CharaGraphSortOwnerBase__get_ServantEquipSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantEquipSortManageUnit_k__BackingField;
}


CharaGraphSortManageUnitBase_o *CharaGraphSortOwnerBase__get_ServantSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantSortManageUnit_k__BackingField;
}


void CharaGraphSortOwnerBase__set_CommandCodeSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._CommandCodeSortManageUnit_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._CommandCodeSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphSortOwnerBase__set_CurrentSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._CurrentSortManageUnit_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._CurrentSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphSortOwnerBase__set_ServantCollectionSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ServantCollectionSortManageUnit_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._ServantCollectionSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphSortOwnerBase__set_ServantEquipSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ServantEquipSortManageUnit_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphSortOwnerBase__set_ServantSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ServantSortManageUnit_k__BackingField = value;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}


void CharaGraphSortOwnerBase___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2FD2C & 1) == 0 )
  {
    sub_1C93AD4(&CharaGraphSortOwnerBase___c_TypeInfo);
    byte_4D2FD2C = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(CharaGraphSortOwnerBase___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CharaGraphSortOwnerBase___c_TypeInfo->static_fields->__9 = (struct CharaGraphSortOwnerBase___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)CharaGraphSortOwnerBase___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphSortOwnerBase___c___ctor(CharaGraphSortOwnerBase___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CharaGraphSortOwnerBase___c___DeleteContinueData_b__26_0(
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
      sub_1C93D2C(0, v4);
    ListViewSort__DeleteContinueData(SortInfo, 0);
  }
}


void CharaGraphSortOwnerBase___c___Save_b__27_0(
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
      sub_1C93D2C(0, v4);
    ListViewSort__Save(SortInfo, 0);
  }
}