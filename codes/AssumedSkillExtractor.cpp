System_Collections_Generic_IEnumerable_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData(
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4AB7EFC & 1) == 0 )
  {
    sub_1BAB41C(&AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo, method);
    byte_4AB7EFC = 1;
  }
  v3 = sub_1BAB668(AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 28) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 40) = battleEntity;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v3 + 40), (int32_t)battleEntity, v4, v5);
  return (System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v3;
}


System_Collections_Generic_IEnumerable_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateMasterSkill(
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4AB7EFD & 1) == 0 )
  {
    sub_1BAB41C(&AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo, method);
    byte_4AB7EFD = 1;
  }
  v3 = sub_1BAB668(AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 28) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 40) = data;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v3 + 40), (int32_t)data, v4, v5);
  return (System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v3;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_SimpleSkillData__o *__fastcall AssumedSkillExtractor__EnumerateSvtSimpleSkillData(
        BattleEntity_o *battleEntity,
        int32_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4AB7EFB & 1) == 0 )
  {
    sub_1BAB41C(&AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo, *(_QWORD *)&userSvtId);
    byte_4AB7EFB = 1;
  }
  v5 = sub_1BAB668(AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 28) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v5 + 40) = battleEntity;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)battleEntity, v6, v7);
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
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct BattleEntity_o *battleEntity; // x8
  Il2CppObject *Master_object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  CommandCodeSkillMaster_o *p__7__wrap2; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  struct BattleEntity_o *v14; // x8
  struct CommandCodeInfo_array *userCommandCode; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w8
  int32_t _7__wrap5; // w8
  int32_t v20; // w8
  CommandCodeInfo_o *v21; // x8
  struct CommandCodeSkillEntity_array *CommandCodeSkillList; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  struct CommandCodeSkillEntity_array *_7__wrap4; // x9
  il2cpp_array_size_t v26; // w10
  struct CommandCodeInfo_array *_7__wrap2; // x9
  il2cpp_array_size_t max_length; // w10
  bool v29; // w20
  CommandCodeSkillEntity_o *v30; // x8
  int32_t skillId; // w1
  struct SimpleSkillData_o v32; // x8
  struct SimpleSkillData_o v34; // [xsp+8h] [xbp-18h] BYREF
  SimpleSkillData_o v35; // 0:x0.8

  if ( (byte_4AB7EFE & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_CommandCodeSkillMaster___, method);
    sub_1BAB41C(&DataManager_TypeInfo, v5);
    byte_4AB7EFE = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _7__wrap5 = this->fields.__7__wrap5;
    this->fields.__1__state = -1;
    v20 = _7__wrap5 + 1;
    this->fields.__7__wrap5 = v20;
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_CommandCodeSkillMaster___);
        this->fields._commandCodeMaster_5__2 = (struct CommandCodeSkillMaster_o *)Master_object;
        sub_1BAB3C0(
          (ServantStatusBattleListViewItem_o *)&this->fields._commandCodeMaster_5__2,
          (int32_t)Master_object,
          v9,
          v10);
        v14 = this->fields.battleEntity;
        if ( !v14 )
          goto LABEL_27;
        userCommandCode = v14->fields.userCommandCode;
        this->fields.__7__wrap2 = userCommandCode;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.__7__wrap2, (int32_t)userCommandCode, v12, v13);
        v18 = 0;
        for ( this->fields.__7__wrap3 = 0; ; this->fields.__7__wrap3 = v18 )
        {
          p__7__wrap2 = (CommandCodeSkillMaster_o *)&this->fields.__7__wrap2;
          _7__wrap2 = this->fields.__7__wrap2;
          if ( !_7__wrap2 )
            goto LABEL_27;
          max_length = _7__wrap2->max_length;
          if ( v18 >= (int)max_length )
            break;
          if ( v18 >= max_length )
            goto LABEL_28;
          v21 = _7__wrap2->m_Items[v18];
          if ( !v21 )
            goto LABEL_27;
          p__7__wrap2 = this->fields._commandCodeMaster_5__2;
          if ( !p__7__wrap2 )
            goto LABEL_27;
          CommandCodeSkillList = CommandCodeSkillMaster__getCommandCodeSkillList(
                                   p__7__wrap2,
                                   v21->fields.commandCodeId,
                                   0LL);
          this->fields.__7__wrap4 = CommandCodeSkillList;
          sub_1BAB3C0(
            (ServantStatusBattleListViewItem_o *)&this->fields.__7__wrap4,
            (int32_t)CommandCodeSkillList,
            v23,
            v24);
          v20 = 0;
          this->fields.__7__wrap5 = 0;
LABEL_16:
          p__7__wrap2 = (CommandCodeSkillMaster_o *)&this->fields.__7__wrap4;
          _7__wrap4 = this->fields.__7__wrap4;
          if ( !_7__wrap4 )
            goto LABEL_27;
          v26 = _7__wrap4->max_length;
          if ( v20 < (int)v26 )
          {
            if ( v20 >= v26 )
LABEL_28:
              sub_1BAB680(p__7__wrap2, method);
            v30 = _7__wrap4->m_Items[v20];
            if ( v30 )
            {
              skillId = v30->fields.skillId;
              v35 = (SimpleSkillData_o)&v34;
              v34 = 0LL;
              v29 = 1;
              SimpleSkillData___ctor(v35, skillId, 1, 0LL);
              v32 = v34;
              this->fields.__1__state = 1;
              this->fields.__2__current = v32;
              return v29;
            }
LABEL_27:
            sub_1BAB678(p__7__wrap2, method);
          }
          this->fields.__7__wrap4 = 0LL;
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p__7__wrap2, 0, v2, v3);
          v18 = this->fields.__7__wrap3 + 1;
        }
        p__7__wrap2->klass = 0LL;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p__7__wrap2, 0, v16, v17);
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

  if ( (byte_4AB7F00 & 1) == 0 )
  {
    sub_1BAB41C(&AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo, method);
    byte_4AB7F00 = 1;
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
    v6 = (AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *)sub_1BAB668(AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
  }
  _3__battleEntity = this->fields.__3__battleEntity;
  v6->fields.battleEntity = _3__battleEntity;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v6->fields.battleEntity, (int32_t)_3__battleEntity, v4, v5);
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

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
}


Il2CppObject *__fastcall AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4AB7EFF & 1) == 0 )
  {
    sub_1BAB41C(&SimpleSkillData_TypeInfo, method);
    byte_4AB7EFF = 1;
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
  ServantStatusBattleListViewItem_o *p__7__wrap1; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x1
  struct BattleSkillInfoData_o *current; // x19
  int32_t v19; // w1
  int32_t skilllv; // w2
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v21; // x8
  struct System_Collections_Generic_List_T__o *list; // x9
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v23; // x8
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-50h] BYREF
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o **v27; // [xsp+48h] [xbp-28h]
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v28; // [xsp+58h] [xbp-18h] BYREF
  SimpleSkillData_o v29; // 0:x0.8

  v28 = this;
  v2 = this;
  if ( (byte_4AB7F01 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__, v4);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v5);
    byte_4AB7F01 = 1;
  }
  v27 = &v28;
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
  v11 = v28->fields.data;
  if ( !v11 )
    sub_1BAB678(v8, v9);
  masterSkillInfo = (System_Collections_Generic_List_object__o *)v11->fields.masterSkillInfo;
  if ( masterSkillInfo )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      &v25,
      masterSkillInfo,
      (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    v12 = v28;
    v13 = *(_OWORD *)&v25.fields._list;
    p__7__wrap1 = (ServantStatusBattleListViewItem_o *)&v28->fields.__7__wrap1;
    v26 = v25;
    v28->fields.__7__wrap1.fields._current = (struct BattleSkillInfoData_o *)v25.fields._current;
    *(_OWORD *)&v12->fields.__7__wrap1.fields._list = v13;
    sub_1BAB3C0(p__7__wrap1, 0, v15, v16);
    v2 = v28;
LABEL_12:
    v2->fields.__1__state = -3;
    if ( System_Collections_Generic_List_Enumerator_object___MoveNext(
           (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap1,
           (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
    {
      current = v28->fields.__7__wrap1.fields._current;
      if ( !current )
        sub_1BAB678(v28, v17);
      v19 = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))current->klass->vtable._5_get_skillId.method)(
              v28->fields.__7__wrap1.fields._current,
              current->klass->vtable._6_get_IndividualityArray.methodPtr);
      skilllv = current->fields.skilllv;
      v26.fields._list = 0LL;
      v29 = (SimpleSkillData_o)&v26;
      SimpleSkillData___ctor(v29, v19, skilllv, 0LL);
      v21 = v28;
      list = v26.fields._list;
      LOBYTE(masterSkillInfo) = 1;
      v28->fields.__1__state = 1;
      v21->fields.__2__current = (struct SimpleSkillData_o)list;
    }
    else
    {
      AssumedSkillExtractor__EnumerateMasterSkill_d__2____m__Finally1(v28, v17);
      v23 = v28;
      LOBYTE(masterSkillInfo) = 0;
      v28->fields.__7__wrap1.fields._list = 0LL;
      *(_QWORD *)&v23->fields.__7__wrap1.fields._index = 0LL;
      v23->fields.__7__wrap1.fields._current = 0LL;
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

  if ( (byte_4AB7F04 & 1) == 0 )
  {
    sub_1BAB41C(&AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo, method);
    byte_4AB7F04 = 1;
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
    v6 = (AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *)sub_1BAB668(AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
  }
  _3__data = this->fields.__3__data;
  v6->fields.data = _3__data;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v6->fields.data, (int32_t)_3__data, v4, v5);
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

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_AssumedSkillExtractor__EnumerateMasterSkill_d__2_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
}


Il2CppObject *__fastcall AssumedSkillExtractor__EnumerateMasterSkill_d__2__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4AB7F03 & 1) == 0 )
  {
    sub_1BAB41C(&SimpleSkillData_TypeInfo, method);
    byte_4AB7F03 = 1;
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
  if ( (byte_4AB7F02 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__, method);
    byte_4AB7F02 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
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
  long double v4; // q0
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct BattleEntity_o *battleEntity; // x8
  struct BattleInfoData_o *battleInfo; // x8
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0
  struct SimpleSkillData_array **v16; // x8
  struct SimpleSkillData_array *v17; // x1
  Il2CppObject *Master_object; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  struct BattleEntity_o *v23; // x8
  struct BattleInfoData_o *v24; // x8
  struct BattleUserServantData_array *userSvt; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  int v28; // w8
  int32_t _7__wrap7; // w8
  int32_t v30; // w8
  int32_t v31; // w8
  int32_t v32; // w8
  int32_t v33; // w8
  int32_t v34; // w8
  int32_t v35; // w8
  int32_t v36; // w8
  struct BattleUserServantData_o *v37; // x1
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o **p_userSvt_5__6; // x20
  struct BattleUserServantData_o *userSvt_5__6; // x8
  __int64 v40; // x21
  __int64 v41; // x22
  unsigned int v42; // w0
  int32_t userSvtId; // w8
  SimpleSkillData_array *SelfSkillArray; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  struct SimpleSkillData_array *_7__wrap6; // x9
  il2cpp_array_size_t v48; // w10
  SimpleSkillData_array *ClassPassiveSkillArray; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  struct SimpleSkillData_array *v52; // x9
  il2cpp_array_size_t v53; // w10
  SimpleSkillData_array *AddPassiveSkillArray; // x1
  int32_t v55; // w2
  int32_t v56; // w3
  struct SimpleSkillData_array *v57; // x9
  il2cpp_array_size_t v58; // w10
  SimpleSkillData_array *AppendPassiveSkillArray; // x1
  int32_t v60; // w2
  int32_t v61; // w3
  struct SimpleSkillData_array *v62; // x9
  il2cpp_array_size_t v63; // w10
  int32_t v64; // w2
  int32_t v65; // w3
  struct BattleUserServantData_array *_7__wrap3; // x9
  int max_length; // w10
  bool result; // w0
  struct SimpleSkillData_o v69; // x8
  struct SimpleSkillData_o v70; // x8
  int v71; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  v5 = this;
  if ( (byte_4AB7F05 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Array_Empty_SimpleSkillData___, method);
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1BAB41C(&DataManager_TypeInfo, v7);
    sub_1BAB41C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)sub_1BAB41C(
                                                                          &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                                          v9);
    byte_4AB7F05 = 1;
  }
  switch ( v5->fields.__1__state )
  {
    case 0:
      battleEntity = v5->fields.battleEntity;
      v5->fields.__1__state = -1;
      if ( !battleEntity )
        return 0;
      battleInfo = battleEntity->fields.battleInfo;
      if ( !battleInfo || !battleInfo->fields.userSvt )
        return 0;
      v12 = Method_System_Array_Empty_SimpleSkillData___;
      v13 = *((_QWORD *)Method_System_Array_Empty_SimpleSkillData___ + 7);
      if ( !v13 )
      {
        sub_1BFD354(Method_System_Array_Empty_SimpleSkillData___);
        v13 = v12[7];
      }
      v14 = *(_QWORD *)(v13 + 16);
      if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
        v14 = sub_1BFD2F8(v4);
      if ( !*(_DWORD *)(v14 + 224) )
        *(__n128 *)&v4 = j_il2cpp_runtime_class_init_0(v14);
      v15 = *(_QWORD *)(v12[7] + 16LL);
      if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
        v15 = sub_1BFD2F8(v4);
      v16 = *(struct SimpleSkillData_array ***)(v15 + 184);
      v17 = *v16;
      v5->fields._empty_5__2 = *v16;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v5->fields._empty_5__2, (int32_t)v17, v2, v3);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantMaster___);
      v5->fields._svtMaster_5__3 = (struct ServantMaster_o *)Master_object;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v5->fields._svtMaster_5__3, (int32_t)Master_object, v19, v20);
      v23 = v5->fields.battleEntity;
      if ( !v23 )
        goto LABEL_71;
      v24 = v23->fields.battleInfo;
      if ( !v24 )
        goto LABEL_71;
      userSvt = v24->fields.userSvt;
      v5->fields.__7__wrap3 = userSvt;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v5->fields.__7__wrap3, (int32_t)userSvt, v21, v22);
      v28 = 0;
      v5->fields.__7__wrap4 = 0;
      break;
    case 1:
      _7__wrap7 = v5->fields.__7__wrap7;
      v5->fields.__1__state = -1;
      v30 = _7__wrap7 + 1;
      v5->fields.__7__wrap7 = v30;
      goto LABEL_36;
    case 2:
      v31 = v5->fields.__7__wrap7;
      v5->fields.__1__state = -1;
      v32 = v31 + 1;
      v5->fields.__7__wrap7 = v32;
      goto LABEL_42;
    case 3:
      v33 = v5->fields.__7__wrap7;
      v5->fields.__1__state = -1;
      v34 = v33 + 1;
      v5->fields.__7__wrap7 = v34;
      goto LABEL_48;
    case 4:
      v35 = v5->fields.__7__wrap7;
      v5->fields.__1__state = -1;
      v36 = v35 + 1;
      v5->fields.__7__wrap7 = v36;
      goto LABEL_54;
    default:
      return 0;
  }
  while ( 1 )
  {
    this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)&v5->fields.__7__wrap3;
    _7__wrap3 = v5->fields.__7__wrap3;
    if ( !_7__wrap3 )
LABEL_71:
      sub_1BAB678(this, method);
    max_length = _7__wrap3->max_length;
    if ( v28 >= max_length )
      break;
    if ( v28 >= (unsigned int)max_length )
      goto LABEL_72;
    v37 = _7__wrap3->m_Items[v28];
    v5->fields._userSvt_5__6 = v37;
    p_userSvt_5__6 = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o **)&v5->fields._userSvt_5__6;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v5->fields._userSvt_5__6, (int32_t)v37, v26, v27);
    userSvt_5__6 = v5->fields._userSvt_5__6;
    if ( !userSvt_5__6 )
      goto LABEL_71;
    v41 = *(_QWORD *)&userSvt_5__6->fields.svtId.fields.currentCryptoKey;
    v40 = *(_QWORD *)&userSvt_5__6->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v72.fields.currentCryptoKey = v41;
    *(_QWORD *)&v72.fields.fakeValue = v40;
    v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v72, 0LL);
    userSvtId = v5->fields.userSvtId;
    method = (const MethodInfo *)v42;
    if ( (userSvtId & 0x80000000) != 0 || v42 == userSvtId )
    {
      this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v5->fields._svtMaster_5__3;
      if ( !this )
        goto LABEL_71;
      if ( DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (int32_t)method,
             (const MethodInfo_3163D90 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__) )
      {
        this = *p_userSvt_5__6;
        if ( !*p_userSvt_5__6 )
          goto LABEL_71;
        SelfSkillArray = BattleUserServantData__GetSelfSkillArray((BattleUserServantData_o *)this, 0LL);
        if ( !SelfSkillArray )
          SelfSkillArray = v5->fields._empty_5__2;
        v5->fields.__7__wrap6 = SelfSkillArray;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v5->fields.__7__wrap6, (int32_t)SelfSkillArray, v45, v46);
        v30 = 0;
        v5->fields.__7__wrap7 = 0;
LABEL_36:
        _7__wrap6 = v5->fields.__7__wrap6;
        if ( !_7__wrap6 )
          goto LABEL_71;
        v48 = _7__wrap6->max_length;
        if ( v30 < (int)v48 )
        {
          if ( v30 < v48 )
          {
            v69 = *(struct SimpleSkillData_o *)&_7__wrap6->m_Items[v30].fields.lv;
            result = 1;
            v5->fields.__1__state = 1;
            v5->fields.__2__current = v69;
            return result;
          }
LABEL_72:
          sub_1BAB680(this, method);
        }
        v5->fields.__7__wrap6 = 0LL;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v5->fields.__7__wrap6, 0, v2, v3);
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v5->fields._userSvt_5__6;
        if ( !this )
          goto LABEL_71;
        ClassPassiveSkillArray = BattleUserServantData__GetClassPassiveSkillArray((BattleUserServantData_o *)this, 0LL);
        if ( !ClassPassiveSkillArray )
          ClassPassiveSkillArray = v5->fields._empty_5__2;
        v5->fields.__7__wrap6 = ClassPassiveSkillArray;
        sub_1BAB3C0(
          (ServantStatusBattleListViewItem_o *)&v5->fields.__7__wrap6,
          (int32_t)ClassPassiveSkillArray,
          v50,
          v51);
        v32 = 0;
        v5->fields.__7__wrap7 = 0;
LABEL_42:
        v52 = v5->fields.__7__wrap6;
        if ( !v52 )
          goto LABEL_71;
        v53 = v52->max_length;
        if ( v32 < (int)v53 )
        {
          if ( v32 >= v53 )
            goto LABEL_72;
          v70 = *(struct SimpleSkillData_o *)&v52->m_Items[v32].fields.lv;
          v71 = 2;
LABEL_70:
          v5->fields.__1__state = v71;
          v5->fields.__2__current = v70;
          return 1;
        }
        v5->fields.__7__wrap6 = 0LL;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v5->fields.__7__wrap6, 0, v2, v3);
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v5->fields._userSvt_5__6;
        if ( !this )
          goto LABEL_71;
        AddPassiveSkillArray = BattleUserServantData__GetAddPassiveSkillArray((BattleUserServantData_o *)this, 0LL);
        if ( !AddPassiveSkillArray )
          AddPassiveSkillArray = v5->fields._empty_5__2;
        v5->fields.__7__wrap6 = AddPassiveSkillArray;
        sub_1BAB3C0(
          (ServantStatusBattleListViewItem_o *)&v5->fields.__7__wrap6,
          (int32_t)AddPassiveSkillArray,
          v55,
          v56);
        v34 = 0;
        v5->fields.__7__wrap7 = 0;
LABEL_48:
        v57 = v5->fields.__7__wrap6;
        if ( !v57 )
          goto LABEL_71;
        v58 = v57->max_length;
        if ( v34 < (int)v58 )
        {
          if ( v34 >= v58 )
            goto LABEL_72;
          v70 = *(struct SimpleSkillData_o *)&v57->m_Items[v34].fields.lv;
          v71 = 3;
          goto LABEL_70;
        }
        v5->fields.__7__wrap6 = 0LL;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v5->fields.__7__wrap6, 0, v2, v3);
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v5->fields._userSvt_5__6;
        if ( !this )
          goto LABEL_71;
        AppendPassiveSkillArray = BattleUserServantData__GetAppendPassiveSkillArray(
                                    (BattleUserServantData_o *)this,
                                    0LL);
        if ( !AppendPassiveSkillArray )
          AppendPassiveSkillArray = v5->fields._empty_5__2;
        v5->fields.__7__wrap6 = AppendPassiveSkillArray;
        sub_1BAB3C0(
          (ServantStatusBattleListViewItem_o *)&v5->fields.__7__wrap6,
          (int32_t)AppendPassiveSkillArray,
          v60,
          v61);
        v36 = 0;
        v5->fields.__7__wrap7 = 0;
LABEL_54:
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)&v5->fields.__7__wrap6;
        v62 = v5->fields.__7__wrap6;
        if ( !v62 )
          goto LABEL_71;
        v63 = v62->max_length;
        if ( v36 < (int)v63 )
        {
          if ( v36 >= v63 )
            goto LABEL_72;
          v70 = *(struct SimpleSkillData_o *)&v62->m_Items[v36].fields.lv;
          v71 = 4;
          goto LABEL_70;
        }
        v5->fields.__7__wrap6 = 0LL;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)this, 0, v2, v3);
        v5->fields._userSvt_5__6 = 0LL;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v5->fields._userSvt_5__6, 0, v64, v65);
      }
    }
    v28 = v5->fields.__7__wrap4 + 1;
    v5->fields.__7__wrap4 = v28;
  }
  this->klass = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)this, 0, v26, v27);
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

  if ( (byte_4AB7F07 & 1) == 0 )
  {
    sub_1BAB41C(&AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo, method);
    byte_4AB7F07 = 1;
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
    v6 = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)sub_1BAB668(AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
  }
  _3__battleEntity = this->fields.__3__battleEntity;
  v6->fields.battleEntity = _3__battleEntity;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v6->fields.battleEntity, (int32_t)_3__battleEntity, v4, v5);
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

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
}


Il2CppObject *__fastcall AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4AB7F06 & 1) == 0 )
  {
    sub_1BAB41C(&SimpleSkillData_TypeInfo, method);
    byte_4AB7F06 = 1;
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