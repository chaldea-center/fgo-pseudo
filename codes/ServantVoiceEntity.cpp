void __fastcall ServantVoiceEntity___ctor(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBF66 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EBF66 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantVoiceEntity__CreatePK(
        int32_t id,
        int32_t voicePrefix,
        int32_t type,
        const MethodInfo *method)
{
  if ( (byte_42EBF44 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, voicePrefix, type, method);
    byte_42EBF44 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           voicePrefix,
           type,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v3; // x3
  int v4; // w19
  __int64 v6; // x0
  __int64 v7; // x1
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
  __int64 v20; // x0

  v4 = rankNow;
  if ( (byte_42EBF52 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, rankNow, (_DWORD)method, v3);
    byte_42EBF52 = 1;
  }
  v6 = sub_B5D5DC(int___TypeInfo, (unsigned int)v4);
  if ( !v6 )
    goto LABEL_26;
  v8 = *(unsigned int *)(v6 + 24);
  if ( (__int64)(v8 << 32) >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= v8 )
        goto LABEL_33;
      *(_DWORD *)(v6 + 32 + 4 * v9++) = 0;
    }
    while ( (__int64)v9 < (int)v8 );
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_26:
    sub_B5D69C(v6, v7);
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
              if ( (_DWORD)value == v4 )
                return v4;
              if ( (int)value < v4 )
              {
                if ( (unsigned int)value >= *(_DWORD *)(v6 + 24) )
                  break;
                ++*(_DWORD *)(v6 + 4 * value + 32);
                v15 = *(_QWORD *)&conds->max_length;
              }
            }
            if ( (int)++v16 >= (int)v15 )
              goto LABEL_25;
          }
LABEL_33:
          v20 = sub_B5D6C8(v6);
          sub_B5D668(v20, 0LL);
        }
      }
    }
LABEL_25:
    scriptJson = this->fields.scriptJson;
    ++v11;
    if ( !scriptJson )
      goto LABEL_26;
  }
  while ( --v4 >= 0 )
  {
    if ( (unsigned int)v4 >= *(_DWORD *)(v6 + 24) )
      goto LABEL_33;
    if ( *(int *)(v6 + 4LL * v4 + 32) > 0 )
      return v4;
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
    sub_B5D69C(this, *(_QWORD *)&type);
  max_length = scriptJson->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
    {
LABEL_19:
      v14 = sub_B5D6C8(this);
      sub_B5D668(v14, 0LL);
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
    this = (ServantVoiceEntity_o *)System_String__Equals_44565128(labelName, v12->fields.id, 0LL);
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
    sub_B5D69C(this, method);
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
        v12 = sub_B5D6C8(this);
        sub_B5D668(v12, 0LL);
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
    return ServantVoiceEntity__getVoiceList_31475968(this, 3, labelName, 0LL, 1, v5);
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
      sub_B5D69C(IsNullOrEmpty, v6);
    v9 = 0LL;
    while ( 1 )
    {
      max_length = scriptJson->max_length;
      if ( (__int64)v9 >= (int)max_length )
        return 0LL;
      if ( v9 >= max_length )
      {
        v14 = sub_B5D6C8(IsNullOrEmpty);
        sub_B5D668(v14, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  VoicePlayCondMaster_o *v12; // x21
  __int64 v13; // x23
  int max_length; // w9
  SvtVoiceInfo_o *v15; // x8
  struct ServantVoiceData_array *infos; // x9
  ServantVoiceData_o *v17; // x9
  System_String_o *summonScript; // x22
  __int64 v20; // x0

  if ( (byte_42EBF65 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42EBF65 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_16:
    sub_B5D69C(Instance, v10);
  }
  v12 = (VoicePlayCondMaster_o *)Instance;
  v13 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v13 >= max_length )
      return 0LL;
    if ( (unsigned int)v13 >= max_length )
      goto LABEL_19;
    v15 = scriptJson->m_Items[v13];
    if ( !v15 )
      goto LABEL_16;
    infos = v15->fields.infos;
    if ( !infos )
      goto LABEL_16;
    if ( !infos->max_length )
    {
LABEL_19:
      v20 = sub_B5D6C8(Instance);
      sub_B5D668(v20, 0LL);
    }
    v17 = infos->m_Items[0];
    if ( !v17 || !v12 )
      goto LABEL_16;
    summonScript = v15->fields.summonScript;
    Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(v12, svtId, v17->fields.id, 0LL, -1LL, -1, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (DataManager_o *)System_String__IsNullOrEmpty(summonScript, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        return summonScript;
    }
    scriptJson = this->fields.scriptJson;
    ++v13;
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int32_t condType; // w21
  int32_t v19; // w19
  int32_t v20; // w2
  int32_t v21; // w0
  int32_t v22; // w1
  int32_t v23; // w19
  int32_t value; // w19
  int32_t v26; // w20
  int32_t v27; // w20
  __int64 v28; // x21
  __int64 v29; // x22
  int32_t v30; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_42EBF5B & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)cond, (_DWORD)userEntity, userSvtEntity);
    this = (ServantVoiceEntity_o *)sub_B5D5C4(&VoiceCondType_TypeInfo, v15, v16, v17);
    byte_42EBF5B = 1;
  }
  if ( !cond )
LABEL_51:
    sub_B5D69C(this, cond);
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
        v21 = 20;
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
        v21 = 3;
      }
LABEL_48:
      v22 = value;
      v20 = friendshipRankWithVoice;
      return VoiceCondType__IsSatisfyCondition(v21, v22, v20, 0LL);
    case 4:
      v26 = cond->fields.value;
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      return VoiceCondType__IsSatisfySvtGetCondition(v26, usrSvtList, 0LL);
    case 5:
      if ( !userSvtEntity )
        goto LABEL_51;
      v27 = cond->fields.value;
      v29 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v28 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v31.fields.currentCryptoKey = v29;
      *(_QWORD *)&v31.fields.fakeValue = v28;
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v31, 0LL);
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      return VoiceCondType__IsSatisfySvtGroupCondition(v27, v30, usrSvtList, 0LL);
    case 6:
    case 7:
    case 12:
      v19 = cond->fields.value;
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      v20 = -1;
      v21 = condType;
      v22 = v19;
      return VoiceCondType__IsSatisfyCondition(v21, v22, v20, 0LL);
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
      v21 = condType;
      goto LABEL_48;
    case 20:
    case 22:
      v23 = cond->fields.value;
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      v21 = condType;
      v22 = v23;
      v20 = friendshipRankNow;
      return VoiceCondType__IsSatisfyCondition(v21, v22, v20, 0LL);
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

  return ServantVoiceEntity__getVoiceList_31475968(this, 6, labelName, 0LL, 1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getBoxGachaVoiceList(
        ServantVoiceEntity_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  int64_t Time; // x21
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x22
  il2cpp_array_size_t v28; // w23
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v30; // x28
  struct ServantVoiceCond_array *conds; // x19
  __int64 v32; // x8
  __int64 v33; // x26
  ServantVoiceCond_o *v34; // x24
  unsigned int condType; // w8
  __int64 v37; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42EBF5C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v13, v14, v15);
    sub_B5D5C4(&NetworkManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    byte_42EBF5C = 1;
  }
  entity = 0LL;
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_31:
    sub_B5D69C(Instance, v25);
  }
  v27 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v28 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v28 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v22;
    if ( v28 >= max_length )
      goto LABEL_33;
    v30 = scriptJson->m_Items[v28];
    if ( v30 )
    {
      conds = v30->fields.conds;
      if ( conds && (v32 = *(_QWORD *)&conds->max_length) != 0 )
      {
        if ( (int)v32 >= 1 )
        {
          v33 = 0LL;
          while ( (unsigned int)v33 < (unsigned int)v32 )
          {
            v34 = conds->m_Items[v33];
            if ( !v34 || !v27 )
              goto LABEL_31;
            Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                          v27,
                                          &entity,
                                          v34->fields.value,
                                          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_31;
              if ( Time <= (__int64)entity->fields.coordinate )
              {
                condType = v34->fields.condType;
                if ( condType <= 0x13 && ((1 << condType) & 0x86000) != 0 )
                {
                  if ( !v22 )
                    goto LABEL_31;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v22,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v30->fields.infos,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
                }
              }
            }
            LODWORD(v32) = conds->max_length;
            if ( (int)++v33 >= (int)v32 )
              goto LABEL_30;
          }
LABEL_33:
          v37 = sub_B5D6C8(Instance);
          sub_B5D668(v37, 0LL);
        }
      }
      else
      {
        if ( !v22 )
          goto LABEL_31;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v22,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v30->fields.infos,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      }
LABEL_30:
      ++v28;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x21
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  VoicePlayCondMaster_o *v26; // x22
  __int64 v27; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v29; // x8
  WarBoardManager_TaskList_o *infos; // x23
  Il2CppObject *syncRoot; // x8
  __int64 v33; // x0

  if ( (byte_42EBF48 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, type, svtId, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    byte_42EBF48 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_19:
    sub_B5D69C(Instance, v24);
  }
  v26 = (VoicePlayCondMaster_o *)Instance;
  v27 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v27 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v22;
    if ( (unsigned int)v27 >= max_length )
      goto LABEL_22;
    v29 = scriptJson->m_Items[v27];
    if ( v29 )
    {
      infos = (WarBoardManager_TaskList_o *)v29->fields.infos;
      if ( infos )
      {
        if ( !infos->fields._size )
        {
LABEL_22:
          v33 = sub_B5D6C8(Instance);
          sub_B5D668(v33, 0LL);
        }
        syncRoot = infos->fields._syncRoot;
        if ( syncRoot )
        {
          if ( v26 )
          {
            Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(
                                          v26,
                                          svtId,
                                          (System_String_o *)syncRoot[1].klass,
                                          0LL,
                                          -1LL,
                                          -1,
                                          0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v22 )
                goto LABEL_19;
              Instance = (DataManager_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v22,
                                            infos,
                                            (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v22,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)infos,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
            }
            scriptJson = this->fields.scriptJson;
            ++v27;
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x21
  DataManager_o *Instance; // x0
  SvtVoiceInfo_o *v21; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v23; // x22
  int max_length; // w9
  struct ServantVoiceCond_array *conds; // x9
  __int64 v26; // x10
  ServantVoiceCond_o *v27; // x9
  __int64 v29; // x0

  if ( (byte_42EBF4A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, type, condType, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42EBF4A = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_18:
    sub_B5D69C(Instance, v21);
  }
  v23 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v23 >= max_length )
      return (System_Collections_Generic_List_SvtVoiceInfo__o *)v19;
    if ( (unsigned int)v23 >= max_length )
      goto LABEL_21;
    v21 = scriptJson->m_Items[v23];
    if ( !v21 )
      goto LABEL_18;
    conds = v21->fields.conds;
    if ( conds )
    {
      v26 = *(_QWORD *)&conds->max_length;
      if ( v26 )
      {
        if ( !(_DWORD)v26 )
        {
LABEL_21:
          v29 = sub_B5D6C8(Instance);
          sub_B5D668(v29, 0LL);
        }
        v27 = conds->m_Items[0];
        if ( !v27 )
          goto LABEL_18;
        if ( v27->fields.condType == condType )
        {
          if ( !v19 )
            goto LABEL_18;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v19,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
          scriptJson = this->fields.scriptJson;
        }
      }
    }
    ++v23;
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
  if ( (byte_42EBF4F & 1) == 0 )
  {
    this = (ServantVoiceEntity_o *)sub_B5D5C4(&StringLiteral_16113/*"_B050"*/, type, (_DWORD)labelName, method);
    byte_42EBF4F = 1;
  }
  if ( v6->fields.type == type )
  {
    if ( !labelName )
      goto LABEL_25;
    this = (ServantVoiceEntity_o *)System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16113/*"_B050"*/, 0LL);
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
          v18 = sub_B5D6C8(this);
          sub_B5D668(v18, 0LL);
        }
        v9 = scriptJson->m_Items[0];
        if ( v9 )
          return v9->fields.conds;
LABEL_25:
        sub_B5D69C(this, *(_QWORD *)&type);
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
              this = (ServantVoiceEntity_o *)System_String__Equals_44565128(labelName, v17->fields.id, 0LL);
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

  return ServantVoiceEntity__getVoiceList_31475384(this, 2, 23, costumeId, 0LL, -1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getCostumeGetVoiceList(
        ServantVoiceEntity_o *this,
        int32_t costumeId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  return ServantVoiceEntity__getVoiceList_31475384(this, 2, 23, costumeId, 0LL, -1, v3);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v15; // w21
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v17; // x23
  struct ServantVoiceCond_array *conds; // x24
  __int64 v19; // x8
  __int64 v20; // x25
  ServantVoiceCond_o *v21; // x9
  __int64 v23; // x0

  if ( (byte_42EBF5E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v8, v9, v10);
    byte_42EBF5E = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_19:
    sub_B5D69C(v12, v13);
  v15 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v15 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v11;
    if ( v15 >= max_length )
      goto LABEL_21;
    v17 = scriptJson->m_Items[v15];
    if ( v17 )
    {
      conds = v17->fields.conds;
      if ( conds )
      {
        v19 = *(_QWORD *)&conds->max_length;
        if ( v19 )
        {
          if ( (int)v19 >= 1 )
          {
            v20 = 0LL;
            while ( (unsigned int)v20 < (unsigned int)v19 )
            {
              v21 = conds->m_Items[v20];
              if ( !v21 )
                goto LABEL_19;
              if ( v21->fields.condType == 15 )
              {
                if ( !v11 )
                  goto LABEL_19;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v11,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v17->fields.infos,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
                v19 = *(_QWORD *)&conds->max_length;
              }
              if ( (int)++v20 >= (int)v19 )
                goto LABEL_18;
            }
LABEL_21:
            v23 = sub_B5D6C8(v12);
            sub_B5D668(v23, 0LL);
          }
        }
      }
LABEL_18:
      scriptJson = this->fields.scriptJson;
      ++v15;
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  DataManager_o *Time; // x0
  __int64 v24; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  DataManager_o *v26; // x21
  il2cpp_array_size_t v27; // w22
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v29; // x27
  struct ServantVoiceCond_array *conds; // x28
  __int64 v31; // x8
  __int64 i; // x19
  ServantVoiceCond_o *v33; // x24
  int32_t condType; // w8
  __int64 v36; // x0

  if ( (byte_42EBF5D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v13, v14, v15);
    sub_B5D5C4(&NetworkManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    byte_42EBF5D = 1;
  }
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = (DataManager_o *)NetworkManager__getTime(0LL);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_33:
    sub_B5D69C(Time, v24);
  v26 = Time;
  v27 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v27 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v22;
    if ( v27 >= max_length )
    {
LABEL_35:
      v36 = sub_B5D6C8(Time);
      sub_B5D668(v36, 0LL);
    }
    v29 = scriptJson->m_Items[v27];
    if ( !v29 )
      goto LABEL_33;
    conds = v29->fields.conds;
    if ( conds && (v31 = *(_QWORD *)&conds->max_length) != 0 )
    {
      if ( (int)v31 >= 1 )
      {
        for ( i = 0LL; (int)i < (int)v31; ++i )
        {
          if ( (unsigned int)i >= (unsigned int)v31 )
            goto LABEL_35;
          v33 = conds->m_Items[i];
          Time = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_33;
          Time = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Time,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !v33 || !Time )
            goto LABEL_33;
          Time = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Time,
                                    v33->fields.value,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( Time )
          {
            condType = v33->fields.condType;
            if ( (__int64)Time->fields.masterLoadThreads <= (__int64)v26 )
            {
              if ( condType == 19 || condType == 13 )
              {
LABEL_26:
                if ( !v22 )
                  goto LABEL_33;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v22,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v29->fields.infos,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
              }
            }
            else if ( condType == 19 || condType == 14 )
            {
              goto LABEL_26;
            }
          }
          LODWORD(v31) = conds->max_length;
        }
      }
    }
    else
    {
      if ( !v22 )
        goto LABEL_33;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v22,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v29->fields.infos,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    }
    ++v27;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_33;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventRewardVoiceList_31486196(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_31475968(this, 5, labelName, 0LL, 1, v3);
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
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  System_Collections_Generic_List_VoiceCondType_Type__o *v58; // x22
  int64_t Time; // x0
  __int64 v60; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v61; // x23
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v63; // w22
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v65; // x27
  _BOOL4 v66; // w25
  struct ServantVoiceCond_array *conds; // x26
  __int64 v68; // x8
  __int64 v69; // x21
  ServantVoiceCond_o *v70; // x24
  int32_t condType; // w28
  int64_t v72; // x19
  int v73; // w8
  _BOOL8 v74; // x0
  __int64 v75; // x1
  Il2CppObject *current; // x21
  _DWORD *monitor; // x22
  int v78; // w8
  unsigned int v79; // w24
  __int64 v80; // x8
  __int64 v82; // x0
  __int64 v83; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v84; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v85; // [xsp+10h] [xbp-B0h]
  int64_t v86; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_VoiceCondType_Type__o *v89; // [xsp+30h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v90; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v91; // [xsp+50h] [xbp-70h] BYREF

  v6 = isEventDateCondOnly;
  if ( (byte_42EBF64 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_EventMaster___,
      isEventDateCondOnly,
      eventId,
      *(_QWORD *)&checkCondType);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VoiceCondType_Type__Add__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v40, v41, v42);
    sub_B5D5C4(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v43, v44, v45);
    sub_B5D5C4(&System_Collections_Generic_List_VoiceCondType_Type__TypeInfo, v46, v47, v48);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v49, v50, v51);
    sub_B5D5C4(&NetworkManager_TypeInfo, v52, v53, v54);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v55, v56, v57);
    byte_42EBF64 = 1;
  }
  memset(&v91, 0, sizeof(v91));
  v85 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v85,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v58 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v58,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
  if ( !v58 )
    goto LABEL_39;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v58,
    14,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v58,
    13,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v58,
    19,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
  v61 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v61,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
  if ( !v6 )
  {
    if ( !v61 )
      goto LABEL_39;
    System_Collections_Generic_List_VoiceCondType_Type___Add(
      v61,
      checkCondType,
      (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
  }
  v89 = v58;
  v84 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v84,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v86 = Time;
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_39;
  v63 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v63 >= (int)max_length )
      break;
    if ( v63 >= max_length )
      goto LABEL_60;
    v65 = scriptJson->m_Items[v63];
    if ( !v65 )
      goto LABEL_39;
    v66 = v6;
    conds = v65->fields.conds;
    if ( conds )
    {
      v68 = *(_QWORD *)&conds->max_length;
      if ( v68 )
      {
        if ( (int)v68 >= 1 )
        {
          v69 = 0LL;
          while ( (unsigned int)v69 < (unsigned int)v68 )
          {
            v70 = conds->m_Items[v69];
            if ( !v70 )
              goto LABEL_39;
            condType = v70->fields.condType;
            Time = System_Collections_Generic_List_VoiceCondType_Type___Contains(
                     v89,
                     condType,
                     (const MethodInfo_3044C04 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) == 0 )
            {
              if ( !v61 )
                goto LABEL_39;
              Time = System_Collections_Generic_List_VoiceCondType_Type___Contains(
                       v61,
                       condType,
                       (const MethodInfo_3044C04 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
              if ( (Time & 1) == 0 )
                goto LABEL_38;
            }
            Time = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Time )
              goto LABEL_39;
            Time = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Time,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
            if ( !Time )
              goto LABEL_39;
            Time = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Time,
                              v70->fields.value,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
            if ( !Time || v70->fields.value != eventId )
              goto LABEL_38;
            v72 = Time;
            Time = System_Collections_Generic_List_VoiceCondType_Type___Contains(
                     v89,
                     condType,
                     (const MethodInfo_3044C04 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) != 0 )
            {
              v73 = *(_QWORD *)(v72 + 96) <= v86 ? 13 : 14;
              if ( condType == 19 )
                v73 = 19;
              if ( condType != v73 )
                goto LABEL_38;
            }
            LODWORD(v68) = conds->max_length;
            if ( (int)++v69 >= (int)v68 )
              goto LABEL_36;
          }
LABEL_60:
          v83 = sub_B5D6C8(Time);
          sub_B5D668(v83, 0LL);
        }
LABEL_36:
        Time = (int64_t)v84;
        if ( !v84 )
          goto LABEL_39;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v84,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v65,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
      }
    }
LABEL_38:
    ++v63;
    v6 = v66;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_39;
  }
  Time = (int64_t)v84;
  if ( !v84 )
LABEL_39:
    sub_B5D69C(Time, v60);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v90,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v84,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v91 = v90;
LABEL_42:
  while ( 1 )
  {
    v74 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v91,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v74 )
      break;
    current = v91.fields.current;
    if ( !v91.fields.current )
      sub_B5D69C(v74, v75);
    monitor = v91.fields.current[4].monitor;
    if ( !monitor )
      sub_B5D69C(v74, v75);
    v78 = monitor[6];
    if ( v78 >= 1 )
    {
      v79 = 0;
      while ( 1 )
      {
        if ( v79 >= v78 )
        {
          v82 = sub_B5D6C8(v74);
          sub_B5D668(v82, 0LL);
        }
        v80 = *(_QWORD *)&monitor[2 * v79 + 8];
        if ( !v80 )
          sub_B5D69C(v74, v75);
        if ( v6 )
          break;
        if ( !v61 )
          sub_B5D69C(v74, v75);
        v74 = System_Collections_Generic_List_VoiceCondType_Type___Contains(
                v61,
                *(_DWORD *)(v80 + 16),
                (const MethodInfo_3044C04 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
        if ( v74 )
          break;
        v78 = monitor[6];
        if ( (int)++v79 >= v78 )
          goto LABEL_42;
      }
      if ( !v85 )
        sub_B5D69C(0LL, v75);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v85,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current[4].klass,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v91,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  return (System_Collections_Generic_List_ServantVoiceData____o *)v85;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventShopVoiceList_31488548(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_31475968(this, 9, labelName, 0LL, 1, v3);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_List_ServantVoiceData____o *EventRewardVoiceList; // x0
  __int64 v16; // x1
  ServantVoiceData_array *current; // x20
  int monitor; // w8
  unsigned int v19; // w22
  ServantVoiceData_o *v20; // x8
  System_String_o *v21; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  char v24; // w19
  __int64 v26; // x0
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42EBF62 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__,
      (_DWORD)id,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v12, v13, v14);
    byte_42EBF62 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  EventRewardVoiceList = ServantVoiceEntity__getEventRewardVoiceList(this, (const MethodInfo *)id);
  if ( !EventRewardVoiceList )
    sub_B5D69C(0LL, v16);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventRewardVoiceList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v28 = v27;
  do
  {
LABEL_13:
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v28,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v22 )
    {
      v24 = 0;
      current = 0LL;
      goto LABEL_16;
    }
    current = (ServantVoiceData_array *)v28.fields.current;
    if ( !v28.fields.current )
      sub_B5D69C(v22, v23);
    monitor = (int)v28.fields.current[1].monitor;
  }
  while ( monitor < 1 );
  v19 = 0;
  while ( 1 )
  {
    if ( v19 >= monitor )
    {
      v26 = sub_B5D6C8(v22);
      sub_B5D668(v26, 0LL);
    }
    v20 = current->m_Items[v19];
    if ( !v20 )
      sub_B5D69C(v22, v23);
    v21 = v20->fields.id;
    if ( !v21 )
      sub_B5D69C(0LL, v23);
    v22 = System_String__Equals_44565128(v21, id, 0LL);
    if ( v22 )
      break;
    monitor = current->max_length;
    if ( (int)++v19 >= monitor )
      goto LABEL_13;
  }
  v24 = 2;
LABEL_16:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  if ( ((v24 + 2) & 3) != 0 )
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_List_VoiceCondType_Type__o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x5

  if ( (byte_42EBF53 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_CondType_Kind__Add__, (_DWORD)labelName, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v9, v10, v11);
    byte_42EBF53 = 1;
  }
  v12 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v12,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v12 )
    sub_B5D69C(v13, v14);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    81,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_CondType_Kind__Add__);
  return ServantVoiceEntity__getVoiceList_31475968(
           this,
           1,
           labelName,
           (System_Collections_Generic_List_CondType_Kind__o *)v12,
           0,
           v15);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getLevelUpVoiceList(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( this->fields.type == 2 && !System_String__IsNullOrEmpty(labelName, 0LL) )
    return ServantVoiceEntity__getVoiceList_31475968(this, 2, labelName, 0LL, 0, v5);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_List_VoiceCondType_Type__o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x5

  if ( (byte_42EBF54 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_CondType_Kind__Add__, (_DWORD)labelName, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v9, v10, v11);
    byte_42EBF54 = 1;
  }
  v12 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B5D694(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v12,
    (const MethodInfo_3043A54 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v12 )
    sub_B5D69C(v13, v14);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    81,
    (const MethodInfo_30447B0 *)Method_System_Collections_Generic_List_CondType_Kind__Add__);
  return ServantVoiceEntity__getVoiceList_31475968(
           this,
           2,
           labelName,
           (System_Collections_Generic_List_CondType_Kind__o *)v12,
           0,
           v15);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMasterMissionActionVoiceList(
        ServantVoiceEntity_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  _BOOL8 isQuestClearState; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v16; // w21
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v18; // x23
  struct ServantVoiceCond_array *conds; // x24
  __int64 v20; // x10
  __int64 v21; // x25
  char v22; // w27
  char v23; // w8
  char v24; // w9
  ServantVoiceCond_o *v25; // x10
  int32_t condType; // w11
  __int64 v28; // x0

  if ( (byte_42EBF5F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v8, v9, v10);
    byte_42EBF5F = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_31;
  v16 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v16 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v11;
    if ( v16 >= max_length )
    {
LABEL_33:
      v28 = sub_B5D6C8(isQuestClearState);
      sub_B5D668(v28, 0LL);
    }
    v18 = scriptJson->m_Items[v16];
    if ( !v18 )
      goto LABEL_31;
    conds = v18->fields.conds;
    if ( conds )
    {
      v20 = *(_QWORD *)&conds->max_length;
      if ( v20 )
      {
        if ( (int)v20 >= 1 )
        {
          v21 = 0LL;
          v22 = 0;
          v23 = 0;
          v24 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v21 >= (unsigned int)v20 )
              goto LABEL_33;
            v25 = conds->m_Items[v21];
            if ( !v25 )
              goto LABEL_31;
            condType = v25->fields.condType;
            switch ( condType )
            {
              case 16:
                goto LABEL_27;
              case 7:
                if ( (v23 & 1) == 0 )
                {
                  isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                        (ServantVoiceEntity_o *)isQuestClearState,
                                        v25->fields.value,
                                        v14);
                  if ( isQuestClearState )
                    goto LABEL_30;
                  v23 = 0;
                  goto LABEL_27;
                }
                if ( (v22 & 1) == 0 )
                  goto LABEL_30;
                isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                      (ServantVoiceEntity_o *)isQuestClearState,
                                      v25->fields.value,
                                      v14);
                if ( isQuestClearState )
                  goto LABEL_30;
                break;
              case 6:
                isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                      (ServantVoiceEntity_o *)isQuestClearState,
                                      v25->fields.value,
                                      v14);
                if ( !isQuestClearState )
                  goto LABEL_30;
                break;
              default:
                if ( (v24 & 1) == 0 )
                  goto LABEL_30;
                goto LABEL_27;
            }
            v22 = 1;
            v23 = 1;
LABEL_27:
            LODWORD(v20) = conds->max_length;
            ++v21;
            v24 = 1;
            if ( (int)v21 >= (int)v20 )
            {
              if ( v11 )
              {
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v11,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v18->fields.infos,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
                break;
              }
LABEL_31:
              sub_B5D69C(isQuestClearState, v13);
            }
          }
        }
      }
    }
LABEL_30:
    scriptJson = this->fields.scriptJson;
    ++v16;
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


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMasterMissionVoiceList_31486708(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_31475968(this, 8, labelName, 0LL, 1, v3);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x21
  const MethodInfo *v35; // x1
  int32_t v36; // w0
  const MethodInfo *v37; // x2
  int v38; // w27
  int32_t v39; // w26
  int64_t Instance; // x0
  __int64 v41; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t FriendShipRank; // w0
  int v44; // w22
  EventMissionProgressRequest_Argument_ProgressData_o *v45; // x1
  const MethodInfo_3056FC0 *v46; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v48; // w23
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v50; // x27
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v52; // x8
  struct ServantVoiceCond_array *conds; // x11
  __int64 v54; // x8
  ServantVoiceCond_o *v55; // x9
  __int64 v56; // x9
  int v57; // w10
  ServantVoiceCond_o **m_Items; // x11
  ServantVoiceCond_o *v59; // x12
  int32_t condType; // w13
  _BOOL4 v61; // w14
  _BOOL4 v62; // w12
  int32_t id; // w26
  int32_t v65; // w25
  __int64 v66; // x0

  if ( (byte_42EBF4B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, type, displayType, isPlayVoice);
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v22, v23, v24);
    sub_B5D5C4(&NetworkManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&ServantLimitUpVoiceCache_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32, v33);
    byte_42EBF4B = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v36 = ServantVoiceEntity__GetChangeLimitVoiceFriendshipLv(this, v35);
  v38 = v36 - 1;
  if ( v36 < 1 )
    goto LABEL_12;
  v39 = v36;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  if ( FriendShipRank >= v39 )
  {
    v44 = FriendShipRank;
    if ( displayType )
    {
      id = this->fields.id;
      if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      }
      if ( ServantLimitUpVoiceCache__IsLimitUpVoiceNormal(displayType, id, 0LL) )
        v44 = v38;
      if ( isPlayVoice )
      {
        v65 = this->fields.id;
        if ( (BYTE3(ServantLimitUpVoiceCache_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
        }
        ServantLimitUpVoiceCache__UpdateLimitUpVoice(displayType, v65, 0LL);
      }
    }
  }
  else
  {
LABEL_12:
    v44 = -1;
  }
  Instance = (int64_t)ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v37);
  if ( Instance )
  {
    if ( v34 )
    {
      v45 = *(EventMissionProgressRequest_Argument_ProgressData_o **)(Instance + 64);
      v46 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      goto LABEL_16;
    }
LABEL_68:
    sub_B5D69C(Instance, v41);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_68;
  v48 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v48 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v34;
    if ( v48 >= max_length )
      goto LABEL_69;
    v50 = scriptJson->m_Items[v48];
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_68;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    if ( !v50 )
      goto LABEL_68;
    infos = v50->fields.infos;
    if ( !infos )
      goto LABEL_68;
    if ( !infos->max_length )
      goto LABEL_69;
    v52 = infos->m_Items[0];
    if ( !v52 || !Instance )
      goto LABEL_68;
    Instance = VoicePlayCondMaster__isVoicePlay(
                 (VoicePlayCondMaster_o *)Instance,
                 this->fields.id,
                 v52->fields.id,
                 0LL,
                 -1LL,
                 genderType,
                 0LL);
    conds = v50->fields.conds;
    if ( conds )
    {
      v54 = *(_QWORD *)&conds->max_length;
      if ( v54 )
      {
        if ( !(_DWORD)v54 )
        {
LABEL_69:
          v66 = sub_B5D6C8(Instance);
          sub_B5D668(v66, 0LL);
        }
        v55 = conds->m_Items[0];
        if ( !v55 )
          goto LABEL_68;
        if ( v55->fields.condType == 11 )
          break;
      }
    }
LABEL_52:
    scriptJson = this->fields.scriptJson;
    ++v48;
    if ( !scriptJson )
      goto LABEL_68;
  }
  if ( v44 != -1 && (_DWORD)v54 != 1 )
  {
    if ( (int)v54 >= 1 )
    {
      v56 = 0LL;
      v57 = Instance & 1;
      m_Items = conds->m_Items;
      while ( 1 )
      {
        v59 = m_Items[v56];
        if ( !v59 )
          goto LABEL_68;
        condType = v59->fields.condType;
        v61 = condType == 22 && v59->fields.value >= v44;
        if ( (v61 & v57) != 0 )
          break;
        v62 = condType == 20 && v59->fields.value <= v44;
        if ( (v62 & v57) != 0 )
          break;
        if ( (int)++v56 >= (int)v54 )
          goto LABEL_52;
      }
      if ( !v34 )
        goto LABEL_68;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v34,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v50->fields.infos,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    }
    goto LABEL_52;
  }
  if ( (Instance & 1) == 0 )
    goto LABEL_52;
  if ( !v34 )
    goto LABEL_68;
  v45 = (EventMissionProgressRequest_Argument_ProgressData_o *)v50->fields.infos;
  v46 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__;
LABEL_16:
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v34, v45, v46);
  return (System_Collections_Generic_List_ServantVoiceData____o *)v34;
}


ServantVoiceData_array *__fastcall ServantVoiceEntity__getMstMissionVoiceListByName(
        ServantVoiceEntity_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList; // x0
  __int64 v16; // x1
  ServantVoiceData_array *current; // x20
  int monitor; // w8
  unsigned int v19; // w22
  ServantVoiceData_o *v20; // x8
  System_String_o *v21; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  char v24; // w19
  __int64 v26; // x0
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42EBF63 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__,
      (_DWORD)id,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v12, v13, v14);
    byte_42EBF63 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  VoiceList = ServantVoiceEntity__getVoiceList(this, 8, method);
  if ( !VoiceList )
    sub_B5D69C(0LL, v16);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)VoiceList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v28 = v27;
  do
  {
LABEL_13:
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v28,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v22 )
    {
      v24 = 0;
      current = 0LL;
      goto LABEL_16;
    }
    current = (ServantVoiceData_array *)v28.fields.current;
    if ( !v28.fields.current )
      sub_B5D69C(v22, v23);
    monitor = (int)v28.fields.current[1].monitor;
  }
  while ( monitor < 1 );
  v19 = 0;
  while ( 1 )
  {
    if ( v19 >= monitor )
    {
      v26 = sub_B5D6C8(v22);
      sub_B5D668(v26, 0LL);
    }
    v20 = current->m_Items[v19];
    if ( !v20 )
      sub_B5D69C(v22, v23);
    v21 = v20->fields.id;
    if ( !v21 )
      sub_B5D69C(0LL, v23);
    v22 = System_String__Equals_44565128(v21, id, 0LL);
    if ( v22 )
      break;
    monitor = current->max_length;
    if ( (int)++v19 >= monitor )
      goto LABEL_13;
  }
  v24 = 2;
LABEL_16:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v28,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  if ( ((v24 + 2) & 3) != 0 )
    return 0LL;
  else
    return current;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMyRoomFriendShipVoiceList(
        ServantVoiceEntity_o *this,
        int32_t friendShipRank,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  WebViewManager_o *Instance; // x0
  __int64 v19; // x1
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x22
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v23; // w24
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v25; // x23
  struct ServantVoiceData_array *infos; // x9
  struct ServantVoiceCond_array *conds; // x8
  __int64 v28; // x26
  int v29; // w9
  ServantVoiceCond_o *v30; // x8
  struct ServantVoiceData_array *v31; // x8
  ServantVoiceData_o *v32; // x8
  const MethodInfo *v33; // x4
  __int64 v35; // x0

  if ( (byte_42EBF51 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, friendShipRank, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42EBF51 = 1;
  }
  if ( this->fields.type != 1 )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v21,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_31:
    sub_B5D69C(Instance, v19);
  }
  v23 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v23 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v21;
    if ( v23 >= max_length )
    {
LABEL_34:
      v35 = sub_B5D6C8(Instance);
      sub_B5D668(v35, 0LL);
    }
    v25 = scriptJson->m_Items[v23];
    if ( v25 )
    {
      infos = v25->fields.infos;
      if ( infos && *(_QWORD *)&infos->max_length )
      {
        conds = v25->fields.conds;
        if ( !conds )
          goto LABEL_31;
        v28 = 0LL;
        while ( 1 )
        {
          v29 = conds->max_length;
          if ( (int)v28 >= v29 )
            break;
          if ( (unsigned int)v28 >= v29 )
            goto LABEL_34;
          v30 = conds->m_Items[v28];
          if ( !v30 )
            goto LABEL_31;
          if ( v30->fields.condType == 3 && v30->fields.value == friendShipRank )
          {
            v31 = v25->fields.infos;
            if ( !v31 )
              goto LABEL_31;
            if ( !v31->max_length )
              goto LABEL_34;
            v32 = v31->m_Items[0];
            if ( !v32 || !MasterData_WarQuestSelectionMaster )
              goto LABEL_31;
            Instance = (WebViewManager_o *)VoicePlayCondMaster__isVoicePlay(
                                             MasterData_WarQuestSelectionMaster,
                                             this->fields.id,
                                             v32->fields.id,
                                             0LL,
                                             -1LL,
                                             -1,
                                             0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (WebViewManager_o *)ServantVoiceEntity__isAvailableMyRoomVoice(this, v25, 0, 1, v33);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v21 )
                  goto LABEL_31;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v21,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v25->fields.infos,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
              }
            }
          }
          conds = v25->fields.conds;
          ++v28;
          if ( !conds )
            goto LABEL_31;
        }
        scriptJson = this->fields.scriptJson;
      }
      ++v23;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  WebViewManager_o *Instance; // x0
  __int64 v19; // x1
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x22
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v23; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v25; // x23
  struct ServantVoiceData_array *infos; // x8
  __int64 v27; // x9
  ServantVoiceData_o *v28; // x8
  const MethodInfo *v29; // x4
  struct ServantVoiceCond_array *conds; // x8
  __int64 v32; // x0

  if ( (byte_42EBF50 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, imageLimitCount, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42EBF50 = 1;
  }
  if ( this->fields.type != 1 )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v21,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_22:
    sub_B5D69C(Instance, v19);
  }
  v23 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v23 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v21;
    if ( (unsigned int)v23 >= max_length )
      goto LABEL_25;
    v25 = scriptJson->m_Items[v23];
    if ( !v25 )
      goto LABEL_22;
    infos = v25->fields.infos;
    if ( infos )
    {
      v27 = *(_QWORD *)&infos->max_length;
      if ( v27 )
      {
        if ( !(_DWORD)v27 )
        {
LABEL_25:
          v32 = sub_B5D6C8(Instance);
          sub_B5D668(v32, 0LL);
        }
        v28 = infos->m_Items[0];
        if ( !v28 || !MasterData_WarQuestSelectionMaster )
          goto LABEL_22;
        Instance = (WebViewManager_o *)VoicePlayCondMaster__isVoicePlay(
                                         MasterData_WarQuestSelectionMaster,
                                         this->fields.id,
                                         v28->fields.id,
                                         0LL,
                                         -1LL,
                                         -1,
                                         0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          conds = v25->fields.conds;
          if ( !conds )
            goto LABEL_22;
          if ( (int)conds->max_length < 1
            || (Instance = (WebViewManager_o *)ServantVoiceEntity__isAvailableMyRoomVoice(
                                                 this,
                                                 v25,
                                                 imageLimitCount,
                                                 0,
                                                 v29),
                ((unsigned __int8)Instance & 1) != 0) )
          {
            if ( !v21 )
              goto LABEL_22;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v21,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v25->fields.infos,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v23;
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

  return ServantVoiceEntity__getVoiceList_31475968(this, 7, labelName, 0LL, 1, v3);
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

  if ( (byte_42EBF4E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16113/*"_B050"*/, type, (_DWORD)labelName, conds);
    byte_42EBF4E = 1;
  }
  *conds = 0LL;
  sub_B5D560(
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
  sub_B5D560((BattleServantConfConponent_o *)overwriteName, 0LL, v18, v19, v20, v21, v22, v23);
  *overwriteNameDefault = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)overwriteNameDefault, 0LL, v24, v25, v26, v27, v28, v29);
  *overwritePriority = 0;
  if ( this->fields.type != type )
    return;
  if ( !labelName )
    goto LABEL_26;
  v30 = System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16113/*"_B050"*/, 0LL);
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
        v80 = sub_B5D6C8(v30);
        sub_B5D668(v80, 0LL);
      }
      v40 = scriptJson->m_Items[0];
      if ( v40 )
      {
        v41 = v40->fields.conds;
        *conds = v41;
        sub_B5D560((BattleServantConfConponent_o *)conds, (System_Int32_array **)v41, v32, v33, v34, v35, v36, v37);
        *isInvalidVoiceList = v40->fields.isInvalidVoiceList;
        v42 = v40->fields.overwriteName;
        *overwriteName = v42;
        sub_B5D560(
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
        sub_B5D560(
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
    sub_B5D69C(v30, v31);
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
    v30 = System_String__Equals_44565128(labelName, v63->fields.id, 0LL);
    if ( v30 )
      break;
    infos = v59->fields.infos;
    ++v61;
    if ( !infos )
      goto LABEL_26;
  }
  v70 = v59->fields.conds;
  *conds = v70;
  sub_B5D560((BattleServantConfConponent_o *)conds, (System_Int32_array **)v70, v64, v65, v66, v67, v68, v69);
  *isInvalidVoiceList = v59->fields.isInvalidVoiceList;
  if ( !isMaterial
    || (materialOverwriteName = v59->fields.materialOverwriteName,
        *overwriteName = materialOverwriteName,
        sub_B5D560(
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
    sub_B5D560((BattleServantConfConponent_o *)overwriteName, (System_Int32_array **)v78, v71, v72, v73, v74, v75, v76);
  }
  v79 = v59->fields.overwriteNameDefault;
  *overwriteNameDefault = v79;
  sub_B5D560(
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

  return ServantVoiceEntity__getVoiceList_31475384(this, 1, 3, friendShipRank, 0LL, -1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getSpecificLimitCntUpVoiceList(
        ServantVoiceEntity_o *this,
        int32_t limitCount,
        System_String_o *playVoiceLabel,
        int32_t genderType,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return ServantVoiceEntity__getVoiceList_31475384(this, 2, 9, limitCount, playVoiceLabel, genderType, v5);
}


int32_t __fastcall ServantVoiceEntity__getSvtIdfromVoiceAssetName(System_String_o *assetName, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_array *v5; // x0
  System_String_array *v6; // x1
  __int64 v8; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EBF46 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBF46 = 1;
  }
  result = 0;
  v5 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_13;
  v6 = v5;
  if ( !v5->max_length )
  {
    v8 = sub_B5D6C8(v5);
    sub_B5D668(v8, 0LL);
  }
  LOWORD(v5->m_Items[0]) = 95;
  if ( !assetName || (v5 = System_String__Split(assetName, (System_Char_array *)v5, 0LL), result = 0, !v5) )
LABEL_13:
    sub_B5D69C(v5, v6);
  if ( v5->max_length != 2 )
    return 0;
  if ( System_Int32__TryParse(v5->m_Items[1], &result, 0LL) )
    return result;
  return 0;
}


System_String_o *__fastcall ServantVoiceEntity__getVoiceAssetName(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  return ServantVoiceEntity__getVoiceAssetName_31472176(this->fields.id, method);
}


System_String_o *__fastcall ServantVoiceEntity__getVoiceAssetName_31472176(int32_t svtId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-4h] BYREF

  v6 = svtId;
  if ( (byte_42EBF45 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4030/*"ChrVoice_"*/, (_DWORD)method, v2, v3);
    byte_42EBF45 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  return System_String__Concat_44577788((System_String_o *)StringLiteral_4030/*"ChrVoice_"*/, v4, 0LL);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList(
        ServantVoiceEntity_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v16; // x21
  int max_length; // w9
  SvtVoiceInfo_o *v18; // x8
  __int64 v20; // x0

  if ( (byte_42EBF47 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, type, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v9, v10, v11);
    byte_42EBF47 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_11:
    sub_B5D69C(v13, v14);
  v16 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v16 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v12;
    if ( (unsigned int)v16 >= max_length )
    {
      v20 = sub_B5D6C8(v13);
      sub_B5D668(v20, 0LL);
    }
    v18 = scriptJson->m_Items[v16];
    if ( v18 )
    {
      if ( v12 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v18->fields.infos,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
        scriptJson = this->fields.scriptJson;
        ++v16;
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x22
  void *Instance; // x0
  __int64 v25; // x1
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x23
  const MethodInfo *v27; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v29; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v31; // x26
  struct ServantVoiceCond_array *conds; // x8
  __int64 v33; // x9
  ServantVoiceCond_o *v34; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v36; // x8
  __int64 v38; // x0

  if ( (byte_42EBF49 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, type, condType, *(_QWORD *)&genderType);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42EBF49 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v27);
  if ( Instance )
  {
    if ( v23 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v23,
        *((EventMissionProgressRequest_Argument_ProgressData_o **)Instance + 8),
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      return (System_Collections_Generic_List_ServantVoiceData____o *)v23;
    }
LABEL_27:
    sub_B5D69C(Instance, v25);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_27;
  v29 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v29 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v23;
    if ( (unsigned int)v29 >= max_length )
      goto LABEL_29;
    v31 = scriptJson->m_Items[v29];
    if ( !v31 )
      goto LABEL_27;
    conds = v31->fields.conds;
    if ( conds )
    {
      v33 = *(_QWORD *)&conds->max_length;
      if ( v33 )
      {
        if ( !(_DWORD)v33 )
          goto LABEL_29;
        v34 = conds->m_Items[0];
        if ( !v34 )
          goto LABEL_27;
        if ( v34->fields.condType == condType )
        {
          infos = v31->fields.infos;
          if ( !infos )
            goto LABEL_27;
          if ( !infos->max_length )
          {
LABEL_29:
            v38 = sub_B5D6C8(Instance);
            sub_B5D668(v38, 0LL);
          }
          v36 = infos->m_Items[0];
          if ( !v36 || !MasterData_WarQuestSelectionMaster )
            goto LABEL_27;
          Instance = (void *)VoicePlayCondMaster__isVoicePlay(
                               MasterData_WarQuestSelectionMaster,
                               this->fields.id,
                               v36->fields.id,
                               0LL,
                               -1LL,
                               genderType,
                               0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v23 )
              goto LABEL_27;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v23,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v31->fields.infos,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v29;
    if ( !scriptJson )
      goto LABEL_27;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList_31475384(
        ServantVoiceEntity_o *this,
        int32_t type,
        int32_t condType,
        int32_t condValue,
        System_String_o *playVoiceLabel,
        int32_t genderType,
        const MethodInfo *method)
{
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
  void *Instance; // x0
  __int64 v26; // x1
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x23
  const MethodInfo *v29; // x2
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned __int64 v31; // x25
  unsigned __int64 max_length; // x9
  SvtVoiceInfo_o *v33; // x27
  struct ServantVoiceCond_array *conds; // x9
  __int64 v35; // x28
  int v36; // w8
  ServantVoiceCond_o *v37; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v39; // x8
  __int64 v41; // x0

  if ( (byte_42EBF4C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, type, condType, *(_QWORD *)&condValue);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23, v24);
    byte_42EBF4C = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v29);
  if ( Instance )
  {
    if ( v28 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v28,
        *((EventMissionProgressRequest_Argument_ProgressData_o **)Instance + 8),
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
      return (System_Collections_Generic_List_ServantVoiceData____o *)v28;
    }
LABEL_35:
    sub_B5D69C(Instance, v26);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_35;
  v31 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (__int64)v31 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v28;
    if ( v31 >= max_length )
    {
LABEL_37:
      v41 = sub_B5D6C8(Instance);
      sub_B5D668(v41, 0LL);
    }
    v33 = scriptJson->m_Items[v31];
    if ( v33 )
    {
      conds = v33->fields.conds;
      if ( conds )
      {
        v35 = 0LL;
        while ( 1 )
        {
          v36 = conds->max_length;
          if ( (int)v35 >= v36 )
            break;
          if ( (unsigned int)v35 >= v36 )
            goto LABEL_37;
          v37 = conds->m_Items[v35];
          if ( !v37 )
            goto LABEL_35;
          if ( v37->fields.condType == condType )
          {
            if ( condType != 3 && condType != 23 && condType != 9 )
              goto LABEL_29;
            if ( v37->fields.value == condValue )
            {
              infos = v33->fields.infos;
              if ( !infos )
                goto LABEL_35;
              if ( !infos->max_length )
                goto LABEL_37;
              v39 = infos->m_Items[0];
              if ( !v39 || !MasterData_WarQuestSelectionMaster )
                goto LABEL_35;
              Instance = (void *)VoicePlayCondMaster__isVoicePlay(
                                   MasterData_WarQuestSelectionMaster,
                                   this->fields.id,
                                   v39->fields.id,
                                   0LL,
                                   -1LL,
                                   genderType,
                                   0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
LABEL_29:
                if ( !v28 )
                  goto LABEL_35;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v28,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v33->fields.infos,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
              }
            }
          }
          conds = v33->fields.conds;
          ++v35;
          if ( !conds )
            goto LABEL_35;
        }
        scriptJson = this->fields.scriptJson;
      }
    }
    ++v31;
    if ( !scriptJson )
      goto LABEL_35;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList_31475968(
        ServantVoiceEntity_o *this,
        int32_t type,
        System_String_o *labelName,
        System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList,
        bool isCheckPlayCond,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  WebViewManager_o *Instance; // x0
  struct ServantVoiceData_array *infos; // x1
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v31; // x9
  SvtVoiceInfo_o *v32; // x8
  il2cpp_array_size_t v33; // w26
  _BOOL4 v34; // w24
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v36; // x25
  struct ServantVoiceData_array *v37; // x9
  __int64 v38; // x27
  int v39; // w8
  ServantVoiceData_o *v40; // x28
  __int64 v42; // x0

  if ( (byte_42EBF4D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, type, (_DWORD)labelName, disableCondTypeList);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_16113/*"_B050"*/, v23, v24, v25);
    byte_42EBF4D = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !labelName )
    goto LABEL_40;
  Instance = (WebViewManager_o *)System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16113/*"_B050"*/, 0LL);
  scriptJson = this->fields.scriptJson;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( scriptJson )
    {
      v31 = *(_QWORD *)&scriptJson->max_length;
      if ( !v31 )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v29;
      if ( !(_DWORD)v31 )
      {
LABEL_41:
        v42 = sub_B5D6C8(Instance);
        sub_B5D668(v42, 0LL);
      }
      v32 = scriptJson->m_Items[0];
      if ( v32 )
      {
        infos = v32->fields.infos;
        if ( !infos || !*(_QWORD *)&infos->max_length )
          return (System_Collections_Generic_List_ServantVoiceData____o *)v29;
        if ( v29 )
          goto LABEL_38;
      }
    }
LABEL_40:
    sub_B5D69C(Instance, infos);
  }
  if ( !scriptJson )
    goto LABEL_40;
  v33 = 0;
  v34 = (unsigned int)(type - 1) < 2 && isCheckPlayCond;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v33 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v29;
    if ( v33 >= max_length )
      goto LABEL_41;
    v36 = scriptJson->m_Items[v33];
    if ( !v36 )
      goto LABEL_40;
    v37 = v36->fields.infos;
    if ( v37 )
      break;
LABEL_34:
    ++v33;
    if ( !scriptJson )
      goto LABEL_40;
  }
  v38 = 0LL;
  while ( 1 )
  {
    v39 = v37->max_length;
    if ( (int)v38 >= v39 )
    {
      scriptJson = this->fields.scriptJson;
      goto LABEL_34;
    }
    if ( (unsigned int)v38 >= v39 )
      goto LABEL_41;
    v40 = v37->m_Items[v38];
    if ( !v40 )
      goto LABEL_40;
    Instance = (WebViewManager_o *)System_String__Equals_44565128(labelName, v40->fields.id, 0LL);
    if ( !v34 )
      break;
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_40;
      Instance = (WebViewManager_o *)VoicePlayCondMaster__isVoicePlay(
                                       MasterData_WarQuestSelectionMaster,
                                       this->fields.id,
                                       v40->fields.id,
                                       disableCondTypeList,
                                       -1LL,
                                       -1,
                                       0LL);
      break;
    }
LABEL_31:
    v37 = v36->fields.infos;
    ++v38;
    if ( !v37 )
      goto LABEL_40;
  }
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_31;
  if ( !v29 )
    goto LABEL_40;
  infos = v36->fields.infos;
LABEL_38:
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v29,
    (EventMissionProgressRequest_Argument_ProgressData_o *)infos,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantVoiceData____Add__);
  return (System_Collections_Generic_List_ServantVoiceData____o *)v29;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantVoiceEntity__isAvailableMyRoomVoice(
        ServantVoiceEntity_o *this,
        SvtVoiceInfo_o *info,
        int32_t imageLimitCount,
        bool isBeforeFriendship,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  UserGameEntity_o *SelfUserGame; // x20
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  UserServantMaster_o *v21; // x22
  UserServantEntity_o *Entity; // x20
  UserServantEntity_array *v23; // x22
  int32_t FriendshipRank; // w0
  const MethodInfo *v25; // x2
  struct ServantVoiceCond_array *conds; // x25
  int max_length; // w8
  int32_t v28; // w24
  int v29; // w26
  bool v30; // w21
  ServantVoiceCond_o *v31; // x23
  int32_t value; // w23
  ServantVoiceEntity_o *v33; // x0
  UserGameEntity_o *v34; // x2
  __int64 v36; // x0
  const MethodInfo *v37; // [xsp+0h] [xbp-60h]

  if ( (byte_42EBF5A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_UserServantMaster___,
      (_DWORD)info,
      imageLimitCount,
      isBeforeFriendship);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&VoiceCondType_TypeInfo, v15, v16, v17);
    byte_42EBF5A = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame
    || (v21 = (UserServantMaster_o *)Instance) == 0LL
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   SelfUserGame->fields.favoriteUserSvtId,
                   (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
        Instance = (DataManager_o *)UserServantMaster__getAllList(v21, 0LL),
        !Entity)
    || (v23 = (UserServantEntity_array *)Instance,
        FriendshipRank = UserServantEntity__getFriendshipRank(Entity, 0LL),
        Instance = (DataManager_o *)ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v25),
        !info)
    || (conds = info->fields.conds) == 0LL )
  {
LABEL_23:
    sub_B5D69C(Instance, v20);
  }
  max_length = conds->max_length;
  if ( max_length < 1 )
    return 0;
  v28 = (int)Instance;
  v29 = 0;
  v30 = isBeforeFriendship;
  do
  {
    if ( v29 >= (unsigned int)max_length )
    {
      v36 = sub_B5D6C8(Instance);
      sub_B5D668(v36, 0LL);
    }
    v31 = conds->m_Items[v29];
    if ( !v31 )
      goto LABEL_23;
    if ( v31->fields.condType == 23 )
    {
      value = v31->fields.value;
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
      v33 = (ServantVoiceEntity_o *)UserServantEntity__getFriendshipRank(Entity, 0LL);
      Instance = (DataManager_o *)ServantVoiceEntity__IsAvailableHomeAndGrowth(
                                    v33,
                                    v31,
                                    v34,
                                    Entity,
                                    v23,
                                    v28,
                                    (int32_t)v33,
                                    v30,
                                    v37);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        return 0;
    }
    max_length = conds->max_length;
    ++v29;
  }
  while ( v29 < max_length );
  return 1;
}


bool __fastcall ServantVoiceEntity__isAvailableVoice(
        ServantVoiceEntity_o *this,
        SvtVoiceInfo_o *info,
        int64_t userSvtId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  UserServantEntity_o *Entity; // x2
  const MethodInfo *v16; // x3

  if ( (byte_42EBF58 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)info, userSvtId, method);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42EBF58 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v14);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return ServantVoiceEntity__isAvailableVoice_31482156(this, info, Entity, v16);
}


bool __fastcall ServantVoiceEntity__isAvailableVoice_31482156(
        ServantVoiceEntity_o *this,
        SvtVoiceInfo_o *info,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  UserServantEntity_array *AllList; // x20
  int32_t FriendshipRank; // w0
  const MethodInfo *v17; // x2
  struct ServantVoiceCond_array *conds; // x25
  int max_length; // w8
  int32_t v20; // w21
  unsigned int v21; // w26
  ServantVoiceCond_o *v22; // x23
  int32_t condType; // w22
  ServantVoiceEntity_o *v24; // x0
  UserGameEntity_o *v25; // x2
  int32_t value; // w23
  int32_t v27; // w2
  int32_t v28; // w0
  int32_t v29; // w1
  int32_t v30; // w23
  int32_t LimitCount; // w24
  __int64 v32; // x0
  const MethodInfo *v34; // [xsp+0h] [xbp-60h]

  if ( (byte_42EBF59 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)info, (_DWORD)userSvtEntity, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&VoiceCondType_TypeInfo, v10, v11, v12);
    byte_42EBF59 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_27;
  UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_28;
  AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
  FriendshipRank = UserServantEntity__getFriendshipRank(userSvtEntity, 0LL);
  Instance = (DataManager_o *)ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v17);
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
  v20 = (int)Instance;
  v21 = 0;
  while ( 2 )
  {
    if ( v21 >= max_length )
    {
      v32 = sub_B5D6C8(Instance);
      sub_B5D668(v32, 0LL);
    }
    v22 = conds->m_Items[v21];
    if ( !v22 )
LABEL_28:
      sub_B5D69C(Instance, v14);
    condType = v22->fields.condType;
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
        value = v22->fields.value;
        if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !VoiceCondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
        }
        v27 = -1;
        v28 = condType;
        v29 = value;
        goto LABEL_19;
      default:
        if ( (unsigned int)(condType - 24) > 2 )
        {
LABEL_13:
          v24 = (ServantVoiceEntity_o *)UserServantEntity__getFriendshipRank(userSvtEntity, 0LL);
          Instance = (DataManager_o *)ServantVoiceEntity__IsAvailableHomeAndGrowth(
                                        v24,
                                        v22,
                                        v25,
                                        userSvtEntity,
                                        AllList,
                                        v20,
                                        (int32_t)v24,
                                        0,
                                        v34);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_27;
        }
        else
        {
          v30 = v22->fields.value;
          LimitCount = UserServantEntity__getLimitCount(userSvtEntity, 0LL);
          if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !VoiceCondType_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
          }
          v28 = condType;
          v29 = v30;
          v27 = LimitCount;
LABEL_19:
          Instance = (DataManager_o *)VoiceCondType__IsSatisfyCondition(v28, v29, v27, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_27;
        }
LABEL_20:
        max_length = conds->max_length;
        if ( (int)++v21 < max_length )
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EBF61 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, eventId, time, method);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42EBF61 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_9;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                eventId,
                                (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return *(_QWORD *)&entity->fields.eventId <= time;
LABEL_9:
    sub_B5D69C(Instance, v13);
  }
  return 0;
}


bool __fastcall ServantVoiceEntity__isQuestClearState(
        ServantVoiceEntity_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EBF60 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, questId, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EBF60 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    sub_B5D69C(Instance, v12);
  }
  return 0;
}


ServantVoiceData_array *__fastcall ServantVoiceEntity__lotteryLevelUpVoice(
        ServantVoiceEntity_o *this,
        int64_t userSvtId,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  UserServantEntity_o *Entity; // x1
  const MethodInfo *v16; // x3

  if ( (byte_42EBF55 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId, (_DWORD)voiceId, method);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42EBF55 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v14);
  }
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return ServantVoiceEntity__lotteryLevelUpVoice_31480304(this, Entity, voiceId, v16);
}


ServantVoiceData_array *__fastcall ServantVoiceEntity__lotteryLevelUpVoice_31480304(
        ServantVoiceEntity_o *this,
        UserServantEntity_o *userServantEntity,
        System_String_o *voiceId,
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
  int64_t Instance; // x0
  __int64 v47; // x1
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x20
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v51; // x28
  UserServantEntity_Fields *p_fields; // x27
  __int64 v53; // x9
  SvtVoiceInfo_o *v54; // x24
  struct ServantVoiceData_array *infos; // x8
  __int64 v56; // x9
  ServantVoiceData_o *v57; // x8
  ServantVoiceData_o *v58; // x8
  __int128 v59; // q1
  int32_t id; // w25
  System_String_o *v61; // x26
  const MethodInfo *v62; // x3
  struct ServantVoiceCond_array *conds; // x8
  WeightRate_int__o *v65; // x21
  int size; // w23
  int32_t i; // w22
  int v68; // w8
  __int64 v69; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *v70; // x8
  __int64 v71; // x8
  __int64 v72; // x8
  unsigned int v73; // w28
  SvtVoiceInfo_o *v74; // x24
  struct ServantVoiceData_array *v75; // x8
  __int64 v76; // x9
  ServantVoiceData_o *v77; // x8
  __int128 v78; // q1
  int32_t v79; // w25
  System_String_o *v80; // x26
  const MethodInfo *v81; // x3
  struct ServantVoiceCond_array *v82; // x8
  int32_t v83; // w0
  EventMissionProgressRequest_Argument_ProgressData_o *v84; // x8
  __int64 v85; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+20h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+40h] [xbp-70h]

  if ( (byte_42EBF57 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_VoicePlayCondMaster___,
      (_DWORD)userServantEntity,
      (_DWORD)voiceId,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Count__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&ServantVoiceData___TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29, v30);
    sub_B5D5C4(&Method_WeightRate_int___ctor__, v31, v32, v33);
    sub_B5D5C4(&Method_WeightRate_int__getData__, v34, v35, v36);
    sub_B5D5C4(&Method_WeightRate_int__getTotalWeight__, v37, v38, v39);
    sub_B5D5C4(&Method_WeightRate_int__setWeight__, v40, v41, v42);
    sub_B5D5C4(&WeightRate_int__TypeInfo, v43, v44, v45);
    byte_42EBF57 = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v49,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_79;
  v51 = 0LL;
  p_fields = &userServantEntity->fields;
  while ( 1 )
  {
    v53 = *(_QWORD *)&scriptJson->max_length;
    if ( (int)v51 >= (int)v53 )
      break;
    if ( (unsigned int)v51 >= (unsigned int)v53 )
      goto LABEL_80;
    v54 = scriptJson->m_Items[v51];
    if ( !v54 )
      goto LABEL_79;
    infos = v54->fields.infos;
    if ( infos )
    {
      v56 = *(_QWORD *)&infos->max_length;
      if ( v56 )
      {
        if ( voiceId )
        {
          if ( !(_DWORD)v56 )
            goto LABEL_80;
          v57 = infos->m_Items[0];
          if ( !v57 )
            goto LABEL_79;
          Instance = System_String__op_Equality(v57->fields.id, voiceId, 0LL);
          if ( (Instance & 1) != 0 )
            goto LABEL_17;
        }
        else
        {
          if ( !(_DWORD)v56 )
            goto LABEL_80;
          v58 = infos->m_Items[0];
          if ( !v58 )
            goto LABEL_79;
          v59 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          id = this->fields.id;
          v61 = v58->fields.id;
          *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
          *(_OWORD *)&v88.fields.fakeValue = v59;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v87 = v88;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v87, 0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_79;
          Instance = VoicePlayCondMaster__isVoicePlay(
                       MasterData_WarQuestSelectionMaster,
                       id,
                       v61,
                       0LL,
                       Instance,
                       -1,
                       0LL);
          if ( (Instance & 1) != 0 )
          {
            conds = v54->fields.conds;
            if ( conds )
            {
              if ( *(_QWORD *)&conds->max_length )
              {
                Instance = ServantVoiceEntity__isAvailableVoice_31482156(this, v54, userServantEntity, v62);
                if ( (Instance & 1) != 0 )
                {
LABEL_17:
                  if ( !v49 )
                    goto LABEL_79;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v49,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
                }
              }
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v51;
    if ( !scriptJson )
      goto LABEL_79;
  }
  if ( !v49 )
    goto LABEL_79;
  if ( !v49->fields._size )
  {
    if ( !voiceId )
      return (ServantVoiceData_array *)sub_B5D5DC(ServantVoiceData___TypeInfo, 0LL);
    if ( (int)v53 >= 1 )
    {
      v73 = 0;
      while ( v73 < (unsigned int)v53 )
      {
        v74 = scriptJson->m_Items[v73];
        if ( !v74 )
          goto LABEL_79;
        v75 = v74->fields.infos;
        if ( v75 )
        {
          v76 = *(_QWORD *)&v75->max_length;
          if ( v76 )
          {
            if ( !(_DWORD)v76 )
              break;
            v77 = v75->m_Items[0];
            if ( !v77 )
              goto LABEL_79;
            v78 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            v79 = this->fields.id;
            v80 = v77->fields.id;
            *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v88.fields.fakeValue = v78;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v86 = v88;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v86, 0LL);
            if ( !MasterData_WarQuestSelectionMaster )
              goto LABEL_79;
            Instance = VoicePlayCondMaster__isVoicePlay(
                         MasterData_WarQuestSelectionMaster,
                         v79,
                         v80,
                         0LL,
                         Instance,
                         -1,
                         0LL);
            if ( (Instance & 1) != 0 )
            {
              v82 = v74->fields.conds;
              if ( v82 )
              {
                if ( *(_QWORD *)&v82->max_length )
                {
                  Instance = ServantVoiceEntity__isAvailableVoice_31482156(this, v74, userServantEntity, v81);
                  if ( (Instance & 1) != 0 )
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v49,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v74,
                      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
                }
              }
            }
          }
        }
        scriptJson = this->fields.scriptJson;
        if ( !scriptJson )
          goto LABEL_79;
        LODWORD(v53) = scriptJson->max_length;
        if ( (int)++v73 >= (int)v53 )
          goto LABEL_70;
      }
LABEL_80:
      v85 = sub_B5D6C8(Instance);
      sub_B5D668(v85, 0LL);
    }
LABEL_70:
    if ( !v49->fields._size )
      return (ServantVoiceData_array *)sub_B5D5DC(ServantVoiceData___TypeInfo, 0LL);
  }
  v65 = (WeightRate_int__o *)sub_B5D694(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v65, (const MethodInfo_2BF9C18 *)Method_WeightRate_int___ctor__);
  size = v49->fields._size;
  if ( size >= 1 )
  {
    if ( v65 )
    {
      for ( i = 0; i != size; ++i )
        WeightRate_int___setWeight(v65, 1, i, (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
      goto LABEL_38;
    }
    goto LABEL_79;
  }
LABEL_38:
  Instance = System_String__IsNullOrEmpty(voiceId, 0LL);
  if ( (Instance & 1) != 0 )
    goto LABEL_73;
  v68 = v49->fields._size;
  if ( v68 < 1 )
    goto LABEL_73;
  v69 = 0LL;
  while ( 1 )
  {
    if ( v68 <= (unsigned int)v69 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v70 = v49->fields._items->m_Items[v69];
    if ( !v70 )
      goto LABEL_79;
    v71 = *(_QWORD *)&v70[1].fields.targetId;
    if ( !v71 )
      goto LABEL_79;
    if ( !*(_DWORD *)(v71 + 24) )
      goto LABEL_80;
    v72 = *(_QWORD *)(v71 + 32);
    if ( !v72 )
      goto LABEL_79;
    Instance = System_String__op_Equality(*(System_String_o **)(v72 + 16), voiceId, 0LL);
    if ( (Instance & 1) != 0 )
      break;
    v68 = v49->fields._size;
    if ( (int)++v69 >= v68 )
      goto LABEL_73;
  }
  if ( (_DWORD)v69 == -1 )
  {
LABEL_73:
    if ( !v65 )
      goto LABEL_79;
    v83 = UnityEngine_Random__Range_35654020(0, v65->fields.totalweight, 0LL);
    Instance = WeightRate_int___getData(v65, v83, (const MethodInfo_2BF9264 *)Method_WeightRate_int__getData__);
    LODWORD(v69) = Instance;
  }
  if ( v49->fields._size <= (unsigned int)v69 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v84 = v49->fields._items->m_Items[(int)v69];
  if ( !v84 )
LABEL_79:
    sub_B5D69C(Instance, v47);
  return *(ServantVoiceData_array **)&v84[1].fields.targetId;
}


System_Collections_Generic_List_SvtVoiceInfo__o *__fastcall ServantVoiceEntity__randomChangeSvtVoiceCount(
        ServantVoiceEntity_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int64_t Instance; // x0
  __int64 v22; // x1
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v26; // x26
  int max_length; // w9
  SvtVoiceInfo_o *v28; // x23
  struct ServantVoiceData_array *infos; // x8
  __int64 v30; // x9
  ServantVoiceData_o *v31; // x8
  __int128 v32; // q1
  int32_t id; // w24
  System_String_o *v34; // x25
  const MethodInfo *v35; // x3
  struct ServantVoiceCond_array *conds; // x8
  __int64 v38; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+20h] [xbp-70h]

  if ( (byte_42EBF56 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, (_DWORD)userServantEntity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42EBF56 = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v24,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_26:
    sub_B5D69C(Instance, v22);
  }
  v26 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v26 >= max_length )
      return (System_Collections_Generic_List_SvtVoiceInfo__o *)v24;
    if ( (unsigned int)v26 >= max_length )
      goto LABEL_29;
    v28 = scriptJson->m_Items[v26];
    if ( !v28 )
      goto LABEL_26;
    infos = v28->fields.infos;
    if ( infos )
    {
      v30 = *(_QWORD *)&infos->max_length;
      if ( v30 )
      {
        if ( !(_DWORD)v30 )
        {
LABEL_29:
          v38 = sub_B5D6C8(Instance);
          sub_B5D668(v38, 0LL);
        }
        v31 = infos->m_Items[0];
        if ( !v31 )
          goto LABEL_26;
        v32 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        id = this->fields.id;
        v34 = v31->fields.id;
        *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v40.fields.fakeValue = v32;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v39 = v40;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v39, 0LL);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_26;
        Instance = VoicePlayCondMaster__isVoicePlay(MasterData_WarQuestSelectionMaster, id, v34, 0LL, Instance, -1, 0LL);
        if ( (Instance & 1) != 0 )
        {
          conds = v28->fields.conds;
          if ( conds )
          {
            if ( *(_QWORD *)&conds->max_length )
            {
              Instance = ServantVoiceEntity__isAvailableVoice_31482156(this, v28, userServantEntity, v35);
              if ( (Instance & 1) != 0 )
              {
                if ( !v24 )
                  goto LABEL_26;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v24,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
              }
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v26;
    if ( !scriptJson )
      goto LABEL_26;
  }
}