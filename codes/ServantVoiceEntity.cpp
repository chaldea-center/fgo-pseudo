void __fastcall ServantVoiceEntity___ctor(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42177A6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_42177A6 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantVoiceEntity__CreatePK(
        int32_t id,
        int32_t voicePrefix,
        int32_t type,
        const MethodInfo *method)
{
  if ( (byte_4217784 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&voicePrefix);
    byte_4217784 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           voicePrefix,
           type,
           (const MethodInfo_1713844 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantVoiceEntity__CreatePrimaryKey(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantVoiceEntity__CreatePK(this->fields.id, this->fields.voicePrefix, this->fields.type, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantVoiceEntity__FriendShipRankWithVoice(
        ServantVoiceEntity_o *this,
        int32_t rankNow,
        const MethodInfo *method)
{
  int v3; // w19
  __int64 v5; // x0
  unsigned __int64 v6; // x8
  unsigned __int64 v7; // x9
  struct SvtVoiceInfo_array *scriptJson; // x9
  il2cpp_array_size_t v9; // w8
  il2cpp_array_size_t max_length; // w10
  SvtVoiceInfo_o *v11; // x9
  struct ServantVoiceCond_array *conds; // x9
  __int64 v13; // x12
  __int64 v14; // x10
  ServantVoiceCond_o *v15; // x13
  __int64 value; // x13
  __int64 v18; // x0

  v3 = rankNow;
  if ( (byte_4217792 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, *(_QWORD *)&rankNow);
    byte_4217792 = 1;
  }
  v5 = sub_B0D8BC(int___TypeInfo, (unsigned int)v3);
  if ( !v5 )
    goto LABEL_26;
  v6 = *(unsigned int *)(v5 + 24);
  if ( (__int64)(v6 << 32) >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= v6 )
        goto LABEL_33;
      *(_DWORD *)(v5 + 32 + 4 * v7++) = 0;
    }
    while ( (__int64)v7 < (int)v6 );
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_26:
    sub_B0D97C(v5);
  v9 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v9 >= (int)max_length )
      break;
    if ( v9 >= max_length )
      goto LABEL_33;
    v11 = scriptJson->m_Items[v9];
    if ( !v11 )
      goto LABEL_26;
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
              goto LABEL_26;
            if ( v15->fields.condType == 3 )
            {
              value = v15->fields.value;
              if ( (_DWORD)value == v3 )
                return v3;
              if ( (int)value < v3 )
              {
                if ( (unsigned int)value >= *(_DWORD *)(v5 + 24) )
                  break;
                ++*(_DWORD *)(v5 + 4 * value + 32);
                v13 = *(_QWORD *)&conds->max_length;
              }
            }
            if ( (int)++v14 >= (int)v13 )
              goto LABEL_25;
          }
LABEL_33:
          v18 = sub_B0D9A8(v5);
          sub_B0D948(v18, 0LL);
        }
      }
    }
LABEL_25:
    scriptJson = this->fields.scriptJson;
    ++v9;
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
    sub_B0D97C(this);
  max_length = scriptJson->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
    {
LABEL_19:
      v14 = sub_B0D9A8(this);
      sub_B0D948(v14, 0LL);
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
    this = (ServantVoiceEntity_o *)System_String__Equals_43837244(labelName, v12->fields.id, 0LL);
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
    sub_B0D97C(this);
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
        v12 = sub_B0D9A8(this);
        sub_B0D948(v12, 0LL);
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
    return ServantVoiceEntity__getVoiceList_29945472(this, 3, labelName, 0LL, 1, v5);
  else
    return 0LL;
}


SvtVoiceInfo_o *__fastcall ServantVoiceEntity__GetPlayVoiceLabelInfo(
        ServantVoiceEntity_o *this,
        System_String_o *playVoiceLabel,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  SvtVoiceInfo_o *v6; // x21
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned __int64 v8; // x22
  unsigned __int64 max_length; // x9
  struct ServantVoiceData_array *infos; // x9
  ServantVoiceData_o *v11; // x8
  __int64 v13; // x0

  IsNullOrEmpty = System_String__IsNullOrEmpty(playVoiceLabel, 0LL);
  v6 = 0LL;
  if ( !IsNullOrEmpty )
  {
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
LABEL_13:
      sub_B0D97C(IsNullOrEmpty);
    v8 = 0LL;
    while ( 1 )
    {
      max_length = scriptJson->max_length;
      if ( (__int64)v8 >= (int)max_length )
        return 0LL;
      if ( v8 >= max_length )
      {
        v13 = sub_B0D9A8(IsNullOrEmpty);
        sub_B0D948(v13, 0LL);
      }
      v6 = scriptJson->m_Items[v8];
      if ( v6 )
      {
        infos = v6->fields.infos;
        if ( !infos )
          goto LABEL_13;
        if ( (int)infos->max_length >= 1 )
        {
          v11 = infos->m_Items[0];
          if ( !v11 )
            goto LABEL_13;
          IsNullOrEmpty = System_String__op_Equality(v11->fields.id, playVoiceLabel, 0LL);
          if ( IsNullOrEmpty )
            return v6;
          scriptJson = this->fields.scriptJson;
        }
      }
      ++v8;
      if ( !scriptJson )
        goto LABEL_13;
    }
  }
  return v6;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantVoiceEntity__GetSummonScriptId(
        ServantVoiceEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  VoicePlayCondMaster_o *v8; // x21
  __int64 v9; // x23
  int max_length; // w9
  SvtVoiceInfo_o *v11; // x8
  struct ServantVoiceData_array *infos; // x9
  ServantVoiceData_o *v13; // x9
  System_String_o *summonScript; // x22
  __int64 v16; // x0

  if ( (byte_42177A5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_42177A5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_16:
    sub_B0D97C(Instance);
  }
  v8 = (VoicePlayCondMaster_o *)Instance;
  v9 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v9 >= max_length )
      return 0LL;
    if ( (unsigned int)v9 >= max_length )
      goto LABEL_19;
    v11 = scriptJson->m_Items[v9];
    if ( !v11 )
      goto LABEL_16;
    infos = v11->fields.infos;
    if ( !infos )
      goto LABEL_16;
    if ( !infos->max_length )
    {
LABEL_19:
      v16 = sub_B0D9A8(Instance);
      sub_B0D948(v16, 0LL);
    }
    v13 = infos->m_Items[0];
    if ( !v13 || !v8 )
      goto LABEL_16;
    summonScript = v11->fields.summonScript;
    Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v8, svtId, v13->fields.id, 0LL, -1LL, -1, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (DataManager_o *)System_String__IsNullOrEmpty(summonScript, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        return summonScript;
    }
    scriptJson = this->fields.scriptJson;
    ++v9;
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
  __int64 v15; // x1
  int32_t condType; // w21
  int32_t v17; // w19
  int32_t v18; // w2
  int32_t v19; // w0
  int32_t v20; // w1
  int32_t v21; // w19
  int32_t value; // w19
  int32_t v24; // w20
  int32_t v25; // w20
  __int64 v26; // x21
  __int64 v27; // x22
  int32_t v28; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_421779B & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, cond);
    this = (ServantVoiceEntity_o *)sub_B0D8A4(&VoiceCondType_TypeInfo, v15);
    byte_421779B = 1;
  }
  if ( !cond )
LABEL_51:
    sub_B0D97C(this);
  condType = cond->fields.condType;
  switch ( condType )
  {
    case 1:
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      return VoiceCondType__IsSatisfyBirthdayCondition(0LL);
    case 2:
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      return VoiceCondType__IsSatisfyEventCondition(0LL);
    case 3:
      if ( isBeforeFriendship )
      {
        value = cond->fields.value;
        if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !VoiceCondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
        }
        v19 = 20;
      }
      else
      {
        if ( friendshipRankWithVoice == -1 )
          return 0;
        value = cond->fields.value;
        if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !VoiceCondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
        }
        v19 = 3;
      }
LABEL_48:
      v20 = value;
      v18 = friendshipRankWithVoice;
      return VoiceCondType__IsSatisfyCondition(v19, v20, v18, 0LL);
    case 4:
      v24 = cond->fields.value;
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      return VoiceCondType__IsSatisfySvtGetCondition(v24, usrSvtList, 0LL);
    case 5:
      if ( !userSvtEntity )
        goto LABEL_51;
      v25 = cond->fields.value;
      v27 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v26 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v29.fields.currentCryptoKey = v27;
      *(_QWORD *)&v29.fields.fakeValue = v26;
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v29, 0LL);
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      return VoiceCondType__IsSatisfySvtGroupCondition(v25, v28, usrSvtList, 0LL);
    case 6:
    case 7:
    case 12:
      v17 = cond->fields.value;
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      v18 = -1;
      v19 = condType;
      v20 = v17;
      return VoiceCondType__IsSatisfyCondition(v19, v20, v18, 0LL);
    case 9:
    case 17:
      if ( !userSvtEntity )
        goto LABEL_51;
      value = cond->fields.value;
      friendshipRankWithVoice = UserServantEntity__getLimitCount(userSvtEntity, 0LL);
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      v19 = condType;
      goto LABEL_48;
    case 20:
    case 22:
      v21 = cond->fields.value;
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      v19 = condType;
      v20 = v21;
      v18 = friendshipRankNow;
      return VoiceCondType__IsSatisfyCondition(v19, v20, v18, 0LL);
    default:
      return 0;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getBattleVoiceList(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_29945472(this, 6, labelName, 0LL, 1, v3);
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
  struct SvtVoiceInfo_array *scriptJson; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x22
  il2cpp_array_size_t v14; // w23
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v16; // x28
  struct ServantVoiceCond_array *conds; // x19
  __int64 v18; // x8
  __int64 v19; // x26
  ServantVoiceCond_o *v20; // x24
  unsigned int condType; // w8
  __int64 v23; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_421779C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_421779C = 1;
  }
  entity = 0LL;
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                 *(_QWORD *)&eventId,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_31:
    sub_B0D97C(Instance);
  }
  v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v14 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v14 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v9;
    if ( v14 >= max_length )
      goto LABEL_33;
    v16 = scriptJson->m_Items[v14];
    if ( v16 )
    {
      conds = v16->fields.conds;
      if ( conds && (v18 = *(_QWORD *)&conds->max_length) != 0 )
      {
        if ( (int)v18 >= 1 )
        {
          v19 = 0LL;
          while ( (unsigned int)v19 < (unsigned int)v18 )
          {
            v20 = conds->m_Items[v19];
            if ( !v20 || !v13 )
              goto LABEL_31;
            Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                          v13,
                                          &entity,
                                          v20->fields.value,
                                          (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_31;
              if ( Time <= (__int64)entity->fields.coordinate )
              {
                condType = v20->fields.condType;
                if ( condType <= 0x13 && ((1 << condType) & 0x86000) != 0 )
                {
                  if ( !v9 )
                    goto LABEL_31;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v9,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v16->fields.infos,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
                }
              }
            }
            LODWORD(v18) = conds->max_length;
            if ( (int)++v19 >= (int)v18 )
              goto LABEL_30;
          }
LABEL_33:
          v23 = sub_B0D9A8(Instance);
          sub_B0D948(v23, 0LL);
        }
      }
      else
      {
        if ( !v9 )
          goto LABEL_31;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v16->fields.infos,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      }
LABEL_30:
      ++v14;
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
  struct SvtVoiceInfo_array *scriptJson; // x8
  VoicePlayCondMaster_o *v15; // x22
  __int64 v16; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v18; // x8
  WarBoardManager_TaskList_o *infos; // x23
  Il2CppObject *syncRoot; // x8
  __int64 v22; // x0

  if ( (byte_4217788 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4217788 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  *(_QWORD *)&type,
                                                                                                  *(_QWORD *)&svtId);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_19:
    sub_B0D97C(Instance);
  }
  v15 = (VoicePlayCondMaster_o *)Instance;
  v16 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v16 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v12;
    if ( (unsigned int)v16 >= max_length )
      goto LABEL_22;
    v18 = scriptJson->m_Items[v16];
    if ( v18 )
    {
      infos = (WarBoardManager_TaskList_o *)v18->fields.infos;
      if ( infos )
      {
        if ( !infos->fields._size )
        {
LABEL_22:
          v22 = sub_B0D9A8(Instance);
          sub_B0D948(v22, 0LL);
        }
        syncRoot = infos->fields._syncRoot;
        if ( syncRoot )
        {
          if ( v15 )
          {
            Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(
                                          v15,
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
                                            (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v12,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)infos,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
            }
            scriptJson = this->fields.scriptJson;
            ++v16;
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
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v14; // x22
  int max_length; // w9
  SvtVoiceInfo_o *v16; // x1
  struct ServantVoiceCond_array *conds; // x9
  __int64 v18; // x10
  ServantVoiceCond_o *v19; // x9
  __int64 v21; // x0

  if ( (byte_421778A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_421778A = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SvtVoiceInfo__TypeInfo,
                                                                                                  *(_QWORD *)&type,
                                                                                                  *(_QWORD *)&condType);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_18:
    sub_B0D97C(Instance);
  }
  v14 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v14 >= max_length )
      return (System_Collections_Generic_List_SvtVoiceInfo__o *)v11;
    if ( (unsigned int)v14 >= max_length )
      goto LABEL_21;
    v16 = scriptJson->m_Items[v14];
    if ( !v16 )
      goto LABEL_18;
    conds = v16->fields.conds;
    if ( conds )
    {
      v18 = *(_QWORD *)&conds->max_length;
      if ( v18 )
      {
        if ( !(_DWORD)v18 )
        {
LABEL_21:
          v21 = sub_B0D9A8(Instance);
          sub_B0D948(v21, 0LL);
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
            (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
          scriptJson = this->fields.scriptJson;
        }
      }
    }
    ++v14;
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
  if ( (byte_421778F & 1) == 0 )
  {
    this = (ServantVoiceEntity_o *)sub_B0D8A4(&StringLiteral_15969/*"_B050"*/, *(_QWORD *)&type);
    byte_421778F = 1;
  }
  if ( v6->fields.type == type )
  {
    if ( !labelName )
      goto LABEL_25;
    this = (ServantVoiceEntity_o *)System_String__EndsWith(labelName, (System_String_o *)StringLiteral_15969/*"_B050"*/, 0LL);
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
          v18 = sub_B0D9A8(this);
          sub_B0D948(v18, 0LL);
        }
        v9 = scriptJson->m_Items[0];
        if ( v9 )
          return v9->fields.conds;
LABEL_25:
        sub_B0D97C(this);
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
              this = (ServantVoiceEntity_o *)System_String__Equals_43837244(labelName, v17->fields.id, 0LL);
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

  return ServantVoiceEntity__getVoiceList_29944888(this, 2, 23, costumeId, 0LL, -1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getCostumeGetVoiceList(
        ServantVoiceEntity_o *this,
        int32_t costumeId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  return ServantVoiceEntity__getVoiceList_29944888(this, 2, 23, costumeId, 0LL, -1, v3);
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
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  __int64 v7; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v9; // w21
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v11; // x23
  struct ServantVoiceCond_array *conds; // x24
  __int64 v13; // x8
  __int64 v14; // x25
  ServantVoiceCond_o *v15; // x9
  __int64 v17; // x0

  if ( (byte_421779E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v5);
    byte_421779E = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_19:
    sub_B0D97C(v7);
  v9 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v9 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v6;
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
                if ( !v6 )
                  goto LABEL_19;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v6,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v11->fields.infos,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
                v13 = *(_QWORD *)&conds->max_length;
              }
              if ( (int)++v14 >= (int)v13 )
                goto LABEL_18;
            }
LABEL_21:
            v17 = sub_B0D9A8(v7);
            sub_B0D948(v17, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  DataManager_o *Time; // x0
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

  if ( (byte_421779D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_421779D = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = (DataManager_o *)NetworkManager__getTime(0LL);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_33:
    sub_B0D97C(Time);
  v12 = Time;
  v13 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v13 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v9;
    if ( v13 >= max_length )
    {
LABEL_35:
      v22 = sub_B0D9A8(Time);
      sub_B0D948(v22, 0LL);
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
          Time = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_33;
          Time = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Time,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !v19 || !Time )
            goto LABEL_33;
          Time = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Time,
                                    v19->fields.value,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( Time )
          {
            condType = v19->fields.condType;
            if ( (__int64)Time->fields.masterLoadThreads <= (__int64)v12 )
            {
              if ( condType == 19 || condType == 13 )
              {
LABEL_26:
                if ( !v9 )
                  goto LABEL_33;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v9,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v15->fields.infos,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
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
      if ( !v9 )
        goto LABEL_33;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v15->fields.infos,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    }
    ++v13;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_33;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventRewardVoiceList_29955700(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_29945472(this, 5, labelName, 0LL, 1, v3);
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
  System_Collections_Generic_List_VoiceCondType_Type__o *v26; // x22
  int64_t Time; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_VoiceCondType_Type__o *v30; // x23
  __int64 v31; // x1
  __int64 v32; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v34; // w22
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v36; // x27
  _BOOL4 v37; // w25
  struct ServantVoiceCond_array *conds; // x26
  __int64 v39; // x8
  __int64 v40; // x21
  ServantVoiceCond_o *v41; // x24
  int32_t condType; // w28
  int64_t v43; // x19
  int v44; // w8
  _BOOL8 v45; // x0
  Il2CppObject *current; // x21
  _DWORD *monitor; // x22
  int v48; // w8
  unsigned int v49; // w24
  __int64 v50; // x8
  __int64 v52; // x0
  __int64 v53; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v54; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // [xsp+10h] [xbp-B0h]
  int64_t v56; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_VoiceCondType_Type__o *v59; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+50h] [xbp-70h] BYREF

  v6 = isEventDateCondOnly;
  if ( (byte_42177A4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, isEventDateCondOnly);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VoiceCondType_Type__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v18);
    sub_B0D8A4(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v19);
    sub_B0D8A4(&System_Collections_Generic_List_VoiceCondType_Type__TypeInfo, v20);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v21);
    sub_B0D8A4(&NetworkManager_TypeInfo, v22);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    byte_42177A4 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  isEventDateCondOnly,
                                                                                                  *(_QWORD *)&eventId);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v55,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v26 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B0D974(
                                                                   System_Collections_Generic_List_VoiceCondType_Type__TypeInfo,
                                                                   v24,
                                                                   v25);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v26,
    (const MethodInfo_2FB217C *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
  if ( !v26 )
    goto LABEL_39;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    14,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    13,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v26,
    19,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
  v30 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B0D974(
                                                                   System_Collections_Generic_List_VoiceCondType_Type__TypeInfo,
                                                                   v28,
                                                                   v29);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v30,
    (const MethodInfo_2FB217C *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
  if ( !v6 )
  {
    if ( !v30 )
      goto LABEL_39;
    System_Collections_Generic_List_VoiceCondType_Type___Add(
      v30,
      checkCondType,
      (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
  }
  v59 = v26;
  v54 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SvtVoiceInfo__TypeInfo,
                                                                                                  v31,
                                                                                                  v32);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v54,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v56 = Time;
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_39;
  v34 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v34 >= (int)max_length )
      break;
    if ( v34 >= max_length )
      goto LABEL_60;
    v36 = scriptJson->m_Items[v34];
    if ( !v36 )
      goto LABEL_39;
    v37 = v6;
    conds = v36->fields.conds;
    if ( conds )
    {
      v39 = *(_QWORD *)&conds->max_length;
      if ( v39 )
      {
        if ( (int)v39 >= 1 )
        {
          v40 = 0LL;
          while ( (unsigned int)v40 < (unsigned int)v39 )
          {
            v41 = conds->m_Items[v40];
            if ( !v41 )
              goto LABEL_39;
            condType = v41->fields.condType;
            Time = System_Collections_Generic_List_VoiceCondType_Type___Contains(
                     v59,
                     condType,
                     (const MethodInfo_2FB332C *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) == 0 )
            {
              if ( !v30 )
                goto LABEL_39;
              Time = System_Collections_Generic_List_VoiceCondType_Type___Contains(
                       v30,
                       condType,
                       (const MethodInfo_2FB332C *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
              if ( (Time & 1) == 0 )
                goto LABEL_38;
            }
            Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Time )
              goto LABEL_39;
            Time = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Time,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
            if ( !Time )
              goto LABEL_39;
            Time = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Time,
                              v41->fields.value,
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
            if ( !Time || v41->fields.value != eventId )
              goto LABEL_38;
            v43 = Time;
            Time = System_Collections_Generic_List_VoiceCondType_Type___Contains(
                     v59,
                     condType,
                     (const MethodInfo_2FB332C *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) != 0 )
            {
              v44 = *(_QWORD *)(v43 + 96) <= v56 ? 13 : 14;
              if ( condType == 19 )
                v44 = 19;
              if ( condType != v44 )
                goto LABEL_38;
            }
            LODWORD(v39) = conds->max_length;
            if ( (int)++v40 >= (int)v39 )
              goto LABEL_36;
          }
LABEL_60:
          v53 = sub_B0D9A8(Time);
          sub_B0D948(v53, 0LL);
        }
LABEL_36:
        Time = (int64_t)v54;
        if ( !v54 )
          goto LABEL_39;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v54,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
      }
    }
LABEL_38:
    ++v34;
    v6 = v37;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_39;
  }
  Time = (int64_t)v54;
  if ( !v54 )
LABEL_39:
    sub_B0D97C(Time);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v60,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v54,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v61 = v60;
LABEL_42:
  while ( 1 )
  {
    v45 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v61,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v45 )
      break;
    current = v61.fields.current;
    if ( !v61.fields.current )
      sub_B0D97C(v45);
    monitor = v61.fields.current[4].monitor;
    if ( !monitor )
      sub_B0D97C(v45);
    v48 = monitor[6];
    if ( v48 >= 1 )
    {
      v49 = 0;
      while ( 1 )
      {
        if ( v49 >= v48 )
        {
          v52 = sub_B0D9A8(v45);
          sub_B0D948(v52, 0LL);
        }
        v50 = *(_QWORD *)&monitor[2 * v49 + 8];
        if ( !v50 )
          sub_B0D97C(v45);
        if ( v6 )
          break;
        if ( !v30 )
          sub_B0D97C(v45);
        v45 = System_Collections_Generic_List_VoiceCondType_Type___Contains(
                v30,
                *(_DWORD *)(v50 + 16),
                (const MethodInfo_2FB332C *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
        if ( v45 )
          break;
        v48 = monitor[6];
        if ( (int)++v49 >= v48 )
          goto LABEL_42;
      }
      if ( !v55 )
        sub_B0D97C(0LL);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v55,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current[4].klass,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v61,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  return (System_Collections_Generic_List_ServantVoiceData____o *)v55;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventShopVoiceList_29958052(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_29945472(this, 9, labelName, 0LL, 1, v3);
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
  char v15; // w19
  __int64 v17; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42177A2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, id);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v7);
    byte_42177A2 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  EventRewardVoiceList = ServantVoiceEntity__getEventRewardVoiceList(this, (const MethodInfo *)id);
  if ( !EventRewardVoiceList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventRewardVoiceList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v19 = v18;
  do
  {
LABEL_13:
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v14 )
    {
      v15 = 0;
      current = 0LL;
      goto LABEL_16;
    }
    current = (ServantVoiceData_array *)v19.fields.current;
    if ( !v19.fields.current )
      sub_B0D97C(v14);
    monitor = (int)v19.fields.current[1].monitor;
  }
  while ( monitor < 1 );
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= monitor )
    {
      v17 = sub_B0D9A8(v14);
      sub_B0D948(v17, 0LL);
    }
    v12 = current->m_Items[v11];
    if ( !v12 )
      sub_B0D97C(v14);
    v13 = v12->fields.id;
    if ( !v13 )
      sub_B0D97C(0LL);
    v14 = System_String__Equals_43837244(v13, id, 0LL);
    if ( v14 )
      break;
    monitor = current->max_length;
    if ( (int)++v11 >= monitor )
      goto LABEL_13;
  }
  v15 = 2;
LABEL_16:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  if ( ((v15 + 2) & 3) != 0 )
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
  const MethodInfo *v9; // x5

  if ( (byte_4217793 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_CondType_Kind__Add__, labelName);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v6);
    byte_4217793 = 1;
  }
  v7 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B0D974(
                                                                  System_Collections_Generic_List_CondType_Kind__TypeInfo,
                                                                  labelName,
                                                                  method);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v7,
    (const MethodInfo_2FB217C *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v7 )
    sub_B0D97C(v8);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v7,
    81,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_CondType_Kind__Add__);
  return ServantVoiceEntity__getVoiceList_29945472(
           this,
           1,
           labelName,
           (System_Collections_Generic_List_CondType_Kind__o *)v7,
           0,
           v9);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getLevelUpVoiceList(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( this->fields.type == 2 && !System_String__IsNullOrEmpty(labelName, 0LL) )
    return ServantVoiceEntity__getVoiceList_29945472(this, 2, labelName, 0LL, 0, v5);
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
  const MethodInfo *v9; // x5

  if ( (byte_4217794 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_CondType_Kind__Add__, labelName);
    sub_B0D8A4(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v6);
    byte_4217794 = 1;
  }
  v7 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B0D974(
                                                                  System_Collections_Generic_List_CondType_Kind__TypeInfo,
                                                                  labelName,
                                                                  method);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v7,
    (const MethodInfo_2FB217C *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v7 )
    sub_B0D97C(v8);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v7,
    81,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_CondType_Kind__Add__);
  return ServantVoiceEntity__getVoiceList_29945472(
           this,
           2,
           labelName,
           (System_Collections_Generic_List_CondType_Kind__o *)v7,
           0,
           v9);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMasterMissionActionVoiceList(
        ServantVoiceEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  _BOOL8 isQuestClearState; // x0
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

  if ( (byte_421779F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v5);
    byte_421779F = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_31;
  v10 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v10 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v6;
    if ( v10 >= max_length )
    {
LABEL_33:
      v22 = sub_B0D9A8(isQuestClearState);
      sub_B0D948(v22, 0LL);
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
              if ( v6 )
              {
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v6,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v12->fields.infos,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
                break;
              }
LABEL_31:
              sub_B0D97C(isQuestClearState);
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


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMasterMissionVoiceList_29956212(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_29945472(this, 8, labelName, 0LL, 1, v3);
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
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t FriendShipRank; // w0
  int v29; // w22
  EventMissionProgressRequest_Argument_ProgressData_o *v30; // x1
  const MethodInfo_2FC56E8 *v31; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v33; // w23
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v35; // x27
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v37; // x8
  struct ServantVoiceCond_array *conds; // x11
  __int64 v39; // x8
  ServantVoiceCond_o *v40; // x9
  __int64 v41; // x9
  int v42; // w10
  ServantVoiceCond_o **m_Items; // x11
  ServantVoiceCond_o *v44; // x12
  int32_t condType; // w13
  _BOOL4 v46; // w14
  _BOOL4 v47; // w12
  int32_t id; // w26
  int32_t v50; // w25
  __int64 v51; // x0

  if ( (byte_421778B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&type);
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v15);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v16);
    sub_B0D8A4(&NetworkManager_TypeInfo, v17);
    sub_B0D8A4(&ServantLimitUpVoiceCache_TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_421778B = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  *(_QWORD *)&type,
                                                                                                  *(_QWORD *)&displayType);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v22 = ServantVoiceEntity__GetChangeLimitVoiceFriendshipLv(this, v21);
  v24 = v22 - 1;
  if ( v22 < 1 )
    goto LABEL_12;
  v25 = v22;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
    v29 = FriendShipRank;
    if ( displayType )
    {
      id = this->fields.id;
      if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      }
      if ( ServantLimitUpVoiceCache__IsLimitUpVoiceNormal(displayType, id, 0LL) )
        v29 = v24;
      if ( isPlayVoice )
      {
        v50 = this->fields.id;
        if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
        }
        ServantLimitUpVoiceCache__UpdateLimitUpVoice(displayType, v50, 0LL);
      }
    }
  }
  else
  {
LABEL_12:
    v29 = -1;
  }
  Instance = (int64_t)ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v23);
  if ( Instance )
  {
    if ( v20 )
    {
      v30 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(Instance + 64);
      v31 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      goto LABEL_16;
    }
LABEL_68:
    sub_B0D97C(Instance);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_68;
  v33 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v33 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v20;
    if ( v33 >= max_length )
      goto LABEL_69;
    v35 = scriptJson->m_Items[v33];
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_68;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !v35 )
      goto LABEL_68;
    infos = v35->fields.infos;
    if ( !infos )
      goto LABEL_68;
    if ( !infos->max_length )
      goto LABEL_69;
    v37 = infos->m_Items[0];
    if ( !v37 || !Instance )
      goto LABEL_68;
    Instance = VoicePlayCondMaster__isVoicePlay(
                 (VoicePlayCondMaster_o *)Instance,
                 this->fields.id,
                 v37->fields.id,
                 0LL,
                 -1LL,
                 genderType,
                 0LL);
    conds = v35->fields.conds;
    if ( conds )
    {
      v39 = *(_QWORD *)&conds->max_length;
      if ( v39 )
      {
        if ( !(_DWORD)v39 )
        {
LABEL_69:
          v51 = sub_B0D9A8(Instance);
          sub_B0D948(v51, 0LL);
        }
        v40 = conds->m_Items[0];
        if ( !v40 )
          goto LABEL_68;
        if ( v40->fields.condType == 11 )
          break;
      }
    }
LABEL_52:
    scriptJson = this->fields.scriptJson;
    ++v33;
    if ( !scriptJson )
      goto LABEL_68;
  }
  if ( v29 != -1 && (_DWORD)v39 != 1 )
  {
    if ( (int)v39 >= 1 )
    {
      v41 = 0LL;
      v42 = Instance & 1;
      m_Items = conds->m_Items;
      while ( 1 )
      {
        v44 = m_Items[v41];
        if ( !v44 )
          goto LABEL_68;
        condType = v44->fields.condType;
        v46 = condType == 22 && v44->fields.value >= v29;
        if ( (v46 & v42) != 0 )
          break;
        v47 = condType == 20 && v44->fields.value <= v29;
        if ( (v47 & v42) != 0 )
          break;
        if ( (int)++v41 >= (int)v39 )
          goto LABEL_52;
      }
      if ( !v20 )
        goto LABEL_68;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v20,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v35->fields.infos,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    }
    goto LABEL_52;
  }
  if ( (Instance & 1) == 0 )
    goto LABEL_52;
  if ( !v20 )
    goto LABEL_68;
  v30 = (EventMissionProgressRequest_Argument_ProgressData_o *)v35->fields.infos;
  v31 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__;
LABEL_16:
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v20, v30, v31);
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
  char v15; // w19
  __int64 v17; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42177A3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, id);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v7);
    byte_42177A3 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  VoiceList = ServantVoiceEntity__getVoiceList(this, 8, method);
  if ( !VoiceList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)VoiceList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v19 = v18;
  do
  {
LABEL_13:
    v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v14 )
    {
      v15 = 0;
      current = 0LL;
      goto LABEL_16;
    }
    current = (ServantVoiceData_array *)v19.fields.current;
    if ( !v19.fields.current )
      sub_B0D97C(v14);
    monitor = (int)v19.fields.current[1].monitor;
  }
  while ( monitor < 1 );
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= monitor )
    {
      v17 = sub_B0D9A8(v14);
      sub_B0D948(v17, 0LL);
    }
    v12 = current->m_Items[v11];
    if ( !v12 )
      sub_B0D97C(v14);
    v13 = v12->fields.id;
    if ( !v13 )
      sub_B0D97C(0LL);
    v14 = System_String__Equals_43837244(v13, id, 0LL);
    if ( v14 )
      break;
    monitor = current->max_length;
    if ( (int)++v11 >= monitor )
      goto LABEL_13;
  }
  v15 = 2;
LABEL_16:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  if ( ((v15 + 2) & 3) != 0 )
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x22
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v15; // w24
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v17; // x23
  struct ServantVoiceData_array *infos; // x9
  struct ServantVoiceCond_array *conds; // x8
  __int64 v20; // x26
  int v21; // w9
  ServantVoiceCond_o *v22; // x8
  struct ServantVoiceData_array *v23; // x8
  ServantVoiceData_o *v24; // x8
  const MethodInfo *v25; // x4
  __int64 v27; // x0

  if ( (byte_4217791 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&friendShipRank);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4217791 = 1;
  }
  if ( this->fields.type != 1 )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_ServantVoiceData____TypeInfo, v11, v12),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v13,
          (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_31:
    sub_B0D97C(Instance);
  }
  v15 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v15 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v13;
    if ( v15 >= max_length )
    {
LABEL_34:
      v27 = sub_B0D9A8(Instance);
      sub_B0D948(v27, 0LL);
    }
    v17 = scriptJson->m_Items[v15];
    if ( v17 )
    {
      infos = v17->fields.infos;
      if ( infos && *(_QWORD *)&infos->max_length )
      {
        conds = v17->fields.conds;
        if ( !conds )
          goto LABEL_31;
        v20 = 0LL;
        while ( 1 )
        {
          v21 = conds->max_length;
          if ( (int)v20 >= v21 )
            break;
          if ( (unsigned int)v20 >= v21 )
            goto LABEL_34;
          v22 = conds->m_Items[v20];
          if ( !v22 )
            goto LABEL_31;
          if ( v22->fields.condType == 3 && v22->fields.value == friendShipRank )
          {
            v23 = v17->fields.infos;
            if ( !v23 )
              goto LABEL_31;
            if ( !v23->max_length )
              goto LABEL_34;
            v24 = v23->m_Items[0];
            if ( !v24 || !MasterData_WarQuestSelectionMaster )
              goto LABEL_31;
            Instance = (WebViewManager_o *)VoicePlayCondMaster__isVoicePlay(
                                             MasterData_WarQuestSelectionMaster,
                                             this->fields.id,
                                             v24->fields.id,
                                             0LL,
                                             -1LL,
                                             -1,
                                             0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (WebViewManager_o *)ServantVoiceEntity__isAvailableMyRoomVoice(this, v17, 0, 1, v25);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v13 )
                  goto LABEL_31;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v13,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v17->fields.infos,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
              }
            }
          }
          conds = v17->fields.conds;
          ++v20;
          if ( !conds )
            goto LABEL_31;
        }
        scriptJson = this->fields.scriptJson;
      }
      ++v15;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x22
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v15; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v17; // x23
  struct ServantVoiceData_array *infos; // x8
  __int64 v19; // x9
  ServantVoiceData_o *v20; // x8
  const MethodInfo *v21; // x4
  struct ServantVoiceCond_array *conds; // x8
  __int64 v24; // x0

  if ( (byte_4217790 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&imageLimitCount);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4217790 = 1;
  }
  if ( this->fields.type != 1 )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_ServantVoiceData____TypeInfo, v11, v12),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v13,
          (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_22:
    sub_B0D97C(Instance);
  }
  v15 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v15 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v13;
    if ( (unsigned int)v15 >= max_length )
      goto LABEL_25;
    v17 = scriptJson->m_Items[v15];
    if ( !v17 )
      goto LABEL_22;
    infos = v17->fields.infos;
    if ( infos )
    {
      v19 = *(_QWORD *)&infos->max_length;
      if ( v19 )
      {
        if ( !(_DWORD)v19 )
        {
LABEL_25:
          v24 = sub_B0D9A8(Instance);
          sub_B0D948(v24, 0LL);
        }
        v20 = infos->m_Items[0];
        if ( !v20 || !MasterData_WarQuestSelectionMaster )
          goto LABEL_22;
        Instance = (WebViewManager_o *)VoicePlayCondMaster__isVoicePlay(
                                         MasterData_WarQuestSelectionMaster,
                                         this->fields.id,
                                         v20->fields.id,
                                         0LL,
                                         -1LL,
                                         -1,
                                         0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          conds = v17->fields.conds;
          if ( !conds )
            goto LABEL_22;
          if ( (int)conds->max_length < 1
            || (Instance = (WebViewManager_o *)ServantVoiceEntity__isAvailableMyRoomVoice(
                                                 this,
                                                 v17,
                                                 imageLimitCount,
                                                 0,
                                                 v21),
                ((unsigned __int8)Instance & 1) != 0) )
          {
            if ( !v13 )
              goto LABEL_22;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v13,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v17->fields.infos,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v15;
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

  return ServantVoiceEntity__getVoiceList_29945472(this, 7, labelName, 0LL, 1, v3);
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
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v38; // x9
  SvtVoiceInfo_o *v39; // x24
  ServantVoiceCond_array *v40; // x1
  System_String_o *v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_o *v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  int32_t v55; // w8
  il2cpp_array_size_t v56; // w28
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v58; // x26
  struct ServantVoiceData_array *infos; // x9
  __int64 v60; // x27
  int v61; // w8
  ServantVoiceData_o *v62; // x8
  System_String_array **v63; // x2
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
  __int64 v79; // x0

  if ( (byte_421778E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15969/*"_B050"*/, *(_QWORD *)&type);
    byte_421778E = 1;
  }
  *conds = 0LL;
  sub_B0D840(
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
  sub_B0D840((BattleServantConfConponent_o *)overwriteName, 0LL, v18, v19, v20, v21, v22, v23);
  *overwriteNameDefault = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)overwriteNameDefault, 0LL, v24, v25, v26, v27, v28, v29);
  *overwritePriority = 0;
  if ( this->fields.type != type )
    return;
  if ( !labelName )
    goto LABEL_26;
  v30 = System_String__EndsWith(labelName, (System_String_o *)StringLiteral_15969/*"_B050"*/, 0LL);
  scriptJson = this->fields.scriptJson;
  if ( v30 )
  {
    if ( scriptJson )
    {
      v38 = *(_QWORD *)&scriptJson->max_length;
      if ( !v38 )
        return;
      if ( !(_DWORD)v38 )
      {
LABEL_33:
        v79 = sub_B0D9A8(v30);
        sub_B0D948(v79, 0LL);
      }
      v39 = scriptJson->m_Items[0];
      if ( v39 )
      {
        v40 = v39->fields.conds;
        *conds = v40;
        sub_B0D840((BattleServantConfConponent_o *)conds, (System_Int32_array **)v40, v31, v32, v33, v34, v35, v36);
        *isInvalidVoiceList = v39->fields.isInvalidVoiceList;
        v41 = v39->fields.overwriteName;
        *overwriteName = v41;
        sub_B0D840(
          (BattleServantConfConponent_o *)overwriteName,
          (System_Int32_array **)v41,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47);
        v48 = v39->fields.overwriteNameDefault;
        *overwriteNameDefault = v48;
        sub_B0D840(
          (BattleServantConfConponent_o *)overwriteNameDefault,
          (System_Int32_array **)v48,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54);
        v55 = v39->fields.overwritePriority;
        goto LABEL_31;
      }
    }
LABEL_26:
    sub_B0D97C(v30);
  }
  if ( !scriptJson )
    goto LABEL_26;
  v56 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v56 >= (int)max_length )
      return;
    if ( v56 >= max_length )
      goto LABEL_33;
    v58 = scriptJson->m_Items[v56];
    if ( !v58 )
      goto LABEL_26;
    infos = v58->fields.infos;
    if ( infos )
      break;
LABEL_25:
    ++v56;
    if ( !scriptJson )
      goto LABEL_26;
  }
  v60 = 0LL;
  while ( 1 )
  {
    v61 = infos->max_length;
    if ( (int)v60 >= v61 )
    {
      scriptJson = this->fields.scriptJson;
      goto LABEL_25;
    }
    if ( (unsigned int)v60 >= v61 )
      goto LABEL_33;
    v62 = infos->m_Items[v60];
    if ( !v62 )
      goto LABEL_26;
    v30 = System_String__Equals_43837244(labelName, v62->fields.id, 0LL);
    if ( v30 )
      break;
    infos = v58->fields.infos;
    ++v60;
    if ( !infos )
      goto LABEL_26;
  }
  v69 = v58->fields.conds;
  *conds = v69;
  sub_B0D840((BattleServantConfConponent_o *)conds, (System_Int32_array **)v69, v63, v64, v65, v66, v67, v68);
  *isInvalidVoiceList = v58->fields.isInvalidVoiceList;
  if ( !isMaterial
    || (materialOverwriteName = v58->fields.materialOverwriteName,
        *overwriteName = materialOverwriteName,
        sub_B0D840(
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
    v77 = v58->fields.overwriteName;
    *overwriteName = v77;
    sub_B0D840((BattleServantConfConponent_o *)overwriteName, (System_Int32_array **)v77, v70, v71, v72, v73, v74, v75);
  }
  v78 = v58->fields.overwriteNameDefault;
  *overwriteNameDefault = v78;
  sub_B0D840(
    (BattleServantConfConponent_o *)overwriteNameDefault,
    (System_Int32_array **)v78,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v55 = v58->fields.overwritePriority;
LABEL_31:
  *overwritePriority = v55;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getRankUpFriendShip(
        ServantVoiceEntity_o *this,
        int32_t friendShipRank,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  return ServantVoiceEntity__getVoiceList_29944888(this, 1, 3, friendShipRank, 0LL, -1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getSpecificLimitCntUpVoiceList(
        ServantVoiceEntity_o *this,
        int32_t limitCount,
        System_String_o *playVoiceLabel,
        int32_t genderType,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return ServantVoiceEntity__getVoiceList_29944888(this, 2, 9, limitCount, playVoiceLabel, genderType, v5);
}


int32_t __fastcall ServantVoiceEntity__getSvtIdfromVoiceAssetName(System_String_o *assetName, const MethodInfo *method)
{
  System_String_array *v3; // x0
  __int64 v5; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4217786 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, method);
    byte_4217786 = 1;
  }
  result = 0;
  v3 = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !v3 )
    goto LABEL_13;
  if ( !v3->max_length )
  {
    v5 = sub_B0D9A8(v3);
    sub_B0D948(v5, 0LL);
  }
  LOWORD(v3->m_Items[0]) = 95;
  if ( !assetName || (v3 = System_String__Split(assetName, (System_Char_array *)v3, 0LL), result = 0, !v3) )
LABEL_13:
    sub_B0D97C(v3);
  if ( v3->max_length != 2 )
    return 0;
  if ( System_Int32__TryParse(v3->m_Items[1], &result, 0LL) )
    return result;
  return 0;
}


System_String_o *__fastcall ServantVoiceEntity__getVoiceAssetName(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  return ServantVoiceEntity__getVoiceAssetName_29941680(this->fields.id, method);
}


System_String_o *__fastcall ServantVoiceEntity__getVoiceAssetName_29941680(int32_t svtId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = svtId;
  if ( (byte_4217785 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3976/*"ChrVoice_"*/, method);
    byte_4217785 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_43849904((System_String_o *)StringLiteral_3976/*"ChrVoice_"*/, v2, 0LL);
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
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v10; // x21
  int max_length; // w9
  SvtVoiceInfo_o *v12; // x8
  __int64 v14; // x0

  if ( (byte_4217787 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, *(_QWORD *)&type);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v6);
    byte_4217787 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                 *(_QWORD *)&type,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_11:
    sub_B0D97C(v8);
  v10 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v10 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
    if ( (unsigned int)v10 >= max_length )
    {
      v14 = sub_B0D9A8(v8);
      sub_B0D948(v14, 0LL);
    }
    v12 = scriptJson->m_Items[v10];
    if ( v12 )
    {
      if ( v7 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v12->fields.infos,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
        scriptJson = this->fields.scriptJson;
        ++v10;
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
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v18; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v20; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v22; // x26
  struct ServantVoiceCond_array *conds; // x8
  __int64 v24; // x9
  ServantVoiceCond_o *v25; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v27; // x8
  __int64 v29; // x0

  if ( (byte_4217789 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4217789 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  *(_QWORD *)&type,
                                                                                                  *(_QWORD *)&condType);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v18);
  if ( Instance )
  {
    if ( v15 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v15,
        *((EventMissionProgressRequest_Argument_ProgressData_o **)Instance + 8),
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      return (System_Collections_Generic_List_ServantVoiceData____o *)v15;
    }
LABEL_27:
    sub_B0D97C(Instance);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_27;
  v20 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v20 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v15;
    if ( (unsigned int)v20 >= max_length )
      goto LABEL_29;
    v22 = scriptJson->m_Items[v20];
    if ( !v22 )
      goto LABEL_27;
    conds = v22->fields.conds;
    if ( conds )
    {
      v24 = *(_QWORD *)&conds->max_length;
      if ( v24 )
      {
        if ( !(_DWORD)v24 )
          goto LABEL_29;
        v25 = conds->m_Items[0];
        if ( !v25 )
          goto LABEL_27;
        if ( v25->fields.condType == condType )
        {
          infos = v22->fields.infos;
          if ( !infos )
            goto LABEL_27;
          if ( !infos->max_length )
          {
LABEL_29:
            v29 = sub_B0D9A8(Instance);
            sub_B0D948(v29, 0LL);
          }
          v27 = infos->m_Items[0];
          if ( !v27 || !MasterData_WarQuestSelectionMaster )
            goto LABEL_27;
          Instance = (void *)VoicePlayCondMaster__isVoicePlay(
                               MasterData_WarQuestSelectionMaster,
                               this->fields.id,
                               v27->fields.id,
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
              (EventMissionProgressRequest_Argument_ProgressData_o *)v22->fields.infos,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v20;
    if ( !scriptJson )
      goto LABEL_27;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList_29944888(
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
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x24
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x23
  const MethodInfo *v22; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned __int64 v24; // x25
  unsigned __int64 max_length; // x9
  SvtVoiceInfo_o *v26; // x27
  struct ServantVoiceCond_array *conds; // x9
  __int64 v28; // x28
  int v29; // w8
  ServantVoiceCond_o *v30; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v32; // x8
  __int64 v34; // x0

  if ( (byte_421778C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_421778C = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v22);
  if ( Instance )
  {
    if ( v21 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v21,
        *((EventMissionProgressRequest_Argument_ProgressData_o **)Instance + 8),
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      return (System_Collections_Generic_List_ServantVoiceData____o *)v21;
    }
LABEL_35:
    sub_B0D97C(Instance);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_35;
  v24 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (__int64)v24 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v21;
    if ( v24 >= max_length )
    {
LABEL_37:
      v34 = sub_B0D9A8(Instance);
      sub_B0D948(v34, 0LL);
    }
    v26 = scriptJson->m_Items[v24];
    if ( v26 )
    {
      conds = v26->fields.conds;
      if ( conds )
      {
        v28 = 0LL;
        while ( 1 )
        {
          v29 = conds->max_length;
          if ( (int)v28 >= v29 )
            break;
          if ( (unsigned int)v28 >= v29 )
            goto LABEL_37;
          v30 = conds->m_Items[v28];
          if ( !v30 )
            goto LABEL_35;
          if ( v30->fields.condType == condType )
          {
            if ( condType != 3 && condType != 23 && condType != 9 )
              goto LABEL_29;
            if ( v30->fields.value == condValue )
            {
              infos = v26->fields.infos;
              if ( !infos )
                goto LABEL_35;
              if ( !infos->max_length )
                goto LABEL_37;
              v32 = infos->m_Items[0];
              if ( !v32 || !MasterData_WarQuestSelectionMaster )
                goto LABEL_35;
              Instance = (void *)VoicePlayCondMaster__isVoicePlay(
                                   MasterData_WarQuestSelectionMaster,
                                   this->fields.id,
                                   v32->fields.id,
                                   0LL,
                                   -1LL,
                                   genderType,
                                   0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
LABEL_29:
                if ( !v21 )
                  goto LABEL_35;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v21,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v26->fields.infos,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
              }
            }
          }
          conds = v26->fields.conds;
          ++v28;
          if ( !conds )
            goto LABEL_35;
        }
        scriptJson = this->fields.scriptJson;
      }
    }
    ++v24;
    if ( !scriptJson )
      goto LABEL_35;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList_29945472(
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v22; // x9
  SvtVoiceInfo_o *v23; // x8
  struct ServantVoiceData_array *infos; // x1
  il2cpp_array_size_t v25; // w26
  _BOOL4 v26; // w24
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v28; // x25
  struct ServantVoiceData_array *v29; // x9
  __int64 v30; // x27
  int v31; // w8
  ServantVoiceData_o *v32; // x28
  __int64 v34; // x0

  if ( (byte_421778D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&StringLiteral_15969/*"_B050"*/, v15);
    byte_421778D = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                                                                  v18,
                                                                                                  v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !labelName )
    goto LABEL_40;
  Instance = (WebViewManager_o *)System_String__EndsWith(labelName, (System_String_o *)StringLiteral_15969/*"_B050"*/, 0LL);
  scriptJson = this->fields.scriptJson;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( scriptJson )
    {
      v22 = *(_QWORD *)&scriptJson->max_length;
      if ( !v22 )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v20;
      if ( !(_DWORD)v22 )
      {
LABEL_41:
        v34 = sub_B0D9A8(Instance);
        sub_B0D948(v34, 0LL);
      }
      v23 = scriptJson->m_Items[0];
      if ( v23 )
      {
        infos = v23->fields.infos;
        if ( !infos || !*(_QWORD *)&infos->max_length )
          return (System_Collections_Generic_List_ServantVoiceData____o *)v20;
        if ( v20 )
          goto LABEL_38;
      }
    }
LABEL_40:
    sub_B0D97C(Instance);
  }
  if ( !scriptJson )
    goto LABEL_40;
  v25 = 0;
  v26 = (unsigned int)(type - 1) < 2 && isCheckPlayCond;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v25 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v20;
    if ( v25 >= max_length )
      goto LABEL_41;
    v28 = scriptJson->m_Items[v25];
    if ( !v28 )
      goto LABEL_40;
    v29 = v28->fields.infos;
    if ( v29 )
      break;
LABEL_34:
    ++v25;
    if ( !scriptJson )
      goto LABEL_40;
  }
  v30 = 0LL;
  while ( 1 )
  {
    v31 = v29->max_length;
    if ( (int)v30 >= v31 )
    {
      scriptJson = this->fields.scriptJson;
      goto LABEL_34;
    }
    if ( (unsigned int)v30 >= v31 )
      goto LABEL_41;
    v32 = v29->m_Items[v30];
    if ( !v32 )
      goto LABEL_40;
    Instance = (WebViewManager_o *)System_String__Equals_43837244(labelName, v32->fields.id, 0LL);
    if ( !v26 )
      break;
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_40;
      Instance = (WebViewManager_o *)VoicePlayCondMaster__isVoicePlay(
                                       MasterData_WarQuestSelectionMaster,
                                       this->fields.id,
                                       v32->fields.id,
                                       disableCondTypeList,
                                       -1LL,
                                       -1,
                                       0LL);
      break;
    }
LABEL_31:
    v29 = v28->fields.infos;
    ++v30;
    if ( !v29 )
      goto LABEL_40;
  }
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_31;
  if ( !v20 )
    goto LABEL_40;
  infos = v28->fields.infos;
LABEL_38:
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v20,
    (EventMissionProgressRequest_Argument_ProgressData_o *)infos,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
  return (System_Collections_Generic_List_ServantVoiceData____o *)v20;
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
  __int64 v11; // x1
  UserGameEntity_o *SelfUserGame; // x20
  DataManager_o *Instance; // x0
  UserServantMaster_o *v14; // x22
  UserServantEntity_o *Entity; // x20
  UserServantEntity_array *v16; // x22
  int32_t FriendshipRank; // w0
  const MethodInfo *v18; // x2
  struct ServantVoiceCond_array *conds; // x25
  int max_length; // w8
  int32_t v21; // w24
  int v22; // w26
  bool v23; // w21
  ServantVoiceCond_o *v24; // x23
  int32_t value; // w23
  ServantVoiceEntity_o *v26; // x0
  UserGameEntity_o *v27; // x2
  __int64 v29; // x0
  const MethodInfo *v30; // [xsp+0h] [xbp-60h]

  if ( (byte_421779A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, info);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B0D8A4(&VoiceCondType_TypeInfo, v11);
    byte_421779A = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame
    || (v14 = (UserServantMaster_o *)Instance) == 0LL
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   SelfUserGame->fields.favoriteUserSvtId,
                   (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
        Instance = (DataManager_o *)UserServantMaster__getAllList(v14, 0LL),
        !Entity)
    || (v16 = (UserServantEntity_array *)Instance,
        FriendshipRank = UserServantEntity__getFriendshipRank(Entity, 0LL),
        Instance = (DataManager_o *)ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v18),
        !info)
    || (conds = info->fields.conds) == 0LL )
  {
LABEL_23:
    sub_B0D97C(Instance);
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
      v29 = sub_B0D9A8(Instance);
      sub_B0D948(v29, 0LL);
    }
    v24 = conds->m_Items[v22];
    if ( !v24 )
      goto LABEL_23;
    if ( v24->fields.condType == 23 )
    {
      value = v24->fields.value;
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      Instance = (DataManager_o *)VoiceCondType__IsSatisfyCostumeCondition(value, imageLimitCount, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        return 0;
    }
    else
    {
      v26 = (ServantVoiceEntity_o *)UserServantEntity__getFriendshipRank(Entity, 0LL);
      Instance = (DataManager_o *)ServantVoiceEntity__IsAvailableHomeAndGrowth(
                                    v26,
                                    v24,
                                    v27,
                                    Entity,
                                    v16,
                                    v21,
                                    (int32_t)v26,
                                    v23,
                                    v30);
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
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v11; // x3

  if ( (byte_4217798 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, info);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4217798 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return ServantVoiceEntity__isAvailableVoice_29951660(this, info, Entity, v11);
}


bool __fastcall ServantVoiceEntity__isAvailableVoice_29951660(
        ServantVoiceEntity_o *this,
        SvtVoiceInfo_o *info,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  UserServantEntity_array *AllList; // x20
  int32_t FriendshipRank; // w0
  const MethodInfo *v12; // x2
  struct ServantVoiceCond_array *conds; // x25
  int max_length; // w8
  int32_t v15; // w21
  unsigned int v16; // w26
  ServantVoiceCond_o *v17; // x23
  int32_t condType; // w22
  ServantVoiceEntity_o *v19; // x0
  UserGameEntity_o *v20; // x2
  int32_t value; // w23
  int32_t v22; // w2
  int32_t v23; // w0
  int32_t v24; // w1
  int32_t v25; // w23
  int32_t LimitCount; // w24
  __int64 v27; // x0
  const MethodInfo *v29; // [xsp+0h] [xbp-60h]

  if ( (byte_4217799 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, info);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B0D8A4(&VoiceCondType_TypeInfo, v8);
    byte_4217799 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_27;
  UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_28;
  AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
  FriendshipRank = UserServantEntity__getFriendshipRank(userSvtEntity, 0LL);
  Instance = (DataManager_o *)ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v12);
  if ( !info )
    goto LABEL_28;
  conds = info->fields.conds;
  if ( !conds )
    goto LABEL_28;
  max_length = conds->max_length;
  if ( max_length < 1 )
  {
LABEL_27:
    LOBYTE(Instance) = 0;
    return (char)Instance;
  }
  v15 = (int)Instance;
  v16 = 0;
  while ( 2 )
  {
    if ( v16 >= max_length )
    {
      v27 = sub_B0D9A8(Instance);
      sub_B0D948(v27, 0LL);
    }
    v17 = conds->m_Items[v16];
    if ( !v17 )
LABEL_28:
      sub_B0D97C(Instance);
    condType = v17->fields.condType;
    Instance = 0LL;
    switch ( condType )
    {
      case 8:
        goto LABEL_20;
      case 9:
      case 10:
      case 17:
        return (char)Instance;
      case 11:
      case 12:
      case 15:
      case 16:
        goto LABEL_13;
      case 13:
      case 14:
        value = v17->fields.value;
        if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !VoiceCondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
        }
        v22 = -1;
        v23 = condType;
        v24 = value;
        goto LABEL_19;
      default:
        if ( (unsigned int)(condType - 24) > 2 )
        {
LABEL_13:
          v19 = (ServantVoiceEntity_o *)UserServantEntity__getFriendshipRank(userSvtEntity, 0LL);
          Instance = (DataManager_o *)ServantVoiceEntity__IsAvailableHomeAndGrowth(
                                        v19,
                                        v17,
                                        v20,
                                        userSvtEntity,
                                        AllList,
                                        v15,
                                        (int32_t)v19,
                                        0,
                                        v29);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_27;
        }
        else
        {
          v25 = v17->fields.value;
          LimitCount = UserServantEntity__getLimitCount(userSvtEntity, 0LL);
          if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !VoiceCondType_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
          }
          v23 = condType;
          v24 = v25;
          v22 = LimitCount;
LABEL_19:
          Instance = (DataManager_o *)VoiceCondType__IsSatisfyCondition(v23, v24, v22, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_27;
        }
LABEL_20:
        max_length = conds->max_length;
        if ( (int)++v16 < max_length )
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
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42177A1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_42177A1 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                eventId,
                                (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return *(_QWORD *)&entity->fields.eventId <= time;
LABEL_9:
    sub_B0D97C(Instance);
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
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42177A0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&questId);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_42177A0 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    sub_B0D97C(Instance);
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
  UserServantEntity_o *Entity; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4217795 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4217795 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return ServantVoiceEntity__lotteryLevelUpVoice_29949808(this, Entity, voiceId, v11);
}


ServantVoiceData_array *__fastcall ServantVoiceEntity__lotteryLevelUpVoice_29949808(
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
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v28; // x28
  UserServantEntity_Fields *p_fields; // x27
  __int64 v30; // x9
  SvtVoiceInfo_o *v31; // x24
  struct ServantVoiceData_array *infos; // x8
  __int64 v33; // x9
  ServantVoiceData_o *v34; // x8
  ServantVoiceData_o *v35; // x8
  __int128 v36; // q1
  int32_t id; // w25
  System_String_o *v38; // x26
  const MethodInfo *v39; // x3
  struct ServantVoiceCond_array *conds; // x8
  WeightRate_int__o *v42; // x21
  int size; // w23
  int32_t i; // w22
  int v45; // w8
  __int64 v46; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v47; // x8
  __int64 v48; // x8
  __int64 v49; // x8
  unsigned int v50; // w28
  SvtVoiceInfo_o *v51; // x24
  struct ServantVoiceData_array *v52; // x8
  __int64 v53; // x9
  ServantVoiceData_o *v54; // x8
  __int128 v55; // q1
  int32_t v56; // w25
  System_String_o *v57; // x26
  const MethodInfo *v58; // x3
  struct ServantVoiceCond_array *v59; // x8
  int32_t v60; // w0
  EventMissionProgressRequest_Argument_ProgressData_o *v61; // x8
  __int64 v62; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+40h] [xbp-70h]

  if ( (byte_4217797 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, userServantEntity);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B0D8A4(&ServantVoiceData___TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&Method_WeightRate_int___ctor__, v15);
    sub_B0D8A4(&Method_WeightRate_int__getData__, v16);
    sub_B0D8A4(&Method_WeightRate_int__getTotalWeight__, v17);
    sub_B0D8A4(&Method_WeightRate_int__setWeight__, v18);
    sub_B0D8A4(&WeightRate_int__TypeInfo, v19);
    byte_4217797 = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SvtVoiceInfo__TypeInfo,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_79;
  v28 = 0LL;
  p_fields = &userServantEntity->fields;
  while ( 1 )
  {
    v30 = *(_QWORD *)&scriptJson->max_length;
    if ( (int)v28 >= (int)v30 )
      break;
    if ( (unsigned int)v28 >= (unsigned int)v30 )
      goto LABEL_80;
    v31 = scriptJson->m_Items[v28];
    if ( !v31 )
      goto LABEL_79;
    infos = v31->fields.infos;
    if ( infos )
    {
      v33 = *(_QWORD *)&infos->max_length;
      if ( v33 )
      {
        if ( voiceId )
        {
          if ( !(_DWORD)v33 )
            goto LABEL_80;
          v34 = infos->m_Items[0];
          if ( !v34 )
            goto LABEL_79;
          Instance = System_String__op_Equality(v34->fields.id, voiceId, 0LL);
          if ( (Instance & 1) != 0 )
            goto LABEL_17;
        }
        else
        {
          if ( !(_DWORD)v33 )
            goto LABEL_80;
          v35 = infos->m_Items[0];
          if ( !v35 )
            goto LABEL_79;
          v36 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          id = this->fields.id;
          v38 = v35->fields.id;
          *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
          *(_OWORD *)&v65.fields.fakeValue = v36;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v64 = v65;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v64, 0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_79;
          Instance = VoicePlayCondMaster__isVoicePlay(
                       MasterData_WarQuestSelectionMaster,
                       id,
                       v38,
                       0LL,
                       Instance,
                       -1,
                       0LL);
          if ( (Instance & 1) != 0 )
          {
            conds = v31->fields.conds;
            if ( conds )
            {
              if ( *(_QWORD *)&conds->max_length )
              {
                Instance = ServantVoiceEntity__isAvailableVoice_29951660(this, v31, userServantEntity, v39);
                if ( (Instance & 1) != 0 )
                {
LABEL_17:
                  if ( !v24 )
                    goto LABEL_79;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v24,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
                }
              }
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v28;
    if ( !scriptJson )
      goto LABEL_79;
  }
  if ( !v24 )
    goto LABEL_79;
  if ( !v24->fields._size )
  {
    if ( !voiceId )
      return (ServantVoiceData_array *)sub_B0D8BC(ServantVoiceData___TypeInfo, 0LL);
    if ( (int)v30 >= 1 )
    {
      v50 = 0;
      while ( v50 < (unsigned int)v30 )
      {
        v51 = scriptJson->m_Items[v50];
        if ( !v51 )
          goto LABEL_79;
        v52 = v51->fields.infos;
        if ( v52 )
        {
          v53 = *(_QWORD *)&v52->max_length;
          if ( v53 )
          {
            if ( !(_DWORD)v53 )
              break;
            v54 = v52->m_Items[0];
            if ( !v54 )
              goto LABEL_79;
            v55 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            v56 = this->fields.id;
            v57 = v54->fields.id;
            *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v65.fields.fakeValue = v55;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v63 = v65;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v63, 0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_79;
            Instance = VoicePlayCondMaster__isVoicePlay(
                         MasterData_WarQuestSelectionMaster,
                         v56,
                         v57,
                         0LL,
                         Instance,
                         -1,
                         0LL);
            if ( (Instance & 1) != 0 )
            {
              v59 = v51->fields.conds;
              if ( v59 )
              {
                if ( *(_QWORD *)&v59->max_length )
                {
                  Instance = ServantVoiceEntity__isAvailableVoice_29951660(this, v51, userServantEntity, v58);
                  if ( (Instance & 1) != 0 )
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v24,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v51,
                      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
                }
              }
            }
          }
        }
        scriptJson = this->fields.scriptJson;
        if ( !scriptJson )
          goto LABEL_79;
        LODWORD(v30) = scriptJson->max_length;
        if ( (int)++v50 >= (int)v30 )
          goto LABEL_70;
      }
LABEL_80:
      v62 = sub_B0D9A8(Instance);
      sub_B0D948(v62, 0LL);
    }
LABEL_70:
    if ( !v24->fields._size )
      return (ServantVoiceData_array *)sub_B0D8BC(ServantVoiceData___TypeInfo, 0LL);
  }
  v42 = (WeightRate_int__o *)sub_B0D974(WeightRate_int__TypeInfo, v25, v26);
  WeightRate_int____ctor(v42, (const MethodInfo_2ADF078 *)Method_WeightRate_int___ctor__);
  size = v24->fields._size;
  if ( size >= 1 )
  {
    if ( v42 )
    {
      for ( i = 0; i != size; ++i )
        WeightRate_int___setWeight(v42, 1, i, (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
      goto LABEL_38;
    }
    goto LABEL_79;
  }
LABEL_38:
  Instance = System_String__IsNullOrEmpty(voiceId, 0LL);
  if ( (Instance & 1) != 0 )
    goto LABEL_73;
  v45 = v24->fields._size;
  if ( v45 < 1 )
    goto LABEL_73;
  v46 = 0LL;
  while ( 1 )
  {
    if ( v45 <= (unsigned int)v46 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v47 = v24->fields._items->m_Items[v46];
    if ( !v47 )
      goto LABEL_79;
    v48 = *(_QWORD *)&v47[1].fields.targetId;
    if ( !v48 )
      goto LABEL_79;
    if ( !*(_DWORD *)(v48 + 24) )
      goto LABEL_80;
    v49 = *(_QWORD *)(v48 + 32);
    if ( !v49 )
      goto LABEL_79;
    Instance = System_String__op_Equality(*(System_String_o **)(v49 + 16), voiceId, 0LL);
    if ( (Instance & 1) != 0 )
      break;
    v45 = v24->fields._size;
    if ( (int)++v46 >= v45 )
      goto LABEL_73;
  }
  if ( (_DWORD)v46 == -1 )
  {
LABEL_73:
    if ( !v42 )
      goto LABEL_79;
    v60 = UnityEngine_Random__Range_34969060(0, v42->fields.totalweight, 0LL);
    Instance = WeightRate_int___getData(v42, v60, (const MethodInfo_2ADE6C4 *)Method_WeightRate_int__getData__);
    LODWORD(v46) = Instance;
  }
  if ( v24->fields._size <= (unsigned int)v46 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v61 = v24->fields._items->m_Items[(int)v46];
  if ( !v61 )
LABEL_79:
    sub_B0D97C(Instance);
  return *(ServantVoiceData_array **)&v61[1].fields.targetId;
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
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x21
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v16; // x26
  int max_length; // w9
  SvtVoiceInfo_o *v18; // x23
  struct ServantVoiceData_array *infos; // x8
  __int64 v20; // x9
  ServantVoiceData_o *v21; // x8
  __int128 v22; // q1
  int32_t id; // w24
  System_String_o *v24; // x25
  const MethodInfo *v25; // x3
  struct ServantVoiceCond_array *conds; // x8
  __int64 v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-70h]

  if ( (byte_4217796 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, userServantEntity);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4217796 = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v12, v13),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v14,
          (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_26:
    sub_B0D97C(Instance);
  }
  v16 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v16 >= max_length )
      return (System_Collections_Generic_List_SvtVoiceInfo__o *)v14;
    if ( (unsigned int)v16 >= max_length )
      goto LABEL_29;
    v18 = scriptJson->m_Items[v16];
    if ( !v18 )
      goto LABEL_26;
    infos = v18->fields.infos;
    if ( infos )
    {
      v20 = *(_QWORD *)&infos->max_length;
      if ( v20 )
      {
        if ( !(_DWORD)v20 )
        {
LABEL_29:
          v28 = sub_B0D9A8(Instance);
          sub_B0D948(v28, 0LL);
        }
        v21 = infos->m_Items[0];
        if ( !v21 )
          goto LABEL_26;
        v22 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        id = this->fields.id;
        v24 = v21->fields.id;
        *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v30.fields.fakeValue = v22;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v29 = v30;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v29, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_26;
        Instance = VoicePlayCondMaster__isVoicePlay(MasterData_WarQuestSelectionMaster, id, v24, 0LL, Instance, -1, 0LL);
        if ( (Instance & 1) != 0 )
        {
          conds = v18->fields.conds;
          if ( conds )
          {
            if ( *(_QWORD *)&conds->max_length )
            {
              Instance = ServantVoiceEntity__isAvailableVoice_29951660(this, v18, userServantEntity, v25);
              if ( (Instance & 1) != 0 )
              {
                if ( !v14 )
                  goto LABEL_26;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v14,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
              }
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v16;
    if ( !scriptJson )
      goto LABEL_26;
  }
}