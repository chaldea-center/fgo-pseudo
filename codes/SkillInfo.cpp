void __fastcall SkillInfo___ctor(SkillInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  void *v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  void *v11; // x1
  struct System_String_o **p_explanation; // x19
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B1744D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B1744D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields.id = 0LL;
  this->fields.charge = 0;
  v4 = StringLiteral_1/*""*/;
  this->fields.title = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.title, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = StringLiteral_1/*""*/;
  this->fields.explanation = (struct System_String_o *)StringLiteral_1/*""*/;
  p_explanation = &this->fields.explanation;
  sub_1BCA784((PartyOrganizationUtility_o *)p_explanation, (int64_t)v11, v13, v14, v15, v16, v17, v18);
  *((_BYTE *)p_explanation + 16) = 0;
  p_explanation[1] = 0LL;
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x24
  System_Text_StringBuilder_o *v11; // x20
  unsigned __int64 v12; // x22
  bool v13; // w25
  SkillInfo_o *v14; // x8
  System_String_o *explanation; // x21

  v5 = skillInfoList;
  if ( (byte_4B1744B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, isEquipExplanation, method);
    sub_1BCA7E0(&StringLiteral_359/*" ＋ "*/, v6, v7);
    skillInfoList = (SkillInfo_array *)sub_1BCA7E0(&StringLiteral_354/*" ……"*/, v8, v9);
    byte_4B1744B = 1;
  }
  if ( !v5 )
    goto LABEL_19;
  v10 = *(_QWORD *)&v5->max_length;
  v11 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, isEquipExplanation, method, v3);
  System_Text_StringBuilder___ctor_61556468(v11, 1024, 0LL);
  if ( (int)v10 >= 1 )
  {
    v12 = 0LL;
    v13 = !isEquipExplanation;
    do
    {
      if ( v12 >= v5->max_length )
        sub_1BCAA44(skillInfoList, isEquipExplanation);
      v14 = v5->m_Items[v12];
      if ( v14 )
      {
        explanation = v14->fields.explanation;
        skillInfoList = (SkillInfo_array *)System_String__IsNullOrEmpty(explanation, 0LL);
        if ( ((unsigned __int8)skillInfoList & 1) == 0 )
        {
          if ( !v11 )
            goto LABEL_19;
          if ( v12 >= 2 && !v13 )
          {
            System_Text_StringBuilder__Append_61563116(v11, (System_String_o *)StringLiteral_354/*" ……"*/, 0LL);
            return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v11->klass->vtable._3_ToString.method)(
                                        v11,
                                        v11->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          }
          if ( System_Text_StringBuilder__get_Length(v11, 0LL) >= 1 )
            System_Text_StringBuilder__Append_61563116(v11, (System_String_o *)StringLiteral_359/*" ＋ "*/, 0LL);
          skillInfoList = (SkillInfo_array *)System_Text_StringBuilder__Append_61563116(v11, explanation, 0LL);
        }
      }
    }
    while ( (unsigned int)v10 != ++v12 );
  }
  if ( !v11 )
LABEL_19:
    sub_1BCAA3C(skillInfoList, isEquipExplanation);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v11->klass->vtable._3_ToString.method)(
                              v11,
                              v11->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


System_String_o *__fastcall SkillInfo__GetMargeExplanation_41264548(
        System_String_array *explanationList,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x21
  System_Text_StringBuilder_o *v10; // x20
  System_Text_StringBuilder_o *IsNullOrEmpty; // x0
  __int64 v12; // x1
  unsigned __int64 v13; // x22
  __int64 v14; // x23
  System_String_o *v15; // x21

  if ( (byte_4B1744C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_359/*" ＋ "*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B1744C = 1;
  }
  if ( !explanationList )
    return (System_String_o *)StringLiteral_1/*""*/;
  v9 = *(_QWORD *)&explanationList->max_length;
  v10 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, method, v2, v3);
  System_Text_StringBuilder___ctor_61556468(v10, 1024, 0LL);
  if ( (int)v9 >= 1 )
  {
    v13 = 0LL;
    v14 = (unsigned int)v9;
    do
    {
      if ( v13 >= explanationList->max_length )
        sub_1BCAA44(IsNullOrEmpty, v12);
      v15 = explanationList->m_Items[v13];
      IsNullOrEmpty = (System_Text_StringBuilder_o *)System_String__IsNullOrEmpty(v15, 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( !v10 )
          goto LABEL_17;
        if ( System_Text_StringBuilder__get_Length(v10, 0LL) >= 1 )
          System_Text_StringBuilder__Append_61563116(v10, (System_String_o *)StringLiteral_359/*" ＋ "*/, 0LL);
        IsNullOrEmpty = System_Text_StringBuilder__Append_61563116(v10, v15, 0LL);
      }
      ++v13;
    }
    while ( v14 != v13 );
  }
  if ( !v10 )
LABEL_17:
    sub_1BCAA3C(IsNullOrEmpty, v12);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v10->klass->vtable._3_ToString.method)(
                              v10,
                              v10->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}


System_String_o *__fastcall SkillInfo__GetName(SkillInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  LocalizationManager_c *v18; // x0

  if ( (byte_4B1744E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B1744E = 1;
  }
  if ( this->fields.id < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v13);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.id,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getEffectTitle((SkillEntity_o *)Entity, 0, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
  if ( !byte_4B1194D )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    byte_4B1194D = 1;
  }
  v18 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
    v18 = LocalizationManager_TypeInfo;
  }
  return v18->static_fields->unknownNameText;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillInfo__OverwriteNextSkill(
        SkillInfo_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  void *Instance; // x0
  __int64 v40; // x1
  ServantSkillMaster_o *v41; // x22
  int v42; // w8
  int v43; // w10
  __int64 v44; // x9
  __int64 v45; // x11
  int condQuestId; // w21
  int32_t condQuestPhase; // w22
  _BOOL4 IsQuestPhaseClear; // w20
  __int64 v49; // x1
  _BOOL4 v50; // w21
  bool isUse; // w0
  bool v52; // w24
  _BOOL8 v53; // x0
  __int64 v54; // x1
  int klass; // w9
  struct System_String_o *EffectTitle; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v63; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+30h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v65; // [xsp+50h] [xbp-90h] BYREF
  ServantSkillEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_4B1744F & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, userId, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantSkillMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantSkillReleaseMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___GetEnumerator__,
      v19,
      v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__Dispose__, v21, v22);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___Dispose__,
      v23,
      v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__MoveNext__, v25, v26);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___MoveNext__,
      v27,
      v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__get_Current__, v29, v30);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___get_Current__,
      v31,
      v32);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_int__List_ServantSkillReleaseEntity___get_Value__,
      v33,
      v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantSkillReleaseEntity__GetEnumerator__, v35, v36);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38);
    byte_4B1744F = 1;
  }
  entity = 0LL;
  memset(&v64, 0, sizeof(v64));
  memset(&v65, 0, sizeof(v65));
  if ( this->fields.id >= 1 && !this->fields.isUse )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_55;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_55;
    Instance = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                 svtId,
                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_55;
    if ( !ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Instance, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_55;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
      if ( !Instance )
        goto LABEL_55;
      v41 = (ServantSkillMaster_o *)Instance;
      Instance = ServantSkillMaster__getServantSkillList((ServantSkillMaster_o *)Instance, svtId, 0LL);
      if ( !Instance )
        goto LABEL_55;
      v42 = *((_DWORD *)Instance + 6);
      if ( v42 >= 1 )
      {
        v43 = 0;
        v44 = 0LL;
        do
        {
          if ( v42 == v43 )
            sub_1BCAA44(Instance, v40);
          v45 = *((_QWORD *)Instance + v43 + 4);
          if ( !v45 )
            goto LABEL_55;
          ++v43;
          if ( *(_DWORD *)(v45 + 28) == this->fields.id )
            v44 = v45;
        }
        while ( v42 != v43 );
        if ( v44
          && ServantSkillMaster__TryGetEntity(
               v41,
               &entity,
               svtId,
               *(_DWORD *)(v44 + 20),
               *(_DWORD *)(v44 + 24) + 1,
               0LL) )
        {
          Instance = entity;
          if ( !entity )
            goto LABEL_55;
          Instance = (void *)ServantSkillEntity__isEnable(entity, 0, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_55;
            condQuestId = entity->fields.condQuestId;
            if ( condQuestId < 1 )
            {
              IsQuestPhaseClear = 0;
            }
            else
            {
              condQuestPhase = entity->fields.condQuestPhase;
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v40);
              IsQuestPhaseClear = CondType__IsQuestPhaseClear(userId, condQuestId, condQuestPhase, -1, 0, 0LL);
            }
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_55;
            Instance = DataManager__GetMasterData_object_(
                         (DataManager_o *)Instance,
                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantSkillReleaseMaster___);
            if ( !Instance )
              goto LABEL_55;
            Instance = ServantSkillReleaseMaster__GetEntitiyListGroup(
                         (ServantSkillReleaseMaster_o *)Instance,
                         entity,
                         0LL);
            if ( !Instance )
              goto LABEL_55;
            System_Collections_Generic_Dictionary_int__object___GetEnumerator(
              &v63,
              (System_Collections_Generic_Dictionary_int__object__o *)Instance,
              (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__List_ServantSkillReleaseEntity___GetEnumerator__);
            v65 = v63;
            do
            {
              v50 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                      &v65,
                      (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___MoveNext__);
              if ( !v50 )
                break;
              if ( !v65.fields._current.fields.value )
                sub_1BCAA3C(0LL, v49);
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v63,
                (System_Collections_Generic_List_object__o *)v65.fields._current.fields.value,
                (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantSkillReleaseEntity__GetEnumerator__);
              isUse = 0;
              *(_OWORD *)&v64.fields._list = *(_OWORD *)&v63.fields._dictionary;
              v64.fields._current = v63.fields._current.fields.key;
LABEL_38:
              v52 = isUse;
              while ( 1 )
              {
                v53 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v64,
                        (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__MoveNext__);
                if ( !v53 )
                  break;
                if ( !v64.fields._current )
                  sub_1BCAA3C(v53, v54);
                klass = (int)v64.fields._current[2].klass;
                if ( klass == 1 || klass == 46 )
                {
                  isUse = ServantSkillReleaseEntity__isUse(
                            (ServantSkillReleaseEntity_o *)v64.fields._current,
                            -1,
                            -1,
                            -1,
                            -1LL,
                            0LL);
                  goto LABEL_38;
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v64,
                (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantSkillReleaseEntity__Dispose__);
            }
            while ( !v52 );
            System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
              &v65,
              (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_ServantSkillReleaseEntity___Dispose__);
            if ( IsQuestPhaseClear || v50 )
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
                if ( entity )
                {
                  if ( Instance )
                  {
                    Instance = DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                 entity->fields.skillId,
                                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
                    if ( entity )
                    {
                      this->fields.id = entity->fields.skillId;
                      if ( Instance )
                      {
                        EffectTitle = SkillEntity__getEffectTitle((SkillEntity_o *)Instance, 0, 0LL);
                        this->fields.title = EffectTitle;
                        sub_1BCA784(
                          (PartyOrganizationUtility_o *)&this->fields.title,
                          (int64_t)EffectTitle,
                          v57,
                          v58,
                          v59,
                          v60,
                          v61,
                          v62);
                        return;
                      }
                    }
                  }
                }
              }
LABEL_55:
              sub_1BCAA3C(Instance, v40);
            }
          }
        }
      }
    }
  }
}