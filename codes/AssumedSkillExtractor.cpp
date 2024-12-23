System_Collections_Generic_IEnumerable_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData(
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4B68DFB & 1) == 0 )
  {
    sub_1BE4ACC(&AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo, method);
    byte_4B68DFB = 1;
  }
  v3 = sub_1BE4D18(AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 28) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 40) = battleEntity;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v3 + 40), (int64_t)battleEntity, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v3;
}


System_Collections_Generic_IEnumerable_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateMasterSkill(
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4B68DFC & 1) == 0 )
  {
    sub_1BE4ACC(&AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo, method);
    byte_4B68DFC = 1;
  }
  v3 = sub_1BE4D18(AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 28) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 40) = data;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v3 + 40), (int64_t)data, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v3;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateSvtSimpleSkillData(
        BattleEntity_o *battleEntity,
        int32_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B68DFA & 1) == 0 )
  {
    sub_1BE4ACC(&AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo, *(_QWORD *)&userSvtId);
    byte_4B68DFA = 1;
  }
  v5 = sub_1BE4D18(AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 28) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v5 + 40) = battleEntity;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)battleEntity, v6, v7, v8, v9, v10, v11);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  int32_t _1__state; // w8
  struct BattleEntity_o *battleEntity; // x8
  Il2CppObject *Master_object; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  CommandCodeSkillMaster_o *p__7__wrap2; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct BattleEntity_o *v26; // x8
  struct CommandCodeInfo_array *userCommandCode; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int32_t v34; // w8
  int32_t _7__wrap5; // w8
  int32_t v36; // w8
  CommandCodeInfo_o *v37; // x8
  struct CommandCodeSkillEntity_array *CommandCodeSkillList; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct CommandCodeSkillEntity_array *_7__wrap4; // x9
  il2cpp_array_size_t v46; // w10
  struct CommandCodeInfo_array *_7__wrap2; // x9
  il2cpp_array_size_t max_length; // w10
  bool v49; // w20
  CommandCodeSkillEntity_o *v50; // x8
  int32_t skillId; // w1
  struct SimpleSkillData_o v52; // x8
  struct SimpleSkillData_o v54; // [xsp+8h] [xbp-18h] BYREF
  SimpleSkillData_o v55; // 0:x0.8

  if ( (byte_4B68DFD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_CommandCodeSkillMaster___, method);
    sub_1BE4ACC(&DataManager_TypeInfo, v9);
    byte_4B68DFD = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _7__wrap5 = this->fields.__7__wrap5;
    this->fields.__1__state = -1;
    v36 = _7__wrap5 + 1;
    this->fields.__7__wrap5 = v36;
    goto LABEL_16;
  }
  if ( !_1__state )
  {
    battleEntity = this->fields.battleEntity;
    this->fields.__1__state = -1;
    if ( battleEntity )
    {
      if ( battleEntity->fields.userCommandCode )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_CommandCodeSkillMaster___);
        this->fields._commandCodeMaster_5__2 = (struct CommandCodeSkillMaster_o *)Master_object;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields._commandCodeMaster_5__2,
          (int64_t)Master_object,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
        v26 = this->fields.battleEntity;
        if ( !v26 )
          goto LABEL_27;
        userCommandCode = v26->fields.userCommandCode;
        this->fields.__7__wrap2 = userCommandCode;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.__7__wrap2,
          (int64_t)userCommandCode,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
        v34 = 0;
        for ( this->fields.__7__wrap3 = 0; ; this->fields.__7__wrap3 = v34 )
        {
          p__7__wrap2 = (CommandCodeSkillMaster_o *)&this->fields.__7__wrap2;
          _7__wrap2 = this->fields.__7__wrap2;
          if ( !_7__wrap2 )
            goto LABEL_27;
          max_length = _7__wrap2->max_length;
          if ( v34 >= (int)max_length )
            break;
          if ( v34 >= max_length )
            goto LABEL_28;
          v37 = _7__wrap2->m_Items[v34];
          if ( !v37 )
            goto LABEL_27;
          p__7__wrap2 = this->fields._commandCodeMaster_5__2;
          if ( !p__7__wrap2 )
            goto LABEL_27;
          CommandCodeSkillList = CommandCodeSkillMaster__getCommandCodeSkillList(
                                   p__7__wrap2,
                                   v37->fields.commandCodeId,
                                   0LL);
          this->fields.__7__wrap4 = CommandCodeSkillList;
          sub_1BE4A70(
            (PartyOrganizationUtility_o *)&this->fields.__7__wrap4,
            (int64_t)CommandCodeSkillList,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44);
          v36 = 0;
          this->fields.__7__wrap5 = 0;
LABEL_16:
          p__7__wrap2 = (CommandCodeSkillMaster_o *)&this->fields.__7__wrap4;
          _7__wrap4 = this->fields.__7__wrap4;
          if ( !_7__wrap4 )
            goto LABEL_27;
          v46 = _7__wrap4->max_length;
          if ( v36 < (int)v46 )
          {
            if ( v36 >= v46 )
LABEL_28:
              sub_1BE4D30(p__7__wrap2, method);
            v50 = _7__wrap4->m_Items[v36];
            if ( v50 )
            {
              skillId = v50->fields.skillId;
              v55 = (SimpleSkillData_o)&v54;
              v54 = 0LL;
              v49 = 1;
              SimpleSkillData___ctor(v55, skillId, 1, 0LL);
              v52 = v54;
              this->fields.__1__state = 1;
              this->fields.__2__current = v52;
              return v49;
            }
LABEL_27:
            sub_1BE4D28(p__7__wrap2, method);
          }
          this->fields.__7__wrap4 = 0LL;
          sub_1BE4A70((PartyOrganizationUtility_o *)p__7__wrap2, 0LL, v2, v3, v4, v5, v6, v7);
          v34 = this->fields.__7__wrap3 + 1;
        }
        p__7__wrap2->klass = 0LL;
        sub_1BE4A70((PartyOrganizationUtility_o *)p__7__wrap2, 0LL, v28, v29, v30, v31, v32, v33);
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
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *v10; // x20
  struct BattleEntity_o *_3__battleEntity; // x1

  if ( (byte_4B68DFF & 1) == 0 )
  {
    sub_1BE4ACC(&AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo, method);
    byte_4B68DFF = 1;
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
    v10 = (AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *)sub_1BE4D18(AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
  }
  _3__battleEntity = this->fields.__3__battleEntity;
  v10->fields.battleEntity = _3__battleEntity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v10->fields.battleEntity,
    (int64_t)_3__battleEntity,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
}


Il2CppObject *__fastcall AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B68DFE & 1) == 0 )
  {
    sub_1BE4ACC(&SimpleSkillData_TypeInfo, method);
    byte_4B68DFE = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(SimpleSkillData_TypeInfo, &_2__current, v2, v3, v4);
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
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  UnityEngine_Object_o *data; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *masterSkillInfo; // x0
  struct BattleData_o *v11; // x8
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v12; // x9
  __int128 v13; // q0
  struct System_Collections_Generic_List_Enumerator_BattleSkillInfoData__o *p__7__wrap1; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x1
  struct BattleSkillInfoData_o *current; // x19
  int32_t v23; // w1
  int32_t skilllv; // w2
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v25; // x8
  struct System_Collections_Generic_List_T__o *list; // x9
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v27; // x8
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+20h] [xbp-50h] BYREF
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o **v31; // [xsp+48h] [xbp-28h]
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v32; // [xsp+58h] [xbp-18h] BYREF
  SimpleSkillData_o v33; // 0:x0.8

  v32 = this;
  v2 = this;
  if ( (byte_4B68E00 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v4);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    byte_4B68E00 = 1;
  }
  v31 = &v32;
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
    goto LABEL_12;
  if ( _1__state )
    goto LABEL_8;
  v2->fields.__1__state = -1;
  data = (UnityEngine_Object_o *)v2->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality(data, 0LL, 0LL);
  if ( v8 )
  {
LABEL_8:
    LOBYTE(masterSkillInfo) = 0;
    return (char)masterSkillInfo;
  }
  v11 = v32->fields.data;
  if ( !v11 )
    sub_1BE4D28(v8, v9);
  masterSkillInfo = (System_Collections_Generic_List_object__o *)v11->fields.masterSkillInfo;
  if ( masterSkillInfo )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      &v29,
      masterSkillInfo,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    v12 = v32;
    v13 = *(_OWORD *)&v29.fields._list;
    p__7__wrap1 = &v32->fields.__7__wrap1;
    v30 = v29;
    v32->fields.__7__wrap1.fields._current = (struct BattleSkillInfoData_o *)v29.fields._current;
    *(_OWORD *)&v12->fields.__7__wrap1.fields._list = v13;
    sub_1BE4A70((PartyOrganizationUtility_o *)p__7__wrap1, 0LL, v15, v16, v17, v18, v19, v20);
    v2 = v32;
LABEL_12:
    v2->fields.__1__state = -3;
    if ( System_Collections_Generic_List_Enumerator_object___MoveNext(
           (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap1,
           (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
    {
      current = v32->fields.__7__wrap1.fields._current;
      if ( !current )
        sub_1BE4D28(v32, v21);
      v23 = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))current->klass->vtable._5_get_skillId.method)(
              v32->fields.__7__wrap1.fields._current,
              current->klass->vtable._6_get_IndividualityArray.methodPtr);
      skilllv = current->fields.skilllv;
      v30.fields._list = 0LL;
      v33 = (SimpleSkillData_o)&v30;
      SimpleSkillData___ctor(v33, v23, skilllv, 0LL);
      v25 = v32;
      list = v30.fields._list;
      LOBYTE(masterSkillInfo) = 1;
      v32->fields.__1__state = 1;
      v25->fields.__2__current = (struct SimpleSkillData_o)list;
    }
    else
    {
      AssumedSkillExtractor__EnumerateMasterSkill_d__2____m__Finally1(v32, v21);
      v27 = v32;
      LOBYTE(masterSkillInfo) = 0;
      v32->fields.__7__wrap1.fields._list = 0LL;
      *(_QWORD *)&v27->fields.__7__wrap1.fields._index = 0LL;
      v27->fields.__7__wrap1.fields._current = 0LL;
    }
  }
  return (char)masterSkillInfo;
}


System_Collections_Generic_IEnumerator_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateMasterSkill_d__2__System_Collections_Generic_IEnumerable_SimpleSkillData__GetEnumerator(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v10; // x20
  struct BattleData_o *_3__data; // x1

  if ( (byte_4B68E03 & 1) == 0 )
  {
    sub_1BE4ACC(&AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo, method);
    byte_4B68E03 = 1;
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
    v10 = (AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *)sub_1BE4D18(AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
  }
  _3__data = this->fields.__3__data;
  v10->fields.data = _3__data;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v10->fields.data, (int64_t)_3__data, v4, v5, v6, v7, v8, v9);
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_AssumedSkillExtractor__EnumerateMasterSkill_d__2_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
}


Il2CppObject *__fastcall AssumedSkillExtractor__EnumerateMasterSkill_d__2__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B68E02 & 1) == 0 )
  {
    sub_1BE4ACC(&SimpleSkillData_TypeInfo, method);
    byte_4B68E02 = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(SimpleSkillData_TypeInfo, &_2__current, v2, v3, v4);
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
  if ( (byte_4B68E01 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, method);
    byte_4B68E01 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  long double inited; // q0
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *v9; // x19
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct BattleEntity_o *battleEntity; // x8
  struct BattleInfoData_o *battleInfo; // x8
  _QWORD *v16; // x20
  __int64 v17; // x8
  __int64 v18; // x0
  __int64 v19; // x0
  int64_t *v20; // x8
  int64_t v21; // x1
  Il2CppObject *Master_object; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct BattleEntity_o *v35; // x8
  struct BattleInfoData_o *v36; // x8
  int64_t userSvt; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int v44; // w8
  int32_t _7__wrap7; // w8
  int32_t v46; // w8
  int32_t v47; // w8
  int32_t v48; // w8
  int32_t v49; // w8
  int32_t v50; // w8
  int32_t v51; // w8
  int32_t v52; // w8
  int64_t v53; // x1
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o **p_userSvt_5__6; // x20
  struct BattleUserServantData_o *userSvt_5__6; // x8
  __int64 v56; // x21
  __int64 v57; // x22
  unsigned int v58; // w0
  int32_t userSvtId; // w8
  SimpleSkillData_array *SelfSkillArray; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  struct SimpleSkillData_array *_7__wrap6; // x9
  il2cpp_array_size_t v68; // w10
  SimpleSkillData_array *ClassPassiveSkillArray; // x1
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct SimpleSkillData_array *v76; // x9
  il2cpp_array_size_t v77; // w10
  SimpleSkillData_array *AddPassiveSkillArray; // x1
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  struct SimpleSkillData_array *v85; // x9
  il2cpp_array_size_t v86; // w10
  SimpleSkillData_array *AppendPassiveSkillArray; // x1
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  struct SimpleSkillData_array *v94; // x9
  il2cpp_array_size_t v95; // w10
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  struct BattleUserServantData_array *_7__wrap3; // x9
  int max_length; // w10
  bool result; // w0
  struct SimpleSkillData_o v105; // x8
  struct SimpleSkillData_o v106; // x8
  int v107; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16

  v9 = this;
  if ( (byte_4B68E04 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_Empty_SimpleSkillData___, method);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ServantMaster___, v10);
    sub_1BE4ACC(&DataManager_TypeInfo, v11);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)sub_1BE4ACC(
                                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                          v13);
    byte_4B68E04 = 1;
  }
  switch ( v9->fields.__1__state )
  {
    case 0:
      battleEntity = v9->fields.battleEntity;
      v9->fields.__1__state = -1;
      if ( !battleEntity )
        return 0;
      battleInfo = battleEntity->fields.battleInfo;
      if ( !battleInfo || !battleInfo->fields.userSvt )
        return 0;
      v16 = Method_System_Array_Empty_SimpleSkillData___;
      v17 = *((_QWORD *)Method_System_Array_Empty_SimpleSkillData___ + 7);
      if ( !v17 )
      {
        sub_1C36A04(Method_System_Array_Empty_SimpleSkillData___);
        v17 = v16[7];
      }
      v18 = *(_QWORD *)(v17 + 16);
      if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
        v18 = sub_1C369A8(inited);
      if ( !*(_DWORD *)(v18 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v18);
      v19 = *(_QWORD *)(v16[7] + 16LL);
      if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
        v19 = sub_1C369A8(inited);
      v20 = *(int64_t **)(v19 + 184);
      v21 = *v20;
      v9->fields._empty_5__2 = (struct SimpleSkillData_array *)*v20;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v9->fields._empty_5__2, v21, v2, v3, v4, v5, v6, v7);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ServantMaster___);
      v9->fields._svtMaster_5__3 = (struct ServantMaster_o *)Master_object;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&v9->fields._svtMaster_5__3,
        (int64_t)Master_object,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      v35 = v9->fields.battleEntity;
      if ( !v35 )
        goto LABEL_71;
      v36 = v35->fields.battleInfo;
      if ( !v36 )
        goto LABEL_71;
      userSvt = (int64_t)v36->fields.userSvt;
      v9->fields.__7__wrap3 = (struct BattleUserServantData_array *)userSvt;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v9->fields.__7__wrap3, userSvt, v29, v30, v31, v32, v33, v34);
      v44 = 0;
      v9->fields.__7__wrap4 = 0;
      break;
    case 1:
      _7__wrap7 = v9->fields.__7__wrap7;
      v9->fields.__1__state = -1;
      v46 = _7__wrap7 + 1;
      v9->fields.__7__wrap7 = v46;
      goto LABEL_36;
    case 2:
      v47 = v9->fields.__7__wrap7;
      v9->fields.__1__state = -1;
      v48 = v47 + 1;
      v9->fields.__7__wrap7 = v48;
      goto LABEL_42;
    case 3:
      v49 = v9->fields.__7__wrap7;
      v9->fields.__1__state = -1;
      v50 = v49 + 1;
      v9->fields.__7__wrap7 = v50;
      goto LABEL_48;
    case 4:
      v51 = v9->fields.__7__wrap7;
      v9->fields.__1__state = -1;
      v52 = v51 + 1;
      v9->fields.__7__wrap7 = v52;
      goto LABEL_54;
    default:
      return 0;
  }
  while ( 1 )
  {
    this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)&v9->fields.__7__wrap3;
    _7__wrap3 = v9->fields.__7__wrap3;
    if ( !_7__wrap3 )
LABEL_71:
      sub_1BE4D28(this, method);
    max_length = _7__wrap3->max_length;
    if ( v44 >= max_length )
      break;
    if ( v44 >= (unsigned int)max_length )
      goto LABEL_72;
    v53 = (int64_t)_7__wrap3->m_Items[v44];
    v9->fields._userSvt_5__6 = (struct BattleUserServantData_o *)v53;
    p_userSvt_5__6 = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o **)&v9->fields._userSvt_5__6;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v9->fields._userSvt_5__6, v53, v38, v39, v40, v41, v42, v43);
    userSvt_5__6 = v9->fields._userSvt_5__6;
    if ( !userSvt_5__6 )
      goto LABEL_71;
    v57 = *(_QWORD *)&userSvt_5__6->fields.svtId.fields.currentCryptoKey;
    v56 = *(_QWORD *)&userSvt_5__6->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v108.fields.currentCryptoKey = v57;
    *(_QWORD *)&v108.fields.fakeValue = v56;
    v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v108, 0LL);
    userSvtId = v9->fields.userSvtId;
    method = (const MethodInfo *)v58;
    if ( (userSvtId & 0x80000000) != 0 || v58 == userSvtId )
    {
      this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v9->fields._svtMaster_5__3;
      if ( !this )
        goto LABEL_71;
      if ( DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (int32_t)method,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__) )
      {
        this = *p_userSvt_5__6;
        if ( !*p_userSvt_5__6 )
          goto LABEL_71;
        SelfSkillArray = BattleUserServantData__GetSelfSkillArray((BattleUserServantData_o *)this, 0LL);
        if ( !SelfSkillArray )
          SelfSkillArray = v9->fields._empty_5__2;
        v9->fields.__7__wrap6 = SelfSkillArray;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&v9->fields.__7__wrap6,
          (int64_t)SelfSkillArray,
          v61,
          v62,
          v63,
          v64,
          v65,
          v66);
        v46 = 0;
        v9->fields.__7__wrap7 = 0;
LABEL_36:
        _7__wrap6 = v9->fields.__7__wrap6;
        if ( !_7__wrap6 )
          goto LABEL_71;
        v68 = _7__wrap6->max_length;
        if ( v46 < (int)v68 )
        {
          if ( v46 < v68 )
          {
            v105 = *(struct SimpleSkillData_o *)&_7__wrap6->m_Items[v46].fields.lv;
            result = 1;
            v9->fields.__1__state = 1;
            v9->fields.__2__current = v105;
            return result;
          }
LABEL_72:
          sub_1BE4D30(this, method);
        }
        v9->fields.__7__wrap6 = 0LL;
        sub_1BE4A70((PartyOrganizationUtility_o *)&v9->fields.__7__wrap6, 0LL, v2, v3, v4, v5, v6, v7);
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v9->fields._userSvt_5__6;
        if ( !this )
          goto LABEL_71;
        ClassPassiveSkillArray = BattleUserServantData__GetClassPassiveSkillArray((BattleUserServantData_o *)this, 0LL);
        if ( !ClassPassiveSkillArray )
          ClassPassiveSkillArray = v9->fields._empty_5__2;
        v9->fields.__7__wrap6 = ClassPassiveSkillArray;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&v9->fields.__7__wrap6,
          (int64_t)ClassPassiveSkillArray,
          v70,
          v71,
          v72,
          v73,
          v74,
          v75);
        v48 = 0;
        v9->fields.__7__wrap7 = 0;
LABEL_42:
        v76 = v9->fields.__7__wrap6;
        if ( !v76 )
          goto LABEL_71;
        v77 = v76->max_length;
        if ( v48 < (int)v77 )
        {
          if ( v48 >= v77 )
            goto LABEL_72;
          v106 = *(struct SimpleSkillData_o *)&v76->m_Items[v48].fields.lv;
          v107 = 2;
LABEL_70:
          v9->fields.__1__state = v107;
          v9->fields.__2__current = v106;
          return 1;
        }
        v9->fields.__7__wrap6 = 0LL;
        sub_1BE4A70((PartyOrganizationUtility_o *)&v9->fields.__7__wrap6, 0LL, v2, v3, v4, v5, v6, v7);
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v9->fields._userSvt_5__6;
        if ( !this )
          goto LABEL_71;
        AddPassiveSkillArray = BattleUserServantData__GetAddPassiveSkillArray((BattleUserServantData_o *)this, 0LL);
        if ( !AddPassiveSkillArray )
          AddPassiveSkillArray = v9->fields._empty_5__2;
        v9->fields.__7__wrap6 = AddPassiveSkillArray;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&v9->fields.__7__wrap6,
          (int64_t)AddPassiveSkillArray,
          v79,
          v80,
          v81,
          v82,
          v83,
          v84);
        v50 = 0;
        v9->fields.__7__wrap7 = 0;
LABEL_48:
        v85 = v9->fields.__7__wrap6;
        if ( !v85 )
          goto LABEL_71;
        v86 = v85->max_length;
        if ( v50 < (int)v86 )
        {
          if ( v50 >= v86 )
            goto LABEL_72;
          v106 = *(struct SimpleSkillData_o *)&v85->m_Items[v50].fields.lv;
          v107 = 3;
          goto LABEL_70;
        }
        v9->fields.__7__wrap6 = 0LL;
        sub_1BE4A70((PartyOrganizationUtility_o *)&v9->fields.__7__wrap6, 0LL, v2, v3, v4, v5, v6, v7);
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v9->fields._userSvt_5__6;
        if ( !this )
          goto LABEL_71;
        AppendPassiveSkillArray = BattleUserServantData__GetAppendPassiveSkillArray(
                                    (BattleUserServantData_o *)this,
                                    0LL);
        if ( !AppendPassiveSkillArray )
          AppendPassiveSkillArray = v9->fields._empty_5__2;
        v9->fields.__7__wrap6 = AppendPassiveSkillArray;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&v9->fields.__7__wrap6,
          (int64_t)AppendPassiveSkillArray,
          v88,
          v89,
          v90,
          v91,
          v92,
          v93);
        v52 = 0;
        v9->fields.__7__wrap7 = 0;
LABEL_54:
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)&v9->fields.__7__wrap6;
        v94 = v9->fields.__7__wrap6;
        if ( !v94 )
          goto LABEL_71;
        v95 = v94->max_length;
        if ( v52 < (int)v95 )
        {
          if ( v52 >= v95 )
            goto LABEL_72;
          v106 = *(struct SimpleSkillData_o *)&v94->m_Items[v52].fields.lv;
          v107 = 4;
          goto LABEL_70;
        }
        v9->fields.__7__wrap6 = 0LL;
        sub_1BE4A70((PartyOrganizationUtility_o *)this, 0LL, v2, v3, v4, v5, v6, v7);
        v9->fields._userSvt_5__6 = 0LL;
        sub_1BE4A70((PartyOrganizationUtility_o *)&v9->fields._userSvt_5__6, 0LL, v96, v97, v98, v99, v100, v101);
      }
    }
    v44 = v9->fields.__7__wrap4 + 1;
    v9->fields.__7__wrap4 = v44;
  }
  this->klass = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)this, 0LL, v38, v39, v40, v41, v42, v43);
  return 0;
}


System_Collections_Generic_IEnumerator_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_Collections_Generic_IEnumerable_SimpleSkillData__GetEnumerator(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *v10; // x20
  struct BattleEntity_o *_3__battleEntity; // x1
  System_Collections_Generic_IEnumerator_SimpleSkillData__o *result; // x0

  if ( (byte_4B68E06 & 1) == 0 )
  {
    sub_1BE4ACC(&AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo, method);
    byte_4B68E06 = 1;
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
    v10 = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)sub_1BE4D18(AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
  }
  _3__battleEntity = this->fields.__3__battleEntity;
  v10->fields.battleEntity = _3__battleEntity;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&v10->fields.battleEntity,
    (int64_t)_3__battleEntity,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
}


Il2CppObject *__fastcall AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B68E05 & 1) == 0 )
  {
    sub_1BE4ACC(&SimpleSkillData_TypeInfo, method);
    byte_4B68E05 = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(SimpleSkillData_TypeInfo, &_2__current, v2, v3, v4);
}


void __fastcall AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_IDisposable_Dispose(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  ;
}