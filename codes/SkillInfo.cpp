void __fastcall SkillInfo___ctor(SkillInfo_o *this, const MethodInfo *method)
{
  System_Int32_array **v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_435291F & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_435291F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields.id = 0LL;
  this->fields.charge = 0;
  v3 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.title, v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.explanation = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.explanation, v10, v11, v12, v13, v14, v15, v16);
  this->fields.isUse = 0;
  *(_QWORD *)&this->fields.strengthStatus = 0LL;
}


bool __fastcall SkillInfo__Equals(SkillInfo_o *this, SkillInfo_o *info, const MethodInfo *method)
{
  int32_t id; // w8

  id = this->fields.id;
  if ( info )
  {
    if ( id != info->fields.id )
      return 0;
    return this->fields.lv == info->fields.lv;
  }
  else
  {
    return id == 0;
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SkillInfo__GetMargeExplanation(
        SkillInfo_array *skillInfoList,
        bool isEquipExplanation,
        const MethodInfo *method)
{
  SkillInfo_array *v4; // x19
  __int64 v5; // x24
  System_Text_StringBuilder_o *v6; // x20
  unsigned __int64 v7; // x22
  bool v8; // w23
  SkillInfo_o *v9; // x8
  System_String_o *explanation; // x21
  __int64 v12; // x0

  v4 = skillInfoList;
  if ( (byte_435291D & 1) == 0 )
  {
    sub_B70694(&System_Text_StringBuilder_TypeInfo);
    sub_B70694(&StringLiteral_292/*" ＋ "*/);
    skillInfoList = (SkillInfo_array *)sub_B70694(&StringLiteral_287/*" ……"*/);
    byte_435291D = 1;
  }
  if ( !v4 )
    goto LABEL_19;
  v5 = *(_QWORD *)&v4->max_length;
  v6 = (System_Text_StringBuilder_o *)sub_B70764(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_42596008(v6, 1024, 0LL);
  if ( (int)v5 >= 1 )
  {
    v7 = 0LL;
    v8 = !isEquipExplanation;
    do
    {
      if ( v7 >= v4->max_length )
      {
        v12 = sub_B70798(skillInfoList);
        sub_B70738(v12, 0LL);
      }
      v9 = v4->m_Items[v7];
      if ( v9 )
      {
        explanation = v9->fields.explanation;
        skillInfoList = (SkillInfo_array *)System_String__IsNullOrEmpty(explanation, 0LL);
        if ( ((unsigned __int8)skillInfoList & 1) == 0 )
        {
          if ( !v6 )
            goto LABEL_19;
          if ( v7 >= 2 && !v8 )
          {
            System_Text_StringBuilder__Append_42601980(v6, (System_String_o *)StringLiteral_287/*" ……"*/, 0LL);
            return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v6->klass->vtable._3_ToString.method)(
                                        v6,
                                        v6->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          }
          if ( System_Text_StringBuilder__get_Length(v6, 0LL) >= 1 )
            System_Text_StringBuilder__Append_42601980(v6, (System_String_o *)StringLiteral_292/*" ＋ "*/, 0LL);
          skillInfoList = (SkillInfo_array *)System_Text_StringBuilder__Append_42601980(v6, explanation, 0LL);
        }
      }
    }
    while ( (__int64)++v7 < (int)v5 );
  }
  if ( !v6 )
LABEL_19:
    sub_B7076C(skillInfoList, isEquipExplanation);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v6->klass->vtable._3_ToString.method)(
                              v6,
                              v6->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


System_String_o *__fastcall SkillInfo__GetMargeExplanation_26489736(
        System_String_array *explanationList,
        const MethodInfo *method)
{
  __int64 v3; // x21
  System_Text_StringBuilder_o *v4; // x20
  System_Text_StringBuilder_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  unsigned __int64 v7; // x22
  signed __int64 v8; // x23
  System_String_o *v9; // x21
  __int64 v11; // x0

  if ( (byte_435291E & 1) == 0 )
  {
    sub_B70694(&System_Text_StringBuilder_TypeInfo);
    sub_B70694(&StringLiteral_292/*" ＋ "*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_435291E = 1;
  }
  if ( !explanationList )
    return (System_String_o *)StringLiteral_1/*""*/;
  v3 = *(_QWORD *)&explanationList->max_length;
  v4 = (System_Text_StringBuilder_o *)sub_B70764(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_42596008(v4, 1024, 0LL);
  if ( (int)v3 >= 1 )
  {
    v7 = 0LL;
    v8 = (int)v3;
    do
    {
      if ( v7 >= explanationList->max_length )
      {
        v11 = sub_B70798(IsNullOrEmpty);
        sub_B70738(v11, 0LL);
      }
      v9 = explanationList->m_Items[v7];
      IsNullOrEmpty = (System_Text_StringBuilder_o *)System_String__IsNullOrEmpty(v9, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( !v4 )
          goto LABEL_17;
        if ( System_Text_StringBuilder__get_Length(v4, 0LL) >= 1 )
          System_Text_StringBuilder__Append_42601980(v4, (System_String_o *)StringLiteral_292/*" ＋ "*/, 0LL);
        IsNullOrEmpty = System_Text_StringBuilder__Append_42601980(v4, v9, 0LL);
      }
      ++v7;
    }
    while ( (__int64)v7 < v8 );
  }
  if ( !v4 )
LABEL_17:
    sub_B7076C(IsNullOrEmpty, v6);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v4->klass->vtable._3_ToString.method)(
                              v4,
                              v4->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


System_String_o *__fastcall SkillInfo__GetName(SkillInfo_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  SkillEntity_o *Entity; // x0
  const MethodInfo *v6; // x2
  LocalizationManager_c *v8; // x0

  if ( (byte_4352920 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B70694(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4352920 = 1;
  }
  if ( this->fields.id < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v4);
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              this->fields.id,
                              (const MethodInfo_21C0440 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getEffectTitle(Entity, 0, v6);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_434F6FF )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    byte_434F6FF = 1;
  }
  v8 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager_TypeInfo;
  }
  return v8->static_fields->unknownNameText;
}


void __fastcall SkillInfo__OverwriteNextSkill(
        SkillInfo_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  ServantSkillMaster_o *v9; // x22
  int v10; // w8
  int v11; // w10
  __int64 v12; // x9
  __int64 v13; // x11
  int condQuestId; // w21
  int32_t condQuestPhase; // w22
  _BOOL4 IsQuestPhaseClear; // w20
  int v17; // w27
  __int64 v18; // x1
  bool isUse; // w0
  bool v20; // w25
  _BOOL8 v21; // x0
  __int64 v22; // x1
  int klass; // w9
  int v24; // w22
  int v25; // w8
  int v26; // w20
  int v27; // w22
  const MethodInfo *v28; // x2
  struct System_String_o *EffectTitle; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x0
  _BOOL4 v37; // [xsp+4h] [xbp-DCh]
  _WORD v38[26]; // [xsp+8h] [xbp-D8h] BYREF
  int v39; // [xsp+3Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v41; // [xsp+60h] [xbp-80h] BYREF
  ServantSkillEntity_o *entity; // [xsp+88h] [xbp-58h] BYREF

  if ( (byte_4352921 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantSkillReleaseEntity___get_Value__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__GetEnumerator__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352921 = 1;
  }
  entity = 0LL;
  memset(&v40, 0, sizeof(v40));
  memset(&v41, 0, sizeof(v41));
  v39 = 0;
  if ( this->fields.id >= 1 && !this->fields.isUse )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_63;
    Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                 svtId,
                 (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_63;
    if ( ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL) )
      return;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
    if ( !Instance )
      goto LABEL_63;
    v9 = (ServantSkillMaster_o *)Instance;
    Instance = ServantSkillMaster__getServantSkillList((ServantSkillMaster_o *)Instance, svtId, 0LL);
    if ( !Instance )
      goto LABEL_63;
    v10 = *((_DWORD *)Instance + 6);
    if ( v10 >= 1 )
    {
      v11 = 0;
      v12 = 0LL;
      do
      {
        if ( v11 >= (unsigned int)v10 )
        {
          v36 = sub_B70798(Instance);
          sub_B70738(v36, 0LL);
        }
        v13 = *((_QWORD *)Instance + v11 + 4);
        if ( !v13 )
          goto LABEL_63;
        ++v11;
        if ( *(_DWORD *)(v13 + 28) == this->fields.id )
          v12 = v13;
      }
      while ( v11 < v10 );
      if ( v12
        && ServantSkillMaster__TryGetEntity(v9, &entity, svtId, *(_DWORD *)(v12 + 20), *(_DWORD *)(v12 + 24) + 1, 0LL) )
      {
        Instance = entity;
        if ( !entity )
          goto LABEL_63;
        Instance = (void *)ServantSkillEntity__isEnable(entity, 0, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          return;
        if ( !entity )
          goto LABEL_63;
        condQuestId = entity->fields.condQuestId;
        if ( condQuestId < 1 )
        {
          IsQuestPhaseClear = 0;
        }
        else
        {
          condQuestPhase = entity->fields.condQuestPhase;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsQuestPhaseClear = CondType__IsQuestPhaseClear(userId, condQuestId, condQuestPhase, -1, 0, 0LL);
        }
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_63;
        Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
        if ( !Instance )
          goto LABEL_63;
        v37 = IsQuestPhaseClear;
        Instance = ServantSkillReleaseMaster__GetEntitiyListGroup((ServantSkillReleaseMaster_o *)Instance, entity, 0LL);
        if ( !Instance )
          goto LABEL_63;
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v38,
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Instance,
          (const MethodInfo_2FC6B4C *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___GetEnumerator__);
        v41 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v38;
        v17 = 0;
        while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
                  &v41,
                  (const MethodInfo_2832CC4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___MoveNext__) )
        {
          if ( !v41.fields.current.fields.value )
            sub_B7076C(0LL, v18);
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v38,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v41.fields.current.fields.value,
            (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity__GetEnumerator__);
          isUse = 0;
          v40 = *(System_Collections_Generic_List_Enumerator_T__o *)v38;
LABEL_39:
          v20 = isUse;
          while ( 1 )
          {
            v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v40,
                    (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__MoveNext__);
            if ( !v21 )
              break;
            if ( !v40.fields.current )
              sub_B7076C(v21, v22);
            klass = (int)v40.fields.current[2].klass;
            if ( klass == 1 || klass == 46 )
            {
              isUse = ServantSkillReleaseEntity__isUse(
                        (ServantSkillReleaseEntity_o *)v40.fields.current,
                        -1,
                        -1,
                        -1,
                        -1LL,
                        0LL);
              goto LABEL_39;
            }
          }
          *(_DWORD *)&v38[2 * v17 + 20] = 306;
          v24 = v39 + 1;
          v39 = v24;
          v17 = v24;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v40,
            (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__Dispose__);
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( *(_DWORD *)&v38[2 * v24 + 18] == 306 )
            {
              --v24;
              v17 = v25;
              v39 = v25;
            }
          }
          if ( v20 )
          {
            v26 = 1;
            goto LABEL_52;
          }
        }
        v26 = 0;
        v24 = v17;
LABEL_52:
        *(_DWORD *)&v38[2 * v24 + 20] = 340;
        v27 = ++v39;
        System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
          &v41,
          (const MethodInfo_2832E30 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___Dispose__);
        if ( v27 && *(_DWORD *)&v38[2 * v27 + 18] == 340 )
          v39 = v27 - 1;
        if ( ((v37 | v26) & 1) != 0 )
        {
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillMaster___);
            if ( entity )
            {
              if ( Instance )
              {
                Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                             entity->fields.skillId,
                             (const MethodInfo_21C0440 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
                if ( entity )
                {
                  this->fields.id = entity->fields.skillId;
                  if ( Instance )
                  {
                    EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)Instance, 0, v28);
                    this->fields.title = EffectTitle;
                    sub_B70630(
                      (BattleServantConfConponent_o *)&this->fields.title,
                      (System_Int32_array **)EffectTitle,
                      v30,
                      v31,
                      v32,
                      v33,
                      v34,
                      v35);
                    return;
                  }
                }
              }
            }
          }
LABEL_63:
          sub_B7076C(Instance, v8);
        }
      }
    }
  }
}