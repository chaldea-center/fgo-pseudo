void ClassBoardSave__CheckOpenedMissionClearDialog(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__o *HasKey; // x0
  System_Collections_Generic_IEnumerable_T__o *v9; // x1
  struct System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__o *cachePlayCondOpenEffectList; // x8
  int32_t size; // w2
  int v12; // w9
  __int64 v13; // x1
  Il2CppObject *String_83184936; // x19
  System_Object_array *v15; // x0

  if ( (byte_593C50C & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardSave_TypeInfo);
    sub_21FFC50(&Method_JsonManager_DeserializeArray_ClassBoardSave_ClassBoardSaveData___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__TypeInfo);
    sub_21FFC50(&StringLiteral_3546/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/);
    byte_593C50C = 1;
  }
  if ( !ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList )
  {
    v1 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v1,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData___ctor__);
    ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList = (struct System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__o *)v1;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)ClassBoardSave_TypeInfo->static_fields,
      (int32_t)v1,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
    HasKey = (struct System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__o *)UnityEngine_PlayerPrefs__HasKey(
                                                                                              (System_String_o *)StringLiteral_3546/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/,
                                                                                              0);
    if ( ((unsigned __int8)HasKey & 1) != 0 )
    {
      cachePlayCondOpenEffectList = ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
      if ( !cachePlayCondOpenEffectList )
        goto LABEL_14;
      size = cachePlayCondOpenEffectList->fields._size;
      v12 = cachePlayCondOpenEffectList->fields._version + 1;
      cachePlayCondOpenEffectList->fields._size = 0;
      cachePlayCondOpenEffectList->fields._version = v12;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)cachePlayCondOpenEffectList->fields._items, 0, size, 0);
      String_83184936 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_83184936(
                                          (System_String_o *)StringLiteral_3546/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/,
                                          0);
      if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v13);
      v15 = JsonManager__DeserializeArray_object_(
              String_83184936,
              (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_ClassBoardSave_ClassBoardSaveData___);
      if ( v15 )
      {
        v9 = (System_Collections_Generic_IEnumerable_T__o *)v15;
        HasKey = ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
        if ( HasKey )
        {
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)HasKey,
            v9,
            (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__);
          return;
        }
LABEL_14:
        sub_21FFECC(HasKey, v9);
      }
    }
  }
}


void ClassBoardSave__DeleteOpenedMissionClearDialogByBaseId(int32_t baseId, const MethodInfo *method)
{
  __int64 v3; // x20
  System_Collections_Generic_List_object__o *v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *cachePlayCondOpenEffectList; // x21
  System_Predicate_object__o *v7; // x19
  __int64 v8; // x1
  System_Object_array *v9; // x19
  System_String_o *v10; // x0

  if ( (byte_593C50A & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardSave_TypeInfo);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__RemoveAll__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__ToArray__);
    sub_21FFC50(&System_Predicate_ClassBoardSave_ClassBoardSaveData__TypeInfo);
    sub_21FFC50(&Method_ClassBoardSave___c__DisplayClass6_0__DeleteOpenedMissionClearDialogByBaseId_b__0__);
    sub_21FFC50(&ClassBoardSave___c__DisplayClass6_0_TypeInfo);
    sub_21FFC50(&StringLiteral_3546/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/);
    byte_593C50A = 1;
  }
  v3 = sub_21FFEBC(ClassBoardSave___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_10;
  *(_DWORD *)(v3 + 16) = baseId;
  cachePlayCondOpenEffectList = (System_Collections_Generic_List_object__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
  if ( !cachePlayCondOpenEffectList )
    return;
  v7 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_ClassBoardSave_ClassBoardSaveData__TypeInfo);
  System_Predicate_object____ctor(
    v7,
    (Il2CppObject *)v3,
    Method_ClassBoardSave___c__DisplayClass6_0__DeleteOpenedMissionClearDialogByBaseId_b__0__,
    0);
  System_Collections_Generic_List_object___RemoveAll(
    cachePlayCondOpenEffectList,
    (System_Predicate_T__o *)v7,
    (const MethodInfo_4451158 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__RemoveAll__);
  v4 = (System_Collections_Generic_List_object__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
  if ( !v4 )
LABEL_10:
    sub_21FFECC(v4, v5);
  v9 = System_Collections_Generic_List_object___ToArray(
         v4,
         (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__ToArray__);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v8);
  v10 = JsonManager__toJson(&v9->obj, 0, 0, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_3546/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, v10, 0);
}


ClassBoardSave_ClassBoardSaveData_o *ClassBoardSave__GetSquareSaveKey(
        IClassBoardSquareModel_o *squareModel,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  IClassBoardSquareModel_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  IClassBoardSquareModel_c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  int v14; // w8
  ClassBoardSave_ClassBoardSaveData_o *result; // x0

  if ( (byte_593C50B & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardSave_ClassBoardSaveData_TypeInfo);
    sub_21FFC50(&IClassBoardSquareModel_TypeInfo);
    byte_593C50B = 1;
  }
  v3 = sub_21FFEBC(ClassBoardSave_ClassBoardSaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !squareModel )
    goto LABEL_18;
  klass = squareModel->klass;
  v7 = *(unsigned __int16 *)&squareModel->klass->_2.rank;
  if ( *(_WORD *)&squareModel->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_8;
    }
    v9 = (__int64)&klass->vtable[*p_offset + 1];
  }
  else
  {
LABEL_8:
    v9 = sub_2237E2C(squareModel, IClassBoardSquareModel_TypeInfo, 1);
  }
  v4 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v9)(squareModel, *(_QWORD *)(v9 + 8));
  if ( !v3 )
LABEL_18:
    sub_21FFECC(v4, v5);
  *(_DWORD *)(v3 + 16) = v4;
  v10 = squareModel->klass;
  v11 = *(unsigned __int16 *)&squareModel->klass->_2.rank;
  if ( *(_WORD *)&squareModel->klass->_2.rank )
  {
    v12 = &v10->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v12 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v11;
      v12 += 4;
      if ( !v11 )
        goto LABEL_15;
    }
    v13 = (__int64)&v10->vtable[*v12];
  }
  else
  {
LABEL_15:
    v13 = sub_2237E2C(squareModel, IClassBoardSquareModel_TypeInfo, 0);
  }
  v14 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v13)(squareModel, *(_QWORD *)(v13 + 8));
  result = (ClassBoardSave_ClassBoardSaveData_o *)v3;
  *(_DWORD *)(v3 + 20) = v14;
  return result;
}


bool ClassBoardSave__IsPlayCondOpenEffect(IClassBoardLockModel_o *lockModel, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  _BOOL8 HasKey; // x0
  System_Collections_Generic_List_T__o *cachePlayCondOpenEffectList; // x19
  System_Func_object__bool__o *v14; // x21

  if ( (byte_593C508 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_ClassBoardSave_ClassBoardSaveData___);
    sub_21FFC50(&ClassBoardSave_TypeInfo);
    sub_21FFC50(&System_Func_ClassBoardSave_ClassBoardSaveData__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__get_Count__);
    sub_21FFC50(&Method_ClassBoardSave___c__DisplayClass4_0__IsPlayCondOpenEffect_b__0__);
    sub_21FFC50(&ClassBoardSave___c__DisplayClass4_0_TypeInfo);
    sub_21FFC50(&StringLiteral_3546/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/);
    byte_593C508 = 1;
  }
  v3 = sub_21FFEBC(ClassBoardSave___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_9;
  *(_QWORD *)(v3 + 16) = lockModel;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)lockModel, v6, v7, v8, v9, v10, v11);
  HasKey = UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_3546/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, 0);
  if ( !HasKey )
    return 0;
  ClassBoardSave__CheckOpenedMissionClearDialog((const MethodInfo *)HasKey);
  cachePlayCondOpenEffectList = (System_Collections_Generic_List_T__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
  if ( !cachePlayCondOpenEffectList )
LABEL_9:
    sub_21FFECC(v4, v5);
  if ( cachePlayCondOpenEffectList->fields._size >= 1 )
  {
    v14 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ClassBoardSave_ClassBoardSaveData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)v3,
      Method_ClassBoardSave___c__DisplayClass4_0__IsPlayCondOpenEffect_b__0__,
      0);
    return BasicHelper__Any_object_(
             cachePlayCondOpenEffectList,
             (System_Func_T__bool__o *)v14,
             (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_ClassBoardSave_ClassBoardSaveData___);
  }
  return 0;
}


void ClassBoardSave__SaveOpenedMissionClearDialog(
        System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *locks,
        const MethodInfo *method)
{
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__c *klass; // x8
  __int64 v4; // x9
  int32_t *p_offset; // x10
  __int64 v6; // x0
  System_Func_object__object__o *v7; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  System_Collections_Generic_List_TSource__o *v9; // x19
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *cachePlayCondOpenEffectList; // x0
  __int64 v12; // x1
  System_Object_array *v13; // x19
  System_String_o *v14; // x0

  if ( (byte_593C509 & 1) == 0 )
  {
    sub_21FFC50(&Method_ClassBoardSave_GetSquareSaveKey__);
    sub_21FFC50(&ClassBoardSave_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_ClassBoardSave_ClassBoardSaveData___);
    sub_21FFC50(&System_Func_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__TypeInfo);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__ToArray__);
    sub_21FFC50(&StringLiteral_3546/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/);
    byte_593C509 = 1;
  }
  if ( locks )
  {
    klass = locks->klass;
    v4 = *(unsigned __int16 *)&locks->klass->_2.rank;
    if ( *(_WORD *)&locks->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__TypeInfo )
      {
        --v4;
        p_offset += 4;
        if ( !v4 )
          goto LABEL_8;
      }
      v6 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_8:
      v6 = sub_2237E2C(locks, System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__TypeInfo, 0);
    }
    if ( (*(int (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *, _QWORD))v6)(
           locks,
           *(_QWORD *)(v6 + 8)) >= 1 )
    {
      v7 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData__TypeInfo);
      System_Func_object__object____ctor(v7, 0, Method_ClassBoardSave_GetSquareSaveKey__, 0);
      v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)locks,
                                                                  (System_Func_TSource__TResult__o *)v7,
                                                                  (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData___);
      v9 = System_Linq_Enumerable__ToList_object_(
             v8,
             (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_ClassBoardSave_ClassBoardSaveData___);
      ClassBoardSave__CheckOpenedMissionClearDialog((const MethodInfo *)v9);
      cachePlayCondOpenEffectList = (System_Collections_Generic_List_object__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
      if ( !cachePlayCondOpenEffectList
        || (System_Collections_Generic_List_object___AddRange(
              cachePlayCondOpenEffectList,
              (System_Collections_Generic_IEnumerable_T__o *)v9,
              (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__),
            (cachePlayCondOpenEffectList = (System_Collections_Generic_List_object__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList) == 0) )
      {
        sub_21FFECC(cachePlayCondOpenEffectList, v10);
      }
      v13 = System_Collections_Generic_List_object___ToArray(
              cachePlayCondOpenEffectList,
              (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__ToArray__);
      if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v12);
      v14 = JsonManager__toJson(&v13->obj, 0, 0, 0);
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_3546/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, v14, 0);
    }
  }
}


void ClassBoardSave_ClassBoardSaveData___ctor(ClassBoardSave_ClassBoardSaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardSave_ClassBoardSaveData__Equals(
        ClassBoardSave_ClassBoardSaveData_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  System_Type_o *Type; // x21
  System_Type_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 naturalAligment; // x9
  ClassBoardSave_ClassBoardSaveData_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_593C50D & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardSave_ClassBoardSaveData_TypeInfo);
    byte_593C50D = 1;
  }
  if ( !obj )
    return 0;
  Type = System_Object__GetType((Il2CppObject *)this, 0);
  v6 = System_Object__GetType(obj, 0);
  if ( !Type )
    sub_21FFECC(v6, v7);
  if ( (((__int64 (__fastcall *)(System_Type_o *, System_Type_o *, const MethodInfo *))Type->klass->vtable._127_Equals.methodPtr)(
          Type,
          v6,
          Type->klass->vtable._127_Equals.method)
      & 1) == 0 )
    return 0;
  naturalAligment = ClassBoardSave_ClassBoardSaveData_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (ClassBoardSave_ClassBoardSaveData_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == ClassBoardSave_ClassBoardSaveData_TypeInfo )
  {
    if ( this->fields.BaseId == LODWORD(obj[1].klass) )
      return this->fields.SquareId == HIDWORD(obj[1].klass);
    return 0;
  }
  sub_220024C(obj, ClassBoardSave_ClassBoardSaveData_TypeInfo, v8);
  return ClassBoardSave_ClassBoardSaveData__GetHashCode(v11, v12);
}


int32_t ClassBoardSave_ClassBoardSaveData__GetHashCode(
        ClassBoardSave_ClassBoardSaveData_o *this,
        const MethodInfo *method)
{
  return this->fields.SquareId ^ this->fields.BaseId;
}


bool ClassBoardSave_ClassBoardSaveData__op_Equality(
        ClassBoardSave_ClassBoardSaveData_o *a,
        ClassBoardSave_ClassBoardSaveData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_21FFECC(a, b);
  return a->fields.BaseId == b->fields.BaseId && a->fields.SquareId == b->fields.SquareId;
}


bool ClassBoardSave_ClassBoardSaveData__op_Inequality(
        ClassBoardSave_ClassBoardSaveData_o *a,
        ClassBoardSave_ClassBoardSaveData_o *b,
        const MethodInfo *method)
{
  return !ClassBoardSave_ClassBoardSaveData__op_Equality(a, b, method);
}


void ClassBoardSave___c__DisplayClass4_0___ctor(ClassBoardSave___c__DisplayClass4_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardSave___c__DisplayClass4_0___IsPlayCondOpenEffect_b__0(
        ClassBoardSave___c__DisplayClass4_0_o *this,
        ClassBoardSave_ClassBoardSaveData_o *x,
        const MethodInfo *method)
{
  ClassBoardSave_ClassBoardSaveData_o *SquareSaveKey; // x1
  const MethodInfo *v5; // x2

  SquareSaveKey = ClassBoardSave__GetSquareSaveKey(
                    (IClassBoardSquareModel_o *)this->fields.lockModel,
                    (const MethodInfo *)x);
  return ClassBoardSave_ClassBoardSaveData__op_Equality(x, SquareSaveKey, v5);
}


void ClassBoardSave___c__DisplayClass6_0___ctor(ClassBoardSave___c__DisplayClass6_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardSave___c__DisplayClass6_0___DeleteOpenedMissionClearDialogByBaseId_b__0(
        ClassBoardSave___c__DisplayClass6_0_o *this,
        ClassBoardSave_ClassBoardSaveData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.BaseId == this->fields.baseId;
}