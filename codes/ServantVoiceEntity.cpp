void __fastcall ServantVoiceEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_Int32_array **v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  int v11; // w8
  System_Int32_array **v12; // x1
  BattleServantConfConponent_o *static_fields; // x0
  __int64 v14; // x0

  if ( (byte_418B111 & 1) == 0 )
  {
    sub_B2C35C(&ServantVoiceEntity_TypeInfo, v1);
    sub_B2C35C(&GameEventType_TYPE___TypeInfo, v2);
    byte_418B111 = 1;
  }
  v3 = (System_Int32_array **)sub_B2C374(GameEventType_TYPE___TypeInfo, 2LL);
  if ( !v3 )
    sub_B2C434(0LL, v4);
  v11 = *((_DWORD *)v3 + 6);
  v12 = v3;
  if ( !v11 || (*((_DWORD *)v3 + 8) = 12, v11 == 1) )
  {
    v14 = sub_B2C460(v3);
    sub_B2C400(v14, 0LL);
  }
  *((_DWORD *)v3 + 9) = 22;
  static_fields = (BattleServantConfConponent_o *)ServantVoiceEntity_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v12;
  sub_B2C2F8(static_fields, v12, v5, v6, v7, v8, v9, v10);
}


void __fastcall ServantVoiceEntity___ctor(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418B110 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418B110 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantVoiceEntity__CreatePK(
        int32_t id,
        int32_t voicePrefix,
        int32_t type,
        const MethodInfo *method)
{
  if ( (byte_418B0ED & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&voicePrefix);
    byte_418B0ED = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           voicePrefix,
           type,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantVoiceEntity__CreatePrimaryKey(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t voicePrefix; // w20
  int32_t id; // w21
  int32_t type; // w19

  if ( (byte_418B0EC & 1) == 0 )
  {
    sub_B2C35C(&ServantVoiceEntity_TypeInfo, method);
    byte_418B0EC = 1;
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
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // x9
  struct SvtVoiceInfo_array *scriptJson; // x9
  il2cpp_array_size_t v10; // w8
  il2cpp_array_size_t max_length; // w10
  SvtVoiceInfo_o *v12; // x9
  struct ServantVoiceCond_array *conds; // x9
  __int64 v14; // x12
  __int64 v15; // x10
  ServantVoiceCond_o *v16; // x13
  __int64 value; // x13
  __int64 v19; // x0

  v3 = rankNow;
  if ( (byte_418B0FC & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, *(_QWORD *)&rankNow);
    byte_418B0FC = 1;
  }
  v5 = sub_B2C374(int___TypeInfo, (unsigned int)v3);
  if ( !v5 )
    goto LABEL_26;
  v7 = *(unsigned int *)(v5 + 24);
  if ( (__int64)(v7 << 32) >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= v7 )
        goto LABEL_33;
      *(_DWORD *)(v5 + 32 + 4 * v8++) = 0;
    }
    while ( (__int64)v8 < (int)v7 );
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_26:
    sub_B2C434(v5, v6);
  v10 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v10 >= (int)max_length )
      break;
    if ( v10 >= max_length )
      goto LABEL_33;
    v12 = scriptJson->m_Items[v10];
    if ( !v12 )
      goto LABEL_26;
    conds = v12->fields.conds;
    if ( conds )
    {
      v14 = *(_QWORD *)&conds->max_length;
      if ( v14 )
      {
        if ( (int)v14 >= 1 )
        {
          v15 = 0LL;
          while ( (unsigned int)v15 < (unsigned int)v14 )
          {
            v16 = conds->m_Items[v15];
            if ( !v16 )
              goto LABEL_26;
            if ( v16->fields.condType == 3 )
            {
              value = v16->fields.value;
              if ( (_DWORD)value == v3 )
                return v3;
              if ( (int)value < v3 )
              {
                if ( (unsigned int)value >= *(_DWORD *)(v5 + 24) )
                  break;
                ++*(_DWORD *)(v5 + 4 * value + 32);
                v14 = *(_QWORD *)&conds->max_length;
              }
            }
            if ( (int)++v15 >= (int)v14 )
              goto LABEL_25;
          }
LABEL_33:
          v19 = sub_B2C460(v5);
          sub_B2C400(v19, 0LL);
        }
      }
    }
LABEL_25:
    scriptJson = this->fields.scriptJson;
    ++v10;
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantVoiceEntity__GetBoxGachaVoicePriority(
        ServantVoiceEntity_o *this,
        int32_t type,
        System_String_o *labelName,
        const MethodInfo *method)
{
  struct SvtVoiceInfo_array *scriptJson; // x20
  int max_length; // w8
  unsigned int v7; // w21
  SvtVoiceInfo_o *v8; // x22
  struct ServantVoiceData_array *infos; // x23
  int v10; // w8
  __int64 v11; // x24
  ServantVoiceData_o *v12; // x8
  __int64 v14; // x0

  if ( this->fields.type != type )
    return 0;
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_18:
    sub_B2C434(this, *(_QWORD *)&type);
  max_length = scriptJson->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
    {
LABEL_19:
      v14 = sub_B2C460(this);
      sub_B2C400(v14, 0LL);
    }
    v8 = scriptJson->m_Items[v7];
    if ( !v8 )
      goto LABEL_18;
    infos = v8->fields.infos;
    if ( infos )
    {
      v10 = infos->max_length;
      if ( v10 >= 1 )
        break;
    }
LABEL_15:
    max_length = scriptJson->max_length;
    if ( (int)++v7 >= max_length )
      return 0;
  }
  v11 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v11 >= v10 )
      goto LABEL_19;
    v12 = infos->m_Items[v11];
    if ( !v12 || !labelName )
      goto LABEL_18;
    this = (ServantVoiceEntity_o *)System_String__Equals_44292872(labelName, v12->fields.id, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return v8->fields.boxGachaPriority;
    v10 = infos->max_length;
    if ( (int)++v11 >= v10 )
      goto LABEL_15;
  }
}


int32_t __fastcall ServantVoiceEntity__GetChangeLimitVoiceFriendshipLv(
        ServantVoiceEntity_o *this,
        const MethodInfo *method)
{
  struct SvtVoiceInfo_array *scriptJson; // x8
  int max_length; // w9
  unsigned int v4; // w10
  SvtVoiceInfo_o *v5; // x11
  struct ServantVoiceCond_array *conds; // x12
  __int64 v7; // x11
  ServantVoiceCond_o *v8; // x13
  __int64 v9; // x13
  ServantVoiceCond_o **m_Items; // x12
  ServantVoiceCond_o *v11; // x14
  __int64 v12; // x0

  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_23:
    sub_B2C434(this, method);
  max_length = scriptJson->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    this = 0LL;
    while ( 1 )
    {
      if ( v4 >= max_length )
      {
LABEL_24:
        v12 = sub_B2C460(this);
        sub_B2C400(v12, 0LL);
      }
      v5 = scriptJson->m_Items[v4];
      if ( !v5 )
        goto LABEL_23;
      conds = v5->fields.conds;
      if ( conds )
      {
        v7 = *(_QWORD *)&conds->max_length;
        if ( v7 )
        {
          if ( !(_DWORD)v7 )
            goto LABEL_24;
          v8 = conds->m_Items[0];
          if ( !v8 )
            goto LABEL_23;
          if ( v8->fields.condType == 11 )
          {
            if ( (_DWORD)v7 == 1 )
              return (int)this;
            if ( (int)v7 >= 1 )
            {
              v9 = 0LL;
              m_Items = conds->m_Items;
              while ( 1 )
              {
                v11 = m_Items[v9];
                if ( !v11 )
                  goto LABEL_23;
                if ( v11->fields.condType == 20 )
                  break;
                if ( (int)++v9 >= (int)v7 )
                  goto LABEL_19;
              }
              this = (ServantVoiceEntity_o *)(unsigned int)v11->fields.value;
            }
          }
        }
      }
LABEL_19:
      if ( (int)++v4 >= max_length )
        return (int)this;
    }
  }
  LODWORD(this) = 0;
  return (int)this;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__GetFirstGetVoiceList(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( this->fields.type == 3 && !System_String__IsNullOrEmpty(labelName, 0LL) )
    return ServantVoiceEntity__getVoiceList_31408724(this, 3, labelName, 0LL, 1, v5);
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
  SvtVoiceInfo_o *v7; // x21
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned __int64 v9; // x22
  unsigned __int64 max_length; // x9
  struct ServantVoiceData_array *infos; // x9
  ServantVoiceData_o *v12; // x8
  __int64 v14; // x0

  IsNullOrEmpty = System_String__IsNullOrEmpty(playVoiceLabel, 0LL);
  v7 = 0LL;
  if ( !IsNullOrEmpty )
  {
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
LABEL_13:
      sub_B2C434(IsNullOrEmpty, v6);
    v9 = 0LL;
    while ( 1 )
    {
      max_length = scriptJson->max_length;
      if ( (__int64)v9 >= (int)max_length )
        return 0LL;
      if ( v9 >= max_length )
      {
        v14 = sub_B2C460(IsNullOrEmpty);
        sub_B2C400(v14, 0LL);
      }
      v7 = scriptJson->m_Items[v9];
      if ( v7 )
      {
        infos = v7->fields.infos;
        if ( !infos )
          goto LABEL_13;
        if ( (int)infos->max_length >= 1 )
        {
          v12 = infos->m_Items[0];
          if ( !v12 )
            goto LABEL_13;
          IsNullOrEmpty = System_String__op_Equality(v12->fields.id, playVoiceLabel, 0LL);
          if ( IsNullOrEmpty )
            return v7;
          scriptJson = this->fields.scriptJson;
        }
      }
      ++v9;
      if ( !scriptJson )
        goto LABEL_13;
    }
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantVoiceEntity__GetSummonScriptId(
        ServantVoiceEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  VoicePlayCondMaster_o *v9; // x21
  __int64 v10; // x23
  int max_length; // w9
  SvtVoiceInfo_o *v12; // x8
  struct ServantVoiceData_array *infos; // x9
  ServantVoiceData_o *v14; // x9
  System_String_o *summonScript; // x22
  __int64 v17; // x0

  if ( (byte_418B10F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418B10F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_16:
    sub_B2C434(Instance, v7);
  }
  v9 = (VoicePlayCondMaster_o *)Instance;
  v10 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v10 >= max_length )
      return 0LL;
    if ( (unsigned int)v10 >= max_length )
      goto LABEL_19;
    v12 = scriptJson->m_Items[v10];
    if ( !v12 )
      goto LABEL_16;
    infos = v12->fields.infos;
    if ( !infos )
      goto LABEL_16;
    if ( !infos->max_length )
    {
LABEL_19:
      v17 = sub_B2C460(Instance);
      sub_B2C400(v17, 0LL);
    }
    v14 = infos->m_Items[0];
    if ( !v14 || !v9 )
      goto LABEL_16;
    summonScript = v12->fields.summonScript;
    Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v9, svtId, v14->fields.id, 0LL, -1LL, -1, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (DataManager_o *)System_String__IsNullOrEmpty(summonScript, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        return summonScript;
    }
    scriptJson = this->fields.scriptJson;
    ++v10;
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
  EventMaster_o *v38; // x19
  System_Collections_Generic_List_EventEntity____o *EnableEntityLists; // x20
  ServantVoiceEntity_o *v40; // x19
  Il2CppObject *current; // x23
  void *monitor; // x24
  unsigned int v43; // w25
  __int64 v44; // x8
  EventDetailEntity_o *Entity; // x0
  __int64 v46; // x1
  _BOOL8 isEventVoicePlay; // x0
  __int64 v48; // x1
  bool IsWarNew; // w0
  signed int max_length; // w8
  il2cpp_array_size_t i; // w22
  Il2CppClass **v52; // x24
  Il2CppClass *v53; // x8
  ServantVoiceEntity_o **v54; // x24
  Il2CppClass *v55; // t1
  Il2CppClass *parent; // x20
  Il2CppClass *declaringType; // x21
  int32_t v58; // w0
  int32_t v59; // w20
  ServantVoiceEntity_o *v60; // x22
  __int64 v61; // x20
  __int64 v62; // x23
  signed int v63; // w8
  int v64; // w21
  il2cpp_array_size_t v65; // w25
  Il2CppClass **v66; // x26
  Il2CppClass *v67; // x8
  ServantVoiceEntity_o **v68; // x26
  Il2CppClass *v69; // t1
  Il2CppClass *v70; // x20
  Il2CppClass *v71; // x23
  int v72; // w20
  int type; // w8
  unsigned int v74; // w9
  __int64 v75; // x10
  int32_t v76; // w19
  __int64 v78; // x0
  __int64 v79; // x0
  System_Collections_Generic_List_Enumerator_T__o v80; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v81; // [xsp+20h] [xbp-70h] BYREF
  uint64_t list; // [xsp+38h] [xbp-58h] BYREF
  uint64_t dateData; // [xsp+40h] [xbp-50h] BYREF
  int32_t v84; // [xsp+4Ch] [xbp-44h] BYREF
  System_DateTime_o v85; // 0:x0.8
  System_DateTime_o v86; // 0:x0.8
  System_DateTime_o v87; // 0:x0.8
  System_DateTime_o v88; // 0:x0.8
  System_DateTime_o v89; // 0:x0.8
  System_DateTime_o v90; // 0:x0.8
  System_DateTime_o v91; // 0:x0.8
  System_DateTime_o v92; // 0:x0.8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v95; // 0:x0.16

  if ( (byte_418B105 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, cond);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantGroupMaster___, v17);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventEntity____Dispose__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventEntity____MoveNext__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventEntity____get_Current__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity____GetEnumerator__, v22);
    sub_B2C35C(&NetworkManager_TypeInfo, v23);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
    sub_B2C35C(&ServantVoiceEntity_TypeInfo, v25);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v27);
    this = (ServantVoiceEntity_o *)sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v28);
    byte_418B105 = 1;
  }
  v84 = 0;
  list = 0LL;
  dateData = 0LL;
  memset(&v81, 0, sizeof(v81));
  if ( !cond )
LABEL_105:
    sub_B2C434(this, cond);
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
      list = NetworkManager__getDateTime_26271468(birthDay, 0LL).fields.dateData;
      v85.fields.dateData = (uint64_t)&list;
      if ( System_DateTime__get_Month(v85, 0LL) == 2 )
      {
        v86.fields.dateData = (uint64_t)&list;
        if ( System_DateTime__get_Day(v86, 0LL) == 29 )
        {
          v87.fields.dateData = (uint64_t)&dateData;
          Year = System_DateTime__get_Year(v87, 0LL);
          v80.fields.list = 0LL;
          v88.fields.dateData = (uint64_t)&v80;
          System_DateTime___ctor_15270084(v88, Year, 2, 29, 0LL);
          list = (uint64_t)v80.fields.list;
        }
      }
      v89.fields.dateData = (uint64_t)&dateData;
      Month = System_DateTime__get_Month(v89, 0LL);
      v90.fields.dateData = (uint64_t)&list;
      if ( Month != System_DateTime__get_Month(v90, 0LL) )
        goto LABEL_91;
      v91.fields.dateData = (uint64_t)&dateData;
      Day = System_DateTime__get_Day(v91, 0LL);
      v92.fields.dateData = (uint64_t)&list;
      LimitCount = System_DateTime__get_Day(v92, 0LL);
LABEL_46:
      v37 = Day == LimitCount;
LABEL_47:
      isQuestClearState = v37;
      return isQuestClearState & 1;
    case 2:
      this = (ServantVoiceEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_105;
      this = (ServantVoiceEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
      v38 = (EventMaster_o *)this;
      if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
      }
      if ( !v38 )
        goto LABEL_105;
      EnableEntityLists = EventMaster__GetEnableEntityLists(
                            v38,
                            ServantVoiceEntity_TypeInfo->static_fields->EVENT_TYPES_VOICE,
                            0,
                            0LL);
      this = (ServantVoiceEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_105;
      this = (ServantVoiceEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( !EnableEntityLists )
        goto LABEL_105;
      v40 = this;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v80,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EnableEntityLists,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventEntity____GetEnumerator__);
      v81 = v80;
      isQuestClearState = 0;
LABEL_41:
      while ( 1 )
      {
        isEventVoicePlay = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                             &v81,
                             (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventEntity____MoveNext__);
        if ( !isEventVoicePlay )
          break;
        current = v81.fields.current;
        if ( v81.fields.current )
        {
          monitor = v81.fields.current[1].monitor;
          if ( monitor )
          {
            if ( (int)monitor >= 1 )
            {
              if ( !(_DWORD)monitor )
              {
LABEL_110:
                v79 = sub_B2C460(isEventVoicePlay);
                sub_B2C400(v79, 0LL);
              }
              v43 = 0;
              while ( 1 )
              {
                v44 = *((_QWORD *)&current[2].klass + (int)v43);
                if ( !v44 )
                  sub_B2C434(isEventVoicePlay, v48);
                if ( !v40 )
                  sub_B2C434(isEventVoicePlay, v48);
                Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)v40,
                                                  *(_DWORD *)(v44 + 16),
                                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
                if ( !Entity )
                  sub_B2C434(0LL, v46);
                isEventVoicePlay = EventDetailEntity__isEventVoicePlay(Entity, 0LL);
                if ( isEventVoicePlay )
                {
                  isQuestClearState = 1;
                  goto LABEL_41;
                }
                if ( (int)++v43 >= (int)monitor )
                  break;
                if ( v43 >= LODWORD(current[1].monitor) )
                  goto LABEL_110;
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v81,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventEntity____Dispose__);
      return isQuestClearState & 1;
    case 3:
      value = cond->fields.value;
      v37 = value == friendshipRankWithVoice;
      v35 = value <= friendshipRankWithVoice;
      if ( isBeforeFriendship )
        goto LABEL_94;
      goto LABEL_47;
    case 4:
      v84 = cond->fields.value;
      if ( !usrSvtList )
        goto LABEL_105;
      max_length = usrSvtList->max_length;
      if ( max_length < 1 )
        goto LABEL_91;
      for ( i = 0; (int)i < max_length; ++i )
      {
        if ( i >= max_length )
          goto LABEL_106;
        v52 = &usrSvtList->obj.klass + (int)i;
        v55 = v52[4];
        v54 = (ServantVoiceEntity_o **)(v52 + 4);
        v53 = v55;
        if ( !v55 )
          goto LABEL_105;
        declaringType = v53->_1.declaringType;
        parent = v53->_1.parent;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v93.fields.currentCryptoKey = declaringType;
        *(_QWORD *)&v93.fields.fakeValue = parent;
        v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v93, 0LL);
        this = (ServantVoiceEntity_o *)System_Int32__Equals_38381340((int32_t)&v84, v58, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( i >= usrSvtList->max_length )
            goto LABEL_106;
          this = *v54;
          if ( !*v54 )
            goto LABEL_105;
          this = (ServantVoiceEntity_o *)UserServantEntity__IsEventJoin((UserServantEntity_o *)this, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_103;
        }
        max_length = usrSvtList->max_length;
      }
LABEL_91:
      isQuestClearState = 0;
      return isQuestClearState & 1;
    case 5:
      v59 = cond->fields.value;
      this = (ServantVoiceEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_105;
      this = (ServantVoiceEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantGroupMaster___);
      if ( !this )
        goto LABEL_105;
      this = (ServantVoiceEntity_o *)ServantGroupMaster__getEntityListById((ServantGroupMaster_o *)this, v59, 0LL);
      if ( !userSvtEntity )
        goto LABEL_105;
      v60 = this;
      v62 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v61 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v94.fields.currentCryptoKey = v62;
      *(_QWORD *)&v94.fields.fakeValue = v61;
      this = (ServantVoiceEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v94, 0LL);
      if ( !usrSvtList )
        goto LABEL_105;
      v63 = usrSvtList->max_length;
      if ( v63 < 1 )
        goto LABEL_91;
      v64 = (int)this;
      v65 = 0;
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
      this = (ServantVoiceEntity_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !this )
        goto LABEL_105;
      IsWarNew = QuestTree__IsWarNew((QuestTree_o *)this, cond->fields.value, 0LL);
LABEL_102:
      isQuestClearState = !IsWarNew;
      return isQuestClearState & 1;
    case 0x11:
      if ( !userSvtEntity )
        goto LABEL_105;
      v76 = cond->fields.value;
      v35 = v76 <= UserServantEntity__getLimitCount(userSvtEntity, 0LL);
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
    if ( v65 >= v63 )
      goto LABEL_106;
    v66 = &usrSvtList->obj.klass + (int)v65;
    v69 = v66[4];
    v68 = (ServantVoiceEntity_o **)(v66 + 4);
    v67 = v69;
    if ( !v69 )
      goto LABEL_105;
    v71 = v67->_1.declaringType;
    v70 = v67->_1.parent;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v95.fields.currentCryptoKey = v71;
    *(_QWORD *)&v95.fields.fakeValue = v70;
    this = (ServantVoiceEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v95, 0LL);
    if ( v65 >= usrSvtList->max_length )
    {
LABEL_106:
      v78 = sub_B2C460(this);
      sub_B2C400(v78, 0LL);
    }
    v72 = (int)this;
    this = *v68;
    if ( !*v68 )
      goto LABEL_105;
    this = (ServantVoiceEntity_o *)UserServantEntity__IsEventJoin((UserServantEntity_o *)this, 0LL);
    if ( v64 != v72 && ((unsigned __int8)this & 1) == 0 )
    {
      if ( !v60 )
        goto LABEL_105;
      type = v60->fields.type;
      if ( type >= 1 )
        break;
    }
LABEL_89:
    v63 = usrSvtList->max_length;
    ++v65;
    isQuestClearState = 0;
    if ( (int)v65 >= v63 )
      return isQuestClearState & 1;
  }
  v74 = 0;
  while ( 1 )
  {
    if ( v74 >= type )
      goto LABEL_106;
    v75 = *((_QWORD *)&v60->fields.scriptJson + (int)v74);
    if ( !v75 )
      goto LABEL_105;
    if ( v72 == *(_DWORD *)(v75 + 20) )
      break;
    if ( (int)++v74 >= type )
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

  return ServantVoiceEntity__getVoiceList_31408724(this, 6, labelName, 0LL, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getBoxGachaVoiceList(
        ServantVoiceEntity_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  int64_t Time; // x21
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x22
  il2cpp_array_size_t v15; // w23
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v17; // x28
  struct ServantVoiceCond_array *conds; // x19
  __int64 v19; // x8
  __int64 v20; // x26
  ServantVoiceCond_o *v21; // x24
  unsigned int condType; // w8
  __int64 v24; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418B106 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_418B106 = 1;
  }
  entity = 0LL;
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_31:
    sub_B2C434(Instance, v12);
  }
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v15 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v15 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v9;
    if ( v15 >= max_length )
      goto LABEL_33;
    v17 = scriptJson->m_Items[v15];
    if ( v17 )
    {
      conds = v17->fields.conds;
      if ( conds && (v19 = *(_QWORD *)&conds->max_length) != 0 )
      {
        if ( (int)v19 >= 1 )
        {
          v20 = 0LL;
          while ( (unsigned int)v20 < (unsigned int)v19 )
          {
            v21 = conds->m_Items[v20];
            if ( !v21 || !v14 )
              goto LABEL_31;
            Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                          v14,
                                          &entity,
                                          v21->fields.value,
                                          (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_31;
              if ( Time <= (__int64)entity->fields.coordinate )
              {
                condType = v21->fields.condType;
                if ( condType <= 0x13 && ((1 << condType) & 0x86000) != 0 )
                {
                  if ( !v9 )
                    goto LABEL_31;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v9,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v17->fields.infos,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
                }
              }
            }
            LODWORD(v19) = conds->max_length;
            if ( (int)++v20 >= (int)v19 )
              goto LABEL_30;
          }
LABEL_33:
          v24 = sub_B2C460(Instance);
          sub_B2C400(v24, 0LL);
        }
      }
      else
      {
        if ( !v9 )
          goto LABEL_31;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v17->fields.infos,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      }
LABEL_30:
      ++v15;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  VoicePlayCondMaster_o *v16; // x22
  __int64 v17; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v19; // x8
  WarBoardManager_TaskList_o *infos; // x23
  Il2CppObject *syncRoot; // x8
  __int64 v23; // x0

  if ( (byte_418B0F2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_418B0F2 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_19:
    sub_B2C434(Instance, v14);
  }
  v16 = (VoicePlayCondMaster_o *)Instance;
  v17 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v17 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v12;
    if ( (unsigned int)v17 >= max_length )
      goto LABEL_22;
    v19 = scriptJson->m_Items[v17];
    if ( v19 )
    {
      infos = (WarBoardManager_TaskList_o *)v19->fields.infos;
      if ( infos )
      {
        if ( !infos->fields._size )
        {
LABEL_22:
          v23 = sub_B2C460(Instance);
          sub_B2C400(v23, 0LL);
        }
        syncRoot = infos->fields._syncRoot;
        if ( syncRoot )
        {
          if ( v16 )
          {
            Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(
                                          v16,
                                          svtId,
                                          (System_String_o *)syncRoot[1].klass,
                                          0LL,
                                          -1LL,
                                          -1,
                                          0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v12 )
                goto LABEL_19;
              Instance = (DataManager_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v12,
                                            infos,
                                            (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v12,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)infos,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
            }
            scriptJson = this->fields.scriptJson;
            ++v17;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  DataManager_o *Instance; // x0
  SvtVoiceInfo_o *v13; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v15; // x22
  int max_length; // w9
  struct ServantVoiceCond_array *conds; // x9
  __int64 v18; // x10
  ServantVoiceCond_o *v19; // x9
  __int64 v21; // x0

  if ( (byte_418B0F4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_418B0F4 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_18:
    sub_B2C434(Instance, v13);
  }
  v15 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v15 >= max_length )
      return (System_Collections_Generic_List_SvtVoiceInfo__o *)v11;
    if ( (unsigned int)v15 >= max_length )
      goto LABEL_21;
    v13 = scriptJson->m_Items[v15];
    if ( !v13 )
      goto LABEL_18;
    conds = v13->fields.conds;
    if ( conds )
    {
      v18 = *(_QWORD *)&conds->max_length;
      if ( v18 )
      {
        if ( !(_DWORD)v18 )
        {
LABEL_21:
          v21 = sub_B2C460(Instance);
          sub_B2C400(v21, 0LL);
        }
        v19 = conds->m_Items[0];
        if ( !v19 )
          goto LABEL_18;
        if ( v19->fields.condType == condType )
        {
          if ( !v11 )
            goto LABEL_18;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
          scriptJson = this->fields.scriptJson;
        }
      }
    }
    ++v15;
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
  ServantVoiceEntity_o *v6; // x20
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v8; // x9
  SvtVoiceInfo_o *v9; // x8
  il2cpp_array_size_t v11; // w21
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v13; // x22
  struct ServantVoiceData_array *infos; // x23
  int v15; // w9
  __int64 v16; // x24
  ServantVoiceData_o *v17; // x8
  __int64 v18; // x0

  v6 = this;
  if ( (byte_418B0F9 & 1) == 0 )
  {
    this = (ServantVoiceEntity_o *)sub_B2C35C(&StringLiteral_15922/*"_B050"*/, *(_QWORD *)&type);
    byte_418B0F9 = 1;
  }
  if ( v6->fields.type == type )
  {
    if ( !labelName )
      goto LABEL_25;
    this = (ServantVoiceEntity_o *)System_String__EndsWith(labelName, (System_String_o *)StringLiteral_15922/*"_B050"*/, 0LL);
    scriptJson = v6->fields.scriptJson;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !scriptJson )
        goto LABEL_25;
      v8 = *(_QWORD *)&scriptJson->max_length;
      if ( v8 )
      {
        if ( !(_DWORD)v8 )
        {
LABEL_28:
          v18 = sub_B2C460(this);
          sub_B2C400(v18, 0LL);
        }
        v9 = scriptJson->m_Items[0];
        if ( v9 )
          return v9->fields.conds;
LABEL_25:
        sub_B2C434(this, *(_QWORD *)&type);
      }
    }
    else
    {
      if ( !scriptJson )
        goto LABEL_25;
      v11 = 0;
      while ( 1 )
      {
        max_length = scriptJson->max_length;
        if ( (int)v11 >= (int)max_length )
          break;
        if ( v11 >= max_length )
          goto LABEL_28;
        v13 = scriptJson->m_Items[v11];
        if ( !v13 )
          goto LABEL_25;
        infos = v13->fields.infos;
        if ( infos )
        {
          v15 = infos->max_length;
          if ( v15 >= 1 )
          {
            v16 = 0LL;
            while ( 1 )
            {
              if ( (unsigned int)v16 >= v15 )
                goto LABEL_28;
              v17 = infos->m_Items[v16];
              if ( !v17 )
                goto LABEL_25;
              this = (ServantVoiceEntity_o *)System_String__Equals_44292872(labelName, v17->fields.id, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
                return v13->fields.conds;
              v15 = infos->max_length;
              if ( (int)++v16 >= v15 )
              {
                scriptJson = v6->fields.scriptJson;
                break;
              }
            }
          }
        }
        ++v11;
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

  return ServantVoiceEntity__getVoiceList_31408140(this, 2, 23, costumeId, 0LL, -1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getCostumeGetVoiceList(
        ServantVoiceEntity_o *this,
        int32_t costumeId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  return ServantVoiceEntity__getVoiceList_31408140(this, 2, 23, costumeId, 0LL, -1, v3);
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v9; // w21
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v11; // x23
  struct ServantVoiceCond_array *conds; // x24
  __int64 v13; // x8
  __int64 v14; // x25
  ServantVoiceCond_o *v15; // x9
  __int64 v17; // x0

  if ( (byte_418B108 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v4);
    byte_418B108 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_19:
    sub_B2C434(v6, v7);
  v9 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v9 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v5;
    if ( v9 >= max_length )
      goto LABEL_21;
    v11 = scriptJson->m_Items[v9];
    if ( v11 )
    {
      conds = v11->fields.conds;
      if ( conds )
      {
        v13 = *(_QWORD *)&conds->max_length;
        if ( v13 )
        {
          if ( (int)v13 >= 1 )
          {
            v14 = 0LL;
            while ( (unsigned int)v14 < (unsigned int)v13 )
            {
              v15 = conds->m_Items[v14];
              if ( !v15 )
                goto LABEL_19;
              if ( v15->fields.condType == 15 )
              {
                if ( !v5 )
                  goto LABEL_19;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v5,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v11->fields.infos,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
                v13 = *(_QWORD *)&conds->max_length;
              }
              if ( (int)++v14 >= (int)v13 )
                goto LABEL_18;
            }
LABEL_21:
            v17 = sub_B2C460(v6);
            sub_B2C400(v17, 0LL);
          }
        }
      }
LABEL_18:
      scriptJson = this->fields.scriptJson;
      ++v9;
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
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  DataManager_o *Time; // x0
  __int64 v10; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  DataManager_o *v12; // x21
  il2cpp_array_size_t v13; // w22
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v15; // x27
  struct ServantVoiceCond_array *conds; // x28
  __int64 v17; // x8
  __int64 i; // x19
  ServantVoiceCond_o *v19; // x24
  int32_t condType; // w8
  __int64 v22; // x0

  if ( (byte_418B107 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_418B107 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = (DataManager_o *)NetworkManager__getTime(0LL);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_33:
    sub_B2C434(Time, v10);
  v12 = Time;
  v13 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v13 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v8;
    if ( v13 >= max_length )
    {
LABEL_35:
      v22 = sub_B2C460(Time);
      sub_B2C400(v22, 0LL);
    }
    v15 = scriptJson->m_Items[v13];
    if ( !v15 )
      goto LABEL_33;
    conds = v15->fields.conds;
    if ( conds && (v17 = *(_QWORD *)&conds->max_length) != 0 )
    {
      if ( (int)v17 >= 1 )
      {
        for ( i = 0LL; (int)i < (int)v17; ++i )
        {
          if ( (unsigned int)i >= (unsigned int)v17 )
            goto LABEL_35;
          v19 = conds->m_Items[i];
          Time = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_33;
          Time = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Time,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !v19 || !Time )
            goto LABEL_33;
          Time = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Time,
                                    v19->fields.value,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( Time )
          {
            condType = v19->fields.condType;
            if ( (__int64)Time->fields.masterLoadThreads <= (__int64)v12 )
            {
              if ( condType == 19 || condType == 13 )
              {
LABEL_26:
                if ( !v8 )
                  goto LABEL_33;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v8,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v15->fields.infos,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
              }
            }
            else if ( condType == 19 || condType == 14 )
            {
              goto LABEL_26;
            }
          }
          LODWORD(v17) = conds->max_length;
        }
      }
    }
    else
    {
      if ( !v8 )
        goto LABEL_33;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v8,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v15->fields.infos,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    }
    ++v13;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_33;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventRewardVoiceList_31420136(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_31408724(this, 5, labelName, 0LL, 1, v3);
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
  System_Collections_Generic_List_VoiceCondType_Type__o *v24; // x22
  int64_t Time; // x0
  __int64 v26; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v27; // x23
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v29; // w22
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v31; // x27
  _BOOL4 v32; // w25
  struct ServantVoiceCond_array *conds; // x26
  __int64 v34; // x8
  __int64 v35; // x21
  ServantVoiceCond_o *v36; // x24
  int32_t condType; // w28
  int64_t v38; // x19
  int v39; // w8
  _BOOL8 v40; // x0
  __int64 v41; // x1
  Il2CppObject *current; // x21
  _DWORD *monitor; // x22
  int v44; // w8
  unsigned int v45; // w24
  __int64 v46; // x8
  __int64 v48; // x0
  __int64 v49; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // [xsp+10h] [xbp-B0h]
  int64_t v52; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_VoiceCondType_Type__o *v55; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+50h] [xbp-70h] BYREF

  v6 = isEventDateCondOnly;
  if ( (byte_418B10E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, isEventDateCondOnly);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_VoiceCondType_Type__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v18);
    sub_B2C35C(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v19);
    sub_B2C35C(&System_Collections_Generic_List_VoiceCondType_Type__TypeInfo, v20);
    sub_B2C35C(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v21);
    sub_B2C35C(&NetworkManager_TypeInfo, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    byte_418B10E = 1;
  }
  memset(&v57, 0, sizeof(v57));
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v24 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v24,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
  if ( !v24 )
    goto LABEL_39;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v24,
    14,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v24,
    13,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v24,
    19,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
  v27 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v27,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
  if ( !v6 )
  {
    if ( !v27 )
      goto LABEL_39;
    System_Collections_Generic_List_VoiceCondType_Type___Add(
      v27,
      checkCondType,
      (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
  }
  v55 = v24;
  v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v50,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v52 = Time;
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_39;
  v29 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v29 >= (int)max_length )
      break;
    if ( v29 >= max_length )
      goto LABEL_60;
    v31 = scriptJson->m_Items[v29];
    if ( !v31 )
      goto LABEL_39;
    v32 = v6;
    conds = v31->fields.conds;
    if ( conds )
    {
      v34 = *(_QWORD *)&conds->max_length;
      if ( v34 )
      {
        if ( (int)v34 >= 1 )
        {
          v35 = 0LL;
          while ( (unsigned int)v35 < (unsigned int)v34 )
          {
            v36 = conds->m_Items[v35];
            if ( !v36 )
              goto LABEL_39;
            condType = v36->fields.condType;
            Time = System_Collections_Generic_List_VoiceCondType_Type___Contains(
                     v55,
                     condType,
                     (const MethodInfo_2F6A424 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) == 0 )
            {
              if ( !v27 )
                goto LABEL_39;
              Time = System_Collections_Generic_List_VoiceCondType_Type___Contains(
                       v27,
                       condType,
                       (const MethodInfo_2F6A424 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
              if ( (Time & 1) == 0 )
                goto LABEL_38;
            }
            Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Time )
              goto LABEL_39;
            Time = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Time,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
            if ( !Time )
              goto LABEL_39;
            Time = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Time,
                              v36->fields.value,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
            if ( !Time || v36->fields.value != eventId )
              goto LABEL_38;
            v38 = Time;
            Time = System_Collections_Generic_List_VoiceCondType_Type___Contains(
                     v55,
                     condType,
                     (const MethodInfo_2F6A424 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) != 0 )
            {
              v39 = *(_QWORD *)(v38 + 96) <= v52 ? 13 : 14;
              if ( condType == 19 )
                v39 = 19;
              if ( condType != v39 )
                goto LABEL_38;
            }
            LODWORD(v34) = conds->max_length;
            if ( (int)++v35 >= (int)v34 )
              goto LABEL_36;
          }
LABEL_60:
          v49 = sub_B2C460(Time);
          sub_B2C400(v49, 0LL);
        }
LABEL_36:
        Time = (int64_t)v50;
        if ( !v50 )
          goto LABEL_39;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v50,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
      }
    }
LABEL_38:
    ++v29;
    v6 = v32;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_39;
  }
  Time = (int64_t)v50;
  if ( !v50 )
LABEL_39:
    sub_B2C434(Time, v26);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v56,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v50,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v57 = v56;
LABEL_42:
  while ( 1 )
  {
    v40 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v57,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v40 )
      break;
    current = v57.fields.current;
    if ( !v57.fields.current )
      sub_B2C434(v40, v41);
    monitor = v57.fields.current[4].monitor;
    if ( !monitor )
      sub_B2C434(v40, v41);
    v44 = monitor[6];
    if ( v44 >= 1 )
    {
      v45 = 0;
      while ( 1 )
      {
        if ( v45 >= v44 )
        {
          v48 = sub_B2C460(v40);
          sub_B2C400(v48, 0LL);
        }
        v46 = *(_QWORD *)&monitor[2 * v45 + 8];
        if ( !v46 )
          sub_B2C434(v40, v41);
        if ( v6 )
          break;
        if ( !v27 )
          sub_B2C434(v40, v41);
        v40 = System_Collections_Generic_List_VoiceCondType_Type___Contains(
                v27,
                *(_DWORD *)(v46 + 16),
                (const MethodInfo_2F6A424 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
        if ( v40 )
          break;
        v44 = monitor[6];
        if ( (int)++v45 >= v44 )
          goto LABEL_42;
      }
      if ( !v51 )
        sub_B2C434(0LL, v41);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v51,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current[4].klass,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v57,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  return (System_Collections_Generic_List_ServantVoiceData____o *)v51;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventShopVoiceList_31422488(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_31408724(this, 9, labelName, 0LL, 1, v3);
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
  __int64 v9; // x1
  ServantVoiceData_array *current; // x20
  int monitor; // w8
  unsigned int v12; // w22
  ServantVoiceData_o *v13; // x8
  System_String_o *v14; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  char v17; // w19
  __int64 v19; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_418B10C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, id);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v7);
    byte_418B10C = 1;
  }
  memset(&v21, 0, sizeof(v21));
  EventRewardVoiceList = ServantVoiceEntity__getEventRewardVoiceList(this, (const MethodInfo *)id);
  if ( !EventRewardVoiceList )
    sub_B2C434(0LL, v9);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventRewardVoiceList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v21 = v20;
  do
  {
LABEL_13:
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v15 )
    {
      v17 = 0;
      current = 0LL;
      goto LABEL_16;
    }
    current = (ServantVoiceData_array *)v21.fields.current;
    if ( !v21.fields.current )
      sub_B2C434(v15, v16);
    monitor = (int)v21.fields.current[1].monitor;
  }
  while ( monitor < 1 );
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= monitor )
    {
      v19 = sub_B2C460(v15);
      sub_B2C400(v19, 0LL);
    }
    v13 = current->m_Items[v12];
    if ( !v13 )
      sub_B2C434(v15, v16);
    v14 = v13->fields.id;
    if ( !v14 )
      sub_B2C434(0LL, v16);
    v15 = System_String__Equals_44292872(v14, id, 0LL);
    if ( v15 )
      break;
    monitor = current->max_length;
    if ( (int)++v12 >= monitor )
      goto LABEL_13;
  }
  v17 = 2;
LABEL_16:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x5

  if ( (byte_418B0FD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_CondType_Kind__Add__, labelName);
    sub_B2C35C(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v6);
    byte_418B0FD = 1;
  }
  v7 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v7,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v7 )
    sub_B2C434(v8, v9);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v7,
    81,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_CondType_Kind__Add__);
  return ServantVoiceEntity__getVoiceList_31408724(
           this,
           1,
           labelName,
           (System_Collections_Generic_List_CondType_Kind__o *)v7,
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
    return ServantVoiceEntity__getVoiceList_31408724(this, 2, labelName, 0LL, 0, v5);
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
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x5

  if ( (byte_418B0FE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_CondType_Kind__Add__, labelName);
    sub_B2C35C(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v6);
    byte_418B0FE = 1;
  }
  v7 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v7,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v7 )
    sub_B2C434(v8, v9);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v7,
    81,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_CondType_Kind__Add__);
  return ServantVoiceEntity__getVoiceList_31408724(
           this,
           2,
           labelName,
           (System_Collections_Generic_List_CondType_Kind__o *)v7,
           0,
           v10);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMasterMissionActionVoiceList(
        ServantVoiceEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  _BOOL8 isQuestClearState; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v10; // w21
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v12; // x23
  struct ServantVoiceCond_array *conds; // x24
  __int64 v14; // x10
  __int64 v15; // x25
  char v16; // w27
  char v17; // w8
  char v18; // w9
  ServantVoiceCond_o *v19; // x10
  int32_t condType; // w11
  __int64 v22; // x0

  if ( (byte_418B109 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v4);
    byte_418B109 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_31;
  v10 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v10 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v5;
    if ( v10 >= max_length )
    {
LABEL_33:
      v22 = sub_B2C460(isQuestClearState);
      sub_B2C400(v22, 0LL);
    }
    v12 = scriptJson->m_Items[v10];
    if ( !v12 )
      goto LABEL_31;
    conds = v12->fields.conds;
    if ( conds )
    {
      v14 = *(_QWORD *)&conds->max_length;
      if ( v14 )
      {
        if ( (int)v14 >= 1 )
        {
          v15 = 0LL;
          v16 = 0;
          v17 = 0;
          v18 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v15 >= (unsigned int)v14 )
              goto LABEL_33;
            v19 = conds->m_Items[v15];
            if ( !v19 )
              goto LABEL_31;
            condType = v19->fields.condType;
            switch ( condType )
            {
              case 16:
                goto LABEL_27;
              case 7:
                if ( (v17 & 1) == 0 )
                {
                  isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                        (ServantVoiceEntity_o *)isQuestClearState,
                                        v19->fields.value,
                                        v8);
                  if ( isQuestClearState )
                    goto LABEL_30;
                  v17 = 0;
                  goto LABEL_27;
                }
                if ( (v16 & 1) == 0 )
                  goto LABEL_30;
                isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                      (ServantVoiceEntity_o *)isQuestClearState,
                                      v19->fields.value,
                                      v8);
                if ( isQuestClearState )
                  goto LABEL_30;
                break;
              case 6:
                isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                      (ServantVoiceEntity_o *)isQuestClearState,
                                      v19->fields.value,
                                      v8);
                if ( !isQuestClearState )
                  goto LABEL_30;
                break;
              default:
                if ( (v18 & 1) == 0 )
                  goto LABEL_30;
                goto LABEL_27;
            }
            v16 = 1;
            v17 = 1;
LABEL_27:
            LODWORD(v14) = conds->max_length;
            ++v15;
            v18 = 1;
            if ( (int)v15 >= (int)v14 )
            {
              if ( v5 )
              {
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v5,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v12->fields.infos,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
                break;
              }
LABEL_31:
              sub_B2C434(isQuestClearState, v7);
            }
          }
        }
      }
    }
LABEL_30:
    scriptJson = this->fields.scriptJson;
    ++v10;
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


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMasterMissionVoiceList_31420648(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_31408724(this, 8, labelName, 0LL, 1, v3);
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
  int64_t Instance; // x0
  __int64 v27; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t FriendShipRank; // w0
  int v30; // w22
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x1
  const MethodInfo_2EF4460 *v32; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v34; // w23
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v36; // x27
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v38; // x8
  struct ServantVoiceCond_array *conds; // x11
  __int64 v40; // x8
  ServantVoiceCond_o *v41; // x9
  __int64 v42; // x9
  int v43; // w10
  ServantVoiceCond_o **m_Items; // x11
  ServantVoiceCond_o *v45; // x12
  int32_t condType; // w13
  _BOOL4 v47; // w14
  _BOOL4 v48; // w12
  int32_t id; // w26
  int32_t v51; // w25
  __int64 v52; // x0

  if ( (byte_418B0F5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&type);
    sub_B2C35C(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v15);
    sub_B2C35C(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v16);
    sub_B2C35C(&NetworkManager_TypeInfo, v17);
    sub_B2C35C(&ServantLimitUpVoiceCache_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_418B0F5 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v22 = ServantVoiceEntity__GetChangeLimitVoiceFriendshipLv(this, v21);
  v24 = v22 - 1;
  if ( v22 < 1 )
    goto LABEL_12;
  v25 = v22;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_68;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                        MasterData_WarQuestSelectionMaster,
                        Instance,
                        this->fields.id,
                        0LL);
  if ( !Instance )
    goto LABEL_68;
  FriendShipRank = UserServantCollectionEntity__getFriendShipRank((UserServantCollectionEntity_o *)Instance, 0LL);
  if ( FriendShipRank >= v25 )
  {
    v30 = FriendShipRank;
    if ( displayType )
    {
      id = this->fields.id;
      if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      }
      if ( ServantLimitUpVoiceCache__IsLimitUpVoiceNormal(displayType, id, 0LL) )
        v30 = v24;
      if ( isPlayVoice )
      {
        v51 = this->fields.id;
        if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
        }
        ServantLimitUpVoiceCache__UpdateLimitUpVoice(displayType, v51, 0LL);
      }
    }
  }
  else
  {
LABEL_12:
    v30 = -1;
  }
  Instance = (int64_t)ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v23);
  if ( Instance )
  {
    if ( v20 )
    {
      v31 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(Instance + 64);
      v32 = (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      goto LABEL_16;
    }
LABEL_68:
    sub_B2C434(Instance, v27);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_68;
  v34 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v34 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v20;
    if ( v34 >= max_length )
      goto LABEL_69;
    v36 = scriptJson->m_Items[v34];
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_68;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !v36 )
      goto LABEL_68;
    infos = v36->fields.infos;
    if ( !infos )
      goto LABEL_68;
    if ( !infos->max_length )
      goto LABEL_69;
    v38 = infos->m_Items[0];
    if ( !v38 || !Instance )
      goto LABEL_68;
    Instance = VoicePlayCondMaster__isVoicePlay(
                 (VoicePlayCondMaster_o *)Instance,
                 this->fields.id,
                 v38->fields.id,
                 0LL,
                 -1LL,
                 genderType,
                 0LL);
    conds = v36->fields.conds;
    if ( conds )
    {
      v40 = *(_QWORD *)&conds->max_length;
      if ( v40 )
      {
        if ( !(_DWORD)v40 )
        {
LABEL_69:
          v52 = sub_B2C460(Instance);
          sub_B2C400(v52, 0LL);
        }
        v41 = conds->m_Items[0];
        if ( !v41 )
          goto LABEL_68;
        if ( v41->fields.condType == 11 )
          break;
      }
    }
LABEL_52:
    scriptJson = this->fields.scriptJson;
    ++v34;
    if ( !scriptJson )
      goto LABEL_68;
  }
  if ( v30 != -1 && (_DWORD)v40 != 1 )
  {
    if ( (int)v40 >= 1 )
    {
      v42 = 0LL;
      v43 = Instance & 1;
      m_Items = conds->m_Items;
      while ( 1 )
      {
        v45 = m_Items[v42];
        if ( !v45 )
          goto LABEL_68;
        condType = v45->fields.condType;
        v47 = condType == 22 && v45->fields.value >= v30;
        if ( (v47 & v43) != 0 )
          break;
        v48 = condType == 20 && v45->fields.value <= v30;
        if ( (v48 & v43) != 0 )
          break;
        if ( (int)++v42 >= (int)v40 )
          goto LABEL_52;
      }
      if ( !v20 )
        goto LABEL_68;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v20,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v36->fields.infos,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    }
    goto LABEL_52;
  }
  if ( (Instance & 1) == 0 )
    goto LABEL_52;
  if ( !v20 )
    goto LABEL_68;
  v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)v36->fields.infos;
  v32 = (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__;
LABEL_16:
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v20, v31, v32);
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
  __int64 v9; // x1
  ServantVoiceData_array *current; // x20
  int monitor; // w8
  unsigned int v12; // w22
  ServantVoiceData_o *v13; // x8
  System_String_o *v14; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  char v17; // w19
  __int64 v19; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_418B10D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, id);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v7);
    byte_418B10D = 1;
  }
  memset(&v21, 0, sizeof(v21));
  VoiceList = ServantVoiceEntity__getVoiceList(this, 8, method);
  if ( !VoiceList )
    sub_B2C434(0LL, v9);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)VoiceList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v21 = v20;
  do
  {
LABEL_13:
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v15 )
    {
      v17 = 0;
      current = 0LL;
      goto LABEL_16;
    }
    current = (ServantVoiceData_array *)v21.fields.current;
    if ( !v21.fields.current )
      sub_B2C434(v15, v16);
    monitor = (int)v21.fields.current[1].monitor;
  }
  while ( monitor < 1 );
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= monitor )
    {
      v19 = sub_B2C460(v15);
      sub_B2C400(v19, 0LL);
    }
    v13 = current->m_Items[v12];
    if ( !v13 )
      sub_B2C434(v15, v16);
    v14 = v13->fields.id;
    if ( !v14 )
      sub_B2C434(0LL, v16);
    v15 = System_String__Equals_44292872(v14, id, 0LL);
    if ( v15 )
      break;
    monitor = current->max_length;
    if ( (int)++v12 >= monitor )
      goto LABEL_13;
  }
  v17 = 2;
LABEL_16:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  __int64 v10; // x1
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x22
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v14; // w24
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v16; // x23
  struct ServantVoiceData_array *infos; // x9
  struct ServantVoiceCond_array *conds; // x8
  __int64 v19; // x26
  int v20; // w9
  ServantVoiceCond_o *v21; // x8
  struct ServantVoiceData_array *v22; // x8
  ServantVoiceData_o *v23; // x8
  const MethodInfo *v24; // x4
  __int64 v26; // x0

  if ( (byte_418B0FB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&friendShipRank);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_418B0FB = 1;
  }
  if ( this->fields.type != 1 )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceData____TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v12,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_31:
    sub_B2C434(Instance, v10);
  }
  v14 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v14 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v12;
    if ( v14 >= max_length )
    {
LABEL_34:
      v26 = sub_B2C460(Instance);
      sub_B2C400(v26, 0LL);
    }
    v16 = scriptJson->m_Items[v14];
    if ( v16 )
    {
      infos = v16->fields.infos;
      if ( infos && *(_QWORD *)&infos->max_length )
      {
        conds = v16->fields.conds;
        if ( !conds )
          goto LABEL_31;
        v19 = 0LL;
        while ( 1 )
        {
          v20 = conds->max_length;
          if ( (int)v19 >= v20 )
            break;
          if ( (unsigned int)v19 >= v20 )
            goto LABEL_34;
          v21 = conds->m_Items[v19];
          if ( !v21 )
            goto LABEL_31;
          if ( v21->fields.condType == 3 && v21->fields.value == friendShipRank )
          {
            v22 = v16->fields.infos;
            if ( !v22 )
              goto LABEL_31;
            if ( !v22->max_length )
              goto LABEL_34;
            v23 = v22->m_Items[0];
            if ( !v23 || !MasterData_WarQuestSelectionMaster )
              goto LABEL_31;
            Instance = (WebViewManager_o *)VoicePlayCondMaster__isVoicePlay(
                                             MasterData_WarQuestSelectionMaster,
                                             this->fields.id,
                                             v23->fields.id,
                                             0LL,
                                             -1LL,
                                             -1,
                                             0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (WebViewManager_o *)ServantVoiceEntity__isAvailableMyRoomVoice(this, v16, 0, 1, v24);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v12 )
                  goto LABEL_31;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v12,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v16->fields.infos,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
              }
            }
          }
          conds = v16->fields.conds;
          ++v19;
          if ( !conds )
            goto LABEL_31;
        }
        scriptJson = this->fields.scriptJson;
      }
      ++v14;
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
  __int64 v10; // x1
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x22
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v14; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v16; // x23
  struct ServantVoiceData_array *infos; // x8
  __int64 v18; // x9
  ServantVoiceData_o *v19; // x8
  const MethodInfo *v20; // x4
  struct ServantVoiceCond_array *conds; // x8
  __int64 v23; // x0

  if ( (byte_418B0FA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&imageLimitCount);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_418B0FA = 1;
  }
  if ( this->fields.type != 1 )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceData____TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v12,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_22:
    sub_B2C434(Instance, v10);
  }
  v14 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v14 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v12;
    if ( (unsigned int)v14 >= max_length )
      goto LABEL_25;
    v16 = scriptJson->m_Items[v14];
    if ( !v16 )
      goto LABEL_22;
    infos = v16->fields.infos;
    if ( infos )
    {
      v18 = *(_QWORD *)&infos->max_length;
      if ( v18 )
      {
        if ( !(_DWORD)v18 )
        {
LABEL_25:
          v23 = sub_B2C460(Instance);
          sub_B2C400(v23, 0LL);
        }
        v19 = infos->m_Items[0];
        if ( !v19 || !MasterData_WarQuestSelectionMaster )
          goto LABEL_22;
        Instance = (WebViewManager_o *)VoicePlayCondMaster__isVoicePlay(
                                         MasterData_WarQuestSelectionMaster,
                                         this->fields.id,
                                         v19->fields.id,
                                         0LL,
                                         -1LL,
                                         -1,
                                         0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          conds = v16->fields.conds;
          if ( !conds )
            goto LABEL_22;
          if ( (int)conds->max_length < 1
            || (Instance = (WebViewManager_o *)ServantVoiceEntity__isAvailableMyRoomVoice(
                                                 this,
                                                 v16,
                                                 imageLimitCount,
                                                 0,
                                                 v20),
                ((unsigned __int8)Instance & 1) != 0) )
          {
            if ( !v12 )
              goto LABEL_22;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v12,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v16->fields.infos,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v14;
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

  return ServantVoiceEntity__getVoiceList_31408724(this, 7, labelName, 0LL, 1, v3);
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
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  ServantVoiceCond_array *v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_String_o *materialOverwriteName; // x1
  System_String_o *v78; // x1
  System_String_o *v79; // x1
  __int64 v80; // x0

  if ( (byte_418B0F8 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15922/*"_B050"*/, *(_QWORD *)&type);
    byte_418B0F8 = 1;
  }
  *conds = 0LL;
  sub_B2C2F8(
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
  sub_B2C2F8((BattleServantConfConponent_o *)overwriteName, 0LL, v18, v19, v20, v21, v22, v23);
  *overwriteNameDefault = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)overwriteNameDefault, 0LL, v24, v25, v26, v27, v28, v29);
  *overwritePriority = 0;
  if ( this->fields.type != type )
    return;
  if ( !labelName )
    goto LABEL_26;
  v30 = System_String__EndsWith(labelName, (System_String_o *)StringLiteral_15922/*"_B050"*/, 0LL);
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
        v80 = sub_B2C460(v30);
        sub_B2C400(v80, 0LL);
      }
      v40 = scriptJson->m_Items[0];
      if ( v40 )
      {
        v41 = v40->fields.conds;
        *conds = v41;
        sub_B2C2F8((BattleServantConfConponent_o *)conds, (System_Int32_array **)v41, v32, v33, v34, v35, v36, v37);
        *isInvalidVoiceList = v40->fields.isInvalidVoiceList;
        v42 = v40->fields.overwriteName;
        *overwriteName = v42;
        sub_B2C2F8(
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
        sub_B2C2F8(
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
    sub_B2C434(v30, v31);
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
    v30 = System_String__Equals_44292872(labelName, v63->fields.id, 0LL);
    if ( v30 )
      break;
    infos = v59->fields.infos;
    ++v61;
    if ( !infos )
      goto LABEL_26;
  }
  v70 = v59->fields.conds;
  *conds = v70;
  sub_B2C2F8((BattleServantConfConponent_o *)conds, (System_Int32_array **)v70, v64, v65, v66, v67, v68, v69);
  *isInvalidVoiceList = v59->fields.isInvalidVoiceList;
  if ( !isMaterial
    || (materialOverwriteName = v59->fields.materialOverwriteName,
        *overwriteName = materialOverwriteName,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)overwriteName,
          (System_Int32_array **)materialOverwriteName,
          v71,
          v72,
          v73,
          v74,
          v75,
          v76),
        System_String__IsNullOrEmpty(*overwriteName, 0LL)) )
  {
    v78 = v59->fields.overwriteName;
    *overwriteName = v78;
    sub_B2C2F8((BattleServantConfConponent_o *)overwriteName, (System_Int32_array **)v78, v71, v72, v73, v74, v75, v76);
  }
  v79 = v59->fields.overwriteNameDefault;
  *overwriteNameDefault = v79;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)overwriteNameDefault,
    (System_Int32_array **)v79,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
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

  return ServantVoiceEntity__getVoiceList_31408140(this, 1, 3, friendShipRank, 0LL, -1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getSpecificLimitCntUpVoiceList(
        ServantVoiceEntity_o *this,
        int32_t limitCount,
        System_String_o *playVoiceLabel,
        int32_t genderType,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return ServantVoiceEntity__getVoiceList_31408140(this, 2, 9, limitCount, playVoiceLabel, genderType, v5);
}


int32_t __fastcall ServantVoiceEntity__getSvtIdfromVoiceAssetName(System_String_o *assetName, const MethodInfo *method)
{
  System_String_array *v3; // x0
  System_String_array *v4; // x1
  __int64 v6; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418B0F0 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, method);
    byte_418B0F0 = 1;
  }
  result = 0;
  v3 = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v3 )
    goto LABEL_13;
  v4 = v3;
  if ( !v3->max_length )
  {
    v6 = sub_B2C460(v3);
    sub_B2C400(v6, 0LL);
  }
  LOWORD(v3->m_Items[0]) = 95;
  if ( !assetName || (v3 = System_String__Split(assetName, (System_Char_array *)v3, 0LL), result = 0, !v3) )
LABEL_13:
    sub_B2C434(v3, v4);
  if ( v3->max_length != 2 )
    return 0;
  if ( System_Int32__TryParse(v3->m_Items[1], &result, 0LL) )
    return result;
  return 0;
}


System_String_o *__fastcall ServantVoiceEntity__getVoiceAssetName(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  int32_t id; // w19

  if ( (byte_418B0EE & 1) == 0 )
  {
    sub_B2C35C(&ServantVoiceEntity_TypeInfo, method);
    byte_418B0EE = 1;
  }
  id = this->fields.id;
  if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
  }
  return ServantVoiceEntity__getVoiceAssetName_31404932(id, method);
}


System_String_o *__fastcall ServantVoiceEntity__getVoiceAssetName_31404932(int32_t svtId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = svtId;
  if ( (byte_418B0EF & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3963/*"ChrVoice_"*/, method);
    byte_418B0EF = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_44305532((System_String_o *)StringLiteral_3963/*"ChrVoice_"*/, v2, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList(
        ServantVoiceEntity_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v11; // x21
  int max_length; // w9
  SvtVoiceInfo_o *v13; // x8
  __int64 v15; // x0

  if ( (byte_418B0F1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, *(_QWORD *)&type);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v6);
    byte_418B0F1 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_11:
    sub_B2C434(v8, v9);
  v11 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v11 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
    if ( (unsigned int)v11 >= max_length )
    {
      v15 = sub_B2C460(v8);
      sub_B2C400(v15, 0LL);
    }
    v13 = scriptJson->m_Items[v11];
    if ( v13 )
    {
      if ( v7 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v13->fields.infos,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
        scriptJson = this->fields.scriptJson;
        ++v11;
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
  void *Instance; // x0
  __int64 v17; // x1
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v19; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v21; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v23; // x26
  struct ServantVoiceCond_array *conds; // x8
  __int64 v25; // x9
  ServantVoiceCond_o *v26; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v28; // x8
  __int64 v30; // x0

  if ( (byte_418B0F3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_418B0F3 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v19);
  if ( Instance )
  {
    if ( v15 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v15,
        *((EventMissionProgressRequest_Argument_ProgressData_o **)Instance + 8),
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      return (System_Collections_Generic_List_ServantVoiceData____o *)v15;
    }
LABEL_27:
    sub_B2C434(Instance, v17);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_27;
  v21 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v21 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v15;
    if ( (unsigned int)v21 >= max_length )
      goto LABEL_29;
    v23 = scriptJson->m_Items[v21];
    if ( !v23 )
      goto LABEL_27;
    conds = v23->fields.conds;
    if ( conds )
    {
      v25 = *(_QWORD *)&conds->max_length;
      if ( v25 )
      {
        if ( !(_DWORD)v25 )
          goto LABEL_29;
        v26 = conds->m_Items[0];
        if ( !v26 )
          goto LABEL_27;
        if ( v26->fields.condType == condType )
        {
          infos = v23->fields.infos;
          if ( !infos )
            goto LABEL_27;
          if ( !infos->max_length )
          {
LABEL_29:
            v30 = sub_B2C460(Instance);
            sub_B2C400(v30, 0LL);
          }
          v28 = infos->m_Items[0];
          if ( !v28 || !MasterData_WarQuestSelectionMaster )
            goto LABEL_27;
          Instance = (void *)VoicePlayCondMaster__isVoicePlay(
                               MasterData_WarQuestSelectionMaster,
                               this->fields.id,
                               v28->fields.id,
                               0LL,
                               -1LL,
                               genderType,
                               0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_27;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v15,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v23->fields.infos,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v21;
    if ( !scriptJson )
      goto LABEL_27;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList_31408140(
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
  void *Instance; // x0
  __int64 v18; // x1
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x23
  const MethodInfo *v21; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned __int64 v23; // x25
  unsigned __int64 max_length; // x9
  SvtVoiceInfo_o *v25; // x27
  struct ServantVoiceCond_array *conds; // x9
  __int64 v27; // x28
  int v28; // w8
  ServantVoiceCond_o *v29; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v31; // x8
  __int64 v33; // x0

  if ( (byte_418B0F6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_418B0F6 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v21);
  if ( Instance )
  {
    if ( v20 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v20,
        *((EventMissionProgressRequest_Argument_ProgressData_o **)Instance + 8),
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      return (System_Collections_Generic_List_ServantVoiceData____o *)v20;
    }
LABEL_35:
    sub_B2C434(Instance, v18);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_35;
  v23 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (__int64)v23 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v20;
    if ( v23 >= max_length )
    {
LABEL_37:
      v33 = sub_B2C460(Instance);
      sub_B2C400(v33, 0LL);
    }
    v25 = scriptJson->m_Items[v23];
    if ( v25 )
    {
      conds = v25->fields.conds;
      if ( conds )
      {
        v27 = 0LL;
        while ( 1 )
        {
          v28 = conds->max_length;
          if ( (int)v27 >= v28 )
            break;
          if ( (unsigned int)v27 >= v28 )
            goto LABEL_37;
          v29 = conds->m_Items[v27];
          if ( !v29 )
            goto LABEL_35;
          if ( v29->fields.condType == condType )
          {
            if ( condType != 3 && condType != 23 && condType != 9 )
              goto LABEL_29;
            if ( v29->fields.value == condValue )
            {
              infos = v25->fields.infos;
              if ( !infos )
                goto LABEL_35;
              if ( !infos->max_length )
                goto LABEL_37;
              v31 = infos->m_Items[0];
              if ( !v31 || !MasterData_WarQuestSelectionMaster )
                goto LABEL_35;
              Instance = (void *)VoicePlayCondMaster__isVoicePlay(
                                   MasterData_WarQuestSelectionMaster,
                                   this->fields.id,
                                   v31->fields.id,
                                   0LL,
                                   -1LL,
                                   genderType,
                                   0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
LABEL_29:
                if ( !v20 )
                  goto LABEL_35;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v20,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v25->fields.infos,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
              }
            }
          }
          conds = v25->fields.conds;
          ++v27;
          if ( !conds )
            goto LABEL_35;
        }
        scriptJson = this->fields.scriptJson;
      }
    }
    ++v23;
    if ( !scriptJson )
      goto LABEL_35;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList_31408724(
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
  struct ServantVoiceData_array *infos; // x1
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x19
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v21; // x9
  SvtVoiceInfo_o *v22; // x8
  il2cpp_array_size_t v23; // w26
  _BOOL4 v24; // w24
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v26; // x25
  struct ServantVoiceData_array *v27; // x9
  __int64 v28; // x27
  int v29; // w8
  ServantVoiceData_o *v30; // x28
  __int64 v32; // x0

  if ( (byte_418B0F7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&StringLiteral_15922/*"_B050"*/, v15);
    byte_418B0F7 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !labelName )
    goto LABEL_40;
  Instance = (WebViewManager_o *)System_String__EndsWith(labelName, (System_String_o *)StringLiteral_15922/*"_B050"*/, 0LL);
  scriptJson = this->fields.scriptJson;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( scriptJson )
    {
      v21 = *(_QWORD *)&scriptJson->max_length;
      if ( !v21 )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v19;
      if ( !(_DWORD)v21 )
      {
LABEL_41:
        v32 = sub_B2C460(Instance);
        sub_B2C400(v32, 0LL);
      }
      v22 = scriptJson->m_Items[0];
      if ( v22 )
      {
        infos = v22->fields.infos;
        if ( !infos || !*(_QWORD *)&infos->max_length )
          return (System_Collections_Generic_List_ServantVoiceData____o *)v19;
        if ( v19 )
          goto LABEL_38;
      }
    }
LABEL_40:
    sub_B2C434(Instance, infos);
  }
  if ( !scriptJson )
    goto LABEL_40;
  v23 = 0;
  v24 = (unsigned int)(type - 1) < 2 && isCheckPlayCond;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v23 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v19;
    if ( v23 >= max_length )
      goto LABEL_41;
    v26 = scriptJson->m_Items[v23];
    if ( !v26 )
      goto LABEL_40;
    v27 = v26->fields.infos;
    if ( v27 )
      break;
LABEL_34:
    ++v23;
    if ( !scriptJson )
      goto LABEL_40;
  }
  v28 = 0LL;
  while ( 1 )
  {
    v29 = v27->max_length;
    if ( (int)v28 >= v29 )
    {
      scriptJson = this->fields.scriptJson;
      goto LABEL_34;
    }
    if ( (unsigned int)v28 >= v29 )
      goto LABEL_41;
    v30 = v27->m_Items[v28];
    if ( !v30 )
      goto LABEL_40;
    Instance = (WebViewManager_o *)System_String__Equals_44292872(labelName, v30->fields.id, 0LL);
    if ( !v24 )
      break;
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_40;
      Instance = (WebViewManager_o *)VoicePlayCondMaster__isVoicePlay(
                                       MasterData_WarQuestSelectionMaster,
                                       this->fields.id,
                                       v30->fields.id,
                                       disableCondTypeList,
                                       -1LL,
                                       -1,
                                       0LL);
      break;
    }
LABEL_31:
    v27 = v26->fields.infos;
    ++v28;
    if ( !v27 )
      goto LABEL_40;
  }
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_31;
  if ( !v19 )
    goto LABEL_40;
  infos = v26->fields.infos;
LABEL_38:
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v19,
    (EventMissionProgressRequest_Argument_ProgressData_o *)infos,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
  return (System_Collections_Generic_List_ServantVoiceData____o *)v19;
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
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  UserServantMaster_o *v14; // x24
  UserServantEntity_o *Entity; // x23
  UserServantEntity_array *v16; // x24
  int32_t FriendshipRank; // w0
  const MethodInfo *v18; // x2
  struct ServantVoiceCond_array *conds; // x27
  int max_length; // w8
  int32_t v21; // w26
  int v22; // w28
  bool v23; // w22
  ServantVoiceCond_o *v24; // x25
  int value; // w8
  int32_t v26; // w0
  __int64 v28; // x0
  const MethodInfo *v29; // [xsp+0h] [xbp-60h]

  if ( (byte_418B104 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, info);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_418B104 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame
    || (v14 = (UserServantMaster_o *)Instance) == 0LL
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   SelfUserGame->fields.favoriteUserSvtId,
                   (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
        Instance = (DataManager_o *)UserServantMaster__getAllList(v14, 0LL),
        !Entity)
    || (v16 = (UserServantEntity_array *)Instance,
        FriendshipRank = UserServantEntity__getFriendshipRank(Entity, 0LL),
        Instance = (DataManager_o *)ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v18),
        !info)
    || (conds = info->fields.conds) == 0LL )
  {
LABEL_23:
    sub_B2C434(Instance, v13);
  }
  max_length = conds->max_length;
  if ( max_length < 1 )
    return 0;
  v21 = (int)Instance;
  v22 = 0;
  v23 = isBeforeFriendship;
  do
  {
    if ( v22 >= (unsigned int)max_length )
    {
      v28 = sub_B2C460(Instance);
      sub_B2C400(v28, 0LL);
    }
    v24 = conds->m_Items[v22];
    if ( !v24 )
      goto LABEL_23;
    if ( v24->fields.condType == 23 )
    {
      value = v24->fields.value;
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
      v26 = UserServantEntity__getFriendshipRank(Entity, 0LL);
      Instance = (DataManager_o *)ServantVoiceEntity__IsAvailableHomeAndGrowth(
                                    this,
                                    v24,
                                    SelfUserGame,
                                    Entity,
                                    v16,
                                    v21,
                                    v26,
                                    v23,
                                    v29);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        return 0;
    }
    max_length = conds->max_length;
    ++v22;
  }
  while ( v22 < max_length );
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
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v12; // x3

  if ( (byte_418B102 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, info);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_418B102 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v10);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return ServantVoiceEntity__isAvailableVoice_31414880(this, info, Entity, v12);
}


bool __fastcall ServantVoiceEntity__isAvailableVoice_31414880(
        ServantVoiceEntity_o *this,
        SvtVoiceInfo_o *info,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UserGameEntity_o *SelfUserGame; // x21
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  UserServantEntity_array *AllList; // x22
  int32_t FriendshipRank; // w0
  const MethodInfo *v14; // x2
  struct ServantVoiceCond_array *conds; // x25
  int max_length; // w8
  int32_t v17; // w23
  unsigned int v18; // w26
  ServantVoiceCond_o *v19; // x24
  int32_t value; // w24
  ServantVoiceEntity_o *Time; // x0
  const MethodInfo *v22; // x3
  int v23; // w24
  int32_t v24; // w24
  ServantVoiceEntity_o *v25; // x0
  const MethodInfo *v26; // x3
  int32_t v27; // w24
  int v28; // w24
  int32_t v29; // w0
  __int64 v30; // x0
  const MethodInfo *v32; // [xsp+0h] [xbp-60h]

  if ( (byte_418B103 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, info);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_418B103 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_32;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_33;
  AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
  FriendshipRank = UserServantEntity__getFriendshipRank(userSvtEntity, 0LL);
  Instance = (DataManager_o *)ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v14);
  if ( !info )
    goto LABEL_33;
  conds = info->fields.conds;
  if ( !conds )
    goto LABEL_33;
  max_length = conds->max_length;
  if ( max_length < 1 )
  {
LABEL_32:
    LOBYTE(Instance) = 0;
    return (char)Instance;
  }
  v17 = (int)Instance;
  v18 = 0;
  while ( 2 )
  {
    if ( v18 >= max_length )
    {
      v30 = sub_B2C460(Instance);
      sub_B2C400(v30, 0LL);
    }
    v19 = conds->m_Items[v18];
    if ( !v19 )
LABEL_33:
      sub_B2C434(Instance, v11);
    Instance = 0LL;
    switch ( v19->fields.condType )
    {
      case 8:
        goto LABEL_30;
      case 9:
      case 0xA:
      case 0x11:
        return (char)Instance;
      case 0xD:
        value = v19->fields.value;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Time = (ServantVoiceEntity_o *)NetworkManager__getTime(0LL);
        Instance = (DataManager_o *)ServantVoiceEntity__isEventEndState(Time, value, (int64_t)Time, v22);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_32;
        goto LABEL_30;
      case 0xE:
        v24 = v19->fields.value;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v25 = (ServantVoiceEntity_o *)NetworkManager__getTime(0LL);
        Instance = (DataManager_o *)ServantVoiceEntity__isEventEndState(v25, v24, (int64_t)v25, v26);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          goto LABEL_32;
        goto LABEL_30;
      case 0x18:
        v27 = v19->fields.value;
        Instance = (DataManager_o *)UserServantEntity__getLimitCount(userSvtEntity, 0LL);
        if ( v27 != (_DWORD)Instance )
          goto LABEL_32;
        goto LABEL_30;
      case 0x19:
        v23 = v19->fields.value;
        Instance = (DataManager_o *)UserServantEntity__getLimitCount(userSvtEntity, 0LL);
        if ( v23 > (int)Instance )
          goto LABEL_32;
        goto LABEL_30;
      case 0x1A:
        v28 = v19->fields.value;
        Instance = (DataManager_o *)UserServantEntity__getLimitCount(userSvtEntity, 0LL);
        if ( v28 < (int)Instance )
          goto LABEL_32;
        goto LABEL_30;
      default:
        v29 = UserServantEntity__getFriendshipRank(userSvtEntity, 0LL);
        Instance = (DataManager_o *)ServantVoiceEntity__IsAvailableHomeAndGrowth(
                                      this,
                                      v19,
                                      SelfUserGame,
                                      userSvtEntity,
                                      AllList,
                                      v17,
                                      v29,
                                      0,
                                      v32);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_32;
LABEL_30:
        max_length = conds->max_length;
        if ( (int)++v18 < max_length )
          continue;
        LOBYTE(Instance) = 1;
        break;
    }
    return (char)Instance;
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
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418B10B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_418B10B = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                eventId,
                                (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return *(_QWORD *)&entity->fields.eventId <= time;
LABEL_9:
    sub_B2C434(Instance, v9);
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
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418B10A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&questId);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418B10A = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( UserQuestMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, (int64_t)Instance, questId, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserQuestEntity__getClearNum(entity, 0LL) > 0;
LABEL_13:
    sub_B2C434(Instance, v7);
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
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  UserServantEntity_o *Entity; // x1
  const MethodInfo *v12; // x3

  if ( (byte_418B0FF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_418B0FF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v10);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return ServantVoiceEntity__lotteryLevelUpVoice_31413028(this, Entity, voiceId, v12);
}


ServantVoiceData_array *__fastcall ServantVoiceEntity__lotteryLevelUpVoice_31413028(
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
  int64_t Instance; // x0
  __int64 v21; // x1
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v25; // x28
  UserServantEntity_Fields *p_fields; // x27
  __int64 v27; // x9
  SvtVoiceInfo_o *v28; // x24
  struct ServantVoiceData_array *infos; // x8
  __int64 v30; // x9
  ServantVoiceData_o *v31; // x8
  ServantVoiceData_o *v32; // x8
  __int128 v33; // q1
  int32_t id; // w25
  System_String_o *v35; // x26
  const MethodInfo *v36; // x3
  struct ServantVoiceCond_array *conds; // x8
  WeightRate_int__o *v39; // x21
  int size; // w23
  int32_t i; // w22
  int v42; // w8
  __int64 v43; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v44; // x8
  __int64 v45; // x8
  __int64 v46; // x8
  unsigned int v47; // w28
  SvtVoiceInfo_o *v48; // x24
  struct ServantVoiceData_array *v49; // x8
  __int64 v50; // x9
  ServantVoiceData_o *v51; // x8
  __int128 v52; // q1
  int32_t v53; // w25
  System_String_o *v54; // x26
  const MethodInfo *v55; // x3
  struct ServantVoiceCond_array *v56; // x8
  int32_t v57; // w0
  EventMissionProgressRequest_Argument_ProgressData_o *v58; // x8
  __int64 v59; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+40h] [xbp-70h]

  if ( (byte_418B101 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, userServantEntity);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&ServantVoiceData___TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&Method_WeightRate_int___ctor__, v15);
    sub_B2C35C(&Method_WeightRate_int__getData__, v16);
    sub_B2C35C(&Method_WeightRate_int__getTotalWeight__, v17);
    sub_B2C35C(&Method_WeightRate_int__setWeight__, v18);
    sub_B2C35C(&WeightRate_int__TypeInfo, v19);
    byte_418B101 = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_79;
  v25 = 0LL;
  p_fields = &userServantEntity->fields;
  while ( 1 )
  {
    v27 = *(_QWORD *)&scriptJson->max_length;
    if ( (int)v25 >= (int)v27 )
      break;
    if ( (unsigned int)v25 >= (unsigned int)v27 )
      goto LABEL_80;
    v28 = scriptJson->m_Items[v25];
    if ( !v28 )
      goto LABEL_79;
    infos = v28->fields.infos;
    if ( infos )
    {
      v30 = *(_QWORD *)&infos->max_length;
      if ( v30 )
      {
        if ( voiceId )
        {
          if ( !(_DWORD)v30 )
            goto LABEL_80;
          v31 = infos->m_Items[0];
          if ( !v31 )
            goto LABEL_79;
          Instance = System_String__op_Equality(v31->fields.id, voiceId, 0LL);
          if ( (Instance & 1) != 0 )
            goto LABEL_17;
        }
        else
        {
          if ( !(_DWORD)v30 )
            goto LABEL_80;
          v32 = infos->m_Items[0];
          if ( !v32 )
            goto LABEL_79;
          v33 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          id = this->fields.id;
          v35 = v32->fields.id;
          *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
          *(_OWORD *)&v62.fields.fakeValue = v33;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v61 = v62;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v61, 0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_79;
          Instance = VoicePlayCondMaster__isVoicePlay(
                       MasterData_WarQuestSelectionMaster,
                       id,
                       v35,
                       0LL,
                       Instance,
                       -1,
                       0LL);
          if ( (Instance & 1) != 0 )
          {
            conds = v28->fields.conds;
            if ( conds )
            {
              if ( *(_QWORD *)&conds->max_length )
              {
                Instance = ServantVoiceEntity__isAvailableVoice_31414880(this, v28, userServantEntity, v36);
                if ( (Instance & 1) != 0 )
                {
LABEL_17:
                  if ( !v23 )
                    goto LABEL_79;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v23,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
                }
              }
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v25;
    if ( !scriptJson )
      goto LABEL_79;
  }
  if ( !v23 )
    goto LABEL_79;
  if ( !v23->fields._size )
  {
    if ( !voiceId )
      return (ServantVoiceData_array *)sub_B2C374(ServantVoiceData___TypeInfo, 0LL);
    if ( (int)v27 >= 1 )
    {
      v47 = 0;
      while ( v47 < (unsigned int)v27 )
      {
        v48 = scriptJson->m_Items[v47];
        if ( !v48 )
          goto LABEL_79;
        v49 = v48->fields.infos;
        if ( v49 )
        {
          v50 = *(_QWORD *)&v49->max_length;
          if ( v50 )
          {
            if ( !(_DWORD)v50 )
              break;
            v51 = v49->m_Items[0];
            if ( !v51 )
              goto LABEL_79;
            v52 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            v53 = this->fields.id;
            v54 = v51->fields.id;
            *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v62.fields.fakeValue = v52;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v60 = v62;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v60, 0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_79;
            Instance = VoicePlayCondMaster__isVoicePlay(
                         MasterData_WarQuestSelectionMaster,
                         v53,
                         v54,
                         0LL,
                         Instance,
                         -1,
                         0LL);
            if ( (Instance & 1) != 0 )
            {
              v56 = v48->fields.conds;
              if ( v56 )
              {
                if ( *(_QWORD *)&v56->max_length )
                {
                  Instance = ServantVoiceEntity__isAvailableVoice_31414880(this, v48, userServantEntity, v55);
                  if ( (Instance & 1) != 0 )
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v23,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
                      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
                }
              }
            }
          }
        }
        scriptJson = this->fields.scriptJson;
        if ( !scriptJson )
          goto LABEL_79;
        LODWORD(v27) = scriptJson->max_length;
        if ( (int)++v47 >= (int)v27 )
          goto LABEL_70;
      }
LABEL_80:
      v59 = sub_B2C460(Instance);
      sub_B2C400(v59, 0LL);
    }
LABEL_70:
    if ( !v23->fields._size )
      return (ServantVoiceData_array *)sub_B2C374(ServantVoiceData___TypeInfo, 0LL);
  }
  v39 = (WeightRate_int__o *)sub_B2C42C(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v39, (const MethodInfo_29E4118 *)Method_WeightRate_int___ctor__);
  size = v23->fields._size;
  if ( size >= 1 )
  {
    if ( v39 )
    {
      for ( i = 0; i != size; ++i )
        WeightRate_int___setWeight(v39, 1, i, (const MethodInfo_29E32E0 *)Method_WeightRate_int__setWeight__);
      goto LABEL_38;
    }
    goto LABEL_79;
  }
LABEL_38:
  Instance = System_String__IsNullOrEmpty(voiceId, 0LL);
  if ( (Instance & 1) != 0 )
    goto LABEL_73;
  v42 = v23->fields._size;
  if ( v42 < 1 )
    goto LABEL_73;
  v43 = 0LL;
  while ( 1 )
  {
    if ( v42 <= (unsigned int)v43 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v44 = v23->fields._items->m_Items[v43];
    if ( !v44 )
      goto LABEL_79;
    v45 = *(_QWORD *)&v44[1].fields.targetId;
    if ( !v45 )
      goto LABEL_79;
    if ( !*(_DWORD *)(v45 + 24) )
      goto LABEL_80;
    v46 = *(_QWORD *)(v45 + 32);
    if ( !v46 )
      goto LABEL_79;
    Instance = System_String__op_Equality(*(System_String_o **)(v46 + 16), voiceId, 0LL);
    if ( (Instance & 1) != 0 )
      break;
    v42 = v23->fields._size;
    if ( (int)++v43 >= v42 )
      goto LABEL_73;
  }
  if ( (_DWORD)v43 == -1 )
  {
LABEL_73:
    if ( !v39 )
      goto LABEL_79;
    v57 = UnityEngine_Random__Range_35348680(0, v39->fields.totalweight, 0LL);
    Instance = WeightRate_int___getData(v39, v57, (const MethodInfo_29E3764 *)Method_WeightRate_int__getData__);
    LODWORD(v43) = Instance;
  }
  if ( v23->fields._size <= (unsigned int)v43 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v58 = v23->fields._items->m_Items[(int)v43];
  if ( !v58 )
LABEL_79:
    sub_B2C434(Instance, v21);
  return *(ServantVoiceData_array **)&v58[1].fields.targetId;
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
  int64_t Instance; // x0
  __int64 v11; // x1
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v15; // x26
  int max_length; // w9
  SvtVoiceInfo_o *v17; // x23
  struct ServantVoiceData_array *infos; // x8
  __int64 v19; // x9
  ServantVoiceData_o *v20; // x8
  __int128 v21; // q1
  int32_t id; // w24
  System_String_o *v23; // x25
  const MethodInfo *v24; // x3
  struct ServantVoiceCond_array *conds; // x8
  __int64 v27; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-70h]

  if ( (byte_418B100 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, userServantEntity);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418B100 = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v13,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_26:
    sub_B2C434(Instance, v11);
  }
  v15 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v15 >= max_length )
      return (System_Collections_Generic_List_SvtVoiceInfo__o *)v13;
    if ( (unsigned int)v15 >= max_length )
      goto LABEL_29;
    v17 = scriptJson->m_Items[v15];
    if ( !v17 )
      goto LABEL_26;
    infos = v17->fields.infos;
    if ( infos )
    {
      v19 = *(_QWORD *)&infos->max_length;
      if ( v19 )
      {
        if ( !(_DWORD)v19 )
        {
LABEL_29:
          v27 = sub_B2C460(Instance);
          sub_B2C400(v27, 0LL);
        }
        v20 = infos->m_Items[0];
        if ( !v20 )
          goto LABEL_26;
        v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        id = this->fields.id;
        v23 = v20->fields.id;
        *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v29.fields.fakeValue = v21;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v28 = v29;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v28, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_26;
        Instance = VoicePlayCondMaster__isVoicePlay(MasterData_WarQuestSelectionMaster, id, v23, 0LL, Instance, -1, 0LL);
        if ( (Instance & 1) != 0 )
        {
          conds = v17->fields.conds;
          if ( conds )
          {
            if ( *(_QWORD *)&conds->max_length )
            {
              Instance = ServantVoiceEntity__isAvailableVoice_31414880(this, v17, userServantEntity, v24);
              if ( (Instance & 1) != 0 )
              {
                if ( !v13 )
                  goto LABEL_26;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v13,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
              }
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v15;
    if ( !scriptJson )
      goto LABEL_26;
  }
}