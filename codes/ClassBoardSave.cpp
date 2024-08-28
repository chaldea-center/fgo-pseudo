void __fastcall ClassBoardSave__CheckOpenedMissionClearDialog(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x19
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__o *HasKey; // x0
  System_Collections_Generic_IEnumerable_T__o *v13; // x1
  struct System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__o *cachePlayCondOpenEffectList; // x8
  int32_t size; // w2
  int v16; // w9
  Il2CppObject *String_69216128; // x19
  System_Object_array *v18; // x0

  if ( (byte_4A22F29 & 1) == 0 )
  {
    sub_1B715CC(&ClassBoardSave_TypeInfo, v1);
    sub_1B715CC(&Method_JsonManager_DeserializeArray_ClassBoardSave_ClassBoardSaveData___, v2);
    sub_1B715CC(&JsonManager_TypeInfo, v3);
    sub_1B715CC(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__, v4);
    sub_1B715CC(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__Clear__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData___ctor__, v6);
    sub_1B715CC(&System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__TypeInfo, v7);
    sub_1B715CC(&StringLiteral_3493/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, v8);
    byte_4A22F29 = 1;
  }
  if ( !ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList )
  {
    v9 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData___ctor__);
    ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList = (struct System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__o *)v9;
    sub_1B71570((ServantStatusBattleListViewItem_o *)ClassBoardSave_TypeInfo->static_fields, (int32_t)v9, v10, v11);
    HasKey = (struct System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__o *)UnityEngine_PlayerPrefs__HasKey(
                                                                                              (System_String_o *)StringLiteral_3493/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/,
                                                                                              0LL);
    if ( ((unsigned __int8)HasKey & 1) != 0 )
    {
      cachePlayCondOpenEffectList = ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
      if ( !cachePlayCondOpenEffectList )
        goto LABEL_14;
      size = cachePlayCondOpenEffectList->fields._size;
      v16 = cachePlayCondOpenEffectList->fields._version + 1;
      cachePlayCondOpenEffectList->fields._size = 0;
      cachePlayCondOpenEffectList->fields._version = v16;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)cachePlayCondOpenEffectList->fields._items, 0, size, 0LL);
      String_69216128 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69216128(
                                          (System_String_o *)StringLiteral_3493/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/,
                                          0LL);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v18 = JsonManager__DeserializeArray_object_(
              String_69216128,
              (const MethodInfo_2EC1990 *)Method_JsonManager_DeserializeArray_ClassBoardSave_ClassBoardSaveData___);
      if ( v18 )
      {
        v13 = (System_Collections_Generic_IEnumerable_T__o *)v18;
        HasKey = ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
        if ( HasKey )
        {
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)HasKey,
            v13,
            (const MethodInfo_34D046C *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__);
          return;
        }
LABEL_14:
        sub_1B71828(HasKey, v13);
      }
    }
  }
}


ClassBoardSave_ClassBoardSaveData_o *__fastcall ClassBoardSave__GetSquareSaveKey(
        IClassBoardSquareModel_o *squareModel,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  IClassBoardSquareModel_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  IClassBoardSquareModel_c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0

  if ( (byte_4A22F28 & 1) == 0 )
  {
    sub_1B715CC(&ClassBoardSave_ClassBoardSaveData_TypeInfo, method);
    sub_1B715CC(&IClassBoardSquareModel_TypeInfo, v3);
    byte_4A22F28 = 1;
  }
  v4 = sub_1B71818(ClassBoardSave_ClassBoardSaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !squareModel )
    goto LABEL_18;
  klass = squareModel->klass;
  v8 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BC35AC(squareModel, IClassBoardSquareModel_TypeInfo, 1LL);
  }
  v5 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8));
  if ( !v4 )
LABEL_18:
    sub_1B71828(v5, v6);
  *(_DWORD *)(v4 + 16) = v5;
  v11 = squareModel->klass;
  v12 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    v13 = &v11->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v13 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v12;
      v13 += 4;
      if ( !v12 )
        goto LABEL_15;
    }
    v14 = (__int64)&v11->vtable[*v13].method;
  }
  else
  {
LABEL_15:
    v14 = sub_1BC35AC(squareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  *(_DWORD *)(v4 + 20) = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v14)(
                           squareModel,
                           *(_QWORD *)(v14 + 8));
  return (ClassBoardSave_ClassBoardSaveData_o *)v4;
}


bool __fastcall ClassBoardSave__IsPlayCondOpenEffect(IClassBoardLockModel_o *lockModel, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  _BOOL8 HasKey; // x0
  System_Collections_Generic_List_T__o *cachePlayCondOpenEffectList; // x19
  System_Func_object__bool__o *v16; // x21

  if ( (byte_4A22F26 & 1) == 0 )
  {
    sub_1B715CC(&Method_BasicHelper_Any_ClassBoardSave_ClassBoardSaveData___, method);
    sub_1B715CC(&ClassBoardSave_TypeInfo, v3);
    sub_1B715CC(&System_Func_ClassBoardSave_ClassBoardSaveData__bool__TypeInfo, v4);
    sub_1B715CC(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__get_Count__, v5);
    sub_1B715CC(&Method_ClassBoardSave___c__DisplayClass4_0__IsPlayCondOpenEffect_b__0__, v6);
    sub_1B715CC(&ClassBoardSave___c__DisplayClass4_0_TypeInfo, v7);
    sub_1B715CC(&StringLiteral_3493/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, v8);
    byte_4A22F26 = 1;
  }
  v9 = sub_1B71818(ClassBoardSave___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = lockModel;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)lockModel, v12, v13);
  HasKey = UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_3493/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, 0LL);
  if ( !HasKey )
    return 0;
  ClassBoardSave__CheckOpenedMissionClearDialog((const MethodInfo *)HasKey);
  cachePlayCondOpenEffectList = (System_Collections_Generic_List_T__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
  if ( !cachePlayCondOpenEffectList )
LABEL_9:
    sub_1B71828(v10, v11);
  if ( cachePlayCondOpenEffectList->fields._size >= 1 )
  {
    v16 = (System_Func_object__bool__o *)sub_1B71818(System_Func_ClassBoardSave_ClassBoardSaveData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v16,
      (Il2CppObject *)v9,
      Method_ClassBoardSave___c__DisplayClass4_0__IsPlayCondOpenEffect_b__0__,
      0LL);
    return BasicHelper__Any_object_(
             cachePlayCondOpenEffectList,
             (System_Func_T__bool__o *)v16,
             (const MethodInfo_2E467B0 *)Method_BasicHelper_Any_ClassBoardSave_ClassBoardSaveData___);
  }
  return 0;
}


void __fastcall ClassBoardSave__SaveOpenedMissionClearDialog(
        System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *locks,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Func_object__object__o *v16; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_List_TSource__o *v18; // x19
  __int64 v19; // x1
  System_Collections_Generic_List_object__o *cachePlayCondOpenEffectList; // x0
  System_Object_array *v21; // x19
  System_String_o *v22; // x0

  if ( (byte_4A22F27 & 1) == 0 )
  {
    sub_1B715CC(&Method_ClassBoardSave_GetSquareSaveKey__, method);
    sub_1B715CC(&ClassBoardSave_TypeInfo, v3);
    sub_1B715CC(&Method_System_Linq_Enumerable_Select_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData___, v4);
    sub_1B715CC(&Method_System_Linq_Enumerable_ToList_ClassBoardSave_ClassBoardSaveData___, v5);
    sub_1B715CC(&System_Func_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData__TypeInfo, v6);
    sub_1B715CC(&System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__TypeInfo, v7);
    sub_1B715CC(&JsonManager_TypeInfo, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__ToArray__, v10);
    sub_1B715CC(&StringLiteral_3493/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, v11);
    byte_4A22F27 = 1;
  }
  if ( locks )
  {
    klass = locks->klass;
    v13 = *(unsigned __int16 *)(&locks->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&locks->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_1BC35AC(locks, System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__TypeInfo, 0LL);
    }
    if ( (*(int (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *, _QWORD))p_method)(
           locks,
           *(_QWORD *)(p_method + 8)) >= 1 )
    {
      v16 = (System_Func_object__object__o *)sub_1B71818(System_Func_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData__TypeInfo);
      System_Func_object__object____ctor(v16, 0LL, Method_ClassBoardSave_GetSquareSaveKey__, 0LL);
      v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)locks,
                                                                   (System_Func_TSource__TResult__o *)v16,
                                                                   (const MethodInfo_2E8BEEC *)Method_System_Linq_Enumerable_Select_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData___);
      v18 = System_Linq_Enumerable__ToList_object_(
              v17,
              (const MethodInfo_2E97ADC *)Method_System_Linq_Enumerable_ToList_ClassBoardSave_ClassBoardSaveData___);
      ClassBoardSave__CheckOpenedMissionClearDialog((const MethodInfo *)v18);
      cachePlayCondOpenEffectList = (System_Collections_Generic_List_object__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
      if ( !cachePlayCondOpenEffectList
        || (System_Collections_Generic_List_object___AddRange(
              cachePlayCondOpenEffectList,
              (System_Collections_Generic_IEnumerable_T__o *)v18,
              (const MethodInfo_34D046C *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__),
            (cachePlayCondOpenEffectList = (System_Collections_Generic_List_object__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList) == 0LL) )
      {
        sub_1B71828(cachePlayCondOpenEffectList, v19);
      }
      v21 = System_Collections_Generic_List_object___ToArray(
              cachePlayCondOpenEffectList,
              (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__ToArray__);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v22 = JsonManager__toJson(&v21->obj, 0, 0, 0LL);
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_3493/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, v22, 0LL);
    }
  }
}


void __fastcall ClassBoardSave_ClassBoardSaveData___ctor(
        ClassBoardSave_ClassBoardSaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardSave_ClassBoardSaveData__Equals(
        ClassBoardSave_ClassBoardSaveData_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  System_Type_o *Type; // x21
  System_Type_o *v6; // x0
  __int64 v7; // x1
  __int64 methodPtr_low; // x9
  ClassBoardSave_ClassBoardSaveData_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4A22F2A & 1) == 0 )
  {
    sub_1B715CC(&ClassBoardSave_ClassBoardSaveData_TypeInfo, obj);
    byte_4A22F2A = 1;
  }
  if ( !obj )
    return 0;
  Type = System_Object__GetType((Il2CppObject *)this, 0LL);
  v6 = System_Object__GetType(obj, 0LL);
  if ( !Type )
    sub_1B71828(v6, v7);
  if ( (((__int64 (__fastcall *)(System_Type_o *, System_Type_o *, Il2CppMethodPointer))Type->klass->vtable._128_Equals.method)(
          Type,
          v6,
          Type->klass->vtable._129_get_IsSzArray.methodPtr) & 1) == 0 )
    return 0;
  methodPtr_low = LOBYTE(ClassBoardSave_ClassBoardSaveData_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
    && (ClassBoardSave_ClassBoardSaveData_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] == ClassBoardSave_ClassBoardSaveData_TypeInfo )
  {
    if ( this->fields.BaseId == LODWORD(obj[1].klass) )
      return this->fields.SquareId == HIDWORD(obj[1].klass);
    return 0;
  }
  sub_1B71AE8(obj);
  return ClassBoardSave_ClassBoardSaveData__GetHashCode(v10, v11);
}


int32_t __fastcall ClassBoardSave_ClassBoardSaveData__GetHashCode(
        ClassBoardSave_ClassBoardSaveData_o *this,
        const MethodInfo *method)
{
  return this->fields.SquareId ^ this->fields.BaseId;
}


bool __fastcall ClassBoardSave_ClassBoardSaveData__op_Equality(
        ClassBoardSave_ClassBoardSaveData_o *a,
        ClassBoardSave_ClassBoardSaveData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B71828(a, b);
  return a->fields.BaseId == b->fields.BaseId && a->fields.SquareId == b->fields.SquareId;
}


bool __fastcall ClassBoardSave_ClassBoardSaveData__op_Inequality(
        ClassBoardSave_ClassBoardSaveData_o *a,
        ClassBoardSave_ClassBoardSaveData_o *b,
        const MethodInfo *method)
{
  return !ClassBoardSave_ClassBoardSaveData__op_Equality(a, b, method);
}


void __fastcall ClassBoardSave___c__DisplayClass4_0___ctor(
        ClassBoardSave___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardSave___c__DisplayClass4_0___IsPlayCondOpenEffect_b__0(
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