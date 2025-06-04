void __fastcall CharaGraphSortOwnerBase___ctor(CharaGraphSortOwnerBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  CharaGraphSortOwnerBase__SetSortSaveKeyPrefix(this, v3);
}


void __fastcall CharaGraphSortOwnerBase__DeleteContinueData(CharaGraphSortOwnerBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *v6; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_T__o *SortManageUnitArray; // x19
  CharaGraphSortOwnerBase___c_c *v9; // x8
  System_Action_object__o *_9__26_0; // x20
  Il2CppObject *v11; // x21
  struct CharaGraphSortOwnerBase___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4B01391 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_CharaGraphSortManageUnitBase__TypeInfo, method);
    sub_1BC3008(&Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___, v3);
    sub_1BC3008(&Method_CharaGraphSortOwnerBase___c__DeleteContinueData_b__26_0__, v4);
    sub_1BC3008(&CharaGraphSortOwnerBase___c_TypeInfo, v5);
    byte_4B01391 = 1;
  }
  v6 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                            this,
                            this->klass->vtable._5_get_ServantSortManageUnit.methodPtr);
  if ( !System_String__IsNullOrEmpty(v6, 0LL) )
  {
    SortManageUnitArray = (System_Collections_Generic_IEnumerable_T__o *)CharaGraphSortOwnerBase__GetSortManageUnitArray(
                                                                           this,
                                                                           v7);
    v9 = CharaGraphSortOwnerBase___c_TypeInfo;
    if ( !CharaGraphSortOwnerBase___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphSortOwnerBase___c_TypeInfo);
      v9 = CharaGraphSortOwnerBase___c_TypeInfo;
    }
    _9__26_0 = (System_Action_object__o *)v9->static_fields->__9__26_0;
    if ( !_9__26_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = CharaGraphSortOwnerBase___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v9->static_fields->__9;
      _9__26_0 = (System_Action_object__o *)sub_1BC3254(System_Action_CharaGraphSortManageUnitBase__TypeInfo);
      System_Action_object____ctor(_9__26_0, v11, Method_CharaGraphSortOwnerBase___c__DeleteContinueData_b__26_0__, 0LL);
      static_fields = CharaGraphSortOwnerBase___c_TypeInfo->static_fields;
      static_fields->__9__26_0 = (struct System_Action_CharaGraphSortManageUnitBase__o *)_9__26_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__26_0, (int32_t)_9__26_0, v13, v14);
    }
    BasicHelper__ForEach_object_(
      SortManageUnitArray,
      (System_Action_T__o *)_9__26_0,
      (const MethodInfo_2FEDEFC *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
  }
}


void __fastcall CharaGraphSortOwnerBase__DeleteContinueData_39853996(
        CharaGraphSortOwnerBase_o *instance,
        const MethodInfo *method)
{
  if ( !instance )
    sub_1BC3264(0LL, method);
  CharaGraphSortOwnerBase__DeleteContinueData(instance, method);
}


CharaGraphSortManageUnitBase_array *__fastcall CharaGraphSortOwnerBase__GetSortManageUnitArray(
        CharaGraphSortOwnerBase_o *this,
        const MethodInfo *method)
{
  CharaGraphSortManageUnitBase_array *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  CharaGraphSortManageUnitBase_o *v8; // x21
  const MethodInfo *v9; // x3
  CharaGraphSortManageUnitBase_o *v10; // x21
  const MethodInfo *v11; // x3
  CharaGraphSortManageUnitBase_o *v12; // x21
  const MethodInfo *v13; // x3
  CharaGraphSortManageUnitBase_o *v14; // x20
  __int64 v16; // x0

  if ( (byte_4B0138F & 1) == 0 )
  {
    sub_1BC3008(&CharaGraphSortManageUnitBase___TypeInfo, method);
    byte_4B0138F = 1;
  }
  v3 = (CharaGraphSortManageUnitBase_array *)sub_1BC30B0(CharaGraphSortManageUnitBase___TypeInfo, 4LL);
  v4 = ((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, Il2CppMethodPointer))this->klass->vtable._5_get_ServantSortManageUnit.method)(
         this,
         this->klass->vtable._6_set_ServantSortManageUnit.methodPtr);
  if ( !v3 )
    sub_1BC3264(v4, v5);
  v8 = (CharaGraphSortManageUnitBase_o *)v4;
  if ( v4 )
  {
    v4 = sub_1BC3144(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_18;
  }
  if ( !v3->max_length )
    goto LABEL_17;
  v3->m_Items[0] = v8;
  sub_1BC2FAC((CGThumbnailListItem_o *)v3->m_Items, (int32_t)v8, v6, v7);
  v4 = ((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, Il2CppMethodPointer))this->klass->vtable._7_get_ServantEquipSortManageUnit.method)(
         this,
         this->klass->vtable._8_set_ServantEquipSortManageUnit.methodPtr);
  v10 = (CharaGraphSortManageUnitBase_o *)v4;
  if ( v4 )
  {
    v4 = sub_1BC3144(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_18;
  }
  if ( v3->max_length <= 1 )
    goto LABEL_17;
  v3->m_Items[1] = v10;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v3->m_Items[1], (int32_t)v10, v6, v9);
  v4 = ((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, Il2CppMethodPointer))this->klass->vtable._9_get_CommandCodeSortManageUnit.method)(
         this,
         this->klass->vtable._10_set_CommandCodeSortManageUnit.methodPtr);
  v12 = (CharaGraphSortManageUnitBase_o *)v4;
  if ( v4 )
  {
    v4 = sub_1BC3144(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_18;
  }
  if ( v3->max_length <= 2 )
    goto LABEL_17;
  v3->m_Items[2] = v12;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v3->m_Items[2], (int32_t)v12, v6, v11);
  v4 = ((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, Il2CppMethodPointer))this->klass->vtable._11_get_ServantCollectionSortManageUnit.method)(
         this,
         this->klass->vtable._12_set_ServantCollectionSortManageUnit.methodPtr);
  v14 = (CharaGraphSortManageUnitBase_o *)v4;
  if ( v4 )
  {
    v4 = sub_1BC3144(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_18:
      v16 = sub_1BC3288(v4);
      sub_1BC3130(v16, 0LL);
    }
  }
  if ( v3->max_length <= 3 )
LABEL_17:
    sub_1BC326C(v4, v5, v6);
  v3->m_Items[3] = v14;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v3->m_Items[3], (int32_t)v14, v6, v13);
  return v3;
}


void __fastcall CharaGraphSortOwnerBase__Save(CharaGraphSortOwnerBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *v6; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_T__o *SortManageUnitArray; // x19
  CharaGraphSortOwnerBase___c_c *v9; // x8
  System_Action_object__o *_9__27_0; // x20
  Il2CppObject *v11; // x21
  struct CharaGraphSortOwnerBase___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4B01392 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_CharaGraphSortManageUnitBase__TypeInfo, method);
    sub_1BC3008(&Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___, v3);
    sub_1BC3008(&Method_CharaGraphSortOwnerBase___c__Save_b__27_0__, v4);
    sub_1BC3008(&CharaGraphSortOwnerBase___c_TypeInfo, v5);
    byte_4B01392 = 1;
  }
  v6 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                            this,
                            this->klass->vtable._5_get_ServantSortManageUnit.methodPtr);
  if ( !System_String__IsNullOrEmpty(v6, 0LL) )
  {
    SortManageUnitArray = (System_Collections_Generic_IEnumerable_T__o *)CharaGraphSortOwnerBase__GetSortManageUnitArray(
                                                                           this,
                                                                           v7);
    v9 = CharaGraphSortOwnerBase___c_TypeInfo;
    if ( !CharaGraphSortOwnerBase___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphSortOwnerBase___c_TypeInfo);
      v9 = CharaGraphSortOwnerBase___c_TypeInfo;
    }
    _9__27_0 = (System_Action_object__o *)v9->static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = CharaGraphSortOwnerBase___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v9->static_fields->__9;
      _9__27_0 = (System_Action_object__o *)sub_1BC3254(System_Action_CharaGraphSortManageUnitBase__TypeInfo);
      System_Action_object____ctor(_9__27_0, v11, Method_CharaGraphSortOwnerBase___c__Save_b__27_0__, 0LL);
      static_fields = CharaGraphSortOwnerBase___c_TypeInfo->static_fields;
      static_fields->__9__27_0 = (struct System_Action_CharaGraphSortManageUnitBase__o *)_9__27_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__27_0, (int32_t)_9__27_0, v13, v14);
    }
    BasicHelper__ForEach_object_(
      SortManageUnitArray,
      (System_Action_T__o *)_9__27_0,
      (const MethodInfo_2FEDEFC *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
  }
}


void __fastcall CharaGraphSortOwnerBase__SetSortSaveKeyPrefix(
        CharaGraphSortOwnerBase_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_IEnumerable_T__o *SortManageUnitArray; // x20
  System_Action_object__o *v6; // x21

  if ( (byte_4B01390 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_CharaGraphSortManageUnitBase__TypeInfo, method);
    sub_1BC3008(&Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___, v3);
    sub_1BC3008(&Method_CharaGraphSortOwnerBase__SetSortSaveKeyPrefix_b__24_0__, v4);
    byte_4B01390 = 1;
  }
  SortManageUnitArray = (System_Collections_Generic_IEnumerable_T__o *)CharaGraphSortOwnerBase__GetSortManageUnitArray(
                                                                         this,
                                                                         method);
  v6 = (System_Action_object__o *)sub_1BC3254(System_Action_CharaGraphSortManageUnitBase__TypeInfo);
  System_Action_object____ctor(
    v6,
    (Il2CppObject *)this,
    Method_CharaGraphSortOwnerBase__SetSortSaveKeyPrefix_b__24_0__,
    0LL);
  BasicHelper__ForEach_object_(
    SortManageUnitArray,
    (System_Action_T__o *)v6,
    (const MethodInfo_2FEDEFC *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
}


void __fastcall CharaGraphSortOwnerBase__SwitchCurrentViewSortUnit(
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
      v4 = (struct CharaGraphSortManageUnitBase_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._11_get_ServantCollectionSortManageUnit.method)(
                                                      this,
                                                      this->klass->vtable._12_set_ServantCollectionSortManageUnit.methodPtr,
                                                      method);
      break;
    case 2:
      v4 = (struct CharaGraphSortManageUnitBase_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._9_get_CommandCodeSortManageUnit.method)(
                                                      this,
                                                      this->klass->vtable._10_set_CommandCodeSortManageUnit.methodPtr,
                                                      method);
      break;
    case 1:
      v4 = (struct CharaGraphSortManageUnitBase_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._7_get_ServantEquipSortManageUnit.method)(
                                                      this,
                                                      this->klass->vtable._8_set_ServantEquipSortManageUnit.methodPtr,
                                                      method);
      break;
    default:
      v4 = (struct CharaGraphSortManageUnitBase_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._5_get_ServantSortManageUnit.method)(
                                                      this,
                                                      this->klass->vtable._6_set_ServantSortManageUnit.methodPtr,
                                                      method);
      break;
  }
  this->fields._CurrentSortManageUnit_k__BackingField = v4;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._CurrentSortManageUnit_k__BackingField, (int32_t)v4, v5, v6);
}


void __fastcall CharaGraphSortOwnerBase___SetSortSaveKeyPrefix_b__24_0(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *x,
        const MethodInfo *method)
{
  struct System_String_o *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( x )
  {
    v4 = (struct System_String_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_unknown.method)(
                                     this,
                                     this->klass->vtable._5_get_ServantSortManageUnit.methodPtr,
                                     method);
    x->fields._SortSaveKeyPrefix_k__BackingField = v4;
    sub_1BC2FAC((CGThumbnailListItem_o *)&x->fields, (int32_t)v4, v5, v6);
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
  const MethodInfo *v3; // x3

  this->fields._CommandCodeSortManageUnit_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._CommandCodeSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphSortOwnerBase__set_CurrentSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._CurrentSortManageUnit_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._CurrentSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphSortOwnerBase__set_ServantCollectionSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ServantCollectionSortManageUnit_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._ServantCollectionSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphSortOwnerBase__set_ServantEquipSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ServantEquipSortManageUnit_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphSortOwnerBase__set_ServantSortManageUnit(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ServantSortManageUnit_k__BackingField = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall CharaGraphSortOwnerBase___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B01393 & 1) == 0 )
  {
    sub_1BC3008(&CharaGraphSortOwnerBase___c_TypeInfo, v1);
    byte_4B01393 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(CharaGraphSortOwnerBase___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CharaGraphSortOwnerBase___c_TypeInfo->static_fields->__9 = (struct CharaGraphSortOwnerBase___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)CharaGraphSortOwnerBase___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall CharaGraphSortOwnerBase___c___ctor(CharaGraphSortOwnerBase___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CharaGraphSortOwnerBase___c___DeleteContinueData_b__26_0(
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
      sub_1BC3264(0LL, v4);
    ListViewSort__DeleteContinueData(SortInfo, 0LL);
  }
}


void __fastcall CharaGraphSortOwnerBase___c___Save_b__27_0(
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
      sub_1BC3264(0LL, v4);
    ListViewSort__Save(SortInfo, 0LL);
  }
}