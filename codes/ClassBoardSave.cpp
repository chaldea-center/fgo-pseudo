void __fastcall ClassBoardSave__CheckOpenedMissionClearDialog(const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Collections_Generic_IEnumerable_T__o *v9; // x1
  struct System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__o *cachePlayCondOpenEffectList; // x0
  Il2CppObject *String_36337972; // x19
  UserPresentBoxWindow_resData_array *v12; // x0

  if ( (byte_438D41E & 1) == 0 )
  {
    sub_B775C4(&ClassBoardSave_TypeInfo);
    sub_B775C4(&Method_JsonManager_DeserializeArray_ClassBoardSave_ClassBoardSaveData___);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__TypeInfo);
    sub_B775C4(&StringLiteral_3144/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/);
    byte_438D41E = 1;
  }
  if ( !ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList )
  {
    v1 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v1,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData___ctor__);
    static_fields = (BattleServantConfConponent_o *)ClassBoardSave_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v1;
    sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
    if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_3144/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, 0LL) )
    {
      cachePlayCondOpenEffectList = ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
      if ( !cachePlayCondOpenEffectList )
        goto LABEL_13;
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)cachePlayCondOpenEffectList,
        (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__Clear__);
      String_36337972 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_36337972(
                                          (System_String_o *)StringLiteral_3144/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/,
                                          0LL);
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      v12 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
              String_36337972,
              (const MethodInfo_1DF16CC *)Method_JsonManager_DeserializeArray_ClassBoardSave_ClassBoardSaveData___);
      if ( v12 )
      {
        v9 = (System_Collections_Generic_IEnumerable_T__o *)v12;
        cachePlayCondOpenEffectList = ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
        if ( cachePlayCondOpenEffectList )
        {
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)cachePlayCondOpenEffectList,
            v9,
            (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__);
          return;
        }
LABEL_13:
        sub_B7769C(cachePlayCondOpenEffectList, v9);
      }
    }
  }
}


ClassBoardSave_ClassBoardSaveData_o *__fastcall ClassBoardSave__GetSquareSaveKey(
        IClassBoardSquareModel_o *squareModel,
        const MethodInfo *method)
{
  ClassBoardSave_ClassBoardSaveData_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  IClassBoardSquareModel_c *v10; // x8
  unsigned __int64 v11; // x10
  int32_t *v12; // x11
  __int64 v13; // x0

  if ( (byte_438D41D & 1) == 0 )
  {
    sub_B775C4(&ClassBoardSave_ClassBoardSaveData_TypeInfo);
    sub_B775C4(&IClassBoardSquareModel_TypeInfo);
    byte_438D41D = 1;
  }
  v3 = (ClassBoardSave_ClassBoardSaveData_o *)sub_B77694(ClassBoardSave_ClassBoardSaveData_TypeInfo);
  ClassBoardSave_ClassBoardSaveData___ctor(v3, 0LL);
  if ( !squareModel )
    goto LABEL_18;
  klass = squareModel->klass;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B0F4C0(squareModel, IClassBoardSquareModel_TypeInfo, 1LL);
  }
  v4 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8));
  if ( !v3 )
LABEL_18:
    sub_B7769C(v4, v5);
  v3->fields.BaseId = v4;
  v10 = squareModel->klass;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    v12 = &v10->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v12 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v11;
      v12 += 4;
      if ( v11 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v13 = (__int64)&v10->vtable[*v12].method;
  }
  else
  {
LABEL_15:
    v13 = sub_B0F4C0(squareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v3->fields.SquareId = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v13)(
                          squareModel,
                          *(_QWORD *)(v13 + 8));
  return v3;
}


bool __fastcall ClassBoardSave__IsPlayCondOpenEffect(IClassBoardLockModel_o *lockModel, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  _BOOL8 HasKey; // x0
  System_Collections_Generic_List_T__o *cachePlayCondOpenEffectList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x21

  if ( (byte_438D41B & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_ClassBoardSave_ClassBoardSaveData___);
    sub_B775C4(&ClassBoardSave_TypeInfo);
    sub_B775C4(&Method_System_Func_ClassBoardSave_ClassBoardSaveData__bool___ctor__);
    sub_B775C4(&System_Func_ClassBoardSave_ClassBoardSaveData__bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__get_Count__);
    sub_B775C4(&Method_ClassBoardSave___c__DisplayClass4_0__IsPlayCondOpenEffect_b__0__);
    sub_B775C4(&ClassBoardSave___c__DisplayClass4_0_TypeInfo);
    sub_B775C4(&StringLiteral_3144/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/);
    byte_438D41B = 1;
  }
  v3 = sub_B77694(ClassBoardSave___c__DisplayClass4_0_TypeInfo);
  ClassBoardSave___c__DisplayClass4_0___ctor((ClassBoardSave___c__DisplayClass4_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_9;
  *(_QWORD *)(v3 + 16) = lockModel;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)lockModel, v6, v7, v8, v9, v10, v11);
  HasKey = UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_3144/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, 0LL);
  if ( !HasKey )
    return 0;
  ClassBoardSave__CheckOpenedMissionClearDialog((const MethodInfo *)HasKey);
  cachePlayCondOpenEffectList = (System_Collections_Generic_List_T__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
  if ( !cachePlayCondOpenEffectList )
LABEL_9:
    sub_B7769C(v4, v5);
  if ( cachePlayCondOpenEffectList->fields._size >= 1 )
  {
    v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_ClassBoardSave_ClassBoardSaveData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v14,
      (Il2CppObject *)v3,
      Method_ClassBoardSave___c__DisplayClass4_0__IsPlayCondOpenEffect_b__0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_ClassBoardSave_ClassBoardSaveData__bool___ctor__);
    return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
             cachePlayCondOpenEffectList,
             (System_Func_T__bool__o *)v14,
             (const MethodInfo_1C66144 *)Method_BasicHelper_Any_ClassBoardSave_ClassBoardSaveData___);
  }
  return 0;
}


void __fastcall ClassBoardSave__SaveOpenedMissionClearDialog(
        System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *locks,
        const MethodInfo *method)
{
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__c *klass; // x8
  unsigned __int64 v4; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v7; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  System_Collections_Generic_List_TSource__o *v9; // x19
  __int64 v10; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *cachePlayCondOpenEffectList; // x0
  WarBoardUiData_SaveData_array *v12; // x19
  System_String_o *v13; // x0

  if ( (byte_438D41C & 1) == 0 )
  {
    sub_B775C4(&Method_ClassBoardSave_GetSquareSaveKey__);
    sub_B775C4(&ClassBoardSave_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_ClassBoardSave_ClassBoardSaveData___);
    sub_B775C4(&Method_System_Func_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData___ctor__);
    sub_B775C4(&System_Func_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__TypeInfo);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__ToArray__);
    sub_B775C4(&StringLiteral_3144/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/);
    byte_438D41C = 1;
  }
  if ( locks )
  {
    klass = locks->klass;
    if ( *(_WORD *)&locks->klass->_2.bitflags1 )
    {
      v4 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__TypeInfo )
      {
        ++v4;
        p_offset += 4;
        if ( v4 >= *(unsigned __int16 *)&locks->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_B0F4C0(locks, System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__TypeInfo, 0LL);
    }
    if ( (*(int (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *, _QWORD))p_method)(
           locks,
           *(_QWORD *)(p_method + 8)) >= 1 )
    {
      v7 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        v7,
        0LL,
        Method_ClassBoardSave_GetSquareSaveKey__,
        (const MethodInfo_29EAA10 *)Method_System_Func_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData___ctor__);
      v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)locks,
                                                                  (System_Func_TSource__TResult__o *)v7,
                                                                  (const MethodInfo_1D39068 *)Method_System_Linq_Enumerable_Select_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData___);
      v9 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
             v8,
             (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_ClassBoardSave_ClassBoardSaveData___);
      ClassBoardSave__CheckOpenedMissionClearDialog((const MethodInfo *)v9);
      cachePlayCondOpenEffectList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
      if ( !cachePlayCondOpenEffectList
        || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              cachePlayCondOpenEffectList,
              (System_Collections_Generic_IEnumerable_T__o *)v9,
              (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__),
            (cachePlayCondOpenEffectList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList) == 0LL) )
      {
        sub_B7769C(cachePlayCondOpenEffectList, v10);
      }
      v12 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)cachePlayCondOpenEffectList,
              (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__ToArray__);
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      v13 = JsonManager__toJson(&v12->obj, 0, 0, 0LL);
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_3144/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, v13, 0LL);
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
    sub_B7769C(a, b);
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