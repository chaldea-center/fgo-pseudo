void __fastcall ClassBoardSave__CheckOpenedMissionClearDialog(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__o *HasKey; // x0
  System_Collections_Generic_IEnumerable_T__o *v5; // x1
  struct System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__o *cachePlayCondOpenEffectList; // x8
  int32_t size; // w2
  int v8; // w9
  Il2CppObject *String_69417656; // x19
  System_Object_array *v10; // x0

  if ( (byte_4A5E5F9 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardSave_TypeInfo);
    sub_1B885B0(&Method_JsonManager_DeserializeArray_ClassBoardSave_ClassBoardSaveData___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__TypeInfo);
    sub_1B885B0(&StringLiteral_3511/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/);
    byte_4A5E5F9 = 1;
  }
  if ( !ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList )
  {
    v1 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v1,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData___ctor__);
    ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList = (struct System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__o *)v1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)ClassBoardSave_TypeInfo->static_fields, (int32_t)v1, v2, v3);
    HasKey = (struct System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__o *)UnityEngine_PlayerPrefs__HasKey(
                                                                                              (System_String_o *)StringLiteral_3511/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/,
                                                                                              0LL);
    if ( ((unsigned __int8)HasKey & 1) != 0 )
    {
      cachePlayCondOpenEffectList = ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
      if ( !cachePlayCondOpenEffectList )
        goto LABEL_14;
      size = cachePlayCondOpenEffectList->fields._size;
      v8 = cachePlayCondOpenEffectList->fields._version + 1;
      cachePlayCondOpenEffectList->fields._size = 0;
      cachePlayCondOpenEffectList->fields._version = v8;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)cachePlayCondOpenEffectList->fields._items, 0, size, 0LL);
      String_69417656 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_69417656(
                                          (System_String_o *)StringLiteral_3511/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/,
                                          0LL);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v10 = JsonManager__DeserializeArray_object_(
              String_69417656,
              (const MethodInfo_2EE5F40 *)Method_JsonManager_DeserializeArray_ClassBoardSave_ClassBoardSaveData___);
      if ( v10 )
      {
        v5 = (System_Collections_Generic_IEnumerable_T__o *)v10;
        HasKey = ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
        if ( HasKey )
        {
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)HasKey,
            v5,
            (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__);
          return;
        }
LABEL_14:
        sub_1B8880C(HasKey, v5);
      }
    }
  }
}


ClassBoardSave_ClassBoardSaveData_o *__fastcall ClassBoardSave__GetSquareSaveKey(
        IClassBoardSquareModel_o *squareModel,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  IClassBoardSquareModel_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  IClassBoardSquareModel_c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0

  if ( (byte_4A5E5F8 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardSave_ClassBoardSaveData_TypeInfo);
    sub_1B885B0(&IClassBoardSquareModel_TypeInfo);
    byte_4A5E5F8 = 1;
  }
  v3 = sub_1B887FC(ClassBoardSave_ClassBoardSaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !squareModel )
    goto LABEL_18;
  klass = squareModel->klass;
  v7 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BDA590(squareModel, IClassBoardSquareModel_TypeInfo, 1LL);
  }
  v4 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8));
  if ( !v3 )
LABEL_18:
    sub_1B8880C(v4, v5);
  *(_DWORD *)(v3 + 16) = v4;
  v10 = squareModel->klass;
  v11 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    v12 = &v10->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v12 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v11;
      v12 += 4;
      if ( !v11 )
        goto LABEL_15;
    }
    v13 = (__int64)&v10->vtable[*v12].method;
  }
  else
  {
LABEL_15:
    v13 = sub_1BDA590(squareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  *(_DWORD *)(v3 + 20) = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v13)(
                           squareModel,
                           *(_QWORD *)(v13 + 8));
  return (ClassBoardSave_ClassBoardSaveData_o *)v3;
}


bool __fastcall ClassBoardSave__IsPlayCondOpenEffect(IClassBoardLockModel_o *lockModel, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  _BOOL8 HasKey; // x0
  System_Collections_Generic_List_T__o *cachePlayCondOpenEffectList; // x19
  System_Func_object__bool__o *v10; // x21

  if ( (byte_4A5E5F6 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_ClassBoardSave_ClassBoardSaveData___);
    sub_1B885B0(&ClassBoardSave_TypeInfo);
    sub_1B885B0(&System_Func_ClassBoardSave_ClassBoardSaveData__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__get_Count__);
    sub_1B885B0(&Method_ClassBoardSave___c__DisplayClass4_0__IsPlayCondOpenEffect_b__0__);
    sub_1B885B0(&ClassBoardSave___c__DisplayClass4_0_TypeInfo);
    sub_1B885B0(&StringLiteral_3511/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/);
    byte_4A5E5F6 = 1;
  }
  v3 = sub_1B887FC(ClassBoardSave___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_9;
  *(_QWORD *)(v3 + 16) = lockModel;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)lockModel, v6, v7);
  HasKey = UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_3511/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, 0LL);
  if ( !HasKey )
    return 0;
  ClassBoardSave__CheckOpenedMissionClearDialog((const MethodInfo *)HasKey);
  cachePlayCondOpenEffectList = (System_Collections_Generic_List_T__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
  if ( !cachePlayCondOpenEffectList )
LABEL_9:
    sub_1B8880C(v4, v5);
  if ( cachePlayCondOpenEffectList->fields._size >= 1 )
  {
    v10 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_ClassBoardSave_ClassBoardSaveData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v10,
      (Il2CppObject *)v3,
      Method_ClassBoardSave___c__DisplayClass4_0__IsPlayCondOpenEffect_b__0__,
      0LL);
    return BasicHelper__Any_object_(
             cachePlayCondOpenEffectList,
             (System_Func_T__bool__o *)v10,
             (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_ClassBoardSave_ClassBoardSaveData___);
  }
  return 0;
}


void __fastcall ClassBoardSave__SaveOpenedMissionClearDialog(
        System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *locks,
        const MethodInfo *method)
{
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__c *klass; // x8
  __int64 v4; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Func_object__object__o *v7; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  System_Collections_Generic_List_TSource__o *v9; // x19
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *cachePlayCondOpenEffectList; // x0
  System_Object_array *v12; // x19
  System_String_o *v13; // x0

  if ( (byte_4A5E5F7 & 1) == 0 )
  {
    sub_1B885B0(&Method_ClassBoardSave_GetSquareSaveKey__);
    sub_1B885B0(&ClassBoardSave_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_ClassBoardSave_ClassBoardSaveData___);
    sub_1B885B0(&System_Func_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__ToArray__);
    sub_1B885B0(&StringLiteral_3511/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/);
    byte_4A5E5F7 = 1;
  }
  if ( locks )
  {
    klass = locks->klass;
    v4 = *(unsigned __int16 *)(&locks->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&locks->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__TypeInfo )
      {
        --v4;
        p_offset += 4;
        if ( !v4 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_1BDA590(locks, System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__TypeInfo, 0LL);
    }
    if ( (*(int (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *, _QWORD))p_method)(
           locks,
           *(_QWORD *)(p_method + 8)) >= 1 )
    {
      v7 = (System_Func_object__object__o *)sub_1B887FC(System_Func_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData__TypeInfo);
      System_Func_object__object____ctor(v7, 0LL, Method_ClassBoardSave_GetSquareSaveKey__, 0LL);
      v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)locks,
                                                                  (System_Func_TSource__TResult__o *)v7,
                                                                  (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData___);
      v9 = System_Linq_Enumerable__ToList_object_(
             v8,
             (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_ClassBoardSave_ClassBoardSaveData___);
      ClassBoardSave__CheckOpenedMissionClearDialog((const MethodInfo *)v9);
      cachePlayCondOpenEffectList = (System_Collections_Generic_List_object__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
      if ( !cachePlayCondOpenEffectList
        || (System_Collections_Generic_List_object___AddRange(
              cachePlayCondOpenEffectList,
              (System_Collections_Generic_IEnumerable_T__o *)v9,
              (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__),
            (cachePlayCondOpenEffectList = (System_Collections_Generic_List_object__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList) == 0LL) )
      {
        sub_1B8880C(cachePlayCondOpenEffectList, v10);
      }
      v12 = System_Collections_Generic_List_object___ToArray(
              cachePlayCondOpenEffectList,
              (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__ToArray__);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v13 = JsonManager__toJson(&v12->obj, 0, 0, 0LL);
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_3511/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, v13, 0LL);
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

  if ( (byte_4A5E5FA & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardSave_ClassBoardSaveData_TypeInfo);
    byte_4A5E5FA = 1;
  }
  if ( !obj )
    return 0;
  Type = System_Object__GetType((Il2CppObject *)this, 0LL);
  v6 = System_Object__GetType(obj, 0LL);
  if ( !Type )
    sub_1B8880C(v6, v7);
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
  sub_1B88ACC(obj);
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
    sub_1B8880C(a, b);
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