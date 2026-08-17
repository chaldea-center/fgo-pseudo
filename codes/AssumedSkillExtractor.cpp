System_Collections_Generic_IEnumerable_SimpleSkillData__o *AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData(
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5972E17 & 1) == 0 )
  {
    sub_2213A60(&AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
    byte_5972E17 = 1;
  }
  v3 = sub_2213CCC(AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 28) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = battleEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)battleEntity, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v3;
}


System_Collections_Generic_IEnumerable_SimpleSkillData__o *AssumedSkillExtractor__EnumerateMasterSkill(
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5972E18 & 1) == 0 )
  {
    sub_2213A60(&AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
    byte_5972E18 = 1;
  }
  v3 = sub_2213CCC(AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 28) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = data;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)data, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v3;
}


System_Collections_Generic_IEnumerable_SimpleSkillData__o *AssumedSkillExtractor__EnumerateSvtSimpleSkillData(
        BattleEntity_o *battleEntity,
        int32_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_IEnumerable_SimpleSkillData__o *result; // x0

  if ( (byte_5972E16 & 1) == 0 )
  {
    sub_2213A60(&AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
    byte_5972E16 = 1;
  }
  v5 = sub_2213CCC(AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 28) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v5 + 40) = battleEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)battleEntity, v6, v7, v8, v9, v10, v11);
  result = (System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v5;
  *(_DWORD *)(v5 + 52) = userSvtId;
  return result;
}


void AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1___ctor(
        AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1__MoveNext(
        AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct BattleEntity_o *battleEntity; // x8
  Il2CppObject *Master_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  CommandCodeSkillMaster_o *p__7__wrap2; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct BattleEntity_o *v25; // x8
  struct CommandCodeInfo_array *userCommandCode; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int32_t v33; // w8
  int32_t _7__wrap5; // w8
  int32_t v35; // w8
  CommandCodeInfo_o *v36; // x8
  struct CommandCodeSkillEntity_array *CommandCodeSkillList; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  struct CommandCodeSkillEntity_array *_7__wrap4; // x9
  int32_t v45; // w10
  struct CommandCodeInfo_array *_7__wrap2; // x9
  int32_t max_length; // w10
  bool v48; // w20
  CommandCodeSkillEntity_o *v49; // x8
  int32_t skillId; // w1
  SimpleSkillData_o v51; // x0
  struct SimpleSkillData_o v52; // x8
  struct SimpleSkillData_o v54; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_5972E19 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_CommandCodeSkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5972E19 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _7__wrap5 = this->fields.__7__wrap5;
    this->fields.__1__state = -1;
    v35 = _7__wrap5 + 1;
    this->fields.__7__wrap5 = v35;
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
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommandCodeSkillMaster___);
        this->fields._commandCodeMaster_5__2 = (struct CommandCodeSkillMaster_o *)Master_object;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields._commandCodeMaster_5__2,
          (int32_t)Master_object,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
        v25 = this->fields.battleEntity;
        if ( !v25 )
          goto LABEL_27;
        userCommandCode = v25->fields.userCommandCode;
        this->fields.__7__wrap2 = userCommandCode;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.__7__wrap2,
          (int32_t)userCommandCode,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
        v33 = 0;
        for ( this->fields.__7__wrap3 = 0; ; this->fields.__7__wrap3 = v33 )
        {
          p__7__wrap2 = (CommandCodeSkillMaster_o *)&this->fields.__7__wrap2;
          _7__wrap2 = this->fields.__7__wrap2;
          if ( !_7__wrap2 )
            goto LABEL_27;
          max_length = _7__wrap2->max_length;
          if ( v33 >= max_length )
            break;
          if ( v33 >= (unsigned int)max_length )
            goto LABEL_28;
          v36 = _7__wrap2->m_Items[v33];
          if ( !v36 )
            goto LABEL_27;
          p__7__wrap2 = this->fields._commandCodeMaster_5__2;
          if ( !p__7__wrap2 )
            goto LABEL_27;
          CommandCodeSkillList = CommandCodeSkillMaster__getCommandCodeSkillList(
                                   p__7__wrap2,
                                   v36->fields.commandCodeId,
                                   0);
          this->fields.__7__wrap4 = CommandCodeSkillList;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.__7__wrap4,
            (int32_t)CommandCodeSkillList,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43);
          v35 = 0;
          this->fields.__7__wrap5 = 0;
LABEL_16:
          p__7__wrap2 = (CommandCodeSkillMaster_o *)&this->fields.__7__wrap4;
          _7__wrap4 = this->fields.__7__wrap4;
          if ( !_7__wrap4 )
            goto LABEL_27;
          v45 = _7__wrap4->max_length;
          if ( v35 < v45 )
          {
            if ( v35 >= (unsigned int)v45 )
LABEL_28:
              sub_2213CE4(p__7__wrap2);
            v49 = _7__wrap4->m_Items[v35];
            if ( v49 )
            {
              skillId = v49->fields.skillId;
              v51 = (SimpleSkillData_o)&v54;
              v54 = 0;
              v48 = 1;
              SimpleSkillData___ctor(v51, skillId, 1, 0);
              v52 = v54;
              this->fields.__1__state = 1;
              this->fields.__2__current = v52;
              return v48;
            }
LABEL_27:
            sub_2213CDC(p__7__wrap2, method);
          }
          this->fields.__7__wrap4 = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)p__7__wrap2, 0, v2, v3, v4, v5, v6, v7);
          v33 = this->fields.__7__wrap3 + 1;
        }
        p__7__wrap2->klass = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)p__7__wrap2, 0, v27, v28, v29, v30, v31, v32);
      }
    }
  }
  return 0;
}


System_Collections_Generic_IEnumerator_SimpleSkillData__o *AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1__System_Collections_Generic_IEnumerable_SimpleSkillData__GetEnumerator(
        AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *v10; // x20
  struct BattleEntity_o *_3__battleEntity; // x1

  if ( (byte_5972E1B & 1) == 0 )
  {
    sub_2213A60(&AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
    byte_5972E1B = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v10 = this;
  }
  else
  {
    v10 = (AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *)sub_2213CCC(AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  _3__battleEntity = this->fields.__3__battleEntity;
  v10->fields.battleEntity = _3__battleEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.battleEntity,
    (int32_t)_3__battleEntity,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  return (System_Collections_Generic_IEnumerator_SimpleSkillData__o *)v10;
}


SimpleSkillData_o AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1__System_Collections_Generic_IEnumerator_SimpleSkillData__get_Current(
        AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1__System_Collections_IEnumerator_Reset(
        AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *this,
        const MethodInfo *method)
{
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5972E1A & 1) == 0 )
  {
    sub_2213A60(&SimpleSkillData_TypeInfo);
    byte_5972E1A = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(SimpleSkillData_TypeInfo, &_2__current);
}


void AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1__System_IDisposable_Dispose(
        AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *this,
        const MethodInfo *method)
{
  ;
}


void AssumedSkillExtractor__EnumerateMasterSkill_d__2___ctor(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool AssumedSkillExtractor__EnumerateMasterSkill_d__2__MoveNext(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        const MethodInfo *method)
{
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v2; // x19
  int32_t _1__state; // w8
  UnityEngine_Object_o *data; // x19
  _BOOL8 v5; // x0
  System_Collections_Generic_List_object__o *masterSkillInfo; // x0
  struct BattleData_o *v7; // x8
  Il2CppObject *current; // x8
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v9; // x9
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x1
  struct BattleSkillInfoData_o *v17; // x19
  int32_t v18; // w1
  int32_t skilllv; // w2
  SimpleSkillData_o v20; // x0
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v21; // x8
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v22; // x8
  __int64 v23; // x19
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-50h] BYREF
  __int64 v27; // [xsp+40h] [xbp-30h]
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o **v28; // [xsp+48h] [xbp-28h] BYREF
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v29; // [xsp+58h] [xbp-18h] BYREF

  v29 = this;
  v2 = this;
  if ( (byte_5972E1C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972E1C = 1;
  }
  _1__state = v2->fields.__1__state;
  v27 = 0;
  v28 = &v29;
  if ( _1__state == 1 )
    goto LABEL_12;
  if ( _1__state )
    goto LABEL_8;
  v2->fields.__1__state = -1;
  data = (UnityEngine_Object_o *)v2->fields.data;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Equality(data, 0, 0);
  if ( v5 )
  {
LABEL_8:
    LOBYTE(masterSkillInfo) = 0;
    goto LABEL_16;
  }
  v7 = v29->fields.data;
  if ( !v7 )
    sub_2213CDC(v5, method);
  masterSkillInfo = (System_Collections_Generic_List_object__o *)v7->fields.masterSkillInfo;
  if ( masterSkillInfo )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      &v25,
      masterSkillInfo,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    current = v25.fields._current;
    v9 = v29;
    v26 = v25;
    *(_OWORD *)&v29->fields.__7__wrap1.fields._list = *(_OWORD *)&v25.fields._list;
    v9->fields.__7__wrap1.fields._current = (struct BattleSkillInfoData_o *)current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->fields.__7__wrap1, 0, v10, v11, v12, v13, v14, v15);
    v2 = v29;
LABEL_12:
    v2->fields.__1__state = -3;
    if ( System_Collections_Generic_List_Enumerator_object___MoveNext(
           (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap1,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
    {
      v17 = v29->fields.__7__wrap1.fields._current;
      if ( !v17 )
        sub_2213CDC(v29, v16);
      v18 = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, const MethodInfo *))v17->klass->vtable._5_get_skillId.methodPtr)(
              v29->fields.__7__wrap1.fields._current,
              v17->klass->vtable._5_get_skillId.method);
      skilllv = v17->fields.skilllv;
      v26.fields._list = 0;
      v20 = (SimpleSkillData_o)&v26;
      SimpleSkillData___ctor(v20, v18, skilllv, 0);
      v21 = v29;
      LOBYTE(masterSkillInfo) = 1;
      v29->fields.__2__current = (struct SimpleSkillData_o)v26.fields._list;
      v21->fields.__1__state = 1;
    }
    else
    {
      AssumedSkillExtractor__EnumerateMasterSkill_d__2____m__Finally1(v29, v16);
      v22 = v29;
      LOBYTE(masterSkillInfo) = 0;
      *(_QWORD *)&v29->fields.__7__wrap1.fields._index = 0;
      v22->fields.__7__wrap1.fields._current = 0;
      v22->fields.__7__wrap1.fields._list = 0;
    }
  }
LABEL_16:
  v23 = v27;
  if ( v27 )
  {
    sub_2010760(&v28, method);
    sub_2213CD4(v23);
  }
  return (char)masterSkillInfo;
}


System_Collections_Generic_IEnumerator_SimpleSkillData__o *AssumedSkillExtractor__EnumerateMasterSkill_d__2__System_Collections_Generic_IEnumerable_SimpleSkillData__GetEnumerator(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v10; // x20
  struct BattleData_o *_3__data; // x1

  if ( (byte_5972E1F & 1) == 0 )
  {
    sub_2213A60(&AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
    byte_5972E1F = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v10 = this;
  }
  else
  {
    v10 = (AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *)sub_2213CCC(AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  _3__data = this->fields.__3__data;
  v10->fields.data = _3__data;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->fields.data, (int32_t)_3__data, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerator_SimpleSkillData__o *)v10;
}


SimpleSkillData_o AssumedSkillExtractor__EnumerateMasterSkill_d__2__System_Collections_Generic_IEnumerator_SimpleSkillData__get_Current(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AssumedSkillExtractor__EnumerateMasterSkill_d__2__System_Collections_IEnumerator_Reset(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_AssumedSkillExtractor__EnumerateMasterSkill_d__2_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *AssumedSkillExtractor__EnumerateMasterSkill_d__2__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        const MethodInfo *method)
{
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5972E1E & 1) == 0 )
  {
    sub_2213A60(&SimpleSkillData_TypeInfo);
    byte_5972E1E = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(SimpleSkillData_TypeInfo, &_2__current);
}


void AssumedSkillExtractor__EnumerateMasterSkill_d__2__System_IDisposable_Dispose(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    AssumedSkillExtractor__EnumerateMasterSkill_d__2____m__Finally1(this, method);
}


void AssumedSkillExtractor__EnumerateMasterSkill_d__2____m__Finally1(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        const MethodInfo *method)
{
  const MethodInfo_40FBAD4 *v3; // x1

  if ( (byte_5972E1D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    byte_5972E1D = 1;
  }
  v3 = (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__;
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    v3);
}


void AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0___ctor(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__MoveNext(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  long double v8; // q0
  int32_t _1__state; // w8
  MissionNaviTransitionBoardItem_o *p__7__wrap6; // x0
  int32_t v12; // w8
  int32_t v13; // w8
  int32_t _7__wrap7; // w8
  int32_t v15; // w8
  int32_t v16; // w8
  int32_t v17; // w8
  int32_t v18; // w8
  int32_t v19; // w8
  struct BattleEntity_o *battleEntity; // x8
  struct BattleInfoData_o *battleInfo; // x8
  _QWORD *v22; // x20
  __int64 v23; // x8
  __int64 v24; // x0
  __int64 v25; // x0
  struct SimpleSkillData_array **v26; // x8
  struct SimpleSkillData_array *v27; // x1
  __int64 v28; // x1
  Il2CppObject *Master_object; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct BattleEntity_o *v42; // x8
  struct BattleInfoData_o *v43; // x8
  struct BattleUserServantData_array *userSvt; // x1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  int32_t v51; // w8
  struct SimpleSkillData_array *_7__wrap6; // x9
  int32_t max_length; // w10
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  struct SimpleSkillData_o *v60; // x8
  int32_t v61; // w9
  struct BattleUserServantData_array *_7__wrap3; // x9
  int32_t v63; // w10
  struct BattleUserServantData_o *v64; // x1
  struct BattleUserServantData_o **p_userSvt_5__6; // x20
  struct BattleUserServantData_o *userSvt_5__6; // x8
  __int64 v67; // x21
  __int64 v68; // x22
  unsigned int v69; // w0
  int32_t userSvtId; // w8
  struct SimpleSkillData_array *SelfSkillArray; // x1
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  struct SimpleSkillData_array *v78; // x9
  int32_t v79; // w10
  struct SimpleSkillData_array *ClassPassiveSkillArray; // x1
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  struct SimpleSkillData_array *v87; // x9
  int32_t v88; // w10
  struct SimpleSkillData_array *AddPassiveSkillArray; // x1
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  struct SimpleSkillData_array *v96; // x9
  int32_t v97; // w10
  struct SimpleSkillData_array *AppendPassiveSkillArray; // x1
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  struct SimpleSkillData_o v105; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16

  if ( (byte_5972E20 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_SimpleSkillData___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5972E20 = 1;
  }
  _1__state = this->fields.__1__state;
  p__7__wrap6 = 0;
  if ( _1__state <= 1 )
  {
    if ( _1__state )
    {
      if ( _1__state == 1 )
      {
        _7__wrap7 = this->fields.__7__wrap7;
        this->fields.__1__state = -1;
        v15 = _7__wrap7 + 1;
        this->fields.__7__wrap7 = v15;
        goto LABEL_49;
      }
    }
    else
    {
      battleEntity = this->fields.battleEntity;
      this->fields.__1__state = -1;
      if ( battleEntity )
      {
        battleInfo = battleEntity->fields.battleInfo;
        if ( battleInfo )
        {
          if ( battleInfo->fields.userSvt )
          {
            v22 = Method_System_Array_Empty_SimpleSkillData___;
            v23 = *((_QWORD *)Method_System_Array_Empty_SimpleSkillData___ + 7);
            if ( !v23 )
            {
              sub_224B964(Method_System_Array_Empty_SimpleSkillData___);
              v23 = v22[7];
            }
            v24 = *(_QWORD *)(v23 + 16);
            if ( (*(_WORD *)(v24 + 309) & 1) == 0 )
              v24 = sub_224B908(v8);
            if ( !*(_DWORD *)(v24 + 228) )
              *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v24, method);
            v25 = *(_QWORD *)(v22[7] + 16LL);
            if ( (*(_WORD *)(v25 + 309) & 1) == 0 )
              v25 = sub_224B908(v8);
            v26 = *(struct SimpleSkillData_array ***)(v25 + 184);
            v27 = *v26;
            this->fields._empty_5__2 = *v26;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields._empty_5__2,
              (int32_t)v27,
              v2,
              v3,
              v4,
              v5,
              v6,
              v7);
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v28);
            Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
            this->fields._svtMaster_5__3 = (struct ServantMaster_o *)Master_object;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields._svtMaster_5__3,
              (int32_t)Master_object,
              v30,
              v31,
              v32,
              v33,
              v34,
              v35);
            v42 = this->fields.battleEntity;
            if ( v42 )
            {
              v43 = v42->fields.battleInfo;
              if ( v43 )
              {
                userSvt = v43->fields.userSvt;
                this->fields.__7__wrap3 = userSvt;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)&this->fields.__7__wrap3,
                  (int32_t)userSvt,
                  v36,
                  v37,
                  v38,
                  v39,
                  v40,
                  v41);
                v51 = 0;
                this->fields.__7__wrap4 = 0;
                goto LABEL_35;
              }
            }
LABEL_77:
            sub_2213CDC(p__7__wrap6, method);
          }
        }
      }
LABEL_73:
      LOBYTE(p__7__wrap6) = 0;
    }
  }
  else
  {
    switch ( _1__state )
    {
      case 2:
        v16 = this->fields.__7__wrap7;
        this->fields.__1__state = -1;
        v17 = v16 + 1;
        this->fields.__7__wrap7 = v17;
        goto LABEL_55;
      case 3:
        v18 = this->fields.__7__wrap7;
        this->fields.__1__state = -1;
        v19 = v18 + 1;
        this->fields.__7__wrap7 = v19;
        goto LABEL_61;
      case 4:
        v12 = this->fields.__7__wrap7;
        this->fields.__1__state = -1;
        v13 = v12 + 1;
        for ( this->fields.__7__wrap7 = v13; ; this->fields.__7__wrap7 = 0 )
        {
          p__7__wrap6 = (MissionNaviTransitionBoardItem_o *)&this->fields.__7__wrap6;
          _7__wrap6 = this->fields.__7__wrap6;
          if ( !_7__wrap6 )
            goto LABEL_77;
          max_length = _7__wrap6->max_length;
          if ( v13 < max_length )
          {
            if ( v13 < (unsigned int)max_length )
            {
              v60 = (struct SimpleSkillData_o *)(&_7__wrap6->obj.klass + v13);
              v61 = 4;
              goto LABEL_71;
            }
            goto LABEL_78;
          }
          this->fields.__7__wrap6 = 0;
          sub_2213A04(p__7__wrap6, 0, v2, v3, v4, v5, v6, v7);
          this->fields._userSvt_5__6 = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._userSvt_5__6, 0, v54, v55, v56, v57, v58, v59);
          while ( 1 )
          {
            v51 = this->fields.__7__wrap4 + 1;
            this->fields.__7__wrap4 = v51;
LABEL_35:
            p__7__wrap6 = (MissionNaviTransitionBoardItem_o *)&this->fields.__7__wrap3;
            _7__wrap3 = this->fields.__7__wrap3;
            if ( !_7__wrap3 )
              goto LABEL_77;
            v63 = _7__wrap3->max_length;
            if ( v51 >= v63 )
            {
              p__7__wrap6->klass = 0;
              sub_2213A04(p__7__wrap6, 0, v45, v46, v47, v48, v49, v50);
              goto LABEL_73;
            }
            if ( v51 >= (unsigned int)v63 )
              goto LABEL_78;
            v64 = _7__wrap3->m_Items[v51];
            this->fields._userSvt_5__6 = v64;
            p_userSvt_5__6 = &this->fields._userSvt_5__6;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields._userSvt_5__6,
              (int32_t)v64,
              v45,
              v46,
              v47,
              v48,
              v49,
              v50);
            userSvt_5__6 = this->fields._userSvt_5__6;
            if ( !userSvt_5__6 )
              goto LABEL_77;
            v67 = *(_QWORD *)&userSvt_5__6->fields.svtId.fields.currentCryptoKey;
            v68 = *(_QWORD *)&userSvt_5__6->fields.svtId.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
            *(_QWORD *)&v107.fields.currentCryptoKey = v67;
            *(_QWORD *)&v107.fields.fakeValue = v68;
            v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v107, 0);
            userSvtId = this->fields.userSvtId;
            method = (const MethodInfo *)v69;
            if ( userSvtId < 0 || v69 == userSvtId )
            {
              p__7__wrap6 = (MissionNaviTransitionBoardItem_o *)this->fields._svtMaster_5__3;
              if ( !p__7__wrap6 )
                goto LABEL_77;
              if ( DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)p__7__wrap6,
                     (int32_t)method,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__) )
              {
                break;
              }
            }
          }
          p__7__wrap6 = (MissionNaviTransitionBoardItem_o *)*p_userSvt_5__6;
          if ( !*p_userSvt_5__6 )
            goto LABEL_77;
          SelfSkillArray = BattleUserServantData__GetSelfSkillArray((BattleUserServantData_o *)p__7__wrap6, 0);
          if ( !SelfSkillArray )
            SelfSkillArray = this->fields._empty_5__2;
          this->fields.__7__wrap6 = SelfSkillArray;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.__7__wrap6,
            (int32_t)SelfSkillArray,
            v72,
            v73,
            v74,
            v75,
            v76,
            v77);
          v15 = 0;
          this->fields.__7__wrap7 = 0;
LABEL_49:
          v78 = this->fields.__7__wrap6;
          if ( !v78 )
            goto LABEL_77;
          v79 = v78->max_length;
          if ( v15 < v79 )
            break;
          this->fields.__7__wrap6 = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__7__wrap6, 0, v2, v3, v4, v5, v6, v7);
          p__7__wrap6 = (MissionNaviTransitionBoardItem_o *)this->fields._userSvt_5__6;
          if ( !p__7__wrap6 )
            goto LABEL_77;
          ClassPassiveSkillArray = BattleUserServantData__GetClassPassiveSkillArray(
                                     (BattleUserServantData_o *)p__7__wrap6,
                                     0);
          if ( !ClassPassiveSkillArray )
            ClassPassiveSkillArray = this->fields._empty_5__2;
          this->fields.__7__wrap6 = ClassPassiveSkillArray;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.__7__wrap6,
            (int32_t)ClassPassiveSkillArray,
            v81,
            v82,
            v83,
            v84,
            v85,
            v86);
          v17 = 0;
          this->fields.__7__wrap7 = 0;
LABEL_55:
          v87 = this->fields.__7__wrap6;
          if ( !v87 )
            goto LABEL_77;
          v88 = v87->max_length;
          if ( v17 < v88 )
          {
            if ( v17 >= (unsigned int)v88 )
              goto LABEL_78;
            v60 = (struct SimpleSkillData_o *)(&v87->obj.klass + v17);
            v61 = 2;
LABEL_71:
            this->fields.__2__current = v60[4];
            LOBYTE(p__7__wrap6) = 1;
            this->fields.__1__state = v61;
            return (char)p__7__wrap6;
          }
          this->fields.__7__wrap6 = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__7__wrap6, 0, v2, v3, v4, v5, v6, v7);
          p__7__wrap6 = (MissionNaviTransitionBoardItem_o *)this->fields._userSvt_5__6;
          if ( !p__7__wrap6 )
            goto LABEL_77;
          AddPassiveSkillArray = BattleUserServantData__GetAddPassiveSkillArray(
                                   (BattleUserServantData_o *)p__7__wrap6,
                                   0);
          if ( !AddPassiveSkillArray )
            AddPassiveSkillArray = this->fields._empty_5__2;
          this->fields.__7__wrap6 = AddPassiveSkillArray;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.__7__wrap6,
            (int32_t)AddPassiveSkillArray,
            v90,
            v91,
            v92,
            v93,
            v94,
            v95);
          v19 = 0;
          this->fields.__7__wrap7 = 0;
LABEL_61:
          v96 = this->fields.__7__wrap6;
          if ( !v96 )
            goto LABEL_77;
          v97 = v96->max_length;
          if ( v19 < v97 )
          {
            if ( v19 < (unsigned int)v97 )
            {
              v60 = (struct SimpleSkillData_o *)(&v96->obj.klass + v19);
              v61 = 3;
              goto LABEL_71;
            }
LABEL_78:
            sub_2213CE4(p__7__wrap6);
          }
          this->fields.__7__wrap6 = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__7__wrap6, 0, v2, v3, v4, v5, v6, v7);
          p__7__wrap6 = (MissionNaviTransitionBoardItem_o *)this->fields._userSvt_5__6;
          if ( !p__7__wrap6 )
            goto LABEL_77;
          AppendPassiveSkillArray = BattleUserServantData__GetAppendPassiveSkillArray(
                                      (BattleUserServantData_o *)p__7__wrap6,
                                      0);
          if ( !AppendPassiveSkillArray )
            AppendPassiveSkillArray = this->fields._empty_5__2;
          this->fields.__7__wrap6 = AppendPassiveSkillArray;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.__7__wrap6,
            (int32_t)AppendPassiveSkillArray,
            v99,
            v100,
            v101,
            v102,
            v103,
            v104);
          v13 = 0;
        }
        if ( v15 >= (unsigned int)v79 )
          goto LABEL_78;
        LOBYTE(p__7__wrap6) = 1;
        v105 = v78->m_Items[v15];
        this->fields.__1__state = 1;
        this->fields.__2__current = v105;
        break;
    }
  }
  return (char)p__7__wrap6;
}


System_Collections_Generic_IEnumerator_SimpleSkillData__o *AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_Collections_Generic_IEnumerable_SimpleSkillData__GetEnumerator(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *v10; // x20
  struct BattleEntity_o *_3__battleEntity; // x1
  System_Collections_Generic_IEnumerator_SimpleSkillData__o *result; // x0

  if ( (byte_5972E22 & 1) == 0 )
  {
    sub_2213A60(&AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
    byte_5972E22 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v10 = this;
  }
  else
  {
    v10 = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)sub_2213CCC(AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  _3__battleEntity = this->fields.__3__battleEntity;
  v10->fields.battleEntity = _3__battleEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.battleEntity,
    (int32_t)_3__battleEntity,
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


SimpleSkillData_o AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_Collections_Generic_IEnumerator_SimpleSkillData__get_Current(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_Collections_IEnumerator_Reset(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5972E21 & 1) == 0 )
  {
    sub_2213A60(&SimpleSkillData_TypeInfo);
    byte_5972E21 = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(SimpleSkillData_TypeInfo, &_2__current);
}


void AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_IDisposable_Dispose(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  ;
}