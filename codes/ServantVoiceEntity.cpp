void ServantVoiceEntity___ctor(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597137A & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_597137A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantVoiceEntity__CreatePK(int32_t id, int32_t voicePrefix, int32_t type, const MethodInfo *method)
{
  if ( (byte_597135E & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_597135E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           voicePrefix,
           type,
           (const MethodInfo_38548C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *ServantVoiceEntity__CreatePrimaryKey(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantVoiceEntity__CreatePK(this->fields.id, this->fields.voicePrefix, this->fields.type, v2);
}


int32_t ServantVoiceEntity__FriendShipRankWithVoice(
        ServantVoiceEntity_o *this,
        int32_t rankNow,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  __int64 v8; // x9
  __int64 v9; // x10
  _DWORD *v10; // x11
  struct SvtVoiceInfo_array *scriptJson; // x9
  int max_length; // w10
  int v13; // w11
  SvtVoiceInfo_o *v14; // x14
  struct ServantVoiceCond_array *conds; // x15
  il2cpp_array_size_t v16; // x14
  ServantVoiceCond_o **m_Items; // x15
  ServantVoiceCond_o *v18; // x16
  __int64 value; // x16
  __int64 v20; // x9
  __int64 v21; // x10

  if ( (byte_597136A & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_597136A = 1;
  }
  v5 = sub_2213B20(int___TypeInfo, (unsigned int)rankNow);
  if ( !v5 )
    goto LABEL_33;
  v7 = *(_QWORD *)(v5 + 24);
  if ( (int)v7 >= 1 )
  {
    v8 = (unsigned int)v7 & ~((int)v7 >> 31);
    v9 = (unsigned int)*(_QWORD *)(v5 + 24);
    v10 = (_DWORD *)(v5 + 32);
    do
    {
      if ( !v9 )
LABEL_32:
        sub_2213CE4(v5);
      --v8;
      --v9;
      *v10++ = 0;
    }
    while ( v8 );
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_33:
    sub_2213CDC(v5, v6);
  max_length = scriptJson->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 == max_length )
        goto LABEL_32;
      v14 = scriptJson->m_Items[v13];
      if ( !v14 )
        goto LABEL_33;
      conds = v14->fields.conds;
      if ( conds )
      {
        v16 = conds->max_length;
        if ( v16 )
        {
          if ( (int)v16 >= 1 )
            break;
        }
      }
LABEL_24:
      if ( ++v13 == (max_length & ~(max_length >> 31)) )
        goto LABEL_25;
    }
    m_Items = conds->m_Items;
    while ( 1 )
    {
      v18 = *m_Items;
      if ( !*m_Items )
        goto LABEL_33;
      if ( v18->fields.condType == 3 )
      {
        value = v18->fields.value;
        if ( (_DWORD)value == rankNow )
          return rankNow;
        if ( (int)value < rankNow )
        {
          if ( (unsigned int)value >= (unsigned int)v7 )
            goto LABEL_32;
          ++*(_DWORD *)(v5 + 32 + 4 * value);
        }
      }
      LODWORD(v16) = v16 - 1;
      ++m_Items;
      if ( !(_DWORD)v16 )
        goto LABEL_24;
    }
  }
LABEL_25:
  v20 = (unsigned int)rankNow - 1LL;
  while ( --rankNow >= 0 )
  {
    if ( rankNow >= (unsigned int)v7 )
      goto LABEL_32;
    v21 = v5 + 4LL * (unsigned int)v20--;
    if ( *(int *)(v21 + 32) > 0 )
      return rankNow;
  }
  return -1;
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantVoiceEntity__GetBoxGachaVoicePriority(
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
    sub_2213CDC(this, *(_QWORD *)&type);
  max_length = scriptJson->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
LABEL_19:
      sub_2213CE4(this);
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
  v11 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v11 >= v10 )
      goto LABEL_19;
    v12 = infos->m_Items[v11];
    if ( !v12 || !labelName )
      goto LABEL_18;
    this = (ServantVoiceEntity_o *)System_String__Equals_75686512(labelName, v12->fields.id, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      return v8->fields.boxGachaPriority;
    v10 = infos->max_length;
    if ( (int)++v11 >= v10 )
      goto LABEL_15;
  }
}


int32_t ServantVoiceEntity__GetChangeLimitVoiceFriendshipLv(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  struct SvtVoiceInfo_array *scriptJson; // x8
  int max_length; // w9
  int v4; // w10
  SvtVoiceInfo_o *v5; // x12
  struct ServantVoiceCond_array *conds; // x13
  il2cpp_array_size_t v7; // x12
  ServantVoiceCond_o *v8; // x14
  ServantVoiceCond_o **m_Items; // x13
  ServantVoiceCond_o *v10; // x14

  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_23:
    sub_2213CDC(this, method);
  max_length = scriptJson->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    this = 0;
    while ( 1 )
    {
      if ( v4 == max_length )
LABEL_24:
        sub_2213CE4(this);
      v5 = scriptJson->m_Items[v4];
      if ( !v5 )
        goto LABEL_23;
      conds = v5->fields.conds;
      if ( conds )
      {
        v7 = conds->max_length;
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
              m_Items = conds->m_Items;
              while ( 1 )
              {
                v10 = *m_Items;
                if ( !*m_Items )
                  goto LABEL_23;
                if ( v10->fields.condType == 20 )
                  break;
                LODWORD(v7) = v7 - 1;
                ++m_Items;
                if ( !(_DWORD)v7 )
                  goto LABEL_19;
              }
              this = (ServantVoiceEntity_o *)(unsigned int)v10->fields.value;
            }
          }
        }
      }
LABEL_19:
      if ( ++v4 == (max_length & ~(max_length >> 31)) )
        return (int)this;
    }
  }
  LODWORD(this) = 0;
  return (int)this;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__GetFirstGetVoiceList(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( this->fields.type == 3 && !System_String__IsNullOrEmpty(labelName, 0) )
    return ServantVoiceEntity__getVoiceList_49822176(this, 3, labelName, 0, 1, v5);
  else
    return 0;
}


SvtVoiceInfo_o *ServantVoiceEntity__GetPlayVoiceLabelInfo(
        ServantVoiceEntity_o *this,
        System_String_o *playVoiceLabel,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1
  SvtVoiceInfo_o *v7; // x21
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned __int64 v9; // x22
  unsigned __int64 max_length_low; // x9
  struct ServantVoiceData_array *infos; // x9
  ServantVoiceData_o *v12; // x8

  IsNullOrEmpty = System_String__IsNullOrEmpty(playVoiceLabel, 0);
  v7 = 0;
  if ( !IsNullOrEmpty )
  {
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
LABEL_13:
      sub_2213CDC(IsNullOrEmpty, v6);
    v9 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(scriptJson->max_length);
      if ( (__int64)v9 >= (int)max_length_low )
        return 0;
      if ( v9 >= max_length_low )
        sub_2213CE4(IsNullOrEmpty);
      v7 = scriptJson->m_Items[v9];
      if ( v7 )
      {
        infos = v7->fields.infos;
        if ( !infos )
          goto LABEL_13;
        if ( SLODWORD(infos->max_length) >= 1 )
        {
          v12 = infos->m_Items[0];
          if ( !v12 )
            goto LABEL_13;
          IsNullOrEmpty = System_String__op_Equality(v12->fields.id, playVoiceLabel, 0);
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


System_String_o *ServantVoiceEntity__GetSummonScriptId(
        ServantVoiceEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  VoicePlayCondMaster_o *v8; // x21
  unsigned int v9; // w23
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v11; // x8
  struct ServantVoiceData_array *infos; // x9
  ServantVoiceData_o *v13; // x9
  System_String_o *summonScript; // x22

  if ( (byte_5971379 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971379 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_16:
    sub_2213CDC(Instance, v6);
  }
  v8 = (VoicePlayCondMaster_o *)Instance;
  v9 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v9 >= (int)max_length )
      return 0;
    if ( v9 >= max_length )
      goto LABEL_19;
    v11 = scriptJson->m_Items[v9];
    if ( !v11 )
      goto LABEL_16;
    infos = v11->fields.infos;
    if ( !infos )
      goto LABEL_16;
    if ( !LODWORD(infos->max_length) )
LABEL_19:
      sub_2213CE4(Instance);
    v13 = infos->m_Items[0];
    if ( !v13 || !v8 )
      goto LABEL_16;
    summonScript = v11->fields.summonScript;
    Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(v8, svtId, v13->fields.id, 0, -1, -1, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (Il2CppObject *)System_String__IsNullOrEmpty(summonScript, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        return summonScript;
    }
    scriptJson = this->fields.scriptJson;
    ++v9;
    if ( !scriptJson )
      goto LABEL_16;
  }
}


bool ServantVoiceEntity__IsAvailableHomeAndGrowth(
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
  int32_t v17; // w19
  int32_t v18; // w0
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w19
  int32_t LimitCount; // w20
  VoiceCondType_c *v23; // x0
  int32_t v24; // w19
  int32_t value; // w19
  int32_t v26; // w20
  __int64 v27; // x21
  __int64 v28; // x22
  int32_t v29; // w20
  __int64 v30; // x1
  int32_t v31; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_5971371 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantVoiceEntity_o *)sub_2213A60(&VoiceCondType_TypeInfo);
    byte_5971371 = 1;
  }
  if ( !cond )
LABEL_45:
    sub_2213CDC(this, cond);
  condType = cond->fields.condType;
  switch ( condType )
  {
    case 1:
      if ( !*(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, cond);
      return VoiceCondType__IsSatisfyBirthdayCondition(0);
    case 2:
      if ( !*(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, cond);
      return VoiceCondType__IsSatisfyEventCondition(0);
    case 3:
      if ( isBeforeFriendship )
      {
        value = cond->fields.value;
        if ( !*(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, cond);
        v18 = 20;
      }
      else
      {
        if ( friendshipRankWithVoice == -1 )
          return 0;
        value = cond->fields.value;
        if ( !*(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, cond);
        v18 = 3;
      }
      v19 = value;
      v20 = friendshipRankWithVoice;
      return VoiceCondType__IsSatisfyCondition(v18, v19, v20, 0);
    case 4:
      v26 = cond->fields.value;
      if ( !*(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, cond);
      return VoiceCondType__IsSatisfySvtGetCondition(v26, usrSvtList, 0);
    case 5:
      if ( !userSvtEntity )
        goto LABEL_45;
      v27 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v28 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      v29 = cond->fields.value;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, cond);
      *(_QWORD *)&v32.fields.currentCryptoKey = v27;
      *(_QWORD *)&v32.fields.fakeValue = v28;
      v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v32, 0);
      if ( !*(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, v30);
      return VoiceCondType__IsSatisfySvtGroupCondition(v29, v31, usrSvtList, 0);
    case 6:
    case 7:
    case 12:
      v17 = cond->fields.value;
      if ( !*(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, cond);
      v18 = condType;
      v19 = v17;
      v20 = -1;
      return VoiceCondType__IsSatisfyCondition(v18, v19, v20, 0);
    case 8:
    case 10:
    case 11:
    case 13:
    case 14:
    case 15:
    case 16:
    case 18:
    case 19:
    case 21:
      return 0;
    case 9:
    case 17:
      if ( !userSvtEntity )
        goto LABEL_45;
      v21 = cond->fields.value;
      LimitCount = UserServantEntity__getLimitCount(userSvtEntity, 0);
      if ( *(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_32;
      v23 = VoiceCondType_TypeInfo;
      goto LABEL_12;
    case 20:
    case 22:
      v24 = cond->fields.value;
      if ( !*(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, cond);
      v18 = condType;
      v19 = v24;
      v20 = friendshipRankNow;
      return VoiceCondType__IsSatisfyCondition(v18, v19, v20, 0);
    default:
      if ( (unsigned int)(condType - 41) >= 3 )
        return 0;
      if ( !userSvtEntity )
        goto LABEL_45;
      v21 = cond->fields.value;
      LimitCount = userSvtEntity->fields.exceedCount;
      v23 = VoiceCondType_TypeInfo;
      if ( *(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_32;
LABEL_12:
      j_il2cpp_runtime_class_init_0(v23, cond);
LABEL_32:
      v18 = condType;
      v19 = v21;
      v20 = LimitCount;
      return VoiceCondType__IsSatisfyCondition(v18, v19, v20, 0);
  }
}


bool ServantVoiceEntity__TryGetSyncServantId(
        ServantVoiceEntity_o *this,
        int32_t *syncSvtId,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  SvtVoiceInfo_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  char v10; // w22
  unsigned __int64 v11; // x23
  unsigned __int64 max_length_low; // x9
  struct ServantVoiceData_array *infos; // x24
  int max_length; // w8
  __int64 v15; // x25
  ServantVoiceData_o *v16; // x8
  struct SvtVoiceInfo_array *v17; // x8

  IsNullOrEmpty = (SvtVoiceInfo_o *)System_String__IsNullOrEmpty(voiceId, 0);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_21;
  v10 = (char)IsNullOrEmpty;
  v11 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(scriptJson->max_length);
    if ( (int)v11 >= (int)max_length_low )
      break;
    if ( v11 >= max_length_low )
      goto LABEL_22;
    IsNullOrEmpty = scriptJson->m_Items[v11];
    if ( !IsNullOrEmpty )
      goto LABEL_21;
    if ( (v10 & 1) != 0 )
      return SvtVoiceInfo__TryGetSyncServantId(IsNullOrEmpty, syncSvtId, 0);
    infos = IsNullOrEmpty->fields.infos;
    if ( !infos )
      goto LABEL_21;
    max_length = infos->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v15 >= max_length )
          goto LABEL_22;
        v16 = infos->m_Items[v15];
        if ( !v16 )
          goto LABEL_21;
        IsNullOrEmpty = (SvtVoiceInfo_o *)System_String__op_Equality(v16->fields.id, voiceId, 0);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
          break;
        max_length = infos->max_length;
        if ( (int)++v15 >= max_length )
          goto LABEL_14;
      }
      v17 = this->fields.scriptJson;
      if ( v17 )
      {
        if ( v11 >= LODWORD(v17->max_length) )
LABEL_22:
          sub_2213CE4(IsNullOrEmpty);
        IsNullOrEmpty = v17->m_Items[v11];
        if ( IsNullOrEmpty )
          return SvtVoiceInfo__TryGetSyncServantId(IsNullOrEmpty, syncSvtId, 0);
      }
LABEL_21:
      sub_2213CDC(IsNullOrEmpty, v8);
    }
LABEL_14:
    scriptJson = this->fields.scriptJson;
    ++v11;
    if ( !scriptJson )
      goto LABEL_21;
  }
  *syncSvtId = 0;
  return 0;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getBattleVoiceList(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_49822176(this, 6, labelName, 0, 1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getBoxGachaVoiceList(
        ServantVoiceEntity_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  int64_t Time; // x21
  Il2CppObject *Instance; // x0
  Il2CppObject *p_obj; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct SvtVoiceInfo_array *scriptJson; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x22
  unsigned int v16; // w23
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v18; // x28
  struct ServantVoiceCond_array *conds; // x29
  il2cpp_array_size_t v20; // x8
  __int64 v21; // x19
  ServantVoiceCond_o *v22; // x27
  unsigned int condType; // w8
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_5971372 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971372 = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  Time = NetworkManager__getTime(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_36:
    sub_2213CDC(Instance, p_obj);
  }
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v16 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v16 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v3;
    if ( v16 >= max_length )
      goto LABEL_38;
    v18 = scriptJson->m_Items[v16];
    if ( !v18 )
      goto LABEL_36;
    conds = v18->fields.conds;
    if ( conds && (v20 = conds->max_length) != 0 )
    {
      if ( (int)v20 >= 1 )
      {
        v21 = 0;
        while ( (unsigned int)v21 < (unsigned int)v20 )
        {
          v22 = conds->m_Items[v21];
          if ( !v22 || !v15 )
            goto LABEL_36;
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       v15,
                                       &entity,
                                       v22->fields.value,
                                       (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_36;
            if ( Time <= (__int64)entity[6].monitor )
            {
              condType = v22->fields.condType;
              if ( condType <= 0x13 && ((1 << condType) & 0x86000) != 0 )
              {
                if ( !v3 )
                  goto LABEL_36;
                items = v3->fields._items;
                p_obj = &v18->fields.infos->obj;
                v25 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v3->fields._version;
                if ( !items )
                  goto LABEL_36;
                size = v3->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v3,
                    p_obj,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
                }
                else
                {
                  v27 = &items->obj.klass + size;
                  v3->fields._size = size + 1;
                  v27[4] = (Il2CppClass *)p_obj;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 4), (int32_t)p_obj, v8, v9, v10, v11, v12, v13);
                }
              }
            }
          }
          LODWORD(v20) = conds->max_length;
          if ( (int)++v21 >= (int)v20 )
            goto LABEL_35;
        }
LABEL_38:
        sub_2213CE4(Instance);
      }
    }
    else
    {
      if ( !v3 )
        goto LABEL_36;
      v28 = v3->fields._items;
      p_obj = &v18->fields.infos->obj;
      v29 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v3->fields._version;
      if ( !v28 )
        goto LABEL_36;
      v30 = v3->fields._size;
      if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          p_obj,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &v28->obj.klass + v30;
        v3->fields._size = v30 + 1;
        v31[4] = (Il2CppClass *)p_obj;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)p_obj, v8, v9, v10, v11, v12, v13);
      }
    }
LABEL_35:
    ++v16;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_36;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getCntStopVoiceList(
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


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getCondClearVoiceList(
        ServantVoiceEntity_o *this,
        int32_t type,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x21
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  struct SvtVoiceInfo_array *scriptJson; // x8
  VoicePlayCondMaster_o *v11; // x22
  unsigned int v12; // w26
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v14; // x8
  struct ServantVoiceData_array *infos; // x23
  ServantVoiceData_o *v16; // x8
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_5971361 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971361 = 1;
  }
  if ( this->fields.type != type )
    return 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_22:
    sub_2213CDC(Instance, v9);
  }
  v11 = (VoicePlayCondMaster_o *)Instance;
  v12 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v12 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
    if ( v12 >= max_length )
      goto LABEL_25;
    v14 = scriptJson->m_Items[v12];
    if ( v14 )
    {
      infos = v14->fields.infos;
      if ( infos )
      {
        if ( !LODWORD(infos->max_length) )
LABEL_25:
          sub_2213CE4(Instance);
        v16 = infos->m_Items[0];
        if ( v16 )
        {
          if ( v11 )
          {
            Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(v11, svtId, v16->fields.id, 0, -1, -1, 0, 0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v7 )
                goto LABEL_22;
              Instance = (Il2CppObject *)System_Collections_Generic_List_object___Contains(
                                           v7,
                                           &infos->obj,
                                           (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                items = v7->fields._items;
                v24 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v7->fields._version;
                if ( !items )
                  goto LABEL_22;
                size = v7->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v7,
                    &infos->obj,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
                }
                else
                {
                  v26 = &items->obj.klass + size;
                  v7->fields._size = size + 1;
                  v26[4] = (Il2CppClass *)infos;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)(v26 + 4),
                    (int32_t)infos,
                    v17,
                    v18,
                    v19,
                    v20,
                    v21,
                    v22);
                }
              }
            }
            scriptJson = this->fields.scriptJson;
            ++v12;
            if ( scriptJson )
              continue;
          }
        }
      }
    }
    goto LABEL_22;
  }
}


System_Collections_Generic_List_SvtVoiceInfo__o *ServantVoiceEntity__getCondVoiceList(
        ServantVoiceEntity_o *this,
        int32_t type,
        int32_t condType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x21
  Il2CppObject *Instance; // x0
  Il2CppObject *v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned int v17; // w23
  unsigned int max_length; // w9
  _QWORD *monitor; // x8
  __int64 v20; // x9
  __int64 v21; // x8
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_5971363 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971363 = 1;
  }
  if ( this->fields.type != type )
    return 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_21:
    sub_2213CDC(Instance, v9);
  }
  v17 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v17 >= (int)max_length )
      return (System_Collections_Generic_List_SvtVoiceInfo__o *)v7;
    if ( v17 >= max_length )
      goto LABEL_24;
    v9 = (Il2CppObject *)scriptJson->m_Items[v17];
    if ( !v9 )
      goto LABEL_21;
    monitor = v9[4].monitor;
    if ( monitor )
    {
      v20 = monitor[3];
      if ( v20 )
      {
        if ( !(_DWORD)v20 )
LABEL_24:
          sub_2213CE4(Instance);
        v21 = monitor[4];
        if ( !v21 )
          goto LABEL_21;
        if ( *(_DWORD *)(v21 + 16) == condType )
        {
          if ( !v7 )
            goto LABEL_21;
          items = v7->fields._items;
          v23 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
          ++v7->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              v9,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v9;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v9, v10, v11, v12, v13, v14, v15);
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v17;
    if ( !scriptJson )
      goto LABEL_21;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getCostumeCombineVoiceList(
        ServantVoiceEntity_o *this,
        int32_t costumeId,
        int32_t genderType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6

  return ServantVoiceEntity__getVoiceList_49821464(this, 2, 23, costumeId, 0, genderType, v4);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getCostumeGetVoiceList(
        ServantVoiceEntity_o *this,
        int32_t costumeId,
        System_String_o *playVoiceLabel,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6

  return ServantVoiceEntity__getVoiceList_49821464(this, 2, 23, costumeId, playVoiceLabel, -1, v4);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getEventIndividualPurchaseVoiceList(
        ServantVoiceEntity_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return ServantVoiceEntity__getEventShopVoiceList(this, 0, eventId, 21, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getEventJoinVoiceList(
        ServantVoiceEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantVoiceEntity__getVoiceList(this, 4, v2);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getEventMissionActionVoiceList(
        ServantVoiceEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x0
  Il2CppObject *p_obj; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned int v13; // w22
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v15; // x23
  struct ServantVoiceCond_array *conds; // x24
  il2cpp_array_size_t v17; // x9
  __int64 v18; // x25
  ServantVoiceCond_o *v19; // x8
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_5971374 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_5971374 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_23:
    sub_2213CDC(v4, p_obj);
  v13 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v13 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v3;
    if ( v13 >= max_length )
LABEL_25:
      sub_2213CE4(v4);
    v15 = scriptJson->m_Items[v13];
    if ( v15 )
    {
      conds = v15->fields.conds;
      if ( conds )
      {
        v17 = conds->max_length;
        if ( v17 )
        {
          if ( (int)v17 >= 1 )
          {
            v18 = 0;
            do
            {
              if ( (unsigned int)v18 >= (unsigned int)v17 )
                goto LABEL_25;
              v19 = conds->m_Items[v18];
              if ( !v19 )
                goto LABEL_23;
              if ( v19->fields.condType == 15 )
              {
                if ( !v3 )
                  goto LABEL_23;
                items = v3->fields._items;
                p_obj = &v15->fields.infos->obj;
                v21 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v3->fields._version;
                if ( !items )
                  goto LABEL_23;
                size = v3->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v3,
                    p_obj,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
                }
                else
                {
                  v23 = &items->obj.klass + size;
                  v3->fields._size = size + 1;
                  v23[4] = (Il2CppClass *)p_obj;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)p_obj, v6, v7, v8, v9, v10, v11);
                }
              }
              LODWORD(v17) = conds->max_length;
              ++v18;
            }
            while ( (int)v18 < (int)v17 );
            scriptJson = this->fields.scriptJson;
          }
        }
      }
      ++v13;
      if ( scriptJson )
        continue;
    }
    goto LABEL_23;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getEventRewardVoiceList(
        ServantVoiceEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v2; // x20
  __int64 v3; // x1
  DataManager_o *Time; // x0
  Il2CppObject *p_obj; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct SvtVoiceInfo_array *scriptJson; // x8
  DataManager_o *v13; // x21
  unsigned int v14; // w26
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v16; // x27
  struct ServantVoiceCond_array *conds; // x28
  il2cpp_array_size_t v18; // x8
  __int64 i; // x29
  ServantVoiceCond_o *v20; // x22
  int32_t condType; // w8
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x0

  if ( (byte_5971373 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971373 = 1;
  }
  v2 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3);
  Time = (DataManager_o *)NetworkManager__getTime(0);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_38:
    sub_2213CDC(Time, p_obj);
  v13 = Time;
  v14 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v14 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v2;
    if ( v14 >= max_length )
LABEL_40:
      sub_2213CE4(Time);
    v16 = scriptJson->m_Items[v14];
    if ( !v16 )
      goto LABEL_38;
    conds = v16->fields.conds;
    if ( conds && (v18 = conds->max_length) != 0 )
    {
      if ( (int)v18 >= 1 )
      {
        for ( i = 0; (int)i < (int)v18; ++i )
        {
          if ( (unsigned int)i >= (unsigned int)v18 )
            goto LABEL_40;
          v20 = conds->m_Items[i];
          Time = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_38;
          Time = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Time,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !v20 || !Time )
            goto LABEL_38;
          Time = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                                    v20->fields.value,
                                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( Time )
          {
            condType = v20->fields.condType;
            if ( (__int64)Time->fields.lockCountObj <= (__int64)v13 )
            {
              if ( condType != 19 && condType != 13 )
                goto LABEL_30;
            }
            else if ( condType != 19 && condType != 14 )
            {
              goto LABEL_30;
            }
            if ( !v2 )
              goto LABEL_38;
            items = v2->fields._items;
            p_obj = &v16->fields.infos->obj;
            v23 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v2->fields._version;
            if ( !items )
              goto LABEL_38;
            size = v2->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v2,
                p_obj,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              v2->fields._size = size + 1;
              v25[4] = (Il2CppClass *)p_obj;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)p_obj, v6, v7, v8, v9, v10, v11);
            }
          }
LABEL_30:
          LODWORD(v18) = conds->max_length;
        }
      }
    }
    else
    {
      if ( !v2 )
        goto LABEL_38;
      v26 = v2->fields._items;
      p_obj = &v16->fields.infos->obj;
      v27 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v2->fields._version;
      if ( !v26 )
        goto LABEL_38;
      v28 = v2->fields._size;
      if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v2,
          p_obj,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &v26->obj.klass + v28;
        v2->fields._size = v28 + 1;
        v29[4] = (Il2CppClass *)p_obj;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 4), (int32_t)p_obj, v6, v7, v8, v9, v10, v11);
      }
    }
    ++v14;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_38;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getEventRewardVoiceList_49832292(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_49822176(this, 5, labelName, 0, 1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getEventShopPurchaseVoiceList(
        ServantVoiceEntity_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return ServantVoiceEntity__getEventShopVoiceList(this, 0, eventId, 18, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getEventShopVoiceList(
        ServantVoiceEntity_o *this,
        bool isEventDateCondOnly,
        int32_t eventId,
        int32_t checkCondType,
        const MethodInfo *method)
{
  _BOOL4 v6; // w27
  System_Collections_Generic_List_object__o *v7; // x26
  System_Collections_Generic_List_T__o *v8; // x20
  int64_t Time; // x0
  __int64 v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  __int64 v14; // x10
  __int64 v15; // x10
  System_Collections_Generic_List_T__o *v16; // x23
  struct System_Object_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned int v28; // w21
  unsigned int max_length; // w9
  _BOOL4 v30; // w24
  Il2CppObject *v31; // x27
  _QWORD *monitor; // x26
  __int64 v33; // x8
  __int64 v34; // x19
  __int64 v35; // x20
  int32_t v36; // w28
  int64_t v37; // x29
  int v38; // w8
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  _BOOL8 v43; // x0
  Il2CppObject *klass; // x1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  Il2CppObject *current; // x19
  _DWORD *v52; // x21
  int v53; // w8
  __int64 v54; // x20
  __int64 v55; // x8
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppClass **v59; // x0
  System_Collections_Generic_List_object__o *v61; // [xsp+8h] [xbp-C8h]
  int64_t v62; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_List_object__o *v63; // [xsp+18h] [xbp-B8h]
  System_Collections_Generic_List_T__o *v66; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+50h] [xbp-80h] BYREF

  v6 = isEventDateCondOnly;
  if ( (byte_5971378 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971378 = 1;
  }
  memset(&v68, 0, sizeof(v68));
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v8 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v8,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
  if ( !v8 )
    goto LABEL_53;
  items = v8->fields._items;
  v12 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
  ++v8->fields._version;
  if ( !items )
    goto LABEL_53;
  size = v8->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v8,
      14,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v8->fields._items;
    v12 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
    ++v8->fields._version;
    if ( !items )
      goto LABEL_53;
  }
  else
  {
    v8->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 14;
    ++v8->fields._version;
  }
  v14 = v8->fields._size;
  if ( (unsigned int)v14 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v8,
      13,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    items = v8->fields._items;
    v12 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
    ++v8->fields._version;
    if ( !items )
      goto LABEL_53;
  }
  else
  {
    v8->fields._size = v14 + 1;
    *((_DWORD *)items->m_Items + v14) = 13;
    ++v8->fields._version;
  }
  v15 = v8->fields._size;
  if ( (unsigned int)v15 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v8,
      19,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v8->fields._size = v15 + 1;
    *((_DWORD *)items->m_Items + v15) = 19;
  }
  v16 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v16,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
  if ( !v6 )
  {
    if ( !v16 )
      goto LABEL_53;
    v17 = v16->fields._items;
    v18 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
    ++v16->fields._version;
    if ( !v17 )
      goto LABEL_53;
    v19 = v16->fields._size;
    if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
    {
      System_Collections_Generic_List_Int32Enum___AddWithResize(
        v16,
        checkCondType,
        *(const MethodInfo_4469A88 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v16->fields._size = v19 + 1;
      *((_DWORD *)v17->m_Items + v19) = checkCondType;
    }
  }
  v66 = v8;
  v61 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v61,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v20);
  Time = NetworkManager__getTime(0);
  v62 = Time;
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_53;
  v28 = 0;
  v63 = v7;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v28 >= (int)max_length )
      break;
    if ( v28 >= max_length )
      goto LABEL_77;
    v30 = v6;
    v31 = (Il2CppObject *)scriptJson->m_Items[v28];
    if ( !v31 )
      goto LABEL_53;
    monitor = v31[4].monitor;
    if ( monitor )
    {
      v33 = monitor[3];
      if ( v33 )
      {
        if ( (int)v33 >= 1 )
        {
          v34 = 0;
          while ( (unsigned int)v34 < (unsigned int)v33 )
          {
            v35 = monitor[v34 + 4];
            if ( !v35 )
              goto LABEL_53;
            v36 = *(_DWORD *)(v35 + 16);
            Time = System_Collections_Generic_List_Int32Enum___Contains(
                     v66,
                     v36,
                     (const MethodInfo_4469E08 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) == 0 )
            {
              if ( !v16 )
                goto LABEL_53;
              Time = System_Collections_Generic_List_Int32Enum___Contains(
                       v16,
                       v36,
                       (const MethodInfo_4469E08 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
              if ( (Time & 1) == 0 )
                goto LABEL_52;
            }
            Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Time )
              goto LABEL_53;
            Time = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Time,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
            if ( !Time )
              goto LABEL_53;
            Time = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                              *(_DWORD *)(v35 + 20),
                              (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
            if ( !Time || *(_DWORD *)(v35 + 20) != eventId )
              goto LABEL_52;
            v37 = Time;
            Time = System_Collections_Generic_List_Int32Enum___Contains(
                     v66,
                     v36,
                     (const MethodInfo_4469E08 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) != 0 )
            {
              v38 = *(_QWORD *)(v37 + 96) <= v62 ? 13 : 14;
              if ( v36 != 19 && v38 != v36 )
                goto LABEL_52;
            }
            LODWORD(v33) = *((_DWORD *)monitor + 6);
            if ( (int)++v34 >= (int)v33 )
              goto LABEL_47;
          }
LABEL_77:
          sub_2213CE4(Time);
        }
LABEL_47:
        if ( !v61 )
          goto LABEL_53;
        v39 = v61->fields._items;
        v40 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
        ++v61->fields._version;
        if ( !v39 )
          goto LABEL_53;
        v41 = v61->fields._size;
        if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v61,
            v31,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &v39->obj.klass + v41;
          v61->fields._size = v41 + 1;
          v42[4] = (Il2CppClass *)v31;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 4), (int32_t)v31, v21, v22, v23, v24, v25, v26);
        }
      }
    }
LABEL_52:
    v7 = v63;
    ++v28;
    v6 = v30;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_53;
  }
  Time = (int64_t)v61;
  if ( !v61 )
LABEL_53:
    sub_2213CDC(Time, v10);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v67,
    v61,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v68 = v67;
  v67.fields._list = 0;
  *(_QWORD *)&v67.fields._index = &v68;
LABEL_56:
  while ( 1 )
  {
    v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v68,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v43 )
      break;
    current = v68.fields._current;
    if ( !v68.fields._current )
      sub_2213CDC(v43, klass);
    v52 = v68.fields._current[4].monitor;
    if ( !v52 )
      sub_2213CDC(v43, klass);
    v53 = v52[6];
    if ( v53 >= 1 )
    {
      v54 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v54 >= v53 )
          sub_2213CE4(v43);
        v55 = *(_QWORD *)&v52[2 * v54 + 8];
        if ( !v55 )
          sub_2213CDC(v43, klass);
        if ( v6 )
          break;
        if ( !v16 )
          sub_2213CDC(v43, klass);
        v43 = System_Collections_Generic_List_Int32Enum___Contains(
                v16,
                *(_DWORD *)(v55 + 16),
                (const MethodInfo_4469E08 *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
        if ( v43 )
          break;
        v53 = v52[6];
        if ( (int)++v54 >= v53 )
          goto LABEL_56;
      }
      if ( !v7
        || (v56 = v7->fields._items,
            klass = (Il2CppObject *)current[4].klass,
            v57 = Method_System_Collections_Generic_List_ServantVoiceData____Add__,
            ++v7->fields._version,
            !v56) )
      {
        sub_2213CDC(v43, klass);
      }
      v58 = v7->fields._size;
      if ( (unsigned int)v58 >= LODWORD(v56->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          klass,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
      }
      else
      {
        v59 = &v56->obj.klass + v58;
        v7->fields._size = v58 + 1;
        v59[4] = (Il2CppClass *)klass;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v59 + 4), (int32_t)klass, v45, v46, v47, v48, v49, v50);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v68,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getEventShopVoiceList_49834632(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_49822176(this, 9, labelName, 0, 1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getFirstGetVoiceList(
        ServantVoiceEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return ServantVoiceEntity__getCondClearVoiceList(this, 3, svtId, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getHomeVoiceList(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x5
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10

  if ( (byte_597136B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_2213A60(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    byte_597136B = 1;
  }
  v5 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v5,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v5
    || (items = v5->fields._items,
        v10 = Method_System_Collections_Generic_List_CondType_Kind__Add__,
        ++v5->fields._version,
        !items) )
  {
    sub_2213CDC(v6, v7);
  }
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      81,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  return ServantVoiceEntity__getVoiceList_49822176(
           this,
           1,
           labelName,
           (System_Collections_Generic_List_CondType_Kind__o *)v5,
           0,
           v8);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getLevelUpVoiceList(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( this->fields.type == 2 && !System_String__IsNullOrEmpty(labelName, 0) )
    return ServantVoiceEntity__getVoiceList_49822176(this, 2, labelName, 0, 0, v5);
  else
    return 0;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getLimitCntUpVoiceList(
        ServantVoiceEntity_o *this,
        int32_t genderType,
        System_String_o *playVoiceLabel,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  return ServantVoiceEntity__getVoiceListByGender(this, 2, 10, genderType, playVoiceLabel, v4);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getLimitCntVoiceListByLabel(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x5
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10

  if ( (byte_597136C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_2213A60(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    byte_597136C = 1;
  }
  v5 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v5,
    (const MethodInfo_44691F8 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v5
    || (items = v5->fields._items,
        v10 = Method_System_Collections_Generic_List_CondType_Kind__Add__,
        ++v5->fields._version,
        !items) )
  {
    sub_2213CDC(v6, v7);
  }
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      81,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  return ServantVoiceEntity__getVoiceList_49822176(
           this,
           2,
           labelName,
           (System_Collections_Generic_List_CondType_Kind__o *)v5,
           0,
           v8);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getMasterMissionActionVoiceList(
        ServantVoiceEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  _BOOL8 isQuestClearState; // x0
  Il2CppObject *p_obj; // x1
  MethodInfo *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned int v13; // w22
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v15; // x23
  struct ServantVoiceCond_array *conds; // x24
  int v17; // w10
  __int64 v18; // x25
  char v19; // w27
  char v20; // w8
  char v21; // w9
  ServantVoiceCond_o *v22; // x10
  int32_t condType; // w11
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_5971375 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_5971375 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_33;
  v13 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v13 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v3;
    if ( v13 >= max_length )
LABEL_35:
      sub_2213CE4(isQuestClearState);
    v15 = scriptJson->m_Items[v13];
    if ( !v15 )
      goto LABEL_33;
    conds = v15->fields.conds;
    if ( conds )
    {
      v17 = conds->max_length;
      if ( v17 >= 1 )
      {
        v18 = 0;
        v19 = 0;
        v20 = 0;
        v21 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v18 >= v17 )
            goto LABEL_35;
          v22 = conds->m_Items[v18];
          if ( !v22 )
            goto LABEL_33;
          condType = v22->fields.condType;
          switch ( condType )
          {
            case 16:
              goto LABEL_26;
            case 7:
              if ( (v20 & 1) == 0 )
              {
                isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                      (ServantVoiceEntity_o *)isQuestClearState,
                                      v22->fields.value,
                                      v6);
                if ( isQuestClearState )
                  goto LABEL_32;
                v20 = 0;
                goto LABEL_26;
              }
              if ( (v19 & 1) == 0 )
                goto LABEL_32;
              isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                    (ServantVoiceEntity_o *)isQuestClearState,
                                    v22->fields.value,
                                    v6);
              if ( isQuestClearState )
                goto LABEL_32;
              break;
            case 6:
              isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                    (ServantVoiceEntity_o *)isQuestClearState,
                                    v22->fields.value,
                                    v6);
              if ( !isQuestClearState )
                goto LABEL_32;
              break;
            default:
              if ( (v21 & 1) == 0 )
                goto LABEL_32;
              goto LABEL_26;
          }
          v19 = 1;
          v20 = 1;
LABEL_26:
          v17 = conds->max_length;
          ++v18;
          v21 = 1;
          if ( (int)v18 >= v17 )
          {
            if ( v3 )
            {
              items = v3->fields._items;
              p_obj = &v15->fields.infos->obj;
              v25 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
              ++v3->fields._version;
              if ( items )
              {
                size = v3->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v3,
                    p_obj,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
                }
                else
                {
                  v27 = &items->obj.klass + size;
                  v3->fields._size = size + 1;
                  v27[4] = (Il2CppClass *)p_obj;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)(v27 + 4),
                    (int32_t)p_obj,
                    (System_String_o *)v6,
                    v7,
                    v8,
                    v9,
                    v10,
                    v11);
                }
                break;
              }
            }
LABEL_33:
            sub_2213CDC(isQuestClearState, p_obj);
          }
        }
      }
    }
LABEL_32:
    scriptJson = this->fields.scriptJson;
    ++v13;
    if ( !scriptJson )
      goto LABEL_33;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getMasterMissionVoiceList(
        ServantVoiceEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantVoiceEntity__getVoiceList(this, 8, v2);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getMasterMissionVoiceList_49832360(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_49822176(this, 8, labelName, 0, 1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getMaxLimitVoiceList(
        ServantVoiceEntity_o *this,
        int32_t type,
        int32_t displayType,
        bool isPlayVoice,
        int32_t genderType,
        System_String_o *playVoiceLabel,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v13; // x19
  const MethodInfo *v14; // x1
  int32_t v15; // w0
  const MethodInfo *v16; // x2
  int v17; // w27
  int32_t v18; // w26
  void *Instance; // x0
  Il2CppObject *p_obj; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t FriendShipRank; // w0
  __int64 v23; // x1
  int v24; // w22
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned int v36; // w26
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v38; // x27
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v40; // x8
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct ServantVoiceCond_array *conds; // x9
  il2cpp_array_size_t v48; // x8
  ServantVoiceCond_o *v49; // x10
  ServantVoiceCond_o **m_Items; // x9
  ServantVoiceCond_o *v51; // x10
  int32_t condType; // w11
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  int32_t id; // w26
  __int64 v58; // x1
  int32_t v59; // w25

  if ( (byte_5971364 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&ServantLimitUpVoiceCache_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971364 = 1;
  }
  if ( this->fields.type != type )
    return 0;
  v13 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v15 = ServantVoiceEntity__GetChangeLimitVoiceFriendshipLv(this, v14);
  v17 = v15 - 1;
  if ( v15 < 1 )
    goto LABEL_15;
  v18 = v15;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, p_obj);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, p_obj);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_70;
  Instance = UserServantCollectionMaster__GetEntityDefinitely(
               (UserServantCollectionMaster_o *)MasterData_object,
               *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
               this->fields.id,
               0);
  if ( !Instance )
    goto LABEL_70;
  FriendShipRank = UserServantCollectionEntity__getFriendShipRank((UserServantCollectionEntity_o *)Instance, 0);
  if ( FriendShipRank >= v18 )
  {
    v24 = FriendShipRank;
    if ( displayType )
    {
      id = this->fields.id;
      if ( !*(&ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo, v23);
      if ( ServantLimitUpVoiceCache__IsLimitUpVoiceNormal(displayType, id, 0) )
        v24 = v17;
      if ( isPlayVoice )
      {
        v59 = this->fields.id;
        if ( !*(&ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo, v58);
        ServantLimitUpVoiceCache__UpdateLimitUpVoice(displayType, v59, 0);
      }
    }
  }
  else
  {
LABEL_15:
    v24 = -1;
  }
  Instance = ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v16);
  if ( Instance )
  {
    if ( !v13 )
      goto LABEL_70;
    items = v13->fields._items;
    p_obj = (Il2CppObject *)*((_QWORD *)Instance + 8);
    v32 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
    ++v13->fields._version;
    if ( !items )
      goto LABEL_70;
    size = v13->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v13,
        p_obj,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &items->obj.klass + size;
      v13->fields._size = size + 1;
      v34[4] = (Il2CppClass *)p_obj;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)p_obj, v25, v26, v27, v28, v29, v30);
    }
  }
  else
  {
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_70;
    v36 = 0;
    while ( 1 )
    {
      max_length = scriptJson->max_length;
      if ( (int)v36 >= (int)max_length )
        break;
      if ( v36 >= max_length )
        goto LABEL_71;
      v38 = scriptJson->m_Items[v36];
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_70;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      if ( !v38 )
        goto LABEL_70;
      infos = v38->fields.infos;
      if ( !infos )
        goto LABEL_70;
      if ( !LODWORD(infos->max_length) )
        goto LABEL_71;
      v40 = infos->m_Items[0];
      if ( !v40 || !Instance )
        goto LABEL_70;
      Instance = (void *)VoicePlayCondMaster__isVoicePlay(
                           (VoicePlayCondMaster_o *)Instance,
                           this->fields.id,
                           v40->fields.id,
                           0,
                           -1,
                           genderType,
                           0,
                           0);
      conds = v38->fields.conds;
      if ( conds )
      {
        v48 = conds->max_length;
        if ( v48 )
        {
          if ( !(_DWORD)v48 )
LABEL_71:
            sub_2213CE4(Instance);
          v49 = conds->m_Items[0];
          if ( !v49 )
            goto LABEL_70;
          if ( v49->fields.condType != 11 )
            goto LABEL_50;
          if ( v24 != -1 && (unsigned int)conds->max_length != 1 )
          {
            if ( (int)v48 < 1 )
              goto LABEL_50;
            m_Items = conds->m_Items;
            while ( 1 )
            {
              v51 = *m_Items;
              if ( !*m_Items )
                goto LABEL_70;
              condType = v51->fields.condType;
              if ( condType == 20 )
              {
                if ( ((unsigned __int8)Instance & (v51->fields.value <= v24)) == 1 )
                  goto LABEL_52;
              }
              else if ( condType == 22 && v51->fields.value >= v24 && ((unsigned __int8)Instance & 1) != 0 )
              {
LABEL_52:
                if ( v13 )
                {
                  v53 = v13->fields._items;
                  p_obj = &v38->fields.infos->obj;
                  v54 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                  ++v13->fields._version;
                  if ( v53 )
                  {
                    v55 = v13->fields._size;
                    if ( (unsigned int)v55 >= LODWORD(v53->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v13,
                        p_obj,
                        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v56 = &v53->obj.klass + v55;
                      v13->fields._size = v55 + 1;
                      v56[4] = (Il2CppClass *)p_obj;
                      sub_2213A04(
                        (MissionNaviTransitionBoardItem_o *)(v56 + 4),
                        (int32_t)p_obj,
                        v41,
                        v42,
                        v43,
                        v44,
                        v45,
                        v46);
                    }
                    goto LABEL_50;
                  }
                }
LABEL_70:
                sub_2213CDC(Instance, p_obj);
              }
              LODWORD(v48) = v48 - 1;
              ++m_Items;
              if ( !(_DWORD)v48 )
                goto LABEL_50;
            }
          }
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_50;
          if ( !v13 )
            goto LABEL_70;
          sub_1FFEDA8(v13, v38->fields.infos, Method_System_Collections_Generic_List_ServantVoiceData____Add__);
          return (System_Collections_Generic_List_ServantVoiceData____o *)v13;
        }
      }
LABEL_50:
      scriptJson = this->fields.scriptJson;
      ++v36;
      if ( !scriptJson )
        goto LABEL_70;
    }
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v13;
}


ServantVoiceData_array *ServantVoiceEntity__getMstMissionVoiceListByName(
        ServantVoiceEntity_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x20
  int monitor; // w8
  __int64 v11; // x23
  __int64 v12; // x8
  System_String_o *v13; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_5971377 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    byte_5971377 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  VoiceList = ServantVoiceEntity__getVoiceList(this, 8, method);
  if ( !VoiceList )
    sub_2213CDC(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)VoiceList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v16 = v15;
  v15.fields._list = 0;
  *(_QWORD *)&v15.fields._index = &v16;
  do
  {
LABEL_5:
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v7 )
    {
      current = 0;
      goto LABEL_16;
    }
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_2213CDC(v7, v8);
    monitor = (int)v16.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v11 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v11 >= monitor )
      sub_2213CE4(v7);
    v12 = *((_QWORD *)&current[2].klass + v11);
    if ( !v12 )
      sub_2213CDC(v7, v8);
    v13 = *(System_String_o **)(v12 + 16);
    if ( !v13 )
      sub_2213CDC(0, v8);
    v7 = System_String__Equals_75686512(v13, id, 0);
    if ( v7 )
      break;
    monitor = (int)current[1].monitor;
    if ( (int)++v11 >= monitor )
      goto LABEL_5;
  }
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  return (ServantVoiceData_array *)current;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getMyRoomFriendShipVoiceList(
        ServantVoiceEntity_o *this,
        int32_t friendShipRank,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *p_obj; // x1
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *v10; // x23
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned int v12; // w26
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v14; // x24
  struct ServantVoiceData_array *infos; // x9
  struct ServantVoiceCond_array *conds; // x8
  unsigned int v17; // w27
  unsigned int v18; // w9
  ServantVoiceCond_o *v19; // x8
  struct ServantVoiceData_array *v20; // x8
  ServantVoiceData_o *v21; // x8
  const MethodInfo *v22; // x4
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_5971369 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971369 = 1;
  }
  if ( this->fields.type != 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantVoiceData____TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v10,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_34:
    sub_2213CDC(Instance, p_obj);
  }
  v12 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v12 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v10;
    if ( v12 >= max_length )
LABEL_37:
      sub_2213CE4(Instance);
    v14 = scriptJson->m_Items[v12];
    if ( v14 )
    {
      infos = v14->fields.infos;
      if ( infos && infos->max_length )
      {
        conds = v14->fields.conds;
        if ( !conds )
          goto LABEL_34;
        v17 = 0;
        while ( 1 )
        {
          v18 = conds->max_length;
          if ( (int)v17 >= (int)v18 )
            break;
          if ( v17 >= v18 )
            goto LABEL_37;
          v19 = conds->m_Items[v17];
          if ( !v19 )
            goto LABEL_34;
          if ( v19->fields.condType == 3 && v19->fields.value == friendShipRank )
          {
            v20 = v14->fields.infos;
            if ( !v20 )
              goto LABEL_34;
            if ( !LODWORD(v20->max_length) )
              goto LABEL_37;
            v21 = v20->m_Items[0];
            if ( !v21 || !MasterData_object )
              goto LABEL_34;
            Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(
                                         (VoicePlayCondMaster_o *)MasterData_object,
                                         this->fields.id,
                                         v21->fields.id,
                                         0,
                                         -1,
                                         -1,
                                         0,
                                         0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (Il2CppObject *)ServantVoiceEntity__isAvailableMyRoomVoice(this, v14, imageLimitCount, 1, v22);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v10 )
                  goto LABEL_34;
                items = v10->fields._items;
                p_obj = &v14->fields.infos->obj;
                v30 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v10->fields._version;
                if ( !items )
                  goto LABEL_34;
                size = v10->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v10,
                    p_obj,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
                }
                else
                {
                  v32 = &items->obj.klass + size;
                  v10->fields._size = size + 1;
                  v32[4] = (Il2CppClass *)p_obj;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)(v32 + 4),
                    (int32_t)p_obj,
                    v23,
                    v24,
                    v25,
                    v26,
                    v27,
                    v28);
                }
              }
            }
          }
          conds = v14->fields.conds;
          ++v17;
          if ( !conds )
            goto LABEL_34;
        }
        scriptJson = this->fields.scriptJson;
      }
      ++v12;
      if ( scriptJson )
        continue;
    }
    goto LABEL_34;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getMyRoomVoiceList(
        ServantVoiceEntity_o *this,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *p_obj; // x1
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v8; // x22
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned int v10; // w25
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v12; // x23
  struct ServantVoiceData_array *infos; // x8
  il2cpp_array_size_t v14; // x9
  ServantVoiceData_o *v15; // x8
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  const MethodInfo *v18; // x4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct ServantVoiceCond_array *conds; // x8
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_5971368 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971368 = 1;
  }
  if ( this->fields.type != 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantVoiceData____TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v8,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_25:
    sub_2213CDC(Instance, p_obj);
  }
  v10 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v10 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v8;
    if ( v10 >= max_length )
      goto LABEL_28;
    v12 = scriptJson->m_Items[v10];
    if ( !v12 )
      goto LABEL_25;
    infos = v12->fields.infos;
    if ( infos )
    {
      v14 = infos->max_length;
      if ( v14 )
      {
        if ( !(_DWORD)v14 )
LABEL_28:
          sub_2213CE4(Instance);
        v15 = infos->m_Items[0];
        if ( !v15 || !MasterData_object )
          goto LABEL_25;
        Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(
                                     (VoicePlayCondMaster_o *)MasterData_object,
                                     this->fields.id,
                                     v15->fields.id,
                                     0,
                                     -1,
                                     -1,
                                     0,
                                     0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          conds = v12->fields.conds;
          if ( !conds )
            goto LABEL_25;
          if ( SLODWORD(conds->max_length) < 1
            || (Instance = (Il2CppObject *)ServantVoiceEntity__isAvailableMyRoomVoice(
                                             this,
                                             v12,
                                             imageLimitCount,
                                             0,
                                             v18),
                ((unsigned __int8)Instance & 1) != 0) )
          {
            if ( !v8 )
              goto LABEL_25;
            items = v8->fields._items;
            p_obj = &v12->fields.infos->obj;
            v24 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v8->fields._version;
            if ( !items )
              goto LABEL_25;
            size = v8->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                p_obj,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v26[4] = (Il2CppClass *)p_obj;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v26 + 4),
                (int32_t)p_obj,
                v16,
                v17,
                (int32_t)v18,
                v19,
                v20,
                v21);
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v10;
    if ( !scriptJson )
      goto LABEL_25;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getNpVoiceList(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_49822176(this, 7, labelName, 0, 1, v3);
}


void ServantVoiceEntity__getOverwriteData(
        ServantVoiceEntity_o *this,
        int32_t type,
        System_String_o *labelName,
        ServantVoiceCond_array **conds,
        bool *isInvalidVoiceList,
        System_String_o **overwriteName,
        System_String_o **overwriteNameDefault,
        int32_t *overwritePriority,
        ServantVoiceSync_array **sync,
        bool isMaterial,
        const MethodInfo *method)
{
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  _BOOL8 v37; // x0
  __int64 v38; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t max_length; // x9
  SvtVoiceInfo_o *v47; // x27
  ServantVoiceCond_array *v48; // x1
  ServantVoiceSync_array *v49; // x1
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  unsigned int v62; // w29
  unsigned int v63; // w9
  struct ServantVoiceData_array *infos; // x9
  __int64 v65; // x28
  int v66; // w8
  ServantVoiceData_o *v67; // x8
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  ServantVoiceCond_array *v74; // x1
  ServantVoiceSync_array *v75; // x1
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  System_String_o *materialOverwriteName; // x1
  System_String_o *v83; // x1
  System_String_o *v84; // x1

  if ( (byte_5971367 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16767/*"_B050"*/);
    byte_5971367 = 1;
  }
  *conds = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)conds,
    0,
    labelName,
    (System_String_o *)conds,
    (int32_t)isInvalidVoiceList,
    (int32_t)overwriteName,
    (bool)overwriteNameDefault,
    (bool)overwritePriority);
  *isInvalidVoiceList = 0;
  *overwriteName = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)overwriteName, 0, v19, v20, v21, v22, v23, v24);
  *overwriteNameDefault = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)overwriteNameDefault, 0, v25, v26, v27, v28, v29, v30);
  *overwritePriority = 0;
  *sync = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)sync, 0, v31, v32, v33, v34, v35, v36);
  if ( this->fields.type != type )
    return;
  if ( !labelName )
    goto LABEL_26;
  v37 = System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16767/*"_B050"*/, 0);
  scriptJson = this->fields.scriptJson;
  if ( v37 )
  {
    if ( scriptJson )
    {
      max_length = scriptJson->max_length;
      if ( !max_length )
        return;
      if ( !(_DWORD)max_length )
LABEL_32:
        sub_2213CE4(v37);
      v47 = scriptJson->m_Items[0];
      if ( v47 )
      {
        v48 = v47->fields.conds;
        *conds = v48;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)conds, (int32_t)v48, v39, v40, v41, v42, v43, v44);
        v49 = v47->fields.sync;
        *sync = v49;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)sync, (int32_t)v49, v50, v51, v52, v53, v54, v55);
        *isInvalidVoiceList = v47->fields.isInvalidVoiceList;
        goto LABEL_29;
      }
    }
LABEL_26:
    sub_2213CDC(v37, v38);
  }
  if ( !scriptJson )
    goto LABEL_26;
  v62 = 0;
  while ( 1 )
  {
    v63 = scriptJson->max_length;
    if ( (int)v62 >= (int)v63 )
      return;
    if ( v62 >= v63 )
      goto LABEL_32;
    v47 = scriptJson->m_Items[v62];
    if ( !v47 )
      goto LABEL_26;
    infos = v47->fields.infos;
    if ( infos )
      break;
LABEL_25:
    ++v62;
    if ( !scriptJson )
      goto LABEL_26;
  }
  v65 = 0;
  while ( 1 )
  {
    v66 = infos->max_length;
    if ( (int)v65 >= v66 )
    {
      scriptJson = this->fields.scriptJson;
      goto LABEL_25;
    }
    if ( (unsigned int)v65 >= v66 )
      goto LABEL_32;
    v67 = infos->m_Items[v65];
    if ( !v67 )
      goto LABEL_26;
    v37 = System_String__Equals_75686512(labelName, v67->fields.id, 0);
    if ( v37 )
      break;
    infos = v47->fields.infos;
    ++v65;
    if ( !infos )
      goto LABEL_26;
  }
  v74 = v47->fields.conds;
  *conds = v74;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)conds, (int32_t)v74, v68, v69, v70, v71, v72, v73);
  v75 = v47->fields.sync;
  *sync = v75;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)sync, (int32_t)v75, v76, v77, v78, v79, v80, v81);
  *isInvalidVoiceList = v47->fields.isInvalidVoiceList;
  if ( !isMaterial
    || (materialOverwriteName = v47->fields.materialOverwriteName,
        *overwriteName = materialOverwriteName,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)overwriteName,
          (int32_t)materialOverwriteName,
          v56,
          v57,
          v58,
          v59,
          v60,
          v61),
        System_String__IsNullOrEmpty(*overwriteName, 0)) )
  {
LABEL_29:
    v83 = v47->fields.overwriteName;
    *overwriteName = v83;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)overwriteName, (int32_t)v83, v56, v57, v58, v59, v60, v61);
  }
  v84 = v47->fields.overwriteNameDefault;
  *overwriteNameDefault = v84;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)overwriteNameDefault, (int32_t)v84, v56, v57, v58, v59, v60, v61);
  *overwritePriority = v47->fields.overwritePriority;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getRankUpFriendShip(
        ServantVoiceEntity_o *this,
        int32_t friendShipRank,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  return ServantVoiceEntity__getVoiceList_49821464(this, 1, 3, friendShipRank, 0, -1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getSpecificLimitCntUpVoiceList(
        ServantVoiceEntity_o *this,
        int32_t limitCount,
        System_String_o *playVoiceLabel,
        int32_t genderType,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return ServantVoiceEntity__getVoiceList_49821464(this, 2, 9, limitCount, playVoiceLabel, genderType, v5);
}


int32_t ServantVoiceEntity__getSvtIdfromVoiceAssetName(System_String_o *assetName, const MethodInfo *method)
{
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  result = 0;
  if ( !assetName
    || (assetName = (System_String_o *)System_String__Split(assetName, 0x5Fu, 0, 0), result = 0, !assetName) )
  {
    sub_2213CDC(assetName, method);
  }
  if ( LODWORD(assetName[1].klass) != 2 )
    return 0;
  if ( System_Int32__TryParse(*(System_String_o **)&assetName[1].fields, &result, 0) )
    return result;
  return 0;
}


System_String_o *ServantVoiceEntity__getVoiceAssetName(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  return ServantVoiceEntity__getVoiceAssetName_49817936(this->fields.id, method);
}


System_String_o *ServantVoiceEntity__getVoiceAssetName_49817936(int32_t svtId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = svtId;
  if ( (byte_597135F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4596/*"ChrVoice_"*/);
    byte_597135F = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_75651716((System_String_o *)StringLiteral_4596/*"ChrVoice_"*/, v2, 0);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getVoiceList(
        ServantVoiceEntity_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x0
  Il2CppObject *p_obj; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned int v15; // w22
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v17; // x9
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_5971360 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_5971360 = 1;
  }
  if ( this->fields.type != type )
    return 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_15:
    sub_2213CDC(v6, p_obj);
  v15 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v15 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v5;
    if ( v15 >= max_length )
      sub_2213CE4(v6);
    v17 = scriptJson->m_Items[v15];
    if ( v17 )
    {
      if ( v5 )
      {
        items = v5->fields._items;
        p_obj = &v17->fields.infos->obj;
        v19 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
        ++v5->fields._version;
        if ( items )
        {
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              p_obj,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v21[4] = (Il2CppClass *)p_obj;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)p_obj, v8, v9, v10, v11, v12, v13);
          }
          scriptJson = this->fields.scriptJson;
          ++v15;
          if ( scriptJson )
            continue;
        }
      }
    }
    goto LABEL_15;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getVoiceListByGender(
        ServantVoiceEntity_o *this,
        int32_t type,
        int32_t condType,
        int32_t genderType,
        System_String_o *playVoiceLabel,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v11; // x19
  DataManager_o *Instance; // x0
  Il2CppObject *saveNameList; // x1
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v15; // x2
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned int v27; // w25
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v29; // x26
  struct ServantVoiceCond_array *conds; // x8
  il2cpp_array_size_t v31; // x9
  ServantVoiceCond_o *v32; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v34; // x8
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x0

  if ( (byte_5971362 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971362 = 1;
  }
  if ( this->fields.type != type )
    return 0;
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = (DataManager_o *)ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v15);
  if ( Instance )
  {
    if ( v11 )
    {
      items = v11->fields._items;
      saveNameList = (Il2CppObject *)Instance->fields.saveNameList;
      v23 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v11->fields._version;
      if ( items )
      {
        size = v11->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            saveNameList,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v25[4] = (Il2CppClass *)saveNameList;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v25 + 4),
            (int32_t)saveNameList,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21);
        }
        return (System_Collections_Generic_List_ServantVoiceData____o *)v11;
      }
    }
LABEL_32:
    sub_2213CDC(Instance, saveNameList);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_32;
  v27 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v27 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v11;
    if ( v27 >= max_length )
      goto LABEL_35;
    v29 = scriptJson->m_Items[v27];
    if ( !v29 )
      goto LABEL_32;
    conds = v29->fields.conds;
    if ( conds )
    {
      v31 = conds->max_length;
      if ( v31 )
      {
        if ( !(_DWORD)v31 )
          goto LABEL_35;
        v32 = conds->m_Items[0];
        if ( !v32 )
          goto LABEL_32;
        if ( v32->fields.condType == condType )
        {
          infos = v29->fields.infos;
          if ( !infos )
            goto LABEL_32;
          if ( !LODWORD(infos->max_length) )
LABEL_35:
            sub_2213CE4(Instance);
          v34 = infos->m_Items[0];
          if ( !v34 || !MasterData_object )
            goto LABEL_32;
          Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(
                                        (VoicePlayCondMaster_o *)MasterData_object,
                                        this->fields.id,
                                        v34->fields.id,
                                        0,
                                        -1,
                                        genderType,
                                        0,
                                        0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v11 )
              goto LABEL_32;
            v41 = v11->fields._items;
            saveNameList = &v29->fields.infos->obj;
            v42 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v11->fields._version;
            if ( !v41 )
              goto LABEL_32;
            v43 = v11->fields._size;
            if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                saveNameList,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
            }
            else
            {
              v44 = &v41->obj.klass + v43;
              v11->fields._size = v43 + 1;
              v44[4] = (Il2CppClass *)saveNameList;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v44 + 4),
                (int32_t)saveNameList,
                v35,
                v36,
                v37,
                v38,
                v39,
                v40);
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v27;
    if ( !scriptJson )
      goto LABEL_32;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getVoiceList_49821464(
        ServantVoiceEntity_o *this,
        int32_t type,
        int32_t condType,
        int32_t condValue,
        System_String_o *playVoiceLabel,
        int32_t genderType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *saveNameList; // x1
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_List_object__o *v16; // x23
  const MethodInfo *v17; // x2
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned __int64 v29; // x26
  unsigned __int64 max_length_low; // x9
  SvtVoiceInfo_o *v31; // x27
  struct ServantVoiceCond_array *conds; // x9
  unsigned int v33; // w28
  unsigned int max_length; // w8
  ServantVoiceCond_o *v35; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v37; // x8
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0

  if ( (byte_5971365 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971365 = 1;
  }
  if ( this->fields.type != type )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v16 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v17);
  if ( Instance )
  {
    if ( v16 )
    {
      items = v16->fields._items;
      saveNameList = (Il2CppObject *)Instance->fields.saveNameList;
      v25 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v16->fields._version;
      if ( items )
      {
        size = v16->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            saveNameList,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v27[4] = (Il2CppClass *)saveNameList;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v27 + 4),
            (int32_t)saveNameList,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
        }
        return (System_Collections_Generic_List_ServantVoiceData____o *)v16;
      }
    }
LABEL_40:
    sub_2213CDC(Instance, saveNameList);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_40;
  v29 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(scriptJson->max_length);
    if ( (__int64)v29 >= (int)max_length_low )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v16;
    if ( v29 >= max_length_low )
LABEL_43:
      sub_2213CE4(Instance);
    v31 = scriptJson->m_Items[v29];
    if ( v31 )
    {
      conds = v31->fields.conds;
      if ( conds )
      {
        v33 = 0;
        while ( 1 )
        {
          max_length = conds->max_length;
          if ( (int)v33 >= (int)max_length )
            break;
          if ( v33 >= max_length )
            goto LABEL_43;
          v35 = conds->m_Items[v33];
          if ( !v35 )
            goto LABEL_40;
          if ( v35->fields.condType == condType )
          {
            if ( condType != 3 && condType != 23 && condType != 9 )
              goto LABEL_46;
            if ( v35->fields.value == condValue )
            {
              infos = v31->fields.infos;
              if ( !infos )
                goto LABEL_40;
              if ( !LODWORD(infos->max_length) )
                goto LABEL_43;
              v37 = infos->m_Items[0];
              if ( !v37 || !MasterData_object )
                goto LABEL_40;
              Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(
                                            (VoicePlayCondMaster_o *)MasterData_object,
                                            this->fields.id,
                                            v37->fields.id,
                                            0,
                                            -1,
                                            genderType,
                                            0,
                                            0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
LABEL_46:
                if ( !v16 )
                  goto LABEL_40;
                v38 = v16->fields._items;
                saveNameList = &v31->fields.infos->obj;
                v39 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v16->fields._version;
                if ( !v38 )
                  goto LABEL_40;
                v40 = v16->fields._size;
                if ( (unsigned int)v40 >= LODWORD(v38->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v16,
                    saveNameList,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
                }
                else
                {
                  v41 = &v38->obj.klass + v40;
                  v16->fields._size = v40 + 1;
                  v41[4] = (Il2CppClass *)saveNameList;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)(v41 + 4),
                    (int32_t)saveNameList,
                    v18,
                    v19,
                    v20,
                    v21,
                    v22,
                    v23);
                }
              }
            }
          }
          conds = v31->fields.conds;
          ++v33;
          if ( !conds )
            goto LABEL_40;
        }
        scriptJson = this->fields.scriptJson;
      }
    }
    ++v29;
    if ( !scriptJson )
      goto LABEL_40;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getVoiceList_49822176(
        ServantVoiceEntity_o *this,
        int32_t type,
        System_String_o *labelName,
        System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList,
        bool isCheckPlayCond,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *p_obj; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v14; // x19
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t max_length; // x9
  SvtVoiceInfo_o *v17; // x8
  unsigned int v19; // w26
  _BOOL4 v20; // w24
  unsigned int v21; // w9
  SvtVoiceInfo_o *v22; // x25
  struct ServantVoiceData_array *infos; // x9
  unsigned __int64 v24; // x27
  unsigned __int64 max_length_low; // x8
  ServantVoiceData_o *v26; // x28
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_5971366 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_16767/*"_B050"*/);
    byte_5971366 = 1;
  }
  if ( this->fields.type != type )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v14 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !labelName )
    goto LABEL_44;
  Instance = (Il2CppObject *)System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16767/*"_B050"*/, 0);
  scriptJson = this->fields.scriptJson;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( scriptJson )
    {
      max_length = scriptJson->max_length;
      if ( !max_length )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v14;
      if ( !(_DWORD)max_length )
LABEL_45:
        sub_2213CE4(Instance);
      v17 = scriptJson->m_Items[0];
      if ( v17 )
      {
        p_obj = &v17->fields.infos->obj;
        if ( !p_obj || !p_obj[1].monitor )
          return (System_Collections_Generic_List_ServantVoiceData____o *)v14;
        if ( v14 )
        {
          sub_1FFEDA8(v14, p_obj, Method_System_Collections_Generic_List_ServantVoiceData____Add__);
          return (System_Collections_Generic_List_ServantVoiceData____o *)v14;
        }
      }
    }
LABEL_44:
    sub_2213CDC(Instance, p_obj);
  }
  if ( !scriptJson )
    goto LABEL_44;
  v19 = 0;
  v20 = (unsigned int)(type - 1) < 2 && isCheckPlayCond;
  while ( 1 )
  {
    v21 = scriptJson->max_length;
    if ( (int)v19 >= (int)v21 )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v14;
    if ( v19 >= v21 )
      goto LABEL_45;
    v22 = scriptJson->m_Items[v19];
    if ( !v22 )
      goto LABEL_44;
    infos = v22->fields.infos;
    if ( infos )
      break;
LABEL_37:
    ++v19;
    if ( !scriptJson )
      goto LABEL_44;
  }
  v24 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(infos->max_length);
    if ( (__int64)v24 >= (int)max_length_low )
    {
      scriptJson = this->fields.scriptJson;
      goto LABEL_37;
    }
    if ( v24 >= max_length_low )
      goto LABEL_45;
    v26 = infos->m_Items[v24];
    if ( !v20 )
      break;
    if ( !v26 )
      goto LABEL_44;
    Instance = (Il2CppObject *)System_String__Equals_75686512(labelName, v26->fields.id, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !MasterData_object )
        goto LABEL_44;
      Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(
                                   (VoicePlayCondMaster_o *)MasterData_object,
                                   this->fields.id,
                                   v26->fields.id,
                                   disableCondTypeList,
                                   -1,
                                   -1,
                                   0,
                                   0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_39;
    }
LABEL_34:
    infos = v22->fields.infos;
    ++v24;
    if ( !infos )
      goto LABEL_44;
  }
  if ( !v26 )
    goto LABEL_44;
  Instance = (Il2CppObject *)System_String__Equals_75686512(labelName, v26->fields.id, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_34;
LABEL_39:
  if ( !v14 )
    goto LABEL_44;
  items = v14->fields._items;
  p_obj = &v22->fields.infos->obj;
  v34 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
  ++v14->fields._version;
  if ( !items )
    goto LABEL_44;
  size = v14->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      p_obj,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    v14->fields._size = size + 1;
    v36[4] = (Il2CppClass *)p_obj;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 4), (int32_t)p_obj, v27, v28, v29, v30, v31, v32);
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v14;
}


bool ServantVoiceEntity__isAvailableMyRoomVoice(
        ServantVoiceEntity_o *this,
        SvtVoiceInfo_o *info,
        int32_t imageLimitCount,
        bool isBeforeFriendship,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x21
  UserServantEntity_array *Instance; // x0
  __int64 v11; // x1
  UserServantMaster_o *v12; // x22
  Il2CppObject *Entity; // x21
  UserServantEntity_array *v14; // x22
  int32_t FriendshipRank; // w0
  const MethodInfo *v16; // x2
  struct ServantVoiceCond_array *conds; // x25
  int max_length; // w8
  int32_t v19; // w24
  int i; // w27
  ServantVoiceCond_o *v21; // x23
  int32_t value; // w23
  ServantVoiceEntity_o *v23; // x0
  UserGameEntity_o *v24; // x2
  const MethodInfo *v26; // [xsp+0h] [xbp-60h]

  if ( (byte_5971370 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&VoiceCondType_TypeInfo);
    byte_5971370 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame
    || (v12 = (UserServantMaster_o *)Instance) == 0
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   SelfUserGame->fields.favoriteUserSvtId,
                   (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
        Instance = UserServantMaster__getAllList(v12, 0),
        !Entity)
    || (v14 = Instance,
        FriendshipRank = UserServantEntity__getFriendshipRank((UserServantEntity_o *)Entity, 0),
        Instance = (UserServantEntity_array *)ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v16),
        !info)
    || (conds = info->fields.conds) == 0 )
  {
LABEL_22:
    sub_2213CDC(Instance, v11);
  }
  max_length = conds->max_length;
  if ( max_length < 1 )
    return 0;
  v19 = (int)Instance;
  for ( i = 0; i < max_length; ++i )
  {
    if ( i >= (unsigned int)max_length )
      sub_2213CE4(Instance);
    v21 = conds->m_Items[i];
    if ( !v21 )
      goto LABEL_22;
    if ( v21->fields.condType == 23 )
    {
      value = v21->fields.value;
      if ( !*(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, v11);
      Instance = (UserServantEntity_array *)VoiceCondType__IsSatisfyCostumeCondition(value, imageLimitCount, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        return 0;
    }
    else
    {
      v23 = (ServantVoiceEntity_o *)UserServantEntity__getFriendshipRank((UserServantEntity_o *)Entity, 0);
      Instance = (UserServantEntity_array *)ServantVoiceEntity__IsAvailableHomeAndGrowth(
                                              v23,
                                              v21,
                                              v24,
                                              (UserServantEntity_o *)Entity,
                                              v14,
                                              v19,
                                              (int32_t)v23,
                                              isBeforeFriendship,
                                              v26);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        return 0;
    }
    max_length = conds->max_length;
  }
  return 1;
}


bool ServantVoiceEntity__isAvailableVoice(
        ServantVoiceEntity_o *this,
        SvtVoiceInfo_o *info,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  UserServantEntity_array *AllList; // x20
  int32_t FriendshipRank; // w0
  const MethodInfo *v11; // x2
  struct ServantVoiceCond_array *conds; // x25
  int max_length; // w8
  int32_t v14; // w21
  unsigned int v15; // w26
  ServantVoiceCond_o *v16; // x23
  unsigned int condType; // w22
  int v18; // w8
  ServantVoiceEntity_o *v19; // x0
  UserGameEntity_o *v20; // x2
  int32_t value; // w23
  int32_t v22; // w23
  __int64 v23; // x1
  int32_t LimitCount; // w24
  const MethodInfo *v26; // [xsp+0h] [xbp-70h]

  if ( (byte_597136F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&VoiceCondType_TypeInfo);
    byte_597136F = 1;
  }
  if ( userSvtEntity )
  {
    UserGameMaster__getSelfUserGame(0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0
      || (AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0),
          FriendshipRank = UserServantEntity__getFriendshipRank(userSvtEntity, 0),
          Instance = (Il2CppObject *)ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v11),
          !info)
      || (conds = info->fields.conds) == 0 )
    {
LABEL_32:
      sub_2213CDC(Instance, v8);
    }
    max_length = conds->max_length;
    if ( max_length >= 1 )
    {
      v14 = (int)Instance;
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= max_length )
          sub_2213CE4(Instance);
        v16 = conds->m_Items[v15];
        if ( !v16 )
          goto LABEL_32;
        condType = v16->fields.condType;
        if ( condType <= 0x11 )
        {
          v18 = 1 << condType;
          if ( ((1 << condType) & 0x19800) != 0 )
            goto LABEL_14;
          if ( (v18 & 0x6000) != 0 )
          {
            value = v16->fields.value;
            if ( !*(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, v8);
            Instance = (Il2CppObject *)VoiceCondType__IsSatisfyCondition(condType, value, -1, 0);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              return 0;
            goto LABEL_29;
          }
          if ( (v18 & 0x20600) != 0 )
            return 0;
        }
        if ( condType != 8 )
        {
          if ( condType - 27 > 0xFFFFFFFC )
          {
            v22 = v16->fields.value;
            LimitCount = UserServantEntity__getLimitCount(userSvtEntity, 0);
            if ( !*(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, v23);
            Instance = (Il2CppObject *)VoiceCondType__IsSatisfyCondition(condType, v22, LimitCount, 0);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              return 0;
            goto LABEL_29;
          }
          if ( condType - 44 >= 0xFFFFFFFD )
            return 0;
LABEL_14:
          v19 = (ServantVoiceEntity_o *)UserServantEntity__getFriendshipRank(userSvtEntity, 0);
          Instance = (Il2CppObject *)ServantVoiceEntity__IsAvailableHomeAndGrowth(
                                       v19,
                                       v16,
                                       v20,
                                       userSvtEntity,
                                       AllList,
                                       v14,
                                       (int32_t)v19,
                                       0,
                                       v26);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
        }
LABEL_29:
        max_length = conds->max_length;
        if ( (int)++v15 >= max_length )
          return 1;
      }
    }
  }
  return 0;
}


bool ServantVoiceEntity__isQuestClearState(ServantVoiceEntity_o *this, int32_t questId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5971376 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971376 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_15;
  if ( UserQuestMaster__TryGetEntity(
         (UserQuestMaster_o *)MasterData_object,
         &entity,
         *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
         questId,
         0) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserQuestEntity__getClearNum(entity, 0) > 0;
LABEL_15:
    sub_2213CDC(Instance, v5);
  }
  return 0;
}


ServantVoiceData_array *ServantVoiceEntity__lotteryLevelUpVoice(
        ServantVoiceEntity_o *this,
        UserServantEntity_o *userServantEntity,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v10; // x20
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned int v12; // w29
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v14; // x24
  struct ServantVoiceData_array *infos; // x8
  il2cpp_array_size_t v16; // x9
  ServantVoiceData_o *v17; // x8
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  ServantVoiceData_o *v28; // x8
  __int128 v29; // q1
  int32_t id; // w25
  System_String_o *v31; // x26
  int v32; // w9
  const MethodInfo *v33; // x3
  struct ServantVoiceCond_array *conds; // x8
  WeightRate_int__o *v36; // x21
  int v37; // w23
  int32_t i; // w22
  int32_t Data; // w22
  __int64 v40; // x8
  __int64 v41; // x8
  int32_t v42; // w0
  unsigned int v43; // w29
  unsigned int v44; // w9
  SvtVoiceInfo_o *v45; // x24
  struct ServantVoiceData_array *v46; // x8
  il2cpp_array_size_t v47; // x9
  ServantVoiceData_o *v48; // x8
  __int128 v49; // q1
  int32_t v50; // w25
  System_String_o *v51; // x26
  int v52; // w9
  const MethodInfo *v53; // x3
  struct ServantVoiceCond_array *v54; // x8
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+40h] [xbp-80h]

  if ( (byte_597136E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&ServantVoiceData___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_WeightRate_int___ctor__);
    sub_2213A60(&Method_WeightRate_int__getData__);
    sub_2213A60(&Method_WeightRate_int__getTotalWeight__);
    sub_2213A60(&Method_WeightRate_int__setWeight__);
    sub_2213A60(&WeightRate_int__TypeInfo);
    byte_597136E = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_33;
  v12 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v12 >= (int)max_length )
      break;
    if ( v12 >= max_length )
      goto LABEL_78;
    v14 = scriptJson->m_Items[v12];
    if ( !v14 )
      goto LABEL_33;
    infos = v14->fields.infos;
    if ( infos )
    {
      v16 = infos->max_length;
      if ( v16 )
      {
        if ( voiceId )
        {
          if ( !(_DWORD)v16 )
            goto LABEL_78;
          v17 = infos->m_Items[0];
          if ( !v17 )
            goto LABEL_33;
          Instance = System_String__op_Equality(v17->fields.id, voiceId, 0);
          if ( (Instance & 1) != 0 )
            goto LABEL_17;
        }
        else
        {
          if ( !(_DWORD)v16 )
LABEL_78:
            sub_2213CE4(Instance);
          v28 = infos->m_Items[0];
          if ( !v28 )
            goto LABEL_33;
          v29 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          id = this->fields.id;
          v31 = v28->fields.id;
          v32 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v67.fields.fakeValue = v29;
          if ( !v32 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
          v66 = v67;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v66, 0);
          if ( !MasterData_object )
            goto LABEL_33;
          Instance = VoicePlayCondMaster__isVoicePlay(
                       (VoicePlayCondMaster_o *)MasterData_object,
                       id,
                       v31,
                       0,
                       Instance,
                       -1,
                       0,
                       0);
          if ( (Instance & 1) != 0 )
          {
            conds = v14->fields.conds;
            if ( conds )
            {
              if ( conds->max_length )
              {
                Instance = ServantVoiceEntity__isAvailableVoice(this, v14, userServantEntity, v33);
                if ( (Instance & 1) != 0 )
                {
LABEL_17:
                  if ( !v10 )
                    goto LABEL_33;
                  items = v10->fields._items;
                  v25 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
                  ++v10->fields._version;
                  if ( !items )
                    goto LABEL_33;
                  size = v10->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v10,
                      (Il2CppObject *)v14,
                      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v27 = &items->obj.klass + size;
                    v10->fields._size = size + 1;
                    v27[4] = (Il2CppClass *)v14;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)(v27 + 4),
                      (int32_t)v14,
                      v18,
                      v19,
                      v20,
                      v21,
                      v22,
                      v23);
                  }
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
      goto LABEL_33;
  }
  if ( !v10 )
    goto LABEL_33;
  if ( v10->fields._size )
    goto LABEL_37;
  if ( voiceId )
  {
    v43 = 0;
    while ( 1 )
    {
      v44 = scriptJson->max_length;
      if ( (int)v43 >= (int)v44 )
        break;
      if ( v43 >= v44 )
        goto LABEL_78;
      v45 = scriptJson->m_Items[v43];
      if ( !v45 )
        goto LABEL_33;
      v46 = v45->fields.infos;
      if ( v46 )
      {
        v47 = v46->max_length;
        if ( v47 )
        {
          if ( !(_DWORD)v47 )
            goto LABEL_78;
          v48 = v46->m_Items[0];
          if ( !v48 )
            goto LABEL_33;
          v49 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          v50 = this->fields.id;
          v51 = v48->fields.id;
          v52 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v67.fields.fakeValue = v49;
          if ( !v52 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
          v65 = v67;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v65, 0);
          if ( !MasterData_object )
            goto LABEL_33;
          Instance = VoicePlayCondMaster__isVoicePlay(
                       (VoicePlayCondMaster_o *)MasterData_object,
                       v50,
                       v51,
                       0,
                       Instance,
                       -1,
                       0,
                       0);
          if ( (Instance & 1) != 0 )
          {
            v54 = v45->fields.conds;
            if ( v54 )
            {
              if ( v54->max_length )
              {
                Instance = ServantVoiceEntity__isAvailableVoice(this, v45, userServantEntity, v53);
                if ( (Instance & 1) != 0 )
                {
                  v61 = v10->fields._items;
                  v62 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
                  ++v10->fields._version;
                  if ( !v61 )
                    goto LABEL_33;
                  v63 = v10->fields._size;
                  if ( (unsigned int)v63 >= LODWORD(v61->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v10,
                      (Il2CppObject *)v45,
                      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v64 = &v61->obj.klass + v63;
                    v10->fields._size = v63 + 1;
                    v64[4] = (Il2CppClass *)v45;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)(v64 + 4),
                      (int32_t)v45,
                      v55,
                      v56,
                      v57,
                      v58,
                      v59,
                      v60);
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
        goto LABEL_33;
    }
    if ( v10->fields._size )
    {
LABEL_37:
      v36 = (WeightRate_int__o *)sub_2213CCC(WeightRate_int__TypeInfo);
      WeightRate_int____ctor(v36, (const MethodInfo_3DA1D84 *)Method_WeightRate_int___ctor__);
      v37 = v10->fields._size;
      if ( v37 >= 1 )
      {
        if ( !v36 )
          goto LABEL_33;
        for ( i = 0; i != v37; ++i )
          WeightRate_int___setWeight(v36, 1, i, (const MethodInfo_3DA11F8 *)Method_WeightRate_int__setWeight__);
      }
      Instance = System_String__IsNullOrEmpty(voiceId, 0);
      if ( (Instance & 1) != 0 || v10->fields._size < 1 )
      {
LABEL_50:
        if ( v36 )
        {
          v42 = UnityEngine_Random__Range_83400680(0, v36->fields.totalweight, 0);
          Data = WeightRate_int___getData(v36, v42, (const MethodInfo_3DA1690 *)Method_WeightRate_int__getData__);
LABEL_52:
          Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                v10,
                                Data,
                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__);
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
                                v10,
                                Data,
                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__);
          if ( !Instance )
            break;
          v40 = *(_QWORD *)(Instance + 64);
          if ( !v40 )
            break;
          if ( !*(_DWORD *)(v40 + 24) )
            goto LABEL_78;
          v41 = *(_QWORD *)(v40 + 32);
          if ( !v41 )
            break;
          Instance = System_String__op_Equality(*(System_String_o **)(v41 + 16), voiceId, 0);
          if ( (Instance & 1) != 0 )
            goto LABEL_52;
          if ( ++Data >= v10->fields._size )
            goto LABEL_50;
        }
      }
LABEL_33:
      sub_2213CDC(Instance, v8);
    }
  }
  return (ServantVoiceData_array *)sub_2213B20(ServantVoiceData___TypeInfo, 0);
}


System_Collections_Generic_List_SvtVoiceInfo__o *ServantVoiceEntity__randomChangeSvtVoiceCount(
        ServantVoiceEntity_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v8; // x22
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned int v10; // w28
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v12; // x23
  struct ServantVoiceData_array *infos; // x8
  il2cpp_array_size_t v14; // x9
  ServantVoiceData_o *v15; // x8
  __int128 v16; // q1
  int32_t id; // w24
  System_String_o *v18; // x25
  int v19; // w9
  const MethodInfo *v20; // x3
  struct ServantVoiceCond_array *conds; // x8
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-80h]

  if ( (byte_597136D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597136D = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v8,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_28:
    sub_2213CDC(Instance, v6);
  }
  v10 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v10 >= (int)max_length )
      return (System_Collections_Generic_List_SvtVoiceInfo__o *)v8;
    if ( v10 >= max_length )
      goto LABEL_31;
    v12 = scriptJson->m_Items[v10];
    if ( !v12 )
      goto LABEL_28;
    infos = v12->fields.infos;
    if ( infos )
    {
      v14 = infos->max_length;
      if ( v14 )
      {
        if ( !(_DWORD)v14 )
LABEL_31:
          sub_2213CE4(Instance);
        v15 = infos->m_Items[0];
        if ( !v15 )
          goto LABEL_28;
        v16 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        id = this->fields.id;
        v18 = v15->fields.id;
        v19 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v34.fields.fakeValue = v16;
        if ( !v19 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
        v33 = v34;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v33, 0);
        if ( !MasterData_object )
          goto LABEL_28;
        Instance = VoicePlayCondMaster__isVoicePlay(
                     (VoicePlayCondMaster_o *)MasterData_object,
                     id,
                     v18,
                     0,
                     Instance,
                     -1,
                     0,
                     0);
        if ( (Instance & 1) != 0 )
        {
          conds = v12->fields.conds;
          if ( conds )
          {
            if ( conds->max_length )
            {
              Instance = ServantVoiceEntity__isAvailableVoice(this, v12, userServantEntity, v20);
              if ( (Instance & 1) != 0 )
              {
                if ( !v8 )
                  goto LABEL_28;
                items = v8->fields._items;
                v29 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
                ++v8->fields._version;
                if ( !items )
                  goto LABEL_28;
                size = v8->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v8,
                    (Il2CppObject *)v12,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
                }
                else
                {
                  v31 = &items->obj.klass + size;
                  v8->fields._size = size + 1;
                  v31[4] = (Il2CppClass *)v12;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)v12, v22, v23, v24, v25, v26, v27);
                }
              }
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v10;
    if ( !scriptJson )
      goto LABEL_28;
  }
}