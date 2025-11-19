System_Collections_Generic_IEnumerable_SimpleSkillData__o *AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData(
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB87DE & 1) == 0 )
  {
    sub_1C6BA08(&AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
    byte_4CB87DE = 1;
  }
  v3 = sub_1C6BC54(AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 28) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = battleEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 40), (int32_t)battleEntity, v4, v5);
  return (System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v3;
}


System_Collections_Generic_IEnumerable_SimpleSkillData__o *AssumedSkillExtractor__EnumerateMasterSkill(
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB87DF & 1) == 0 )
  {
    sub_1C6BA08(&AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
    byte_4CB87DF = 1;
  }
  v3 = sub_1C6BC54(AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 28) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = data;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 40), (int32_t)data, v4, v5);
  return (System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v3;
}


System_Collections_Generic_IEnumerable_SimpleSkillData__o *AssumedSkillExtractor__EnumerateSvtSimpleSkillData(
        BattleEntity_o *battleEntity,
        int32_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4CB87DD & 1) == 0 )
  {
    sub_1C6BA08(&AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
    byte_4CB87DD = 1;
  }
  v5 = sub_1C6BC54(AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 28) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v5 + 40) = battleEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)battleEntity, v6, v7);
  *(_DWORD *)(v5 + 52) = userSvtId;
  return (System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v5;
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t _1__state; // w8
  struct BattleEntity_o *battleEntity; // x8
  Il2CppObject *Master_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  CommandCodeSkillMaster_o *p__7__wrap2; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct BattleEntity_o *v13; // x8
  struct CommandCodeInfo_array *userCommandCode; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w8
  int32_t _7__wrap5; // w8
  int32_t v19; // w8
  CommandCodeInfo_o *v20; // x8
  struct CommandCodeSkillEntity_array *CommandCodeSkillList; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct CommandCodeSkillEntity_array *_7__wrap4; // x9
  int32_t v25; // w10
  struct CommandCodeInfo_array *_7__wrap2; // x9
  int32_t max_length; // w10
  bool v28; // w20
  CommandCodeSkillEntity_o *v29; // x8
  int32_t skillId; // w1
  SimpleSkillData_o v31; // x0
  struct SimpleSkillData_o v32; // x8
  struct SimpleSkillData_o v34; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4CB87E0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_CommandCodeSkillMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    byte_4CB87E0 = 1;
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_CommandCodeSkillMaster___);
        this->fields._commandCodeMaster_5__2 = (struct CommandCodeSkillMaster_o *)Master_object;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._commandCodeMaster_5__2, (int32_t)Master_object, v8, v9);
        v13 = this->fields.battleEntity;
        if ( !v13 )
          goto LABEL_27;
        userCommandCode = v13->fields.userCommandCode;
        this->fields.__7__wrap2 = userCommandCode;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__7__wrap2, (int32_t)userCommandCode, v11, v12);
        v17 = 0;
        for ( this->fields.__7__wrap3 = 0; ; this->fields.__7__wrap3 = v17 )
        {
          p__7__wrap2 = (CommandCodeSkillMaster_o *)&this->fields.__7__wrap2;
          _7__wrap2 = this->fields.__7__wrap2;
          if ( !_7__wrap2 )
            goto LABEL_27;
          max_length = _7__wrap2->max_length;
          if ( v17 >= max_length )
            break;
          if ( v17 >= (unsigned int)max_length )
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
                                   0);
          this->fields.__7__wrap4 = CommandCodeSkillList;
          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__7__wrap4, (int32_t)CommandCodeSkillList, v22, v23);
          v19 = 0;
          this->fields.__7__wrap5 = 0;
LABEL_16:
          p__7__wrap2 = (CommandCodeSkillMaster_o *)&this->fields.__7__wrap4;
          _7__wrap4 = this->fields.__7__wrap4;
          if ( !_7__wrap4 )
            goto LABEL_27;
          v25 = _7__wrap4->max_length;
          if ( v19 < v25 )
          {
            if ( v19 >= (unsigned int)v25 )
LABEL_28:
              sub_1C6BC68(p__7__wrap2);
            v29 = _7__wrap4->m_Items[v19];
            if ( v29 )
            {
              skillId = v29->fields.skillId;
              v31 = (SimpleSkillData_o)&v34;
              v34 = 0;
              v28 = 1;
              SimpleSkillData___ctor(v31, skillId, 1, 0);
              v32 = v34;
              this->fields.__1__state = 1;
              this->fields.__2__current = v32;
              return v28;
            }
LABEL_27:
            sub_1C6BC60(p__7__wrap2, method);
          }
          this->fields.__7__wrap4 = 0;
          sub_1C6B9AC((CGThumbnailListItem_o *)p__7__wrap2, 0, v2, v3);
          v17 = this->fields.__7__wrap3 + 1;
        }
        p__7__wrap2->klass = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)p__7__wrap2, 0, v15, v16);
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *v6; // x20
  struct BattleEntity_o *_3__battleEntity; // x1

  if ( (byte_4CB87E2 & 1) == 0 )
  {
    sub_1C6BA08(&AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
    byte_4CB87E2 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v6 = this;
  }
  else
  {
    v6 = (AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *)sub_1C6BC54(AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  _3__battleEntity = this->fields.__3__battleEntity;
  v6->fields.battleEntity = _3__battleEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v6->fields.battleEntity, (int32_t)_3__battleEntity, v4, v5);
  return (System_Collections_Generic_IEnumerator_SimpleSkillData__o *)v6;
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *this,
        const MethodInfo *method)
{
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB87E1 & 1) == 0 )
  {
    sub_1C6BA08(&SimpleSkillData_TypeInfo);
    byte_4CB87E1 = 1;
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
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *masterSkillInfo; // x0
  struct BattleData_o *v8; // x8
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v9; // x9
  __int128 v10; // q0
  struct System_Collections_Generic_List_Enumerator_BattleSkillInfoData__o *p__7__wrap1; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  struct BattleSkillInfoData_o *current; // x19
  int32_t v16; // w1
  int32_t skilllv; // w2
  SimpleSkillData_o v18; // x0
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v19; // x8
  struct System_Collections_Generic_List_T__o *list; // x9
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v21; // x8
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+20h] [xbp-50h] BYREF
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o **v25; // [xsp+48h] [xbp-28h]
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v26; // [xsp+58h] [xbp-18h] BYREF

  v26 = this;
  v2 = this;
  if ( (byte_4CB87E3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB87E3 = 1;
  }
  v25 = &v26;
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
    goto LABEL_12;
  if ( _1__state )
    goto LABEL_8;
  v2->fields.__1__state = -1;
  data = (UnityEngine_Object_o *)v2->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality(data, 0, 0);
  if ( v5 )
  {
LABEL_8:
    LOBYTE(masterSkillInfo) = 0;
    return (char)masterSkillInfo;
  }
  v8 = v26->fields.data;
  if ( !v8 )
    sub_1C6BC60(v5, v6);
  masterSkillInfo = (System_Collections_Generic_List_object__o *)v8->fields.masterSkillInfo;
  if ( masterSkillInfo )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      &v23,
      masterSkillInfo,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    v9 = v26;
    v10 = *(_OWORD *)&v23.fields._list;
    p__7__wrap1 = &v26->fields.__7__wrap1;
    v24 = v23;
    v26->fields.__7__wrap1.fields._current = (struct BattleSkillInfoData_o *)v23.fields._current;
    *(_OWORD *)&v9->fields.__7__wrap1.fields._list = v10;
    sub_1C6B9AC((CGThumbnailListItem_o *)p__7__wrap1, 0, v12, v13);
    v2 = v26;
LABEL_12:
    v2->fields.__1__state = -3;
    if ( System_Collections_Generic_List_Enumerator_object___MoveNext(
           (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap1,
           (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
    {
      current = v26->fields.__7__wrap1.fields._current;
      if ( !current )
        sub_1C6BC60(v26, v14);
      v16 = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, const MethodInfo *))current->klass->vtable._5_get_skillId.methodPtr)(
              v26->fields.__7__wrap1.fields._current,
              current->klass->vtable._5_get_skillId.method);
      skilllv = current->fields.skilllv;
      v24.fields._list = 0;
      v18 = (SimpleSkillData_o)&v24;
      SimpleSkillData___ctor(v18, v16, skilllv, 0);
      v19 = v26;
      list = v24.fields._list;
      LOBYTE(masterSkillInfo) = 1;
      v26->fields.__1__state = 1;
      v19->fields.__2__current = (struct SimpleSkillData_o)list;
    }
    else
    {
      AssumedSkillExtractor__EnumerateMasterSkill_d__2____m__Finally1(v26, v14);
      v21 = v26;
      LOBYTE(masterSkillInfo) = 0;
      v26->fields.__7__wrap1.fields._list = 0;
      *(_QWORD *)&v21->fields.__7__wrap1.fields._index = 0;
      v21->fields.__7__wrap1.fields._current = 0;
    }
  }
  return (char)masterSkillInfo;
}


System_Collections_Generic_IEnumerator_SimpleSkillData__o *AssumedSkillExtractor__EnumerateMasterSkill_d__2__System_Collections_Generic_IEnumerable_SimpleSkillData__GetEnumerator(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v6; // x20
  struct BattleData_o *_3__data; // x1

  if ( (byte_4CB87E6 & 1) == 0 )
  {
    sub_1C6BA08(&AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
    byte_4CB87E6 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v6 = this;
  }
  else
  {
    v6 = (AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *)sub_1C6BC54(AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  _3__data = this->fields.__3__data;
  v6->fields.data = _3__data;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v6->fields.data, (int32_t)_3__data, v4, v5);
  return (System_Collections_Generic_IEnumerator_SimpleSkillData__o *)v6;
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_AssumedSkillExtractor__EnumerateMasterSkill_d__2_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *AssumedSkillExtractor__EnumerateMasterSkill_d__2__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        const MethodInfo *method)
{
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB87E5 & 1) == 0 )
  {
    sub_1C6BA08(&SimpleSkillData_TypeInfo);
    byte_4CB87E5 = 1;
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
  if ( (byte_4CB87E4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    byte_4CB87E4 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  long double inited; // q0
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *v5; // x19
  struct BattleEntity_o *battleEntity; // x8
  struct BattleInfoData_o *battleInfo; // x8
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  struct SimpleSkillData_array **v12; // x8
  struct SimpleSkillData_array *v13; // x1
  Il2CppObject *Master_object; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct BattleEntity_o *v19; // x8
  struct BattleInfoData_o *v20; // x8
  struct BattleUserServantData_array *userSvt; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int v24; // w8
  int32_t _7__wrap7; // w8
  int32_t v26; // w8
  int32_t v27; // w8
  int32_t v28; // w8
  int32_t v29; // w8
  int32_t v30; // w8
  int32_t v31; // w8
  int32_t v32; // w8
  struct BattleUserServantData_o *v33; // x1
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o **p_userSvt_5__6; // x20
  struct BattleUserServantData_o *userSvt_5__6; // x8
  __int64 v36; // x21
  __int64 v37; // x22
  unsigned int v38; // w0
  int32_t userSvtId; // w8
  SimpleSkillData_array *SelfSkillArray; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct SimpleSkillData_array *_7__wrap6; // x9
  int32_t v44; // w10
  SimpleSkillData_array *ClassPassiveSkillArray; // x1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct SimpleSkillData_array *v48; // x9
  int32_t v49; // w10
  SimpleSkillData_array *AddPassiveSkillArray; // x1
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct SimpleSkillData_array *v53; // x9
  int32_t v54; // w10
  SimpleSkillData_array *AppendPassiveSkillArray; // x1
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  struct SimpleSkillData_array *v58; // x9
  int32_t v59; // w10
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct BattleUserServantData_array *_7__wrap3; // x9
  int max_length; // w10
  bool result; // w0
  struct SimpleSkillData_o v65; // x8
  struct SimpleSkillData_o v66; // x8
  int v67; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  v5 = this;
  if ( (byte_4CB87E7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_SimpleSkillData___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB87E7 = 1;
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
      v8 = Method_System_Array_Empty_SimpleSkillData___;
      v9 = *((_QWORD *)Method_System_Array_Empty_SimpleSkillData___ + 7);
      if ( !v9 )
      {
        sub_1C41AF8(Method_System_Array_Empty_SimpleSkillData___);
        v9 = v8[7];
      }
      v10 = *(_QWORD *)(v9 + 16);
      if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
        v10 = sub_1C41A9C(inited);
      if ( !*(_DWORD *)(v10 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v10);
      v11 = *(_QWORD *)(v8[7] + 16LL);
      if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
        v11 = sub_1C41A9C(inited);
      v12 = *(struct SimpleSkillData_array ***)(v11 + 184);
      v13 = *v12;
      v5->fields._empty_5__2 = *v12;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields._empty_5__2, (int32_t)v13, v2, v3);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantMaster___);
      v5->fields._svtMaster_5__3 = (struct ServantMaster_o *)Master_object;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields._svtMaster_5__3, (int32_t)Master_object, v15, v16);
      v19 = v5->fields.battleEntity;
      if ( !v19 )
        goto LABEL_71;
      v20 = v19->fields.battleInfo;
      if ( !v20 )
        goto LABEL_71;
      userSvt = v20->fields.userSvt;
      v5->fields.__7__wrap3 = userSvt;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields.__7__wrap3, (int32_t)userSvt, v17, v18);
      v24 = 0;
      v5->fields.__7__wrap4 = 0;
      break;
    case 1:
      _7__wrap7 = v5->fields.__7__wrap7;
      v5->fields.__1__state = -1;
      v26 = _7__wrap7 + 1;
      v5->fields.__7__wrap7 = v26;
      goto LABEL_36;
    case 2:
      v27 = v5->fields.__7__wrap7;
      v5->fields.__1__state = -1;
      v28 = v27 + 1;
      v5->fields.__7__wrap7 = v28;
      goto LABEL_42;
    case 3:
      v29 = v5->fields.__7__wrap7;
      v5->fields.__1__state = -1;
      v30 = v29 + 1;
      v5->fields.__7__wrap7 = v30;
      goto LABEL_48;
    case 4:
      v31 = v5->fields.__7__wrap7;
      v5->fields.__1__state = -1;
      v32 = v31 + 1;
      v5->fields.__7__wrap7 = v32;
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
      sub_1C6BC60(this, method);
    max_length = _7__wrap3->max_length;
    if ( v24 >= max_length )
      break;
    if ( v24 >= (unsigned int)max_length )
      goto LABEL_72;
    v33 = _7__wrap3->m_Items[v24];
    v5->fields._userSvt_5__6 = v33;
    p_userSvt_5__6 = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o **)&v5->fields._userSvt_5__6;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields._userSvt_5__6, (int32_t)v33, v22, v23);
    userSvt_5__6 = v5->fields._userSvt_5__6;
    if ( !userSvt_5__6 )
      goto LABEL_71;
    v37 = *(_QWORD *)&userSvt_5__6->fields.svtId.fields.currentCryptoKey;
    v36 = *(_QWORD *)&userSvt_5__6->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v68.fields.currentCryptoKey = v37;
    *(_QWORD *)&v68.fields.fakeValue = v36;
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v68, 0);
    userSvtId = v5->fields.userSvtId;
    method = (const MethodInfo *)v38;
    if ( userSvtId < 0 || v38 == userSvtId )
    {
      this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v5->fields._svtMaster_5__3;
      if ( !this )
        goto LABEL_71;
      if ( DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (int32_t)method,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__) )
      {
        this = *p_userSvt_5__6;
        if ( !*p_userSvt_5__6 )
          goto LABEL_71;
        SelfSkillArray = BattleUserServantData__GetSelfSkillArray((BattleUserServantData_o *)this, 0);
        if ( !SelfSkillArray )
          SelfSkillArray = v5->fields._empty_5__2;
        v5->fields.__7__wrap6 = SelfSkillArray;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields.__7__wrap6, (int32_t)SelfSkillArray, v41, v42);
        v26 = 0;
        v5->fields.__7__wrap7 = 0;
LABEL_36:
        _7__wrap6 = v5->fields.__7__wrap6;
        if ( !_7__wrap6 )
          goto LABEL_71;
        v44 = _7__wrap6->max_length;
        if ( v26 < v44 )
        {
          if ( v26 < (unsigned int)v44 )
          {
            v65 = _7__wrap6->m_Items[v26];
            result = 1;
            v5->fields.__1__state = 1;
            v5->fields.__2__current = v65;
            return result;
          }
LABEL_72:
          sub_1C6BC68(this);
        }
        v5->fields.__7__wrap6 = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields.__7__wrap6, 0, v2, v3);
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v5->fields._userSvt_5__6;
        if ( !this )
          goto LABEL_71;
        ClassPassiveSkillArray = BattleUserServantData__GetClassPassiveSkillArray((BattleUserServantData_o *)this, 0);
        if ( !ClassPassiveSkillArray )
          ClassPassiveSkillArray = v5->fields._empty_5__2;
        v5->fields.__7__wrap6 = ClassPassiveSkillArray;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields.__7__wrap6, (int32_t)ClassPassiveSkillArray, v46, v47);
        v28 = 0;
        v5->fields.__7__wrap7 = 0;
LABEL_42:
        v48 = v5->fields.__7__wrap6;
        if ( !v48 )
          goto LABEL_71;
        v49 = v48->max_length;
        if ( v28 < v49 )
        {
          if ( v28 >= (unsigned int)v49 )
            goto LABEL_72;
          v66 = v48->m_Items[v28];
          v67 = 2;
LABEL_70:
          v5->fields.__1__state = v67;
          v5->fields.__2__current = v66;
          return 1;
        }
        v5->fields.__7__wrap6 = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields.__7__wrap6, 0, v2, v3);
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v5->fields._userSvt_5__6;
        if ( !this )
          goto LABEL_71;
        AddPassiveSkillArray = BattleUserServantData__GetAddPassiveSkillArray((BattleUserServantData_o *)this, 0);
        if ( !AddPassiveSkillArray )
          AddPassiveSkillArray = v5->fields._empty_5__2;
        v5->fields.__7__wrap6 = AddPassiveSkillArray;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields.__7__wrap6, (int32_t)AddPassiveSkillArray, v51, v52);
        v30 = 0;
        v5->fields.__7__wrap7 = 0;
LABEL_48:
        v53 = v5->fields.__7__wrap6;
        if ( !v53 )
          goto LABEL_71;
        v54 = v53->max_length;
        if ( v30 < v54 )
        {
          if ( v30 >= (unsigned int)v54 )
            goto LABEL_72;
          v66 = v53->m_Items[v30];
          v67 = 3;
          goto LABEL_70;
        }
        v5->fields.__7__wrap6 = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields.__7__wrap6, 0, v2, v3);
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v5->fields._userSvt_5__6;
        if ( !this )
          goto LABEL_71;
        AppendPassiveSkillArray = BattleUserServantData__GetAppendPassiveSkillArray((BattleUserServantData_o *)this, 0);
        if ( !AppendPassiveSkillArray )
          AppendPassiveSkillArray = v5->fields._empty_5__2;
        v5->fields.__7__wrap6 = AppendPassiveSkillArray;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields.__7__wrap6, (int32_t)AppendPassiveSkillArray, v56, v57);
        v32 = 0;
        v5->fields.__7__wrap7 = 0;
LABEL_54:
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)&v5->fields.__7__wrap6;
        v58 = v5->fields.__7__wrap6;
        if ( !v58 )
          goto LABEL_71;
        v59 = v58->max_length;
        if ( v32 < v59 )
        {
          if ( v32 >= (unsigned int)v59 )
            goto LABEL_72;
          v66 = v58->m_Items[v32];
          v67 = 4;
          goto LABEL_70;
        }
        v5->fields.__7__wrap6 = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)this, 0, v2, v3);
        v5->fields._userSvt_5__6 = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v5->fields._userSvt_5__6, 0, v60, v61);
      }
    }
    v24 = v5->fields.__7__wrap4 + 1;
    v5->fields.__7__wrap4 = v24;
  }
  this->klass = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)this, 0, v22, v23);
  return 0;
}


System_Collections_Generic_IEnumerator_SimpleSkillData__o *AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_Collections_Generic_IEnumerable_SimpleSkillData__GetEnumerator(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *v6; // x20
  struct BattleEntity_o *_3__battleEntity; // x1
  System_Collections_Generic_IEnumerator_SimpleSkillData__o *result; // x0

  if ( (byte_4CB87E9 & 1) == 0 )
  {
    sub_1C6BA08(&AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
    byte_4CB87E9 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v6 = this;
  }
  else
  {
    v6 = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)sub_1C6BC54(AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  _3__battleEntity = this->fields.__3__battleEntity;
  v6->fields.battleEntity = _3__battleEntity;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v6->fields.battleEntity, (int32_t)_3__battleEntity, v4, v5);
  result = (System_Collections_Generic_IEnumerator_SimpleSkillData__o *)v6;
  v6->fields.userSvtId = this->fields.__3__userSvtId;
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB87E8 & 1) == 0 )
  {
    sub_1C6BA08(&SimpleSkillData_TypeInfo);
    byte_4CB87E8 = 1;
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