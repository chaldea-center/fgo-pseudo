void __fastcall ClassBoardSave__CheckOpenedMissionClearDialog(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__o *cachePlayCondOpenEffectList; // x0
  Il2CppObject *String_34837456; // x19
  UserPresentBoxWindow_resData_array *v22; // x0
  System_Collections_Generic_IEnumerable_T__o *v23; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v24; // x0

  if ( (byte_40FB9D1 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardSave_TypeInfo, v1);
    sub_B16FFC(&Method_JsonManager_DeserializeArray_ClassBoardSave_ClassBoardSaveData___, v5);
    sub_B16FFC(&JsonManager_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__Clear__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__TypeInfo, v10);
    sub_B16FFC(&StringLiteral_3018, v11);
    byte_40FB9D1 = 1;
  }
  if ( !ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList )
  {
    v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__TypeInfo,
                                                                                                    v1,
                                                                                                    v2,
                                                                                                    v3,
                                                                                                    v4);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v12,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData___ctor__);
    static_fields = (BattleServantConfConponent_o *)ClassBoardSave_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v12;
    sub_B16F98(static_fields, (System_Int32_array **)v12, v14, v15, v16, v17, v18, v19);
    if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_3018, 0LL) )
    {
      cachePlayCondOpenEffectList = ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
      if ( !cachePlayCondOpenEffectList )
        goto LABEL_13;
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)cachePlayCondOpenEffectList,
        (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__Clear__);
      String_34837456 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_34837456(
                                          (System_String_o *)StringLiteral_3018,
                                          0LL);
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      v22 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
              String_34837456,
              (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_ClassBoardSave_ClassBoardSaveData___);
      if ( v22 )
      {
        v23 = (System_Collections_Generic_IEnumerable_T__o *)v22;
        v24 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
        if ( v24 )
        {
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            v24,
            v23,
            (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__);
          return;
        }
LABEL_13:
        sub_B170D4();
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
  __int64 v4; // x4
  __int64 v6; // x1
  ClassBoardSave_ClassBoardSaveData_o *v7; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int32_t v12; // w0
  IClassBoardSquareModel_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0

  if ( (byte_40FB9D0 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardSave_ClassBoardSaveData_TypeInfo, method);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v6);
    byte_40FB9D0 = 1;
  }
  v7 = (ClassBoardSave_ClassBoardSaveData_o *)sub_B170CC(ClassBoardSave_ClassBoardSaveData_TypeInfo, method, v2, v3, v4);
  ClassBoardSave_ClassBoardSaveData___ctor(v7, 0LL);
  if ( !squareModel )
    goto LABEL_18;
  klass = squareModel->klass;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v9;
      p_offset += 4;
      if ( v9 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(squareModel, IClassBoardSquareModel_TypeInfo, 1LL);
  }
  v12 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8));
  if ( !v7 )
LABEL_18:
    sub_B170D4();
  v7->fields.BaseId = v12;
  v13 = squareModel->klass;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    v15 = &v13->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v15 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v14;
      v15 += 4;
      if ( v14 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v16 = (__int64)&v13->vtable[*v15].method;
  }
  else
  {
LABEL_15:
    v16 = sub_AAFEF8(squareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v7->fields.SquareId = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v16)(
                          squareModel,
                          *(_QWORD *)(v16 + 8));
  return v7;
}


bool __fastcall ClassBoardSave__IsPlayCondOpenEffect(IClassBoardLockModel_o *lockModel, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  _BOOL8 HasKey; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_Generic_List_T__o *cachePlayCondOpenEffectList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x21

  if ( (byte_40FB9CE & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_ClassBoardSave_ClassBoardSaveData___, method);
    sub_B16FFC(&ClassBoardSave_TypeInfo, v6);
    sub_B16FFC(&Method_System_Func_ClassBoardSave_ClassBoardSaveData__bool___ctor__, v7);
    sub_B16FFC(&System_Func_ClassBoardSave_ClassBoardSaveData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__get_Count__, v9);
    sub_B16FFC(&Method_ClassBoardSave___c__DisplayClass4_0__IsPlayCondOpenEffect_b__0__, v10);
    sub_B16FFC(&ClassBoardSave___c__DisplayClass4_0_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_3018, v12);
    byte_40FB9CE = 1;
  }
  v13 = sub_B170CC(ClassBoardSave___c__DisplayClass4_0_TypeInfo, method, v2, v3, v4);
  ClassBoardSave___c__DisplayClass4_0___ctor((ClassBoardSave___c__DisplayClass4_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_9;
  *(_QWORD *)(v13 + 16) = lockModel;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)lockModel, v14, v15, v16, v17, v18, v19);
  HasKey = UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_3018, 0LL);
  if ( !HasKey )
    return 0;
  ClassBoardSave__CheckOpenedMissionClearDialog((const MethodInfo *)HasKey);
  cachePlayCondOpenEffectList = (System_Collections_Generic_List_T__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
  if ( !cachePlayCondOpenEffectList )
LABEL_9:
    sub_B170D4();
  if ( cachePlayCondOpenEffectList->fields._size >= 1 )
  {
    v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_ClassBoardSave_ClassBoardSaveData__bool__TypeInfo,
                                                                               v21,
                                                                               v22,
                                                                               v23,
                                                                               v24);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v26,
      (Il2CppObject *)v13,
      Method_ClassBoardSave___c__DisplayClass4_0__IsPlayCondOpenEffect_b__0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_ClassBoardSave_ClassBoardSaveData__bool___ctor__);
    return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
             cachePlayCondOpenEffectList,
             (System_Func_T__bool__o *)v26,
             (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_ClassBoardSave_ClassBoardSaveData___);
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
  __int64 v12; // x1
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v21; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Collections_Generic_List_TSource__o *v23; // x19
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *cachePlayCondOpenEffectList; // x0
  struct System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__o *v25; // x0
  WarBoardUiData_SaveData_array *v26; // x19
  System_String_o *v27; // x0

  if ( (byte_40FB9CF & 1) == 0 )
  {
    sub_B16FFC(&Method_ClassBoardSave_GetSquareSaveKey__, method);
    sub_B16FFC(&ClassBoardSave_TypeInfo, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData___, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_ClassBoardSave_ClassBoardSaveData___, v5);
    sub_B16FFC(&Method_System_Func_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData___ctor__, v6);
    sub_B16FFC(&System_Func_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__TypeInfo, v8);
    sub_B16FFC(&JsonManager_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__ToArray__, v11);
    sub_B16FFC(&StringLiteral_3018, v12);
    byte_40FB9CF = 1;
  }
  if ( locks )
  {
    klass = locks->klass;
    if ( *(_WORD *)&locks->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&locks->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_AAFEF8(locks, System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__TypeInfo, 0LL);
    }
    if ( (*(int (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *, _QWORD))p_method)(
           locks,
           *(_QWORD *)(p_method + 8)) >= 1 )
    {
      v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                              System_Func_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData__TypeInfo,
                                                                                              v17,
                                                                                              v18,
                                                                                              v19,
                                                                                              v20);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        v21,
        0LL,
        Method_ClassBoardSave_GetSquareSaveKey__,
        (const MethodInfo_2B6C28C *)Method_System_Func_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData___ctor__);
      v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)locks,
                                                                   (System_Func_TSource__TResult__o *)v21,
                                                                   (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData___);
      v23 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
              v22,
              (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_ClassBoardSave_ClassBoardSaveData___);
      ClassBoardSave__CheckOpenedMissionClearDialog((const MethodInfo *)v23);
      cachePlayCondOpenEffectList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
      if ( !cachePlayCondOpenEffectList
        || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              cachePlayCondOpenEffectList,
              (System_Collections_Generic_IEnumerable_T__o *)v23,
              (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__),
            (v25 = ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList) == 0LL) )
      {
        sub_B170D4();
      }
      v26 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v25,
              (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__ToArray__);
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      v27 = JsonManager__toJson(&v26->obj, 0, 0, 0LL);
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_3018, v27, 0LL);
    }
  }
}


void __fastcall ClassBoardSave_ClassBoardSaveData___ctor(
        ClassBoardSave_ClassBoardSaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardSave_ClassBoardSaveData__op_Equality(
        ClassBoardSave_ClassBoardSaveData_o *a,
        ClassBoardSave_ClassBoardSaveData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
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

  SquareSaveKey = ClassBoardSave__GetSquareSaveKey((IClassBoardSquareModel_o *)this->fields.lockModel, 0LL);
  return ClassBoardSave_ClassBoardSaveData__op_Equality(x, SquareSaveKey, v5);
}