void __fastcall ServantVoiceEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  System_Int32_array **v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  int v11; // w8
  System_Int32_array **v12; // x1
  BattleServantConfConponent_o *static_fields; // x0

  if ( (byte_40FCB0A & 1) == 0 )
  {
    sub_B16FFC(&ServantVoiceEntity_TypeInfo, v1);
    sub_B16FFC(&GameEventType_TYPE___TypeInfo, v3);
    byte_40FCB0A = 1;
  }
  v4 = (System_Int32_array **)sub_B17014(GameEventType_TYPE___TypeInfo, 2LL, v2);
  if ( !v4 )
    sub_B170D4();
  v11 = *((_DWORD *)v4 + 6);
  v12 = v4;
  if ( !v11 || (*((_DWORD *)v4 + 8) = 12, v11 == 1) )
  {
    sub_B17100(v4, v4, v5);
    sub_B170A0();
  }
  *((_DWORD *)v4 + 9) = 22;
  static_fields = (BattleServantConfConponent_o *)ServantVoiceEntity_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v12;
  sub_B16F98(static_fields, v12, v5, v6, v7, v8, v9, v10);
}


void __fastcall ServantVoiceEntity___ctor(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FCB09 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FCB09 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantVoiceEntity__CreatePK(
        int32_t id,
        int32_t voicePrefix,
        int32_t type,
        const MethodInfo *method)
{
  if ( (byte_40FCAE6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&voicePrefix);
    byte_40FCAE6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           voicePrefix,
           type,
           (const MethodInfo_18C25C8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantVoiceEntity__CreatePrimaryKey(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t voicePrefix; // w20
  int32_t id; // w21
  int32_t type; // w19

  if ( (byte_40FCAE5 & 1) == 0 )
  {
    sub_B16FFC(&ServantVoiceEntity_TypeInfo, method);
    byte_40FCAE5 = 1;
  }
  id = this->fields.id;
  voicePrefix = this->fields.voicePrefix;
  type = this->fields.type;
  if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
  }
  return ServantVoiceEntity__CreatePK(id, voicePrefix, type, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantVoiceEntity__FriendShipRankWithVoice(
        ServantVoiceEntity_o *this,
        int32_t rankNow,
        const MethodInfo *method)
{
  int v3; // w19
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // x9
  struct SvtVoiceInfo_array *scriptJson; // x9
  il2cpp_array_size_t v11; // w8
  il2cpp_array_size_t max_length; // w10
  SvtVoiceInfo_o *v13; // x9
  struct ServantVoiceCond_array *conds; // x9
  __int64 v15; // x12
  __int64 v16; // x10
  ServantVoiceCond_o *v17; // x13
  __int64 value; // x13

  v3 = rankNow;
  if ( (byte_40FCAF5 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, *(_QWORD *)&rankNow);
    byte_40FCAF5 = 1;
  }
  v5 = sub_B17014(int___TypeInfo, (unsigned int)v3, method);
  if ( !v5 )
    goto LABEL_26;
  v8 = *(unsigned int *)(v5 + 24);
  if ( (__int64)(v8 << 32) >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= v8 )
        goto LABEL_33;
      *(_DWORD *)(v5 + 32 + 4 * v9++) = 0;
    }
    while ( (__int64)v9 < (int)v8 );
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_26:
    sub_B170D4();
  v11 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v11 >= (int)max_length )
      break;
    if ( v11 >= max_length )
      goto LABEL_33;
    v13 = scriptJson->m_Items[v11];
    if ( !v13 )
      goto LABEL_26;
    conds = v13->fields.conds;
    if ( conds )
    {
      v15 = *(_QWORD *)&conds->max_length;
      if ( v15 )
      {
        if ( (int)v15 >= 1 )
        {
          v16 = 0LL;
          while ( (unsigned int)v16 < (unsigned int)v15 )
          {
            v17 = conds->m_Items[v16];
            if ( !v17 )
              goto LABEL_26;
            if ( v17->fields.condType == 3 )
            {
              value = v17->fields.value;
              if ( (_DWORD)value == v3 )
                return v3;
              if ( (int)value < v3 )
              {
                if ( (unsigned int)value >= *(_DWORD *)(v5 + 24) )
                  break;
                ++*(_DWORD *)(v5 + 4 * value + 32);
                v15 = *(_QWORD *)&conds->max_length;
              }
            }
            if ( (int)++v16 >= (int)v15 )
              goto LABEL_25;
          }
LABEL_33:
          sub_B17100(v5, v6, v7);
          sub_B170A0();
        }
      }
    }
LABEL_25:
    scriptJson = this->fields.scriptJson;
    ++v11;
    if ( !scriptJson )
      goto LABEL_26;
  }
  while ( --v3 >= 0 )
  {
    if ( (unsigned int)v3 >= *(_DWORD *)(v5 + 24) )
      goto LABEL_33;
    if ( *(int *)(v5 + 4LL * v3 + 32) > 0 )
      return v3;
  }
  return -1;
}


int32_t __fastcall ServantVoiceEntity__GetChangeLimitVoiceFriendshipLv(
        ServantVoiceEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  int max_length; // w9
  unsigned int v5; // w10
  __int64 value; // x0
  SvtVoiceInfo_o *v7; // x11
  struct ServantVoiceCond_array *conds; // x12
  __int64 v9; // x11
  ServantVoiceCond_o *v10; // x13
  __int64 v11; // x13
  ServantVoiceCond_o **m_Items; // x12
  ServantVoiceCond_o *v13; // x14

  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_23:
    sub_B170D4();
  max_length = scriptJson->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    value = 0LL;
    while ( 1 )
    {
      if ( v5 >= max_length )
      {
LABEL_24:
        sub_B17100(value, method, v2);
        sub_B170A0();
      }
      v7 = scriptJson->m_Items[v5];
      if ( !v7 )
        goto LABEL_23;
      conds = v7->fields.conds;
      if ( conds )
      {
        v9 = *(_QWORD *)&conds->max_length;
        if ( v9 )
        {
          if ( !(_DWORD)v9 )
            goto LABEL_24;
          v10 = conds->m_Items[0];
          if ( !v10 )
            goto LABEL_23;
          if ( v10->fields.condType == 11 )
          {
            if ( (_DWORD)v9 == 1 )
              return value;
            if ( (int)v9 >= 1 )
            {
              v11 = 0LL;
              m_Items = conds->m_Items;
              while ( 1 )
              {
                v13 = m_Items[v11];
                if ( !v13 )
                  goto LABEL_23;
                if ( v13->fields.condType == 20 )
                  break;
                if ( (int)++v11 >= (int)v9 )
                  goto LABEL_19;
              }
              value = (unsigned int)v13->fields.value;
            }
          }
        }
      }
LABEL_19:
      if ( (int)++v5 >= max_length )
        return value;
    }
  }
  LODWORD(value) = 0;
  return value;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__GetFirstGetVoiceList(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( this->fields.type == 3 && !System_String__IsNullOrEmpty(labelName, 0LL) )
    return ServantVoiceEntity__getVoiceList_30036932(this, 3, labelName, 0LL, 1, v5);
  else
    return 0LL;
}


SvtVoiceInfo_o *__fastcall ServantVoiceEntity__GetPlayVoiceLabelInfo(
        ServantVoiceEntity_o *this,
        System_String_o *playVoiceLabel,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  SvtVoiceInfo_o *v8; // x21
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned __int64 v10; // x22
  unsigned __int64 max_length; // x9
  struct ServantVoiceData_array *infos; // x9
  ServantVoiceData_o *v13; // x8

  IsNullOrEmpty = System_String__IsNullOrEmpty(playVoiceLabel, 0LL);
  v8 = 0LL;
  if ( !IsNullOrEmpty )
  {
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
LABEL_13:
      sub_B170D4();
    v10 = 0LL;
    while ( 1 )
    {
      max_length = scriptJson->max_length;
      if ( (__int64)v10 >= (int)max_length )
        return 0LL;
      if ( v10 >= max_length )
      {
        sub_B17100(IsNullOrEmpty, v6, v7);
        sub_B170A0();
      }
      v8 = scriptJson->m_Items[v10];
      if ( v8 )
      {
        infos = v8->fields.infos;
        if ( !infos )
          goto LABEL_13;
        if ( (int)infos->max_length >= 1 )
        {
          v13 = infos->m_Items[0];
          if ( !v13 )
            goto LABEL_13;
          IsNullOrEmpty = System_String__op_Equality(v13->fields.id, playVoiceLabel, 0LL);
          if ( IsNullOrEmpty )
            return v8;
          scriptJson = this->fields.scriptJson;
        }
      }
      ++v10;
      if ( !scriptJson )
        goto LABEL_13;
    }
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantVoiceEntity__GetSummonScriptId(
        ServantVoiceEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  VoicePlayCondMaster_o *v11; // x21
  __int64 v12; // x23
  int max_length; // w9
  SvtVoiceInfo_o *v14; // x8
  struct ServantVoiceData_array *infos; // x9
  ServantVoiceData_o *v16; // x9
  System_String_o *summonScript; // x22

  if ( (byte_40FCB08 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FCB08 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_16:
    sub_B170D4();
  }
  v11 = (VoicePlayCondMaster_o *)MasterData_WarQuestSelectionMaster;
  v12 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v12 >= max_length )
      return 0LL;
    if ( (unsigned int)v12 >= max_length )
      goto LABEL_19;
    v14 = scriptJson->m_Items[v12];
    if ( !v14 )
      goto LABEL_16;
    infos = v14->fields.infos;
    if ( !infos )
      goto LABEL_16;
    if ( !infos->max_length )
    {
LABEL_19:
      sub_B17100(MasterData_WarQuestSelectionMaster, v8, v9);
      sub_B170A0();
    }
    v16 = infos->m_Items[0];
    if ( !v16 || !v11 )
      goto LABEL_16;
    summonScript = v14->fields.summonScript;
    MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)VoicePlayCondMaster__isVoicePlay(
                                                                        v11,
                                                                        svtId,
                                                                        v16->fields.id,
                                                                        0LL,
                                                                        -1LL,
                                                                        -1,
                                                                        0LL);
    if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
    {
      MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)System_String__IsNullOrEmpty(summonScript, 0LL);
      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) == 0 )
        return summonScript;
    }
    scriptJson = this->fields.scriptJson;
    ++v12;
    if ( !scriptJson )
      goto LABEL_16;
  }
}


bool __fastcall ServantVoiceEntity__IsAvailableHomeAndGrowth(
        ServantVoiceEntity_o *this,
        ServantVoiceCond_o *cond,
        UserGameEntity_o *userEntity,
        UserServantEntity_o *userSvtEntity,
        UserServantEntity_array *usrSvtList,
        int32_t friendshipRankWithVoice,
        int32_t friendshipRankNow,
        bool isBeforeFriendship,
        const MethodInfo *method)
{
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  char isQuestClearState; // w20
  __int64 birthDay; // x19
  int32_t Year; // w1
  int32_t Month; // w19
  int32_t Day; // w19
  int32_t LimitCount; // w0
  bool v35; // cc
  int32_t value; // w8
  bool v37; // zf
  WebViewManager_o *Instance; // x0
  EventMaster_o *MasterData_WarQuestSelectionMaster; // x19
  System_Collections_Generic_List_EventEntity____o *EnableEntityLists; // x20
  WebViewManager_o *v41; // x0
  WarQuestSelectionMaster_o *v42; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v43; // x19
  Il2CppObject *current; // x23
  void *monitor; // x24
  unsigned int v46; // w25
  __int64 v47; // x8
  EventDetailEntity_o *Entity; // x0
  _BOOL8 isEventVoicePlay; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  bool IsWarNew; // w0
  signed int max_length; // w8
  il2cpp_array_size_t i; // w22
  Il2CppClass **v55; // x24
  Il2CppClass *v56; // x8
  UserServantEntity_o **v57; // x24
  Il2CppClass *v58; // t1
  Il2CppClass *parent; // x20
  Il2CppClass *declaringType; // x21
  int32_t v61; // w0
  int32_t v62; // w20
  WebViewManager_o *v63; // x0
  ServantGroupMaster_o *v64; // x0
  ServantGroupEntity_array *EntityListById; // x0
  ServantGroupEntity_array *v66; // x22
  __int64 v67; // x20
  __int64 v68; // x23
  signed int v69; // w8
  int v70; // w21
  il2cpp_array_size_t v71; // w25
  Il2CppClass **v72; // x26
  Il2CppClass *v73; // x8
  UserServantEntity_o **v74; // x26
  Il2CppClass *v75; // t1
  Il2CppClass *v76; // x20
  Il2CppClass *v77; // x23
  int v78; // w20
  int v79; // w8
  unsigned int v80; // w9
  ServantGroupEntity_o *v81; // x10
  int32_t v82; // w19
  QuestTree_o *v83; // x0
  System_Collections_Generic_List_Enumerator_T__o v85; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v86; // [xsp+20h] [xbp-70h] BYREF
  uint64_t list; // [xsp+38h] [xbp-58h] BYREF
  uint64_t dateData; // [xsp+40h] [xbp-50h] BYREF
  int32_t v89; // [xsp+4Ch] [xbp-44h] BYREF
  System_DateTime_o v90; // 0:x0.8
  System_DateTime_o v91; // 0:x0.8
  System_DateTime_o v92; // 0:x0.8
  System_DateTime_o v93; // 0:x0.8
  System_DateTime_o v94; // 0:x0.8
  System_DateTime_o v95; // 0:x0.8
  System_DateTime_o v96; // 0:x0.8
  System_DateTime_o v97; // 0:x0.8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v100; // 0:x0.16

  if ( (byte_40FCAFE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, cond);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantGroupMaster___, v17);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventEntity____Dispose__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventEntity____MoveNext__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventEntity____get_Current__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity____GetEnumerator__, v22);
    sub_B16FFC(&NetworkManager_TypeInfo, v23);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
    sub_B16FFC(&ServantVoiceEntity_TypeInfo, v25);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v27);
    this = (ServantVoiceEntity_o *)sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v28);
    byte_40FCAFE = 1;
  }
  v89 = 0;
  list = 0LL;
  dateData = 0LL;
  memset(&v86, 0, sizeof(v86));
  if ( !cond )
LABEL_105:
    sub_B170D4();
  isQuestClearState = 0;
  switch ( cond->fields.condType )
  {
    case 1:
      if ( !userEntity )
        goto LABEL_105;
      birthDay = userEntity->fields.birthDay;
      if ( birthDay < 1 )
        goto LABEL_91;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
      list = NetworkManager__getDateTime_23685272(birthDay, 0LL).fields.dateData;
      v90.fields.dateData = (uint64_t)&list;
      if ( System_DateTime__get_Month(v90, 0LL) == 2 )
      {
        v91.fields.dateData = (uint64_t)&list;
        if ( System_DateTime__get_Day(v91, 0LL) == 29 )
        {
          v92.fields.dateData = (uint64_t)&dateData;
          Year = System_DateTime__get_Year(v92, 0LL);
          v85.fields.list = 0LL;
          v93.fields.dateData = (uint64_t)&v85;
          System_DateTime___ctor_15184400(v93, Year, 2, 29, 0LL);
          list = (uint64_t)v85.fields.list;
        }
      }
      v94.fields.dateData = (uint64_t)&dateData;
      Month = System_DateTime__get_Month(v94, 0LL);
      v95.fields.dateData = (uint64_t)&list;
      if ( Month != System_DateTime__get_Month(v95, 0LL) )
        goto LABEL_91;
      v96.fields.dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v96, 0LL);
      v97.fields.dateData = (uint64_t)&list;
      LimitCount = System_DateTime__get_Day(v97, 0LL);
LABEL_46:
      v37 = Day == LimitCount;
LABEL_47:
      isQuestClearState = v37;
      return isQuestClearState & 1;
    case 2:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_105;
      MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
      }
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_105;
      EnableEntityLists = EventMaster__GetEnableEntityLists(
                            MasterData_WarQuestSelectionMaster,
                            ServantVoiceEntity_TypeInfo->static_fields->EVENT_TYPES_VOICE,
                            0,
                            0LL);
      v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v41 )
        goto LABEL_105;
      v42 = DataManager__GetMasterData_WarQuestSelectionMaster_(
              (DataManager_o *)v41,
              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( !EnableEntityLists )
        goto LABEL_105;
      v43 = (DataMasterBase_WarMaster__WarEntity__int__o *)v42;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v85,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EnableEntityLists,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventEntity____GetEnumerator__);
      v86 = v85;
      isQuestClearState = 0;
LABEL_41:
      while ( 1 )
      {
        isEventVoicePlay = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                             &v86,
                             (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventEntity____MoveNext__);
        if ( !isEventVoicePlay )
          break;
        current = v86.fields.current;
        if ( v86.fields.current )
        {
          monitor = v86.fields.current[1].monitor;
          if ( monitor )
          {
            if ( (int)monitor >= 1 )
            {
              if ( !(_DWORD)monitor )
              {
LABEL_110:
                sub_B17100(isEventVoicePlay, v50, v51);
                sub_B170A0();
              }
              v46 = 0;
              while ( 1 )
              {
                v47 = *((_QWORD *)&current[2].klass + (int)v46);
                if ( !v47 )
                  sub_B170D4();
                if ( !v43 )
                  sub_B170D4();
                Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  v43,
                                                  *(_DWORD *)(v47 + 16),
                                                  (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
                if ( !Entity )
                  sub_B170D4();
                isEventVoicePlay = EventDetailEntity__isEventVoicePlay(Entity, 0LL);
                if ( isEventVoicePlay )
                {
                  isQuestClearState = 1;
                  goto LABEL_41;
                }
                if ( (int)++v46 >= (int)monitor )
                  break;
                if ( v46 >= LODWORD(current[1].monitor) )
                  goto LABEL_110;
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v86,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventEntity____Dispose__);
      return isQuestClearState & 1;
    case 3:
      value = cond->fields.value;
      v37 = value == friendshipRankWithVoice;
      v35 = value <= friendshipRankWithVoice;
      if ( isBeforeFriendship )
        goto LABEL_94;
      goto LABEL_47;
    case 4:
      v89 = cond->fields.value;
      if ( !usrSvtList )
        goto LABEL_105;
      max_length = usrSvtList->max_length;
      if ( max_length < 1 )
        goto LABEL_91;
      for ( i = 0; (int)i < max_length; ++i )
      {
        if ( i >= max_length )
          goto LABEL_106;
        v55 = &usrSvtList->obj.klass + (int)i;
        v58 = v55[4];
        v57 = (UserServantEntity_o **)(v55 + 4);
        v56 = v58;
        if ( !v58 )
          goto LABEL_105;
        declaringType = v56->_1.declaringType;
        parent = v56->_1.parent;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v98.fields.currentCryptoKey = declaringType;
        *(_QWORD *)&v98.fields.fakeValue = parent;
        v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v98, 0LL);
        this = (ServantVoiceEntity_o *)System_Int32__Equals_38275732((int32_t)&v89, v61, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( i >= usrSvtList->max_length )
            goto LABEL_106;
          if ( !*v57 )
            goto LABEL_105;
          this = (ServantVoiceEntity_o *)UserServantEntity__IsEventJoin(*v57, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_103;
        }
        max_length = usrSvtList->max_length;
      }
LABEL_91:
      isQuestClearState = 0;
      return isQuestClearState & 1;
    case 5:
      v62 = cond->fields.value;
      v63 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v63 )
        goto LABEL_105;
      v64 = (ServantGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v63,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantGroupMaster___);
      if ( !v64 )
        goto LABEL_105;
      EntityListById = ServantGroupMaster__getEntityListById(v64, v62, 0LL);
      if ( !userSvtEntity )
        goto LABEL_105;
      v66 = EntityListById;
      v68 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v67 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v99.fields.currentCryptoKey = v68;
      *(_QWORD *)&v99.fields.fakeValue = v67;
      this = (ServantVoiceEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v99, 0LL);
      if ( !usrSvtList )
        goto LABEL_105;
      v69 = usrSvtList->max_length;
      if ( v69 < 1 )
        goto LABEL_91;
      v70 = (int)this;
      v71 = 0;
      break;
    case 6:
      isQuestClearState = ServantVoiceEntity__isQuestClearState(
                            this,
                            cond->fields.value,
                            (const MethodInfo *)userEntity);
      return isQuestClearState & 1;
    case 7:
      IsWarNew = ServantVoiceEntity__isQuestClearState(this, cond->fields.value, (const MethodInfo *)userEntity);
      goto LABEL_102;
    case 9:
      if ( !userSvtEntity )
        goto LABEL_105;
      Day = cond->fields.value;
      LimitCount = UserServantEntity__getLimitCount(userSvtEntity, 0LL);
      goto LABEL_46;
    case 0xC:
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      v83 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v83 )
        goto LABEL_105;
      IsWarNew = QuestTree__IsWarNew(v83, cond->fields.value, 0LL);
LABEL_102:
      isQuestClearState = !IsWarNew;
      return isQuestClearState & 1;
    case 0x11:
      if ( !userSvtEntity )
        goto LABEL_105;
      v82 = cond->fields.value;
      v35 = v82 <= UserServantEntity__getLimitCount(userSvtEntity, 0LL);
LABEL_94:
      isQuestClearState = v35;
      return isQuestClearState & 1;
    case 0x14:
      v35 = cond->fields.value <= friendshipRankNow;
      goto LABEL_94;
    case 0x16:
      isQuestClearState = cond->fields.value >= friendshipRankNow;
      return isQuestClearState & 1;
    default:
      return isQuestClearState & 1;
  }
  while ( 1 )
  {
    if ( v71 >= v69 )
      goto LABEL_106;
    v72 = &usrSvtList->obj.klass + (int)v71;
    v75 = v72[4];
    v74 = (UserServantEntity_o **)(v72 + 4);
    v73 = v75;
    if ( !v75 )
      goto LABEL_105;
    v77 = v73->_1.declaringType;
    v76 = v73->_1.parent;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v100.fields.currentCryptoKey = v77;
    *(_QWORD *)&v100.fields.fakeValue = v76;
    this = (ServantVoiceEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v100, 0LL);
    if ( v71 >= usrSvtList->max_length )
    {
LABEL_106:
      sub_B17100(this, cond, userEntity);
      sub_B170A0();
    }
    v78 = (int)this;
    if ( !*v74 )
      goto LABEL_105;
    this = (ServantVoiceEntity_o *)UserServantEntity__IsEventJoin(*v74, 0LL);
    if ( v70 != v78 && ((unsigned __int8)this & 1) == 0 )
    {
      if ( !v66 )
        goto LABEL_105;
      v79 = v66->max_length;
      if ( v79 >= 1 )
        break;
    }
LABEL_89:
    v69 = usrSvtList->max_length;
    ++v71;
    isQuestClearState = 0;
    if ( (int)v71 >= v69 )
      return isQuestClearState & 1;
  }
  v80 = 0;
  while ( 1 )
  {
    if ( v80 >= v79 )
      goto LABEL_106;
    v81 = v66->m_Items[v80];
    if ( !v81 )
      goto LABEL_105;
    if ( v78 == v81->fields.svtId )
      break;
    if ( (int)++v80 >= v79 )
      goto LABEL_89;
  }
LABEL_103:
  isQuestClearState = 1;
  return isQuestClearState & 1;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getBattleVoiceList(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_30036932(this, 6, labelName, 0LL, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getBoxGachaVoiceList(
        ServantVoiceEntity_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  int64_t Time; // x21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x22
  il2cpp_array_size_t v19; // w23
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v21; // x28
  struct ServantVoiceCond_array *conds; // x19
  __int64 v23; // x8
  __int64 v24; // x26
  ServantVoiceCond_o *v25; // x24
  unsigned int condType; // w8
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FCAFF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FCAFF = 1;
  }
  entity = 0LL;
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_31:
    sub_B170D4();
  }
  v18 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v19 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v19 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v11;
    if ( v19 >= max_length )
      goto LABEL_33;
    v21 = scriptJson->m_Items[v19];
    if ( v21 )
    {
      conds = v21->fields.conds;
      if ( conds && (v23 = *(_QWORD *)&conds->max_length) != 0 )
      {
        if ( (int)v23 >= 1 )
        {
          v24 = 0LL;
          while ( (unsigned int)v24 < (unsigned int)v23 )
          {
            v25 = conds->m_Items[v24];
            if ( !v25 || !v18 )
              goto LABEL_31;
            MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                v18,
                                                                                &entity,
                                                                                v25->fields.value,
                                                                                (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_31;
              if ( Time <= (__int64)entity->fields.coordinate )
              {
                condType = v25->fields.condType;
                if ( condType <= 0x13 && ((1 << condType) & 0x86000) != 0 )
                {
                  if ( !v11 )
                    goto LABEL_31;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v11,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v21->fields.infos,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
                }
              }
            }
            LODWORD(v23) = conds->max_length;
            if ( (int)++v24 >= (int)v23 )
              goto LABEL_30;
          }
LABEL_33:
          sub_B17100(MasterData_WarQuestSelectionMaster, v15, v16);
          sub_B170A0();
        }
      }
      else
      {
        if ( !v11 )
          goto LABEL_31;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v21->fields.infos,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      }
LABEL_30:
      ++v19;
      scriptJson = this->fields.scriptJson;
      if ( scriptJson )
        continue;
    }
    goto LABEL_31;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getCntStopVoiceList(
        ServantVoiceEntity_o *this,
        int32_t displayType,
        bool isPlayVoice,
        int32_t genderType,
        System_String_o *playVoiceLabel,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  return ServantVoiceEntity__getMaxLimitVoiceList(this, 2, displayType, isPlayVoice, genderType, playVoiceLabel, v6);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getCondClearVoiceList(
        ServantVoiceEntity_o *this,
        int32_t type,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  VoicePlayCondMaster_o *v19; // x22
  __int64 v20; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v22; // x8
  WarBoardManager_TaskList_o *infos; // x23
  Il2CppObject *syncRoot; // x8

  if ( (byte_40FCAEB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FCAEB = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  *(_QWORD *)&type,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_19:
    sub_B170D4();
  }
  v19 = (VoicePlayCondMaster_o *)MasterData_WarQuestSelectionMaster;
  v20 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v20 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v13;
    if ( (unsigned int)v20 >= max_length )
      goto LABEL_22;
    v22 = scriptJson->m_Items[v20];
    if ( v22 )
    {
      infos = (WarBoardManager_TaskList_o *)v22->fields.infos;
      if ( infos )
      {
        if ( !infos->fields._size )
        {
LABEL_22:
          sub_B17100(MasterData_WarQuestSelectionMaster, v16, v17);
          sub_B170A0();
        }
        syncRoot = infos->fields._syncRoot;
        if ( syncRoot )
        {
          if ( v19 )
          {
            MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)VoicePlayCondMaster__isVoicePlay(
                                                                                v19,
                                                                                svtId,
                                                                                (System_String_o *)syncRoot[1].klass,
                                                                                0LL,
                                                                                -1LL,
                                                                                -1,
                                                                                0LL);
            if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
            {
              if ( !v13 )
                goto LABEL_19;
              MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                                  (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v13,
                                                                                  infos,
                                                                                  (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
              if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) == 0 )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v13,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)infos,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
            }
            scriptJson = this->fields.scriptJson;
            ++v20;
            if ( scriptJson )
              continue;
          }
        }
      }
    }
    goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SvtVoiceInfo__o *__fastcall ServantVoiceEntity__getCondVoiceList(
        ServantVoiceEntity_o *this,
        int32_t type,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  SvtVoiceInfo_o *v15; // x1
  __int64 v16; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v18; // x22
  int max_length; // w9
  struct ServantVoiceCond_array *conds; // x9
  __int64 v21; // x10
  ServantVoiceCond_o *v22; // x9

  if ( (byte_40FCAED & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40FCAED = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SvtVoiceInfo__TypeInfo,
                                                                                                  *(_QWORD *)&type,
                                                                                                  *(_QWORD *)&condType,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_18:
    sub_B170D4();
  }
  v18 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v18 >= max_length )
      return (System_Collections_Generic_List_SvtVoiceInfo__o *)v12;
    if ( (unsigned int)v18 >= max_length )
      goto LABEL_21;
    v15 = scriptJson->m_Items[v18];
    if ( !v15 )
      goto LABEL_18;
    conds = v15->fields.conds;
    if ( conds )
    {
      v21 = *(_QWORD *)&conds->max_length;
      if ( v21 )
      {
        if ( !(_DWORD)v21 )
        {
LABEL_21:
          sub_B17100(MasterData_WarQuestSelectionMaster, v15, v16);
          sub_B170A0();
        }
        v22 = conds->m_Items[0];
        if ( !v22 )
          goto LABEL_18;
        if ( v22->fields.condType == condType )
        {
          if ( !v12 )
            goto LABEL_18;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v12,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
          scriptJson = this->fields.scriptJson;
        }
      }
    }
    ++v18;
    if ( !scriptJson )
      goto LABEL_18;
  }
}


// local variable allocation has failed, the output may be wrong!
ServantVoiceCond_array *__fastcall ServantVoiceEntity__getConds(
        ServantVoiceEntity_o *this,
        int32_t type,
        System_String_o *labelName,
        const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v11; // x9
  SvtVoiceInfo_o *v12; // x8
  il2cpp_array_size_t v14; // w21
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v16; // x22
  struct ServantVoiceData_array *infos; // x23
  int v18; // w9
  __int64 v19; // x24
  ServantVoiceData_o *v20; // x8

  if ( (byte_40FCAF2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15859, *(_QWORD *)&type);
    byte_40FCAF2 = 1;
  }
  if ( this->fields.type == type )
  {
    if ( !labelName )
      goto LABEL_25;
    v7 = System_String__EndsWith(labelName, (System_String_o *)StringLiteral_15859, 0LL);
    scriptJson = this->fields.scriptJson;
    if ( v7 )
    {
      if ( !scriptJson )
        goto LABEL_25;
      v11 = *(_QWORD *)&scriptJson->max_length;
      if ( v11 )
      {
        if ( !(_DWORD)v11 )
        {
LABEL_28:
          sub_B17100(v7, v8, v9);
          sub_B170A0();
        }
        v12 = scriptJson->m_Items[0];
        if ( v12 )
          return v12->fields.conds;
LABEL_25:
        sub_B170D4();
      }
    }
    else
    {
      if ( !scriptJson )
        goto LABEL_25;
      v14 = 0;
      while ( 1 )
      {
        max_length = scriptJson->max_length;
        if ( (int)v14 >= (int)max_length )
          break;
        if ( v14 >= max_length )
          goto LABEL_28;
        v16 = scriptJson->m_Items[v14];
        if ( !v16 )
          goto LABEL_25;
        infos = v16->fields.infos;
        if ( infos )
        {
          v18 = infos->max_length;
          if ( v18 >= 1 )
          {
            v19 = 0LL;
            while ( 1 )
            {
              if ( (unsigned int)v19 >= v18 )
                goto LABEL_28;
              v20 = infos->m_Items[v19];
              if ( !v20 )
                goto LABEL_25;
              v7 = System_String__Equals_43731072(labelName, v20->fields.id, 0LL);
              if ( v7 )
                return v16->fields.conds;
              v18 = infos->max_length;
              if ( (int)++v19 >= v18 )
              {
                scriptJson = this->fields.scriptJson;
                break;
              }
            }
          }
        }
        ++v14;
        if ( !scriptJson )
          goto LABEL_25;
      }
    }
  }
  return 0LL;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getCostumeCombineVoiceList(
        ServantVoiceEntity_o *this,
        int32_t costumeId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  return ServantVoiceEntity__getVoiceList_30036348(this, 2, 23, costumeId, 0LL, -1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getCostumeGetVoiceList(
        ServantVoiceEntity_o *this,
        int32_t costumeId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  return ServantVoiceEntity__getVoiceList_30036348(this, 2, 23, costumeId, 0LL, -1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventIndividualPurchaseVoiceList(
        ServantVoiceEntity_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return ServantVoiceEntity__getEventShopVoiceList(this, 0, eventId, 21, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventJoinVoiceList(
        ServantVoiceEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantVoiceEntity__getVoiceList(this, 4, v2);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventMissionActionVoiceList(
        ServantVoiceEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v13; // w21
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v15; // x23
  struct ServantVoiceCond_array *conds; // x24
  __int64 v17; // x8
  __int64 v18; // x25
  ServantVoiceCond_o *v19; // x9

  if ( (byte_40FCB01 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v7);
    byte_40FCB01 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_19:
    sub_B170D4();
  v13 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v13 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v8;
    if ( v13 >= max_length )
      goto LABEL_21;
    v15 = scriptJson->m_Items[v13];
    if ( v15 )
    {
      conds = v15->fields.conds;
      if ( conds )
      {
        v17 = *(_QWORD *)&conds->max_length;
        if ( v17 )
        {
          if ( (int)v17 >= 1 )
          {
            v18 = 0LL;
            while ( (unsigned int)v18 < (unsigned int)v17 )
            {
              v19 = conds->m_Items[v18];
              if ( !v19 )
                goto LABEL_19;
              if ( v19->fields.condType == 15 )
              {
                if ( !v8 )
                  goto LABEL_19;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v8,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v15->fields.infos,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
                v17 = *(_QWORD *)&conds->max_length;
              }
              if ( (int)++v18 >= (int)v17 )
                goto LABEL_18;
            }
LABEL_21:
            sub_B17100(v9, v10, v11);
            sub_B170A0();
          }
        }
      }
LABEL_18:
      scriptJson = this->fields.scriptJson;
      ++v13;
      if ( scriptJson )
        continue;
    }
    goto LABEL_19;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventRewardVoiceList(
        ServantVoiceEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  int64_t Time; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  int64_t v16; // x21
  il2cpp_array_size_t v17; // w22
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v19; // x27
  struct ServantVoiceCond_array *conds; // x28
  __int64 v21; // x8
  __int64 i; // x19
  ServantVoiceCond_o *v23; // x24
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  int32_t condType; // w8

  if ( (byte_40FCB00 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FCB00 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_33:
    sub_B170D4();
  v16 = Time;
  v17 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v17 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v11;
    if ( v17 >= max_length )
    {
LABEL_35:
      sub_B17100(Time, v13, v14);
      sub_B170A0();
    }
    v19 = scriptJson->m_Items[v17];
    if ( !v19 )
      goto LABEL_33;
    conds = v19->fields.conds;
    if ( conds && (v21 = *(_QWORD *)&conds->max_length) != 0 )
    {
      if ( (int)v21 >= 1 )
      {
        for ( i = 0LL; (int)i < (int)v21; ++i )
        {
          if ( (unsigned int)i >= (unsigned int)v21 )
            goto LABEL_35;
          v23 = conds->m_Items[i];
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_33;
          MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                (DataManager_o *)Instance,
                                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !v23 || !MasterData_WarQuestSelectionMaster )
            goto LABEL_33;
          Time = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            MasterData_WarQuestSelectionMaster,
                            v23->fields.value,
                            (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( Time )
          {
            condType = v23->fields.condType;
            if ( *(_QWORD *)(Time + 96) <= v16 )
            {
              if ( condType == 19 || condType == 13 )
              {
LABEL_26:
                if ( !v11 )
                  goto LABEL_33;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v11,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v19->fields.infos,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
              }
            }
            else if ( condType == 19 || condType == 14 )
            {
              goto LABEL_26;
            }
          }
          LODWORD(v21) = conds->max_length;
        }
      }
    }
    else
    {
      if ( !v11 )
        goto LABEL_33;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v19->fields.infos,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    }
    ++v17;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_33;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventRewardVoiceList_30048108(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_30036932(this, 5, labelName, 0LL, 1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventShopPurchaseVoiceList(
        ServantVoiceEntity_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return ServantVoiceEntity__getEventShopVoiceList(this, 0, eventId, 18, v3);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventShopVoiceList(
        ServantVoiceEntity_o *this,
        bool isEventDateCondOnly,
        int32_t eventId,
        int32_t checkCondType,
        const MethodInfo *method)
{
  _BOOL4 v6; // w26
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_List_VoiceCondType_Type__o *v28; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_List_VoiceCondType_Type__o *v33; // x23
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  int64_t Time; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v42; // w22
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v44; // x27
  _BOOL4 v45; // w25
  struct ServantVoiceCond_array *conds; // x26
  __int64 v47; // x8
  __int64 v48; // x21
  ServantVoiceCond_o *v49; // x24
  int32_t condType; // w28
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  int64_t v53; // x19
  int v54; // w8
  _BOOL8 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  Il2CppObject *current; // x21
  _DWORD *monitor; // x22
  int v60; // w8
  unsigned int v61; // w24
  __int64 v62; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v64; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v65; // [xsp+10h] [xbp-B0h]
  int64_t v66; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_VoiceCondType_Type__o *v69; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v70; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v71; // [xsp+50h] [xbp-70h] BYREF

  v6 = isEventDateCondOnly;
  if ( (byte_40FCB07 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, isEventDateCondOnly);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_VoiceCondType_Type__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v18);
    sub_B16FFC(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v19);
    sub_B16FFC(&System_Collections_Generic_List_VoiceCondType_Type__TypeInfo, v20);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v21);
    sub_B16FFC(&NetworkManager_TypeInfo, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    byte_40FCB07 = 1;
  }
  memset(&v71, 0, sizeof(v71));
  v65 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  isEventDateCondOnly,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&checkCondType,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v65,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v28 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_VoiceCondType_Type__TypeInfo,
                                                                   v24,
                                                                   v25,
                                                                   v26,
                                                                   v27);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v28,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
  if ( !v28 )
    goto LABEL_39;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v28,
    14,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v28,
    13,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v28,
    19,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
  v33 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                   System_Collections_Generic_List_VoiceCondType_Type__TypeInfo,
                                                                   v29,
                                                                   v30,
                                                                   v31,
                                                                   v32);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v33,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
  if ( !v6 )
  {
    if ( !v33 )
      goto LABEL_39;
    System_Collections_Generic_List_VoiceCondType_Type___Add(
      v33,
      checkCondType,
      (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
  }
  v69 = v28;
  v64 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SvtVoiceInfo__TypeInfo,
                                                                                                  v34,
                                                                                                  v35,
                                                                                                  v36,
                                                                                                  v37);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v64,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v66 = Time;
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_39;
  v42 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v42 >= (int)max_length )
      break;
    if ( v42 >= max_length )
      goto LABEL_60;
    v44 = scriptJson->m_Items[v42];
    if ( !v44 )
      goto LABEL_39;
    v45 = v6;
    conds = v44->fields.conds;
    if ( conds )
    {
      v47 = *(_QWORD *)&conds->max_length;
      if ( v47 )
      {
        if ( (int)v47 >= 1 )
        {
          v48 = 0LL;
          while ( (unsigned int)v48 < (unsigned int)v47 )
          {
            v49 = conds->m_Items[v48];
            if ( !v49 )
              goto LABEL_39;
            condType = v49->fields.condType;
            if ( !System_Collections_Generic_List_VoiceCondType_Type___Contains(
                    v69,
                    condType,
                    (const MethodInfo_2F1391C *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__) )
            {
              if ( !v33 )
                goto LABEL_39;
              Time = System_Collections_Generic_List_VoiceCondType_Type___Contains(
                       v33,
                       condType,
                       (const MethodInfo_2F1391C *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
              if ( (Time & 1) == 0 )
                goto LABEL_38;
            }
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_39;
            MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                  (DataManager_o *)Instance,
                                                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_39;
            Time = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              v49->fields.value,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
            if ( !Time || v49->fields.value != eventId )
              goto LABEL_38;
            v53 = Time;
            Time = System_Collections_Generic_List_VoiceCondType_Type___Contains(
                     v69,
                     condType,
                     (const MethodInfo_2F1391C *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) != 0 )
            {
              v54 = *(_QWORD *)(v53 + 96) <= v66 ? 13 : 14;
              if ( condType == 19 )
                v54 = 19;
              if ( condType != v54 )
                goto LABEL_38;
            }
            LODWORD(v47) = conds->max_length;
            if ( (int)++v48 >= (int)v47 )
              goto LABEL_36;
          }
LABEL_60:
          sub_B17100(Time, v39, v40);
          sub_B170A0();
        }
LABEL_36:
        if ( !v64 )
          goto LABEL_39;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v64,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
      }
    }
LABEL_38:
    ++v42;
    v6 = v45;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_39;
  }
  if ( !v64 )
LABEL_39:
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v70,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v64,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v71 = v70;
LABEL_42:
  while ( 1 )
  {
    v55 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v71,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v55 )
      break;
    current = v71.fields.current;
    if ( !v71.fields.current )
      sub_B170D4();
    monitor = v71.fields.current[4].monitor;
    if ( !monitor )
      sub_B170D4();
    v60 = monitor[6];
    if ( v60 >= 1 )
    {
      v61 = 0;
      while ( 1 )
      {
        if ( v61 >= v60 )
        {
          sub_B17100(v55, v56, v57);
          sub_B170A0();
        }
        v62 = *(_QWORD *)&monitor[2 * v61 + 8];
        if ( !v62 )
          sub_B170D4();
        if ( v6 )
          break;
        if ( !v33 )
          sub_B170D4();
        v55 = System_Collections_Generic_List_VoiceCondType_Type___Contains(
                v33,
                *(_DWORD *)(v62 + 16),
                (const MethodInfo_2F1391C *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
        if ( v55 )
          break;
        v60 = monitor[6];
        if ( (int)++v61 >= v60 )
          goto LABEL_42;
      }
      if ( !v65 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v65,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current[4].klass,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v71,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  return (System_Collections_Generic_List_ServantVoiceData____o *)v65;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventShopVoiceList_30050460(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_30036932(this, 9, labelName, 0LL, 1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventShopWelcomeVoiceList(
        ServantVoiceEntity_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return ServantVoiceEntity__getEventShopVoiceList(this, 1, eventId, 18, v3);
}


ServantVoiceData_array *__fastcall ServantVoiceEntity__getEventVoiceListByName(
        ServantVoiceEntity_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_ServantVoiceData____o *EventRewardVoiceList; // x0
  ServantVoiceData_array *current; // x20
  int monitor; // w8
  unsigned int v11; // w22
  ServantVoiceData_o *v12; // x8
  System_String_o *v13; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  char v17; // w19
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40FCB05 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, id);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v7);
    byte_40FCB05 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  EventRewardVoiceList = ServantVoiceEntity__getEventRewardVoiceList(this, (const MethodInfo *)id);
  if ( !EventRewardVoiceList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventRewardVoiceList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v20 = v19;
  do
  {
LABEL_13:
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v14 )
    {
      v17 = 0;
      current = 0LL;
      goto LABEL_16;
    }
    current = (ServantVoiceData_array *)v20.fields.current;
    if ( !v20.fields.current )
      sub_B170D4();
    monitor = (int)v20.fields.current[1].monitor;
  }
  while ( monitor < 1 );
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= monitor )
    {
      sub_B17100(v14, v15, v16);
      sub_B170A0();
    }
    v12 = current->m_Items[v11];
    if ( !v12 )
      sub_B170D4();
    v13 = v12->fields.id;
    if ( !v13 )
      sub_B170D4();
    v14 = System_String__Equals_43731072(v13, id, 0LL);
    if ( v14 )
      break;
    monitor = current->max_length;
    if ( (int)++v11 >= monitor )
      goto LABEL_13;
  }
  v17 = 2;
LABEL_16:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  if ( ((v17 + 2) & 3) != 0 )
    return 0LL;
  else
    return current;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getFirstGetVoiceList(
        ServantVoiceEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return ServantVoiceEntity__getCondClearVoiceList(this, 3, svtId, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getHomeVoiceList(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v9; // x21
  const MethodInfo *v10; // x5

  if ( (byte_40FCAF6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_CondType_Kind__Add__, labelName);
    sub_B16FFC(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v8);
    byte_40FCAF6 = 1;
  }
  v9 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                  System_Collections_Generic_List_CondType_Kind__TypeInfo,
                                                                  labelName,
                                                                  method,
                                                                  v3,
                                                                  v4);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v9,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v9 )
    sub_B170D4();
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v9,
    81,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_CondType_Kind__Add__);
  return ServantVoiceEntity__getVoiceList_30036932(
           this,
           1,
           labelName,
           (System_Collections_Generic_List_CondType_Kind__o *)v9,
           0,
           v10);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getLevelUpVoiceList(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( this->fields.type == 2 && !System_String__IsNullOrEmpty(labelName, 0LL) )
    return ServantVoiceEntity__getVoiceList_30036932(this, 2, labelName, 0LL, 0, v5);
  else
    return 0LL;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getLimitCntUpVoiceList(
        ServantVoiceEntity_o *this,
        int32_t genderType,
        System_String_o *playVoiceLabel,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  return ServantVoiceEntity__getVoiceListByGender(this, 2, 10, genderType, playVoiceLabel, v4);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getLimitCntVoiceListByLabel(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v9; // x21
  const MethodInfo *v10; // x5

  if ( (byte_40FCAF7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_CondType_Kind__Add__, labelName);
    sub_B16FFC(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v8);
    byte_40FCAF7 = 1;
  }
  v9 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B170CC(
                                                                  System_Collections_Generic_List_CondType_Kind__TypeInfo,
                                                                  labelName,
                                                                  method,
                                                                  v3,
                                                                  v4);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v9,
    (const MethodInfo_2F1276C *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v9 )
    sub_B170D4();
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v9,
    81,
    (const MethodInfo_2F134C8 *)Method_System_Collections_Generic_List_CondType_Kind__Add__);
  return ServantVoiceEntity__getVoiceList_30036932(
           this,
           2,
           labelName,
           (System_Collections_Generic_List_CondType_Kind__o *)v9,
           0,
           v10);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMasterMissionActionVoiceList(
        ServantVoiceEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  _BOOL8 isQuestClearState; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v13; // w21
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v15; // x23
  struct ServantVoiceCond_array *conds; // x24
  __int64 v17; // x10
  __int64 v18; // x25
  char v19; // w27
  char v20; // w8
  char v21; // w9
  ServantVoiceCond_o *v22; // x10
  int32_t condType; // w11

  if ( (byte_40FCB02 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v7);
    byte_40FCB02 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_31;
  v13 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v13 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v8;
    if ( v13 >= max_length )
    {
LABEL_33:
      sub_B17100(isQuestClearState, v10, v11);
      sub_B170A0();
    }
    v15 = scriptJson->m_Items[v13];
    if ( !v15 )
      goto LABEL_31;
    conds = v15->fields.conds;
    if ( conds )
    {
      v17 = *(_QWORD *)&conds->max_length;
      if ( v17 )
      {
        if ( (int)v17 >= 1 )
        {
          v18 = 0LL;
          v19 = 0;
          v20 = 0;
          v21 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v18 >= (unsigned int)v17 )
              goto LABEL_33;
            v22 = conds->m_Items[v18];
            if ( !v22 )
              goto LABEL_31;
            condType = v22->fields.condType;
            switch ( condType )
            {
              case 16:
                goto LABEL_27;
              case 7:
                if ( (v20 & 1) == 0 )
                {
                  isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                        (ServantVoiceEntity_o *)isQuestClearState,
                                        v22->fields.value,
                                        v11);
                  if ( isQuestClearState )
                    goto LABEL_30;
                  v20 = 0;
                  goto LABEL_27;
                }
                if ( (v19 & 1) == 0 )
                  goto LABEL_30;
                isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                      (ServantVoiceEntity_o *)isQuestClearState,
                                      v22->fields.value,
                                      v11);
                if ( isQuestClearState )
                  goto LABEL_30;
                break;
              case 6:
                isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                      (ServantVoiceEntity_o *)isQuestClearState,
                                      v22->fields.value,
                                      v11);
                if ( !isQuestClearState )
                  goto LABEL_30;
                break;
              default:
                if ( (v21 & 1) == 0 )
                  goto LABEL_30;
                goto LABEL_27;
            }
            v19 = 1;
            v20 = 1;
LABEL_27:
            LODWORD(v17) = conds->max_length;
            ++v18;
            v21 = 1;
            if ( (int)v18 >= (int)v17 )
            {
              if ( v8 )
              {
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v8,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v15->fields.infos,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
                break;
              }
LABEL_31:
              sub_B170D4();
            }
          }
        }
      }
    }
LABEL_30:
    scriptJson = this->fields.scriptJson;
    ++v13;
    if ( !scriptJson )
      goto LABEL_31;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMasterMissionVoiceList(
        ServantVoiceEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantVoiceEntity__getVoiceList(this, 8, v2);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMasterMissionVoiceList_30048620(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_30036932(this, 8, labelName, 0LL, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMaxLimitVoiceList(
        ServantVoiceEntity_o *this,
        int32_t type,
        int32_t displayType,
        bool isPlayVoice,
        int32_t genderType,
        System_String_o *playVoiceLabel,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x21
  const MethodInfo *v21; // x1
  int32_t v22; // w0
  const MethodInfo *v23; // x2
  int v24; // w27
  int32_t v25; // w26
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  int32_t FriendShipRank; // w0
  int v31; // w22
  void *PlayVoiceLabelInfo; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x1
  const MethodInfo_2F25CD8 *v36; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v38; // w23
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v40; // x27
  WebViewManager_o *v41; // x0
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v43; // x8
  struct ServantVoiceCond_array *conds; // x11
  __int64 v45; // x8
  ServantVoiceCond_o *v46; // x9
  __int64 v47; // x9
  int v48; // w10
  ServantVoiceCond_o **m_Items; // x11
  ServantVoiceCond_o *v50; // x12
  int32_t condType; // w13
  _BOOL4 v52; // w14
  _BOOL4 v53; // w12
  int32_t id; // w26
  int32_t v56; // w25

  if ( (byte_40FCAEE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&type);
    sub_B16FFC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v16);
    sub_B16FFC(&NetworkManager_TypeInfo, v17);
    sub_B16FFC(&ServantLimitUpVoiceCache_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_40FCAEE = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  *(_QWORD *)&type,
                                                                                                  *(_QWORD *)&displayType,
                                                                                                  isPlayVoice,
                                                                                                  *(_QWORD *)&genderType);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v22 = ServantVoiceEntity__GetChangeLimitVoiceFriendshipLv(this, v21);
  v24 = v22 - 1;
  if ( v22 < 1 )
    goto LABEL_12;
  v25 = v22;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_68;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       MasterData_WarQuestSelectionMaster,
                       UserId,
                       this->fields.id,
                       0LL);
  if ( !EntityDefinitely )
    goto LABEL_68;
  FriendShipRank = UserServantCollectionEntity__getFriendShipRank(EntityDefinitely, 0LL);
  if ( FriendShipRank >= v25 )
  {
    v31 = FriendShipRank;
    if ( displayType )
    {
      id = this->fields.id;
      if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      }
      if ( ServantLimitUpVoiceCache__IsLimitUpVoiceNormal(displayType, id, 0LL) )
        v31 = v24;
      if ( isPlayVoice )
      {
        v56 = this->fields.id;
        if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
        }
        ServantLimitUpVoiceCache__UpdateLimitUpVoice(displayType, v56, 0LL);
      }
    }
  }
  else
  {
LABEL_12:
    v31 = -1;
  }
  PlayVoiceLabelInfo = ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v23);
  if ( PlayVoiceLabelInfo )
  {
    if ( v20 )
    {
      v35 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)PlayVoiceLabelInfo + 8);
      v36 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      goto LABEL_16;
    }
LABEL_68:
    sub_B170D4();
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_68;
  v38 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v38 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v20;
    if ( v38 >= max_length )
      goto LABEL_69;
    v40 = scriptJson->m_Items[v38];
    v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v41 )
      goto LABEL_68;
    PlayVoiceLabelInfo = DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)v41,
                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !v40 )
      goto LABEL_68;
    infos = v40->fields.infos;
    if ( !infos )
      goto LABEL_68;
    if ( !infos->max_length )
      goto LABEL_69;
    v43 = infos->m_Items[0];
    if ( !v43 || !PlayVoiceLabelInfo )
      goto LABEL_68;
    PlayVoiceLabelInfo = (void *)VoicePlayCondMaster__isVoicePlay(
                                   (VoicePlayCondMaster_o *)PlayVoiceLabelInfo,
                                   this->fields.id,
                                   v43->fields.id,
                                   0LL,
                                   -1LL,
                                   genderType,
                                   0LL);
    conds = v40->fields.conds;
    if ( conds )
    {
      v45 = *(_QWORD *)&conds->max_length;
      if ( v45 )
      {
        if ( !(_DWORD)v45 )
        {
LABEL_69:
          sub_B17100(PlayVoiceLabelInfo, v33, v34);
          sub_B170A0();
        }
        v46 = conds->m_Items[0];
        if ( !v46 )
          goto LABEL_68;
        if ( v46->fields.condType == 11 )
          break;
      }
    }
LABEL_52:
    scriptJson = this->fields.scriptJson;
    ++v38;
    if ( !scriptJson )
      goto LABEL_68;
  }
  if ( v31 != -1 && (_DWORD)v45 != 1 )
  {
    if ( (int)v45 >= 1 )
    {
      v47 = 0LL;
      v48 = (unsigned __int8)PlayVoiceLabelInfo & 1;
      m_Items = conds->m_Items;
      while ( 1 )
      {
        v50 = m_Items[v47];
        if ( !v50 )
          goto LABEL_68;
        condType = v50->fields.condType;
        v52 = condType == 22 && v50->fields.value >= v31;
        if ( (v52 & v48) != 0 )
          break;
        v53 = condType == 20 && v50->fields.value <= v31;
        if ( (v53 & v48) != 0 )
          break;
        if ( (int)++v47 >= (int)v45 )
          goto LABEL_52;
      }
      if ( !v20 )
        goto LABEL_68;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v20,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v40->fields.infos,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    }
    goto LABEL_52;
  }
  if ( ((unsigned __int8)PlayVoiceLabelInfo & 1) == 0 )
    goto LABEL_52;
  if ( !v20 )
    goto LABEL_68;
  v35 = (EventMissionProgressRequest_Argument_ProgressData_o *)v40->fields.infos;
  v36 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__;
LABEL_16:
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v20, v35, v36);
  return (System_Collections_Generic_List_ServantVoiceData____o *)v20;
}


ServantVoiceData_array *__fastcall ServantVoiceEntity__getMstMissionVoiceListByName(
        ServantVoiceEntity_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList; // x0
  ServantVoiceData_array *current; // x20
  int monitor; // w8
  unsigned int v11; // w22
  ServantVoiceData_o *v12; // x8
  System_String_o *v13; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  char v17; // w19
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40FCB06 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, id);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v7);
    byte_40FCB06 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  VoiceList = ServantVoiceEntity__getVoiceList(this, 8, method);
  if ( !VoiceList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)VoiceList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v20 = v19;
  do
  {
LABEL_13:
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v14 )
    {
      v17 = 0;
      current = 0LL;
      goto LABEL_16;
    }
    current = (ServantVoiceData_array *)v20.fields.current;
    if ( !v20.fields.current )
      sub_B170D4();
    monitor = (int)v20.fields.current[1].monitor;
  }
  while ( monitor < 1 );
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= monitor )
    {
      sub_B17100(v14, v15, v16);
      sub_B170A0();
    }
    v12 = current->m_Items[v11];
    if ( !v12 )
      sub_B170D4();
    v13 = v12->fields.id;
    if ( !v13 )
      sub_B170D4();
    v14 = System_String__Equals_43731072(v13, id, 0LL);
    if ( v14 )
      break;
    monitor = current->max_length;
    if ( (int)++v11 >= monitor )
      goto LABEL_13;
  }
  v17 = 2;
LABEL_16:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  if ( ((v17 + 2) & 3) != 0 )
    return 0LL;
  else
    return current;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMyRoomFriendShipVoiceList(
        ServantVoiceEntity_o *this,
        int32_t friendShipRank,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x22
  _BOOL8 isVoicePlay; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v20; // w24
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v22; // x23
  struct ServantVoiceData_array *infos; // x9
  struct ServantVoiceCond_array *conds; // x8
  __int64 v25; // x26
  int v26; // w9
  ServantVoiceCond_o *v27; // x8
  struct ServantVoiceData_array *v28; // x8
  ServantVoiceData_o *v29; // x8
  const MethodInfo *v30; // x4

  if ( (byte_40FCAF4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&friendShipRank);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FCAF4 = 1;
  }
  if ( this->fields.type != 1 )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_ServantVoiceData____TypeInfo, v11, v12, v13, v14),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v15,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_31:
    sub_B170D4();
  }
  v20 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v20 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v15;
    if ( v20 >= max_length )
    {
LABEL_34:
      sub_B17100(isVoicePlay, v17, v18);
      sub_B170A0();
    }
    v22 = scriptJson->m_Items[v20];
    if ( v22 )
    {
      infos = v22->fields.infos;
      if ( infos && *(_QWORD *)&infos->max_length )
      {
        conds = v22->fields.conds;
        if ( !conds )
          goto LABEL_31;
        v25 = 0LL;
        while ( 1 )
        {
          v26 = conds->max_length;
          if ( (int)v25 >= v26 )
            break;
          if ( (unsigned int)v25 >= v26 )
            goto LABEL_34;
          v27 = conds->m_Items[v25];
          if ( !v27 )
            goto LABEL_31;
          if ( v27->fields.condType == 3 && v27->fields.value == friendShipRank )
          {
            v28 = v22->fields.infos;
            if ( !v28 )
              goto LABEL_31;
            if ( !v28->max_length )
              goto LABEL_34;
            v29 = v28->m_Items[0];
            if ( !v29 || !MasterData_WarQuestSelectionMaster )
              goto LABEL_31;
            isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                            MasterData_WarQuestSelectionMaster,
                            this->fields.id,
                            v29->fields.id,
                            0LL,
                            -1LL,
                            -1,
                            0LL);
            if ( isVoicePlay )
            {
              isVoicePlay = ServantVoiceEntity__isAvailableMyRoomVoice(this, v22, 0, 1, v30);
              if ( isVoicePlay )
              {
                if ( !v15 )
                  goto LABEL_31;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v15,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v22->fields.infos,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
              }
            }
          }
          conds = v22->fields.conds;
          ++v25;
          if ( !conds )
            goto LABEL_31;
        }
        scriptJson = this->fields.scriptJson;
      }
      ++v20;
      if ( scriptJson )
        continue;
    }
    goto LABEL_31;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMyRoomVoiceList(
        ServantVoiceEntity_o *this,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x22
  _BOOL8 isVoicePlay; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v20; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v22; // x23
  struct ServantVoiceData_array *infos; // x8
  __int64 v24; // x9
  ServantVoiceData_o *v25; // x8
  const MethodInfo *v26; // x4
  struct ServantVoiceCond_array *conds; // x8

  if ( (byte_40FCAF3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&imageLimitCount);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FCAF3 = 1;
  }
  if ( this->fields.type != 1 )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_ServantVoiceData____TypeInfo, v11, v12, v13, v14),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v15,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_22:
    sub_B170D4();
  }
  v20 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v20 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v15;
    if ( (unsigned int)v20 >= max_length )
      goto LABEL_25;
    v22 = scriptJson->m_Items[v20];
    if ( !v22 )
      goto LABEL_22;
    infos = v22->fields.infos;
    if ( infos )
    {
      v24 = *(_QWORD *)&infos->max_length;
      if ( v24 )
      {
        if ( !(_DWORD)v24 )
        {
LABEL_25:
          sub_B17100(isVoicePlay, v17, v18);
          sub_B170A0();
        }
        v25 = infos->m_Items[0];
        if ( !v25 || !MasterData_WarQuestSelectionMaster )
          goto LABEL_22;
        isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                        MasterData_WarQuestSelectionMaster,
                        this->fields.id,
                        v25->fields.id,
                        0LL,
                        -1LL,
                        -1,
                        0LL);
        if ( isVoicePlay )
        {
          conds = v22->fields.conds;
          if ( !conds )
            goto LABEL_22;
          if ( (int)conds->max_length < 1
            || (isVoicePlay = ServantVoiceEntity__isAvailableMyRoomVoice(this, v22, imageLimitCount, 0, v26)) )
          {
            if ( !v15 )
              goto LABEL_22;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v15,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v22->fields.infos,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v20;
    if ( !scriptJson )
      goto LABEL_22;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getNpVoiceList(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_30036932(this, 7, labelName, 0LL, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantVoiceEntity__getOverwriteData(
        ServantVoiceEntity_o *this,
        int32_t type,
        System_String_o *labelName,
        ServantVoiceCond_array **conds,
        bool *isInvalidVoiceList,
        System_String_o **overwriteName,
        System_String_o **overwriteNameDefault,
        int32_t *overwritePriority,
        bool isMaterial,
        const MethodInfo *method)
{
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  _BOOL8 v30; // x0
  __int64 v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v39; // x9
  SvtVoiceInfo_o *v40; // x24
  ServantVoiceCond_array *v41; // x1
  System_String_o *v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_o *v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  int32_t v56; // w8
  il2cpp_array_size_t v57; // w28
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v59; // x26
  struct ServantVoiceData_array *infos; // x9
  __int64 v61; // x27
  int v62; // w8
  ServantVoiceData_o *v63; // x8
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  ServantVoiceCond_array *v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_String_o *materialOverwriteName; // x1
  System_String_o *v77; // x1
  System_String_o *v78; // x1

  if ( (byte_40FCAF1 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15859, *(_QWORD *)&type);
    byte_40FCAF1 = 1;
  }
  *conds = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)conds,
    0LL,
    (System_String_array **)labelName,
    (System_String_array **)conds,
    (System_Boolean_array **)isInvalidVoiceList,
    (System_Int32_array **)overwriteName,
    (System_Int32_array *)overwriteNameDefault,
    (System_Int32_array *)overwritePriority);
  *isInvalidVoiceList = 0;
  *overwriteName = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)overwriteName, 0LL, v18, v19, v20, v21, v22, v23);
  *overwriteNameDefault = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)overwriteNameDefault, 0LL, v24, v25, v26, v27, v28, v29);
  *overwritePriority = 0;
  if ( this->fields.type != type )
    return;
  if ( !labelName )
    goto LABEL_26;
  v30 = System_String__EndsWith(labelName, (System_String_o *)StringLiteral_15859, 0LL);
  scriptJson = this->fields.scriptJson;
  if ( v30 )
  {
    if ( scriptJson )
    {
      v39 = *(_QWORD *)&scriptJson->max_length;
      if ( !v39 )
        return;
      if ( !(_DWORD)v39 )
      {
LABEL_33:
        sub_B17100(v30, v31, v32);
        sub_B170A0();
      }
      v40 = scriptJson->m_Items[0];
      if ( v40 )
      {
        v41 = v40->fields.conds;
        *conds = v41;
        sub_B16F98((BattleServantConfConponent_o *)conds, (System_Int32_array **)v41, v32, v33, v34, v35, v36, v37);
        *isInvalidVoiceList = v40->fields.isInvalidVoiceList;
        v42 = v40->fields.overwriteName;
        *overwriteName = v42;
        sub_B16F98(
          (BattleServantConfConponent_o *)overwriteName,
          (System_Int32_array **)v42,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
        v49 = v40->fields.overwriteNameDefault;
        *overwriteNameDefault = v49;
        sub_B16F98(
          (BattleServantConfConponent_o *)overwriteNameDefault,
          (System_Int32_array **)v49,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55);
        v56 = v40->fields.overwritePriority;
        goto LABEL_31;
      }
    }
LABEL_26:
    sub_B170D4();
  }
  if ( !scriptJson )
    goto LABEL_26;
  v57 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v57 >= (int)max_length )
      return;
    if ( v57 >= max_length )
      goto LABEL_33;
    v59 = scriptJson->m_Items[v57];
    if ( !v59 )
      goto LABEL_26;
    infos = v59->fields.infos;
    if ( infos )
      break;
LABEL_25:
    ++v57;
    if ( !scriptJson )
      goto LABEL_26;
  }
  v61 = 0LL;
  while ( 1 )
  {
    v62 = infos->max_length;
    if ( (int)v61 >= v62 )
    {
      scriptJson = this->fields.scriptJson;
      goto LABEL_25;
    }
    if ( (unsigned int)v61 >= v62 )
      goto LABEL_33;
    v63 = infos->m_Items[v61];
    if ( !v63 )
      goto LABEL_26;
    v30 = System_String__Equals_43731072(labelName, v63->fields.id, 0LL);
    if ( v30 )
      break;
    infos = v59->fields.infos;
    ++v61;
    if ( !infos )
      goto LABEL_26;
  }
  v69 = v59->fields.conds;
  *conds = v69;
  sub_B16F98((BattleServantConfConponent_o *)conds, (System_Int32_array **)v69, v32, v64, v65, v66, v67, v68);
  *isInvalidVoiceList = v59->fields.isInvalidVoiceList;
  if ( !isMaterial
    || (materialOverwriteName = v59->fields.materialOverwriteName,
        *overwriteName = materialOverwriteName,
        sub_B16F98(
          (BattleServantConfConponent_o *)overwriteName,
          (System_Int32_array **)materialOverwriteName,
          v70,
          v71,
          v72,
          v73,
          v74,
          v75),
        System_String__IsNullOrEmpty(*overwriteName, 0LL)) )
  {
    v77 = v59->fields.overwriteName;
    *overwriteName = v77;
    sub_B16F98((BattleServantConfConponent_o *)overwriteName, (System_Int32_array **)v77, v70, v71, v72, v73, v74, v75);
  }
  v78 = v59->fields.overwriteNameDefault;
  *overwriteNameDefault = v78;
  sub_B16F98(
    (BattleServantConfConponent_o *)overwriteNameDefault,
    (System_Int32_array **)v78,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v56 = v59->fields.overwritePriority;
LABEL_31:
  *overwritePriority = v56;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getRankUpFriendShip(
        ServantVoiceEntity_o *this,
        int32_t friendShipRank,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  return ServantVoiceEntity__getVoiceList_30036348(this, 1, 3, friendShipRank, 0LL, -1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getSpecificLimitCntUpVoiceList(
        ServantVoiceEntity_o *this,
        int32_t limitCount,
        System_String_o *playVoiceLabel,
        int32_t genderType,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return ServantVoiceEntity__getVoiceList_30036348(this, 2, 9, limitCount, playVoiceLabel, genderType, v5);
}


int32_t __fastcall ServantVoiceEntity__getSvtIdfromVoiceAssetName(System_String_o *assetName, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Char_array *v4; // x0
  __int64 v5; // x2
  System_String_array *v6; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FCAE9 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    byte_40FCAE9 = 1;
  }
  result = 0;
  v4 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v2);
  if ( !v4 )
    goto LABEL_13;
  if ( !v4->max_length )
  {
    sub_B17100(v4, v4, v5);
    sub_B170A0();
  }
  v4->m_Items[2] = 95;
  if ( !assetName || (v6 = System_String__Split(assetName, v4, 0LL), result = 0, !v6) )
LABEL_13:
    sub_B170D4();
  if ( v6->max_length != 2 )
    return 0;
  if ( System_Int32__TryParse(v6->m_Items[1], &result, 0LL) )
    return result;
  return 0;
}


System_String_o *__fastcall ServantVoiceEntity__getVoiceAssetName(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  int32_t id; // w19

  if ( (byte_40FCAE7 & 1) == 0 )
  {
    sub_B16FFC(&ServantVoiceEntity_TypeInfo, method);
    byte_40FCAE7 = 1;
  }
  id = this->fields.id;
  if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
  }
  return ServantVoiceEntity__getVoiceAssetName_30033140(id, method);
}


System_String_o *__fastcall ServantVoiceEntity__getVoiceAssetName_30033140(int32_t svtId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = svtId;
  if ( (byte_40FCAE8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3947, method);
    byte_40FCAE8 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_43743732((System_String_o *)StringLiteral_3947, v2, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList(
        ServantVoiceEntity_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v14; // x21
  int max_length; // w9
  SvtVoiceInfo_o *v16; // x8

  if ( (byte_40FCAEA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v8);
    byte_40FCAEA = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                 *(_QWORD *)&type,
                                                                                                 method,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_11:
    sub_B170D4();
  v14 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v14 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v9;
    if ( (unsigned int)v14 >= max_length )
    {
      sub_B17100(v10, v11, v12);
      sub_B170A0();
    }
    v16 = scriptJson->m_Items[v14];
    if ( v16 )
    {
      if ( v9 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v16->fields.infos,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
        scriptJson = this->fields.scriptJson;
        ++v14;
        if ( scriptJson )
          continue;
      }
    }
    goto LABEL_11;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceListByGender(
        ServantVoiceEntity_o *this,
        int32_t type,
        int32_t condType,
        int32_t genderType,
        System_String_o *playVoiceLabel,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x22
  WebViewManager_o *Instance; // x0
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v18; // x2
  SvtVoiceInfo_o *PlayVoiceLabelInfo; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v23; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v25; // x26
  struct ServantVoiceCond_array *conds; // x8
  __int64 v27; // x9
  ServantVoiceCond_o *v28; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v30; // x8

  if ( (byte_40FCAEC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40FCAEC = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  *(_QWORD *)&type,
                                                                                                  *(_QWORD *)&condType,
                                                                                                  *(_QWORD *)&genderType,
                                                                                                  playVoiceLabel);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  PlayVoiceLabelInfo = ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v18);
  if ( PlayVoiceLabelInfo )
  {
    if ( v15 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v15,
        (EventMissionProgressRequest_Argument_ProgressData_o *)PlayVoiceLabelInfo->fields.infos,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      return (System_Collections_Generic_List_ServantVoiceData____o *)v15;
    }
LABEL_27:
    sub_B170D4();
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_27;
  v23 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v23 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v15;
    if ( (unsigned int)v23 >= max_length )
      goto LABEL_29;
    v25 = scriptJson->m_Items[v23];
    if ( !v25 )
      goto LABEL_27;
    conds = v25->fields.conds;
    if ( conds )
    {
      v27 = *(_QWORD *)&conds->max_length;
      if ( v27 )
      {
        if ( !(_DWORD)v27 )
          goto LABEL_29;
        v28 = conds->m_Items[0];
        if ( !v28 )
          goto LABEL_27;
        if ( v28->fields.condType == condType )
        {
          infos = v25->fields.infos;
          if ( !infos )
            goto LABEL_27;
          if ( !infos->max_length )
          {
LABEL_29:
            sub_B17100(PlayVoiceLabelInfo, v20, v21);
            sub_B170A0();
          }
          v30 = infos->m_Items[0];
          if ( !v30 || !MasterData_WarQuestSelectionMaster )
            goto LABEL_27;
          PlayVoiceLabelInfo = (SvtVoiceInfo_o *)VoicePlayCondMaster__isVoicePlay(
                                                   MasterData_WarQuestSelectionMaster,
                                                   this->fields.id,
                                                   v30->fields.id,
                                                   0LL,
                                                   -1LL,
                                                   genderType,
                                                   0LL);
          if ( ((unsigned __int8)PlayVoiceLabelInfo & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_27;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v15,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v25->fields.infos,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v23;
    if ( !scriptJson )
      goto LABEL_27;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList_30036348(
        ServantVoiceEntity_o *this,
        int32_t type,
        int32_t condType,
        int32_t condValue,
        System_String_o *playVoiceLabel,
        int32_t genderType,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  WebViewManager_o *Instance; // x0
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x24
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x23
  const MethodInfo *v24; // x2
  SvtVoiceInfo_o *PlayVoiceLabelInfo; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned __int64 v29; // x25
  unsigned __int64 max_length; // x9
  SvtVoiceInfo_o *v31; // x27
  struct ServantVoiceCond_array *conds; // x9
  __int64 v33; // x28
  int v34; // w8
  ServantVoiceCond_o *v35; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v37; // x8

  if ( (byte_40FCAEF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_40FCAEF = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  PlayVoiceLabelInfo = ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v24);
  if ( PlayVoiceLabelInfo )
  {
    if ( v23 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v23,
        (EventMissionProgressRequest_Argument_ProgressData_o *)PlayVoiceLabelInfo->fields.infos,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      return (System_Collections_Generic_List_ServantVoiceData____o *)v23;
    }
LABEL_35:
    sub_B170D4();
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_35;
  v29 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (__int64)v29 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v23;
    if ( v29 >= max_length )
    {
LABEL_37:
      sub_B17100(PlayVoiceLabelInfo, v26, v27);
      sub_B170A0();
    }
    v31 = scriptJson->m_Items[v29];
    if ( v31 )
    {
      conds = v31->fields.conds;
      if ( conds )
      {
        v33 = 0LL;
        while ( 1 )
        {
          v34 = conds->max_length;
          if ( (int)v33 >= v34 )
            break;
          if ( (unsigned int)v33 >= v34 )
            goto LABEL_37;
          v35 = conds->m_Items[v33];
          if ( !v35 )
            goto LABEL_35;
          if ( v35->fields.condType == condType )
          {
            if ( condType != 3 && condType != 23 && condType != 9 )
              goto LABEL_29;
            if ( v35->fields.value == condValue )
            {
              infos = v31->fields.infos;
              if ( !infos )
                goto LABEL_35;
              if ( !infos->max_length )
                goto LABEL_37;
              v37 = infos->m_Items[0];
              if ( !v37 || !MasterData_WarQuestSelectionMaster )
                goto LABEL_35;
              PlayVoiceLabelInfo = (SvtVoiceInfo_o *)VoicePlayCondMaster__isVoicePlay(
                                                       MasterData_WarQuestSelectionMaster,
                                                       this->fields.id,
                                                       v37->fields.id,
                                                       0LL,
                                                       -1LL,
                                                       genderType,
                                                       0LL);
              if ( ((unsigned __int8)PlayVoiceLabelInfo & 1) != 0 )
              {
LABEL_29:
                if ( !v23 )
                  goto LABEL_35;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v23,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v31->fields.infos,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
              }
            }
          }
          conds = v31->fields.conds;
          ++v33;
          if ( !conds )
            goto LABEL_35;
        }
        scriptJson = this->fields.scriptJson;
      }
    }
    ++v29;
    if ( !scriptJson )
      goto LABEL_35;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList_30036932(
        ServantVoiceEntity_o *this,
        int32_t type,
        System_String_o *labelName,
        System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList,
        bool isCheckPlayCond,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  WebViewManager_o *Instance; // x0
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x19
  _BOOL8 isVoicePlay; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v27; // x9
  SvtVoiceInfo_o *v28; // x8
  struct ServantVoiceData_array *infos; // x1
  il2cpp_array_size_t v30; // w26
  _BOOL4 v31; // w24
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v33; // x25
  struct ServantVoiceData_array *v34; // x9
  __int64 v35; // x27
  int v36; // w8
  ServantVoiceData_o *v37; // x28

  if ( (byte_40FCAF0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&StringLiteral_15859, v15);
    byte_40FCAF0 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !labelName )
    goto LABEL_40;
  isVoicePlay = System_String__EndsWith(labelName, (System_String_o *)StringLiteral_15859, 0LL);
  scriptJson = this->fields.scriptJson;
  if ( isVoicePlay )
  {
    if ( scriptJson )
    {
      v27 = *(_QWORD *)&scriptJson->max_length;
      if ( !v27 )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v22;
      if ( !(_DWORD)v27 )
      {
LABEL_41:
        sub_B17100(isVoicePlay, v24, v25);
        sub_B170A0();
      }
      v28 = scriptJson->m_Items[0];
      if ( v28 )
      {
        infos = v28->fields.infos;
        if ( !infos || !*(_QWORD *)&infos->max_length )
          return (System_Collections_Generic_List_ServantVoiceData____o *)v22;
        if ( v22 )
          goto LABEL_38;
      }
    }
LABEL_40:
    sub_B170D4();
  }
  if ( !scriptJson )
    goto LABEL_40;
  v30 = 0;
  v31 = (unsigned int)(type - 1) < 2 && isCheckPlayCond;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v30 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v22;
    if ( v30 >= max_length )
      goto LABEL_41;
    v33 = scriptJson->m_Items[v30];
    if ( !v33 )
      goto LABEL_40;
    v34 = v33->fields.infos;
    if ( v34 )
      break;
LABEL_34:
    ++v30;
    if ( !scriptJson )
      goto LABEL_40;
  }
  v35 = 0LL;
  while ( 1 )
  {
    v36 = v34->max_length;
    if ( (int)v35 >= v36 )
    {
      scriptJson = this->fields.scriptJson;
      goto LABEL_34;
    }
    if ( (unsigned int)v35 >= v36 )
      goto LABEL_41;
    v37 = v34->m_Items[v35];
    if ( !v37 )
      goto LABEL_40;
    isVoicePlay = System_String__Equals_43731072(labelName, v37->fields.id, 0LL);
    if ( !v31 )
      break;
    if ( isVoicePlay )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_40;
      isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                      MasterData_WarQuestSelectionMaster,
                      this->fields.id,
                      v37->fields.id,
                      disableCondTypeList,
                      -1LL,
                      -1,
                      0LL);
      break;
    }
LABEL_31:
    v34 = v33->fields.infos;
    ++v35;
    if ( !v34 )
      goto LABEL_40;
  }
  if ( !isVoicePlay )
    goto LABEL_31;
  if ( !v22 )
    goto LABEL_40;
  infos = v33->fields.infos;
LABEL_38:
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v22,
    (EventMissionProgressRequest_Argument_ProgressData_o *)infos,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
  return (System_Collections_Generic_List_ServantVoiceData____o *)v22;
}


bool __fastcall ServantVoiceEntity__isAvailableMyRoomVoice(
        ServantVoiceEntity_o *this,
        SvtVoiceInfo_o *info,
        int32_t imageLimitCount,
        bool isBeforeFriendship,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  UserGameEntity_o *SelfUserGame; // x21
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantMaster_o *v14; // x24
  UserServantEntity_o *Entity; // x23
  UserServantEntity_array *AllList; // x0
  UserServantEntity_array *v17; // x24
  int32_t FriendshipRank; // w0
  const MethodInfo *v19; // x2
  __int64 IsAvailableHomeAndGrowth; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  struct ServantVoiceCond_array *conds; // x27
  int max_length; // w8
  int32_t v25; // w26
  int v26; // w28
  bool v27; // w22
  ServantVoiceCond_o *v28; // x25
  int value; // w8
  int32_t v30; // w0
  const MethodInfo *v32; // [xsp+0h] [xbp-60h]

  if ( (byte_40FCAFD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, info);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FCAFD = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame
    || (v14 = (UserServantMaster_o *)MasterData_WarQuestSelectionMaster) == 0LL
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   SelfUserGame->fields.favoriteUserSvtId,
                   (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
        AllList = UserServantMaster__getAllList(v14, 0LL),
        !Entity)
    || (v17 = AllList,
        FriendshipRank = UserServantEntity__getFriendshipRank(Entity, 0LL),
        IsAvailableHomeAndGrowth = ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v19),
        !info)
    || (conds = info->fields.conds) == 0LL )
  {
LABEL_23:
    sub_B170D4();
  }
  max_length = conds->max_length;
  if ( max_length < 1 )
    return 0;
  v25 = IsAvailableHomeAndGrowth;
  v26 = 0;
  v27 = isBeforeFriendship;
  do
  {
    if ( v26 >= (unsigned int)max_length )
    {
      sub_B17100(IsAvailableHomeAndGrowth, v21, v22);
      sub_B170A0();
    }
    v28 = conds->m_Items[v26];
    if ( !v28 )
      goto LABEL_23;
    if ( v28->fields.condType == 23 )
    {
      value = v28->fields.value;
      if ( value <= 0 )
      {
        if ( value )
          return 0;
      }
      else if ( value != imageLimitCount )
      {
        return 0;
      }
    }
    else
    {
      v30 = UserServantEntity__getFriendshipRank(Entity, 0LL);
      IsAvailableHomeAndGrowth = ServantVoiceEntity__IsAvailableHomeAndGrowth(
                                   this,
                                   v28,
                                   SelfUserGame,
                                   Entity,
                                   v17,
                                   v25,
                                   v30,
                                   v27,
                                   v32);
      if ( (IsAvailableHomeAndGrowth & 1) == 0 )
        return 0;
    }
    max_length = conds->max_length;
    ++v26;
  }
  while ( v26 < max_length );
  return 1;
}


bool __fastcall ServantVoiceEntity__isAvailableVoice(
        ServantVoiceEntity_o *this,
        SvtVoiceInfo_o *info,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v12; // x3

  if ( (byte_40FCAFB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, info);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FCAFB = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             userSvtId,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return ServantVoiceEntity__isAvailableVoice_30042852(this, info, Entity, v12);
}


bool __fastcall ServantVoiceEntity__isAvailableVoice_30042852(
        ServantVoiceEntity_o *this,
        SvtVoiceInfo_o *info,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UserGameEntity_o *SelfUserGame; // x21
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_array *AllList; // x22
  int32_t FriendshipRank; // w0
  const MethodInfo *v14; // x2
  __int64 isEventEndState; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  struct ServantVoiceCond_array *conds; // x25
  int max_length; // w8
  int32_t v20; // w23
  unsigned int v21; // w26
  ServantVoiceCond_o *v22; // x24
  int32_t value; // w24
  ServantVoiceEntity_o *Time; // x0
  const MethodInfo *v25; // x3
  int v26; // w24
  int32_t v27; // w24
  ServantVoiceEntity_o *v28; // x0
  const MethodInfo *v29; // x3
  int32_t v30; // w24
  int v31; // w24
  int32_t v32; // w0
  const MethodInfo *v34; // [xsp+0h] [xbp-60h]

  if ( (byte_40FCAFC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, info);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FCAFC = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_32;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_33;
  AllList = UserServantMaster__getAllList(MasterData_WarQuestSelectionMaster, 0LL);
  FriendshipRank = UserServantEntity__getFriendshipRank(userSvtEntity, 0LL);
  isEventEndState = ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v14);
  if ( !info )
    goto LABEL_33;
  conds = info->fields.conds;
  if ( !conds )
    goto LABEL_33;
  max_length = conds->max_length;
  if ( max_length < 1 )
  {
LABEL_32:
    LOBYTE(isEventEndState) = 0;
    return isEventEndState;
  }
  v20 = isEventEndState;
  v21 = 0;
  while ( 2 )
  {
    if ( v21 >= max_length )
    {
      sub_B17100(isEventEndState, v16, v17);
      sub_B170A0();
    }
    v22 = conds->m_Items[v21];
    if ( !v22 )
LABEL_33:
      sub_B170D4();
    isEventEndState = 0LL;
    switch ( v22->fields.condType )
    {
      case 8:
        goto LABEL_30;
      case 9:
      case 0xA:
      case 0x11:
        return isEventEndState;
      case 0xD:
        value = v22->fields.value;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Time = (ServantVoiceEntity_o *)NetworkManager__getTime(0LL);
        isEventEndState = ServantVoiceEntity__isEventEndState(Time, value, (int64_t)Time, v25);
        if ( (isEventEndState & 1) == 0 )
          goto LABEL_32;
        goto LABEL_30;
      case 0xE:
        v27 = v22->fields.value;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v28 = (ServantVoiceEntity_o *)NetworkManager__getTime(0LL);
        isEventEndState = ServantVoiceEntity__isEventEndState(v28, v27, (int64_t)v28, v29);
        if ( (isEventEndState & 1) != 0 )
          goto LABEL_32;
        goto LABEL_30;
      case 0x18:
        v30 = v22->fields.value;
        isEventEndState = UserServantEntity__getLimitCount(userSvtEntity, 0LL);
        if ( v30 != (_DWORD)isEventEndState )
          goto LABEL_32;
        goto LABEL_30;
      case 0x19:
        v26 = v22->fields.value;
        isEventEndState = UserServantEntity__getLimitCount(userSvtEntity, 0LL);
        if ( v26 > (int)isEventEndState )
          goto LABEL_32;
        goto LABEL_30;
      case 0x1A:
        v31 = v22->fields.value;
        isEventEndState = UserServantEntity__getLimitCount(userSvtEntity, 0LL);
        if ( v31 < (int)isEventEndState )
          goto LABEL_32;
        goto LABEL_30;
      default:
        v32 = UserServantEntity__getFriendshipRank(userSvtEntity, 0LL);
        isEventEndState = ServantVoiceEntity__IsAvailableHomeAndGrowth(
                            this,
                            v22,
                            SelfUserGame,
                            userSvtEntity,
                            AllList,
                            v20,
                            v32,
                            0,
                            v34);
        if ( (isEventEndState & 1) == 0 )
          goto LABEL_32;
LABEL_30:
        max_length = conds->max_length;
        if ( (int)++v21 < max_length )
          continue;
        LOBYTE(isEventEndState) = 1;
        break;
    }
    return isEventEndState;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantVoiceEntity__isEventEndState(
        ServantVoiceEntity_o *this,
        int32_t eventId,
        int64_t time,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FCB04 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FCB04 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_9;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         eventId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
  {
    if ( entity )
      return *(_QWORD *)&entity->fields.eventId <= time;
LABEL_9:
    sub_B170D4();
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantVoiceEntity__isQuestClearState(
        ServantVoiceEntity_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FCB03 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&questId);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FCB03 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( UserQuestMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, questId, 0LL) )
  {
    if ( entity )
      return UserQuestEntity__getClearNum(entity, 0LL) > 0;
LABEL_13:
    sub_B170D4();
  }
  return 0;
}


ServantVoiceData_array *__fastcall ServantVoiceEntity__lotteryLevelUpVoice(
        ServantVoiceEntity_o *this,
        int64_t userSvtId,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x1
  const MethodInfo *v12; // x3

  if ( (byte_40FCAF8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FCAF8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             userSvtId,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return ServantVoiceEntity__lotteryLevelUpVoice_30041000(this, Entity, voiceId, v12);
}


ServantVoiceData_array *__fastcall ServantVoiceEntity__lotteryLevelUpVoice_30041000(
        ServantVoiceEntity_o *this,
        UserServantEntity_o *userServantEntity,
        System_String_o *voiceId,
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
  WebViewManager_o *Instance; // x0
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  _BOOL8 isVoicePlay; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  const MethodInfo *v30; // x3
  __int64 v31; // x4
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v33; // x28
  UserServantEntity_Fields *p_fields; // x27
  __int64 v35; // x9
  SvtVoiceInfo_o *v36; // x24
  struct ServantVoiceData_array *infos; // x8
  __int64 v38; // x9
  ServantVoiceData_o *v39; // x8
  ServantVoiceData_o *v40; // x8
  __int128 v41; // q1
  int32_t id; // w25
  System_String_o *v43; // x26
  int64_t v44; // x0
  struct ServantVoiceCond_array *conds; // x8
  WeightRate_int__o *v47; // x21
  int size; // w23
  int32_t i; // w22
  int v50; // w8
  __int64 v51; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v52; // x8
  __int64 v53; // x8
  __int64 v54; // x8
  unsigned int v55; // w28
  SvtVoiceInfo_o *v56; // x24
  struct ServantVoiceData_array *v57; // x8
  __int64 v58; // x9
  ServantVoiceData_o *v59; // x8
  __int128 v60; // q1
  int32_t v61; // w25
  System_String_o *v62; // x26
  int64_t v63; // x0
  struct ServantVoiceCond_array *v64; // x8
  int32_t v65; // w0
  EventMissionProgressRequest_Argument_ProgressData_o *v66; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+40h] [xbp-70h]

  if ( (byte_40FCAFA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, userServantEntity);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__, v10);
    sub_B16FFC(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B16FFC(&ServantVoiceData___TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&Method_WeightRate_int___ctor__, v15);
    sub_B16FFC(&Method_WeightRate_int__getData__, v16);
    sub_B16FFC(&Method_WeightRate_int__getTotalWeight__, v17);
    sub_B16FFC(&Method_WeightRate_int__setWeight__, v18);
    sub_B16FFC(&WeightRate_int__TypeInfo, v19);
    byte_40FCAFA = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SvtVoiceInfo__TypeInfo,
                                                                                                  v22,
                                                                                                  v23,
                                                                                                  v24,
                                                                                                  v25);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_79;
  v33 = 0LL;
  p_fields = &userServantEntity->fields;
  while ( 1 )
  {
    v35 = *(_QWORD *)&scriptJson->max_length;
    if ( (int)v33 >= (int)v35 )
      break;
    if ( (unsigned int)v33 >= (unsigned int)v35 )
      goto LABEL_80;
    v36 = scriptJson->m_Items[v33];
    if ( !v36 )
      goto LABEL_79;
    infos = v36->fields.infos;
    if ( infos )
    {
      v38 = *(_QWORD *)&infos->max_length;
      if ( v38 )
      {
        if ( voiceId )
        {
          if ( !(_DWORD)v38 )
            goto LABEL_80;
          v39 = infos->m_Items[0];
          if ( !v39 )
            goto LABEL_79;
          isVoicePlay = System_String__op_Equality(v39->fields.id, voiceId, 0LL);
          if ( isVoicePlay )
            goto LABEL_17;
        }
        else
        {
          if ( !(_DWORD)v38 )
            goto LABEL_80;
          v40 = infos->m_Items[0];
          if ( !v40 )
            goto LABEL_79;
          v41 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          id = this->fields.id;
          v43 = v40->fields.id;
          *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
          *(_OWORD *)&v69.fields.fakeValue = v41;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v68 = v69;
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v68, 0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_79;
          isVoicePlay = VoicePlayCondMaster__isVoicePlay(MasterData_WarQuestSelectionMaster, id, v43, 0LL, v44, -1, 0LL);
          if ( isVoicePlay )
          {
            conds = v36->fields.conds;
            if ( conds )
            {
              if ( *(_QWORD *)&conds->max_length )
              {
                isVoicePlay = ServantVoiceEntity__isAvailableVoice_30042852(this, v36, userServantEntity, v30);
                if ( isVoicePlay )
                {
LABEL_17:
                  if ( !v26 )
                    goto LABEL_79;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v26,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
                }
              }
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v33;
    if ( !scriptJson )
      goto LABEL_79;
  }
  if ( !v26 )
    goto LABEL_79;
  if ( !v26->fields._size )
  {
    if ( !voiceId )
      return (ServantVoiceData_array *)sub_B17014(ServantVoiceData___TypeInfo, 0LL, v29);
    if ( (int)v35 >= 1 )
    {
      v55 = 0;
      while ( v55 < (unsigned int)v35 )
      {
        v56 = scriptJson->m_Items[v55];
        if ( !v56 )
          goto LABEL_79;
        v57 = v56->fields.infos;
        if ( v57 )
        {
          v58 = *(_QWORD *)&v57->max_length;
          if ( v58 )
          {
            if ( !(_DWORD)v58 )
              break;
            v59 = v57->m_Items[0];
            if ( !v59 )
              goto LABEL_79;
            v60 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            v61 = this->fields.id;
            v62 = v59->fields.id;
            *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v69.fields.fakeValue = v60;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v67 = v69;
            v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v67, 0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_79;
            isVoicePlay = VoicePlayCondMaster__isVoicePlay(
                            MasterData_WarQuestSelectionMaster,
                            v61,
                            v62,
                            0LL,
                            v63,
                            -1,
                            0LL);
            if ( isVoicePlay )
            {
              v64 = v56->fields.conds;
              if ( v64 )
              {
                if ( *(_QWORD *)&v64->max_length )
                {
                  isVoicePlay = ServantVoiceEntity__isAvailableVoice_30042852(this, v56, userServantEntity, v30);
                  if ( isVoicePlay )
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v26,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
                      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
                }
              }
            }
          }
        }
        scriptJson = this->fields.scriptJson;
        if ( !scriptJson )
          goto LABEL_79;
        LODWORD(v35) = scriptJson->max_length;
        if ( (int)++v55 >= (int)v35 )
          goto LABEL_70;
      }
LABEL_80:
      sub_B17100(isVoicePlay, v28, v29);
      sub_B170A0();
    }
LABEL_70:
    if ( !v26->fields._size )
      return (ServantVoiceData_array *)sub_B17014(ServantVoiceData___TypeInfo, 0LL, v29);
  }
  v47 = (WeightRate_int__o *)sub_B170CC(WeightRate_int__TypeInfo, v28, v29, v30, v31);
  WeightRate_int____ctor(v47, (const MethodInfo_2ADD274 *)Method_WeightRate_int___ctor__);
  size = v26->fields._size;
  if ( size >= 1 )
  {
    if ( v47 )
    {
      for ( i = 0; i != size; ++i )
        WeightRate_int___setWeight(v47, 1, i, (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
      goto LABEL_38;
    }
    goto LABEL_79;
  }
LABEL_38:
  isVoicePlay = System_String__IsNullOrEmpty(voiceId, 0LL);
  if ( isVoicePlay )
    goto LABEL_73;
  v50 = v26->fields._size;
  if ( v50 < 1 )
    goto LABEL_73;
  v51 = 0LL;
  while ( 1 )
  {
    if ( v50 <= (unsigned int)v51 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v52 = v26->fields._items->m_Items[v51];
    if ( !v52 )
      goto LABEL_79;
    v53 = *(_QWORD *)&v52[1].fields.targetId;
    if ( !v53 )
      goto LABEL_79;
    if ( !*(_DWORD *)(v53 + 24) )
      goto LABEL_80;
    v54 = *(_QWORD *)(v53 + 32);
    if ( !v54 )
      goto LABEL_79;
    isVoicePlay = System_String__op_Equality(*(System_String_o **)(v54 + 16), voiceId, 0LL);
    if ( isVoicePlay )
      break;
    v50 = v26->fields._size;
    if ( (int)++v51 >= v50 )
      goto LABEL_73;
  }
  if ( (_DWORD)v51 == -1 )
  {
LABEL_73:
    if ( !v47 )
      goto LABEL_79;
    v65 = UnityEngine_Random__Range_34843248(0, v47->fields.totalweight, 0LL);
    LODWORD(v51) = WeightRate_int___getData(v47, v65, (const MethodInfo_2ADC8C0 *)Method_WeightRate_int__getData__);
  }
  if ( v26->fields._size <= (unsigned int)v51 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v66 = v26->fields._items->m_Items[(int)v51];
  if ( !v66 )
LABEL_79:
    sub_B170D4();
  return *(ServantVoiceData_array **)&v66[1].fields.targetId;
}


System_Collections_Generic_List_SvtVoiceInfo__o *__fastcall ServantVoiceEntity__randomChangeSvtVoiceCount(
        ServantVoiceEntity_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x21
  _BOOL8 isVoicePlay; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v21; // x26
  int max_length; // w9
  SvtVoiceInfo_o *v23; // x23
  struct ServantVoiceData_array *infos; // x8
  __int64 v25; // x9
  ServantVoiceData_o *v26; // x8
  __int128 v27; // q1
  int32_t id; // w24
  System_String_o *v29; // x25
  int64_t v30; // x0
  const MethodInfo *v31; // x3
  struct ServantVoiceCond_array *conds; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+20h] [xbp-70h]

  if ( (byte_40FCAF9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, userServantEntity);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FCAF9 = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v12, v13, v14, v15),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v16,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_26:
    sub_B170D4();
  }
  v21 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v21 >= max_length )
      return (System_Collections_Generic_List_SvtVoiceInfo__o *)v16;
    if ( (unsigned int)v21 >= max_length )
      goto LABEL_29;
    v23 = scriptJson->m_Items[v21];
    if ( !v23 )
      goto LABEL_26;
    infos = v23->fields.infos;
    if ( infos )
    {
      v25 = *(_QWORD *)&infos->max_length;
      if ( v25 )
      {
        if ( !(_DWORD)v25 )
        {
LABEL_29:
          sub_B17100(isVoicePlay, v18, v19);
          sub_B170A0();
        }
        v26 = infos->m_Items[0];
        if ( !v26 )
          goto LABEL_26;
        v27 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        id = this->fields.id;
        v29 = v26->fields.id;
        *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v35.fields.fakeValue = v27;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v34 = v35;
        v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v34, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_26;
        isVoicePlay = VoicePlayCondMaster__isVoicePlay(MasterData_WarQuestSelectionMaster, id, v29, 0LL, v30, -1, 0LL);
        if ( isVoicePlay )
        {
          conds = v23->fields.conds;
          if ( conds )
          {
            if ( *(_QWORD *)&conds->max_length )
            {
              isVoicePlay = ServantVoiceEntity__isAvailableVoice_30042852(this, v23, userServantEntity, v31);
              if ( isVoicePlay )
              {
                if ( !v16 )
                  goto LABEL_26;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v16,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
              }
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v21;
    if ( !scriptJson )
      goto LABEL_26;
  }
}