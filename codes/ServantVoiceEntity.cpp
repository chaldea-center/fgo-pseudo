void __fastcall ServantVoiceEntity___ctor(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8465 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_string___ctor__, method);
    byte_4BC8465 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_324620C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantVoiceEntity__CreatePK(
        int32_t id,
        int32_t voicePrefix,
        int32_t type,
        const MethodInfo *method)
{
  if ( (byte_4BC8444 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&voicePrefix);
    byte_4BC8444 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           voicePrefix,
           type,
           (const MethodInfo_2F9DB44 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  unsigned int v3; // w19
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x9
  unsigned __int64 v8; // x10
  struct SvtVoiceInfo_array *scriptJson; // x10
  int max_length; // w11
  int i; // w12
  SvtVoiceInfo_o *v12; // x13
  struct ServantVoiceCond_array *conds; // x13
  __int64 v14; // x14
  int v15; // w15
  ServantVoiceCond_o *v16; // x16
  __int64 value; // x16

  v3 = rankNow;
  if ( (byte_4BC8451 & 1) == 0 )
  {
    sub_1C1ABD4(&int___TypeInfo, *(_QWORD *)&rankNow);
    byte_4BC8451 = 1;
  }
  v5 = sub_1C1AC7C(int___TypeInfo, v3);
  if ( !v5 )
    goto LABEL_31;
  v7 = *(_QWORD *)(v5 + 24);
  if ( (__int64)((unsigned __int64)(unsigned int)v7 << 32) >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v7 )
LABEL_32:
        sub_1C1AE38(v5, v6);
      *(_DWORD *)(v5 + 32 + 4 * v8++) = 0;
    }
    while ( (int)v7 != v8 );
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_31:
    sub_1C1AE30(v5, v6);
  max_length = scriptJson->max_length;
  if ( max_length < 1 )
    goto LABEL_28;
  for ( i = 0; i < max_length; ++i )
  {
    if ( i >= (unsigned int)max_length )
      goto LABEL_32;
    v12 = scriptJson->m_Items[i];
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
          v15 = 0;
          do
          {
            v16 = conds->m_Items[v15];
            if ( !v16 )
              goto LABEL_31;
            if ( v16->fields.condType == 3 )
            {
              value = v16->fields.value;
              if ( (_DWORD)value == v3 )
                return v3;
              if ( (int)value < (int)v3 )
              {
                if ( (unsigned int)value >= (unsigned int)v7 )
                  goto LABEL_32;
                ++*(_DWORD *)(v5 + 4 * value + 32);
              }
            }
          }
          while ( (_DWORD)v14 != ++v15 );
        }
      }
    }
  }
LABEL_28:
  while ( (--v3 & 0x80000000) == 0 )
  {
    if ( v3 >= (unsigned int)v7 )
      goto LABEL_32;
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

  if ( this->fields.type != type )
    return 0;
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_18:
    sub_1C1AE30(this, *(_QWORD *)&type);
  max_length = scriptJson->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
LABEL_19:
      sub_1C1AE38(this, *(_QWORD *)&type);
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
    this = (ServantVoiceEntity_o *)System_String__Equals_63048684(labelName, v12->fields.id, 0LL);
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
  struct ServantVoiceCond_array *conds; // x11
  __int64 v7; // x12
  ServantVoiceCond_o *v8; // x13
  int v9; // w13
  ServantVoiceCond_o *v10; // x14

  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_23:
    sub_1C1AE30(this, method);
  max_length = scriptJson->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    this = 0LL;
    while ( 1 )
    {
      if ( v4 >= max_length )
LABEL_24:
        sub_1C1AE38(this, method);
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
              v9 = 0;
              while ( 1 )
              {
                v10 = conds->m_Items[v9];
                if ( !v10 )
                  goto LABEL_23;
                if ( v10->fields.condType == 20 )
                  break;
                if ( (_DWORD)v7 == ++v9 )
                  goto LABEL_19;
              }
              this = (ServantVoiceEntity_o *)(unsigned int)v10->fields.value;
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
    return ServantVoiceEntity__getVoiceList_41076044(this, 3, labelName, 0LL, 1, v5);
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

  IsNullOrEmpty = System_String__IsNullOrEmpty(playVoiceLabel, 0LL);
  v7 = 0LL;
  if ( !IsNullOrEmpty )
  {
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
LABEL_13:
      sub_1C1AE30(IsNullOrEmpty, v6);
    v9 = 0LL;
    while ( 1 )
    {
      max_length = scriptJson->max_length;
      if ( (__int64)v9 >= (int)max_length )
        return 0LL;
      if ( v9 >= max_length )
        sub_1C1AE38(IsNullOrEmpty, v6);
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
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  VoicePlayCondMaster_o *v9; // x21
  __int64 v10; // x23
  int max_length; // w9
  SvtVoiceInfo_o *v12; // x8
  struct ServantVoiceData_array *infos; // x9
  ServantVoiceData_o *v14; // x9
  System_String_o *summonScript; // x22

  if ( (byte_4BC8464 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BC8464 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_16:
    sub_1C1AE30(Instance, v7);
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
LABEL_19:
      sub_1C1AE38(Instance, v7);
    v14 = infos->m_Items[0];
    if ( !v14 || !v9 )
      goto LABEL_16;
    summonScript = v12->fields.summonScript;
    Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(v9, svtId, v14->fields.id, 0LL, -1LL, -1, 0LL, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (Il2CppObject *)System_String__IsNullOrEmpty(summonScript, 0LL);
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
  __int64 v15; // x1
  int32_t condType; // w22
  int32_t v17; // w19
  int32_t v18; // w2
  int32_t v19; // w0
  int32_t v20; // w1
  int32_t value; // w19
  int32_t v22; // w19
  int32_t v24; // w20
  int32_t v25; // w20
  __int64 v26; // x21
  __int64 v27; // x22
  int32_t v28; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4BC845A & 1) == 0 )
  {
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, cond);
    this = (ServantVoiceEntity_o *)sub_1C1ABD4(&VoiceCondType_TypeInfo, v15);
    byte_4BC845A = 1;
  }
  if ( !cond )
LABEL_41:
    sub_1C1AE30(this, cond);
  condType = cond->fields.condType;
  switch ( condType )
  {
    case 1:
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      return VoiceCondType__IsSatisfyBirthdayCondition(0LL);
    case 2:
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      return VoiceCondType__IsSatisfyEventCondition(0LL);
    case 3:
      if ( isBeforeFriendship )
      {
        value = cond->fields.value;
        if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
        v19 = 20;
      }
      else
      {
        if ( friendshipRankWithVoice == -1 )
          return 0;
        value = cond->fields.value;
        if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
        v19 = 3;
      }
LABEL_38:
      v20 = value;
      v18 = friendshipRankWithVoice;
      return VoiceCondType__IsSatisfyCondition(v19, v20, v18, 0LL);
    case 4:
      v24 = cond->fields.value;
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      return VoiceCondType__IsSatisfySvtGetCondition(v24, usrSvtList, 0LL);
    case 5:
      if ( !userSvtEntity )
        goto LABEL_41;
      v25 = cond->fields.value;
      v27 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v26 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v29.fields.currentCryptoKey = v27;
      *(_QWORD *)&v29.fields.fakeValue = v26;
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v29, 0LL);
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      return VoiceCondType__IsSatisfySvtGroupCondition(v25, v28, usrSvtList, 0LL);
    case 6:
    case 7:
    case 12:
      v17 = cond->fields.value;
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      v18 = -1;
      v19 = condType;
      v20 = v17;
      return VoiceCondType__IsSatisfyCondition(v19, v20, v18, 0LL);
    case 9:
    case 17:
      if ( !userSvtEntity )
        goto LABEL_41;
      value = cond->fields.value;
      friendshipRankWithVoice = UserServantEntity__getLimitCount(userSvtEntity, 0LL);
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      v19 = condType;
      goto LABEL_38;
    case 20:
    case 22:
      v22 = cond->fields.value;
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      v19 = condType;
      v20 = v22;
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

  return ServantVoiceEntity__getVoiceList_41076044(this, 6, labelName, 0LL, 1, v3);
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
  System_Collections_Generic_List_object__o *v9; // x20
  int64_t Time; // x21
  Il2CppObject *Instance; // x0
  Il2CppObject *p_obj; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x22
  il2cpp_array_size_t v21; // w23
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v23; // x28
  struct ServantVoiceCond_array *conds; // x29
  __int64 v25; // x8
  __int64 v26; // x19
  ServantVoiceCond_o *v27; // x27
  unsigned int condType; // w8
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BC845B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_1C1ABD4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v5);
    sub_1C1ABD4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v6);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4BC845B = 1;
  }
  entity = 0LL;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_36:
    sub_1C1AE30(Instance, p_obj);
  }
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v21 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v21 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v9;
    if ( v21 >= max_length )
      goto LABEL_38;
    v23 = scriptJson->m_Items[v21];
    if ( !v23 )
      goto LABEL_36;
    conds = v23->fields.conds;
    if ( conds && (v25 = *(_QWORD *)&conds->max_length) != 0 )
    {
      if ( (int)v25 >= 1 )
      {
        v26 = 0LL;
        while ( (unsigned int)v26 < (unsigned int)v25 )
        {
          v27 = conds->m_Items[v26];
          if ( !v27 || !v20 )
            goto LABEL_36;
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       v20,
                                       &entity,
                                       v27->fields.value,
                                       (const MethodInfo_32486C4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_36;
            if ( Time <= (__int64)entity[6].monitor )
            {
              condType = v27->fields.condType;
              if ( condType <= 0x13 && ((1 << condType) & 0x86000) != 0 )
              {
                if ( !v9 )
                  goto LABEL_36;
                p_obj = &v23->fields.infos->obj;
                items = v9->fields._items;
                v30 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v9->fields._version;
                if ( !items )
                  goto LABEL_36;
                size = v9->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v9,
                    p_obj,
                    *(const MethodInfo_363C890 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
                }
                else
                {
                  v32 = &items->obj.klass + size;
                  v9->fields._size = size + 1;
                  v32[4] = (Il2CppClass *)p_obj;
                  sub_1C1AB78((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)p_obj, v13, v14, v15, v16, v17, v18);
                }
              }
            }
          }
          LODWORD(v25) = conds->max_length;
          if ( (int)++v26 >= (int)v25 )
            goto LABEL_35;
        }
LABEL_38:
        sub_1C1AE38(Instance, p_obj);
      }
    }
    else
    {
      if ( !v9 )
        goto LABEL_36;
      p_obj = &v23->fields.infos->obj;
      v33 = v9->fields._items;
      v34 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v9->fields._version;
      if ( !v33 )
        goto LABEL_36;
      v35 = v9->fields._size;
      if ( (unsigned int)v35 >= v33->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          p_obj,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &v33->obj.klass + v35;
        v9->fields._size = v35 + 1;
        v36[4] = (Il2CppClass *)p_obj;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)p_obj, v13, v14, v15, v16, v17, v18);
      }
    }
LABEL_35:
    ++v21;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_36;
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
  System_Collections_Generic_List_object__o *v12; // x21
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  VoicePlayCondMaster_o *v16; // x22
  __int64 v17; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v19; // x8
  int64_t infos; // x23
  __int64 v21; // x8
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4BC8447 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v9);
    sub_1C1ABD4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v10);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4BC8447 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v12 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_22:
    sub_1C1AE30(Instance, v14);
  }
  v16 = (VoicePlayCondMaster_o *)Instance;
  v17 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v17 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v12;
    if ( (unsigned int)v17 >= max_length )
      goto LABEL_25;
    v19 = scriptJson->m_Items[v17];
    if ( v19 )
    {
      infos = (int64_t)v19->fields.infos;
      if ( infos )
      {
        if ( !*(_DWORD *)(infos + 24) )
LABEL_25:
          sub_1C1AE38(Instance, v14);
        v21 = *(_QWORD *)(infos + 32);
        if ( v21 )
        {
          if ( v16 )
          {
            Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(
                                         v16,
                                         svtId,
                                         *(System_String_o **)(v21 + 16),
                                         0LL,
                                         -1LL,
                                         -1,
                                         0LL,
                                         0LL,
                                         0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v12 )
                goto LABEL_22;
              Instance = (Il2CppObject *)System_Collections_Generic_List_object___Contains(
                                           v12,
                                           (Il2CppObject *)infos,
                                           (const MethodInfo_363CC20 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                items = v12->fields._items;
                v29 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v12->fields._version;
                if ( !items )
                  goto LABEL_22;
                size = v12->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v12,
                    (Il2CppObject *)infos,
                    *(const MethodInfo_363C890 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
                }
                else
                {
                  v31 = &items->obj.klass + size;
                  v12->fields._size = size + 1;
                  v31[4] = (Il2CppClass *)infos;
                  sub_1C1AB78((PartyOrganizationUtility_o *)(v31 + 4), infos, v22, v23, v24, v25, v26, v27);
                }
              }
            }
            scriptJson = this->fields.scriptJson;
            ++v17;
            if ( scriptJson )
              continue;
          }
        }
      }
    }
    goto LABEL_22;
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
  System_Collections_Generic_List_object__o *v11; // x21
  Il2CppObject *Instance; // x0
  Il2CppObject *v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v21; // x22
  int max_length; // w9
  _QWORD *monitor; // x8
  __int64 v24; // x9
  __int64 v25; // x8
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4BC8449 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v9);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4BC8449 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_21:
    sub_1C1AE30(Instance, v13);
  }
  v21 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v21 >= max_length )
      return (System_Collections_Generic_List_SvtVoiceInfo__o *)v11;
    if ( (unsigned int)v21 >= max_length )
      goto LABEL_24;
    v13 = (Il2CppObject *)scriptJson->m_Items[v21];
    if ( !v13 )
      goto LABEL_21;
    monitor = v13[4].monitor;
    if ( monitor )
    {
      v24 = monitor[3];
      if ( v24 )
      {
        if ( !(_DWORD)v24 )
LABEL_24:
          sub_1C1AE38(Instance, v13);
        v25 = monitor[4];
        if ( !v25 )
          goto LABEL_21;
        if ( *(_DWORD *)(v25 + 16) == condType )
        {
          if ( !v11 )
            goto LABEL_21;
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
          ++v11->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              v13,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v13;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v29 + 4), (int64_t)v13, v14, v15, v16, v17, v18, v19);
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v21;
    if ( !scriptJson )
      goto LABEL_21;
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

  v6 = this;
  if ( (byte_4BC844E & 1) == 0 )
  {
    this = (ServantVoiceEntity_o *)sub_1C1ABD4(&StringLiteral_16407/*"_B050"*/, *(_QWORD *)&type);
    byte_4BC844E = 1;
  }
  if ( v6->fields.type == type )
  {
    if ( !labelName )
      goto LABEL_25;
    this = (ServantVoiceEntity_o *)System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16407/*"_B050"*/, 0LL);
    scriptJson = v6->fields.scriptJson;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !scriptJson )
        goto LABEL_25;
      v8 = *(_QWORD *)&scriptJson->max_length;
      if ( v8 )
      {
        if ( !(_DWORD)v8 )
LABEL_28:
          sub_1C1AE38(this, *(_QWORD *)&type);
        v9 = scriptJson->m_Items[0];
        if ( v9 )
          return v9->fields.conds;
LABEL_25:
        sub_1C1AE30(this, *(_QWORD *)&type);
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
              this = (ServantVoiceEntity_o *)System_String__Equals_63048684(labelName, v17->fields.id, 0LL);
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

  return ServantVoiceEntity__getVoiceList_41075316(this, 2, 23, costumeId, 0LL, -1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getCostumeGetVoiceList(
        ServantVoiceEntity_o *this,
        int32_t costumeId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  return ServantVoiceEntity__getVoiceList_41075316(this, 2, 23, costumeId, 0LL, -1, v3);
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
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x0
  Il2CppObject *p_obj; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v15; // w21
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v17; // x23
  struct ServantVoiceCond_array *conds; // x24
  __int64 v19; // x9
  __int64 v20; // x25
  ServantVoiceCond_o *v21; // x8
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4BC845D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v3);
    sub_1C1ABD4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v4);
    byte_4BC845D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_23:
    sub_1C1AE30(v6, p_obj);
  v15 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v15 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v5;
    if ( v15 >= max_length )
LABEL_25:
      sub_1C1AE38(v6, p_obj);
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
            do
            {
              if ( (unsigned int)v20 >= (unsigned int)v19 )
                goto LABEL_25;
              v21 = conds->m_Items[v20];
              if ( !v21 )
                goto LABEL_23;
              if ( v21->fields.condType == 15 )
              {
                if ( !v5 )
                  goto LABEL_23;
                p_obj = &v17->fields.infos->obj;
                items = v5->fields._items;
                v23 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v5->fields._version;
                if ( !items )
                  goto LABEL_23;
                size = v5->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v5,
                    p_obj,
                    *(const MethodInfo_363C890 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
                }
                else
                {
                  v25 = &items->obj.klass + size;
                  v5->fields._size = size + 1;
                  v25[4] = (Il2CppClass *)p_obj;
                  sub_1C1AB78((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)p_obj, v8, v9, v10, v11, v12, v13);
                }
              }
              LODWORD(v19) = conds->max_length;
              ++v20;
            }
            while ( (int)v20 < (int)v19 );
            scriptJson = this->fields.scriptJson;
          }
        }
      }
      ++v15;
      if ( scriptJson )
        continue;
    }
    goto LABEL_23;
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
  System_Collections_Generic_List_object__o *v8; // x20
  DataManager_o *Time; // x0
  Il2CppObject *p_obj; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  DataManager_o *v18; // x21
  il2cpp_array_size_t v19; // w22
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v21; // x27
  struct ServantVoiceCond_array *conds; // x28
  __int64 v23; // x8
  __int64 i; // x29
  ServantVoiceCond_o *v25; // x23
  int32_t condType; // w8
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  struct System_Object_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x0

  if ( (byte_4BC845C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1C1ABD4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v2);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v4);
    sub_1C1ABD4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v5);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BC845C = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (DataManager_o *)NetworkManager__getTime(0LL);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_38:
    sub_1C1AE30(Time, p_obj);
  v18 = Time;
  v19 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v19 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v8;
    if ( v19 >= max_length )
LABEL_40:
      sub_1C1AE38(Time, p_obj);
    v21 = scriptJson->m_Items[v19];
    if ( !v21 )
      goto LABEL_38;
    conds = v21->fields.conds;
    if ( conds && (v23 = *(_QWORD *)&conds->max_length) != 0 )
    {
      if ( (int)v23 >= 1 )
      {
        for ( i = 0LL; (int)i < (int)v23; ++i )
        {
          if ( (unsigned int)i >= (unsigned int)v23 )
            goto LABEL_40;
          v25 = conds->m_Items[i];
          Time = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_38;
          Time = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Time,
                                    (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !v25 || !Time )
            goto LABEL_38;
          Time = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                                    v25->fields.value,
                                    (const MethodInfo_3248678 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( Time )
          {
            condType = v25->fields.condType;
            if ( (__int64)Time->fields.lockCountObj <= (__int64)v18 )
            {
              if ( condType != 19 && condType != 13 )
                goto LABEL_30;
            }
            else if ( condType != 19 && condType != 14 )
            {
              goto LABEL_30;
            }
            if ( !v8 )
              goto LABEL_38;
            p_obj = &v21->fields.infos->obj;
            items = v8->fields._items;
            v28 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v8->fields._version;
            if ( !items )
              goto LABEL_38;
            size = v8->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                p_obj,
                *(const MethodInfo_363C890 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v30[4] = (Il2CppClass *)p_obj;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)p_obj, v11, v12, v13, v14, v15, v16);
            }
          }
LABEL_30:
          LODWORD(v23) = conds->max_length;
        }
      }
    }
    else
    {
      if ( !v8 )
        goto LABEL_38;
      p_obj = &v21->fields.infos->obj;
      v31 = v8->fields._items;
      v32 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v8->fields._version;
      if ( !v31 )
        goto LABEL_38;
      v33 = v8->fields._size;
      if ( (unsigned int)v33 >= v31->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          p_obj,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &v31->obj.klass + v33;
        v8->fields._size = v33 + 1;
        v34[4] = (Il2CppClass *)p_obj;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v34 + 4), (int64_t)p_obj, v11, v12, v13, v14, v15, v16);
      }
    }
    ++v19;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_38;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventRewardVoiceList_41086920(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_41076044(this, 5, labelName, 0LL, 1, v3);
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
  System_Collections_Generic_List_T__o *v24; // x20
  int64_t Time; // x0
  __int64 v26; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  __int64 v30; // x10
  __int64 v31; // x10
  System_Collections_Generic_List_T__o *v32; // x23
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v43; // w21
  il2cpp_array_size_t max_length; // w9
  Il2CppObject *v45; // x27
  _BOOL4 v46; // w24
  _QWORD *monitor; // x26
  __int64 v48; // x8
  __int64 v49; // x19
  __int64 v50; // x20
  int32_t v51; // w28
  int64_t v52; // x29
  int v53; // w8
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  _BOOL8 v58; // x0
  __int64 v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  Il2CppObject *current; // x19
  _DWORD *v67; // x20
  int v68; // w8
  unsigned int v69; // w21
  __int64 v70; // x8
  Il2CppObject *klass; // x1
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  Il2CppClass **v75; // x0
  System_Collections_Generic_List_object__o *v77; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_List_object__o *v78; // [xsp+10h] [xbp-C0h]
  int64_t v79; // [xsp+18h] [xbp-B8h]
  System_Collections_Generic_List_T__o *v82; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+50h] [xbp-80h] BYREF

  v6 = isEventDateCondOnly;
  if ( (byte_4BC8463 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventMaster___, isEventDateCondOnly);
    sub_1C1ABD4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_VoiceCondType_Type__Add__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__, v15);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__, v16);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v17);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v18);
    sub_1C1ABD4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v19);
    sub_1C1ABD4(&System_Collections_Generic_List_VoiceCondType_Type__TypeInfo, v20);
    sub_1C1ABD4(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v21);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v22);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    byte_4BC8463 = 1;
  }
  memset(&v84, 0, sizeof(v84));
  v77 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v77,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v24 = (System_Collections_Generic_List_T__o *)sub_1C1AE20(System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v24,
    (const MethodInfo_3621844 *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
  if ( !v24 )
    goto LABEL_54;
  items = v24->fields._items;
  v28 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
  ++v24->fields._version;
  if ( !items )
    goto LABEL_54;
  size = v24->fields._size;
  v82 = v24;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v24,
      14,
      *(const MethodInfo_3622098 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    items = v24->fields._items;
    v28 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
    ++v24->fields._version;
    if ( !items )
      goto LABEL_54;
  }
  else
  {
    v24->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 14;
    ++v24->fields._version;
  }
  v30 = v24->fields._size;
  if ( (unsigned int)v30 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v24,
      13,
      *(const MethodInfo_3622098 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    items = v24->fields._items;
    v28 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
    ++v24->fields._version;
    if ( !items )
      goto LABEL_54;
  }
  else
  {
    v24->fields._size = v30 + 1;
    *((_DWORD *)items->m_Items + v30) = 13;
    ++v24->fields._version;
  }
  v31 = v24->fields._size;
  if ( (unsigned int)v31 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v24,
      19,
      *(const MethodInfo_3622098 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v24->fields._size = v31 + 1;
    *((_DWORD *)items->m_Items + v31) = 19;
  }
  v32 = (System_Collections_Generic_List_T__o *)sub_1C1AE20(System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v32,
    (const MethodInfo_3621844 *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
  if ( !v6 )
  {
    if ( !v32 )
      goto LABEL_54;
    v33 = v32->fields._items;
    v34 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
    ++v32->fields._version;
    if ( !v33 )
      goto LABEL_54;
    v35 = v32->fields._size;
    if ( (unsigned int)v35 >= v33->max_length )
    {
      System_Collections_Generic_List_Int32Enum___AddWithResize(
        v32,
        checkCondType,
        *(const MethodInfo_3622098 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    }
    else
    {
      v32->fields._size = v35 + 1;
      *((_DWORD *)v33->m_Items + v35) = checkCondType;
    }
  }
  v78 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v78,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v79 = Time;
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_54;
  v43 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v43 >= (int)max_length )
      break;
    if ( v43 >= max_length )
      goto LABEL_78;
    v45 = (Il2CppObject *)scriptJson->m_Items[v43];
    if ( !v45 )
      goto LABEL_54;
    v46 = v6;
    monitor = v45[4].monitor;
    if ( monitor )
    {
      v48 = monitor[3];
      if ( v48 )
      {
        if ( (int)v48 >= 1 )
        {
          v49 = 0LL;
          while ( (unsigned int)v49 < (unsigned int)v48 )
          {
            v50 = monitor[v49 + 4];
            if ( !v50 )
              goto LABEL_54;
            v51 = *(_DWORD *)(v50 + 16);
            Time = System_Collections_Generic_List_Int32Enum___Contains(
                     v82,
                     v51,
                     (const MethodInfo_3622410 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) == 0 )
            {
              if ( !v32 )
                goto LABEL_54;
              Time = System_Collections_Generic_List_Int32Enum___Contains(
                       v32,
                       v51,
                       (const MethodInfo_3622410 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
              if ( (Time & 1) == 0 )
                goto LABEL_53;
            }
            Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Time )
              goto LABEL_54;
            Time = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Time,
                              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventMaster___);
            if ( !Time )
              goto LABEL_54;
            Time = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                              *(_DWORD *)(v50 + 20),
                              (const MethodInfo_3248678 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
            if ( !Time || *(_DWORD *)(v50 + 20) != eventId )
              goto LABEL_53;
            v52 = Time;
            Time = System_Collections_Generic_List_Int32Enum___Contains(
                     v82,
                     v51,
                     (const MethodInfo_3622410 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) != 0 )
            {
              v53 = *(_QWORD *)(v52 + 96) <= v79 ? 13 : 14;
              if ( v51 == 19 )
                v53 = 19;
              if ( v51 != v53 )
                goto LABEL_53;
            }
            LODWORD(v48) = *((_DWORD *)monitor + 6);
            if ( (int)++v49 >= (int)v48 )
              goto LABEL_48;
          }
LABEL_78:
          sub_1C1AE38(Time, v26);
        }
LABEL_48:
        if ( !v78 )
          goto LABEL_54;
        v54 = v78->fields._items;
        v55 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
        ++v78->fields._version;
        if ( !v54 )
          goto LABEL_54;
        v56 = v78->fields._size;
        if ( (unsigned int)v56 >= v54->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v78,
            v45,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          v57 = &v54->obj.klass + v56;
          v78->fields._size = v56 + 1;
          v57[4] = (Il2CppClass *)v45;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v57 + 4), (int64_t)v45, v36, v37, v38, v39, v40, v41);
        }
      }
    }
LABEL_53:
    ++v43;
    v6 = v46;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_54;
  }
  Time = (int64_t)v78;
  if ( !v78 )
LABEL_54:
    sub_1C1AE30(Time, v26);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v83,
    v78,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v84 = v83;
LABEL_57:
  while ( 1 )
  {
    v58 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v84,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v58 )
      break;
    current = v84.fields._current;
    if ( !v84.fields._current )
      sub_1C1AE30(v58, v59);
    v67 = v84.fields._current[4].monitor;
    if ( !v67 )
      sub_1C1AE30(v58, v59);
    v68 = v67[6];
    if ( v68 >= 1 )
    {
      v69 = 0;
      while ( 1 )
      {
        if ( v69 >= v68 )
          sub_1C1AE38(v58, v59);
        v70 = *(_QWORD *)&v67[2 * v69 + 8];
        if ( !v70 )
          sub_1C1AE30(v58, v59);
        if ( v6 )
          break;
        if ( !v32 )
          sub_1C1AE30(v58, v59);
        v58 = System_Collections_Generic_List_Int32Enum___Contains(
                v32,
                *(_DWORD *)(v70 + 16),
                (const MethodInfo_3622410 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
        if ( v58 )
          break;
        v68 = v67[6];
        if ( (int)++v69 >= v68 )
          goto LABEL_57;
      }
      if ( !v77 )
        sub_1C1AE30(v58, v59);
      klass = (Il2CppObject *)current[4].klass;
      v72 = v77->fields._items;
      v73 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v77->fields._version;
      if ( !v72 )
        sub_1C1AE30(v58, klass);
      v74 = v77->fields._size;
      if ( (unsigned int)v74 >= v72->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v77,
          klass,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
      }
      else
      {
        v75 = &v72->obj.klass + v74;
        v77->fields._size = v74 + 1;
        v75[4] = (Il2CppClass *)klass;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v75 + 4), (int64_t)klass, v60, v61, v62, v63, v64, v65);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v84,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  return (System_Collections_Generic_List_ServantVoiceData____o *)v77;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventShopVoiceList_41089756(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_41076044(this, 9, labelName, 0LL, 1, v3);
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
  _BOOL8 v10; // x0
  __int64 v11; // x1
  ServantVoiceData_array *current; // x20
  int monitor; // w8
  unsigned int v14; // w23
  ServantVoiceData_o *v15; // x8
  System_String_o *v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BC8461 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, id);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v7);
    byte_4BC8461 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  EventRewardVoiceList = ServantVoiceEntity__getEventRewardVoiceList(this, (const MethodInfo *)id);
  if ( !EventRewardVoiceList )
    sub_1C1AE30(0LL, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)EventRewardVoiceList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v19 = v18;
  do
  {
LABEL_5:
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v10 )
    {
      current = 0LL;
      goto LABEL_16;
    }
    current = (ServantVoiceData_array *)v19.fields._current;
    if ( !v19.fields._current )
      sub_1C1AE30(v10, v11);
    monitor = (int)v19.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v14 = 0;
  while ( 1 )
  {
    if ( v14 >= monitor )
      sub_1C1AE38(v10, v11);
    v15 = current->m_Items[v14];
    if ( !v15 )
      sub_1C1AE30(v10, v11);
    v16 = v15->fields.id;
    if ( !v16 )
      sub_1C1AE30(0LL, v11);
    v10 = System_String__Equals_63048684(v16, id, 0LL);
    if ( v10 )
      break;
    monitor = current->max_length;
    if ( (int)++v14 >= monitor )
      goto LABEL_5;
  }
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  System_Collections_Generic_List_T__o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x5
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4BC8452 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CondType_Kind__Add__, labelName);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v5);
    sub_1C1ABD4(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v6);
    byte_4BC8452 = 1;
  }
  v7 = (System_Collections_Generic_List_T__o *)sub_1C1AE20(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v7,
    (const MethodInfo_3621844 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v7
    || (items = v7->fields._items,
        v12 = Method_System_Collections_Generic_List_CondType_Kind__Add__,
        ++v7->fields._version,
        !items) )
  {
    sub_1C1AE30(v8, v9);
  }
  size = v7->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      81,
      *(const MethodInfo_3622098 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  return ServantVoiceEntity__getVoiceList_41076044(
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
    return ServantVoiceEntity__getVoiceList_41076044(this, 2, labelName, 0LL, 0, v5);
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
  System_Collections_Generic_List_T__o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x5
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4BC8453 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CondType_Kind__Add__, labelName);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v5);
    sub_1C1ABD4(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v6);
    byte_4BC8453 = 1;
  }
  v7 = (System_Collections_Generic_List_T__o *)sub_1C1AE20(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v7,
    (const MethodInfo_3621844 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v7
    || (items = v7->fields._items,
        v12 = Method_System_Collections_Generic_List_CondType_Kind__Add__,
        ++v7->fields._version,
        !items) )
  {
    sub_1C1AE30(v8, v9);
  }
  size = v7->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      81,
      *(const MethodInfo_3622098 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  return ServantVoiceEntity__getVoiceList_41076044(
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
  System_Collections_Generic_List_object__o *v5; // x20
  _BOOL8 isQuestClearState; // x0
  Il2CppObject *p_obj; // x1
  const MethodInfo *v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v15; // w21
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v17; // x23
  struct ServantVoiceCond_array *conds; // x24
  __int64 v19; // x10
  __int64 v20; // x25
  char v21; // w27
  char v22; // w8
  char v23; // w9
  ServantVoiceCond_o *v24; // x10
  int32_t condType; // w11
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4BC845E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v3);
    sub_1C1ABD4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v4);
    byte_4BC845E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_34;
  v15 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v15 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v5;
    if ( v15 >= max_length )
LABEL_36:
      sub_1C1AE38(isQuestClearState, p_obj);
    v17 = scriptJson->m_Items[v15];
    if ( !v17 )
      goto LABEL_34;
    conds = v17->fields.conds;
    if ( conds )
    {
      v19 = *(_QWORD *)&conds->max_length;
      if ( v19 )
      {
        if ( (int)v19 >= 1 )
        {
          v20 = 0LL;
          v21 = 0;
          v22 = 0;
          v23 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v20 >= (unsigned int)v19 )
              goto LABEL_36;
            v24 = conds->m_Items[v20];
            if ( !v24 )
              goto LABEL_34;
            condType = v24->fields.condType;
            switch ( condType )
            {
              case 16:
                goto LABEL_27;
              case 7:
                if ( (v22 & 1) == 0 )
                {
                  isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                        (ServantVoiceEntity_o *)isQuestClearState,
                                        v24->fields.value,
                                        v8);
                  if ( isQuestClearState )
                    goto LABEL_33;
                  v22 = 0;
                  goto LABEL_27;
                }
                if ( (v21 & 1) == 0 )
                  goto LABEL_33;
                isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                      (ServantVoiceEntity_o *)isQuestClearState,
                                      v24->fields.value,
                                      v8);
                if ( isQuestClearState )
                  goto LABEL_33;
                break;
              case 6:
                isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                      (ServantVoiceEntity_o *)isQuestClearState,
                                      v24->fields.value,
                                      v8);
                if ( !isQuestClearState )
                  goto LABEL_33;
                break;
              default:
                if ( (v23 & 1) == 0 )
                  goto LABEL_33;
                goto LABEL_27;
            }
            v21 = 1;
            v22 = 1;
LABEL_27:
            LODWORD(v19) = conds->max_length;
            ++v20;
            v23 = 1;
            if ( (int)v20 >= (int)v19 )
            {
              if ( v5 )
              {
                p_obj = &v17->fields.infos->obj;
                items = v5->fields._items;
                v27 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v5->fields._version;
                if ( items )
                {
                  size = v5->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v5,
                      p_obj,
                      *(const MethodInfo_363C890 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v29 = &items->obj.klass + size;
                    v5->fields._size = size + 1;
                    v29[4] = (Il2CppClass *)p_obj;
                    sub_1C1AB78(
                      (PartyOrganizationUtility_o *)(v29 + 4),
                      (int64_t)p_obj,
                      (int64_t)v8,
                      v9,
                      v10,
                      v11,
                      v12,
                      v13);
                  }
                  break;
                }
              }
LABEL_34:
              sub_1C1AE30(isQuestClearState, p_obj);
            }
          }
        }
      }
    }
LABEL_33:
    scriptJson = this->fields.scriptJson;
    ++v15;
    if ( !scriptJson )
      goto LABEL_34;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMasterMissionVoiceList(
        ServantVoiceEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantVoiceEntity__getVoiceList(this, 8, v2);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMasterMissionVoiceList_41087432(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_41076044(this, 8, labelName, 0LL, 1, v3);
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
  System_Collections_Generic_List_object__o *v20; // x19
  const MethodInfo *v21; // x1
  int32_t v22; // w0
  const MethodInfo *v23; // x2
  int v24; // w27
  int32_t v25; // w26
  void *Instance; // x0
  Il2CppObject *p_obj; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t FriendShipRank; // w0
  int v30; // w22
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int32_t version; // w10
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v43; // w24
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v45; // x27
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v47; // x8
  struct ServantVoiceCond_array *conds; // x8
  __int64 v49; // x9
  ServantVoiceCond_o *v50; // x10
  int v51; // w10
  ServantVoiceCond_o *v52; // x12
  int32_t condType; // w13
  bool v54; // w12
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  int32_t id; // w26
  int32_t v61; // w25

  if ( (byte_4BC844A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, *(_QWORD *)&type);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v14);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v15);
    sub_1C1ABD4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v16);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v17);
    sub_1C1ABD4(&ServantLimitUpVoiceCache_TypeInfo, v18);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4BC844A = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v20 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v22 = ServantVoiceEntity__GetChangeLimitVoiceFriendshipLv(this, v21);
  v24 = v22 - 1;
  if ( v22 < 1 )
    goto LABEL_15;
  v25 = v22;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, p_obj);
    byte_4BC2585 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_72;
  Instance = UserServantCollectionMaster__GetEntityDefinitely(
               (UserServantCollectionMaster_o *)MasterData_object,
               *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
               this->fields.id,
               0LL);
  if ( !Instance )
    goto LABEL_72;
  FriendShipRank = UserServantCollectionEntity__getFriendShipRank((UserServantCollectionEntity_o *)Instance, 0LL);
  if ( FriendShipRank >= v25 )
  {
    v30 = FriendShipRank;
    if ( displayType )
    {
      id = this->fields.id;
      if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      if ( ServantLimitUpVoiceCache__IsLimitUpVoiceNormal(displayType, id, 0LL) )
        v30 = v24;
      if ( isPlayVoice )
      {
        v61 = this->fields.id;
        if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
        ServantLimitUpVoiceCache__UpdateLimitUpVoice(displayType, v61, 0LL);
      }
    }
  }
  else
  {
LABEL_15:
    v30 = -1;
  }
  Instance = ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v23);
  if ( Instance )
  {
    if ( !v20 )
      goto LABEL_72;
    p_obj = (Il2CppObject *)*((_QWORD *)Instance + 8);
    version = v20->fields._version;
    items = v20->fields._items;
    v39 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
LABEL_19:
    v20->fields._version = version + 1;
    if ( !items )
      goto LABEL_72;
    size = v20->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        p_obj,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v41 = &items->obj.klass + size;
      v20->fields._size = size + 1;
      v41[4] = (Il2CppClass *)p_obj;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)p_obj, v31, v32, v33, v34, v35, v36);
    }
  }
  else
  {
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_72;
    v43 = 0;
    while ( 1 )
    {
      max_length = scriptJson->max_length;
      if ( (int)v43 >= (int)max_length )
        break;
      if ( v43 >= max_length )
        goto LABEL_73;
      v45 = scriptJson->m_Items[v43];
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      if ( !v45 )
        goto LABEL_72;
      infos = v45->fields.infos;
      if ( !infos )
        goto LABEL_72;
      if ( !infos->max_length )
        goto LABEL_73;
      v47 = infos->m_Items[0];
      if ( !v47 || !Instance )
        goto LABEL_72;
      Instance = (void *)VoicePlayCondMaster__isVoicePlay(
                           (VoicePlayCondMaster_o *)Instance,
                           this->fields.id,
                           v47->fields.id,
                           0LL,
                           -1LL,
                           genderType,
                           0LL,
                           0LL,
                           0LL);
      conds = v45->fields.conds;
      if ( conds )
      {
        v49 = *(_QWORD *)&conds->max_length;
        if ( v49 )
        {
          if ( !(_DWORD)v49 )
LABEL_73:
            sub_1C1AE38(Instance, p_obj);
          v50 = conds->m_Items[0];
          if ( !v50 )
            goto LABEL_72;
          if ( v50->fields.condType != 11 )
            goto LABEL_52;
          if ( v30 != -1 && (_DWORD)v49 != 1 )
          {
            if ( (int)v49 < 1 )
              goto LABEL_52;
            v51 = 0;
            while ( 1 )
            {
              v52 = conds->m_Items[v51];
              if ( !v52 )
                goto LABEL_72;
              condType = v52->fields.condType;
              if ( condType == 20 )
              {
                v54 = v52->fields.value <= v30;
              }
              else
              {
                if ( condType == 22 && v52->fields.value >= v30 && ((unsigned __int8)Instance & 1) != 0 )
                {
LABEL_54:
                  if ( v20 )
                  {
                    p_obj = &v45->fields.infos->obj;
                    v55 = v20->fields._items;
                    v56 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                    ++v20->fields._version;
                    if ( v55 )
                    {
                      v57 = v20->fields._size;
                      if ( (unsigned int)v57 >= v55->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v20,
                          p_obj,
                          *(const MethodInfo_363C890 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v58 = &v55->obj.klass + v57;
                        v20->fields._size = v57 + 1;
                        v58[4] = (Il2CppClass *)p_obj;
                        sub_1C1AB78(
                          (PartyOrganizationUtility_o *)(v58 + 4),
                          (int64_t)p_obj,
                          v31,
                          v32,
                          v33,
                          v34,
                          v35,
                          v36);
                      }
                      goto LABEL_52;
                    }
                  }
LABEL_72:
                  sub_1C1AE30(Instance, p_obj);
                }
                v54 = 0;
              }
              if ( (v54 & (unsigned __int8)Instance & 1) != 0 )
                goto LABEL_54;
              if ( (_DWORD)v49 == ++v51 )
                goto LABEL_52;
            }
          }
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_52;
          if ( !v20 )
            goto LABEL_72;
          p_obj = &v45->fields.infos->obj;
          version = v20->fields._version;
          items = v20->fields._items;
          v39 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          goto LABEL_19;
        }
      }
LABEL_52:
      scriptJson = this->fields.scriptJson;
      ++v43;
      if ( !scriptJson )
        goto LABEL_72;
    }
  }
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
  _BOOL8 v10; // x0
  __int64 v11; // x1
  ServantVoiceData_array *current; // x20
  int monitor; // w8
  unsigned int v14; // w23
  ServantVoiceData_o *v15; // x8
  System_String_o *v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BC8462 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, id);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v7);
    byte_4BC8462 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  VoiceList = ServantVoiceEntity__getVoiceList(this, 8, method);
  if ( !VoiceList )
    sub_1C1AE30(0LL, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)VoiceList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v19 = v18;
  do
  {
LABEL_5:
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v10 )
    {
      current = 0LL;
      goto LABEL_16;
    }
    current = (ServantVoiceData_array *)v19.fields._current;
    if ( !v19.fields._current )
      sub_1C1AE30(v10, v11);
    monitor = (int)v19.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v14 = 0;
  while ( 1 )
  {
    if ( v14 >= monitor )
      sub_1C1AE38(v10, v11);
    v15 = current->m_Items[v14];
    if ( !v15 )
      sub_1C1AE30(v10, v11);
    v16 = v15->fields.id;
    if ( !v16 )
      sub_1C1AE30(0LL, v11);
    v10 = System_String__Equals_63048684(v16, id, 0LL);
    if ( v10 )
      break;
    monitor = current->max_length;
    if ( (int)++v14 >= monitor )
      goto LABEL_5;
  }
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  return current;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMyRoomFriendShipVoiceList(
        ServantVoiceEntity_o *this,
        int32_t friendShipRank,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *p_obj; // x1
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *v14; // x23
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v16; // w25
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v18; // x24
  struct ServantVoiceData_array *infos; // x9
  struct ServantVoiceCond_array *conds; // x8
  __int64 v21; // x27
  int v22; // w9
  ServantVoiceCond_o *v23; // x8
  struct ServantVoiceData_array *v24; // x8
  ServantVoiceData_o *v25; // x8
  const MethodInfo *v26; // x4
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_4BC8450 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&friendShipRank);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v9);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4BC8450 = 1;
  }
  if ( this->fields.type != 1 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v14 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ServantVoiceData____TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v14,
          (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_34:
    sub_1C1AE30(Instance, p_obj);
  }
  v16 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v16 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v14;
    if ( v16 >= max_length )
LABEL_37:
      sub_1C1AE38(Instance, p_obj);
    v18 = scriptJson->m_Items[v16];
    if ( v18 )
    {
      infos = v18->fields.infos;
      if ( infos && *(_QWORD *)&infos->max_length )
      {
        conds = v18->fields.conds;
        if ( !conds )
          goto LABEL_34;
        v21 = 0LL;
        while ( 1 )
        {
          v22 = conds->max_length;
          if ( (int)v21 >= v22 )
            break;
          if ( (unsigned int)v21 >= v22 )
            goto LABEL_37;
          v23 = conds->m_Items[v21];
          if ( !v23 )
            goto LABEL_34;
          if ( v23->fields.condType == 3 && v23->fields.value == friendShipRank )
          {
            v24 = v18->fields.infos;
            if ( !v24 )
              goto LABEL_34;
            if ( !v24->max_length )
              goto LABEL_37;
            v25 = v24->m_Items[0];
            if ( !v25 || !MasterData_object )
              goto LABEL_34;
            Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(
                                         (VoicePlayCondMaster_o *)MasterData_object,
                                         this->fields.id,
                                         v25->fields.id,
                                         0LL,
                                         -1LL,
                                         -1,
                                         0LL,
                                         0LL,
                                         0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (Il2CppObject *)ServantVoiceEntity__isAvailableMyRoomVoice(this, v18, imageLimitCount, 1, v26);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v14 )
                  goto LABEL_34;
                p_obj = &v18->fields.infos->obj;
                items = v14->fields._items;
                v34 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v14->fields._version;
                if ( !items )
                  goto LABEL_34;
                size = v14->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v14,
                    p_obj,
                    *(const MethodInfo_363C890 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
                }
                else
                {
                  v36 = &items->obj.klass + size;
                  v14->fields._size = size + 1;
                  v36[4] = (Il2CppClass *)p_obj;
                  sub_1C1AB78((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)p_obj, v27, v28, v29, v30, v31, v32);
                }
              }
            }
          }
          conds = v18->fields.conds;
          ++v21;
          if ( !conds )
            goto LABEL_34;
        }
        scriptJson = this->fields.scriptJson;
      }
      ++v16;
      if ( scriptJson )
        continue;
    }
    goto LABEL_34;
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
  Il2CppObject *Instance; // x0
  Il2CppObject *p_obj; // x1
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v12; // x22
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v14; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v16; // x23
  struct ServantVoiceData_array *infos; // x8
  __int64 v18; // x9
  ServantVoiceData_o *v19; // x8
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct ServantVoiceCond_array *conds; // x8
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4BC844F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&imageLimitCount);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v6);
    sub_1C1ABD4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4BC844F = 1;
  }
  if ( this->fields.type != 1 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v12 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ServantVoiceData____TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v12,
          (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_25:
    sub_1C1AE30(Instance, p_obj);
  }
  v14 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v14 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v12;
    if ( (unsigned int)v14 >= max_length )
      goto LABEL_28;
    v16 = scriptJson->m_Items[v14];
    if ( !v16 )
      goto LABEL_25;
    infos = v16->fields.infos;
    if ( infos )
    {
      v18 = *(_QWORD *)&infos->max_length;
      if ( v18 )
      {
        if ( !(_DWORD)v18 )
LABEL_28:
          sub_1C1AE38(Instance, p_obj);
        v19 = infos->m_Items[0];
        if ( !v19 || !MasterData_object )
          goto LABEL_25;
        Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(
                                     (VoicePlayCondMaster_o *)MasterData_object,
                                     this->fields.id,
                                     v19->fields.id,
                                     0LL,
                                     -1LL,
                                     -1,
                                     0LL,
                                     0LL,
                                     0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          conds = v16->fields.conds;
          if ( !conds )
            goto LABEL_25;
          if ( (int)conds->max_length < 1
            || (Instance = (Il2CppObject *)ServantVoiceEntity__isAvailableMyRoomVoice(
                                             this,
                                             v16,
                                             imageLimitCount,
                                             0,
                                             (const MethodInfo *)v22),
                ((unsigned __int8)Instance & 1) != 0) )
          {
            if ( !v12 )
              goto LABEL_25;
            p_obj = &v16->fields.infos->obj;
            items = v12->fields._items;
            v28 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v12->fields._version;
            if ( !items )
              goto LABEL_25;
            size = v12->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                p_obj,
                *(const MethodInfo_363C890 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              v12->fields._size = size + 1;
              v30[4] = (Il2CppClass *)p_obj;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)p_obj, v20, v21, v22, v23, v24, v25);
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v14;
    if ( !scriptJson )
      goto LABEL_25;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getNpVoiceList(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_41076044(this, 7, labelName, 0LL, 1, v3);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  _BOOL8 v30; // x0
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v39; // x9
  SvtVoiceInfo_o *v40; // x24
  ServantVoiceCond_array *v41; // x1
  System_String_o *v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_String_o *v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int32_t v56; // w8
  il2cpp_array_size_t v57; // w28
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v59; // x26
  struct ServantVoiceData_array *infos; // x9
  __int64 v61; // x29
  int v62; // w8
  ServantVoiceData_o *v63; // x8
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  ServantVoiceCond_array *v70; // x1
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  System_String_o *materialOverwriteName; // x1
  System_String_o *v78; // x1
  System_String_o *v79; // x1

  if ( (byte_4BC844D & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_16407/*"_B050"*/, *(_QWORD *)&type);
    byte_4BC844D = 1;
  }
  *conds = 0LL;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)conds,
    0LL,
    (int64_t)labelName,
    (int32_t)conds,
    (System_String_o *)isInvalidVoiceList,
    (BattleSetupInfo_o *)overwriteName,
    (FollowerInfo_o *)overwriteNameDefault,
    (PartyListViewItem_o *)overwritePriority);
  *isInvalidVoiceList = 0;
  *overwriteName = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)overwriteName, 0LL, v18, v19, v20, v21, v22, v23);
  *overwriteNameDefault = 0LL;
  sub_1C1AB78((PartyOrganizationUtility_o *)overwriteNameDefault, 0LL, v24, v25, v26, v27, v28, v29);
  *overwritePriority = 0;
  if ( this->fields.type != type )
    return;
  if ( !labelName )
    goto LABEL_26;
  v30 = System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16407/*"_B050"*/, 0LL);
  scriptJson = this->fields.scriptJson;
  if ( v30 )
  {
    if ( scriptJson )
    {
      v39 = *(_QWORD *)&scriptJson->max_length;
      if ( !v39 )
        return;
      if ( !(_DWORD)v39 )
LABEL_33:
        sub_1C1AE38(v30, v31);
      v40 = scriptJson->m_Items[0];
      if ( v40 )
      {
        v41 = v40->fields.conds;
        *conds = v41;
        sub_1C1AB78((PartyOrganizationUtility_o *)conds, (int64_t)v41, v32, v33, v34, v35, v36, v37);
        *isInvalidVoiceList = v40->fields.isInvalidVoiceList;
        v42 = v40->fields.overwriteName;
        *overwriteName = v42;
        sub_1C1AB78((PartyOrganizationUtility_o *)overwriteName, (int64_t)v42, v43, v44, v45, v46, v47, v48);
        v49 = v40->fields.overwriteNameDefault;
        *overwriteNameDefault = v49;
        sub_1C1AB78((PartyOrganizationUtility_o *)overwriteNameDefault, (int64_t)v49, v50, v51, v52, v53, v54, v55);
        v56 = v40->fields.overwritePriority;
        goto LABEL_31;
      }
    }
LABEL_26:
    sub_1C1AE30(v30, v31);
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
    v30 = System_String__Equals_63048684(labelName, v63->fields.id, 0LL);
    if ( v30 )
      break;
    infos = v59->fields.infos;
    ++v61;
    if ( !infos )
      goto LABEL_26;
  }
  v70 = v59->fields.conds;
  *conds = v70;
  sub_1C1AB78((PartyOrganizationUtility_o *)conds, (int64_t)v70, v64, v65, v66, v67, v68, v69);
  *isInvalidVoiceList = v59->fields.isInvalidVoiceList;
  if ( !isMaterial
    || (materialOverwriteName = v59->fields.materialOverwriteName,
        *overwriteName = materialOverwriteName,
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)overwriteName,
          (int64_t)materialOverwriteName,
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
    sub_1C1AB78((PartyOrganizationUtility_o *)overwriteName, (int64_t)v78, v71, v72, v73, v74, v75, v76);
  }
  v79 = v59->fields.overwriteNameDefault;
  *overwriteNameDefault = v79;
  sub_1C1AB78((PartyOrganizationUtility_o *)overwriteNameDefault, (int64_t)v79, v71, v72, v73, v74, v75, v76);
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

  return ServantVoiceEntity__getVoiceList_41075316(this, 1, 3, friendShipRank, 0LL, -1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getSpecificLimitCntUpVoiceList(
        ServantVoiceEntity_o *this,
        int32_t limitCount,
        System_String_o *playVoiceLabel,
        int32_t genderType,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return ServantVoiceEntity__getVoiceList_41075316(this, 2, 9, limitCount, playVoiceLabel, genderType, v5);
}


int32_t __fastcall ServantVoiceEntity__getSvtIdfromVoiceAssetName(System_String_o *assetName, const MethodInfo *method)
{
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( !assetName
    || (assetName = (System_String_o *)System_String__Split(assetName, 0x5Fu, 0, 0LL), result = 0, !assetName) )
  {
    sub_1C1AE30(assetName, method);
  }
  if ( LODWORD(assetName[1].klass) != 2 )
    return 0;
  if ( System_Int32__TryParse(*(System_String_o **)&assetName[1].fields, &result, 0LL) )
    return result;
  return 0;
}


System_String_o *__fastcall ServantVoiceEntity__getVoiceAssetName(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  return ServantVoiceEntity__getVoiceAssetName_41071744(this->fields.id, method);
}


System_String_o *__fastcall ServantVoiceEntity__getVoiceAssetName_41071744(int32_t svtId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = svtId;
  if ( (byte_4BC8445 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_4549/*"ChrVoice_"*/, method);
    byte_4BC8445 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_63040368((System_String_o *)StringLiteral_4549/*"ChrVoice_"*/, v2, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList(
        ServantVoiceEntity_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x0
  Il2CppObject *p_obj; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v17; // x21
  int max_length; // w9
  SvtVoiceInfo_o *v19; // x8
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4BC8446 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, *(_QWORD *)&type);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v5);
    sub_1C1ABD4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v6);
    byte_4BC8446 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_15:
    sub_1C1AE30(v8, p_obj);
  v17 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v17 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
    if ( (unsigned int)v17 >= max_length )
      sub_1C1AE38(v8, p_obj);
    v19 = scriptJson->m_Items[v17];
    if ( v19 )
    {
      if ( v7 )
      {
        p_obj = &v19->fields.infos->obj;
        items = v7->fields._items;
        v21 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
        ++v7->fields._version;
        if ( items )
        {
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              p_obj,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v23[4] = (Il2CppClass *)p_obj;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)p_obj, v10, v11, v12, v13, v14, v15);
          }
          scriptJson = this->fields.scriptJson;
          ++v17;
          if ( scriptJson )
            continue;
        }
      }
    }
    goto LABEL_15;
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
  System_Collections_Generic_List_object__o *v15; // x19
  DataManager_o *Instance; // x0
  Il2CppObject *saveNameList; // x1
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v19; // x2
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v31; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v33; // x26
  struct ServantVoiceCond_array *conds; // x8
  __int64 v35; // x9
  ServantVoiceCond_o *v36; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v38; // x8
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0

  if ( (byte_4BC8448 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v12);
    sub_1C1ABD4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v13);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4BC8448 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v15 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = (DataManager_o *)ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v19);
  if ( Instance )
  {
    if ( v15 )
    {
      saveNameList = (Il2CppObject *)Instance->fields.saveNameList;
      items = v15->fields._items;
      v27 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v15->fields._version;
      if ( items )
      {
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            saveNameList,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v29[4] = (Il2CppClass *)saveNameList;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v29 + 4), (int64_t)saveNameList, v20, v21, v22, v23, v24, v25);
        }
        return (System_Collections_Generic_List_ServantVoiceData____o *)v15;
      }
    }
LABEL_32:
    sub_1C1AE30(Instance, saveNameList);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_32;
  v31 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v31 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v15;
    if ( (unsigned int)v31 >= max_length )
      goto LABEL_35;
    v33 = scriptJson->m_Items[v31];
    if ( !v33 )
      goto LABEL_32;
    conds = v33->fields.conds;
    if ( conds )
    {
      v35 = *(_QWORD *)&conds->max_length;
      if ( v35 )
      {
        if ( !(_DWORD)v35 )
          goto LABEL_35;
        v36 = conds->m_Items[0];
        if ( !v36 )
          goto LABEL_32;
        if ( v36->fields.condType == condType )
        {
          infos = v33->fields.infos;
          if ( !infos )
            goto LABEL_32;
          if ( !infos->max_length )
LABEL_35:
            sub_1C1AE38(Instance, saveNameList);
          v38 = infos->m_Items[0];
          if ( !v38 || !MasterData_object )
            goto LABEL_32;
          Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(
                                        (VoicePlayCondMaster_o *)MasterData_object,
                                        this->fields.id,
                                        v38->fields.id,
                                        0LL,
                                        -1LL,
                                        genderType,
                                        0LL,
                                        0LL,
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_32;
            saveNameList = &v33->fields.infos->obj;
            v45 = v15->fields._items;
            v46 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v15->fields._version;
            if ( !v45 )
              goto LABEL_32;
            v47 = v15->fields._size;
            if ( (unsigned int)v47 >= v45->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v15,
                saveNameList,
                *(const MethodInfo_363C890 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
            }
            else
            {
              v48 = &v45->obj.klass + v47;
              v15->fields._size = v47 + 1;
              v48[4] = (Il2CppClass *)saveNameList;
              sub_1C1AB78((PartyOrganizationUtility_o *)(v48 + 4), (int64_t)saveNameList, v39, v40, v41, v42, v43, v44);
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v31;
    if ( !scriptJson )
      goto LABEL_32;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList_41075316(
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
  DataManager_o *Instance; // x0
  Il2CppObject *saveNameList; // x1
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_List_object__o *v20; // x23
  const MethodInfo *v21; // x2
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned __int64 v33; // x25
  unsigned __int64 max_length; // x9
  SvtVoiceInfo_o *v35; // x27
  struct ServantVoiceCond_array *conds; // x9
  __int64 v37; // x28
  int v38; // w8
  ServantVoiceCond_o *v39; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v41; // x8
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0

  if ( (byte_4BC844B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v14);
    sub_1C1ABD4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v15);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4BC844B = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v21);
  if ( Instance )
  {
    if ( v20 )
    {
      saveNameList = (Il2CppObject *)Instance->fields.saveNameList;
      items = v20->fields._items;
      v29 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v20->fields._version;
      if ( items )
      {
        size = v20->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            saveNameList,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v20->fields._size = size + 1;
          v31[4] = (Il2CppClass *)saveNameList;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v31 + 4), (int64_t)saveNameList, v22, v23, v24, v25, v26, v27);
        }
        return (System_Collections_Generic_List_ServantVoiceData____o *)v20;
      }
    }
LABEL_40:
    sub_1C1AE30(Instance, saveNameList);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_40;
  v33 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (__int64)v33 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v20;
    if ( v33 >= max_length )
LABEL_43:
      sub_1C1AE38(Instance, saveNameList);
    v35 = scriptJson->m_Items[v33];
    if ( v35 )
    {
      conds = v35->fields.conds;
      if ( conds )
      {
        v37 = 0LL;
        while ( 1 )
        {
          v38 = conds->max_length;
          if ( (int)v37 >= v38 )
            break;
          if ( (unsigned int)v37 >= v38 )
            goto LABEL_43;
          v39 = conds->m_Items[v37];
          if ( !v39 )
            goto LABEL_40;
          if ( v39->fields.condType == condType )
          {
            if ( condType != 3 && condType != 23 && condType != 9 )
              goto LABEL_46;
            if ( v39->fields.value == condValue )
            {
              infos = v35->fields.infos;
              if ( !infos )
                goto LABEL_40;
              if ( !infos->max_length )
                goto LABEL_43;
              v41 = infos->m_Items[0];
              if ( !v41 || !MasterData_object )
                goto LABEL_40;
              Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(
                                            (VoicePlayCondMaster_o *)MasterData_object,
                                            this->fields.id,
                                            v41->fields.id,
                                            0LL,
                                            -1LL,
                                            genderType,
                                            0LL,
                                            0LL,
                                            0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
LABEL_46:
                if ( !v20 )
                  goto LABEL_40;
                saveNameList = &v35->fields.infos->obj;
                v42 = v20->fields._items;
                v43 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v20->fields._version;
                if ( !v42 )
                  goto LABEL_40;
                v44 = v20->fields._size;
                if ( (unsigned int)v44 >= v42->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v20,
                    saveNameList,
                    *(const MethodInfo_363C890 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
                }
                else
                {
                  v45 = &v42->obj.klass + v44;
                  v20->fields._size = v44 + 1;
                  v45[4] = (Il2CppClass *)saveNameList;
                  sub_1C1AB78(
                    (PartyOrganizationUtility_o *)(v45 + 4),
                    (int64_t)saveNameList,
                    v22,
                    v23,
                    v24,
                    v25,
                    v26,
                    v27);
                }
              }
            }
          }
          conds = v35->fields.conds;
          ++v37;
          if ( !conds )
            goto LABEL_40;
        }
        scriptJson = this->fields.scriptJson;
      }
    }
    ++v33;
    if ( !scriptJson )
      goto LABEL_40;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList_41076044(
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
  Il2CppObject *Instance; // x0
  Il2CppObject *p_obj; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v19; // x19
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v27; // x9
  SvtVoiceInfo_o *v28; // x8
  il2cpp_array_size_t v29; // w26
  _BOOL4 v30; // w24
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v32; // x25
  struct ServantVoiceData_array *infos; // x9
  __int64 v34; // x27
  int v35; // w8
  ServantVoiceData_o *v36; // x28
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0

  if ( (byte_4BC844C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v12);
    sub_1C1ABD4(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v13);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1C1ABD4(&StringLiteral_16407/*"_B050"*/, v15);
    byte_4BC844C = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !labelName )
    goto LABEL_43;
  Instance = (Il2CppObject *)System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16407/*"_B050"*/, 0LL);
  scriptJson = this->fields.scriptJson;
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !scriptJson )
      goto LABEL_43;
    v29 = 0;
    v30 = (unsigned int)(type - 1) < 2 && isCheckPlayCond;
    while ( 1 )
    {
      max_length = scriptJson->max_length;
      if ( (int)v29 >= (int)max_length )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v19;
      if ( v29 >= max_length )
        goto LABEL_44;
      v32 = scriptJson->m_Items[v29];
      if ( !v32 )
        goto LABEL_43;
      infos = v32->fields.infos;
      if ( !infos )
        goto LABEL_34;
      v34 = 0LL;
      while ( 1 )
      {
        v35 = infos->max_length;
        if ( (int)v34 >= v35 )
          break;
        if ( (unsigned int)v34 >= v35 )
          goto LABEL_44;
        v36 = infos->m_Items[v34];
        if ( !v36 )
          goto LABEL_43;
        Instance = (Il2CppObject *)System_String__Equals_63048684(labelName, v36->fields.id, 0LL);
        if ( v30 )
        {
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_31;
          if ( !MasterData_object )
            goto LABEL_43;
          Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(
                                       (VoicePlayCondMaster_o *)MasterData_object,
                                       this->fields.id,
                                       v36->fields.id,
                                       disableCondTypeList,
                                       -1LL,
                                       -1,
                                       0LL,
                                       0LL,
                                       0LL);
        }
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v19 )
          {
            p_obj = &v32->fields.infos->obj;
LABEL_38:
            items = v19->fields._items;
            v38 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v19->fields._version;
            if ( items )
            {
              size = v19->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v19,
                  p_obj,
                  *(const MethodInfo_363C890 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
              }
              else
              {
                v40 = &items->obj.klass + size;
                v19->fields._size = size + 1;
                v40[4] = (Il2CppClass *)p_obj;
                sub_1C1AB78((PartyOrganizationUtility_o *)(v40 + 4), (int64_t)p_obj, v20, v21, v22, v23, v24, v25);
              }
              return (System_Collections_Generic_List_ServantVoiceData____o *)v19;
            }
          }
LABEL_43:
          sub_1C1AE30(Instance, p_obj);
        }
LABEL_31:
        infos = v32->fields.infos;
        ++v34;
        if ( !infos )
          goto LABEL_43;
      }
      scriptJson = this->fields.scriptJson;
LABEL_34:
      ++v29;
      if ( !scriptJson )
        goto LABEL_43;
    }
  }
  if ( !scriptJson )
    goto LABEL_43;
  v27 = *(_QWORD *)&scriptJson->max_length;
  if ( !v27 )
    return (System_Collections_Generic_List_ServantVoiceData____o *)v19;
  if ( !(_DWORD)v27 )
LABEL_44:
    sub_1C1AE38(Instance, p_obj);
  v28 = scriptJson->m_Items[0];
  if ( !v28 )
    goto LABEL_43;
  p_obj = &v28->fields.infos->obj;
  if ( p_obj && p_obj[1].monitor )
  {
    if ( v19 )
      goto LABEL_38;
    goto LABEL_43;
  }
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
  __int64 v11; // x1
  UserGameEntity_o *SelfUserGame; // x21
  UserServantEntity_array *Instance; // x0
  __int64 v14; // x1
  UserServantMaster_o *v15; // x22
  Il2CppObject *Entity; // x21
  UserServantEntity_array *v17; // x22
  int32_t FriendshipRank; // w0
  const MethodInfo *v19; // x2
  struct ServantVoiceCond_array *conds; // x25
  int max_length; // w8
  int32_t v22; // w24
  int v23; // w26
  bool v24; // w20
  ServantVoiceCond_o *v25; // x23
  int32_t value; // w23
  ServantVoiceEntity_o *v27; // x0
  UserGameEntity_o *v28; // x2
  const MethodInfo *v30; // [xsp+0h] [xbp-60h]

  if ( (byte_4BC8459 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, info);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1C1ABD4(&VoiceCondType_TypeInfo, v11);
    byte_4BC8459 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame
    || (v15 = (UserServantMaster_o *)Instance) == 0LL
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   SelfUserGame->fields.favoriteUserSvtId,
                   (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
        Instance = UserServantMaster__getAllList(v15, 0LL),
        !Entity)
    || (v17 = Instance,
        FriendshipRank = UserServantEntity__getFriendshipRank((UserServantEntity_o *)Entity, 0LL),
        Instance = (UserServantEntity_array *)ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v19),
        !info)
    || (conds = info->fields.conds) == 0LL )
  {
LABEL_22:
    sub_1C1AE30(Instance, v14);
  }
  max_length = conds->max_length;
  if ( max_length < 1 )
    return 0;
  v22 = (int)Instance;
  v23 = 0;
  v24 = isBeforeFriendship;
  do
  {
    if ( v23 >= (unsigned int)max_length )
      sub_1C1AE38(Instance, v14);
    v25 = conds->m_Items[v23];
    if ( !v25 )
      goto LABEL_22;
    if ( v25->fields.condType == 23 )
    {
      value = v25->fields.value;
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      Instance = (UserServantEntity_array *)VoiceCondType__IsSatisfyCostumeCondition(value, imageLimitCount, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        return 0;
    }
    else
    {
      v27 = (ServantVoiceEntity_o *)UserServantEntity__getFriendshipRank((UserServantEntity_o *)Entity, 0LL);
      Instance = (UserServantEntity_array *)ServantVoiceEntity__IsAvailableHomeAndGrowth(
                                              v27,
                                              v25,
                                              v28,
                                              (UserServantEntity_o *)Entity,
                                              v17,
                                              v22,
                                              (int32_t)v27,
                                              v24,
                                              v30);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        return 0;
    }
    max_length = conds->max_length;
    ++v23;
  }
  while ( v23 < max_length );
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
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x2
  const MethodInfo *v12; // x3

  if ( (byte_4BC8457 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, info);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4BC8457 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v10);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return ServantVoiceEntity__isAvailableVoice_41082632(this, info, (UserServantEntity_o *)Entity, v12);
}


bool __fastcall ServantVoiceEntity__isAvailableVoice_41082632(
        ServantVoiceEntity_o *this,
        SvtVoiceInfo_o *info,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  UserServantEntity_array *AllList; // x20
  int32_t FriendshipRank; // w0
  const MethodInfo *v13; // x2
  struct ServantVoiceCond_array *conds; // x25
  int max_length; // w8
  int32_t v16; // w21
  unsigned int v17; // w26
  ServantVoiceCond_o *v18; // x23
  int32_t condType; // w22
  ServantVoiceEntity_o *v20; // x0
  UserGameEntity_o *v21; // x2
  int32_t value; // w23
  int32_t v23; // w2
  int32_t v24; // w0
  int32_t v25; // w1
  int32_t v26; // w23
  int32_t LimitCount; // w24
  const MethodInfo *v29; // [xsp+0h] [xbp-70h]

  if ( (byte_4BC8458 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, info);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C1ABD4(&VoiceCondType_TypeInfo, v8);
    byte_4BC8458 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_25;
  UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_26;
  AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
  FriendshipRank = UserServantEntity__getFriendshipRank(userSvtEntity, 0LL);
  Instance = (Il2CppObject *)ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v13);
  if ( !info )
    goto LABEL_26;
  conds = info->fields.conds;
  if ( !conds )
    goto LABEL_26;
  max_length = conds->max_length;
  if ( max_length < 1 )
  {
LABEL_25:
    LOBYTE(Instance) = 0;
    return (char)Instance;
  }
  v16 = (int)Instance;
  v17 = 0;
  while ( 2 )
  {
    if ( v17 >= max_length )
      sub_1C1AE38(Instance, v10);
    v18 = conds->m_Items[v17];
    if ( !v18 )
LABEL_26:
      sub_1C1AE30(Instance, v10);
    condType = v18->fields.condType;
    Instance = 0LL;
    switch ( condType )
    {
      case 8:
        goto LABEL_19;
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
        value = v18->fields.value;
        if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
        v23 = -1;
        v24 = condType;
        v25 = value;
        goto LABEL_18;
      default:
        if ( (unsigned int)(condType - 24) > 2 )
        {
LABEL_13:
          v20 = (ServantVoiceEntity_o *)UserServantEntity__getFriendshipRank(userSvtEntity, 0LL);
          Instance = (Il2CppObject *)ServantVoiceEntity__IsAvailableHomeAndGrowth(
                                       v20,
                                       v18,
                                       v21,
                                       userSvtEntity,
                                       AllList,
                                       v16,
                                       (int32_t)v20,
                                       0,
                                       v29);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_25;
        }
        else
        {
          v26 = v18->fields.value;
          LimitCount = UserServantEntity__getLimitCount(userSvtEntity, 0LL);
          if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
          v24 = condType;
          v25 = v26;
          v23 = LimitCount;
LABEL_18:
          Instance = (Il2CppObject *)VoiceCondType__IsSatisfyCondition(v24, v25, v23, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_25;
        }
LABEL_19:
        max_length = conds->max_length;
        if ( (int)++v17 < max_length )
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
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BC8460 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId);
    sub_1C1ABD4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BC8460 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_9;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               eventId,
                               (const MethodInfo_32486C4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (__int64)entity[6].klass <= time;
LABEL_9:
    sub_1C1AE30(Instance, v9);
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
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BC845F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&questId);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v4);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BC845F = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v7);
    byte_4BC2585 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_15;
  if ( UserQuestMaster__TryGetEntity(
         (UserQuestMaster_o *)MasterData_object,
         &entity,
         *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
         questId,
         0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserQuestEntity__getClearNum(entity, 0LL) > 0;
LABEL_15:
    sub_1C1AE30(Instance, v7);
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
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x1
  const MethodInfo *v12; // x3

  if ( (byte_4BC8454 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4BC8454 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v10);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return ServantVoiceEntity__lotteryLevelUpVoice_41080608(this, (UserServantEntity_o *)Entity, voiceId, v12);
}


ServantVoiceData_array *__fastcall ServantVoiceEntity__lotteryLevelUpVoice_41080608(
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
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v23; // x20
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v25; // x29
  UserServantEntity_Fields *p_fields; // x27
  __int64 v27; // x9
  SvtVoiceInfo_o *v28; // x24
  struct ServantVoiceData_array *infos; // x8
  __int64 v30; // x9
  ServantVoiceData_o *v31; // x8
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  ServantVoiceData_o *v42; // x8
  __int128 v43; // q1
  int32_t id; // w25
  System_String_o *v45; // x26
  const MethodInfo *v46; // x3
  struct ServantVoiceCond_array *conds; // x8
  WeightRate_int__o *v49; // x21
  int v50; // w23
  int32_t i; // w22
  int32_t Data; // w22
  __int64 v53; // x8
  __int64 v54; // x8
  int32_t v55; // w0
  unsigned int v56; // w29
  SvtVoiceInfo_o *v57; // x24
  struct ServantVoiceData_array *v58; // x8
  __int64 v59; // x9
  ServantVoiceData_o *v60; // x8
  __int128 v61; // q1
  int32_t v62; // w25
  System_String_o *v63; // x26
  const MethodInfo *v64; // x3
  struct ServantVoiceCond_array *v65; // x8
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  Il2CppClass **v75; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+50h] [xbp-80h]

  if ( (byte_4BC8456 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, userServantEntity);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Count__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__, v10);
    sub_1C1ABD4(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v11);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1C1ABD4(&ServantVoiceData___TypeInfo, v13);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_1C1ABD4(&Method_WeightRate_int___ctor__, v15);
    sub_1C1ABD4(&Method_WeightRate_int__getData__, v16);
    sub_1C1ABD4(&Method_WeightRate_int__getTotalWeight__, v17);
    sub_1C1ABD4(&Method_WeightRate_int__setWeight__, v18);
    sub_1C1ABD4(&WeightRate_int__TypeInfo, v19);
    byte_4BC8456 = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_78;
  v25 = 0LL;
  p_fields = &userServantEntity->fields;
  while ( 1 )
  {
    v27 = *(_QWORD *)&scriptJson->max_length;
    if ( (int)v25 >= (int)v27 )
      break;
    if ( (unsigned int)v25 >= (unsigned int)v27 )
      goto LABEL_79;
    v28 = scriptJson->m_Items[v25];
    if ( !v28 )
      goto LABEL_78;
    infos = v28->fields.infos;
    if ( infos )
    {
      v30 = *(_QWORD *)&infos->max_length;
      if ( v30 )
      {
        if ( voiceId )
        {
          if ( !(_DWORD)v30 )
            goto LABEL_79;
          v31 = infos->m_Items[0];
          if ( !v31 )
            goto LABEL_78;
          Instance = System_String__op_Equality(v31->fields.id, voiceId, 0LL);
          if ( (Instance & 1) != 0 )
            goto LABEL_17;
        }
        else
        {
          if ( !(_DWORD)v30 )
            goto LABEL_79;
          v42 = infos->m_Items[0];
          if ( !v42 )
            goto LABEL_78;
          v43 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          id = this->fields.id;
          v45 = v42->fields.id;
          *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
          *(_OWORD *)&v78.fields.fakeValue = v43;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v77 = v78;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v77, 0LL);
          if ( !MasterData_object )
            goto LABEL_78;
          Instance = VoicePlayCondMaster__isVoicePlay(
                       (VoicePlayCondMaster_o *)MasterData_object,
                       id,
                       v45,
                       0LL,
                       Instance,
                       -1,
                       0LL,
                       0LL,
                       0LL);
          if ( (Instance & 1) != 0 )
          {
            conds = v28->fields.conds;
            if ( conds )
            {
              if ( *(_QWORD *)&conds->max_length )
              {
                Instance = ServantVoiceEntity__isAvailableVoice_41082632(this, v28, userServantEntity, v46);
                if ( (Instance & 1) != 0 )
                {
LABEL_17:
                  if ( !v23 )
                    goto LABEL_78;
                  items = v23->fields._items;
                  v39 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
                  ++v23->fields._version;
                  if ( !items )
                    goto LABEL_78;
                  size = v23->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v23,
                      (Il2CppObject *)v28,
                      *(const MethodInfo_363C890 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v41 = &items->obj.klass + size;
                    v23->fields._size = size + 1;
                    v41[4] = (Il2CppClass *)v28;
                    sub_1C1AB78((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)v28, v32, v33, v34, v35, v36, v37);
                  }
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
      goto LABEL_78;
  }
  if ( !v23 )
    goto LABEL_78;
  if ( v23->fields._size )
    goto LABEL_37;
  if ( voiceId )
  {
    if ( (int)v27 >= 1 )
    {
      v56 = 0;
      while ( v56 < (unsigned int)v27 )
      {
        v57 = scriptJson->m_Items[v56];
        if ( !v57 )
          goto LABEL_78;
        v58 = v57->fields.infos;
        if ( v58 )
        {
          v59 = *(_QWORD *)&v58->max_length;
          if ( v59 )
          {
            if ( !(_DWORD)v59 )
              break;
            v60 = v58->m_Items[0];
            if ( !v60 )
              goto LABEL_78;
            v61 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            v62 = this->fields.id;
            v63 = v60->fields.id;
            *(_OWORD *)&v78.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v78.fields.fakeValue = v61;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v76 = v78;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v76, 0LL);
            if ( !MasterData_object )
              goto LABEL_78;
            Instance = VoicePlayCondMaster__isVoicePlay(
                         (VoicePlayCondMaster_o *)MasterData_object,
                         v62,
                         v63,
                         0LL,
                         Instance,
                         -1,
                         0LL,
                         0LL,
                         0LL);
            if ( (Instance & 1) != 0 )
            {
              v65 = v57->fields.conds;
              if ( v65 )
              {
                if ( *(_QWORD *)&v65->max_length )
                {
                  Instance = ServantVoiceEntity__isAvailableVoice_41082632(this, v57, userServantEntity, v64);
                  if ( (Instance & 1) != 0 )
                  {
                    v72 = v23->fields._items;
                    v73 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
                    ++v23->fields._version;
                    if ( !v72 )
                      goto LABEL_78;
                    v74 = v23->fields._size;
                    if ( (unsigned int)v74 >= v72->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v23,
                        (Il2CppObject *)v57,
                        *(const MethodInfo_363C890 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v75 = &v72->obj.klass + v74;
                      v23->fields._size = v74 + 1;
                      v75[4] = (Il2CppClass *)v57;
                      sub_1C1AB78((PartyOrganizationUtility_o *)(v75 + 4), (int64_t)v57, v66, v67, v68, v69, v70, v71);
                    }
                  }
                }
              }
            }
          }
        }
        scriptJson = this->fields.scriptJson;
        if ( !scriptJson )
          goto LABEL_78;
        LODWORD(v27) = scriptJson->max_length;
        if ( (int)++v56 >= (int)v27 )
          goto LABEL_76;
      }
LABEL_79:
      sub_1C1AE38(Instance, v21);
    }
LABEL_76:
    if ( v23->fields._size )
    {
LABEL_37:
      v49 = (WeightRate_int__o *)sub_1C1AE20(WeightRate_int__TypeInfo);
      WeightRate_int____ctor(v49, (const MethodInfo_3A2196C *)Method_WeightRate_int___ctor__);
      v50 = v23->fields._size;
      if ( v50 >= 1 )
      {
        if ( !v49 )
          goto LABEL_78;
        for ( i = 0; i != v50; ++i )
          WeightRate_int___setWeight(v49, 1, i, (const MethodInfo_3A20E88 *)Method_WeightRate_int__setWeight__);
      }
      Instance = System_String__IsNullOrEmpty(voiceId, 0LL);
      if ( (Instance & 1) != 0 || v23->fields._size < 1 )
      {
LABEL_50:
        if ( v49 )
        {
          v55 = UnityEngine_Random__Range_70754152(0, v49->fields.totalweight, 0LL);
          Data = WeightRate_int___getData(v49, v55, (const MethodInfo_3A212FC *)Method_WeightRate_int__getData__);
LABEL_52:
          Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                v23,
                                Data,
                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__);
          if ( Instance )
            return *(ServantVoiceData_array **)(Instance + 64);
        }
      }
      else
      {
        Data = 0;
        while ( 1 )
        {
          Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                v23,
                                Data,
                                (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__);
          if ( !Instance )
            break;
          v53 = *(_QWORD *)(Instance + 64);
          if ( !v53 )
            break;
          if ( !*(_DWORD *)(v53 + 24) )
            goto LABEL_79;
          v54 = *(_QWORD *)(v53 + 32);
          if ( !v54 )
            break;
          Instance = System_String__op_Equality(*(System_String_o **)(v54 + 16), voiceId, 0LL);
          if ( (Instance & 1) != 0 )
            goto LABEL_52;
          if ( ++Data >= v23->fields._size )
            goto LABEL_50;
        }
      }
LABEL_78:
      sub_1C1AE30(Instance, v21);
    }
  }
  return (ServantVoiceData_array *)sub_1C1AC7C(ServantVoiceData___TypeInfo, 0LL);
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
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *v13; // x21
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
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+30h] [xbp-80h]

  if ( (byte_4BC8455 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, userServantEntity);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v6);
    sub_1C1ABD4(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v7);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BC8455 = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v13 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v13,
          (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_28:
    sub_1C1AE30(Instance, v11);
  }
  v15 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v15 >= max_length )
      return (System_Collections_Generic_List_SvtVoiceInfo__o *)v13;
    if ( (unsigned int)v15 >= max_length )
      goto LABEL_31;
    v17 = scriptJson->m_Items[v15];
    if ( !v17 )
      goto LABEL_28;
    infos = v17->fields.infos;
    if ( infos )
    {
      v19 = *(_QWORD *)&infos->max_length;
      if ( v19 )
      {
        if ( !(_DWORD)v19 )
LABEL_31:
          sub_1C1AE38(Instance, v11);
        v20 = infos->m_Items[0];
        if ( !v20 )
          goto LABEL_28;
        v21 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        id = this->fields.id;
        v23 = v20->fields.id;
        *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v38.fields.fakeValue = v21;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v37 = v38;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v37, 0LL);
        if ( !MasterData_object )
          goto LABEL_28;
        Instance = VoicePlayCondMaster__isVoicePlay(
                     (VoicePlayCondMaster_o *)MasterData_object,
                     id,
                     v23,
                     0LL,
                     Instance,
                     -1,
                     0LL,
                     0LL,
                     0LL);
        if ( (Instance & 1) != 0 )
        {
          conds = v17->fields.conds;
          if ( conds )
          {
            if ( *(_QWORD *)&conds->max_length )
            {
              Instance = ServantVoiceEntity__isAvailableVoice_41082632(this, v17, userServantEntity, v24);
              if ( (Instance & 1) != 0 )
              {
                if ( !v13 )
                  goto LABEL_28;
                items = v13->fields._items;
                v33 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
                ++v13->fields._version;
                if ( !items )
                  goto LABEL_28;
                size = v13->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v13,
                    (Il2CppObject *)v17,
                    *(const MethodInfo_363C890 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
                }
                else
                {
                  v35 = &items->obj.klass + size;
                  v13->fields._size = size + 1;
                  v35[4] = (Il2CppClass *)v17;
                  sub_1C1AB78((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)v17, v26, v27, v28, v29, v30, v31);
                }
              }
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v15;
    if ( !scriptJson )
      goto LABEL_28;
  }
}