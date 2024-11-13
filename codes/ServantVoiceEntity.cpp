void __fastcall ServantVoiceEntity___ctor(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16B6D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16B6D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantVoiceEntity__CreatePK(
        int32_t id,
        int32_t voicePrefix,
        int32_t type,
        const MethodInfo *method)
{
  if ( (byte_4B16B4C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&voicePrefix, *(_QWORD *)&type);
    byte_4B16B4C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           voicePrefix,
           type,
           (const MethodInfo_2F11344 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  if ( (byte_4B16B59 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, *(_QWORD *)&rankNow, method);
    byte_4B16B59 = 1;
  }
  v5 = sub_1BCA888(int___TypeInfo, v3);
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
        sub_1BCAA44(v5, v6);
      *(_DWORD *)(v5 + 32 + 4 * v8++) = 0;
    }
    while ( (int)v7 != v8 );
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_31:
    sub_1BCAA3C(v5, v6);
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
    sub_1BCAA3C(this, *(_QWORD *)&type);
  max_length = scriptJson->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
LABEL_19:
      sub_1BCAA44(this, *(_QWORD *)&type);
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
    this = (ServantVoiceEntity_o *)System_String__Equals_62409536(labelName, v12->fields.id, 0LL);
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
    sub_1BCAA3C(this, method);
  max_length = scriptJson->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    this = 0LL;
    while ( 1 )
    {
      if ( v4 >= max_length )
LABEL_24:
        sub_1BCAA44(this, method);
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
    return ServantVoiceEntity__getVoiceList_40584836(this, 3, labelName, 0LL, 1, v5);
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
      sub_1BCAA3C(IsNullOrEmpty, v6);
    v9 = 0LL;
    while ( 1 )
    {
      max_length = scriptJson->max_length;
      if ( (__int64)v9 >= (int)max_length )
        return 0LL;
      if ( v9 >= max_length )
        sub_1BCAA44(IsNullOrEmpty, v6);
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
  __int64 v6; // x2
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  VoicePlayCondMaster_o *v10; // x21
  __int64 v11; // x23
  int max_length; // w9
  SvtVoiceInfo_o *v13; // x8
  struct ServantVoiceData_array *infos; // x9
  ServantVoiceData_o *v15; // x9
  System_String_o *summonScript; // x22

  if ( (byte_4B16B6C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B16B6C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_16:
    sub_1BCAA3C(Instance, v8);
  }
  v10 = (VoicePlayCondMaster_o *)Instance;
  v11 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v11 >= max_length )
      return 0LL;
    if ( (unsigned int)v11 >= max_length )
      goto LABEL_19;
    v13 = scriptJson->m_Items[v11];
    if ( !v13 )
      goto LABEL_16;
    infos = v13->fields.infos;
    if ( !infos )
      goto LABEL_16;
    if ( !infos->max_length )
LABEL_19:
      sub_1BCAA44(Instance, v8);
    v15 = infos->m_Items[0];
    if ( !v15 || !v10 )
      goto LABEL_16;
    summonScript = v13->fields.summonScript;
    Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(
                                 v10,
                                 svtId,
                                 v15->fields.id,
                                 0LL,
                                 -1LL,
                                 -1,
                                 0LL,
                                 0LL,
                                 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (Il2CppObject *)System_String__IsNullOrEmpty(summonScript, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        return summonScript;
    }
    scriptJson = this->fields.scriptJson;
    ++v11;
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
  __int64 v16; // x2
  int32_t condType; // w22
  int32_t v18; // w19
  int32_t v19; // w2
  int32_t v20; // w0
  int32_t v21; // w1
  int32_t value; // w19
  __int64 v23; // x1
  int32_t v24; // w19
  int32_t v26; // w20
  int32_t v27; // w20
  __int64 v28; // x21
  __int64 v29; // x22
  __int64 v30; // x1
  int32_t v31; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4B16B62 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, cond, userEntity);
    this = (ServantVoiceEntity_o *)sub_1BCA7E0(&VoiceCondType_TypeInfo, v15, v16);
    byte_4B16B62 = 1;
  }
  if ( !cond )
LABEL_41:
    sub_1BCAA3C(this, cond);
  condType = cond->fields.condType;
  switch ( condType )
  {
    case 1:
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, cond);
      return VoiceCondType__IsSatisfyBirthdayCondition(0LL);
    case 2:
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, cond);
      return VoiceCondType__IsSatisfyEventCondition(0LL);
    case 3:
      if ( isBeforeFriendship )
      {
        value = cond->fields.value;
        if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, cond);
        v20 = 20;
      }
      else
      {
        if ( friendshipRankWithVoice == -1 )
          return 0;
        value = cond->fields.value;
        if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, cond);
        v20 = 3;
      }
LABEL_38:
      v21 = value;
      v19 = friendshipRankWithVoice;
      return VoiceCondType__IsSatisfyCondition(v20, v21, v19, 0LL);
    case 4:
      v26 = cond->fields.value;
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, cond);
      return VoiceCondType__IsSatisfySvtGetCondition(v26, usrSvtList, 0LL);
    case 5:
      if ( !userSvtEntity )
        goto LABEL_41;
      v27 = cond->fields.value;
      v29 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v28 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, cond);
      *(_QWORD *)&v32.fields.currentCryptoKey = v29;
      *(_QWORD *)&v32.fields.fakeValue = v28;
      v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v32, 0LL);
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, v30);
      return VoiceCondType__IsSatisfySvtGroupCondition(v27, v31, usrSvtList, 0LL);
    case 6:
    case 7:
    case 12:
      v18 = cond->fields.value;
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, cond);
      v19 = -1;
      v20 = condType;
      v21 = v18;
      return VoiceCondType__IsSatisfyCondition(v20, v21, v19, 0LL);
    case 9:
    case 17:
      if ( !userSvtEntity )
        goto LABEL_41;
      value = cond->fields.value;
      friendshipRankWithVoice = UserServantEntity__getLimitCount(userSvtEntity, 0LL);
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, v23);
      v20 = condType;
      goto LABEL_38;
    case 20:
    case 22:
      v24 = cond->fields.value;
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, cond);
      v20 = condType;
      v21 = v24;
      v19 = friendshipRankNow;
      return VoiceCondType__IsSatisfyCondition(v20, v21, v19, 0LL);
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

  return ServantVoiceEntity__getVoiceList_40584836(this, 6, labelName, 0LL, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getBoxGachaVoiceList(
        ServantVoiceEntity_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x20
  __int64 v17; // x1
  int64_t Time; // x21
  Il2CppObject *Instance; // x0
  Il2CppObject *p_obj; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x22
  il2cpp_array_size_t v29; // w23
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v31; // x28
  struct ServantVoiceCond_array *conds; // x29
  __int64 v33; // x8
  __int64 v34; // x19
  ServantVoiceCond_o *v35; // x27
  unsigned int condType; // w8
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B16B63 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v10, v11);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B16B63 = 1;
  }
  entity = 0LL;
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
  Time = NetworkManager__getTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_36:
    sub_1BCAA3C(Instance, p_obj);
  }
  v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v29 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v29 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v16;
    if ( v29 >= max_length )
      goto LABEL_38;
    v31 = scriptJson->m_Items[v29];
    if ( !v31 )
      goto LABEL_36;
    conds = v31->fields.conds;
    if ( conds && (v33 = *(_QWORD *)&conds->max_length) != 0 )
    {
      if ( (int)v33 >= 1 )
      {
        v34 = 0LL;
        while ( (unsigned int)v34 < (unsigned int)v33 )
        {
          v35 = conds->m_Items[v34];
          if ( !v35 || !v28 )
            goto LABEL_36;
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       v28,
                                       &entity,
                                       v35->fields.value,
                                       (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_36;
            if ( Time <= (__int64)entity[6].monitor )
            {
              condType = v35->fields.condType;
              if ( condType <= 0x13 && ((1 << condType) & 0x86000) != 0 )
              {
                if ( !v16 )
                  goto LABEL_36;
                p_obj = &v31->fields.infos->obj;
                items = v16->fields._items;
                v38 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v16->fields._version;
                if ( !items )
                  goto LABEL_36;
                size = v16->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v16,
                    p_obj,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
                }
                else
                {
                  v40 = &items->obj.klass + size;
                  v16->fields._size = size + 1;
                  v40[4] = (Il2CppClass *)p_obj;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 4), (int64_t)p_obj, v21, v22, v23, v24, v25, v26);
                }
              }
            }
          }
          LODWORD(v33) = conds->max_length;
          if ( (int)++v34 >= (int)v33 )
            goto LABEL_35;
        }
LABEL_38:
        sub_1BCAA44(Instance, p_obj);
      }
    }
    else
    {
      if ( !v16 )
        goto LABEL_36;
      p_obj = &v31->fields.infos->obj;
      v41 = v16->fields._items;
      v42 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v16->fields._version;
      if ( !v41 )
        goto LABEL_36;
      v43 = v16->fields._size;
      if ( (unsigned int)v43 >= v41->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v16,
          p_obj,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &v41->obj.klass + v43;
        v16->fields._size = v43 + 1;
        v44[4] = (Il2CppClass *)p_obj;
        sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)p_obj, v21, v22, v23, v24, v25, v26);
      }
    }
LABEL_35:
    ++v29;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x21
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  VoicePlayCondMaster_o *v21; // x22
  __int64 v22; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v24; // x8
  int64_t infos; // x23
  __int64 v26; // x8
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

  if ( (byte_4B16B4F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B16B4F = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                       *(_QWORD *)&type,
                                                       *(_QWORD *)&svtId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_22:
    sub_1BCAA3C(Instance, v19);
  }
  v21 = (VoicePlayCondMaster_o *)Instance;
  v22 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v22 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v17;
    if ( (unsigned int)v22 >= max_length )
      goto LABEL_25;
    v24 = scriptJson->m_Items[v22];
    if ( v24 )
    {
      infos = (int64_t)v24->fields.infos;
      if ( infos )
      {
        if ( !*(_DWORD *)(infos + 24) )
LABEL_25:
          sub_1BCAA44(Instance, v19);
        v26 = *(_QWORD *)(infos + 32);
        if ( v26 )
        {
          if ( v21 )
          {
            Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(
                                         v21,
                                         svtId,
                                         *(System_String_o **)(v26 + 16),
                                         0LL,
                                         -1LL,
                                         -1,
                                         0LL,
                                         0LL,
                                         0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v17 )
                goto LABEL_22;
              Instance = (Il2CppObject *)System_Collections_Generic_List_object___Contains(
                                           v17,
                                           (Il2CppObject *)infos,
                                           (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                items = v17->fields._items;
                v34 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v17->fields._version;
                if ( !items )
                  goto LABEL_22;
                size = v17->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v17,
                    (Il2CppObject *)infos,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
                }
                else
                {
                  v36 = &items->obj.klass + size;
                  v17->fields._size = size + 1;
                  v36[4] = (Il2CppClass *)infos;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), infos, v27, v28, v29, v30, v31, v32);
                }
              }
            }
            scriptJson = this->fields.scriptJson;
            ++v22;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x21
  Il2CppObject *Instance; // x0
  Il2CppObject *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v25; // x22
  int max_length; // w9
  _QWORD *monitor; // x8
  __int64 v28; // x9
  __int64 v29; // x8
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B16B51 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type, *(_QWORD *)&condType);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B16B51 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SvtVoiceInfo__TypeInfo,
                                                       *(_QWORD *)&type,
                                                       *(_QWORD *)&condType,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_21:
    sub_1BCAA3C(Instance, v17);
  }
  v25 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v25 >= max_length )
      return (System_Collections_Generic_List_SvtVoiceInfo__o *)v15;
    if ( (unsigned int)v25 >= max_length )
      goto LABEL_24;
    v17 = (Il2CppObject *)scriptJson->m_Items[v25];
    if ( !v17 )
      goto LABEL_21;
    monitor = v17[4].monitor;
    if ( monitor )
    {
      v28 = monitor[3];
      if ( v28 )
      {
        if ( !(_DWORD)v28 )
LABEL_24:
          sub_1BCAA44(Instance, v17);
        v29 = monitor[4];
        if ( !v29 )
          goto LABEL_21;
        if ( *(_DWORD *)(v29 + 16) == condType )
        {
          if ( !v15 )
            goto LABEL_21;
          items = v15->fields._items;
          v31 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
          ++v15->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              v17,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v17;
            sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v17, v18, v19, v20, v21, v22, v23);
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v25;
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
  if ( (byte_4B16B56 & 1) == 0 )
  {
    this = (ServantVoiceEntity_o *)sub_1BCA7E0(&StringLiteral_16309/*"_B050"*/, *(_QWORD *)&type, labelName);
    byte_4B16B56 = 1;
  }
  if ( v6->fields.type == type )
  {
    if ( !labelName )
      goto LABEL_25;
    this = (ServantVoiceEntity_o *)System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16309/*"_B050"*/, 0LL);
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
          sub_1BCAA44(this, *(_QWORD *)&type);
        v9 = scriptJson->m_Items[0];
        if ( v9 )
          return v9->fields.conds;
LABEL_25:
        sub_1BCAA3C(this, *(_QWORD *)&type);
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
              this = (ServantVoiceEntity_o *)System_String__Equals_62409536(labelName, v17->fields.id, 0LL);
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

  return ServantVoiceEntity__getVoiceList_40584108(this, 2, 23, costumeId, 0LL, -1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getCostumeGetVoiceList(
        ServantVoiceEntity_o *this,
        int32_t costumeId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  return ServantVoiceEntity__getVoiceList_40584108(this, 2, 23, costumeId, 0LL, -1, v3);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x0
  Il2CppObject *p_obj; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v19; // w21
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v21; // x23
  struct ServantVoiceCond_array *conds; // x24
  __int64 v23; // x9
  __int64 v24; // x25
  ServantVoiceCond_o *v25; // x8
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4B16B65 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v7, v8);
    byte_4B16B65 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_23:
    sub_1BCAA3C(v10, p_obj);
  v19 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v19 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v9;
    if ( v19 >= max_length )
LABEL_25:
      sub_1BCAA44(v10, p_obj);
    v21 = scriptJson->m_Items[v19];
    if ( v21 )
    {
      conds = v21->fields.conds;
      if ( conds )
      {
        v23 = *(_QWORD *)&conds->max_length;
        if ( v23 )
        {
          if ( (int)v23 >= 1 )
          {
            v24 = 0LL;
            do
            {
              if ( (unsigned int)v24 >= (unsigned int)v23 )
                goto LABEL_25;
              v25 = conds->m_Items[v24];
              if ( !v25 )
                goto LABEL_23;
              if ( v25->fields.condType == 15 )
              {
                if ( !v9 )
                  goto LABEL_23;
                p_obj = &v21->fields.infos->obj;
                items = v9->fields._items;
                v27 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v9->fields._version;
                if ( !items )
                  goto LABEL_23;
                size = v9->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v9,
                    p_obj,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
                }
                else
                {
                  v29 = &items->obj.klass + size;
                  v9->fields._size = size + 1;
                  v29[4] = (Il2CppClass *)p_obj;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 4), (int64_t)p_obj, v12, v13, v14, v15, v16, v17);
                }
              }
              LODWORD(v23) = conds->max_length;
              ++v24;
            }
            while ( (int)v24 < (int)v23 );
            scriptJson = this->fields.scriptJson;
          }
        }
      }
      ++v19;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x20
  __int64 v17; // x1
  DataManager_o *Time; // x0
  Il2CppObject *p_obj; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  DataManager_o *v27; // x21
  il2cpp_array_size_t v28; // w22
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v30; // x27
  struct ServantVoiceCond_array *conds; // x28
  __int64 v32; // x8
  __int64 i; // x29
  ServantVoiceCond_o *v34; // x23
  int32_t condType; // w8
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0

  if ( (byte_4B16B64 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v10, v11);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B16B64 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
  Time = (DataManager_o *)NetworkManager__getTime(0LL);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_38:
    sub_1BCAA3C(Time, p_obj);
  v27 = Time;
  v28 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v28 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v16;
    if ( v28 >= max_length )
LABEL_40:
      sub_1BCAA44(Time, p_obj);
    v30 = scriptJson->m_Items[v28];
    if ( !v30 )
      goto LABEL_38;
    conds = v30->fields.conds;
    if ( conds && (v32 = *(_QWORD *)&conds->max_length) != 0 )
    {
      if ( (int)v32 >= 1 )
      {
        for ( i = 0LL; (int)i < (int)v32; ++i )
        {
          if ( (unsigned int)i >= (unsigned int)v32 )
            goto LABEL_40;
          v34 = conds->m_Items[i];
          Time = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_38;
          Time = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Time,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !v34 || !Time )
            goto LABEL_38;
          Time = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                                    v34->fields.value,
                                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( Time )
          {
            condType = v34->fields.condType;
            if ( (__int64)Time->fields.lockCountObj <= (__int64)v27 )
            {
              if ( condType != 19 && condType != 13 )
                goto LABEL_30;
            }
            else if ( condType != 19 && condType != 14 )
            {
              goto LABEL_30;
            }
            if ( !v16 )
              goto LABEL_38;
            p_obj = &v30->fields.infos->obj;
            items = v16->fields._items;
            v37 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v16->fields._version;
            if ( !items )
              goto LABEL_38;
            size = v16->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v16,
                p_obj,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
            }
            else
            {
              v39 = &items->obj.klass + size;
              v16->fields._size = size + 1;
              v39[4] = (Il2CppClass *)p_obj;
              sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), (int64_t)p_obj, v20, v21, v22, v23, v24, v25);
            }
          }
LABEL_30:
          LODWORD(v32) = conds->max_length;
        }
      }
    }
    else
    {
      if ( !v16 )
        goto LABEL_38;
      p_obj = &v30->fields.infos->obj;
      v40 = v16->fields._items;
      v41 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v16->fields._version;
      if ( !v40 )
        goto LABEL_38;
      v42 = v16->fields._size;
      if ( (unsigned int)v42 >= v40->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v16,
          p_obj,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &v40->obj.klass + v42;
        v16->fields._size = v42 + 1;
        v43[4] = (Il2CppClass *)p_obj;
        sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 4), (int64_t)p_obj, v20, v21, v22, v23, v24, v25);
      }
    }
    ++v28;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_38;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventRewardVoiceList_40595660(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_40584836(this, 5, labelName, 0LL, 1, v3);
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
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Collections_Generic_List_T__o *v44; // x20
  int64_t Time; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  __int64 v52; // x10
  __int64 v53; // x10
  System_Collections_Generic_List_T__o *v54; // x23
  __int64 v55; // x2
  __int64 v56; // x3
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  __int64 v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v68; // w21
  il2cpp_array_size_t max_length; // w9
  Il2CppObject *v70; // x27
  _BOOL4 v71; // w24
  _QWORD *monitor; // x26
  __int64 v73; // x8
  __int64 v74; // x19
  __int64 v75; // x20
  int32_t v76; // w28
  int64_t v77; // x29
  int v78; // w8
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  Il2CppClass **v82; // x0
  _BOOL8 v83; // x0
  __int64 v84; // x1
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  Il2CppObject *current; // x19
  _DWORD *v92; // x20
  int v93; // w8
  unsigned int v94; // w21
  __int64 v95; // x8
  Il2CppObject *klass; // x1
  struct System_Object_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  Il2CppClass **v100; // x0
  System_Collections_Generic_List_object__o *v102; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_List_object__o *v103; // [xsp+10h] [xbp-C0h]
  int64_t v104; // [xsp+18h] [xbp-B8h]
  System_Collections_Generic_List_T__o *v107; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v108; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v109; // [xsp+50h] [xbp-80h] BYREF

  v6 = isEventDateCondOnly;
  if ( (byte_4B16B6B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, isEventDateCondOnly, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VoiceCondType_Type__Add__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v31, v32);
    sub_1BCA7E0(&System_Collections_Generic_List_VoiceCondType_Type__TypeInfo, v33, v34);
    sub_1BCA7E0(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v35, v36);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40);
    byte_4B16B6B = 1;
  }
  memset(&v109, 0, sizeof(v109));
  v102 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                        isEventDateCondOnly,
                                                        *(_QWORD *)&eventId,
                                                        *(_QWORD *)&checkCondType);
  System_Collections_Generic_List_object____ctor(
    v102,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v44 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_VoiceCondType_Type__TypeInfo,
                                                  v41,
                                                  v42,
                                                  v43);
  System_Collections_Generic_List_Int32Enum____ctor(
    v44,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
  if ( !v44 )
    goto LABEL_54;
  items = v44->fields._items;
  v50 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
  ++v44->fields._version;
  if ( !items )
    goto LABEL_54;
  size = v44->fields._size;
  v107 = v44;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v44,
      14,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    items = v44->fields._items;
    v50 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
    ++v44->fields._version;
    if ( !items )
      goto LABEL_54;
  }
  else
  {
    v44->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 14;
    ++v44->fields._version;
  }
  v52 = v44->fields._size;
  if ( (unsigned int)v52 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v44,
      13,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
    items = v44->fields._items;
    v50 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
    ++v44->fields._version;
    if ( !items )
      goto LABEL_54;
  }
  else
  {
    v44->fields._size = v52 + 1;
    *((_DWORD *)items->m_Items + v52) = 13;
    ++v44->fields._version;
  }
  v53 = v44->fields._size;
  if ( (unsigned int)v53 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v44,
      19,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
  }
  else
  {
    v44->fields._size = v53 + 1;
    *((_DWORD *)items->m_Items + v53) = 19;
  }
  v54 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_VoiceCondType_Type__TypeInfo,
                                                  v46,
                                                  v47,
                                                  v48);
  System_Collections_Generic_List_Int32Enum____ctor(
    v54,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
  if ( !v6 )
  {
    if ( !v54 )
      goto LABEL_54;
    v57 = v54->fields._items;
    v58 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
    ++v54->fields._version;
    if ( !v57 )
      goto LABEL_54;
    v59 = v54->fields._size;
    if ( (unsigned int)v59 >= v57->max_length )
    {
      System_Collections_Generic_List_Int32Enum___AddWithResize(
        v54,
        checkCondType,
        *(const MethodInfo_3587464 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
    }
    else
    {
      v54->fields._size = v59 + 1;
      *((_DWORD *)v57->m_Items + v59) = checkCondType;
    }
  }
  v103 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_SvtVoiceInfo__TypeInfo,
                                                        v46,
                                                        v55,
                                                        v56);
  System_Collections_Generic_List_object____ctor(
    v103,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v60);
  Time = NetworkManager__getTime(0LL);
  v104 = Time;
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_54;
  v68 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v68 >= (int)max_length )
      break;
    if ( v68 >= max_length )
      goto LABEL_78;
    v70 = (Il2CppObject *)scriptJson->m_Items[v68];
    if ( !v70 )
      goto LABEL_54;
    v71 = v6;
    monitor = v70[4].monitor;
    if ( monitor )
    {
      v73 = monitor[3];
      if ( v73 )
      {
        if ( (int)v73 >= 1 )
        {
          v74 = 0LL;
          while ( (unsigned int)v74 < (unsigned int)v73 )
          {
            v75 = monitor[v74 + 4];
            if ( !v75 )
              goto LABEL_54;
            v76 = *(_DWORD *)(v75 + 16);
            Time = System_Collections_Generic_List_Int32Enum___Contains(
                     v107,
                     v76,
                     (const MethodInfo_35877DC *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) == 0 )
            {
              if ( !v54 )
                goto LABEL_54;
              Time = System_Collections_Generic_List_Int32Enum___Contains(
                       v54,
                       v76,
                       (const MethodInfo_35877DC *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
              if ( (Time & 1) == 0 )
                goto LABEL_53;
            }
            Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Time )
              goto LABEL_54;
            Time = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Time,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
            if ( !Time )
              goto LABEL_54;
            Time = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                              *(_DWORD *)(v75 + 20),
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
            if ( !Time || *(_DWORD *)(v75 + 20) != eventId )
              goto LABEL_53;
            v77 = Time;
            Time = System_Collections_Generic_List_Int32Enum___Contains(
                     v107,
                     v76,
                     (const MethodInfo_35877DC *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) != 0 )
            {
              v78 = *(_QWORD *)(v77 + 96) <= v104 ? 13 : 14;
              if ( v76 == 19 )
                v78 = 19;
              if ( v76 != v78 )
                goto LABEL_53;
            }
            LODWORD(v73) = *((_DWORD *)monitor + 6);
            if ( (int)++v74 >= (int)v73 )
              goto LABEL_48;
          }
LABEL_78:
          sub_1BCAA44(Time, v46);
        }
LABEL_48:
        if ( !v103 )
          goto LABEL_54;
        v79 = v103->fields._items;
        v80 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
        ++v103->fields._version;
        if ( !v79 )
          goto LABEL_54;
        v81 = v103->fields._size;
        if ( (unsigned int)v81 >= v79->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v103,
            v70,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
        }
        else
        {
          v82 = &v79->obj.klass + v81;
          v103->fields._size = v81 + 1;
          v82[4] = (Il2CppClass *)v70;
          sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 4), (int64_t)v70, v61, v62, v63, v64, v65, v66);
        }
      }
    }
LABEL_53:
    ++v68;
    v6 = v71;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_54;
  }
  Time = (int64_t)v103;
  if ( !v103 )
LABEL_54:
    sub_1BCAA3C(Time, v46);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v108,
    v103,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v109 = v108;
LABEL_57:
  while ( 1 )
  {
    v83 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v109,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v83 )
      break;
    current = v109.fields._current;
    if ( !v109.fields._current )
      sub_1BCAA3C(v83, v84);
    v92 = v109.fields._current[4].monitor;
    if ( !v92 )
      sub_1BCAA3C(v83, v84);
    v93 = v92[6];
    if ( v93 >= 1 )
    {
      v94 = 0;
      while ( 1 )
      {
        if ( v94 >= v93 )
          sub_1BCAA44(v83, v84);
        v95 = *(_QWORD *)&v92[2 * v94 + 8];
        if ( !v95 )
          sub_1BCAA3C(v83, v84);
        if ( v6 )
          break;
        if ( !v54 )
          sub_1BCAA3C(v83, v84);
        v83 = System_Collections_Generic_List_Int32Enum___Contains(
                v54,
                *(_DWORD *)(v95 + 16),
                (const MethodInfo_35877DC *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
        if ( v83 )
          break;
        v93 = v92[6];
        if ( (int)++v94 >= v93 )
          goto LABEL_57;
      }
      if ( !v102 )
        sub_1BCAA3C(v83, v84);
      klass = (Il2CppObject *)current[4].klass;
      v97 = v102->fields._items;
      v98 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v102->fields._version;
      if ( !v97 )
        sub_1BCAA3C(v83, klass);
      v99 = v102->fields._size;
      if ( (unsigned int)v99 >= v97->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v102,
          klass,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
      }
      else
      {
        v100 = &v97->obj.klass + v99;
        v102->fields._size = v99 + 1;
        v100[4] = (Il2CppClass *)klass;
        sub_1BCA784((PartyOrganizationUtility_o *)(v100 + 4), (int64_t)klass, v85, v86, v87, v88, v89, v90);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v109,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  return (System_Collections_Generic_List_ServantVoiceData____o *)v102;
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getEventShopVoiceList_40598496(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_40584836(this, 9, labelName, 0LL, 1, v3);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_ServantVoiceData____o *EventRewardVoiceList; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  ServantVoiceData_array *current; // x20
  int monitor; // w8
  unsigned int v17; // w23
  ServantVoiceData_o *v18; // x8
  System_String_o *v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B16B69 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, id, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v9, v10);
    byte_4B16B69 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  EventRewardVoiceList = ServantVoiceEntity__getEventRewardVoiceList(this, (const MethodInfo *)id);
  if ( !EventRewardVoiceList )
    sub_1BCAA3C(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)EventRewardVoiceList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v22 = v21;
  do
  {
LABEL_5:
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v13 )
    {
      current = 0LL;
      goto LABEL_16;
    }
    current = (ServantVoiceData_array *)v22.fields._current;
    if ( !v22.fields._current )
      sub_1BCAA3C(v13, v14);
    monitor = (int)v22.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v17 = 0;
  while ( 1 )
  {
    if ( v17 >= monitor )
      sub_1BCAA44(v13, v14);
    v18 = current->m_Items[v17];
    if ( !v18 )
      sub_1BCAA3C(v13, v14);
    v19 = v18->fields.id;
    if ( !v19 )
      sub_1BCAA3C(0LL, v14);
    v13 = System_String__Equals_62409536(v19, id, 0LL);
    if ( v13 )
      break;
    monitor = current->max_length;
    if ( (int)++v17 >= monitor )
      goto LABEL_5;
  }
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_T__o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x5
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10

  if ( (byte_4B16B5A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CondType_Kind__Add__, labelName, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v8, v9);
    byte_4B16B5A = 1;
  }
  v10 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_CondType_Kind__TypeInfo,
                                                  labelName,
                                                  method,
                                                  v3);
  System_Collections_Generic_List_Int32Enum____ctor(
    v10,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v10
    || (items = v10->fields._items,
        v15 = Method_System_Collections_Generic_List_CondType_Kind__Add__,
        ++v10->fields._version,
        !items) )
  {
    sub_1BCAA3C(v11, v12);
  }
  size = v10->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      81,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v10->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  return ServantVoiceEntity__getVoiceList_40584836(
           this,
           1,
           labelName,
           (System_Collections_Generic_List_CondType_Kind__o *)v10,
           0,
           v13);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getLevelUpVoiceList(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( this->fields.type == 2 && !System_String__IsNullOrEmpty(labelName, 0LL) )
    return ServantVoiceEntity__getVoiceList_40584836(this, 2, labelName, 0LL, 0, v5);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_T__o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x5
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10

  if ( (byte_4B16B5B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CondType_Kind__Add__, labelName, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v8, v9);
    byte_4B16B5B = 1;
  }
  v10 = (System_Collections_Generic_List_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_List_CondType_Kind__TypeInfo,
                                                  labelName,
                                                  method,
                                                  v3);
  System_Collections_Generic_List_Int32Enum____ctor(
    v10,
    (const MethodInfo_3586C10 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v10
    || (items = v10->fields._items,
        v15 = Method_System_Collections_Generic_List_CondType_Kind__Add__,
        ++v10->fields._version,
        !items) )
  {
    sub_1BCAA3C(v11, v12);
  }
  size = v10->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      81,
      *(const MethodInfo_3587464 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v10->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  return ServantVoiceEntity__getVoiceList_40584836(
           this,
           2,
           labelName,
           (System_Collections_Generic_List_CondType_Kind__o *)v10,
           0,
           v13);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMasterMissionActionVoiceList(
        ServantVoiceEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x20
  _BOOL8 isQuestClearState; // x0
  Il2CppObject *p_obj; // x1
  const MethodInfo *v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v19; // w21
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v21; // x23
  struct ServantVoiceCond_array *conds; // x24
  __int64 v23; // x10
  __int64 v24; // x25
  char v25; // w27
  char v26; // w8
  char v27; // w9
  ServantVoiceCond_o *v28; // x10
  int32_t condType; // w11
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B16B66 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v7, v8);
    byte_4B16B66 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_34;
  v19 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v19 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v9;
    if ( v19 >= max_length )
LABEL_36:
      sub_1BCAA44(isQuestClearState, p_obj);
    v21 = scriptJson->m_Items[v19];
    if ( !v21 )
      goto LABEL_34;
    conds = v21->fields.conds;
    if ( conds )
    {
      v23 = *(_QWORD *)&conds->max_length;
      if ( v23 )
      {
        if ( (int)v23 >= 1 )
        {
          v24 = 0LL;
          v25 = 0;
          v26 = 0;
          v27 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v24 >= (unsigned int)v23 )
              goto LABEL_36;
            v28 = conds->m_Items[v24];
            if ( !v28 )
              goto LABEL_34;
            condType = v28->fields.condType;
            switch ( condType )
            {
              case 16:
                goto LABEL_27;
              case 7:
                if ( (v26 & 1) == 0 )
                {
                  isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                        (ServantVoiceEntity_o *)isQuestClearState,
                                        v28->fields.value,
                                        v12);
                  if ( isQuestClearState )
                    goto LABEL_33;
                  v26 = 0;
                  goto LABEL_27;
                }
                if ( (v25 & 1) == 0 )
                  goto LABEL_33;
                isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                      (ServantVoiceEntity_o *)isQuestClearState,
                                      v28->fields.value,
                                      v12);
                if ( isQuestClearState )
                  goto LABEL_33;
                break;
              case 6:
                isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                      (ServantVoiceEntity_o *)isQuestClearState,
                                      v28->fields.value,
                                      v12);
                if ( !isQuestClearState )
                  goto LABEL_33;
                break;
              default:
                if ( (v27 & 1) == 0 )
                  goto LABEL_33;
                goto LABEL_27;
            }
            v25 = 1;
            v26 = 1;
LABEL_27:
            LODWORD(v23) = conds->max_length;
            ++v24;
            v27 = 1;
            if ( (int)v24 >= (int)v23 )
            {
              if ( v9 )
              {
                p_obj = &v21->fields.infos->obj;
                items = v9->fields._items;
                v31 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v9->fields._version;
                if ( items )
                {
                  size = v9->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v9,
                      p_obj,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v33 = &items->obj.klass + size;
                    v9->fields._size = size + 1;
                    v33[4] = (Il2CppClass *)p_obj;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)(v33 + 4),
                      (int64_t)p_obj,
                      (int64_t)v12,
                      v13,
                      v14,
                      v15,
                      v16,
                      v17);
                  }
                  break;
                }
              }
LABEL_34:
              sub_1BCAA3C(isQuestClearState, p_obj);
            }
          }
        }
      }
    }
LABEL_33:
    scriptJson = this->fields.scriptJson;
    ++v19;
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


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMasterMissionVoiceList_40596172(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_40584836(this, 8, labelName, 0LL, 1, v3);
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
  System_Collections_Generic_List_object__o *v27; // x19
  const MethodInfo *v28; // x1
  int32_t v29; // w0
  const MethodInfo *v30; // x2
  int v31; // w27
  int32_t v32; // w26
  int64_t Instance; // x0
  Il2CppObject *p_obj; // x1
  __int64 v35; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t FriendShipRank; // w0
  __int64 v38; // x1
  int v39; // w22
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int32_t version; // w10
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v52; // w24
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v54; // x27
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v56; // x8
  struct ServantVoiceCond_array *conds; // x8
  __int64 v58; // x9
  ServantVoiceCond_o *v59; // x10
  int v60; // w10
  ServantVoiceCond_o *v61; // x12
  int32_t condType; // w13
  bool v63; // w12
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x0
  int32_t id; // w26
  __int64 v70; // x1
  int32_t v71; // w25

  if ( (byte_4B16B52 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMasterData_UserServantCollectionMaster___,
      *(_QWORD *)&type,
      *(_QWORD *)&displayType);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v19, v20);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&ServantLimitUpVoiceCache_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    byte_4B16B52 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v27 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                       *(_QWORD *)&type,
                                                       *(_QWORD *)&displayType,
                                                       isPlayVoice);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v29 = ServantVoiceEntity__GetChangeLimitVoiceFriendshipLv(this, v28);
  v31 = v29 - 1;
  if ( v29 < 1 )
    goto LABEL_11;
  v32 = v29;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v35);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_68;
  Instance = (int64_t)UserServantCollectionMaster__GetEntityDefinitely(
                        (UserServantCollectionMaster_o *)MasterData_object,
                        Instance,
                        this->fields.id,
                        0LL);
  if ( !Instance )
    goto LABEL_68;
  FriendShipRank = UserServantCollectionEntity__getFriendShipRank((UserServantCollectionEntity_o *)Instance, 0LL);
  if ( FriendShipRank >= v32 )
  {
    v39 = FriendShipRank;
    if ( displayType )
    {
      id = this->fields.id;
      if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo, v38);
      if ( ServantLimitUpVoiceCache__IsLimitUpVoiceNormal(displayType, id, 0LL) )
        v39 = v31;
      if ( isPlayVoice )
      {
        v71 = this->fields.id;
        if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo, v70);
        ServantLimitUpVoiceCache__UpdateLimitUpVoice(displayType, v71, 0LL);
      }
    }
  }
  else
  {
LABEL_11:
    v39 = -1;
  }
  Instance = (int64_t)ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v30);
  if ( Instance )
  {
    if ( !v27 )
      goto LABEL_68;
    p_obj = *(Il2CppObject **)(Instance + 64);
    version = v27->fields._version;
    items = v27->fields._items;
    v48 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
LABEL_15:
    v27->fields._version = version + 1;
    if ( !items )
      goto LABEL_68;
    size = v27->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v27,
        p_obj,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
    }
    else
    {
      v50 = &items->obj.klass + size;
      v27->fields._size = size + 1;
      v50[4] = (Il2CppClass *)p_obj;
      sub_1BCA784((PartyOrganizationUtility_o *)(v50 + 4), (int64_t)p_obj, v40, v41, v42, v43, v44, v45);
    }
  }
  else
  {
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_68;
    v52 = 0;
    while ( 1 )
    {
      max_length = scriptJson->max_length;
      if ( (int)v52 >= (int)max_length )
        break;
      if ( v52 >= max_length )
        goto LABEL_69;
      v54 = scriptJson->m_Items[v52];
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_68;
      Instance = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      if ( !v54 )
        goto LABEL_68;
      infos = v54->fields.infos;
      if ( !infos )
        goto LABEL_68;
      if ( !infos->max_length )
        goto LABEL_69;
      v56 = infos->m_Items[0];
      if ( !v56 || !Instance )
        goto LABEL_68;
      Instance = VoicePlayCondMaster__isVoicePlay(
                   (VoicePlayCondMaster_o *)Instance,
                   this->fields.id,
                   v56->fields.id,
                   0LL,
                   -1LL,
                   genderType,
                   0LL,
                   0LL,
                   0LL);
      conds = v54->fields.conds;
      if ( conds )
      {
        v58 = *(_QWORD *)&conds->max_length;
        if ( v58 )
        {
          if ( !(_DWORD)v58 )
LABEL_69:
            sub_1BCAA44(Instance, p_obj);
          v59 = conds->m_Items[0];
          if ( !v59 )
            goto LABEL_68;
          if ( v59->fields.condType != 11 )
            goto LABEL_48;
          if ( v39 != -1 && (_DWORD)v58 != 1 )
          {
            if ( (int)v58 < 1 )
              goto LABEL_48;
            v60 = 0;
            while ( 1 )
            {
              v61 = conds->m_Items[v60];
              if ( !v61 )
                goto LABEL_68;
              condType = v61->fields.condType;
              if ( condType == 20 )
              {
                v63 = v61->fields.value <= v39;
              }
              else
              {
                if ( condType == 22 && v61->fields.value >= v39 && (Instance & 1) != 0 )
                {
LABEL_50:
                  if ( v27 )
                  {
                    p_obj = &v54->fields.infos->obj;
                    v64 = v27->fields._items;
                    v65 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                    ++v27->fields._version;
                    if ( v64 )
                    {
                      v66 = v27->fields._size;
                      if ( (unsigned int)v66 >= v64->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v27,
                          p_obj,
                          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v67 = &v64->obj.klass + v66;
                        v27->fields._size = v66 + 1;
                        v67[4] = (Il2CppClass *)p_obj;
                        sub_1BCA784(
                          (PartyOrganizationUtility_o *)(v67 + 4),
                          (int64_t)p_obj,
                          v40,
                          v41,
                          v42,
                          v43,
                          v44,
                          v45);
                      }
                      goto LABEL_48;
                    }
                  }
LABEL_68:
                  sub_1BCAA3C(Instance, p_obj);
                }
                v63 = 0;
              }
              if ( (v63 & Instance & 1) != 0 )
                goto LABEL_50;
              if ( (_DWORD)v58 == ++v60 )
                goto LABEL_48;
            }
          }
          if ( (Instance & 1) == 0 )
            goto LABEL_48;
          if ( !v27 )
            goto LABEL_68;
          p_obj = &v54->fields.infos->obj;
          version = v27->fields._version;
          items = v27->fields._items;
          v48 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          goto LABEL_15;
        }
      }
LABEL_48:
      scriptJson = this->fields.scriptJson;
      ++v52;
      if ( !scriptJson )
        goto LABEL_68;
    }
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v27;
}


ServantVoiceData_array *__fastcall ServantVoiceEntity__getMstMissionVoiceListByName(
        ServantVoiceEntity_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  ServantVoiceData_array *current; // x20
  int monitor; // w8
  unsigned int v17; // w23
  ServantVoiceData_o *v18; // x8
  System_String_o *v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B16B6A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__, id, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__, v9, v10);
    byte_4B16B6A = 1;
  }
  memset(&v22, 0, sizeof(v22));
  VoiceList = ServantVoiceEntity__getVoiceList(this, 8, method);
  if ( !VoiceList )
    sub_1BCAA3C(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)VoiceList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v22 = v21;
  do
  {
LABEL_5:
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v13 )
    {
      current = 0LL;
      goto LABEL_16;
    }
    current = (ServantVoiceData_array *)v22.fields._current;
    if ( !v22.fields._current )
      sub_1BCAA3C(v13, v14);
    monitor = (int)v22.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v17 = 0;
  while ( 1 )
  {
    if ( v17 >= monitor )
      sub_1BCAA44(v13, v14);
    v18 = current->m_Items[v17];
    if ( !v18 )
      sub_1BCAA3C(v13, v14);
    v19 = v18->fields.id;
    if ( !v19 )
      sub_1BCAA3C(0LL, v14);
    v13 = System_String__Equals_62409536(v19, id, 0LL);
    if ( v13 )
      break;
    monitor = current->max_length;
    if ( (int)++v17 >= monitor )
      goto LABEL_5;
  }
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  return current;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getMyRoomFriendShipVoiceList(
        ServantVoiceEntity_o *this,
        int32_t friendShipRank,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  Il2CppObject *p_obj; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_List_object__o *v19; // x22
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v21; // w24
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v23; // x23
  struct ServantVoiceData_array *infos; // x9
  struct ServantVoiceCond_array *conds; // x8
  __int64 v26; // x26
  int v27; // w9
  ServantVoiceCond_o *v28; // x8
  struct ServantVoiceData_array *v29; // x8
  ServantVoiceData_o *v30; // x8
  const MethodInfo *v31; // x4
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

  if ( (byte_4B16B58 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&friendShipRank, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B16B58 = 1;
  }
  if ( this->fields.type != 1 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                             v16,
                                                             v17,
                                                             v18),
        System_Collections_Generic_List_object____ctor(
          v19,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_34:
    sub_1BCAA3C(Instance, p_obj);
  }
  v21 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v21 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v19;
    if ( v21 >= max_length )
LABEL_37:
      sub_1BCAA44(Instance, p_obj);
    v23 = scriptJson->m_Items[v21];
    if ( v23 )
    {
      infos = v23->fields.infos;
      if ( infos && *(_QWORD *)&infos->max_length )
      {
        conds = v23->fields.conds;
        if ( !conds )
          goto LABEL_34;
        v26 = 0LL;
        while ( 1 )
        {
          v27 = conds->max_length;
          if ( (int)v26 >= v27 )
            break;
          if ( (unsigned int)v26 >= v27 )
            goto LABEL_37;
          v28 = conds->m_Items[v26];
          if ( !v28 )
            goto LABEL_34;
          if ( v28->fields.condType == 3 && v28->fields.value == friendShipRank )
          {
            v29 = v23->fields.infos;
            if ( !v29 )
              goto LABEL_34;
            if ( !v29->max_length )
              goto LABEL_37;
            v30 = v29->m_Items[0];
            if ( !v30 || !MasterData_object )
              goto LABEL_34;
            Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(
                                         (VoicePlayCondMaster_o *)MasterData_object,
                                         this->fields.id,
                                         v30->fields.id,
                                         0LL,
                                         -1LL,
                                         -1,
                                         0LL,
                                         0LL,
                                         0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (Il2CppObject *)ServantVoiceEntity__isAvailableMyRoomVoice(this, v23, 0, 1, v31);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v19 )
                  goto LABEL_34;
                p_obj = &v23->fields.infos->obj;
                items = v19->fields._items;
                v39 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v19->fields._version;
                if ( !items )
                  goto LABEL_34;
                size = v19->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v19,
                    p_obj,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
                }
                else
                {
                  v41 = &items->obj.klass + size;
                  v19->fields._size = size + 1;
                  v41[4] = (Il2CppClass *)p_obj;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)p_obj, v32, v33, v34, v35, v36, v37);
                }
              }
            }
          }
          conds = v23->fields.conds;
          ++v26;
          if ( !conds )
            goto LABEL_34;
        }
        scriptJson = this->fields.scriptJson;
      }
      ++v21;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  Il2CppObject *p_obj; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_List_object__o *v19; // x22
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v21; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v23; // x23
  struct ServantVoiceData_array *infos; // x8
  __int64 v25; // x9
  ServantVoiceData_o *v26; // x8
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct ServantVoiceCond_array *conds; // x8
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0

  if ( (byte_4B16B57 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&imageLimitCount, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B16B57 = 1;
  }
  if ( this->fields.type != 1 )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                             v16,
                                                             v17,
                                                             v18),
        System_Collections_Generic_List_object____ctor(
          v19,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_25:
    sub_1BCAA3C(Instance, p_obj);
  }
  v21 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v21 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v19;
    if ( (unsigned int)v21 >= max_length )
      goto LABEL_28;
    v23 = scriptJson->m_Items[v21];
    if ( !v23 )
      goto LABEL_25;
    infos = v23->fields.infos;
    if ( infos )
    {
      v25 = *(_QWORD *)&infos->max_length;
      if ( v25 )
      {
        if ( !(_DWORD)v25 )
LABEL_28:
          sub_1BCAA44(Instance, p_obj);
        v26 = infos->m_Items[0];
        if ( !v26 || !MasterData_object )
          goto LABEL_25;
        Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(
                                     (VoicePlayCondMaster_o *)MasterData_object,
                                     this->fields.id,
                                     v26->fields.id,
                                     0LL,
                                     -1LL,
                                     -1,
                                     0LL,
                                     0LL,
                                     0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          conds = v23->fields.conds;
          if ( !conds )
            goto LABEL_25;
          if ( (int)conds->max_length < 1
            || (Instance = (Il2CppObject *)ServantVoiceEntity__isAvailableMyRoomVoice(
                                             this,
                                             v23,
                                             imageLimitCount,
                                             0,
                                             (const MethodInfo *)v29),
                ((unsigned __int8)Instance & 1) != 0) )
          {
            if ( !v19 )
              goto LABEL_25;
            p_obj = &v23->fields.infos->obj;
            items = v19->fields._items;
            v35 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v19->fields._version;
            if ( !items )
              goto LABEL_25;
            size = v19->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v19,
                p_obj,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v37 = &items->obj.klass + size;
              v19->fields._size = size + 1;
              v37[4] = (Il2CppClass *)p_obj;
              sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)p_obj, v27, v28, v29, v30, v31, v32);
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v21;
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

  return ServantVoiceEntity__getVoiceList_40584836(this, 7, labelName, 0LL, 1, v3);
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

  if ( (byte_4B16B55 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16309/*"_B050"*/, *(_QWORD *)&type, labelName);
    byte_4B16B55 = 1;
  }
  *conds = 0LL;
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)overwriteName, 0LL, v18, v19, v20, v21, v22, v23);
  *overwriteNameDefault = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)overwriteNameDefault, 0LL, v24, v25, v26, v27, v28, v29);
  *overwritePriority = 0;
  if ( this->fields.type != type )
    return;
  if ( !labelName )
    goto LABEL_26;
  v30 = System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16309/*"_B050"*/, 0LL);
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
        sub_1BCAA44(v30, v31);
      v40 = scriptJson->m_Items[0];
      if ( v40 )
      {
        v41 = v40->fields.conds;
        *conds = v41;
        sub_1BCA784((PartyOrganizationUtility_o *)conds, (int64_t)v41, v32, v33, v34, v35, v36, v37);
        *isInvalidVoiceList = v40->fields.isInvalidVoiceList;
        v42 = v40->fields.overwriteName;
        *overwriteName = v42;
        sub_1BCA784((PartyOrganizationUtility_o *)overwriteName, (int64_t)v42, v43, v44, v45, v46, v47, v48);
        v49 = v40->fields.overwriteNameDefault;
        *overwriteNameDefault = v49;
        sub_1BCA784((PartyOrganizationUtility_o *)overwriteNameDefault, (int64_t)v49, v50, v51, v52, v53, v54, v55);
        v56 = v40->fields.overwritePriority;
        goto LABEL_31;
      }
    }
LABEL_26:
    sub_1BCAA3C(v30, v31);
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
    v30 = System_String__Equals_62409536(labelName, v63->fields.id, 0LL);
    if ( v30 )
      break;
    infos = v59->fields.infos;
    ++v61;
    if ( !infos )
      goto LABEL_26;
  }
  v70 = v59->fields.conds;
  *conds = v70;
  sub_1BCA784((PartyOrganizationUtility_o *)conds, (int64_t)v70, v64, v65, v66, v67, v68, v69);
  *isInvalidVoiceList = v59->fields.isInvalidVoiceList;
  if ( !isMaterial
    || (materialOverwriteName = v59->fields.materialOverwriteName,
        *overwriteName = materialOverwriteName,
        sub_1BCA784(
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
    sub_1BCA784((PartyOrganizationUtility_o *)overwriteName, (int64_t)v78, v71, v72, v73, v74, v75, v76);
  }
  v79 = v59->fields.overwriteNameDefault;
  *overwriteNameDefault = v79;
  sub_1BCA784((PartyOrganizationUtility_o *)overwriteNameDefault, (int64_t)v79, v71, v72, v73, v74, v75, v76);
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

  return ServantVoiceEntity__getVoiceList_40584108(this, 1, 3, friendShipRank, 0LL, -1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getSpecificLimitCntUpVoiceList(
        ServantVoiceEntity_o *this,
        int32_t limitCount,
        System_String_o *playVoiceLabel,
        int32_t genderType,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return ServantVoiceEntity__getVoiceList_40584108(this, 2, 9, limitCount, playVoiceLabel, genderType, v5);
}


int32_t __fastcall ServantVoiceEntity__getSvtIdfromVoiceAssetName(System_String_o *assetName, const MethodInfo *method)
{
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( !assetName
    || (assetName = (System_String_o *)System_String__Split(assetName, 0x5Fu, 0, 0LL), result = 0, !assetName) )
  {
    sub_1BCAA3C(assetName, method);
  }
  if ( LODWORD(assetName[1].klass) != 2 )
    return 0;
  if ( System_Int32__TryParse(*(System_String_o **)&assetName[1].fields, &result, 0LL) )
    return result;
  return 0;
}


System_String_o *__fastcall ServantVoiceEntity__getVoiceAssetName(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  return ServantVoiceEntity__getVoiceAssetName_40580584(this->fields.id, method);
}


System_String_o *__fastcall ServantVoiceEntity__getVoiceAssetName_40580584(int32_t svtId, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = svtId;
  if ( (byte_4B16B4D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_4532/*"ChrVoice_"*/, method, v2);
    byte_4B16B4D = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v5, 0LL);
  return System_String__Concat_62401220((System_String_o *)StringLiteral_4532/*"ChrVoice_"*/, v3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList(
        ServantVoiceEntity_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *v10; // x20
  __int64 v11; // x0
  Il2CppObject *p_obj; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v20; // x21
  int max_length; // w9
  SvtVoiceInfo_o *v22; // x8
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4B16B4E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, *(_QWORD *)&type, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v8, v9);
    byte_4B16B4E = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                       *(_QWORD *)&type,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_15:
    sub_1BCAA3C(v11, p_obj);
  v20 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v20 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v10;
    if ( (unsigned int)v20 >= max_length )
      sub_1BCAA44(v11, p_obj);
    v22 = scriptJson->m_Items[v20];
    if ( v22 )
    {
      if ( v10 )
      {
        p_obj = &v22->fields.infos->obj;
        items = v10->fields._items;
        v24 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
        ++v10->fields._version;
        if ( items )
        {
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              p_obj,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v26[4] = (Il2CppClass *)p_obj;
            sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)p_obj, v13, v14, v15, v16, v17, v18);
          }
          scriptJson = this->fields.scriptJson;
          ++v20;
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x19
  DataManager_o *Instance; // x0
  Il2CppObject *saveNameList; // x1
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v23; // x2
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v35; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v37; // x26
  struct ServantVoiceCond_array *conds; // x8
  __int64 v39; // x9
  ServantVoiceCond_o *v40; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v42; // x8
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0

  if ( (byte_4B16B50 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type, *(_QWORD *)&condType);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B16B50 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                       *(_QWORD *)&type,
                                                       *(_QWORD *)&condType,
                                                       *(_QWORD *)&genderType);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = (DataManager_o *)ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v23);
  if ( Instance )
  {
    if ( v19 )
    {
      saveNameList = (Il2CppObject *)Instance->fields.saveNameList;
      items = v19->fields._items;
      v31 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v19->fields._version;
      if ( items )
      {
        size = v19->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v19,
            saveNameList,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v19->fields._size = size + 1;
          v33[4] = (Il2CppClass *)saveNameList;
          sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)saveNameList, v24, v25, v26, v27, v28, v29);
        }
        return (System_Collections_Generic_List_ServantVoiceData____o *)v19;
      }
    }
LABEL_32:
    sub_1BCAA3C(Instance, saveNameList);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_32;
  v35 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v35 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v19;
    if ( (unsigned int)v35 >= max_length )
      goto LABEL_35;
    v37 = scriptJson->m_Items[v35];
    if ( !v37 )
      goto LABEL_32;
    conds = v37->fields.conds;
    if ( conds )
    {
      v39 = *(_QWORD *)&conds->max_length;
      if ( v39 )
      {
        if ( !(_DWORD)v39 )
          goto LABEL_35;
        v40 = conds->m_Items[0];
        if ( !v40 )
          goto LABEL_32;
        if ( v40->fields.condType == condType )
        {
          infos = v37->fields.infos;
          if ( !infos )
            goto LABEL_32;
          if ( !infos->max_length )
LABEL_35:
            sub_1BCAA44(Instance, saveNameList);
          v42 = infos->m_Items[0];
          if ( !v42 || !MasterData_object )
            goto LABEL_32;
          Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(
                                        (VoicePlayCondMaster_o *)MasterData_object,
                                        this->fields.id,
                                        v42->fields.id,
                                        0LL,
                                        -1LL,
                                        genderType,
                                        0LL,
                                        0LL,
                                        0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v19 )
              goto LABEL_32;
            saveNameList = &v37->fields.infos->obj;
            v49 = v19->fields._items;
            v50 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v19->fields._version;
            if ( !v49 )
              goto LABEL_32;
            v51 = v19->fields._size;
            if ( (unsigned int)v51 >= v49->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v19,
                saveNameList,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
            }
            else
            {
              v52 = &v49->obj.klass + v51;
              v19->fields._size = v51 + 1;
              v52[4] = (Il2CppClass *)saveNameList;
              sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 4), (int64_t)saveNameList, v43, v44, v45, v46, v47, v48);
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v35;
    if ( !scriptJson )
      goto LABEL_32;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList_40584108(
        ServantVoiceEntity_o *this,
        int32_t type,
        int32_t condType,
        int32_t condValue,
        System_String_o *playVoiceLabel,
        int32_t genderType,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  DataManager_o *Instance; // x0
  Il2CppObject *saveNameList; // x1
  Il2CppObject *MasterData_object; // x24
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_object__o *v27; // x23
  const MethodInfo *v28; // x2
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned __int64 v40; // x25
  unsigned __int64 max_length; // x9
  SvtVoiceInfo_o *v42; // x27
  struct ServantVoiceCond_array *conds; // x9
  __int64 v44; // x28
  int v45; // w8
  ServantVoiceCond_o *v46; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v48; // x8
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0

  if ( (byte_4B16B53 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type, *(_QWORD *)&condType);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B16B53 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v27 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                       v24,
                                                       v25,
                                                       v26);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v28);
  if ( Instance )
  {
    if ( v27 )
    {
      saveNameList = (Il2CppObject *)Instance->fields.saveNameList;
      items = v27->fields._items;
      v36 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v27->fields._version;
      if ( items )
      {
        size = v27->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v27,
            saveNameList,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          v27->fields._size = size + 1;
          v38[4] = (Il2CppClass *)saveNameList;
          sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)saveNameList, v29, v30, v31, v32, v33, v34);
        }
        return (System_Collections_Generic_List_ServantVoiceData____o *)v27;
      }
    }
LABEL_40:
    sub_1BCAA3C(Instance, saveNameList);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_40;
  v40 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (__int64)v40 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v27;
    if ( v40 >= max_length )
LABEL_43:
      sub_1BCAA44(Instance, saveNameList);
    v42 = scriptJson->m_Items[v40];
    if ( v42 )
    {
      conds = v42->fields.conds;
      if ( conds )
      {
        v44 = 0LL;
        while ( 1 )
        {
          v45 = conds->max_length;
          if ( (int)v44 >= v45 )
            break;
          if ( (unsigned int)v44 >= v45 )
            goto LABEL_43;
          v46 = conds->m_Items[v44];
          if ( !v46 )
            goto LABEL_40;
          if ( v46->fields.condType == condType )
          {
            if ( condType != 3 && condType != 23 && condType != 9 )
              goto LABEL_46;
            if ( v46->fields.value == condValue )
            {
              infos = v42->fields.infos;
              if ( !infos )
                goto LABEL_40;
              if ( !infos->max_length )
                goto LABEL_43;
              v48 = infos->m_Items[0];
              if ( !v48 || !MasterData_object )
                goto LABEL_40;
              Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(
                                            (VoicePlayCondMaster_o *)MasterData_object,
                                            this->fields.id,
                                            v48->fields.id,
                                            0LL,
                                            -1LL,
                                            genderType,
                                            0LL,
                                            0LL,
                                            0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
LABEL_46:
                if ( !v27 )
                  goto LABEL_40;
                saveNameList = &v42->fields.infos->obj;
                v49 = v27->fields._items;
                v50 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v27->fields._version;
                if ( !v49 )
                  goto LABEL_40;
                v51 = v27->fields._size;
                if ( (unsigned int)v51 >= v49->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v27,
                    saveNameList,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
                }
                else
                {
                  v52 = &v49->obj.klass + v51;
                  v27->fields._size = v51 + 1;
                  v52[4] = (Il2CppClass *)saveNameList;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)(v52 + 4),
                    (int64_t)saveNameList,
                    v29,
                    v30,
                    v31,
                    v32,
                    v33,
                    v34);
                }
              }
            }
          }
          conds = v42->fields.conds;
          ++v44;
          if ( !conds )
            goto LABEL_40;
        }
        scriptJson = this->fields.scriptJson;
      }
    }
    ++v40;
    if ( !scriptJson )
      goto LABEL_40;
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *__fastcall ServantVoiceEntity__getVoiceList_40584836(
        ServantVoiceEntity_o *this,
        int32_t type,
        System_String_o *labelName,
        System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList,
        bool isCheckPlayCond,
        const MethodInfo *method)
{
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
  Il2CppObject *Instance; // x0
  Il2CppObject *p_obj; // x1
  Il2CppObject *MasterData_object; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_object__o *v27; // x19
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v35; // x9
  SvtVoiceInfo_o *v36; // x8
  il2cpp_array_size_t v37; // w26
  _BOOL4 v38; // w24
  il2cpp_array_size_t max_length; // w9
  SvtVoiceInfo_o *v40; // x25
  struct ServantVoiceData_array *infos; // x9
  __int64 v42; // x27
  int v43; // w8
  ServantVoiceData_o *v44; // x28
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0

  if ( (byte_4B16B54 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, *(_QWORD *)&type, labelName);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData____Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoiceData____TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&StringLiteral_16309/*"_B050"*/, v19, v20);
    byte_4B16B54 = 1;
  }
  if ( this->fields.type != type )
    return 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v27 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantVoiceData____TypeInfo,
                                                       v24,
                                                       v25,
                                                       v26);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !labelName )
    goto LABEL_43;
  Instance = (Il2CppObject *)System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16309/*"_B050"*/, 0LL);
  scriptJson = this->fields.scriptJson;
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !scriptJson )
      goto LABEL_43;
    v37 = 0;
    v38 = (unsigned int)(type - 1) < 2 && isCheckPlayCond;
    while ( 1 )
    {
      max_length = scriptJson->max_length;
      if ( (int)v37 >= (int)max_length )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v27;
      if ( v37 >= max_length )
        goto LABEL_44;
      v40 = scriptJson->m_Items[v37];
      if ( !v40 )
        goto LABEL_43;
      infos = v40->fields.infos;
      if ( !infos )
        goto LABEL_34;
      v42 = 0LL;
      while ( 1 )
      {
        v43 = infos->max_length;
        if ( (int)v42 >= v43 )
          break;
        if ( (unsigned int)v42 >= v43 )
          goto LABEL_44;
        v44 = infos->m_Items[v42];
        if ( !v44 )
          goto LABEL_43;
        Instance = (Il2CppObject *)System_String__Equals_62409536(labelName, v44->fields.id, 0LL);
        if ( v38 )
        {
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_31;
          if ( !MasterData_object )
            goto LABEL_43;
          Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(
                                       (VoicePlayCondMaster_o *)MasterData_object,
                                       this->fields.id,
                                       v44->fields.id,
                                       disableCondTypeList,
                                       -1LL,
                                       -1,
                                       0LL,
                                       0LL,
                                       0LL);
        }
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v27 )
          {
            p_obj = &v40->fields.infos->obj;
LABEL_38:
            items = v27->fields._items;
            v46 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v27->fields._version;
            if ( items )
            {
              size = v27->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v27,
                  p_obj,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
              }
              else
              {
                v48 = &items->obj.klass + size;
                v27->fields._size = size + 1;
                v48[4] = (Il2CppClass *)p_obj;
                sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 4), (int64_t)p_obj, v28, v29, v30, v31, v32, v33);
              }
              return (System_Collections_Generic_List_ServantVoiceData____o *)v27;
            }
          }
LABEL_43:
          sub_1BCAA3C(Instance, p_obj);
        }
LABEL_31:
        infos = v40->fields.infos;
        ++v42;
        if ( !infos )
          goto LABEL_43;
      }
      scriptJson = this->fields.scriptJson;
LABEL_34:
      ++v37;
      if ( !scriptJson )
        goto LABEL_43;
    }
  }
  if ( !scriptJson )
    goto LABEL_43;
  v35 = *(_QWORD *)&scriptJson->max_length;
  if ( !v35 )
    return (System_Collections_Generic_List_ServantVoiceData____o *)v27;
  if ( !(_DWORD)v35 )
LABEL_44:
    sub_1BCAA44(Instance, p_obj);
  v36 = scriptJson->m_Items[0];
  if ( !v36 )
    goto LABEL_43;
  p_obj = &v36->fields.infos->obj;
  if ( p_obj && p_obj[1].monitor )
  {
    if ( v27 )
      goto LABEL_38;
    goto LABEL_43;
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v27;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantVoiceEntity__isAvailableMyRoomVoice(
        ServantVoiceEntity_o *this,
        SvtVoiceInfo_o *info,
        int32_t imageLimitCount,
        bool isBeforeFriendship,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UserGameEntity_o *SelfUserGame; // x21
  UserServantEntity_array *Instance; // x0
  __int64 v17; // x1
  UserServantMaster_o *v18; // x22
  Il2CppObject *Entity; // x21
  UserServantEntity_array *v20; // x22
  int32_t FriendshipRank; // w0
  const MethodInfo *v22; // x2
  struct ServantVoiceCond_array *conds; // x25
  int max_length; // w8
  int32_t v25; // w24
  int v26; // w26
  bool v27; // w20
  ServantVoiceCond_o *v28; // x23
  int32_t value; // w23
  ServantVoiceEntity_o *v30; // x0
  UserGameEntity_o *v31; // x2
  const MethodInfo *v33; // [xsp+0h] [xbp-60h]

  if ( (byte_4B16B61 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, info, *(_QWORD *)&imageLimitCount);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&VoiceCondType_TypeInfo, v13, v14);
    byte_4B16B61 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame
    || (v18 = (UserServantMaster_o *)Instance) == 0LL
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   SelfUserGame->fields.favoriteUserSvtId,
                   (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
        Instance = UserServantMaster__getAllList(v18, 0LL),
        !Entity)
    || (v20 = Instance,
        FriendshipRank = UserServantEntity__getFriendshipRank((UserServantEntity_o *)Entity, 0LL),
        Instance = (UserServantEntity_array *)ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v22),
        !info)
    || (conds = info->fields.conds) == 0LL )
  {
LABEL_22:
    sub_1BCAA3C(Instance, v17);
  }
  max_length = conds->max_length;
  if ( max_length < 1 )
    return 0;
  v25 = (int)Instance;
  v26 = 0;
  v27 = isBeforeFriendship;
  do
  {
    if ( v26 >= (unsigned int)max_length )
      sub_1BCAA44(Instance, v17);
    v28 = conds->m_Items[v26];
    if ( !v28 )
      goto LABEL_22;
    if ( v28->fields.condType == 23 )
    {
      value = v28->fields.value;
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, v17);
      Instance = (UserServantEntity_array *)VoiceCondType__IsSatisfyCostumeCondition(value, imageLimitCount, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        return 0;
    }
    else
    {
      v30 = (ServantVoiceEntity_o *)UserServantEntity__getFriendshipRank((UserServantEntity_o *)Entity, 0LL);
      Instance = (UserServantEntity_array *)ServantVoiceEntity__IsAvailableHomeAndGrowth(
                                              v30,
                                              v28,
                                              v31,
                                              (UserServantEntity_o *)Entity,
                                              v20,
                                              v25,
                                              (int32_t)v30,
                                              v27,
                                              v33);
      if ( ((unsigned __int8)Instance & 1) == 0 )
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *Entity; // x2
  const MethodInfo *v14; // x3

  if ( (byte_4B16B5F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, info, userSvtId);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B16B5F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v12);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return ServantVoiceEntity__isAvailableVoice_40591420(this, info, (UserServantEntity_o *)Entity, v14);
}


bool __fastcall ServantVoiceEntity__isAvailableVoice_40591420(
        ServantVoiceEntity_o *this,
        SvtVoiceInfo_o *info,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  UserServantEntity_array *AllList; // x20
  int32_t FriendshipRank; // w0
  const MethodInfo *v15; // x2
  struct ServantVoiceCond_array *conds; // x25
  int max_length; // w8
  int32_t v18; // w21
  unsigned int v19; // w26
  ServantVoiceCond_o *v20; // x23
  int32_t condType; // w22
  ServantVoiceEntity_o *v22; // x0
  UserGameEntity_o *v23; // x2
  int32_t value; // w23
  int32_t v25; // w2
  int32_t v26; // w0
  int32_t v27; // w1
  int32_t v28; // w23
  __int64 v29; // x1
  int32_t LimitCount; // w24
  const MethodInfo *v32; // [xsp+0h] [xbp-70h]

  if ( (byte_4B16B60 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, info, userSvtEntity);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&VoiceCondType_TypeInfo, v9, v10);
    byte_4B16B60 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_25;
  UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_26;
  AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
  FriendshipRank = UserServantEntity__getFriendshipRank(userSvtEntity, 0LL);
  Instance = (Il2CppObject *)ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v15);
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
  v18 = (int)Instance;
  v19 = 0;
  while ( 2 )
  {
    if ( v19 >= max_length )
      sub_1BCAA44(Instance, v12);
    v20 = conds->m_Items[v19];
    if ( !v20 )
LABEL_26:
      sub_1BCAA3C(Instance, v12);
    condType = v20->fields.condType;
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
        value = v20->fields.value;
        if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, v12);
        v25 = -1;
        v26 = condType;
        v27 = value;
        goto LABEL_18;
      default:
        if ( (unsigned int)(condType - 24) > 2 )
        {
LABEL_13:
          v22 = (ServantVoiceEntity_o *)UserServantEntity__getFriendshipRank(userSvtEntity, 0LL);
          Instance = (Il2CppObject *)ServantVoiceEntity__IsAvailableHomeAndGrowth(
                                       v22,
                                       v20,
                                       v23,
                                       userSvtEntity,
                                       AllList,
                                       v18,
                                       (int32_t)v22,
                                       0,
                                       v32);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_25;
        }
        else
        {
          v28 = v20->fields.value;
          LimitCount = UserServantEntity__getLimitCount(userSvtEntity, 0LL);
          if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, v29);
          v26 = condType;
          v27 = v28;
          v25 = LimitCount;
LABEL_18:
          Instance = (Il2CppObject *)VoiceCondType__IsSatisfyCondition(v26, v27, v25, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_25;
        }
LABEL_19:
        max_length = conds->max_length;
        if ( (int)++v19 < max_length )
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16B68 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, *(_QWORD *)&eventId, time);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B16B68 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_9;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               eventId,
                               (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (__int64)entity[6].klass <= time;
LABEL_9:
    sub_1BCAA3C(Instance, v11);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16B67 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, *(_QWORD *)&questId, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B16B67 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  if ( UserQuestMaster__TryGetEntity((UserQuestMaster_o *)MasterData_object, &entity, (int64_t)Instance, questId, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserQuestEntity__getClearNum(entity, 0LL) > 0;
LABEL_12:
    sub_1BCAA3C(Instance, v9);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *Entity; // x1
  const MethodInfo *v14; // x3

  if ( (byte_4B16B5C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId, voiceId);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B16B5C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v12);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return ServantVoiceEntity__lotteryLevelUpVoice_40589396(this, (UserServantEntity_o *)Entity, voiceId, v14);
}


ServantVoiceData_array *__fastcall ServantVoiceEntity__lotteryLevelUpVoice_40589396(
        ServantVoiceEntity_o *this,
        UserServantEntity_o *userServantEntity,
        System_String_o *voiceId,
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
  int64_t Instance; // x0
  __int64 v34; // x1
  Il2CppObject *MasterData_object; // x23
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_List_object__o *v39; // x20
  int64_t v40; // x2
  const MethodInfo *v41; // x3
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v43; // x29
  UserServantEntity_Fields *p_fields; // x27
  __int64 v45; // x9
  SvtVoiceInfo_o *v46; // x24
  struct ServantVoiceData_array *infos; // x8
  __int64 v48; // x9
  ServantVoiceData_o *v49; // x8
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  ServantVoiceData_o *v58; // x8
  __int128 v59; // q1
  int32_t id; // w25
  System_String_o *v61; // x26
  struct ServantVoiceCond_array *conds; // x8
  WeightRate_int__o *v64; // x21
  int v65; // w23
  int32_t i; // w22
  int32_t Data; // w22
  __int64 v68; // x8
  __int64 v69; // x8
  int32_t v70; // w0
  unsigned int v71; // w29
  SvtVoiceInfo_o *v72; // x24
  struct ServantVoiceData_array *v73; // x8
  __int64 v74; // x9
  ServantVoiceData_o *v75; // x8
  __int128 v76; // q1
  int32_t v77; // w25
  System_String_o *v78; // x26
  struct ServantVoiceCond_array *v79; // x8
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  Il2CppClass **v87; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+50h] [xbp-80h]

  if ( (byte_4B16B5E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, userServantEntity, voiceId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18);
    sub_1BCA7E0(&ServantVoiceData___TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    sub_1BCA7E0(&Method_WeightRate_int___ctor__, v23, v24);
    sub_1BCA7E0(&Method_WeightRate_int__getData__, v25, v26);
    sub_1BCA7E0(&Method_WeightRate_int__getTotalWeight__, v27, v28);
    sub_1BCA7E0(&Method_WeightRate_int__setWeight__, v29, v30);
    sub_1BCA7E0(&WeightRate_int__TypeInfo, v31, v32);
    byte_4B16B5E = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SvtVoiceInfo__TypeInfo,
                                                       v36,
                                                       v37,
                                                       v38);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_78;
  v43 = 0LL;
  p_fields = &userServantEntity->fields;
  while ( 1 )
  {
    v45 = *(_QWORD *)&scriptJson->max_length;
    if ( (int)v43 >= (int)v45 )
      break;
    if ( (unsigned int)v43 >= (unsigned int)v45 )
      goto LABEL_79;
    v46 = scriptJson->m_Items[v43];
    if ( !v46 )
      goto LABEL_78;
    infos = v46->fields.infos;
    if ( infos )
    {
      v48 = *(_QWORD *)&infos->max_length;
      if ( v48 )
      {
        if ( voiceId )
        {
          if ( !(_DWORD)v48 )
            goto LABEL_79;
          v49 = infos->m_Items[0];
          if ( !v49 )
            goto LABEL_78;
          Instance = System_String__op_Equality(v49->fields.id, voiceId, 0LL);
          if ( (Instance & 1) != 0 )
            goto LABEL_17;
        }
        else
        {
          if ( !(_DWORD)v48 )
            goto LABEL_79;
          v58 = infos->m_Items[0];
          if ( !v58 )
            goto LABEL_78;
          v59 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          id = this->fields.id;
          v61 = v58->fields.id;
          *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
          *(_OWORD *)&v90.fields.fakeValue = v59;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v34);
          v89 = v90;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v89, 0LL);
          if ( !MasterData_object )
            goto LABEL_78;
          Instance = VoicePlayCondMaster__isVoicePlay(
                       (VoicePlayCondMaster_o *)MasterData_object,
                       id,
                       v61,
                       0LL,
                       Instance,
                       -1,
                       0LL,
                       0LL,
                       0LL);
          if ( (Instance & 1) != 0 )
          {
            conds = v46->fields.conds;
            if ( conds )
            {
              if ( *(_QWORD *)&conds->max_length )
              {
                Instance = ServantVoiceEntity__isAvailableVoice_40591420(this, v46, userServantEntity, v41);
                if ( (Instance & 1) != 0 )
                {
LABEL_17:
                  if ( !v39 )
                    goto LABEL_78;
                  items = v39->fields._items;
                  v55 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
                  ++v39->fields._version;
                  if ( !items )
                    goto LABEL_78;
                  size = v39->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v39,
                      (Il2CppObject *)v46,
                      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v57 = &items->obj.klass + size;
                    v39->fields._size = size + 1;
                    v57[4] = (Il2CppClass *)v46;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)(v57 + 4),
                      (int64_t)v46,
                      v40,
                      (int32_t)v41,
                      v50,
                      v51,
                      v52,
                      v53);
                  }
                }
              }
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v43;
    if ( !scriptJson )
      goto LABEL_78;
  }
  if ( !v39 )
    goto LABEL_78;
  if ( v39->fields._size )
    goto LABEL_37;
  if ( voiceId )
  {
    if ( (int)v45 >= 1 )
    {
      v71 = 0;
      while ( v71 < (unsigned int)v45 )
      {
        v72 = scriptJson->m_Items[v71];
        if ( !v72 )
          goto LABEL_78;
        v73 = v72->fields.infos;
        if ( v73 )
        {
          v74 = *(_QWORD *)&v73->max_length;
          if ( v74 )
          {
            if ( !(_DWORD)v74 )
              break;
            v75 = v73->m_Items[0];
            if ( !v75 )
              goto LABEL_78;
            v76 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            v77 = this->fields.id;
            v78 = v75->fields.id;
            *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v90.fields.fakeValue = v76;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v34);
            v88 = v90;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v88, 0LL);
            if ( !MasterData_object )
              goto LABEL_78;
            Instance = VoicePlayCondMaster__isVoicePlay(
                         (VoicePlayCondMaster_o *)MasterData_object,
                         v77,
                         v78,
                         0LL,
                         Instance,
                         -1,
                         0LL,
                         0LL,
                         0LL);
            if ( (Instance & 1) != 0 )
            {
              v79 = v72->fields.conds;
              if ( v79 )
              {
                if ( *(_QWORD *)&v79->max_length )
                {
                  Instance = ServantVoiceEntity__isAvailableVoice_40591420(this, v72, userServantEntity, v41);
                  if ( (Instance & 1) != 0 )
                  {
                    v84 = v39->fields._items;
                    v85 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
                    ++v39->fields._version;
                    if ( !v84 )
                      goto LABEL_78;
                    v86 = v39->fields._size;
                    if ( (unsigned int)v86 >= v84->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v39,
                        (Il2CppObject *)v72,
                        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v87 = &v84->obj.klass + v86;
                      v39->fields._size = v86 + 1;
                      v87[4] = (Il2CppClass *)v72;
                      sub_1BCA784(
                        (PartyOrganizationUtility_o *)(v87 + 4),
                        (int64_t)v72,
                        v40,
                        (int32_t)v41,
                        v80,
                        v81,
                        v82,
                        v83);
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
        LODWORD(v45) = scriptJson->max_length;
        if ( (int)++v71 >= (int)v45 )
          goto LABEL_76;
      }
LABEL_79:
      sub_1BCAA44(Instance, v34);
    }
LABEL_76:
    if ( v39->fields._size )
    {
LABEL_37:
      v64 = (WeightRate_int__o *)sub_1BCAA2C(WeightRate_int__TypeInfo, v34, v40, v41);
      WeightRate_int____ctor(v64, (const MethodInfo_3984A0C *)Method_WeightRate_int___ctor__);
      v65 = v39->fields._size;
      if ( v65 >= 1 )
      {
        if ( !v64 )
          goto LABEL_78;
        for ( i = 0; i != v65; ++i )
          WeightRate_int___setWeight(v64, 1, i, (const MethodInfo_3983F28 *)Method_WeightRate_int__setWeight__);
      }
      Instance = System_String__IsNullOrEmpty(voiceId, 0LL);
      if ( (Instance & 1) != 0 || v39->fields._size < 1 )
      {
LABEL_50:
        if ( v64 )
        {
          v70 = UnityEngine_Random__Range_70113984(0, v64->fields.totalweight, 0LL);
          Data = WeightRate_int___getData(v64, v70, (const MethodInfo_398439C *)Method_WeightRate_int__getData__);
LABEL_52:
          Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                v39,
                                Data,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__);
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
                                v39,
                                Data,
                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__);
          if ( !Instance )
            break;
          v68 = *(_QWORD *)(Instance + 64);
          if ( !v68 )
            break;
          if ( !*(_DWORD *)(v68 + 24) )
            goto LABEL_79;
          v69 = *(_QWORD *)(v68 + 32);
          if ( !v69 )
            break;
          Instance = System_String__op_Equality(*(System_String_o **)(v69 + 16), voiceId, 0LL);
          if ( (Instance & 1) != 0 )
            goto LABEL_52;
          if ( ++Data >= v39->fields._size )
            goto LABEL_50;
        }
      }
LABEL_78:
      sub_1BCAA3C(Instance, v34);
    }
  }
  return (ServantVoiceData_array *)sub_1BCA888(ServantVoiceData___TypeInfo, 0LL);
}


System_Collections_Generic_List_SvtVoiceInfo__o *__fastcall ServantVoiceEntity__randomChangeSvtVoiceCount(
        ServantVoiceEntity_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int64_t Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_List_object__o *v21; // x21
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v23; // x26
  int max_length; // w9
  SvtVoiceInfo_o *v25; // x23
  struct ServantVoiceData_array *infos; // x8
  __int64 v27; // x9
  ServantVoiceData_o *v28; // x8
  __int128 v29; // q1
  int32_t id; // w24
  System_String_o *v31; // x25
  const MethodInfo *v32; // x3
  struct ServantVoiceCond_array *conds; // x8
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+30h] [xbp-80h]

  if ( (byte_4B16B5D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, userServantEntity, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B16B5D = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_SvtVoiceInfo__TypeInfo,
                                                             v18,
                                                             v19,
                                                             v20),
        System_Collections_Generic_List_object____ctor(
          v21,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__),
        (scriptJson = this->fields.scriptJson) == 0LL) )
  {
LABEL_28:
    sub_1BCAA3C(Instance, v16);
  }
  v23 = 0LL;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v23 >= max_length )
      return (System_Collections_Generic_List_SvtVoiceInfo__o *)v21;
    if ( (unsigned int)v23 >= max_length )
      goto LABEL_31;
    v25 = scriptJson->m_Items[v23];
    if ( !v25 )
      goto LABEL_28;
    infos = v25->fields.infos;
    if ( infos )
    {
      v27 = *(_QWORD *)&infos->max_length;
      if ( v27 )
      {
        if ( !(_DWORD)v27 )
LABEL_31:
          sub_1BCAA44(Instance, v16);
        v28 = infos->m_Items[0];
        if ( !v28 )
          goto LABEL_28;
        v29 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        id = this->fields.id;
        v31 = v28->fields.id;
        *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v46.fields.fakeValue = v29;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
        v45 = v46;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v45, 0LL);
        if ( !MasterData_object )
          goto LABEL_28;
        Instance = VoicePlayCondMaster__isVoicePlay(
                     (VoicePlayCondMaster_o *)MasterData_object,
                     id,
                     v31,
                     0LL,
                     Instance,
                     -1,
                     0LL,
                     0LL,
                     0LL);
        if ( (Instance & 1) != 0 )
        {
          conds = v25->fields.conds;
          if ( conds )
          {
            if ( *(_QWORD *)&conds->max_length )
            {
              Instance = ServantVoiceEntity__isAvailableVoice_40591420(this, v25, userServantEntity, v32);
              if ( (Instance & 1) != 0 )
              {
                if ( !v21 )
                  goto LABEL_28;
                items = v21->fields._items;
                v41 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
                ++v21->fields._version;
                if ( !items )
                  goto LABEL_28;
                size = v21->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v21,
                    (Il2CppObject *)v25,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
                }
                else
                {
                  v43 = &items->obj.klass + size;
                  v21->fields._size = size + 1;
                  v43[4] = (Il2CppClass *)v25;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 4), (int64_t)v25, v34, v35, v36, v37, v38, v39);
                }
              }
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v23;
    if ( !scriptJson )
      goto LABEL_28;
  }
}