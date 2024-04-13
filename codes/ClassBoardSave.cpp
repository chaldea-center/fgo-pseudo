void __fastcall ClassBoardSave__CheckOpenedMissionClearDialog(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_IEnumerable_T__o *v33; // x1
  struct System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__o *cachePlayCondOpenEffectList; // x0
  Il2CppObject *String_35648228; // x19
  UserPresentBoxWindow_resData_array *v36; // x0

  if ( (byte_42EA86C & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardSave_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_JsonManager_DeserializeArray_ClassBoardSave_ClassBoardSaveData___, v4, v5, v6);
    sub_B5D5C4(&JsonManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__Clear__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_3086/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, v22, v23, v24);
    byte_42EA86C = 1;
  }
  if ( !ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList )
  {
    v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v25,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData___ctor__);
    static_fields = (BattleServantConfConponent_o *)ClassBoardSave_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v25;
    sub_B5D560(static_fields, (System_Int32_array **)v25, v27, v28, v29, v30, v31, v32);
    if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_3086/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, 0LL) )
    {
      cachePlayCondOpenEffectList = ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
      if ( !cachePlayCondOpenEffectList )
        goto LABEL_13;
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)cachePlayCondOpenEffectList,
        (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__Clear__);
      String_35648228 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_35648228(
                                          (System_String_o *)StringLiteral_3086/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/,
                                          0LL);
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      v36 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
              String_35648228,
              (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_ClassBoardSave_ClassBoardSaveData___);
      if ( v36 )
      {
        v33 = (System_Collections_Generic_IEnumerable_T__o *)v36;
        cachePlayCondOpenEffectList = ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
        if ( cachePlayCondOpenEffectList )
        {
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)cachePlayCondOpenEffectList,
            v33,
            (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__);
          return;
        }
LABEL_13:
        sub_B5D69C(cachePlayCondOpenEffectList, v33);
      }
    }
  }
}


ClassBoardSave_ClassBoardSaveData_o *__fastcall ClassBoardSave__GetSquareSaveKey(
        IClassBoardSquareModel_o *squareModel,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ClassBoardSave_ClassBoardSaveData_o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x3
  IClassBoardSquareModel_c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0

  if ( (byte_42EA86B & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardSave_ClassBoardSaveData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v5, v6, v7);
    byte_42EA86B = 1;
  }
  v8 = (ClassBoardSave_ClassBoardSaveData_o *)sub_B5D694(ClassBoardSave_ClassBoardSaveData_TypeInfo);
  ClassBoardSave_ClassBoardSaveData___ctor(v8, 0LL);
  if ( !squareModel )
    goto LABEL_18;
  klass = squareModel->klass;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v13;
      p_offset += 4;
      if ( v13 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(squareModel, IClassBoardSquareModel_TypeInfo, 1LL, v11);
  }
  v9 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8));
  if ( !v8 )
LABEL_18:
    sub_B5D69C(v9, v10);
  v8->fields.BaseId = v9;
  v17 = squareModel->klass;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    v19 = &v17->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v19 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v18;
      v19 += 4;
      if ( v18 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v20 = (__int64)&v17->vtable[*v19].method;
  }
  else
  {
LABEL_15:
    v20 = sub_AF54C0(squareModel, IClassBoardSquareModel_TypeInfo, 0LL, v16);
  }
  v8->fields.SquareId = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v20)(
                          squareModel,
                          *(_QWORD *)(v20 + 8));
  return v8;
}


bool __fastcall ClassBoardSave__IsPlayCondOpenEffect(IClassBoardLockModel_o *lockModel, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x20
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  _BOOL8 HasKey; // x0
  System_Collections_Generic_List_T__o *cachePlayCondOpenEffectList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v37; // x21

  if ( (byte_42EA869 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_ClassBoardSave_ClassBoardSaveData___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ClassBoardSave_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_ClassBoardSave_ClassBoardSaveData__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_ClassBoardSave_ClassBoardSaveData__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_ClassBoardSave___c__DisplayClass4_0__IsPlayCondOpenEffect_b__0__, v17, v18, v19);
    sub_B5D5C4(&ClassBoardSave___c__DisplayClass4_0_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_3086/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, v23, v24, v25);
    byte_42EA869 = 1;
  }
  v26 = sub_B5D694(ClassBoardSave___c__DisplayClass4_0_TypeInfo);
  ClassBoardSave___c__DisplayClass4_0___ctor((ClassBoardSave___c__DisplayClass4_0_o *)v26, 0LL);
  if ( !v26 )
    goto LABEL_9;
  *(_QWORD *)(v26 + 16) = lockModel;
  sub_B5D560((BattleServantConfConponent_o *)(v26 + 16), (System_Int32_array **)lockModel, v29, v30, v31, v32, v33, v34);
  HasKey = UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_3086/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, 0LL);
  if ( !HasKey )
    return 0;
  ClassBoardSave__CheckOpenedMissionClearDialog((const MethodInfo *)HasKey);
  cachePlayCondOpenEffectList = (System_Collections_Generic_List_T__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
  if ( !cachePlayCondOpenEffectList )
LABEL_9:
    sub_B5D69C(v27, v28);
  if ( cachePlayCondOpenEffectList->fields._size >= 1 )
  {
    v37 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ClassBoardSave_ClassBoardSaveData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v37,
      (Il2CppObject *)v26,
      Method_ClassBoardSave___c__DisplayClass4_0__IsPlayCondOpenEffect_b__0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_ClassBoardSave_ClassBoardSaveData__bool___ctor__);
    return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
             cachePlayCondOpenEffectList,
             (System_Func_T__bool__o *)v37,
             (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_ClassBoardSave_ClassBoardSaveData___);
  }
  return 0;
}


void __fastcall ClassBoardSave__SaveOpenedMissionClearDialog(
        System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *locks,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v39; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Collections_Generic_List_TSource__o *v41; // x19
  __int64 v42; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *cachePlayCondOpenEffectList; // x0
  WarBoardUiData_SaveData_array *v44; // x19
  System_String_o *v45; // x0

  if ( (byte_42EA86A & 1) == 0 )
  {
    sub_B5D5C4(&Method_ClassBoardSave_GetSquareSaveKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ClassBoardSave_TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData___,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_ClassBoardSave_ClassBoardSaveData___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&JsonManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__ToArray__, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_3086/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, v32, v33, v34);
    byte_42EA86A = 1;
  }
  if ( locks )
  {
    klass = locks->klass;
    if ( *(_WORD *)&locks->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__TypeInfo )
      {
        ++v36;
        p_offset += 4;
        if ( v36 >= *(unsigned __int16 *)&locks->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_AF54C0(
                   locks,
                   System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__TypeInfo,
                   0LL,
                   v3);
    }
    if ( (*(int (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *, _QWORD))p_method)(
           locks,
           *(_QWORD *)(p_method + 8)) >= 1 )
    {
      v39 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        v39,
        0LL,
        Method_ClassBoardSave_GetSquareSaveKey__,
        (const MethodInfo_2C3041C *)Method_System_Func_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData___ctor__);
      v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)locks,
                                                                   (System_Func_TSource__TResult__o *)v39,
                                                                   (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_IClassBoardLockModel__ClassBoardSave_ClassBoardSaveData___);
      v41 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
              v40,
              (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_ClassBoardSave_ClassBoardSaveData___);
      ClassBoardSave__CheckOpenedMissionClearDialog((const MethodInfo *)v41);
      cachePlayCondOpenEffectList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList;
      if ( !cachePlayCondOpenEffectList
        || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              cachePlayCondOpenEffectList,
              (System_Collections_Generic_IEnumerable_T__o *)v41,
              (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__AddRange__),
            (cachePlayCondOpenEffectList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)ClassBoardSave_TypeInfo->static_fields->cachePlayCondOpenEffectList) == 0LL) )
      {
        sub_B5D69C(cachePlayCondOpenEffectList, v42);
      }
      v44 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)cachePlayCondOpenEffectList,
              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ClassBoardSave_ClassBoardSaveData__ToArray__);
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      v45 = JsonManager__toJson(&v44->obj, 0, 0, 0LL);
      UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_3086/*"CLASS_BOARD_OPEND_MISSION_CLEAR_KEY"*/, v45, 0LL);
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
    sub_B5D69C(a, b);
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