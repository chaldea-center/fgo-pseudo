void ServantVoiceEntity___ctor(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF13D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF13D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantVoiceEntity__CreatePK(int32_t id, int32_t voicePrefix, int32_t type, const MethodInfo *method)
{
  if ( (byte_4CEF121 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CEF121 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           voicePrefix,
           type,
           (const MethodInfo_316EA0C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v7; // x9
  unsigned __int64 v8; // x10
  struct SvtVoiceInfo_array *scriptJson; // x10
  int max_length; // w11
  int i; // w12
  SvtVoiceInfo_o *v12; // x13
  struct ServantVoiceCond_array *conds; // x13
  il2cpp_array_size_t v14; // x14
  int v15; // w15
  ServantVoiceCond_o *v16; // x16
  __int64 value; // x16

  if ( (byte_4CEF12D & 1) == 0 )
  {
    sub_1C7BAE8(&int___TypeInfo);
    byte_4CEF12D = 1;
  }
  v5 = sub_1C7BB90(int___TypeInfo, (unsigned int)rankNow);
  if ( !v5 )
    goto LABEL_31;
  v7 = *(_QWORD *)(v5 + 24);
  if ( (__int64)((unsigned __int64)(unsigned int)v7 << 32) >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= (unsigned int)v7 )
LABEL_32:
        sub_1C7BD48(v5);
      *(_DWORD *)(v5 + 32 + 4 * v8++) = 0;
    }
    while ( (int)v7 != v8 );
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_31:
    sub_1C7BD40(v5, v6);
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
      v14 = conds->max_length;
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
              if ( (_DWORD)value == rankNow )
                return rankNow;
              if ( (int)value < rankNow )
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
  while ( --rankNow >= 0 )
  {
    if ( rankNow >= (unsigned int)v7 )
      goto LABEL_32;
    if ( *(int *)(v5 + 4LL * (unsigned int)rankNow + 32) > 0 )
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
    sub_1C7BD40(this, *(_QWORD *)&type);
  max_length = scriptJson->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
LABEL_19:
      sub_1C7BD48(this);
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
    this = (ServantVoiceEntity_o *)System_String__Equals_64212232(labelName, v12->fields.id, 0);
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
  unsigned int v4; // w10
  SvtVoiceInfo_o *v5; // x11
  struct ServantVoiceCond_array *conds; // x11
  il2cpp_array_size_t v7; // x12
  ServantVoiceCond_o *v8; // x13
  int v9; // w13
  ServantVoiceCond_o *v10; // x14

  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_23:
    sub_1C7BD40(this, method);
  max_length = scriptJson->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    this = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
LABEL_24:
        sub_1C7BD48(this);
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


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__GetFirstGetVoiceList(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( this->fields.type == 3 && !System_String__IsNullOrEmpty(labelName, 0) )
    return ServantVoiceEntity__getVoiceList_43354892(this, 3, labelName, 0, 1, v5);
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
      sub_1C7BD40(IsNullOrEmpty, v6);
    v9 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(scriptJson->max_length);
      if ( (__int64)v9 >= (int)max_length_low )
        return 0;
      if ( v9 >= max_length_low )
        sub_1C7BD48(IsNullOrEmpty);
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
  __int64 v9; // x23
  int max_length; // w9
  SvtVoiceInfo_o *v11; // x8
  struct ServantVoiceData_array *infos; // x9
  ServantVoiceData_o *v13; // x9
  System_String_o *summonScript; // x22

  if ( (byte_4CEF13C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF13C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_16:
    sub_1C7BD40(Instance, v6);
  }
  v8 = (VoicePlayCondMaster_o *)Instance;
  v9 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v9 >= max_length )
      return 0;
    if ( (unsigned int)v9 >= max_length )
      goto LABEL_19;
    v11 = scriptJson->m_Items[v9];
    if ( !v11 )
      goto LABEL_16;
    infos = v11->fields.infos;
    if ( !infos )
      goto LABEL_16;
    if ( !LODWORD(infos->max_length) )
LABEL_19:
      sub_1C7BD48(Instance);
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
  int32_t condType; // w19
  int32_t v17; // w20
  int32_t v18; // w2
  int32_t v19; // w0
  int32_t v20; // w1
  int32_t v21; // w20
  int32_t LimitCount; // w21
  VoiceCondType_c *v23; // x0
  int32_t v24; // w20
  int32_t value; // w19
  int32_t v26; // w19
  int32_t v27; // w19
  __int64 v28; // x21
  __int64 v29; // x22
  int32_t v30; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4CEF134 & 1) == 0 )
  {
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantVoiceEntity_o *)sub_1C7BAE8(&VoiceCondType_TypeInfo);
    byte_4CEF134 = 1;
  }
  if ( !cond )
LABEL_45:
    sub_1C7BD40(this, cond);
  condType = cond->fields.condType;
  switch ( condType )
  {
    case 1:
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      return VoiceCondType__IsSatisfyBirthdayCondition(0);
    case 2:
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      return VoiceCondType__IsSatisfyEventCondition(0);
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
      v20 = value;
      v18 = friendshipRankWithVoice;
      return VoiceCondType__IsSatisfyCondition(v19, v20, v18, 0);
    case 4:
      v26 = cond->fields.value;
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      return VoiceCondType__IsSatisfySvtGetCondition(v26, usrSvtList, 0);
    case 5:
      if ( !userSvtEntity )
        goto LABEL_45;
      v27 = cond->fields.value;
      v29 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v28 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v31.fields.currentCryptoKey = v29;
      *(_QWORD *)&v31.fields.fakeValue = v28;
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v31, 0);
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      return VoiceCondType__IsSatisfySvtGroupCondition(v27, v30, usrSvtList, 0);
    case 6:
    case 7:
    case 12:
      v17 = cond->fields.value;
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      v18 = -1;
      v19 = condType;
      v20 = v17;
      return VoiceCondType__IsSatisfyCondition(v19, v20, v18, 0);
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
      if ( VoiceCondType_TypeInfo->_2.cctor_finished )
        goto LABEL_19;
      v23 = VoiceCondType_TypeInfo;
      goto LABEL_18;
    case 20:
    case 22:
      v24 = cond->fields.value;
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      v19 = condType;
      v20 = v24;
      v18 = friendshipRankNow;
      return VoiceCondType__IsSatisfyCondition(v19, v20, v18, 0);
    default:
      if ( (unsigned int)(condType - 41) >= 3 )
        return 0;
      if ( !userSvtEntity )
        goto LABEL_45;
      v21 = cond->fields.value;
      LimitCount = userSvtEntity->fields.exceedCount;
      v23 = VoiceCondType_TypeInfo;
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
LABEL_18:
        j_il2cpp_runtime_class_init_0(v23);
LABEL_19:
      v19 = condType;
      v20 = v21;
      v18 = LimitCount;
      return VoiceCondType__IsSatisfyCondition(v19, v20, v18, 0);
  }
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getBattleVoiceList(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_43354892(this, 6, labelName, 0, 1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getBoxGachaVoiceList(
        ServantVoiceEntity_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t Time; // x21
  Il2CppObject *Instance; // x0
  Il2CppObject *p_obj; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x22
  unsigned int v15; // w23
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v17; // x28
  struct ServantVoiceCond_array *conds; // x29
  il2cpp_array_size_t v19; // x8
  __int64 v20; // x19
  ServantVoiceCond_o *v21; // x27
  unsigned int condType; // w8
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CEF135 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF135 = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMaster___),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_36:
    sub_1C7BD40(Instance, p_obj);
  }
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v15 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v15 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v3;
    if ( v15 >= max_length )
      goto LABEL_38;
    v17 = scriptJson->m_Items[v15];
    if ( !v17 )
      goto LABEL_36;
    conds = v17->fields.conds;
    if ( conds && (v19 = conds->max_length) != 0 )
    {
      if ( (int)v19 >= 1 )
      {
        v20 = 0;
        while ( (unsigned int)v20 < (unsigned int)v19 )
        {
          v21 = conds->m_Items[v20];
          if ( !v21 || !v14 )
            goto LABEL_36;
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       v14,
                                       &entity,
                                       v21->fields.value,
                                       (const MethodInfo_342E348 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_36;
            if ( Time <= (__int64)entity[6].monitor )
            {
              condType = v21->fields.condType;
              if ( condType <= 0x13 && ((1 << condType) & 0x86000) != 0 )
              {
                if ( !v3 )
                  goto LABEL_36;
                p_obj = &v17->fields.infos->obj;
                items = v3->fields._items;
                v24 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v3->fields._version;
                if ( !items )
                  goto LABEL_36;
                size = v3->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v3,
                    p_obj,
                    *(const MethodInfo_383EDFC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
                }
                else
                {
                  v26 = &items->obj.klass + size;
                  v3->fields._size = size + 1;
                  v26[4] = (Il2CppClass *)p_obj;
                  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)p_obj, v7, v8, v9, v10, v11, v12);
                }
              }
            }
          }
          LODWORD(v19) = conds->max_length;
          if ( (int)++v20 >= (int)v19 )
            goto LABEL_35;
        }
LABEL_38:
        sub_1C7BD48(Instance);
      }
    }
    else
    {
      if ( !v3 )
        goto LABEL_36;
      p_obj = &v17->fields.infos->obj;
      v27 = v3->fields._items;
      v28 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v3->fields._version;
      if ( !v27 )
        goto LABEL_36;
      v29 = v3->fields._size;
      if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          p_obj,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &v27->obj.klass + v29;
        v3->fields._size = v29 + 1;
        v30[4] = (Il2CppClass *)p_obj;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v30 + 4), (int32_t)p_obj, v7, v8, v9, v10, v11, v12);
      }
    }
LABEL_35:
    ++v15;
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
  __int64 v12; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v14; // x8
  struct ServantVoiceData_array *infos; // x23
  ServantVoiceData_o *v16; // x8
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4CEF124 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF124 = 1;
  }
  if ( this->fields.type != type )
    return 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_22:
    sub_1C7BD40(Instance, v9);
  }
  v11 = (VoicePlayCondMaster_o *)Instance;
  v12 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v12 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
    if ( (unsigned int)v12 >= max_length )
      goto LABEL_25;
    v14 = scriptJson->m_Items[v12];
    if ( v14 )
    {
      infos = v14->fields.infos;
      if ( infos )
      {
        if ( !LODWORD(infos->max_length) )
LABEL_25:
          sub_1C7BD48(Instance);
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
                                           (const MethodInfo_383F18C *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
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
                    *(const MethodInfo_383EDFC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
                }
                else
                {
                  v26 = &items->obj.klass + size;
                  v7->fields._size = size + 1;
                  v26[4] = (Il2CppClass *)infos;
                  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)infos, v17, v18, v19, v20, v21, v22);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v17; // x22
  int max_length; // w9
  _QWORD *monitor; // x8
  __int64 v20; // x9
  __int64 v21; // x8
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4CEF126 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF126 = 1;
  }
  if ( this->fields.type != type )
    return 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_21:
    sub_1C7BD40(Instance, v9);
  }
  v17 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v17 >= max_length )
      return (System_Collections_Generic_List_SvtVoiceInfo__o *)v7;
    if ( (unsigned int)v17 >= max_length )
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
          sub_1C7BD48(Instance);
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
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v9;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v9, v10, v11, v12, v13, v14, v15);
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

  return ServantVoiceEntity__getVoiceList_43354176(this, 2, 23, costumeId, 0, genderType, v4);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getCostumeGetVoiceList(
        ServantVoiceEntity_o *this,
        int32_t costumeId,
        System_String_o *playVoiceLabel,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6

  return ServantVoiceEntity__getVoiceList_43354176(this, 2, 23, costumeId, playVoiceLabel, -1, v4);
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned int v13; // w21
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

  if ( (byte_4CEF137 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_4CEF137 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_23:
    sub_1C7BD40(v4, p_obj);
  v13 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v13 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v3;
    if ( v13 >= max_length )
LABEL_25:
      sub_1C7BD48(v4);
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
                p_obj = &v15->fields.infos->obj;
                items = v3->fields._items;
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
                    *(const MethodInfo_383EDFC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
                }
                else
                {
                  v23 = &items->obj.klass + size;
                  v3->fields._size = size + 1;
                  v23[4] = (Il2CppClass *)p_obj;
                  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)p_obj, v6, v7, v8, v9, v10, v11);
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
  DataManager_o *Time; // x0
  Il2CppObject *p_obj; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  DataManager_o *v12; // x21
  unsigned int v13; // w22
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v15; // x27
  struct ServantVoiceCond_array *conds; // x28
  il2cpp_array_size_t v17; // x8
  __int64 i; // x29
  ServantVoiceCond_o *v19; // x23
  int32_t condType; // w8
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4CEF136 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF136 = 1;
  }
  v2 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (DataManager_o *)NetworkManager__getTime(0);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_38:
    sub_1C7BD40(Time, p_obj);
  v12 = Time;
  v13 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v13 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v2;
    if ( v13 >= max_length )
LABEL_40:
      sub_1C7BD48(Time);
    v15 = scriptJson->m_Items[v13];
    if ( !v15 )
      goto LABEL_38;
    conds = v15->fields.conds;
    if ( conds && (v17 = conds->max_length) != 0 )
    {
      if ( (int)v17 >= 1 )
      {
        for ( i = 0; (int)i < (int)v17; ++i )
        {
          if ( (unsigned int)i >= (unsigned int)v17 )
            goto LABEL_40;
          v19 = conds->m_Items[i];
          Time = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_38;
          Time = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Time,
                                    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !v19 || !Time )
            goto LABEL_38;
          Time = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                                    v19->fields.value,
                                    (const MethodInfo_342E2FC *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( Time )
          {
            condType = v19->fields.condType;
            if ( (__int64)Time->fields.lockCountObj <= (__int64)v12 )
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
            p_obj = &v15->fields.infos->obj;
            items = v2->fields._items;
            v22 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v2->fields._version;
            if ( !items )
              goto LABEL_38;
            size = v2->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v2,
                p_obj,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v2->fields._size = size + 1;
              v24[4] = (Il2CppClass *)p_obj;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)p_obj, v5, v6, v7, v8, v9, v10);
            }
          }
LABEL_30:
          LODWORD(v17) = conds->max_length;
        }
      }
    }
    else
    {
      if ( !v2 )
        goto LABEL_38;
      p_obj = &v15->fields.infos->obj;
      v25 = v2->fields._items;
      v26 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v2->fields._version;
      if ( !v25 )
        goto LABEL_38;
      v27 = v2->fields._size;
      if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v2,
          p_obj,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &v25->obj.klass + v27;
        v2->fields._size = v27 + 1;
        v28[4] = (Il2CppClass *)p_obj;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v28 + 4), (int32_t)p_obj, v5, v6, v7, v8, v9, v10);
      }
    }
    ++v13;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_38;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getEventRewardVoiceList_43364944(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_43354892(this, 5, labelName, 0, 1, v3);
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
  _BOOL4 v6; // w26
  System_Collections_Generic_List_T__o *v7; // x20
  int64_t Time; // x0
  __int64 v9; // x1
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  __int64 v13; // x10
  __int64 v14; // x10
  System_Collections_Generic_List_T__o *v15; // x23
  struct System_Object_array *v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned int v26; // w21
  unsigned int max_length; // w9
  Il2CppObject *v28; // x27
  _BOOL4 v29; // w24
  _QWORD *monitor; // x26
  __int64 v31; // x8
  __int64 v32; // x19
  __int64 v33; // x20
  int32_t v34; // w28
  int64_t v35; // x29
  int v36; // w8
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  _BOOL8 v41; // x0
  __int64 v42; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  Il2CppObject *current; // x19
  _DWORD *v50; // x20
  int v51; // w8
  unsigned int v52; // w21
  __int64 v53; // x8
  Il2CppObject *klass; // x1
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  System_Collections_Generic_List_object__o *v60; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_List_object__o *v61; // [xsp+10h] [xbp-C0h]
  int64_t v62; // [xsp+18h] [xbp-B8h]
  System_Collections_Generic_List_T__o *v65; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+50h] [xbp-80h] BYREF

  v6 = isEventDateCondOnly;
  if ( (byte_4CEF13B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF13B = 1;
  }
  memset(&v67, 0, sizeof(v67));
  v60 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v60,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v7 = (System_Collections_Generic_List_T__o *)sub_1C7BD34(System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v7,
    (const MethodInfo_3823DB0 *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
  if ( !v7 )
    goto LABEL_54;
  items = v7->fields._items;
  v11 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_54;
  size = v7->fields._size;
  v65 = v7;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      14,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    items = v7->fields._items;
    v11 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_54;
  }
  else
  {
    v7->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 14;
    ++v7->fields._version;
  }
  v13 = v7->fields._size;
  if ( (unsigned int)v13 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      13,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    items = v7->fields._items;
    v11 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_54;
  }
  else
  {
    v7->fields._size = v13 + 1;
    *((_DWORD *)items->m_Items + v13) = 13;
    ++v7->fields._version;
  }
  v14 = v7->fields._size;
  if ( (unsigned int)v14 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      19,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = v14 + 1;
    *((_DWORD *)items->m_Items + v14) = 19;
  }
  v15 = (System_Collections_Generic_List_T__o *)sub_1C7BD34(System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v15,
    (const MethodInfo_3823DB0 *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
  if ( !v6 )
  {
    if ( !v15 )
      goto LABEL_54;
    v16 = v15->fields._items;
    v17 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
    ++v15->fields._version;
    if ( !v16 )
      goto LABEL_54;
    v18 = v15->fields._size;
    if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
    {
      System_Collections_Generic_List_Int32Enum___AddWithResize(
        v15,
        checkCondType,
        *(const MethodInfo_3824604 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v15->fields._size = v18 + 1;
      *((_DWORD *)v16->m_Items + v18) = checkCondType;
    }
  }
  v61 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v61,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v62 = Time;
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_54;
  v26 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v26 >= (int)max_length )
      break;
    if ( v26 >= max_length )
      goto LABEL_78;
    v28 = (Il2CppObject *)scriptJson->m_Items[v26];
    if ( !v28 )
      goto LABEL_54;
    v29 = v6;
    monitor = v28[4].monitor;
    if ( monitor )
    {
      v31 = monitor[3];
      if ( v31 )
      {
        if ( (int)v31 >= 1 )
        {
          v32 = 0;
          while ( (unsigned int)v32 < (unsigned int)v31 )
          {
            v33 = monitor[v32 + 4];
            if ( !v33 )
              goto LABEL_54;
            v34 = *(_DWORD *)(v33 + 16);
            Time = System_Collections_Generic_List_Int32Enum___Contains(
                     v65,
                     v34,
                     (const MethodInfo_382497C *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) == 0 )
            {
              if ( !v15 )
                goto LABEL_54;
              Time = System_Collections_Generic_List_Int32Enum___Contains(
                       v15,
                       v34,
                       (const MethodInfo_382497C *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
              if ( (Time & 1) == 0 )
                goto LABEL_53;
            }
            Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Time )
              goto LABEL_54;
            Time = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Time,
                              (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMaster___);
            if ( !Time )
              goto LABEL_54;
            Time = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                              *(_DWORD *)(v33 + 20),
                              (const MethodInfo_342E2FC *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
            if ( !Time || *(_DWORD *)(v33 + 20) != eventId )
              goto LABEL_53;
            v35 = Time;
            Time = System_Collections_Generic_List_Int32Enum___Contains(
                     v65,
                     v34,
                     (const MethodInfo_382497C *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) != 0 )
            {
              v36 = *(_QWORD *)(v35 + 96) <= v62 ? 13 : 14;
              if ( v34 == 19 )
                v36 = 19;
              if ( v34 != v36 )
                goto LABEL_53;
            }
            LODWORD(v31) = *((_DWORD *)monitor + 6);
            if ( (int)++v32 >= (int)v31 )
              goto LABEL_48;
          }
LABEL_78:
          sub_1C7BD48(Time);
        }
LABEL_48:
        if ( !v61 )
          goto LABEL_54;
        v37 = v61->fields._items;
        v38 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
        ++v61->fields._version;
        if ( !v37 )
          goto LABEL_54;
        v39 = v61->fields._size;
        if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v61,
            v28,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &v37->obj.klass + v39;
          v61->fields._size = v39 + 1;
          v40[4] = (Il2CppClass *)v28;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v40 + 4), (int32_t)v28, v19, v20, v21, v22, v23, v24);
        }
      }
    }
LABEL_53:
    ++v26;
    v6 = v29;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_54;
  }
  Time = (int64_t)v61;
  if ( !v61 )
LABEL_54:
    sub_1C7BD40(Time, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v66,
    v61,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v67 = v66;
LABEL_57:
  while ( 1 )
  {
    v41 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v67,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v41 )
      break;
    current = v67.fields._current;
    if ( !v67.fields._current )
      sub_1C7BD40(v41, v42);
    v50 = v67.fields._current[4].monitor;
    if ( !v50 )
      sub_1C7BD40(v41, v42);
    v51 = v50[6];
    if ( v51 >= 1 )
    {
      v52 = 0;
      while ( 1 )
      {
        if ( v52 >= v51 )
          sub_1C7BD48(v41);
        v53 = *(_QWORD *)&v50[2 * v52 + 8];
        if ( !v53 )
          sub_1C7BD40(v41, v42);
        if ( v6 )
          break;
        if ( !v15 )
          sub_1C7BD40(v41, v42);
        v41 = System_Collections_Generic_List_Int32Enum___Contains(
                v15,
                *(_DWORD *)(v53 + 16),
                (const MethodInfo_382497C *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
        if ( v41 )
          break;
        v51 = v50[6];
        if ( (int)++v52 >= v51 )
          goto LABEL_57;
      }
      if ( !v60 )
        sub_1C7BD40(v41, v42);
      klass = (Il2CppObject *)current[4].klass;
      v55 = v60->fields._items;
      v56 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v60->fields._version;
      if ( !v55 )
        sub_1C7BD40(v41, klass);
      v57 = v60->fields._size;
      if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v60,
          klass,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = &v55->obj.klass + v57;
        v60->fields._size = v57 + 1;
        v58[4] = (Il2CppClass *)klass;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v58 + 4), (int32_t)klass, v43, v44, v45, v46, v47, v48);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v67,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  return (System_Collections_Generic_List_ServantVoiceData____o *)v60;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getEventShopVoiceList_43367320(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_43354892(this, 9, labelName, 0, 1, v3);
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

  if ( (byte_4CEF12E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    byte_4CEF12E = 1;
  }
  v5 = (System_Collections_Generic_List_T__o *)sub_1C7BD34(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v5,
    (const MethodInfo_3823DB0 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v5
    || (items = v5->fields._items,
        v10 = Method_System_Collections_Generic_List_CondType_Kind__Add__,
        ++v5->fields._version,
        !items) )
  {
    sub_1C7BD40(v6, v7);
  }
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      81,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  return ServantVoiceEntity__getVoiceList_43354892(
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
    return ServantVoiceEntity__getVoiceList_43354892(this, 2, labelName, 0, 0, v5);
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

  if ( (byte_4CEF12F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    byte_4CEF12F = 1;
  }
  v5 = (System_Collections_Generic_List_T__o *)sub_1C7BD34(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v5,
    (const MethodInfo_3823DB0 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v5
    || (items = v5->fields._items,
        v10 = Method_System_Collections_Generic_List_CondType_Kind__Add__,
        ++v5->fields._version,
        !items) )
  {
    sub_1C7BD40(v6, v7);
  }
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      81,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  return ServantVoiceEntity__getVoiceList_43354892(
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
  const MethodInfo *v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned int v13; // w21
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v15; // x23
  struct ServantVoiceCond_array *conds; // x24
  il2cpp_array_size_t v17; // x10
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

  if ( (byte_4CEF138 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_4CEF138 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_34;
  v13 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v13 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v3;
    if ( v13 >= max_length )
LABEL_36:
      sub_1C7BD48(isQuestClearState);
    v15 = scriptJson->m_Items[v13];
    if ( !v15 )
      goto LABEL_34;
    conds = v15->fields.conds;
    if ( conds )
    {
      v17 = conds->max_length;
      if ( v17 )
      {
        if ( (int)v17 >= 1 )
        {
          v18 = 0;
          v19 = 0;
          v20 = 0;
          v21 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v18 >= (unsigned int)v17 )
              goto LABEL_36;
            v22 = conds->m_Items[v18];
            if ( !v22 )
              goto LABEL_34;
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
                                        v6);
                  if ( isQuestClearState )
                    goto LABEL_33;
                  v20 = 0;
                  goto LABEL_27;
                }
                if ( (v19 & 1) == 0 )
                  goto LABEL_33;
                isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                      (ServantVoiceEntity_o *)isQuestClearState,
                                      v22->fields.value,
                                      v6);
                if ( isQuestClearState )
                  goto LABEL_33;
                break;
              case 6:
                isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                      (ServantVoiceEntity_o *)isQuestClearState,
                                      v22->fields.value,
                                      v6);
                if ( !isQuestClearState )
                  goto LABEL_33;
                break;
              default:
                if ( (v21 & 1) == 0 )
                  goto LABEL_33;
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
              if ( v3 )
              {
                p_obj = &v15->fields.infos->obj;
                items = v3->fields._items;
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
                      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v27 = &items->obj.klass + size;
                    v3->fields._size = size + 1;
                    v27[4] = (Il2CppClass *)p_obj;
                    sub_1C7BA8C(
                      (GrandQuestFolderBoardItem_o *)(v27 + 4),
                      (int32_t)p_obj,
                      (int32_t)v6,
                      v7,
                      v8,
                      v9,
                      v10,
                      v11);
                  }
                  break;
                }
              }
LABEL_34:
              sub_1C7BD40(isQuestClearState, p_obj);
            }
          }
        }
      }
    }
LABEL_33:
    scriptJson = this->fields.scriptJson;
    ++v13;
    if ( !scriptJson )
      goto LABEL_34;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getMasterMissionVoiceList(
        ServantVoiceEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantVoiceEntity__getVoiceList(this, 8, v2);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getMasterMissionVoiceList_43365012(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_43354892(this, 8, labelName, 0, 1, v3);
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
  int v23; // w22
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t version; // w10
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned int v36; // w24
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v38; // x27
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v40; // x8
  struct ServantVoiceCond_array *conds; // x8
  il2cpp_array_size_t v42; // x9
  ServantVoiceCond_o *v43; // x10
  int v44; // w10
  ServantVoiceCond_o *v45; // x12
  int32_t condType; // w13
  bool v47; // w12
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  int32_t id; // w26
  int32_t v54; // w25

  if ( (byte_4CEF127 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&ServantLimitUpVoiceCache_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF127 = 1;
  }
  if ( this->fields.type != type )
    return 0;
  v13 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v15 = ServantVoiceEntity__GetChangeLimitVoiceFriendshipLv(this, v14);
  v17 = v15 - 1;
  if ( v15 < 1 )
    goto LABEL_15;
  v18 = v15;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
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
               0);
  if ( !Instance )
    goto LABEL_72;
  FriendShipRank = UserServantCollectionEntity__getFriendShipRank((UserServantCollectionEntity_o *)Instance, 0);
  if ( FriendShipRank >= v18 )
  {
    v23 = FriendShipRank;
    if ( displayType )
    {
      id = this->fields.id;
      if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      if ( ServantLimitUpVoiceCache__IsLimitUpVoiceNormal(displayType, id, 0) )
        v23 = v17;
      if ( isPlayVoice )
      {
        v54 = this->fields.id;
        if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
        ServantLimitUpVoiceCache__UpdateLimitUpVoice(displayType, v54, 0);
      }
    }
  }
  else
  {
LABEL_15:
    v23 = -1;
  }
  Instance = ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v16);
  if ( Instance )
  {
    if ( !v13 )
      goto LABEL_72;
    p_obj = (Il2CppObject *)*((_QWORD *)Instance + 8);
    version = v13->fields._version;
    items = v13->fields._items;
    v32 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
LABEL_19:
    v13->fields._version = version + 1;
    if ( !items )
      goto LABEL_72;
    size = v13->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v13,
        p_obj,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = &items->obj.klass + size;
      v13->fields._size = size + 1;
      v34[4] = (Il2CppClass *)p_obj;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v34 + 4), (int32_t)p_obj, v24, v25, v26, v27, v28, v29);
    }
  }
  else
  {
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_72;
    v36 = 0;
    while ( 1 )
    {
      max_length = scriptJson->max_length;
      if ( (int)v36 >= (int)max_length )
        break;
      if ( v36 >= max_length )
        goto LABEL_73;
      v38 = scriptJson->m_Items[v36];
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      if ( !v38 )
        goto LABEL_72;
      infos = v38->fields.infos;
      if ( !infos )
        goto LABEL_72;
      if ( !LODWORD(infos->max_length) )
        goto LABEL_73;
      v40 = infos->m_Items[0];
      if ( !v40 || !Instance )
        goto LABEL_72;
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
        v42 = conds->max_length;
        if ( v42 )
        {
          if ( !(_DWORD)v42 )
LABEL_73:
            sub_1C7BD48(Instance);
          v43 = conds->m_Items[0];
          if ( !v43 )
            goto LABEL_72;
          if ( v43->fields.condType != 11 )
            goto LABEL_52;
          if ( v23 != -1 && (_DWORD)v42 != 1 )
          {
            if ( (int)v42 < 1 )
              goto LABEL_52;
            v44 = 0;
            while ( 1 )
            {
              v45 = conds->m_Items[v44];
              if ( !v45 )
                goto LABEL_72;
              condType = v45->fields.condType;
              if ( condType == 20 )
              {
                v47 = v45->fields.value <= v23;
              }
              else
              {
                if ( condType == 22 && v45->fields.value >= v23 && ((unsigned __int8)Instance & 1) != 0 )
                {
LABEL_54:
                  if ( v13 )
                  {
                    p_obj = &v38->fields.infos->obj;
                    v48 = v13->fields._items;
                    v49 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                    ++v13->fields._version;
                    if ( v48 )
                    {
                      v50 = v13->fields._size;
                      if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v13,
                          p_obj,
                          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v51 = &v48->obj.klass + v50;
                        v13->fields._size = v50 + 1;
                        v51[4] = (Il2CppClass *)p_obj;
                        sub_1C7BA8C(
                          (GrandQuestFolderBoardItem_o *)(v51 + 4),
                          (int32_t)p_obj,
                          v24,
                          v25,
                          v26,
                          v27,
                          v28,
                          v29);
                      }
                      goto LABEL_52;
                    }
                  }
LABEL_72:
                  sub_1C7BD40(Instance, p_obj);
                }
                v47 = 0;
              }
              if ( (v47 & (unsigned __int8)Instance & 1) != 0 )
                goto LABEL_54;
              if ( (_DWORD)v42 == ++v44 )
                goto LABEL_52;
            }
          }
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_52;
          if ( !v13 )
            goto LABEL_72;
          p_obj = &v38->fields.infos->obj;
          version = v13->fields._version;
          items = v13->fields._items;
          v32 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          goto LABEL_19;
        }
      }
LABEL_52:
      scriptJson = this->fields.scriptJson;
      ++v36;
      if ( !scriptJson )
        goto LABEL_72;
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
  unsigned int v11; // w23
  __int64 v12; // x8
  System_String_o *v13; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4CEF13A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    byte_4CEF13A = 1;
  }
  memset(&v16, 0, sizeof(v16));
  VoiceList = ServantVoiceEntity__getVoiceList(this, 8, method);
  if ( !VoiceList )
    sub_1C7BD40(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)VoiceList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v16 = v15;
  do
  {
LABEL_5:
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v7 )
    {
      current = 0;
      goto LABEL_16;
    }
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_1C7BD40(v7, v8);
    monitor = (int)v16.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= monitor )
      sub_1C7BD48(v7);
    v12 = *((_QWORD *)&current[2].klass + (int)v11);
    if ( !v12 )
      sub_1C7BD40(v7, v8);
    v13 = *(System_String_o **)(v12 + 16);
    if ( !v13 )
      sub_1C7BD40(0, v8);
    v7 = System_String__Equals_64212232(v13, id, 0);
    if ( v7 )
      break;
    monitor = (int)current[1].monitor;
    if ( (int)++v11 >= monitor )
      goto LABEL_5;
  }
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
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
  unsigned int v12; // w25
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v14; // x24
  struct ServantVoiceData_array *infos; // x9
  struct ServantVoiceCond_array *conds; // x8
  __int64 v17; // x27
  int v18; // w9
  ServantVoiceCond_o *v19; // x8
  struct ServantVoiceData_array *v20; // x8
  ServantVoiceData_o *v21; // x8
  const MethodInfo *v22; // x4
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4CEF12C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF12C = 1;
  }
  if ( this->fields.type != 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v10 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantVoiceData____TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v10,
          (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_34:
    sub_1C7BD40(Instance, p_obj);
  }
  v12 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v12 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v10;
    if ( v12 >= max_length )
LABEL_37:
      sub_1C7BD48(Instance);
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
          if ( (int)v17 >= v18 )
            break;
          if ( (unsigned int)v17 >= v18 )
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
                p_obj = &v14->fields.infos->obj;
                items = v10->fields._items;
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
                    *(const MethodInfo_383EDFC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
                }
                else
                {
                  v32 = &items->obj.klass + size;
                  v10->fields._size = size + 1;
                  v32[4] = (Il2CppClass *)p_obj;
                  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v32 + 4), (int32_t)p_obj, v23, v24, v25, v26, v27, v28);
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
  __int64 v10; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v12; // x23
  struct ServantVoiceData_array *infos; // x8
  il2cpp_array_size_t v14; // x9
  ServantVoiceData_o *v15; // x8
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct ServantVoiceCond_array *conds; // x8
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4CEF12B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF12B = 1;
  }
  if ( this->fields.type != 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantVoiceData____TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v8,
          (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_25:
    sub_1C7BD40(Instance, p_obj);
  }
  v10 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v10 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v8;
    if ( (unsigned int)v10 >= max_length )
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
          sub_1C7BD48(Instance);
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
                                             (const MethodInfo *)v18),
                ((unsigned __int8)Instance & 1) != 0) )
          {
            if ( !v8 )
              goto LABEL_25;
            p_obj = &v12->fields.infos->obj;
            items = v8->fields._items;
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
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v26[4] = (Il2CppClass *)p_obj;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)p_obj, v16, v17, v18, v19, v20, v21);
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

  return ServantVoiceEntity__getVoiceList_43354892(this, 7, labelName, 0, 1, v3);
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
        bool isMaterial,
        const MethodInfo *method)
{
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  _BOOL8 v30; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t max_length; // x9
  SvtVoiceInfo_o *v40; // x24
  ServantVoiceCond_array *v41; // x1
  System_String_o *v42; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  System_String_o *v49; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  int32_t v56; // w8
  unsigned int v57; // w28
  unsigned int v58; // w9
  SvtVoiceInfo_o *v59; // x26
  struct ServantVoiceData_array *infos; // x9
  __int64 v61; // x29
  int v62; // w8
  ServantVoiceData_o *v63; // x8
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  ServantVoiceCond_array *v70; // x1
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  System_String_o *materialOverwriteName; // x1
  System_String_o *v78; // x1
  System_String_o *v79; // x1

  if ( (byte_4CEF12A & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_16186/*"_B050"*/);
    byte_4CEF12A = 1;
  }
  *conds = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)conds,
    0,
    (int32_t)labelName,
    (int32_t)conds,
    (System_String_o *)isInvalidVoiceList,
    (int32_t)overwriteName,
    (int64_t)overwriteNameDefault,
    (System_String_o *)overwritePriority);
  *isInvalidVoiceList = 0;
  *overwriteName = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)overwriteName, 0, v18, v19, v20, v21, v22, v23);
  *overwriteNameDefault = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)overwriteNameDefault, 0, v24, v25, v26, v27, v28, v29);
  *overwritePriority = 0;
  if ( this->fields.type != type )
    return;
  if ( !labelName )
    goto LABEL_26;
  v30 = System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16186/*"_B050"*/, 0);
  scriptJson = this->fields.scriptJson;
  if ( v30 )
  {
    if ( scriptJson )
    {
      max_length = scriptJson->max_length;
      if ( !max_length )
        return;
      if ( !(_DWORD)max_length )
LABEL_33:
        sub_1C7BD48(v30);
      v40 = scriptJson->m_Items[0];
      if ( v40 )
      {
        v41 = v40->fields.conds;
        *conds = v41;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)conds, (int32_t)v41, v32, v33, v34, v35, v36, v37);
        *isInvalidVoiceList = v40->fields.isInvalidVoiceList;
        v42 = v40->fields.overwriteName;
        *overwriteName = v42;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)overwriteName, (int32_t)v42, v43, v44, v45, v46, v47, v48);
        v49 = v40->fields.overwriteNameDefault;
        *overwriteNameDefault = v49;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)overwriteNameDefault, (int32_t)v49, v50, v51, v52, v53, v54, v55);
        v56 = v40->fields.overwritePriority;
        goto LABEL_31;
      }
    }
LABEL_26:
    sub_1C7BD40(v30, v31);
  }
  if ( !scriptJson )
    goto LABEL_26;
  v57 = 0;
  while ( 1 )
  {
    v58 = scriptJson->max_length;
    if ( (int)v57 >= (int)v58 )
      return;
    if ( v57 >= v58 )
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
  v61 = 0;
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
    v30 = System_String__Equals_64212232(labelName, v63->fields.id, 0);
    if ( v30 )
      break;
    infos = v59->fields.infos;
    ++v61;
    if ( !infos )
      goto LABEL_26;
  }
  v70 = v59->fields.conds;
  *conds = v70;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)conds, (int32_t)v70, v64, v65, v66, v67, v68, v69);
  *isInvalidVoiceList = v59->fields.isInvalidVoiceList;
  if ( !isMaterial
    || (materialOverwriteName = v59->fields.materialOverwriteName,
        *overwriteName = materialOverwriteName,
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)overwriteName,
          (int32_t)materialOverwriteName,
          v71,
          v72,
          v73,
          v74,
          v75,
          v76),
        System_String__IsNullOrEmpty(*overwriteName, 0)) )
  {
    v78 = v59->fields.overwriteName;
    *overwriteName = v78;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)overwriteName, (int32_t)v78, v71, v72, v73, v74, v75, v76);
  }
  v79 = v59->fields.overwriteNameDefault;
  *overwriteNameDefault = v79;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)overwriteNameDefault, (int32_t)v79, v71, v72, v73, v74, v75, v76);
  v56 = v59->fields.overwritePriority;
LABEL_31:
  *overwritePriority = v56;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getRankUpFriendShip(
        ServantVoiceEntity_o *this,
        int32_t friendShipRank,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  return ServantVoiceEntity__getVoiceList_43354176(this, 1, 3, friendShipRank, 0, -1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getSpecificLimitCntUpVoiceList(
        ServantVoiceEntity_o *this,
        int32_t limitCount,
        System_String_o *playVoiceLabel,
        int32_t genderType,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return ServantVoiceEntity__getVoiceList_43354176(this, 2, 9, limitCount, playVoiceLabel, genderType, v5);
}


int32_t ServantVoiceEntity__getSvtIdfromVoiceAssetName(System_String_o *assetName, const MethodInfo *method)
{
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( !assetName
    || (assetName = (System_String_o *)System_String__Split(assetName, 0x5Fu, 0, 0), result = 0, !assetName) )
  {
    sub_1C7BD40(assetName, method);
  }
  if ( LODWORD(assetName[1].klass) != 2 )
    return 0;
  if ( System_Int32__TryParse(*(System_String_o **)&assetName[1].fields, &result, 0) )
    return result;
  return 0;
}


System_String_o *ServantVoiceEntity__getVoiceAssetName(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  return ServantVoiceEntity__getVoiceAssetName_43350640(this->fields.id, method);
}


System_String_o *ServantVoiceEntity__getVoiceAssetName_43350640(int32_t svtId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = svtId;
  if ( (byte_4CEF122 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_4428/*"ChrVoice_"*/);
    byte_4CEF122 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_64176912((System_String_o *)StringLiteral_4428/*"ChrVoice_"*/, v2, 0);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getVoiceList(
        ServantVoiceEntity_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x0
  Il2CppObject *p_obj; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v15; // x21
  int max_length; // w9
  SvtVoiceInfo_o *v17; // x8
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4CEF123 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_4CEF123 = 1;
  }
  if ( this->fields.type != type )
    return 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_15:
    sub_1C7BD40(v6, p_obj);
  v15 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v15 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v5;
    if ( (unsigned int)v15 >= max_length )
      sub_1C7BD48(v6);
    v17 = scriptJson->m_Items[v15];
    if ( v17 )
    {
      if ( v5 )
      {
        p_obj = &v17->fields.infos->obj;
        items = v5->fields._items;
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
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v21[4] = (Il2CppClass *)p_obj;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)p_obj, v8, v9, v10, v11, v12, v13);
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
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v27; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v29; // x26
  struct ServantVoiceCond_array *conds; // x8
  il2cpp_array_size_t v31; // x9
  ServantVoiceCond_o *v32; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v34; // x8
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x0

  if ( (byte_4CEF125 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF125 = 1;
  }
  if ( this->fields.type != type )
    return 0;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = (DataManager_o *)ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v15);
  if ( Instance )
  {
    if ( v11 )
    {
      saveNameList = (Il2CppObject *)Instance->fields.saveNameList;
      items = v11->fields._items;
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
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v25[4] = (Il2CppClass *)saveNameList;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)saveNameList, v16, v17, v18, v19, v20, v21);
        }
        return (System_Collections_Generic_List_ServantVoiceData____o *)v11;
      }
    }
LABEL_32:
    sub_1C7BD40(Instance, saveNameList);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_32;
  v27 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v27 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v11;
    if ( (unsigned int)v27 >= max_length )
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
            sub_1C7BD48(Instance);
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
            saveNameList = &v29->fields.infos->obj;
            v41 = v11->fields._items;
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
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
            }
            else
            {
              v44 = &v41->obj.klass + v43;
              v11->fields._size = v43 + 1;
              v44[4] = (Il2CppClass *)saveNameList;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v44 + 4), (int32_t)saveNameList, v35, v36, v37, v38, v39, v40);
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


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getVoiceList_43354176(
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
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned __int64 v29; // x25
  unsigned __int64 max_length_low; // x9
  SvtVoiceInfo_o *v31; // x27
  struct ServantVoiceCond_array *conds; // x9
  __int64 v33; // x28
  int max_length; // w8
  ServantVoiceCond_o *v35; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v37; // x8
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0

  if ( (byte_4CEF128 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF128 = 1;
  }
  if ( this->fields.type != type )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v17);
  if ( Instance )
  {
    if ( v16 )
    {
      saveNameList = (Il2CppObject *)Instance->fields.saveNameList;
      items = v16->fields._items;
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
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v27[4] = (Il2CppClass *)saveNameList;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v27 + 4), (int32_t)saveNameList, v18, v19, v20, v21, v22, v23);
        }
        return (System_Collections_Generic_List_ServantVoiceData____o *)v16;
      }
    }
LABEL_40:
    sub_1C7BD40(Instance, saveNameList);
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
      sub_1C7BD48(Instance);
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
          if ( (int)v33 >= max_length )
            break;
          if ( (unsigned int)v33 >= max_length )
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
                saveNameList = &v31->fields.infos->obj;
                v38 = v16->fields._items;
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
                    *(const MethodInfo_383EDFC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
                }
                else
                {
                  v41 = &v38->obj.klass + v40;
                  v16->fields._size = v40 + 1;
                  v41[4] = (Il2CppClass *)saveNameList;
                  sub_1C7BA8C(
                    (GrandQuestFolderBoardItem_o *)(v41 + 4),
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


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getVoiceList_43354892(
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
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v22; // x9
  SvtVoiceInfo_o *v23; // x8
  unsigned int v24; // w26
  _BOOL4 v25; // w24
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v27; // x25
  struct ServantVoiceData_array *infos; // x9
  __int64 v29; // x27
  int v30; // w8
  ServantVoiceData_o *v31; // x28
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0

  if ( (byte_4CEF129 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_16186/*"_B050"*/);
    byte_4CEF129 = 1;
  }
  if ( this->fields.type != type )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !labelName )
    goto LABEL_43;
  Instance = (Il2CppObject *)System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16186/*"_B050"*/, 0);
  scriptJson = this->fields.scriptJson;
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !scriptJson )
      goto LABEL_43;
    v24 = 0;
    v25 = (unsigned int)(type - 1) < 2 && isCheckPlayCond;
    while ( 1 )
    {
      max_length = scriptJson->max_length;
      if ( (int)v24 >= (int)max_length )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v14;
      if ( v24 >= max_length )
        goto LABEL_44;
      v27 = scriptJson->m_Items[v24];
      if ( !v27 )
        goto LABEL_43;
      infos = v27->fields.infos;
      if ( !infos )
        goto LABEL_34;
      v29 = 0;
      while ( 1 )
      {
        v30 = infos->max_length;
        if ( (int)v29 >= v30 )
          break;
        if ( (unsigned int)v29 >= v30 )
          goto LABEL_44;
        v31 = infos->m_Items[v29];
        if ( !v31 )
          goto LABEL_43;
        Instance = (Il2CppObject *)System_String__Equals_64212232(labelName, v31->fields.id, 0);
        if ( v25 )
        {
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_31;
          if ( !MasterData_object )
            goto LABEL_43;
          Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(
                                       (VoicePlayCondMaster_o *)MasterData_object,
                                       this->fields.id,
                                       v31->fields.id,
                                       disableCondTypeList,
                                       -1,
                                       -1,
                                       0,
                                       0);
        }
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v14 )
          {
            p_obj = &v27->fields.infos->obj;
LABEL_38:
            items = v14->fields._items;
            v33 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v14->fields._version;
            if ( items )
            {
              size = v14->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v14,
                  p_obj,
                  *(const MethodInfo_383EDFC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
              }
              else
              {
                v35 = &items->obj.klass + size;
                v14->fields._size = size + 1;
                v35[4] = (Il2CppClass *)p_obj;
                sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)p_obj, v15, v16, v17, v18, v19, v20);
              }
              return (System_Collections_Generic_List_ServantVoiceData____o *)v14;
            }
          }
LABEL_43:
          sub_1C7BD40(Instance, p_obj);
        }
LABEL_31:
        infos = v27->fields.infos;
        ++v29;
        if ( !infos )
          goto LABEL_43;
      }
      scriptJson = this->fields.scriptJson;
LABEL_34:
      ++v24;
      if ( !scriptJson )
        goto LABEL_43;
    }
  }
  if ( !scriptJson )
    goto LABEL_43;
  v22 = scriptJson->max_length;
  if ( !v22 )
    return (System_Collections_Generic_List_ServantVoiceData____o *)v14;
  if ( !(_DWORD)v22 )
LABEL_44:
    sub_1C7BD48(Instance);
  v23 = scriptJson->m_Items[0];
  if ( !v23 )
    goto LABEL_43;
  p_obj = &v23->fields.infos->obj;
  if ( p_obj && p_obj[1].monitor )
  {
    if ( v14 )
      goto LABEL_38;
    goto LABEL_43;
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
  int v20; // w26
  bool v21; // w20
  ServantVoiceCond_o *v22; // x23
  int32_t value; // w23
  ServantVoiceEntity_o *v24; // x0
  UserGameEntity_o *v25; // x2
  const MethodInfo *v27; // [xsp+0h] [xbp-60h]

  if ( (byte_4CEF133 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&VoiceCondType_TypeInfo);
    byte_4CEF133 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame
    || (v12 = (UserServantMaster_o *)Instance) == 0
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   SelfUserGame->fields.favoriteUserSvtId,
                   (const MethodInfo_3430858 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
        Instance = UserServantMaster__getAllList(v12, 0),
        !Entity)
    || (v14 = Instance,
        FriendshipRank = UserServantEntity__getFriendshipRank((UserServantEntity_o *)Entity, 0),
        Instance = (UserServantEntity_array *)ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v16),
        !info)
    || (conds = info->fields.conds) == 0 )
  {
LABEL_22:
    sub_1C7BD40(Instance, v11);
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
      sub_1C7BD48(Instance);
    v22 = conds->m_Items[v20];
    if ( !v22 )
      goto LABEL_22;
    if ( v22->fields.condType == 23 )
    {
      value = v22->fields.value;
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      Instance = (UserServantEntity_array *)VoiceCondType__IsSatisfyCostumeCondition(value, imageLimitCount, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        return 0;
    }
    else
    {
      v24 = (ServantVoiceEntity_o *)UserServantEntity__getFriendshipRank((UserServantEntity_o *)Entity, 0);
      Instance = (UserServantEntity_array *)ServantVoiceEntity__IsAvailableHomeAndGrowth(
                                              v24,
                                              v22,
                                              v25,
                                              (UserServantEntity_o *)Entity,
                                              v14,
                                              v19,
                                              (int32_t)v24,
                                              v21,
                                              v27);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        return 0;
    }
    max_length = conds->max_length;
    ++v20;
  }
  while ( v20 < max_length );
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
  int32_t condType; // w22
  ServantVoiceEntity_o *v18; // x0
  UserGameEntity_o *v19; // x2
  int32_t value; // w23
  int32_t v21; // w2
  int32_t v22; // w0
  int32_t v23; // w1
  int32_t v24; // w23
  int32_t LimitCount; // w24
  const MethodInfo *v27; // [xsp+0h] [xbp-70h]

  if ( (byte_4CEF132 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&VoiceCondType_TypeInfo);
    byte_4CEF132 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_27;
  UserGameMaster__getSelfUserGame(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_28;
  AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0);
  FriendshipRank = UserServantEntity__getFriendshipRank(userSvtEntity, 0);
  Instance = (Il2CppObject *)ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v11);
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
      sub_1C7BD48(Instance);
    v16 = conds->m_Items[v15];
    if ( !v16 )
LABEL_28:
      sub_1C7BD40(Instance, v8);
    condType = v16->fields.condType;
    Instance = 0;
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
        value = v16->fields.value;
        if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
        v21 = -1;
        v22 = condType;
        v23 = value;
        goto LABEL_18;
      default:
        if ( (unsigned int)(condType - 24) < 3 )
        {
          v24 = v16->fields.value;
          LimitCount = UserServantEntity__getLimitCount(userSvtEntity, 0);
          if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
          v22 = condType;
          v23 = v24;
          v21 = LimitCount;
LABEL_18:
          Instance = (Il2CppObject *)VoiceCondType__IsSatisfyCondition(v22, v23, v21, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_27;
        }
        else
        {
          if ( (unsigned int)(condType - 41) <= 2 )
            goto LABEL_27;
LABEL_13:
          v18 = (ServantVoiceEntity_o *)UserServantEntity__getFriendshipRank(userSvtEntity, 0);
          Instance = (Il2CppObject *)ServantVoiceEntity__IsAvailableHomeAndGrowth(
                                       v18,
                                       v16,
                                       v19,
                                       userSvtEntity,
                                       AllList,
                                       v14,
                                       (int32_t)v18,
                                       0,
                                       v27);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_27;
        }
LABEL_19:
        max_length = conds->max_length;
        if ( (int)++v15 < max_length )
          continue;
        LOBYTE(Instance) = 1;
        break;
    }
    return (char)Instance;
  }
}


bool ServantVoiceEntity__isQuestClearState(ServantVoiceEntity_o *this, int32_t questId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEF139 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF139 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
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
         0) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserQuestEntity__getClearNum(entity, 0) > 0;
LABEL_15:
    sub_1C7BD40(Instance, v5);
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
  __int64 v12; // x29
  UserServantEntity_Fields *p_fields; // x27
  il2cpp_array_size_t max_length; // x9
  SvtVoiceInfo_o *v15; // x24
  struct ServantVoiceData_array *infos; // x8
  il2cpp_array_size_t v17; // x9
  ServantVoiceData_o *v18; // x8
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  ServantVoiceData_o *v29; // x8
  __int128 v30; // q1
  int32_t id; // w25
  System_String_o *v32; // x26
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
  SvtVoiceInfo_o *v44; // x24
  struct ServantVoiceData_array *v45; // x8
  il2cpp_array_size_t v46; // x9
  ServantVoiceData_o *v47; // x8
  __int128 v48; // q1
  int32_t v49; // w25
  System_String_o *v50; // x26
  const MethodInfo *v51; // x3
  struct ServantVoiceCond_array *v52; // x8
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  Il2CppClass **v62; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+20h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+40h] [xbp-80h]

  if ( (byte_4CEF131 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&ServantVoiceData___TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_WeightRate_int___ctor__);
    sub_1C7BAE8(&Method_WeightRate_int__getData__);
    sub_1C7BAE8(&Method_WeightRate_int__getTotalWeight__);
    sub_1C7BAE8(&Method_WeightRate_int__setWeight__);
    sub_1C7BAE8(&WeightRate_int__TypeInfo);
    byte_4CEF131 = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_78;
  v12 = 0;
  p_fields = &userServantEntity->fields;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v12 >= (int)max_length )
      break;
    if ( (unsigned int)v12 >= (unsigned int)max_length )
      goto LABEL_79;
    v15 = scriptJson->m_Items[v12];
    if ( !v15 )
      goto LABEL_78;
    infos = v15->fields.infos;
    if ( infos )
    {
      v17 = infos->max_length;
      if ( v17 )
      {
        if ( voiceId )
        {
          if ( !(_DWORD)v17 )
            goto LABEL_79;
          v18 = infos->m_Items[0];
          if ( !v18 )
            goto LABEL_78;
          Instance = System_String__op_Equality(v18->fields.id, voiceId, 0);
          if ( (Instance & 1) != 0 )
            goto LABEL_17;
        }
        else
        {
          if ( !(_DWORD)v17 )
            goto LABEL_79;
          v29 = infos->m_Items[0];
          if ( !v29 )
            goto LABEL_78;
          v30 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          id = this->fields.id;
          v32 = v29->fields.id;
          *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
          *(_OWORD *)&v65.fields.fakeValue = v30;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v64 = v65;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v64, 0);
          if ( !MasterData_object )
            goto LABEL_78;
          Instance = VoicePlayCondMaster__isVoicePlay(
                       (VoicePlayCondMaster_o *)MasterData_object,
                       id,
                       v32,
                       0,
                       Instance,
                       -1,
                       0,
                       0);
          if ( (Instance & 1) != 0 )
          {
            conds = v15->fields.conds;
            if ( conds )
            {
              if ( conds->max_length )
              {
                Instance = ServantVoiceEntity__isAvailableVoice(this, v15, userServantEntity, v33);
                if ( (Instance & 1) != 0 )
                {
LABEL_17:
                  if ( !v10 )
                    goto LABEL_78;
                  items = v10->fields._items;
                  v26 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
                  ++v10->fields._version;
                  if ( !items )
                    goto LABEL_78;
                  size = v10->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v10,
                      (Il2CppObject *)v15,
                      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v28 = &items->obj.klass + size;
                    v10->fields._size = size + 1;
                    v28[4] = (Il2CppClass *)v15;
                    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v28 + 4), (int32_t)v15, v19, v20, v21, v22, v23, v24);
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
      goto LABEL_78;
  }
  if ( !v10 )
    goto LABEL_78;
  if ( v10->fields._size )
    goto LABEL_37;
  if ( voiceId )
  {
    if ( (int)max_length >= 1 )
    {
      v43 = 0;
      while ( v43 < (unsigned int)max_length )
      {
        v44 = scriptJson->m_Items[v43];
        if ( !v44 )
          goto LABEL_78;
        v45 = v44->fields.infos;
        if ( v45 )
        {
          v46 = v45->max_length;
          if ( v46 )
          {
            if ( !(_DWORD)v46 )
              break;
            v47 = v45->m_Items[0];
            if ( !v47 )
              goto LABEL_78;
            v48 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            v49 = this->fields.id;
            v50 = v47->fields.id;
            *(_OWORD *)&v65.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v65.fields.fakeValue = v48;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v63 = v65;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v63, 0);
            if ( !MasterData_object )
              goto LABEL_78;
            Instance = VoicePlayCondMaster__isVoicePlay(
                         (VoicePlayCondMaster_o *)MasterData_object,
                         v49,
                         v50,
                         0,
                         Instance,
                         -1,
                         0,
                         0);
            if ( (Instance & 1) != 0 )
            {
              v52 = v44->fields.conds;
              if ( v52 )
              {
                if ( v52->max_length )
                {
                  Instance = ServantVoiceEntity__isAvailableVoice(this, v44, userServantEntity, v51);
                  if ( (Instance & 1) != 0 )
                  {
                    v59 = v10->fields._items;
                    v60 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
                    ++v10->fields._version;
                    if ( !v59 )
                      goto LABEL_78;
                    v61 = v10->fields._size;
                    if ( (unsigned int)v61 >= LODWORD(v59->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v10,
                        (Il2CppObject *)v44,
                        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v62 = &v59->obj.klass + v61;
                      v10->fields._size = v61 + 1;
                      v62[4] = (Il2CppClass *)v44;
                      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v62 + 4), (int32_t)v44, v53, v54, v55, v56, v57, v58);
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
        LODWORD(max_length) = scriptJson->max_length;
        if ( (int)++v43 >= (int)max_length )
          goto LABEL_76;
      }
LABEL_79:
      sub_1C7BD48(Instance);
    }
LABEL_76:
    if ( v10->fields._size )
    {
LABEL_37:
      v36 = (WeightRate_int__o *)sub_1C7BD34(WeightRate_int__TypeInfo);
      WeightRate_int____ctor(v36, (const MethodInfo_3C54A68 *)Method_WeightRate_int___ctor__);
      v37 = v10->fields._size;
      if ( v37 >= 1 )
      {
        if ( !v36 )
          goto LABEL_78;
        for ( i = 0; i != v37; ++i )
          WeightRate_int___setWeight(v36, 1, i, (const MethodInfo_3C53F84 *)Method_WeightRate_int__setWeight__);
      }
      Instance = System_String__IsNullOrEmpty(voiceId, 0);
      if ( (Instance & 1) != 0 || v10->fields._size < 1 )
      {
LABEL_50:
        if ( v36 )
        {
          v42 = UnityEngine_Random__Range_71829860(0, v36->fields.totalweight, 0);
          Data = WeightRate_int___getData(v36, v42, (const MethodInfo_3C543F8 *)Method_WeightRate_int__getData__);
LABEL_52:
          Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                v10,
                                Data,
                                (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__);
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
                                (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__);
          if ( !Instance )
            break;
          v40 = *(_QWORD *)(Instance + 64);
          if ( !v40 )
            break;
          if ( !*(_DWORD *)(v40 + 24) )
            goto LABEL_79;
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
LABEL_78:
      sub_1C7BD40(Instance, v8);
    }
  }
  return (ServantVoiceData_array *)sub_1C7BB90(ServantVoiceData___TypeInfo, 0);
}


System_Collections_Generic_List_SvtVoiceInfo__o *ServantVoiceEntity__randomChangeSvtVoiceCount(
        ServantVoiceEntity_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *v8; // x21
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v10; // x26
  int max_length; // w9
  SvtVoiceInfo_o *v12; // x23
  struct ServantVoiceData_array *infos; // x8
  il2cpp_array_size_t v14; // x9
  ServantVoiceData_o *v15; // x8
  __int128 v16; // q1
  int32_t id; // w24
  System_String_o *v18; // x25
  const MethodInfo *v19; // x3
  struct ServantVoiceCond_array *conds; // x8
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+20h] [xbp-80h]

  if ( (byte_4CEF130 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEF130 = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v8,
          (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_28:
    sub_1C7BD40(Instance, v6);
  }
  v10 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v10 >= max_length )
      return (System_Collections_Generic_List_SvtVoiceInfo__o *)v8;
    if ( (unsigned int)v10 >= max_length )
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
          sub_1C7BD48(Instance);
        v15 = infos->m_Items[0];
        if ( !v15 )
          goto LABEL_28;
        v16 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        id = this->fields.id;
        v18 = v15->fields.id;
        *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v33.fields.fakeValue = v16;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v32 = v33;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v32, 0);
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
              Instance = ServantVoiceEntity__isAvailableVoice(this, v12, userServantEntity, v19);
              if ( (Instance & 1) != 0 )
              {
                if ( !v8 )
                  goto LABEL_28;
                items = v8->fields._items;
                v28 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
                ++v8->fields._version;
                if ( !items )
                  goto LABEL_28;
                size = v8->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v8,
                    (Il2CppObject *)v12,
                    *(const MethodInfo_383EDFC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
                }
                else
                {
                  v30 = &items->obj.klass + size;
                  v8->fields._size = size + 1;
                  v30[4] = (Il2CppClass *)v12;
                  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v30 + 4), (int32_t)v12, v21, v22, v23, v24, v25, v26);
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