void ServantLimitAddMaster___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_593907F & 1) == 0 )
  {
    sub_21FFC50(&ServantLimitAddMaster_TypeInfo);
    sub_21FFC50(&StringLiteral_19748/*"effectFolder"*/);
    byte_593907F = 1;
  }
  v7 = StringLiteral_19748/*"effectFolder"*/;
  ServantLimitAddMaster_TypeInfo->static_fields->KEY_SCRIPT_EFFECT_FOLDER = (struct System_String_o *)StringLiteral_19748/*"effectFolder"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantLimitAddMaster_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void ServantLimitAddMaster___ctor(ServantLimitAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593907C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    byte_593907C = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v3,
    (const MethodInfo_3F551E8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  this->fields.isVoiceList = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.isVoiceList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    120,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string___ctor__);
}


int32_t ServantLimitAddMaster__GetBattleCharaId(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int32_t v5; // w19
  _BOOL8 v6; // x0
  __int64 v7; // x1
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v5 = svtId;
  entity = 0;
  v6 = ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, limitCount, v4);
  if ( v6 )
  {
    if ( !entity )
      sub_21FFECC(v6, v7);
    return *(_DWORD *)((char *)off_18 + (_QWORD)entity);
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
ServantLimitAddEntity_o *ServantLimitAddMaster__GetEntity(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_593907D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__GetEntity__);
    byte_593907D = 1;
  }
  PK = (Il2CppObject *)ServantLimitAddEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&limitCount);
  return (ServantLimitAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_3EE2044 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *ServantLimitAddMaster__GetLimitAddIndividuality(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  int v8; // w8
  int32_t LimitCountByDispLimit; // w20
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  struct System_Int32_array *individuality; // x8
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_593907B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_21FFC50(&ImageLimitCount_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593907B = 1;
  }
  v8 = *(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
  LimitCountByDispLimit = ImageLimitCount__GetLimitCountByDispLimit(dispLimitCount, limitCount, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Instance )
    goto LABEL_15;
  Instance = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(
                               (ServantLimitAddMaster_o *)Instance,
                               &entity,
                               svtId,
                               LimitCountByDispLimit,
                               v12);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_15:
    sub_21FFECC(Instance, v11);
  individuality = entity->fields.individuality;
  if ( !individuality )
    return 0;
  if ( individuality->max_length )
    return entity->fields.individuality;
  else
    return 0;
}


System_String_o *ServantLimitAddMaster__GetOverwriteSkillName(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t skillId,
        System_String_o *defaultSkillName,
        const MethodInfo *method)
{
  System_String_o *v7; // x19
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v7 = defaultSkillName;
  entity = 0;
  if ( ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, limitCount, (const MethodInfo *)defaultSkillName) )
  {
    if ( !entity )
      sub_21FFECC(0, v8);
    return ServantLimitAddEntity__GetOverwriteSkillName(entity, skillId, v7, v9);
  }
  return v7;
}


System_String_o *ServantLimitAddMaster__GetOverwriteTDName(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t dispLimitCount,
        System_String_o *orginalTDName,
        int32_t tdLv,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x4
  __int64 v14; // x1
  int v15; // w8
  System_String_o *v16; // x20
  Il2CppObject *v17; // x21
  Il2CppObject *v18; // x0
  System_String_o *v20; // x19
  Il2CppObject *OverwriteTDName; // x0
  int32_t v23; // [xsp+4h] [xbp-4Ch] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_593907A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_9735/*"NP_NAME"*/);
    sub_21FFC50(&StringLiteral_9736/*"NP_NAME_LEVEL"*/);
    byte_593907A = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_21;
  if ( ServantEntity__IsNameTrue((ServantEntity_o *)Instance, 0)
    && ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, dispLimitCount, v13) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_21;
    if ( ServantLimitAddEntity__ExistOverwriteTDInfo(entity, v12) )
    {
      v15 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( tdLv < 1 )
      {
        if ( !v15 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9735/*"NP_NAME"*/, 0);
        if ( entity )
        {
          v20 = (System_String_o *)Instance;
          OverwriteTDName = (Il2CppObject *)ServantLimitAddEntity__GetOverwriteTDName(entity, v12);
          return System_String__Format(v20, OverwriteTDName, 0);
        }
      }
      else
      {
        if ( !v15 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9736/*"NP_NAME_LEVEL"*/, 0);
        if ( entity )
        {
          v16 = (System_String_o *)Instance;
          v17 = (Il2CppObject *)ServantLimitAddEntity__GetOverwriteTDName(entity, v12);
          v23 = tdLv;
          v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v23);
          return System_String__Format_75484576(v16, v17, v18, 0);
        }
      }
LABEL_21:
      sub_21FFECC(Instance, v12);
    }
  }
  return orginalTDName;
}


// local variable allocation has failed, the output may be wrong!
bool ServantLimitAddMaster__TryGetEntity(
        ServantLimitAddMaster_o *this,
        ServantLimitAddEntity_o **entity,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_593907E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__TryGetEntity__);
    byte_593907E = 1;
  }
  PK = (Il2CppObject *)ServantLimitAddEntity__CreatePK(svtId, limitCount, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__TryGetEntity__);
}


System_String_o *ServantLimitAddMaster__getBattleChrId(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  _BOOL8 v5; // x0
  __int64 v6; // x1
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF
  int32_t battleCharaId; // [xsp+1Ch] [xbp-4h] BYREF

  battleCharaId = svtId;
  v5 = ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, limitCount, v4);
  if ( v5 )
  {
    if ( !entity )
      sub_21FFECC(v5, v6);
    battleCharaId = entity->fields.battleCharaId;
  }
  return System_Int32__ToString((int32_t)&battleCharaId, 0);
}


void ServantLimitAddMaster__getCostumeId(
        ServantLimitAddMaster_o *this,
        int32_t *svtId,
        int32_t *imageLimitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int32_t v6; // w2
  int32_t v8; // w3
  _BOOL8 v9; // x0
  __int64 v10; // x1
  ServantLimitAddEntity_o *v11; // x8
  int32_t v12; // w8
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  v6 = *svtId;
  v8 = *imageLimitCount;
  entity = 0;
  v9 = ServantLimitAddMaster__TryGetEntity(this, &entity, v6, v8, v4);
  if ( v9 )
  {
    v11 = entity;
    if ( !entity )
      sub_21FFECC(v9, v10);
    *svtId = *(_DWORD *)((char *)off_18 + (_QWORD)entity);
    v12 = *(_DWORD *)((char *)off_18 + (_QWORD)v11 + 4);
  }
  else
  {
    v12 = 0;
  }
  *imageLimitCount = v12;
}


int32_t ServantLimitAddMaster__getScriptIntValue(
        ServantLimitAddEntity_o *limitAddEnt,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  if ( limitAddEnt )
    return ServantLimitAddEntity__getScript(limitAddEnt, key, defVal, method);
  else
    return defVal;
}


int32_t ServantLimitAddMaster__getVoiceId(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_Dictionary_int__bool__o *isVoiceList; // x0
  __int64 v9; // x1
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5939077 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    byte_5939077 = 1;
  }
  entity = 0;
  isVoiceList = (System_Collections_Generic_Dictionary_int__bool__o *)ServantLimitAddMaster__TryGetEntity(
                                                                        this,
                                                                        &entity,
                                                                        svtId,
                                                                        limitCount,
                                                                        v4);
  if ( ((unsigned __int8)isVoiceList & 1) != 0 )
  {
    if ( entity )
      return *(int *)((char *)&dword_30 + (_QWORD)entity);
LABEL_10:
    sub_21FFECC(isVoiceList, v9);
  }
  isVoiceList = this->fields.isVoiceList;
  if ( !isVoiceList )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
         isVoiceList,
         svtId,
         (const MethodInfo_3F55D94 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
  {
    return svtId;
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantLimitAddMaster__getVoiceIndex(
        ServantLimitAddMaster_o *this,
        int32_t *voiceId,
        int32_t *voicePrefix,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *isVoiceList; // x0
  __int64 v12; // x1
  ServantLimitAddEntity_o *v13; // x8
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5939078 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    byte_5939078 = 1;
  }
  entity = 0;
  isVoiceList = (System_Collections_Generic_Dictionary_int__bool__o *)ServantLimitAddMaster__TryGetEntity(
                                                                        this,
                                                                        &entity,
                                                                        svtId,
                                                                        limitCount,
                                                                        *(const MethodInfo **)&limitCount);
  if ( ((unsigned __int8)isVoiceList & 1) != 0 )
  {
    v13 = entity;
    if ( entity )
    {
      *voiceId = *(int *)((char *)&dword_30 + (_QWORD)entity);
      *voicePrefix = *(_DWORD *)((char *)&word_34 + (_QWORD)v13);
      return;
    }
LABEL_10:
    sub_21FFECC(isVoiceList, v12);
  }
  isVoiceList = this->fields.isVoiceList;
  *voicePrefix = 0;
  if ( !isVoiceList )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
         isVoiceList,
         svtId,
         (const MethodInfo_3F55D94 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
  {
    *voiceId = svtId;
  }
  else
  {
    *voiceId = 0;
  }
}


System_Int32_array *ServantLimitAddMaster__getVoiceLimitCountList(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t maxLimitCount,
        System_Int32_array *costumeIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x19
  Il2CppObject *Item; // x0
  Il2CppObject *v11; // x1
  const MethodInfo *v12; // x4
  int32_t i; // w24
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t voicePrefix; // w26
  int32_t svtVoiceId; // w29
  __int128 v21; // q0
  bool v22; // zf
  int v23; // w28
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  MissionNaviTransitionBoardItem_o *v28; // x0
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x0
  __int64 v33; // x8
  System_Collections_Generic_List_object__o *v34; // x0
  unsigned __int64 v35; // x24
  __int64 max_length; // x25
  int32_t v37; // w3
  int32_t v38; // w26
  int32_t v39; // w29
  __int128 v40; // q0
  bool v41; // zf
  int v42; // w28
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  Il2CppObject *v52; // x20
  unsigned __int64 j; // x21
  unsigned __int64 monitor_low; // x8
  int klass_high; // w9
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+0h] [xbp-A0h] BYREF
  ServantLimitAddEntity_o *v58; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+20h] [xbp-80h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_5939079 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__get_Current__);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantLimitAddEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ServantLimitAddEntity__TypeInfo);
    byte_5939079 = 1;
  }
  entity = 0;
  memset(&v59, 0, sizeof(v59));
  v58 = 0;
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantLimitAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantLimitAddEntity___ctor__);
  if ( (maxLimitCount & 0x80000000) == 0 )
  {
    for ( i = 0; i <= maxLimitCount; ++i )
    {
      Item = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, i, v12);
      if ( ((unsigned __int8)Item & 1) != 0 )
      {
        if ( !entity || !v9 )
          goto LABEL_76;
        svtVoiceId = entity->fields.svtVoiceId;
        voicePrefix = entity->fields.voicePrefix;
        System_Collections_Generic_List_object___GetEnumerator(
          &v57,
          v9,
          (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__);
        v21 = *(_OWORD *)&v57.fields._list;
        v22 = svtVoiceId == svtId && voicePrefix == 0;
        v57.fields._list = 0;
        *(_QWORD *)&v57.fields._index = &v59;
        *(_OWORD *)&v59.fields._list = v21;
        v23 = v22;
        v59.fields._current = v57.fields._current;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v59,
                  (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__) )
        {
          if ( v59.fields._current )
          {
            if ( svtVoiceId == LODWORD(v59.fields._current[3].klass)
              && voicePrefix == HIDWORD(v59.fields._current[3].klass) )
            {
LABEL_21:
              entity = 0;
              break;
            }
          }
          else if ( v23 )
          {
            goto LABEL_21;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v59,
          (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__);
        v11 = (Il2CppObject *)entity;
        if ( entity )
        {
          items = v9->fields._items;
          v25 = Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_76;
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v33 = v25[4];
            v34 = v9;
LABEL_34:
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              v11,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v33 + 192) + 112LL));
            continue;
          }
          v27 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v11;
          v28 = (MissionNaviTransitionBoardItem_o *)(v27 + 4);
LABEL_31:
          sub_21FFBF4(v28, (int32_t)v11, v14, v15, (int32_t)v12, v16, v17, v18);
        }
      }
      else if ( !i )
      {
        if ( !v9 )
          goto LABEL_76;
        v29 = v9->fields._items;
        v30 = Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__;
        ++v9->fields._version;
        if ( !v29 )
          goto LABEL_76;
        v31 = v9->fields._size;
        if ( (unsigned int)v31 >= LODWORD(v29->max_length) )
        {
          v33 = v30[4];
          v34 = v9;
          v11 = 0;
          goto LABEL_34;
        }
        v32 = &v29->obj.klass + v31;
        LODWORD(v11) = 0;
        v9->fields._size = v31 + 1;
        v32[4] = 0;
        v28 = (MissionNaviTransitionBoardItem_o *)(v32 + 4);
        goto LABEL_31;
      }
    }
  }
  if ( costumeIds && (int)costumeIds->max_length >= 1 )
  {
    v35 = 0;
    max_length = (unsigned int)costumeIds->max_length;
    do
    {
      if ( v35 >= LODWORD(costumeIds->max_length) )
LABEL_77:
        sub_21FFED4(Item);
      v37 = costumeIds->m_Items[v35];
      if ( v37 >= 1 )
      {
        Item = (Il2CppObject *)ServantLimitAddMaster__TryGetEntity(this, &v58, svtId, v37, v12);
        if ( ((unsigned __int8)Item & 1) != 0 )
        {
          if ( !v58 || !v9 )
            goto LABEL_76;
          v39 = v58->fields.svtVoiceId;
          v38 = v58->fields.voicePrefix;
          System_Collections_Generic_List_object___GetEnumerator(
            &v57,
            v9,
            (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantLimitAddEntity__GetEnumerator__);
          v40 = *(_OWORD *)&v57.fields._list;
          v41 = v39 == svtId && v38 == 0;
          v57.fields._list = 0;
          *(_QWORD *)&v57.fields._index = &v59;
          *(_OWORD *)&v59.fields._list = v40;
          v42 = v41;
          v59.fields._current = v57.fields._current;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v59,
                    (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__MoveNext__) )
          {
            if ( v59.fields._current )
            {
              if ( v39 == LODWORD(v59.fields._current[3].klass) && v38 == HIDWORD(v59.fields._current[3].klass) )
              {
LABEL_57:
                v58 = 0;
                break;
              }
            }
            else if ( v42 )
            {
              goto LABEL_57;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v59,
            (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantLimitAddEntity__Dispose__);
          v11 = (Il2CppObject *)v58;
          if ( v58 )
          {
            v48 = v9->fields._items;
            v49 = Method_System_Collections_Generic_List_ServantLimitAddEntity__Add__;
            ++v9->fields._version;
            if ( !v48 )
              goto LABEL_76;
            v50 = v9->fields._size;
            if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                v11,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
            }
            else
            {
              v51 = &v48->obj.klass + v50;
              v9->fields._size = v50 + 1;
              v51[4] = (Il2CppClass *)v11;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)(v51 + 4),
                (int32_t)v11,
                v43,
                v44,
                (int32_t)v12,
                v45,
                v46,
                v47);
            }
          }
        }
      }
      ++v35;
    }
    while ( v35 != max_length );
  }
  if ( !v9 || (Item = (Il2CppObject *)sub_21FFD10(int___TypeInfo, (unsigned int)v9->fields._size)) == 0 )
LABEL_76:
    sub_21FFECC(Item, v11);
  v52 = Item;
  if ( SLODWORD(Item[1].monitor) >= 1 )
  {
    for ( j = 0; (__int64)j < (int)monitor_low; ++j )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v9,
               j,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Item__);
      if ( Item )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v9,
                 j,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantLimitAddEntity__get_Item__);
        if ( !Item )
          goto LABEL_76;
        monitor_low = LODWORD(v52[1].monitor);
        if ( j >= monitor_low )
          goto LABEL_77;
        klass_high = HIDWORD(Item[1].klass);
      }
      else
      {
        monitor_low = LODWORD(v52[1].monitor);
        if ( j >= monitor_low )
          goto LABEL_77;
        klass_high = 0;
      }
      *((_DWORD *)&v52[2].klass + j) = klass_high;
    }
  }
  return (System_Int32_array *)v52;
}


int32_t ServantLimitAddMaster__getVoicePrefix(
        ServantLimitAddMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  _BOOL8 v5; // x0
  __int64 v6; // x1
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  v5 = ServantLimitAddMaster__TryGetEntity(this, &entity, svtId, limitCount, v4);
  if ( !v5 )
    return 0;
  if ( !entity )
    sub_21FFECC(v5, v6);
  return entity->fields.voicePrefix;
}


bool ServantLimitAddMaster__preProcess(ServantLimitAddMaster_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  struct ServantMaster_o **p_servantMaster; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x2

  if ( (byte_5939076 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939076 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___),
        this->fields.servantMaster = (struct ServantMaster_o *)MasterData_object,
        p_servantMaster = &this->fields.servantMaster,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.servantMaster,
          (int32_t)MasterData_object,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        (Instance = (DataManager_o *)this->fields.isVoiceList) == 0)
    || (System_Collections_Generic_Dictionary_int__bool___Clear(
          (System_Collections_Generic_Dictionary_int__bool__o *)Instance,
          (const MethodInfo_3F55D28 *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__),
        (Instance = (DataManager_o *)*p_servantMaster) == 0) )
  {
    sub_21FFECC(Instance, v4);
  }
  ServantMaster__MargeServantVoiceId((ServantMaster_o *)Instance, this->fields.isVoiceList, v13);
  return 1;
}