System_Collections_Generic_IEnumerable_SimpleSkillData__o *AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData(
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CC9910 & 1) == 0 )
  {
    sub_1C713B0(&AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
    byte_4CC9910 = 1;
  }
  v3 = sub_1C715FC(AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 28) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = battleEntity;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 40), (int32_t)battleEntity, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v3;
}


System_Collections_Generic_IEnumerable_SimpleSkillData__o *AssumedSkillExtractor__EnumerateMasterSkill(
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CC9911 & 1) == 0 )
  {
    sub_1C713B0(&AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
    byte_4CC9911 = 1;
  }
  v3 = sub_1C715FC(AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 28) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = data;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 40), (int32_t)data, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v3;
}


System_Collections_Generic_IEnumerable_SimpleSkillData__o *AssumedSkillExtractor__EnumerateSvtSimpleSkillData(
        BattleEntity_o *battleEntity,
        int32_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CC990F & 1) == 0 )
  {
    sub_1C713B0(&AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
    byte_4CC990F = 1;
  }
  v5 = sub_1C715FC(AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 28) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v5 + 40) = battleEntity;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)battleEntity, v6, v7, v8, v9, v10, v11);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t _1__state; // w8
  struct BattleEntity_o *battleEntity; // x8
  Il2CppObject *Master_object; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  CommandCodeSkillMaster_o *p__7__wrap2; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct BattleEntity_o *v25; // x8
  struct CommandCodeInfo_array *userCommandCode; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w8
  int32_t _7__wrap5; // w8
  int32_t v35; // w8
  CommandCodeInfo_o *v36; // x8
  struct CommandCodeSkillEntity_array *CommandCodeSkillList; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
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

  if ( (byte_4CC9912 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_CommandCodeSkillMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CC9912 = 1;
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
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_CommandCodeSkillMaster___);
        this->fields._commandCodeMaster_5__2 = (struct CommandCodeSkillMaster_o *)Master_object;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields._commandCodeMaster_5__2,
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
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields.__7__wrap2,
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
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&this->fields.__7__wrap4,
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
              sub_1C71610(p__7__wrap2);
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
            sub_1C71608(p__7__wrap2, method);
          }
          this->fields.__7__wrap4 = 0;
          sub_1C71354((GrandQuestFolderBoardItem_o *)p__7__wrap2, 0, v2, v3, v4, v5, v6, v7);
          v33 = this->fields.__7__wrap3 + 1;
        }
        p__7__wrap2->klass = 0;
        sub_1C71354((GrandQuestFolderBoardItem_o *)p__7__wrap2, 0, v27, v28, v29, v30, v31, v32);
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
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *v10; // x20
  struct BattleEntity_o *_3__battleEntity; // x1

  if ( (byte_4CC9914 & 1) == 0 )
  {
    sub_1C713B0(&AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
    byte_4CC9914 = 1;
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
    v10 = (AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *)sub_1C715FC(AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  _3__battleEntity = this->fields.__3__battleEntity;
  v10->fields.battleEntity = _3__battleEntity;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v10->fields.battleEntity,
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

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData_d__1_o *this,
        const MethodInfo *method)
{
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC9913 & 1) == 0 )
  {
    sub_1C713B0(&SimpleSkillData_TypeInfo);
    byte_4CC9913 = 1;
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  const MethodInfo *v18; // x1
  struct BattleSkillInfoData_o *current; // x19
  int32_t v20; // w1
  int32_t skilllv; // w2
  SimpleSkillData_o v22; // x0
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v23; // x8
  struct System_Collections_Generic_List_T__o *list; // x9
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v25; // x8
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-50h] BYREF
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o **v29; // [xsp+48h] [xbp-28h]
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v30; // [xsp+58h] [xbp-18h] BYREF

  v30 = this;
  v2 = this;
  if ( (byte_4CC9915 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC9915 = 1;
  }
  v29 = &v30;
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
  v8 = v30->fields.data;
  if ( !v8 )
    sub_1C71608(v5, v6);
  masterSkillInfo = (System_Collections_Generic_List_object__o *)v8->fields.masterSkillInfo;
  if ( masterSkillInfo )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      &v27,
      masterSkillInfo,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_BattleSkillInfoData__GetEnumerator__);
    v9 = v30;
    v10 = *(_OWORD *)&v27.fields._list;
    p__7__wrap1 = &v30->fields.__7__wrap1;
    v28 = v27;
    v30->fields.__7__wrap1.fields._current = (struct BattleSkillInfoData_o *)v27.fields._current;
    *(_OWORD *)&v9->fields.__7__wrap1.fields._list = v10;
    sub_1C71354((GrandQuestFolderBoardItem_o *)p__7__wrap1, 0, v12, v13, v14, v15, v16, v17);
    v2 = v30;
LABEL_12:
    v2->fields.__1__state = -3;
    if ( System_Collections_Generic_List_Enumerator_object___MoveNext(
           (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap1,
           (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__MoveNext__) )
    {
      current = v30->fields.__7__wrap1.fields._current;
      if ( !current )
        sub_1C71608(v30, v18);
      v20 = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, const MethodInfo *))current->klass->vtable._5_get_skillId.methodPtr)(
              v30->fields.__7__wrap1.fields._current,
              current->klass->vtable._5_get_skillId.method);
      skilllv = current->fields.skilllv;
      v28.fields._list = 0;
      v22 = (SimpleSkillData_o)&v28;
      SimpleSkillData___ctor(v22, v20, skilllv, 0);
      v23 = v30;
      list = v28.fields._list;
      LOBYTE(masterSkillInfo) = 1;
      v30->fields.__1__state = 1;
      v23->fields.__2__current = (struct SimpleSkillData_o)list;
    }
    else
    {
      AssumedSkillExtractor__EnumerateMasterSkill_d__2____m__Finally1(v30, v18);
      v25 = v30;
      LOBYTE(masterSkillInfo) = 0;
      v30->fields.__7__wrap1.fields._list = 0;
      *(_QWORD *)&v25->fields.__7__wrap1.fields._index = 0;
      v25->fields.__7__wrap1.fields._current = 0;
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
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *v10; // x20
  struct BattleData_o *_3__data; // x1

  if ( (byte_4CC9918 & 1) == 0 )
  {
    sub_1C713B0(&AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
    byte_4CC9918 = 1;
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
    v10 = (AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *)sub_1C715FC(AssumedSkillExtractor__EnumerateMasterSkill_d__2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  _3__data = this->fields.__3__data;
  v10->fields.data = _3__data;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v10->fields.data, (int32_t)_3__data, v4, v5, v6, v7, v8, v9);
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

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_AssumedSkillExtractor__EnumerateMasterSkill_d__2_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *AssumedSkillExtractor__EnumerateMasterSkill_d__2__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateMasterSkill_d__2_o *this,
        const MethodInfo *method)
{
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC9917 & 1) == 0 )
  {
    sub_1C713B0(&SimpleSkillData_TypeInfo);
    byte_4CC9917 = 1;
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
  if ( (byte_4CC9916 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
    byte_4CC9916 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_BattleSkillInfoData__Dispose__);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double inited; // q0
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *v9; // x19
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
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct BattleEntity_o *v31; // x8
  struct BattleInfoData_o *v32; // x8
  struct BattleUserServantData_array *userSvt; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int v40; // w8
  int32_t _7__wrap7; // w8
  int32_t v42; // w8
  int32_t v43; // w8
  int32_t v44; // w8
  int32_t v45; // w8
  int32_t v46; // w8
  int32_t v47; // w8
  int32_t v48; // w8
  struct BattleUserServantData_o *v49; // x1
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o **p_userSvt_5__6; // x20
  struct BattleUserServantData_o *userSvt_5__6; // x8
  __int64 v52; // x21
  __int64 v53; // x22
  unsigned int v54; // w0
  int32_t userSvtId; // w8
  SimpleSkillData_array *SelfSkillArray; // x1
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  struct SimpleSkillData_array *_7__wrap6; // x9
  int32_t v64; // w10
  SimpleSkillData_array *ClassPassiveSkillArray; // x1
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  struct SimpleSkillData_array *v72; // x9
  int32_t v73; // w10
  SimpleSkillData_array *AddPassiveSkillArray; // x1
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  struct SimpleSkillData_array *v81; // x9
  int32_t v82; // w10
  SimpleSkillData_array *AppendPassiveSkillArray; // x1
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  struct SimpleSkillData_array *v90; // x9
  int32_t v91; // w10
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  struct BattleUserServantData_array *_7__wrap3; // x9
  int max_length; // w10
  bool result; // w0
  struct SimpleSkillData_o v101; // x8
  struct SimpleSkillData_o v102; // x8
  int v103; // w9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16

  v9 = this;
  if ( (byte_4CC9919 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_SimpleSkillData___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CC9919 = 1;
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
      v12 = Method_System_Array_Empty_SimpleSkillData___;
      v13 = *((_QWORD *)Method_System_Array_Empty_SimpleSkillData___ + 7);
      if ( !v13 )
      {
        sub_1C474A0(Method_System_Array_Empty_SimpleSkillData___);
        v13 = v12[7];
      }
      v14 = *(_QWORD *)(v13 + 16);
      if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
        v14 = sub_1C47444(inited);
      if ( !*(_DWORD *)(v14 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v14);
      v15 = *(_QWORD *)(v12[7] + 16LL);
      if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
        v15 = sub_1C47444(inited);
      v16 = *(struct SimpleSkillData_array ***)(v15 + 184);
      v17 = *v16;
      v9->fields._empty_5__2 = *v16;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v9->fields._empty_5__2, (int32_t)v17, v2, v3, v4, v5, v6, v7);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantMaster___);
      v9->fields._svtMaster_5__3 = (struct ServantMaster_o *)Master_object;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&v9->fields._svtMaster_5__3,
        (int32_t)Master_object,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      v31 = v9->fields.battleEntity;
      if ( !v31 )
        goto LABEL_71;
      v32 = v31->fields.battleInfo;
      if ( !v32 )
        goto LABEL_71;
      userSvt = v32->fields.userSvt;
      v9->fields.__7__wrap3 = userSvt;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v9->fields.__7__wrap3, (int32_t)userSvt, v25, v26, v27, v28, v29, v30);
      v40 = 0;
      v9->fields.__7__wrap4 = 0;
      break;
    case 1:
      _7__wrap7 = v9->fields.__7__wrap7;
      v9->fields.__1__state = -1;
      v42 = _7__wrap7 + 1;
      v9->fields.__7__wrap7 = v42;
      goto LABEL_36;
    case 2:
      v43 = v9->fields.__7__wrap7;
      v9->fields.__1__state = -1;
      v44 = v43 + 1;
      v9->fields.__7__wrap7 = v44;
      goto LABEL_42;
    case 3:
      v45 = v9->fields.__7__wrap7;
      v9->fields.__1__state = -1;
      v46 = v45 + 1;
      v9->fields.__7__wrap7 = v46;
      goto LABEL_48;
    case 4:
      v47 = v9->fields.__7__wrap7;
      v9->fields.__1__state = -1;
      v48 = v47 + 1;
      v9->fields.__7__wrap7 = v48;
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
      sub_1C71608(this, method);
    max_length = _7__wrap3->max_length;
    if ( v40 >= max_length )
      break;
    if ( v40 >= (unsigned int)max_length )
      goto LABEL_72;
    v49 = _7__wrap3->m_Items[v40];
    v9->fields._userSvt_5__6 = v49;
    p_userSvt_5__6 = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o **)&v9->fields._userSvt_5__6;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v9->fields._userSvt_5__6, (int32_t)v49, v34, v35, v36, v37, v38, v39);
    userSvt_5__6 = v9->fields._userSvt_5__6;
    if ( !userSvt_5__6 )
      goto LABEL_71;
    v53 = *(_QWORD *)&userSvt_5__6->fields.svtId.fields.currentCryptoKey;
    v52 = *(_QWORD *)&userSvt_5__6->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v104.fields.currentCryptoKey = v53;
    *(_QWORD *)&v104.fields.fakeValue = v52;
    v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v104, 0);
    userSvtId = v9->fields.userSvtId;
    method = (const MethodInfo *)v54;
    if ( userSvtId < 0 || v54 == userSvtId )
    {
      this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v9->fields._svtMaster_5__3;
      if ( !this )
        goto LABEL_71;
      if ( DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (int32_t)method,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__) )
      {
        this = *p_userSvt_5__6;
        if ( !*p_userSvt_5__6 )
          goto LABEL_71;
        SelfSkillArray = BattleUserServantData__GetSelfSkillArray((BattleUserServantData_o *)this, 0);
        if ( !SelfSkillArray )
          SelfSkillArray = v9->fields._empty_5__2;
        v9->fields.__7__wrap6 = SelfSkillArray;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v9->fields.__7__wrap6,
          (int32_t)SelfSkillArray,
          v57,
          v58,
          v59,
          v60,
          v61,
          v62);
        v42 = 0;
        v9->fields.__7__wrap7 = 0;
LABEL_36:
        _7__wrap6 = v9->fields.__7__wrap6;
        if ( !_7__wrap6 )
          goto LABEL_71;
        v64 = _7__wrap6->max_length;
        if ( v42 < v64 )
        {
          if ( v42 < (unsigned int)v64 )
          {
            v101 = _7__wrap6->m_Items[v42];
            result = 1;
            v9->fields.__1__state = 1;
            v9->fields.__2__current = v101;
            return result;
          }
LABEL_72:
          sub_1C71610(this);
        }
        v9->fields.__7__wrap6 = 0;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v9->fields.__7__wrap6, 0, v2, v3, v4, v5, v6, v7);
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v9->fields._userSvt_5__6;
        if ( !this )
          goto LABEL_71;
        ClassPassiveSkillArray = BattleUserServantData__GetClassPassiveSkillArray((BattleUserServantData_o *)this, 0);
        if ( !ClassPassiveSkillArray )
          ClassPassiveSkillArray = v9->fields._empty_5__2;
        v9->fields.__7__wrap6 = ClassPassiveSkillArray;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v9->fields.__7__wrap6,
          (int32_t)ClassPassiveSkillArray,
          v66,
          v67,
          v68,
          v69,
          v70,
          v71);
        v44 = 0;
        v9->fields.__7__wrap7 = 0;
LABEL_42:
        v72 = v9->fields.__7__wrap6;
        if ( !v72 )
          goto LABEL_71;
        v73 = v72->max_length;
        if ( v44 < v73 )
        {
          if ( v44 >= (unsigned int)v73 )
            goto LABEL_72;
          v102 = v72->m_Items[v44];
          v103 = 2;
LABEL_70:
          v9->fields.__1__state = v103;
          v9->fields.__2__current = v102;
          return 1;
        }
        v9->fields.__7__wrap6 = 0;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v9->fields.__7__wrap6, 0, v2, v3, v4, v5, v6, v7);
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v9->fields._userSvt_5__6;
        if ( !this )
          goto LABEL_71;
        AddPassiveSkillArray = BattleUserServantData__GetAddPassiveSkillArray((BattleUserServantData_o *)this, 0);
        if ( !AddPassiveSkillArray )
          AddPassiveSkillArray = v9->fields._empty_5__2;
        v9->fields.__7__wrap6 = AddPassiveSkillArray;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v9->fields.__7__wrap6,
          (int32_t)AddPassiveSkillArray,
          v75,
          v76,
          v77,
          v78,
          v79,
          v80);
        v46 = 0;
        v9->fields.__7__wrap7 = 0;
LABEL_48:
        v81 = v9->fields.__7__wrap6;
        if ( !v81 )
          goto LABEL_71;
        v82 = v81->max_length;
        if ( v46 < v82 )
        {
          if ( v46 >= (unsigned int)v82 )
            goto LABEL_72;
          v102 = v81->m_Items[v46];
          v103 = 3;
          goto LABEL_70;
        }
        v9->fields.__7__wrap6 = 0;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v9->fields.__7__wrap6, 0, v2, v3, v4, v5, v6, v7);
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)v9->fields._userSvt_5__6;
        if ( !this )
          goto LABEL_71;
        AppendPassiveSkillArray = BattleUserServantData__GetAppendPassiveSkillArray((BattleUserServantData_o *)this, 0);
        if ( !AppendPassiveSkillArray )
          AppendPassiveSkillArray = v9->fields._empty_5__2;
        v9->fields.__7__wrap6 = AppendPassiveSkillArray;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v9->fields.__7__wrap6,
          (int32_t)AppendPassiveSkillArray,
          v84,
          v85,
          v86,
          v87,
          v88,
          v89);
        v48 = 0;
        v9->fields.__7__wrap7 = 0;
LABEL_54:
        this = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)&v9->fields.__7__wrap6;
        v90 = v9->fields.__7__wrap6;
        if ( !v90 )
          goto LABEL_71;
        v91 = v90->max_length;
        if ( v48 < v91 )
        {
          if ( v48 >= (unsigned int)v91 )
            goto LABEL_72;
          v102 = v90->m_Items[v48];
          v103 = 4;
          goto LABEL_70;
        }
        v9->fields.__7__wrap6 = 0;
        sub_1C71354((GrandQuestFolderBoardItem_o *)this, 0, v2, v3, v4, v5, v6, v7);
        v9->fields._userSvt_5__6 = 0;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v9->fields._userSvt_5__6, 0, v92, v93, v94, v95, v96, v97);
      }
    }
    v40 = v9->fields.__7__wrap4 + 1;
    v9->fields.__7__wrap4 = v40;
  }
  this->klass = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)this, 0, v34, v35, v36, v37, v38, v39);
  return 0;
}


System_Collections_Generic_IEnumerator_SimpleSkillData__o *AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_Collections_Generic_IEnumerable_SimpleSkillData__GetEnumerator(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *v10; // x20
  struct BattleEntity_o *_3__battleEntity; // x1
  System_Collections_Generic_IEnumerator_SimpleSkillData__o *result; // x0

  if ( (byte_4CC991B & 1) == 0 )
  {
    sub_1C713B0(&AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
    byte_4CC991B = 1;
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
    v10 = (AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *)sub_1C715FC(AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  _3__battleEntity = this->fields.__3__battleEntity;
  v10->fields.battleEntity = _3__battleEntity;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&v10->fields.battleEntity,
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

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0__System_Collections_IEnumerator_get_Current(
        AssumedSkillExtractor__EnumerateSvtSimpleSkillData_d__0_o *this,
        const MethodInfo *method)
{
  struct SimpleSkillData_o _2__current; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC991A & 1) == 0 )
  {
    sub_1C713B0(&SimpleSkillData_TypeInfo);
    byte_4CC991A = 1;
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