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
  CharaGraphSortManageUnitBase_array *SortManageUnitArray; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  CharaGraphSortOwnerBase___c_c *v8; // x8
  System_Collections_Generic_IEnumerable_T__o *v9; // x19
  struct CharaGraphSortOwnerBase___c_StaticFields *static_fields; // x9
  System_Action_object__o *_9__26_0; // x20
  Il2CppObject *v12; // x21
  struct CharaGraphSortOwnerBase___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596FAED & 1) == 0 )
  {
    sub_2213A60(&System_Action_CharaGraphSortManageUnitBase__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
    sub_2213A60(&Method_CharaGraphSortOwnerBase___c__DeleteContinueData_b__26_0__);
    sub_2213A60(&CharaGraphSortOwnerBase___c_TypeInfo);
    byte_596FAED = 1;
  }
  v3 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const MethodInfo *))this->klass->vtable._4_unknown.methodPtr)(
                            this,
                            this->klass->vtable._4_unknown.method);
  if ( !System_String__IsNullOrEmpty(v3, 0) )
  {
    SortManageUnitArray = CharaGraphSortOwnerBase__GetSortManageUnitArray(this, v4);
    v8 = CharaGraphSortOwnerBase___c_TypeInfo;
    v9 = (System_Collections_Generic_IEnumerable_T__o *)SortManageUnitArray;
    if ( !*(&CharaGraphSortOwnerBase___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphSortOwnerBase___c_TypeInfo, v6, v7);
      v8 = CharaGraphSortOwnerBase___c_TypeInfo;
    }
    static_fields = v8->static_fields;
    _9__26_0 = (System_Action_object__o *)static_fields->__9__26_0;
    if ( !_9__26_0 )
    {
      if ( !*(&v8->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v8, v6, v7);
        static_fields = CharaGraphSortOwnerBase___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__26_0 = (System_Action_object__o *)sub_2213CCC(System_Action_CharaGraphSortManageUnitBase__TypeInfo);
      System_Action_object____ctor(_9__26_0, v12, Method_CharaGraphSortOwnerBase___c__DeleteContinueData_b__26_0__, 0);
      v13 = CharaGraphSortOwnerBase___c_TypeInfo->static_fields;
      v13->__9__26_0 = (struct System_Action_CharaGraphSortManageUnitBase__o *)_9__26_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->__9__26_0, (int32_t)_9__26_0, v14, v15, v16, v17, v18, v19);
    }
    BasicHelper__ForEach_object_(
      v9,
      (System_Action_T__o *)_9__26_0,
      (const MethodInfo_381282C *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
  }
}


void CharaGraphSortOwnerBase__DeleteContinueData_47787400(
        CharaGraphSortOwnerBase_o *instance,
        const MethodInfo *method)
{
  if ( !instance )
    sub_2213CDC(0, method);
  CharaGraphSortOwnerBase__DeleteContinueData(instance, method);
}


CharaGraphSortManageUnitBase_array *CharaGraphSortOwnerBase__GetSortManageUnitArray(
        CharaGraphSortOwnerBase_o *this,
        const MethodInfo *method)
{
  CharaGraphSortManageUnitBase_array *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  CharaGraphSortManageUnitBase_o *v12; // x21
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  CharaGraphSortManageUnitBase_o *v20; // x21
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  CharaGraphSortManageUnitBase_o *v27; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  CharaGraphSortManageUnitBase_o *v34; // x20
  __int64 v36; // x0

  if ( (byte_596FAEB & 1) == 0 )
  {
    sub_2213A60(&CharaGraphSortManageUnitBase___TypeInfo);
    byte_596FAEB = 1;
  }
  v3 = (CharaGraphSortManageUnitBase_array *)sub_2213B20(CharaGraphSortManageUnitBase___TypeInfo, 4);
  v4 = ((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const MethodInfo *))this->klass->vtable._5_get_ServantSortManageUnit.methodPtr)(
         this,
         this->klass->vtable._5_get_ServantSortManageUnit.method);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  v12 = (CharaGraphSortManageUnitBase_o *)v4;
  if ( v4 )
  {
    v4 = sub_2213BB4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_18;
  }
  if ( !LODWORD(v3->max_length) )
    goto LABEL_17;
  v3->m_Items[0] = v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v3->m_Items, (int32_t)v12, v6, v7, v8, v9, v10, v11);
  v4 = ((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const MethodInfo *))this->klass->vtable._7_get_ServantEquipSortManageUnit.methodPtr)(
         this,
         this->klass->vtable._7_get_ServantEquipSortManageUnit.method);
  v20 = (CharaGraphSortManageUnitBase_o *)v4;
  if ( v4 )
  {
    v4 = sub_2213BB4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_18;
  }
  if ( (v3->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_17;
  v3->m_Items[1] = v20;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->m_Items[1], (int32_t)v20, v14, v15, v16, v17, v18, v19);
  v4 = ((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const MethodInfo *))this->klass->vtable._9_get_CommandCodeSortManageUnit.methodPtr)(
         this,
         this->klass->vtable._9_get_CommandCodeSortManageUnit.method);
  v27 = (CharaGraphSortManageUnitBase_o *)v4;
  if ( v4 )
  {
    v4 = sub_2213BB4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_18;
  }
  if ( LODWORD(v3->max_length) <= 2 )
    goto LABEL_17;
  v3->m_Items[2] = v27;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->m_Items[2], (int32_t)v27, v21, v22, v23, v24, v25, v26);
  v4 = ((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const MethodInfo *))this->klass->vtable._11_get_ServantCollectionSortManageUnit.methodPtr)(
         this,
         this->klass->vtable._11_get_ServantCollectionSortManageUnit.method);
  v34 = (CharaGraphSortManageUnitBase_o *)v4;
  if ( v4 )
  {
    v4 = sub_2213BB4(v4, v3->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_18:
      v36 = sub_2213D00(v4, v13);
      sub_2213BA0(v36, 0);
    }
  }
  if ( (v3->max_length & 0xFFFFFFFC) == 0 )
LABEL_17:
    sub_2213CE4(v4);
  v3->m_Items[3] = v34;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->m_Items[3], (int32_t)v34, v28, v29, v30, v31, v32, v33);
  return v3;
}


void CharaGraphSortOwnerBase__Save(CharaGraphSortOwnerBase_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  const MethodInfo *v4; // x1
  CharaGraphSortManageUnitBase_array *SortManageUnitArray; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  CharaGraphSortOwnerBase___c_c *v8; // x8
  System_Collections_Generic_IEnumerable_T__o *v9; // x19
  struct CharaGraphSortOwnerBase___c_StaticFields *static_fields; // x9
  System_Action_object__o *_9__27_0; // x20
  Il2CppObject *v12; // x21
  struct CharaGraphSortOwnerBase___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596FAEE & 1) == 0 )
  {
    sub_2213A60(&System_Action_CharaGraphSortManageUnitBase__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
    sub_2213A60(&Method_CharaGraphSortOwnerBase___c__Save_b__27_0__);
    sub_2213A60(&CharaGraphSortOwnerBase___c_TypeInfo);
    byte_596FAEE = 1;
  }
  v3 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const MethodInfo *))this->klass->vtable._4_unknown.methodPtr)(
                            this,
                            this->klass->vtable._4_unknown.method);
  if ( !System_String__IsNullOrEmpty(v3, 0) )
  {
    SortManageUnitArray = CharaGraphSortOwnerBase__GetSortManageUnitArray(this, v4);
    v8 = CharaGraphSortOwnerBase___c_TypeInfo;
    v9 = (System_Collections_Generic_IEnumerable_T__o *)SortManageUnitArray;
    if ( !*(&CharaGraphSortOwnerBase___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphSortOwnerBase___c_TypeInfo, v6, v7);
      v8 = CharaGraphSortOwnerBase___c_TypeInfo;
    }
    static_fields = v8->static_fields;
    _9__27_0 = (System_Action_object__o *)static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( !*(&v8->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v8, v6, v7);
        static_fields = CharaGraphSortOwnerBase___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__27_0 = (System_Action_object__o *)sub_2213CCC(System_Action_CharaGraphSortManageUnitBase__TypeInfo);
      System_Action_object____ctor(_9__27_0, v12, Method_CharaGraphSortOwnerBase___c__Save_b__27_0__, 0);
      v13 = CharaGraphSortOwnerBase___c_TypeInfo->static_fields;
      v13->__9__27_0 = (struct System_Action_CharaGraphSortManageUnitBase__o *)_9__27_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->__9__27_0, (int32_t)_9__27_0, v14, v15, v16, v17, v18, v19);
    }
    BasicHelper__ForEach_object_(
      v9,
      (System_Action_T__o *)_9__27_0,
      (const MethodInfo_381282C *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
  }
}


void CharaGraphSortOwnerBase__SetSortSaveKeyPrefix(CharaGraphSortOwnerBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *SortManageUnitArray; // x20
  System_Action_object__o *v4; // x21

  if ( (byte_596FAEC & 1) == 0 )
  {
    sub_2213A60(&System_Action_CharaGraphSortManageUnitBase__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
    sub_2213A60(&Method_CharaGraphSortOwnerBase__SetSortSaveKeyPrefix_b__24_0__);
    byte_596FAEC = 1;
  }
  SortManageUnitArray = (System_Collections_Generic_IEnumerable_T__o *)CharaGraphSortOwnerBase__GetSortManageUnitArray(
                                                                         this,
                                                                         method);
  v4 = (System_Action_object__o *)sub_2213CCC(System_Action_CharaGraphSortManageUnitBase__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_CharaGraphSortOwnerBase__SetSortSaveKeyPrefix_b__24_0__,
    0);
  BasicHelper__ForEach_object_(
    SortManageUnitArray,
    (System_Action_T__o *)v4,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_CharaGraphSortManageUnitBase___);
}


void CharaGraphSortOwnerBase__SwitchCurrentViewSortUnit(
        CharaGraphSortOwnerBase_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  VirtualInvokeData *p__11_get_ServantCollectionSortManageUnit; // x9
  VirtualInvokeData *p__9_get_CommandCodeSortManageUnit; // x11
  VirtualInvokeData *p__5_get_ServantSortManageUnit; // x13
  const MethodInfo **p_method; // x8
  struct CharaGraphSortManageUnitBase_o *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  p__11_get_ServantCollectionSortManageUnit = &this->klass->vtable._11_get_ServantCollectionSortManageUnit;
  p__9_get_CommandCodeSortManageUnit = &this->klass->vtable._9_get_CommandCodeSortManageUnit;
  p__5_get_ServantSortManageUnit = &this->klass->vtable._5_get_ServantSortManageUnit;
  p_method = &this->klass->vtable._7_get_ServantEquipSortManageUnit.method;
  if ( kind == 1 )
    p__5_get_ServantSortManageUnit = &this->klass->vtable._7_get_ServantEquipSortManageUnit;
  else
    p_method = &this->klass->vtable._5_get_ServantSortManageUnit.method;
  if ( kind == 2 )
    p_method = &this->klass->vtable._9_get_CommandCodeSortManageUnit.method;
  else
    p__9_get_CommandCodeSortManageUnit = p__5_get_ServantSortManageUnit;
  if ( kind == 3 )
    p_method = &this->klass->vtable._11_get_ServantCollectionSortManageUnit.method;
  else
    p__11_get_ServantCollectionSortManageUnit = p__9_get_CommandCodeSortManageUnit;
  v8 = (struct CharaGraphSortManageUnitBase_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const MethodInfo *, const MethodInfo *))p__11_get_ServantCollectionSortManageUnit->methodPtr)(
                                                  this,
                                                  *p_method,
                                                  method);
  this->fields._CurrentSortManageUnit_k__BackingField = v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CurrentSortManageUnit_k__BackingField,
    (int32_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void CharaGraphSortOwnerBase___SetSortSaveKeyPrefix_b__24_0(
        CharaGraphSortOwnerBase_o *this,
        CharaGraphSortManageUnitBase_o *x,
        const MethodInfo *method)
{
  struct System_String_o *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( x )
  {
    v4 = (struct System_String_o *)((__int64 (__fastcall *)(CharaGraphSortOwnerBase_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_unknown.methodPtr)(
                                     this,
                                     this->klass->vtable._4_unknown.method,
                                     method);
    x->fields._SortSaveKeyPrefix_k__BackingField = v4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&x->fields, (int32_t)v4, v5, v6, v7, v8, v9, v10);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._CommandCodeSortManageUnit_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CommandCodeSortManageUnit_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._CurrentSortManageUnit_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CurrentSortManageUnit_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ServantCollectionSortManageUnit_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantCollectionSortManageUnit_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ServantEquipSortManageUnit_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantEquipSortManageUnit_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ServantSortManageUnit_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphSortOwnerBase___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596FAEF & 1) == 0 )
  {
    sub_2213A60(&CharaGraphSortOwnerBase___c_TypeInfo);
    byte_596FAEF = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(CharaGraphSortOwnerBase___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CharaGraphSortOwnerBase___c_TypeInfo->static_fields->__9 = (struct CharaGraphSortOwnerBase___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)CharaGraphSortOwnerBase___c_TypeInfo->static_fields,
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
      sub_2213CDC(0, v4);
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
      sub_2213CDC(0, v4);
    ListViewSort__Save(SortInfo, 0);
  }
}