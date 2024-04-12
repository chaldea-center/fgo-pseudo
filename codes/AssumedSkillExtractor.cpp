System_Collections_Generic_IEnumerable_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData(
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
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

  if ( (byte_42B1C53 & 1) == 0 )
  {
    sub_B52984(&AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
    byte_42B1C53 = 1;
  }
  v3 = sub_B52A54(AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
  AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1___ctor(
    (AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *)v3,
    -2,
    0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 40) = battleEntity;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 40), (System_Int32_array **)battleEntity, v6, v7, v8, v9, v10, v11);
  return (System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v3;
}


System_Collections_Generic_IEnumerable_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateMasterSkill(
        BattleData_o *data,
        const MethodInfo *method)
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

  if ( (byte_42B1C54 & 1) == 0 )
  {
    sub_B52984(&AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
    byte_42B1C54 = 1;
  }
  v3 = sub_B52A54(AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
  AssumedSkillExtractor__EnumerateMasterSkill_d__2___ctor(
    (AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *)v3,
    -2,
    0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 40) = data;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 40), (System_Int32_array **)data, v6, v7, v8, v9, v10, v11);
  return (System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v3;
}


System_Collections_Generic_IEnumerable_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateSvtSimpleSkillData(
        BattleEntity_o *battleEntity,
        int32_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42B1C52 & 1) == 0 )
  {
    sub_B52984(&AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
    byte_42B1C52 = 1;
  }
  v5 = sub_B52A54(AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0___ctor(
    (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  *(_QWORD *)(v5 + 40) = battleEntity;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)battleEntity, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 52) = userSvtId;
  return (System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v5;
}


void __fastcall AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1___ctor(
        AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1__MoveNext(
        AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *v8; // x19
  int32_t _1__state; // w8
  struct BattleEntity_o *battleEntity; // x8
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct BattleEntity_o *v24; // x8
  System_Int32_array **userCommandCode; // x1
  BattleServantConfConponent_o *p__7__wrap2; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int v33; // w8
  int32_t _7__wrap5; // w8
  BattleServantConfConponent_o *p__7__wrap4; // x20
  int32_t v36; // w8
  __int64 v37; // x8
  System_Int32_array **CommandCodeSkillList; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  BattleServantConfConponent_c *v45; // x9
  int32_t v46; // w10
  BattleServantConfConponent_c *klass; // x9
  int namespaze; // w10
  bool v49; // w20
  __int64 v50; // x8
  int32_t v51; // w1
  __int64 v52; // x8
  __int64 v54; // x0
  __int64 v55; // [xsp+8h] [xbp-18h] BYREF
  SimpleSkillData_o v56; // 0:x0.8

  v8 = this;
  if ( (byte_42AEC1A & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_CommandCodeSkillMaster___);
    this = (AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *)sub_B52984(&DataManager_TypeInfo);
    byte_42AEC1A = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    _7__wrap5 = v8->fields.__7__wrap5;
    p__7__wrap4 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap4;
    v8->fields.__1__state = -1;
    v36 = _7__wrap5 + 1;
    v8->fields.__7__wrap5 = v36;
    goto LABEL_17;
  }
  if ( !_1__state )
  {
    battleEntity = v8->fields.battleEntity;
    v8->fields.__1__state = -1;
    if ( battleEntity )
    {
      if ( battleEntity->fields.userCommandCode )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_CommandCodeSkillMaster___);
        v8->fields._commandCodeMaster_5__2 = (struct CommandCodeSkillMaster_o *)Master_WarQuestSelectionMaster;
        sub_B52920(
          (BattleServantConfConponent_o *)&v8->fields._commandCodeMaster_5__2,
          Master_WarQuestSelectionMaster,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
        v24 = v8->fields.battleEntity;
        if ( !v24 )
          goto LABEL_28;
        userCommandCode = (System_Int32_array **)v24->fields.userCommandCode;
        v8->fields.__7__wrap2 = (struct CommandCodeInfo_array *)userCommandCode;
        p__7__wrap2 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap2;
        sub_B52920(
          (BattleServantConfConponent_o *)&v8->fields.__7__wrap2,
          userCommandCode,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
        v33 = 0;
        for ( v8->fields.__7__wrap3 = 0; ; v8->fields.__7__wrap3 = v33 )
        {
          klass = p__7__wrap2->klass;
          if ( !p__7__wrap2->klass )
            goto LABEL_28;
          namespaze = (int)klass->_1.namespaze;
          if ( v33 >= namespaze )
            break;
          if ( v33 >= (unsigned int)namespaze )
            goto LABEL_29;
          v37 = *((_QWORD *)&klass->_1.byval_arg.data + v33);
          if ( !v37 )
            goto LABEL_28;
          this = (AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *)v8->fields._commandCodeMaster_5__2;
          if ( !this )
            goto LABEL_28;
          CommandCodeSkillList = (System_Int32_array **)CommandCodeSkillMaster__getCommandCodeSkillList(
                                                          (CommandCodeSkillMaster_o *)this,
                                                          *(_DWORD *)(v37 + 28),
                                                          0LL);
          v8->fields.__7__wrap4 = (struct CommandCodeSkillEntity_array *)CommandCodeSkillList;
          p__7__wrap4 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap4;
          sub_B52920(
            (BattleServantConfConponent_o *)&v8->fields.__7__wrap4,
            CommandCodeSkillList,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44);
          v36 = 0;
          v8->fields.__7__wrap5 = 0;
LABEL_17:
          v45 = p__7__wrap4->klass;
          if ( !p__7__wrap4->klass )
            goto LABEL_28;
          v46 = (int32_t)v45->_1.namespaze;
          if ( v36 < v46 )
          {
            if ( v36 >= (unsigned int)v46 )
            {
LABEL_29:
              v54 = sub_B52A88(this);
              sub_B52A28(v54, 0LL);
            }
            v50 = *((_QWORD *)&v45->_1.byval_arg.data + v36);
            if ( v50 )
            {
              v51 = *(_DWORD *)(v50 + 28);
              v56 = (SimpleSkillData_o)&v55;
              v55 = 0LL;
              v49 = 1;
              SimpleSkillData___ctor(v56, v51, 1, 0LL);
              v52 = v55;
              v8->fields.__1__state = 1;
              v8->fields.__2__current = (struct SimpleSkillData_o)v52;
              return v49;
            }
LABEL_28:
            sub_B52A5C(this, method);
          }
          v8->fields.__7__wrap4 = 0LL;
          sub_B52920(p__7__wrap4, 0LL, v2, v3, v4, v5, v6, v7);
          p__7__wrap2 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap2;
          v33 = v8->fields.__7__wrap3 + 1;
        }
        p__7__wrap2->klass = 0LL;
        sub_B52920(p__7__wrap2, 0LL, v27, v28, v29, v30, v31, v32);
      }
    }
  }
  return 0;
}


System_Collections_Generic_IEnumerator_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1__System_Collections_Generic_IEnumerable_SimpleSkillData__GetEnumerator(
        AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *v10; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v12; // x1
  System_Int32_array **_3__battleEntity; // x1

  if ( (byte_42AEC1C & 1) == 0 )
  {
    sub_B52984(&AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
    byte_42AEC1C = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v10 = this;
  }
  else
  {
    v10 = (AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *)sub_B52A54(AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v10->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v10 )
      sub_B52A5C(CurrentManagedThreadId, v12);
  }
  _3__battleEntity = (System_Int32_array **)this->fields.__3__battleEntity;
  v10->fields.battleEntity = (struct BattleEntity_o *)_3__battleEntity;
  sub_B52920((BattleServantConfConponent_o *)&v10->fields.battleEntity, _3__battleEntity, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerator_SimpleSkillData__o *)v10;
}


SimpleSkillData_o __fastcall AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1__System_Collections_Generic_IEnumerator_SimpleSkillData__get_Current(
        AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1__System_Collections_IEnumerator_Reset(
        AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
}


Il2CppObject *__fastcall AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *this,
        const MethodInfo *method)
{
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AEC1B & 1) == 0 )
  {
    sub_B52984(&SimpleSkillData_TypeInfo);
    byte_42AEC1B = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(SimpleSkillData_TypeInfo, &_2__current);
}


void __fastcall AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1__System_IDisposable_Dispose(
        AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall AssumedSkillExtractor__EnumerateMasterSkill_d__2___ctor(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall AssumedSkillExtractor__EnumerateMasterSkill_d__2__MoveNext(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  UnityEngine_Object_o *data; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *masterSkillInfo; // x0
  struct System_Collections_Generic_List_Enumerator_BattleSkillInfoData__o *p__7__wrap1; // x20
  struct BattleData_o *v9; // x8
  __int128 v10; // q0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  _BOOL8 v17; // x0
  const MethodInfo *v18; // x1
  struct BattleSkillInfoData_o *current; // x20
  int32_t v20; // w1
  int32_t skilllv; // w2
  struct System_Collections_Generic_List_T__o *list; // x8
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+18h] [xbp-28h] BYREF
  SimpleSkillData_o v25; // 0:x0.8

  if ( (byte_42AEC1D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEC1D = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    p__7__wrap1 = &this->fields.__7__wrap1;
    goto LABEL_14;
  }
  if ( _1__state )
    goto LABEL_9;
  this->fields.__1__state = -1;
  data = (UnityEngine_Object_o *)this->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Equality(data, 0LL, 0LL);
  if ( v5 )
  {
LABEL_9:
    LOBYTE(masterSkillInfo) = 0;
    return (char)masterSkillInfo;
  }
  v9 = this->fields.data;
  if ( !v9 )
    sub_B52A5C(v5, v6);
  masterSkillInfo = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v9->fields.masterSkillInfo;
  if ( masterSkillInfo )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v24,
      masterSkillInfo,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    p__7__wrap1 = &this->fields.__7__wrap1;
    v10 = *(_OWORD *)&v24.fields.list;
    this->fields.__7__wrap1.fields.current = (struct BattleSkillInfoData_o *)v24.fields.current;
    *(_OWORD *)&this->fields.__7__wrap1.fields.list = v10;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.__7__wrap1, 0LL, v11, v12, v13, v14, v15, v16);
LABEL_14:
    this->fields.__1__state = -3;
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( v17 )
    {
      current = this->fields.__7__wrap1.fields.current;
      if ( !current )
        sub_B52A5C(v17, v18);
      v20 = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))current->klass->vtable._5_get_skillId.method)(
              this->fields.__7__wrap1.fields.current,
              current->klass->vtable._6_get_IndividualityArray.methodPtr);
      skilllv = current->fields.skilllv;
      v24.fields.list = 0LL;
      v25 = (SimpleSkillData_o)&v24;
      SimpleSkillData___ctor(v25, v20, skilllv, 0LL);
      list = v24.fields.list;
      LOBYTE(masterSkillInfo) = 1;
      this->fields.__1__state = 1;
      this->fields.__2__current = (struct SimpleSkillData_o)list;
    }
    else
    {
      AssumedSkillExtractor__EnumerateMasterSkill_d__2____m__Finally1(this, v18);
      LOBYTE(masterSkillInfo) = 0;
      p__7__wrap1->fields.list = 0LL;
      *(_QWORD *)&p__7__wrap1->fields.index = 0LL;
      p__7__wrap1->fields.current = 0LL;
    }
  }
  return (char)masterSkillInfo;
}


System_Collections_Generic_IEnumerator_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateMasterSkill_d__2__System_Collections_Generic_IEnumerable_SimpleSkillData__GetEnumerator(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v10; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v12; // x1
  System_Int32_array **_3__data; // x1

  if ( (byte_42AEC20 & 1) == 0 )
  {
    sub_B52984(&AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
    byte_42AEC20 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v10 = this;
  }
  else
  {
    v10 = (AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *)sub_B52A54(AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v10->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v10 )
      sub_B52A5C(CurrentManagedThreadId, v12);
  }
  _3__data = (System_Int32_array **)this->fields.__3__data;
  v10->fields.data = (struct BattleData_o *)_3__data;
  sub_B52920((BattleServantConfConponent_o *)&v10->fields.data, _3__data, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerator_SimpleSkillData__o *)v10;
}


SimpleSkillData_o __fastcall AssumedSkillExtractor__EnumerateMasterSkill_d__2__System_Collections_Generic_IEnumerator_SimpleSkillData__get_Current(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssumedSkillExtractor__EnumerateMasterSkill_d__2__System_Collections_IEnumerator_Reset(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_AssumedSkillExtractor__EnumerateMasterSkill_d__2_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
}


Il2CppObject *__fastcall AssumedSkillExtractor__EnumerateMasterSkill_d__2__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        const MethodInfo *method)
{
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AEC1F & 1) == 0 )
  {
    sub_B52984(&SimpleSkillData_TypeInfo);
    byte_42AEC1F = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(SimpleSkillData_TypeInfo, &_2__current);
}


void __fastcall AssumedSkillExtractor__EnumerateMasterSkill_d__2__System_IDisposable_Dispose(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    AssumedSkillExtractor__EnumerateMasterSkill_d__2____m__Finally1(this, method);
}


void __fastcall AssumedSkillExtractor__EnumerateMasterSkill_d__2____m__Finally1(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AEC1E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    byte_42AEC1E = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
}


void __fastcall AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0___ctor(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__MoveNext(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *v8; // x19
  struct BattleEntity_o *battleEntity; // x8
  struct BattleInfoData_o *battleInfo; // x8
  _QWORD **v11; // x21
  __int64 v12; // x20
  __int16 v13; // w8
  __int64 v14; // x20
  __int64 v15; // x20
  __int64 v16; // x20
  System_Int32_array ***v17; // x8
  System_Int32_array **v18; // x1
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct BattleEntity_o *v32; // x8
  struct BattleInfoData_o *v33; // x8
  System_Int32_array **userSvt; // x1
  BattleServantConfConponent_o *p__7__wrap3; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  int v42; // w8
  int32_t *p__7__wrap4; // x24
  int32_t *p__7__wrap7; // x21
  int v45; // w8
  BattleServantConfConponent_o *p__7__wrap6; // x20
  int v47; // w8
  int32_t _7__wrap7; // w8
  int32_t v49; // w8
  int v50; // w8
  System_Int32_array **v51; // x1
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o **p_userSvt_5__6; // x21
  struct BattleUserServantData_o *userSvt_5__6; // x8
  __int64 v54; // x22
  __int64 v55; // x23
  int32_t userSvtId; // w8
  System_Int32_array **SelfSkillArray; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  BattleServantConfConponent_c *v64; // x9
  int v65; // w10
  System_Int32_array **ClassPassiveSkillArray; // x1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  BattleServantConfConponent_c *v73; // x9
  int v74; // w10
  System_Int32_array **AddPassiveSkillArray; // x1
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  BattleServantConfConponent_c *v82; // x9
  int v83; // w10
  System_Int32_array **AppendPassiveSkillArray; // x1
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  BattleServantConfConponent_c *v91; // x9
  int32_t v92; // w10
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  BattleServantConfConponent_c *klass; // x9
  int namespaze; // w10
  bool result; // w0
  struct SimpleSkillData_o v102; // x8
  struct SimpleSkillData_o v103; // x8
  int v104; // w9
  __int64 v105; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16

  v8 = this;
  if ( (byte_42AEC21 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_SimpleSkillData___);
    sub_B52984(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42AEC21 = 1;
  }
  switch ( v8->fields.__1__state )
  {
    case 0:
      battleEntity = v8->fields.battleEntity;
      v8->fields.__1__state = -1;
      if ( !battleEntity )
        return 0;
      battleInfo = battleEntity->fields.battleInfo;
      if ( !battleInfo || !battleInfo->fields.userSvt )
        return 0;
      v11 = (_QWORD **)Method_System_Array_Empty_SimpleSkillData___;
      v12 = **((_QWORD **)Method_System_Array_Empty_SimpleSkillData___ + 6);
      v13 = *(_WORD *)(v12 + 306);
      if ( (v13 & 1) == 0 )
      {
        sub_AEB684(**((_QWORD **)Method_System_Array_Empty_SimpleSkillData___ + 6));
        v13 = *(_WORD *)(v12 + 306);
      }
      if ( (v13 & 0x400) != 0 )
      {
        v14 = *v11[6];
        if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
          sub_AEB684(*v11[6]);
        if ( !*(_DWORD *)(v14 + 224) )
        {
          v15 = *v11[6];
          if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
            sub_AEB684(*v11[6]);
          j_il2cpp_runtime_class_init_0(v15);
        }
      }
      v16 = *v11[6];
      if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
        sub_AEB684(*v11[6]);
      v17 = *(System_Int32_array ****)(v16 + 184);
      v18 = *v17;
      v8->fields._empty_5__2 = (struct SimpleSkillData_array *)*v17;
      sub_B52920((BattleServantConfConponent_o *)&v8->fields._empty_5__2, v18, v2, v3, v4, v5, v6, v7);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ServantMaster___);
      v8->fields._svtMaster_5__3 = (struct ServantMaster_o *)Master_WarQuestSelectionMaster;
      sub_B52920(
        (BattleServantConfConponent_o *)&v8->fields._svtMaster_5__3,
        Master_WarQuestSelectionMaster,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      v32 = v8->fields.battleEntity;
      if ( !v32 )
        goto LABEL_76;
      v33 = v32->fields.battleInfo;
      if ( !v33 )
        goto LABEL_76;
      userSvt = (System_Int32_array **)v33->fields.userSvt;
      v8->fields.__7__wrap3 = (struct BattleUserServantData_array *)userSvt;
      p__7__wrap3 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap3;
      sub_B52920((BattleServantConfConponent_o *)&v8->fields.__7__wrap3, userSvt, v26, v27, v28, v29, v30, v31);
      v42 = 0;
      v8->fields.__7__wrap4 = 0;
      p__7__wrap4 = &v8->fields.__7__wrap4;
      break;
    case 1:
      p__7__wrap7 = &v8->fields.__7__wrap7;
      v50 = v8->fields.__7__wrap7 + 1;
      p__7__wrap6 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap6;
      v8->fields.__1__state = -1;
      v8->fields.__7__wrap7 = v50;
      goto LABEL_41;
    case 2:
      p__7__wrap7 = &v8->fields.__7__wrap7;
      v45 = v8->fields.__7__wrap7 + 1;
      p__7__wrap6 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap6;
      v8->fields.__1__state = -1;
      v8->fields.__7__wrap7 = v45;
      goto LABEL_47;
    case 3:
      p__7__wrap7 = &v8->fields.__7__wrap7;
      v47 = v8->fields.__7__wrap7 + 1;
      p__7__wrap6 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap6;
      v8->fields.__1__state = -1;
      v8->fields.__7__wrap7 = v47;
      goto LABEL_53;
    case 4:
      _7__wrap7 = v8->fields.__7__wrap7;
      p__7__wrap6 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap6;
      v8->fields.__1__state = -1;
      v49 = _7__wrap7 + 1;
      v8->fields.__7__wrap7 = v49;
      goto LABEL_59;
    default:
      return 0;
  }
  while ( 1 )
  {
    klass = p__7__wrap3->klass;
    if ( !p__7__wrap3->klass )
LABEL_76:
      sub_B52A5C(this, method);
    namespaze = (int)klass->_1.namespaze;
    if ( v42 >= namespaze )
      break;
    if ( v42 >= (unsigned int)namespaze )
      goto LABEL_77;
    v51 = (System_Int32_array **)*((_QWORD *)&klass->_1.byval_arg.data + v42);
    v8->fields._userSvt_5__6 = (struct BattleUserServantData_o *)v51;
    p_userSvt_5__6 = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o **)&v8->fields._userSvt_5__6;
    sub_B52920((BattleServantConfConponent_o *)&v8->fields._userSvt_5__6, v51, v36, v37, v38, v39, v40, v41);
    userSvt_5__6 = v8->fields._userSvt_5__6;
    if ( !userSvt_5__6 )
      goto LABEL_76;
    v55 = *(_QWORD *)&userSvt_5__6->fields.svtId.fields.currentCryptoKey;
    v54 = *(_QWORD *)&userSvt_5__6->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v106.fields.currentCryptoKey = v55;
    *(_QWORD *)&v106.fields.fakeValue = v54;
    this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                          v106,
                                                                          0LL);
    userSvtId = v8->fields.userSvtId;
    method = (const MethodInfo *)(unsigned int)this;
    if ( (userSvtId & 0x80000000) != 0 || (_DWORD)this == userSvtId )
    {
      this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v8->fields._svtMaster_5__3;
      if ( !this )
        goto LABEL_76;
      this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                                            (int32_t)method,
                                                                            (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( this )
      {
        this = *p_userSvt_5__6;
        if ( !*p_userSvt_5__6 )
          goto LABEL_76;
        SelfSkillArray = (System_Int32_array **)BattleUserServantData__GetSelfSkillArray(
                                                  (BattleUserServantData_o *)this,
                                                  0LL);
        if ( !SelfSkillArray )
          SelfSkillArray = (System_Int32_array **)v8->fields._empty_5__2;
        v8->fields.__7__wrap6 = (struct SimpleSkillData_array *)SelfSkillArray;
        p__7__wrap6 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap6;
        sub_B52920((BattleServantConfConponent_o *)&v8->fields.__7__wrap6, SelfSkillArray, v58, v59, v60, v61, v62, v63);
        v50 = 0;
        v8->fields.__7__wrap7 = 0;
        p__7__wrap7 = &v8->fields.__7__wrap7;
LABEL_41:
        v64 = p__7__wrap6->klass;
        if ( !p__7__wrap6->klass )
          goto LABEL_76;
        v65 = (int)v64->_1.namespaze;
        if ( v50 < v65 )
        {
          if ( v50 < (unsigned int)v65 )
          {
            v102 = (struct SimpleSkillData_o)*((_QWORD *)&v64->_1.byval_arg.data + v50);
            result = 1;
            v8->fields.__1__state = 1;
            v8->fields.__2__current = v102;
            return result;
          }
LABEL_77:
          v105 = sub_B52A88(this);
          sub_B52A28(v105, 0LL);
        }
        v8->fields.__7__wrap6 = 0LL;
        sub_B52920(p__7__wrap6, 0LL, v2, v3, v4, v5, v6, v7);
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v8->fields._userSvt_5__6;
        if ( !this )
          goto LABEL_76;
        ClassPassiveSkillArray = (System_Int32_array **)BattleUserServantData__GetClassPassiveSkillArray(
                                                          (BattleUserServantData_o *)this,
                                                          0LL);
        if ( !ClassPassiveSkillArray )
          ClassPassiveSkillArray = (System_Int32_array **)v8->fields._empty_5__2;
        p__7__wrap6->klass = (BattleServantConfConponent_c *)ClassPassiveSkillArray;
        sub_B52920(p__7__wrap6, ClassPassiveSkillArray, v67, v68, v69, v70, v71, v72);
        v45 = 0;
        *p__7__wrap7 = 0;
LABEL_47:
        v73 = p__7__wrap6->klass;
        if ( !p__7__wrap6->klass )
          goto LABEL_76;
        v74 = (int)v73->_1.namespaze;
        if ( v45 < v74 )
        {
          if ( v45 >= (unsigned int)v74 )
            goto LABEL_77;
          v103 = (struct SimpleSkillData_o)*((_QWORD *)&v73->_1.byval_arg.data + v45);
          v104 = 2;
LABEL_75:
          v8->fields.__1__state = v104;
          v8->fields.__2__current = v103;
          return 1;
        }
        v8->fields.__7__wrap6 = 0LL;
        sub_B52920(p__7__wrap6, 0LL, v2, v3, v4, v5, v6, v7);
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v8->fields._userSvt_5__6;
        if ( !this )
          goto LABEL_76;
        AddPassiveSkillArray = (System_Int32_array **)BattleUserServantData__GetAddPassiveSkillArray(
                                                        (BattleUserServantData_o *)this,
                                                        0LL);
        if ( !AddPassiveSkillArray )
          AddPassiveSkillArray = (System_Int32_array **)v8->fields._empty_5__2;
        p__7__wrap6->klass = (BattleServantConfConponent_c *)AddPassiveSkillArray;
        sub_B52920(p__7__wrap6, AddPassiveSkillArray, v76, v77, v78, v79, v80, v81);
        v47 = 0;
        *p__7__wrap7 = 0;
LABEL_53:
        v82 = p__7__wrap6->klass;
        if ( !p__7__wrap6->klass )
          goto LABEL_76;
        v83 = (int)v82->_1.namespaze;
        if ( v47 < v83 )
        {
          if ( v47 >= (unsigned int)v83 )
            goto LABEL_77;
          v103 = (struct SimpleSkillData_o)*((_QWORD *)&v82->_1.byval_arg.data + v47);
          v104 = 3;
          goto LABEL_75;
        }
        v8->fields.__7__wrap6 = 0LL;
        sub_B52920(p__7__wrap6, 0LL, v2, v3, v4, v5, v6, v7);
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v8->fields._userSvt_5__6;
        if ( !this )
          goto LABEL_76;
        AppendPassiveSkillArray = (System_Int32_array **)BattleUserServantData__GetAppendPassiveSkillArray(
                                                           (BattleUserServantData_o *)this,
                                                           0LL);
        if ( !AppendPassiveSkillArray )
          AppendPassiveSkillArray = (System_Int32_array **)v8->fields._empty_5__2;
        p__7__wrap6->klass = (BattleServantConfConponent_c *)AppendPassiveSkillArray;
        sub_B52920(p__7__wrap6, AppendPassiveSkillArray, v85, v86, v87, v88, v89, v90);
        v49 = 0;
        *p__7__wrap7 = 0;
LABEL_59:
        v91 = p__7__wrap6->klass;
        if ( !p__7__wrap6->klass )
          goto LABEL_76;
        v92 = (int32_t)v91->_1.namespaze;
        if ( v49 < v92 )
        {
          if ( v49 >= (unsigned int)v92 )
            goto LABEL_77;
          v103 = (struct SimpleSkillData_o)*((_QWORD *)&v91->_1.byval_arg.data + v49);
          v104 = 4;
          goto LABEL_75;
        }
        v8->fields.__7__wrap6 = 0LL;
        sub_B52920(p__7__wrap6, 0LL, v2, v3, v4, v5, v6, v7);
        v8->fields._userSvt_5__6 = 0LL;
        sub_B52920((BattleServantConfConponent_o *)&v8->fields._userSvt_5__6, 0LL, v93, v94, v95, v96, v97, v98);
        p__7__wrap4 = &v8->fields.__7__wrap4;
        p__7__wrap3 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap3;
      }
    }
    v42 = *p__7__wrap4 + 1;
    *p__7__wrap4 = v42;
  }
  p__7__wrap3->klass = 0LL;
  sub_B52920(p__7__wrap3, 0LL, v36, v37, v38, v39, v40, v41);
  return 0;
}


System_Collections_Generic_IEnumerator_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_Collections_Generic_IEnumerable_SimpleSkillData__GetEnumerator(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *v10; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v12; // x1
  System_Int32_array **_3__battleEntity; // x1
  System_Collections_Generic_IEnumerator_SimpleSkillData__o *result; // x0

  if ( (byte_42AEC23 & 1) == 0 )
  {
    sub_B52984(&AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
    byte_42AEC23 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v10 = this;
  }
  else
  {
    v10 = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)sub_B52A54(AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v10->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v10 )
      sub_B52A5C(CurrentManagedThreadId, v12);
  }
  _3__battleEntity = (System_Int32_array **)this->fields.__3__battleEntity;
  v10->fields.battleEntity = (struct BattleEntity_o *)_3__battleEntity;
  sub_B52920((BattleServantConfConponent_o *)&v10->fields.battleEntity, _3__battleEntity, v4, v5, v6, v7, v8, v9);
  result = (System_Collections_Generic_IEnumerator_SimpleSkillData__o *)v10;
  v10->fields.userSvtId = this->fields.__3__userSvtId;
  return result;
}


SimpleSkillData_o __fastcall AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_Collections_Generic_IEnumerator_SimpleSkillData__get_Current(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_Collections_IEnumerator_Reset(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
}


Il2CppObject *__fastcall AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AEC22 & 1) == 0 )
  {
    sub_B52984(&SimpleSkillData_TypeInfo);
    byte_42AEC22 = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(SimpleSkillData_TypeInfo, &_2__current);
}


void __fastcall AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_IDisposable_Dispose(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  ;
}