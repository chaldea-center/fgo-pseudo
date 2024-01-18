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

  if ( (byte_4186DAD & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4186DAD = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields.id = 0LL;
  this->fields.charge = 0;
  v3 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.title, v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.explanation = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.explanation, v10, v11, v12, v13, v14, v15, v16);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x24
  System_Text_StringBuilder_o *v8; // x20
  unsigned __int64 v9; // x22
  bool v10; // w23
  SkillInfo_o *v11; // x8
  System_String_o *explanation; // x21
  __int64 v14; // x0

  v4 = skillInfoList;
  if ( (byte_4186DAB & 1) == 0 )
  {
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, isEquipExplanation);
    sub_B2C35C(&StringLiteral_282/*" ＋ "*/, v5);
    skillInfoList = (SkillInfo_array *)sub_B2C35C(&StringLiteral_279/*" ……"*/, v6);
    byte_4186DAB = 1;
  }
  if ( !v4 )
    goto LABEL_19;
  v7 = *(_QWORD *)&v4->max_length;
  v8 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_42402728(v8, 1024, 0LL);
  if ( (int)v7 >= 1 )
  {
    v9 = 0LL;
    v10 = !isEquipExplanation;
    do
    {
      if ( v9 >= v4->max_length )
      {
        v14 = sub_B2C460(skillInfoList);
        sub_B2C400(v14, 0LL);
      }
      v11 = v4->m_Items[v9];
      if ( v11 )
      {
        explanation = v11->fields.explanation;
        skillInfoList = (SkillInfo_array *)System_String__IsNullOrEmpty(explanation, 0LL);
        if ( ((unsigned __int8)skillInfoList & 1) == 0 )
        {
          if ( !v8 )
            goto LABEL_19;
          if ( v9 >= 2 && !v10 )
          {
            System_Text_StringBuilder__Append_42408700(v8, (System_String_o *)StringLiteral_279/*" ……"*/, 0LL);
            return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v8->klass->vtable._3_ToString.method)(
                                        v8,
                                        v8->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          }
          if ( System_Text_StringBuilder__get_Length(v8, 0LL) >= 1 )
            System_Text_StringBuilder__Append_42408700(v8, (System_String_o *)StringLiteral_282/*" ＋ "*/, 0LL);
          skillInfoList = (SkillInfo_array *)System_Text_StringBuilder__Append_42408700(v8, explanation, 0LL);
        }
      }
    }
    while ( (__int64)++v9 < (int)v7 );
  }
  if ( !v8 )
LABEL_19:
    sub_B2C434(skillInfoList, isEquipExplanation);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v8->klass->vtable._3_ToString.method)(
                              v8,
                              v8->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


System_String_o *__fastcall SkillInfo__GetMargeExplanation_23791504(
        System_String_array *explanationList,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x21
  System_Text_StringBuilder_o *v6; // x20
  System_Text_StringBuilder_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  unsigned __int64 v9; // x22
  signed __int64 v10; // x23
  System_String_o *v11; // x21
  __int64 v13; // x0

  if ( (byte_4186DAC & 1) == 0 )
  {
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, method);
    sub_B2C35C(&StringLiteral_282/*" ＋ "*/, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4186DAC = 1;
  }
  if ( !explanationList )
    return (System_String_o *)StringLiteral_1/*""*/;
  v5 = *(_QWORD *)&explanationList->max_length;
  v6 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_42402728(v6, 1024, 0LL);
  if ( (int)v5 >= 1 )
  {
    v9 = 0LL;
    v10 = (int)v5;
    do
    {
      if ( v9 >= explanationList->max_length )
      {
        v13 = sub_B2C460(IsNullOrEmpty);
        sub_B2C400(v13, 0LL);
      }
      v11 = explanationList->m_Items[v9];
      IsNullOrEmpty = (System_Text_StringBuilder_o *)System_String__IsNullOrEmpty(v11, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( !v6 )
          goto LABEL_17;
        if ( System_Text_StringBuilder__get_Length(v6, 0LL) >= 1 )
          System_Text_StringBuilder__Append_42408700(v6, (System_String_o *)StringLiteral_282/*" ＋ "*/, 0LL);
        IsNullOrEmpty = System_Text_StringBuilder__Append_42408700(v6, v11, 0LL);
      }
      ++v9;
    }
    while ( (__int64)v9 < v10 );
  }
  if ( !v6 )
LABEL_17:
    sub_B2C434(IsNullOrEmpty, v8);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v6->klass->vtable._3_ToString.method)(
                              v6,
                              v6->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


System_String_o *__fastcall SkillInfo__GetName(SkillInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  SkillEntity_o *Entity; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  LocalizationManager_c *v13; // x0

  if ( (byte_4186DAE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_4186DAE = 1;
  }
  if ( this->fields.id < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v8);
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              this->fields.id,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getEffectTitle(Entity, 0, v11);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4185BC0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    byte_4185BC0 = 1;
  }
  v13 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager_TypeInfo;
  }
  return v13->static_fields->unknownNameText;
}


void __fastcall SkillInfo__OverwriteNextSkill(
        SkillInfo_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  void *Instance; // x0
  __int64 v24; // x1
  ServantSkillMaster_o *v25; // x22
  int v26; // w8
  int v27; // w10
  __int64 v28; // x9
  __int64 v29; // x11
  int condQuestId; // w21
  int32_t condQuestPhase; // w22
  _BOOL4 IsQuestPhaseClear; // w20
  int v33; // w27
  __int64 v34; // x1
  bool isUse; // w0
  bool v36; // w25
  _BOOL8 v37; // x0
  __int64 v38; // x1
  int klass; // w9
  int v40; // w22
  int v41; // w8
  int v42; // w20
  int v43; // w22
  const MethodInfo *v44; // x2
  struct System_String_o *EffectTitle; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x0
  _BOOL4 v53; // [xsp+4h] [xbp-DCh]
  _WORD v54[26]; // [xsp+8h] [xbp-D8h] BYREF
  int v55; // [xsp+3Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v57; // [xsp+60h] [xbp-80h] BYREF
  ServantSkillEntity_o *entity; // [xsp+88h] [xbp-58h] BYREF

  if ( (byte_4186DAF & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, userId);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantSkillMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v10);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__Dispose__, v14);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___Dispose__,
      v15);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___MoveNext__,
      v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__MoveNext__, v17);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___get_Current__,
      v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__get_Current__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantSkillReleaseEntity___get_Value__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__GetEnumerator__, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4186DAF = 1;
  }
  entity = 0LL;
  memset(&v56, 0, sizeof(v56));
  memset(&v57, 0, sizeof(v57));
  v55 = 0;
  if ( this->fields.id >= 1 && !this->fields.isUse )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_63;
    Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                 svtId,
                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_63;
    if ( ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL) )
      return;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
    if ( !Instance )
      goto LABEL_63;
    v25 = (ServantSkillMaster_o *)Instance;
    Instance = ServantSkillMaster__getServantSkillList((ServantSkillMaster_o *)Instance, svtId, 0LL);
    if ( !Instance )
      goto LABEL_63;
    v26 = *((_DWORD *)Instance + 6);
    if ( v26 >= 1 )
    {
      v27 = 0;
      v28 = 0LL;
      do
      {
        if ( v27 >= (unsigned int)v26 )
        {
          v52 = sub_B2C460(Instance);
          sub_B2C400(v52, 0LL);
        }
        v29 = *((_QWORD *)Instance + v27 + 4);
        if ( !v29 )
          goto LABEL_63;
        ++v27;
        if ( *(_DWORD *)(v29 + 28) == this->fields.id )
          v28 = v29;
      }
      while ( v27 < v26 );
      if ( v28
        && ServantSkillMaster__TryGetEntity(v25, &entity, svtId, *(_DWORD *)(v28 + 20), *(_DWORD *)(v28 + 24) + 1, 0LL) )
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
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_63;
        Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
        if ( !Instance )
          goto LABEL_63;
        v53 = IsQuestPhaseClear;
        Instance = ServantSkillReleaseMaster__GetEntitiyListGroup((ServantSkillReleaseMaster_o *)Instance, entity, 0LL);
        if ( !Instance )
          goto LABEL_63;
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v54,
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Instance,
          (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___GetEnumerator__);
        v57 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v54;
        v33 = 0;
        while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
                  &v57,
                  (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___MoveNext__) )
        {
          if ( !v57.fields.current.fields.value )
            sub_B2C434(0LL, v34);
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v54,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v57.fields.current.fields.value,
            (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity__GetEnumerator__);
          isUse = 0;
          v56 = *(System_Collections_Generic_List_Enumerator_T__o *)v54;
LABEL_39:
          v36 = isUse;
          while ( 1 )
          {
            v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v56,
                    (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__MoveNext__);
            if ( !v37 )
              break;
            if ( !v56.fields.current )
              sub_B2C434(v37, v38);
            klass = (int)v56.fields.current[2].klass;
            if ( klass == 1 || klass == 46 )
            {
              isUse = ServantSkillReleaseEntity__isUse(
                        (ServantSkillReleaseEntity_o *)v56.fields.current,
                        -1,
                        -1,
                        -1,
                        -1LL,
                        0LL);
              goto LABEL_39;
            }
          }
          *(_DWORD *)&v54[2 * v33 + 20] = 306;
          v40 = v55 + 1;
          v55 = v40;
          v33 = v40;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v56,
            (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__Dispose__);
          if ( v40 )
          {
            v41 = v40 - 1;
            if ( *(_DWORD *)&v54[2 * v40 + 18] == 306 )
            {
              --v40;
              v33 = v41;
              v55 = v41;
            }
          }
          if ( v36 )
          {
            v42 = 1;
            goto LABEL_52;
          }
        }
        v42 = 0;
        v40 = v33;
LABEL_52:
        *(_DWORD *)&v54[2 * v40 + 20] = 340;
        v43 = ++v55;
        System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
          &v57,
          (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___Dispose__);
        if ( v43 && *(_DWORD *)&v54[2 * v43 + 18] == 340 )
          v55 = v43 - 1;
        if ( ((v53 | v42) & 1) != 0 )
        {
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
            if ( entity )
            {
              if ( Instance )
              {
                Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                             entity->fields.skillId,
                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
                if ( entity )
                {
                  this->fields.id = entity->fields.skillId;
                  if ( Instance )
                  {
                    EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)Instance, 0, v44);
                    this->fields.title = EffectTitle;
                    sub_B2C2F8(
                      (BattleServantConfConponent_o *)&this->fields.title,
                      (System_Int32_array **)EffectTitle,
                      v46,
                      v47,
                      v48,
                      v49,
                      v50,
                      v51);
                    return;
                  }
                }
              }
            }
          }
LABEL_63:
          sub_B2C434(Instance, v24);
        }
      }
    }
  }
}