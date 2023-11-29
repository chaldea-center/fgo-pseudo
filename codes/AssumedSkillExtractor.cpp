System_Collections_Generic_IEnumerable_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData(
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FBE3E & 1) == 0 )
  {
    sub_B16FFC(&AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo, method);
    byte_40FBE3E = 1;
  }
  v6 = sub_B170CC(AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo, method, v2, v3, v4);
  AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1___ctor(
    (AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *)v6,
    -2,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 40) = battleEntity;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)battleEntity, v7, v8, v9, v10, v11, v12);
  return (System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v6;
}


System_Collections_Generic_IEnumerable_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateMasterSkill(
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FBE3F & 1) == 0 )
  {
    sub_B16FFC(&AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo, method);
    byte_40FBE3F = 1;
  }
  v6 = sub_B170CC(AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo, method, v2, v3, v4);
  AssumedSkillExtractor__EnumerateMasterSkill_d__2___ctor(
    (AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *)v6,
    -2,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 40) = data;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)data, v7, v8, v9, v10, v11, v12);
  return (System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v6;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateSvtSimpleSkillData(
        BattleEntity_o *battleEntity,
        int32_t userSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FBE3D & 1) == 0 )
  {
    sub_B16FFC(&AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo, *(_QWORD *)&userSvtId);
    byte_40FBE3D = 1;
  }
  v7 = sub_B170CC(
         AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo,
         *(_QWORD *)&userSvtId,
         method,
         v3,
         v4);
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0___ctor(
    (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v7,
    -2,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 40) = battleEntity;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)battleEntity, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 52) = userSvtId;
  return (System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v7;
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
  CommandCodeSkillMaster_o *commandCodeMaster_5__2; // x0
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
  __int64 v55; // [xsp+8h] [xbp-18h] BYREF
  SimpleSkillData_o v56; // 0:x0.8

  v8 = this;
  if ( (byte_40F913C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_CommandCodeSkillMaster___, method);
    this = (AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *)sub_B16FFC(&DataManager_TypeInfo, v9);
    byte_40F913C = 1;
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
        Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_CommandCodeSkillMaster___);
        v8->fields._commandCodeMaster_5__2 = (struct CommandCodeSkillMaster_o *)Master_WarQuestSelectionMaster;
        sub_B16F98(
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
        sub_B16F98(
          (BattleServantConfConponent_o *)&v8->fields.__7__wrap2,
          userCommandCode,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
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
          commandCodeMaster_5__2 = v8->fields._commandCodeMaster_5__2;
          if ( !commandCodeMaster_5__2 )
            goto LABEL_28;
          CommandCodeSkillList = (System_Int32_array **)CommandCodeSkillMaster__getCommandCodeSkillList(
                                                          commandCodeMaster_5__2,
                                                          *(_DWORD *)(v37 + 28),
                                                          0LL);
          v8->fields.__7__wrap4 = (struct CommandCodeSkillEntity_array *)CommandCodeSkillList;
          p__7__wrap4 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap4;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v8->fields.__7__wrap4,
            CommandCodeSkillList,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45);
          v36 = 0;
          v8->fields.__7__wrap5 = 0;
LABEL_17:
          v46 = p__7__wrap4->klass;
          if ( !p__7__wrap4->klass )
            goto LABEL_28;
          v47 = (int32_t)v46->_1.namespaze;
          if ( v36 < v47 )
          {
            if ( v36 >= (unsigned int)v47 )
            {
LABEL_29:
              sub_B17100(this, method, v2);
              sub_B170A0();
            }
            v51 = *((_QWORD *)&v46->_1.byval_arg.data + v36);
            if ( v51 )
            {
              v52 = *(_DWORD *)(v51 + 28);
              v56 = (SimpleSkillData_o)&v55;
              v55 = 0LL;
              v50 = 1;
              SimpleSkillData___ctor(v56, v52, 1, 0LL);
              v53 = v55;
              v8->fields.__1__state = 1;
              v8->fields.__2__current = (struct SimpleSkillData_o)v53;
              return v50;
            }
LABEL_28:
            sub_B170D4();
          }
          v8->fields.__7__wrap4 = 0LL;
          sub_B16F98(p__7__wrap4, 0LL, v2, v3, v4, v5, v6, v7);
          p__7__wrap2 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap2;
          v33 = v8->fields.__7__wrap3 + 1;
        }
        p__7__wrap2->klass = 0LL;
        sub_B16F98(p__7__wrap2, 0LL, v2, v28, v29, v30, v31, v32);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  int32_t l__initialThreadId; // w20
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *v10; // x20
  System_Int32_array **_3__battleEntity; // x1

  if ( (byte_40F913E & 1) == 0 )
  {
    sub_B16FFC(&AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo, method);
    byte_40F913E = 1;
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
    v10 = (AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *)sub_B170CC(
                                                                                 AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo,
                                                                                 method,
                                                                                 v2,
                                                                                 v3,
                                                                                 v4);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    if ( !v10 )
      sub_B170D4();
  }
  _3__battleEntity = (System_Int32_array **)this->fields.__3__battleEntity;
  v10->fields.battleEntity = (struct BattleEntity_o *)_3__battleEntity;
  sub_B16F98((BattleServantConfConponent_o *)&v10->fields.battleEntity, _3__battleEntity, v2, v3, v4, v7, v8, v9);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
}


Il2CppObject *__fastcall AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *this,
        const MethodInfo *method)
{
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F913D & 1) == 0 )
  {
    sub_B16FFC(&SimpleSkillData_TypeInfo, method);
    byte_40F913D = 1;
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *masterSkillInfo; // x0
  struct System_Collections_Generic_List_Enumerator_BattleSkillInfoData__o *p__7__wrap1; // x20
  struct BattleData_o *v10; // x8
  __int128 v11; // q0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  struct BattleSkillInfoData_o *current; // x20
  int32_t v20; // w1
  int32_t skilllv; // w2
  struct System_Collections_Generic_List_T__o *list; // x8
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+18h] [xbp-28h] BYREF
  SimpleSkillData_o v25; // 0:x0.8

  if ( (byte_40F913F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F913F = 1;
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
  if ( UnityEngine_Object__op_Equality(data, 0LL, 0LL) )
  {
LABEL_9:
    LOBYTE(masterSkillInfo) = 0;
    return (char)masterSkillInfo;
  }
  v10 = this->fields.data;
  if ( !v10 )
    sub_B170D4();
  masterSkillInfo = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v10->fields.masterSkillInfo;
  if ( masterSkillInfo )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v24,
      masterSkillInfo,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    p__7__wrap1 = &this->fields.__7__wrap1;
    v11 = *(_OWORD *)&v24.fields.list;
    this->fields.__7__wrap1.fields.current = (struct BattleSkillInfoData_o *)v24.fields.current;
    *(_OWORD *)&this->fields.__7__wrap1.fields.list = v11;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.__7__wrap1, 0LL, v12, v13, v14, v15, v16, v17);
LABEL_14:
    this->fields.__1__state = -3;
    if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
           (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
    {
      current = this->fields.__7__wrap1.fields.current;
      if ( !current )
        sub_B170D4();
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  int32_t l__initialThreadId; // w20
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v10; // x20
  System_Int32_array **_3__data; // x1

  if ( (byte_40F9142 & 1) == 0 )
  {
    sub_B16FFC(&AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo, method);
    byte_40F9142 = 1;
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
    v10 = (AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *)sub_B170CC(
                                                                  AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo,
                                                                  method,
                                                                  v2,
                                                                  v3,
                                                                  v4);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    if ( !v10 )
      sub_B170D4();
  }
  _3__data = (System_Int32_array **)this->fields.__3__data;
  v10->fields.data = (struct BattleData_o *)_3__data;
  sub_B16F98((BattleServantConfConponent_o *)&v10->fields.data, _3__data, v2, v3, v4, v7, v8, v9);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_AssumedSkillExtractor__EnumerateMasterSkill_d__2_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
}


Il2CppObject *__fastcall AssumedSkillExtractor__EnumerateMasterSkill_d__2__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        const MethodInfo *method)
{
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F9141 & 1) == 0 )
  {
    sub_B16FFC(&SimpleSkillData_TypeInfo, method);
    byte_40F9141 = 1;
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
  if ( (byte_40F9140 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, method);
    byte_40F9140 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
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
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int v45; // w8
  int32_t *p__7__wrap4; // x24
  int32_t *p__7__wrap7; // x21
  int v48; // w8
  BattleServantConfConponent_o *p__7__wrap6; // x20
  int v50; // w8
  int32_t _7__wrap7; // w8
  int32_t v52; // w8
  int v53; // w8
  System_Int32_array **v54; // x1
  BattleUserServantData_o **p_userSvt_5__6; // x21
  struct BattleUserServantData_o *userSvt_5__6; // x8
  __int64 v57; // x22
  __int64 v58; // x23
  int32_t userSvtId; // w8
  DataMasterBase_WarMaster__WarEntity__int__o *svtMaster_5__3; // x0
  System_Int32_array **SelfSkillArray; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  BattleServantConfConponent_c *v68; // x9
  int v69; // w10
  BattleUserServantData_o *v70; // x0
  System_Int32_array **ClassPassiveSkillArray; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  BattleServantConfConponent_c *v78; // x9
  int v79; // w10
  BattleUserServantData_o *v80; // x0
  System_Int32_array **AddPassiveSkillArray; // x1
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  BattleServantConfConponent_c *v88; // x9
  int v89; // w10
  BattleUserServantData_o *v90; // x0
  System_Int32_array **AppendPassiveSkillArray; // x1
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  BattleServantConfConponent_c *v98; // x9
  int32_t v99; // w10
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  BattleServantConfConponent_c *klass; // x9
  int namespaze; // w10
  bool result; // w0
  struct SimpleSkillData_o v109; // x8
  struct SimpleSkillData_o v110; // x8
  int v111; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16

  v8 = this;
  if ( (byte_40F9143 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_SimpleSkillData___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v9);
    sub_B16FFC(&DataManager_TypeInfo, v10);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)sub_B16FFC(
                                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                          v12);
    byte_40F9143 = 1;
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
        sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_SimpleSkillData___ + 6));
        v17 = *(_WORD *)(v16 + 306);
      }
      if ( (v17 & 0x400) != 0 )
      {
        v18 = *v15[6];
        if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
          sub_AAFCFC(*v15[6]);
        if ( !*(_DWORD *)(v18 + 224) )
        {
          v19 = *v15[6];
          if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
            sub_AAFCFC(*v15[6]);
          j_il2cpp_runtime_class_init_0(v19);
        }
      }
      v20 = *v15[6];
      if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
        sub_AAFCFC(*v15[6]);
      v21 = *(System_Int32_array ****)(v20 + 184);
      v22 = *v21;
      v8->fields._empty_5__2 = (struct SimpleSkillData_array *)*v21;
      sub_B16F98((BattleServantConfConponent_o *)&v8->fields._empty_5__2, v22, v2, v3, v4, v5, v6, v7);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
      v8->fields._svtMaster_5__3 = (struct ServantMaster_o *)Master_WarQuestSelectionMaster;
      sub_B16F98(
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
      sub_B16F98((BattleServantConfConponent_o *)&v8->fields.__7__wrap3, userSvt, v30, v31, v32, v33, v34, v35);
      v45 = 0;
      v8->fields.__7__wrap4 = 0;
      p__7__wrap4 = &v8->fields.__7__wrap4;
      break;
    case 1:
      p__7__wrap7 = &v8->fields.__7__wrap7;
      v53 = v8->fields.__7__wrap7 + 1;
      p__7__wrap6 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap6;
      v8->fields.__1__state = -1;
      v8->fields.__7__wrap7 = v53;
      goto LABEL_41;
    case 2:
      p__7__wrap7 = &v8->fields.__7__wrap7;
      v48 = v8->fields.__7__wrap7 + 1;
      p__7__wrap6 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap6;
      v8->fields.__1__state = -1;
      v8->fields.__7__wrap7 = v48;
      goto LABEL_47;
    case 3:
      p__7__wrap7 = &v8->fields.__7__wrap7;
      v50 = v8->fields.__7__wrap7 + 1;
      p__7__wrap6 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap6;
      v8->fields.__1__state = -1;
      v8->fields.__7__wrap7 = v50;
      goto LABEL_53;
    case 4:
      _7__wrap7 = v8->fields.__7__wrap7;
      p__7__wrap6 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap6;
      v8->fields.__1__state = -1;
      v52 = _7__wrap7 + 1;
      v8->fields.__7__wrap7 = v52;
      goto LABEL_59;
    default:
      return 0;
  }
  while ( 1 )
  {
    klass = p__7__wrap3->klass;
    if ( !p__7__wrap3->klass )
LABEL_76:
      sub_B170D4();
    namespaze = (int)klass->_1.namespaze;
    if ( v45 >= namespaze )
      break;
    if ( v45 >= (unsigned int)namespaze )
      goto LABEL_77;
    v54 = (System_Int32_array **)*((_QWORD *)&klass->_1.byval_arg.data + v45);
    v8->fields._userSvt_5__6 = (struct BattleUserServantData_o *)v54;
    p_userSvt_5__6 = &v8->fields._userSvt_5__6;
    sub_B16F98((BattleServantConfConponent_o *)&v8->fields._userSvt_5__6, v54, v2, v40, v41, v42, v43, v44);
    userSvt_5__6 = v8->fields._userSvt_5__6;
    if ( !userSvt_5__6 )
      goto LABEL_76;
    v58 = *(_QWORD *)&userSvt_5__6->fields.svtId.fields.currentCryptoKey;
    v57 = *(_QWORD *)&userSvt_5__6->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v112.fields.currentCryptoKey = v58;
    *(_QWORD *)&v112.fields.fakeValue = v57;
    this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                                          v112,
                                                                          0LL);
    userSvtId = v8->fields.userSvtId;
    method = (const MethodInfo *)(unsigned int)this;
    if ( (userSvtId & 0x80000000) != 0 || (_DWORD)this == userSvtId )
    {
      svtMaster_5__3 = (DataMasterBase_WarMaster__WarEntity__int__o *)v8->fields._svtMaster_5__3;
      if ( !svtMaster_5__3 )
        goto LABEL_76;
      this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                            svtMaster_5__3,
                                                                            (int32_t)method,
                                                                            (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( this )
      {
        if ( !*p_userSvt_5__6 )
          goto LABEL_76;
        SelfSkillArray = (System_Int32_array **)BattleUserServantData__GetSelfSkillArray(*p_userSvt_5__6, 0LL);
        if ( !SelfSkillArray )
          SelfSkillArray = (System_Int32_array **)v8->fields._empty_5__2;
        v8->fields.__7__wrap6 = (struct SimpleSkillData_array *)SelfSkillArray;
        p__7__wrap6 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap6;
        sub_B16F98((BattleServantConfConponent_o *)&v8->fields.__7__wrap6, SelfSkillArray, v62, v63, v64, v65, v66, v67);
        v53 = 0;
        v8->fields.__7__wrap7 = 0;
        p__7__wrap7 = &v8->fields.__7__wrap7;
LABEL_41:
        v68 = p__7__wrap6->klass;
        if ( !p__7__wrap6->klass )
          goto LABEL_76;
        v69 = (int)v68->_1.namespaze;
        if ( v53 < v69 )
        {
          if ( v53 < (unsigned int)v69 )
          {
            v109 = (struct SimpleSkillData_o)*((_QWORD *)&v68->_1.byval_arg.data + v53);
            result = 1;
            v8->fields.__1__state = 1;
            v8->fields.__2__current = v109;
            return result;
          }
LABEL_77:
          sub_B17100(this, method, v2);
          sub_B170A0();
        }
        v8->fields.__7__wrap6 = 0LL;
        sub_B16F98(p__7__wrap6, 0LL, v2, v3, v4, v5, v6, v7);
        v70 = v8->fields._userSvt_5__6;
        if ( !v70 )
          goto LABEL_76;
        ClassPassiveSkillArray = (System_Int32_array **)BattleUserServantData__GetClassPassiveSkillArray(v70, 0LL);
        if ( !ClassPassiveSkillArray )
          ClassPassiveSkillArray = (System_Int32_array **)v8->fields._empty_5__2;
        p__7__wrap6->klass = (BattleServantConfConponent_c *)ClassPassiveSkillArray;
        sub_B16F98(p__7__wrap6, ClassPassiveSkillArray, v72, v73, v74, v75, v76, v77);
        v48 = 0;
        *p__7__wrap7 = 0;
LABEL_47:
        v78 = p__7__wrap6->klass;
        if ( !p__7__wrap6->klass )
          goto LABEL_76;
        v79 = (int)v78->_1.namespaze;
        if ( v48 < v79 )
        {
          if ( v48 >= (unsigned int)v79 )
            goto LABEL_77;
          v110 = (struct SimpleSkillData_o)*((_QWORD *)&v78->_1.byval_arg.data + v48);
          v111 = 2;
LABEL_75:
          v8->fields.__1__state = v111;
          v8->fields.__2__current = v110;
          return 1;
        }
        v8->fields.__7__wrap6 = 0LL;
        sub_B16F98(p__7__wrap6, 0LL, v2, v3, v4, v5, v6, v7);
        v80 = v8->fields._userSvt_5__6;
        if ( !v80 )
          goto LABEL_76;
        AddPassiveSkillArray = (System_Int32_array **)BattleUserServantData__GetAddPassiveSkillArray(v80, 0LL);
        if ( !AddPassiveSkillArray )
          AddPassiveSkillArray = (System_Int32_array **)v8->fields._empty_5__2;
        p__7__wrap6->klass = (BattleServantConfConponent_c *)AddPassiveSkillArray;
        sub_B16F98(p__7__wrap6, AddPassiveSkillArray, v82, v83, v84, v85, v86, v87);
        v50 = 0;
        *p__7__wrap7 = 0;
LABEL_53:
        v88 = p__7__wrap6->klass;
        if ( !p__7__wrap6->klass )
          goto LABEL_76;
        v89 = (int)v88->_1.namespaze;
        if ( v50 < v89 )
        {
          if ( v50 >= (unsigned int)v89 )
            goto LABEL_77;
          v110 = (struct SimpleSkillData_o)*((_QWORD *)&v88->_1.byval_arg.data + v50);
          v111 = 3;
          goto LABEL_75;
        }
        v8->fields.__7__wrap6 = 0LL;
        sub_B16F98(p__7__wrap6, 0LL, v2, v3, v4, v5, v6, v7);
        v90 = v8->fields._userSvt_5__6;
        if ( !v90 )
          goto LABEL_76;
        AppendPassiveSkillArray = (System_Int32_array **)BattleUserServantData__GetAppendPassiveSkillArray(v90, 0LL);
        if ( !AppendPassiveSkillArray )
          AppendPassiveSkillArray = (System_Int32_array **)v8->fields._empty_5__2;
        p__7__wrap6->klass = (BattleServantConfConponent_c *)AppendPassiveSkillArray;
        sub_B16F98(p__7__wrap6, AppendPassiveSkillArray, v92, v93, v94, v95, v96, v97);
        v52 = 0;
        *p__7__wrap7 = 0;
LABEL_59:
        v98 = p__7__wrap6->klass;
        if ( !p__7__wrap6->klass )
          goto LABEL_76;
        v99 = (int32_t)v98->_1.namespaze;
        if ( v52 < v99 )
        {
          if ( v52 >= (unsigned int)v99 )
            goto LABEL_77;
          v110 = (struct SimpleSkillData_o)*((_QWORD *)&v98->_1.byval_arg.data + v52);
          v111 = 4;
          goto LABEL_75;
        }
        v8->fields.__7__wrap6 = 0LL;
        sub_B16F98(p__7__wrap6, 0LL, v2, v3, v4, v5, v6, v7);
        v8->fields._userSvt_5__6 = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&v8->fields._userSvt_5__6, 0LL, v100, v101, v102, v103, v104, v105);
        p__7__wrap4 = &v8->fields.__7__wrap4;
        p__7__wrap3 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap3;
      }
    }
    v45 = *p__7__wrap4 + 1;
    *p__7__wrap4 = v45;
  }
  p__7__wrap3->klass = 0LL;
  sub_B16F98(p__7__wrap3, 0LL, v2, v40, v41, v42, v43, v44);
  return 0;
}


System_Collections_Generic_IEnumerator_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_Collections_Generic_IEnumerable_SimpleSkillData__GetEnumerator(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  int32_t l__initialThreadId; // w20
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *v10; // x20
  System_Int32_array **_3__battleEntity; // x1
  System_Collections_Generic_IEnumerator_SimpleSkillData__o *result; // x0

  if ( (byte_40F9145 & 1) == 0 )
  {
    sub_B16FFC(&AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo, method);
    byte_40F9145 = 1;
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
    v10 = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)sub_B170CC(
                                                                         AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo,
                                                                         method,
                                                                         v2,
                                                                         v3,
                                                                         v4);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    if ( !v10 )
      sub_B170D4();
  }
  _3__battleEntity = (System_Int32_array **)this->fields.__3__battleEntity;
  v10->fields.battleEntity = (struct BattleEntity_o *)_3__battleEntity;
  sub_B16F98((BattleServantConfConponent_o *)&v10->fields.battleEntity, _3__battleEntity, v2, v3, v4, v7, v8, v9);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
}


Il2CppObject *__fastcall AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F9144 & 1) == 0 )
  {
    sub_B16FFC(&SimpleSkillData_TypeInfo, method);
    byte_40F9144 = 1;
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