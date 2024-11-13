void __fastcall ClassBoardSave__CheckOpenedMissionClearDialog(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x19
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__o *HasKey; // x0
  System_Collections_Generic_IEnumerable_T__o *v26; // x1
  struct System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__o *cachePlayCondOpenEffectList; // x8
  int32_t size; // w2
  int v29; // w9
  __int64 v30; // x1
  Il2CppObject *String_70112520; // x19
  System_Object_array *v32; // x0

  if ( (byte_4B19727 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardSave_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_ClassBoardSave_ClassBoardSaveData___, v4, v5);
    sub_1BCA7E0(&JsonManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__Clear__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_3537/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, v16, v17);
    byte_4B19727 = 1;
  }
  if ( !ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList )
  {
    v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__TypeInfo,
                                                         v1,
                                                         v2,
                                                         v3);
    System_Collections_Generic_List_object____ctor(
      v18,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData___ctor__);
    ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList = (struct System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__o *)v18;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)ClassBoardSave_TypeInfo->static_fields,
      (int64_t)v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    HasKey = (struct System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__o *)UnityEngine_PlayerPrefs__HasKey(
                                                                                              (System_String_o *)StringLiteral_3537/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/,
                                                                                              0LL);
    if ( ((unsigned __int8)HasKey & 1) != 0 )
    {
      cachePlayCondOpenEffectList = ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
      if ( !cachePlayCondOpenEffectList )
        goto LABEL_14;
      size = cachePlayCondOpenEffectList->fields._size;
      v29 = cachePlayCondOpenEffectList->fields._version + 1;
      cachePlayCondOpenEffectList->fields._size = 0;
      cachePlayCondOpenEffectList->fields._version = v29;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)cachePlayCondOpenEffectList->fields._items, 0, size, 0LL);
      String_70112520 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_70112520(
                                          (System_String_o *)StringLiteral_3537/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/,
                                          0LL);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v30);
      v32 = JsonManager__DeserializeArray_object_(
              String_70112520,
              (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_ClassBoardSave_ClassBoardSaveData___);
      if ( v32 )
      {
        v26 = (System_Collections_Generic_IEnumerable_T__o *)v32;
        HasKey = ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
        if ( HasKey )
        {
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)HasKey,
            v26,
            (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__);
          return;
        }
LABEL_14:
        sub_1BCAA3C(HasKey, v26);
      }
    }
  }
}


ClassBoardSave_ClassBoardSaveData_o *__fastcall ClassBoardSave__GetSquareSaveKey(
        IClassBoardSquareModel_o *squareModel,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  IClassBoardSquareModel_c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  IClassBoardSquareModel_c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0

  if ( (byte_4B19726 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardSave_ClassBoardSaveData_TypeInfo, method, v2);
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v5, v6);
    byte_4B19726 = 1;
  }
  v7 = sub_1BCAA2C(ClassBoardSave_ClassBoardSaveData_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !squareModel )
    goto LABEL_18;
  klass = squareModel->klass;
  v11 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(squareModel, IClassBoardSquareModel_TypeInfo, 1LL);
  }
  v8 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8));
  if ( !v7 )
LABEL_18:
    sub_1BCAA3C(v8, v9);
  *(_DWORD *)(v7 + 16) = v8;
  v14 = squareModel->klass;
  v15 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    v16 = &v14->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v16 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v15;
      v16 += 4;
      if ( !v15 )
        goto LABEL_15;
    }
    v17 = (__int64)&v14->vtable[*v16].method;
  }
  else
  {
LABEL_15:
    v17 = sub_1C1C7C0(squareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  *(_DWORD *)(v7 + 20) = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v17)(
                           squareModel,
                           *(_QWORD *)(v17 + 8));
  return (ClassBoardSave_ClassBoardSaveData_o *)v7;
}


bool __fastcall ClassBoardSave__IsPlayCondOpenEffect(IClassBoardLockModel_o *lockModel, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  _BOOL8 HasKey; // x0
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_T__o *cachePlayCondOpenEffectList; // x19
  System_Func_object__bool__o *v30; // x21

  if ( (byte_4B19724 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_ClassBoardSave_ClassBoardSaveData___, method, v2);
    sub_1BCA7E0(&ClassBoardSave_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Func_ClassBoardSave_ClassBoardSaveData__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_ClassBoardSave___c__DisplayClass4_0__IsPlayCondOpenEffect_b__0__, v11, v12);
    sub_1BCA7E0(&ClassBoardSave___c__DisplayClass4_0_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_3537/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, v15, v16);
    byte_4B19724 = 1;
  }
  v17 = sub_1BCAA2C(ClassBoardSave___c__DisplayClass4_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_9;
  *(_QWORD *)(v17 + 16) = lockModel;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)lockModel, v20, v21, v22, v23, v24, v25);
  HasKey = UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_3537/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, 0LL);
  if ( !HasKey )
    return 0;
  ClassBoardSave__CheckOpenedMissionClearDialog((const MethodInfo *)HasKey);
  cachePlayCondOpenEffectList = (System_Collections_Generic_List_T__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
  if ( !cachePlayCondOpenEffectList )
LABEL_9:
    sub_1BCAA3C(v18, v19);
  if ( cachePlayCondOpenEffectList->fields._size >= 1 )
  {
    v30 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                           System_Func_ClassBoardSave_ClassBoardSaveData__bool__TypeInfo,
                                           v19,
                                           v27,
                                           v28);
    System_Func_object__bool____ctor(
      v30,
      (Il2CppObject *)v17,
      Method_ClassBoardSave___c__DisplayClass4_0__IsPlayCondOpenEffect_b__0__,
      0LL);
    return BasicHelper__Any_object_(
             cachePlayCondOpenEffectList,
             (System_Func_T__bool__o *)v30,
             (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_ClassBoardSave_ClassBoardSaveData___);
  }
  return 0;
}


void __fastcall ClassBoardSave__SaveOpenedMissionClearDialog(
        System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *locks,
        const MethodInfo *method)
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Func_object__object__o *v29; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_List_TSource__o *v31; // x19
  __int64 v32; // x1
  System_Collections_Generic_List_object__o *cachePlayCondOpenEffectList; // x0
  __int64 v34; // x1
  System_Object_array *v35; // x19
  System_String_o *v36; // x0

  if ( (byte_4B19725 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ClassBoardSave_GetSquareSaveKey__, method, v2);
    sub_1BCA7E0(&ClassBoardSave_TypeInfo, v4, v5);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData___,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_ClassBoardSave_ClassBoardSaveData___, v8, v9);
    sub_1BCA7E0(&System_Func_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__TypeInfo, v12, v13);
    sub_1BCA7E0(&JsonManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__ToArray__, v18, v19);
    sub_1BCA7E0(&StringLiteral_3537/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, v20, v21);
    byte_4B19725 = 1;
  }
  if ( locks )
  {
    klass = locks->klass;
    v23 = *(unsigned __int16 *)(&locks->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&locks->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_1C1C7C0(locks, System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__TypeInfo, 0LL);
    }
    if ( (*(int (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *, _QWORD))p_method)(
           locks,
           *(_QWORD *)(p_method + 8)) >= 1 )
    {
      v29 = (System_Func_object__object__o *)sub_1BCAA2C(
                                               System_Func_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData__TypeInfo,
                                               v26,
                                               v27,
                                               v28);
      System_Func_object__object____ctor(v29, 0LL, Method_ClassBoardSave_GetSquareSaveKey__, 0LL);
      v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)locks,
                                                                   (System_Func_TSource__TResult__o *)v29,
                                                                   (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData___);
      v31 = System_Linq_Enumerable__ToList_object_(
              v30,
              (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_ClassBoardSave_ClassBoardSaveData___);
      ClassBoardSave__CheckOpenedMissionClearDialog((const MethodInfo *)v31);
      cachePlayCondOpenEffectList = (System_Collections_Generic_List_object__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
      if ( !cachePlayCondOpenEffectList
        || (System_Collections_Generic_List_object___AddRange(
              cachePlayCondOpenEffectList,
              (System_Collections_Generic_IEnumerable_T__o *)v31,
              (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__),
            (cachePlayCondOpenEffectList = (System_Collections_Generic_List_object__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList) == 0LL) )
      {
        sub_1BCAA3C(cachePlayCondOpenEffectList, v32);
      }
      v35 = System_Collections_Generic_List_object___ToArray(
              cachePlayCondOpenEffectList,
              (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__ToArray__);
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v34);
      v36 = JsonManager__toJson(&v35->obj, 0, 0, 0LL);
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_3537/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, v36, 0LL);
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

  if ( (byte_4B19728 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardSave_ClassBoardSaveData_TypeInfo, obj, method);
    byte_4B19728 = 1;
  }
  if ( !obj )
    return 0;
  Type = System_Object__GetType((Il2CppObject *)this, 0LL);
  v6 = System_Object__GetType(obj, 0LL);
  if ( !Type )
    sub_1BCAA3C(v6, v7);
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
  sub_1BCACFC(obj);
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
    sub_1BCAA3C(a, b);
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