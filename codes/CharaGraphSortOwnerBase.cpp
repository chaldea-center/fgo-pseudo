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
  const MethodInfo *v11; // x3

  if ( (byte_4C36CFE & 1) == 0 )
  {
    sub_1C32C20(&System_Action_CharaGraphSortManageUnitBase__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
    sub_1C32C20(&Method_CharaGraphSortOwnerBase___c__DeleteContinueData_b__26_0__);
    sub_1C32C20(&CharaGraphSortOwnerBase___c_TypeInfo);
    byte_4C36CFE = 1;
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
      _9__26_0 = (System_Action_object__o *)sub_1C32E6C(System_Action_CharaGraphSortManageUnitBase__TypeInfo);
      System_Action_object____ctor(_9__26_0, v8, Method_CharaGraphSortOwnerBase___c__DeleteContinueData_b__26_0__, 0);
      static_fields = CharaGraphSortOwnerBase___c_TypeInfo->static_fields;
      static_fields->__9__26_0 = (struct System_Action_CharaGraphSortManageUnitBase__o *)_9__26_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__26_0, (int32_t)_9__26_0, v10, v11);
    }
    BasicHelper__ForEach_object_(
      SortManageUnitArray,
      (System_Action_T__o *)_9__26_0,
      (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
  }
}


void CharaGraphSortOwnerBase__DeleteContinueData_40722868(
        CharaGraphSortOwnerBase_o *instance,
        const MethodInfo *method)
{
  if ( !instance )
    sub_1C32E7C(0);
  CharaGraphSortOwnerBase__DeleteContinueData(instance, method);
}


CharaGraphSortManageUnitBase_array *CharaGraphSortOwnerBase__GetSortManageUnitArray(
        CharaGraphSortOwnerBase_o *this,
        const MethodInfo *method)
{
  CharaGraphSortManageUnitBase_array *v3; // x19
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CharaGraphSortManageUnitBase_o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  CharaGraphSortManageUnitBase_o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  CharaGraphSortManageUnitBase_o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  CharaGraphSortManageUnitBase_o *v16; // x20
  __int64 v18; // x0

  if ( (byte_4C36CFC & 1) == 0 )
  {
    sub_1C32C20(&CharaGraphSortManageUnitBase___TypeInfo);
    byte_4C36CFC = 1;
  }
  v3 = (CharaGraphSortManageUnitBase_array *)sub_1C32CC8(CharaGraphSortManageUnitBase___TypeInfo, 4);
  v4 = ((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const MethodInfo *))this->klass->vtable._5_get_ServantSortManageUnit.methodPtr)(
         this,
         this->klass->vtable._5_get_ServantSortManageUnit.method);
  if ( !v3 )
    sub_1C32E7C(v4);
  v7 = (CharaGraphSortManageUnitBase_o *)v4;
  if ( v4 )
  {
    v4 = sub_1C32D5C(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_18;
  }
  if ( !LODWORD(v3->max_length) )
    goto LABEL_17;
  v3->m_Items[0] = v7;
  sub_1C32BC4((CGThumbnailListItem_o *)v3->m_Items, (int32_t)v7, v5, v6);
  v4 = ((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const MethodInfo *))this->klass->vtable._7_get_ServantEquipSortManageUnit.methodPtr)(
         this,
         this->klass->vtable._7_get_ServantEquipSortManageUnit.method);
  v10 = (CharaGraphSortManageUnitBase_o *)v4;
  if ( v4 )
  {
    v4 = sub_1C32D5C(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_18;
  }
  if ( LODWORD(v3->max_length) <= 1 )
    goto LABEL_17;
  v3->m_Items[1] = v10;
  sub_1C32BC4((CGThumbnailListItem_o *)&v3->m_Items[1], (int32_t)v10, v8, v9);
  v4 = ((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const MethodInfo *))this->klass->vtable._9_get_CommandCodeSortManageUnit.methodPtr)(
         this,
         this->klass->vtable._9_get_CommandCodeSortManageUnit.method);
  v13 = (CharaGraphSortManageUnitBase_o *)v4;
  if ( v4 )
  {
    v4 = sub_1C32D5C(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_18;
  }
  if ( LODWORD(v3->max_length) <= 2 )
    goto LABEL_17;
  v3->m_Items[2] = v13;
  sub_1C32BC4((CGThumbnailListItem_o *)&v3->m_Items[2], (int32_t)v13, v11, v12);
  v4 = ((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const MethodInfo *))this->klass->vtable._11_get_ServantCollectionSortManageUnit.methodPtr)(
         this,
         this->klass->vtable._11_get_ServantCollectionSortManageUnit.method);
  v16 = (CharaGraphSortManageUnitBase_o *)v4;
  if ( v4 )
  {
    v4 = sub_1C32D5C(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_18:
      v18 = sub_1C32EA0(v4);
      sub_1C32D48(v18, 0);
    }
  }
  if ( LODWORD(v3->max_length) <= 3 )
LABEL_17:
    sub_1C32E84(v4);
  v3->m_Items[3] = v16;
  sub_1C32BC4((CGThumbnailListItem_o *)&v3->m_Items[3], (int32_t)v16, v14, v15);
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
  const MethodInfo *v11; // x3

  if ( (byte_4C36CFF & 1) == 0 )
  {
    sub_1C32C20(&System_Action_CharaGraphSortManageUnitBase__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
    sub_1C32C20(&Method_CharaGraphSortOwnerBase___c__Save_b__27_0__);
    sub_1C32C20(&CharaGraphSortOwnerBase___c_TypeInfo);
    byte_4C36CFF = 1;
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
      _9__27_0 = (System_Action_object__o *)sub_1C32E6C(System_Action_CharaGraphSortManageUnitBase__TypeInfo);
      System_Action_object____ctor(_9__27_0, v8, Method_CharaGraphSortOwnerBase___c__Save_b__27_0__, 0);
      static_fields = CharaGraphSortOwnerBase___c_TypeInfo->static_fields;
      static_fields->__9__27_0 = (struct System_Action_CharaGraphSortManageUnitBase__o *)_9__27_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__27_0, (int32_t)_9__27_0, v10, v11);
    }
    BasicHelper__ForEach_object_(
      SortManageUnitArray,
      (System_Action_T__o *)_9__27_0,
      (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
  }
}


void CharaGraphSortOwnerBase__SetSortSaveKeyPrefix(CharaGraphSortOwnerBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *SortManageUnitArray; // x20
  System_Action_object__o *v4; // x21

  if ( (byte_4C36CFD & 1) == 0 )
  {
    sub_1C32C20(&System_Action_CharaGraphSortManageUnitBase__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
    sub_1C32C20(&Method_CharaGraphSortOwnerBase__SetSortSaveKeyPrefix_b__24_0__);
    byte_4C36CFD = 1;
  }
  SortManageUnitArray = (System_Collections_Generic_IEnumerable_T__o *)CharaGraphSortOwnerBase__GetSortManageUnitArray(
                                                                         this,
                                                                         method);
  v4 = (System_Action_object__o *)sub_1C32E6C(System_Action_CharaGraphSortManageUnitBase__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_CharaGraphSortOwnerBase__SetSortSaveKeyPrefix_b__24_0__,
    0);
  BasicHelper__ForEach_object_(
    SortManageUnitArray,
    (System_Action_T__o *)v4,
    (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
}


void CharaGraphSortOwnerBase__SwitchCurrentViewSortUnit(
        CharaGraphSortOwnerBase_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  struct CharaGraphSortManageUnitBase_o *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._CurrentSortManageUnit_k__BackingField, (int32_t)v4, v5, v6);
}


void CharaGraphSortOwnerBase___SetSortSaveKeyPrefix_b__24_0(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *x,
        const MethodInfo *method)
{
  struct System_String_o *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( x )
  {
    v4 = (struct System_String_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_unknown.methodPtr)(
                                     this,
                                     this->klass->vtable._4_unknown.method,
                                     method);
    x->fields._SortSaveKeyPrefix_k__BackingField = v4;
    sub_1C32BC4((CGThumbnailListItem_o *)&x->fields, (int32_t)v4, v5, v6);
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
  const MethodInfo *v3; // x3

  this->fields._CommandCodeSortManageUnit_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._CommandCodeSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void CharaGraphSortOwnerBase__set_CurrentSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._CurrentSortManageUnit_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._CurrentSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void CharaGraphSortOwnerBase__set_ServantCollectionSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ServantCollectionSortManageUnit_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._ServantCollectionSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void CharaGraphSortOwnerBase__set_ServantEquipSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ServantEquipSortManageUnit_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void CharaGraphSortOwnerBase__set_ServantSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ServantSortManageUnit_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void CharaGraphSortOwnerBase___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C36D00 & 1) == 0 )
  {
    sub_1C32C20(&CharaGraphSortOwnerBase___c_TypeInfo);
    byte_4C36D00 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(CharaGraphSortOwnerBase___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CharaGraphSortOwnerBase___c_TypeInfo->static_fields->__9 = (struct CharaGraphSortOwnerBase___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)CharaGraphSortOwnerBase___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( x )
  {
    SortInfo = CharaGraphSortManageUnitBase__get_SortInfo(x, (const MethodInfo *)x);
    if ( !SortInfo )
      sub_1C32E7C(0);
    ListViewSort__DeleteContinueData(SortInfo, 0);
  }
}


void CharaGraphSortOwnerBase___c___Save_b__27_0(
        CharaGraphSortOwnerBase___c_o *this,
        CharaGraphSortManageUnitBase_o *x,
        const MethodInfo *method)
{
  ListViewSort_o *SortInfo; // x0

  if ( x )
  {
    SortInfo = CharaGraphSortManageUnitBase__get_SortInfo(x, (const MethodInfo *)x);
    if ( !SortInfo )
      sub_1C32E7C(0);
    ListViewSort__Save(SortInfo, 0);
  }
}