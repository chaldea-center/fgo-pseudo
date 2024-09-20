System_Collections_Generic_IEnumerable_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData(
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5D2EF & 1) == 0 )
  {
    sub_1B885B0(&AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
    byte_4A5D2EF = 1;
  }
  v3 = sub_1B887FC(AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 28) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 40) = battleEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 40), (int32_t)battleEntity, v4, v5);
  return (System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v3;
}


System_Collections_Generic_IEnumerable_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateMasterSkill(
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5D2F0 & 1) == 0 )
  {
    sub_1B885B0(&AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
    byte_4A5D2F0 = 1;
  }
  v3 = sub_1B887FC(AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 28) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 40) = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 40), (int32_t)data, v4, v5);
  return (System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v3;
}


System_Collections_Generic_IEnumerable_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateSvtSimpleSkillData(
        BattleEntity_o *battleEntity,
        int32_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5D2EE & 1) == 0 )
  {
    sub_1B885B0(&AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
    byte_4A5D2EE = 1;
  }
  v5 = sub_1B887FC(AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 28) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v5 + 40) = battleEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)battleEntity, v6, v7);
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
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t _1__state; // w8
  struct BattleEntity_o *battleEntity; // x8
  Il2CppObject *Master_object; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  CommandCodeSkillMaster_o *p__7__wrap2; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct BattleEntity_o *v13; // x8
  struct CommandCodeInfo_array *userCommandCode; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w8
  int32_t _7__wrap5; // w8
  int32_t v19; // w8
  CommandCodeInfo_o *v20; // x8
  struct CommandCodeSkillEntity_array *CommandCodeSkillList; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  struct CommandCodeSkillEntity_array *_7__wrap4; // x9
  il2cpp_array_size_t v25; // w10
  struct CommandCodeInfo_array *_7__wrap2; // x9
  il2cpp_array_size_t max_length; // w10
  bool v28; // w20
  CommandCodeSkillEntity_o *v29; // x8
  int32_t skillId; // w1
  struct SimpleSkillData_o v31; // x8
  struct SimpleSkillData_o v33; // [xsp+8h] [xbp-18h] BYREF
  SimpleSkillData_o v34; // 0:x0.8

  if ( (byte_4A5D2F1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_CommandCodeSkillMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5D2F1 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _7__wrap5 = this->fields.__7__wrap5;
    this->fields.__1__state = -1;
    v19 = _7__wrap5 + 1;
    this->fields.__7__wrap5 = v19;
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommandCodeSkillMaster___);
        this->fields._commandCodeMaster_5__2 = (struct CommandCodeSkillMaster_o *)Master_object;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields._commandCodeMaster_5__2,
          (int32_t)Master_object,
          v8,
          v9);
        v13 = this->fields.battleEntity;
        if ( !v13 )
          goto LABEL_27;
        userCommandCode = v13->fields.userCommandCode;
        this->fields.__7__wrap2 = userCommandCode;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__7__wrap2, (int32_t)userCommandCode, v11, v12);
        v17 = 0;
        for ( this->fields.__7__wrap3 = 0; ; this->fields.__7__wrap3 = v17 )
        {
          p__7__wrap2 = (CommandCodeSkillMaster_o *)&this->fields.__7__wrap2;
          _7__wrap2 = this->fields.__7__wrap2;
          if ( !_7__wrap2 )
            goto LABEL_27;
          max_length = _7__wrap2->max_length;
          if ( v17 >= (int)max_length )
            break;
          if ( v17 >= max_length )
            goto LABEL_28;
          v20 = _7__wrap2->m_Items[v17];
          if ( !v20 )
            goto LABEL_27;
          p__7__wrap2 = this->fields._commandCodeMaster_5__2;
          if ( !p__7__wrap2 )
            goto LABEL_27;
          CommandCodeSkillList = CommandCodeSkillMaster__getCommandCodeSkillList(
                                   p__7__wrap2,
                                   v20->fields.commandCodeId,
                                   0LL);
          this->fields.__7__wrap4 = CommandCodeSkillList;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&this->fields.__7__wrap4,
            (int32_t)CommandCodeSkillList,
            v22,
            v23);
          v19 = 0;
          this->fields.__7__wrap5 = 0;
LABEL_16:
          p__7__wrap2 = (CommandCodeSkillMaster_o *)&this->fields.__7__wrap4;
          _7__wrap4 = this->fields.__7__wrap4;
          if ( !_7__wrap4 )
            goto LABEL_27;
          v25 = _7__wrap4->max_length;
          if ( v19 < (int)v25 )
          {
            if ( v19 >= v25 )
LABEL_28:
              sub_1B88814(p__7__wrap2, method);
            v29 = _7__wrap4->m_Items[v19];
            if ( v29 )
            {
              skillId = v29->fields.skillId;
              v34 = (SimpleSkillData_o)&v33;
              v33 = 0LL;
              v28 = 1;
              SimpleSkillData___ctor(v34, skillId, 1, 0LL);
              v31 = v33;
              this->fields.__1__state = 1;
              this->fields.__2__current = v31;
              return v28;
            }
LABEL_27:
            sub_1B8880C(p__7__wrap2, method);
          }
          this->fields.__7__wrap4 = 0LL;
          sub_1B88554((ServantStatusBattleListViewItem_o *)p__7__wrap2, 0, v2, v3);
          v17 = this->fields.__7__wrap3 + 1;
        }
        p__7__wrap2->klass = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)p__7__wrap2, 0, v15, v16);
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
  int32_t v4; // w2
  int32_t v5; // w3
  AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *v6; // x20
  struct BattleEntity_o *_3__battleEntity; // x1

  if ( (byte_4A5D2F3 & 1) == 0 )
  {
    sub_1B885B0(&AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
    byte_4A5D2F3 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v6 = this;
  }
  else
  {
    v6 = (AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *)sub_1B887FC(AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
  }
  _3__battleEntity = this->fields.__3__battleEntity;
  v6->fields.battleEntity = _3__battleEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.battleEntity, (int32_t)_3__battleEntity, v4, v5);
  return (System_Collections_Generic_IEnumerator_SimpleSkillData__o *)v6;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5D2F2 & 1) == 0 )
  {
    sub_1B885B0(&SimpleSkillData_TypeInfo);
    byte_4A5D2F2 = 1;
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
  int32_t _1__state; // w8
  UnityEngine_Object_o *data; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *masterSkillInfo; // x0
  struct BattleData_o *v8; // x8
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v9; // x9
  __int128 v10; // q0
  ServantStatusBattleListViewItem_o *p__7__wrap1; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x1
  struct BattleSkillInfoData_o *current; // x19
  int32_t v16; // w1
  int32_t skilllv; // w2
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v18; // x8
  struct System_Collections_Generic_List_T__o *list; // x9
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v20; // x8
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-50h] BYREF
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o **v24; // [xsp+48h] [xbp-28h]
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v25; // [xsp+58h] [xbp-18h] BYREF
  SimpleSkillData_o v26; // 0:x0.8

  v25 = this;
  v2 = this;
  if ( (byte_4A5D2F4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D2F4 = 1;
  }
  v24 = &v25;
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
    goto LABEL_12;
  if ( _1__state )
    goto LABEL_8;
  v2->fields.__1__state = -1;
  data = (UnityEngine_Object_o *)v2->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality(data, 0LL, 0LL);
  if ( v5 )
  {
LABEL_8:
    LOBYTE(masterSkillInfo) = 0;
    return (char)masterSkillInfo;
  }
  v8 = v25->fields.data;
  if ( !v8 )
    sub_1B8880C(v5, v6);
  masterSkillInfo = (System_Collections_Generic_List_object__o *)v8->fields.masterSkillInfo;
  if ( masterSkillInfo )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      &v22,
      masterSkillInfo,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    v9 = v25;
    v10 = *(_OWORD *)&v22.fields._list;
    p__7__wrap1 = (ServantStatusBattleListViewItem_o *)&v25->fields.__7__wrap1;
    v23 = v22;
    v25->fields.__7__wrap1.fields._current = (struct BattleSkillInfoData_o *)v22.fields._current;
    *(_OWORD *)&v9->fields.__7__wrap1.fields._list = v10;
    sub_1B88554(p__7__wrap1, 0, v12, v13);
    v2 = v25;
LABEL_12:
    v2->fields.__1__state = -3;
    if ( System_Collections_Generic_List_Enumerator_object___MoveNext(
           (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap1,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
    {
      current = v25->fields.__7__wrap1.fields._current;
      if ( !current )
        sub_1B8880C(v25, v14);
      v16 = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))current->klass->vtable._5_get_skillId.method)(
              v25->fields.__7__wrap1.fields._current,
              current->klass->vtable._6_get_IndividualityArray.methodPtr);
      skilllv = current->fields.skilllv;
      v23.fields._list = 0LL;
      v26 = (SimpleSkillData_o)&v23;
      SimpleSkillData___ctor(v26, v16, skilllv, 0LL);
      v18 = v25;
      list = v23.fields._list;
      LOBYTE(masterSkillInfo) = 1;
      v25->fields.__1__state = 1;
      v18->fields.__2__current = (struct SimpleSkillData_o)list;
    }
    else
    {
      AssumedSkillExtractor__EnumerateMasterSkill_d__2____m__Finally1(v25, v14);
      v20 = v25;
      LOBYTE(masterSkillInfo) = 0;
      v25->fields.__7__wrap1.fields._list = 0LL;
      *(_QWORD *)&v20->fields.__7__wrap1.fields._index = 0LL;
      v20->fields.__7__wrap1.fields._current = 0LL;
    }
  }
  return (char)masterSkillInfo;
}


System_Collections_Generic_IEnumerator_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateMasterSkill_d__2__System_Collections_Generic_IEnumerable_SimpleSkillData__GetEnumerator(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  int32_t v5; // w3
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v6; // x20
  struct BattleData_o *_3__data; // x1

  if ( (byte_4A5D2F7 & 1) == 0 )
  {
    sub_1B885B0(&AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
    byte_4A5D2F7 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v6 = this;
  }
  else
  {
    v6 = (AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *)sub_1B887FC(AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
  }
  _3__data = this->fields.__3__data;
  v6->fields.data = _3__data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.data, (int32_t)_3__data, v4, v5);
  return (System_Collections_Generic_IEnumerator_SimpleSkillData__o *)v6;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_AssumedSkillExtractor__EnumerateMasterSkill_d__2_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall AssumedSkillExtractor__EnumerateMasterSkill_d__2__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5D2F6 & 1) == 0 )
  {
    sub_1B885B0(&SimpleSkillData_TypeInfo);
    byte_4A5D2F6 = 1;
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
  if ( (byte_4A5D2F5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    byte_4A5D2F5 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
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
  int32_t v2; // w2
  int32_t v3; // w3
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *v4; // x19
  struct BattleEntity_o *battleEntity; // x8
  struct BattleInfoData_o *battleInfo; // x8
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  struct SimpleSkillData_array **v11; // x8
  struct SimpleSkillData_array *v12; // x1
  Il2CppObject *Master_object; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  struct BattleEntity_o *v18; // x8
  struct BattleInfoData_o *v19; // x8
  struct BattleUserServantData_array *userSvt; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  int v23; // w8
  int32_t _7__wrap7; // w8
  int32_t v25; // w8
  int32_t v26; // w8
  int32_t v27; // w8
  int32_t v28; // w8
  int32_t v29; // w8
  int32_t v30; // w8
  int32_t v31; // w8
  struct BattleUserServantData_o *v32; // x1
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o **p_userSvt_5__6; // x20
  struct BattleUserServantData_o *userSvt_5__6; // x8
  __int64 v35; // x21
  __int64 v36; // x22
  unsigned int v37; // w0
  int32_t userSvtId; // w8
  SimpleSkillData_array *SelfSkillArray; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  struct SimpleSkillData_array *_7__wrap6; // x9
  il2cpp_array_size_t v43; // w10
  SimpleSkillData_array *ClassPassiveSkillArray; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  struct SimpleSkillData_array *v47; // x9
  il2cpp_array_size_t v48; // w10
  SimpleSkillData_array *AddPassiveSkillArray; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  struct SimpleSkillData_array *v52; // x9
  il2cpp_array_size_t v53; // w10
  SimpleSkillData_array *AppendPassiveSkillArray; // x1
  int32_t v55; // w2
  int32_t v56; // w3
  struct SimpleSkillData_array *v57; // x9
  il2cpp_array_size_t v58; // w10
  int32_t v59; // w2
  int32_t v60; // w3
  struct BattleUserServantData_array *_7__wrap3; // x9
  int max_length; // w10
  bool result; // w0
  struct SimpleSkillData_o v64; // x8
  struct SimpleSkillData_o v65; // x8
  int v66; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  v4 = this;
  if ( (byte_4A5D2F8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_SimpleSkillData___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5D2F8 = 1;
  }
  switch ( v4->fields.__1__state )
  {
    case 0:
      battleEntity = v4->fields.battleEntity;
      v4->fields.__1__state = -1;
      if ( !battleEntity )
        return 0;
      battleInfo = battleEntity->fields.battleInfo;
      if ( !battleInfo || !battleInfo->fields.userSvt )
        return 0;
      v7 = Method_System_Array_Empty_SimpleSkillData___;
      v8 = *((_QWORD *)Method_System_Array_Empty_SimpleSkillData___ + 7);
      if ( !v8 )
      {
        sub_1BDA4E8(Method_System_Array_Empty_SimpleSkillData___);
        v8 = v7[7];
      }
      v9 = *(_QWORD *)(v8 + 16);
      if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
        v9 = sub_1BDA48C(v9);
      if ( !*(_DWORD *)(v9 + 224) )
        j_il2cpp_runtime_class_init_0(v9);
      v10 = *(_QWORD *)(v7[7] + 16LL);
      if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
        v10 = sub_1BDA48C(v10);
      v11 = *(struct SimpleSkillData_array ***)(v10 + 184);
      v12 = *v11;
      v4->fields._empty_5__2 = *v11;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._empty_5__2, (int32_t)v12, v2, v3);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
      v4->fields._svtMaster_5__3 = (struct ServantMaster_o *)Master_object;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._svtMaster_5__3, (int32_t)Master_object, v14, v15);
      v18 = v4->fields.battleEntity;
      if ( !v18 )
        goto LABEL_71;
      v19 = v18->fields.battleInfo;
      if ( !v19 )
        goto LABEL_71;
      userSvt = v19->fields.userSvt;
      v4->fields.__7__wrap3 = userSvt;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__7__wrap3, (int32_t)userSvt, v16, v17);
      v23 = 0;
      v4->fields.__7__wrap4 = 0;
      break;
    case 1:
      _7__wrap7 = v4->fields.__7__wrap7;
      v4->fields.__1__state = -1;
      v25 = _7__wrap7 + 1;
      v4->fields.__7__wrap7 = v25;
      goto LABEL_36;
    case 2:
      v26 = v4->fields.__7__wrap7;
      v4->fields.__1__state = -1;
      v27 = v26 + 1;
      v4->fields.__7__wrap7 = v27;
      goto LABEL_42;
    case 3:
      v28 = v4->fields.__7__wrap7;
      v4->fields.__1__state = -1;
      v29 = v28 + 1;
      v4->fields.__7__wrap7 = v29;
      goto LABEL_48;
    case 4:
      v30 = v4->fields.__7__wrap7;
      v4->fields.__1__state = -1;
      v31 = v30 + 1;
      v4->fields.__7__wrap7 = v31;
      goto LABEL_54;
    default:
      return 0;
  }
  while ( 1 )
  {
    this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)&v4->fields.__7__wrap3;
    _7__wrap3 = v4->fields.__7__wrap3;
    if ( !_7__wrap3 )
LABEL_71:
      sub_1B8880C(this, method);
    max_length = _7__wrap3->max_length;
    if ( v23 >= max_length )
      break;
    if ( v23 >= (unsigned int)max_length )
      goto LABEL_72;
    v32 = _7__wrap3->m_Items[v23];
    v4->fields._userSvt_5__6 = v32;
    p_userSvt_5__6 = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o **)&v4->fields._userSvt_5__6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._userSvt_5__6, (int32_t)v32, v21, v22);
    userSvt_5__6 = v4->fields._userSvt_5__6;
    if ( !userSvt_5__6 )
      goto LABEL_71;
    v36 = *(_QWORD *)&userSvt_5__6->fields.svtId.fields.currentCryptoKey;
    v35 = *(_QWORD *)&userSvt_5__6->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v67.fields.currentCryptoKey = v36;
    *(_QWORD *)&v67.fields.fakeValue = v35;
    v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v67, 0LL);
    userSvtId = v4->fields.userSvtId;
    method = (const MethodInfo *)v37;
    if ( (userSvtId & 0x80000000) != 0 || v37 == userSvtId )
    {
      this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v4->fields._svtMaster_5__3;
      if ( !this )
        goto LABEL_71;
      if ( DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (int32_t)method,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__) )
      {
        this = *p_userSvt_5__6;
        if ( !*p_userSvt_5__6 )
          goto LABEL_71;
        SelfSkillArray = BattleUserServantData__GetSelfSkillArray((BattleUserServantData_o *)this, 0LL);
        if ( !SelfSkillArray )
          SelfSkillArray = v4->fields._empty_5__2;
        v4->fields.__7__wrap6 = SelfSkillArray;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__7__wrap6, (int32_t)SelfSkillArray, v40, v41);
        v25 = 0;
        v4->fields.__7__wrap7 = 0;
LABEL_36:
        _7__wrap6 = v4->fields.__7__wrap6;
        if ( !_7__wrap6 )
          goto LABEL_71;
        v43 = _7__wrap6->max_length;
        if ( v25 < (int)v43 )
        {
          if ( v25 < v43 )
          {
            v64 = *(struct SimpleSkillData_o *)&_7__wrap6->m_Items[v25].fields.lv;
            result = 1;
            v4->fields.__1__state = 1;
            v4->fields.__2__current = v64;
            return result;
          }
LABEL_72:
          sub_1B88814(this, method);
        }
        v4->fields.__7__wrap6 = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__7__wrap6, 0, v2, v3);
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v4->fields._userSvt_5__6;
        if ( !this )
          goto LABEL_71;
        ClassPassiveSkillArray = BattleUserServantData__GetClassPassiveSkillArray((BattleUserServantData_o *)this, 0LL);
        if ( !ClassPassiveSkillArray )
          ClassPassiveSkillArray = v4->fields._empty_5__2;
        v4->fields.__7__wrap6 = ClassPassiveSkillArray;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&v4->fields.__7__wrap6,
          (int32_t)ClassPassiveSkillArray,
          v45,
          v46);
        v27 = 0;
        v4->fields.__7__wrap7 = 0;
LABEL_42:
        v47 = v4->fields.__7__wrap6;
        if ( !v47 )
          goto LABEL_71;
        v48 = v47->max_length;
        if ( v27 < (int)v48 )
        {
          if ( v27 >= v48 )
            goto LABEL_72;
          v65 = *(struct SimpleSkillData_o *)&v47->m_Items[v27].fields.lv;
          v66 = 2;
LABEL_70:
          v4->fields.__1__state = v66;
          v4->fields.__2__current = v65;
          return 1;
        }
        v4->fields.__7__wrap6 = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__7__wrap6, 0, v2, v3);
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v4->fields._userSvt_5__6;
        if ( !this )
          goto LABEL_71;
        AddPassiveSkillArray = BattleUserServantData__GetAddPassiveSkillArray((BattleUserServantData_o *)this, 0LL);
        if ( !AddPassiveSkillArray )
          AddPassiveSkillArray = v4->fields._empty_5__2;
        v4->fields.__7__wrap6 = AddPassiveSkillArray;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&v4->fields.__7__wrap6,
          (int32_t)AddPassiveSkillArray,
          v50,
          v51);
        v29 = 0;
        v4->fields.__7__wrap7 = 0;
LABEL_48:
        v52 = v4->fields.__7__wrap6;
        if ( !v52 )
          goto LABEL_71;
        v53 = v52->max_length;
        if ( v29 < (int)v53 )
        {
          if ( v29 >= v53 )
            goto LABEL_72;
          v65 = *(struct SimpleSkillData_o *)&v52->m_Items[v29].fields.lv;
          v66 = 3;
          goto LABEL_70;
        }
        v4->fields.__7__wrap6 = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__7__wrap6, 0, v2, v3);
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v4->fields._userSvt_5__6;
        if ( !this )
          goto LABEL_71;
        AppendPassiveSkillArray = BattleUserServantData__GetAppendPassiveSkillArray(
                                    (BattleUserServantData_o *)this,
                                    0LL);
        if ( !AppendPassiveSkillArray )
          AppendPassiveSkillArray = v4->fields._empty_5__2;
        v4->fields.__7__wrap6 = AppendPassiveSkillArray;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&v4->fields.__7__wrap6,
          (int32_t)AppendPassiveSkillArray,
          v55,
          v56);
        v31 = 0;
        v4->fields.__7__wrap7 = 0;
LABEL_54:
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)&v4->fields.__7__wrap6;
        v57 = v4->fields.__7__wrap6;
        if ( !v57 )
          goto LABEL_71;
        v58 = v57->max_length;
        if ( v31 < (int)v58 )
        {
          if ( v31 >= v58 )
            goto LABEL_72;
          v65 = *(struct SimpleSkillData_o *)&v57->m_Items[v31].fields.lv;
          v66 = 4;
          goto LABEL_70;
        }
        v4->fields.__7__wrap6 = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)this, 0, v2, v3);
        v4->fields._userSvt_5__6 = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._userSvt_5__6, 0, v59, v60);
      }
    }
    v23 = v4->fields.__7__wrap4 + 1;
    v4->fields.__7__wrap4 = v23;
  }
  this->klass = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)this, 0, v21, v22);
  return 0;
}


System_Collections_Generic_IEnumerator_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_Collections_Generic_IEnumerable_SimpleSkillData__GetEnumerator(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  int32_t v5; // w3
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *v6; // x20
  struct BattleEntity_o *_3__battleEntity; // x1
  System_Collections_Generic_IEnumerator_SimpleSkillData__o *result; // x0

  if ( (byte_4A5D2FA & 1) == 0 )
  {
    sub_1B885B0(&AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
    byte_4A5D2FA = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v6 = this;
  }
  else
  {
    v6 = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)sub_1B887FC(AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
  }
  _3__battleEntity = this->fields.__3__battleEntity;
  v6->fields.battleEntity = _3__battleEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.battleEntity, (int32_t)_3__battleEntity, v4, v5);
  result = (System_Collections_Generic_IEnumerator_SimpleSkillData__o *)v6;
  v6->fields.userSvtId = this->fields.__3__userSvtId;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5D2F9 & 1) == 0 )
  {
    sub_1B885B0(&SimpleSkillData_TypeInfo);
    byte_4A5D2F9 = 1;
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