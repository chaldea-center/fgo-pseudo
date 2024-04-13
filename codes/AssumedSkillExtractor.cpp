System_Collections_Generic_IEnumerable_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData(
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EBC8A & 1) == 0 )
  {
    sub_B5D5C4(&AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBC8A = 1;
  }
  v5 = sub_B5D694(AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
  AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1___ctor(
    (AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 40) = battleEntity;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)battleEntity, v8, v9, v10, v11, v12, v13);
  return (System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v5;
}


System_Collections_Generic_IEnumerable_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateMasterSkill(
        BattleData_o *data,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EBC8B & 1) == 0 )
  {
    sub_B5D5C4(&AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBC8B = 1;
  }
  v5 = sub_B5D694(AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
  AssumedSkillExtractor__EnumerateMasterSkill_d__2___ctor(
    (AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 40) = data;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)data, v8, v9, v10, v11, v12, v13);
  return (System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v5;
}


System_Collections_Generic_IEnumerable_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateSvtSimpleSkillData(
        BattleEntity_o *battleEntity,
        int32_t userSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EBC89 & 1) == 0 )
  {
    sub_B5D5C4(&AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo, userSvtId, (_DWORD)method, v3);
    byte_42EBC89 = 1;
  }
  v6 = sub_B5D694(AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0___ctor(
    (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v6,
    -2,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 40) = battleEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v6 + 40),
    (System_Int32_array **)battleEntity,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  *(_DWORD *)(v6 + 52) = userSvtId;
  return (System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v6;
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int32_t _1__state; // w8
  struct BattleEntity_o *battleEntity; // x8
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct BattleEntity_o *v27; // x8
  System_Int32_array **userCommandCode; // x1
  BattleServantConfConponent_o *p__7__wrap2; // x20
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  int v36; // w8
  int32_t _7__wrap5; // w8
  BattleServantConfConponent_o *p__7__wrap4; // x20
  int32_t v39; // w8
  __int64 v40; // x8
  System_Int32_array **CommandCodeSkillList; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  BattleServantConfConponent_c *v48; // x9
  int32_t v49; // w10
  BattleServantConfConponent_c *klass; // x9
  int namespaze; // w10
  bool v52; // w20
  __int64 v53; // x8
  int32_t v54; // w1
  __int64 v55; // x8
  __int64 v57; // x0
  __int64 v58; // [xsp+8h] [xbp-18h] BYREF
  SimpleSkillData_o v59; // 0:x0.8

  v8 = this;
  if ( (byte_42E7532 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_CommandCodeSkillMaster___, (_DWORD)method, (_DWORD)v2, v3);
    this = (AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *)sub_B5D5C4(
                                                                                  &DataManager_TypeInfo,
                                                                                  v9,
                                                                                  v10,
                                                                                  v11);
    byte_42E7532 = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    _7__wrap5 = v8->fields.__7__wrap5;
    p__7__wrap4 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap4;
    v8->fields.__1__state = -1;
    v39 = _7__wrap5 + 1;
    v8->fields.__7__wrap5 = v39;
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
        Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CommandCodeSkillMaster___);
        v8->fields._commandCodeMaster_5__2 = (struct CommandCodeSkillMaster_o *)Master_WarQuestSelectionMaster;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v8->fields._commandCodeMaster_5__2,
          Master_WarQuestSelectionMaster,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
        v27 = v8->fields.battleEntity;
        if ( !v27 )
          goto LABEL_28;
        userCommandCode = (System_Int32_array **)v27->fields.userCommandCode;
        v8->fields.__7__wrap2 = (struct CommandCodeInfo_array *)userCommandCode;
        p__7__wrap2 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap2;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v8->fields.__7__wrap2,
          userCommandCode,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
        v36 = 0;
        for ( v8->fields.__7__wrap3 = 0; ; v8->fields.__7__wrap3 = v36 )
        {
          klass = p__7__wrap2->klass;
          if ( !p__7__wrap2->klass )
            goto LABEL_28;
          namespaze = (int)klass->_1.namespaze;
          if ( v36 >= namespaze )
            break;
          if ( v36 >= (unsigned int)namespaze )
            goto LABEL_29;
          v40 = *((_QWORD *)&klass->_1.byval_arg.data + v36);
          if ( !v40 )
            goto LABEL_28;
          this = (AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *)v8->fields._commandCodeMaster_5__2;
          if ( !this )
            goto LABEL_28;
          CommandCodeSkillList = (System_Int32_array **)CommandCodeSkillMaster__getCommandCodeSkillList(
                                                          (CommandCodeSkillMaster_o *)this,
                                                          *(_DWORD *)(v40 + 28),
                                                          0LL);
          v8->fields.__7__wrap4 = (struct CommandCodeSkillEntity_array *)CommandCodeSkillList;
          p__7__wrap4 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap4;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v8->fields.__7__wrap4,
            CommandCodeSkillList,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47);
          v39 = 0;
          v8->fields.__7__wrap5 = 0;
LABEL_17:
          v48 = p__7__wrap4->klass;
          if ( !p__7__wrap4->klass )
            goto LABEL_28;
          v49 = (int32_t)v48->_1.namespaze;
          if ( v39 < v49 )
          {
            if ( v39 >= (unsigned int)v49 )
            {
LABEL_29:
              v57 = sub_B5D6C8(this);
              sub_B5D668(v57, 0LL);
            }
            v53 = *((_QWORD *)&v48->_1.byval_arg.data + v39);
            if ( v53 )
            {
              v54 = *(_DWORD *)(v53 + 28);
              v59 = (SimpleSkillData_o)&v58;
              v58 = 0LL;
              v52 = 1;
              SimpleSkillData___ctor(v59, v54, 1, 0LL);
              v55 = v58;
              v8->fields.__1__state = 1;
              v8->fields.__2__current = (struct SimpleSkillData_o)v55;
              return v52;
            }
LABEL_28:
            sub_B5D69C(this, method);
          }
          v8->fields.__7__wrap4 = 0LL;
          sub_B5D560(p__7__wrap4, 0LL, v2, v3, v4, v5, v6, v7);
          p__7__wrap2 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap2;
          v36 = v8->fields.__7__wrap3 + 1;
        }
        p__7__wrap2->klass = 0LL;
        sub_B5D560(p__7__wrap2, 0LL, v30, v31, v32, v33, v34, v35);
      }
    }
  }
  return 0;
}


System_Collections_Generic_IEnumerator_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1__System_Collections_Generic_IEnumerable_SimpleSkillData__GetEnumerator(
        AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *v12; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v14; // x1
  System_Int32_array **_3__battleEntity; // x1

  if ( (byte_42E7534 & 1) == 0 )
  {
    sub_B5D5C4(&AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7534 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v12 = this;
  }
  else
  {
    v12 = (AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *)sub_B5D694(AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0LL);
    v12->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v12->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v12 )
      sub_B5D69C(CurrentManagedThreadId, v14);
  }
  _3__battleEntity = (System_Int32_array **)this->fields.__3__battleEntity;
  v12->fields.battleEntity = (struct BattleEntity_o *)_3__battleEntity;
  sub_B5D560((BattleServantConfConponent_o *)&v12->fields.battleEntity, _3__battleEntity, v6, v7, v8, v9, v10, v11);
  return (System_Collections_Generic_IEnumerator_SimpleSkillData__o *)v12;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7533 & 1) == 0 )
  {
    sub_B5D5C4(&SimpleSkillData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7533 = 1;
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
  int32_t _1__state; // w8
  UnityEngine_Object_o *data; // x20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *masterSkillInfo; // x0
  struct System_Collections_Generic_List_Enumerator_BattleSkillInfoData__o *p__7__wrap1; // x20
  struct BattleData_o *v20; // x8
  __int128 v21; // q0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  _BOOL8 v28; // x0
  const MethodInfo *v29; // x1
  struct BattleSkillInfoData_o *current; // x20
  int32_t v31; // w1
  int32_t skilllv; // w2
  struct System_Collections_Generic_List_T__o *list; // x8
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+18h] [xbp-28h] BYREF
  SimpleSkillData_o v36; // 0:x0.8

  if ( (byte_42E7535 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42E7535 = 1;
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
  v16 = UnityEngine_Object__op_Equality(data, 0LL, 0LL);
  if ( v16 )
  {
LABEL_9:
    LOBYTE(masterSkillInfo) = 0;
    return (char)masterSkillInfo;
  }
  v20 = this->fields.data;
  if ( !v20 )
    sub_B5D69C(v16, v17);
  masterSkillInfo = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v20->fields.masterSkillInfo;
  if ( masterSkillInfo )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      masterSkillInfo,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    p__7__wrap1 = &this->fields.__7__wrap1;
    v21 = *(_OWORD *)&v35.fields.list;
    this->fields.__7__wrap1.fields.current = (struct BattleSkillInfoData_o *)v35.fields.current;
    *(_OWORD *)&this->fields.__7__wrap1.fields.list = v21;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.__7__wrap1, 0LL, v22, v23, v24, v25, v26, v27);
LABEL_14:
    this->fields.__1__state = -3;
    v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    if ( v28 )
    {
      current = this->fields.__7__wrap1.fields.current;
      if ( !current )
        sub_B5D69C(v28, v29);
      v31 = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))current->klass->vtable._5_get_skillId.method)(
              this->fields.__7__wrap1.fields.current,
              current->klass->vtable._6_get_IndividualityArray.methodPtr);
      skilllv = current->fields.skilllv;
      v35.fields.list = 0LL;
      v36 = (SimpleSkillData_o)&v35;
      SimpleSkillData___ctor(v36, v31, skilllv, 0LL);
      list = v35.fields.list;
      LOBYTE(masterSkillInfo) = 1;
      this->fields.__1__state = 1;
      this->fields.__2__current = (struct SimpleSkillData_o)list;
    }
    else
    {
      AssumedSkillExtractor__EnumerateMasterSkill_d__2____m__Finally1(this, v29);
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
  int v2; // w2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v12; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v14; // x1
  System_Int32_array **_3__data; // x1

  if ( (byte_42E7538 & 1) == 0 )
  {
    sub_B5D5C4(&AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7538 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v12 = this;
  }
  else
  {
    v12 = (AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *)sub_B5D694(AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0LL);
    v12->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v12->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v12 )
      sub_B5D69C(CurrentManagedThreadId, v14);
  }
  _3__data = (System_Int32_array **)this->fields.__3__data;
  v12->fields.data = (struct BattleData_o *)_3__data;
  sub_B5D560((BattleServantConfConponent_o *)&v12->fields.data, _3__data, v6, v7, v8, v9, v10, v11);
  return (System_Collections_Generic_IEnumerator_SimpleSkillData__o *)v12;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_AssumedSkillExtractor__EnumerateMasterSkill_d__2_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall AssumedSkillExtractor__EnumerateMasterSkill_d__2__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7537 & 1) == 0 )
  {
    sub_B5D5C4(&SimpleSkillData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7537 = 1;
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7536 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E7536 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  struct BattleEntity_o *battleEntity; // x8
  struct BattleInfoData_o *battleInfo; // x8
  _QWORD **v23; // x21
  __int64 v24; // x20
  __int16 v25; // w8
  __int64 v26; // x20
  __int64 v27; // x20
  __int64 v28; // x20
  System_Int32_array ***v29; // x8
  System_Int32_array **v30; // x1
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct BattleEntity_o *v44; // x8
  struct BattleInfoData_o *v45; // x8
  System_Int32_array **userSvt; // x1
  BattleServantConfConponent_o *p__7__wrap3; // x20
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  int v54; // w8
  int32_t *p__7__wrap4; // x24
  int32_t *p__7__wrap7; // x21
  int v57; // w8
  BattleServantConfConponent_o *p__7__wrap6; // x20
  int v59; // w8
  int32_t _7__wrap7; // w8
  int32_t v61; // w8
  int v62; // w8
  System_Int32_array **v63; // x1
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o **p_userSvt_5__6; // x21
  struct BattleUserServantData_o *userSvt_5__6; // x8
  __int64 v66; // x22
  __int64 v67; // x23
  int32_t userSvtId; // w8
  System_Int32_array **SelfSkillArray; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  BattleServantConfConponent_c *v76; // x9
  int v77; // w10
  System_Int32_array **ClassPassiveSkillArray; // x1
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  BattleServantConfConponent_c *v85; // x9
  int v86; // w10
  System_Int32_array **AddPassiveSkillArray; // x1
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  BattleServantConfConponent_c *v94; // x9
  int v95; // w10
  System_Int32_array **AppendPassiveSkillArray; // x1
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  BattleServantConfConponent_c *v103; // x9
  int32_t v104; // w10
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  BattleServantConfConponent_c *klass; // x9
  int namespaze; // w10
  bool result; // w0
  struct SimpleSkillData_o v114; // x8
  struct SimpleSkillData_o v115; // x8
  int v116; // w9
  __int64 v117; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v118; // 0:x0.16

  v8 = this;
  if ( (byte_42E7539 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_SimpleSkillData___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16, v17);
    this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)sub_B5D5C4(
                                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                          v18,
                                                                          v19,
                                                                          v20);
    byte_42E7539 = 1;
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
      v23 = (_QWORD **)Method_System_Array_Empty_SimpleSkillData___;
      v24 = **((_QWORD **)Method_System_Array_Empty_SimpleSkillData___ + 6);
      v25 = *(_WORD *)(v24 + 306);
      if ( (v25 & 1) == 0 )
      {
        sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_SimpleSkillData___ + 6));
        v25 = *(_WORD *)(v24 + 306);
      }
      if ( (v25 & 0x400) != 0 )
      {
        v26 = *v23[6];
        if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
          sub_AF52C4(*v23[6]);
        if ( !*(_DWORD *)(v26 + 224) )
        {
          v27 = *v23[6];
          if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
            sub_AF52C4(*v23[6]);
          j_il2cpp_runtime_class_init_0(v27);
        }
      }
      v28 = *v23[6];
      if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
        sub_AF52C4(*v23[6]);
      v29 = *(System_Int32_array ****)(v28 + 184);
      v30 = *v29;
      v8->fields._empty_5__2 = (struct SimpleSkillData_array *)*v29;
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields._empty_5__2, v30, v2, v3, v4, v5, v6, v7);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
      v8->fields._svtMaster_5__3 = (struct ServantMaster_o *)Master_WarQuestSelectionMaster;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v8->fields._svtMaster_5__3,
        Master_WarQuestSelectionMaster,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
      v44 = v8->fields.battleEntity;
      if ( !v44 )
        goto LABEL_76;
      v45 = v44->fields.battleInfo;
      if ( !v45 )
        goto LABEL_76;
      userSvt = (System_Int32_array **)v45->fields.userSvt;
      v8->fields.__7__wrap3 = (struct BattleUserServantData_array *)userSvt;
      p__7__wrap3 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap3;
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields.__7__wrap3, userSvt, v38, v39, v40, v41, v42, v43);
      v54 = 0;
      v8->fields.__7__wrap4 = 0;
      p__7__wrap4 = &v8->fields.__7__wrap4;
      break;
    case 1:
      p__7__wrap7 = &v8->fields.__7__wrap7;
      v62 = v8->fields.__7__wrap7 + 1;
      p__7__wrap6 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap6;
      v8->fields.__1__state = -1;
      v8->fields.__7__wrap7 = v62;
      goto LABEL_41;
    case 2:
      p__7__wrap7 = &v8->fields.__7__wrap7;
      v57 = v8->fields.__7__wrap7 + 1;
      p__7__wrap6 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap6;
      v8->fields.__1__state = -1;
      v8->fields.__7__wrap7 = v57;
      goto LABEL_47;
    case 3:
      p__7__wrap7 = &v8->fields.__7__wrap7;
      v59 = v8->fields.__7__wrap7 + 1;
      p__7__wrap6 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap6;
      v8->fields.__1__state = -1;
      v8->fields.__7__wrap7 = v59;
      goto LABEL_53;
    case 4:
      _7__wrap7 = v8->fields.__7__wrap7;
      p__7__wrap6 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap6;
      v8->fields.__1__state = -1;
      v61 = _7__wrap7 + 1;
      v8->fields.__7__wrap7 = v61;
      goto LABEL_59;
    default:
      return 0;
  }
  while ( 1 )
  {
    klass = p__7__wrap3->klass;
    if ( !p__7__wrap3->klass )
LABEL_76:
      sub_B5D69C(this, method);
    namespaze = (int)klass->_1.namespaze;
    if ( v54 >= namespaze )
      break;
    if ( v54 >= (unsigned int)namespaze )
      goto LABEL_77;
    v63 = (System_Int32_array **)*((_QWORD *)&klass->_1.byval_arg.data + v54);
    v8->fields._userSvt_5__6 = (struct BattleUserServantData_o *)v63;
    p_userSvt_5__6 = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o **)&v8->fields._userSvt_5__6;
    sub_B5D560((BattleServantConfConponent_o *)&v8->fields._userSvt_5__6, v63, v48, v49, v50, v51, v52, v53);
    userSvt_5__6 = v8->fields._userSvt_5__6;
    if ( !userSvt_5__6 )
      goto LABEL_76;
    v67 = *(_QWORD *)&userSvt_5__6->fields.svtId.fields.currentCryptoKey;
    v66 = *(_QWORD *)&userSvt_5__6->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v118.fields.currentCryptoKey = v67;
    *(_QWORD *)&v118.fields.fakeValue = v66;
    this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                          v118,
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
                                                                            (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
        sub_B5D560((BattleServantConfConponent_o *)&v8->fields.__7__wrap6, SelfSkillArray, v70, v71, v72, v73, v74, v75);
        v62 = 0;
        v8->fields.__7__wrap7 = 0;
        p__7__wrap7 = &v8->fields.__7__wrap7;
LABEL_41:
        v76 = p__7__wrap6->klass;
        if ( !p__7__wrap6->klass )
          goto LABEL_76;
        v77 = (int)v76->_1.namespaze;
        if ( v62 < v77 )
        {
          if ( v62 < (unsigned int)v77 )
          {
            v114 = (struct SimpleSkillData_o)*((_QWORD *)&v76->_1.byval_arg.data + v62);
            result = 1;
            v8->fields.__1__state = 1;
            v8->fields.__2__current = v114;
            return result;
          }
LABEL_77:
          v117 = sub_B5D6C8(this);
          sub_B5D668(v117, 0LL);
        }
        v8->fields.__7__wrap6 = 0LL;
        sub_B5D560(p__7__wrap6, 0LL, v2, v3, v4, v5, v6, v7);
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v8->fields._userSvt_5__6;
        if ( !this )
          goto LABEL_76;
        ClassPassiveSkillArray = (System_Int32_array **)BattleUserServantData__GetClassPassiveSkillArray(
                                                          (BattleUserServantData_o *)this,
                                                          0LL);
        if ( !ClassPassiveSkillArray )
          ClassPassiveSkillArray = (System_Int32_array **)v8->fields._empty_5__2;
        p__7__wrap6->klass = (BattleServantConfConponent_c *)ClassPassiveSkillArray;
        sub_B5D560(p__7__wrap6, ClassPassiveSkillArray, v79, v80, v81, v82, v83, v84);
        v57 = 0;
        *p__7__wrap7 = 0;
LABEL_47:
        v85 = p__7__wrap6->klass;
        if ( !p__7__wrap6->klass )
          goto LABEL_76;
        v86 = (int)v85->_1.namespaze;
        if ( v57 < v86 )
        {
          if ( v57 >= (unsigned int)v86 )
            goto LABEL_77;
          v115 = (struct SimpleSkillData_o)*((_QWORD *)&v85->_1.byval_arg.data + v57);
          v116 = 2;
LABEL_75:
          v8->fields.__1__state = v116;
          v8->fields.__2__current = v115;
          return 1;
        }
        v8->fields.__7__wrap6 = 0LL;
        sub_B5D560(p__7__wrap6, 0LL, v2, v3, v4, v5, v6, v7);
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v8->fields._userSvt_5__6;
        if ( !this )
          goto LABEL_76;
        AddPassiveSkillArray = (System_Int32_array **)BattleUserServantData__GetAddPassiveSkillArray(
                                                        (BattleUserServantData_o *)this,
                                                        0LL);
        if ( !AddPassiveSkillArray )
          AddPassiveSkillArray = (System_Int32_array **)v8->fields._empty_5__2;
        p__7__wrap6->klass = (BattleServantConfConponent_c *)AddPassiveSkillArray;
        sub_B5D560(p__7__wrap6, AddPassiveSkillArray, v88, v89, v90, v91, v92, v93);
        v59 = 0;
        *p__7__wrap7 = 0;
LABEL_53:
        v94 = p__7__wrap6->klass;
        if ( !p__7__wrap6->klass )
          goto LABEL_76;
        v95 = (int)v94->_1.namespaze;
        if ( v59 < v95 )
        {
          if ( v59 >= (unsigned int)v95 )
            goto LABEL_77;
          v115 = (struct SimpleSkillData_o)*((_QWORD *)&v94->_1.byval_arg.data + v59);
          v116 = 3;
          goto LABEL_75;
        }
        v8->fields.__7__wrap6 = 0LL;
        sub_B5D560(p__7__wrap6, 0LL, v2, v3, v4, v5, v6, v7);
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v8->fields._userSvt_5__6;
        if ( !this )
          goto LABEL_76;
        AppendPassiveSkillArray = (System_Int32_array **)BattleUserServantData__GetAppendPassiveSkillArray(
                                                           (BattleUserServantData_o *)this,
                                                           0LL);
        if ( !AppendPassiveSkillArray )
          AppendPassiveSkillArray = (System_Int32_array **)v8->fields._empty_5__2;
        p__7__wrap6->klass = (BattleServantConfConponent_c *)AppendPassiveSkillArray;
        sub_B5D560(p__7__wrap6, AppendPassiveSkillArray, v97, v98, v99, v100, v101, v102);
        v61 = 0;
        *p__7__wrap7 = 0;
LABEL_59:
        v103 = p__7__wrap6->klass;
        if ( !p__7__wrap6->klass )
          goto LABEL_76;
        v104 = (int32_t)v103->_1.namespaze;
        if ( v61 < v104 )
        {
          if ( v61 >= (unsigned int)v104 )
            goto LABEL_77;
          v115 = (struct SimpleSkillData_o)*((_QWORD *)&v103->_1.byval_arg.data + v61);
          v116 = 4;
          goto LABEL_75;
        }
        v8->fields.__7__wrap6 = 0LL;
        sub_B5D560(p__7__wrap6, 0LL, v2, v3, v4, v5, v6, v7);
        v8->fields._userSvt_5__6 = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)&v8->fields._userSvt_5__6, 0LL, v105, v106, v107, v108, v109, v110);
        p__7__wrap4 = &v8->fields.__7__wrap4;
        p__7__wrap3 = (BattleServantConfConponent_o *)&v8->fields.__7__wrap3;
      }
    }
    v54 = *p__7__wrap4 + 1;
    *p__7__wrap4 = v54;
  }
  p__7__wrap3->klass = 0LL;
  sub_B5D560(p__7__wrap3, 0LL, v48, v49, v50, v51, v52, v53);
  return 0;
}


System_Collections_Generic_IEnumerator_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_Collections_Generic_IEnumerable_SimpleSkillData__GetEnumerator(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *v12; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v14; // x1
  System_Int32_array **_3__battleEntity; // x1
  System_Collections_Generic_IEnumerator_SimpleSkillData__o *result; // x0

  if ( (byte_42E753B & 1) == 0 )
  {
    sub_B5D5C4(&AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E753B = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v12 = this;
  }
  else
  {
    v12 = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)sub_B5D694(AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v12, 0LL);
    v12->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v12->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v12 )
      sub_B5D69C(CurrentManagedThreadId, v14);
  }
  _3__battleEntity = (System_Int32_array **)this->fields.__3__battleEntity;
  v12->fields.battleEntity = (struct BattleEntity_o *)_3__battleEntity;
  sub_B5D560((BattleServantConfConponent_o *)&v12->fields.battleEntity, _3__battleEntity, v6, v7, v8, v9, v10, v11);
  result = (System_Collections_Generic_IEnumerator_SimpleSkillData__o *)v12;
  v12->fields.userSvtId = this->fields.__3__userSvtId;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E753A & 1) == 0 )
  {
    sub_B5D5C4(&SimpleSkillData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E753A = 1;
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