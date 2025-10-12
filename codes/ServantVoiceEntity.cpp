void ServantVoiceEntity___ctor(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C38485 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C38485 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantVoiceEntity__CreatePK(int32_t id, int32_t voicePrefix, int32_t type, const MethodInfo *method)
{
  if ( (byte_4C38464 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C38464 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           voicePrefix,
           type,
           (const MethodInfo_30DBA08 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v6; // x9
  unsigned __int64 v7; // x10
  struct SvtVoiceInfo_array *scriptJson; // x10
  int max_length; // w11
  int i; // w12
  SvtVoiceInfo_o *v11; // x13
  struct ServantVoiceCond_array *conds; // x13
  il2cpp_array_size_t v13; // x14
  int v14; // w15
  ServantVoiceCond_o *v15; // x16
  __int64 value; // x16

  if ( (byte_4C38471 & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    byte_4C38471 = 1;
  }
  v5 = sub_1C32CC8(int___TypeInfo, (unsigned int)rankNow);
  if ( !v5 )
    goto LABEL_31;
  v6 = *(_QWORD *)(v5 + 24);
  if ( (__int64)((unsigned __int64)(unsigned int)v6 << 32) >= 1 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= (unsigned int)v6 )
LABEL_32:
        sub_1C32E84(v5);
      *(_DWORD *)(v5 + 32 + 4 * v7++) = 0;
    }
    while ( (int)v6 != v7 );
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_31:
    sub_1C32E7C(v5);
  max_length = scriptJson->max_length;
  if ( max_length < 1 )
    goto LABEL_28;
  for ( i = 0; i < max_length; ++i )
  {
    if ( i >= (unsigned int)max_length )
      goto LABEL_32;
    v11 = scriptJson->m_Items[i];
    if ( !v11 )
      goto LABEL_31;
    conds = v11->fields.conds;
    if ( conds )
    {
      v13 = conds->max_length;
      if ( v13 )
      {
        if ( (int)v13 >= 1 )
        {
          v14 = 0;
          do
          {
            v15 = conds->m_Items[v14];
            if ( !v15 )
              goto LABEL_31;
            if ( v15->fields.condType == 3 )
            {
              value = v15->fields.value;
              if ( (_DWORD)value == rankNow )
                return rankNow;
              if ( (int)value < rankNow )
              {
                if ( (unsigned int)value >= (unsigned int)v6 )
                  goto LABEL_32;
                ++*(_DWORD *)(v5 + 4 * value + 32);
              }
            }
          }
          while ( (_DWORD)v13 != ++v14 );
        }
      }
    }
  }
LABEL_28:
  while ( --rankNow >= 0 )
  {
    if ( rankNow >= (unsigned int)v6 )
      goto LABEL_32;
    if ( *(int *)(v5 + 4LL * (unsigned int)rankNow + 32) > 0 )
      return rankNow;
  }
  return -1;
}


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
    sub_1C32E7C(this);
  max_length = scriptJson->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
LABEL_19:
      sub_1C32E84(this);
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
    this = (ServantVoiceEntity_o *)System_String__Equals_63553848(labelName, v12->fields.id, 0);
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
    sub_1C32E7C(this);
  max_length = scriptJson->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    this = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
LABEL_24:
        sub_1C32E84(this);
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
    return ServantVoiceEntity__getVoiceList_42697784(this, 3, labelName, 0, 1, v5);
  else
    return 0;
}


SvtVoiceInfo_o *ServantVoiceEntity__GetPlayVoiceLabelInfo(
        ServantVoiceEntity_o *this,
        System_String_o *playVoiceLabel,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  SvtVoiceInfo_o *v6; // x21
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned __int64 v8; // x22
  unsigned __int64 max_length_low; // x9
  struct ServantVoiceData_array *infos; // x9
  ServantVoiceData_o *v11; // x8

  IsNullOrEmpty = System_String__IsNullOrEmpty(playVoiceLabel, 0);
  v6 = 0;
  if ( !IsNullOrEmpty )
  {
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
LABEL_13:
      sub_1C32E7C(IsNullOrEmpty);
    v8 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(scriptJson->max_length);
      if ( (__int64)v8 >= (int)max_length_low )
        return 0;
      if ( v8 >= max_length_low )
        sub_1C32E84(IsNullOrEmpty);
      v6 = scriptJson->m_Items[v8];
      if ( v6 )
      {
        infos = v6->fields.infos;
        if ( !infos )
          goto LABEL_13;
        if ( SLODWORD(infos->max_length) >= 1 )
        {
          v11 = infos->m_Items[0];
          if ( !v11 )
            goto LABEL_13;
          IsNullOrEmpty = System_String__op_Equality(v11->fields.id, playVoiceLabel, 0);
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


System_String_o *ServantVoiceEntity__GetSummonScriptId(
        ServantVoiceEntity_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  VoicePlayCondMaster_o *v7; // x21
  __int64 v8; // x23
  int max_length; // w9
  SvtVoiceInfo_o *v10; // x8
  struct ServantVoiceData_array *infos; // x9
  ServantVoiceData_o *v12; // x9
  System_String_o *summonScript; // x22

  if ( (byte_4C38484 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C38484 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_16:
    sub_1C32E7C(Instance);
  }
  v7 = (VoicePlayCondMaster_o *)Instance;
  v8 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v8 >= max_length )
      return 0;
    if ( (unsigned int)v8 >= max_length )
      goto LABEL_19;
    v10 = scriptJson->m_Items[v8];
    if ( !v10 )
      goto LABEL_16;
    infos = v10->fields.infos;
    if ( !infos )
      goto LABEL_16;
    if ( !LODWORD(infos->max_length) )
LABEL_19:
      sub_1C32E84(Instance);
    v12 = infos->m_Items[0];
    if ( !v12 || !v7 )
      goto LABEL_16;
    summonScript = v10->fields.summonScript;
    Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(v7, svtId, v12->fields.id, 0, -1, -1, 0, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (Il2CppObject *)System_String__IsNullOrEmpty(summonScript, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        return summonScript;
    }
    scriptJson = this->fields.scriptJson;
    ++v8;
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

  if ( (byte_4C3847A & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (ServantVoiceEntity_o *)sub_1C32C20(&VoiceCondType_TypeInfo);
    byte_4C3847A = 1;
  }
  if ( !cond )
LABEL_45:
    sub_1C32E7C(this);
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
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v31, 0);
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

  return ServantVoiceEntity__getVoiceList_42697784(this, 6, labelName, 0, 1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getBoxGachaVoiceList(
        ServantVoiceEntity_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t Time; // x21
  Il2CppObject *Instance; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct SvtVoiceInfo_array *scriptJson; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x22
  unsigned int v10; // w23
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v12; // x28
  struct ServantVoiceCond_array *conds; // x29
  il2cpp_array_size_t v14; // x8
  __int64 v15; // x19
  ServantVoiceCond_o *v16; // x27
  unsigned int condType; // w8
  Il2CppObject *p_obj; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  Il2CppObject *v23; // x1
  struct System_Object_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  Il2CppClass **v27; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C3847B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3847B = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_36:
    sub_1C32E7C(Instance);
  }
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v10 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v10 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v3;
    if ( v10 >= max_length )
      goto LABEL_38;
    v12 = scriptJson->m_Items[v10];
    if ( !v12 )
      goto LABEL_36;
    conds = v12->fields.conds;
    if ( conds && (v14 = conds->max_length) != 0 )
    {
      if ( (int)v14 >= 1 )
      {
        v15 = 0;
        while ( (unsigned int)v15 < (unsigned int)v14 )
        {
          v16 = conds->m_Items[v15];
          if ( !v16 || !v9 )
            goto LABEL_36;
          Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                       v9,
                                       &entity,
                                       v16->fields.value,
                                       (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_36;
            if ( Time <= (__int64)entity[6].monitor )
            {
              condType = v16->fields.condType;
              if ( condType <= 0x13 && ((1 << condType) & 0x86000) != 0 )
              {
                if ( !v3 )
                  goto LABEL_36;
                p_obj = &v12->fields.infos->obj;
                items = v3->fields._items;
                v20 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v3->fields._version;
                if ( !items )
                  goto LABEL_36;
                size = v3->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v3,
                    p_obj,
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
                }
                else
                {
                  v22 = &items->obj.klass + size;
                  v3->fields._size = size + 1;
                  v22[4] = (Il2CppClass *)p_obj;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 4), (int32_t)p_obj, v6, v7);
                }
              }
            }
          }
          LODWORD(v14) = conds->max_length;
          if ( (int)++v15 >= (int)v14 )
            goto LABEL_35;
        }
LABEL_38:
        sub_1C32E84(Instance);
      }
    }
    else
    {
      if ( !v3 )
        goto LABEL_36;
      v23 = &v12->fields.infos->obj;
      v24 = v3->fields._items;
      v25 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v3->fields._version;
      if ( !v24 )
        goto LABEL_36;
      v26 = v3->fields._size;
      if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v23,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &v24->obj.klass + v26;
        v3->fields._size = v26 + 1;
        v27[4] = (Il2CppClass *)v23;
        sub_1C32BC4((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v23, v6, v7);
      }
    }
LABEL_35:
    ++v10;
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
  struct SvtVoiceInfo_array *scriptJson; // x8
  VoicePlayCondMaster_o *v10; // x22
  __int64 v11; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v13; // x8
  struct ServantVoiceData_array *infos; // x23
  ServantVoiceData_o *v15; // x8
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4C38467 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C38467 = 1;
  }
  if ( this->fields.type != type )
    return 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_22:
    sub_1C32E7C(Instance);
  }
  v10 = (VoicePlayCondMaster_o *)Instance;
  v11 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v11 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
    if ( (unsigned int)v11 >= max_length )
      goto LABEL_25;
    v13 = scriptJson->m_Items[v11];
    if ( v13 )
    {
      infos = v13->fields.infos;
      if ( infos )
      {
        if ( !LODWORD(infos->max_length) )
LABEL_25:
          sub_1C32E84(Instance);
        v15 = infos->m_Items[0];
        if ( v15 )
        {
          if ( v10 )
          {
            Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(v10, svtId, v15->fields.id, 0, -1, -1, 0, 0, 0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v7 )
                goto LABEL_22;
              Instance = (Il2CppObject *)System_Collections_Generic_List_object___Contains(
                                           v7,
                                           &infos->obj,
                                           (const MethodInfo_3798B4C *)Method_System_Collections_Generic_List_ServantVoiceData____Contains__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                items = v7->fields._items;
                v19 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v7->fields._version;
                if ( !items )
                  goto LABEL_22;
                size = v7->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v7,
                    &infos->obj,
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
                }
                else
                {
                  v21 = &items->obj.klass + size;
                  v7->fields._size = size + 1;
                  v21[4] = (Il2CppClass *)infos;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 4), (int32_t)infos, v16, v17);
                }
              }
            }
            scriptJson = this->fields.scriptJson;
            ++v11;
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v12; // x22
  int max_length; // w9
  Il2CppObject *v14; // x1
  _QWORD *monitor; // x8
  __int64 v16; // x9
  __int64 v17; // x8
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4C38469 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C38469 = 1;
  }
  if ( this->fields.type != type )
    return 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_21:
    sub_1C32E7C(Instance);
  }
  v12 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v12 >= max_length )
      return (System_Collections_Generic_List_SvtVoiceInfo__o *)v7;
    if ( (unsigned int)v12 >= max_length )
      goto LABEL_24;
    v14 = (Il2CppObject *)scriptJson->m_Items[v12];
    if ( !v14 )
      goto LABEL_21;
    monitor = v14[4].monitor;
    if ( monitor )
    {
      v16 = monitor[3];
      if ( v16 )
      {
        if ( !(_DWORD)v16 )
LABEL_24:
          sub_1C32E84(Instance);
        v17 = monitor[4];
        if ( !v17 )
          goto LABEL_21;
        if ( *(_DWORD *)(v17 + 16) == condType )
        {
          if ( !v7 )
            goto LABEL_21;
          items = v7->fields._items;
          v19 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
          ++v7->fields._version;
          if ( !items )
            goto LABEL_21;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              v14,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v14;
            sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v14, v9, v10);
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v12;
    if ( !scriptJson )
      goto LABEL_21;
  }
}


ServantVoiceCond_array *ServantVoiceEntity__getConds(
        ServantVoiceEntity_o *this,
        int32_t type,
        System_String_o *labelName,
        const MethodInfo *method)
{
  ServantVoiceEntity_o *v6; // x20
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t max_length; // x9
  SvtVoiceInfo_o *v9; // x8
  unsigned int v11; // w21
  unsigned int v12; // w9
  SvtVoiceInfo_o *v13; // x22
  struct ServantVoiceData_array *infos; // x23
  int v15; // w9
  __int64 v16; // x24
  ServantVoiceData_o *v17; // x8

  v6 = this;
  if ( (byte_4C3846E & 1) == 0 )
  {
    this = (ServantVoiceEntity_o *)sub_1C32C20(&StringLiteral_16128/*"_B050"*/);
    byte_4C3846E = 1;
  }
  if ( v6->fields.type == type )
  {
    if ( !labelName )
      goto LABEL_25;
    this = (ServantVoiceEntity_o *)System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16128/*"_B050"*/, 0);
    scriptJson = v6->fields.scriptJson;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !scriptJson )
        goto LABEL_25;
      max_length = scriptJson->max_length;
      if ( max_length )
      {
        if ( !(_DWORD)max_length )
LABEL_28:
          sub_1C32E84(this);
        v9 = scriptJson->m_Items[0];
        if ( v9 )
          return v9->fields.conds;
LABEL_25:
        sub_1C32E7C(this);
      }
    }
    else
    {
      if ( !scriptJson )
        goto LABEL_25;
      v11 = 0;
      while ( 1 )
      {
        v12 = scriptJson->max_length;
        if ( (int)v11 >= (int)v12 )
          break;
        if ( v11 >= v12 )
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
            v16 = 0;
            while ( 1 )
            {
              if ( (unsigned int)v16 >= v15 )
                goto LABEL_28;
              v17 = infos->m_Items[v16];
              if ( !v17 )
                goto LABEL_25;
              this = (ServantVoiceEntity_o *)System_String__Equals_63553848(labelName, v17->fields.id, 0);
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
  return 0;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getCostumeCombineVoiceList(
        ServantVoiceEntity_o *this,
        int32_t costumeId,
        int32_t genderType,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6

  return ServantVoiceEntity__getVoiceList_42697056(this, 2, 23, costumeId, 0, genderType, v4);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getCostumeGetVoiceList(
        ServantVoiceEntity_o *this,
        int32_t costumeId,
        System_String_o *playVoiceLabel,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6

  return ServantVoiceEntity__getVoiceList_42697056(this, 2, 23, costumeId, playVoiceLabel, -1, v4);
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned int v8; // w21
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v10; // x23
  struct ServantVoiceCond_array *conds; // x24
  il2cpp_array_size_t v12; // x9
  __int64 v13; // x25
  ServantVoiceCond_o *v14; // x8
  Il2CppObject *p_obj; // x1
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4C3847D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_4C3847D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_23:
    sub_1C32E7C(v4);
  v8 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v8 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v3;
    if ( v8 >= max_length )
LABEL_25:
      sub_1C32E84(v4);
    v10 = scriptJson->m_Items[v8];
    if ( v10 )
    {
      conds = v10->fields.conds;
      if ( conds )
      {
        v12 = conds->max_length;
        if ( v12 )
        {
          if ( (int)v12 >= 1 )
          {
            v13 = 0;
            do
            {
              if ( (unsigned int)v13 >= (unsigned int)v12 )
                goto LABEL_25;
              v14 = conds->m_Items[v13];
              if ( !v14 )
                goto LABEL_23;
              if ( v14->fields.condType == 15 )
              {
                if ( !v3 )
                  goto LABEL_23;
                p_obj = &v10->fields.infos->obj;
                items = v3->fields._items;
                v17 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v3->fields._version;
                if ( !items )
                  goto LABEL_23;
                size = v3->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v3,
                    p_obj,
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
                }
                else
                {
                  v19 = &items->obj.klass + size;
                  v3->fields._size = size + 1;
                  v19[4] = (Il2CppClass *)p_obj;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 4), (int32_t)p_obj, v5, v6);
                }
              }
              LODWORD(v12) = conds->max_length;
              ++v13;
            }
            while ( (int)v13 < (int)v12 );
            scriptJson = this->fields.scriptJson;
          }
        }
      }
      ++v8;
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct SvtVoiceInfo_array *scriptJson; // x8
  DataManager_o *v7; // x21
  unsigned int v8; // w22
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v10; // x27
  struct ServantVoiceCond_array *conds; // x28
  il2cpp_array_size_t v12; // x8
  __int64 i; // x29
  ServantVoiceCond_o *v14; // x23
  int32_t condType; // w8
  Il2CppObject *p_obj; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  Il2CppObject *v21; // x1
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4C3847C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3847C = 1;
  }
  v2 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (DataManager_o *)NetworkManager__getTime(0);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_38:
    sub_1C32E7C(Time);
  v7 = Time;
  v8 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v8 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v2;
    if ( v8 >= max_length )
LABEL_40:
      sub_1C32E84(Time);
    v10 = scriptJson->m_Items[v8];
    if ( !v10 )
      goto LABEL_38;
    conds = v10->fields.conds;
    if ( conds && (v12 = conds->max_length) != 0 )
    {
      if ( (int)v12 >= 1 )
      {
        for ( i = 0; (int)i < (int)v12; ++i )
        {
          if ( (unsigned int)i >= (unsigned int)v12 )
            goto LABEL_40;
          v14 = conds->m_Items[i];
          Time = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Time )
            goto LABEL_38;
          Time = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Time,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
          if ( !v14 || !Time )
            goto LABEL_38;
          Time = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                                    v14->fields.value,
                                    (const MethodInfo_3396838 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
          if ( Time )
          {
            condType = v14->fields.condType;
            if ( (__int64)Time->fields.lockCountObj <= (__int64)v7 )
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
            p_obj = &v10->fields.infos->obj;
            items = v2->fields._items;
            v18 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v2->fields._version;
            if ( !items )
              goto LABEL_38;
            size = v2->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v2,
                p_obj,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v2->fields._size = size + 1;
              v20[4] = (Il2CppClass *)p_obj;
              sub_1C32BC4((CGThumbnailListItem_o *)(v20 + 4), (int32_t)p_obj, v4, v5);
            }
          }
LABEL_30:
          LODWORD(v12) = conds->max_length;
        }
      }
    }
    else
    {
      if ( !v2 )
        goto LABEL_38;
      v21 = &v10->fields.infos->obj;
      v22 = v2->fields._items;
      v23 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v2->fields._version;
      if ( !v22 )
        goto LABEL_38;
      v24 = v2->fields._size;
      if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v2,
          v21,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &v22->obj.klass + v24;
        v2->fields._size = v24 + 1;
        v25[4] = (Il2CppClass *)v21;
        sub_1C32BC4((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v21, v4, v5);
      }
    }
    ++v8;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_38;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getEventRewardVoiceList_42708732(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_42697784(this, 5, labelName, 0, 1, v3);
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
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  __int64 v12; // x10
  __int64 v13; // x10
  System_Collections_Generic_List_T__o *v14; // x23
  struct System_Object_array *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned int v21; // w21
  unsigned int max_length; // w9
  Il2CppObject *v23; // x27
  _BOOL4 v24; // w24
  _QWORD *monitor; // x26
  __int64 v26; // x8
  __int64 v27; // x19
  __int64 v28; // x20
  int32_t v29; // w28
  int64_t v30; // x29
  int v31; // w8
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  _BOOL8 v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *current; // x19
  _DWORD *v40; // x20
  int v41; // w8
  unsigned int v42; // w21
  __int64 v43; // x8
  Il2CppObject *klass; // x1
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  System_Collections_Generic_List_object__o *v50; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_List_object__o *v51; // [xsp+10h] [xbp-C0h]
  int64_t v52; // [xsp+18h] [xbp-B8h]
  System_Collections_Generic_List_T__o *v55; // [xsp+30h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+50h] [xbp-80h] BYREF

  v6 = isEventDateCondOnly;
  if ( (byte_4C38483 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_VoiceCondType_Type__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C38483 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  v50 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v50,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v7 = (System_Collections_Generic_List_T__o *)sub_1C32E6C(System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v7,
    (const MethodInfo_377D770 *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
  if ( !v7 )
    goto LABEL_54;
  items = v7->fields._items;
  v10 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_54;
  size = v7->fields._size;
  v55 = v7;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      14,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v7->fields._items;
    v10 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
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
  v12 = v7->fields._size;
  if ( (unsigned int)v12 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      13,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v7->fields._items;
    v10 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_54;
  }
  else
  {
    v7->fields._size = v12 + 1;
    *((_DWORD *)items->m_Items + v12) = 13;
    ++v7->fields._version;
  }
  v13 = v7->fields._size;
  if ( (unsigned int)v13 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v7,
      19,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = v13 + 1;
    *((_DWORD *)items->m_Items + v13) = 19;
  }
  v14 = (System_Collections_Generic_List_T__o *)sub_1C32E6C(System_Collections_Generic_List_VoiceCondType_Type__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v14,
    (const MethodInfo_377D770 *)Method_System_Collections_Generic_List_VoiceCondType_Type___ctor__);
  if ( !v6 )
  {
    if ( !v14 )
      goto LABEL_54;
    v15 = v14->fields._items;
    v16 = Method_System_Collections_Generic_List_VoiceCondType_Type__Add__;
    ++v14->fields._version;
    if ( !v15 )
      goto LABEL_54;
    v17 = v14->fields._size;
    if ( (unsigned int)v17 >= LODWORD(v15->max_length) )
    {
      System_Collections_Generic_List_Int32Enum___AddWithResize(
        v14,
        checkCondType,
        *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v14->fields._size = v17 + 1;
      *((_DWORD *)v15->m_Items + v17) = checkCondType;
    }
  }
  v51 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v51,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v52 = Time;
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_54;
  v21 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v21 >= (int)max_length )
      break;
    if ( v21 >= max_length )
      goto LABEL_78;
    v23 = (Il2CppObject *)scriptJson->m_Items[v21];
    if ( !v23 )
      goto LABEL_54;
    v24 = v6;
    monitor = v23[4].monitor;
    if ( monitor )
    {
      v26 = monitor[3];
      if ( v26 )
      {
        if ( (int)v26 >= 1 )
        {
          v27 = 0;
          while ( (unsigned int)v27 < (unsigned int)v26 )
          {
            v28 = monitor[v27 + 4];
            if ( !v28 )
              goto LABEL_54;
            v29 = *(_DWORD *)(v28 + 16);
            Time = System_Collections_Generic_List_Int32Enum___Contains(
                     v55,
                     v29,
                     (const MethodInfo_377E33C *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) == 0 )
            {
              if ( !v14 )
                goto LABEL_54;
              Time = System_Collections_Generic_List_Int32Enum___Contains(
                       v14,
                       v29,
                       (const MethodInfo_377E33C *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
              if ( (Time & 1) == 0 )
                goto LABEL_53;
            }
            Time = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Time )
              goto LABEL_54;
            Time = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Time,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
            if ( !Time )
              goto LABEL_54;
            Time = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Time,
                              *(_DWORD *)(v28 + 20),
                              (const MethodInfo_3396838 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
            if ( !Time || *(_DWORD *)(v28 + 20) != eventId )
              goto LABEL_53;
            v30 = Time;
            Time = System_Collections_Generic_List_Int32Enum___Contains(
                     v55,
                     v29,
                     (const MethodInfo_377E33C *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
            if ( (Time & 1) != 0 )
            {
              v31 = *(_QWORD *)(v30 + 96) <= v52 ? 13 : 14;
              if ( v29 == 19 )
                v31 = 19;
              if ( v29 != v31 )
                goto LABEL_53;
            }
            LODWORD(v26) = *((_DWORD *)monitor + 6);
            if ( (int)++v27 >= (int)v26 )
              goto LABEL_48;
          }
LABEL_78:
          sub_1C32E84(Time);
        }
LABEL_48:
        if ( !v51 )
          goto LABEL_54;
        v32 = v51->fields._items;
        v33 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
        ++v51->fields._version;
        if ( !v32 )
          goto LABEL_54;
        v34 = v51->fields._size;
        if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v51,
            v23,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &v32->obj.klass + v34;
          v51->fields._size = v34 + 1;
          v35[4] = (Il2CppClass *)v23;
          sub_1C32BC4((CGThumbnailListItem_o *)(v35 + 4), (int32_t)v23, v18, v19);
        }
      }
    }
LABEL_53:
    ++v21;
    v6 = v24;
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_54;
  }
  Time = (int64_t)v51;
  if ( !v51 )
LABEL_54:
    sub_1C32E7C(Time);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v56,
    v51,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_SvtVoiceInfo__GetEnumerator__);
  v57 = v56;
LABEL_57:
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v57,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__MoveNext__);
    if ( !v36 )
      break;
    current = v57.fields._current;
    if ( !v57.fields._current )
      sub_1C32E7C(v36);
    v40 = v57.fields._current[4].monitor;
    if ( !v40 )
      sub_1C32E7C(v36);
    v41 = v40[6];
    if ( v41 >= 1 )
    {
      v42 = 0;
      while ( 1 )
      {
        if ( v42 >= v41 )
          sub_1C32E84(v36);
        v43 = *(_QWORD *)&v40[2 * v42 + 8];
        if ( !v43 )
          sub_1C32E7C(v36);
        if ( v6 )
          break;
        if ( !v14 )
          sub_1C32E7C(v36);
        v36 = System_Collections_Generic_List_Int32Enum___Contains(
                v14,
                *(_DWORD *)(v43 + 16),
                (const MethodInfo_377E33C *)Method_System_Collections_Generic_List_VoiceCondType_Type__Contains__);
        if ( v36 )
          break;
        v41 = v40[6];
        if ( (int)++v42 >= v41 )
          goto LABEL_57;
      }
      if ( !v50 )
        sub_1C32E7C(v36);
      klass = (Il2CppObject *)current[4].klass;
      v45 = v50->fields._items;
      v46 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v50->fields._version;
      if ( !v45 )
        sub_1C32E7C(v36);
      v47 = v50->fields._size;
      if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v50,
          klass,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &v45->obj.klass + v47;
        v50->fields._size = v47 + 1;
        v48[4] = (Il2CppClass *)klass;
        sub_1C32BC4((CGThumbnailListItem_o *)(v48 + 4), (int32_t)klass, v37, v38);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v57,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_SvtVoiceInfo__Dispose__);
  return (System_Collections_Generic_List_ServantVoiceData____o *)v50;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getEventShopVoiceList_42711568(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_42697784(this, 9, labelName, 0, 1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getEventShopWelcomeVoiceList(
        ServantVoiceEntity_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return ServantVoiceEntity__getEventShopVoiceList(this, 1, eventId, 18, v3);
}


ServantVoiceData_array *ServantVoiceEntity__getEventVoiceListByName(
        ServantVoiceEntity_o *this,
        System_String_o *id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ServantVoiceData____o *EventRewardVoiceList; // x0
  _BOOL8 v6; // x0
  Il2CppObject *current; // x20
  int monitor; // w8
  unsigned int v9; // w23
  __int64 v10; // x8
  System_String_o *v11; // x0
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C38481 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    byte_4C38481 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  EventRewardVoiceList = ServantVoiceEntity__getEventRewardVoiceList(this, (const MethodInfo *)id);
  if ( !EventRewardVoiceList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)EventRewardVoiceList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v14 = v13;
  do
  {
LABEL_5:
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v6 )
    {
      current = 0;
      goto LABEL_16;
    }
    current = v14.fields._current;
    if ( !v14.fields._current )
      sub_1C32E7C(v6);
    monitor = (int)v14.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= monitor )
      sub_1C32E84(v6);
    v10 = *((_QWORD *)&current[2].klass + (int)v9);
    if ( !v10 )
      sub_1C32E7C(v6);
    v11 = *(System_String_o **)(v10 + 16);
    if ( !v11 )
      sub_1C32E7C(0);
    v6 = System_String__Equals_63553848(v11, id, 0);
    if ( v6 )
      break;
    monitor = (int)current[1].monitor;
    if ( (int)++v9 >= monitor )
      goto LABEL_5;
  }
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  return (ServantVoiceData_array *)current;
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
  const MethodInfo *v7; // x5
  struct System_Object_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10

  if ( (byte_4C38472 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    byte_4C38472 = 1;
  }
  v5 = (System_Collections_Generic_List_T__o *)sub_1C32E6C(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v5,
    (const MethodInfo_377D770 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v5
    || (items = v5->fields._items,
        v9 = Method_System_Collections_Generic_List_CondType_Kind__Add__,
        ++v5->fields._version,
        !items) )
  {
    sub_1C32E7C(v6);
  }
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      81,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  return ServantVoiceEntity__getVoiceList_42697784(
           this,
           1,
           labelName,
           (System_Collections_Generic_List_CondType_Kind__o *)v5,
           0,
           v7);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getLevelUpVoiceList(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( this->fields.type == 2 && !System_String__IsNullOrEmpty(labelName, 0) )
    return ServantVoiceEntity__getVoiceList_42697784(this, 2, labelName, 0, 0, v5);
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
  const MethodInfo *v7; // x5
  struct System_Object_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10

  if ( (byte_4C38473 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    byte_4C38473 = 1;
  }
  v5 = (System_Collections_Generic_List_T__o *)sub_1C32E6C(System_Collections_Generic_List_CondType_Kind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v5,
    (const MethodInfo_377D770 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
  if ( !v5
    || (items = v5->fields._items,
        v9 = Method_System_Collections_Generic_List_CondType_Kind__Add__,
        ++v5->fields._version,
        !items) )
  {
    sub_1C32E7C(v6);
  }
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      81,
      *(const MethodInfo_377DFC4 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
  }
  return ServantVoiceEntity__getVoiceList_42697784(
           this,
           2,
           labelName,
           (System_Collections_Generic_List_CondType_Kind__o *)v5,
           0,
           v7);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getMasterMissionActionVoiceList(
        ServantVoiceEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  _BOOL8 isQuestClearState; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x3
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned int v8; // w21
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v10; // x23
  struct ServantVoiceCond_array *conds; // x24
  il2cpp_array_size_t v12; // x10
  __int64 v13; // x25
  char v14; // w27
  char v15; // w8
  char v16; // w9
  ServantVoiceCond_o *v17; // x10
  int32_t condType; // w11
  Il2CppObject *p_obj; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4C3847E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_4C3847E = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_34;
  v8 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v8 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v3;
    if ( v8 >= max_length )
LABEL_36:
      sub_1C32E84(isQuestClearState);
    v10 = scriptJson->m_Items[v8];
    if ( !v10 )
      goto LABEL_34;
    conds = v10->fields.conds;
    if ( conds )
    {
      v12 = conds->max_length;
      if ( v12 )
      {
        if ( (int)v12 >= 1 )
        {
          v13 = 0;
          v14 = 0;
          v15 = 0;
          v16 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v13 >= (unsigned int)v12 )
              goto LABEL_36;
            v17 = conds->m_Items[v13];
            if ( !v17 )
              goto LABEL_34;
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
                                        v5);
                  if ( isQuestClearState )
                    goto LABEL_33;
                  v15 = 0;
                  goto LABEL_27;
                }
                if ( (v14 & 1) == 0 )
                  goto LABEL_33;
                isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                      (ServantVoiceEntity_o *)isQuestClearState,
                                      v17->fields.value,
                                      v5);
                if ( isQuestClearState )
                  goto LABEL_33;
                break;
              case 6:
                isQuestClearState = ServantVoiceEntity__isQuestClearState(
                                      (ServantVoiceEntity_o *)isQuestClearState,
                                      v17->fields.value,
                                      v5);
                if ( !isQuestClearState )
                  goto LABEL_33;
                break;
              default:
                if ( (v16 & 1) == 0 )
                  goto LABEL_33;
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
                p_obj = &v10->fields.infos->obj;
                items = v3->fields._items;
                v21 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v3->fields._version;
                if ( items )
                {
                  size = v3->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v3,
                      p_obj,
                      *(const MethodInfo_37987BC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v23 = &items->obj.klass + size;
                    v3->fields._size = size + 1;
                    v23[4] = (Il2CppClass *)p_obj;
                    sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 4), (int32_t)p_obj, (int32_t)v5, v6);
                  }
                  break;
                }
              }
LABEL_34:
              sub_1C32E7C(isQuestClearState);
            }
          }
        }
      }
    }
LABEL_33:
    scriptJson = this->fields.scriptJson;
    ++v8;
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


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getMasterMissionVoiceList_42709244(
        ServantVoiceEntity_o *this,
        System_String_o *labelName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ServantVoiceEntity__getVoiceList_42697784(this, 8, labelName, 0, 1, v3);
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
  Il2CppObject *MasterData_object; // x22
  int32_t FriendShipRank; // w0
  int v22; // w22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x1
  int32_t version; // w10
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned int v32; // w24
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v34; // x27
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v36; // x8
  struct ServantVoiceCond_array *conds; // x8
  il2cpp_array_size_t v38; // x9
  ServantVoiceCond_o *v39; // x10
  int v40; // w10
  ServantVoiceCond_o *v41; // x12
  int32_t condType; // w13
  bool v43; // w12
  Il2CppObject *p_obj; // x1
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  int32_t id; // w26
  int32_t v51; // w25

  if ( (byte_4C3846A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&ServantLimitUpVoiceCache_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3846A = 1;
  }
  if ( this->fields.type != type )
    return 0;
  v13 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  v15 = ServantVoiceEntity__GetChangeLimitVoiceFriendshipLv(this, v14);
  v17 = v15 - 1;
  if ( v15 < 1 )
    goto LABEL_15;
  v18 = v15;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_72;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
    v22 = FriendShipRank;
    if ( displayType )
    {
      id = this->fields.id;
      if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
      if ( ServantLimitUpVoiceCache__IsLimitUpVoiceNormal(displayType, id, 0) )
        v22 = v17;
      if ( isPlayVoice )
      {
        v51 = this->fields.id;
        if ( !ServantLimitUpVoiceCache_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantLimitUpVoiceCache_TypeInfo);
        ServantLimitUpVoiceCache__UpdateLimitUpVoice(displayType, v51, 0);
      }
    }
  }
  else
  {
LABEL_15:
    v22 = -1;
  }
  Instance = ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v16);
  if ( Instance )
  {
    if ( !v13 )
      goto LABEL_72;
    v25 = (Il2CppObject *)*((_QWORD *)Instance + 8);
    version = v13->fields._version;
    items = v13->fields._items;
    v28 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
LABEL_19:
    v13->fields._version = version + 1;
    if ( !items )
      goto LABEL_72;
    size = v13->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v13,
        v25,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &items->obj.klass + size;
      v13->fields._size = size + 1;
      v30[4] = (Il2CppClass *)v25;
      sub_1C32BC4((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v25, v23, v24);
    }
  }
  else
  {
    scriptJson = this->fields.scriptJson;
    if ( !scriptJson )
      goto LABEL_72;
    v32 = 0;
    while ( 1 )
    {
      max_length = scriptJson->max_length;
      if ( (int)v32 >= (int)max_length )
        break;
      if ( v32 >= max_length )
        goto LABEL_73;
      v34 = scriptJson->m_Items[v32];
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_72;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      if ( !v34 )
        goto LABEL_72;
      infos = v34->fields.infos;
      if ( !infos )
        goto LABEL_72;
      if ( !LODWORD(infos->max_length) )
        goto LABEL_73;
      v36 = infos->m_Items[0];
      if ( !v36 || !Instance )
        goto LABEL_72;
      Instance = (void *)VoicePlayCondMaster__isVoicePlay(
                           (VoicePlayCondMaster_o *)Instance,
                           this->fields.id,
                           v36->fields.id,
                           0,
                           -1,
                           genderType,
                           0,
                           0,
                           0);
      conds = v34->fields.conds;
      if ( conds )
      {
        v38 = conds->max_length;
        if ( v38 )
        {
          if ( !(_DWORD)v38 )
LABEL_73:
            sub_1C32E84(Instance);
          v39 = conds->m_Items[0];
          if ( !v39 )
            goto LABEL_72;
          if ( v39->fields.condType != 11 )
            goto LABEL_52;
          if ( v22 != -1 && (_DWORD)v38 != 1 )
          {
            if ( (int)v38 < 1 )
              goto LABEL_52;
            v40 = 0;
            while ( 1 )
            {
              v41 = conds->m_Items[v40];
              if ( !v41 )
                goto LABEL_72;
              condType = v41->fields.condType;
              if ( condType == 20 )
              {
                v43 = v41->fields.value <= v22;
              }
              else
              {
                if ( condType == 22 && v41->fields.value >= v22 && ((unsigned __int8)Instance & 1) != 0 )
                {
LABEL_54:
                  if ( v13 )
                  {
                    p_obj = &v34->fields.infos->obj;
                    v45 = v13->fields._items;
                    v46 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                    ++v13->fields._version;
                    if ( v45 )
                    {
                      v47 = v13->fields._size;
                      if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v13,
                          p_obj,
                          *(const MethodInfo_37987BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v48 = &v45->obj.klass + v47;
                        v13->fields._size = v47 + 1;
                        v48[4] = (Il2CppClass *)p_obj;
                        sub_1C32BC4((CGThumbnailListItem_o *)(v48 + 4), (int32_t)p_obj, v23, v24);
                      }
                      goto LABEL_52;
                    }
                  }
LABEL_72:
                  sub_1C32E7C(Instance);
                }
                v43 = 0;
              }
              if ( (v43 & (unsigned __int8)Instance & 1) != 0 )
                goto LABEL_54;
              if ( (_DWORD)v38 == ++v40 )
                goto LABEL_52;
            }
          }
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_52;
          if ( !v13 )
            goto LABEL_72;
          v25 = &v34->fields.infos->obj;
          version = v13->fields._version;
          items = v13->fields._items;
          v28 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
          goto LABEL_19;
        }
      }
LABEL_52:
      scriptJson = this->fields.scriptJson;
      ++v32;
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
  _BOOL8 v6; // x0
  Il2CppObject *current; // x20
  int monitor; // w8
  unsigned int v9; // w23
  __int64 v10; // x8
  System_String_o *v11; // x0
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C38482 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    byte_4C38482 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  VoiceList = ServantVoiceEntity__getVoiceList(this, 8, method);
  if ( !VoiceList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)VoiceList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
  v14 = v13;
  do
  {
LABEL_5:
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    if ( !v6 )
    {
      current = 0;
      goto LABEL_16;
    }
    current = v14.fields._current;
    if ( !v14.fields._current )
      sub_1C32E7C(v6);
    monitor = (int)v14.fields._current[1].monitor;
  }
  while ( monitor < 1 );
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= monitor )
      sub_1C32E84(v6);
    v10 = *((_QWORD *)&current[2].klass + (int)v9);
    if ( !v10 )
      sub_1C32E7C(v6);
    v11 = *(System_String_o **)(v10 + 16);
    if ( !v11 )
      sub_1C32E7C(0);
    v6 = System_String__Equals_63553848(v11, id, 0);
    if ( v6 )
      break;
    monitor = (int)current[1].monitor;
    if ( (int)++v9 >= monitor )
      goto LABEL_5;
  }
LABEL_16:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
  return (ServantVoiceData_array *)current;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getMyRoomFriendShipVoiceList(
        ServantVoiceEntity_o *this,
        int32_t friendShipRank,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *v9; // x23
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned int v11; // w25
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v13; // x24
  struct ServantVoiceData_array *infos; // x9
  struct ServantVoiceCond_array *conds; // x8
  __int64 v16; // x27
  int v17; // w9
  ServantVoiceCond_o *v18; // x8
  struct ServantVoiceData_array *v19; // x8
  ServantVoiceData_o *v20; // x8
  const MethodInfo *v21; // x4
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *p_obj; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4C38470 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C38470 = 1;
  }
  if ( this->fields.type != 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantVoiceData____TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v9,
          (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_34:
    sub_1C32E7C(Instance);
  }
  v11 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v11 >= (int)max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v9;
    if ( v11 >= max_length )
LABEL_37:
      sub_1C32E84(Instance);
    v13 = scriptJson->m_Items[v11];
    if ( v13 )
    {
      infos = v13->fields.infos;
      if ( infos && infos->max_length )
      {
        conds = v13->fields.conds;
        if ( !conds )
          goto LABEL_34;
        v16 = 0;
        while ( 1 )
        {
          v17 = conds->max_length;
          if ( (int)v16 >= v17 )
            break;
          if ( (unsigned int)v16 >= v17 )
            goto LABEL_37;
          v18 = conds->m_Items[v16];
          if ( !v18 )
            goto LABEL_34;
          if ( v18->fields.condType == 3 && v18->fields.value == friendShipRank )
          {
            v19 = v13->fields.infos;
            if ( !v19 )
              goto LABEL_34;
            if ( !LODWORD(v19->max_length) )
              goto LABEL_37;
            v20 = v19->m_Items[0];
            if ( !v20 || !MasterData_object )
              goto LABEL_34;
            Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(
                                         (VoicePlayCondMaster_o *)MasterData_object,
                                         this->fields.id,
                                         v20->fields.id,
                                         0,
                                         -1,
                                         -1,
                                         0,
                                         0,
                                         0);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (Il2CppObject *)ServantVoiceEntity__isAvailableMyRoomVoice(this, v13, imageLimitCount, 1, v21);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                if ( !v9 )
                  goto LABEL_34;
                p_obj = &v13->fields.infos->obj;
                items = v9->fields._items;
                v26 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v9->fields._version;
                if ( !items )
                  goto LABEL_34;
                size = v9->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v9,
                    p_obj,
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
                }
                else
                {
                  v28 = &items->obj.klass + size;
                  v9->fields._size = size + 1;
                  v28[4] = (Il2CppClass *)p_obj;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v28 + 4), (int32_t)p_obj, v22, v23);
                }
              }
            }
          }
          conds = v13->fields.conds;
          ++v16;
          if ( !conds )
            goto LABEL_34;
        }
        scriptJson = this->fields.scriptJson;
      }
      ++v11;
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
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v7; // x22
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v9; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v11; // x23
  struct ServantVoiceData_array *infos; // x8
  il2cpp_array_size_t v13; // x9
  ServantVoiceData_o *v14; // x8
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x4
  struct ServantVoiceCond_array *conds; // x8
  Il2CppObject *p_obj; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4C3846F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3846F = 1;
  }
  if ( this->fields.type != 1 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantVoiceData____TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v7,
          (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_25:
    sub_1C32E7C(Instance);
  }
  v9 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v9 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v7;
    if ( (unsigned int)v9 >= max_length )
      goto LABEL_28;
    v11 = scriptJson->m_Items[v9];
    if ( !v11 )
      goto LABEL_25;
    infos = v11->fields.infos;
    if ( infos )
    {
      v13 = infos->max_length;
      if ( v13 )
      {
        if ( !(_DWORD)v13 )
LABEL_28:
          sub_1C32E84(Instance);
        v14 = infos->m_Items[0];
        if ( !v14 || !MasterData_object )
          goto LABEL_25;
        Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(
                                     (VoicePlayCondMaster_o *)MasterData_object,
                                     this->fields.id,
                                     v14->fields.id,
                                     0,
                                     -1,
                                     -1,
                                     0,
                                     0,
                                     0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          conds = v11->fields.conds;
          if ( !conds )
            goto LABEL_25;
          if ( SLODWORD(conds->max_length) < 1
            || (Instance = (Il2CppObject *)ServantVoiceEntity__isAvailableMyRoomVoice(
                                             this,
                                             v11,
                                             imageLimitCount,
                                             0,
                                             v17),
                ((unsigned __int8)Instance & 1) != 0) )
          {
            if ( !v7 )
              goto LABEL_25;
            p_obj = &v11->fields.infos->obj;
            items = v7->fields._items;
            v21 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v7->fields._version;
            if ( !items )
              goto LABEL_25;
            size = v7->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v7,
                p_obj,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v7->fields._size = size + 1;
              v23[4] = (Il2CppClass *)p_obj;
              sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 4), (int32_t)p_obj, v15, v16);
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v9;
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

  return ServantVoiceEntity__getVoiceList_42697784(this, 7, labelName, 0, 1, v3);
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
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  _BOOL8 v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t max_length; // x9
  SvtVoiceInfo_o *v27; // x24
  ServantVoiceCond_array *v28; // x1
  System_String_o *v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_String_o *v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w8
  unsigned int v36; // w28
  unsigned int v37; // w9
  SvtVoiceInfo_o *v38; // x26
  struct ServantVoiceData_array *infos; // x9
  __int64 v40; // x29
  int v41; // w8
  ServantVoiceData_o *v42; // x8
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  ServantVoiceCond_array *v45; // x1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  System_String_o *materialOverwriteName; // x1
  System_String_o *v49; // x1
  System_String_o *v50; // x1

  if ( (byte_4C3846D & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16128/*"_B050"*/);
    byte_4C3846D = 1;
  }
  *conds = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)conds, 0, (int32_t)labelName, (const MethodInfo *)conds);
  *isInvalidVoiceList = 0;
  *overwriteName = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)overwriteName, 0, v18, v19);
  *overwriteNameDefault = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)overwriteNameDefault, 0, v20, v21);
  *overwritePriority = 0;
  if ( this->fields.type != type )
    return;
  if ( !labelName )
    goto LABEL_26;
  v22 = System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16128/*"_B050"*/, 0);
  scriptJson = this->fields.scriptJson;
  if ( v22 )
  {
    if ( scriptJson )
    {
      max_length = scriptJson->max_length;
      if ( !max_length )
        return;
      if ( !(_DWORD)max_length )
LABEL_33:
        sub_1C32E84(v22);
      v27 = scriptJson->m_Items[0];
      if ( v27 )
      {
        v28 = v27->fields.conds;
        *conds = v28;
        sub_1C32BC4((CGThumbnailListItem_o *)conds, (int32_t)v28, v23, v24);
        *isInvalidVoiceList = v27->fields.isInvalidVoiceList;
        v29 = v27->fields.overwriteName;
        *overwriteName = v29;
        sub_1C32BC4((CGThumbnailListItem_o *)overwriteName, (int32_t)v29, v30, v31);
        v32 = v27->fields.overwriteNameDefault;
        *overwriteNameDefault = v32;
        sub_1C32BC4((CGThumbnailListItem_o *)overwriteNameDefault, (int32_t)v32, v33, v34);
        v35 = v27->fields.overwritePriority;
        goto LABEL_31;
      }
    }
LABEL_26:
    sub_1C32E7C(v22);
  }
  if ( !scriptJson )
    goto LABEL_26;
  v36 = 0;
  while ( 1 )
  {
    v37 = scriptJson->max_length;
    if ( (int)v36 >= (int)v37 )
      return;
    if ( v36 >= v37 )
      goto LABEL_33;
    v38 = scriptJson->m_Items[v36];
    if ( !v38 )
      goto LABEL_26;
    infos = v38->fields.infos;
    if ( infos )
      break;
LABEL_25:
    ++v36;
    if ( !scriptJson )
      goto LABEL_26;
  }
  v40 = 0;
  while ( 1 )
  {
    v41 = infos->max_length;
    if ( (int)v40 >= v41 )
    {
      scriptJson = this->fields.scriptJson;
      goto LABEL_25;
    }
    if ( (unsigned int)v40 >= v41 )
      goto LABEL_33;
    v42 = infos->m_Items[v40];
    if ( !v42 )
      goto LABEL_26;
    v22 = System_String__Equals_63553848(labelName, v42->fields.id, 0);
    if ( v22 )
      break;
    infos = v38->fields.infos;
    ++v40;
    if ( !infos )
      goto LABEL_26;
  }
  v45 = v38->fields.conds;
  *conds = v45;
  sub_1C32BC4((CGThumbnailListItem_o *)conds, (int32_t)v45, v43, v44);
  *isInvalidVoiceList = v38->fields.isInvalidVoiceList;
  if ( !isMaterial
    || (materialOverwriteName = v38->fields.materialOverwriteName,
        *overwriteName = materialOverwriteName,
        sub_1C32BC4((CGThumbnailListItem_o *)overwriteName, (int32_t)materialOverwriteName, v46, v47),
        System_String__IsNullOrEmpty(*overwriteName, 0)) )
  {
    v49 = v38->fields.overwriteName;
    *overwriteName = v49;
    sub_1C32BC4((CGThumbnailListItem_o *)overwriteName, (int32_t)v49, v46, v47);
  }
  v50 = v38->fields.overwriteNameDefault;
  *overwriteNameDefault = v50;
  sub_1C32BC4((CGThumbnailListItem_o *)overwriteNameDefault, (int32_t)v50, v46, v47);
  v35 = v38->fields.overwritePriority;
LABEL_31:
  *overwritePriority = v35;
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getRankUpFriendShip(
        ServantVoiceEntity_o *this,
        int32_t friendShipRank,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x6

  return ServantVoiceEntity__getVoiceList_42697056(this, 1, 3, friendShipRank, 0, -1, v3);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getSpecificLimitCntUpVoiceList(
        ServantVoiceEntity_o *this,
        int32_t limitCount,
        System_String_o *playVoiceLabel,
        int32_t genderType,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return ServantVoiceEntity__getVoiceList_42697056(this, 2, 9, limitCount, playVoiceLabel, genderType, v5);
}


int32_t ServantVoiceEntity__getSvtIdfromVoiceAssetName(System_String_o *assetName, const MethodInfo *method)
{
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( !assetName
    || (assetName = (System_String_o *)System_String__Split(assetName, 0x5Fu, 0, 0), result = 0, !assetName) )
  {
    sub_1C32E7C(assetName);
  }
  if ( LODWORD(assetName[1].klass) != 2 )
    return 0;
  if ( System_Int32__TryParse(*(System_String_o **)&assetName[1].fields, &result, 0) )
    return result;
  return 0;
}


System_String_o *ServantVoiceEntity__getVoiceAssetName(ServantVoiceEntity_o *this, const MethodInfo *method)
{
  return ServantVoiceEntity__getVoiceAssetName_42693484(this->fields.id, method);
}


System_String_o *ServantVoiceEntity__getVoiceAssetName_42693484(int32_t svtId, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = svtId;
  if ( (byte_4C38465 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_4424/*"ChrVoice_"*/);
    byte_4C38465 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0);
  return System_String__Concat_63518544((System_String_o *)StringLiteral_4424/*"ChrVoice_"*/, v2, 0);
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getVoiceList(
        ServantVoiceEntity_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v10; // x21
  int max_length; // w9
  SvtVoiceInfo_o *v12; // x8
  Il2CppObject *p_obj; // x1
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4C38466 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    byte_4C38466 = 1;
  }
  if ( this->fields.type != type )
    return 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
LABEL_15:
    sub_1C32E7C(v6);
  v10 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v10 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v5;
    if ( (unsigned int)v10 >= max_length )
      sub_1C32E84(v6);
    v12 = scriptJson->m_Items[v10];
    if ( v12 )
    {
      if ( v5 )
      {
        p_obj = &v12->fields.infos->obj;
        items = v5->fields._items;
        v15 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
        ++v5->fields._version;
        if ( items )
        {
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              p_obj,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v17[4] = (Il2CppClass *)p_obj;
            sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 4), (int32_t)p_obj, v7, v8);
          }
          scriptJson = this->fields.scriptJson;
          ++v10;
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
  Il2CppObject *MasterData_object; // x23
  const MethodInfo *v14; // x2
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *saveNameList; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v23; // x24
  int max_length; // w9
  SvtVoiceInfo_o *v25; // x26
  struct ServantVoiceCond_array *conds; // x8
  il2cpp_array_size_t v27; // x9
  ServantVoiceCond_o *v28; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v30; // x8
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  Il2CppObject *p_obj; // x1
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0

  if ( (byte_4C38468 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C38468 = 1;
  }
  if ( this->fields.type != type )
    return 0;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  Instance = (DataManager_o *)ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v14);
  if ( Instance )
  {
    if ( v11 )
    {
      saveNameList = (Il2CppObject *)Instance->fields.saveNameList;
      items = v11->fields._items;
      v19 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v11->fields._version;
      if ( items )
      {
        size = v11->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            saveNameList,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v21[4] = (Il2CppClass *)saveNameList;
          sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 4), (int32_t)saveNameList, v15, v16);
        }
        return (System_Collections_Generic_List_ServantVoiceData____o *)v11;
      }
    }
LABEL_32:
    sub_1C32E7C(Instance);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_32;
  v23 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v23 >= max_length )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v11;
    if ( (unsigned int)v23 >= max_length )
      goto LABEL_35;
    v25 = scriptJson->m_Items[v23];
    if ( !v25 )
      goto LABEL_32;
    conds = v25->fields.conds;
    if ( conds )
    {
      v27 = conds->max_length;
      if ( v27 )
      {
        if ( !(_DWORD)v27 )
          goto LABEL_35;
        v28 = conds->m_Items[0];
        if ( !v28 )
          goto LABEL_32;
        if ( v28->fields.condType == condType )
        {
          infos = v25->fields.infos;
          if ( !infos )
            goto LABEL_32;
          if ( !LODWORD(infos->max_length) )
LABEL_35:
            sub_1C32E84(Instance);
          v30 = infos->m_Items[0];
          if ( !v30 || !MasterData_object )
            goto LABEL_32;
          Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(
                                        (VoicePlayCondMaster_o *)MasterData_object,
                                        this->fields.id,
                                        v30->fields.id,
                                        0,
                                        -1,
                                        genderType,
                                        0,
                                        0,
                                        0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v11 )
              goto LABEL_32;
            p_obj = &v25->fields.infos->obj;
            v34 = v11->fields._items;
            v35 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v11->fields._version;
            if ( !v34 )
              goto LABEL_32;
            v36 = v11->fields._size;
            if ( (unsigned int)v36 >= LODWORD(v34->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                p_obj,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v37 = &v34->obj.klass + v36;
              v11->fields._size = v36 + 1;
              v37[4] = (Il2CppClass *)p_obj;
              sub_1C32BC4((CGThumbnailListItem_o *)(v37 + 4), (int32_t)p_obj, v31, v32);
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v23;
    if ( !scriptJson )
      goto LABEL_32;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getVoiceList_42697056(
        ServantVoiceEntity_o *this,
        int32_t type,
        int32_t condType,
        int32_t condValue,
        System_String_o *playVoiceLabel,
        int32_t genderType,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_List_object__o *v15; // x23
  const MethodInfo *v16; // x2
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *saveNameList; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  struct SvtVoiceInfo_array *scriptJson; // x8
  unsigned __int64 v25; // x25
  unsigned __int64 max_length_low; // x9
  SvtVoiceInfo_o *v27; // x27
  struct ServantVoiceCond_array *conds; // x9
  __int64 v29; // x28
  int max_length; // w8
  ServantVoiceCond_o *v31; // x8
  struct ServantVoiceData_array *infos; // x8
  ServantVoiceData_o *v33; // x8
  Il2CppObject *p_obj; // x1
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0

  if ( (byte_4C3846B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3846B = 1;
  }
  if ( this->fields.type != type )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  Instance = (DataManager_o *)ServantVoiceEntity__GetPlayVoiceLabelInfo(this, playVoiceLabel, v16);
  if ( Instance )
  {
    if ( v15 )
    {
      saveNameList = (Il2CppObject *)Instance->fields.saveNameList;
      items = v15->fields._items;
      v21 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
      ++v15->fields._version;
      if ( items )
      {
        size = v15->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            saveNameList,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v23[4] = (Il2CppClass *)saveNameList;
          sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 4), (int32_t)saveNameList, v17, v18);
        }
        return (System_Collections_Generic_List_ServantVoiceData____o *)v15;
      }
    }
LABEL_40:
    sub_1C32E7C(Instance);
  }
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_40;
  v25 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(scriptJson->max_length);
    if ( (__int64)v25 >= (int)max_length_low )
      return (System_Collections_Generic_List_ServantVoiceData____o *)v15;
    if ( v25 >= max_length_low )
LABEL_43:
      sub_1C32E84(Instance);
    v27 = scriptJson->m_Items[v25];
    if ( v27 )
    {
      conds = v27->fields.conds;
      if ( conds )
      {
        v29 = 0;
        while ( 1 )
        {
          max_length = conds->max_length;
          if ( (int)v29 >= max_length )
            break;
          if ( (unsigned int)v29 >= max_length )
            goto LABEL_43;
          v31 = conds->m_Items[v29];
          if ( !v31 )
            goto LABEL_40;
          if ( v31->fields.condType == condType )
          {
            if ( condType != 3 && condType != 23 && condType != 9 )
              goto LABEL_46;
            if ( v31->fields.value == condValue )
            {
              infos = v27->fields.infos;
              if ( !infos )
                goto LABEL_40;
              if ( !LODWORD(infos->max_length) )
                goto LABEL_43;
              v33 = infos->m_Items[0];
              if ( !v33 || !MasterData_object )
                goto LABEL_40;
              Instance = (DataManager_o *)VoicePlayCondMaster__isVoicePlay(
                                            (VoicePlayCondMaster_o *)MasterData_object,
                                            this->fields.id,
                                            v33->fields.id,
                                            0,
                                            -1,
                                            genderType,
                                            0,
                                            0,
                                            0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
LABEL_46:
                if ( !v15 )
                  goto LABEL_40;
                p_obj = &v27->fields.infos->obj;
                v35 = v15->fields._items;
                v36 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
                ++v15->fields._version;
                if ( !v35 )
                  goto LABEL_40;
                v37 = v15->fields._size;
                if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v15,
                    p_obj,
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
                }
                else
                {
                  v38 = &v35->obj.klass + v37;
                  v15->fields._size = v37 + 1;
                  v38[4] = (Il2CppClass *)p_obj;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v38 + 4), (int32_t)p_obj, v17, v18);
                }
              }
            }
          }
          conds = v27->fields.conds;
          ++v29;
          if ( !conds )
            goto LABEL_40;
        }
        scriptJson = this->fields.scriptJson;
      }
    }
    ++v25;
    if ( !scriptJson )
      goto LABEL_40;
  }
}


System_Collections_Generic_List_ServantVoiceData____o *ServantVoiceEntity__getVoiceList_42697784(
        ServantVoiceEntity_o *this,
        int32_t type,
        System_String_o *labelName,
        System_Collections_Generic_List_CondType_Kind__o *disableCondTypeList,
        bool isCheckPlayCond,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v13; // x19
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct SvtVoiceInfo_array *scriptJson; // x8
  il2cpp_array_size_t v17; // x9
  SvtVoiceInfo_o *v18; // x8
  Il2CppObject *p_obj; // x1
  unsigned int v20; // w26
  _BOOL4 v21; // w24
  unsigned int max_length; // w9
  SvtVoiceInfo_o *v23; // x25
  struct ServantVoiceData_array *infos; // x9
  __int64 v25; // x27
  int v26; // w8
  ServantVoiceData_o *v27; // x28
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4C3846C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData____Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantVoiceData____TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_16128/*"_B050"*/);
    byte_4C3846C = 1;
  }
  if ( this->fields.type != type )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantVoiceData____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantVoiceData_____ctor__);
  if ( !labelName )
    goto LABEL_43;
  Instance = (Il2CppObject *)System_String__EndsWith(labelName, (System_String_o *)StringLiteral_16128/*"_B050"*/, 0);
  scriptJson = this->fields.scriptJson;
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !scriptJson )
      goto LABEL_43;
    v20 = 0;
    v21 = (unsigned int)(type - 1) < 2 && isCheckPlayCond;
    while ( 1 )
    {
      max_length = scriptJson->max_length;
      if ( (int)v20 >= (int)max_length )
        return (System_Collections_Generic_List_ServantVoiceData____o *)v13;
      if ( v20 >= max_length )
        goto LABEL_44;
      v23 = scriptJson->m_Items[v20];
      if ( !v23 )
        goto LABEL_43;
      infos = v23->fields.infos;
      if ( !infos )
        goto LABEL_34;
      v25 = 0;
      while ( 1 )
      {
        v26 = infos->max_length;
        if ( (int)v25 >= v26 )
          break;
        if ( (unsigned int)v25 >= v26 )
          goto LABEL_44;
        v27 = infos->m_Items[v25];
        if ( !v27 )
          goto LABEL_43;
        Instance = (Il2CppObject *)System_String__Equals_63553848(labelName, v27->fields.id, 0);
        if ( v21 )
        {
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_31;
          if ( !MasterData_object )
            goto LABEL_43;
          Instance = (Il2CppObject *)VoicePlayCondMaster__isVoicePlay(
                                       (VoicePlayCondMaster_o *)MasterData_object,
                                       this->fields.id,
                                       v27->fields.id,
                                       disableCondTypeList,
                                       -1,
                                       -1,
                                       0,
                                       0,
                                       0);
        }
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( v13 )
          {
            p_obj = &v23->fields.infos->obj;
LABEL_38:
            items = v13->fields._items;
            v29 = Method_System_Collections_Generic_List_ServantVoiceData____Add__;
            ++v13->fields._version;
            if ( items )
            {
              size = v13->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v13,
                  p_obj,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
              }
              else
              {
                v31 = &items->obj.klass + size;
                v13->fields._size = size + 1;
                v31[4] = (Il2CppClass *)p_obj;
                sub_1C32BC4((CGThumbnailListItem_o *)(v31 + 4), (int32_t)p_obj, v14, v15);
              }
              return (System_Collections_Generic_List_ServantVoiceData____o *)v13;
            }
          }
LABEL_43:
          sub_1C32E7C(Instance);
        }
LABEL_31:
        infos = v23->fields.infos;
        ++v25;
        if ( !infos )
          goto LABEL_43;
      }
      scriptJson = this->fields.scriptJson;
LABEL_34:
      ++v20;
      if ( !scriptJson )
        goto LABEL_43;
    }
  }
  if ( !scriptJson )
    goto LABEL_43;
  v17 = scriptJson->max_length;
  if ( !v17 )
    return (System_Collections_Generic_List_ServantVoiceData____o *)v13;
  if ( !(_DWORD)v17 )
LABEL_44:
    sub_1C32E84(Instance);
  v18 = scriptJson->m_Items[0];
  if ( !v18 )
    goto LABEL_43;
  p_obj = &v18->fields.infos->obj;
  if ( p_obj && p_obj[1].monitor )
  {
    if ( v13 )
      goto LABEL_38;
    goto LABEL_43;
  }
  return (System_Collections_Generic_List_ServantVoiceData____o *)v13;
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
  UserServantMaster_o *v11; // x22
  Il2CppObject *Entity; // x21
  UserServantEntity_array *v13; // x22
  int32_t FriendshipRank; // w0
  const MethodInfo *v15; // x2
  struct ServantVoiceCond_array *conds; // x25
  int max_length; // w8
  int32_t v18; // w24
  int v19; // w26
  bool v20; // w20
  ServantVoiceCond_o *v21; // x23
  int32_t value; // w23
  ServantVoiceEntity_o *v23; // x0
  UserGameEntity_o *v24; // x2
  const MethodInfo *v26; // [xsp+0h] [xbp-60h]

  if ( (byte_4C38479 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&VoiceCondType_TypeInfo);
    byte_4C38479 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (UserServantEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (UserServantEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame
    || (v11 = (UserServantMaster_o *)Instance) == 0
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   SelfUserGame->fields.favoriteUserSvtId,
                   (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
        Instance = UserServantMaster__getAllList(v11, 0),
        !Entity)
    || (v13 = Instance,
        FriendshipRank = UserServantEntity__getFriendshipRank((UserServantEntity_o *)Entity, 0),
        Instance = (UserServantEntity_array *)ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v15),
        !info)
    || (conds = info->fields.conds) == 0 )
  {
LABEL_22:
    sub_1C32E7C(Instance);
  }
  max_length = conds->max_length;
  if ( max_length < 1 )
    return 0;
  v18 = (int)Instance;
  v19 = 0;
  v20 = isBeforeFriendship;
  do
  {
    if ( v19 >= (unsigned int)max_length )
      sub_1C32E84(Instance);
    v21 = conds->m_Items[v19];
    if ( !v21 )
      goto LABEL_22;
    if ( v21->fields.condType == 23 )
    {
      value = v21->fields.value;
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
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
                                              v13,
                                              v18,
                                              (int32_t)v23,
                                              v20,
                                              v26);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        return 0;
    }
    max_length = conds->max_length;
    ++v19;
  }
  while ( v19 < max_length );
  return 1;
}


bool ServantVoiceEntity__isAvailableVoice(
        ServantVoiceEntity_o *this,
        SvtVoiceInfo_o *info,
        int64_t userSvtId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x2
  const MethodInfo *v9; // x3

  if ( (byte_4C38477 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C38477 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return ServantVoiceEntity__isAvailableVoice_42704372(this, info, (UserServantEntity_o *)Entity, v9);
}


bool ServantVoiceEntity__isAvailableVoice_42704372(
        ServantVoiceEntity_o *this,
        SvtVoiceInfo_o *info,
        UserServantEntity_o *userSvtEntity,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  UserServantEntity_array *AllList; // x20
  int32_t FriendshipRank; // w0
  const MethodInfo *v10; // x2
  struct ServantVoiceCond_array *conds; // x25
  int max_length; // w8
  int32_t v13; // w21
  unsigned int v14; // w26
  ServantVoiceCond_o *v15; // x23
  int32_t condType; // w22
  ServantVoiceEntity_o *v17; // x0
  UserGameEntity_o *v18; // x2
  int32_t value; // w23
  int32_t v20; // w2
  int32_t v21; // w0
  int32_t v22; // w1
  int32_t v23; // w23
  int32_t LimitCount; // w24
  const MethodInfo *v26; // [xsp+0h] [xbp-70h]

  if ( (byte_4C38478 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&VoiceCondType_TypeInfo);
    byte_4C38478 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_27;
  UserGameMaster__getSelfUserGame(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_28;
  AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0);
  FriendshipRank = UserServantEntity__getFriendshipRank(userSvtEntity, 0);
  Instance = (Il2CppObject *)ServantVoiceEntity__FriendShipRankWithVoice(this, FriendshipRank, v10);
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
  v13 = (int)Instance;
  v14 = 0;
  while ( 2 )
  {
    if ( v14 >= max_length )
      sub_1C32E84(Instance);
    v15 = conds->m_Items[v14];
    if ( !v15 )
LABEL_28:
      sub_1C32E7C(Instance);
    condType = v15->fields.condType;
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
        value = v15->fields.value;
        if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
        v20 = -1;
        v21 = condType;
        v22 = value;
        goto LABEL_18;
      default:
        if ( (unsigned int)(condType - 24) < 3 )
        {
          v23 = v15->fields.value;
          LimitCount = UserServantEntity__getLimitCount(userSvtEntity, 0);
          if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
          v21 = condType;
          v22 = v23;
          v20 = LimitCount;
LABEL_18:
          Instance = (Il2CppObject *)VoiceCondType__IsSatisfyCondition(v21, v22, v20, 0);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_27;
        }
        else
        {
          if ( (unsigned int)(condType - 41) <= 2 )
            goto LABEL_27;
LABEL_13:
          v17 = (ServantVoiceEntity_o *)UserServantEntity__getFriendshipRank(userSvtEntity, 0);
          Instance = (Il2CppObject *)ServantVoiceEntity__IsAvailableHomeAndGrowth(
                                       v17,
                                       v15,
                                       v18,
                                       userSvtEntity,
                                       AllList,
                                       v13,
                                       (int32_t)v17,
                                       0,
                                       v26);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            goto LABEL_27;
        }
LABEL_19:
        max_length = conds->max_length;
        if ( (int)++v14 < max_length )
          continue;
        LOBYTE(Instance) = 1;
        break;
    }
    return (char)Instance;
  }
}


bool ServantVoiceEntity__isEventEndState(
        ServantVoiceEntity_o *this,
        int32_t eventId,
        int64_t time,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C38480 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C38480 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_9;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               eventId,
                               (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (__int64)entity[6].klass <= time;
LABEL_9:
    sub_1C32E7C(Instance);
  }
  return 0;
}


bool ServantVoiceEntity__isQuestClearState(ServantVoiceEntity_o *this, int32_t questId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3847F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3847F = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
    sub_1C32E7C(Instance);
  }
  return 0;
}


ServantVoiceData_array *ServantVoiceEntity__lotteryLevelUpVoice(
        ServantVoiceEntity_o *this,
        int64_t userSvtId,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4C38474 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C38474 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return ServantVoiceEntity__lotteryLevelUpVoice_42702348(this, (UserServantEntity_o *)Entity, voiceId, v9);
}


ServantVoiceData_array *ServantVoiceEntity__lotteryLevelUpVoice_42702348(
        ServantVoiceEntity_o *this,
        UserServantEntity_o *userServantEntity,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_List_object__o *v9; // x20
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v11; // x29
  UserServantEntity_Fields *p_fields; // x27
  il2cpp_array_size_t max_length; // x9
  SvtVoiceInfo_o *v14; // x24
  struct ServantVoiceData_array *infos; // x8
  il2cpp_array_size_t v16; // x9
  ServantVoiceData_o *v17; // x8
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  ServantVoiceData_o *v24; // x8
  __int128 v25; // q1
  int32_t id; // w25
  System_String_o *v27; // x26
  const MethodInfo *v28; // x3
  struct ServantVoiceCond_array *conds; // x8
  WeightRate_int__o *v31; // x21
  int v32; // w23
  int32_t i; // w22
  int32_t Data; // w22
  __int64 v35; // x8
  __int64 v36; // x8
  int32_t v37; // w0
  unsigned int v38; // w29
  SvtVoiceInfo_o *v39; // x24
  struct ServantVoiceData_array *v40; // x8
  il2cpp_array_size_t v41; // x9
  ServantVoiceData_o *v42; // x8
  __int128 v43; // q1
  int32_t v44; // w25
  System_String_o *v45; // x26
  const MethodInfo *v46; // x3
  struct ServantVoiceCond_array *v47; // x8
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+50h] [xbp-80h]

  if ( (byte_4C38476 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&ServantVoiceData___TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_WeightRate_int___ctor__);
    sub_1C32C20(&Method_WeightRate_int__getData__);
    sub_1C32C20(&Method_WeightRate_int__getTotalWeight__);
    sub_1C32C20(&Method_WeightRate_int__setWeight__);
    sub_1C32C20(&WeightRate_int__TypeInfo);
    byte_4C38476 = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_78;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
  scriptJson = this->fields.scriptJson;
  if ( !scriptJson )
    goto LABEL_78;
  v11 = 0;
  p_fields = &userServantEntity->fields;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v11 >= (int)max_length )
      break;
    if ( (unsigned int)v11 >= (unsigned int)max_length )
      goto LABEL_79;
    v14 = scriptJson->m_Items[v11];
    if ( !v14 )
      goto LABEL_78;
    infos = v14->fields.infos;
    if ( infos )
    {
      v16 = infos->max_length;
      if ( v16 )
      {
        if ( voiceId )
        {
          if ( !(_DWORD)v16 )
            goto LABEL_79;
          v17 = infos->m_Items[0];
          if ( !v17 )
            goto LABEL_78;
          Instance = System_String__op_Equality(v17->fields.id, voiceId, 0);
          if ( (Instance & 1) != 0 )
            goto LABEL_17;
        }
        else
        {
          if ( !(_DWORD)v16 )
            goto LABEL_79;
          v24 = infos->m_Items[0];
          if ( !v24 )
            goto LABEL_78;
          v25 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
          id = this->fields.id;
          v27 = v24->fields.id;
          *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
          *(_OWORD *)&v56.fields.fakeValue = v25;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v55 = v56;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v55, 0);
          if ( !MasterData_object )
            goto LABEL_78;
          Instance = VoicePlayCondMaster__isVoicePlay(
                       (VoicePlayCondMaster_o *)MasterData_object,
                       id,
                       v27,
                       0,
                       Instance,
                       -1,
                       0,
                       0,
                       0);
          if ( (Instance & 1) != 0 )
          {
            conds = v14->fields.conds;
            if ( conds )
            {
              if ( conds->max_length )
              {
                Instance = ServantVoiceEntity__isAvailableVoice_42704372(this, v14, userServantEntity, v28);
                if ( (Instance & 1) != 0 )
                {
LABEL_17:
                  if ( !v9 )
                    goto LABEL_78;
                  items = v9->fields._items;
                  v21 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
                  ++v9->fields._version;
                  if ( !items )
                    goto LABEL_78;
                  size = v9->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v9,
                      (Il2CppObject *)v14,
                      *(const MethodInfo_37987BC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v23 = &items->obj.klass + size;
                    v9->fields._size = size + 1;
                    v23[4] = (Il2CppClass *)v14;
                    sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v14, v18, v19);
                  }
                }
              }
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v11;
    if ( !scriptJson )
      goto LABEL_78;
  }
  if ( !v9 )
    goto LABEL_78;
  if ( v9->fields._size )
    goto LABEL_37;
  if ( voiceId )
  {
    if ( (int)max_length >= 1 )
    {
      v38 = 0;
      while ( v38 < (unsigned int)max_length )
      {
        v39 = scriptJson->m_Items[v38];
        if ( !v39 )
          goto LABEL_78;
        v40 = v39->fields.infos;
        if ( v40 )
        {
          v41 = v40->max_length;
          if ( v41 )
          {
            if ( !(_DWORD)v41 )
              break;
            v42 = v40->m_Items[0];
            if ( !v42 )
              goto LABEL_78;
            v43 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
            v44 = this->fields.id;
            v45 = v42->fields.id;
            *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
            *(_OWORD *)&v56.fields.fakeValue = v43;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v54 = v56;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v54, 0);
            if ( !MasterData_object )
              goto LABEL_78;
            Instance = VoicePlayCondMaster__isVoicePlay(
                         (VoicePlayCondMaster_o *)MasterData_object,
                         v44,
                         v45,
                         0,
                         Instance,
                         -1,
                         0,
                         0,
                         0);
            if ( (Instance & 1) != 0 )
            {
              v47 = v39->fields.conds;
              if ( v47 )
              {
                if ( v47->max_length )
                {
                  Instance = ServantVoiceEntity__isAvailableVoice_42704372(this, v39, userServantEntity, v46);
                  if ( (Instance & 1) != 0 )
                  {
                    v50 = v9->fields._items;
                    v51 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
                    ++v9->fields._version;
                    if ( !v50 )
                      goto LABEL_78;
                    v52 = v9->fields._size;
                    if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v9,
                        (Il2CppObject *)v39,
                        *(const MethodInfo_37987BC **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v53 = &v50->obj.klass + v52;
                      v9->fields._size = v52 + 1;
                      v53[4] = (Il2CppClass *)v39;
                      sub_1C32BC4((CGThumbnailListItem_o *)(v53 + 4), (int32_t)v39, v48, v49);
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
        if ( (int)++v38 >= (int)max_length )
          goto LABEL_76;
      }
LABEL_79:
      sub_1C32E84(Instance);
    }
LABEL_76:
    if ( v9->fields._size )
    {
LABEL_37:
      v31 = (WeightRate_int__o *)sub_1C32E6C(WeightRate_int__TypeInfo);
      WeightRate_int____ctor(v31, (const MethodInfo_3B8A1D4 *)Method_WeightRate_int___ctor__);
      v32 = v9->fields._size;
      if ( v32 >= 1 )
      {
        if ( !v31 )
          goto LABEL_78;
        for ( i = 0; i != v32; ++i )
          WeightRate_int___setWeight(v31, 1, i, (const MethodInfo_3B896F0 *)Method_WeightRate_int__setWeight__);
      }
      Instance = System_String__IsNullOrEmpty(voiceId, 0);
      if ( (Instance & 1) != 0 || v9->fields._size < 1 )
      {
LABEL_50:
        if ( v31 )
        {
          v37 = UnityEngine_Random__Range_71183860(0, v31->fields.totalweight, 0);
          Data = WeightRate_int___getData(v31, v37, (const MethodInfo_3B89B64 *)Method_WeightRate_int__getData__);
LABEL_52:
          Instance = (int64_t)System_Collections_Generic_List_object___get_Item(
                                v9,
                                Data,
                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__);
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
                                v9,
                                Data,
                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_SvtVoiceInfo__get_Item__);
          if ( !Instance )
            break;
          v35 = *(_QWORD *)(Instance + 64);
          if ( !v35 )
            break;
          if ( !*(_DWORD *)(v35 + 24) )
            goto LABEL_79;
          v36 = *(_QWORD *)(v35 + 32);
          if ( !v36 )
            break;
          Instance = System_String__op_Equality(*(System_String_o **)(v36 + 16), voiceId, 0);
          if ( (Instance & 1) != 0 )
            goto LABEL_52;
          if ( ++Data >= v9->fields._size )
            goto LABEL_50;
        }
      }
LABEL_78:
      sub_1C32E7C(Instance);
    }
  }
  return (ServantVoiceData_array *)sub_1C32CC8(ServantVoiceData___TypeInfo, 0);
}


System_Collections_Generic_List_SvtVoiceInfo__o *ServantVoiceEntity__randomChangeSvtVoiceCount(
        ServantVoiceEntity_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *v7; // x21
  struct SvtVoiceInfo_array *scriptJson; // x8
  __int64 v9; // x26
  int max_length; // w9
  SvtVoiceInfo_o *v11; // x23
  struct ServantVoiceData_array *infos; // x8
  il2cpp_array_size_t v13; // x9
  ServantVoiceData_o *v14; // x8
  __int128 v15; // q1
  int32_t id; // w24
  System_String_o *v17; // x25
  const MethodInfo *v18; // x3
  struct ServantVoiceCond_array *conds; // x8
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+30h] [xbp-80h]

  if ( (byte_4C38475 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_SvtVoiceInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_SvtVoiceInfo__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C38475 = 1;
  }
  if ( !userServantEntity || this->fields.type != 2 )
    return 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___),
        v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SvtVoiceInfo__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v7,
          (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SvtVoiceInfo___ctor__),
        (scriptJson = this->fields.scriptJson) == 0) )
  {
LABEL_28:
    sub_1C32E7C(Instance);
  }
  v9 = 0;
  while ( 1 )
  {
    max_length = scriptJson->max_length;
    if ( (int)v9 >= max_length )
      return (System_Collections_Generic_List_SvtVoiceInfo__o *)v7;
    if ( (unsigned int)v9 >= max_length )
      goto LABEL_31;
    v11 = scriptJson->m_Items[v9];
    if ( !v11 )
      goto LABEL_28;
    infos = v11->fields.infos;
    if ( infos )
    {
      v13 = infos->max_length;
      if ( v13 )
      {
        if ( !(_DWORD)v13 )
LABEL_31:
          sub_1C32E84(Instance);
        v14 = infos->m_Items[0];
        if ( !v14 )
          goto LABEL_28;
        v15 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
        id = this->fields.id;
        v17 = v14->fields.id;
        *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v28.fields.fakeValue = v15;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v27 = v28;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v27, 0);
        if ( !MasterData_object )
          goto LABEL_28;
        Instance = VoicePlayCondMaster__isVoicePlay(
                     (VoicePlayCondMaster_o *)MasterData_object,
                     id,
                     v17,
                     0,
                     Instance,
                     -1,
                     0,
                     0,
                     0);
        if ( (Instance & 1) != 0 )
        {
          conds = v11->fields.conds;
          if ( conds )
          {
            if ( conds->max_length )
            {
              Instance = ServantVoiceEntity__isAvailableVoice_42704372(this, v11, userServantEntity, v18);
              if ( (Instance & 1) != 0 )
              {
                if ( !v7 )
                  goto LABEL_28;
                items = v7->fields._items;
                v23 = Method_System_Collections_Generic_List_SvtVoiceInfo__Add__;
                ++v7->fields._version;
                if ( !items )
                  goto LABEL_28;
                size = v7->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v7,
                    (Il2CppObject *)v11,
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
                }
                else
                {
                  v25 = &items->obj.klass + size;
                  v7->fields._size = size + 1;
                  v25[4] = (Il2CppClass *)v11;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v11, v20, v21);
                }
              }
            }
          }
        }
      }
    }
    scriptJson = this->fields.scriptJson;
    ++v9;
    if ( !scriptJson )
      goto LABEL_28;
  }
}