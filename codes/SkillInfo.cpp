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

  if ( (byte_40F9240 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40F9240 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields.id = 0LL;
  this->fields.charge = 0;
  v3 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.title, v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.explanation = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.explanation, v10, v11, v12, v13, v14, v15, v16);
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x24
  System_Text_StringBuilder_o *v10; // x20
  System_Text_StringBuilder_o *IsNullOrEmpty; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  unsigned __int64 v14; // x22
  bool v15; // w23
  SkillInfo_o *v16; // x8
  System_String_o *explanation; // x21

  if ( (byte_40F923E & 1) == 0 )
  {
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, isEquipExplanation);
    sub_B16FFC(&StringLiteral_282/*" ＋ "*/, v7);
    sub_B16FFC(&StringLiteral_279/*" ……"*/, v8);
    byte_40F923E = 1;
  }
  if ( !skillInfoList )
    goto LABEL_19;
  v9 = *(_QWORD *)&skillInfoList->max_length;
  v10 = (System_Text_StringBuilder_o *)sub_B170CC(
                                         System_Text_StringBuilder_TypeInfo,
                                         isEquipExplanation,
                                         method,
                                         v3,
                                         v4);
  System_Text_StringBuilder___ctor_41908268(v10, 1024, 0LL);
  if ( (int)v9 >= 1 )
  {
    v14 = 0LL;
    v15 = !isEquipExplanation;
    do
    {
      if ( v14 >= skillInfoList->max_length )
      {
        sub_B17100(IsNullOrEmpty, v12, v13);
        sub_B170A0();
      }
      v16 = skillInfoList->m_Items[v14];
      if ( v16 )
      {
        explanation = v16->fields.explanation;
        IsNullOrEmpty = (System_Text_StringBuilder_o *)System_String__IsNullOrEmpty(explanation, 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( !v10 )
            goto LABEL_19;
          if ( v14 >= 2 && !v15 )
          {
            System_Text_StringBuilder__Append_41914240(v10, (System_String_o *)StringLiteral_279/*" ……"*/, 0LL);
            return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v10->klass->vtable._3_ToString.method)(
                                        v10,
                                        v10->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          }
          if ( System_Text_StringBuilder__get_Length(v10, 0LL) >= 1 )
            System_Text_StringBuilder__Append_41914240(v10, (System_String_o *)StringLiteral_282/*" ＋ "*/, 0LL);
          IsNullOrEmpty = System_Text_StringBuilder__Append_41914240(v10, explanation, 0LL);
        }
      }
    }
    while ( (__int64)++v14 < (int)v9 );
  }
  if ( !v10 )
LABEL_19:
    sub_B170D4();
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v10->klass->vtable._3_ToString.method)(
                              v10,
                              v10->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


System_String_o *__fastcall SkillInfo__GetMargeExplanation_23617588(
        System_String_array *explanationList,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  System_Text_StringBuilder_o *v9; // x20
  System_Text_StringBuilder_o *IsNullOrEmpty; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  unsigned __int64 v13; // x22
  signed __int64 v14; // x23
  System_String_o *v15; // x21

  if ( (byte_40F923F & 1) == 0 )
  {
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, method);
    sub_B16FFC(&StringLiteral_282/*" ＋ "*/, v6);
    sub_B16FFC(&StringLiteral_1/*""*/, v7);
    byte_40F923F = 1;
  }
  if ( !explanationList )
    return (System_String_o *)StringLiteral_1/*""*/;
  v8 = *(_QWORD *)&explanationList->max_length;
  v9 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, method, v2, v3, v4);
  System_Text_StringBuilder___ctor_41908268(v9, 1024, 0LL);
  if ( (int)v8 >= 1 )
  {
    v13 = 0LL;
    v14 = (int)v8;
    do
    {
      if ( v13 >= explanationList->max_length )
      {
        sub_B17100(IsNullOrEmpty, v11, v12);
        sub_B170A0();
      }
      v15 = explanationList->m_Items[v13];
      IsNullOrEmpty = (System_Text_StringBuilder_o *)System_String__IsNullOrEmpty(v15, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( !v9 )
          goto LABEL_17;
        if ( System_Text_StringBuilder__get_Length(v9, 0LL) >= 1 )
          System_Text_StringBuilder__Append_41914240(v9, (System_String_o *)StringLiteral_282/*" ＋ "*/, 0LL);
        IsNullOrEmpty = System_Text_StringBuilder__Append_41914240(v9, v15, 0LL);
      }
      ++v13;
    }
    while ( (__int64)v13 < v14 );
  }
  if ( !v9 )
LABEL_17:
    sub_B170D4();
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v9->klass->vtable._3_ToString.method)(
                              v9,
                              v9->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


System_String_o *__fastcall SkillInfo__GetName(SkillInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  SkillEntity_o *Entity; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  LocalizationManager_c *v13; // x0

  if ( (byte_40F9241 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_1/*""*/, v6);
    byte_40F9241 = 1;
  }
  if ( this->fields.id < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              this->fields.id,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getEffectTitle(Entity, 0, v11);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_40F87E5 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    byte_40F87E5 = 1;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ServantEntity_o *v25; // x0
  WebViewManager_o *v26; // x0
  ServantSkillMaster_o *v27; // x0
  ServantSkillMaster_o *v28; // x22
  ServantSkillEntity_array *ServantSkillList; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  int max_length; // w8
  int v33; // w10
  ServantSkillEntity_o *v34; // x9
  ServantSkillEntity_o *v35; // x11
  int condQuestId; // w21
  int32_t condQuestPhase; // w22
  _BOOL4 IsQuestPhaseClear; // w20
  WebViewManager_o *v39; // x0
  ServantSkillReleaseMaster_o *v40; // x0
  System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___o *EntitiyListGroup; // x0
  int v42; // w27
  bool isUse; // w0
  bool v44; // w25
  int klass; // w9
  int v46; // w22
  int v47; // w8
  int v48; // w20
  int v49; // w22
  WebViewManager_o *v50; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x0
  SkillEntity_o *v52; // x0
  const MethodInfo *v53; // x2
  struct System_String_o *EffectTitle; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  _BOOL4 v61; // [xsp+4h] [xbp-DCh]
  _WORD v62[26]; // [xsp+8h] [xbp-D8h] BYREF
  int v63; // [xsp+3Ch] [xbp-A4h]
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v65; // [xsp+60h] [xbp-80h] BYREF
  ServantSkillEntity_o *entity; // [xsp+88h] [xbp-58h] BYREF

  if ( (byte_40F9242 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, userId);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantSkillMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillMaster___, v10);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__Dispose__, v14);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___Dispose__,
      v15);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___MoveNext__,
      v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__MoveNext__, v17);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___get_Current__,
      v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__get_Current__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__List_ServantSkillReleaseEntity___get_Value__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__GetEnumerator__, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_40F9242 = 1;
  }
  entity = 0LL;
  memset(&v64, 0, sizeof(v64));
  memset(&v65, 0, sizeof(v65));
  v63 = 0;
  if ( this->fields.id >= 1 && !this->fields.isUse )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_63;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_63;
    v25 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               MasterData_WarQuestSelectionMaster,
                               svtId,
                               (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !v25 )
      goto LABEL_63;
    if ( ServantEntity__checkIsHeroineSvt(v25, 0LL) )
      return;
    v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v26 )
      goto LABEL_63;
    v27 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)v26,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
    if ( !v27 )
      goto LABEL_63;
    v28 = v27;
    ServantSkillList = ServantSkillMaster__getServantSkillList(v27, svtId, 0LL);
    if ( !ServantSkillList )
      goto LABEL_63;
    max_length = ServantSkillList->max_length;
    if ( max_length >= 1 )
    {
      v33 = 0;
      v34 = 0LL;
      do
      {
        if ( v33 >= (unsigned int)max_length )
        {
          sub_B17100(ServantSkillList, v30, v31);
          sub_B170A0();
        }
        v35 = ServantSkillList->m_Items[v33];
        if ( !v35 )
          goto LABEL_63;
        ++v33;
        if ( v35->fields.skillId == this->fields.id )
          v34 = v35;
      }
      while ( v33 < max_length );
      if ( v34 && ServantSkillMaster__TryGetEntity(v28, &entity, svtId, v34->fields.num, v34->fields.priority + 1, 0LL) )
      {
        if ( !entity )
          goto LABEL_63;
        if ( !ServantSkillEntity__isEnable(entity, 0, 0LL) )
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
        v39 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v39 )
          goto LABEL_63;
        v40 = (ServantSkillReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)v39,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
        if ( !v40 )
          goto LABEL_63;
        v61 = IsQuestPhaseClear;
        EntitiyListGroup = ServantSkillReleaseMaster__GetEntitiyListGroup(v40, entity, 0LL);
        if ( !EntitiyListGroup )
          goto LABEL_63;
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
          (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v62,
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)EntitiyListGroup,
          (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___GetEnumerator__);
        v65 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v62;
        v42 = 0;
        while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
                  &v65,
                  (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___MoveNext__) )
        {
          if ( !v65.fields.current.fields.value )
            sub_B170D4();
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v62,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v65.fields.current.fields.value,
            (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity__GetEnumerator__);
          isUse = 0;
          v64 = *(System_Collections_Generic_List_Enumerator_T__o *)v62;
LABEL_39:
          v44 = isUse;
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v64,
                    (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__MoveNext__) )
          {
            if ( !v64.fields.current )
              sub_B170D4();
            klass = (int)v64.fields.current[2].klass;
            if ( klass == 1 || klass == 46 )
            {
              isUse = ServantSkillReleaseEntity__isUse(
                        (ServantSkillReleaseEntity_o *)v64.fields.current,
                        -1,
                        -1,
                        -1,
                        -1LL,
                        0LL);
              goto LABEL_39;
            }
          }
          *(_DWORD *)&v62[2 * v42 + 20] = 306;
          v46 = v63 + 1;
          v63 = v46;
          v42 = v46;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v64,
            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__Dispose__);
          if ( v46 )
          {
            v47 = v46 - 1;
            if ( *(_DWORD *)&v62[2 * v46 + 18] == 306 )
            {
              --v46;
              v42 = v47;
              v63 = v47;
            }
          }
          if ( v44 )
          {
            v48 = 1;
            goto LABEL_52;
          }
        }
        v48 = 0;
        v46 = v42;
LABEL_52:
        *(_DWORD *)&v62[2 * v46 + 20] = 340;
        v49 = ++v63;
        System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
          &v65,
          (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___Dispose__);
        if ( v49 && *(_DWORD *)&v62[2 * v49 + 18] == 340 )
          v63 = v49 - 1;
        if ( ((v61 | v48) & 1) != 0 )
        {
          v50 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( v50 )
          {
            v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)v50,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillMaster___);
            if ( entity )
            {
              if ( v51 )
              {
                v52 = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                         v51,
                                         entity->fields.skillId,
                                         (const MethodInfo_266F388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
                if ( entity )
                {
                  this->fields.id = entity->fields.skillId;
                  if ( v52 )
                  {
                    EffectTitle = SkillEntity__getEffectTitle(v52, 0, v53);
                    this->fields.title = EffectTitle;
                    sub_B16F98(
                      (BattleServantConfConponent_o *)&this->fields.title,
                      (System_Int32_array **)EffectTitle,
                      v55,
                      v56,
                      v57,
                      v58,
                      v59,
                      v60);
                    return;
                  }
                }
              }
            }
          }
LABEL_63:
          sub_B170D4();
        }
      }
    }
  }
}