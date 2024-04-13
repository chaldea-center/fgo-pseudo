void __fastcall BattleServantSnapShotGroupDefault__MakeAndAppendSnapShot(
        BattleServantSnapShotGroupDefault_o *this,
        BattleServantData_o *baseSvtData,
        BattleServantData_o *opponentSvtData,
        BattleCommandData_o *commandOpponent,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  BattleBuffData_CheckIndividualitiesData_o *v18; // x21
  BattleDataDefine_c *v19; // x0
  System_Int32_array *NO_INDIVIDUALITY_ARRAY; // x22
  System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *SnapShotLinkedList_k__BackingField; // x19
  __int64 v22; // x20
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_42EB2AB & 1) == 0 )
  {
    sub_B5D5C4(&BattleDataDefine_TypeInfo, (_DWORD)baseSvtData, (_DWORD)opponentSvtData, commandOpponent);
    sub_B5D5C4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v9, v10, v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__AddLast__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&BattleServantSnapShotGroupBase_SnapShot_TypeInfo, v15, v16, v17);
    byte_42EB2AB = 1;
  }
  if ( opponentSvtData )
  {
    v18 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B5D694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v18, baseSvtData, opponentSvtData, 0LL, commandOpponent, 0LL, 0LL);
  }
  else
  {
    v19 = BattleDataDefine_TypeInfo;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v19 = BattleDataDefine_TypeInfo;
    }
    NO_INDIVIDUALITY_ARRAY = v19->static_fields->NO_INDIVIDUALITY_ARRAY;
    v18 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B5D694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor_23687408(
      v18,
      baseSvtData,
      0LL,
      0LL,
      NO_INDIVIDUALITY_ARRAY,
      0LL,
      0LL);
  }
  SnapShotLinkedList_k__BackingField = this->fields._SnapShotLinkedList_k__BackingField;
  v22 = sub_B5D694(BattleServantSnapShotGroupBase_SnapShot_TypeInfo);
  BattleServantSnapShotGroupBase_SnapShot___ctor((BattleServantSnapShotGroupBase_SnapShot_o *)v22, 0LL);
  if ( !v22
    || (*(_QWORD *)(v22 + 16) = v18,
        sub_B5D560((BattleServantConfConponent_o *)(v22 + 16), (System_Int32_array **)v18, v25, v26, v27, v28, v29, v30),
        !SnapShotLinkedList_k__BackingField) )
  {
    sub_B5D69C(v23, v24);
  }
  System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot___AddLast(
    SnapShotLinkedList_k__BackingField,
    (BattleServantSnapShotGroupBase_SnapShot_o *)v22,
    (const MethodInfo_23849B8 *)Method_System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__AddLast__);
}


BattleBuffData_CheckIndividualitiesData_array *__fastcall BattleServantSnapShotGroupDefault__get_CheckIndividualitiesDataArray(
        BattleServantSnapShotGroupDefault_o *this,
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
  struct System_Collections_Generic_LinkedList_BattleServantSnapShotGroupBase_SnapShot__o *SnapShotLinkedList_k__BackingField; // x19
  BattleServantSnapShotGroupDefault___c_c *v21; // x0
  struct BattleServantSnapShotGroupDefault___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__2_0; // x20
  Il2CppObject *v24; // x21
  struct BattleServantSnapShotGroupDefault___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_42EB2AC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData___,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_CheckIndividualitiesData___, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Func_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData___ctor__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &System_Func_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData__TypeInfo,
      v11,
      v12,
      v13);
    sub_B5D5C4(&Method_BattleServantSnapShotGroupDefault___c__get_CheckIndividualitiesDataArray_b__2_0__, v14, v15, v16);
    sub_B5D5C4(&BattleServantSnapShotGroupDefault___c_TypeInfo, v17, v18, v19);
    byte_42EB2AC = 1;
  }
  SnapShotLinkedList_k__BackingField = this->fields._SnapShotLinkedList_k__BackingField;
  v21 = BattleServantSnapShotGroupDefault___c_TypeInfo;
  if ( (BYTE3(BattleServantSnapShotGroupDefault___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantSnapShotGroupDefault___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantSnapShotGroupDefault___c_TypeInfo);
    v21 = BattleServantSnapShotGroupDefault___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__2_0,
      v24,
      Method_BattleServantSnapShotGroupDefault___c__get_CheckIndividualitiesDataArray_b__2_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData___ctor__);
    v25 = BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields;
    v25->__9__2_0 = (struct System_Func_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData__o *)_9__2_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)SnapShotLinkedList_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_BattleServantSnapShotGroupBase_SnapShot__BattleBuffData_CheckIndividualitiesData___);
  return (BattleBuffData_CheckIndividualitiesData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                            v32,
                                                            (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_CheckIndividualitiesData___);
}


void __fastcall BattleServantSnapShotGroupDefault___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BattleServantSnapShotGroupDefault___c_StaticFields *static_fields; // x0

  if ( (byte_42E60F6 & 1) == 0 )
  {
    sub_B5D5C4(&BattleServantSnapShotGroupDefault___c_TypeInfo, v1, v2, v3);
    byte_42E60F6 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleServantSnapShotGroupDefault___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BattleServantSnapShotGroupDefault___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleServantSnapShotGroupDefault___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall BattleServantSnapShotGroupDefault___c___ctor(
        BattleServantSnapShotGroupDefault___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleBuffData_CheckIndividualitiesData_o *__fastcall BattleServantSnapShotGroupDefault___c___get_CheckIndividualitiesDataArray_b__2_0(
        BattleServantSnapShotGroupDefault___c_o *this,
        BattleServantSnapShotGroupBase_SnapShot_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields._CheckIndividualitiesData_k__BackingField;
}