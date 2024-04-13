void __fastcall SkillInfo___ctor(SkillInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Int32_array **v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42E97F5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E97F5 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields.id = 0LL;
  this->fields.charge = 0;
  v5 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.title, v5, v6, v7, v8, v9, v10, v11);
  v12 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.explanation = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.explanation, v12, v13, v14, v15, v16, v17, v18);
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
  __int64 v3; // x3
  SkillInfo_array *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x24
  System_Text_StringBuilder_o *v13; // x20
  unsigned __int64 v14; // x22
  bool v15; // w23
  SkillInfo_o *v16; // x8
  System_String_o *explanation; // x21
  __int64 v19; // x0

  v5 = skillInfoList;
  if ( (byte_42E97F3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, isEquipExplanation, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_288/*" ＋ "*/, v6, v7, v8);
    skillInfoList = (SkillInfo_array *)sub_B5D5C4(&StringLiteral_283/*" ……"*/, v9, v10, v11);
    byte_42E97F3 = 1;
  }
  if ( !v5 )
    goto LABEL_19;
  v12 = *(_QWORD *)&v5->max_length;
  v13 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_42947772(v13, 1024, 0LL);
  if ( (int)v12 >= 1 )
  {
    v14 = 0LL;
    v15 = !isEquipExplanation;
    do
    {
      if ( v14 >= v5->max_length )
      {
        v19 = sub_B5D6C8(skillInfoList);
        sub_B5D668(v19, 0LL);
      }
      v16 = v5->m_Items[v14];
      if ( v16 )
      {
        explanation = v16->fields.explanation;
        skillInfoList = (SkillInfo_array *)System_String__IsNullOrEmpty(explanation, 0LL);
        if ( ((unsigned __int8)skillInfoList & 1) == 0 )
        {
          if ( !v13 )
            goto LABEL_19;
          if ( v14 >= 2 && !v15 )
          {
            System_Text_StringBuilder__Append_42953744(v13, (System_String_o *)StringLiteral_283/*" ……"*/, 0LL);
            return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v13->klass->vtable._3_ToString.method)(
                                        v13,
                                        v13->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          }
          if ( System_Text_StringBuilder__get_Length(v13, 0LL) >= 1 )
            System_Text_StringBuilder__Append_42953744(v13, (System_String_o *)StringLiteral_288/*" ＋ "*/, 0LL);
          skillInfoList = (SkillInfo_array *)System_Text_StringBuilder__Append_42953744(v13, explanation, 0LL);
        }
      }
    }
    while ( (__int64)++v14 < (int)v12 );
  }
  if ( !v13 )
LABEL_19:
    sub_B5D69C(skillInfoList, isEquipExplanation);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v13->klass->vtable._3_ToString.method)(
                              v13,
                              v13->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


System_String_o *__fastcall SkillInfo__GetMargeExplanation_26826256(
        System_String_array *explanationList,
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
  __int64 v11; // x21
  System_Text_StringBuilder_o *v12; // x20
  System_Text_StringBuilder_o *IsNullOrEmpty; // x0
  __int64 v14; // x1
  unsigned __int64 v15; // x22
  signed __int64 v16; // x23
  System_String_o *v17; // x21
  __int64 v19; // x0

  if ( (byte_42E97F4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_288/*" ＋ "*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E97F4 = 1;
  }
  if ( !explanationList )
    return (System_String_o *)StringLiteral_1/*""*/;
  v11 = *(_QWORD *)&explanationList->max_length;
  v12 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_42947772(v12, 1024, 0LL);
  if ( (int)v11 >= 1 )
  {
    v15 = 0LL;
    v16 = (int)v11;
    do
    {
      if ( v15 >= explanationList->max_length )
      {
        v19 = sub_B5D6C8(IsNullOrEmpty);
        sub_B5D668(v19, 0LL);
      }
      v17 = explanationList->m_Items[v15];
      IsNullOrEmpty = (System_Text_StringBuilder_o *)System_String__IsNullOrEmpty(v17, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( !v12 )
          goto LABEL_17;
        if ( System_Text_StringBuilder__get_Length(v12, 0LL) >= 1 )
          System_Text_StringBuilder__Append_42953744(v12, (System_String_o *)StringLiteral_288/*" ＋ "*/, 0LL);
        IsNullOrEmpty = System_Text_StringBuilder__Append_42953744(v12, v17, 0LL);
      }
      ++v15;
    }
    while ( (__int64)v15 < v16 );
  }
  if ( !v12 )
LABEL_17:
    sub_B5D69C(IsNullOrEmpty, v14);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v12->klass->vtable._3_ToString.method)(
                              v12,
                              v12->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


System_String_o *__fastcall SkillInfo__GetName(SkillInfo_o *this, const MethodInfo *method)
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  SkillEntity_o *Entity; // x0
  int v20; // w1
  const MethodInfo *v21; // x2
  __int64 v22; // x3
  LocalizationManager_c *v24; // x0

  if ( (byte_42E97F6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42E97F6 = 1;
  }
  if ( this->fields.id < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v18);
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              this->fields.id,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getEffectTitle(Entity, 0, v21);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E6772 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v20, (_DWORD)v21, v22);
    byte_42E6772 = 1;
  }
  v24 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager_TypeInfo;
  }
  return v24->static_fields->unknownNameText;
}


void __fastcall SkillInfo__OverwriteNextSkill(
        SkillInfo_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  void *Instance; // x0
  __int64 v56; // x1
  ServantSkillMaster_o *v57; // x22
  int v58; // w8
  int v59; // w10
  __int64 v60; // x9
  __int64 v61; // x11
  int condQuestId; // w21
  int32_t condQuestPhase; // w22
  _BOOL4 IsQuestPhaseClear; // w20
  int v65; // w27
  __int64 v66; // x1
  bool isUse; // w0
  bool v68; // w25
  _BOOL8 v69; // x0
  __int64 v70; // x1
  int klass; // w9
  int v72; // w22
  int v73; // w8
  int v74; // w20
  int v75; // w22
  const MethodInfo *v76; // x2
  struct System_String_o *EffectTitle; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  __int64 v84; // x0
  _BOOL4 v85; // [xsp+4h] [xbp-DCh]
  _WORD v86[26]; // [xsp+8h] [xbp-D8h] BYREF
  int v87; // [xsp+3Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v88; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v89; // [xsp+60h] [xbp-80h] BYREF
  ServantSkillEntity_o *entity; // [xsp+88h] [xbp-58h] BYREF

  if ( (byte_42E97F7 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, userId, svtId, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantSkillMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19, v20, v21);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v22, v23, v24);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___GetEnumerator__,
      v25,
      v26,
      v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__Dispose__, v28, v29, v30);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___Dispose__,
      v31,
      v32,
      v33);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___MoveNext__,
      v34,
      v35,
      v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__MoveNext__, v37, v38, v39);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___get_Current__,
      v40,
      v41,
      v42);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__get_Current__,
      v43,
      v44,
      v45);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_int__List_ServantSkillReleaseEntity___get_Value__,
      v46,
      v47,
      v48);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__GetEnumerator__, v49, v50, v51);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v52, v53, v54);
    byte_42E97F7 = 1;
  }
  entity = 0LL;
  memset(&v88, 0, sizeof(v88));
  memset(&v89, 0, sizeof(v89));
  v87 = 0;
  if ( this->fields.id >= 1 && !this->fields.isUse )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_63;
    Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                 svtId,
                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_63;
    if ( ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL) )
      return;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
    if ( !Instance )
      goto LABEL_63;
    v57 = (ServantSkillMaster_o *)Instance;
    Instance = ServantSkillMaster__getServantSkillList((ServantSkillMaster_o *)Instance, svtId, 0LL);
    if ( !Instance )
      goto LABEL_63;
    v58 = *((_DWORD *)Instance + 6);
    if ( v58 >= 1 )
    {
      v59 = 0;
      v60 = 0LL;
      do
      {
        if ( v59 >= (unsigned int)v58 )
        {
          v84 = sub_B5D6C8(Instance);
          sub_B5D668(v84, 0LL);
        }
        v61 = *((_QWORD *)Instance + v59 + 4);
        if ( !v61 )
          goto LABEL_63;
        ++v59;
        if ( *(_DWORD *)(v61 + 28) == this->fields.id )
          v60 = v61;
      }
      while ( v59 < v58 );
      if ( v60
        && ServantSkillMaster__TryGetEntity(v57, &entity, svtId, *(_DWORD *)(v60 + 20), *(_DWORD *)(v60 + 24) + 1, 0LL) )
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
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_63;
        Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
        if ( !Instance )
          goto LABEL_63;
        v85 = IsQuestPhaseClear;
        Instance = ServantSkillReleaseMaster__GetEntitiyListGroup((ServantSkillReleaseMaster_o *)Instance, entity, 0LL);
        if ( !Instance )
          goto LABEL_63;
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v86,
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)Instance,
          (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___GetEnumerator__);
        v89 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v86;
        v65 = 0;
        while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
                  &v89,
                  (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___MoveNext__) )
        {
          if ( !v89.fields.current.fields.value )
            sub_B5D69C(0LL, v66);
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v86,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v89.fields.current.fields.value,
            (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity__GetEnumerator__);
          isUse = 0;
          v88 = *(System_Collections_Generic_List_Enumerator_T__o *)v86;
LABEL_39:
          v68 = isUse;
          while ( 1 )
          {
            v69 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v88,
                    (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__MoveNext__);
            if ( !v69 )
              break;
            if ( !v88.fields.current )
              sub_B5D69C(v69, v70);
            klass = (int)v88.fields.current[2].klass;
            if ( klass == 1 || klass == 46 )
            {
              isUse = ServantSkillReleaseEntity__isUse(
                        (ServantSkillReleaseEntity_o *)v88.fields.current,
                        -1,
                        -1,
                        -1,
                        -1LL,
                        0LL);
              goto LABEL_39;
            }
          }
          *(_DWORD *)&v86[2 * v65 + 20] = 306;
          v72 = v87 + 1;
          v87 = v72;
          v65 = v72;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v88,
            (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__Dispose__);
          if ( v72 )
          {
            v73 = v72 - 1;
            if ( *(_DWORD *)&v86[2 * v72 + 18] == 306 )
            {
              --v72;
              v65 = v73;
              v87 = v73;
            }
          }
          if ( v68 )
          {
            v74 = 1;
            goto LABEL_52;
          }
        }
        v74 = 0;
        v72 = v65;
LABEL_52:
        *(_DWORD *)&v86[2 * v72 + 20] = 340;
        v75 = ++v87;
        System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
          &v89,
          (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___Dispose__);
        if ( v75 && *(_DWORD *)&v86[2 * v75 + 18] == 340 )
          v87 = v75 - 1;
        if ( ((v85 | v74) & 1) != 0 )
        {
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
            if ( entity )
            {
              if ( Instance )
              {
                Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                             entity->fields.skillId,
                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
                if ( entity )
                {
                  this->fields.id = entity->fields.skillId;
                  if ( Instance )
                  {
                    EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)Instance, 0, v76);
                    this->fields.title = EffectTitle;
                    sub_B5D560(
                      (BattleServantConfConponent_o *)&this->fields.title,
                      (System_Int32_array **)EffectTitle,
                      v78,
                      v79,
                      v80,
                      v81,
                      v82,
                      v83);
                    return;
                  }
                }
              }
            }
          }
LABEL_63:
          sub_B5D69C(Instance, v56);
        }
      }
    }
  }
}