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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_IEnumerable_T__o *v17; // x1
  struct System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__o *cachePlayCondOpenEffectList; // x0
  Il2CppObject *String_35342888; // x19
  UserPresentBoxWindow_resData_array *v20; // x0

  if ( (byte_4189557 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardSave_TypeInfo, v1);
    sub_B2C35C(&Method_JsonManager_DeserializeArray_ClassBoardSave_ClassBoardSaveData___, v2);
    sub_B2C35C(&JsonManager_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__TypeInfo, v7);
    sub_B2C35C(&StringLiteral_3027/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, v8);
    byte_4189557 = 1;
  }
  if ( !ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList )
  {
    v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v9,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData___ctor__);
    static_fields = (BattleServantConfConponent_o *)ClassBoardSave_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v9;
    sub_B2C2F8(static_fields, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
    if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_3027/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, 0LL) )
    {
      cachePlayCondOpenEffectList = ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
      if ( !cachePlayCondOpenEffectList )
        goto LABEL_13;
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)cachePlayCondOpenEffectList,
        (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__Clear__);
      String_35342888 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_35342888(
                                          (System_String_o *)StringLiteral_3027/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/,
                                          0LL);
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      v20 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
              String_35342888,
              (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_ClassBoardSave_ClassBoardSaveData___);
      if ( v20 )
      {
        v17 = (System_Collections_Generic_IEnumerable_T__o *)v20;
        cachePlayCondOpenEffectList = ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
        if ( cachePlayCondOpenEffectList )
        {
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)cachePlayCondOpenEffectList,
            v17,
            (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__);
          return;
        }
LABEL_13:
        sub_B2C434(cachePlayCondOpenEffectList, v17);
      }
    }
  }
}


ClassBoardSave_ClassBoardSaveData_o *__fastcall ClassBoardSave__GetSquareSaveKey(
        IClassBoardSquareModel_o *squareModel,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ClassBoardSave_ClassBoardSaveData_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x3
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v12; // x3
  IClassBoardSquareModel_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0

  if ( (byte_4189556 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardSave_ClassBoardSaveData_TypeInfo, method);
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v3);
    byte_4189556 = 1;
  }
  v4 = (ClassBoardSave_ClassBoardSaveData_o *)sub_B2C42C(ClassBoardSave_ClassBoardSaveData_TypeInfo);
  ClassBoardSave_ClassBoardSaveData___ctor(v4, 0LL);
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
    p_method = sub_AC5258(squareModel, IClassBoardSquareModel_TypeInfo, 1LL, v7);
  }
  v5 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8));
  if ( !v4 )
LABEL_18:
    sub_B2C434(v5, v6);
  v4->fields.BaseId = v5;
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
    v16 = sub_AC5258(squareModel, IClassBoardSquareModel_TypeInfo, 0LL, v12);
  }
  v4->fields.SquareId = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v16)(
                          squareModel,
                          *(_QWORD *)(v16 + 8));
  return v4;
}


bool __fastcall ClassBoardSave__IsPlayCondOpenEffect(IClassBoardLockModel_o *lockModel, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  _BOOL8 HasKey; // x0
  System_Collections_Generic_List_T__o *cachePlayCondOpenEffectList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x21

  if ( (byte_4189554 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_ClassBoardSave_ClassBoardSaveData___, method);
    sub_B2C35C(&ClassBoardSave_TypeInfo, v3);
    sub_B2C35C(&Method_System_Func_ClassBoardSave_ClassBoardSaveData__bool___ctor__, v4);
    sub_B2C35C(&System_Func_ClassBoardSave_ClassBoardSaveData__bool__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__get_Count__, v6);
    sub_B2C35C(&Method_ClassBoardSave___c__DisplayClass4_0__IsPlayCondOpenEffect_b__0__, v7);
    sub_B2C35C(&ClassBoardSave___c__DisplayClass4_0_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_3027/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, v9);
    byte_4189554 = 1;
  }
  v10 = sub_B2C42C(ClassBoardSave___c__DisplayClass4_0_TypeInfo);
  ClassBoardSave___c__DisplayClass4_0___ctor((ClassBoardSave___c__DisplayClass4_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_9;
  *(_QWORD *)(v10 + 16) = lockModel;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)lockModel, v13, v14, v15, v16, v17, v18);
  HasKey = UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_3027/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, 0LL);
  if ( !HasKey )
    return 0;
  ClassBoardSave__CheckOpenedMissionClearDialog((const MethodInfo *)HasKey);
  cachePlayCondOpenEffectList = (System_Collections_Generic_List_T__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
  if ( !cachePlayCondOpenEffectList )
LABEL_9:
    sub_B2C434(v11, v12);
  if ( cachePlayCondOpenEffectList->fields._size >= 1 )
  {
    v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ClassBoardSave_ClassBoardSaveData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v21,
      (Il2CppObject *)v10,
      Method_ClassBoardSave___c__DisplayClass4_0__IsPlayCondOpenEffect_b__0__,
      (const MethodInfo_2711C04 *)Method_System_Func_ClassBoardSave_ClassBoardSaveData__bool___ctor__);
    return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
             cachePlayCondOpenEffectList,
             (System_Func_T__bool__o *)v21,
             (const MethodInfo_17266AC *)Method_BasicHelper_Any_ClassBoardSave_ClassBoardSaveData___);
  }
  return 0;
}


void __fastcall ClassBoardSave__SaveOpenedMissionClearDialog(
        System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *locks,
        const MethodInfo *method)
{
  __int64 v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v18; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Collections_Generic_List_TSource__o *v20; // x19
  __int64 v21; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *cachePlayCondOpenEffectList; // x0
  WarBoardUiData_SaveData_array *v23; // x19
  System_String_o *v24; // x0

  if ( (byte_4189555 & 1) == 0 )
  {
    sub_B2C35C(&Method_ClassBoardSave_GetSquareSaveKey__, method);
    sub_B2C35C(&ClassBoardSave_TypeInfo, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_ClassBoardSave_ClassBoardSaveData___, v6);
    sub_B2C35C(&Method_System_Func_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData___ctor__, v7);
    sub_B2C35C(&System_Func_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData__TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__TypeInfo, v9);
    sub_B2C35C(&JsonManager_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__ToArray__, v12);
    sub_B2C35C(&StringLiteral_3027/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, v13);
    byte_4189555 = 1;
  }
  if ( locks )
  {
    klass = locks->klass;
    if ( *(_WORD *)&locks->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__TypeInfo )
      {
        ++v15;
        p_offset += 4;
        if ( v15 >= *(unsigned __int16 *)&locks->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_AC5258(
                   locks,
                   System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__TypeInfo,
                   0LL,
                   v2);
    }
    if ( (*(int (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *, _QWORD))p_method)(
           locks,
           *(_QWORD *)(p_method + 8)) >= 1 )
    {
      v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        v18,
        0LL,
        Method_ClassBoardSave_GetSquareSaveKey__,
        (const MethodInfo_2713350 *)Method_System_Func_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData___ctor__);
      v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)locks,
                                                                   (System_Func_TSource__TResult__o *)v18,
                                                                   (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData___);
      v20 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
              v19,
              (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_ClassBoardSave_ClassBoardSaveData___);
      ClassBoardSave__CheckOpenedMissionClearDialog((const MethodInfo *)v20);
      cachePlayCondOpenEffectList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
      if ( !cachePlayCondOpenEffectList
        || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              cachePlayCondOpenEffectList,
              (System_Collections_Generic_IEnumerable_T__o *)v20,
              (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__),
            (cachePlayCondOpenEffectList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList) == 0LL) )
      {
        sub_B2C434(cachePlayCondOpenEffectList, v21);
      }
      v23 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)cachePlayCondOpenEffectList,
              (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__ToArray__);
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      v24 = JsonManager__toJson(&v23->obj, 0, 0, 0LL);
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_3027/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, v24, 0LL);
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
    sub_B2C434(a, b);
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