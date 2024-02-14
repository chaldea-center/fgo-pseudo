System_Collections_Generic_IEnumerable_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData(
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4216664 & 1) == 0 )
  {
    sub_B0D8A4(&AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo, method);
    byte_4216664 = 1;
  }
  v4 = sub_B0D974(AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo, method, v2);
  AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1___ctor(
    (AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *)v4,
    -2,
    0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 40) = battleEntity;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 40), (System_Int32_array **)battleEntity, v6, v7, v8, v9, v10, v11);
  return (System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v4;
}


System_Collections_Generic_IEnumerable_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateMasterSkill(
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4216665 & 1) == 0 )
  {
    sub_B0D8A4(&AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo, method);
    byte_4216665 = 1;
  }
  v4 = sub_B0D974(AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo, method, v2);
  AssumedSkillExtractor__EnumerateMasterSkill_d__2___ctor(
    (AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *)v4,
    -2,
    0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 40) = data;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 40), (System_Int32_array **)data, v6, v7, v8, v9, v10, v11);
  return (System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v4;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateSvtSimpleSkillData(
        BattleEntity_o *battleEntity,
        int32_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4216663 & 1) == 0 )
  {
    sub_B0D8A4(&AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo, *(_QWORD *)&userSvtId);
    byte_4216663 = 1;
  }
  v5 = sub_B0D974(AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo, *(_QWORD *)&userSvtId, method);
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0___ctor(
    (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_QWORD *)(v5 + 40) = battleEntity;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)battleEntity, v7, v8, v9, v10, v11, v12);
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
  __int64 v9; // x1
  int32_t _1__state; // w8
  struct BattleEntity_o *battleEntity; // x8
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct BattleEntity_o *v25; // x8
  System_Int32_array **userCommandCode; // x1
  BattleServantConfConponent_o *p__7__wrap2; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int v34; // w8
  int32_t _7__wrap5; // w8
  BattleServantConfConponent_o *p__7__wrap4; // x20
  int32_t v37; // w8
  __int64 v38; // x8
  System_Int32_array **CommandCodeSkillList; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  BattleServantConfConponent_c *v46; // x9
  int32_t v47; // w10
  BattleServantConfConponent_c *klass; // x9
  int namespaze; // w10
  bool v50; // w20
  __int64 v51; // x8
  int32_t v52; // w1
  __int64 v53; // x8
  __int64 v55; // x0
  __int64 v56; // [xsp+8h] [xbp-18h] BYREF
  SimpleSkillData_o v57; // 0:x0.8

  v8 = this;
  if ( (byte_421397C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_CommandCodeSkillMaster___, method);
    this = (AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *)sub_B0D8A4(&DataManager_TypeInfo, v9);
    byte_421397C = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    _7__wrap5 = v8->fields.__7__wrap5;
    p__7__wrap4 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap4;
    v8->fields.__1__state = -1;
    v37 = _7__wrap5 + 1;
    v8->fields.__7__wrap5 = v37;
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
        Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_CommandCodeSkillMaster___);
        v8->fields._commandCodeMaster_5__2 = (struct CommandCodeSkillMaster_o *)Master_WarQuestSelectionMaster;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v8->fields._commandCodeMaster_5__2,
          Master_WarQuestSelectionMaster,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
        v25 = v8->fields.battleEntity;
        if ( !v25 )
          goto LABEL_28;
        userCommandCode = (System_Int32_array **)v25->fields.userCommandCode;
        v8->fields.__7__wrap2 = (struct CommandCodeInfo_array *)userCommandCode;
        p__7__wrap2 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap2;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v8->fields.__7__wrap2,
          userCommandCode,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
        v34 = 0;
        for ( v8->fields.__7__wrap3 = 0; ; v8->fields.__7__wrap3 = v34 )
        {
          klass = p__7__wrap2->klass;
          if ( !p__7__wrap2->klass )
            goto LABEL_28;
          namespaze = (int)klass->_1.namespaze;
          if ( v34 >= namespaze )
            break;
          if ( v34 >= (unsigned int)namespaze )
            goto LABEL_29;
          v38 = *((_QWORD *)&klass->_1.byval_arg.data + v34);
          if ( !v38 )
            goto LABEL_28;
          this = (AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *)v8->fields._commandCodeMaster_5__2;
          if ( !this )
            goto LABEL_28;
          CommandCodeSkillList = (System_Int32_array **)CommandCodeSkillMaster__getCommandCodeSkillList(
                                                          (CommandCodeSkillMaster_o *)this,
                                                          *(_DWORD *)(v38 + 28),
                                                          0LL);
          v8->fields.__7__wrap4 = (struct CommandCodeSkillEntity_array *)CommandCodeSkillList;
          p__7__wrap4 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap4;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v8->fields.__7__wrap4,
            CommandCodeSkillList,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45);
          v37 = 0;
          v8->fields.__7__wrap5 = 0;
LABEL_17:
          v46 = p__7__wrap4->klass;
          if ( !p__7__wrap4->klass )
            goto LABEL_28;
          v47 = (int32_t)v46->_1.namespaze;
          if ( v37 < v47 )
          {
            if ( v37 >= (unsigned int)v47 )
            {
LABEL_29:
              v55 = sub_B0D9A8(this);
              sub_B0D948(v55, 0LL);
            }
            v51 = *((_QWORD *)&v46->_1.byval_arg.data + v37);
            if ( v51 )
            {
              v52 = *(_DWORD *)(v51 + 28);
              v57 = (SimpleSkillData_o)&v56;
              v56 = 0LL;
              v50 = 1;
              SimpleSkillData___ctor(v57, v52, 1, 0LL);
              v53 = v56;
              v8->fields.__1__state = 1;
              v8->fields.__2__current = (struct SimpleSkillData_o)v53;
              return v50;
            }
LABEL_28:
            sub_B0D97C(this);
          }
          v8->fields.__7__wrap4 = 0LL;
          sub_B0D840(p__7__wrap4, 0LL, v2, v3, v4, v5, v6, v7);
          p__7__wrap2 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap2;
          v34 = v8->fields.__7__wrap3 + 1;
        }
        p__7__wrap2->klass = 0LL;
        sub_B0D840(p__7__wrap2, 0LL, v28, v29, v30, v31, v32, v33);
      }
    }
  }
  return 0;
}


System_Collections_Generic_IEnumerator_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1__System_Collections_Generic_IEnumerable_SimpleSkillData__GetEnumerator(
        AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  int32_t l__initialThreadId; // w20
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *v10; // x20
  __int64 CurrentManagedThreadId; // x0
  System_Int32_array **_3__battleEntity; // x1

  if ( (byte_421397E & 1) == 0 )
  {
    sub_B0D8A4(&AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo, method);
    byte_421397E = 1;
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
    v10 = (AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *)sub_B0D974(
                                                                                 AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo,
                                                                                 method,
                                                                                 v2);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v10->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v10 )
      sub_B0D97C(CurrentManagedThreadId);
  }
  _3__battleEntity = (System_Int32_array **)this->fields.__3__battleEntity;
  v10->fields.battleEntity = (struct BattleEntity_o *)_3__battleEntity;
  sub_B0D840((BattleServantConfConponent_o *)&v10->fields.battleEntity, _3__battleEntity, v2, v5, v6, v7, v8, v9);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *this,
        const MethodInfo *method)
{
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_421397D & 1) == 0 )
  {
    sub_B0D8A4(&SimpleSkillData_TypeInfo, method);
    byte_421397D = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  UnityEngine_Object_o *data; // x20
  _BOOL8 v8; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *masterSkillInfo; // x0
  struct System_Collections_Generic_List_Enumerator_BattleSkillInfoData__o *p__7__wrap1; // x20
  struct BattleData_o *v11; // x8
  __int128 v12; // q0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  _BOOL8 v19; // x0
  const MethodInfo *v20; // x1
  struct BattleSkillInfoData_o *current; // x20
  int32_t v22; // w1
  int32_t skilllv; // w2
  struct System_Collections_Generic_List_T__o *list; // x8
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+18h] [xbp-28h] BYREF
  SimpleSkillData_o v27; // 0:x0.8

  if ( (byte_421397F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_421397F = 1;
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
  v8 = UnityEngine_Object__op_Equality(data, 0LL, 0LL);
  if ( v8 )
  {
LABEL_9:
    LOBYTE(masterSkillInfo) = 0;
    return (char)masterSkillInfo;
  }
  v11 = this->fields.data;
  if ( !v11 )
    sub_B0D97C(v8);
  masterSkillInfo = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v11->fields.masterSkillInfo;
  if ( masterSkillInfo )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v26,
      masterSkillInfo,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    p__7__wrap1 = &this->fields.__7__wrap1;
    v12 = *(_OWORD *)&v26.fields.list;
    this->fields.__7__wrap1.fields.current = (struct BattleSkillInfoData_o *)v26.fields.current;
    *(_OWORD *)&this->fields.__7__wrap1.fields.list = v12;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.__7__wrap1, 0LL, v13, v14, v15, v16, v17, v18);
LABEL_14:
    this->fields.__1__state = -3;
    v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( v19 )
    {
      current = this->fields.__7__wrap1.fields.current;
      if ( !current )
        sub_B0D97C(v19);
      v22 = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))current->klass->vtable._5_get_skillId.method)(
              this->fields.__7__wrap1.fields.current,
              current->klass->vtable._6_get_IndividualityArray.methodPtr);
      skilllv = current->fields.skilllv;
      v26.fields.list = 0LL;
      v27 = (SimpleSkillData_o)&v26;
      SimpleSkillData___ctor(v27, v22, skilllv, 0LL);
      list = v26.fields.list;
      LOBYTE(masterSkillInfo) = 1;
      this->fields.__1__state = 1;
      this->fields.__2__current = (struct SimpleSkillData_o)list;
    }
    else
    {
      AssumedSkillExtractor__EnumerateMasterSkill_d__2____m__Finally1(this, v20);
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
  System_String_array **v2; // x2
  int32_t l__initialThreadId; // w20
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v10; // x20
  __int64 CurrentManagedThreadId; // x0
  System_Int32_array **_3__data; // x1

  if ( (byte_4213982 & 1) == 0 )
  {
    sub_B0D8A4(&AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo, method);
    byte_4213982 = 1;
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
    v10 = (AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *)sub_B0D974(
                                                                  AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo,
                                                                  method,
                                                                  v2);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v10->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v10 )
      sub_B0D97C(CurrentManagedThreadId);
  }
  _3__data = (System_Int32_array **)this->fields.__3__data;
  v10->fields.data = (struct BattleData_o *)_3__data;
  sub_B0D840((BattleServantConfConponent_o *)&v10->fields.data, _3__data, v2, v5, v6, v7, v8, v9);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_AssumedSkillExtractor__EnumerateMasterSkill_d__2_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall AssumedSkillExtractor__EnumerateMasterSkill_d__2__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        const MethodInfo *method)
{
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4213981 & 1) == 0 )
  {
    sub_B0D8A4(&SimpleSkillData_TypeInfo, method);
    byte_4213981 = 1;
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
  if ( (byte_4213980 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, method);
    byte_4213980 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct BattleEntity_o *battleEntity; // x8
  struct BattleInfoData_o *battleInfo; // x8
  _QWORD **v15; // x21
  __int64 v16; // x20
  __int16 v17; // w8
  __int64 v18; // x20
  __int64 v19; // x20
  __int64 v20; // x20
  System_Int32_array ***v21; // x8
  System_Int32_array **v22; // x1
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct BattleEntity_o *v36; // x8
  struct BattleInfoData_o *v37; // x8
  System_Int32_array **userSvt; // x1
  BattleServantConfConponent_o *p__7__wrap3; // x20
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  int v46; // w8
  int32_t *p__7__wrap4; // x24
  int32_t *p__7__wrap7; // x21
  int v49; // w8
  BattleServantConfConponent_o *p__7__wrap6; // x20
  int v51; // w8
  int32_t _7__wrap7; // w8
  int32_t v53; // w8
  int v54; // w8
  System_Int32_array **v55; // x1
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o **p_userSvt_5__6; // x21
  struct BattleUserServantData_o *userSvt_5__6; // x8
  __int64 v58; // x22
  __int64 v59; // x23
  int32_t userSvtId; // w8
  int32_t v61; // w1
  System_Int32_array **SelfSkillArray; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  BattleServantConfConponent_c *v69; // x9
  int v70; // w10
  System_Int32_array **ClassPassiveSkillArray; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  BattleServantConfConponent_c *v78; // x9
  int v79; // w10
  System_Int32_array **AddPassiveSkillArray; // x1
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  BattleServantConfConponent_c *v87; // x9
  int v88; // w10
  System_Int32_array **AppendPassiveSkillArray; // x1
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  BattleServantConfConponent_c *v96; // x9
  int32_t v97; // w10
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  BattleServantConfConponent_c *klass; // x9
  int namespaze; // w10
  bool result; // w0
  struct SimpleSkillData_o v107; // x8
  struct SimpleSkillData_o v108; // x8
  int v109; // w9
  __int64 v110; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16

  v8 = this;
  if ( (byte_4213983 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_SimpleSkillData___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_B0D8A4(&DataManager_TypeInfo, v10);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)sub_B0D8A4(
                                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                          v12);
    byte_4213983 = 1;
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
      v15 = (_QWORD **)Method_System_Array_Empty_SimpleSkillData___;
      v16 = **((_QWORD **)Method_System_Array_Empty_SimpleSkillData___ + 6);
      v17 = *(_WORD *)(v16 + 306);
      if ( (v17 & 1) == 0 )
      {
        sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_SimpleSkillData___ + 6));
        v17 = *(_WORD *)(v16 + 306);
      }
      if ( (v17 & 0x400) != 0 )
      {
        v18 = *v15[6];
        if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
          sub_AA65A4(*v15[6]);
        if ( !*(_DWORD *)(v18 + 224) )
        {
          v19 = *v15[6];
          if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
            sub_AA65A4(*v15[6]);
          j_il2cpp_runtime_class_init_0(v19);
        }
      }
      v20 = *v15[6];
      if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
        sub_AA65A4(*v15[6]);
      v21 = *(System_Int32_array ****)(v20 + 184);
      v22 = *v21;
      v8->fields._empty_5__2 = (struct SimpleSkillData_array *)*v21;
      sub_B0D840((BattleServantConfConponent_o *)&v8->fields._empty_5__2, v22, v2, v3, v4, v5, v6, v7);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
      v8->fields._svtMaster_5__3 = (struct ServantMaster_o *)Master_WarQuestSelectionMaster;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v8->fields._svtMaster_5__3,
        Master_WarQuestSelectionMaster,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      v36 = v8->fields.battleEntity;
      if ( !v36 )
        goto LABEL_76;
      v37 = v36->fields.battleInfo;
      if ( !v37 )
        goto LABEL_76;
      userSvt = (System_Int32_array **)v37->fields.userSvt;
      v8->fields.__7__wrap3 = (struct BattleUserServantData_array *)userSvt;
      p__7__wrap3 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap3;
      sub_B0D840((BattleServantConfConponent_o *)&v8->fields.__7__wrap3, userSvt, v30, v31, v32, v33, v34, v35);
      v46 = 0;
      v8->fields.__7__wrap4 = 0;
      p__7__wrap4 = &v8->fields.__7__wrap4;
      break;
    case 1:
      p__7__wrap7 = &v8->fields.__7__wrap7;
      v54 = v8->fields.__7__wrap7 + 1;
      p__7__wrap6 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap6;
      v8->fields.__1__state = -1;
      v8->fields.__7__wrap7 = v54;
      goto LABEL_41;
    case 2:
      p__7__wrap7 = &v8->fields.__7__wrap7;
      v49 = v8->fields.__7__wrap7 + 1;
      p__7__wrap6 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap6;
      v8->fields.__1__state = -1;
      v8->fields.__7__wrap7 = v49;
      goto LABEL_47;
    case 3:
      p__7__wrap7 = &v8->fields.__7__wrap7;
      v51 = v8->fields.__7__wrap7 + 1;
      p__7__wrap6 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap6;
      v8->fields.__1__state = -1;
      v8->fields.__7__wrap7 = v51;
      goto LABEL_53;
    case 4:
      _7__wrap7 = v8->fields.__7__wrap7;
      p__7__wrap6 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap6;
      v8->fields.__1__state = -1;
      v53 = _7__wrap7 + 1;
      v8->fields.__7__wrap7 = v53;
      goto LABEL_59;
    default:
      return 0;
  }
  while ( 1 )
  {
    klass = p__7__wrap3->klass;
    if ( !p__7__wrap3->klass )
LABEL_76:
      sub_B0D97C(this);
    namespaze = (int)klass->_1.namespaze;
    if ( v46 >= namespaze )
      break;
    if ( v46 >= (unsigned int)namespaze )
      goto LABEL_77;
    v55 = (System_Int32_array **)*((_QWORD *)&klass->_1.byval_arg.data + v46);
    v8->fields._userSvt_5__6 = (struct BattleUserServantData_o *)v55;
    p_userSvt_5__6 = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o **)&v8->fields._userSvt_5__6;
    sub_B0D840((BattleServantConfConponent_o *)&v8->fields._userSvt_5__6, v55, v40, v41, v42, v43, v44, v45);
    userSvt_5__6 = v8->fields._userSvt_5__6;
    if ( !userSvt_5__6 )
      goto LABEL_76;
    v59 = *(_QWORD *)&userSvt_5__6->fields.svtId.fields.currentCryptoKey;
    v58 = *(_QWORD *)&userSvt_5__6->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v111.fields.currentCryptoKey = v59;
    *(_QWORD *)&v111.fields.fakeValue = v58;
    this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                          v111,
                                                                          0LL);
    userSvtId = v8->fields.userSvtId;
    v61 = (int)this;
    if ( (userSvtId & 0x80000000) != 0 || (_DWORD)this == userSvtId )
    {
      this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v8->fields._svtMaster_5__3;
      if ( !this )
        goto LABEL_76;
      this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                            (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                                            v61,
                                                                            (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
        sub_B0D840((BattleServantConfConponent_o *)&v8->fields.__7__wrap6, SelfSkillArray, v63, v64, v65, v66, v67, v68);
        v54 = 0;
        v8->fields.__7__wrap7 = 0;
        p__7__wrap7 = &v8->fields.__7__wrap7;
LABEL_41:
        v69 = p__7__wrap6->klass;
        if ( !p__7__wrap6->klass )
          goto LABEL_76;
        v70 = (int)v69->_1.namespaze;
        if ( v54 < v70 )
        {
          if ( v54 < (unsigned int)v70 )
          {
            v107 = (struct SimpleSkillData_o)*((_QWORD *)&v69->_1.byval_arg.data + v54);
            result = 1;
            v8->fields.__1__state = 1;
            v8->fields.__2__current = v107;
            return result;
          }
LABEL_77:
          v110 = sub_B0D9A8(this);
          sub_B0D948(v110, 0LL);
        }
        v8->fields.__7__wrap6 = 0LL;
        sub_B0D840(p__7__wrap6, 0LL, v2, v3, v4, v5, v6, v7);
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v8->fields._userSvt_5__6;
        if ( !this )
          goto LABEL_76;
        ClassPassiveSkillArray = (System_Int32_array **)BattleUserServantData__GetClassPassiveSkillArray(
                                                          (BattleUserServantData_o *)this,
                                                          0LL);
        if ( !ClassPassiveSkillArray )
          ClassPassiveSkillArray = (System_Int32_array **)v8->fields._empty_5__2;
        p__7__wrap6->klass = (BattleServantConfConponent_c *)ClassPassiveSkillArray;
        sub_B0D840(p__7__wrap6, ClassPassiveSkillArray, v72, v73, v74, v75, v76, v77);
        v49 = 0;
        *p__7__wrap7 = 0;
LABEL_47:
        v78 = p__7__wrap6->klass;
        if ( !p__7__wrap6->klass )
          goto LABEL_76;
        v79 = (int)v78->_1.namespaze;
        if ( v49 < v79 )
        {
          if ( v49 >= (unsigned int)v79 )
            goto LABEL_77;
          v108 = (struct SimpleSkillData_o)*((_QWORD *)&v78->_1.byval_arg.data + v49);
          v109 = 2;
LABEL_75:
          v8->fields.__1__state = v109;
          v8->fields.__2__current = v108;
          return 1;
        }
        v8->fields.__7__wrap6 = 0LL;
        sub_B0D840(p__7__wrap6, 0LL, v2, v3, v4, v5, v6, v7);
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v8->fields._userSvt_5__6;
        if ( !this )
          goto LABEL_76;
        AddPassiveSkillArray = (System_Int32_array **)BattleUserServantData__GetAddPassiveSkillArray(
                                                        (BattleUserServantData_o *)this,
                                                        0LL);
        if ( !AddPassiveSkillArray )
          AddPassiveSkillArray = (System_Int32_array **)v8->fields._empty_5__2;
        p__7__wrap6->klass = (BattleServantConfConponent_c *)AddPassiveSkillArray;
        sub_B0D840(p__7__wrap6, AddPassiveSkillArray, v81, v82, v83, v84, v85, v86);
        v51 = 0;
        *p__7__wrap7 = 0;
LABEL_53:
        v87 = p__7__wrap6->klass;
        if ( !p__7__wrap6->klass )
          goto LABEL_76;
        v88 = (int)v87->_1.namespaze;
        if ( v51 < v88 )
        {
          if ( v51 >= (unsigned int)v88 )
            goto LABEL_77;
          v108 = (struct SimpleSkillData_o)*((_QWORD *)&v87->_1.byval_arg.data + v51);
          v109 = 3;
          goto LABEL_75;
        }
        v8->fields.__7__wrap6 = 0LL;
        sub_B0D840(p__7__wrap6, 0LL, v2, v3, v4, v5, v6, v7);
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v8->fields._userSvt_5__6;
        if ( !this )
          goto LABEL_76;
        AppendPassiveSkillArray = (System_Int32_array **)BattleUserServantData__GetAppendPassiveSkillArray(
                                                           (BattleUserServantData_o *)this,
                                                           0LL);
        if ( !AppendPassiveSkillArray )
          AppendPassiveSkillArray = (System_Int32_array **)v8->fields._empty_5__2;
        p__7__wrap6->klass = (BattleServantConfConponent_c *)AppendPassiveSkillArray;
        sub_B0D840(p__7__wrap6, AppendPassiveSkillArray, v90, v91, v92, v93, v94, v95);
        v53 = 0;
        *p__7__wrap7 = 0;
LABEL_59:
        v96 = p__7__wrap6->klass;
        if ( !p__7__wrap6->klass )
          goto LABEL_76;
        v97 = (int32_t)v96->_1.namespaze;
        if ( v53 < v97 )
        {
          if ( v53 >= (unsigned int)v97 )
            goto LABEL_77;
          v108 = (struct SimpleSkillData_o)*((_QWORD *)&v96->_1.byval_arg.data + v53);
          v109 = 4;
          goto LABEL_75;
        }
        v8->fields.__7__wrap6 = 0LL;
        sub_B0D840(p__7__wrap6, 0LL, v2, v3, v4, v5, v6, v7);
        v8->fields._userSvt_5__6 = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)&v8->fields._userSvt_5__6, 0LL, v98, v99, v100, v101, v102, v103);
        p__7__wrap4 = &v8->fields.__7__wrap4;
        p__7__wrap3 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap3;
      }
    }
    v46 = *p__7__wrap4 + 1;
    *p__7__wrap4 = v46;
  }
  p__7__wrap3->klass = 0LL;
  sub_B0D840(p__7__wrap3, 0LL, v40, v41, v42, v43, v44, v45);
  return 0;
}


System_Collections_Generic_IEnumerator_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_Collections_Generic_IEnumerable_SimpleSkillData__GetEnumerator(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  int32_t l__initialThreadId; // w20
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *v10; // x20
  __int64 CurrentManagedThreadId; // x0
  System_Int32_array **_3__battleEntity; // x1
  System_Collections_Generic_IEnumerator_SimpleSkillData__o *result; // x0

  if ( (byte_4213985 & 1) == 0 )
  {
    sub_B0D8A4(&AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo, method);
    byte_4213985 = 1;
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
    v10 = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)sub_B0D974(
                                                                         AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo,
                                                                         method,
                                                                         v2);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v10->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v10 )
      sub_B0D97C(CurrentManagedThreadId);
  }
  _3__battleEntity = (System_Int32_array **)this->fields.__3__battleEntity;
  v10->fields.battleEntity = (struct BattleEntity_o *)_3__battleEntity;
  sub_B0D840((BattleServantConfConponent_o *)&v10->fields.battleEntity, _3__battleEntity, v2, v5, v6, v7, v8, v9);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4213984 & 1) == 0 )
  {
    sub_B0D8A4(&SimpleSkillData_TypeInfo, method);
    byte_4213984 = 1;
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