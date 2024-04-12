void __fastcall ServantVoiceEntity___ctor(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B3344 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B3344 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantVoiceEntity__CreatePK(
        int32_t id,
        int32_t voicePrefix,
        int32_t type,
        const MethodInfo *method)
{
  if ( (byte_42B3322 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42B3322 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           voicePrefix,
           type,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantVoiceEntity__CreatePrimaryKey(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantVoiceEntity__CreatePK(this->fields.id, this->fields.voicePrefix, this->fields.type, v2);
}


int32_t __fastcall ServantVoiceEntity__FriendShipRankWithVoice(
        ServantVoiceEntity_o *this,
        int32_t rankNow,
        const MethodInfo *method)
{
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

  if ( (byte_42B3330 & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    byte_42B3330 = 1;
  }
  v5 = sub_B5299C(int___TypeInfo, (unsigned int)rankNow);
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
    sub_B52A5C(v5, v6);
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
              if ( (_DWORD)value == rankNow )
                return rankNow;
              if ( (int)value < rankNow )
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
          v19 = sub_B52A88(v5);
          sub_B52A28(v19, 0LL);
        }
      }
    }
LABEL_25:
    scriptJson = this->fields.scriptJson;
    ++v10;
    if ( !scriptJson )
      goto LABEL_26;
  }
  while ( --rankNow >= 0 )
  {
    if ( (unsigned int)rankNow >= *(_DWORD *)(v5 + 24) )
      goto LABEL_33;
    if ( *(int *)(v5 + 4LL * rankNow + 32) > 0 )
      return rankNow;
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
    sub_B52A5C(this, *(_QWORD *)&type);
  max_length = scriptJson->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
    {
LABEL_19:
      v14 = sub_B52A88(this);
      sub_B52A28(v14, 0LL);
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
    this = (ServantVoiceEntity_o *)System_String__Equals_44555656(labelName, v12->fields.id, 0LL);
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
    sub_B52A5C(this, method);
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
        v12 = sub_B52A88(this);
        sub_B52A28(v12, 0LL);
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
    return ServantVoiceEntity__getVoiceList_30976504(this, 3, labelName, 0LL, 1, v5);
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
      sub_B52A5C(IsNullOrEmpty, v6);
    v9 = 0LL;
    while ( 1 )
    {
      max_length = scriptJson->max_length;
      if ( (__int64)v9 >= (int)max_length )
        return 0LL;
      if ( v9 >= max_length )
      {
        v14 = sub_B52A88(IsNullOrEmpty);
        sub_B52A28(v14, 0LL);
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


System_String_o *__fastcall ServantVoiceEntity__GetSummonScriptId(
        ServantVoiceEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  VoicePlayCondMaster_o *v8; // x21
  __int64 v9; // x23
  int max_length; // w9
  SvtVoiceInfo_o *v11; // x8
  struct ServantVoiceData_array *infos; // x9
  ServantVoiceData_o *v13; // x9
  System_String_o *summonScript; // x22
  __int64 v16; // x0

  if ( (byte_42B3343 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B3343 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_16:
    sub_B52A5C(Instance, v6);
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
      v16 = sub_B52A88(Instance);
      sub_B52A28(v16, 0LL);
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
  int32_t condType; // w21
  int32_t v16; // w19
  int32_t v17; // w2
  int32_t v18; // w0
  int32_t v19; // w1
  int32_t v20; // w19
  int32_t value; // w19
  int32_t v23; // w20
  int32_t v24; // w20
  __int64 v25; // x21
  __int64 v26; // x22
  int32_t v27; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_42B3339 & 1) == 0 )
  {
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantVoiceEntity_o *)sub_B52984(&VoiceCondType_TypeInfo);
    byte_42B3339 = 1;
  }
  if ( !cond )
LABEL_51:
    sub_B52A5C(this, cond);
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
        v18 = 20;
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
        v18 = 3;
      }
LABEL_48:
      v19 = value;
      v17 = friendshipRankWithVoice;
      return VoiceCondType__IsSatisfyCondition(v18, v19, v17, 0LL);
    case 4:
      v23 = cond->fields.value;
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      return VoiceCondType__IsSatisfySvtGetCondition(v23, usrSvtList, 0LL);
    case 5:
      if ( !userSvtEntity )
        goto LABEL_51;
      v24 = cond->fields.value;
      v26 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v25 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v28.fields.currentCryptoKey = v26;
      *(_QWORD *)&v28.fields.fakeValue = v25;
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v28, 0LL);
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      return VoiceCondType__IsSatisfySvtGroupCondition(v24, v27, usrSvtList, 0LL);
    case 6:
    case 7:
    case 12:
      v16 = cond->fields.value;
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      v17 = -1;
      v18 = condType;
      v19 = v16;
      return VoiceCondType__IsSatisfyCondition(v18, v19, v17, 0LL);
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
      v18 = condType;
      goto LABEL_48;
    case 20:
    case 22:
      v20 = cond->fields.value;
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      v18 = condType;
      v19 = v20;
      v17 = friendshipRankNow;
      return VoiceCondType__IsSatisfyCondition(v18, v19, v17, 0LL);
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

  return ServantVoiceEntity__getVoiceList_30976504(this, 6, labelName, 0LL, 1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getBoxGachaVoiceList(
        ServantVoiceEntity_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  int64_t Time; // x21
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x22
  il2cpp_array_size_t v9; // w23
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v11; // x28
  struct ServantVoiceCond_array *conds; // x19
  __int64 v13; // x8
  __int64 v14; // x26
  ServantVoiceCond_o *v15; // x24
  unsigned int condType; // w8
  __int64 v18; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42B333A & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B333A = 1;
  }
  entity = 0LL;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_31:
    sub_B52A5C(Instance, v6);
  }
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v9 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v9 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v3;
    if ( v9 >= max_length )
      goto LABEL_33;
    v11 = scriptJson->m_Items[v9];
    if ( v11 )
    {
      conds = v11->fields.conds;
      if ( conds && (v13 = *(_QWORD *)&conds->max_length) != 0 )
      {
        if ( (int)v13 >= 1 )
        {
          v14 = 0LL;
          while ( (unsigned int)v14 < (unsigned int)v13 )
          {
            v15 = conds->m_Items[v14];
            if ( !v15 || !v8 )
              goto LABEL_31;
            Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                          v8,
                                          &entity,
                                          v15->fields.value,
                                          (const MethodInfo_23E2334 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_31;
              if ( Time <= (__int64)entity->fields.coordinate )
              {
                condType = v15->fields.condType;
                if ( condType <= 0x13 && ((1 << condType) & 0x86000) != 0 )
                {
                  if ( !v3 )
                    goto LABEL_31;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v3,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v11->fields.infos,
                    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
                }
              }
            }
            LODWORD(v13) = conds->max_length;
            if ( (int)++v14 >= (int)v13 )
              goto LABEL_30;
          }
LABEL_33:
          v18 = sub_B52A88(Instance);
          sub_B52A28(v18, 0LL);
        }
      }
      else
      {
        if ( !v3 )
          goto LABEL_31;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v11->fields.infos,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      }
LABEL_30:
      ++v9;
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


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getCondClearVoiceList(
        ServantVoiceEntity_o *this,
        int32_t type,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x21
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  VoicePlayCondMaster_o *v11; // x22
  __int64 v12; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v14; // x8
  WarBoardManager_TaskList_o *infos; // x23
  Il2CppObject *syncRoot; // x8
  __int64 v18; // x0

  if ( (byte_42B3326 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B3326 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_19:
    sub_B52A5C(Instance, v9);
  }
  v11 = (VoicePlayCondMaster_o *)Instance;
  v12 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v12 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
    if ( (unsigned int)v12 >= max_length )
      goto LABEL_22;
    v14 = scriptJson->m_Items[v12];
    if ( v14 )
    {
      infos = (WarBoardManager_TaskList_o *)v14->fields.infos;
      if ( infos )
      {
        if ( !infos->fields._size )
        {
LABEL_22:
          v18 = sub_B52A88(Instance);
          sub_B52A28(v18, 0LL);
        }
        syncRoot = infos->fields._syncRoot;
        if ( syncRoot )
        {
          if ( v11 )
          {
            Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(
                                          v11,
                                          svtId,
                                          (System_String_o *)syncRoot[1].klass,
                                          0LL,
                                          -1LL,
                                          -1,
                                          0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v7 )
                goto LABEL_19;
              Instance = (DataManager_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v7,
                                            infos,
                                            (const MethodInfo_2FF1A54 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v7,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)infos,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
            }
            scriptJson = this->fields.scriptJson;
            ++v12;
            if ( scriptJson )
              continue;
          }
        }
      }
    }
    goto LABEL_19;
  }
}


System_Collections_Generic_List_SvtVoiceInfo__o *__fastcall ServantVoiceEntity__getCondVoiceList(
        ServantVoiceEntity_o *this,
        int32_t type,
        int32_t condType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x21
  DataManager_o *Instance; // x0
  SvtVoiceInfo_o *v9; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v11; // x22
  int max_length; // w9
  struct ServantVoiceCond_array *conds; // x9
  __int64 v14; // x10
  ServantVoiceCond_o *v15; // x9
  __int64 v17; // x0

  if ( (byte_42B3328 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B3328 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_18:
    sub_B52A5C(Instance, v9);
  }
  v11 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v11 >= max_length )
      return (System_Collections_Generic_List_SvtVoiceInfo__o *)v7;
    if ( (unsigned int)v11 >= max_length )
      goto LABEL_21;
    v9 = scriptJson->m_Items[v11];
    if ( !v9 )
      goto LABEL_18;
    conds = v9->fields.conds;
    if ( conds )
    {
      v14 = *(_QWORD *)&conds->max_length;
      if ( v14 )
      {
        if ( !(_DWORD)v14 )
        {
LABEL_21:
          v17 = sub_B52A88(Instance);
          sub_B52A28(v17, 0LL);
        }
        v15 = conds->m_Items[0];
        if ( !v15 )
          goto LABEL_18;
        if ( v15->fields.condType == condType )
        {
          if ( !v7 )
            goto LABEL_18;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v7,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
          scriptJson = this->fields.scriptJson;
        }
      }
    }
    ++v11;
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
  if ( (byte_42B332D & 1) == 0 )
  {
    this = (ServantVoiceEntity_o *)sub_B52984(&StringLiteral_16028/*"_B050"*/);
    byte_42B332D = 1;
  }
  if ( v6->fields.type == type )
  {
    if ( !labelName )
      goto LABEL_25;
    this = (ServantVoiceEntity_o *)System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16028/*"_B050"*/, 0LL);
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
          v18 = sub_B52A88(this);
          sub_B52A28(v18, 0LL);
        }
        v9 = scriptJson->m_Items[0];
        if ( v9 )
          return v9->fields.conds;
LABEL_25:
        sub_B52A5C(this, *(_QWORD *)&type);
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
              this = (ServantVoiceEntity_o *)System_String__Equals_44555656(labelName, v17->fields.id, 0LL);
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

  return ServantVoiceEntity__getVoiceList_30975920(this, 2, 23, costumeId, 0LL, -1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getCostumeGetVoiceList(
        ServantVoiceEntity_o *this,
        int32_t costumeId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  return ServantVoiceEntity__getVoiceList_30975920(this, 2, 23, costumeId, 0LL, -1, v3);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v7; // w21
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v9; // x23
  struct ServantVoiceCond_array *conds; // x24
  __int64 v11; // x8
  __int64 v12; // x25
  ServantVoiceCond_o *v13; // x9
  __int64 v15; // x0

  if ( (byte_42B333C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_42B333C = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_19:
    sub_B52A5C(v4, v5);
  v7 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v7 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v3;
    if ( v7 >= max_length )
      goto LABEL_21;
    v9 = scriptJson->m_Items[v7];
    if ( v9 )
    {
      conds = v9->fields.conds;
      if ( conds )
      {
        v11 = *(_QWORD *)&conds->max_length;
        if ( v11 )
        {
          if ( (int)v11 >= 1 )
          {
            v12 = 0LL;
            while ( (unsigned int)v12 < (unsigned int)v11 )
            {
              v13 = conds->m_Items[v12];
              if ( !v13 )
                goto LABEL_19;
              if ( v13->fields.condType == 15 )
              {
                if ( !v3 )
                  goto LABEL_19;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v3,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v9->fields.infos,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
                v11 = *(_QWORD *)&conds->max_length;
              }
              if ( (int)++v12 >= (int)v11 )
                goto LABEL_18;
            }
LABEL_21:
            v15 = sub_B52A88(v4);
            sub_B52A28(v15, 0LL);
          }
        }
      }
LABEL_18:
      scriptJson = this->fields.scriptJson;
      ++v7;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v2; // x20
  DataManager_o *Time; // x0
  __int64 v4; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  DataManager_o *v6; // x21
  il2cpp_array_size_t v7; // w22
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v9; // x27
  struct ServantVoiceCond_array *conds; // x28
  __int64 v11; // x8
  __int64 i; // x19
  ServantVoiceCond_o *v13; // x24
  int32_t condType; // w8
  __int64 v16; // x0

  if ( (byte_42B333B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B333B = 1;
  }
  v2 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v2,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = (DataManager_o *)NetworkManager__getTime(0LL);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_33:
    sub_B52A5C(Time, v4);
  v6 = Time;
  v7 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v7 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v2;
    if ( v7 >= max_length )
    {
LABEL_35:
      v16 = sub_B52A88(Time);
      sub_B52A28(v16, 0LL);
    }
    v9 = scriptJson->m_Items[v7];
    if ( !v9 )
      goto LABEL_33;
    conds = v9->fields.conds;
    if ( conds && (v11 = *(_QWORD *)&conds->max_length) != 0 )
    {
      if ( (int)v11 >= 1 )
      {
        for ( i = 0LL; (int)i < (int)v11; ++i )
        {
          if ( (unsigned int)i >= (unsigned int)v11 )
            goto LABEL_35;
          v13 = conds->m_Items[i];
          Time = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_33;
          Time = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Time,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !v13 || !Time )
            goto LABEL_33;
          Time = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Time,
                                    v13->fields.value,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( Time )
          {
            condType = v13->fields.condType;
            if ( (__int64)Time->fields.masterLoadThreads <= (__int64)v6 )
            {
              if ( condType == 19 || condType == 13 )
              {
LABEL_26:
                if ( !v2 )
                  goto LABEL_33;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v2,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v9->fields.infos,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
              }
            }
            else if ( condType == 19 || condType == 14 )
            {
              goto LABEL_26;
            }
          }
          LODWORD(v11) = conds->max_length;
        }
      }
    }
    else
    {
      if ( !v2 )
        goto LABEL_33;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v2,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v9->fields.infos,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    }
    ++v7;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_33;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventRewardVoiceList_30986732(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_30976504(this, 5, labelName, 0LL, 1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventShopPurchaseVoiceList(
        ServantVoiceEntity_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return ServantVoiceEntity__getEventShopVoiceList(this, 0, eventId, 18, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventShopVoiceList(
        ServantVoiceEntity_o *this,
        bool isEventDateCondOnly,
        int32_t eventId,
        int32_t checkCondType,
        const MethodInfo *method)
{
  _BOOL4 v6; // w26
  System_Collections_Generic_List_VoiceCondType_Type__o *v7; // x22
  int64_t Time; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v10; // x23
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v12; // w22
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v14; // x27
  _BOOL4 v15; // w25
  struct ServantVoiceCond_array *conds; // x26
  __int64 v17; // x8
  __int64 v18; // x21
  ServantVoiceCond_o *v19; // x24
  int32_t condType; // w28
  int64_t v21; // x19
  int v22; // w8
  _BOOL8 v23; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x21
  _DWORD *monitor; // x22
  int v27; // w8
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v31; // x0
  __int64 v32; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // [xsp+10h] [xbp-B0h]
  int64_t v35; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_VoiceCondType_Type__o *v38; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+50h] [xbp-70h] BYREF

  v6 = isEventDateCondOnly;
  if ( (byte_42B3342 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_B52984(&Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_B52984(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B3342 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v7 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B52A54(System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v7,
    (const MethodInfo_305922C *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
  if ( !v7 )
    goto LABEL_39;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v7,
    14,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v7,
    13,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v7,
    19,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
  v10 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B52A54(System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v10,
    (const MethodInfo_305922C *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
  if ( !v6 )
  {
    if ( !v10 )
      goto LABEL_39;
    System_Collections_Generic_List_VoiceCondType_Type___Add(
      v10,
      checkCondType,
      (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
  }
  v38 = v7;
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v35 = Time;
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_39;
  v12 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v12 >= (int)max_length )
      break;
    if ( v12 >= max_length )
      goto LABEL_60;
    v14 = scriptJson->m_Items[v12];
    if ( !v14 )
      goto LABEL_39;
    v15 = v6;
    conds = v14->fields.conds;
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
              goto LABEL_39;
            condType = v19->fields.condType;
            Time = System_Collections_Generic_List_VoiceCondType_Type___Contains(
                     v38,
                     condType,
                     (const MethodInfo_305A3DC *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) == 0 )
            {
              if ( !v10 )
                goto LABEL_39;
              Time = System_Collections_Generic_List_VoiceCondType_Type___Contains(
                       v10,
                       condType,
                       (const MethodInfo_305A3DC *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
              if ( (Time & 1) == 0 )
                goto LABEL_38;
            }
            Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Time )
              goto LABEL_39;
            Time = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Time,
                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
            if ( !Time )
              goto LABEL_39;
            Time = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Time,
                              v19->fields.value,
                              (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
            if ( !Time || v19->fields.value != eventId )
              goto LABEL_38;
            v21 = Time;
            Time = System_Collections_Generic_List_VoiceCondType_Type___Contains(
                     v38,
                     condType,
                     (const MethodInfo_305A3DC *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) != 0 )
            {
              v22 = *(_QWORD *)(v21 + 96) <= v35 ? 13 : 14;
              if ( condType == 19 )
                v22 = 19;
              if ( condType != v22 )
                goto LABEL_38;
            }
            LODWORD(v17) = conds->max_length;
            if ( (int)++v18 >= (int)v17 )
              goto LABEL_36;
          }
LABEL_60:
          v32 = sub_B52A88(Time);
          sub_B52A28(v32, 0LL);
        }
LABEL_36:
        Time = (int64_t)v33;
        if ( !v33 )
          goto LABEL_39;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v33,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
      }
    }
LABEL_38:
    ++v12;
    v6 = v15;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_39;
  }
  Time = (int64_t)v33;
  if ( !v33 )
LABEL_39:
    sub_B52A5C(Time, v9);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v33,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v40 = v39;
LABEL_42:
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v23 )
      break;
    current = v40.fields.current;
    if ( !v40.fields.current )
      sub_B52A5C(v23, v24);
    monitor = v40.fields.current[4].monitor;
    if ( !monitor )
      sub_B52A5C(v23, v24);
    v27 = monitor[6];
    if ( v27 >= 1 )
    {
      v28 = 0;
      while ( 1 )
      {
        if ( v28 >= v27 )
        {
          v31 = sub_B52A88(v23);
          sub_B52A28(v31, 0LL);
        }
        v29 = *(_QWORD *)&monitor[2 * v28 + 8];
        if ( !v29 )
          sub_B52A5C(v23, v24);
        if ( v6 )
          break;
        if ( !v10 )
          sub_B52A5C(v23, v24);
        v23 = System_Collections_Generic_List_VoiceCondType_Type___Contains(
                v10,
                *(_DWORD *)(v29 + 16),
                (const MethodInfo_305A3DC *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
        if ( v23 )
          break;
        v27 = monitor[6];
        if ( (int)++v28 >= v27 )
          goto LABEL_42;
      }
      if ( !v34 )
        sub_B52A5C(0LL, v24);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v34,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current[4].klass,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v40,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  return (System_Collections_Generic_List_ServantVoiceData____o *)v34;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventShopVoiceList_30989084(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_30976504(this, 9, labelName, 0LL, 1, v3);
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
  System_Collections_Generic_List_ServantVoiceData____o *EventRewardVoiceList; // x0
  __int64 v6; // x1
  ServantVoiceData_array *current; // x20
  int monitor; // w8
  unsigned int v9; // w22
  ServantVoiceData_o *v10; // x8
  System_String_o *v11; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  char v14; // w19
  __int64 v16; // x0
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42B3340 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    byte_42B3340 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  EventRewardVoiceList = ServantVoiceEntity__getEventRewardVoiceList(this, (const MethodInfo *)id);
  if ( !EventRewardVoiceList )
    sub_B52A5C(0LL, v6);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventRewardVoiceList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v18 = v17;
  do
  {
LABEL_13:
    v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v12 )
    {
      v14 = 0;
      current = 0LL;
      goto LABEL_16;
    }
    current = (ServantVoiceData_array *)v18.fields.current;
    if ( !v18.fields.current )
      sub_B52A5C(v12, v13);
    monitor = (int)v18.fields.current[1].monitor;
  }
  while ( monitor < 1 );
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= monitor )
    {
      v16 = sub_B52A88(v12);
      sub_B52A28(v16, 0LL);
    }
    v10 = current->m_Items[v9];
    if ( !v10 )
      sub_B52A5C(v12, v13);
    v11 = v10->fields.id;
    if ( !v11 )
      sub_B52A5C(0LL, v13);
    v12 = System_String__Equals_44555656(v11, id, 0LL);
    if ( v12 )
      break;
    monitor = current->max_length;
    if ( (int)++v9 >= monitor )
      goto LABEL_13;
  }
  v14 = 2;
LABEL_16:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  if ( ((v14 + 2) & 3) != 0 )
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
  System_Collections_Generic_List_VoiceCondType_Type__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x5

  if ( (byte_42B3331 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_B52984(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    byte_42B3331 = 1;
  }
  v5 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B52A54(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v5,
    (const MethodInfo_305922C *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v5,
    81,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_CondType_Kind__Add__);
  return ServantVoiceEntity__getVoiceList_30976504(
           this,
           1,
           labelName,
           (System_Collections_Generic_List_CondType_Kind__o *)v5,
           0,
           v8);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getLevelUpVoiceList(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( this->fields.type == 2 && !System_String__IsNullOrEmpty(labelName, 0LL) )
    return ServantVoiceEntity__getVoiceList_30976504(this, 2, labelName, 0LL, 0, v5);
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
  System_Collections_Generic_List_VoiceCondType_Type__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x5

  if ( (byte_42B3332 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_B52984(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    byte_42B3332 = 1;
  }
  v5 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B52A54(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v5,
    (const MethodInfo_305922C *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v5,
    81,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_CondType_Kind__Add__);
  return ServantVoiceEntity__getVoiceList_30976504(
           this,
           2,
           labelName,
           (System_Collections_Generic_List_CondType_Kind__o *)v5,
           0,
           v8);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMasterMissionActionVoiceList(
        ServantVoiceEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  _BOOL8 isQuestClearState; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v8; // w21
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v10; // x23
  struct ServantVoiceCond_array *conds; // x24
  __int64 v12; // x10
  __int64 v13; // x25
  char v14; // w27
  char v15; // w8
  char v16; // w9
  ServantVoiceCond_o *v17; // x10
  int32_t condType; // w11
  __int64 v20; // x0

  if ( (byte_42B333D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_42B333D = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_31;
  v8 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v8 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v3;
    if ( v8 >= max_length )
    {
LABEL_33:
      v20 = sub_B52A88(isQuestClearState);
      sub_B52A28(v20, 0LL);
    }
    v10 = scriptJson->m_Items[v8];
    if ( !v10 )
      goto LABEL_31;
    conds = v10->fields.conds;
    if ( conds )
    {
      v12 = *(_QWORD *)&conds->max_length;
      if ( v12 )
      {
        if ( (int)v12 >= 1 )
        {
          v13 = 0LL;
          v14 = 0;
          v15 = 0;
          v16 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v13 >= (unsigned int)v12 )
              goto LABEL_33;
            v17 = conds->m_Items[v13];
            if ( !v17 )
              goto LABEL_31;
            condType = v17->fields.condType;
            switch ( condType )
            {
              case 16:
                goto LABEL_27;
              case 7:
                if ( (v15 & 1) == 0 )
                {
                  isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                        (ServantVoiceEntity_o *)isQuestClearState,
                                        v17->fields.value,
                                        v6);
                  if ( isQuestClearState )
                    goto LABEL_30;
                  v15 = 0;
                  goto LABEL_27;
                }
                if ( (v14 & 1) == 0 )
                  goto LABEL_30;
                isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                      (ServantVoiceEntity_o *)isQuestClearState,
                                      v17->fields.value,
                                      v6);
                if ( isQuestClearState )
                  goto LABEL_30;
                break;
              case 6:
                isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                      (ServantVoiceEntity_o *)isQuestClearState,
                                      v17->fields.value,
                                      v6);
                if ( !isQuestClearState )
                  goto LABEL_30;
                break;
              default:
                if ( (v16 & 1) == 0 )
                  goto LABEL_30;
                goto LABEL_27;
            }
            v14 = 1;
            v15 = 1;
LABEL_27:
            LODWORD(v12) = conds->max_length;
            ++v13;
            v16 = 1;
            if ( (int)v13 >= (int)v12 )
            {
              if ( v3 )
              {
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v3,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v10->fields.infos,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
                break;
              }
LABEL_31:
              sub_B52A5C(isQuestClearState, v5);
            }
          }
        }
      }
    }
LABEL_30:
    scriptJson = this->fields.scriptJson;
    ++v8;
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


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMasterMissionVoiceList_30987244(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_30976504(this, 8, labelName, 0LL, 1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMaxLimitVoiceList(
        ServantVoiceEntity_o *this,
        int32_t type,
        int32_t displayType,
        bool isPlayVoice,
        int32_t genderType,
        System_String_o *playVoiceLabel,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  const MethodInfo *v14; // x1
  int32_t v15; // w0
  const MethodInfo *v16; // x2
  int v17; // w27
  int32_t v18; // w26
  int64_t Instance; // x0
  __int64 v20; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t FriendShipRank; // w0
  int v23; // w22
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x1
  const MethodInfo_2FF1604 *v25; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v27; // w23
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v29; // x27
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v31; // x8
  struct ServantVoiceCond_array *conds; // x11
  __int64 v33; // x8
  ServantVoiceCond_o *v34; // x9
  __int64 v35; // x9
  int v36; // w10
  ServantVoiceCond_o **m_Items; // x11
  ServantVoiceCond_o *v38; // x12
  int32_t condType; // w13
  _BOOL4 v40; // w14
  _BOOL4 v41; // w12
  int32_t id; // w26
  int32_t v44; // w25
  __int64 v45; // x0

  if ( (byte_42B3329 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&ServantLimitUpVoiceCache_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B3329 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v15 = ServantVoiceEntity__GetChangeLimitVoiceFriendshipLv(this, v14);
  v17 = v15 - 1;
  if ( v15 < 1 )
    goto LABEL_12;
  v18 = v15;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  if ( FriendShipRank >= v18 )
  {
    v23 = FriendShipRank;
    if ( displayType )
    {
      id = this->fields.id;
      if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      }
      if ( ServantLimitUpVoiceCache__IsLimitUpVoiceNormal(displayType, id, 0LL) )
        v23 = v17;
      if ( isPlayVoice )
      {
        v44 = this->fields.id;
        if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
        }
        ServantLimitUpVoiceCache__UpdateLimitUpVoice(displayType, v44, 0LL);
      }
    }
  }
  else
  {
LABEL_12:
    v23 = -1;
  }
  Instance = (int64_t)ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v16);
  if ( Instance )
  {
    if ( v13 )
    {
      v24 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(Instance + 64);
      v25 = (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      goto LABEL_16;
    }
LABEL_68:
    sub_B52A5C(Instance, v20);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_68;
  v27 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v27 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v13;
    if ( v27 >= max_length )
      goto LABEL_69;
    v29 = scriptJson->m_Items[v27];
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_68;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !v29 )
      goto LABEL_68;
    infos = v29->fields.infos;
    if ( !infos )
      goto LABEL_68;
    if ( !infos->max_length )
      goto LABEL_69;
    v31 = infos->m_Items[0];
    if ( !v31 || !Instance )
      goto LABEL_68;
    Instance = VoicePlayCondMaster__isVoicePlay(
                 (VoicePlayCondMaster_o *)Instance,
                 this->fields.id,
                 v31->fields.id,
                 0LL,
                 -1LL,
                 genderType,
                 0LL);
    conds = v29->fields.conds;
    if ( conds )
    {
      v33 = *(_QWORD *)&conds->max_length;
      if ( v33 )
      {
        if ( !(_DWORD)v33 )
        {
LABEL_69:
          v45 = sub_B52A88(Instance);
          sub_B52A28(v45, 0LL);
        }
        v34 = conds->m_Items[0];
        if ( !v34 )
          goto LABEL_68;
        if ( v34->fields.condType == 11 )
          break;
      }
    }
LABEL_52:
    scriptJson = this->fields.scriptJson;
    ++v27;
    if ( !scriptJson )
      goto LABEL_68;
  }
  if ( v23 != -1 && (_DWORD)v33 != 1 )
  {
    if ( (int)v33 >= 1 )
    {
      v35 = 0LL;
      v36 = Instance & 1;
      m_Items = conds->m_Items;
      while ( 1 )
      {
        v38 = m_Items[v35];
        if ( !v38 )
          goto LABEL_68;
        condType = v38->fields.condType;
        v40 = condType == 22 && v38->fields.value >= v23;
        if ( (v40 & v36) != 0 )
          break;
        v41 = condType == 20 && v38->fields.value <= v23;
        if ( (v41 & v36) != 0 )
          break;
        if ( (int)++v35 >= (int)v33 )
          goto LABEL_52;
      }
      if ( !v13 )
        goto LABEL_68;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v13,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v29->fields.infos,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    }
    goto LABEL_52;
  }
  if ( (Instance & 1) == 0 )
    goto LABEL_52;
  if ( !v13 )
    goto LABEL_68;
  v24 = (EventMissionProgressRequest_Argument_ProgressData_o *)v29->fields.infos;
  v25 = (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__;
LABEL_16:
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v13, v24, v25);
  return (System_Collections_Generic_List_ServantVoiceData____o *)v13;
}


ServantVoiceData_array *__fastcall ServantVoiceEntity__getMstMissionVoiceListByName(
        ServantVoiceEntity_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList; // x0
  __int64 v6; // x1
  ServantVoiceData_array *current; // x20
  int monitor; // w8
  unsigned int v9; // w22
  ServantVoiceData_o *v10; // x8
  System_String_o *v11; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  char v14; // w19
  __int64 v16; // x0
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42B3341 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    byte_42B3341 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  VoiceList = ServantVoiceEntity__getVoiceList(this, 8, method);
  if ( !VoiceList )
    sub_B52A5C(0LL, v6);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)VoiceList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v18 = v17;
  do
  {
LABEL_13:
    v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v12 )
    {
      v14 = 0;
      current = 0LL;
      goto LABEL_16;
    }
    current = (ServantVoiceData_array *)v18.fields.current;
    if ( !v18.fields.current )
      sub_B52A5C(v12, v13);
    monitor = (int)v18.fields.current[1].monitor;
  }
  while ( monitor < 1 );
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= monitor )
    {
      v16 = sub_B52A88(v12);
      sub_B52A28(v16, 0LL);
    }
    v10 = current->m_Items[v9];
    if ( !v10 )
      sub_B52A5C(v12, v13);
    v11 = v10->fields.id;
    if ( !v11 )
      sub_B52A5C(0LL, v13);
    v12 = System_String__Equals_44555656(v11, id, 0LL);
    if ( v12 )
      break;
    monitor = current->max_length;
    if ( (int)++v9 >= monitor )
      goto LABEL_13;
  }
  v14 = 2;
LABEL_16:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  if ( ((v14 + 2) & 3) != 0 )
    return 0LL;
  else
    return current;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMyRoomFriendShipVoiceList(
        ServantVoiceEntity_o *this,
        int32_t friendShipRank,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x22
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v10; // w24
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v12; // x23
  struct ServantVoiceData_array *infos; // x9
  struct ServantVoiceCond_array *conds; // x8
  __int64 v15; // x26
  int v16; // w9
  ServantVoiceCond_o *v17; // x8
  struct ServantVoiceData_array *v18; // x8
  ServantVoiceData_o *v19; // x8
  const MethodInfo *v20; // x4
  __int64 v22; // x0

  if ( (byte_42B332F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B332F = 1;
  }
  if ( this->fields.type != 1 )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceData____TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v8,
          (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_31:
    sub_B52A5C(Instance, v6);
  }
  v10 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v10 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v8;
    if ( v10 >= max_length )
    {
LABEL_34:
      v22 = sub_B52A88(Instance);
      sub_B52A28(v22, 0LL);
    }
    v12 = scriptJson->m_Items[v10];
    if ( v12 )
    {
      infos = v12->fields.infos;
      if ( infos && *(_QWORD *)&infos->max_length )
      {
        conds = v12->fields.conds;
        if ( !conds )
          goto LABEL_31;
        v15 = 0LL;
        while ( 1 )
        {
          v16 = conds->max_length;
          if ( (int)v15 >= v16 )
            break;
          if ( (unsigned int)v15 >= v16 )
            goto LABEL_34;
          v17 = conds->m_Items[v15];
          if ( !v17 )
            goto LABEL_31;
          if ( v17->fields.condType == 3 && v17->fields.value == friendShipRank )
          {
            v18 = v12->fields.infos;
            if ( !v18 )
              goto LABEL_31;
            if ( !v18->max_length )
              goto LABEL_34;
            v19 = v18->m_Items[0];
            if ( !v19 || !MasterData_WarQuestSelectionMaster )
              goto LABEL_31;
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
              Instance = (WebViewManager_o *)ServantVoiceEntity__isAvailableMyRoomVoice(this, v12, 0, 1, v20);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v8 )
                  goto LABEL_31;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v8,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v12->fields.infos,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
              }
            }
          }
          conds = v12->fields.conds;
          ++v15;
          if ( !conds )
            goto LABEL_31;
        }
        scriptJson = this->fields.scriptJson;
      }
      ++v10;
      if ( scriptJson )
        continue;
    }
    goto LABEL_31;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMyRoomVoiceList(
        ServantVoiceEntity_o *this,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x22
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v10; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v12; // x23
  struct ServantVoiceData_array *infos; // x8
  __int64 v14; // x9
  ServantVoiceData_o *v15; // x8
  const MethodInfo *v16; // x4
  struct ServantVoiceCond_array *conds; // x8
  __int64 v19; // x0

  if ( (byte_42B332E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B332E = 1;
  }
  if ( this->fields.type != 1 )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceData____TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v8,
          (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_22:
    sub_B52A5C(Instance, v6);
  }
  v10 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v10 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v8;
    if ( (unsigned int)v10 >= max_length )
      goto LABEL_25;
    v12 = scriptJson->m_Items[v10];
    if ( !v12 )
      goto LABEL_22;
    infos = v12->fields.infos;
    if ( infos )
    {
      v14 = *(_QWORD *)&infos->max_length;
      if ( v14 )
      {
        if ( !(_DWORD)v14 )
        {
LABEL_25:
          v19 = sub_B52A88(Instance);
          sub_B52A28(v19, 0LL);
        }
        v15 = infos->m_Items[0];
        if ( !v15 || !MasterData_WarQuestSelectionMaster )
          goto LABEL_22;
        Instance = (WebViewManager_o *)VoicePlayCondMaster__isVoicePlay(
                                         MasterData_WarQuestSelectionMaster,
                                         this->fields.id,
                                         v15->fields.id,
                                         0LL,
                                         -1LL,
                                         -1,
                                         0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          conds = v12->fields.conds;
          if ( !conds )
            goto LABEL_22;
          if ( (int)conds->max_length < 1
            || (Instance = (WebViewManager_o *)ServantVoiceEntity__isAvailableMyRoomVoice(
                                                 this,
                                                 v12,
                                                 imageLimitCount,
                                                 0,
                                                 v16),
                ((unsigned __int8)Instance & 1) != 0) )
          {
            if ( !v8 )
              goto LABEL_22;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v8,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v12->fields.infos,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v10;
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

  return ServantVoiceEntity__getVoiceList_30976504(this, 7, labelName, 0LL, 1, v3);
}


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

  if ( (byte_42B332C & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16028/*"_B050"*/);
    byte_42B332C = 1;
  }
  *conds = 0LL;
  sub_B52920(
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
  sub_B52920((BattleServantConfConponent_o *)overwriteName, 0LL, v18, v19, v20, v21, v22, v23);
  *overwriteNameDefault = 0LL;
  sub_B52920((BattleServantConfConponent_o *)overwriteNameDefault, 0LL, v24, v25, v26, v27, v28, v29);
  *overwritePriority = 0;
  if ( this->fields.type != type )
    return;
  if ( !labelName )
    goto LABEL_26;
  v30 = System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16028/*"_B050"*/, 0LL);
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
        v80 = sub_B52A88(v30);
        sub_B52A28(v80, 0LL);
      }
      v40 = scriptJson->m_Items[0];
      if ( v40 )
      {
        v41 = v40->fields.conds;
        *conds = v41;
        sub_B52920((BattleServantConfConponent_o *)conds, (System_Int32_array **)v41, v32, v33, v34, v35, v36, v37);
        *isInvalidVoiceList = v40->fields.isInvalidVoiceList;
        v42 = v40->fields.overwriteName;
        *overwriteName = v42;
        sub_B52920(
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
        sub_B52920(
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
    sub_B52A5C(v30, v31);
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
    v30 = System_String__Equals_44555656(labelName, v63->fields.id, 0LL);
    if ( v30 )
      break;
    infos = v59->fields.infos;
    ++v61;
    if ( !infos )
      goto LABEL_26;
  }
  v70 = v59->fields.conds;
  *conds = v70;
  sub_B52920((BattleServantConfConponent_o *)conds, (System_Int32_array **)v70, v64, v65, v66, v67, v68, v69);
  *isInvalidVoiceList = v59->fields.isInvalidVoiceList;
  if ( !isMaterial
    || (materialOverwriteName = v59->fields.materialOverwriteName,
        *overwriteName = materialOverwriteName,
        sub_B52920(
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
    sub_B52920((BattleServantConfConponent_o *)overwriteName, (System_Int32_array **)v78, v71, v72, v73, v74, v75, v76);
  }
  v79 = v59->fields.overwriteNameDefault;
  *overwriteNameDefault = v79;
  sub_B52920(
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

  return ServantVoiceEntity__getVoiceList_30975920(this, 1, 3, friendShipRank, 0LL, -1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getSpecificLimitCntUpVoiceList(
        ServantVoiceEntity_o *this,
        int32_t limitCount,
        System_String_o *playVoiceLabel,
        int32_t genderType,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return ServantVoiceEntity__getVoiceList_30975920(this, 2, 9, limitCount, playVoiceLabel, genderType, v5);
}


int32_t __fastcall ServantVoiceEntity__getSvtIdfromVoiceAssetName(System_String_o *assetName, const MethodInfo *method)
{
  System_String_array *v3; // x0
  System_String_array *v4; // x1
  __int64 v6; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B3324 & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    byte_42B3324 = 1;
  }
  result = 0;
  v3 = (System_String_array *)sub_B5299C(char___TypeInfo, 1LL);
  if ( !v3 )
    goto LABEL_13;
  v4 = v3;
  if ( !v3->max_length )
  {
    v6 = sub_B52A88(v3);
    sub_B52A28(v6, 0LL);
  }
  LOWORD(v3->m_Items[0]) = 95;
  if ( !assetName || (v3 = System_String__Split(assetName, (System_Char_array *)v3, 0LL), result = 0, !v3) )
LABEL_13:
    sub_B52A5C(v3, v4);
  if ( v3->max_length != 2 )
    return 0;
  if ( System_Int32__TryParse(v3->m_Items[1], &result, 0LL) )
    return result;
  return 0;
}


System_String_o *__fastcall ServantVoiceEntity__getVoiceAssetName(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  return ServantVoiceEntity__getVoiceAssetName_30972712(this->fields.id, method);
}


System_String_o *__fastcall ServantVoiceEntity__getVoiceAssetName_30972712(int32_t svtId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = svtId;
  if ( (byte_42B3323 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_3997/*"ChrVoice_"*/);
    byte_42B3323 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_44568316((System_String_o *)StringLiteral_3997/*"ChrVoice_"*/, v2, 0LL);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList(
        ServantVoiceEntity_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v9; // x21
  int max_length; // w9
  SvtVoiceInfo_o *v11; // x8
  __int64 v13; // x0

  if ( (byte_42B3325 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_42B3325 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_11:
    sub_B52A5C(v6, v7);
  v9 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v9 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v5;
    if ( (unsigned int)v9 >= max_length )
    {
      v13 = sub_B52A88(v6);
      sub_B52A28(v13, 0LL);
    }
    v11 = scriptJson->m_Items[v9];
    if ( v11 )
    {
      if ( v5 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v11->fields.infos,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
        scriptJson = this->fields.scriptJson;
        ++v9;
        if ( scriptJson )
          continue;
      }
    }
    goto LABEL_11;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceListByGender(
        ServantVoiceEntity_o *this,
        int32_t type,
        int32_t condType,
        int32_t genderType,
        System_String_o *playVoiceLabel,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x22
  void *Instance; // x0
  __int64 v13; // x1
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v15; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v17; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v19; // x26
  struct ServantVoiceCond_array *conds; // x8
  __int64 v21; // x9
  ServantVoiceCond_o *v22; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v24; // x8
  __int64 v26; // x0

  if ( (byte_42B3327 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B3327 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v15);
  if ( Instance )
  {
    if ( v11 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        *((EventMissionProgressRequest_Argument_ProgressData_o **)Instance + 8),
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      return (System_Collections_Generic_List_ServantVoiceData____o *)v11;
    }
LABEL_27:
    sub_B52A5C(Instance, v13);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_27;
  v17 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v17 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v11;
    if ( (unsigned int)v17 >= max_length )
      goto LABEL_29;
    v19 = scriptJson->m_Items[v17];
    if ( !v19 )
      goto LABEL_27;
    conds = v19->fields.conds;
    if ( conds )
    {
      v21 = *(_QWORD *)&conds->max_length;
      if ( v21 )
      {
        if ( !(_DWORD)v21 )
          goto LABEL_29;
        v22 = conds->m_Items[0];
        if ( !v22 )
          goto LABEL_27;
        if ( v22->fields.condType == condType )
        {
          infos = v19->fields.infos;
          if ( !infos )
            goto LABEL_27;
          if ( !infos->max_length )
          {
LABEL_29:
            v26 = sub_B52A88(Instance);
            sub_B52A28(v26, 0LL);
          }
          v24 = infos->m_Items[0];
          if ( !v24 || !MasterData_WarQuestSelectionMaster )
            goto LABEL_27;
          Instance = (void *)VoicePlayCondMaster__isVoicePlay(
                               MasterData_WarQuestSelectionMaster,
                               this->fields.id,
                               v24->fields.id,
                               0LL,
                               -1LL,
                               genderType,
                               0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v11 )
              goto LABEL_27;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v11,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v19->fields.infos,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v17;
    if ( !scriptJson )
      goto LABEL_27;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList_30975920(
        ServantVoiceEntity_o *this,
        int32_t type,
        int32_t condType,
        int32_t condValue,
        System_String_o *playVoiceLabel,
        int32_t genderType,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v14; // x1
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x23
  const MethodInfo *v17; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned __int64 v19; // x25
  unsigned __int64 max_length; // x9
  SvtVoiceInfo_o *v21; // x27
  struct ServantVoiceCond_array *conds; // x9
  __int64 v23; // x28
  int v24; // w8
  ServantVoiceCond_o *v25; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v27; // x8
  __int64 v29; // x0

  if ( (byte_42B332A & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B332A = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v17);
  if ( Instance )
  {
    if ( v16 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        *((EventMissionProgressRequest_Argument_ProgressData_o **)Instance + 8),
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      return (System_Collections_Generic_List_ServantVoiceData____o *)v16;
    }
LABEL_35:
    sub_B52A5C(Instance, v14);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_35;
  v19 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (__int64)v19 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v16;
    if ( v19 >= max_length )
    {
LABEL_37:
      v29 = sub_B52A88(Instance);
      sub_B52A28(v29, 0LL);
    }
    v21 = scriptJson->m_Items[v19];
    if ( v21 )
    {
      conds = v21->fields.conds;
      if ( conds )
      {
        v23 = 0LL;
        while ( 1 )
        {
          v24 = conds->max_length;
          if ( (int)v23 >= v24 )
            break;
          if ( (unsigned int)v23 >= v24 )
            goto LABEL_37;
          v25 = conds->m_Items[v23];
          if ( !v25 )
            goto LABEL_35;
          if ( v25->fields.condType == condType )
          {
            if ( condType != 3 && condType != 23 && condType != 9 )
              goto LABEL_29;
            if ( v25->fields.value == condValue )
            {
              infos = v21->fields.infos;
              if ( !infos )
                goto LABEL_35;
              if ( !infos->max_length )
                goto LABEL_37;
              v27 = infos->m_Items[0];
              if ( !v27 || !MasterData_WarQuestSelectionMaster )
                goto LABEL_35;
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
LABEL_29:
                if ( !v16 )
                  goto LABEL_35;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v16,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v21->fields.infos,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
              }
            }
          }
          conds = v21->fields.conds;
          ++v23;
          if ( !conds )
            goto LABEL_35;
        }
        scriptJson = this->fields.scriptJson;
      }
    }
    ++v19;
    if ( !scriptJson )
      goto LABEL_35;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList_30976504(
        ServantVoiceEntity_o *this,
        int32_t type,
        System_String_o *labelName,
        System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList,
        bool isCheckPlayCond,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  struct ServantVoiceData_array *infos; // x1
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v16; // x9
  SvtVoiceInfo_o *v17; // x8
  il2cpp_array_size_t v18; // w26
  _BOOL4 v19; // w24
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v21; // x25
  struct ServantVoiceData_array *v22; // x9
  __int64 v23; // x27
  int v24; // w8
  ServantVoiceData_o *v25; // x28
  __int64 v27; // x0

  if ( (byte_42B332B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_16028/*"_B050"*/);
    byte_42B332B = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !labelName )
    goto LABEL_40;
  Instance = (WebViewManager_o *)System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16028/*"_B050"*/, 0LL);
  scriptJson = this->fields.scriptJson;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( scriptJson )
    {
      v16 = *(_QWORD *)&scriptJson->max_length;
      if ( !v16 )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v14;
      if ( !(_DWORD)v16 )
      {
LABEL_41:
        v27 = sub_B52A88(Instance);
        sub_B52A28(v27, 0LL);
      }
      v17 = scriptJson->m_Items[0];
      if ( v17 )
      {
        infos = v17->fields.infos;
        if ( !infos || !*(_QWORD *)&infos->max_length )
          return (System_Collections_Generic_List_ServantVoiceData____o *)v14;
        if ( v14 )
          goto LABEL_38;
      }
    }
LABEL_40:
    sub_B52A5C(Instance, infos);
  }
  if ( !scriptJson )
    goto LABEL_40;
  v18 = 0;
  v19 = (unsigned int)(type - 1) < 2 && isCheckPlayCond;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v18 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v14;
    if ( v18 >= max_length )
      goto LABEL_41;
    v21 = scriptJson->m_Items[v18];
    if ( !v21 )
      goto LABEL_40;
    v22 = v21->fields.infos;
    if ( v22 )
      break;
LABEL_34:
    ++v18;
    if ( !scriptJson )
      goto LABEL_40;
  }
  v23 = 0LL;
  while ( 1 )
  {
    v24 = v22->max_length;
    if ( (int)v23 >= v24 )
    {
      scriptJson = this->fields.scriptJson;
      goto LABEL_34;
    }
    if ( (unsigned int)v23 >= v24 )
      goto LABEL_41;
    v25 = v22->m_Items[v23];
    if ( !v25 )
      goto LABEL_40;
    Instance = (WebViewManager_o *)System_String__Equals_44555656(labelName, v25->fields.id, 0LL);
    if ( !v19 )
      break;
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_40;
      Instance = (WebViewManager_o *)VoicePlayCondMaster__isVoicePlay(
                                       MasterData_WarQuestSelectionMaster,
                                       this->fields.id,
                                       v25->fields.id,
                                       disableCondTypeList,
                                       -1LL,
                                       -1,
                                       0LL);
      break;
    }
LABEL_31:
    v22 = v21->fields.infos;
    ++v23;
    if ( !v22 )
      goto LABEL_40;
  }
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_31;
  if ( !v14 )
    goto LABEL_40;
  infos = v21->fields.infos;
LABEL_38:
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v14,
    (EventMissionProgressRequest_Argument_ProgressData_o *)infos,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
  return (System_Collections_Generic_List_ServantVoiceData____o *)v14;
}


bool __fastcall ServantVoiceEntity__isAvailableMyRoomVoice(
        ServantVoiceEntity_o *this,
        SvtVoiceInfo_o *info,
        int32_t imageLimitCount,
        bool isBeforeFriendship,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  UserServantMaster_o *v12; // x22
  UserServantEntity_o *Entity; // x20
  UserServantEntity_array *v14; // x22
  int32_t FriendshipRank; // w0
  const MethodInfo *v16; // x2
  struct ServantVoiceCond_array *conds; // x25
  int max_length; // w8
  int32_t v19; // w24
  int v20; // w26
  bool v21; // w21
  ServantVoiceCond_o *v22; // x23
  int32_t value; // w23
  ServantVoiceEntity_o *v24; // x0
  UserGameEntity_o *v25; // x2
  __int64 v27; // x0
  const MethodInfo *v28; // [xsp+0h] [xbp-60h]

  if ( (byte_42B3338 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&VoiceCondType_TypeInfo);
    byte_42B3338 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame
    || (v12 = (UserServantMaster_o *)Instance) == 0LL
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   SelfUserGame->fields.favoriteUserSvtId,
                   (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
        Instance = (DataManager_o *)UserServantMaster__getAllList(v12, 0LL),
        !Entity)
    || (v14 = (UserServantEntity_array *)Instance,
        FriendshipRank = UserServantEntity__getFriendshipRank(Entity, 0LL),
        Instance = (DataManager_o *)ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v16),
        !info)
    || (conds = info->fields.conds) == 0LL )
  {
LABEL_23:
    sub_B52A5C(Instance, v11);
  }
  max_length = conds->max_length;
  if ( max_length < 1 )
    return 0;
  v19 = (int)Instance;
  v20 = 0;
  v21 = isBeforeFriendship;
  do
  {
    if ( v20 >= (unsigned int)max_length )
    {
      v27 = sub_B52A88(Instance);
      sub_B52A28(v27, 0LL);
    }
    v22 = conds->m_Items[v20];
    if ( !v22 )
      goto LABEL_23;
    if ( v22->fields.condType == 23 )
    {
      value = v22->fields.value;
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
      v24 = (ServantVoiceEntity_o *)UserServantEntity__getFriendshipRank(Entity, 0LL);
      Instance = (DataManager_o *)ServantVoiceEntity__IsAvailableHomeAndGrowth(
                                    v24,
                                    v22,
                                    v25,
                                    Entity,
                                    v14,
                                    v19,
                                    (int32_t)v24,
                                    v21,
                                    v28);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        return 0;
    }
    max_length = conds->max_length;
    ++v20;
  }
  while ( v20 < max_length );
  return 1;
}


bool __fastcall ServantVoiceEntity__isAvailableVoice(
        ServantVoiceEntity_o *this,
        SvtVoiceInfo_o *info,
        int64_t userSvtId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v10; // x3

  if ( (byte_42B3336 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B3336 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v8);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return ServantVoiceEntity__isAvailableVoice_30982692(this, info, Entity, v10);
}


bool __fastcall ServantVoiceEntity__isAvailableVoice_30982692(
        ServantVoiceEntity_o *this,
        SvtVoiceInfo_o *info,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  UserServantEntity_array *AllList; // x20
  int32_t FriendshipRank; // w0
  const MethodInfo *v11; // x2
  struct ServantVoiceCond_array *conds; // x25
  int max_length; // w8
  int32_t v14; // w21
  unsigned int v15; // w26
  ServantVoiceCond_o *v16; // x23
  int32_t condType; // w22
  ServantVoiceEntity_o *v18; // x0
  UserGameEntity_o *v19; // x2
  int32_t value; // w23
  int32_t v21; // w2
  int32_t v22; // w0
  int32_t v23; // w1
  int32_t v24; // w23
  int32_t LimitCount; // w24
  __int64 v26; // x0
  const MethodInfo *v28; // [xsp+0h] [xbp-60h]

  if ( (byte_42B3337 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&VoiceCondType_TypeInfo);
    byte_42B3337 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_27;
  UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_28;
  AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
  FriendshipRank = UserServantEntity__getFriendshipRank(userSvtEntity, 0LL);
  Instance = (DataManager_o *)ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v11);
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
  v14 = (int)Instance;
  v15 = 0;
  while ( 2 )
  {
    if ( v15 >= max_length )
    {
      v26 = sub_B52A88(Instance);
      sub_B52A28(v26, 0LL);
    }
    v16 = conds->m_Items[v15];
    if ( !v16 )
LABEL_28:
      sub_B52A5C(Instance, v8);
    condType = v16->fields.condType;
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
        value = v16->fields.value;
        if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !VoiceCondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
        }
        v21 = -1;
        v22 = condType;
        v23 = value;
        goto LABEL_19;
      default:
        if ( (unsigned int)(condType - 24) > 2 )
        {
LABEL_13:
          v18 = (ServantVoiceEntity_o *)UserServantEntity__getFriendshipRank(userSvtEntity, 0LL);
          Instance = (DataManager_o *)ServantVoiceEntity__IsAvailableHomeAndGrowth(
                                        v18,
                                        v16,
                                        v19,
                                        userSvtEntity,
                                        AllList,
                                        v14,
                                        (int32_t)v18,
                                        0,
                                        v28);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_27;
        }
        else
        {
          v24 = v16->fields.value;
          LimitCount = UserServantEntity__getLimitCount(userSvtEntity, 0LL);
          if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !VoiceCondType_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
          }
          v22 = condType;
          v23 = v24;
          v21 = LimitCount;
LABEL_19:
          Instance = (DataManager_o *)VoiceCondType__IsSatisfyCondition(v22, v23, v21, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_27;
        }
LABEL_20:
        max_length = conds->max_length;
        if ( (int)++v15 < max_length )
          continue;
        LOBYTE(Instance) = 1;
        break;
    }
    return (char)Instance;
  }
}


bool __fastcall ServantVoiceEntity__isEventEndState(
        ServantVoiceEntity_o *this,
        int32_t eventId,
        int64_t time,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B333F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B333F = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                eventId,
                                (const MethodInfo_23E2334 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return *(_QWORD *)&entity->fields.eventId <= time;
LABEL_9:
    sub_B52A5C(Instance, v7);
  }
  return 0;
}


bool __fastcall ServantVoiceEntity__isQuestClearState(
        ServantVoiceEntity_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B333E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B333E = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    sub_B52A5C(Instance, v5);
  }
  return 0;
}


ServantVoiceData_array *__fastcall ServantVoiceEntity__lotteryLevelUpVoice(
        ServantVoiceEntity_o *this,
        int64_t userSvtId,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  UserServantEntity_o *Entity; // x1
  const MethodInfo *v10; // x3

  if ( (byte_42B3333 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B3333 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v8);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return ServantVoiceEntity__lotteryLevelUpVoice_30980840(this, Entity, voiceId, v10);
}


ServantVoiceData_array *__fastcall ServantVoiceEntity__lotteryLevelUpVoice_30980840(
        ServantVoiceEntity_o *this,
        UserServantEntity_o *userServantEntity,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v8; // x1
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v12; // x28
  UserServantEntity_Fields *p_fields; // x27
  __int64 v14; // x9
  SvtVoiceInfo_o *v15; // x24
  struct ServantVoiceData_array *infos; // x8
  __int64 v17; // x9
  ServantVoiceData_o *v18; // x8
  ServantVoiceData_o *v19; // x8
  __int128 v20; // q1
  int32_t id; // w25
  System_String_o *v22; // x26
  const MethodInfo *v23; // x3
  struct ServantVoiceCond_array *conds; // x8
  WeightRate_int__o *v26; // x21
  int size; // w23
  int32_t i; // w22
  int v29; // w8
  __int64 v30; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x8
  __int64 v32; // x8
  __int64 v33; // x8
  unsigned int v34; // w28
  SvtVoiceInfo_o *v35; // x24
  struct ServantVoiceData_array *v36; // x8
  __int64 v37; // x9
  ServantVoiceData_o *v38; // x8
  __int128 v39; // q1
  int32_t v40; // w25
  System_String_o *v41; // x26
  const MethodInfo *v42; // x3
  struct ServantVoiceCond_array *v43; // x8
  int32_t v44; // w0
  EventMissionProgressRequest_Argument_ProgressData_o *v45; // x8
  __int64 v46; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+40h] [xbp-70h]

  if ( (byte_42B3335 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__);
    sub_B52984(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&ServantVoiceData___TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_WeightRate_int___ctor__);
    sub_B52984(&Method_WeightRate_int__getData__);
    sub_B52984(&Method_WeightRate_int__getTotalWeight__);
    sub_B52984(&Method_WeightRate_int__setWeight__);
    sub_B52984(&WeightRate_int__TypeInfo);
    byte_42B3335 = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_79;
  v12 = 0LL;
  p_fields = &userServantEntity->fields;
  while ( 1 )
  {
    v14 = *(_QWORD *)&scriptJson->max_length;
    if ( (int)v12 >= (int)v14 )
      break;
    if ( (unsigned int)v12 >= (unsigned int)v14 )
      goto LABEL_80;
    v15 = scriptJson->m_Items[v12];
    if ( !v15 )
      goto LABEL_79;
    infos = v15->fields.infos;
    if ( infos )
    {
      v17 = *(_QWORD *)&infos->max_length;
      if ( v17 )
      {
        if ( voiceId )
        {
          if ( !(_DWORD)v17 )
            goto LABEL_80;
          v18 = infos->m_Items[0];
          if ( !v18 )
            goto LABEL_79;
          Instance = System_String__op_Equality(v18->fields.id, voiceId, 0LL);
          if ( (Instance & 1) != 0 )
            goto LABEL_17;
        }
        else
        {
          if ( !(_DWORD)v17 )
            goto LABEL_80;
          v19 = infos->m_Items[0];
          if ( !v19 )
            goto LABEL_79;
          v20 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          id = this->fields.id;
          v22 = v19->fields.id;
          *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
          *(_OWORD *)&v49.fields.fakeValue = v20;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v48 = v49;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v48, 0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_79;
          Instance = VoicePlayCondMaster__isVoicePlay(
                       MasterData_WarQuestSelectionMaster,
                       id,
                       v22,
                       0LL,
                       Instance,
                       -1,
                       0LL);
          if ( (Instance & 1) != 0 )
          {
            conds = v15->fields.conds;
            if ( conds )
            {
              if ( *(_QWORD *)&conds->max_length )
              {
                Instance = ServantVoiceEntity__isAvailableVoice_30982692(this, v15, userServantEntity, v23);
                if ( (Instance & 1) != 0 )
                {
LABEL_17:
                  if ( !v10 )
                    goto LABEL_79;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v10,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
                    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
                }
              }
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v12;
    if ( !scriptJson )
      goto LABEL_79;
  }
  if ( !v10 )
    goto LABEL_79;
  if ( !v10->fields._size )
  {
    if ( !voiceId )
      return (ServantVoiceData_array *)sub_B5299C(ServantVoiceData___TypeInfo, 0LL);
    if ( (int)v14 >= 1 )
    {
      v34 = 0;
      while ( v34 < (unsigned int)v14 )
      {
        v35 = scriptJson->m_Items[v34];
        if ( !v35 )
          goto LABEL_79;
        v36 = v35->fields.infos;
        if ( v36 )
        {
          v37 = *(_QWORD *)&v36->max_length;
          if ( v37 )
          {
            if ( !(_DWORD)v37 )
              break;
            v38 = v36->m_Items[0];
            if ( !v38 )
              goto LABEL_79;
            v39 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            v40 = this->fields.id;
            v41 = v38->fields.id;
            *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v49.fields.fakeValue = v39;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v47 = v49;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v47, 0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_79;
            Instance = VoicePlayCondMaster__isVoicePlay(
                         MasterData_WarQuestSelectionMaster,
                         v40,
                         v41,
                         0LL,
                         Instance,
                         -1,
                         0LL);
            if ( (Instance & 1) != 0 )
            {
              v43 = v35->fields.conds;
              if ( v43 )
              {
                if ( *(_QWORD *)&v43->max_length )
                {
                  Instance = ServantVoiceEntity__isAvailableVoice_30982692(this, v35, userServantEntity, v42);
                  if ( (Instance & 1) != 0 )
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v10,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
                      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
                }
              }
            }
          }
        }
        scriptJson = this->fields.scriptJson;
        if ( !scriptJson )
          goto LABEL_79;
        LODWORD(v14) = scriptJson->max_length;
        if ( (int)++v34 >= (int)v14 )
          goto LABEL_70;
      }
LABEL_80:
      v46 = sub_B52A88(Instance);
      sub_B52A28(v46, 0LL);
    }
LABEL_70:
    if ( !v10->fields._size )
      return (ServantVoiceData_array *)sub_B5299C(ServantVoiceData___TypeInfo, 0LL);
  }
  v26 = (WeightRate_int__o *)sub_B52A54(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v26, (const MethodInfo_2C1C5B0 *)Method_WeightRate_int___ctor__);
  size = v10->fields._size;
  if ( size >= 1 )
  {
    if ( v26 )
    {
      for ( i = 0; i != size; ++i )
        WeightRate_int___setWeight(v26, 1, i, (const MethodInfo_2C1B778 *)Method_WeightRate_int__setWeight__);
      goto LABEL_38;
    }
    goto LABEL_79;
  }
LABEL_38:
  Instance = System_String__IsNullOrEmpty(voiceId, 0LL);
  if ( (Instance & 1) != 0 )
    goto LABEL_73;
  v29 = v10->fields._size;
  if ( v29 < 1 )
    goto LABEL_73;
  v30 = 0LL;
  while ( 1 )
  {
    if ( v29 <= (unsigned int)v30 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v31 = v10->fields._items->m_Items[v30];
    if ( !v31 )
      goto LABEL_79;
    v32 = *(_QWORD *)&v31[1].fields.targetId;
    if ( !v32 )
      goto LABEL_79;
    if ( !*(_DWORD *)(v32 + 24) )
      goto LABEL_80;
    v33 = *(_QWORD *)(v32 + 32);
    if ( !v33 )
      goto LABEL_79;
    Instance = System_String__op_Equality(*(System_String_o **)(v33 + 16), voiceId, 0LL);
    if ( (Instance & 1) != 0 )
      break;
    v29 = v10->fields._size;
    if ( (int)++v30 >= v29 )
      goto LABEL_73;
  }
  if ( (_DWORD)v30 == -1 )
  {
LABEL_73:
    if ( !v26 )
      goto LABEL_79;
    v44 = UnityEngine_Random__Range_35650740(0, v26->fields.totalweight, 0LL);
    Instance = WeightRate_int___getData(v26, v44, (const MethodInfo_2C1BBFC *)Method_WeightRate_int__getData__);
    LODWORD(v30) = Instance;
  }
  if ( v10->fields._size <= (unsigned int)v30 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v45 = v10->fields._items->m_Items[(int)v30];
  if ( !v45 )
LABEL_79:
    sub_B52A5C(Instance, v8);
  return *(ServantVoiceData_array **)&v45[1].fields.targetId;
}


System_Collections_Generic_List_SvtVoiceInfo__o *__fastcall ServantVoiceEntity__randomChangeSvtVoiceCount(
        ServantVoiceEntity_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x21
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v10; // x26
  int max_length; // w9
  SvtVoiceInfo_o *v12; // x23
  struct ServantVoiceData_array *infos; // x8
  __int64 v14; // x9
  ServantVoiceData_o *v15; // x8
  __int128 v16; // q1
  int32_t id; // w24
  System_String_o *v18; // x25
  const MethodInfo *v19; // x3
  struct ServantVoiceCond_array *conds; // x8
  __int64 v22; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-70h]

  if ( (byte_42B3334 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B3334 = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v8,
          (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_26:
    sub_B52A5C(Instance, v6);
  }
  v10 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v10 >= max_length )
      return (System_Collections_Generic_List_SvtVoiceInfo__o *)v8;
    if ( (unsigned int)v10 >= max_length )
      goto LABEL_29;
    v12 = scriptJson->m_Items[v10];
    if ( !v12 )
      goto LABEL_26;
    infos = v12->fields.infos;
    if ( infos )
    {
      v14 = *(_QWORD *)&infos->max_length;
      if ( v14 )
      {
        if ( !(_DWORD)v14 )
        {
LABEL_29:
          v22 = sub_B52A88(Instance);
          sub_B52A28(v22, 0LL);
        }
        v15 = infos->m_Items[0];
        if ( !v15 )
          goto LABEL_26;
        v16 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        id = this->fields.id;
        v18 = v15->fields.id;
        *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v24.fields.fakeValue = v16;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v23 = v24;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v23, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_26;
        Instance = VoicePlayCondMaster__isVoicePlay(MasterData_WarQuestSelectionMaster, id, v18, 0LL, Instance, -1, 0LL);
        if ( (Instance & 1) != 0 )
        {
          conds = v12->fields.conds;
          if ( conds )
          {
            if ( *(_QWORD *)&conds->max_length )
            {
              Instance = ServantVoiceEntity__isAvailableVoice_30982692(this, v12, userServantEntity, v19);
              if ( (Instance & 1) != 0 )
              {
                if ( !v8 )
                  goto LABEL_26;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v8,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
              }
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v10;
    if ( !scriptJson )
      goto LABEL_26;
  }
}